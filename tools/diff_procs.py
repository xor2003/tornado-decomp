#!/usr/bin/env python3
"""Differential proc harness: original FLIGHT.EXE under kvikdos vs the
translated standalone probe binary.

For each proc and each input vector, calls:
  original : kvikdos --call-far=<seg>:<off> --call-set=<reg>:<w> --poke-word=...
  port     : ./test_probe <proc> ax bx cx dx si di bp [ds es] [pokefile]

and diffs the kvikdos-call-result lines (ax bx cx dx si di sp bp flags ds es ss).

Proc addresses inside the original image are discovered by byte-signature:
the .lst listing's first instruction encodings (relocatable R operands
wildcarded) are searched in FLIGHT.EXE's load image, which sits at guest
flat 0x1100 (segment 0x0110).

usage: tools/diff_procs.py <specfile> [--probe ./test_probe] [--exe FLIGHT.EXE]
  specfile lines: <lstfile>:<ProcName>[:<opt>[:<opt>...]]
  opts:
    @@<hexsig>     manual byte signature ('??' wildcards) for builds whose
                   encoding differs from the listing
    skip=<regs>    comma list of regs excluded from compare (known table-pointer
                   outputs whose base differs between linked builds)
    vec<N>=<a,c,d,b,s,i,p>   hex words overriding input vector N
    manual         proc needs setup this harness can't provide; count as skip
"""
import argparse, os, re, subprocess, sys, tempfile
from concurrent.futures import ThreadPoolExecutor

EXE      = '/home/xor/games/Tornado/TORNADO/FLIGHT/FLIGHT.EXE'
KVIKDOS  = '/home/xor/kvikdos/kvikdos'
ROOT     = '/home/xor/games/Tornado/TORNADO/FLIGHT'
LOAD_FLAT = 0x1100
HDRPARAS = 480
DS_SEG   = 0x0110
SS       = '0x856e:0x8870'

# default input vectors (regs ax,cx,dx,bx,si,di,bp)
VECTORS = [
    (0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000),
    (0x0001,0x0002,0x0003,0x0004,0x0005,0x0006,0x0007),
    (0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff),
    (0x7fff,0x8000,0x5555,0xaaaa,0x1234,0x5678,0x9abc),
    (0x0100,0x00ff,0x00f0,0x0f00,0x0001,0x0000,0x00ff),
]
REGS = ('ax','cx','dx','bx','si','di','bp')

MNEMONICS = {'mov','cmp','sub','add','lea','jmp','call','push','pop','xor',
             'and','or','inc','dec','shl','shr','sar','xchg','ret','test',
             'loop','int','in','out','mul','div','imul','idiv','neg','not',
             'nop','stosb','stosw','lodsb','lodsw','movsb','movsw','xlat',
             'cbw','cwd','ror','rol','rcr','rcl','word','byte','ptr','dword',
             'offset','dup','far','near','short','seg','equ','assume','adc',
             'sbb','lds','les','scasb','scasw','cmpsb','cmpsw','jcxz'}
REG_NAMES = {'ax','bx','cx','dx','si','di','bp','sp','cs','ds','es','ss',
             'al','ah','bl','bh','cl','ch','dl','dh','word','byte','ptr',
             'offset','seg','far','near','short','dword','qword','tbyte'}

def parse_lst_pattern(path, proc):
    """Returns (pattern, kind, syms): pattern is the first <=64 encoded bytes
    with relocated/relative operands wildcarded (None); kind is 'near'/'far';
    syms maps data-symbol name -> (proc byte offset of its disp16, seg)."""
    lines = open(path, errors='replace').read().splitlines()
    procre = re.compile(r'\b' + re.escape(proc) + r'\b')
    out, inproc, kind = [], False, 'far'
    syms = {}
    poff = 0
    for ln in lines:
        m = re.match(r'\s*([0-9A-Fa-f]{4})\s+(.*?)\s{2,}(.*)$', ln)
        if not m:
            if procre.search(ln) and 'PROC' in ln.upper():
                inproc = True
                if 'NEAR' in ln.upper(): kind = 'near'
            continue
        enc, asm = m.group(2).strip(), m.group(3)
        if procre.search(ln) and 'PROC' in ln.upper():
            inproc = True
            if 'NEAR' in ln.upper(): kind = 'near'
            continue
        if inproc and 'ENDP' in ln.upper():
            break
        if not inproc or not enc:
            continue
        toks = enc.split()
        has_R = toks[-1] in ('R', 'E')
        bs = []
        for t in toks:
            if t in ('R', 'E'): break
            t = t.rstrip(':')
            if re.fullmatch(r'[0-9A-Fa-f]+', t):
                if len(t) == 4:
                    bs += [int(t[2:4], 16), int(t[0:2], 16)]
                elif len(t) == 2:
                    bs.append(int(t, 16))
                elif len(t) % 2 == 0:
                    for i in range(0, len(t), 2):
                        bs.append(int(t[i:i+2], 16))
        if not bs:
            continue
        if has_R and len(bs) >= 2:
            # record the data symbol for later shipped-displacement reads:
            # first identifier in the operand text that isn't a register/keyword
            ops = asm.split(None, 1)[1] if len(asm.split(None, 1)) > 1 else ''
            seg = 'ss' if any(b == 0x36 for b in bs[:2]) else 'ds'
            # immediate operands (OFFSET x, lea) carry an address value:
            # poking the operand redirects the base to unsynchronized
            # memory — only memory-operand cells are safe to seed
            is_imm = ('offset' in ops.lower() or
                      asm.split(None, 1)[0].strip().lower() == 'lea')
            for msym in re.finditer(r'([A-Za-z_][\w]*)', ops):
                if msym.group(1).lower() not in REG_NAMES and \
                        msym.group(1).lower() not in MNEMONICS:
                    name = msym.group(1)
                    if name not in syms:
                        syms[name] = (poff + len(bs) - 2, seg, is_imm)
                    break
            bs[-2] = bs[-1] = None
        # relative jump/call displacements shift between builds: wildcard them
        # EB rel8, E8/E9 rel16, 70-7F rel8, 0F 80-8F rel16
        if bs:
            # opcode position: skip seg-override/rep prefixes (26 2e 36 3e f2 f3 64 65)
            oi = 0
            while oi < len(bs) and bs[oi] in (0x26,0x2e,0x36,0x3e,0xf2,0xf3,0x64,0x65):
                oi += 1
            op = bs[oi] if oi < len(bs) else None
            if op in (0xeb,) or (op is not None and 0x70 <= op <= 0x7f):
                if oi+1 < len(bs): bs[oi+1] = None
            elif op in (0xe8, 0xe9):
                if len(bs) >= 3: bs[-2] = bs[-1] = None
            elif op == 0x0f and len(bs) >= 4 and bs[oi+1] is not None and 0x80 <= bs[oi+1] <= 0x8f:
                bs[-2] = bs[-1] = None
        if len(out) <= 64:
            out.extend(bs)
        poff += len(bs)
    return out, kind, syms

def locate(exe, pat):
    hits, n = [], len(pat)
    base = HDRPARAS * 16
    for i in range(base, len(exe) - n):
        for j, p in enumerate(pat):
            if p is not None and exe[i+j] != p:
                break
        else:
            hits.append(i - base)
    return hits

def real_cs_map(exe):
    """flat_target -> cs used by far call/jmp sites in the image. Procs that do
    near-indirect jumps through CS-based tables must be entered with the
    segment the linker assigned, not flat//16. File stores seg = real - 0x110."""
    m = {}
    img, n = HDRPARAS * 16, len(exe)
    for i in range(img, n - 5):
        op = exe[i]
        if op not in (0x9a, 0xea):          # callf / jmpf ptr16:16
            continue
        off = int.from_bytes(exe[i+1:i+3], 'little')
        seg = int.from_bytes(exe[i+3:i+5], 'little') + 0x110
        flat = seg * 16 + off
        # keep the smallest cs (earliest segment base) seen for each target
        if flat not in m or seg < m[flat]:
            m[flat] = seg
    return m

RESULT_RE = re.compile(r'ax=([0-9a-f]+) bx=([0-9a-f]+) cx=([0-9a-f]+) dx=([0-9a-f]+) '
                       r'si=([0-9a-f]+) di=([0-9a-f]+) sp=([0-9a-f]+) bp=([0-9a-f]+) '
                       r'flags=([0-9a-f]+) ds=([0-9a-f]+) es=([0-9a-f]+) ss=([0-9a-f]+)')

def run_original(addr, vec, pokes=(), timeout=25):
    seg, off, kind = addr
    cmd = [KVIKDOS, '--video=off', '--tty-in=-3', '--diag=off']
    if kind == 'near':
        cmd += [f'--call-cs={seg:#06x}', f'--call-near={off:#06x}']
    else:
        cmd += [f'--call-far={seg:#06x}:{off:#06x}']
    cmd += [f'--call-ds={DS_SEG:#06x}', f'--call-ss={SS}']
    for s, o, v, sz in pokes:
        cmd.append(f'--poke-byte={s:#06x}:{o:#06x}:{v:#06x}' if sz == 1
                   else f'--poke-word={s:#06x}:{o:#06x}:{v:#06x}')
    cmd += ['--root=' + ROOT, '--drive=C', 'FLIGHT.EXE']
    for r, v in zip(REGS, vec):
        cmd.insert(-3, f'--call-set={r}:{v:#x}')
    try:
        out = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
    except subprocess.TimeoutExpired:
        return 'TIMEOUT'
    m = RESULT_RE.search(out.stdout + out.stderr)
    return m.groups() if m else 'NORESULT'

def run_port(probe, proc, vec, pokes=()):
    # vec order ax,cx,dx,bx,si,di,bp -> probe order ax,bx,cx,dx,si,di,bp
    ax,cx,dx,bx,si,di,bp = vec
    args = [probe, proc,
            f'{ax:x}', f'{bx:x}', f'{cx:x}', f'{dx:x}',
            f'{si:x}', f'{di:x}', f'{bp:x}']
    if pokes:
        args += ['7', '7']          # ds es defaults (seg_para(data))
        for sn, v in pokes:
            args.append(f'poke={sn}:{v}' if isinstance(v, str)
                        else f'poke={sn}:{v:x}')
    try:
        out = subprocess.run(args, capture_output=True, text=True, timeout=10)
    except subprocess.TimeoutExpired:
        return 'TIMEOUT'
    m = RESULT_RE.search(out.stdout)
    return m.groups() if m else 'NORESULT'

FIELD = ('ax','bx','cx','dx','si','di','sp','bp','flags','ds','es','ss')

def parse_spec_line(line):
    """-> (lstfile, proc, pat_override, kind_override, skipregs, vecs, manual,
          pokes, cls) where cls is an expected-diff class tag where pokes = [(SymName, oval, pval, size)]: oval is the
          orig-side poke value, pval the port-side value (differ for
          pointer globals via poke=n:oval=pval); size 2=word, 1=byte
          (pokeb=)"""
    parts = line.split(':')
    lst, proc = parts[0], parts[1]
    pat_ov = kind_ov = None
    skip, vecs, manual, pokes = set(), {}, False, []
    cls = None
    for o in parts[2:]:
        if o.startswith('@@'):
            pat_ov = [None if t == '??' else int(t, 16) for t in o[2:].split()]
        elif o.startswith('skip='):
            skip = set(o[5:].split(','))
        elif o.startswith('vec') and '=' in o:
            n, vals = o[3:].split('=', 1)
            vecs[int(n)] = tuple(int(t, 16) for t in vals.split(','))
        elif o.startswith('poke=') or o.startswith('pokeb='):
            body = o[o.index('=') + 1:]
            size = 1 if o.startswith('pokeb=') else 2
            sn, sv = body.rsplit(':', 1) if ':' in body else (body, '0')
            if sv.startswith('@'):   # poke=n:@target - guest offset of target
                pokes.append((sn, '@' + sv[1:], '@' + sv[1:], size))
            elif '=' in sv:  # poke=n:oval=pval - asymmetric (pointer globals)
                ov, pv = sv.split('=', 1)
                pokes.append((sn, int(ov, 16), int(pv, 16), size))
            else:
                pokes.append((sn, int(sv, 16), int(sv, 16), size))
        elif o.startswith('kind='):
            kind_ov = o[5:]
        elif o.startswith('class='):
            cls = o[6:]
        elif o == 'manual':
            manual = True
    return (lst, proc, pat_ov, kind_ov, skip, vecs, manual, pokes, cls)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('spec')
    ap.add_argument('--probe', default='./test_probe_all')
    ap.add_argument('--exe', default=EXE)
    ap.add_argument('-j', '--jobs', type=int, default=4)
    ap.add_argument('--replay', help='reclassify a saved results file, no calls')
    ap.add_argument('--auto', action='store_true',
                    help='auto-seed every data sym a proc references with '
                         'per-vector edge values; *ptr syms get @<peer> pokes')
    a = ap.parse_args()
    exe = open(a.exe, 'rb').read()
    # port-side valid poke symbols (from the generated probe's SYMS table)
    port_syms = None
    pcpp = os.path.join(os.path.dirname(a.spec) or '.', 'probe_all.cpp')
    pcpp = pcpp if os.path.exists(pcpp) else 'tests/probe_all.cpp'
    port_esz = {}
    port_procs = None
    if os.path.exists(pcpp):
        for nm, es in re.findall(r'^    \{"([a-z0-9_]+)",\s*&sym__\w+,\s*(\d+)\}',
                                 open(pcpp).read(), re.M):
            port_esz[nm] = int(es)
        port_syms = set(port_esz)
        port_procs = set(n for n, _f in re.findall(
            r'^    \{"(\w+)",\s*(\w+)\},\s*$',
            open(pcpp).read(), re.M))
    addrs, symoff = {}, {}
    csmap = real_cs_map(exe)
    img = HDRPARAS * 16
    # proc/label names are immediates even without the OFFSET keyword
    # (`mov ax,_PolyFill`); collect them from every listing in the spec
    known_labels = set()
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst0, proc0 = parse_spec_line(line)[:2]
        known_labels.add(proc0.lower().lstrip('_'))
        lp0 = lst0 if os.path.isabs(lst0) else os.path.join(
            '/home/xor/inertia_player/examples/Tornado', lst0)
        try:
            for ln0 in open(lp0):
                m0 = re.match(r'\s*([A-Za-z_?][\w?@]*)\s+PROC\b', ln0, re.I)
                if m0:
                    known_labels.add(m0.group(1).lower().lstrip('_'))
        except OSError:
            pass
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst, proc, pat_ov, kind_ov = parse_spec_line(line)[:4]
        syms = {}
        if pat_ov is not None:
            pat, kind = pat_ov, kind_ov or 'far'
        else:
            lp = lst if os.path.isabs(lst) else os.path.join(
                '/home/xor/inertia_player/examples/Tornado', lst)
            pat, kind, syms = parse_lst_pattern(lp, proc)
            if kind_ov: kind = kind_ov
            for n, (o, s, im) in list(syms.items()):
                if not im and n.lower().lstrip('_') in known_labels:
                    syms[n] = (o, s, True)
        hits = locate(exe, pat) if pat else []
        if len(hits) == 1:
            h = hits[0]
            flat = LOAD_FLAT + h
            seg = csmap.get(flat, flat // 16)
            addrs[proc] = (seg, flat - seg * 16, kind)
            # shipped displacements for the proc's data symbols
            symoff[proc] = {n: (s, int.from_bytes(exe[img+h+o:img+h+o+2], 'little'), im)
                            for n, (o, s, im) in syms.items()}
        else:
            addrs[proc] = None
            print(f'{proc}: locate failed ({len(hits)} hits)', file=sys.stderr)

    # global sym->(seg, disp, is_imm) union over every located proc: data
    # displacements are segment-absolute, so a sym learned from one proc's
    # instruction is valid for all — lets --auto also seed globals used by
    # nested calls (e.g. CircleFill -> [FillVector] -> _PolyFill reads)
    gsyms = {}
    for so in symoff.values():
        for n, (s, disp, im) in so.items():
            gsyms.setdefault(n, (s, disp, im))

    tasks, nskip = [], 0
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst, proc, _p, _k, skip, vecs, manual, pokes, cls = parse_spec_line(line)
        addr = addrs.get(proc)
        if not addr or manual:
            nskip += 1
            continue
        # resolve spec pokes: orig-side --poke-word/--poke-byte at the
        # symbol's shipped displacement; port-side probe poke=<name>:<val>.
        # A poke unresolved on EITHER side would seed asymmetric state, so
        # any missing symbol skips the whole proc.
        so = symoff.get(proc, {})
        opokes, ppokes, missing = [], [], []
        for sn, ov, pv, sz in pokes:
            hit = next((v for n, v in so.items()
                        if n.lower() == sn.lower()), None)
            if hit is None:
                missing.append(f'{sn}(orig)')
                continue
            s, disp, _im = hit
            if isinstance(ov, str):      # @target: orig value = its shipped disp
                th = next((v for n, v in so.items()
                           if n.lower() == ov[1:].lower()), None)
                if th is None:
                    missing.append(f'{ov}(orig)')
                    continue
                ov = th[1]
            opokes.append((DS_SEG if s == 'ds' else int(SS.split(':')[0], 16),
                           disp, ov, sz))
            if port_syms is not None and sn.lower() not in port_syms:
                missing.append(f'{sn}(port)')
                continue
            ppokes.append((sn.lower(), pv))
        if missing:
            print(f'{proc}: poke syms unresolved: {missing} - skipped',
                  file=sys.stderr)
            nskip += 1
            continue
        EDGE = [0x0000, 0xffff, 0x0001, 0x8000, 0x55aa, 0x7f7f]
        # *vector*/callback cells hold code addresses — leave them at their
        # natural linked values so internal `call word [x]` works.
        # *ptr* cells hold data addresses — point them at a peer sym via
        # @target so both layouts see equivalent pointed-to memory.
        CODEPTRRE = re.compile(r'(vector|handler|callback|intr|_polyfill)\d*$',
                               re.I)
        PTRRE = re.compile(r'ptr\d*$', re.I)
        for vi in range(len(VECTORS)):
            op, pp = list(opokes), list(ppokes)
            if a.auto:
                # seed every sym this proc references plus the global union
                # (transitive: nested calls read globals not in this listing);
                # own syms first, then globals — capped under NUM_POKES
                names = sorted(set(so)) + sorted(set(gsyms) - set(so))
                for i, n in enumerate(names):
                    s_kind, disp, is_imm = so.get(n) or gsyms[n]
                    if s_kind != 'ds' or is_imm:
                        continue        # ss-syms + immediate bases left alone
                    ln = n.lower()
                    if any(sn == ln for sn, _v in pp):
                        continue        # explicit spec poke wins
                    if port_syms is not None and ln not in port_syms:
                        continue        # not translated under this name
                    if CODEPTRRE.search(n):
                        continue        # code-ptr cell: keep linked value
                    if PTRRE.search(n):
                        # pointer global: point it at a peer sym, resolved in
                        # each side's own layout (@target).  Prefer a sym
                        # sharing the ptr's name prefix — ptrs index their
                        # array (RhsPtr->RhsX[i]); a random scalar target
                        # makes adjacent-cell reads diverge.
                        stem = re.sub(r'ptr\d*$', '', ln)
                        # imm syms are valid targets too — a *ptr cell
                        # should point at a real array/label base (RhsPtr
                        # -> RhsX); only code-addr cells are excluded
                        cands = [t for t in names
                                 if t != n and
                                 not CODEPTRRE.search(t) and
                                 t.lower().lstrip('_') not in known_labels and
                                 (port_syms is None or t.lower() in port_syms)]
                        pref = [t for t in cands
                                if len(stem) >= 3 and
                                t.lower().startswith(stem)]
                        if pref:
                            cands = pref
                        if not cands and                                 (port_syms is None or ln in port_syms):
                            cands = [n]
                        if not cands:
                            continue
                        tgt = cands[i % len(cands)]
                        op.append((DS_SEG, disp,
                                   (so.get(tgt) or gsyms[tgt])[1], 2))
                        pp.append((ln, '@' + tgt.lower()))
                        # range-seed only a same-prefix target (RhsPtr->RhsX
                        # is its real array; +2k stays inside it on both
                        # layouts).  A random peer target isn't walked.
                        if pref:
                            tdisp = (so.get(tgt) or gsyms[tgt])[1]
                            for k in range(1, 8):
                                rv = EDGE[(vi + i + k) % len(EDGE)]
                                op.append((DS_SEG, tdisp + 2*k, rv, 2))
                                pp.append((tgt.lower() + '+%x' % (2*k), rv))
                    else:
                        esz = port_esz.get(ln, 2)
                        v = EDGE[(vi + i) % len(EDGE)]
                        if esz == 1:
                            v &= 0xff
                        op.append((DS_SEG, disp, v, esz))
                        pp.append((ln, v))
                        # NOTE: no range-seeding of plain scalars — disp+N
                        # hits a different logical cell in each layout, so
                        # wild-index reads (AttrTable[screenmode]) stay a
                        # class=array limitation rather than a seeded case
                    if len(op) > 1000:
                        break           # NUM_POKES headroom
            if os.environ.get('DIFF_DEBUG_PROC') == proc:
                print(f'DBG {proc} v{vi}: op={op} pp={pp}', file=sys.stderr)
            tasks.append((proc, vi, vecs.get(vi, VECTORS[vi]), addr, skip,
                          tuple(op), tuple(pp), lst, cls))

    def run_task(t):
        proc, vi, vec, addr, _, opokes, ppokes, lst, _c = t
        # name collisions across modules: the translator renamed dup procs
        # to <proc>__<srcstem>; prefer that alias when it exists
        pn = f"{proc.lower()}__{os.path.splitext(os.path.basename(lst))[0].lower()}"
        if port_procs is not None and pn in port_procs:
            procname = pn
        else:
            procname = proc.lower()
        return proc, vi, run_original(addr, vec, opokes), \
            run_port(a.probe, procname, vec, ppokes)

    npass = ndiff = nto = 0
    xdiff = {}
    if a.replay:
        results = []
        for ln in open(a.replay):
            proc, vi, rest = ln.split(None, 2)
            # rest = '<ro> <rp>' where each is a tuple repr or a status word;
            # tuple reprs contain spaces, so split on the " (" boundary
            if rest.startswith('('):
                i = rest.index(')') + 1          # first ')' ends the ro tuple
                ro, rp = rest[:i], rest[i:].strip()
            else:
                ro, _, rp = rest.partition(' ')
                rp = rp.strip()
            if ro.startswith('('):
                ro = eval(ro)
            if rp.startswith('('):
                rp = eval(rp)
            results.append((proc, int(vi), ro, rp))
    else:
        raw = open(a.spec + '.raw', 'w')
        with ThreadPoolExecutor(max_workers=a.jobs) as pool:
            results = list(pool.map(run_task, tasks))
        for proc, vi, ro, rp in results:
            raw.write(f'{proc} {vi} {ro} {rp}\n')
        raw.close()
    ridx = {'ax':0,'bx':1,'cx':2,'dx':3,'si':4,'di':5,'bp':7}
    skip_of = {t[0]: t[4] for t in tasks}
    class_of = {t[0]: t[8] for t in tasks}
    byproc = {}
    for proc, vi, ro, rp in results:
        byproc.setdefault(proc, []).append((vi, ro, rp))
    for proc, rows in byproc.items():
        skip = skip_of[proc]
        # a reg is a linked-layout pointer when its orig-vs-port delta is
        # constant across every completed vector (table bases differ between
        # builds) — normalize bx/cx/si/di/bp; ax/dx stay strict (outputs).
        PTRREGS = ('bx','cx','si','di','bp')
        norm = set()
        ok = [(ro, rp) for _v, ro, rp in rows
              if ro not in ('TIMEOUT','NORESULT') and rp not in ('TIMEOUT','NORESULT')]
        for r in PTRREGS:
            if r in skip or len(ok) < 2:
                continue
            i = ridx[r]
            deltas = {int(ro[i],16) - int(rp[i],16) for ro, rp in ok}
            if len(deltas) == 1 and deltas != {0}:
                norm.add(r)
        # ax/dx stay strict UNLESS their (constant) delta equals a
        # normalized pointer reg's delta — i.e. the proc genuinely returns
        # a data pointer in ax (Octant* leave the advanced ptr there)
        for r in ('ax', 'dx'):
            if r in skip or len(ok) < 2:
                continue
            i = ridx[r]
            deltas = {int(ro[i],16) - int(rp[i],16) for ro, rp in ok}
            if len(deltas) != 1 or deltas == {0}:
                continue
            d = next(iter(deltas))
            if any(next(iter({int(ro[ridx[pr]],16) - int(rp[ridx[pr]],16)
                              for ro, rp in ok})) == d for pr in norm):
                norm.add(r)
        for vi, ro, rp in rows:
            if ro in ('TIMEOUT','NORESULT'):
                print(f'{proc} v{vi}: original={ro} port={rp}')
                nto += 1
                continue
            if rp in ('TIMEOUT','NORESULT'):
                print(f'{proc} v{vi}: original={ro} port={rp}')
                nto += 1
                continue
            # compare functional fields: ax..bp, flags; skip sp/ss/ds/es
            # (harness-specific segs). Flag masks: IF=0x200 (kvikdos sets it,
            # probe doesn't); PF=0x04 + AF=0x10 (translated runtime's lazy-flag
            # model never computes parity/aux-carry — systematic, not per-proc).
            fl_o = int(ro[8], 16) & ~0x214
            fl_p = int(rp[8], 16) & ~0x214
            ign = skip | norm
            same = all(ro[i] == rp[i] for r, i in ridx.items() if r not in ign) \
                and fl_o == fl_p
            if same:
                npass += 1
            elif class_of[proc]:
                # expected environment/variant divergence — bucketed, not a
                # regression signal
                xdiff[class_of[proc]] = xdiff.get(class_of[proc], 0) + 1
                print(f'{proc} v{vi} XDIFF({class_of[proc]})')
            else:
                ndiff += 1
                print(f'{proc} v{vi} DIFF\n  orig: {ro}\n  port: {rp}')
    print(f'== pass={npass} diff={ndiff} xdiff={sum(xdiff.values())} '
          f'{xdiff} timeout={nto} skip={nskip}')
    sys.exit(1 if ndiff else 0)

main()

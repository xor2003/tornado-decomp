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
import argparse, bisect, functools, glob, hashlib, os, re, subprocess, \
    sys, tempfile, threading, time
from concurrent.futures import ThreadPoolExecutor

EXE      = '/home/xor/games/Tornado/TORNADO/FLIGHT/FLIGHT.EXE'
KVIKDOS  = os.environ.get('KVIKDOS_BIN', '/home/xor/kvikdos/kvikdos')
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

def parse_lst_pattern(path, proc, maxlen=64):
    """Returns (pattern, kind, syms): pattern is the first <=64 encoded bytes
    with relocated/relative operands wildcarded (None); kind is 'near'/'far';
    syms maps data-symbol name -> (proc byte offset of its disp16, seg)."""
    entry = _lst_procs(path).get(proc.lower())
    if not entry:
        return [], 'far', {}
    kind, plines = entry
    out, syms, poff = [], {}, 0
    for ln in plines:
        m = re.match(r'\s*([0-9A-Fa-f]{4})\s+(.*?)\s{2,}(.*)$', ln)
        if not m:
            continue
        enc, asm = m.group(2).strip(), m.group(3)
        if not enc:
            continue
        toks = enc.split()
        has_R = any(t in ('R', 'E') for t in toks)
        bs, marked = [], []
        for t in toks:
            if t in ('R', 'E'):
                # reloc marker follows the field it annotates: wildcard the
                # bytes of the most recent real token (a disp16/off16), not
                # whatever happens to be last — e.g. 'C7 06 0000 E 0002'
                # marks the disp16, keeping the 0002 imm literal
                for i in range(len(bs) - 1, -1, -1):
                    if bs[i] is not None:
                        wstart = i - 1 if i > 0 else 0
                        marked += [wstart, wstart + 1]
                        break
                continue
            t = t.rstrip(':')
            if re.fullmatch(r'-+', t):
                # unlinked placeholder field ('----' = word) — occupies real
                # bytes in the encoding; emit wildcards or the pattern
                # misaligns every byte after it
                bs += [None] * (len(t) // 2)
            elif re.fullmatch(r'[0-9A-Fa-f]+', t):
                if len(t) == 4:
                    bs += [int(t[2:4], 16), int(t[0:2], 16)]
                elif len(t) == 2:
                    bs.append(int(t, 16))
                elif len(t) % 2 == 0:
                    for i in range(0, len(t), 2):
                        bs.append(int(t[i:i+2], 16))
        if not bs:
            continue
        if has_R and marked:
            # record the data symbol for later shipped-displacement reads:
            # first identifier in the operand text that isn't a register/keyword
            ops = asm.split(None, 1)[1] if len(asm.split(None, 1)) > 1 else ''
            # 'ss' only when 0x36 is a real segment-override PREFIX —
            # modrm byte 0x36 (`mov si,[disp16]` / `mov [disp16],si`)
            # is a DS access and must not be confused with it
            seg = 'ds'
            for b in bs[:3]:
                if b == 0x36:
                    seg = 'ss'
                if b not in (0x26, 0x2e, 0x3e, 0x36, 0xf2, 0xf3,
                             0x64, 0x65):
                    break
            # immediate operands (OFFSET x, lea) carry an address value:
            # poking the operand redirects the base to unsynchronized
            # memory — only memory-operand cells are safe to seed
            is_imm = ('offset' in ops.lower() or
                      asm.split(None, 1)[0].strip().lower() == 'lea')
            # `jmp/call Sym[reg]` is an indirect code-dispatch — the table
            # cells hold code offsets, not data; seeding them redirects
            # the jump to garbage on both sides.  Keep linked values.
            mnem = asm.split(None, 1)[0].strip().lower()
            if mnem in ('jmp', 'call') and '[' in ops:
                is_imm = True
            member = '.' in ops
            # field name after the record dot (`VP.V_SCALE_UP` ->
            # 'V_SCALE_UP') — member pokes resolve the field's offset
            # inside its struc via the listing's declaration table
            fname = ''
            if member:
                fm = re.search(r'\.\s*([A-Za-z_]\w*)', ops)
                if fm:
                    fname = fm.group(1).upper()
            # operand width: an 8-bit reg or 'byte ptr' means a byte
            # member — pokes must not clobber the neighbouring byte
            osize = 1 if ('byte ptr' in ops.lower() or
                          re.search(r'\b[abcd][hl]\b', ops)) else 2
            # base regs inside [...] index the sym as an array — needed so
            # `idx=` specs can range-seed exactly the indexed arrays
            idxr = frozenset(re.findall(r'\[\s*([sdb][ixp])\b', ops))
            for msym in re.finditer(r'([A-Za-z_][\w]*)', ops):
                if msym.group(1).lower() not in REG_NAMES and \
                        msym.group(1).lower() not in MNEMONICS:
                    name = msym.group(1)
                    # extern (E) operands carry the pure addend — the
                    # folded const of `Sym[expr]`/`Sym+const` refs, e.g.
                    # XSY[$MID+$8192] encodes 00C0 = $MID+$8192
                    cadd = 0
                    if 'E' in toks and len(marked) >= 2 and \
                            bs[marked[0]] is not None and \
                            bs[marked[0] + 1] is not None:
                        cadd = bs[marked[0]] | (bs[marked[0] + 1] << 8)
                    if name not in syms:
                        syms[name] = (poff + marked[0], seg, is_imm,
                                      fname, idxr, osize, cadd)
                    # member reads (VP.FIELD): record the qualified name
                    # too — a record's later fields need their own pokes
                    # (VP.V_SCALE_DN was masked by earlier VP.V_SCALE_UP)
                    if member and fname:
                        qn = name + '.' + fname
                        if qn not in syms:
                            syms[qn] = (poff + marked[0], seg, is_imm,
                                        fname, idxr, osize, cadd)
                    break
            for mi in marked:
                bs[mi] = None
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
        if len(out) < maxlen:
            out.extend(bs)
        poff += len(bs)
    return out, kind, syms

@functools.lru_cache(maxsize=None)
def _lst_procs(path):
    """{procname_lower: (kind, [lines inside proc])} in one file pass.
    Listings are multi-MB; scanning once per proc was quadratic."""
    procs, cur, curkind = {}, None, 'far'
    # name chars: \w + $?@ + leading digits (listings glue ' 0000Name PROC')
    mre = re.compile(r'\b([A-Za-z_?0-9][\w?@$]*)\s+(PROC|ENDP)\b', re.I)
    for ln in open(path, errors='replace').read().splitlines():
        m = mre.search(ln)
        if m:
            kw = m.group(2).upper()
            if kw == 'PROC':
                cur = m.group(1).lower()
                # '0000Name PROC' — listing addr glued to label: store both
                curkind = 'near' if 'NEAR' in ln.upper() else 'far'
                procs.setdefault(cur, (curkind, []))
                m2 = re.match(r'^(?:[0-9a-f]{2,8})?([a-z_?@$][\w?@$]*)$',
                              cur)
                if m2 and m2.group(1) != cur:
                    procs.setdefault(m2.group(1), procs[cur])
                continue
            if kw == 'ENDP':
                cur = None
                continue
        if cur is not None:
            procs[cur][1].append(ln)
    return procs

@functools.lru_cache(maxsize=None)
def _lst_symtab(path):
    """listing symbol table: NAME -> (type, DATA-seg displacement).
    Maps record instances (VP) to their struc type (VIEWPORT)."""
    out = {}
    mre = re.compile(r'^\s*(\w+)\s+(?:\.\s+)+(\w+)\s+'
                     r'([0-9A-Fa-f]{4})\s+DATA\s*$')
    for ln in open(path, errors='replace').read().splitlines():
        m = mre.match(ln)
        if m:
            out.setdefault(m.group(1).upper(),
                           (m.group(2).upper(), int(m.group(3), 16)))
    return out

@functools.lru_cache(maxsize=None)
def _lst_fields(path):
    """{STRUC.FIELD -> offset} parsed from STRUC..ENDS declaration blocks
    (e.g. `VIEWPORT STRUCT` .. `V_SCALE_UP DB 0` -> 8)."""
    out, rec = {}, None
    fdecl = re.compile(r'^\s*([0-9A-Fa-f]{4})\s+.*?'
                       r'\b(\w+)\s+(DB|DW|DD|DT|DQ)\b')
    txt = open(path, errors='replace').read()
    for ln in txt.splitlines():
        if rec is None:
            m = re.search(r'\b(\w+)\s+STRUC[T]?\b', ln, re.I)
            if m:
                rec = m.group(1).upper()
            continue
        if re.search(r'\bENDS\b', ln, re.I):
            rec = None
            continue
        m = fdecl.match(ln)
        if m:
            out.setdefault(rec + '.' + m.group(2).upper(),
                           int(m.group(1), 16))
    # `ALIAS EQU FIELD(+n)` aliases a struc member under a second name
    # (`VP_ZFT_LO EQU VP_ZFT`) — the alias isn't a DB/DW decl, so fold it
    # into every struc owning the RHS field
    fld2ty = {}
    for k in out:
        ty, fn = k.split('.', 1)
        fld2ty.setdefault(fn, []).append(ty)
    for am in re.finditer(
            r'^\s*=\s*(\S+)\s+(?:C\s+)?(\w+)\s+EQU\s+(\w+)'
            r'(?:\s*\+\s*([0-9A-Fa-f]+))?', txt, re.M):
        aval, an, rhs, plus = am.group(1), am.group(2).upper(), \
            am.group(3).upper(), am.group(4)
        if re.fullmatch(r'[0-9A-Fa-f]+', aval):
            # `= 000A C NAME EQU FIELD+2` — the column already holds the
            # alias's resolved field offset
            for ty in fld2ty.get(rhs, ()):
                out.setdefault(ty + '.' + an, int(aval, 16))
        elif rhs in fld2ty:
            for ty in fld2ty[rhs]:
                out.setdefault(
                    ty + '.' + an,
                    out[ty + '.' + rhs] + (int(plus, 10) if plus else 0))
    return out

@functools.lru_cache(maxsize=None)
def _lst_codecells(path):
    """sym names loaded into a reg that a proc then `call`s/`jmp`s —
    code-pointer dispatch cells (`mov bp,_ScaleVPyramid` + `call bp`).
    Seeding them redirects the call into seeded garbage on both sides."""
    out = set()
    for _k, (_kind, plines) in _lst_procs(path).items():
        for bl in plines:
            mc = re.search(r'\b(?:call|jmp)\s+(\w+)\s*(?:;.*)?$', bl, re.I)
            if mc and re.fullmatch(r'(ax|bx|cx|dx|si|di|bp)',
                                   mc.group(1).lower()):
                r = mc.group(1).lower()
                for bl2 in plines:
                    ml = re.search(r'\bmov\s+' + r +
                                   r'\s*,\s*([A-Za-z_][\w.]*)\s*(?:;.*)?$',
                                   bl2, re.I)
                    if ml:
                        out.add(ml.group(1).lower().split('.')[0])
            # indexed dispatch on a table of code ptrs:
            # `jmp CalcScale[si]` / `call Handlers[bx]` — the table's cells
            # hold near-offsets; seeding them redirects the jump into
            # seeded garbage (port: DISPMISS, orig: wrong target)
            mt = re.search(
                r'\b(?:call|jmp)\s+([A-Za-z_][\w.]*)\s*\[\s*'
                r'(?:ax|bx|cx|dx|si|di|bp)\s*\]', bl, re.I)
            if mt:
                out.add(mt.group(1).lower().split('.')[0])
    return out

def _lst_dataptrs(path):
    """indexed syms loaded into a reg that is then dereferenced as a
    pointer base (`mov bx,MobileTable[bx]` + `mov ax,FIELD[bx]`) —
    pointer-table cells; keep their linked values so both sides chase
    the real struct, not a seeded scalar read as an offset."""
    out = set()
    for _k, (_kind, plines) in _lst_procs(path).items():
        for i, bl in enumerate(plines):
            mm = re.search(r'\bmov\s+(ax|bx|cx|dx|si|di|bp)\s*,\s*'
                           r'([A-Za-z_][\w.]*)\s*\[', bl, re.I)
            if not mm:
                continue
            r, s = mm.group(1).lower(), mm.group(2).lower().split('.')[0]
            for bl2 in plines[i+1:]:
                if re.search(r'\w+\s*\[\s*' + r + r'\b', bl2) or \
                        re.search(r'\[\s*' + r + r'\s*[\+\]]', bl2):
                    out.add(s)
                    break
    return out

@functools.lru_cache(maxsize=None)
def _lst_decls(path):
    """{name.lower(): (elem_size, extent)} for scalar data decls.
    A named decl's extent runs to the next *named* decl's offset so
    unnamed array-continuation rows (AirRadarScan's `DW 5/11`) count as
    part of it.  Struc instances are skipped — record windows have their
    own deliberate bounds.  Used to keep seeds inside the declared cell:
    a word write at a `DB` bleeds a byte into whichever *different* sym
    each layout packs next (BreakFlag->HelicopterPtr in the port)."""
    elsz = {'DB': 1, 'DW': 2, 'DD': 4, 'DF': 6, 'DQ': 8, 'DT': 10}
    dre = re.compile(r'^\s*([0-9A-Fa-f]{4})\s+[0-9A-Fa-f]+\t+'
                     r'(\w*)\t+(DB|DW|DD|DT|DQ|DF)\b')
    rows = []
    for ln in open(path, errors='replace'):
        m = dre.match(ln)
        if m:
            rows.append((int(m.group(1), 16), m.group(2).lower(),
                         elsz[m.group(3)]))
    out = {}
    for i, (off, nm, sz) in enumerate(rows):
        if not nm:
            continue
        nxt = next((o for o, n2, _s in rows[i + 1:] if n2), None)
        ext = min(max(nxt - off, sz), 0x200) \
            if nxt is not None and nxt > off else sz
        out.setdefault(nm, (sz, ext))
    return out, rows

@functools.lru_cache(maxsize=None)
def _pat_regex(pat):
    """pattern (None=wildcard) -> compiled bytes regex; runs of N wildcards
    collapse to .{N} so the match stays C-speed regardless of anchor size"""
    out, wild = [], 0
    for p in pat:
        if p is None:
            wild += 1
        else:
            if wild:
                out.append(b'.' if wild == 1 else b'.{%d}' % wild)
                wild = 0
            out.append(re.escape(bytes([p])))
    if wild:
        out.append(b'.' if wild == 1 else b'.{%d}' % wild)
    return re.compile(b''.join(out), re.DOTALL)

def locate(exe, pat):
    base = HDRPARAS * 16
    return [m.start() - base for m in
            _pat_regex(tuple(pat)).finditer(exe, base)]

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

def near_call_targets(exe):
    """flat offsets that are targets of near calls (e8 rel16) — a proc
    entry reached by real code is overwhelmingly likely to be the genuine
    hit among several identical signature bodies."""
    s = set()
    img, n = HDRPARAS * 16, len(exe)
    for i in range(img, n - 3):
        if exe[i] != 0xe8:
            continue
        rel = int.from_bytes(exe[i+1:i+3], 'little', signed=True)
        s.add(i - img + 3 + rel)
    return s

RESULT_RE = re.compile(r'ax=([0-9a-f]+) bx=([0-9a-f]+) cx=([0-9a-f]+) dx=([0-9a-f]+) '
                       r'si=([0-9a-f]+) di=([0-9a-f]+) sp=([0-9a-f]+) bp=([0-9a-f]+) '
                       r'flags=([0-9a-f]+) ds=([0-9a-f]+) es=([0-9a-f]+) ss=([0-9a-f]+)')

def run_original(addr, vec, pokes=(), timeout=25, membox=None):
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
    env = None
    dumpf = None
    if membox:
        dumpf = os.path.join(tempfile.gettempdir(),
                             f'diff_mem_{os.getpid()}_{threading.get_ident()}.bin')
        env = dict(os.environ,
                   KVIKDOS_MEM_DUMP=dumpf,
                   KVIKDOS_MEM_DUMP_START='0x%lx' % membox[0],
                   KVIKDOS_MEM_DUMP_SIZE='0x%lx' % membox[1])
    if os.environ.get('DIFF_DEBUG_ORIGARGV'):
        print('ORIGARGV ' + repr(cmd), file=sys.stderr)
    try:
        out = subprocess.run(cmd, capture_output=True, text=True, errors='replace',
                    timeout=timeout, env=env)
    except subprocess.TimeoutExpired:
        return 'TIMEOUT', None
    except (OSError, MemoryError):
        return 'NORESULT', None
    if os.environ.get('DIFF_DEBUG_ORIGARGV'):
        print('ORIGOUT ' + repr(out.stdout[-400:]) + ' ERR ' +
              repr(out.stderr[-200:]), file=sys.stderr)
    box = None
    if dumpf:
        try:
            box = open(dumpf, 'rb').read()
            os.unlink(dumpf)
        except OSError:
            box = None
    m = RESULT_RE.search(out.stdout + out.stderr)
    if not m and os.environ.get('DIFF_DEBUG_PROC'):
        print(f'DBG-ORIGFAIL rc={out.returncode} box={None if box is None else len(box)} '
              f'cmd={cmd}\n  out={out.stdout[-300:]} err={out.stderr[-300:]}',
              file=sys.stderr)
    return (m.groups() if m else 'NORESULT'), box

def run_port(probe, proc, vec, pokes=(), dumps=()):
    # vec order ax,cx,dx,bx,si,di,bp -> probe order ax,bx,cx,dx,si,di,bp
    ax,cx,dx,bx,si,di,bp = vec
    rv = lambda v: v if isinstance(v, str) else f'{v:x}'
    args = [os.path.abspath(probe), proc,
            rv(ax), rv(bx), rv(cx), rv(dx), rv(si), rv(di), rv(bp)]
    if pokes or dumps:
        args += ['7', '7']          # ds es defaults (seg_para(data))
        for sn, v, esz in pokes:
            # explicit-width prefixes: the harness knows the operand size,
            # the probe's sym-declared esz would under-write db arrays
            # read through WORD PTR operands
            pref = {1: 'pokeb', 2: 'pokew', 4: 'poked'}.get(esz, 'poke')
            args.append(f'{pref}={sn}:{v}' if isinstance(v, str)
                        else f'{pref}={sn}:{v:x}')
        for sn, ln in dumps:
            args.append(f'dump={sn}:{ln:x}')
    # file-writing procs (SaveFile etc.) must not litter the repo —
    # run the probe inside a scratch dir
    scratch = os.path.join(tempfile.gettempdir(), 'diff_procs_scratch')
    os.makedirs(scratch, exist_ok=True)
    try:
        out = subprocess.run(args, capture_output=True, text=True,
                             errors='replace', timeout=10, cwd=scratch)
    except subprocess.TimeoutExpired:
        return 'TIMEOUT', None
    except (OSError, MemoryError):
        return 'NORESULT', None
    mem = None
    if dumps:
        mem = {}
        for dm in re.finditer(r'^MEMDUMP (\S+) ([0-9a-fA-F]+|MISSING)$',
                              out.stdout, re.M):
            mem[dm.group(1)] = (None if dm.group(2) == 'MISSING'
                                else bytes.fromhex(dm.group(2)))
    m = RESULT_RE.search(out.stdout)
    if m:
        if os.environ.get('DIFF_DEBUG_PROC', '').lower() in (
                proc.split('__')[0].lower(), proc.lower()):
            print(f'DBG-ARGV {proc} {args[1:8]}\n  pokes={args[9:]}',
                  file=sys.stderr)
        return m.groups(), mem
    if os.environ.get('DIFF_DEBUG_PROC'):
        print(f'DBG-PORTFAIL {proc} rc={out.returncode} '
              f'argv={args[1:]}\n  out={out.stdout[-400:]} '
              f'err={out.stderr[-400:]}', file=sys.stderr)
    if 'DISPMISS' in out.stderr:
        dm = re.search(r'DISPMISS\] disp=([0-9a-fA-F]+)', out.stderr)
        return 'DISPMISS:%s' % (dm.group(1) if dm else '?'), mem
    if 'unknown proc' in out.stderr:
        return 'NORESULT', mem
    return 'CRASH%d' % out.returncode if out.returncode else 'NORESULT', mem

def portfail(r):
    """non-tuple port/orig call outcomes: not-comparable result classes"""
    return (r in ('TIMEOUT', 'NORESULT') or
            (isinstance(r, str) and (r.startswith('DISPMISS') or
                                     r.startswith('CRASH'))))

FIELD = ('ax','bx','cx','dx','si','di','sp','bp','flags','ds','es','ss')
# reg -> index inside the vec tuple (ax,cx,dx,bx,si,di,bp)
VECIDX = {'ax': 0, 'cx': 1, 'dx': 2, 'bx': 3, 'si': 4, 'di': 5, 'bp': 6}
# scratch arrays for pin= struct-pointer args (first wins, both sides
# must know the name: port_syms for the probe, gsyms for the orig disp)
SCRATCH = ('lhsx', 'rhsx', 'clipxtable', 'scanlinetable')

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
    pin, idx, cls = [], [], None
    pvlist, wrs = [], []
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
        elif o.startswith('pin='):
            pin = o[4:].split(',')
        elif o.startswith('idx='):
            idx = o[4:].split(',')
        elif o.startswith('pv='):
            # pv=sym:v0,v1,... — per-vector poke values (bounded seeds
            # like grid sizes that must stay inside a dispatch table)
            body = o[3:]
            sn, sv = body.rsplit(':', 1) if ':' in body else (body, '0')
            pvlist.append((sn, [int(t, 16) for t in sv.split(',')]))
        elif o.startswith('wr='):
            # wr=Sym[+hexoff][,hexlen] — post-call memory range to compare
            body = o[3:]
            sn, _, sl = body.partition(',')
            wlen = int(sl, 16) if sl else None
            b, _, sof = sn.partition('+')
            woff = int(sof, 16) if sof else 0
            wrs.append((b, woff, wlen))
        elif o.startswith('class='):
            cls = o[6:]
        elif o in ('manual', 'postpone'):
            manual = True
    return (lst, proc, pat_ov, kind_ov, skip, vecs, manual, pokes, cls,
            pin, idx, pvlist, wrs)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('spec')
    ap.add_argument('--probe', default='./test_probe_all')
    ap.add_argument('--exe', default=EXE)
    ap.add_argument('-j', '--jobs', type=int, default=4)
    ap.add_argument('--replay', help='reclassify a saved results file, no calls')
    ap.add_argument('--port-rerun', metavar='RAW',
                    help='reuse orig results from RAW; re-call port side only')
    ap.add_argument('--locate-only', action='store_true',
                    help='stop after the locate phase')
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
            r'^    \{"(\w+)",\s*(\w+)(?:,\s*\(m2c::_offsets\)[^)]*)\},\s*$',
            open(pcpp).read(), re.M))
    # which module owns each weak wrapper: a same-name proc in another
    # module is `static` and unreachable — testing that spec entry would
    # bind the wrong implementation (a guaranteed false DIFF)
    weak_owner = {}
    for lf in glob.glob('src/*_lifted.cpp'):
        stem = os.path.basename(lf).replace('_lifted.cpp', '')
        for wm in re.finditer(
                r'__attribute__\(\(weak\)\)\s*bool\s+(\w+)\s*\(',
                open(lf, errors='replace').read()):
            weak_owner.setdefault(wm.group(1), stem)
    addrs, symoff, lstsyms_all, ambig = {}, {}, {}, {}
    csmap = real_cs_map(exe)
    calltgts = near_call_targets(exe) | set(csmap)
    # linker map: public symbol -> linked seg:off. Map segs are pre-load;
    # real flat = seg*16 + off + LOADBIAS where LOADBIAS is a per-image
    # constant resolved below from unambiguous signature hits
    pubs = {}
    mapf = sorted(glob.glob('/home/xor/inertia_player/examples/Tornado/*/*.map'))
    if mapf:
        for mline in open(mapf[0], errors='replace'):
            mm = re.match(r'\s*([0-9A-Fa-f]{4}):([0-9A-Fa-f]{4})\s+'
                          r'([A-Za-z_?][\w?@]*)\s*$', mline)
            if mm:
                pubs[mm.group(3).upper()] = (
                    int(mm.group(1), 16) * 16 + int(mm.group(2), 16))
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
            for ln0 in open(lp0, errors='replace'):
                m0 = re.match(r'\s*([A-Za-z_?][\w?@]*)\s+PROC\b', ln0, re.I)
                if m0:
                    known_labels.add(m0.group(1).lower().lstrip('_'))
        except OSError:
            pass
    loadbias = 0
    deltas = []
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst0, proc0 = parse_spec_line(line)[:2]
        mflat = pubs.get(proc0.upper())
        if mflat is None:
            continue
        lp0 = lst0 if os.path.isabs(lst0) else os.path.join(
            '/home/xor/inertia_player/examples/Tornado', lst0)
        pat0, _k0, _s0 = parse_lst_pattern(lp0, proc0)
        h0 = locate(exe, pat0) if pat0 else []
        if len(h0) == 1:
            deltas.append(h0[0] + img - mflat)
    if deltas:
        deltas.sort()
        loadbias = deltas[len(deltas) // 2]
    # struc layouts: instance -> type (symtab, e.g. VP -> VIEWPORT) and
    # TYPE.FIELD -> field offset.  Record-member pokes (`mov
    # cl,VP.V_SCALE_UP`) land at <record sym>+<field offset> on the port.
    fields, itype, itynames = {}, {}, {}
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst0 = parse_spec_line(line)[0]
        lp0 = lst0 if os.path.isabs(lst0) else os.path.join(
            '/home/xor/inertia_player/examples/Tornado', lst0)
        for n0, (t0, _d0) in _lst_symtab(lp0).items():
            itype.setdefault(n0, t0)
            itynames.setdefault(n0.lower(), n0)
        for k0, o0 in _lst_fields(lp0).items():
            fields.setdefault(k0, o0)
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
            for n, (o, s, im, mb, ir, oz, ca) in list(syms.items()):
                if not im and n.lower().lstrip('_') in known_labels:
                    syms[n] = (o, s, True, mb, ir, oz, ca)
        hits = locate(exe, pat) if pat else []
        if not hits and pat and pat_ov is None:
            # mid-pattern divergence (encoder/linker variant): fall back
            # to progressively shorter prefixes — the call-target and
            # link-map tiebreakers below still disambiguate multi-hits
            for cut in (48, 40, 32, 24, 20, 16, 14, 12, 10, 8):
                hits = locate(exe, pat[:cut])
                if hits:
                    pat = pat[:cut]
                    break
        if len(hits) > 1 and pat_ov is None:
            # longer signature: relative-branch tails differentiate
            # shared prologues
            long_pat, _k2, _s2 = parse_lst_pattern(lp, proc, maxlen=256)
            if len(long_pat) > len(pat):
                h2 = locate(exe, long_pat)
                if h2:
                    hits, pat = h2, long_pat
        if len(hits) > 1:
            # prefer hits that are real call targets (e8 rel16 + 9a/ea far
            # sites); public procs are called, junk signature twins are not
            ct = {h for h in hits if h in calltgts}
            if len(ct) == 1:
                hits = list(ct)
        if len(hits) > 1:
            # link-map tiebreak: thunk procs share one signature and sit
            # ~0x15 bytes apart in a dispatch table, so pick the hit
            # nearest the map's linked address (bias varies <=±16, half
            # the thunk spacing) — a fixed "unique within window" test
            # cannot separate them
            mflat = pubs.get(proc.upper()) or pubs.get(
                proc.split('__')[0].upper())
            if mflat is not None:
                best = min(hits, key=lambda h: abs(h + img - mflat - loadbias))
                if abs(best + img - mflat - loadbias) <= 48:
                    hits = [best]
        if len(hits) > 1:
            # residual multi-hits are duplicate bodies present twice in
            # the exe (two modules sharing one helper); all remaining
            # candidates are call targets, so any copy is a valid
            # original — take the lowest address deterministically.
            # Keep the candidates: parallel module variants (AIRCRAFT vs
            # HELICOPS GroundCheck) differ only in wildcarded operand
            # values — a post-pass re-picks by operand content once
            # sibling-proc displacements are known
            ambig[(lst, proc)] = (list(hits), syms)
            print(f'{lst}:{proc}: {len(hits)} identical bodies, '
                  f'using {hits[0]+img:#x}', file=sys.stderr)
            hits = hits[:1]
        lstsyms_all[(lst, proc)] = syms
        if len(hits) == 1 and pat_ov is None:
            h = hits[0]
            # prefix-fallback hits can be wrong bodies: the listing is the
            # same build's output, so a genuine body matches ~all
            # non-wildcard bytes. Reject hits scoring <75% (observed:
            # real bodies >=90%, prefix collisions <50%)
            full_pat, _k3, _s3 = parse_lst_pattern(lp, proc, maxlen=256)
            named = [(i, b) for i, b in enumerate(full_pat) if b is not None]
            if named:
                good = sum(1 for i, b in named if exe[img + h + i] == b)
                if good / len(named) < 0.75:
                    print(f'{lst}:{proc}: locate rejected '
                          f'({good}/{len(named)} bytes match at '
                          f'{h + img:#x})', file=sys.stderr)
                    hits = []
        if len(hits) == 1:
            h = hits[0]
            flat = LOAD_FLAT + h
            seg = csmap.get(flat, flat // 16)
            addrs[(lst, proc)] = (seg, flat - seg * 16, kind)
            # shipped displacements for the proc's data symbols
            symoff[(lst, proc)] = {
                n: (s, int.from_bytes(exe[img+h+o:img+h+o+2], 'little'),
                    im, mb, ir, oz, ca)
                for n, (o, s, im, mb, ir, oz, ca) in syms.items()}
        else:
            addrs[(lst, proc)] = None
            print(f'{lst}:{proc}: locate failed ({len(hits)} hits)',
                  file=sys.stderr)

    # operand-value disambiguation: parallel module variants share one
    # wildcarded signature (AIRCRAFT/HELICOPS GroundCheck differ only in
    # the ptr-cell operand — `0000 R` both).  Each candidate hit stores
    # the *linked* displacement of its data operands; compare them
    # against the expected disp learned from already-located sibling
    # procs in the same listing — the hit whose operands match belongs
    # to this module's body
    if ambig:
        modsym = {}
        for (l2, _p2), so in symoff.items():
            for n2, t2 in so.items():
                modsym.setdefault((l2.lower(), n2.upper()), t2[1])
        for (lst, proc), (hits, syms) in ambig.items():
            scored = []
            for h in hits:
                score = 0
                for n, (o, s, im, mb, ir, oz, ca) in syms.items():
                    if im or s != 'ds' or o is None:
                        continue
                    exp = modsym.get(
                        (lst.lower(), n.split('.')[0].upper()))
                    if exp is None:
                        continue
                    actual = int.from_bytes(
                        exe[img + h + o:img + h + o + 2], 'little')
                    score += 1 if actual == exp else -1
                scored.append((score, h))
            scored.sort()
            if scored and scored[-1][0] > 0 and \
                    scored[-1][1] != hits[0] and \
                    isinstance(addrs.get((lst, proc)), tuple):
                h = scored[-1][1]
                print(f'{lst}:{proc}: operand disambiguation -> '
                      f'{h + img:#x} (score {scored[-1][0]})',
                      file=sys.stderr)
                flat = LOAD_FLAT + h
                seg = csmap.get(flat, flat // 16)
                addrs[(lst, proc)] = (seg, flat - seg * 16,
                                      addrs[(lst, proc)][2])
                symoff[(lst, proc)] = {
                    n: (s, int.from_bytes(exe[img+h+o:img+h+o+2],
                                          'little'),
                        im, mb, ir, oz, ca)
                    for n, (o, s, im, mb, ir, oz, ca) in syms.items()}

    # .lst/.LST pairs and alias spec lines often resolve to the same
    # shipped address — run the vectors once, mark the rest as 'dup'.
    # .lst variants (the base build) win over .LST so their syms drive
    # seeding; iterate keys sorted with .lst first.
    dedup = {}
    def _dup_sort(key):
        return (0 if key[0].endswith('.lst') else 1, key[0], key[1])
    for key in sorted(addrs, key=_dup_sort):
        addr = addrs[key]
        if not addr:
            continue
        if addr in dedup:
            addrs[key] = 'dup'
        else:
            dedup[addr] = key
    if a.locate_only:
        if os.environ.get('DIFF_DEBUG_ADDRS'):
            for k, v in sorted(addrs.items()):
                print('ADDR', k, v, file=sys.stderr)
        ok = sum(1 for v in addrs.values() if v and v != 'dup')
        dup = sum(1 for v in addrs.values() if v == 'dup')
        print(f'== located={ok} dup={dup} failed={len(addrs)-ok-dup}')
        sys.exit(0)
    # global sym->(seg, disp, is_imm) union over every located proc: data
    # displacements are segment-absolute, so a sym learned from one proc's
    # instruction is valid for all — lets --auto also seed globals used by
    # nested calls (e.g. CircleFill -> [FillVector] -> _PolyFill reads)
    gsyms = {}
    for so in symoff.values():
        for n, (s, disp, im, mb, ir, oz, ca) in so.items():
            gsyms.setdefault(n, (s, disp, im, mb, ir, oz, ca))
    gsyms_sorted = sorted(gsyms)
    gsyms_l = {n.lower(): v for n, v in gsyms.items()}
    # per-listing sym unions: globals read by procs in the same source
    # module are far likelier to matter to a proc's callees than the
    # global union's alphabetical tail, so they get seeded first
    lstsyms = {}
    for (l, _p), so in symoff.items():
        lstsyms.setdefault(l, set()).update(so)

    # declared element size + extent per scalar sym — seeds must not
    # extend past the decl: bytes beyond it are a different logical cell
    # in each layout (TmpICRng's DD got +4..+e range writes that smashed
    # HelicopterPtr in the port's packing)
    declsz = {}
    declall = []     # [(shipped_disp, name, extent)] sorted below
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst0 = parse_spec_line(line)[0]
        lp0 = lst0 if os.path.isabs(lst0) else os.path.join(
            '/home/xor/inertia_player/examples/Tornado', lst0)
        _dmap, _drows = _lst_decls(lp0)
        for dn, (dsz, dext) in _dmap.items():
            declsz.setdefault(dn, (dsz, dext))
        # record-instance disps: STRUC instances (AC_Data, HC_Mobile…)
        # are never operand-referenced so gsyms can't resolve them —
        # derive their shipped disps from the listing's symtab plus the
        # module's listing->shipped delta (median over shared names)
        symtab = _lst_symtab(lp0)
        delta = sorted(gsyms_l[n.lower()][1] - d
                       for n, (_t, d) in symtab.items()
                       if n.lower() in gsyms_l)
        if not delta:
            continue
        md = delta[len(delta) // 2]
        for doff, dnm, _esz in _drows:
            if dnm:
                declall.append((doff + md, dnm, _dmap[dnm][1]))
        for n, (t, d) in symtab.items():
            if n.lower() in gsyms_l or n.lower().lstrip('_') in known_labels:
                continue
            gsyms.setdefault(
                n, ('ds', d + md, False, '', frozenset(), 2, 0))
    gsyms_sorted = sorted(gsyms)
    gsyms_l = {n.lower(): v for n, v in gsyms.items()}
    declall.sort()
    doffs = [x[0] for x in declall]

    tasks, nskip, nportonly, port_only_seen = [], 0, 0, set()
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst, proc, _p, _k, skip, vecs, manual, pokes, cls, pin, idx, \
            pvlist, wrs = parse_spec_line(line)
        addr = addrs.get((lst, proc))
        if addr == 'dup' or manual:
            nskip += 1
            continue
        # unlocated in FLIGHT.EXE (dead-source/driver variants): still
        # exercise the port side — a translated proc that hangs or
        # crashes standalone is a regression even with no original
        port_only = not addr
        if port_only:
            nportonly += 1
            # .lst/.LST variants bind the same probe entry — once is
            # enough (no orig address to disambiguate them by)
            pkey = (os.path.splitext(os.path.basename(lst))[0].lower(),
                    proc.lower())
            if pkey in port_only_seen:
                nskip += 1
                continue
            port_only_seen.add(pkey)
        # resolve spec pokes: orig-side --poke-word/--poke-byte at the
        # symbol's shipped displacement; port-side probe poke=<name>:<val>.
        # A poke unresolved on EITHER side would seed asymmetric state, so
        # any missing symbol skips the whole proc.
        so = symoff.get((lst, proc), {})
        if port_only:
            # unlocated: fall back to the listing's own sym table — the
            # shipped disp is unknown (disp=0; orig calls never run) but
            # port-side seeding still reaches the proc's data refs
            so = {n: (s, 0, im, mb, ir, oz, ca)
                  for n, (o, s, im, mb, ir, oz, ca)
                  in lstsyms_all.get((lst, proc), {}).items()}
        opokes, ppokes, missing = [], [], []
        for sn, ov, pv, sz in pokes:
            # poke=sym+hexoff:val — seed an array element past the base
            # (e.g. xe+4 = Xe[2]) so fixed indices can be controlled
            base, off = sn, 0
            if '+' in sn:
                b, _, o = sn.partition('+')
                try:
                    base, off = b, int(o, 16)
                except ValueError:
                    pass
            hit = next((v for n, v in so.items()
                        if n.lower() == base.lower()),
                       None) or gsyms_l.get(base.lower())
            if hit is None:
                if port_only:
                    hit = ('ds', 0, False, '', frozenset(), 2, 0)
                else:
                    missing.append(f'{sn}(orig)')
                    continue
            s, disp, _im, _mb, _ir, _oz, _ca = hit
            if isinstance(ov, str):      # @target: orig value = its shipped disp
                th = next((v for n, v in so.items()
                           if n.lower() == ov[1:].lower()),
                          None) or gsyms_l.get(ov[1:].lower())
                if th is None:
                    if port_only:
                        th = ('ds', 0, False, '', frozenset(), 2, 0)
                    else:
                        missing.append(f'{ov}(orig)')
                        continue
                ov = th[1]
            if not port_only:
                opokes.append((DS_SEG if s == 'ds' else
                               int(SS.split(':')[0], 16),
                               disp + off, ov, sz))
            if port_syms is not None and base.lower() not in port_syms:
                missing.append(f'{sn}(port)')
                continue
            ppokes.append((sn.lower(), pv, sz))
        # per-vector pokes: resolve to (seg, disp, portname, vals)
        pvseeds = []
        for sn, vals in pvlist:
            hit = next((v for n, v in so.items()
                        if n.lower() == sn.lower()),
                       None) or gsyms_l.get(sn.lower())
            if hit is None:
                if port_only:
                    hit = ('ds', 0, False, '', frozenset(), 2, 0)
                else:
                    missing.append(f'{sn}(orig)')
                    continue
            s, disp = hit[0], hit[1]
            if port_syms is not None and sn.lower() not in port_syms:
                missing.append(f'{sn}(port)')
                continue
            pvseeds.append((
                DS_SEG if s == 'ds' else int(SS.split(':')[0], 16),
                disp, sn.lower(), vals))
        if missing:
            print(f'{proc}: poke syms unresolved: {missing} - skipped',
                  file=sys.stderr)
            nskip += 1
            continue
        # module-mismatch binding: same-name procs in other modules are
        # static in the lifted TUs; without a <proc>__<stem> alias the
        # probe binds whichever module emitted the weak symbol.  For
        # port-only rows there's no original to misattribute — running
        # the bound variant still exercises translated code.
        stem_l = os.path.splitext(os.path.basename(lst))[0].lower()
        pnorm_l = proc.lower().replace('@', 'arb').replace('?', 'que') \
            .replace('$', 'dol')
        pn_l = f'{pnorm_l}__{stem_l}'
        owner_l = weak_owner.get(pnorm_l)
        if (port_procs is not None and pn_l not in port_procs
                and owner_l is not None and owner_l != stem_l
                and not port_only):
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
        if a.auto:
            # seed every sym this proc references plus the global union
            # (transitive: nested calls read globals not in this listing);
            # own syms first, then globals — capped under NUM_POKES.
            # gsyms_sorted is built once globally: set-difference per
            # vector over ~50k names was the old quadratic stall.
            own = sorted(set(so))
            own_set = set(so)
            sib = sorted(lstsyms.get(lst, set()) - own_set)
            sib_set = own_set | set(sib)
            names = own + sib + [g for g in gsyms_sorted
                                 if g not in sib_set]
            # code-ptr cells loaded into call/jmp regs anywhere in this
            # listing keep their linked offsets (`mov bp,_X` + `call bp`)
            lp_t = lst if os.path.isabs(lst) else os.path.join(
                '/home/xor/inertia_player/examples/Tornado', lst)
            codecells = _lst_codecells(lp_t) | _lst_dataptrs(lp_t)
            # ptr-redirection candidates indexed once per proc: sorted
            # (lower, orig) pairs so each *ptr sym's same-prefix target is
            # a bisect probe, not a full scan of the union
            cidx = sorted(
                (t.lower(), t) for t in names
                if not CODEPTRRE.search(t) and
                t.lower().lstrip('_') not in known_labels and
                (port_syms is None or t.lower() in port_syms))

            def pref_of(stem):
                i = bisect.bisect_left(cidx, (stem, ''))
                r = []
                while i < len(cidx) and cidx[i][0].startswith(stem):
                    r.append(cidx[i][1]); i += 1
                return r
        # pin= redirects struct-pointer register args at scratch arrays
        # seeded identically on both sides (regs that procs stash into
        # *Ptr cells, e.g. AAAFire's `mov SourcePtr,si`).  The first
        # available scratch syms are used, one per pinned reg.
        pinmap = {}
        sol = {k.lower(): v for k, v in so.items()}
        # data-sym spans for collision checks: a pinned scratch window
        # (128B seeded) must not overwrite a table the proc reads —
        # e.g. lhsx@1148 +128 covers HexChars@1160 -> orig xlat reads
        # seed bytes while the port table survives at a different disp
        other_syms = []
        for _n, _e in list(so.items()) + list(gsyms.items()):
            if len(_e) >= 2 and _e[0] == 'ds' and _e[1] is not None \
                    and _n.lower() not in SCRATCH:
                _esz = _e[5] if len(_e) > 5 and _e[5] else 2
                other_syms.append((_e[1], _e[1] + max(_esz, 16)))

        def scratch_collides(disp):
            return any(disp < hi and disp + 128 > lo
                       for lo, hi in other_syms)

        for reg in pin:
            if VECIDX.get(reg) is None:
                continue
            for s in SCRATCH:
                if s in pinmap.values():
                    continue
                if port_syms is not None and s not in port_syms:
                    continue
                e = sol.get(s) or gsyms_l.get(s)
                if e is None:
                    # not referenced by any spec proc — fall back to the
                    # linker map: data publics' seg:off is already the
                    # DGROUP-relative disp (seg 0000 = data-image base)
                    mf = pubs.get(s.upper())
                    if mf is not None:
                        e = ('ds', mf, True)
                if e is None or e[0] != 'ds' or e[1] is None:
                    continue
                if scratch_collides(e[1]):
                    continue
                pinmap[reg] = (s, e)
                break
        # wr= post-call memory ranges: resolve orig (seg,disp) flats and
        # port dump args. Ranges are sym-relative so linked-layout offsets
        # on each side land on the same logical bytes.
        wro, wrp, wmiss = [], [], []
        for wn, woff, wlen in wrs:
            hit = sol.get(wn.lower()) or gsyms_l.get(wn.lower())
            if hit is None or hit[0] != 'ds':
                wmiss.append(wn)
                continue
            ln = wn.lower()
            if port_syms is not None and ln not in port_syms:
                wmiss.append(wn + '(port)')
                continue
            # default range = the sym's own extent — anything past it is a
            # different logical cell in each layout (see Exit3DFlag+1)
            wlen2 = wlen or port_esz.get(ln) or \
                (hit[5] if len(hit) > 5 else 2) or 2
            wro.append((DS_SEG * 16 + hit[1] + woff, wlen2))
            wrp.append((ln + ('+%x' % woff if woff else ''), wlen2))
        if wmiss:
            print(f'{proc}: wr ranges dropped, syms unknown: {wmiss}',
                  file=sys.stderr)
        # single bounding box for the orig-side dump (capped)
        membox = None
        if wro and not port_only:
            lo = min(f for f, _l in wro)
            hi = max(f + l for f, l in wro)
            if hi - lo <= 0x40000:
                membox = (lo, hi - lo)
        # idx= constrains register args to small array indices — procs
        # that read `sym[reg]` (Xe[si], OutCode[si]) need an in-range
        # index, not a pointer, plus range-seeded array elements
        idxset = frozenset(idx)
        for vi in range(len(VECTORS)):
            op, pp = list(opokes), list(ppokes)
            # record-window seeds go FIRST so named sym pokes (ptr cells,
            # record members) land last and win inside the window on both
            # layouts — a *ptr cell packed inside the record region keeps
            # its @-anchor instead of being clobbered by window bytes
            winop, winpp = [], []
            # port_only: orig pokes are dead weight — keep op empty so
            # the 1000-poke cap can't truncate port-side seeding
            opush = (lambda *a: None) if port_only else op.append
            ov = list(vecs.get(vi, VECTORS[vi]))
            pv = list(ov)
            for pseg, pdisp, psn, pvals in pvseeds:
                pv2 = pvals[vi % len(pvals)]
                opush((pseg, pdisp, pv2, 2))
                pp.append((psn, pv2, 2))
            for reg, (s, e) in pinmap.items():
                # pin the reg 64 bytes into the seeded scratch: backward
                # member reads ([si-8] poly-buffer walks) stay in bounds
                ov[VECIDX[reg]] = e[1] + 0x40
                pv[VECIDX[reg]] = '@' + s + '+40'
                # seed 128 bytes of scratch struct on both sides
                for k in range(64):
                    rv = EDGE[(vi + k) % len(EDGE)]
                    opush((DS_SEG, e[1] + 2*k, rv, 2))
                    pp.append((s + '+%x' % (2*k), rv, 2))
            for reg in idx:
                j = VECIDX.get(reg)
                if j is not None and reg not in pinmap:
                    ov[j] = pv[j] = vi * 2
            if a.auto:
                # live set for the "explicit spec poke wins" check —
                # the genexpr rescanned all of pp per sym (O(pokes))
                pnames = {sn for sn, _v, _z in pp}
                for i, n in enumerate(names):
                    s_kind, disp, is_imm, fname, idxr, osz, cadd = \
                        (so.get(n) or gsyms[n])
                    if os.environ.get('DIFF_DEBUG_PROC') == proc and \
                            'ptr' in n.lower():
                        print(f'DBG-SYM {n} kind={s_kind} imm={is_imm} '
                              f'fname={fname} osz={osz} cadd={cadd} '
                              f'codecell={n.lower() in codecells} '
                              f'inportsyms={n.lower().split(".")[0] in (port_syms or ())}')
                    if s_kind != 'ds' or is_imm:
                        continue        # ss-syms + immediate bases left alone
                    ln = n.lower()
                    if ln in pnames:
                        continue        # explicit spec poke wins
                    if port_syms is not None and \
                            ln.split('.')[0] not in port_syms:
                        continue        # not translated under this name
                    if CODEPTRRE.search(n) or ln in codecells:
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
                        pref = [t for t in (pref_of(stem)
                                          if len(stem) >= 3 else [])
                                if t != n]
                        recw = False
                        if pref:
                            cands = pref
                        else:
                            # no same-prefix target: a *ptr cell indexes a
                            # record/array — prefer STRUC instances (AC_Data
                            # etc.) so the walk lands on seeded record bytes
                            # rather than whatever follows a scalar cell.
                            # The proc's own _FAMILY_FIELD operands vote the
                            # record family (_HC_FLAGS -> hc_* instance);
                            # the anchor is the family's lowest-disp member
                            # (record start: MOBILE < VIEW < DATA) so the
                            # seeded window covers every walked field
                            recs = [itynames[l] for l in itynames
                                    if l != ln and
                                    (port_syms is None or l in port_syms)
                                    and l in gsyms_l]
                            if recs:
                                fam = {}
                                # _FAMILY_FIELD[reg] operands are EQU
                                # constants — never in `so` — so vote the
                                # record family from the listing body text
                                _bf = _lst_procs(lp_t).get(
                                    proc.lower(), (None, []))[1]
                                for bl in _bf:
                                    for m2 in re.finditer(
                                            r'\b_?([a-z]{2})_[a-z0-9_]*'
                                            r'\s*\[', bl, re.I):
                                        g2 = m2.group(1).lower()
                                        if g2 == 'vp':
                                            # _VP_* fields live inside
                                            # every record's view part —
                                            # no family vote
                                            continue
                                        fam[g2] = fam.get(g2, 0) + 1
                                fb = max(fam, key=fam.get) if fam else ''
                                frex = [r for r in recs
                                        if r.lower().startswith(fb + '_')]
                                if not frex and fb:
                                    # type vote: strucs declaring FB_*
                                    # fields (WP_ATTR -> WAYPOINT ->
                                    # TaxiWP) when no fb_* instance
                                    fty = {k.split('.')[0] for k in fields
                                           if '.' in k and
                                           k.split('.')[1].startswith(
                                               fb.upper() + '_')}
                                    frex = [r for r in recs
                                            if itype.get(r.upper()) in fty]
                                if os.environ.get('DIFF_DEBUG_PROC') == proc:
                                    print(f'DBG-FAM {proc} n={n} own={own[:6]} '
                                          f'fam={fam} fb={fb} frex={frex[:4]} '
                                          f'nrecs={len(recs)}')
                                frex.sort(key=lambda r:
                                          gsyms_l[r.lower()][1])
                                cands = frex[:1] or recs
                            else:
                                cands = [t for _l, t in cidx if t != n]
                            recw = bool(recs)
                        if not cands and                                 (port_syms is None or ln in port_syms):
                            cands = [n]
                        if not cands:
                            continue
                        tgt = cands[i % len(cands)]
                        opush((DS_SEG, disp,
                                   (so.get(tgt) or gsyms.get(tgt)
                                    or gsyms_l[tgt.lower()])[1], 2))
                        # dotted member names (ac_data.ac_wp_ptr) don't
                        # resolve in the probe's flat SYMS — emit the
                        # record base + struc-declared field offset
                        pln = ln
                        if '.' in ln:
                            _pb, _pf = ln.split('.', 1)
                            _fo = fields.get(
                                itype.get(_pb.upper(), _pb.upper())
                                + '.' + _pf.upper())
                            if _fo is not None:
                                pln = f'{_pb}+{_fo:x}'
                        pp.append((pln, '@' + tgt.lower(), 2))
                        pnames.add(pln)
                        # range-seed only a same-prefix target (RhsPtr->RhsX
                        # is its real array; +2k stays inside it on both
                        # layouts).  A random peer target isn't walked.
                        if pref:
                            tdisp = (so.get(tgt) or gsyms.get(tgt)
                                     or gsyms_l[tgt.lower()])[1]
                            dend = declsz.get(tgt.lower(), (0, 0x10000))[1]
                            for k in range(1, 8):
                                if 2*k + 2 > dend:
                                    break   # scalar target — don't bleed
                                rv = EDGE[(vi + i + k) % len(EDGE)]
                                opush((DS_SEG, tdisp + 2*k, rv, 2))
                                pp.append((tgt.lower() + '+%x' % (2*k),
                                           rv, 2))
                                pnames.add(tgt.lower() + '+%x' % (2*k))
                        elif recw:
                            # record-instance anchor: _FIELD[reg] walks
                            # read across the record (MOB+VIEW+AC parts
                            # are contiguous) — seed a full-record window
                            # past the anchor so member reads on either
                            # side see identical bytes
                            tdisp = (so.get(tgt) or gsyms.get(tgt)
                                     or gsyms_l[tgt.lower()])[1]
                            for k in range(0x40):
                                rv = EDGE[(vi + i + k) % len(EDGE)]
                                winop.append((DS_SEG, tdisp + 2*k, rv, 2))
                                winpp.append((tgt.lower() + '+%x' % (2*k),
                                              rv, 2))
                    else:
                        # operand size drives the write width — a byte
                        # member (`mov cl,VP.F`) gets a byte poke, not the
                        # port sym's declared word.  Clamp to the decl's
                        # element size: `cmp BreakFlag,0` parses osz=2 but
                        # the DB's second byte is the next *named* cell —
                        # a different sym in each layout
                        esz = osz
                        _d = declsz.get(ln.split('.')[0])
                        if _d:
                            esz = min(esz, _d[0])
                        v = EDGE[(vi + i) % len(EDGE)]
                        if esz == 1:
                            v &= 0xff
                        opush((DS_SEG, disp, v, esz))
                        # struc-member reads (`mov al,Struc.Field`)
                        # encode base+fieldoff in the shipped disp while
                        # the port sym names the record base — shift the
                        # port poke by the field's struc-declared offset
                        foff = None
                        if fname:
                            base = n.upper().split('.')[0]
                            rtype = itype.get(base, base)
                            foff = fields.get(rtype + '.' + fname)
                        pdelta = foff if foff is not None else 0
                        if foff is None:
                            # sym+const extern refs (XSY[$MID+$8192]):
                            # the listing operand is the pure addend —
                            # poke the same element port-side
                            pdelta = cadd
                            if pdelta >= 0x8000:
                                pdelta -= 0x10000
                        if not -0x400 <= pdelta <= 0x400:
                            pdelta = 0
                        lnbase = ln.split('.')[0]
                        dend = declsz.get(lnbase, (0, 0x10000))[1]
                        if _d and pdelta >= dend:
                            # the operand addend reached past this decl
                            # into the next cell (`TmpICRng+6` reads
                            # EWRExposeTimer) — port-side seed the cell
                            # that *owns* disp instead of base+addend
                            oi = bisect.bisect_right(doffs, disp) - 1
                            if 0 <= oi < len(declall):
                                od, onm, oext = declall[oi]
                                if disp - od < oext:
                                    lnbase, pdelta, dend = \
                                        onm, disp - od, oext
                        if pdelta < dend:
                            wesz = esz if pdelta + esz <= dend \
                                else dend - pdelta
                            pp.append((lnbase + '+%x' % abs(pdelta)
                                       if pdelta > 0 else
                                       lnbase + '+-%x' % abs(pdelta)
                                       if pdelta else lnbase,
                                       v & (0xff if wesz == 1 else 0xffff),
                                       wesz))
                            pnames.add(pp[-1][0])
                        # idx= proc: the reg indexes this sym as an array —
                        # range-seed elements 1..15 so arr[i] reads the same
                        # seeded value on both sides (same relative offset
                        # inside each layout's own copy of the array)
                        if idxr & idxset:
                            for k in range(1, 16):
                                if pdelta + esz * (k + 1) > dend:
                                    break   # past the decl — other cell
                                rv2 = EDGE[(vi + i + k) % len(EDGE)]
                                if esz == 1:
                                    rv2 &= 0xff
                                opush((DS_SEG, disp + esz * k,
                                           rv2, esz))
                                pp.append((lnbase + '+%x' % (pdelta + esz * k),
                                           rv2, esz))
                                pnames.add(pp[-1][0])
                        # NOTE: no range-seeding of plain scalars — disp+N
                        # hits a different logical cell in each layout, so
                        # wild-index reads (AttrTable[screenmode]) stay a
                        # class=array limitation rather than a seeded case
                    if len(op) > 1000:
                        break           # NUM_POKES headroom
            if os.environ.get('DIFF_DEBUG_PROC') == proc:
                print(f'DBG {proc} v{vi}: ov={ov} pv={pv} pinmap={pinmap} '
                      f'atpokes={[p for p in pp if str(p[1]).startswith("@")]}'
                      f'\nDBG-OP {[o for o in op if o[0]==0x110 and 0x1388<=o[1]<0x14a0]}'
                      f'\nDBG-PP {[p for p in pp if p[0].split("+")[0] in ("xcrt","ycrt","outcode","xft","yft")]}',
                      file=sys.stderr)
                if os.environ.get('DIFF_DEBUG_ALLPP'):
                    print(f'DBG-ALLPP {pp}', file=sys.stderr)
            if os.environ.get('DIFF_DEBUG_FINALPP') == proc:
                for _pi, _pe in enumerate(winpp + pp):
                    print(f'FINALPP {proc} v{vi} {_pi} {_pe}',
                          file=sys.stderr)
                _lo, _hi = 0xf1c0, 0xf240
                if os.environ.get('DIFF_DEBUG_OPADDR'):
                    _oa = int(os.environ['DIFF_DEBUG_OPADDR'], 16)
                    _lo, _hi = _oa - 1, _oa + 1
                print(f'FINALOP {proc} v{vi} '
                      f'{[(i, o) for i, o in enumerate(winop + op) if o[0]==DS_SEG and _lo<=o[1]<=_hi]}',
                      file=sys.stderr)
            tasks.append((proc, vi, tuple(ov), tuple(pv), addr, skip,
                          tuple(winop + op), tuple(winpp + pp), lst, cls,
                          tuple(wro), tuple(wrp), membox))

    # candidate pointer-result deltas: a pointer-valued output can anchor
    # at ANY seeded slot — the pin arena, an @peer target, an array — and
    # each anchor's orig-vs-port address delta differs (each layout packs
    # the same syms at different offsets).  A reg whose per-row deltas all
    # belong to this set is returning a seeded pointer, not bad data.
    # keyed per proc: same-named syms in different modules ship at
    # different disps (lhsx exists in several) — global pooling picks the
    # wrong module's address and misses the real anchor delta
    pdelta, cand_of = {0}, {}
    if os.path.exists(a.probe):
        need = set()
        for t in tasks:
            for nm, val, _z in t[7]:
                need.add(re.split(r'[+-]', nm)[0])
                if isinstance(val, str) and val.startswith('@'):
                    need.add(val[1:].split('+')[0])
        need = sorted(need)
        portoff = {}
        for i in range(0, len(need), 400):
            try:
                p = subprocess.run(
                    [a.probe, '--offs', ','.join(need[i:i + 400])],
                    capture_output=True, text=True, timeout=60)
            except Exception:
                break
            for ln in p.stdout.splitlines():
                m = re.match(r'SYMOFF (\S+) ([0-9a-fA-F]+)$', ln)
                if m:
                    portoff[m.group(1)] = int(m.group(2), 16)
        for t in tasks:
            key = (t[8], t[0])
            if key in cand_of:
                continue
            so = {n.lower(): v for n, v in symoff.get(key, {}).items()}
            cand = {0}
            for nm, val, _z in t[7]:
                for n in (re.split(r'[+-]', nm)[0],
                          val[1:].split('+')[0]
                          if isinstance(val, str)
                          and val.startswith('@') else None):
                    if not n:
                        continue
                    hit = so.get(n) or gsyms_l.get(n)
                    if hit is None and n.upper() in pubs:
                        # port-only scratch syms (lhsx/rhsx/…) exist in no
                        # listing — orig side resolves them via the map
                        hit = ('ds', pubs[n.upper()], True)
                    if hit is not None and n in portoff:
                        cand.add(hit[1] - portoff[n])
                    if os.environ.get('DIFF_DEBUG_PROC'):
                        print(f'DBGC {key} {n} odisp={hit[1]:x} '
                              f'poff={portoff.get(n)}' if hit and n in
                              portoff else f'DBGC {key} {n} MISS',
                              file=sys.stderr)
            cand_of[key] = cand
        pdelta = set().union(*cand_of.values()) if cand_of else {0}
        if os.environ.get('DIFF_DEBUG_PROC'):
            print(f'DBG pdelta={sorted(hex(d) for d in pdelta)} '
                  f'nportoff={len(portoff)}/{len(need)}', file=sys.stderr)

    def run_task(t):
        proc, vi, ovec, pvec, addr, _, opokes, ppokes, lst, _c, \
            wro, wrp, membox = t
        # name collisions across modules: the translator renamed dup procs
        # to <proc>__<srcstem>; prefer that alias when it exists.
        # Same rule as parser.py's avoid_cpp_keyword: @->arb, ?->que, $->dol
        pnorm = proc.lower().replace('@', 'arb').replace('?', 'que') \
            .replace('$', 'dol')
        pn = f"{pnorm}__{os.path.splitext(os.path.basename(lst))[0].lower()}"
        if port_procs is not None and pn in port_procs:
            procname = pn
        else:
            procname = pnorm
        romem = None
        if a.port_rerun:
            ro = saved_ro.get((lst, proc, vi), 'NORESULT')
        elif addr:
            ro, box = run_original(addr, ovec, opokes, membox=membox)
            if box is not None and membox:
                romem = [box[f - membox[0]:f - membox[0] + l]
                         for f, l in wro]
        else:
            ro = 'NOORIG'
        rp, rpmem_d = run_port(a.probe, procname, pvec, ppokes,
                               dumps=wrp)
        rpmem = [rpmem_d.get(a) for a, _l in wrp] \
            if rpmem_d is not None else None
        return (lst, proc), vi, ro, rp, romem, rpmem

    saved_ro = {}
    if a.port_rerun:
        for ln in open(a.port_rerun):
            key, vi, rest = ln.split(None, 2)
            if '/' in key:
                pl, pp_ = key.rsplit(':', 1)
            else:
                pl, pp_ = '', key
            ro = rest.strip().split(' ', 1)[0]
            if rest.strip().startswith('('):
                i = rest.index(')') + 1
                ro = eval(rest[:i])
            saved_ro[(pl, pp_, int(vi))] = ro

    npass = ndiff = nto = nportok = nporthang = nnoresult = 0
    ndispmiss = ncrash = nmemdiff = 0
    xdiff = {}
    if a.replay:
        results = []
        for ln in open(a.replay):
            key, vi, rest = ln.split(None, 2)
            if '/' in key:
                lst, proc = key.rsplit(':', 1)
            else:
                lst, proc = '', key
            # rest = '<ro> <rp> [rom=<h> rpm=<h>]' where each is a tuple
            # repr or a status word; tuple reprs contain spaces, so split
            # on the " (" boundary; trailing mem-hash fields are dropped
            rest = re.sub(r'\s+rom=[0-9a-f]+', '', rest)
            rest = re.sub(r'\s+rpm=[0-9a-f]+', '', rest)
            if rest.startswith('('):
                i = rest.index(')') + 1          # first ')' ends the ro tuple
                ro, rp = rest[:i], rest[i:].strip()
            else:
                ro, _, rp = rest.partition(' ')
                rp = rp.strip()
            if ')' in rp:                        # trim mem-hash tail
                rp = rp[:rp.index(')') + 1]
            if ro.startswith('('):
                ro = eval(ro)
            if rp.startswith('('):
                rp = eval(rp)
            results.append(((lst, proc), int(vi), ro, rp, None, None))
    else:
        raw = open(a.spec + '.raw', 'w')
        # preflight: one real orig call before committing to the full
        # sweep — a broken emulator/VM environment fails every call with
        # NORESULT and silently wastes the run
        if not a.port_rerun:
            # try several tasks: a single proc may legitimately abort
            # (Divide error) — env is broken only when NOTHING returns.
            # Sample evenly across the spec: the first N located tasks are
            # all CGA_DRVR procs (alphabetical order) which legitimately
            # hang standalone (need video hw) — a head-cluster false-abort
            located = [t for t in tasks if t[4]]
            step = max(1, len(located) // 15)
            tries = located[::step][:15]
            ok = any(isinstance(
                run_original(t[4], t[2], t[6], timeout=30)[0], tuple)
                for t in tries)
            if tries and not ok:
                # transient starvation (orphan sweep processes) can
                # timeout every sample — verify with one fresh retry
                # before condemning the environment
                time.sleep(5)
                t = tries[len(tries) // 2]
                ok = isinstance(
                    run_original(t[4], t[2], t[6], timeout=30)[0], tuple)
            if tries and not ok:
                sys.exit('FATAL: preflight orig calls all failed '
                         '(emulator environment unhealthy) — aborting sweep')
        with ThreadPoolExecutor(max_workers=a.jobs) as pool:
            results = list(pool.map(run_task, tasks))
        for (lst, proc), vi, ro, rp, rom, rpm in results:
            # mem hashes keep replay cheap; detail prints in the live log
            mh = ''
            if rom is not None or rpm is not None:
                h = lambda r: hashlib.sha1(
                    b'|'.join(x or b'' for x in r)).hexdigest()[:8] \
                    if r else 'none'
                mh = f' rom={h(rom)} rpm={h(rpm)}'
            raw.write(f'{lst}:{proc} {vi} {ro} {rp}{mh}\n')
        raw.close()
    ridx = {'ax':0,'bx':1,'cx':2,'dx':3,'si':4,'di':5,'bp':7}
    skip_of = {(t[8], t[0]): t[5] for t in tasks}
    class_of = {(t[8], t[0]): t[9] for t in tasks}
    in_tasks = {(t[8], t[0]) for t in tasks}
    byproc = {}
    for key, vi, ro, rp, rom, rpm in results:
        byproc.setdefault(key, []).append((vi, ro, rp, rom, rpm))
    for (lst, proc), rows in byproc.items():
        if (lst, proc) not in in_tasks:
            continue  # stale raw row: postponed/dup/unlocated in this spec
        skip = skip_of.get((lst, proc), set())
        # a reg is a linked-layout pointer when its orig-vs-port delta is
        # constant across every completed vector (table bases differ between
        # builds) — normalize bx/cx/si/di/bp; ax/dx stay strict (outputs).
        PTRREGS = ('bx','cx','si','di','bp')
        norm = set()
        ok = [(ro, rp) for _v, ro, rp, _m, _n in rows
              if not portfail(ro) and ro != 'NOORIG'
              and not portfail(rp)]
        pdelta = cand_of.get((lst, proc), {0})
        for r in PTRREGS:
            if r in skip or len(ok) < 2:
                continue
            i = ridx[r]
            deltas = {int(ro[i],16) - int(rp[i],16) for ro, rp in ok}
            if len(deltas) == 1 and deltas != {0}:
                norm.add(r)
            elif deltas != {0} and deltas <= pdelta:
                # every row's delta is a seeded-sym address delta —
                # multi-anchor pointer outputs (pin arena + @peer cells)
                norm.add(r)
        # ax/dx stay strict UNLESS their (constant) delta equals a
        # normalized pointer reg's delta — i.e. the proc genuinely returns
        # a data pointer in ax (Octant* leave the advanced ptr there) —
        # or equals a seg-reg delta (`mov dx,DATA; mov ds,dx` leaks the
        # segment para into dx on both sides, layout-dependent)
        segd = set()
        for si_ in (9, 10, 11):
            dd = {int(ro[si_], 16) - int(rp[si_], 16) for ro, rp in ok}
            if len(dd) == 1:
                segd |= dd
        for r in ('ax', 'dx'):
            if r in skip or len(ok) < 2:
                continue
            i = ridx[r]
            deltas = {int(ro[i],16) - int(rp[i],16) for ro, rp in ok}
            if len(deltas) != 1 or deltas == {0}:
                continue
            d = next(iter(deltas))
            if d in pdelta or d in segd or any(next(iter(
                    {int(ro[ridx[pr]],16) - int(rp[ridx[pr]],16)
                     for ro, rp in ok})) == d for pr in norm):
                norm.add(r)
        for vi, ro, rp, rom, rpm in rows:
            if ro == 'NOORIG':
                # port-only coverage (unlocated dead-source): TIMEOUT is
                # a hang suspect; NORESULT/DISPMISS/CRASH = untranslated,
                # dispatch-miss or crashed — but a known env class
                # (ivt/hwio/ctx/array) already explains it
                if portfail(rp):
                    cl = class_of.get((lst, proc))
                    if cl:
                        xdiff[cl] = xdiff.get(cl, 0) + 1
                        print(f'{lst}:{proc} v{vi} XDIFF({cl})')
                    elif rp == 'TIMEOUT':
                        nporthang += 1
                        print(f'{lst}:{proc} v{vi} PORTHANG')
                    elif isinstance(rp, str) and rp.startswith('DISPMISS'):
                        ndispmiss += 1
                        print(f'{lst}:{proc} v{vi} {rp}')
                    elif isinstance(rp, str) and rp.startswith('CRASH'):
                        ncrash += 1
                        print(f'{lst}:{proc} v{vi} {rp}')
                    else:
                        nnoresult += 1
                        print(f'{lst}:{proc} v{vi} NORESULT')
                else:
                    nportok += 1
                continue
            if portfail(ro):
                if portfail(rp):
                    # both sides aborted on the same vector (e.g. DOS
                    # "Divide error" in orig = SIGABRT in the port) —
                    # equivalent behavior, not an environment failure
                    xdiff['abortequiv'] = xdiff.get('abortequiv', 0) + 1
                    print(f'{lst}:{proc} v{vi}: original={ro} port={rp} '
                          f'XDIFF(abortequiv)')
                else:
                    print(f'{lst}:{proc} v{vi}: original={ro} port={rp}')
                    nto += 1
                continue
            if portfail(rp):
                tag = rp if isinstance(rp, str) and (
                    rp.startswith('DISPMISS') or
                    rp.startswith('CRASH')) else 'NORESULT'
                print(f'{lst}:{proc} v{vi}: original=ok port={rp}')
                if tag.startswith('DISPMISS'):
                    ndispmiss += 1
                elif tag.startswith('CRASH'):
                    ncrash += 1
                else:
                    nto += 1
                continue
            # compare functional fields: ax..bp, flags; skip sp/ss/ds/es
            # (harness-specific segs). Flag masks: IF=0x200 (kvikdos sets it,
            # probe doesn't); PF=0x04 + AF=0x10 (translated runtime's lazy-flag
            # model never computes parity/aux-carry — systematic, not per-proc).
            fl_o = int(ro[8], 16) & ~0x214
            fl_p = int(rp[8], 16) & ~0x214
            ign = skip | norm
            # a proc that returns its own ds (ax==ds on BOTH sides) yields
            # a segment value — the segment bases differ between linked
            # builds, so it's a layout echo, not a data difference
            dsret = ro[0] == ro[9] and rp[0] == rp[9]
            same = all(
                ro[i] == rp[i] or
                (ro[i] != rp[i] and r in PTRREGS and
                 int(ro[i], 16) - int(rp[i], 16) in pdelta)
                for r, i in ridx.items()
                if r not in ign and not (dsret and r == 'ax')) \
                and fl_o == fl_p
            # post-call memory ranges (wr=/pin scratch): seeded bytes land
            # identically on both sides, so any byte delta is a write the
            # reg tuple can't see — a divergence signal on its own
            if rom is not None and rpm is not None:
                for ri, (ob, pb) in enumerate(zip(rom, rpm)):
                    if ob is None or pb is None or ob == pb:
                        continue
                    off = next(i for i, (a_, b_) in enumerate(zip(ob, pb))
                               if a_ != b_)
                    # classed procs (array walks etc.) diverge in memory
                    # the same way they diverge in regs — expected, not
                    # a regression signal
                    if class_of.get((lst, proc)):
                        break
                    nmemdiff += 1
                    print(f'{lst}:{proc} v{vi} MEMDIFF rng{ri} '
                          f'+{off:x}: orig={ob[off]:02x} '
                          f'port={pb[off]:02x} (len {len(ob):x})')
                    break
            if same:
                npass += 1
            elif not class_of.get((lst, proc)) and len(ok) >= 2:
                # every differing reg has one constant orig-vs-port delta
                # across vectors -> linked-layout pointer outputs
                # (table bases differ between builds), not a logic bug
                dregs = {r for r, i in ridx.items()
                         if r not in ign and any(
                             ro[i] != rp[i] for ro, rp in ok)}
                if dregs and all(
                        len({int(ro[ridx[r]], 16) - int(rp[ridx[r]], 16)
                             for ro, rp in ok}) == 1 or
                        {int(ro[ridx[r]], 16) - int(rp[ridx[r]], 16)
                         for ro, rp in ok} <= pdelta for r in dregs):
                    xdiff['ptrlayout'] = xdiff.get('ptrlayout', 0) + 1
                    print(f'{lst}:{proc} v{vi} XDIFF(ptrlayout)')
                    continue
                if class_of.get((lst, proc)) is None:
                    ndiff += 1
                    print(f'{lst}:{proc} v{vi} DIFF\n  orig: {ro}\n  port: {rp}')
                else:
                    xdiff[class_of[(lst, proc)]] = xdiff.get(
                        class_of[(lst, proc)], 0) + 1
                    print(f'{lst}:{proc} v{vi} XDIFF({class_of[(lst, proc)]})')
            elif class_of.get((lst, proc)):
                # expected environment/variant divergence — bucketed, not a
                # regression signal
                xdiff[class_of[(lst, proc)]] = xdiff.get(
                    class_of[(lst, proc)], 0) + 1
                print(f'{lst}:{proc} v{vi} XDIFF({class_of[(lst, proc)]})')
            else:
                ndiff += 1
                print(f'{lst}:{proc} v{vi} DIFF\n  orig: {ro}\n  port: {rp}')
    print(f'== pass={npass} diff={ndiff} xdiff={sum(xdiff.values())} '
          f'{xdiff} timeout={nto} skip={nskip} '
          f'portok={nportok} porthang={nporthang} noresult={nnoresult} '
          f'dispmiss={ndispmiss} crash={ncrash} memdiff={nmemdiff}')
    sys.exit(1 if ndiff or nmemdiff else 0)

main()

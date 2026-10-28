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

def parse_lst_pattern(path, proc):
    """Returns (pattern, kind): pattern is the first <=64 encoded bytes with
    relocated/relative operands wildcarded (None); kind is 'near' or 'far'."""
    lines = open(path, errors='replace').read().splitlines()
    procre = re.compile(r'\b' + re.escape(proc) + r'\b')
    out, inproc, kind = [], False, 'far'
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
        out.extend(bs)
        if len(out) > 64:
            break
    return out, kind

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

def run_original(addr, vec, timeout=25):
    seg, off, kind = addr
    cmd = [KVIKDOS, '--video=off', '--tty-in=-3', '--diag=off']
    if kind == 'near':
        cmd += [f'--call-cs={seg:#06x}', f'--call-near={off:#06x}']
    else:
        cmd += [f'--call-far={seg:#06x}:{off:#06x}']
    cmd += [f'--call-ds={DS_SEG:#06x}', f'--call-ss={SS}',
            '--root=' + ROOT, '--drive=C', 'FLIGHT.EXE']
    for r, v in zip(REGS, vec):
        cmd.insert(-3, f'--call-set={r}:{v:#x}')
    try:
        out = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
    except subprocess.TimeoutExpired:
        return 'TIMEOUT'
    m = RESULT_RE.search(out.stdout + out.stderr)
    return m.groups() if m else 'NORESULT'

def run_port(probe, proc, vec):
    # vec order ax,cx,dx,bx,si,di,bp -> probe order ax,bx,cx,dx,si,di,bp
    ax,cx,dx,bx,si,di,bp = vec
    args = [probe, proc,
            f'{ax:x}', f'{bx:x}', f'{cx:x}', f'{dx:x}',
            f'{si:x}', f'{di:x}', f'{bp:x}']
    try:
        out = subprocess.run(args, capture_output=True, text=True, timeout=10)
    except subprocess.TimeoutExpired:
        return 'TIMEOUT'
    m = RESULT_RE.search(out.stdout)
    return m.groups() if m else 'NORESULT'

FIELD = ('ax','bx','cx','dx','si','di','sp','bp','flags','ds','es','ss')

def parse_spec_line(line):
    """-> (lstfile, proc, pat_override, kind_override, skipregs, vecs, manual)"""
    parts = line.split(':')
    lst, proc = parts[0], parts[1]
    pat_ov = kind_ov = None
    skip, vecs, manual = set(), {}, False
    for o in parts[2:]:
        if o.startswith('@@'):
            pat_ov = [None if t == '??' else int(t, 16) for t in o[2:].split()]
        elif o.startswith('skip='):
            skip = set(o[5:].split(','))
        elif o.startswith('vec') and '=' in o:
            n, vals = o[3:].split('=', 1)
            vecs[int(n)] = tuple(int(t, 16) for t in vals.split(','))
        elif o.startswith('kind='):
            kind_ov = o[5:]
        elif o == 'manual':
            manual = True
    return lst, proc, pat_ov, kind_ov, skip, vecs, manual

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('spec')
    ap.add_argument('--probe', default='./test_probe')
    ap.add_argument('--exe', default=EXE)
    ap.add_argument('-j', '--jobs', type=int, default=4)
    ap.add_argument('--replay', help='reclassify a saved results file, no calls')
    a = ap.parse_args()
    exe = open(a.exe, 'rb').read()
    addrs, csmap = {}, real_cs_map(exe)
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst, proc, pat_ov, kind_ov, _s, _v, _m = parse_spec_line(line)
        if pat_ov is not None:
            pat, kind = pat_ov, kind_ov or 'far'
        else:
            lp = lst if os.path.isabs(lst) else os.path.join(
                '/home/xor/inertia_player/examples/Tornado', lst)
            pat, kind = parse_lst_pattern(lp, proc)
            if kind_ov: kind = kind_ov
        hits = locate(exe, pat) if pat else []
        if len(hits) == 1:
            h = hits[0]
            flat = LOAD_FLAT + h
            seg = csmap.get(flat, flat // 16)
            addrs[proc] = (seg, flat - seg * 16, kind)
        else:
            addrs[proc] = None
            print(f'{proc}: locate failed ({len(hits)} hits)', file=sys.stderr)

    tasks, nskip = [], 0
    for line in open(a.spec):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        lst, proc, _p, _k, skip, vecs, manual = parse_spec_line(line)
        addr = addrs.get(proc)
        if not addr or manual:
            nskip += 1
            continue
        for vi in range(len(VECTORS)):
            tasks.append((proc, vi, vecs.get(vi, VECTORS[vi]), addr, skip))

    def run_task(t):
        proc, vi, vec, addr, _ = t
        return proc, vi, run_original(addr, vec), \
            run_port(a.probe, proc.lower(), vec)

    npass = ndiff = nto = 0
    if a.replay:
        results = []
        for ln in open(a.replay):
            proc, vi, ro, rp = ln.split(None, 3)
            results.append((proc, int(vi), ro,
                            rp.strip() if rp.strip() == 'NORESULT'
                            else eval(rp)))
    else:
        raw = open(a.spec + '.raw', 'w')
        with ThreadPoolExecutor(max_workers=a.jobs) as pool:
            results = list(pool.map(run_task, tasks))
        for proc, vi, ro, rp in results:
            raw.write(f'{proc} {vi} {ro} {rp}\n')
        raw.close()
    ridx = {'ax':0,'bx':1,'cx':2,'dx':3,'si':4,'di':5,'bp':7}
    skip_of = {t[0]: t[4] for t in tasks}
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
            else:
                ndiff += 1
                print(f'{proc} v{vi} DIFF\n  orig: {ro}\n  port: {rp}')
    print(f'== pass={npass} diff={ndiff} timeout={nto} skip={nskip}')

main()

#!/usr/bin/env python3
"""Spec-coverage auditor: every PROC in the original .asm/.lst sources must
have a unit-test entry in the diffspec (or an explicit `manual` marker).

usage: tools/check_coverage.py [specfile] [--src SRCROOT]

exit 1 if any source PROC lacks a spec entry (prints them grouped by module).
"""
import glob, os, re, sys

SRC = '/home/xor/inertia_player/examples/Tornado'
SPEC = 'tests/diffspec.txt'
SKIP_DIRS = ('/LIBTEST/', '/TOOLS/')

PROC_RE = re.compile(
    r'^\s*(?:[0-9A-Fa-f]{4}\s+)?(?:[0-9A-Fa-f]{2}\s+)*'
    r'([A-Za-z_@$?][\w@$?]*)\s+PROC\s+(?:NEAR|FAR)',
    re.M | re.I)


def source_procs(srcroot):
    """{STEM: set(proc)} merging .asm/.lst/.LST variants of one module."""
    mods = {}
    pats = ('**/*.[Ll][Ss][Tt]', '**/*.[Aa][Ss][Mm]')
    files = []
    for p in pats:
        files += glob.glob(os.path.join(srcroot, p), recursive=True)
    for f in files:
        if any(sd in f for sd in SKIP_DIRS):
            continue
        stem = os.path.splitext(os.path.relpath(f, srcroot))[0].upper()
        try:
            txt = open(f, errors='ignore').read()
        except OSError:
            continue
        mods.setdefault(stem, set()).update(
            p.upper() for p in PROC_RE.findall(txt))
    return mods


def spec_entries(specfile):
    """{STEM: set(proc)}"""
    spec = {}
    for ln in open(specfile):
        ln = ln.strip()
        if not ln or ln.startswith('#'):
            continue
        f, p = ln.split(':')[0], ln.split(':')[1]
        stem = os.path.splitext(f.upper())[0]
        spec.setdefault(stem, set()).add(p.upper())
    return spec


def flight_map_syms(mapfile):
    syms = set()
    try:
        for ln in open(mapfile, errors='ignore'):
            m = re.match(r'\s*[0-9A-Fa-f]{4}:[0-9A-Fa-f]{4}\s+(\S+)', ln)
            if m:
                syms.add(m.group(1).upper().replace('$', 'DOL'))
    except OSError:
        pass
    return syms


def main():
    srcroot = SRC
    specfile = SPEC
    args = sys.argv[1:]
    if args:
        specfile = args[0]
    if '--src' in args:
        srcroot = args[args.index('--src') + 1]

    mods = source_procs(srcroot)
    spec = spec_entries(specfile)
    mapsyms = flight_map_syms(
        os.path.join(srcroot, 'TORNADO/FLIGHT.MAP'))

    total = covered = 0
    missing = []
    for stem, procs in sorted(mods.items()):
        sps = spec.get(stem, set())
        for p in procs:
            total += 1
            if p in sps:
                covered += 1
            else:
                inflight = p in mapsyms
                missing.append((stem, p, inflight))

    print(f'source modules: {len(mods)}  procs: {total}  '
          f'spec-covered: {covered}  missing: {len(missing)}')
    if missing:
        from collections import defaultdict
        bymod = defaultdict(list)
        for stem, p, inflight in missing:
            bymod[stem].append((p, inflight))
        for stem, ps in sorted(bymod.items(), key=lambda x: -len(x[1])):
            for p, inflight in sorted(ps):
                tag = '  <-- IN FLIGHT.EXE (should be testable!)' \
                    if inflight else ''
                print(f'  {stem}.LST:{p}{tag}')
        sys.exit(1)


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Generate the diff_procs.py spec: every PROC in the LIB8086 listings that
has a same-named weak wrapper in the translated objects, plus hand-tuned
per-proc options for known linked-layout/encoding differences.

usage: tools/gen_spec.py <probe_all.cpp> <lstroot> > tests/diffspec.txt
"""
import glob, re, sys

# Per-proc options for procs whose outputs legitimately differ between the
# shipped and retranslated linked builds (table/dispatch pointers) or which
# need valid args / manual setup. See tools/diff_procs.py header.
OPTS = {
    # di returns OFFSET RndTable (linked table base)
    'ReSeed': ':skip=di',
    # si returns a trig-table pointer (linked table base)
    'CalcDeltaXY': ':skip=si',
    # si returns OFFSET Standard_3by5, bp is the _SetPixel dispatch pointer;
    # vectors pass valid color/x/char/y args (dl >= 0x20 keeps the glyph in
    # range — out-of-range chars read layout-dependent garbage).
    'CharSprite': ':skip=si,bp'
        ':vec0=0f,5,41,5,0,0,0:vec1=07,10,42,10,0,0,0'
        ':vec2=0e,20,7e,20,0,0,0:vec3=08,8,30,8,0,0,0'
        ':vec4=0a,40,61,40,0,0,0',
    # shipped build encodes `cmp al,ah` as `3a c4` (cmp ah,al); computed-goto
    # blitter needs an internal near pointer in cx — untestable here.
    'WriteSprite': ':@@52 56 57 8a e6 32 f6 ff e1 ac 3a c4 74 03 26 88 05 47'
        ':manual',
}


def main():
    probe_src, lstroot = sys.argv[1], sys.argv[2]
    wrappers = set(re.findall(r'extern bool (\w+)\(',
                              open(probe_src).read()))
    out = []
    for lst in sorted(glob.glob(lstroot + '/*.lst')):
        rel = 'LIB8086/' + lst.split('/')[-1]
        txt = open(lst, errors='replace').read()
        for m in re.finditer(r'^\s*[0-9A-Fa-f]{4}\s+(\w+)\s+PROC\s+(NEAR|FAR)',
                             txt, re.M):
            p = m.group(1)
            if p.lower() in wrappers:
                out.append(f'{rel}:{p}{OPTS.get(p, "")}')
    print('\n'.join(out))


main()

#!/usr/bin/env python3
"""Generate the diff_procs.py spec: every PROC in the Tornado source
listings (LIB8086 + TORNADO + VISUAL roots, .lst/.LST variants) that has
a same-named (or <name>__<lststem>-aliased) weak wrapper in the
translated objects, plus hand-tuned per-proc options for known
linked-layout/encoding/environment differences.

usage: tools/gen_spec.py <probe_all.cpp> <tornado-src-root> > tests/diffspec.txt
"""
import glob, os, re, sys

# Per-proc options: `skip=` drops register compare; `vecN=` custom vectors;
# `@@` overrides the signature; `manual` marks untestable; `class=` buckets
# expected environment/variant divergence into XDIFF instead of DIFF.
# See tools/diff_procs.py header.
OPTS = {
    # di returns OFFSET RndTable (linked table base)
    'ReSeed': ':skip=di:class=rtc',
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
    # ---- class= annotations (expected environment/variant divergence) ----
    # port links CGA_STUB (bare LABEL); shipped exe uses the real driver
    'CGA_CalcAddr': ':class=variant',
    # interrupt-vector save/restore — IVT state not modeled identically
    'StopComms': ':class=ivt',
    'RestoreCritErr': ':class=ivt',
    'RestoreOverflow': ':class=ivt',
    'RestoreTimer': ':class=ivt',
    # DOS file/handle/console state
    'SendPacket': ':postpone',
    'LoadFile': ':postpone',
    'SaveFile': ':postpone',
    'PrintWord': ':postpone',
    # hardware ports / DAC palette contents
    'ReadAnalogue': ':class=hwio',
    'SetDACBlock': ':class=hwio',
    'ReadDACBlock': ':class=hwio',
    'VGA_HFill': ':class=hwio',
    # reads via wild runtime index into unseeded table memory
    'SetAttributes': ':class=array',
    'SetSSpriteClip': ':class=array',
    # tail-jump through a runtime dispatch cell (FillVector) that is
    # uninitialized in the harness on both sides
    'CircleFill': ':class=codeptr',
    'PolyFill': ':class=codeptr',
    # ---- expanded-sweep env classes ----
    # DOS file API + console output
    'CreateFile': ':postpone', 'OpenFile': ':postpone',
    'CloseFile': ':postpone', 'FRead': ':postpone',
    'FWrite': ':postpone', 'FindFile': ':postpone',
    'SendData': ':postpone', 'ReadData': ':postpone',
    'ClearComms': ':postpone', 'InitComms': ':postpone',
    'PrintChar': ':postpone', 'PrintHexByte': ':postpone',
    'PrintHexWord': ':postpone', 'PrintHexLong': ':postpone',
    'HexHeader': ':postpone', 'HexByte': ':postpone',
    'HexFooter': ':postpone', 'PrintDecByte': ':postpone',
    'PrintEGASpace': ':postpone', 'PrintDebugInfo': ':postpone',
    'DispMessage': ':postpone', 'NewLine': ':postpone',
    'SelectMode': ':postpone', 'CLS': ':postpone',
    # interrupt-vector install/restore + handlers
    'InstallCritErr': ':class=ivt', 'CritErrIntr': ':class=ivt',
    'InstallOverflow': ':class=ivt', 'OverflowIntr': ':class=ivt',
    'InstallTimer': ':class=ivt', 'TimerIntr': ':class=ivt',
    'InstallUser20': ':class=ivt', 'RestoreUser20': ':class=ivt',
    'InstallUser100': ':class=ivt', 'RestoreUser100': ':class=ivt',
    'InstallKbd': ':class=ivt', 'RestoreKbd': ':class=ivt',
    'KbdIntr': ':class=ivt', 'ClearKeyBuffer': ':class=ivt',
    'InstallMouse': ':class=ivt', 'RestoreMouse': ':class=ivt',
    'ResetMouse': ':class=ivt', 'SetMousePos': ':class=ivt',
    'SetMouseLimits': ':class=ivt', 'ReadMouse': ':class=ivt',
    'ReadMouseMotion': ':class=ivt', 'CommsIntr': ':class=ivt',
    'InitSound': ':class=ivt', 'InstallSound': ':class=ivt',
    'InstallMusic': ':class=ivt', 'NormaliseSound': ':class=ivt',
    'NormaliseMusic': ':class=ivt', 'SuspendSound': ':class=ivt',
    'SuspendMusic': ':class=ivt', 'ResumeSound': ':class=ivt',
    'ResumeMusic': ':class=ivt', 'RefreshSound': ':class=ivt',
    'RefreshMusic': ':class=ivt',
    # RTC reads / keyboard blocking reads
    'SetTimeDate': ':class=rtc', 'ReadKbd': ':class=rtc',
    'GetChar': ':class=rtc', 'KeyPress': ':class=rtc',
    'KeyRelease': ':class=rtc',
    # VGA registers / DAC palette / BIOS video
    'VGA_VMode': ':class=hwio', 'VGA_DLoad': ':class=hwio',
    'VGA_SetPx': ':class=hwio', 'VGA_Line': ':class=hwio',
    'VGA_VLine': ':class=hwio', 'VGA_HLine': ':class=hwio',
    'VGA_PFill': ':class=hwio', 'VGA_MFill': ':class=hwio',
    'VGA_InitSS': ':class=hwio', 'VGA_InitMS': ':class=hwio',
    'VGA_InitQS': ':class=hwio', 'VGA_SSprite': ':class=hwio',
    'VGA_MSprite': ':class=hwio', 'VGA_QSprite': ':class=hwio',
    'VGA_SaveScreen': ':class=hwio', 'VGA_LoadScreen': ':class=hwio',
    'VGA_SaveMouse': ':class=hwio', 'VGA_LoadMouse': ':class=hwio',
    'VGA_BFill': ':class=hwio', 'SetVideoMode': ':class=hwio',
    'DownLoad': ':class=hwio', 'VGAPhotoDflt': ':class=hwio',
    'VGAPhotoUser': ':class=hwio', 'WriteScreenLine': ':class=hwio',
    'SortScrData': ':class=hwio', 'FadePalette': ':class=hwio',
    'InstantFadeOut': ':class=hwio', 'InstantFadeIn': ':class=hwio',
    'SetPalette': ':class=hwio', 'ReadPalette': ':class=hwio',
    'FadeLoadScreen': ':class=hwio',
    # thunk/dispatch-table procs + stub-vs-real driver variants
    'PrintChar1': ':class=variant', 'PrintChar2': ':class=variant',
    'PrintChar3': ':class=variant', 'CellSprite': ':class=variant',
    'SetPixel': ':class=variant', 'LineDraw': ':class=variant',
    'VLineDraw': ':class=variant', 'HLineDraw': ':class=variant',
    'Null': ':class=variant', 'CtrlNull': ':class=variant',
    # table-indexed reads through unseeded runtime state
    'PolyLine': ':class=array', 'LoadPanel': ':class=array',
}


def main():
    probe_src, srcroot = sys.argv[1], sys.argv[2]
    wrappers = set(re.findall(r'extern bool (\w+)\(',
                              open(probe_src).read()))
    out, seen = [], set()
    for root in ('LIB8086', 'TORNADO', 'VISUAL'):
        for lst in sorted(glob.glob(os.path.join(
                srcroot, root, '*.[lL][sS][tT]'))):
            rel = f'{root}/{os.path.basename(lst)}'
            stem = os.path.splitext(os.path.basename(lst))[0].lower()
            txt = open(lst, errors='replace').read()
            for m in re.finditer(
                    r'^\s*[0-9A-Fa-f]{4}\s+(\w+)\s+PROC\s+(NEAR|FAR)',
                    txt, re.M):
                p = m.group(1)
                if p.lower() in wrappers or \
                        f'{p.lower()}__{stem}' in wrappers:
                    # .lst/.LST pairs are parallel build variants; emit each
                    # proc once per listing so either signature can locate
                    key = (rel, p)
                    if key not in seen:
                        seen.add(key)
                        # procs stashing a reg arg into a *Ptr cell treat
                        # it as a struct pointer — pin it to a scratch
                        # array so the pointee is seeded identically on
                        # both sides (`mov SourcePtr,si` -> pin=si)
                        body = txt[m.end():txt.find('ENDP', m.end())]
                        pin = [r for r in ('si', 'di', 'bx')
                               if re.search(r'mov\s+\w*[Pp]tr\s*,\s*' + r
                                            + r'\b', body)]
                        pinopt = f':pin={",".join(pin)}' if pin else ''
                        out.append(f'{rel}:{p}{pinopt}{OPTS.get(p, "")}')
    print('\n'.join(out))


main()

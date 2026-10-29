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
    # ctx: LineClip* call LineClipCheck, whose error path does
    # `mov sp,ClipRecover; jmp ClipEndFail` — a non-local exit relying on
    # the parent ClipLineEnd having stashed sp.  Standalone calls leave
    # ClipRecover=0: orig rets into the weeds (deterministic garbage-run),
    # the emulated RETN underflows.  Tested correctly at ClipLineEnd.
    'LineClipAbove': ':class=ctx', 'LineClipBelow': ':class=ctx',
    'LineClipLeft': ':class=ctx', 'LineClipRight': ':class=ctx',
    'LineClipBehind': ':class=ctx', 'LineClipCheck': ':class=ctx',
    # ctx: heavy procs that chain into runtime-initialized state —
    # panel/file loaders, per-mode dispatch cells (_UpdatePanel[bx],
    # weapon/sound tables) — standalone calls abort on dispatch asserts
    # or chase unseeded chains; verified port-only crash/dispmiss.
    'UpdateNavig': ':class=ctx', 'UpdatePilot': ':class=ctx',
    'UpdateStores': ':class=ctx', 'UpdateStores3': ':class=ctx',
    'SelectActDisp': ':class=ctx', 'UpdateRWR2': ':class=ctx',
    'UpdateADI2': ':class=ctx', 'UpdateCtrlSFace': ':class=ctx',
    'UpdateEScope2': ':class=ctx', 'UpdateHUD2': ':class=ctx',
    'UpdateOnePlane': ':class=ctx', 'UpdateOneHeli': ':class=ctx',
    'AutoAltitude': ':class=ctx', 'WeaponsControl': ':class=ctx',
    'UpdateWeapons': ':class=ctx', 'FLIRDisp': ':class=ctx',
    'FLIRDisp_Ori': ':class=ctx', 'FLIRDisp_Ori2': ':class=ctx',
    'FLIRDisp_Ori3': ':class=ctx', 'FLIRDisp_Ori4': ':class=ctx',
    'TIALDDisp': ':class=ctx', 'TIALDDisp_Ori': ':class=ctx',
    'TIALDDisp_Ori2': ':class=ctx', 'RefDisp': ':class=ctx',
    'ScanSmoke': ':class=ctx', 'RetrieveData': ':class=ctx',
    'VGA_LoadPanel': ':class=ctx', 'VGA_InitPanels': ':class=ctx',
    'LoadPilotPan': ':class=ctx', 'LoadPSidePan': ':class=ctx',
    'LoadNavigPan': ':class=ctx', 'LoadNSidePan': ':class=ctx',
    'VGA_ClrPilotPan': ':class=ctx', 'VGA_ClrNavigPan': ':class=ctx',
    'VGA_DrwNavigPan': ':class=ctx', 'VGA_IronWork': ':class=ctx',
    'VideoBlitter': ':class=ctx', 'QExtraSprite': ':class=ctx',
    'DrawRadarNoise': ':class=ctx', 'StoreWorkScreen': ':class=ctx',
    'SetGameViewMode': ':class=ctx', 'UpdateGameView': ':class=ctx',
    'AdjustZoom': ':class=ctx', 'AdjustTrack': ':class=ctx',
    'RotateHdg': ':class=ctx', 'DemoView': ':class=ctx',
    'WeaponView': ':class=ctx', 'AdjustWpnZoom': ':class=ctx',
    'UpdatePanel': ':class=ctx',
}


def main():
    probe_src, srcroot = sys.argv[1], sys.argv[2]
    probe_txt = open(probe_src).read()
    wrappers = set(re.findall(r'extern bool (\w+)\(', probe_txt))
    # static procs are reachable via a weak sibling + dispatch offset:
    # they appear as {"name", sibling, k<name>} rows in PROCS, not as
    # extern declarations
    wrappers |= set(re.findall(r'\{"(\w+)",\s*\w+,\s*\(m2c::_offsets\)',
                               probe_txt))
    out, seen = [], set()
    ext = {}   # sym -> byte extent from data decls (all listings pooled)
    thunks = set()  # procs dispatching through a runtime-selected _Cell
    for root in ('LIB8086', 'TORNADO', 'VISUAL'):
        for lst in sorted(glob.glob(os.path.join(
                srcroot, root, '*.[lL][sS][tT]'))):
            txt = open(lst, errors='replace').read()
            for _em in re.finditer(
                    r'^\s*(?:[0-9A-Fa-f]+\s+)?([A-Za-z_]\w*)\s+'
                    r'(DB|DW|DD|DQ|DT)\s+([0-9A-Fa-f]+)[hH]?\s+DUP',
                    txt, re.M):
                _esz = {'DB':1,'DW':2,'DD':4,'DQ':8,'DT':10}[_em.group(2)]
                ext.setdefault(_em.group(1).lower(),
                               int(_em.group(3), 16) * _esz)
            for _pm in re.finditer(
                    r'^\s*[0-9A-Fa-f]{4}\s+(\w+)\s+PROC\s+(?:NEAR|FAR)',
                    txt, re.M):
                _bd = txt[_pm.end():txt.find('ENDP', _pm.end())]
                _cm = re.search(
                    r'\bmov\s+((?:ax|bx|cx|dx|si|di|bp))\s*,\s*_\w+',
                    _bd, re.I)
                if _cm and re.search(
                        r'\b(?:jmp|call)\s+' + _cm.group(1) + r'\b',
                        _bd, re.I):
                    thunks.add(_pm.group(1))
    for root in ('LIB8086', 'TORNADO', 'VISUAL'):
        for lst in sorted(glob.glob(os.path.join(
                srcroot, root, '*.[lL][sS][tT]'))):
            rel = f'{root}/{os.path.basename(lst)}'
            stem = os.path.splitext(os.path.basename(lst))[0].lower()
            txt = open(lst, errors='replace').read()
            # EQU/member names (`= NNNN C NAME EQU val` + `NAME EQU`):
            # NAME[reg] indexing a constant is a struc-member read —
            # the reg is a record pointer, not an array index
            equs = set(re.findall(r'^\s*=\s*\S+\s+(?:C\s+)?(\w+)\s+EQU\b',
                                  txt, re.M))
            equs |= set(re.findall(r'^\s*(\w+)\s+EQU\s', txt, re.M))
            # STRUC field names are also member constants (FIELD[reg])
            for _sm in re.finditer(r'\bSTRUCT?\b(.*?)\bENDS\b', txt, re.S):
                equs |= set(re.findall(
                    r'^\s*[0-9A-Fa-f]+\s+[0-9A-Fa-f]*\s+C\s+(\w+)\s+D[BWDT]',
                    _sm.group(1), re.M))
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
                        # MEMBER[reg] with MEMBER an EQU constant is a
                        # struc-member read (OBJ_XSECPOS[si]) — pin the
                        # reg at a seeded scratch record, like *Ptr args
                        for _im in re.finditer(
                                r'\b(\w+)\s*\[\s*(si|di|bx|bp)\s*\]', body):
                            _iname, _ireg = _im.group(1), _im.group(2)
                            if _iname in equs and _ireg not in pin:
                                pin.append(_ireg)
                        # bare [reg]/seg:[reg] memory operands are pointer
                        # uses — pin the reg at seeded scratch (e.g.
                        # `xchg al,es:[di]`, `[si-8]` buffer walks), but
                        # only when the reg is not also a named-array index
                        _named = set(_im.group(1) for _im in re.finditer(
                            r'\b\w+\s*\[\s*(si|di|bx|bp)\s*[+\]]', body))
                        for _ireg in re.findall(
                                r'(?:\b[ecd]s\s*:\s*|(?<![\w.]))'
                                r'\[\s*(si|di|bx|bp)\s*(?:[+\-]\w+)?\]',
                                body):
                            if _ireg not in pin and _ireg not in _named:
                                pin.append(_ireg)
                        pinopt = f':pin={",".join(pin)}' if pin else ''
                        # sym[reg] indexed reads need in-range indices
                        # plus range-seeded elements (idx= mode)
                        idx = [r for r in ('si', 'di', 'bx', 'bp')
                               if r not in pin and
                               re.search(r'\w+\s*\[\s*' + r + r'\s*[+\]]',
                                         body)]
                        idxopt = f':idx={",".join(idx)}' if idx else ''
                        # lods-driven procs walk serialized data streams
                        # (face programs, anim scripts): a reg arg is a
                        # stream pointer into unseeded bytes — class=array
                        cls = OPTS.get(p)
                        # procs that dispatch through a runtime-selected
                        # code-pointer cell (`mov bp,_Cell` + `call|jmp bp`
                        # — SetViewMode fills _ScaleVPyramid/_CalcCRT/etc.)
                        # can't run standalone on either side — class=ctx
                        if not cls:
                            _cm = re.search(
                                r'\bmov\s+(ax|bx|cx|dx|si|di|bp)\s*,\s*'
                                r'(_\w+)', body, re.I)
                            if _cm and re.search(
                                    r'\b(?:jmp|call)\s+'
                                    + _cm.group(1) + r'\b', body, re.I):
                                cls = ':class=ctx'
                        # callers of cell-thunks inherit ctx — the thunk
                        # never dispatches standalone (orig hangs chasing
                        # unselected cells, port aborts on dispatch miss)
                        if not cls and thunks and re.search(
                                r'\b(?:call|jmp)\s+(?:\w+\s+ptr\s+)?('
                                + '|'.join(re.escape(t) for t in thunks)
                                + r')\b', body, re.I):
                            cls = ':class=ctx'
                        if not cls and re.search(
                                r'\blods[bwd]?\b', body):
                            cls = ':class=array'
                        # procs that switch ds/es into a runtime segment
                        # (MOBOBJ1 etc. — loaded from files, not the image)
                        # read state no static poke can reach — class=ctx.
                        # catches both `mov ds,SEG` and `mov dx,SEG;mov ds,dx`
                        if not cls:
                            _rseg = (r'MOBOBJ\d|FEATOBJ\d|FLATOBJ\d|'
                                     r'GRNDOBJ\d|MSECDATA\d|SECDATA\d|'
                                     r'WPNDATA|WSDATA|TILEDATA|SKYDATA')
                            if re.search(
                                    r'\b(?:ds|es)\s*,\s*(?:' + _rseg + r')\b',
                                    body):
                                cls = ':class=ctx'
                            else:
                                _ms = re.search(
                                    r'\bmov\s+(ax|bx|cx|dx|si|di|bp)\s*,\s*'
                                    r'(' + _rseg + r')\b', body, re.I)
                                if _ms and re.search(
                                        r'\bmov\s+(?:ds|es)\s*,\s*'
                                        + _ms.group(1) + r'\b', body, re.I):
                                    cls = ':class=ctx'
                        # named store destinations get wr= so post-call
                        # memory is compared sym-relatively (captures
                        # writes the result regs can't see).  Reg-pointer
                        # targets ([si] etc.) stay uncovered — no reserved
                        # scratch range exists yet.  Scan a comment-
                        # stripped copy: `; add 4,`-style text otherwise
                        # yields bogus dest names
                        bodync = re.sub(r';[^\n]*', '', body)
                        wrd = []
                        for _wm in re.finditer(
                                r'\b(?:mov|xchg|add|sub|adc|sbb|and|or|'
                                r'xor|inc|dec|neg|not|pop|imul)\s+'
                                r'(?:byte|word|dword|ptr|far|near|short'
                                r'|\s)*(\w+)\s*'
                                r'(?:\[\s*(?:si|di|bx|bp)[^\]]*\])?\s*,',
                                bodync):
                            _dn = _wm.group(1)
                            if not _dn[0].isalpha() and _dn[0] != '_':
                                continue
                            if _dn in equs or _dn.upper() in (
                                    'AX','BX','CX','DX','SI','DI','BP',
                                    'SP','CS','DS','ES','SS','AL','AH',
                                    'BL','BH','CL','CH','DL','DH'):
                                continue
                            # pointer cells (*Ptr stash, _CodeCell) hold
                            # layout-dependent bytes — byte compare would
                            # false-positive on every vector
                            if _dn.endswith('Ptr') or _dn.endswith('ptr')\
                                    or _dn.startswith('_'):
                                continue
                            # `mov NAME,sp/ss/cs/bp/offset` stashes machine
                            # pointers (ClipRecover=sp) — same problem
                            if re.search(
                                    r'\bmov\s+(?:\w+\s+ptr\s+)?'
                                    + re.escape(_dn) +
                                    r'\s*,\s*(?:sp|ss|cs|bp|offset)\b',
                                    body):
                                continue
                            if _dn not in wrd:
                                wrd.append(_dn)
                        wropt = ''
                        for _dn in wrd:
                            _l = ext.get(_dn.lower(), 0)
                            wropt += f':wr={_dn}' + (
                                f',{min(_l, 0x100):x}' if _l > 4 else '')
                        out.append(
                            f'{rel}:{p}{pinopt}{idxopt}{wropt}{cls or ""}')
    print('\n'.join(out))


main()

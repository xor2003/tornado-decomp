/* decomp_hud.cpp — clean-C rewrites of TORNADO/HUD procedures.
 * Semantics from the authoritative TORNADO/HUD.ASM source. */

#include "hud.h"

/* LimitPitch — pass bp = pitch/10, dx = count dir; flips Px/Py sign when
 * |pitch| > 90 degs so the ladder is drawn reversed.  kill: flags */
bool limitpitch(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return clipline(_i, _state);        /* dispatch-door forward */
    CMP(bp, 9);                                 /* pitch <= 90 degs? */
    if (ZF || (SF != OF)) goto noflip1;         /* jle — yes -> */
    SUB(bp, 18);                                /* flip pitch 180 degs */
    goto sortflip;
noflip1:
    CMP(bp, -9);                                /* pitch >= -90 degs? */
    if (!ZF && (SF == OF)) goto done;           /* jge — yes -> */
    ADD(bp, 18);                                /* flip pitch 180 degs */
sortflip:
    NEG(bp);                                    /* invert sign */
    NEG(dx);                                    /* invert count direction */
    /* flip points */
    NEG(px1);  NEG(py1);
    NEG(px2);  NEG(py2);
    NEG(px3);  NEG(py3);
    NEG(px4);  NEG(py4);
    NEG(px5);  NEG(py5);
    NEG(px6);  NEG(py6);
    NEG(px7);  NEG(py7);
    NEG(px8);  NEG(py8);
    NEG(px9);  NEG(py9);
    NEG(px10); NEG(py10);
    NEG(px11); NEG(py11);
    NEG(px12); NEG(py12);
done:
    return m2c::RETN_(0, _state);
}

/* DispAirTgtData — print the air-target $ string when a target exists.
 * kill: assume all */
bool dispairtgtdata(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return clipline(_i, _state);        /* dispatch-door forward */
    CMP(airtgtptr, -1);
    if (ZF) goto done;
    si = m2c::near_offset_external(airtgtdol);
    CALL(printdol, 0);
done:
    return m2c::RETN_(0, _state);
}

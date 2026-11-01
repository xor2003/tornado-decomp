// Clean-C rewrites of HUD2 procedures. HUD2.ASM remains the
// authoritative source; these replace the generated lifted bodies one
// procedure at a time while preserving register/flag/data semantics.

#include "hud2.h"

//* LimitPitch2 - limit pitch value
//*
//* pass: bp = pitch value
//*       dx = count direction
//* ret : bp = pitch value -9 .. 0 .. +9
//*       dx = count direction
//* kill: flags
bool limitpitch2(m2c::_offsets _i, struct m2c::_STATE* _state)
{
    X86_REGREF

    /* cmp bp,9    ;pitch <= 90 degs? */
    CMP(bp, 9);
    /* jle @F      ;yes -> */
    if ((ZF || SF != OF)) goto check_lo;

    /* sub bp,18   ;flip pitch 180 degs */
    SUB(bp, 18);
    goto sortflip2;

check_lo:
    /* cmp bp,-9   ;pitch >= -90 degs? */
    CMP(bp, -9);
    /* jge @F      ;yes -> */
    if ((short)(bp) >= (short)(-9)) goto done;

    /* add bp,18   ;flip pitch 180 degs */
    ADD(bp, 18);

sortflip2:
    /* neg bp      ;invert sign */
    NEG(bp);
    /* neg dx      ;invert count direction */
    NEG(dx);

//* flip points
    NEG(px1b);
    NEG(py1b);
    NEG(px2b);
    NEG(py2b);
    NEG(px3b);
    NEG(py3b);
    NEG(px4b);
    NEG(py4b);
    NEG(px5b);
    NEG(py5b);
    NEG(px6b);
    NEG(py6b);
    NEG(px7b);
    NEG(py7b);
    NEG(px8b);
    NEG(py8b);
    NEG(px9b);
    NEG(py9b);
    NEG(px10b);
    NEG(py10b);
    NEG(px11b);
    NEG(py11b);
    NEG(px12b);
    NEG(py12b);

done:
    return m2c::RETN_(0, _state);
}

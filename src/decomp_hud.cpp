// Clean-C rewrites of HUD procedures. HUD.ASM remains the
// authoritative source; these replace the generated lifted bodies one
// procedure at a time while preserving register/flag/data semantics.

#include "hud.h"

//* UpdateAlt - update altitude display
//*
//* pass: DispBarAlt
//*       TrueRadAlt
//* ret : nothing
//* kill: assume all
bool updatealt(m2c::_offsets _i, struct m2c::_STATE* _state)
{
    X86_REGREF

    /* mov si,OFFSET RadAlt$   ;assume disp rad alt */
    si = m2c::near_offset_external(radaltdol);
    /* cmp TrueRadAlt,5000     ;disp rad alt? */
    CMP(trueradalt, 5000);
    /* jb @F                   ;yes -> */
    if ((dw)(trueradalt) >= (dw)(5000)) {
        /* mov si,OFFSET BarAlt$  ;disp bar alt */
        si = m2c::near_offset_external(baraltdol);
    }
    /* @@: call Print$ */
    CALLF(printdol, 0);

    return m2c::RETN_(0, _state);
}

/* decomp_companel.cpp — clean-C rewrites of TORNADO/COMPANEL procedures.
 * Semantics from the authoritative TORNADO/COMPANEL.ASM source.
 * Only the register/flag-leaf procs are rewritten here; the FAR
 * table-dispatch procs (Draw, Clear, Load, Init, Update) call through
 * runtime mode tables and are context/class-bound.  Non-dispatched calls
 * forward to updatepanel (stays lifted) as the single TU door. */

#include "companel.h"

/* SetPanelMode — pass ax = new panel mode; set PanelMode + PanelLoad
 * (reload count from CountLoad[ScreenMode]).  kill: ax,bx,flags */
bool setpanelmode(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return updatepanel(_i, _state);     /* dispatch-door forward */
    panelmode = ax;
    bx = screenmode;
    SHR(bx, 1);                                 /* /2 byte index */
    al = *((db*)&countload + bx);
    *(panelload) = al;
    return m2c::RETN_(0, _state);
}

/* Null — stub panel handler for unsupported screen modes; cf=0 (no error). */
bool null(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return updatepanel(_i, _state);
    CLC;                                        /* cf = 0 = no error */
    return m2c::RETN_(0, _state);
}

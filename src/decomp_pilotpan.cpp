/* decomp_pilotpan.cpp — clean-C rewrites of TORNADO/PILOTPAN procedures.
 * Semantics from the authoritative TORNADO/PILOTPAN.ASM source. */

#include "pilotpan.h"

/* UpdateCompass — print the compass $ string.  kill: si */
bool updatecompass(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return initpanel(_i, _state);       /* dispatch-door forward */
    si = m2c::near_offset_external(compassdol);
    CALL(printdol, 0);
    return m2c::RETN_(0, _state);
}

/* UpdateOxyDolly — toggle OxyDollyPos when the oxygen system works and
 * OXY_TIME has elapsed; resets the timer otherwise.  kill: ax,flags */
bool updateoxydolly(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return initpanel(_i, _state);       /* dispatch-door forward */
    TEST(ssf_oxygen, 1);                        /* oxygen system working? */
    if (ssf_oxygen & 1) goto done;              /* jnz — no -> */
    ax = oxydollytimer;
    SUB(ax, lastframe);
    if (!CF) goto storetimer;                   /* jnc — ok -> */
    XOR(oxydollypos, 1);
    ax = oxy_time;
storetimer:
    oxydollytimer = ax;
done:
    return m2c::RETN_(0, _state);
}

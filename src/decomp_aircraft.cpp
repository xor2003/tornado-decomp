/* decomp_aircraft.cpp — clean-C rewrites of TORNADO/AIRCRAFT procedures.
 *
 * Semantics from the authoritative TORNADO/AIRCRAFT.ASM source and its
 * original comments.  All procs below are NEAR — bodies end with
 * RETN_(0), consuming the caller's pushed return tag exactly like `ret`.
 *
 * si always points at the MOBILE + VIEWPOINT + AIRCRAFT compound record;
 * _AC_* fields address it as (aircraft*)raddr(ds, si + 6 + 18).
 */

#include "aircraft.h"

#define AC(si_) ((aircraft*)raddr(ds, (6 + 18) + (si_)))

/* SetEWRTimer — reset EWR exposure timer to 60..100.8s */
bool setewrtimer(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);                 /* 0.00 ..   2.55 */
    SHL(ax, 1);                      /* 0.00 ..   5.10 */
    SHL(ax, 1);                      /* 0.00 ..  10.20 */
    SHL(ax, 1);                      /* 0.00 ..  20.40 */
    SHL(ax, 1);                      /* 0.00 ..  40.80 */
    ADD(ax, 60*100);                 /* 60.00 .. 100.80 */
    ewrexposetimer = ax;
    return m2c::RETN_(0, _state);
}

/* SetBreakTimer — reset break-off timer to 60..141.6s */
bool setbreaktimer(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);                 /* 0.00 ..   2.55 */
    SHL(ax, 1);                      /* 0.00 ..   5.10 */
    SHL(ax, 1);                      /* 0.00 ..  10.20 */
    SHL(ax, 1);                      /* 0.00 ..  20.40 */
    SHL(ax, 1);                      /* 0.00 ..  40.80 */
    SHL(ax, 1);                      /* 0.00 ..  81.60 */
    ADD(ax, 60*100);                 /* 60.00 .. 141.60 */
    breaktimer = ax;
    return m2c::RETN_(0, _state);
}

/* SetVeryFast — VERY_FAST = 8000..8511 (588..626 kts) */
bool setveryfast(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);                 /*   0 .. 255 */
    SHL(ax, 1);                      /*   0 .. 511 */
    ADD(ax, 8000);                   /* 8000 .. 8511 */
    very_fast = ax;
    return m2c::RETN_(0, _state);
}

/* SetAATimer — reset AA activity timer to 60..100.8s */
bool setaatimer(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);                 /* 0.00 ..   2.55 */
    SHL(ax, 1);                      /* 0.00 ..   5.10 */
    SHL(ax, 1);                      /* 0.00 ..  10.20 */
    SHL(ax, 1);                      /* 0.00 ..  20.40 */
    SHL(ax, 1);                      /* 0.00 ..  40.80 */
    ADD(ax, 60*100);                 /* 60.00 .. 100.80 */
    m2c::setdata(&AC(si)->ac_aa_timer, m2c::getdata(ax));
    return m2c::RETN_(0, _state);
}

/* SetCombatMode — si -> compound record, di -> opponent record.
 * Enter CTRL_COMBAT: clear evade/upright flags, reset evade history. */
bool setcombatmode(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    m2c::setdata(&AC(si)->ac_ctrl_mode, m2c::getdata((dw)ctrl_combat));
    m2c::setdata(&AC(si)->ac_opp_ptr, m2c::getdata(di));
    AND(*(dw*)&AC(si)->ac_flags, ~(aflg_evade_hi + aflg_evade_lo + aflg_upright));
    XOR(ax, ax);
    m2c::setdata(&AC(si)->ac_prev_perr, m2c::getdata(ax));
    m2c::setdata(&AC(si)->ac_prev_prate, m2c::getdata(ax));
    m2c::setdata(&AC(si)->ac_evade_timer, m2c::getdata(ax));
    return m2c::RETN_(0, _state);
}

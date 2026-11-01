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

/* FRACADJ dest — the shared fixed-point product rounding:
 *   shl ax,1 / rcl dx,1 / shl ax,1 / adc dx,0  ->  dest = dx */
#define FRACADJ_D(dst) do {                     \
        SHL(ax, 1); RCL(dx, 1);                 \
        SHL(ax, 1); ADC(dx, 0);                 \
        dst = dx;                               \
    } while (0)

/* NEG32 dx,ax — 32-bit negate */
static void neg32(m2c::_STATE* _state) {
    X86_REGREF
    ax = ~ax;
    dx = ~dx;
    ADD(ax, 1);
    ADC(dx, 0);
}

/* dx:ax /= 4 (arithmetic), avoiding -1 truncation on negatives:
 * NEG32; sar32x2; NEG32 — flag-exact (the TEST supplies jns) */
static void sar32x2(m2c::_STATE* _state) {
    X86_REGREF
    TEST(dx, dx);
    if (!SF) {
        SHR(dx, 1); RCR(ax, 1);
        SHR(dx, 1); RCR(ax, 1);
    } else {
        neg32(_state);
        SHR(dx, 1); RCR(ax, 1);
        SHR(dx, 1); RCR(ax, 1);
        neg32(_state);
    }
}

/* CalcAngles — AC_Data fine angles (pdegs*128) -> AC_View VP_HDG/
 * VP_PITCH/VP_ROLL (pdegs, /128 rounded up, & 1ff).
 * Named *_aircraft: `calcangles` collides with VISLIB's weak global —
 * the spec binds calcangles__aircraft -> module dispatch, so this
 * readable copy is referenced but not probe-invoked. */
bool calcangles_aircraft(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    cl = 7;                                     /* /128 */
    ax = ac_data.ac_hfine;
    SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
    ac_view.vp_hdg = ax;
    ax = ac_data.ac_pfine;
    SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
    ac_view.vp_pitch = ax;
    ax = ac_data.ac_rfine;
    SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
    ac_view.vp_roll = ax;
    return m2c::RETN_(0, _state);
}

/* CalcDeltaXYZ — delta xft/yft/zft for the frame.
 * ret : ax = delta xft (AC_XFINE accumulates the fine part),
 *       bx = delta yft, cx = delta zft;  kill: assume all */
bool calcdeltaxyz(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    di = deltatime;

    /* speed * cos(lift) */
    bx = ac_data.ac_lift_vctr;
    cl = 7;
    SHR(bx, cl);                                /* fine pdegs -> pdegs */
    ADC(bx, 0);                                 /* ROUNDUP */
    AND(bx, 0x01ff);
    AND(bx, 0x01ff); SHL(bx, 1);                /* COSINE dx,bx */
    dx = *(dw*)(((db*)&costable) + bx);
    ax = ac_data.ac_vtas;
    IMUL1_2(dx);
    FRACADJ_D(bp);                              /* bp = speed * cos(lift) */

    /* sin/cos hdg */
    bx = ac_view.vp_hdg;                        /* SINCOS ax,bx,bx */
    AND(bx, 0x01ff); SHL(bx, 1);
    ax = *(dw*)(((db*)&sintable) + bx);
    bx = *(dw*)(((db*)&costable) + bx);

    /* delta xft = bp * sin(hdg) * DeltaTime */
    IMUL1_2(bp);
    FRACADJ_D(ax);
    IMUL1_2(di);
    sar32x2(_state);
    ADD(ac_data.ac_xfine, ax);
    ADC(dx, 0);
    ax = bp;                                    /* speed * cos(lift) */
    bp = dx;                                    /* bp = delta xft */

    /* delta yft = bp * cos(hdg) * DeltaTime */
    IMUL1_2(bx);
    FRACADJ_D(ax);
    IMUL1_2(di);
    sar32x2(_state);
    ADD(ac_data.ac_yfine, ax);
    ADC(dx, 0);
    bx = dx;                                    /* bx = delta yft */

    /* delta zft = speed * sin(lift fine) * DeltaTime */
    ax = ac_data.ac_lift_vctr;
    PUSH(bx); PUSH(di); PUSH(bp);
    CALLF(calcsinefine, 0);
    POP(bp); POP(di); POP(bx);
    dx = ac_data.ac_vtas;
    IMUL1_2(dx);
    FRACADJ_D(ax);
    IMUL1_2(di);
    sar32x2(_state);
    ADD(ac_data.ac_zfine, ax);
    ADC(dx, 0);
    cx = dx;                                    /* cx = delta zft */
    ax = bp;                                    /* ax = delta xft */
    return m2c::RETN_(0, _state);
}

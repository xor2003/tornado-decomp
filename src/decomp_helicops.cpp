/* decomp_helicops.cpp — clean-C rewrites of TORNADO/HELICOPS procedures.
 * Semantics from the authoritative TORNADO/HELICOPS.ASM source. */

#include "helicops.h"

/* FRACADJ dest — the shared fixed-point product rounding:
 *   shl ax,1 / rcl dx,1 / shl ax,1 / adc dx,0  ->  dest = dx */
#define FRACADJ_D(dst) do {                     \
        SHL(ax, 1); RCL(dx, 1);                 \
        SHL(ax, 1); ADC(dx, 0);                 \
        dst = dx;                               \
    } while (0)

/* NEG32 dx,ax — 32-bit negate */
static void hc_neg32(m2c::_STATE* _state) {
    X86_REGREF
    ax = ~ax;
    dx = ~dx;
    ADD(ax, 1);
    ADC(dx, 0);
}

/* dx:ax /= 4 (arithmetic), avoiding -1 truncation on negatives:
 * NEG32; sar32x2; NEG32 — flag-exact (the TEST supplies jns) */
static void hc_sar32x2(m2c::_STATE* _state) {
    X86_REGREF
    TEST(dx, dx);
    if (!SF) {
        SHR(dx, 1); RCR(ax, 1);
        SHR(dx, 1); RCR(ax, 1);
    } else {
        hc_neg32(_state);
        SHR(dx, 1); RCR(ax, 1);
        SHR(dx, 1); RCR(ax, 1);
        hc_neg32(_state);
    }
}

/* UpdateHelicops — update all eight helicopter records (4 allied,
 * 4 enemy).  FAR proc.  kill: si */
bool updatehelicops(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return inithelicops(_i, _state);    /* dispatch-door forward */
    si = m2c::near_offset_external(ahelicopter1);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ahelicopter2);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ahelicopter3);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ahelicopter4);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ehelicopter1);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ehelicopter2);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ehelicopter3);
    CALL(updateoneheli, 0);
    si = m2c::near_offset_external(ehelicopter4);
    CALL(updateoneheli, 0);
    return m2c::RETF_(0, _state);
}

/* CtrlTouchDown — helicopter touchdown control: restart/resupply when
 * grounded on the waypoint, else decay vtas toward LAND_ZDOT and pitch
 * the lift vector to -90degs.  kill: ax,si,flags */
bool ctrltouchdown(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return inithelicops(_i, _state);    /* dispatch-door forward */
    ax = hc_data.hc_zfine;
    OR(ax, *(dw*)((db*)&hc_view + vp_zft_lo));  /* WORD PTR VP_ZFT_LO */
    if (!(ax | *(dw*)((db*)&hc_view + vp_zft_lo))) goto airborne;
    si = hc_data.hc_wp_ptr;
    ax = ctrl_null;                             /* assume stopping */
    if (((waypoint*)raddr(ds, si))->wp_action == hc_wp_restart) {
        XOR(ax, ax);
        hc_data.hc_event = al;
        hc_data.hc_delay = resupply_delay;
        hc_data.hc_drone_num = al;
        hc_data.hc_event_num = -1;
        hc_data.hc_pfine = ax;
        hc_data.hc_rfine = ax;
        hc_data.hc_vtas = ax;
        hc_data.hc_vtas_fine = ax;
        hc_data.hc_lift_vctr = ax;
        hc_data.hc_accel_pfine = ax;
        si = helicopterptr;
        ADD(si, hc_waypoints + way_rec_size);   /* ptr -> second waypoint */
        hc_data.hc_wp_ptr = si;
        ax = ctrl_takeoff;
    }
    hc_data.hc_ctrl_mode = ax;
    goto done;
airborne:
    /* ContTouchDown */
    if (*(dw*)((db*)&hc_view + vp_zft_hi) > 0)  /* zft > 65,535ft? */
        goto checkzdot;
    if (*(dw*)((db*)&hc_view + vp_zft_lo) <= 10)/* zft <= 10ft? */
        goto decel;                             /* yes -> */
checkzdot:
    if (hc_data.hc_vtas == land_zdot)           /* reached steady zdot? */
        goto landzdotok;
    ax = land_zdot/4;                           /* accel = zdot / 4 */
    dx = deltatime;
    IMUL1_2(dx);
    SHL(ax, 1);                                 /* fractional multiply adj */
    RCL(dx, 1);
    ADD(hc_data.hc_vtas_fine, ax);
    ADC(hc_data.hc_vtas, dx);
    if (hc_data.hc_vtas < land_zdot)            /* reached steady zdot? */
        goto landzdotok;                        /* no -> */
    hc_data.hc_vtas = land_zdot;
    hc_data.hc_vtas_fine = 0;
    goto landzdotok;
decel:
    /* DecelTouchDown */
    hc_data.hc_vtas = land_zdot/2;
    hc_data.hc_vtas_fine = 0;
landzdotok:
    hc_data.hc_lift_vctr = -128*128;            /* -90degs */
done:
    return m2c::RETN_(0, _state);
}

/* CalcAngles — HC_Data fine angles (pdegs*128) -> HC_View VP_HDG/
 * VP_PITCH/VP_ROLL (pdegs, /128 rounded up, & 1ff).
 * Named *_helicops: `calcangles` is static inside HELICOPS (no weak
 * door) — reached via the inithelicops dispatch rep; this readable
 * copy is referenced but not probe-invoked. */
bool calcangles_helicops(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    cl = 7;                                     /* /128 */
    ax = hc_data.hc_hfine;
    SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);   /* ROUNDUP */
    hc_view.vp_hdg = ax;
    ax = hc_data.hc_pfine;
    SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
    hc_view.vp_pitch = ax;
    ax = hc_data.hc_rfine;
    SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
    hc_view.vp_roll = ax;
    return m2c::RETN_(0, _state);
}

/* CalcDeltaXYZ — delta xft/yft/zft for the frame.
 * pass: nothing (reads HC_Data/HC_View, DeltaTime).
 * ret : ax = delta xft, bx = delta yft, cx = delta zft.
 * kill: dx,bp,di,flags.  Static in HELICOPS — readable twin. */
bool calcdeltaxyz_helicops(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    di = deltatime;

    /* speed * cos(lift) */
    bx = hc_data.hc_lift_vctr;
    cl = 7;
    SHR(bx, cl);                                /* fine pdegs -> pdegs */
    ADC(bx, 0);                                 /* ROUNDUP */
    AND(bx, 0x01ff);
    SHL(bx, 1);                                 /* COSINE dx,bx */
    dx = *(dw*)(((db*)&costable) + bx);
    ax = hc_data.hc_vtas;
    IMUL1_2(dx);
    FRACADJ_D(bp);                              /* bp = speed * cos(lift) */

    /* sin/cos hdg — SINCOS ax,bx,bx */
    bx = hc_view.vp_hdg;
    AND(bx, 0x01ff); SHL(bx, 1);
    ax = *(dw*)(((db*)&sintable) + bx);
    bx = *(dw*)(((db*)&costable) + bx);

    /* delta xft = bp * sin(hdg) * DeltaTime */
    IMUL1_2(bp);
    FRACADJ_D(ax);
    IMUL1_2(di);
    hc_sar32x2(_state);                         /* /4, -1-safe */
    ADD(hc_data.hc_xfine, ax);
    ADC(dx, 0);
    ax = bp;                                    /* speed * cos(lift) */
    bp = dx;                                    /* bp = delta xft */

    /* delta yft = bp * cos(hdg) * DeltaTime */
    IMUL1_2(bx);
    FRACADJ_D(ax);
    IMUL1_2(di);
    hc_sar32x2(_state);
    ADD(hc_data.hc_yfine, ax);
    ADC(dx, 0);
    bx = dx;                                    /* bx = delta yft */

    /* delta zft = speed * sin(lift fine) * DeltaTime */
    ax = hc_data.hc_lift_vctr;
    PUSH(bx); PUSH(di); PUSH(bp);
    CALLF(calcsinefine, 0);
    POP(bp); POP(di); POP(bx);
    dx = hc_data.hc_vtas;
    IMUL1_2(dx);
    FRACADJ_D(ax);
    IMUL1_2(di);
    hc_sar32x2(_state);
    ADD(hc_data.hc_zfine, ax);
    ADC(dx, 0);
    cx = dx;                                    /* cx = delta zft */
    ax = bp;                                    /* ax = delta xft */
    return m2c::RETN_(0, _state);
}

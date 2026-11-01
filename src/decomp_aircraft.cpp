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

/* CalcTaxiRngBrg — range and bearing of the taxi route node.
 * ret : AC_WPRng = dx, ax = range;  AC_WPBrg = bx = si = bearing (pdegs);
 *       AC_WPBrgFine = bp = di = bearing (fine pdegs);  kill: cx, flags.
 * note: Assume range < 65,536ft — viewpoint and waypoint are in-sector. */
bool calctaxirngbrg(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* create temp waypoint for taxi route node (to calc range and bearing) */
    ax = ac_view.vp_xsec;
    taxiwp.wp_xsec = ax;
    ax = ac_view.vp_ysec;
    taxiwp.wp_ysec = ax;
    ax = ac_data.ac_taxi_xft;
    taxiwp.wp_xft = ax;
    ax = ac_data.ac_taxi_yft;
    taxiwp.wp_yft = ax;

    /* calc range and bearing of taxi route node */
    si = m2c::near_offset_external(ac_view);
    di = m2c::near_offset_external(taxiwp);
    CALLF(calcrngbrgvp_wp, 0);
    *(dw*)(((db*)&ac_wprng) + 2) = dx;
    *(dw*)(&ac_wprng) = ax;
    ac_wpbrg = bx;
    ac_wpbrgfine = bp;
    return m2c::RETN_(0, _state);
}

/* ProxEnemyIC — check proximity to enemy interceptors.
 * pass: cx = xsec, bx = ysec, bp = range threshold (sectors):
 *       0 = 1*1, 1 = 3*3, 2 = 5*5 etc.
 * ret : cf = 0: located, si -> MOBILE+VIEWPOINT+AIRCRAFT compound;
 *       cf = 1: not located.  kill: ax, dx, flags */
#define PROX_CHECK(ea) do {                                             \
        si = m2c::near_offset_external(ea);                             \
        CALL(checkicavail, 0);                                          \
        if (CF) break;                                                  \
        ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds, 6 + si))->vp_xsec))); \
        SUB(ax, cx);                                                    \
        CWD; XOR(ax, dx); SUB(ax, dx);              /* ABSV */           \
        CMP(ax, bp);                                                    \
        if ((dw)ax > (dw)bp) break;                                     \
        ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds, 6 + si))->vp_ysec))); \
        SUB(ax, bx);                                                    \
        CWD; XOR(ax, dx); SUB(ax, dx);              /* ABSV */           \
        CMP(ax, bp);                                                    \
        if ((dw)ax > (dw)bp) break;                                     \
        CLC;                                        /* located */       \
        goto proxenemyexit;                                             \
    } while (0)

bool proxenemyic(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PROX_CHECK(eaircraft7);
    PROX_CHECK(eaircraft8);
    PROX_CHECK(eaircraft9);
    PROX_CHECK(eaircraft10);
    PROX_CHECK(eaircraft11);
    PROX_CHECK(eaircraft12);
    STC;                                            /* not located */
proxenemyexit:
    return m2c::RETN_(0, _state);
}
#undef PROX_CHECK

/* MINM ax — clamp ax>=0 keeping flag residue:
 *   cmc / rcr ax,1 / cwd / rcl ax,1 / and ax,dx */
#define MINM_AX() do {                                              \
        CMC; RCR(ax, 1); CWD; RCL(ax, 1); AND(ax, dx);              \
    } while (0)

/* AutoLGB — pass: cx = number of weapons in package.
 * kill: assume all (except cf) */
bool autolgb(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* store pass params */
    weaponnum = cx;
    /* check for release in progress */
    CMP(ac_data.ac_arm_lock, 0);
    if ((dw)ac_data.ac_arm_lock > (dw)0) goto contlgb;
    /* release interlock — check target ahead (avoid spurious release) */
    ax = ac_view.vp_hdg;
    dx = ac_wpbrg;
    CALLF(calcangdiff, 0);
    CMP(ax, 14);                                /* ?0? */
    if ((dw)ax > (dw)14) goto exitlgb;
    /* check for release — release if range <= zft / 2 */
    ax = *((dw*)((db*)&ac_view + vp_zft_lo));
    dx = *((dw*)((db*)&ac_view + vp_zft_hi));
    SHR(dx, 1); RCR(ax, 1);
    CMP(*(dw*)(((db*)&ac_wprng) + 2), dx);
    if ((dw)*(dw*)(((db*)&ac_wprng) + 2) > (dw)dx) goto exitlgb;
    if ((dw)*(dw*)(((db*)&ac_wprng) + 2) < (dw)dx) goto lgbok;
    CMP(*(dw*)(&ac_wprng), ax);
    if ((dw)*(dw*)(&ac_wprng) > (dw)ax) goto exitlgb;
    goto lgbok;
contlgb:
    /* continue package release — update delivery timer */
    ax = ac_data.ac_arm_lock;
    SUB(ax, lastframe);
    MINM_AX();
    ac_data.ac_arm_lock = ax;
    if (ax != 0) goto exitlgb;
lgbok:
    /* release single weapon */
    ax = ac_data.ac_vtas;
    bx = lgb1000;
    cx = 1;
    XOR(dl, dl);
    si = m2c::near_offset_external(ac_view);
    di = ac_data.ac_wp_ptr;
    CALL(releasepackage, 0);
    /* update package count (assume weapon released) */
    ax = weaponnum;
    DEC(ax);
    if (ax != 0) goto notlast;
    /* clear package (last weapon released) */
    si = ac_data.ac_wp_ptr;
    m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package))), m2c::getdata(0));
    /* inhibit aircraft route change until weapons are clear */
    ac_data.ac_arm_lock = wpn_clr_delay;
    goto exitlgb;
notlast:
    /* update number of weapons remaining in package */
    SHL(al, 1); SHL(al, 1); SHL(al, 1); SHL(al, 1);
    AND(al, wpack_num_mask);
    si = ac_data.ac_wp_ptr;
    AND(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package)), wpack_mode_mask);
    OR(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package)), al);
    /* inhibit aircraft route change during LGB delivery */
    ac_data.ac_arm_lock = lgb_delay;
exitlgb:
    return m2c::RETN_(0, _state);
}

/* AutoLaydown — pass: bx = weapon type (GPB1000, RET1000, BL755),
 *       cx = number of weapons in package.  kill: assume all (except cf) */
bool autolaydown(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* store pass params */
    weapontype = bx;
    weaponnum = cx;
    /* release interlock — check target ahead (avoid spurious release) */
    ax = ac_view.vp_hdg;
    dx = ac_wpbrg;
    CALLF(calcangdiff, 0);
    CMP(ax, 14);                                /* ?0? */
    if ((dw)ax > (dw)14) goto exitlaydown;
    /* calc weapon throw */
    ax = ac_data.ac_vtas;
    bx = weapontype;
    si = m2c::near_offset_external(ac_view);
    CALL(calcthrow, 0);
    /* check for release — release if (range - throw) <=
     * (vtas * cos(pitch) * delta time) / 16 */
    ax = *(dw*)(&ac_wprng);
    dx = *(dw*)(((db*)&ac_wprng) + 2);
    SUB(ax, *(dw*)(&bombthrow));
    SBB(dx, *(dw*)(((db*)&bombthrow) + 2));
    if ((short)dx < 0) goto release;            /* < 0, always release -> */
    if (dx != 0) goto exitlaydown;              /* too far -> */
    bp = ax;
    bx = ac_view.vp_pitch;                      /* COSINE dx,pitch */
    AND(bx, 0x001ff); SHL(bx, 1);
    dx = *(dw*)(((db*)&costable) + bx);
    ax = ac_data.ac_vtas;
    IMUL1_2(dx); FRACADJ_D(dx);
    ax = deltatime;
    IMUL1_2(dx); FRACADJ_D(dx);
    SHR(dx, 1); SHR(dx, 1); SHR(dx, 1); SHR(dx, 1);   /* /16 */
    ADC(dx, 0);                                 /* ROUNDUP */
    CMP(bp, dx);                                /* solution? */
    if ((dw)bp > (dw)dx) goto exitlaydown;      /* no -> */
release:
    /* release package */
    ax = ac_data.ac_vtas;
    bx = weapontype;
    cx = weaponnum;
    si = m2c::near_offset_external(ac_view);
    di = -1;                                    /* target waypoint n/a */
    XOR(dl, dl);                                /* drone release */
    CALL(releasepackage, 0);
    /* clear package (assume package released) */
    si = ac_data.ac_wp_ptr;
    m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package))), m2c::getdata(0));
    /* inhibit aircraft route change until weapons are clear */
    ac_data.ac_arm_lock = wpn_clr_delay;
exitlaydown:
    return m2c::RETN_(0, _state);
}

/* AutoJP233 — pass: nothing.  kill: assume all (except cf) */
bool autojp233(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* check for release in progress */
    CMP(ac_data.ac_arm_lock, 0);
    if ((dw)ac_data.ac_arm_lock > (dw)0) goto contjp233;
    /* release interlock — check target ahead (avoid spurious release) */
    ax = ac_view.vp_hdg;
    dx = ac_wpbrg;
    CALLF(calcangdiff, 0);
    CMP(ax, 14);                                /* ?0? */
    if ((dw)ax > (dw)14) goto exitjp233;
    /* calc weapon throw */
    ax = ac_data.ac_vtas;
    bx = jp233;
    si = m2c::near_offset_external(ac_view);
    CALL(calcthrow, 0);
    /* check for release — release if (range - throw) <=
     * (vtas * cos(pitch) * delta time) / 16 */
    ax = *(dw*)(&ac_wprng);
    dx = *(dw*)(((db*)&ac_wprng) + 2);
    SUB(ax, *(dw*)(&bombthrow));
    SBB(dx, *(dw*)(((db*)&bombthrow) + 2));
    if ((short)dx < 0) goto startrel;           /* < 0, always release -> */
    if (dx != 0) goto exitjp233;                /* too far -> */
    bp = ax;
    bx = ac_view.vp_pitch;                      /* COSINE dx,pitch */
    AND(bx, 0x001ff); SHL(bx, 1);
    dx = *(dw*)(((db*)&costable) + bx);
    ax = ac_data.ac_vtas;
    IMUL1_2(dx); FRACADJ_D(dx);
    ax = deltatime;
    IMUL1_2(dx); FRACADJ_D(dx);
    SHR(dx, 1); SHR(dx, 1); SHR(dx, 1); SHR(dx, 1);   /* /16 */
    ADC(dx, 0);                                 /* ROUNDUP */
    CMP(bp, dx);                                /* solution? */
    if ((dw)bp > (dw)dx) goto exitjp233;        /* no -> */
startrel:
    /* start package release — inhibit route change during delivery */
    ac_data.ac_arm_lock = jp233_period;
contjp233:
    /* continue package release — update delivery timer */
    ax = ac_data.ac_arm_lock;
    SUB(ax, lastframe);
    MINM_AX();
    ac_data.ac_arm_lock = ax;
    if (ax != 0) goto bomblets;
    /* clear package */
    si = ac_data.ac_wp_ptr;
    m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package))), m2c::getdata(0));
    /* inhibit aircraft route change until weapons are clear */
    ac_data.ac_arm_lock = wpn_clr_delay;
    goto exitjp233;
bomblets:
    /* num bomblets this frame = min(JP233_BOMBLETS * delta time, 1) */
    ax = jp233_bomblets;
    dx = deltatime;
    IMUL1_2(dx); FRACADJ_D(cx);
    TEST(cx, cx);                               /* any bomblets? */
    if ((cx & cx) == 0) INC(cx);                /* no -> min 1 */
    ax = ac_data.ac_vtas;
    bx = jp233;
    si = m2c::near_offset_external(ac_view);
    di = -1;                                    /* target waypoint n/a */
    XOR(dl, dl);                                /* drone release */
    /* release bomblets (assume released ok) */
    CALL(releasepackage, 0);
exitjp233:
    return m2c::RETN_(0, _state);
}

/* AutoBomb — air-to-ground weapons control (only from "track" mode). FAR.
 * pass/ret: nothing.  kill: assume all. */
bool autobomb(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* ensure track mode (aircraft may have just switched to another mode) */
    CMP(ac_data.ac_ctrl_mode, 4);               /* CTRL_TRACK */
    if ((dw)ac_data.ac_ctrl_mode != (dw)4) goto exitbomb;
    /* check if package to be delivered */
    si = ac_data.ac_wp_ptr;
    CMP(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package)), 0);
    if ((db)*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package)) == (db)0)
        goto exitbomb;
    /* extract package data */
    al = m2c::getdata(*((db*)((db*)&((waypoint*)raddr(ds, si))->wp_package)));
    bx = ax;                                    /* weapon type/delivery mode */
    AND(bx, wpack_mode_mask);
    cx = ax;                                    /* number of weapons */
    AND(cx, wpack_num_mask);
    SHR(cx, 1); SHR(cx, 1); SHR(cx, 1); SHR(cx, 1);
    /* sort weapon arming — jmp ArmSwitch[bx]: the arm labels live in the
     * same WEAPONCODE segment; dispatch the shipped table entry through
     * the module group via a rep we don't redefine (autoalarm), whose
     * arm bodies CALL back into the decomp'd AutoLaydown/AutoLGB/AutoJP233
     * above (and lifted AutoAlarm/AutoAGM). */
    __disp = *(dw*)(((db*)&armswitch) + bx);
    return autoalarm(__disp, _state);
exitbomb:
    return m2c::RETF_(0, _state);
}

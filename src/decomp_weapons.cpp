/* decomp_weapons.cpp — clean-C rewrites of TORNADO/WEAPONS procedures.
 *
 * Semantics from the authoritative TORNADO/WEAPONS.ASM source and its
 * original comments.  CalcStoresWt is FAR (RETF_); the rest are NEAR.
 */

#include "weapons.h"

/* FRACADJ ax — the shared fixed-point product rounding:
 *   shl ax,1 / rcl dx,1 / shl ax,1 / adc dx,0  ->  ax = dx */
#define FRACADJ_AX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
        ax = dx;                                                    \
    } while (0)

/* RetardBombVel — retard bomb velocity wrt bomb type.
 * pass: ax = aircraft velocity (vtas *8 scaled),
 *       bx = weapon type (GPB1000, RET1000, LGB1000, BL755, JP233)
 * ret : ax = retarded velocity.  kill: dx, flags */
bool retardbombvel(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dx = *(dw*)(((db*)&retardfactors) + bx);
    IMUL1_2(dx);
    FRACADJ_AX();
    return m2c::RETN_(0, _state);
}

/* UpdateRET — pass: WPN_Workspace.  kill: assume all */
bool updateret(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALL(bombballistics, 0);
    if (!CF) goto exitret;                      /* still falling -> */
    CALL(grounddamage, 0);
exitret:
    return m2c::RETN_(0, _state);
}

/* UpdateJP233 — pass: WPN_Workspace.  kill: assume all */
bool updatejp233(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALL(bombballistics, 0);
    if (!CF) goto exitjp233;                    /* still falling -> */
    CALL(grounddamage, 0);
exitjp233:
    return m2c::RETN_(0, _state);
}

/* ReleasePackage — pass: ax = aircraft velocity (vtas *8 scaled),
 *       bx = weapon type, cx = number of weapons in package,
 *       dl = 0 drone release / 1 Tornado release,
 *       si -> aircraft VIEWPOINT,
 *       di -> target waypoint (if applicable else -1)
 * ret : cf = 0 package (or part) released, cf = 1 not released.
 * kill: assume all (except cf) */
bool releasepackage(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    XOR(bp, bp);
relloop:
    PUSH(ax); PUSH(bx); PUSH(cx); PUSH(dx); PUSH(si); PUSH(di); PUSH(bp);
    /* call ReleaseWeapon[bx] — route the shipped table entry through
     * the module group via a rep we don't redefine (findavailweapon) */
    CALL(findavailweapon, *(dw*)(((db*)&releaseweapon) + bx));
    POP(bp); POP(di); POP(si); POP(dx); POP(cx); POP(bx); POP(ax);
    if (CF) goto reldone;                       /* failed to create -> */
    INC(bp);
    LOOP(relloop);
reldone:
    TEST(bp, bp);                               /* released any weapons? */
    if ((bp & bp) == 0) goto relfail;
    CLC;                                        /* package released */
    return m2c::RETN_(0, _state);
relfail:
    STC;                                        /* package not released */
    return m2c::RETN_(0, _state);
}

/* CalcStoresWt (excluding external fuel).  FAR.
 * ret : StoresWt.  kill: assume all */
#define STORE_WT(n) do {                                                \
        ax = *(dw*)(((db*)&extstores) + (n));                           \
        dx = *(dw*)(((db*)&extweights) + (n));                          \
        MUL1_2(dx);                                                     \
        ADD(storeswt, ax);                                              \
    } while (0)

bool calcstoreswt(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    storeswt = 0;
    STORE_WT(0);                                /* EXT_GPB1000 */
    STORE_WT(2);                                /* EXT_RET1000 */
    STORE_WT(4);                                /* EXT_LGB1000 */
    STORE_WT(6);                                /* EXT_BL755 */
    STORE_WT(8);                                /* EXT_JP233 */
    STORE_WT(10);                               /* EXT_ALARM */
    STORE_WT(12);                               /* EXT_SIDEWINDER */
    STORE_WT(14);                               /* EXT_SKYFLASH */
    STORE_WT(16);                               /* EXT_BOZ100 */
    STORE_WT(18);                               /* EXT_SKYSHADOW */
    /* cannons weigh 1/2 pound each (9.17oz) */
    ax = cannons;
    CMP(tornadotype, 2);                        /* ADV_TORNADO? */
    if ((dw)tornadotype == (dw)2) SHR(ax, 1);   /* ADV has single gun */
    ADD(storeswt, ax);
    return m2c::RETF_(0, _state);
}
#undef STORE_WT

/* SelectAirWpn — select next air weapon.
 * pass: AirArmMode.  ret: AirArmMode + ArmMode (if any air mode armed).
 * kill: assume all */
bool selectairwpn(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = airarmmode;
    CMP(ax, 0);                                 /* ARM_OFF — off? */
    if ((dw)ax == (dw)0) goto exitairwpn;       /* yes -> */
    /* cannon — select Sidewinder then Sky Flash then cannon */
    CMP(ax, 16);                                /* ARM_CANNON */
    if ((dw)ax != (dw)16) goto trysidew;
    ax = 18;                                    /* ARM_SIDEWINDER */
    CMP(*(dw*)(((db*)&extstores) + 12), 0);
    if ((dw)*(dw*)(((db*)&extstores) + 12) > (dw)0) goto setairwpn;
    ax = 20;                                    /* ARM_SKYFLASH */
    CMP(*(dw*)(((db*)&extstores) + 14), 0);
    if ((dw)*(dw*)(((db*)&extstores) + 14) > (dw)0) goto setairwpn;
    ax = 16;                                    /* ARM_CANNON */
    CMP(cannons, 0);
    if ((dw)cannons > (dw)0) goto setairwpn;
    ax = 0;                                     /* ARM_OFF */
    goto setairwpn;
trysidew:
    /* Sidewinder — select Sky Flash then cannon then Sidewinder */
    CMP(ax, 18);                                /* ARM_SIDEWINDER */
    if ((dw)ax != (dw)18) goto tryskyf;
    ax = 20;                                    /* ARM_SKYFLASH */
    CMP(*(dw*)(((db*)&extstores) + 14), 0);
    if ((dw)*(dw*)(((db*)&extstores) + 14) > (dw)0) goto setairwpn;
    ax = 16;                                    /* ARM_CANNON */
    CMP(cannons, 0);
    if ((dw)cannons > (dw)0) goto setairwpn;
    ax = 18;                                    /* ARM_SIDEWINDER */
    CMP(*(dw*)(((db*)&extstores) + 12), 0);
    if ((dw)*(dw*)(((db*)&extstores) + 12) > (dw)0) goto setairwpn;
    ax = 0;                                     /* ARM_OFF */
    goto setairwpn;
tryskyf:
    /* Sky Flash — select cannon then Sidewinder then Sky Flash */
    CMP(ax, 20);                                /* ARM_SKYFLASH */
    if ((dw)ax != (dw)20) goto armoff;
    ax = 16;                                    /* ARM_CANNON */
    CMP(cannons, 0);
    if ((dw)cannons > (dw)0) goto setairwpn;
    ax = 18;                                    /* ARM_SIDEWINDER */
    CMP(*(dw*)(((db*)&extstores) + 12), 0);
    if ((dw)*(dw*)(((db*)&extstores) + 12) > (dw)0) goto setairwpn;
    ax = 20;                                    /* ARM_SKYFLASH */
    CMP(*(dw*)(((db*)&extstores) + 14), 0);
    if ((dw)*(dw*)(((db*)&extstores) + 14) > (dw)0) goto setairwpn;
armoff:
    ax = 0;                                     /* ARM_OFF */
setairwpn:
    airarmmode = ax;
    /* if ArmMode = air-to-air mode then update ArmMode */
    dx = armmode;
    CMP(dx, 16);                                /* ARM_CANNON */
    if ((dw)dx == (dw)16) goto updarm;
    CMP(dx, 18);                                /* ARM_SIDEWINDER */
    if ((dw)dx == (dw)18) goto updarm;
    CMP(dx, 20);                                /* ARM_SKYFLASH */
    if ((dw)dx != (dw)20) goto exitairwpn;
updarm:
    armmode = ax;
exitairwpn:
    return m2c::RETN_(0, _state);
}

/* ABSV ax keeping the dx sign residue: cwd / xor ax,dx / sub ax,dx */
#define ABSV_AX() do {                                              \
        CWD; XOR(ax, dx); SUB(ax, dx);                              \
    } while (0)

/* AlarmGuideAbove — guide to point above missile (60 degs pitch up).
 * pass: WPN_Workspace.
 * ret : cf = 0 ok, cf = 1 overshot target; TmpRange = flat range.
 * kill: assume all (except cf) */
bool alarmguideabove(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* project aiming point for 60 degs pitch up — make working viewpoint */
    si = m2c::near_offset_external(wpn_view);
    di = m2c::near_offset_external(tmp_view);
    cx = 18 / 2;                                /* VIEW_REC_SIZE/2 */
    REP MOVSW;

    /* calc sin(hdg), cos(hdg) — SINCOS si,di,bx */
    bx = tmp_view.vp_hdg;
    AND(bx, 0x001ff); SHL(bx, 1);
    si = *(dw*)(((db*)&sintable) + bx);
    di = *(dw*)(((db*)&costable) + bx);
    cl = 7;                                     /* /128 */

    /* delta y = 256 * cos(hdg) */
    ax = di;
    ABSV_AX();
    SHR(ax, cl); ADC(ax, 0);
    XOR(ax, dx); SUB(ax, dx);
    bx = ax;

    /* delta x = 256 * sin(hdg) */
    ax = si;
    ABSV_AX();
    SHR(ax, cl); ADC(ax, 0);
    XOR(ax, dx); SUB(ax, dx);
    cx = ax;

    /* move viewpoint — MOVEXY TMP_VIEW,cx,bx: update xsec/xft */
    ADD(cx, tmp_view.vp_xft);                   /* x + cx */
    CMP(cx, 8192);                              /* change sector? */
    if ((short)cx < (short)8192) goto mvxy1;    /* no -> */
    SUB(cx, 16384);
    INC(tmp_view.vp_xsec);
mvxy1:
    CMP(cx, -8192);                             /* change sector? */
    if ((short)cx >= (short)-8192) goto mvxy2;  /* no -> */
    ADD(cx, 16384);
    DEC(tmp_view.vp_xsec);
mvxy2:
    tmp_view.vp_xft = cx;
    /* update ysec, yft */
    ADD(bx, tmp_view.vp_yft);                   /* y + bx */
    CMP(bx, 8192);                              /* change sector? */
    if ((short)bx < (short)8192) goto mvxy3;    /* no -> */
    SUB(bx, 16384);
    DEC(tmp_view.vp_ysec);
mvxy3:
    CMP(bx, -8192);                             /* change sector? */
    if ((short)bx >= (short)-8192) goto mvxy4;  /* no -> */
    ADD(bx, 16384);
    INC(tmp_view.vp_ysec);
mvxy4:
    tmp_view.vp_yft = bx;

    /* set aiming point */
    ax = tmp_view.vp_xsec;
    *((dw*)((db*)&wpn_weapon + wpn_alm_xsec)) = ax;
    ax = tmp_view.vp_ysec;
    *((dw*)((db*)&wpn_weapon + wpn_alm_ysec)) = ax;
    ax = tmp_view.vp_xft;
    *((dw*)((db*)&wpn_weapon + wpn_alm_xft)) = ax;
    ax = tmp_view.vp_yft;
    *((dw*)((db*)&wpn_weapon + wpn_alm_yft)) = ax;
    ax = *((dw*)((db*)&tmp_view + vp_zft_lo));
    dx = *((dw*)((db*)&tmp_view + vp_zft_hi));
    ADD(ax, 443);                               /* 256 * tan(60) */
    ADC(dx, 0);
    CALL(alarmguidance, 0);
    return m2c::RETN_(0, _state);
}

/* decomp_model.cpp — clean-C rewrites of TORNADO/MODEL procedures.
 *
 * Semantics from the authoritative TORNADO/MODEL.ASM source and its
 * original comments.  All procs below are NEAR — bodies end with
 * RETN_(0), consuming the caller's pushed return tag exactly like `ret`.
 */

#include "model.h"

/* StartEjectSeq — start eject sequence.
 * pass/ret: nothing.  kill: assume all */
bool startejectseq(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ejected = 1;
    OR(disableinput, dip_eject);
    dieflag = die_eject;
    return m2c::RETN_(0, _state);
}

/* InitNewSector — init misc items when entering a new sector.
 * pass/ret: nothing.  kill: assume all */
bool initnewsector(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* make map index (if on active map) */
    ax = -1;                                    /* assume off active map */
    CMP(xsec, 31);
    if ((dw)xsec > (dw)31) goto offmap;
    CMP(ysec, 31);
    if ((dw)ysec > (dw)31) goto offmap;
    /* map index = ysec * 32 + xsec */
    ax = ysec;
    SHL(ax, 1); SHL(ax, 1); SHL(ax, 1); SHL(ax, 1); SHL(ax, 1);
    ADD(ax, xsec);
offmap:
    modelmapindex = ax;
    return m2c::RETN_(0, _state);
}

/* DampRate — damp rate change.
 * pass: ax = old rate, cx = damp factor, dx = new rate.
 * ret : dx = damped new rate.  kill: assume all (except dx).
 * note: This algorithm is frame rate dependant. */
bool damprate(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bp = ax;                                    /* store old rate */
    ax = dx;
    CWD;
    bx = ax;                                    /* si, bx = new rate */
    si = dx;
    ax = bp;
    CWD;                                        /* dx, ax = old rate */

    /* damped new rate = (new rate - old rate) / damp factor + old rate */
    SUB(bx, ax);
    SBB(si, dx);
    if ((short)si < 0) goto negchange;
posshift:
    SHR(si, 1);                                 /* (new-old) / damp factor */
    RCR(bx, 1);
    LOOP(posshift);
    goto dampok;
negchange:
    bx = ~bx;                                   /* NEG32 si,bx — negate and
                                                   scale to prevent -1
                                                   truncation error */
    si = ~si;
    ADD(bx, 1);
    ADC(si, 0);
negshift:
    SHR(si, 1);                                 /* (new-old) / damp factor */
    RCR(bx, 1);
    LOOP(negshift);
    NEG(bx);                                    /* restore sign */
dampok:
    ADD(bx, bp);                                /* (new-old)/damp + old */
    dx = bx;
    return m2c::RETN_(0, _state);
}

/* FRACADJ ax — the shared fixed-point product rounding:
 *   shl ax,1 / rcl dx,1 / shl ax,1 / adc dx,0  ->  ax = dx */
#define FRACADJ_AX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
        ax = dx;                                                    \
    } while (0)

/* CalcAirSpeed — calc true air speed and indicated air speed.
 * pass: nothing.  ret: Vias + Vkts.  kill: assume all */
bool calcairspeed(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* Vias = SqrtRho * Vtas */
    ax = vtas;
    ADD(ax, xwindveff);                         /* add crosswinds */
    TEST(ax, ax);                               /* ensure Vtas >= 0 */
    if ((short)(ax & ax) < 0) XOR(ax, ax);
    dx = sqrtrho;
    IMUL1_2(dx);
    FRACADJ_AX();                               /* SqrtRho * Vtas */
    vias = ax;
    /* calc Vdiv */
    CWD;                                        /* ABSV */
    XOR(ax, dx);                                /* 1s comp */
    SUB(ax, dx);                                /* 2s comp */
    CMP(ax, 1360);                              /* Vias < 100kts (100*1.7*8)? */
    if ((dw)ax < (dw)1360) ax = 1360;           /* limit: prevent divide
                                                   overflows */
    XOR(ax, dx);                                /* restore sign */
    SUB(ax, dx);
    vdiv = ax;
    /* Vkts = Vias * 2409 / 32768 */
    ax = vias;
    dx = 2409;
    IMUL1_2(dx);
    SHL(ax, 1); RCL(dx, 1);                     /* FRACADJ dx */
    SHL(ax, 1); ADC(dx, 0);
    vkts = dx;
    return m2c::RETN_(0, _state);
}
#undef FRACADJ_AX

/* FRACADJ dx — shared fixed-point product rounding -> dx */
#define FRACADJ_DX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
    } while (0)

/* CalcEngTemp — calc engine temperature wrt thrust (damped, frame
 * rate dependant).
 * pass: al = engine damage status, ah = engine fire status,
 *       dx = thrust, bp = old temperature.
 * ret : ax = new temperature.  kill: assume all.
 *
 * if engine fire then aim for MAX_ENG_TEMP
 * else if engine damaged or out of fuel then aim for MIN_ENG_TEMP
 * @ idle: thrust =     0lbf, eng temp = 400 * 16 deg c
 * @ max : thrust = 17000lbf, eng temp = 700 * 16 deg c */
bool calcengtemp(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    TEST(ah, ah);                               /* fire? */
    if ((ah & ah) == 0) goto nofire;
    dx = max_eng_temp;
    goto sorttemp;
nofire:
    TEST(al, al);                               /* damaged? */
    if ((al & al) != 0) goto mintemp;
    CMP(fuelwt, 0);                             /* out of fuel? */
    if ((dw)fuelwt > (dw)0) goto conttemp;      /* no -> */
mintemp:
    dx = min_eng_temp;
    goto sorttemp;
conttemp:
    /* new temp = thrust * (9252 / 32768) + 400 * 16 */
    ax = 9252;
    IMUL1_2(dx);
    FRACADJ_DX();
    ADD(dx, 400 * 16);
sorttemp:
    SUB(dx, bp);                                /* delta = new - old */
    bx = dx;                                    /* bx = delta temp */
    if ((short)dx < 0) goto dectemp;
    ax = max_temp_inc;
    dx = deltatime;
    IMUL1_2(dx);
    FRACADJ_DX();                               /* max change this frame */
    CMP(bx, dx);                                /* delta temp ok? */
    if ((short)bx <= (short)dx) goto tempok;
    bx = dx;                                    /* limit temp change */
    goto tempok;
dectemp:
    ax = max_temp_dec;
    dx = deltatime;
    IMUL1_2(dx);
    FRACADJ_DX();                               /* max change this frame */
    CMP(bx, dx);                                /* delta temp ok? */
    if ((short)bx >= (short)dx) goto tempok;
    bx = dx;                                    /* limit temp change */
tempok:
    ax = bp;                                    /* new = old + delta */
    ADD(ax, bx);
    return m2c::RETN_(0, _state);
}

/* FRACADJ ax — shared fixed-point product rounding -> ax */
#define FRACADJ_AX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
        ax = dx;                                                    \
    } while (0)

/* MINM ax — clamp ax>=0 keeping flag residue:
 *   cmc / rcr ax,1 / cwd / rcl ax,1 / and ax,dx */
#define MINM_AX() do {                                              \
        CMC; RCR(ax, 1); CWD; RCL(ax, 1); AND(ax, dx);              \
    } while (0)

/* ABSV ax — ax = abs(ax), dx = sign(ax):
 *   cwd / xor ax,dx / sub ax,dx */
#define ABSV_AX() do {                                              \
        CWD; XOR(ax, dx); SUB(ax, dx);                              \
    } while (0)

/* CalcFuelFlow — calc fuel consumption.
 * pass: nothing.
 * ret : FuelWt + FuelWtFine + FuelFlow1 + FuelFlow2.
 * kill: assume all
 *
 * fuel flow rate wrt rpm:-
 *   val = max((rpm - IDLE_RPM) / 256, 0)
 *   fuel flow rate = ((val * 763 + 1802) * Rho * DeltaTime) * 4 (32 bit)
 * fuel flow rate wrt reheat:-
 *   fuel flow rate = (reheat * 235 * Rho * DeltaTime) * 32 (32 bit) */
bool calcfuelflow(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* check if out of fuel */
    ax = fuelwt;
    OR(ax, fuelwtfine);
    if ((ax | fuelwtfine) != 0) goto havefuel;
    XOR(si, si);                                /* eng 1 fuel flow = 0 */
    XOR(di, di);                                /* eng 2 fuel flow = 0 */
    goto dampfuelflow;
havefuel:
    /* keep Rho constant above 36,000ft so that fuel economy does not
     * improve with altitude */
    bp = rho;
    CMP(bp, *(dw*)(((db*)&rhotable) + 36 * 2));
    if ((dw)bp < (dw)*(dw*)(((db*)&rhotable) + 36 * 2))
        bp = *(dw*)(((db*)&rhotable) + 36 * 2);

    /* engine 1 fuel flow rate wrt rpm */
    ax = rpm1;
    SUB(ax, 63 * 256);                          /* rpm - IDLE_RPM */
    MINM_AX();                                  /* max(rpm - IDLE_RPM, 0) */
    al = ah;
    XOR(ah, ah);                                /* val = max((rpm-IDLE)/256,0) */
    dx = 763;
    MUL1_2(dx);                                 /* val * 763 */
    ADD(ax, 1802);                              /* val * 763 + 1802 */
    IMUL1_2(bp);                                /* ... * Rho */
    FRACADJ_DX();
    /* calc fuel flow lbs / sec * 1024 */
    si = dx;
    SHR(si, 1); SHR(si, 1); SHR(si, 1); SHR(si, 1);     /* /16 */
    ax = deltatime;
    IMUL1_2(dx);                                /* ... * Rho * DeltaTime */
    FRACADJ_AX();
    XOR(dx, dx);
    SHL(ax, 1); RCL(dx, 1);                     /* *4 */
    SHL(ax, 1); RCL(dx, 1);
    bx = ax;                                    /* update flow rate total */
    cx = dx;

    /* engine 2 fuel flow rate wrt rpm */
    ax = rpm2;
    SUB(ax, 63 * 256);                          /* rpm - IDLE_RPM */
    MINM_AX();
    al = ah;
    XOR(ah, ah);
    dx = 763;
    MUL1_2(dx);
    ADD(ax, 1802);
    IMUL1_2(bp);
    FRACADJ_DX();
    /* calc fuel flow lbs / sec * 1024 */
    di = dx;
    SHR(di, 1); SHR(di, 1); SHR(di, 1); SHR(di, 1);     /* /16 */
    ax = deltatime;
    IMUL1_2(dx);
    FRACADJ_AX();
    XOR(dx, dx);
    SHL(ax, 1); RCL(dx, 1);                     /* *4 */
    SHL(ax, 1); RCL(dx, 1);
    ADD(bx, ax);                                /* update flow rate total */
    ADC(cx, dx);

    /* fuel flow rate wrt reheat (any engine) */
    ax = reheat;
    dx = 235;
    MUL1_2(dx);                                 /* reheat * 235 */
    IMUL1_2(bp);                                /* reheat * 235 * Rho */
    FRACADJ_DX();
    /* calc fuel flow lbs / sec * 1024 */
    bp = dx;
    SHR(bp, 1);                                 /* /2 (for single engine) */
    ax = deltatime;
    IMUL1_2(dx);                                /* ... * Rho * DeltaTime */
    FRACADJ_AX();
    XOR(dx, dx);
    SHL(ax, 1); RCL(dx, 1);                     /* *32 */
    SHL(ax, 1); RCL(dx, 1);
    SHL(ax, 1); RCL(dx, 1);
    SHL(ax, 1); RCL(dx, 1);
    SHL(ax, 1); RCL(dx, 1);
    TEST(ssf_engine1, 1);                       /* engine 1 ok? */
    if ((ssf_engine1 & 1) != 0) goto noeng1;    /* no -> */
    ADD(bx, ax);                                /* update flow rate total */
    ADC(cx, dx);
    ADD(si, bp);
noeng1:
    TEST(ssf_engine2, 1);                       /* engine 2 ok? */
    if ((ssf_engine2 & 1) != 0) goto noeng2;    /* no -> */
    ADD(bx, ax);                                /* update flow rate total */
    ADC(cx, dx);
    ADD(di, bp);
noeng2:
    /* update fuel weight */
    TEST(infinitefuel, 1);                      /* infinite fuel? */
    if ((infinitefuel & 1) != 0) goto dampfuelflow;
    SUB(fuelwtfine, bx);
    SBB(fuelwt, cx);
    if (!CF) goto dampfuelflow;                 /* not out of fuel -> */
    XOR(ax, ax);
    fuelwtfine = ax;
    fuelwt = ax;
dampfuelflow:
    /* damp fuel flow 1 (frame rate dependant) */
    ax = si;
    SUB(ax, fuelflow1);                         /* delta = new - old */
    ABSV_AX();                                  /* abs(delta), dx = sign */
    SHR(ax, 1); SHR(ax, 1);                     /* /4 */
    ADC(ax, 0);                                 /* 1/2 bit round up */
    XOR(ax, dx);                                /* restore sign */
    SUB(ax, dx);
    ADD(fuelflow1, ax);                         /* (new - old)/4 + old */
    /* damp fuel flow 2 (frame rate dependant) */
    ax = di;
    SUB(ax, fuelflow2);
    ABSV_AX();
    SHR(ax, 1); SHR(ax, 1);                     /* /4 */
    ADC(ax, 0);
    XOR(ax, dx);
    SUB(ax, dx);
    ADD(fuelflow2, ax);
    /* check for fuel warning */
    CMP(fuelwt, 1000);
    if ((dw)fuelwt <= (dw)1000)
        OR(redwarnings2, red_fuel);
    return m2c::RETN_(0, _state);
}
#undef FRACADJ_DX
#undef MINM_AX
#undef ABSV_AX

/* UpdateSweep — wing sweep disabled whilst flaps active or wing
 * sweep damaged.  pass/ret: nothing.  kill: assume all */
bool updatesweep(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    al = *(flapsactive);
    OR(al, ssf_sweep);                          /* flaps active or damaged? */
    if (al != 0) goto sweepexit;
    /* test for wing sweep forwards — KTEST KF_WingSwpFwd */
    al = *(db*)(((db*)&kf_wingswpfwd) + k_status);
    TEST(al, al);
    if (!(al & al)) goto skipsweepfwd;
    al = destwingpos;
    CMP(al, sweep_d_25);                        /* can wings go forward? */
    if ((db)al == (db)sweep_d_25) goto skipsweepfwd;
    DEC(al);                                    /* new destination position */
    /* test if new wing sweep position is inhibited */
    XOR(bh, bh);
    bl = al;
    SHL(bl, 1); SHL(bl, 1);                     /* *4 */
    ADD(bl, crntflappos);
    TEST(*((posinhibit) + bx), 1);              /* inhibited? */
    if (!(*((posinhibit) + bx) & 1)) goto skipsweepfwd;
    destwingpos = al;
    /* look up destination wing setting */
    bl = al;
    XOR(bh, bh);
    SHL(bx, 1);                                 /* *2 word index */
    ax = *(dw*)(((db*)&wingsetting) + bx);
    destwingval = ax;
skipsweepfwd:
    /* test for wing sweep backwards — KTEST KF_WingSwpBack */
    al = *(db*)(((db*)&kf_wingswpback) + k_status);
    TEST(al, al);
    if (!(al & al)) goto skipsweepback;
    al = destwingpos;
    CMP(al, sweep_d_67);                        /* can wings go backward? */
    if ((db)al == (db)sweep_d_67) goto skipsweepback;
    INC(al);                                    /* new destination position */
    XOR(bh, bh);
    bl = al;
    SHL(bl, 1); SHL(bl, 1);                     /* *4 */
    ADD(bl, crntflappos);
    TEST(*((posinhibit) + bx), 1);
    if (!(*((posinhibit) + bx) & 1)) goto skipsweepback;
    destwingpos = al;
    bl = al;
    XOR(bh, bh);
    SHL(bx, 1);
    ax = *(dw*)(((db*)&wingsetting) + bx);
    destwingval = ax;
skipsweepback:
    /* update wing sweep if changing position */
    *(sweepactive) = 0;                         /* assume inactive */
    ax = crntwingval;
    CMP(ax, destwingval);
    if ((dw)ax == (dw)destwingval) goto sweepexit;
    *(sweepactive) = 1;
    if ((short)ax < (short)destwingval) goto movewingsback;
    /* move wings forward (current > dest) */
    dx = ax;                                    /* dx = previous value */
    SUB(ax, lastframe);                         /* ax = new value */
    CMP(ax, destwingval);                       /* crossed destination? */
    if ((short)ax <= (short)destwingval) goto setwingdest;
    CMP(dx, sweep_a_45);                        /* crossed 45 deg pos? */
    if ((short)dx < (short)sweep_a_45) goto setwingval;
    CMP(ax, sweep_a_45);
    if ((short)ax > (short)sweep_a_45) goto setwingval;
    crntwingpos = sweep_d_45;
    goto setwingval;
movewingsback:
    /* move wings backward (current < dest) */
    dx = ax;                                    /* dx = previous value */
    ADD(ax, lastframe);                         /* ax = new value */
    CMP(ax, destwingval);                       /* crossed destination? */
    if ((short)ax >= (short)destwingval) goto setwingdest;
    CMP(dx, sweep_a_45);                        /* crossed 45 deg pos? */
    if ((short)dx > (short)sweep_a_45) goto setwingval;
    CMP(ax, sweep_a_45);
    if ((short)ax < (short)sweep_a_45) goto setwingval;
    crntwingpos = sweep_d_45;
    goto setwingval;
setwingdest:
    al = destwingpos;
    crntwingpos = al;
    ax = destwingval;
setwingval:
    crntwingval = ax;
sweepexit:
    return m2c::RETN_(0, _state);
}

/* UpdateFlaps — flaps disabled whilst wing sweep active or flaps
 * damaged.  pass/ret: nothing.  kill: assume all */
bool updateflaps(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    al = *(sweepactive);
    OR(al, ssf_flaps);                          /* sweep active or damaged? */
    if (al != 0) goto flapsexit;
    /* test for flaps up — manoeuvre flaps in on joystick B button 2 */
    TEST(joyb_justfired2, 1);
    if (!(joyb_justfired2 & 1)) goto chkflup;
    CMP(crntflapval, flaps_a_mnvr);
    if ((dw)crntflapval == (dw)flaps_a_mnvr) goto intoflapsup;
chkflup:
    al = *(db*)(((db*)&kf_flapsup) + k_status); /* KTEST KF_FlapsUp */
    TEST(al, al);
    if (!(al & al)) goto skipflapsup;
intoflapsup:
    al = destflappos;
    CMP(al, flaps_d_zero);                      /* can flaps go up? */
    if ((db)al == (db)flaps_d_zero) goto skipflapsup;
    DEC(al);                                    /* new destination position */
    /* test if new flaps position is inhibited */
    XOR(bh, bh);
    bl = crntwingpos;
    SHL(bl, 1); SHL(bl, 1);                     /* *4 */
    ADD(bl, al);
    TEST(*((posinhibit) + bx), 1);              /* inhibited? */
    if (!(*((posinhibit) + bx) & 1)) goto skipflapsup;
    destflappos = al;
    /* look up destination flap setting */
    bl = al;
    XOR(bh, bh);
    SHL(bx, 1);                                 /* *2 word index */
    ax = *(dw*)(((db*)&flapsetting) + bx);
    destflapval = ax;
skipflapsup:
    /* test for flaps down — manoeuvre flaps out on joystick B button 2 */
    TEST(joyb_justfired2, 1);
    if (!(joyb_justfired2 & 1)) goto chkflapdn;
    CMP(crntflapval, flaps_a_zero);
    if ((dw)crntflapval == (dw)flaps_a_zero) goto intoflapsdn;
chkflapdn:
    al = *(db*)(((db*)&kf_flapsdn) + k_status); /* KTEST KF_FlapsDn */
    TEST(al, al);
    if (!(al & al)) goto skipflapsdn;
intoflapsdn:
    al = destflappos;
    CMP(al, flaps_d_full);                      /* can flaps go down? */
    if ((db)al == (db)flaps_d_full) goto skipflapsdn;
    INC(al);                                    /* new destination position */
    XOR(bh, bh);
    bl = crntwingpos;
    SHL(bl, 1); SHL(bl, 1);                     /* *4 */
    ADD(bl, al);
    TEST(*((posinhibit) + bx), 1);
    if (!(*((posinhibit) + bx) & 1)) goto skipflapsdn;
    destflappos = al;
    bl = al;
    XOR(bh, bh);
    SHL(bx, 1);
    ax = *(dw*)(((db*)&flapsetting) + bx);
    destflapval = ax;
skipflapsdn:
    /* update flaps if changing position */
    *(flapsactive) = 0;                         /* assume inactive */
    ax = crntflapval;
    CMP(ax, destflapval);
    if ((dw)ax == (dw)destflapval) goto flapsexit;
    *(flapsactive) = 1;
    if ((short)ax < (short)destflapval) goto moveflapsdown;
    /* move flaps up (current > dest) */
    dx = ax;                                    /* dx = previous value */
    SUB(ax, lastframe);                         /* ax = new value */
    CMP(ax, destflapval);                       /* crossed destination? */
    if ((short)ax <= (short)destflapval) goto setflapdest;
    CMP(dx, flaps_a_mnvr);                      /* crossed mnvr flaps? */
    if ((short)dx < (short)flaps_a_mnvr) goto chkflmid_up;
    CMP(ax, flaps_a_mnvr);
    if ((short)ax > (short)flaps_a_mnvr) goto chkflmid_up;
    crntflappos = flaps_d_mnvr;
    goto setflapval;
chkflmid_up:
    CMP(dx, flaps_a_mid);                       /* crossed mid flaps? */
    if ((short)dx < (short)flaps_a_mid) goto setflapval;
    CMP(ax, flaps_a_mid);
    if ((short)ax > (short)flaps_a_mid) goto setflapval;
    crntflappos = flaps_d_mid;
    goto setflapval;
moveflapsdown:
    /* move flaps down (current < dest) */
    dx = ax;                                    /* dx = previous value */
    ADD(ax, lastframe);                         /* ax = new value */
    CMP(ax, destflapval);                       /* crossed destination? */
    if ((short)ax >= (short)destflapval) goto setflapdest;
    CMP(dx, flaps_a_mid);                       /* crossed mid flaps? */
    if ((short)dx > (short)flaps_a_mid) goto chkfmnvr_dn;
    CMP(ax, flaps_a_mid);
    if ((short)ax < (short)flaps_a_mid) goto chkfmnvr_dn;
    crntflappos = flaps_d_mid;
    goto setflapval;
chkfmnvr_dn:
    CMP(dx, flaps_a_mnvr);                      /* crossed mnvr flaps? */
    if ((short)dx > (short)flaps_a_mnvr) goto setflapval;
    CMP(ax, flaps_a_mnvr);
    if ((short)ax < (short)flaps_a_mnvr) goto setflapval;
    crntflappos = flaps_d_mnvr;
    goto setflapval;
setflapdest:
    al = destflappos;
    crntflappos = al;
    ax = destflapval;
setflapval:
    crntflapval = ax;
flapsexit:
    return m2c::RETN_(0, _state);
}

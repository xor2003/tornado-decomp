/* decomp_damage.cpp — clean-C rewrites of TORNADO/DAMAGE procedures.
 *
 * Semantics from the authoritative TORNADO/DAMAGE.ASM source and its
 * original comments.  MaxDamage/MedDamage/MinDamage are FAR entries
 * sharing the NEAR IntoDamage tail (RETF); RandomDamage is NEAR (RETN).
 *
 *   MaxDamage/MedDamage: dx = scaled RandX interval floor
 *   MinDamage:           dx = LastFrame (damage wrt time)
 *   IntoDamage:          DamageTimer -= dx; on borrow damage a random
 *                        system and re-arm the timer with a new
 *                        10..20s random interval.
 *   RandomDamage:        jmp DamageSwitch[bx], bx = (RandX*20)>>8 * 2
 *                        — 20 limbs, each sets an SSF_ flag, or's a
 *                        warning bitmask and requests a SHAKE.
 *
 * SHAKE prio,hs,vs,timer expands to: if (ShakePriority <= prio) set
 * ShakePriority/HShake/VShake/ShakeTimer — lower-priority shakes never
 * displace an in-progress higher-priority one.
 */

#include "damage.h"

/* SHAKE expansion, flag-exact (exit flags are the CMP residue). */
static void shake(m2c::_STATE* _state, db prio, db hs, db vs, dw timer) {
    X86_REGREF
    CMP(shakepriority, prio);
    if ((db)shakepriority > (db)prio) return;     /* ja @@ */
    shakepriority = prio;
    hshake = hs;
    vshake = vs;
    shaketimer = timer;
}

/* shared RandomDamage limb: flag + warning + shake, then ret */
#define DAMLIMB(ssf, warn, bit, vs)                        \
    ssf = 1;                                               \
    OR(warn, bit);                                         \
    shake(_state, 5, hshake_hi, vs, 65535);                \
    return m2c::RETN_(0, _state)

/* IntoDamage — the shared damage-interval tail (ret is FAR even for
 * the near caller: all entries below are FAR/labels of a FAR proc). */
static bool intodamage(m2c::_STATE* _state) {
    X86_REGREF
    ax = damagetimer;
    SUB(ax, dx);
    if (CF) {                                          /* jc -> damage */
        CALL(randomdamage, 0);
        CALLF(randx, 0);
        SHL(ax, 1);                                    /* 0..5.10 s */
        SHL(ax, 1);                                    /* 0..10.10 s */
        ADD(ax, 10*100);                               /* 10..20.10 s */
    }
    damagetimer = ax;
    return m2c::RETF_(0, _state);
}

/* MaxDamage — catastrophic damage every 8..13.1s */
bool maxdamage(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);                                   /* 0.00..2.55 */
    SHL(ax, 1);                                        /* 0.00..5.10 */
    ADD(ax, 8*100);                                    /* 8.00..13.10 */
    dx = ax;
    return intodamage(_state);
}

/* MedDamage — medium damage every 1..3.55s */
bool meddamage(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);
    ADD(ax, 1*100);                                    /* 1.00..3.55 */
    dx = ax;
    return intodamage(_state);
}

/* MinDamage — gradual damage wrt frame time */
bool mindamage(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dx = lastframe;
    return intodamage(_state);
}

/* RandomDamage — pick a random system to break (bx = 2 * ((RandX*20) >> 8)) */
bool randomdamage(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CALLF(randx, 0);
    dx = 20;
    MUL1_2(dx);                                        /* 0 .. 20*255 */
    bl = ah;                                           /* 0 .. 19 */
    XOR(bh, bh);
    SHL(bx, 1);                                        /* *2 word index */

    switch (bx >> 1) {                                 /* DamageSwitch[bx] */
    case 0:  DAMLIMB(ssf_gear,        redwarnings2, 0x40,   vshake_hi);   /* DamGear        */
    case 1:  DAMLIMB(ssf_wheelbrakes, ambwarnings2, 0x10,   vshake_hi);   /* DamWheelBrakes */
    case 2:  DAMLIMB(ssf_airbrakes,   ambwarnings2, 0x20,   vshake_hi);   /* DamAirBrakes   */
    case 3:  DAMLIMB(ssf_engine1,     redwarnings2, 0x100,  vshake_hi);   /* DamEngine1     */
    case 4:  DAMLIMB(ssf_engine2,     redwarnings2, 0x200,  vshake_hi);   /* DamEngine2     */
    case 5:  DAMLIMB(ssf_sweep,       ambwarnings2, 0x80,   vshake_hi);   /* DamWingSweep   */
    case 6:  DAMLIMB(ssf_flaps,       ambwarnings2, 0x40,   vshake_hi);   /* DamFlaps       */
    case 7:  DAMLIMB(ssf_thrustrvrs,  redwarnings2, 0x10,   vshake_hi);   /* DamThrustRvrs  */
    case 8:  DAMLIMB(ssf_spils,       redwarnings2, 0x20,   vshake_hi);   /* DamSPILS       */
    case 9:  DAMLIMB(ssf_hud,         ambwarnings2, 0x100,  vshake_hi);   /* DamHUD         */
    case 10: DAMLIMB(ssf_pilotmfd,    ambwarnings2, 0x200,  vshake_off);  /* DamPilotMFD    */
    case 11: DAMLIMB(ssf_navigmfd,    ambwarnings2, 0x400,  vshake_off);  /* DamNavigMFD    */
    case 12: DAMLIMB(ssf_tab1,        ambwarnings2, 0x800,  vshake_off);  /* DamTAB1        */
    case 13: DAMLIMB(ssf_tab2,        ambwarnings2, 0x1000, vshake_off);  /* DamTAB2        */
    case 14: DAMLIMB(ssf_oxygen,      redwarnings2, 0x1,    vshake_off);  /* DamOxygen      */
    case 15: DAMLIMB(ssf_radar,       ambwarnings2, 0x2000, vshake_off);  /* DamRadar       */
    case 16:                                                            /* DamECM         */
        TEST(ecmfitted, 1);
        if ((ecmfitted & 1)) {                       /* jz @@ */
            ssf_ecm = 1;
            OR(ambwarnings2, 0x4);
            shake(_state, 5, hshake_hi, vshake_off, 65535);
            ecmactive = 0;
        }
        return m2c::RETN_(0, _state);
    case 17: DAMLIMB(ssf_rwr,         ambwarnings2, 0x4000, vshake_off);  /* DamRWR         */
    case 18: DAMLIMB(ssf_adc,         ambwarnings2, 0x2,    vshake_off);  /* DamADC         */
    case 19:                                                            /* DamEngineFire  */
        /* reduced chance of engine fire */
        CALLF(randx, 0);
        CMP(al, 128);
        if (!CF) {                                   /* jb SkipFire */
            /* random lh eng fire */
            CALLF(randx, 0);
            CMP(al, 127);
            if (!(al > 127)) {                       /* ja @@ */
                engfire1 = 1;
                OR(redwarnings2, 0x2);
                shake(_state, 5, hshake_hi, vshake_hi, 65535);
            }
            /* random rh eng fire */
            CALLF(randx, 0);
            CMP(al, 127);
            if (!(al > 127)) {                       /* ja SkipFire */
                engfire2 = 1;
                OR(redwarnings2, 0x4);
                shake(_state, 5, hshake_hi, vshake_hi, 65535);
            }
        }
        return m2c::RETN_(0, _state);
    default:
        return m2c::RETN_(0, _state);
    }
}

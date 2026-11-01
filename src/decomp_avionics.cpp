/* decomp_avionics.cpp — clean-C rewrites of TORNADO/AVIONICS procedures.
 *
 * Semantics from the authoritative TORNADO/AVIONICS.ASM source and its
 * original comments.  All procs below are NEAR — bodies end with
 * RETN_(0).
 */

#include "avionics.h"

/* AutoCancel — cancel auto-pilot mode: clears the auto-throttle only in
 * approach mode, resets AutoMode/AltMode/HdgMode and all auto flags.
 * cli/sti bracket the whole update (flying code runs on the irq side).
 * kill: al, flags */
bool autocancel(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CLI;
    XOR(al, al);
    CMP(automode, 2);                          /* AUTO_APPROACH? */
    if ((dw)automode == 2)
        autothrot = al;
    automode = 0;                              /* AUTO_OFF */
    altmode = 0;                               /* ALT_MANUAL */
    hdgmode = 0;                               /* HDG_MANUAL */
    tfauto = al;
    ahflag = al;
    aaflag = al;
    arflag = al;
    appflag = al;
    autotrim = al;
    STI;
    return m2c::RETN_(0, _state);
}

/* CalcRadAlt — TrueRadAlt = bound(alt - ground height, 0, RAD_ALT_CEILING)
 * where ZftHi>0 means "above 65,535ft" (report the ceiling); DispRadAlt
 * damps toward it by half the signed difference each frame.
 * kill: assume all */
bool calcradalt(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = 10000;                                /* RAD_ALT_CEILING */
    CMP(zfthi, 0);
    if ((dw)zfthi <= 0) {                      /* alt <= 65,535ft */
        ax = zftlo;
        SUB(ax, *(dw*)(((db*)gndhtdata) + 0)); /* alt - GndHtData[0] */
        /* MINM ax — clamp to 0 on unsigned underflow */
        CMC;
        RCR(ax, 1);
        CWD;
        RCL(ax, 1);
        AND(ax, dx);
        CMP(ax, 10000);
        if ((dw)ax > 10000)
            ax = 10000;                        /* limit to RAD_ALT_CEILING */
    }
    trueradalt = ax;

    /* damp radar alt (frame rate dependant): use abs(diff) to avoid
     * -1 truncation error, /2, restore sign */
    SUB(ax, dispradalt);
    CWD;                                       /* ABSV ax */
    XOR(ax, dx);
    SUB(ax, dx);
    SHR(ax, 1);                                /* /2 */
    ADC(ax, 0);                                /* 1/2 bit round up */
    XOR(ax, dx);                               /* restore sign */
    SUB(ax, dx);
    ADD(dispradalt, ax);
    return m2c::RETN_(0, _state);
}

/* CalcVFactor — Vfac = (bound(Vtas, 340*8, 1364*8) - 340*8) / 512
 * rounded up: 0 @ 200kts .. 16 @ 800kts (Vtas is ft/sec * 8).
 * kill: assume all */
bool calcvfactor(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = vtas;
    /* SBOUND ax,340*8,1364*8 — signed clamp */
    CMP(ax, 340*8);
    if ((short)ax < (short)(340*8))
        ax = 340*8;
    else {
        CMP(ax, 1364*8);
        if ((short)ax > (short)(1364*8))
            ax = 1364*8;
    }
    SUB(ax, 340*8);
    al = ah;                                   /* /256 */
    XOR(ah, ah);
    SHR(ax, 1);                                /* /512 */
    ADC(ax, 0);                                /* ROUNDUP */
    vfac = ax;
    return m2c::RETN_(0, _state);
}

/* CycleTargets — advance AirTgtPtr to the next ENEMY record in the
 * AirRadarTracks ring (ARAD_REC_SIZE = 12-byte entries).  Only called
 * with a designated target (AirTgtPtr <> -1).
 * kill: assume all */
bool cycletargets(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(numradartracks, 1);
    if ((dw)numradartracks <= 1)
        return m2c::RETN_(0, _state);          /* ExitCycle */

    /* calc list end ptr */
    ax = numradartracks;
    dx = 12;                                   /* ARAD_REC_SIZE */
    MUL1_2(dx);
    bp = m2c::near_offset_external(airradartracks);
    ADD(bp, ax);

    /* init loop vars */
    ax = airtgtptr;
    cx = numradartracks;
    si = m2c::near_offset_external(airradartracks);

    /* search for current designation */
searchloop:
    CMP(ax, *((dw*)((db*)&((arad_track*)raddr(ds, si))->arad_ptr)));
    if ((dw)ax == (dw)(*((dw*)((db*)&((arad_track*)raddr(ds, si))->arad_ptr))))
        goto found;
    ADD(si, 12);
    LOOP(searchloop);
    return m2c::RETN_(0, _state);              /* (should never happen) */

found:
    /* cycle to next enemy target (with wrap around) */
    ADD(si, 12);
    CMP(si, bp);                               /* end of list? */
    if ((dw)si >= (dw)bp)
        si = m2c::near_offset_external(airradartracks);
    cx = numradartracks;
    DEC(cx);
cycleloop:
    di = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds, si))->arad_ptr)));
    CMP(((drone_data*)raddr(ds, (6+18)+di))->drone_side, 2); /* ENEMY? */
    if ((db)(((drone_data*)raddr(ds, (6+18)+di))->drone_side) == 2)
        goto cycleok;
    ADD(si, 12);
    CMP(si, bp);
    if ((dw)si >= (dw)bp)
        si = m2c::near_offset_external(airradartracks);
    LOOP(cycleloop);
    return m2c::RETN_(0, _state);              /* ExitCycle */

cycleok:
    airtgtptr = di;
    return m2c::RETN_(0, _state);
}

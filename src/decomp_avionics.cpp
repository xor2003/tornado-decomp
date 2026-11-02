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

/* UpdateTgtWP — when the floating waypoint is selected (WPPtr = FloatWP)
 * refresh WP range/bearing data and release the track lock.
 * kill: assume all */
bool updatetgtwp(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(wpptr, m2c::near_offset_external(floatwp));
    if (!ZF) return m2c::RETF_(0, _state);     /* jne ExitUpdateWP */
    CALL(updatewpdata, 0);
    tracklocked = 0;
    return m2c::RETF_(0, _state);
}

/* CancelTgtWP — always invalidate the floating waypoint; when it is the
 * selected target also restore OldWPPtr, refresh WP data, release lock.
 * This is the only routine which may cancel the floating waypoint.
 * kill: assume all */
bool canceltgtwp(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    AND(floatwp.wp_attr, ~0x80);               /* NOT WP_VALID */
    CMP(wpptr, m2c::near_offset_external(floatwp));
    if ((dw)wpptr != (dw)(m2c::near_offset_external(floatwp)))
        return m2c::RETF_(0, _state);          /* jne ExitCancelWP */
    ax = oldwpptr;
    wpptr = ax;
    CALL(updatewpdata, 0);
    tracklocked = 0;
    return m2c::RETF_(0, _state);
}

/* UpdateRadar — radar mode switching: NUL when SSF_Radar damaged or
 * KF_RadarOff pressed; AIR on KF_AirRadar (SelectRadarMFD); GND on
 * KF_GndRadar only for non-ADV variants (SelectRadarMFD).
 * kill: assume all */
bool updateradar(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    TEST(ssf_radar, 1);                        /* radar damaged? */
    if ((ssf_radar & 1)) goto nul;
    al = *((&kf_radaroff) + k_status);
    TEST(al, al);                              /* switch radar off? */
    if ((al & al) != 0) goto nul;
    al = *((&kf_airradar) + k_status);
    TEST(al, al);                              /* select air radar? */
    if ((al & al) != 0) {
        radarmode = 4;                         /* AIR_RADAR */
        CALLF(selectradarmfd, 0);
        return m2c::RETN_(0, _state);
    }
    CMP(tornadotype, 2);                       /* ADV variant? */
    if ((dw)tornadotype == 2)
        return m2c::RETN_(0, _state);          /* RadarOk */
    al = *((&kf_gndradar) + k_status);
    TEST(al, al);                              /* select ground radar? */
    if ((al & al) == 0)
        return m2c::RETN_(0, _state);          /* RadarOk */
    radarmode = 2;                             /* GND_RADAR */
    CALLF(selectradarmfd, 0);
    return m2c::RETN_(0, _state);
nul:
    radarmode = 0;                             /* NUL_RADAR */
    return m2c::RETN_(0, _state);
}

/* AircraftRadar — enter the mobile's viewpoint into the RWR threat
 * buffer (range/bearing via CalcRngBrgVP_VP, angular difference via
 * CalcAngDiff, then the threat record + index/flag updates).
 * pass: si -> MOBILE <> + VIEWPOINT <>;  kill: assume all */
bool aircraftradar(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(numrwrthreats, 16);                    /* NUM_RWR_THREATS */
    if ((dw)numrwrthreats == 16)
        return m2c::RETN_(0, _state);          /* ExitACRadar */

    /* calc range and bearing */
    PUSH(si);
    di = si;
    si = m2c::near_offset_external(m_view);
    ADD(di, 6);                                /* MOB_REC_SIZE */
    CALLF(calcrngbrgvp_vp, 0);
    POP(si);

    /* enter aircraft into RWR threat buffer */
    bp = rwrthreatindex;
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))), m2c::getdata(6)); /* THREAT_AC */
    m2c::setdata(&(*((dw*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp+rwr_rng_lo))), m2c::getdata(ax));
    m2c::setdata(&(*((dw*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp+rwr_rng_hi))), m2c::getdata(dx));

    /* calc angular difference */
    ax = hdg;
    dx = bx;
    CALLF(calcangdiff, 0);
    XOR(ax, dx);
    SUB(ax, dx);
    AND(ax, 511);
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_dir))), m2c::getdata(ax));

    ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds, si))->vp_xsec)));
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec))), m2c::getdata(ax));
    ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds, si))->vp_ysec)));
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec))), m2c::getdata(ax));
    ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds, si))->vp_xft)));
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_xft))), m2c::getdata(ax));
    ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds, si))->vp_yft)));
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_yft))), m2c::getdata(ax));
    m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss, m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr))), m2c::getdata(-1));

    INC(numrwrthreats);
    ADD(rwrthreatindex, sizeof(rwr));          /* RWR_REC_SIZE */
    OR(rwrthreatflags, 0x2);                   /* RWR_AC */
    return m2c::RETN_(0, _state);
}

/* RadShadCheck — radar shadow check: 7-sample MoveViewpoint/CalcGndHeight
 * march toward the radar viewpoint.  ret: cf=0 visible, cf=1 non-visible.
 * kill: assume all */
bool radshadcheck(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return autopilot(_i, _state);       /* dispatch-door forward */
    /* calc range and bearing of radar */
    si = m2c::near_offset_external(m_view);
    di = m2c::near_offset_external(rwr_view);
    CALLF(calcrngbrgvp_vp, 0);
    dw rngl = ax;                               /* store range */
    dw rngh = dx;
    dw brg = bx;                                /* store bearing */
    /* always visible if altitude > 65535ft */
    CMP(*((dw*)((db*)&m_view + vp_zft_hi)), 0);
    if ((dw)(*((dw*)((db*)&m_view + vp_zft_hi))) > (dw)0) goto radvis;
    /* copy M_VIEW to TMP_VIEW */
    /* COPY_VP TMP_VIEW,M_VIEW */
    si = m2c::near_offset_external(m_view);
    di = m2c::near_offset_external(tmp_view);
    cx = 18 / 2;                                /* VIEW_REC_SIZE/2 */
    REP MOVSW;
    /* calc sample dist (Dx / 8, Dy / 8) */
    ax = ((dw*)&flatdx)[0];
    dx = ((dw*)&flatdx)[1];
    bx = ((dw*)&flatdy)[0];
    cx = ((dw*)&flatdy)[1];
    SAR(dx, 1); RCR(ax, 1); SAR(cx, 1); RCR(bx, 1);
    SAR(dx, 1); RCR(ax, 1); SAR(cx, 1); RCR(bx, 1);
    SAR(dx, 1); RCR(ax, 1); SAR(cx, 1); RCR(bx, 1);
    /* calc Dz = zft / 8 */
    di = *((dw*)((db*)&m_view + vp_zft_lo));
    SHR(di, 1);
    SHR(di, 1);
    SHR(di, 1);
    /* shadow test loop */
    bp = 7;                                     /* loop count */
radshadloop:
    {
        dw sax = ax, sbx = bx, scx = cx, sdx = dx, sdi = di, sbp = bp;
        si = m2c::near_offset_external(tmp_view);
        CALLF(moveviewpoint, 0);
        di = sdi;
        ax = *((dw*)((db*)&tmp_view + vp_zft_lo));
        SUB(ax, di);
        /* MINM ax — clamp to 0 on unsigned underflow */
        CMC;
        RCR(ax, 1);
        CWD;
        RCL(ax, 1);
        AND(ax, dx);
        *((dw*)((db*)&tmp_view + vp_zft_lo)) = ax;
        CMP(ax, 256 * 15);                      /* alt > max gnd ht? */
        if ((dw)ax > (dw)(256 * 15)) goto radsampled;
        CALLF(calcgndheight, 0);
        CMP(*((dw*)((db*)&tmp_view + vp_zft_lo)), ax);  /* alt > gnd ht? */
radsampled:
        bp = sbp;
        di = sdi;
        dx = sdx;
        cx = scx;
        bx = sbx;
        ax = sax;
    }
    if (CF || ZF) goto radnonvis;               /* alt <= gnd ht -> */
    DEC(bp);                                    /* next test */
    if (!ZF) goto radshadloop;
radvis:
    bx = brg;                                   /* restore bearing */
    dx = rngh;                                  /* restore range */
    ax = rngl;
    CLC;                                        /* cf = 0 (visible) */
    return m2c::RETN_(0, _state);
radnonvis:
    bx = brg;                                   /* restore bearing */
    dx = rngh;                                  /* restore range */
    ax = rngl;
    STC;                                        /* cf = 1 (non-visible) */
    return m2c::RETN_(0, _state);
}

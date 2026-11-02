/* decomp_tab.cpp — clean-C rewrites of Tornado TAB.ASM procedures.
 * Faithful to the assembly; see TAB.ASM for original comments. */
#include "tab.h"

/* SetDatum — pass M_VIEW, ret TIALD_VIEW (COPY_VP struct copy).
 * kill: assume all */
bool setdatum(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* COPY_VP TIALD_VIEW,M_VIEW */
    si = m2c::near_offset_external(m_view);
    di = m2c::near_offset_external(tiald_view);
    cx = 18 / 2;                                /* VIEW_REC_SIZE/2 */
    REP MOVSW;
    REP MOVSW;
    return m2c::RETN_(0, _state);
}

/* TargetMoved — pass TIALD_VIEW/FloatWP.
 * ret: cf=0 ok, cf=1 moved.  kill: ax, flags */
bool targetmoved(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    TEST(floatwp.wp_attr, 0x80);                /* WP_VALID? */
    if (!(floatwp.wp_attr & 0x80)) goto moved;
    ax = floatwp.wp_xsec;
    CMP(ax, tiald_view.vp_xsec);
    if ((dw)ax != (dw)tiald_view.vp_xsec) goto moved;
    ax = floatwp.wp_ysec;
    CMP(ax, tiald_view.vp_ysec);
    if ((dw)ax != (dw)tiald_view.vp_ysec) goto moved;
    ax = floatwp.wp_xft;
    CMP(ax, tiald_view.vp_xft);
    if ((dw)ax != (dw)tiald_view.vp_xft) goto moved;
    ax = floatwp.wp_yft;
    CMP(ax, tiald_view.vp_yft);
    if ((dw)ax != (dw)tiald_view.vp_yft) goto moved;
    CLC;
    return m2c::RETN_(0, _state);
moved:
    STC;                                        /* cf = 1 (target moved) */
    return m2c::RETN_(0, _state);
}

/* CalcScanSize — scan size = ubound(alt, 1, 23170).
 * pass M_VIEW, ret TDScanSize.  kill: ax, flags */
bool calcscansize(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = 23170;                                 /* assume alt > 65,535ft */
    CMP(*((dw*)((db*)&m_view + vp_zft_hi)), 0);
    if ((dw)(*((dw*)((db*)&m_view + vp_zft_hi))) <= (dw)0) {
        ax = *((dw*)((db*)&m_view + vp_zft_lo));
        CMP(ax, 1);                             /* UBOUND ax,1,23170 */
        if ((dw)ax < (dw)1) ax = 1;
        else if ((dw)ax > (dw)23170) ax = 23170;
    }
    tdscansize = ax;
    return m2c::RETN_(0, _state);
}

/* SetTarget — copy TIALD_VIEW position into FloatWP when on-map.
 * ret: cf=0 target valid, cf=1 invalid.  kill: ax, flags (except cf) */
bool settarget(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    CMP(tiald_view.vp_xsec, 31);                /* on active map? */
    if ((!CF && !ZF)) goto invalid;             /* no, ignore -> */
    CMP(tiald_view.vp_ysec, 31);
    if ((dw)(tiald_view.vp_ysec) > (dw)31) goto invalid;
    ax = tiald_view.vp_xsec;
    floatwp.wp_xsec = ax;
    ax = tiald_view.vp_ysec;
    floatwp.wp_ysec = ax;
    ax = tiald_view.vp_xft;
    floatwp.wp_xft = ax;
    ax = tiald_view.vp_yft;
    floatwp.wp_yft = ax;
    OR(floatwp.wp_attr, 0x80);                  /* WP_VALID */
    CALLF(updatetgtwp, 0);                      /* tell AutoRoute */
    CLC;                                        /* cf = 0 (target valid) */
    return m2c::RETN_(0, _state);
invalid:
    STC;                                        /* cf = 1 (target invalid) */
    return m2c::RETN_(0, _state);
}

/* FRACADJ ax — rounded fixed-point product in dx:ax -> ax=dx */
#define FRACADJ_AX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
        ax = dx;                                                    \
    } while (0)
#define FRACADJ_DX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
    } while (0)
#define FRACADJ_BX() do {                                           \
        SHL(ax, 1); RCL(dx, 1);                                     \
        SHL(ax, 1); ADC(dx, 0);                                     \
        bx = dx;                                                    \
    } while (0)

/* SBOUND ax,-255,255 — clamp signed ax */
#define SBOUND255() do {                                            \
        if ((short)ax < (short)-255) ax = -255;                     \
        else if ((short)ax > (short)255) ax = 255;                  \
    } while (0)

/* NEG32 dx,ax — 32-bit negate of dx:ax */
#define NEG32_DXAX() do {                                           \
        ax = ~ax; dx = ~dx;                                         \
        ADD(ax, 1); ADC(dx, 0);                                     \
    } while (0)
#define NEG32_CXBX() do {                                           \
        bx = ~bx; cx = ~cx;                                         \
        ADD(bx, 1); ADC(cx, 0);                                     \
    } while (0)

/* RotateXYOffsets — rotate x and y offsets wrt hdg.
 * pass: TDXOffset, TDYOffset, M_VIEW.VP_HDG.  ret: TIALD_VIEW.
 * kill: assume all */
bool rotatexyoffsets(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* rotate x and y offsets wrt hdg — SINCOS si,di,ax */
    ax = m_view.vp_hdg;
    AND(ax, 0x001ff); SHL(ax, 1);
    si = *(dw*)(((db*)&sintable) + ax);
    di = *(dw*)(((db*)&costable) + ax);
    /* yr = y * cos(hdg) - x * sin(hdg) */
    ax = tdyoffset;
    IMUL1_2(di);
    SHL(ax, 1);                                 /* adjust after frac mul */
    RCL(dx, 1);
    bx = ax;
    cx = dx;
    ax = tdxoffset;
    IMUL1_2(si);
    SHL(ax, 1);                                 /* adjust after frac mul */
    RCL(dx, 1);
    SUB(bx, ax);
    SBB(cx, dx);
    SHL(bx, 1);                                 /* 1/2 bit round up */
    ADC(cx, 0);
    ax = cx;
    CWD;
    bx = ax;
    cx = dx;
    /* xr = x * cos(hdg) + y * sin(hdg) */
    ax = tdxoffset;
    IMUL1_2(di);
    SHL(ax, 1);                                 /* adjust after frac mul */
    RCL(dx, 1);
    bp = ax;
    di = dx;
    ax = tdyoffset;
    IMUL1_2(si);
    SHL(ax, 1);                                 /* adjust after frac mul */
    RCL(dx, 1);
    ADD(ax, bp);
    ADC(dx, di);
    SHL(ax, 1);                                 /* 1/2 bit round up */
    ADC(dx, 0);
    ax = dx;
    CWD;
    si = m2c::near_offset_external(tiald_view);
    CALLF(moveviewpoint, 0);
    return m2c::RETN_(0, _state);
}

/* AdjustXYOffsets — adjust x and y offsets (using mouse input).
 * ret: TDXOffset, TDYOffset.  kill: assume all */
bool adjustxyoffsets(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bp = tdscansize;
    /* x motion = sbound(XMickeys,-255,255) * TDZoom / 2
     * x offset = TDXOffset + TDScanSize * x motion / 32768
     * TDXOffset = sbound(x offset, -TDScanSize, TDScanSize) */
    ax = xmickeys;
    SBOUND255();
    dx = tdzoom;
    IMUL1_2(dx);
    SAR(dx, 1);
    RCR(ax, 1);
    ADC(ax, 0);
    /* calc x offset (use 32-bit maths) */
    IMUL1_2(bp);
    FRACADJ_AX();
    CWD;
    bx = ax;
    cx = dx;
    ax = tdxoffset;
    CWD;
    ADD(bx, ax);
    ADC(cx, dx);
    ax = cx;
    CWD;
    XOR(bx, dx);                                /* abs(offset) */
    XOR(cx, dx);
    SUB(bx, dx);
    SBB(cx, dx);
    CMP(cx, 0);                                 /* offset > 65,535? */
    if ((dw)cx > (dw)0) goto limitx;
    CMP(bx, bp);                                /* offset > scan size? */
    if ((dw)bx <= (dw)bp) goto xok;
limitx:
    bx = bp;                                    /* limit */
xok:
    XOR(bx, dx);                                /* restore sign */
    SUB(bx, dx);
    tdxoffset = bx;
    /* y motion = sbound(-YMickeys,-255,255) * TDZoom / 2
     * y offset = TDYOffset + TDScanSize * y motion / 32768
     * TDYOffset = sbound(y offset, -TDScanSize, TDScanSize) */
    ax = ymickeys;
    NEG(ax);                                    /* reverse sense */
    SBOUND255();
    dx = tdzoom;
    IMUL1_2(dx);
    SAR(dx, 1);
    RCR(ax, 1);
    ADC(ax, 0);
    /* calc y offset (use 32-bit maths) */
    IMUL1_2(bp);
    FRACADJ_AX();
    CWD;
    bx = ax;
    cx = dx;
    ax = tdyoffset;
    CWD;
    ADD(bx, ax);
    ADC(cx, dx);
    ax = cx;
    CWD;
    XOR(bx, dx);                                /* abs(offset) */
    XOR(cx, dx);
    SUB(bx, dx);
    SBB(cx, dx);
    CMP(cx, 0);                                 /* offset > 65,535? */
    if ((dw)cx > (dw)0) goto limity;
    CMP(bx, bp);                                /* offset > scan size? */
    if ((dw)bx <= (dw)bp) goto yok;
limity:
    bx = bp;                                    /* limit */
yok:
    XOR(bx, dx);                                /* restore sign */
    SUB(bx, dx);
    tdyoffset = bx;
    return m2c::RETN_(0, _state);
}

/* AdjustLock — x/y lock motion then RotateXYOffsets.
 * Borrows TDXOffset/TDYOffset in order to use RotateXYOffsets.
 * pass: nothing.  ret: TIALD_VIEW.  kill: assume all */
bool adjustlock(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bp = tdscansize;
    /* x motion = sbound(XMickeys,-255,255) * TDZoom / 2
     * x offset = TDScanSize * x motion / 32768 */
    ax = xmickeys;
    SBOUND255();
    dx = tdzoom;
    IMUL1_2(dx);
    SAR(dx, 1);
    RCR(ax, 1);
    ADC(ax, 0);
    IMUL1_2(bp);
    FRACADJ_DX();
    tdxoffset = dx;
    /* y motion = sbound(-YMickeys,-255,255) * TDZoom / 2
     * y offset = TDScanSize * y motion / 32768 */
    ax = ymickeys;
    NEG(ax);                                    /* reverse sense */
    SBOUND255();
    dx = tdzoom;
    IMUL1_2(dx);
    SAR(dx, 1);
    RCR(ax, 1);
    ADC(ax, 0);
    IMUL1_2(bp);
    FRACADJ_DX();
    tdyoffset = dx;
    CALL(rotatexyoffsets, 0);                   /* move lock */
    return m2c::RETN_(0, _state);
}

/* RecalcXYOffsets — recalculate x and y offsets (from fixed point).
 * pass: M_VIEW = current position, TIALD_VIEW = fixed position.
 * ret: TDXOffset, TDYOffset, TDDrag.  kill: assume all */
bool recalcxyoffsets(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dw savedx, savedx2;
    tddrag = 0;                                 /* assume within limits */
    /* x1 = xsec * 16384 + xft + 8192 */
    cx = m_view.vp_xsec;                        /* xsec * 65536 */
    XOR(bx, bx);
    SAR(cx, 1); RCR(bx, 1);                     /* /4 */
    SAR(cx, 1); RCR(bx, 1);
    bp = m_view.vp_xft;
    ADD(bp, 8192);
    ADD(bx, bp);
    ADC(cx, 0);
    /* x2 = xsec * 16384 + xft + 8192 */
    dx = tiald_view.vp_xsec;                    /* xsec * 65536 */
    XOR(ax, ax);
    SAR(dx, 1); RCR(ax, 1);                     /* /4 */
    SAR(dx, 1); RCR(ax, 1);
    bp = tiald_view.vp_xft;
    ADD(bp, 8192);
    ADD(ax, bp);
    ADC(dx, 0);
    /* Dx = x2 - x1 */
    SUB(ax, bx);
    SBB(dx, cx);
    savedx = ax;                                /* store Dx */
    savedx2 = dx;
    /* y1 = -(ysec * 16384) + yft - 8192 */
    dx = m_view.vp_ysec;                        /* ysec * 65536 */
    XOR(ax, ax);
    SAR(dx, 1); RCR(ax, 1);                     /* /4 */
    SAR(dx, 1); RCR(ax, 1);
    NEG32_DXAX();
    bp = m_view.vp_yft;
    SUB(bp, 8192);
    ADD(ax, bp);
    ADC(dx, 0);
    /* y2 = -(ysec * 16384) + yft - 8192 */
    cx = tiald_view.vp_ysec;                    /* ysec * 65536 */
    XOR(bx, bx);
    SAR(cx, 1); RCR(bx, 1);                     /* /4 */
    SAR(cx, 1); RCR(bx, 1);
    NEG32_CXBX();
    bp = tiald_view.vp_yft;
    SUB(bp, 8192);
    ADD(bx, bp);
    ADC(cx, 0);
    /* Dy = y2 - y1 */
    SUB(bx, ax);
    SBB(cx, dx);
    dx = savedx2;                               /* restore Dx */
    ax = savedx;
    /* keep offsets in range:
     * Dx = sbound(Dx,-32767,32767); Dy = sbound(Dy,-32767,32767) */
    si = dx;                                    /* store sign(Dx) */
    di = cx;                                    /* store sign(Dy) */
    TEST(dx, dx);
    if ((short)dx < 0) NEG32_DXAX();
    CMP(dx, 0);                                 /* Dx > 65535? */
    if ((dw)dx > (dw)0) goto limitdx;
    CMP(ax, 32767);                             /* Dx > 32767? */
    if ((dw)ax <= (dw)32767) goto dxok;
limitdx:
    ax = 32767;
    tddrag = 1;
dxok:
    TEST(si, si);
    if ((short)si < 0) NEG(ax);                 /* restore sign */
    TEST(cx, cx);
    if ((short)cx < 0) NEG32_CXBX();
    CMP(cx, 0);                                 /* Dy > 65535? */
    if ((dw)cx > (dw)0) goto limitdy;
    CMP(bx, 32767);                             /* Dy > 32767? */
    if ((dw)bx <= (dw)32767) goto dyok;
limitdy:
    bx = 32767;
    tddrag = 1;
dyok:
    TEST(di, di);
    if ((short)di < 0) NEG(bx);                 /* restore sign */
    tmpx = ax;
    tmpy = bx;
    /* rotate north orientated offsets wrt hdg:
     *   hdg <= 256pdegs: hdg = (-hdg and 511) (counter clockwise)
     *   else:            hdg = 512 - hdg       (clockwise) */
    ax = m_view.vp_hdg;
    CMP(ax, 256);
    if ((dw)ax <= (dw)256) {
        NEG(ax);
        AND(ax, 511);
    } else {
        ax = 512;
        SUB(ax, m_view.vp_hdg);
    }
    /* SINCOS si,di,ax — si = sin(hdg), di = cos(hdg) */
    AND(ax, 0x001ff); SHL(ax, 1);
    si = *(dw*)(((db*)&sintable) + ax);
    di = *(dw*)(((db*)&costable) + ax);
    /* xr = x * cos(hdg) + y * sin(hdg) */
    ax = tmpx;
    IMUL1_2(di);
    FRACADJ_BX();
    ax = tmpy;
    IMUL1_2(si);
    FRACADJ_AX();
    CWD;
    XCHG(bx, ax);
    cx = dx;
    CWD;
    ADD(ax, bx);
    ADC(dx, cx);
    bp = 0;                                     /* assume +ve */
    if ((short)dx >= 0) goto xrabs;
    bp = -1;
    NEG32_DXAX();
xrabs:
    CMP(dx, 0);                                 /* xr > 65535? */
    if ((dw)dx > (dw)0) goto limitxr;
    CMP(ax, tdscansize);                        /* within scan limits? */
    if ((dw)ax <= (dw)tdscansize) goto xrok;
limitxr:
    ax = tdscansize;
    tddrag = 1;
xrok:
    XOR(ax, bp);                                /* restore sign */
    SUB(ax, bp);
    tdxoffset = ax;
    /* yr = y * cos(hdg) - x * sin(hdg) */
    ax = tmpy;
    IMUL1_2(di);
    FRACADJ_BX();
    ax = tmpx;
    IMUL1_2(si);
    FRACADJ_AX();
    CWD;
    XCHG(bx, ax);
    cx = dx;
    CWD;
    SUB(ax, bx);
    SBB(dx, cx);
    bp = 0;                                     /* assume +ve */
    if ((short)dx >= 0) goto yrabs;
    bp = -1;
    NEG32_DXAX();
yrabs:
    CMP(dx, 0);                                 /* yr > 65535? */
    if ((dw)dx > (dw)0) goto limityr;
    CMP(ax, tdscansize);                        /* within scan limits? */
    if ((dw)ax <= (dw)tdscansize) goto yrok;
limityr:
    ax = tdscansize;
    tddrag = 1;
yrok:
    XOR(ax, bp);                                /* restore sign */
    SUB(ax, bp);
    tdyoffset = ax;
    return m2c::RETN_(0, _state);
}
#undef FRACADJ_AX
#undef FRACADJ_DX
#undef FRACADJ_BX
#undef SBOUND255
#undef NEG32_DXAX
#undef NEG32_CXBX

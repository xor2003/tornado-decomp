/* decomp_movemap.cpp — clean-C rewrites of Tornado MOVEMAP.ASM procedures.
 * Faithful to the assembly; see MOVEMAP.ASM for original comments. */
#include "movemap.h"

/* SectorReject — sector reject test.
 * ret: cf=0 sector visible, cf=1 non-visible.
 * kill: assume all (except cf) */
bool sectorreject(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    cl = *(sctrscale);
    dx = 64;
    SAL(dx, cl);
    ax = xsecref;
    *(dw*)(((db*)&xe) + 0) = ax;
    *(dw*)(((db*)&xe) + 2) = ax;
    ADD(ax, dx);
    *(dw*)(((db*)&xe) + 4) = ax;
    *(dw*)(((db*)&xe) + 6) = ax;
    ax = ysecref;
    *(dw*)(((db*)&ye) + 0) = ax;
    *(dw*)(((db*)&ye) + 6) = ax;
    ADD(ax, dx);
    *(dw*)(((db*)&ye) + 2) = ax;
    *(dw*)(((db*)&ye) + 4) = ax;
    si = 6;
    CALLF(vquickoutcodes, 0);
    return m2c::RETN_(0, _state);
}

/* SortFloatWP — pass XSec/YSec; ret FloatWPX/FloatWPY if the floating
 * waypoint is valid and in sector.  kill: assume all */
bool sortfloatwp(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* is floating waypoint valid? */
    TEST(floatwp.wp_attr, 0x80);                /* WP_VALID */
    if (!(floatwp.wp_attr & 0x80)) goto exitfloatwp;
    /* is floating waypoint in sector? */
    ax = floatwp.wp_xsec;
    CMP(ax, xsec);                              /* x sector match? */
    if ((dw)ax != (dw)xsec) goto exitfloatwp;
    ax = floatwp.wp_ysec;
    CMP(ax, ysec);                              /* y sector match? */
    if ((dw)ax != (dw)ysec) goto exitfloatwp;
    /* calc floating waypoint position relative to display origin */
    ax = floatwp.wp_xft;
    bx = floatwp.wp_yft;
    ADD(ax, 8192);
    cl = 8;
    SUB(cl, *(sctrscale));
    SHR(ax, cl);
    ADD(ax, xsecref);
    *(dw*)(((db*)&xe) + 0) = ax;
    ADD(bx, 8192);
    cl = 8;
    SUB(cl, *(sctrscale));
    SHR(bx, cl);
    ADD(bx, ysecref);
    *(dw*)(((db*)&ye) + 0) = bx;
    CALLF(vdotclip, 0);
    if (CF) goto exitfloatwp;                   /* non-visible -> */
    /* calc x, y position relative to display origin */
    CMP(splitscreenbigmapison, 1);
    if ((db)splitscreenbigmapison != (db)1) goto fullmap;
    SUB(cx, vp.v_x_org);
    floatwpx = cx;
    SUB(bx, vp.v_y_org);
    floatwpy = bx;
    goto exitfloatwp;
fullmap:
    SUB(cx, vp_full.v_x_org);
    floatwpx = cx;
    SUB(bx, vp_full.v_y_org);
    floatwpy = bx;
exitfloatwp:
    return m2c::RETN_(0, _state);
}

/* SortACDatum — pass XSec/YSec; ret ACDatumX/ACDatumY if the aircraft
 * is in sector.  kill: assume all */
bool sortacdatum(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* is aircraft in sector? */
    ax = m_view.vp_xsec;
    CMP(ax, xsec);                              /* x sector match? */
    if ((dw)ax != (dw)xsec) goto exitacdatum;
    ax = m_view.vp_ysec;
    CMP(ax, ysec);                              /* y sector match? */
    if ((dw)ax != (dw)ysec) goto exitacdatum;
    /* calc aircraft position relative to display origin */
    ax = m_view.vp_xft;
    bx = m_view.vp_yft;
    ADD(ax, 8192);
    cl = 8;
    SUB(cl, *(sctrscale));
    SHR(ax, cl);
    ADD(ax, xsecref);
    *(dw*)(((db*)&xe) + 0) = ax;
    ADD(bx, 8192);
    cl = 8;
    SUB(cl, *(sctrscale));
    SHR(bx, cl);
    ADD(bx, ysecref);
    *(dw*)(((db*)&ye) + 0) = bx;
    CALLF(vdotclip, 0);
    if (CF) goto exitacdatum;                   /* non-visible -> */
    /* calc x, y position relative to display origin */
    CMP(splitscreenbigmapison, 1);
    if ((db)splitscreenbigmapison != (db)1) goto fullmap;
    SUB(cx, vp.v_x_org);
    acdatumx = cx;
    SUB(bx, vp.v_y_org);
    acdatumy = bx;
    goto exitacdatum;
fullmap:
    SUB(cx, vp_full.v_x_org);
    acdatumx = cx;
    SUB(bx, vp_full.v_y_org);
    acdatumy = bx;
exitacdatum:
    return m2c::RETN_(0, _state);
}

/* NEG32 dx,ax — 32-bit negate of dx:ax */
#define NEG32_DXAX() do {                                           \
        ax = ~ax; dx = ~dx;                                         \
        ADD(ax, 1); ADC(dx, 0);                                     \
    } while (0)
#define NEG32_CXBX() do {                                           \
        bx = ~bx; cx = ~cx;                                         \
        ADD(bx, 1); ADC(cx, 0);                                     \
    } while (0)

/* ShadowCheck — pass cx=xft, bx=yft sample position; ret cf=0 visible,
 * cf=1 non-visible; QuadTested/QuadMask/QuadResult updated.
 * kill: assume all */
bool shadowcheck(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* always visible if altitude > 65535ft */
    CMP(*((dw*)((db*)&m_view + vp_zft_hi)), 0);                   /* alt > 65535ft? */
    if ((dw)(*((dw*)((db*)&m_view + vp_zft_hi))) == (dw)0) goto quadtest;
    CLC;                                        /* cf = 0 = visible */
    return m2c::RETN_(0, _state);
quadtest:
    /* calc quad x centre */
    ax = cx;
    CWD;
    si = 4096;
    si ^= dx;
    si -= dx;
    ROL(dx, 1);                                 /* cf = sign(xft) */
    RCL(cl, 1);
    /* calc quad y centre */
    ax = bx;
    CWD;
    di = 4096;
    di ^= dx;
    di -= dx;
    ROL(dx, 1);                                 /* cf = sign(yft) */
    RCL(cl, 1);
    cl &= 3;    /* and cl,0011b */
    al = 1;     /* mov al,0001b */
    SHL(al, cl);
    TEST(quadtested, al);                       /* quadrant already tested? */
    if (!(quadtested & al)) goto untested;
    al = quadresult;
    cl += 1;
    SHR(al, cl);                                /* cf = result wrt quad */
    return m2c::RETN_(0, _state);
untested:
    quadtested |= al;
    quadmask = al;
    /* copy M_VIEW to TMP_VIEW */
    ax = si;
    dx = di;
    /* COPY_VP TMP_VIEW,M_VIEW */
    si = m2c::near_offset_external(m_view);
    di = m2c::near_offset_external(tmp_view);
    cx = 18 / 2;                                /* VIEW_REC_SIZE/2 */
    REP MOVSW;
    si = ax;
    di = dx;
    /* calc Dx and Dy */
    /* x1 = xsec * 16384 + xft + 8192 */
    cx = m_view.vp_xsec;                        /* xsec * 65536 */
    bx = 0;
    SAR(cx, 1); RCR(bx, 1);
    SAR(cx, 1); RCR(bx, 1);
    bp = m_view.vp_xft;
    ADD(bp, 8192);
    ADD(bx, bp);
    ADC(cx, 0);
    /* x2 = xsec * 16384 + xft + 8192 */
    dx = xsec;                                  /* xsec * 65536 */
    ax = 0;
    SAR(dx, 1); RCR(ax, 1);
    SAR(dx, 1); RCR(ax, 1);
    bp = si;
    ADD(bp, 8192);
    ADD(ax, bp);
    ADC(dx, 0);
    /* Dx = x2 - x1 */
    SUB(ax, bx);
    SBB(dx, cx);
    dw dxlo = ax;                               /* store Dx */
    dw dxhi = dx;
    /* y1 = -(ysec * 16384) + yft - 8192 */
    dx = m_view.vp_ysec;                        /* ysec * 65536 */
    ax = 0;
    SAR(dx, 1); RCR(ax, 1);
    SAR(dx, 1); RCR(ax, 1);
    NEG32_DXAX();
    bp = m_view.vp_yft;
    SUB(bp, 8192);
    ADD(ax, bp);
    ADC(dx, 0);
    /* y2 = -(ysec * 16384) + yft - 8192 */
    cx = ysec;                                  /* ysec * 65536 */
    bx = 0;
    SAR(cx, 1); RCR(bx, 1);
    SAR(cx, 1); RCR(bx, 1);
    NEG32_CXBX();
    bp = di;
    SUB(bp, 8192);
    ADD(bx, bp);
    ADC(cx, 0);
    /* Dy = y2 - y1 */
    SUB(bx, ax);
    SBB(cx, dx);
    ax = dxlo;                                  /* restore Dx */
    dx = dxhi;
    /* calc sample dist (Dx / 8, Dy / 8) */
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
shadowloop:
    {
        dw sax = ax, sbx = bx, scx = cx, sdx = dx, sdi = di, sbp = bp;
        si = m2c::near_offset_external(tmp_view);
        CALLF(moveviewpoint, 0);
        di = sdi;
        ax = *((dw*)((db*)&tmp_view + vp_zft_lo));
        SUB(ax, di);
        /* MINM ax — clamp to 0 on borrow */
        CMC; RCR(ax, 1); CWD; RCL(ax, 1); AND(ax, dx);
        *((dw*)((db*)&tmp_view + vp_zft_lo)) = ax;
        CMP(ax, 256 * 15);                      /* alt > max gnd ht? */
        if ((dw)ax > (dw)(256 * 15)) goto sampled;
        CALLF(calcgndheight, 0);
        CMP(*((dw*)((db*)&tmp_view + vp_zft_lo)), ax);            /* alt > gnd ht? */
sampled:
        bp = sbp;
        di = sdi;
        dx = sdx;
        cx = scx;
        bx = sbx;
        ax = sax;
    }
    if (CF || ZF) goto radarnonvis;             /* alt <= gnd ht -> */
    DEC(bp);                                    /* next test */
    if (!ZF) goto shadowloop;
    /* set result to visible */
radarvis:
    al = quadmask;
    al = ~al;
    quadresult &= al;
    CLC;                                        /* cf = 0 = visible */
    return m2c::RETN_(0, _state);
radarnonvis:
    STC;                                        /* cf = 1 = non-visible */
    return m2c::RETN_(0, _state);
}

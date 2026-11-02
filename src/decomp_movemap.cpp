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

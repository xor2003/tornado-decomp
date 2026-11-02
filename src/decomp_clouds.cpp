/* decomp_clouds.cpp — clean-C rewrites of VISUAL/CLOUDS procedures.
 * Semantics from the authoritative VISUAL/CLOUDS.ASM source. */

#include "clouds.h"

/* table helpers: XSX[$MID][si] etc — $MID=128 byte offset, dw arrays */
#define XSXI ((db*)&xsx)
#define XSYI ((db*)&xsy)
#define XSZI ((db*)&xsz)
#define YSXI ((db*)&ysx)
#define YSYI ((db*)&ysy)
#define YSZI ((db*)&ysz)
#define ZSXI ((db*)&zsx)
#define ZSYI ((db*)&zsy)
#define ZSZI ((db*)&zsz)

/* CalcCentre1 — SEC_SCALE1 sector centre; pass si,di = x/y sec offsets,
 * bp = viewpoint index; ret XPos1/YPos1/ZPos1, cf=0.  kill: ax,bx,flags */
bool calccentre1(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawclouds1(_i, _state);     /* dispatch-door forward */
    SUB(si, xgrid1);
    ADD(si, 32+64);
    SHL(si, 1);
    SUB(di, ygrid1);
    ADD(di, 32+64);
    SHL(di, 1);
    bx = bp;
    ax = _xe01;
    ADD(ax, *(dw*)(XSXI + si));
    ADD(ax, *(dw*)(XSYI + di));
    ADD(ax, *(dw*)(XSZI + bx));
    xpos1 = ax;
    ax = _ye01;
    ADD(ax, *(dw*)(YSXI + si));
    ADD(ax, *(dw*)(YSYI + di));
    ADD(ax, *(dw*)(YSZI + bx));
    ypos1 = ax;
    ax = _ze01;
    ADD(ax, *(dw*)(ZSXI + si));
    ADD(ax, *(dw*)(ZSYI + di));
    ADD(ax, *(dw*)(ZSZI + bx));
    zpos1 = ax;
    CLC;                                        /* current sector always visible */
    return m2c::RETN_(0, _state);
}

/* shared tail for CalcCentre2/8/16: Y reject + X/Z sums.
 * sc = sar count; xe/ye/ze = _XE0n/_YE0n/_ZE0n; yth = -SCTR_Y_THRES/n;
 * xp/yp/zp = XPosn/YPosn/ZPosn refs. */
#define CENTRE_TAIL(sc, xe, ye, ze, yth, xp, yp, zp, fail) \
    bx = bp; \
    ax = *(dw*)(YSZI + bx); \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SAR(ax, 1); \
    ADD(ax, (dw)(ye)); \
    ADD(ax, *(dw*)(YSXI + si)); \
    ADD(ax, *(dw*)(YSYI + di)); \
    CMP(ax, (dw)(yth)); \
    if ((SF != OF)) goto fail;                  /* jl — reject sector */ \
    (yp) = ax; \
    ax = *(dw*)(XSZI + bx); \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SAR(ax, 1); \
    ADD(ax, (dw)(xe)); \
    ADD(ax, *(dw*)(XSXI + si)); \
    ADD(ax, *(dw*)(XSYI + di)); \
    (xp) = ax; \
    ax = *(dw*)(ZSZI + bx); \
    for (int _i_ = 0; _i_ < (sc); ++_i_) SAR(ax, 1); \
    ADD(ax, (dw)(ze)); \
    ADD(ax, *(dw*)(ZSXI + si)); \
    ADD(ax, *(dw*)(ZSYI + di)); \
    (zp) = ax; \
    CLC;                                        /* cf = 0 = visible */ \
    return m2c::RETN_(0, _state); \
fail: \
    STC;                                        /* cf = 1 = non-visible */ \
    return m2c::RETN_(0, _state)

/* CalcCentre2 — SEC_SCALE2 centre (si,di sec offsets, bp vp index). */
bool calccentre2(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawclouds1(_i, _state);     /* dispatch-door forward */
    NEG(di);                                    /* -(y sec offset) */
    for (int _i_ = 0; _i_ < 5; ++_i_) {         /* REPT 5 */
        SHL(si, 1);                             /* x sec offset * 32 */
        SHL(di, 1);                             /* -(y sec offset) * 32 */
    }
    SUB(si, xgrid2);
    ADD(si, 16+64);
    SHL(si, 1);
    SUB(di, ygrid2);
    ADD(di, 16+64);
    SHL(di, 1);
    CENTRE_TAIL(1, _xe02, _ye02, _ze02, -sctr_y_thres/2,
                xpos2, ypos2, zpos2, fail2);
}

/* CalcCentre8 — SEC_SCALE8 centre. */
bool calccentre8(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawclouds1(_i, _state);     /* dispatch-door forward */
    NEG(di);                                    /* -(y sec offset) */
    for (int _i_ = 0; _i_ < 3; ++_i_) {         /* REPT 3 */
        SHL(si, 1);                             /* x sec offset * 8 */
        SHL(di, 1);                             /* -(y sec offset) * 8 */
    }
    SUB(si, xgrid8);
    ADD(si, 4+64);
    SHL(si, 1);
    SUB(di, ygrid8);
    ADD(di, 4+64);
    SHL(di, 1);
    CENTRE_TAIL(3, _xe08, _ye08, _ze08, -sctr_y_thres/8,
                xpos8, ypos8, zpos8, fail8);
}

/* CalcCentre16 — SEC_SCALE16 centre. */
bool calccentre16(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawclouds1(_i, _state);     /* dispatch-door forward */
    NEG(di);                                    /* -(y sec offset) */
    for (int _i_ = 0; _i_ < 2; ++_i_) {         /* REPT 2 */
        SHL(si, 1);                             /* x sec offset * 4 */
        SHL(di, 1);                             /* -(y sec offset) * 4 */
    }
    SUB(si, xgrid16);
    ADD(si, 2+64);
    SHL(si, 1);
    SUB(di, ygrid16);
    ADD(di, 2+64);
    SHL(di, 1);
    CENTRE_TAIL(4, _xe016, _ye016, _ze016, -sctr_y_thres/16,
                xpos16, ypos16, zpos16, fail16);
}

/* CalcSctrScale — pass si,di = x/y sec offsets; ret SctrScaleMode.
 * kill: ax,bx,cx,bp,flags */
bool calcsctrscale(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return drawclouds1(_i, _state);     /* dispatch-door forward */
    bx = sec_scale16;                           /* assume > 3 sectors */
    ax = si;
    /* ABSV ax — ax = abs(x sec offset) */
    CWD;
    XOR(ax, dx);
    SUB(ax, dx);
    CMP(ax, 3);                                 /* > 3 sectors? */
    if ((dw)ax > 3) goto setscale;              /* ja — yes -> */
    cx = ax;
    ax = di;
    /* ABSV ax — ax = abs(y sec offset) */
    CWD;
    XOR(ax, dx);
    SUB(ax, dx);
    CMP(ax, 3);                                 /* > 3 sectors? */
    if ((dw)ax > 3) goto setscale;              /* ja — yes -> */
    bp = ax;
    bx = sec_scale8;                            /* assume zft >= 8,192ft */
    ax = *(dw*)((db*)&abs_delta_zft + 2);       /* WORD PTR ABS_Delta_ZFT+2 */
    TEST(ax, ax);                               /* zft > 65,535ft? */
    if (!(ax & ax)) goto checkzft;              /* jnz — yes -> */
    goto setscale;
checkzft:
    ax = *(dw*)((db*)&abs_delta_zft);           /* WORD PTR ABS_Delta_ZFT */
    CMP(ax, 8192);                              /* zft >= 8,192ft? */
    if ((dw)ax >= 8192) goto setscale;          /* jae — yes -> */
    bx = sec_scale1;                            /* assume current sector */
    ax = si;
    OR(ax, di);                                 /* current sector? */
    if (!(ax | di)) goto setscale;              /* jz — yes -> */
    bx = sec_scale8;                            /* assume not adjacent */
    CMP(cx, 1);                                 /* adjacent to current sector? */
    if ((dw)cx > 1) goto setscale;              /* ja — no -> */
    CMP(bp, 1);                                 /* adjacent to current sector? */
    if ((dw)bp > 1) goto setscale;              /* ja — no -> */
    bx = sec_scale2;                            /* must be adjacent */
setscale:
    sctrscalemode = bx;
    return m2c::RETN_(0, _state);
}

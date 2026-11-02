/* decomp_secscan.cpp — clean-C rewrites of VISUAL/SECSCAN procedures.
 * Semantics from the authoritative VISUAL/SECSCAN.ASM source.
 * Unlike CLOUDS, these centre calcs are pure 3-axis sums (no Z viewpoint
 * scaling, no SCTR_Y_THRES reject).  All non-dispatched calls forward to
 * scansectors (stays lifted) so one door serves the whole TU. */

#include "secscan.h"

/* table helpers: XSX[si] etc — si is a byte offset into a dw array */
#define XSXI ((db*)&xsx)
#define XSYI ((db*)&xsy)
#define YSXI ((db*)&ysx)
#define YSYI ((db*)&ysy)
#define ZSXI ((db*)&zsx)
#define ZSYI ((db*)&zsy)

/* shared 3-axis centre sum: xe/ye/ze = XE0n/YE0n/ZE0n; xp/yp/zp = X/Y/ZPosn */
#define CENTRE3(xe, ye, ze, xp, yp, zp) \
    ax = (dw)(xe); \
    ADD(ax, *(dw*)(XSXI + si)); \
    ADD(ax, *(dw*)(XSYI + di)); \
    (xp) = ax; \
    ax = (dw)(ye); \
    ADD(ax, *(dw*)(YSXI + si)); \
    ADD(ax, *(dw*)(YSYI + di)); \
    (yp) = ax; \
    ax = (dw)(ze); \
    ADD(ax, *(dw*)(ZSXI + si)); \
    ADD(ax, *(dw*)(ZSYI + di)); \
    (zp) = ax;

/* CalcCentre1 — SEC_SCALE1 sector centre; pass si,di = x/y sec offsets.
 * ret XPos1/YPos1/ZPos1.  kill: ax,si,di,flags */
bool calccentre1(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return scansectors(_i, _state);     /* dispatch-door forward */
    SUB(si, xgrid1);
    ADD(si, 32+64);
    SHL(si, 1);
    SUB(di, ygrid1);
    ADD(di, 32+64);
    SHL(di, 1);
    CENTRE3(xe01, ye01, ze01, xpos1, ypos1, zpos1)
    return m2c::RETN_(0, _state);
}

/* CalcCentre2 — SEC_SCALE2 centre; sc=5 (*32 grid step), add 16+64. */
bool calccentre2(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return scansectors(_i, _state);
    NEG(di);                                    /* -(y sec offset) */
    for (int _n_ = 0; _n_ < 5; ++_n_) { SHL(si, 1); SHL(di, 1); }
    SUB(si, xgrid2);
    ADD(si, 16+64);
    SHL(si, 1);
    SUB(di, ygrid2);
    ADD(di, 16+64);
    SHL(di, 1);
    CENTRE3(xe02, ye02, ze02, xpos2, ypos2, zpos2)
    return m2c::RETN_(0, _state);
}

/* CalcCentre8 — SEC_SCALE8 centre; sc=3 (*8), add 4+64. */
bool calccentre8(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return scansectors(_i, _state);
    NEG(di);
    for (int _n_ = 0; _n_ < 3; ++_n_) { SHL(si, 1); SHL(di, 1); }
    SUB(si, xgrid8);
    ADD(si, 4+64);
    SHL(si, 1);
    SUB(di, ygrid8);
    ADD(di, 4+64);
    SHL(di, 1);
    CENTRE3(xe08, ye08, ze08, xpos8, ypos8, zpos8)
    return m2c::RETN_(0, _state);
}

/* CalcCentre16 — SEC_SCALE16 centre; sc=2 (*4), add 2+64. */
bool calccentre16(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return scansectors(_i, _state);
    NEG(di);
    for (int _n_ = 0; _n_ < 2; ++_n_) { SHL(si, 1); SHL(di, 1); }
    SUB(si, xgrid16);
    ADD(si, 2+64);
    SHL(si, 1);
    SUB(di, ygrid16);
    ADD(di, 2+64);
    SHL(di, 1);
    CENTRE3(xe016, ye016, ze016, xpos16, ypos16, zpos16)
    return m2c::RETN_(0, _state);
}

/* CalcSctrScale — pass si,di = x/y sec offsets; ret SctrScaleMode.
 * Selects SEC_SCALE1/2/8/16 from sector distance + viewpoint zft.
 * kill: ax,bx,cx,bp,flags */
bool calcsctrscale(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return scansectors(_i, _state);
    bx = sec_scale16;                           /* assume > 3 sectors */
    ax = si;
    CWD; XOR(ax, dx); SUB(ax, dx);              /* ABSV ax = abs(x off) */
    CMP(ax, 3);
    if ((dw)ax > 3) goto setscale;              /* > 3 sectors? -> */
    cx = ax;
    ax = di;
    CWD; XOR(ax, dx); SUB(ax, dx);              /* ABSV ax = abs(y off) */
    CMP(ax, 3);
    if ((dw)ax > 3) goto setscale;
    bp = ax;
    bx = sec_scale8;                            /* assume zft >= 8,192ft */
    ax = *(dw*)(((db*)&v_view) + vp_zft_hi);
    TEST(ax, ax);                               /* zft > 65,535ft? */
    if ((ax & ax) != 0) goto setscale;          /* jnz — yes -> */
    ax = *(dw*)(((db*)&v_view) + vp_zft_lo);
    CMP(ax, 8192);                              /* zft >= 8,192ft? */
    if ((dw)ax >= 8192) goto setscale;          /* jae — yes -> */
    bx = sec_scale1;                            /* assume current sector */
    ax = si;
    OR(ax, di);                                 /* current sector? */
    if ((ax | di) == 0) goto setscale;          /* jz — yes -> */
    bx = sec_scale8;                            /* assume not adjacent */
    CMP(cx, 1);                                 /* adjacent? */
    if ((dw)cx > 1) goto setscale;              /* ja — no -> */
    CMP(bp, 1);
    if ((dw)bp > 1) goto setscale;              /* ja — no -> */
    bx = sec_scale2;                            /* must be adjacent */
setscale:
    sctrscalemode = bx;
    return m2c::RETN_(0, _state);
}

/* TestSector1 — current sector is always visible; cf=0. */
bool testsector1(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return scansectors(_i, _state);
    CLC;                                        /* current sector always visible */
    return m2c::RETN_(0, _state);
}

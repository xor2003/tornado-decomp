/* decomp_trnsfrm.cpp — clean-C rewrites of TORNADO/TRNSFRM procedures.
 *
 * Semantics from the authoritative TORNADO/TRNSFRM.ASM source and its
 * original comments, verified against the lifted C++.  Each function is a
 * strong symbol overriding the weak lifted entry point for direct
 * CALL/CALLF sites; every proc is FAR so the body ends with RETF_(0),
 * consuming the caller's pushed return tag exactly like a far `ret`.
 *
 * Products compute in plain C (FRACADJ = signed product rounded
 * (v + 0x4000) >> 15); the last flag-affecting op of each path is
 * replayed through the real m2c macros so exit flag residue and
 * killed-register contents match the original.
 */
#include "trnsfrm.h"

/* FRACADJ dest: signed product rounded, (v + 0x4000) >> 15 */
static inline dw fracadj(int16_t a, int16_t b) {
    return (dw)(((int32_t)a * b + 0x4000) >> 15);
}

/* CalcTransMatrix - calc transformation matrix ('A' factors)
 * pass: si -> VIEWPOINT
 * ret : 'A' factors (A1 .. A9, V_SinH .. V_CosR globals)
 * kill: assume all */
bool calctransmatrix(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    viewpoint* vp = (viewpoint*)m2c::raddr_(ds, si);

    /* calc trig angles */
    bx = (vp->vp_hdg & 0x01ff) << 1;
    v_sinh = *(dw*)(((db*)&sintable) + bx);
    v_cosh = *(dw*)(((db*)&costable) + bx);

    bx = (vp->vp_pitch & 0x01ff) << 1;
    v_sinp = *(dw*)(((db*)&sintable) + bx);
    v_cosp = *(dw*)(((db*)&costable) + bx);

    bx = (vp->vp_roll & 0x01ff) << 1;
    v_sinr = *(dw*)(((db*)&sintable) + bx);
    v_cosr = *(dw*)(((db*)&costable) + bx);

    /* calc 'A' factors */
    int16_t sinH = v_sinh, cosH = v_cosh;
    int16_t sinP = v_sinp, cosP = v_cosp;
    int16_t sinR = v_sinr, cosR = v_cosr;

    bx = fracadj(cosH, cosR);       /* bx = cosH.cosR */
    cx = fracadj(sinH, cosR);       /* cx = sinH.cosR */
    si = fracadj(cosH, sinR);       /* si = cosH.sinR */
    di = fracadj(sinH, sinR);       /* di = sinH.sinR */

    a1 = fracadj(sinP, di) + bx;    /* sinP.sinH.sinR + cosH.cosR */
    a2 = fracadj(sinP, si) - cx;    /* sinP.cosH.sinR - sinH.cosR */
    a7 = si - fracadj(sinP, cx);    /* cosH.sinR - sinP.sinH.cosR */
    a8 = (dw)(-(int16_t)di) - fracadj(sinP, bx); /* -sinH.sinR - sinP.cosH.cosR */

    a3 = fracadj(-sinR, cosP);      /* -sinR.cosP */
    a4 = fracadj(sinH, cosP);       /* sinH.cosP */
    a5 = fracadj(cosH, cosP);       /* cosH.cosP */

    /* A9 = cosR.cosP — replay imul + FRACADJ for exit flags/dx residue */
    ax = v_cosr;
    bp = v_cosp;
    IMUL1_2(bp);
    SHL(ax, 1);                     /* *2 */
    RCL(dx, 1);
    SHL(ax, 1);                     /* 1/2 bit round up */
    ADC(dx, 0);
    a9 = dx;
    a6 = ax = v_sinp;               /* ax = sinP */
    return m2c::RETF_(0, _state);
}

/* CalcEyeCoords - calc eye co-ords from rel co-ords
 * pass: ax = x rel, bx = y rel, cx = z rel, 'A' factors
 * ret : ax = x eye, bx = y eye, cx = z eye
 * kill: dx, si, di, bp, flags */
bool calceyecoords(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    si = cx;                        /* si = z rel */
    di = bx;                        /* di = y rel */

    /* x eye = A1.x + A2.y + A3.z;  y = A4.x + A5.y + A6.z;
       z = A7.x + A8.y + A9.z  (each product FRACADJ'd) */
    bp = fracadj(a1, (int16_t)ax) + fracadj(a2, (int16_t)bx);
    bx = fracadj(a4, (int16_t)ax) + fracadj(a5, (int16_t)bx)
       + fracadj(a6, (int16_t)cx);
    cx = fracadj(a7, (int16_t)ax) + fracadj(a8, (int16_t)di)
       + fracadj(a9, (int16_t)si);

    /* ax = fracadj(A3.z) + A1.x + A2.y — replay tail for flags */
    ax = a3;
    IMUL1_2(si);                    /* dx:ax = A3 * z rel */
    SHL(ax, 1);                     /* FRACADJ ax */
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    ax = dx;
    ADD(ax, bp);                    /* + A1.x + A2.y — exit flags */
    return m2c::RETF_(0, _state);
}

/* CalcTgtRelCo - calc target relative co-ords
 * pass: M_VIEW, si -> VIEWPOINT target
 * ret : cf = 0 = ok: ax = x rel, bx = y rel, cx = z rel
 *       cf = 1 = error
 * kill: dx, bp, flags (except cf)
 *
 * rel values are linear-ft fields: x = xsec*16384 + xft + 8192,
 * y = -(ysec*16384) + yft - 8192.  abs(z) > 10000 compresses to
 * abs(z)/4 + 7500; all rels scale down to < 16384 for the matrix. */
bool calctgtrelco(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    viewpoint* tgt = (viewpoint*)m2c::raddr_(ds, si);

    /* x rel = x2 - x1  (xsec is SIGNED: the /4 uses sar on the high
       word so xsec bit15 sign-extends; xft+8192 is a raw 16-bit
       addend, its own carry dropped) */
    int32_t xrel = ((int32_t)(int16_t)tgt->vp_xsec << 14) + (dw)(tgt->vp_xft + 8192)
                 - (((int32_t)(int16_t)m_view.vp_xsec << 14) + (dw)(m_view.vp_xft + 8192));

    /* y rel = y2 - y1  (y = -(ysec*16384) + (yft-8192): ysec signed,
       the -8192 borrow is NOT propagated — bp is a raw u16 addend) */
    int32_t yrel = -((int32_t)(int16_t)tgt->vp_ysec << 14) + (dw)(tgt->vp_yft - 8192)
                 + ((int32_t)(int16_t)m_view.vp_ysec << 14) - (dw)(m_view.vp_yft - 8192);

    /* z rel = z2 - z1, compressed: |z| > 10000 -> |z|/4 + 7500.
       bp is a 16-bit register: the compressed value truncates to
       its low word when the sign is restored (xor bp,dx; sub bp,dx) */
    int32_t zrel = (int32_t)tgt->vp_zft - (int32_t)m_view.vp_zft;
    int32_t zsgn = zrel < 0 ? -1 : 0;
    int32_t azr = (zrel ^ zsgn) - zsgn;
    if (azr > 10000) {
        azr = (azr >> 2) + 7500;
    }
    zrel = (int16_t)(dw)((azr ^ zsgn) - zsgn);    /* signed 16-bit bp */

    int32_t axr = xrel < 0 ? -xrel : xrel;
    int32_t ayr = yrel < 0 ? -yrel : yrel;
    azr = zrel < 0 ? -zrel : zrel;

    /* abs(x rel), abs(y rel) must be <= 03ffffh (~50 miles) */
    if (axr > 0x3ffff || ayr > 0x3ffff) {
        /* RelCoError — regs live at the failing cmp, pops leave sign(x) */
        dx = (dw)(axr >> 16); ax = (dw)axr;
        cx = (dw)(ayr >> 16); bx = (dw)ayr;
        bp = (dw)azr;
        if (axr > 0x3ffff) {
            CMP(dx, 3);
        } else {
            CMP(cx, 3);
        }
        ax = (dw)(xrel >> 16);          /* last popped word: x rel hi */
        STC;
        return m2c::RETF_(0, _state);
    }

    /* SCALE_REL_VALS: halve all three until < 16384 */
#define SCALE_REL_VALS() do { axr >>= 1; ayr >>= 1; azr >>= 1; } while (0)
    if (axr > 0xffff) {
        SCALE_REL_VALS();
        if (axr > 0xffff) SCALE_REL_VALS();
    }
    if (axr > 16383) {
        SCALE_REL_VALS();
        if (axr > 16383) SCALE_REL_VALS();
    }
    if (ayr > 0xffff) {
        SCALE_REL_VALS();
        if (ayr > 0xffff) SCALE_REL_VALS();
    }
    if (ayr > 16383) {
        SCALE_REL_VALS();
        if (ayr > 16383) SCALE_REL_VALS();
    }
    if (azr > 16383) {
        SCALE_REL_VALS();
    }
#undef SCALE_REL_VALS

    /* restore signs via cwd chain (dx = sign of each rel hi word) */
    dw sign_x = xrel < 0 ? 0xffff : 0;
    dw sign_y = yrel < 0 ? 0xffff : 0;
    dw sign_z = zrel < 0 ? 0xffff : 0;
    cx = (dw)((azr ^ sign_z) - sign_z);
    bx = (dw)((ayr ^ sign_y) - sign_y);
    si = (dw)axr;
    bp = (dw)azr;
    dx = sign_x;
    ax = si;
    XOR(ax, dx);
    SUB(ax, dx);                    /* ax = signed x rel — exit residue */
    CLC;                            /* cf = 0 = ok */
    return m2c::RETF_(0, _state);
}

/* Calc3DOffset
 * pass: ax = x offset, bx = y offset, cx = z offset
 *       'A' factors (orthogonal offset wrt object centre)
 * ret : ax = x offset, bx = y offset, cx = z offset (transformed)
 * kill: dx, si, di, bp, flags
 *
 * Each axis sums the three FULL 32-bit imul products then rounds once
 * (shl/rcl/shl/adc) — not a sum of individually rounded terms. */
bool calc3doffset(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bp = ax;                        /* bp = x offset */

    /* x' = A1.x + A4.y + A7.z;  y' = A2.x + A5.y + A8.z */
    int32_t xa = (int32_t)(int16_t)a1 * (int16_t)ax
               + (int32_t)(int16_t)a4 * (int16_t)bx
               + (int32_t)(int16_t)a7 * (int16_t)cx;
    dw xoff = (dw)(((dd)xa * 2 + 0x8000) >> 16);

    int32_t ya = (int32_t)(int16_t)a2 * (int16_t)ax
               + (int32_t)(int16_t)a5 * (int16_t)bx
               + (int32_t)(int16_t)a8 * (int16_t)cx;
    dw yoff = (dw)(((dd)ya * 2 + 0x8000) >> 16);

    /* z' = A3.x + A6.y + A9.z — replay tail for flags */
    ax = a3;
    IMUL1_2(bp);                    /* dx:ax = A3 * x */
    si = ax; di = dx;
    ax = a6;
    IMUL1_2(bx);                    /* + A6 * y */
    ADD(si, ax);
    ADC(di, dx);
    ax = a9;
    IMUL1_2(cx);                    /* + A9 * z */
    ADD(si, ax);
    ADC(di, dx);
    SHL(si, 1);                     /* *2 */
    RCL(di, 1);
    SHL(si, 1);                     /* 1/2 bit round up — exit flags */
    ADC(di, 0);

    cx = di;                        /* z offset */
    bx = yoff;
    ax = xoff;
    return m2c::RETF_(0, _state);
}

/* CalcRngRelCo - calc target relative co-ords and scaled range
 * pass: si -> VIEWPOINT source
 *       di -> VIEWPOINT target
 * ret : ax = x rel, bx = y rel, cx = z rel (scaled to ±16383),
 *       dx = scaled range, SlantRng
 * kill: si, di, bp, flags
 *
 * scaled range is recalculated from the scaled rels to remove noise:
 * sqrt(x^2 + y^2 + z^2). */
bool calcrngrelco(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CALLF(calcslantrange, 0);
    tmprng = ((dd)dx << 16) | ax;

    int32_t xrel = (int32_t)slantdx, yrel = (int32_t)slantdy;
    int32_t zrel = (int32_t)slantdz;
    int32_t axr = xrel < 0 ? -xrel : xrel;
    int32_t ayr = yrel < 0 ? -yrel : yrel;
    int32_t azr = zrel < 0 ? -zrel : zrel;

    /* SCALE_ALL_VALS: rels + TmpRng halved until all < 16384 */
#define SCALE_ALL_VALS() do { \
        axr >>= 1; ayr >>= 1; azr >>= 1; tmprng >>= 1; } while (0)
    while ((dd)axr > 0xffff) SCALE_ALL_VALS();
    while ((dd)axr > 16383)  SCALE_ALL_VALS();
    while ((dd)ayr > 0xffff) SCALE_ALL_VALS();
    while ((dd)ayr > 16383)  SCALE_ALL_VALS();
    while ((dd)azr > 0xffff) SCALE_ALL_VALS();
    while ((dd)azr > 16383)  SCALE_ALL_VALS();
    while (tmprng > 0xffff)  SCALE_ALL_VALS();
    while (tmprng > 16383)   SCALE_ALL_VALS();
#undef SCALE_ALL_VALS

    /* restore signs (cwd of SlantD* hi words = sign of each delta) */
    int32_t szr = (azr ^ (zrel < 0 ? -1 : 0)) - (zrel < 0 ? -1 : 0);
    int32_t syr = (ayr ^ (yrel < 0 ? -1 : 0)) - (yrel < 0 ? -1 : 0);
    int32_t sxr = (axr ^ (xrel < 0 ? -1 : 0)) - (xrel < 0 ? -1 : 0);
    bp = (dw)axr;

    /* scaled range = sqrt(x*x + y*y + z*z) — full 32-bit products */
    ax = (dw)sxr;
    IMUL1_2(ax);                    /* x*x */
    si = ax; di = dx;
    ax = (dw)syr;
    IMUL1_2(ax);                    /* y*y */
    ADD(si, ax);
    ADC(di, dx);
    ax = (dw)szr;
    IMUL1_2(ax);                    /* z*z */
    ADD(ax, si);
    ADC(dx, di);
    CALLF(sqrt32, 0);

    dx = ax;                        /* scaled range */
    cx = (dw)szr;
    bx = (dw)syr;
    ax = (dw)sxr;
    return m2c::RETF_(0, _state);
}

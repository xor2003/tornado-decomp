/* decomp_vislib.cpp — clean-C rewrites of VISUAL/VISLIB procedures.
 *
 * Semantics from the authoritative VISUAL/VISLIB.ASM source and its
 * original comments.  All procs are NEAR — bodies end with RETN_(0),
 * consuming the caller's pushed return tag exactly like a `ret`.
 *
 * FRACADJ dest is the shared fixed-point product rounding:
 *   shl ax,1 / rcl dx,1 / shl ax,1 / adc dx,0  ->  dest = dx
 * i.e. dest = (dx:ax product + 0x4000) >> 15 (arithmetic).
 *
 * The grid sub-division fills keep v = ax:dx and step = bx:cx as 32-bit
 * pairs; entries store the high word ax only, stepped like the asm.
 * The last flag-affecting op of each path is replayed through the real
 * m2c macros so exit flags and killed-register contents match.
 */
#include "vislib.h"

#define FRACADJ_D(dest) do { \
    SHL(ax, 1);  RCL(dx, 1); \
    SHL(ax, 1);  ADC(dx, 0); \
    dest = dx; \
} while (0)

static inline dw fracadj(int16_t a, int16_t b) {
    return (dw)(((int32_t)a * b + 0x4000) >> 15);
}

/* SINCOS si,di,ax — si = SinTable[angle&0x1ff], di = CosTable[...] */
#define SINCOS_SID() do { \
    bx = ax; \
    AND(bx, 0x01ff); \
    SHL(bx, 1); \
    si = *(dw*)(((db*)&sintable) + bx); \
    di = *(dw*)(((db*)&costable) + bx); \
} while (0)

/* InitVisual — copy si->VIEWPOINT to V_VIEW, init sector grid co-ords,
 * scale ZFT, clear object distance sort arrays.
 * pass: si -> VIEWPOINT;  kill: assume all */
bool initvisual(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    di = m2c::near_offset_external(v_view);
    cx = 18 / 2;                        /* COPY_VP: VIEW_REC_SIZE/2 */
    REP MOVSW;

    /* XGrid1 = ((XFT / 256) + 32) = 0 .. 63 */
    al = *(db*)(((db*)&v_view) + vp_xft + 1);
    ADD(al, 32);
    CBW;
    xgrid1 = ax;
    SHR(ax, 1);              xgrid2 = ax;
    SHR(ax, 1); SHR(ax, 1);  xgrid8 = ax;
    SHR(ax, 1);              xgrid16 = ax;

    /* YGrid1 = ((YFT / 256) + 32) = 0 .. 63 */
    al = *(db*)(((db*)&v_view) + vp_yft + 1);
    ADD(al, 32);
    CBW;
    ygrid1 = ax;
    SHR(ax, 1);              ygrid2 = ax;
    SHR(ax, 1); SHR(ax, 1);  ygrid8 = ax;
    SHR(ax, 1);              ygrid16 = ax;

    /* scale ZFT > 10,000ft so max ZFT < 32,768ft */
    ax = *(dw*)(((db*)&v_view) + vp_zft_lo);
    dx = *(dw*)(((db*)&v_view) + vp_zft_hi);
    TEST(dx, dx);
    if (dx == 0)
        CMP(ax, 10000);
    if (dx != 0 || ax > 10000) {        /* CalcZScaled */
        SHR(dx, 1);  RCR(ax, 1);
        SHR(dx, 1);  RCR(ax, 1);
        ADD(ax, 7500);                  /* zft / 4 + 7,500 */
    }
    zscaled = ax;

    /* clear object distance sort arrays */
    ax = 0xffff;
    cx = num_bins;
    di = m2c::near_offset_external(objectdist1);
    REP STOSW;
    objectdist2 = ax;
    *(((dw*)&objectdist2) + 1) = ax;
    objectdist3 = ax;
    *(((dw*)&objectdist3) + 1) = ax;

    /* clear far object distance sort array */
    cx = num_far_bins;
    di = m2c::near_offset_external(farobjectdist);
    REP STOSW;

    /* reset object buffer pointer */
    objectbufptr = m2c::near_offset_external(objectbuffer);

    /* set rotated grid size to minimum size */
    XOR(ax, ax);
    xgridsize = ax;
    ygridsize = ax;
    zgridsize = ax;
    return m2c::RETN_(0, _state);
}

/* CalcAngles — V_VIEW hdg/pitch/roll -> V_SinH .. V_CosR values.
 * kill: ax, bx, flags */
bool calcangles(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    ax = v_view.vp_hdg;
    AND(ax, 0x01ff);
    bx = ax;
    SHL(bx, 1);
    ax = *(dw*)(((db*)&sintable) + bx);  v_sinh = ax;
    ax = *(dw*)(((db*)&costable) + bx);  v_cosh = ax;

    ax = v_view.vp_pitch;
    AND(ax, 0x01ff);
    bx = ax;
    SHL(bx, 1);
    ax = *(dw*)(((db*)&sintable) + bx);  v_sinp = ax;
    ax = *(dw*)(((db*)&costable) + bx);  v_cosp = ax;

    ax = v_view.vp_roll;
    AND(ax, 0x01ff);
    bx = ax;
    SHL(bx, 1);
    ax = *(dw*)(((db*)&sintable) + bx);  v_sinr = ax;
    ax = *(dw*)(((db*)&costable) + bx);  v_cosr = ax;

    return m2c::RETN_(0, _state);
}

/* CalcAFactors — V_SinH .. V_CosR globals -> A1..A9 matrix (same
 * equations as TRNSFRM CalcTransMatrix).
 * kill: assume all */
bool calcafactors(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    ax = v_cosr; bp = ax;               /* bp = cosR */
    ax = v_cosh; si = ax;               /* si = cosH */
    IMUL1_2(bp); FRACADJ_D(bx);         /* bx = cosH.cosR */
    ax = v_sinh; di = ax;               /* di = sinH */
    IMUL1_2(bp); FRACADJ_D(cx);         /* cx = sinH.cosR */
    ax = v_sinr; bp = ax;               /* bp = sinR */
    IMUL1_2(si); FRACADJ_D(si);         /* si = cosH.sinR */
    ax = bp;
    IMUL1_2(di); FRACADJ_D(di);         /* di = sinH.sinR */

    ax = v_sinp; bp = ax;               /* bp = sinP */

    ax = di; IMUL1_2(bp); FRACADJ_D(ax);
    ADD(ax, bx); a1 = ax;               /* sinP.sinH.sinR + cosH.cosR */
    ax = si; IMUL1_2(bp); FRACADJ_D(ax);
    SUB(ax, cx); a2 = ax;               /* sinP.cosH.sinR - sinH.cosR */
    ax = cx; IMUL1_2(bp); FRACADJ_D(dx);
    ax = si; SUB(ax, dx); a7 = ax;      /* cosH.sinR - sinP.sinH.cosR */
    ax = bx; IMUL1_2(bp); FRACADJ_D(dx);
    ax = di; NEG(ax); SUB(ax, dx); a8 = ax;

    ax = v_cosp; bp = ax;               /* bp = cosP */

    ax = v_sinr; NEG(ax); IMUL1_2(bp); FRACADJ_D(ax); a3 = ax;
    ax = v_sinh; IMUL1_2(bp); FRACADJ_D(ax); a4 = ax;
    ax = v_cosh; IMUL1_2(bp); FRACADJ_D(ax); a5 = ax;
    ax = v_cosr; IMUL1_2(bp); FRACADJ_D(ax); a9 = ax;
    ax = v_sinp; a6 = ax;
    return m2c::RETN_(0, _state);
}

/* CalcBFactors — A factors skewed by heading angle (ax = hdg pdegs).
 * ax = 0 -> rep movsw A[9] -> B[9].  kill: assume all */
bool calcbfactors(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    TEST(ax, ax);
    if (ZF) {                           /* FastBFactors */
        cx = 9;
        si = m2c::near_offset_external(a1);
        di = m2c::near_offset_external(b1);
        REP MOVSW;
        return m2c::RETN_(0, _state);
    }
    SINCOS_SID();                       /* si = sin(hdg), di = cos(hdg) */

    /* B1 = A1.cos - A2.sin ; B2 = A1.sin + A2.cos ; B3 = A3 */
    ax = a1; bx = ax; ax = a2; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = A2.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  b1 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = A1.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  b2 = ax;
    b3 = a3;

    /* B4 = A4.cos - A5.sin ; B5 = A4.sin + A5.cos ; B6 = A6 */
    ax = a4; bx = ax; ax = a5; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = A5.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  b4 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = A4.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  b5 = ax;
    b6 = a6;

    /* B7 = A7.cos - A8.sin ; B8 = A7.sin + A8.cos ; B9 = A9 */
    ax = a7; bx = ax; ax = a8; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = A8.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  b7 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = A7.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  b8 = ax;
    ax = b9 = a9;
    return m2c::RETN_(0, _state);
}

/* CalcCFactors — B factors pitched by pitch angle (ax = pitch pdegs).
 * ax = 0 -> rep movsw B[9] -> C[9].  kill: assume all */
bool calccfactors(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    TEST(ax, ax);
    if (ZF) {                           /* FastCFactors */
        cx = 9;
        si = m2c::near_offset_external(b1);
        di = m2c::near_offset_external(c1);
        REP MOVSW;
        return m2c::RETN_(0, _state);
    }
    SINCOS_SID();                       /* si = sin(pitch), di = cos(pitch) */

    c1 = b1;                            /* C1 = B1 */

    /* C2 = B2.cos + B3.sin ; C3 = -B2.sin + B3.cos */
    ax = b2; bx = ax; ax = b3; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = B3.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  c2 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = B2.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  c3 = ax;

    ax = b4; c4 = ax;                   /* C4 = B4 */

    /* C5 = B5.cos + B6.sin ; C6 = -B5.sin + B6.cos */
    ax = b5; bx = ax; ax = b6; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = B6.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  c5 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = B5.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  c6 = ax;

    ax = b7; c7 = ax;                   /* C7 = B7 */

    /* C8 = B8.cos + B9.sin ; C9 = -B8.sin + B9.cos */
    ax = b8; bx = ax; ax = b9; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = B9.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  c8 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = B8.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  c9 = ax;
    return m2c::RETN_(0, _state);
}

/* CalcDFactors — C factors rolled by roll angle (ax = roll pdegs).
 * ax = 0 -> rep movsw C[9] -> D[9].  kill: assume all */
bool calcdfactors(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    TEST(ax, ax);
    if (ZF) {                           /* FastDFactors */
        cx = 9;
        si = m2c::near_offset_external(c1);
        di = m2c::near_offset_external(d1);
        REP MOVSW;
        return m2c::RETN_(0, _state);
    }
    SINCOS_SID();                       /* si = sin(roll), di = cos(roll) */

    /* D1 = C1.cos - C3.sin ; D2 = C2 ; D3 = C1.sin + C3.cos */
    ax = c1; bx = ax; ax = c3; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = C3.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  d1 = ax;
    ax = c2; d2 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = C1.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  d3 = ax;

    /* D4 = C4.cos - C6.sin ; D5 = C5 ; D6 = C4.sin + C6.cos */
    ax = c4; bx = ax; ax = c6; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = C6.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  d4 = ax;
    ax = c5; d5 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = C4.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  d6 = ax;

    /* D7 = C7.cos - C9.sin ; D8 = C8 ; D9 = C7.sin + C9.cos */
    ax = c7; bx = ax; ax = c9; cx = ax;
    IMUL1_2(si); FRACADJ_D(bp);         /* bp = C9.sin */
    ax = bx; IMUL1_2(di); FRACADJ_D(ax);
    SUB(ax, bp);  d7 = ax;
    ax = c8; d8 = ax;
    ax = bx; IMUL1_2(si); FRACADJ_D(bp);/* bp = C7.sin */
    ax = cx; IMUL1_2(di); FRACADJ_D(ax);
    ADD(ax, bp);  d9 = ax;
    return m2c::RETN_(0, _state);
}

/* --- grid sub-division table fills -------------------------------------
 * PosSubDiv&N / NegSubDiv&N unrolled bodies: for k = n..1 store ax (the
 * high word of accumulator ax:dx) mirrored around the mid word — the
 * mirrored cell gets `neg ax` (16-bit negate of the HIGH word only),
 * then the accumulator steps down by bx:cx.  The final cell leaves ax
 * negated (no restore) — that `neg ax` is the exit flag state.
 */
static void subdiv_mirror(dw* out, int mid, int n, int neg,
                          dw& rax, dw& rdx, dw& rbx, dw& rcx,
                          m2c::_STATE* _state) {
    X86_REGREF
    for (int k = n; k >= 1; --k) {
        out[neg ? mid - k : mid + k] = rax; /* mov [di][MIDVAL±INDEX],ax */
        NEG(rax);
        out[neg ? mid + k : mid - k] = rax;
        if (k != 1) {
            NEG(rax);
            SUB(rdx, rcx);
            SBB(rax, rbx);
        }
    }
}

/* CalcSctrSubDiv — +/-16k step 256 mirrored grid (129 words).
 * pass: ax = "A" factor, di -> grid array;  kill: assume all */
bool calcsctrsubdiv(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dw* out = (dw*)m2c::raddr_(ds, di);

    TEST(ax, ax);
    if (ZF) {                           /* ZeroSctrSubDiv */
        cx = 129;
        REP STOSW;
        return m2c::RETN_(0, _state);
    }
    int neg = 0;
    if (SF) {                           /* NegSctrSubDiv */
        NEG(ax);                        /* make positive */
        neg = 1;
    }
    XOR(dx, dx);                        /* ax:dx = 65536 * value */
    SHR(ax, 1); RCR(dx, 1);             /* /2 for +/-16k grid */
    bx = ax; cx = dx;                   /* bx:cx = 65536*value/2 */
    cl = ch; ch = bl; bl = bh;          /* bx:cx = 65536*value/2/64/4 */
    XOR(bh, bh);
    SHL(cx, 1); RCL(bx, 1);
    SHL(cx, 1); RCL(bx, 1);             /* bx:cx = 65536*value/2/64 */
    subdiv_mirror(out, 64, 64, neg, ax, dx, bx, cx, _state);
    return m2c::RETN_(0, _state);
}

/* CalcSctrZSubDiv — +4k step 256 single-side grid (17 words).
 * pass: ax = "A" factor, di -> grid array;  kill: assume all
 * note: Z sector grids are +4k step 256 only. */
bool calcsctrzsubdiv(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dw* out = (dw*)m2c::raddr_(ds, di);

    TEST(ax, ax);
    if (ZF) {                           /* ZeroSctrZSubDiv */
        cx = 17;
        REP STOSW;
        return m2c::RETN_(0, _state);
    }
    int neg = 0;
    if (SF) {
        NEG(ax);                        /* make positive */
        neg = 1;
    }
    XOR(dx, dx);                        /* ax:dx = 65536 * value */
    SHR(ax, 1); RCR(dx, 1);             /* /8 for +4k grid */
    SHR(ax, 1); RCR(dx, 1);
    SHR(ax, 1); RCR(dx, 1);
    bx = ax; cx = dx;                   /* bx:cx = 65536*value/8 */
    SHR(bx, 1); RCR(cx, 1);             /* bx:cx = 65536*value/8/16 */
    SHR(bx, 1); RCR(cx, 1);
    SHR(bx, 1); RCR(cx, 1);
    SHR(bx, 1); RCR(cx, 1);
    if (neg) {                          /* NEG32 ax,dx — v = -v */
        NOT(dx); NOT(ax); ADD(dx, 1); ADC(ax, 0);
    }
    for (int k = 16; k >= 1; --k) {
        out[k] = ax;                    /* mov [di][INDEX],ax */
        if (k != 1) {
            if (!neg) { SUB(dx, cx); SBB(ax, bx); }
            else      { ADD(dx, cx); ADC(ax, bx); }
        }
    }
    return m2c::RETN_(0, _state);
}

/* CalcSctrGrid — fill the 9 sector grid tables from A factors.
 * kill: assume all */
bool calcsctrgrid(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = a1; di = m2c::near_offset_external(xsx); CALL(calcsctrsubdiv, 0);
    ax = a2; di = m2c::near_offset_external(xsy); CALL(calcsctrsubdiv, 0);
    ax = a3; di = m2c::near_offset_external(xsz); CALL(calcsctrzsubdiv, 0);
    ax = a4; di = m2c::near_offset_external(ysx); CALL(calcsctrsubdiv, 0);
    ax = a5; di = m2c::near_offset_external(ysy); CALL(calcsctrsubdiv, 0);
    ax = a6; di = m2c::near_offset_external(ysz); CALL(calcsctrzsubdiv, 0);
    ax = a7; di = m2c::near_offset_external(zsx); CALL(calcsctrsubdiv, 0);
    ax = a8; di = m2c::near_offset_external(zsy); CALL(calcsctrsubdiv, 0);
    ax = a9; di = m2c::near_offset_external(zsz); CALL(calcsctrzsubdiv, 0);
    return m2c::RETN_(0, _state);
}

/* CalcObjSubDiv — +/-512 step 16 mirrored object grid (65 words).
 * pass: ax = factor, di -> grid array;  kill: assume all */
bool calcobjsubdiv(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dw* out = (dw*)m2c::raddr_(ds, di);

    TEST(ax, ax);
    if (ZF) {                           /* ZeroObjSubDiv */
        cx = 65;
        REP STOSW;
        return m2c::RETN_(0, _state);
    }
    int neg = 0;
    if (SF) {                           /* NegObjSubDiv */
        NEG(ax);                        /* make positive */
        neg = 1;
    }
    dh = al; XOR(dl, dl);               /* ax:dx = 65536*value/256 */
    al = ah; XOR(ah, ah);
    bx = ax; cx = dx;                   /* bx:cx = 65536*value/256 */
    SHL(dx, 1); RCL(ax, 1);             /* ax:dx = 65536*value/64 */
    SHL(dx, 1); RCL(ax, 1);
    SHR(bx, 1); RCR(cx, 1);             /* bx:cx = 65536*value/64/32 */
    SHR(bx, 1); RCR(cx, 1);
    SHR(bx, 1); RCR(cx, 1);
    subdiv_mirror(out, 32, 32, neg, ax, dx, bx, cx, _state);
    return m2c::RETN_(0, _state);
}

/* CalcObjVSubDiv — object grid sub-divisions, variable grid size.
 * Enters the shared Pos/NegSubDiv&N table at index si*2 (n = grid size).
 * pass: ax = factor, si = grid size 0..32, di -> grid array */
bool calcobjvsubdiv(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    dw* out = (dw*)m2c::raddr_(ds, di);

    TEST(ax, ax);
    int neg = 0;
    if (SF) {                           /* NegObjVSubDiv */
        NEG(ax);                        /* make positive */
        neg = 1;
    }
    ch = al; XOR(cl, cl);               /* bx:cx = 65536*value/64/32 */
    bl = ah; XOR(bh, bh);
    SHR(bx, 1); RCR(cx, 1);
    SHR(bx, 1); RCR(cx, 1);
    SHR(bx, 1); RCR(cx, 1);
    MUL1_2(si);                         /* dx:ax = value * grid size */
    dh = al;                            /* ax:dx = (dx:ax)<<8 >>3 */
    al = ah; ah = dl; XOR(dl, dl);
    SHR(ax, 1); RCR(dx, 1);
    SHR(ax, 1); RCR(dx, 1);
    SHR(ax, 1); RCR(dx, 1);
    SHL(si, 1);                         /* *2 index -> CalcPosSubDiv[si] */
    subdiv_mirror(out, 32, si / 2, neg, ax, dx, bx, cx, _state);
    return m2c::RETN_(0, _state);
}

/* CalcObjGrid — fill the 9 object grid tables from A factors.
 * kill: assume all */
bool calcobjgrid(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = a1; di = m2c::near_offset_external(xgx); CALL(calcobjsubdiv, 0);
    ax = a2; di = m2c::near_offset_external(xgy); CALL(calcobjsubdiv, 0);
    ax = a3; di = m2c::near_offset_external(xgz); CALL(calcobjsubdiv, 0);
    ax = a4; di = m2c::near_offset_external(ygx); CALL(calcobjsubdiv, 0);
    ax = a5; di = m2c::near_offset_external(ygy); CALL(calcobjsubdiv, 0);
    ax = a6; di = m2c::near_offset_external(ygz); CALL(calcobjsubdiv, 0);
    ax = a7; di = m2c::near_offset_external(zgx); CALL(calcobjsubdiv, 0);
    ax = a8; di = m2c::near_offset_external(zgy); CALL(calcobjsubdiv, 0);
    ax = a9; di = m2c::near_offset_external(zgz); CALL(calcobjsubdiv, 0);
    return m2c::RETN_(0, _state);
}

/* CalcRotateGrid1 — rotated object grid, skew only (B factors).
 * pass: B1..B9, XGridSize, YGridSize;  kill: assume all */
bool calcrotategrid1(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = b1; si = xgridsize; di = m2c::near_offset_external(r_xgx); CALL(calcobjvsubdiv, 0);
    ax = b2; si = ygridsize; di = m2c::near_offset_external(r_xgy); CALL(calcobjvsubdiv, 0);
    ax = b4; si = xgridsize; di = m2c::near_offset_external(r_ygx); CALL(calcobjvsubdiv, 0);
    ax = b5; si = ygridsize; di = m2c::near_offset_external(r_ygy); CALL(calcobjvsubdiv, 0);
    ax = b7; si = xgridsize; di = m2c::near_offset_external(r_zgx); CALL(calcobjvsubdiv, 0);
    ax = b8; si = ygridsize; di = m2c::near_offset_external(r_zgy); CALL(calcobjvsubdiv, 0);
    return m2c::RETN_(0, _state);
}

/* CalcRotateGrid2 — rotated object grid, skew + pitch (C factors). */
bool calcrotategrid2(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = c1; si = xgridsize; di = m2c::near_offset_external(r_xgx); CALL(calcobjvsubdiv, 0);
    ax = c2; si = ygridsize; di = m2c::near_offset_external(r_xgy); CALL(calcobjvsubdiv, 0);
    ax = c3; si = zgridsize; di = m2c::near_offset_external(r_xgz); CALL(calcobjvsubdiv, 0);
    ax = c4; si = xgridsize; di = m2c::near_offset_external(r_ygx); CALL(calcobjvsubdiv, 0);
    ax = c5; si = ygridsize; di = m2c::near_offset_external(r_ygy); CALL(calcobjvsubdiv, 0);
    ax = c6; si = zgridsize; di = m2c::near_offset_external(r_ygz); CALL(calcobjvsubdiv, 0);
    ax = c7; si = xgridsize; di = m2c::near_offset_external(r_zgx); CALL(calcobjvsubdiv, 0);
    ax = c8; si = ygridsize; di = m2c::near_offset_external(r_zgy); CALL(calcobjvsubdiv, 0);
    ax = c9; si = zgridsize; di = m2c::near_offset_external(r_zgz); CALL(calcobjvsubdiv, 0);
    return m2c::RETN_(0, _state);
}

/* CalcRotateGrid3 — rotated object grid, skew + pitch + roll (D). */
bool calcrotategrid3(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    ax = d1; si = xgridsize; di = m2c::near_offset_external(r_xgx); CALL(calcobjvsubdiv, 0);
    ax = d2; si = ygridsize; di = m2c::near_offset_external(r_xgy); CALL(calcobjvsubdiv, 0);
    ax = d3; si = zgridsize; di = m2c::near_offset_external(r_xgz); CALL(calcobjvsubdiv, 0);
    ax = d4; si = xgridsize; di = m2c::near_offset_external(r_ygx); CALL(calcobjvsubdiv, 0);
    ax = d5; si = ygridsize; di = m2c::near_offset_external(r_ygy); CALL(calcobjvsubdiv, 0);
    ax = d6; si = zgridsize; di = m2c::near_offset_external(r_ygz); CALL(calcobjvsubdiv, 0);
    ax = d7; si = xgridsize; di = m2c::near_offset_external(r_zgx); CALL(calcobjvsubdiv, 0);
    ax = d8; si = ygridsize; di = m2c::near_offset_external(r_zgy); CALL(calcobjvsubdiv, 0);
    ax = d9; si = zgridsize; di = m2c::near_offset_external(r_zgz); CALL(calcobjvsubdiv, 0);
    return m2c::RETN_(0, _state);
}

/* CalcEyePosition — eye co-ords from rel co-ords (A matrix).
 * pass: ax = x rel, bx = y rel, cx = z rel
 * ret : ax = x eye, bx = y eye, cx = z eye
 * kill: dx, si, di, bp, flags */
bool calceyeposition(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    si = ax;                            /* x rel */
    di = bx;                            /* y rel */
    PUSH(cx);                           /* z rel */

    ax = a1; IMUL1_2(si); FRACADJ_D(bp);/* bp = A1.x */
    ax = a4; IMUL1_2(si); FRACADJ_D(bx);/* bx = A4.x */
    ax = a7; IMUL1_2(si); FRACADJ_D(cx);/* cx = A7.x */
    ax = a2; IMUL1_2(di); FRACADJ_D(dx);
    ADD(bp, dx);                        /* bp = A1.x + A2.y */
    ax = a5; IMUL1_2(di); FRACADJ_D(dx);
    ADD(bx, dx);                        /* bx = A4.x + A5.y */
    ax = a8; IMUL1_2(di); FRACADJ_D(dx);
    ADD(cx, dx);                        /* cx = A7.x + A8.y */
    POP(si);                            /* si = z rel */
    ax = a6; IMUL1_2(si); FRACADJ_D(dx);
    ADD(bx, dx);                        /* bx = A4.x + A5.y + A6.z */
    ax = a9; IMUL1_2(si); FRACADJ_D(dx);
    ADD(cx, dx);                        /* cx = A7.x + A8.y + A9.z */
    ax = a3; IMUL1_2(si); FRACADJ_D(ax);
    ADD(ax, bp);                        /* ax = A1.x + A2.y + A3.z */
    return m2c::RETN_(0, _state);
}

/* CalcSctrOffsets — rel + eye co-ords of sector sub-div offsets at all
 * scales.  CalcScale[si] picks the overscale level; each store block
 * then sars down through the lower scales setting valid flags.
 * kill: assume all */
bool calcsctroffsets(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    /* current sector visual (incl. overscaled values) */
    al = 0;
    valid1_2 = al;  valid1_4 = al;  valid1_8 = al;  valid1_16 = al;

    ax = zscaled;
    bp = ax;
    NEG(ax);
    zrel1 = ax;
    cx = ax;
    ax = v_view.vp_yft;
    AND(ax, 0x00ff);                    /* 256 sub-div */
    NEG(ax);
    yrel1 = ax;
    bx = ax;
    ax = v_view.vp_xft;
    AND(ax, 0x00ff);                    /* 256 sub-div */
    NEG(ax);
    xrel1 = ax;

    /* si = 2 * number of overscale ranges zft exceeds */
    XOR(si, si);
    CMP(bp, 1024);  if (CF) goto scale_sw; else si += 2;
    CMP(bp, 2048);  if (CF) goto scale_sw; else si += 2;
    CMP(bp, 4096);  if (CF) goto scale_sw; else si += 2;
    CMP(bp, 8192);  if (!CF) si += 2;
scale_sw:
    /* jmp CalcScale[si] -> si: 0=*16, 2=*8, 4=*4, 6=*2, 8=*1 */
    {
        int lvl = si / 2;               /* 0..4 */
        for (int i = 0; i < 4 - lvl; ++i) {
            SHL(ax, 1); SHL(bx, 1); SHL(cx, 1);
        }
        CALL(calceyeposition, 0);
        /* store cascade down to *1, setting valid flags */
        if (lvl <= 0) {
            xe01_16 = ax; ye01_16 = bx; ze01_16 = cx;
            SAR(ax, 1); SAR(bx, 1); SAR(cx, 1);
            valid1_16 = 1;
        }
        if (lvl <= 1) {
            xe01_8 = ax; ye01_8 = bx; ze01_8 = cx;
            SAR(ax, 1); SAR(bx, 1); SAR(cx, 1);
            valid1_8 = 1;
        }
        if (lvl <= 2) {
            xe01_4 = ax; ye01_4 = bx; ze01_4 = cx;
            SAR(ax, 1); SAR(bx, 1); SAR(cx, 1);
            valid1_4 = 1;
        }
        if (lvl <= 3) {
            xe01_2 = ax; ye01_2 = bx; ze01_2 = cx;
            SAR(ax, 1); SAR(bx, 1); SAR(cx, 1);
            valid1_2 = 1;
        }
        xe01 = ax; ye01 = bx; ze01 = cx;
    }

    /* 3 by 3 sector visual — 512 sub-div */
    ax = zscaled;
    NEG(ax); SAR(ax, 1);
    zrel2 = ax;
    cx = ax;
    ax = v_view.vp_yft;
    AND(ax, 0x01ff);
    NEG(ax); SAR(ax, 1);
    yrel2 = ax;
    bx = ax;
    ax = v_view.vp_xft;
    AND(ax, 0x01ff);
    NEG(ax); SAR(ax, 1);
    xrel2 = ax;
    CALL(calceyeposition, 0);
    xe02 = ax; ye02 = bx; ze02 = cx;

    /* 7 by 7 sector visual — 2048 sub-div */
    ax = zscaled;
    NEG(ax); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1);
    zrel8 = ax;
    cx = ax;
    ax = v_view.vp_yft;
    AND(ax, 0x07ff);
    NEG(ax); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1);
    yrel8 = ax;
    bx = ax;
    ax = v_view.vp_xft;
    AND(ax, 0x07ff);
    NEG(ax); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1);
    xrel8 = ax;
    CALL(calceyeposition, 0);
    xe08 = ax; ye08 = bx; ze08 = cx;

    /* 15 by 15 sector visual — 4096 sub-div */
    ax = zscaled;
    NEG(ax); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1);
    zrel16 = ax;
    cx = ax;
    ax = v_view.vp_yft;
    AND(ax, 0x0fff);
    NEG(ax); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1);
    yrel16 = ax;
    bx = ax;
    ax = v_view.vp_xft;
    AND(ax, 0x0fff);
    NEG(ax); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1); SAR(ax, 1);
    xrel16 = ax;
    CALL(calceyeposition, 0);
    xe016 = ax; ye016 = bx; ze016 = cx;
    return m2c::RETN_(0, _state);
}

/* RotateView — rotate eye co-ords + V_VIEW angles per ViewRotateMode.
 * RotateSwitch[bx]: 0 null, 2 rt, 4 lt, 6 up, 8 dn, 10 bk, 12 ft.
 * kill: assume all */
bool rotateview(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    bx = viewrotatemode;
    switch (bx) {
    case 0:                             /* RotateNull */
        return m2c::RETN_(0, _state);

    case 2:                             /* RotateViewRt: xe=-ye, ye=xe */
        ax = a4; NEG(ax); XCHG(ax, a1); a4 = ax;
        ax = a5; NEG(ax); XCHG(ax, a2); a5 = ax;
        ax = a6; NEG(ax); XCHG(ax, a3); a6 = ax;
        goto controtate;

    case 4:                             /* RotateViewLt: xe=ye, ye=-xe */
        ax = a1; NEG(ax); XCHG(ax, a4); a1 = ax;
        ax = a2; NEG(ax); XCHG(ax, a5); a2 = ax;
        ax = a3; NEG(ax); XCHG(ax, a6); a3 = ax;
        goto controtate;

    case 6:                             /* RotateViewUp (45 deg) */
        /* A4' = A4.c + A7.s ; A7' = A7.c - A4.s  (s = c = 23170) */
        ax = a4; dx = 23170; IMUL1_2(dx); FRACADJ_D(cx);
        ax = a7; dx = 23170; IMUL1_2(dx); FRACADJ_D(dx);
        ax = cx; ADD(ax, dx); a4 = ax;
        SUB(dx, cx); a7 = dx;
        ax = a5; dx = 23170; IMUL1_2(dx); FRACADJ_D(cx);
        ax = a8; dx = 23170; IMUL1_2(dx); FRACADJ_D(dx);
        ax = cx; ADD(ax, dx); a5 = ax;
        SUB(dx, cx); a8 = dx;
        ax = a6; dx = 23170; IMUL1_2(dx); FRACADJ_D(cx);
        ax = a9; dx = 23170; IMUL1_2(dx); FRACADJ_D(dx);
        ax = cx; ADD(ax, dx); a6 = ax;
        SUB(dx, cx); a9 = dx;
        /* new hdg = arctan360(A4 / A5) */
        cx = a4; dx = a5;
        CALLF(arctan360, 0);
        cl = 7; SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
        v_view.vp_hdg = ax;
        goto controtate;

    case 8:                             /* RotateViewDn: ye=-ze, ze=ye */
        ax = a7; NEG(ax); XCHG(ax, a4); a7 = ax;
        ax = a8; NEG(ax); XCHG(ax, a5); a8 = ax;
        ax = a9; NEG(ax); XCHG(ax, a6); a9 = ax;
        goto controtate;

    case 10:                            /* RotateViewBk */
    case 12:                            /* RotateViewFt (identical) */
        NEG(a1); NEG(a2); NEG(a3);
        NEG(a4); NEG(a5); NEG(a6);
        ax = v_view.vp_roll;  NEG(ax); AND(ax, 511); v_view.vp_roll = ax;
        ax = v_view.vp_pitch; NEG(ax); AND(ax, 511); v_view.vp_pitch = ax;
        CALL(calcangles, 0);
        return m2c::RETN_(0, _state);

    default:                            /* table overrun — unreachable */
        return m2c::RETN_(0, _state);
    }

controtate:
    /* new pitch = arcsin(A6) — fine pdegs -> pdegs */
    ax = a6;
    CALLF(fastarcsin, 0);
    cl = 7; SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
    v_view.vp_pitch = ax;

    /* new roll = 0 if pitch = +/-90 degs else arctan360(-A3 / A9) */
    XOR(dx, dx);
    if (ax != 128 && ax != 384) {
        cx = a3; NEG(cx);
        dx = a9;
        CALLF(arctan360, 0);
        cl = 7; SHR(ax, cl); ADC(ax, 0); AND(ax, 0x01ff);
        dx = ax;
    }
    v_view.vp_roll = dx;
    CALL(calcangles, 0);
    return m2c::RETN_(0, _state);
}

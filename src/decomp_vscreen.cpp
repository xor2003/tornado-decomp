/* decomp_vscreen.cpp — clean-C rewrites of VISUAL/VSCREEN procedures.
 *
 * Semantics from the authoritative VISUAL/VSCREEN.ASM source and its
 * original comments.  VTransform is NEAR (RETN_); the V* entry points are
 * FAR (RETF_).
 *
 * Clip-space procs read the globals VSetViewport installs: CLIPL/R/A/B,
 * XADJUST/YADJUST, X_ORG/Y_ORG, XCRTMAX/YCRTMAX and VP's scale fields.
 */

#include "vscreen.h"

/* SINCOS ax,dx,ax — ax = SinTable[angle], dx = CosTable[angle]; the
 * 512-pdeg tables mask the angle to 9 bits (word index = angle*2). */
#define SINCOS_AD() do { \
    bx = ax; \
    AND(bx, 0x01ff); \
    SHL(bx, 1); \
    ax = *(dw*)(((db*)&sintable) + bx); \
    dx = *(dw*)(((db*)&costable) + bx); \
} while (0)

/* FRACADJ dst — 1.15-signed fixed-point product round: the imul result
 * in dx:ax is rescaled (dx:ax <<= 1) then rounded up on ax's half bit.
 * Identical to (a*b + 0x4000) >> 15 carried out on 32 bits. */
#define FRACADJ_(dst) do { \
    SHL(ax, 1); \
    RCL(dx, 1); \
    SHL(ax, 1); \
    ADC(dx, 0); \
    dst = dx; \
} while (0)

/* OCODE xv,yv -> al = outcode 0000ABRL (active high), zf set iff the
 * point is inside all four clip limits. */
#define OCODE_(xv, yv) do { \
    XOR(al, al); \
    CMP((xv), clipr); \
    if ((short)(xv) > (short)clipr) { \
        OR(al, 0x2);                    /* OCODER */ \
    } else { \
        CMP((xv), clipl); \
        if ((short)(xv) < (short)clipl) OR(al, 0x1); /* OCODEL */ \
    } \
    CMP((yv), clipa); \
    if ((short)(yv) > (short)clipa) { \
        OR(al, 0x8);                    /* OCODEA */ \
    } else { \
        CMP((yv), clipb); \
        if ((short)(yv) < (short)clipb) OR(al, 0x4); /* OCODEB */ \
    } \
    TEST(al, al); \
} while (0)

/* CRTXY x,y — scale adjusted virtual co-ords down by cl, round up on the
 * half bit, clamp to the crt limits and offset by the viewport origin
 * (y is negated: crt y runs downward). */
#define CRTXY_(x, y) do { \
    ADD((x), xadjust); \
    SHR((x), cl); \
    ADC((x), 0); \
    CMP((x), xcrtmax); \
    if ((dw)(x) > (dw)xcrtmax) (x) = xcrtmax; \
    ADD((x), x_org); \
    ADD((y), yadjust); \
    SHR((y), cl); \
    ADC((y), 0); \
    CMP((y), ycrtmax); \
    if ((dw)(y) > (dw)ycrtmax) (y) = ycrtmax; \
    NEG((y)); \
    ADD((y), y_org); \
} while (0)

/* VSetRotation — VSinR/VCosR from the angle in ax (0..511 pdegs).
 * kill: ax, bx, dx, flags */
bool vsetrotation(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    SINCOS_AD();
    vsinr = ax;
    vcosr = dx;
    return m2c::RETF_(0, _state);
}

/* VTransform — scale Xe[si]/Ye[si] up by cl then rotate wrt VSinR/VCosR
 * (xt = (xs*VCosR + ys*VSinR)*1.25 with the 1.25 aspect fix,
 *  yt = ys*VCosR - xs*VSinR).  Result lands back in Xe[si]/Ye[si],
 *  di = xt, bp = yt.
 * kill: ax, bx, dx, di, bp, flags */
bool vtransform(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    /* scale up: xs = x << cl, ys = y << cl */
    di = *(dw*)(((db*)&xe) + si);
    SAL(di, cl);
    bp = *(dw*)(((db*)&ye) + si);
    SAL(bp, cl);

    /* xt = (xs*VCosR + ys*VSinR) * 1.25 */
    ax = vcosr;
    IMUL1_2(di);
    FRACADJ_(bx);                            /* xs * VCosR */
    ax = vsinr;
    IMUL1_2(bp);
    FRACADJ_(dx);                            /* ys * VSinR */
    ADD(dx, bx);                             /* xs*VCosR + ys*VSinR */
    bx = dx;
    SAR(bx, 1);                              /* /2 */
    SAR(bx, 1);                              /* /4 */
    ADD(dx, bx);                             /* * 1.25 */
    *(dw*)(((db*)&xe) + si) = dx;

    /* yt = ys*VCosR - xs*VSinR */
    XCHG(dx, di);                            /* dx = xs, di = xt */
    ax = vsinr;
    IMUL1_2(dx);
    FRACADJ_(bx);                            /* xs * VSinR */
    ax = vcosr;
    IMUL1_2(bp);
    FRACADJ_(bp);                            /* ys * VCosR */
    SUB(bp, bx);                             /* ys*VCosR - xs*VSinR */
    *(dw*)(((db*)&ye) + si) = bp;
    return m2c::RETN_(0, _state);
}

/* VCalcOutCodes — scale+rotate every vertex Xe[0..si]/Ye[0..si] then
 * classify: dl ANDs all outcodes (nz = something off every side? no —
 * nz in dl means some clip bit set on ALL points = non-visible), dh ORs
 * them (z = all points fully inside = totally visible).
 * pass: si indexes the last vertex
 * ret : ObjectDrawMode = DRAW/CLIP/SKIP_OBJECT, cf = non-visible
 *       XCrt[]/YCrt[] filled when DRAW_OBJECT
 * kill: assume all (except cf) */
bool vcalcoutcodes(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    PUSH(si);                                /* last vertex index */
    cl = vp.v_scale_up;
    dx = 0x00ff;                             /* dl = non-vis, dh = vis mask */
    do {
        PUSH(dx);
        CALL(vtransform, 0);                 /* scale and rotate */
        POP(dx);
        OCODE_(di, bp);
        *((db*)&outcode + si) = al;          /* OutCode[si] = al */
        AND(dl, al);                         /* non-visible test mask */
        OR(dh, al);                          /* totally visible test mask */
        SUB(si, 2);
    } while (!CF);                           /* jnc OCodeLoop */
    POP(si);

    TEST(dl, dl);
    if ((dl & dl) != 0) {                    /* SkipObject */
        ax = 4;                              /* SKIP_OBJECT */
        objectdrawmode = ax;
        STC;
        return m2c::RETF_(0, _state);
    }
    TEST(dh, dh);
    if ((dh & dh) != 0) {                    /* ClipObject */
        ax = 2;                              /* CLIP_OBJECT */
        objectdrawmode = ax;
        CLC;
        return m2c::RETF_(0, _state);
    }
    /* DrawObject — generate all crt co-ords now */
    cl = vp.v_scale_dn;
    do {
        ax = *(dw*)(((db*)&xe) + si);
        dx = *(dw*)(((db*)&ye) + si);
        CRTXY_(ax, dx);
        *(dw*)(((db*)&xcrt) + si) = ax;
        *(dw*)(((db*)&ycrt) + si) = dx;      /* WORD PTR YCrt[si] */
        SUB(si, 2);
    } while (!CF);                           /* jnc GenXYCrtLoop */
    ax = 0;                                  /* DRAW_OBJECT */
    objectdrawmode = ax;
    CLC;
    return m2c::RETF_(0, _state);
}

/* VPolyClip / VPolyLineClip — far entry points tail-jumping through the
 * mode tables (DRAW_OBJECT -> Draw, CLIP -> Clip, SKIP -> Null).
 * kill: ax, bx, cx, dx, bp, flags */
bool vpolyclip(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = objectdrawmode;
    __disp = *(dw*)(((db*)&polyclipmode) + bx);
    return vsetviewport((__disp), _state);   /* jmp PolyClipMode[bx] */
}

bool vpolylineclip(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    bx = objectdrawmode;
    __disp = *(dw*)(((db*)&plineclipmode) + bx);
    return vsetviewport((__disp), _state);   /* jmp PLineClipMode[bx] */
}

/* VQuickLineClip — clip the single line Xe[0..2]/Ye[0..2] and emit its
 * crt co-ords when visible.
 * ret : cf = 0 visible: XCrt[0]/YCrt[0], XCrt[2]/YCrt[2] set
 *       cf = 1 non-visible or error
 * kill: assume all */
bool vquicklineclip(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    si = 0;                                  /* end a index */
    cl = vp.v_scale_up;
    CALL(vtransform, 0);
    OCODE_(di, bp);
    *((db*)&outcode + si) = al;              /* OutCode[0] */
    si = 2;                                  /* end b index */
    CALL(vtransform, 0);
    OCODE_(di, bp);
    *((db*)&outcode + si) = al;              /* OutCode[2] */
    si = 0;
    di = 2;

    /* test line visibility */
    ah = *((db*)&outcode + si);              /* ah = end a outcode */
    TEST(al, ah);
    if ((al & ah) != 0) goto qlcfail;        /* same side -> non-visible */

    /* end a */
    TEST(ah, ah);
    if ((ah & ah) == 0) {                    /* end a visible */
        bp = *(dw*)(((db*)&xe) + si);
        dx = *(dw*)(((db*)&ye) + si);
    } else {
        CALL(vsetviewport, m2c::kcliplineend); /* ClipLineEnd */
        if (CF) goto qlcfail;                /* non-visible -> */
    }
    cl = vp.v_scale_dn;
    CRTXY_(bp, dx);
    *(dw*)(((db*)&xcrt) + si) = bp;
    *(dw*)(((db*)&ycrt) + si) = dx;

    /* end b */
    XCHG(si, di);
    al = *((db*)&outcode + si);
    TEST(al, al);
    if ((al & al) == 0) {
        bp = *(dw*)(((db*)&xe) + si);
        dx = *(dw*)(((db*)&ye) + si);
    } else {
        CALL(vsetviewport, m2c::kcliplineend);
        if (CF) goto qlcfail;
    }
    cl = vp.v_scale_dn;
    CRTXY_(bp, dx);
    *(dw*)(((db*)&xcrt) + si) = bp;
    *(dw*)(((db*)&ycrt) + si) = dx;
    CLC;
    return m2c::RETF_(0, _state);

qlcfail:
    STC;
    return m2c::RETF_(0, _state);
}

/* VDotClip — clip the single point Xe[0]/Ye[0].
 * ret : cf = 0 visible: cx = x crt, bx = y crt (bh = 0)
 *       cf = 1 non-visible or error
 * kill: assume all (except cf) */
bool vdotclip(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    XOR(si, si);                             /* index = 0 */
    cl = vp.v_scale_up;
    CALL(vtransform, 0);                     /* scale and rotate */
    OCODE_(di, bp);
    if ((al & al) != 0) {                    /* DotClipFail */
        STC;
        return m2c::RETF_(0, _state);
    }
    cl = vp.v_scale_dn;
    CRTXY_(di, bp);
    cx = di;
    bx = bp;
    CLC;
    return m2c::RETF_(0, _state);
}

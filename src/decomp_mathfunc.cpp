/* decomp_mathfunc.cpp — clean-C rewrites of LIB8086/MATHFUNC procedures.
 *
 * Semantics are taken from the authoritative LIB8086/MATHFUNC.ASM
 * source (with its original comments) and verified against the lifted
 * C++.  Each function is a strong symbol overriding the weak lifted
 * entry point for direct CALL/CALLF sites; the body ends with
 * RETF_(0) so the caller's pushed return tag is consumed exactly like
 * a far `ret`.
 *
 * The diff harness compares result flags, so flag-affecting asm ops
 * are replayed through the real m2c macros (TEST/SHR/CMP/...) on the
 * actual register temporaries — this keeps exit flag residue and
 * killed-register contents identical to the original.
 */
#include "mathfunc.h"

/* CalcDeltaTime - look up delta time wrt frame rate.
 * pass: LastFrame; ret: DeltaTime; kill: ax, bx, flags. */
bool calcdeltatime(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return sqrt(_i, _state);   /* keep the weak-rep
        * dispatch door for module-static siblings */

    /* check LastFrame <= max time */
    dw frame = lastframe;
    if (frame > 100) {
        frame = 100;
        lastframe = 100;
    }

    /* look up DeltaTime wrt LastFrame */
    bx = frame;
    SHL(bx, 1);                     /* *2 word index — exit flags */
    ax = *(dw*)(((db*)&deltatable) + bx);
    deltatime = ax;
    return m2c::RETF_(0, _state);
}

/* CalcDeltaXY - calc delta x = trig(theta) * factor
 *               calc delta y = trig(theta) * factor
 *
 * pass: ax = theta = 0 .. 511 pseudo degrees
 *       dx = factor
 * ret : bx = delta y, cx = delta x
 * kill: ax, dx, si, di, bp, flags
 *
 * The octant selects per-axis trig tables (OctTrigTable[di]/[di+2]
 * are near pointers, sign words sit in OctSignTable); the angle within
 * the quadrant is |low byte of theta*2|.  Each product goes through
 * FRACADJ = (dx:ax + 0x4000) >> 15 with rounding. */
bool calcdeltaxy(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    bp = dx;                                    /* store factor */

    const dw octant = (ax >> 6) & 7;
    di = octant * 4;                            /* octant trig / sign table index */
    const int8_t a8 = (int8_t)(db)(ax * 2);     /* low byte of theta*2 as signed */
    bx = (a8 < 0) ? (dw)-a8 : (dw)a8;           /* |angle| sin/cos table index */

    si = *(dw*)(((db*)&octtrigtable) + di);
    ax = m2c::getdata(*(dw*)(raddr(ds, si + bx)));
    IMUL1_2(bp);                                /* dx:ax = trig(theta) * factor */
    SHL(ax, 1);                                 /* FRACADJ cx */
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    cx = dx;

    ax = *(dw*)(((db*)&octsigntable) + di);
    XOR(cx, ax);                                /* restore sign */
    SUB(cx, ax);                                /* cx = delta x */

    si = *(dw*)(((db*)&octtrigtable) + di + 2);
    ax = m2c::getdata(*(dw*)(raddr(ds, si + bx)));
    IMUL1_2(bp);
    SHL(ax, 1);                                 /* FRACADJ bx */
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    bx = dx;

    ax = *(dw*)(((db*)&octsigntable) + di + 2);
    XOR(bx, ax);                                /* restore sign */
    SUB(bx, ax);                                /* bx = delta y — exit flags */
    return m2c::RETF_(0, _state);
}

/* Sqrt - square root function (16-bit unsigned).
 * pass: ax = n; ret: ax = sqrt(n); kill: bx, dx, bp, flags.
 *
 * Bit-by-bit restoring sqrt: mask walks right two bits at a time until
 * it hits n's top bit pair, approx tracks one bit per mask pair.  The
 * square test uses a byte mul — root always fits in a byte (<=255). */
bool sqrt(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    TEST(ax, ax);                               /* zero? */
    if (ZF) return m2c::RETF_(0, _state);

    bp = ax;                                    /* bp = n */
    dx = 0xc000;                                /* dx = mask */
    bx = 0x80;                                  /* bx = approx */

    for (;;) {                                  /* while not (num and mask) */
        TEST(ax, dx);
        if (!ZF) break;
        SHR(dx, 1);                             /* mask >> 2 */
        SHR(dx, 1);
        SHR(bx, 1);                             /* approx >> 1 */
    }

    dx = bx;                                    /* root = approx */

    for (;;) {                                  /* while (approx >> 1) */
        SHR(bx, 1);
        if (CF) break;                          /* approx was odd -> done */
        ADD(dx, bx);                            /* root = root + approx */

        al = dl;
        MUL1_1(al);                             /* ax = test = root ^ 2 */

        CMP(ax, bp);
        if (ZF) break;                          /* test = n -> */
        if (CF) continue;                       /* test < n -> */

        SUB(dx, bx);                            /* root = root - approx */
    }

    ax = dx;                                    /* return root */
    return m2c::RETF_(0, _state);
}

/* Sqrt32 - 32-bit square root function.
 * pass: dx, ax = n; ret: ax = sqrt(n)
 * kill: bx, cx, dx, si, di, flags.
 *
 * Same bit-by-bit scheme on dx:ax: cx:bx preserves n, dx:ax is the
 * 32-bit mask (shr/rcr pairs), di is approx, si is the root, and the
 * square test is a full 16x16->32 mul compared 32 bits wide. */
bool sqrt32(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    TEST(dx, dx);                               /* zero? */
    if (ZF) {
        TEST(ax, ax);
        if (ZF) return m2c::RETF_(0, _state);   /* yes -> */
    }

    cx = dx;                                    /* cx, bx = n */
    bx = ax;
    dx = 0xc000;                                /* dx, ax = mask */
    XOR(ax, ax);
    di = 0x8000;                                /* di = approx */

    for (;;) {                                  /* while not (num and mask) */
        TEST(cx, dx);
        if (!ZF) break;
        TEST(bx, ax);
        if (!ZF) break;
        SHR(dx, 1);                             /* mask >> 2 (32-bit) */
        RCR(ax, 1);
        SHR(dx, 1);
        RCR(ax, 1);
        SHR(di, 1);                             /* approx >> 1 */
    }

    si = di;                                    /* root = approx */

    for (;;) {                                  /* while (approx >> 1) */
        SHR(di, 1);
        if (CF) break;                          /* approx was odd -> done */
        ADD(si, di);                            /* root = root + approx */

        ax = si;
        MUL1_2(ax);                             /* dx:ax = test = root ^ 2 */

        CMP(dx, cx);
        if (CF) continue;                       /* test < n -> */
        if (ZF) {
            CMP(ax, bx);
            if (CF) continue;                   /* test < n -> */
            if (ZF) break;                      /* test = n -> */
        }
        SUB(si, di);                            /* root = root - approx */
    }

    ax = si;                                    /* return root */
    return m2c::RETF_(0, _state);
}

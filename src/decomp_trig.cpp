/* decomp_trig.cpp — clean-C rewrites of LIB8086/TRIG procedures.
 *
 * Semantics are taken from the authoritative LIB8086/TRIG.ASM source
 * (with its original comments) and verified against the lifted C++.
 * Each function is a strong symbol overriding the weak lifted entry
 * point for direct CALL/CALLF sites; the body ends with RETF_(0) so
 * the caller's pushed return tag is consumed exactly like a far `ret`.
 *
 * The trig tables physically live in the program's STACK segment
 * (the ASM uses SS: overrides because DGROUP was full); the m2c data
 * references resolve them segment-agnostically, so plain &table reads
 * match the lifted behaviour.
 *
 * The diff harness compares result flags, so flag-affecting ops are
 * replayed through the real m2c macros on the actual registers — this
 * keeps exit flag residue and killed-register contents identical.
 */
#include "trig.h"

/* Tangent - tan look up.
 * pass: ax = angle (0..511 pdegs); ret: dx = tan(theta) * 256
 * (quadrant 1 direct, quadrant 4 reversed+negated, else 0). */
bool tangent(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    bx = ax;                            /* bx = tan table index */
    CMP(bx, 90);
    if (CF || ZF) {                     /* quad 1? */
        SHL(bx, 1);                     /* *2 word index */
        dx = *(dw*)(((db*)&tantable) + bx);
        return m2c::RETF_(0, _state);
    }
    CMP(bx, 422);
    if (!CF) {                          /* quad 4? */
        SUB(bx, 512);                   /* reverse tan table index */
        NEG(bx);
        SHL(bx, 1);                     /* *2 word index */
        dx = *(dw*)(((db*)&tantable) + bx);
        NEG(dx);                        /* exit flags = neg dx */
        return m2c::RETF_(0, _state);
    }
    XOR(dx, dx);                        /* error, return 0 */
    return m2c::RETF_(0, _state);
}

/* FastArcTan - fast arctan look up.
 * pass: ax = signed binary fraction
 * ret : ax = arctan(frac) (fine pdegs); kill: bx, cx, dx, flags. */
bool fastarctan(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                                /* ax = abs(frac), dx = sign(frac) */
    XOR(ax, dx);
    SUB(ax, dx);

    cl = 7;                             /* prime for /128 */
    bx = ax;
    SHR(bx, cl);                        /* /128 */
    ADC(bx, 0);                         /* 1/2 bit round up */
    SHL(bx, 1);                         /* *2 word index */
    ax = *(dw*)(((db*)&arctantable) + bx);
    XOR(ax, dx);                        /* restore sign */
    SUB(ax, dx);                        /* exit flags = sub */
    return m2c::RETF_(0, _state);
}

/* ArcTan - arctan look up and interpolation.
 * pass: ax = signed binary fraction
 * ret : ax = arctan(frac) (fine pdegs)
 * kill: bx, cx, dx, si, bp, flags.
 *
 * Table index = |frac|/128; the low 7 bits linearly interpolate to the
 * next entry (diff * rem / 128, half-bit rounded). */
bool arctan(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                                /* ax = abs(frac), dx = sign(frac) */
    XOR(ax, dx);
    SUB(ax, dx);

    bp = dx;                            /* store sign(frac) */
    dx = ax;                            /* store abs(frac) */
    cl = 7;                             /* prime for /128 */
    bx = ax;
    SHR(bx, cl);                        /* /128 */
    SHL(bx, 1);                         /* *2 word index */
    ax = *(dw*)(((db*)&arctantable) + bx);

    AND(dx, 0x007f);                    /* extract remaining bits */
    if (!ZF) {                          /* (trap frac = 08000h case) */
        si = ax;
        ax = *(dw*)(((db*)&arctantable) + bx + 2);
        SUB(ax, si);                    /* ax = diff */
        MUL1_2(dx);                     /* dx:ax = diff * rem */
        SHR(ax, cl);                    /* /128 */
        ADC(ax, si);                    /* (1/2 bit round up) */
    }
    XOR(ax, bp);                        /* restore sign */
    SUB(ax, bp);                        /* exit flags = sub */
    return m2c::RETF_(0, _state);
}

/* FastArcTan2 - fast arctan look up (-2 .. +2).
 * pass: ax = signed binary fraction (/2)
 * ret : ax = arctan(frac) (fine pdegs); kill: bx, cx, dx, flags. */
bool fastarctan2(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                                /* ax = abs(frac), dx = sign(frac) */
    XOR(ax, dx);
    SUB(ax, dx);

    cl = 6;                             /* prime for /64 */
    bx = ax;
    SHR(bx, cl);                        /* /64 */
    ADC(bx, 0);                         /* 1/2 bit round up */
    SHL(bx, 1);                         /* *2 word index */
    ax = *(dw*)(((db*)&arctantable) + bx);
    XOR(ax, dx);                        /* restore sign */
    SUB(ax, dx);                        /* exit flags = sub */
    return m2c::RETF_(0, _state);
}

/* ArcTan2 - arctan look up and interpolation (-2 .. +2).
 * pass: ax = signed binary fraction (/2)
 * ret : ax = arctan(frac) (fine pdegs)
 * kill: bx, cx, dx, si, bp, flags. */
bool arctan2(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                                /* ax = abs(frac), dx = sign(frac) */
    XOR(ax, dx);
    SUB(ax, dx);

    bp = dx;                            /* store sign(frac) */
    dx = ax;                            /* store abs(frac) */
    cl = 6;                             /* prime for /64 */
    bx = ax;
    SHR(bx, cl);                        /* /64 */
    SHL(bx, 1);                         /* *2 word index */
    ax = *(dw*)(((db*)&arctantable) + bx);

    AND(dx, 0x003f);                    /* extract remaining bits */
    if (!ZF) {
        si = ax;
        ax = *(dw*)(((db*)&arctantable) + bx + 2);
        SUB(ax, si);                    /* ax = diff */
        MUL1_2(dx);                     /* dx:ax = diff * rem */
        SHR(ax, cl);                    /* /64 */
        ADC(ax, si);                    /* (1/2 bit round up) */
    }
    XOR(ax, bp);                        /* restore sign */
    SUB(ax, bp);                        /* exit flags = sub */
    return m2c::RETF_(0, _state);
}

/* FastArcSin - arcsin look up.
 * pass: ax = signed binary fraction
 * ret : ax = arcsin(frac) (fine pdegs); kill: cx, dx, bp, flags. */
bool fastarcsin(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                                /* ABSV ax */
    XOR(ax, dx);
    SUB(ax, dx);

    cl = 7;                             /* /128 */
    bp = ax;
    SHR(bp, cl);                        /* /128 */
    ADC(bp, 0);                         /* 1/2 bit round up */
    SHL(bp, 1);                         /* *2 word index */
    ax = *(dw*)(((db*)&arcsintable) + bp);
    XOR(ax, dx);                        /* restore sign */
    SUB(ax, dx);                        /* exit flags = sub */
    return m2c::RETF_(0, _state);
}

/* FastArcCos - arccos look up.
 * pass: ax = signed binary fraction
 * ret : ax = arccos(frac) (fine pdegs); kill: cx, dx, bp, flags.
 * For frac < 0 the result is 180 - arccos(|frac|). */
bool fastarccos(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                                /* ABSV ax */
    XOR(ax, dx);
    SUB(ax, dx);

    cl = 7;                             /* /128 */
    bp = ax;
    SHR(bp, cl);                        /* /128 */
    ADC(bp, 0);                         /* 1/2 bit round up */
    SHL(bp, 1);                         /* *2 word index */
    ax = *(dw*)(((db*)&arccostable) + bp);

    /* if frac < 0 then return 180 - arccos(frac) */
    TEST(dx, dx);                       /* frac < 0? */
    if (SF) {
        dx = ax;
        ax = (256 * 128) - 1;           /* (-1 keeps result +ve) */
        SUB(ax, dx);                    /* exit flags = sub */
    }
    return m2c::RETF_(0, _state);
}

/* ArcTan360 - arctan over the full circle.
 * pass: cx = x, dx = y
 * ret : ax = arctan(x / y) = 0 .. 360 degs (fine pdegs)
 * kill: assume all (except ax).
 *
 * Signs of x and y select a quadrant via QuadSwitch (bit1 = x<0,
 * bit2 = y<0); the acute angle comes from ArcTan on the smaller/larger
 * ratio shifted to a Q15 fraction, then maps into the quadrant. */
bool arctan360(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    XOR(bx, bx);                        /* clear quad index */

    TEST(cx, cx);
    if (ZF) {                           /* x = 0 */
        TEST(dx, dx);
        ax = SF ? (dw)(256 * 128) : 0;  /* 180 if y < 0 else 0 */
        return m2c::RETF_(0, _state);
    }
    if (SF) {                           /* x < 0 */
        NEG(cx);
        OR(bx, 0x2);
    }

    TEST(dx, dx);
    if (ZF) {                           /* y = 0 */
        TEST(bx, 0x2);
        ax = ZF ? (dw)(128 * 128) : (dw)(384 * 128);  /* 90 or 270 */
        return m2c::RETF_(0, _state);
    }
    if (SF) {                           /* y < 0 */
        NEG(dx);
        OR(bx, 0x4);
    }

    /* acute theta into dx (exit flags depend on the path taken) */
    CMP(cx, dx);
    if (CF) {                           /* y > x: theta = arctan(x / y) */
        XCHG(cx, dx);
        XOR(ax, ax);
        SHR(dx, 1);
        RCR(ax, 1);                     /* dx:ax = y << 15 (Q15 fraction) */
        DIV2(cx);                       /* ax = frac */
        PUSH(bx);
        CALLF(arctan, 0);
        POP(bx);
        dx = ax;
    } else if (ZF) {                    /* x = y: 45 degs */
        dx = 64 * 128;                  /* exit flags = the cmp above */
    } else {                            /* x > y: theta = 90 - arctan(y / x) */
        XOR(ax, ax);
        SHR(dx, 1);
        RCR(ax, 1);                     /* dx:ax = x's partner << 15 */
        DIV2(cx);                       /* ax = frac */
        PUSH(bx);
        CALLF(arctan, 0);
        POP(bx);
        dx = 128 * 128;
        SUB(dx, ax);                    /* dx = 90 - theta */
    }

    /* QuadSwitch[bx] = {Quad1,Quad4,Quad2,Quad3}: bx selects by sign
     * bits — 0=+x+y ->theta, 2=-x+y ->360-theta, 4=+x-y ->180-theta,
     * 6=-x-y ->180+theta. */
    switch (bx) {
    case 0:                             /* Quad1: result = theta */
        ax = dx;
        break;
    case 2:                             /* Quad4: result = 360 - theta */
        XOR(ax, ax);
        SUB(ax, dx);
        break;
    case 4:                             /* Quad2: result = 180 - theta */
        ax = 256 * 128;
        SUB(ax, dx);
        break;
    case 6:                             /* Quad3: result = 180 + theta */
        ax = 256 * 128;
        ADD(ax, dx);
        break;
    }
    return m2c::RETF_(0, _state);
}

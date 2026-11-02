/* decomp_rngbrg.cpp — clean-C rewrites of TORNADO/RNGBRG procedures.
 *
 * Semantics from the authoritative TORNADO/RNGBRG.ASM source and its
 * original comments, verified against the lifted C++.  Each function is a
 * strong symbol overriding the weak lifted entry point for direct
 * CALL/CALLF sites; every proc is FAR so the body ends with RETF_(0),
 * consuming the caller's pushed return tag exactly like a far `ret`.
 *
 * Flag-affecting asm ops run through the real m2c macros so the exit flag
 * residue and killed-register contents match the original — the diff
 * harness compares result flags.
 */
#include "rngbrg.h"

/* CalcRngBrg - calc range and bearing
 * pass: dx, ax = Dx
 *       cx, bx = Dy
 * ret : dx, ax = range
 *       bx = si = bearing (pdegs)
 *       bp = di = bearing (fine pdegs)
 *       FlatDx = Dx, FlatDy = Dy
 * kill: cx, flags
 *
 * The long range calculation used has an average error of 3% and a
 * worst case error of 12%. */
bool calcrngbrg(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    flatdx = ((dd)dx << 16) | ax;
    flatdy = ((dd)cx << 16) | bx;

    /* calc bearing */
    si = 0;                         /* reset table index */
    TEST(dx, dx);                   /* abs(Dx) */
    if (SF) {                       /* jns -> */
        NOT(ax);                    /* NEG32 dx,ax */
        NOT(dx);
        ADD(ax, 1);
        ADC(dx, 0);
        si |= 0x10;                 /* -Dx flag */
    }
    TEST(cx, cx);                   /* abs(Dy) */
    if (SF) {
        NOT(bx);                    /* NEG32 cx,bx */
        NOT(cx);
        ADD(bx, 1);
        ADC(cx, 0);
        si |= 0x8;                  /* -Dy flag */
    }

    /* sort: dx:ax = min, cx:bx = max */
    CMP(dx, cx);
    if (CF) goto scalevals;         /* abs(Dx) < abs(Dy) -> */
    if (!ZF) goto swapvals;         /* abs(Dx) > abs(Dy) -> */
    CMP(ax, bx);
    if (CF) goto scalevals;
    if (!ZF) goto swapvals;

    /* abs(Dx) = abs(Dy): theta = 45 degs (or 0 if both zero) */
    PUSH(dx);                       /* store min(abs(Dx), abs(Dy)) */
    PUSH(ax);
    PUSH(cx);                       /* store max(abs(Dx), abs(Dy)) */
    PUSH(bx);
    ax = 64*128;                    /* assume 45 degs */
    OR(bx, cx);                     /* abs(Dx) = abs(Dy) <> 0? */
    if (!ZF) goto contbrg;
    XOR(ax, ax);                    /* 0 degs */
    goto contbrg;

swapvals:
    XCHG(dx, cx);
    XCHG(ax, bx);
    si |= 0x4;                      /* abs(Dx) > abs(Dy) flag */

scalevals:
    PUSH(dx);                       /* store min(abs(Dx), abs(Dy)) */
    PUSH(ax);
    PUSH(cx);                       /* store max(abs(Dx), abs(Dy)) */
    PUSH(bx);

    /* numerator * 32768 for binary fraction */
    bp = dx;
    dx = ax;
    XOR(ax, ax);
    SHR(bp, 1);
    RCR(dx, 1);
    RCR(ax, 1);

    /* scale values for 16 bit denominator (val <= 65536) */
    while (cx != 0) {
        SHR(bp, 1);                 /* numerator / 2 */
        RCR(dx, 1);
        RCR(ax, 1);
        SHR(cx, 1);                 /* denominator / 2 */
        RCR(bx, 1);
    }
    DIV2(bx);

    PUSH(si);
    CALLF(arctan, 0);               /* (0 .. 45 degs) */
    POP(si);

contbrg:
    di = ax;                        /* theta (fine pdegs) */
    cl = 7;                         /* /128 */
    SHR(ax, cl);
    ADC(ax, 0);                     /* ROUNDUP ax */
    bx = ax;                        /* theta (pdegs) */

    /* bearing = oct offset + theta * oct sign */
    ax = *(dw*)(((db*)octtable) + si);
    dx = *(dw*)(((db*)octtable) + si + 2);
    XOR(di, dx);
    SUB(di, dx);
    ADD(di, ax);                    /* di = bearing (fine pdegs) */
    si = di;
    cl = 7;
    SHR(si, cl);
    ADC(si, 0);                     /* ROUNDUP si */
    AND(si, 0x01ff);                /* si = bearing (pdegs) */

    /* calc range */
    POP(ax);                        /* restore max(abs(Dx), abs(Dy)) */
    POP(dx);
    POP(bp);                        /* restore min(abs(Dx), abs(Dy)) */
    POP(cx);

    /* if max < 32768: short range, else long range */
    TEST(dx, dx);
    if (dx & dx) goto longrange;
    CMP(ax, 32768);
    if ((dw)ax >= (dw)32768) goto longrange;

    /* short range = max * 32768 / cos(theta) */
    dx = ax;                        /* *32768 */
    XOR(ax, ax);
    SHR(dx, 1);
    RCR(ax, 1);
    AND(bx, 0x01ff);                /* COSINE bx,bx */
    SHL(bx, 1);
    bx = *(dw*)(((db*)&costable) + bx);
    DIV2(bx);
    XOR(dx, dx);                    /* dx, ax = range */
    goto exitrngbrg;

longrange:
    /* long range = [min + 4 * max] / 4 */
    SHL(ax, 1);                     /* *4 */
    RCL(dx, 1);
    SHL(ax, 1);
    RCL(dx, 1);
    ADD(ax, bp);
    ADC(dx, cx);
    SHR(dx, 1);                     /* /4 */
    RCR(ax, 1);
    SHR(dx, 1);
    RCR(ax, 1);

exitrngbrg:
    bx = si;                        /* bx = bearing (pdegs) */
    bp = di;                        /* bp = bearing (fine pdegs) */
    return m2c::RETF_(0, _state);
}

/* CalcAngDiff - calculate angular difference
 * pass: ax = heading (0 .. 511 pdeg)
 *       dx = bearing (0 .. 511 pdeg)
 * ret : ax = abs(ang diff) (0 .. 256 pdeg)
 *       dx = sign(ang diff)
 * kill: cl, flags. */
bool calcangdiff(m2c::_offsets _i, m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return calcrngbrg(_i, _state);   /* keep the weak-rep
        * dispatch door for module-static siblings */

    cl = 7;                         /* scale by 128 */
    AND(ax, 0x01ff);                /* ensure 0 .. 511 pdeg */
    AND(dx, 0x01ff);                /* ensure 0 .. 511 pdeg */
    SHL(ax, cl);                    /* *128 */
    SHL(dx, cl);                    /* *128 */
    XCHG(ax, dx);
    SUB(ax, dx);                    /* ang diff * 128 */
    CWD;                            /* ABSV ax */
    XOR(ax, dx);
    SUB(ax, dx);
    SHR(ax, cl);                    /* /128 */
    return m2c::RETF_(0, _state);
}

/* CalcNMiles - calc range in nautical miles
 * pass: dx, ax = range (ft)
 * ret : ax = range (nautical miles * 10)
 * kill: bx, cx, dx, flags
 * note: 1NM = 6076ft */
bool calcnmiles(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    SHL(ax, 1);                     /* *2 */
    RCL(dx, 1);
    bx = ax;
    cx = dx;
    SHL(ax, 1);                     /* *4 (*8) */
    RCL(dx, 1);
    SHL(ax, 1);
    RCL(dx, 1);
    ADD(ax, bx);                    /* *10 */
    ADC(dx, cx);

    bx = 6076;
    CMP(bx, dx);                    /* div ok? */
    if (CF || ZF) {                 /* no -> max range */
        ax = 9999;                  /* 999.9NM */
        return m2c::RETF_(0, _state);
    }
    DIV2(bx);
    CMP(dx, 6076/2);                /* round up? */
    if (!CF) {
        INC(ax);
    }
    return m2c::RETF_(0, _state);
}

/* CalcETA
 * pass: dx, ax = dist (ft)
 *       bx = speed (ft / sec * 8)
 * ret : ax = time (seconds)
 * kill: bx, dx, flags. */
bool calceta(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CMP(bx, 0);                     /* speed > 0? */
    if (ZF || (SF != OF)) goto maxtime;     /* jle -> no */
    SHR(bx, 1);                     /* /8 */
    SHR(bx, 1);
    SHR(bx, 1);
    CMP(bx, dx);                    /* div ok? */
    if (CF || ZF) goto maxtime;     /* no -> */
    DIV2(bx);
    CMP(ax, 3599);                  /* > max time? (MAX_TIME = 59:59) */
    if (!CF && !ZF) goto maxtime;   /* ja -> yes */
    return m2c::RETF_(0, _state);

maxtime:
    ax = 3599;
    return m2c::RETF_(0, _state);
}

/* CalcSlantRange (Euclidian distance)
 * pass: si -> object VIEWPOINT
 *       di -> target VIEWPOINT
 * ret : SlantRng = dx, ax = slant range (ft)
 *       SlantDx, SlantDy, SlantDz
 * kill: assume all (except ax, dx)
 *
 * Two methods: short range = sqrt(Dx^2 + Dy^2 + Dz^2) when all
 * abs(deltas) <= 32768; long range = max + med/4 + min/4 otherwise
 * (worst case error 13.4%, no overflow checks). */
bool calcslantrange(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    viewpoint* o = (viewpoint*)m2c::raddr_(ds, si);
    viewpoint* t = (viewpoint*)m2c::raddr_(ds, di);

    /* Dx = abs(x2 - x1); x = xsec * 16384 + xft + 8192 */
    int32_t x1 = ((int32_t)(int16_t)o->vp_xsec << 14) + (dw)(o->vp_xft + 8192);
    int32_t x2 = ((int32_t)(int16_t)t->vp_xsec << 14) + (dw)(t->vp_xft + 8192);
    int32_t dx32 = x2 - x1;
    slantdx = (dd)dx32;
    if (dx32 < 0) dx32 = -dx32;     /* NEG32 */

    /* Dy = abs(y2 - y1); y = -(ysec * 16384) + yft - 8192 */
    int32_t y1 = -((int32_t)(int16_t)o->vp_ysec << 14) + (int16_t)o->vp_yft - 8192;
    int32_t y2 = -((int32_t)(int16_t)t->vp_ysec << 14) + (int16_t)t->vp_yft - 8192;
    int32_t dy32 = y2 - y1;
    slantdy = (dd)dy32;
    if (dy32 < 0) dy32 = -dy32;

    /* Dz = abs(z2 - z1) */
    int32_t dz32 = (int32_t)t->vp_zft - (int32_t)o->vp_zft;
    slantdz = (dd)dz32;
    if (dz32 < 0) dz32 = -dz32;

    if (dx32 <= 32768 && dy32 <= 32768 && dz32 <= 32768) {
        /* short range = sqrt(Dx * Dx + Dy * Dy + Dz * Dz) */
        dd dxsq = (dd)dx32 * dx32, dysq = (dd)dy32 * dy32;
        dd lolo = (dxsq & 0xffff) + (dysq & 0xffff);
        bx = (dw)lolo;              /* killed regs at the Sqrt32 call */
        cx = (dw)((dxsq >> 16) + (dysq >> 16) + (lolo >> 16));
        si = (dw)dz32;
        di = (dw)(dz32 >> 16);
        bp = 32768;
        dd sum = dxsq + dysq + (dd)dz32 * dz32;
        ax = (dw)sum;
        dx = (dw)(sum >> 16);
        CALLF(sqrt32, 0);
        XOR(dx, dx);
        slantrng = ((dd)dx << 16) | ax;
        return m2c::RETF_(0, _state);
    }

    /* long range = max + med/4 + min/4 */
    dd mx = (dd)dx32, md = (dd)dy32, mn = (dd)dz32;
    dd tmp;
    if (mx < md) { tmp = mx; mx = md; md = tmp; }   /* dx:ax <-> cx:bx */
    if (mx < mn) { tmp = mx; mx = mn; mn = tmp; }   /* dx:ax <-> di:si */

    /* regs at SortOk2: dx:ax = max, cx:bx = med, di:si = min, bp = 32768 */
    ax = (dw)mx; dx = (dw)(mx >> 16);
    bx = (dw)md; cx = (dw)(md >> 16);
    si = (dw)mn; di = (dw)(mn >> 16);
    bp = 32768;

    /* med/4 and min/4 (32-bit logical shifts) */
    SHR(cx, 1); RCR(bx, 1);
    SHR(di, 1); RCR(si, 1);
    SHR(cx, 1); RCR(bx, 1);
    SHR(di, 1); RCR(si, 1);

    ADD(ax, bx);                    /* max + med/4 */
    ADC(dx, cx);
    ADD(ax, si);                    /* + min/4 — exit flags */
    ADC(dx, di);

    slantrng = ((dd)dx << 16) | ax;
    return m2c::RETF_(0, _state);
}

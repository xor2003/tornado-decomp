/* decomp_modellib.cpp — clean-C rewrites of TORNADO/MODELLIB procedures.
 *
 * Semantics from the authoritative TORNADO/MODELLIB.ASM source and its
 * original comments, verified against the lifted C++.  Each function is a
 * strong symbol overriding the weak lifted entry point for direct
 * CALL/CALLF sites; every proc is FAR so the body ends with RETF_(0),
 * consuming the caller's pushed return tag exactly like a far `ret`.
 *
 * Flag-affecting asm ops run through the real m2c macros so the exit flag
 * residue and killed-register contents match the original — the diff
 * harness compares result flags.
 */
#include "modellib.h"

/* LimitPFine - limit pitch angle (+90 .. 0 .. -90)
 * pass: ax = hdg, bx = pitch, cx = roll (0 .. 65535 fine pdegs),
 *       dx = pitch direction (0 = +ve, -1 = -ve)
 * ret : same; kill: flags. */
bool limitpfine(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CMP(bx, 128*128);               /* pitch <= 90 degs? */
    if (!(CF || ZF)) {
        CMP(bx, 384*128);           /* pitch >= -90 degs? */
        if (CF) {
            SUB(bx, 256*128);       /* flip pitch 180 degs */
            NEG(bx);                /* invert sign */
            SUB(ax, 256*128);       /* flip heading 180 degs */
            SUB(cx, 256*128);       /* flip roll 180 degs */
            NOT(dx);                /* flip pitch direction */
        }
    }
    return m2c::RETF_(0, _state);
}

/* LimitPitch - limit pitch angle (+90 .. 0 .. -90)
 * pass: ax = hdg, bx = pitch, cx = roll (0 .. 511 pdegs),
 *       dx = pitch direction (0 = +ve, -1 = -ve)
 * ret : same; kill: flags. */
bool limitpitch(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CMP(bx, 128);                   /* pitch <= 90 degs? */
    if (!(CF || ZF)) {
        CMP(bx, 384);               /* pitch >= -90 degs? */
        if (CF) {
            SUB(bx, 256);           /* flip pitch 180 degs */
            NEG(bx);                /* invert sign */
            AND(bx, 0x01ff);        /* (0 .. 511) */
            SUB(ax, 256);           /* flip heading 180 degs */
            AND(ax, 0x01ff);        /* (0 .. 511) */
            SUB(cx, 256);           /* flip roll 180 degs */
            AND(cx, 0x01ff);        /* (0 .. 511) */
            NOT(dx);                /* flip pitch direction */
        }
    }
    return m2c::RETF_(0, _state);
}

/* MoveViewpoint
 * pass: si -> VIEWPOINT data block
 *       dx, ax = x offset
 *       cx, bx = y offset
 * ret : VP_XSEC[si], VP_XFT[si], VP_YSEC[si], VP_YFT[si]
 * kill: assume all (except si)
 *
 * Straight-line code: the only observable flag residue is the final
 * `neg ax`, replayed through the real macros on the true pre-neg value. */
bool moveviewpoint(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF
    viewpoint* vp = (viewpoint*)m2c::raddr_(ds, si);

    /* linear xft = xsec * 16384 + xft + 8192;  + x offset (dx:ax) */
    int32_t linx = ((int32_t)(int16_t)vp->vp_xsec << 14)
                 + (dw)(vp->vp_xft + 8192)
                 + (int32_t)(((dd)dx << 16) | ax);
    vp->vp_xsec = (dw)(linx >> 14);
    vp->vp_xft  = (dw)((linx & 0x3fff) - 8192);

    /* linear yft = ysec * 16384 + (-yft + 8191);  - y offset (cx:bx) */
    int32_t liny = ((int32_t)(int16_t)vp->vp_ysec << 14)
                 + (dw)(-(int16_t)vp->vp_yft + 8191)
                 - (int32_t)(((dd)cx << 16) | bx);
    vp->vp_ysec = (dw)(liny >> 14);
    vp->vp_yft  = (dw)(-((liny & 0x3fff) - 8191));

    /* exit regs: bp = high word of lin<<2, di = low word, ax = result yft */
    bp = (dw)((dd)(liny << 2) >> 16);
    di = (dw)(liny << 2);
    ax = (dw)liny;
    AND(ax, 0x3fff);
    SUB(ax, 8191);
    NEG(ax);
    return m2c::RETF_(0, _state);
}

/* CalcSineFine - look up and interpolate sin(fine pdegs)
 * pass: ax = fine pdegs
 * ret : ax = sin(fine pdegs)
 * kill: assume all (except ax)
 * note: only valid for angles +90 .. -90 degs. */
bool calcsinefine(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    CWD;                            /* ABSV ax */
    XOR(ax, dx);                    /* 1s comp */
    SUB(ax, dx);                    /* 2s comp — ax = abs, dx = sign */

    bp = dx;                        /* store sign(frac) */
    dx = ax;                        /* store abs(frac) */
    cl = 7;                         /* prime for /128 */

    bx = ax;
    SHR(bx, cl);                    /* /128 */
    SHL(bx, 1);                     /* *2 word index */

    ax = *(dw*)(((db*)&sintable) + bx);

    AND(dx, 0x007f);                /* extract remaining bits */
    if (!ZF) {                      /* (traps PFine = 04000h case) */
        si = ax;
        ax = *(dw*)(((db*)&sintable) + bx + 2);
        SUB(ax, si);                /* ax = diff */
        MUL1_2(dx);
        SHR(ax, cl);                /* /128 */
        ADC(ax, si);                /* (1/2 bit round up) */
    }
    XOR(ax, bp);                    /* restore sign */
    SUB(ax, bp);
    return m2c::RETF_(0, _state);
}

/* CalcVias
 * pass: dx, ax = zft
 *       bp = vtas [*8]
 * ret : ax = vias [*8]
 * kill: bx, dx, flags. */
bool calcvias(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    /* sqrt(rho) tabulated 0 .. 70,000ft step 1,000ft */
    bx = 1000;
    DIV2(bx);
    CMP(ax, 70);
    if (!(CF || ZF)) {
        ax = 70;
    }
    bx = ax;
    SHL(bx, 1);
    ax = *(dw*)(((db*)&sqrtrhotable) + bx);

    /* vias = vtas * sqrt(rho) */
    IMUL1_2(bp);
    SHL(ax, 1);                     /* FRACADJ ax — *2 */
    RCL(dx, 1);
    SHL(ax, 1);                     /* 1/2 bit round up */
    ADC(dx, 0);
    ax = dx;
    return m2c::RETF_(0, _state);
}

/* CalcVkts
 * pass: ax = vias [*8]
 * ret : ax = vkts
 * kill: dx, flags.
 * vkts = vias [*8] / 1.7 * 8 = vias * 2409 / 32768 */
bool calcvkts(m2c::_offsets, m2c::_STATE* _state) {
    X86_REGREF

    dx = 2409;
    IMUL1_2(dx);
    SHL(ax, 1);                     /* FRACADJ ax — *2 */
    RCL(dx, 1);
    SHL(ax, 1);                     /* 1/2 bit round up */
    ADC(dx, 0);
    ax = dx;
    return m2c::RETF_(0, _state);
}

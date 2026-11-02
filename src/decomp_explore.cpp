/* decomp_explore.cpp — clean-C rewrites of TORNADO/EXPLORE procedures.
 * Semantics from the authoritative TORNADO/EXPLORE.ASM source. */

#include "explore.h"

/* CalcAngles — EXP_VIEW hdg/pitch/roll from X_*Fine / 128 (rounded,
 * masked to 9 bits) plus the matching SinTable/CosTable lookups.
 * kill: assume all */
bool calcangles(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return bordercheck(_i, _state);     /* dispatch-door forward */
    cl = 7;                                     /* /128 */
    /* VP_HDG = X_HFine / 128 */
    bx = x_hfine;
    SHR(bx, cl);
    ADC(bx, 0);                                 /* ROUNDUP bx */
    bx &= 0x1ff;
    exp_view.vp_hdg = bx;
    SHL(bx, 1);                                 /* *2 word index */
    ax = *((dw*)((db*)&sintable + bx));
    x_sinh = ax;
    ax = *((dw*)((db*)&costable + bx));
    x_cosh = ax;
    /* VP_PITCH = X_PFine / 128 */
    bx = x_pfine;
    SHR(bx, cl);
    ADC(bx, 0);                                 /* ROUNDUP bx */
    bx &= 0x1ff;
    exp_view.vp_pitch = bx;
    SHL(bx, 1);                                 /* *2 word index */
    ax = *((dw*)((db*)&sintable + bx));
    x_sinp = ax;
    ax = *((dw*)((db*)&costable + bx));
    x_cosp = ax;
    /* VP_ROLL = X_RFine / 128 */
    bx = x_rfine;
    SHR(bx, cl);
    ADC(bx, 0);                                 /* ROUNDUP bx */
    bx &= 0x1ff;
    exp_view.vp_roll = bx;
    SHL(bx, 1);                                 /* *2 word index */
    ax = *((dw*)((db*)&sintable + bx));
    x_sinr = ax;
    ax = *((dw*)((db*)&costable + bx));
    x_cosr = ax;
    return m2c::RETN_(0, _state);
}

/* UpdatePosn — pass ax = posn, bx = key state (bit0 inc, bit1 dec),
 * dx = rate; ret ax = new posn (washout when neither key, saturated
 * inc/dec).  kill: flags */
bool updateposn(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return bordercheck(_i, _state);     /* dispatch-door forward */
    CMP(bl, 2);                               /* inc key pressed only? */
    if ((db)bl == 2) goto incposn;              /* yes -> */
    CMP(bl, 1);                               /* dec key pressed only? */
    if ((db)bl == 1) goto decposn;              /* yes -> */
    /* washout position */
    bx = dx;
    /* ABSV ax — ax = abs(posn), dx = sign(posn) */
    CWD;
    XOR(ax, dx);
    SUB(ax, dx);
    SHL(bx, 1);                                 /* washout rate = 2*input */
    SUB(ax, bx);                                /* washout */
    if (!CF) goto washok;                       /* ok -> */
    XOR(ax, ax);                                /* washout to 0 */
washok:
    XOR(ax, dx);                                /* restore sign */
    SUB(ax, dx);
    return m2c::RETN_(0, _state);
incposn:
    /* increment position */
    ADD(ax, dx);                                /* posn = posn + rate */
    if (!OF) goto posnok;                       /* ok -> */
    ax = +32767;                                /* limit */
posnok:
    return m2c::RETN_(0, _state);
decposn:
    /* decrement position */
    SUB(ax, dx);                                /* posn = posn - rate */
    if (!OF) goto posnok2;                      /* ok -> */
    ax = -32768;                                /* limit */
posnok2:
    return m2c::RETN_(0, _state);
}

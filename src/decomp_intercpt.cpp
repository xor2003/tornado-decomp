// Clean-C rewrites of INTERCPT procedures. INTERCPT.ASM remains the
// authoritative source; these replace the generated lifted bodies one
// procedure at a time while preserving register/flag/data semantics.

#include "intercpt.h"

//* CalcIntercept - calculate intercept point
//*
//* pass: bx = object speed (ft/sec * 8) (assume > 0)
//*       cx = target speed (ft/sec * 8) (assume >= 0)
//*       dx, ax = target slant range
//*       si -> target viewpoint
//*       di -> result viewpoint
//* ret : result viewpoint
//* kill: assume all
bool calcintercept(m2c::_offsets _i, struct m2c::_STATE* _state)
{
    X86_REGREF

//-------------------------------------------
//* copy target viewpoint to result viewpoint
//-------------------------------------------
    PUSH(cx);
    PUSH(di);
    /* COPY_VP di,si : mov cx,VIEW_REC_SIZE/2 ; rep movsw (x2) */
    cx = 18/2;
    REP MOVSW;
    REP MOVSW;
    POP(si);            /* si -> result viewpoint */
    POP(cx);

//-----------------------------------------------
//* calc target move distance (tmod) (wrt object)
//-----------------------------------------------

//* tmod = range * (target speed / object speed)

//* scale range <= 32767
    XOR(bp, bp);

scale_rng_hi:
    /* @@: test dx,dx */
    TEST(dx, dx);
    if ((dx & dx) == 0) goto scale_rng_lo;
    SHR(dx, 1);
    RCR(ax, 1);
    INC(bp);
    goto scale_rng_hi;

scale_rng_lo:
    /* @@: cmp ax,32767 */
    CMP(ax, 32767);
    if ((dw)(ax) <= (dw)(32767)) goto range_ok;
    SHR(ax, 1);
    INC(bp);

range_ok:
    /* imul cx */
    IMUL1_2(cx);

//* guard against overflow
    SHL(ax, 1);
    RCL(dx, 1);
    /* cmp bx,dx ;overflow? */
    CMP(bx, dx);
    if ((dw)(bx) > (dw)(dx)) goto no_overflow;
    goto exitintercept;                 /* _JBE ExitIntercept */

no_overflow:
    SHR(dx, 1);
    RCR(ax, 1);
    IDIV2(bx);
    di = ax;                            /* di = tmod */

//-----------------------------------
//* calc unit vector of target motion
//-----------------------------------

//* unit vector target x = cos(target pitch) * sin(target hdg)
//*
//* unit vector target y = cos(target pitch) * cos(target hdg)
//*
//* unit vector target z = sin(target pitch)

    /* SINCOS bx,cx,[si].VP_PITCH ;bx = sin(pitch), cx = cos(pitch) */
    bx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_pitch)));
    AND(bx, 0x001ff);
    SHL(bx, 1);
    cx = *(dw*)(((db*)&costable)+bx);
    bx = *(dw*)(((db*)&sintable)+bx);

    unitvctrtgtz = bx;

    /* SINCOS ax,bx,[si].VP_HDG ;ax = sin(hdg), bx = cos(hdg) */
    bx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_hdg)));
    AND(bx, 0x001ff);
    SHL(bx, 1);
    ax = *(dw*)(((db*)&sintable)+bx);
    bx = *(dw*)(((db*)&costable)+bx);

    IMUL1_2(cx);
    /* FRACADJ dx */
    SHL(ax, 1);          /* *2 */
    RCL(dx, 1);
    SHL(ax, 1);          /* 1/2 bit round up */
    ADC(dx, 0);
    unitvctrtgtx = dx;

    ax = bx;
    IMUL1_2(cx);
    /* FRACADJ dx */
    SHL(ax, 1);
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    unitvctrtgty = dx;

//-----------------------------------------------------
//* project target motion vector to the intercept point
//-----------------------------------------------------

//* target z = target z + UnitVctrTgtZ * tmod
    ax = unitvctrtgtz;
    IMUL1_2(di);
    /* FRACADJ ax */
    SHL(ax, 1);
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    ax = dx;
    CWD;

    cx = bp;
    JCXZ(skipzscale);

zscale_loop:
    SHL(ax, 1);
    RCL(dx, 1);
    LOOP(zscale_loop);

skipzscale:
    ADD(*((dw*)raddr(ds,si+vp_zft_lo)), ax);
    ADC(*((dw*)raddr(ds,si+vp_zft_hi)), dx);
    /* jns @F ;above ground -> */
    if ((short)(*((dw*)raddr(ds,si+vp_zft_hi))) >= 0) goto above_gnd;

    m2c::setdata(&(*((dw*)raddr(ds,si+vp_zft_lo))), m2c::getdata(0));
    m2c::setdata(&(*((dw*)raddr(ds,si+vp_zft_hi))), m2c::getdata(0));

//* target x = target x + UnitVctrTgtX * tmod
//* target y = target y + UnitVctrTgtY * tmod
above_gnd:
    ax = unitvctrtgty;
    IMUL1_2(di);
    /* FRACADJ ax */
    SHL(ax, 1);
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    ax = dx;
    CWD;
    bx = ax;
    cx = dx;

    ax = unitvctrtgtx;
    IMUL1_2(di);
    /* FRACADJ ax */
    SHL(ax, 1);
    RCL(dx, 1);
    SHL(ax, 1);
    ADC(dx, 0);
    ax = dx;
    CWD;

    TEST(bp, bp);
    if ((bp & bp) == 0) goto skipxyscale;

xyscale_loop:
    SHL(ax, 1);
    RCL(dx, 1);
    SHL(bx, 1);
    RCL(cx, 1);
    DEC(bp);
    if (bp != 0) goto xyscale_loop;

skipxyscale:
    CALLF(moveviewpoint, 0);

exitintercept:
    return m2c::RETF_(0, _state);
}

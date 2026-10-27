/* THIS IS GENERATED FILE */

        
#include "vislib.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initvisual:
	// 817 
	// 0 ;* copy viewpoint data to V_VIEW data record
edummylabel1:
	// 4369 
	/* mov	di,OFFSET V_VIEW */
	di = m2c::near_offset_external(v_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 823 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(v_view););	// 824 						mov	di,OFFSET V_VIEW */
	// 825 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* calculate sector sub-division grid co-ords
	// 0 ;* XGrid1 = ((XFT / 256) + 32) = 0 .. 63
	/* mov	al,BYTE PTR V_VIEW.VP_XFT+1 */
	al = *(db*)(((db*)&v_view.vp_xft)+1);
	/* add	al,32 */
	ADD(al, 32);
	/* cbw */
	CBW;
	/* mov	XGrid1,ax	;current sector visual x grid (0 .. 63) */
	xgrid1 = ax;
	// 0 ;* XGrid2 = XGrid1 / 2 = 0 .. 31
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	XGrid2,ax	;3 by 3 sector visual x grid (0 .. 31) */
	xgrid2 = ax;
	// 0 ;* XGrid8 = XGrid1 / 8 = 0 .. 7
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	XGrid8,ax	;7 by 7 sector visual x grid (0 .. 7) */
	xgrid8 = ax;
	// 0 ;* XGrid16 = XGrid1 / 16 = 0 .. 3
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	XGrid16,ax	;15 by 15 sector visual x grid (0 .. 3) */
	xgrid16 = ax;
	// 0 ;* YGrid1 = ((YFT / 256) + 32) = 0 .. 63
	/* mov	al,BYTE PTR V_VIEW.VP_YFT+1 */
	al = *(db*)(((db*)&v_view.vp_yft)+1);
	/* add	al,32 */
	ADD(al, 32);
	/* cbw */
	CBW;
	/* mov	YGrid1,ax	;current sector visual y grid (0 .. 63) */
	ygrid1 = ax;
	// 0 ;* YGrid2 = YGrid1 / 2 = 0 .. 31
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	YGrid2,ax	;3 by 3 sector visual y grid (0 .. 31) */
	ygrid2 = ax;
	// 0 ;* YGrid8 = YGrid1 / 8 = 0 .. 7
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	YGrid8,ax	;7 by 7 sector visual y grid (0 .. 7) */
	ygrid8 = ax;
	// 0 ;* YGrid16 = YGrid1 / 16 = 0 .. 3
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	YGrid16,ax	;15 by 15 sector visual y grid (0 .. 3) */
	ygrid16 = ax;
	// 0 ;* scale ZFT > 10,000ft so max ZFT < 32,768ft
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* mov	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&v_view+vp_zft_hi));
	/* test	dx,dx		;zft > 65,535ft? */
	TEST(dx, dx);
	/* jnz	CalcZScaled	;yes -> */
	if ((dx & dx) != 0) {goto calczscaled;}
	/* cmp	ax,10000	;zft > 10,000ft? */
	CMP(ax, 10000);
	/* jbe	ZOk		;no -> */
	if ((dw)(ax) <= (dw)(10000)) {goto zok;}
	// 0 ;* z scaled = zft / 4 + 7,500
	// 0 ;*
	// 0 ;* @  10,000ft z scaled =  10,000 / 4 + 7,500 = 10,000
	// 0 ;* @ 100,000ft z scaled = 100,000 / 4 + 7,500 = 32,500
calczscaled:
	// 4371 
	/* add	ax,7500		;zft / 4 + 7,500 */
	ADD(ax, 7500);
zok:
	// 4373 
	/* ZOk:		mov	ZScaled,ax */
	zscaled = ax;
	// 0 ;* clear object distance sort arrays
	/* mov	ax,-1 */
	ax = -1;
	/* mov	cx,NUM_BINS */
	cx = 64+1;
	/* mov	di,OFFSET ObjectDist1 */
	di = m2c::near_offset_external(objectdist1);
	// 890 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* mov	ObjectDist2[BEHIND_BIN],ax */
	*(dw*)(((db*)&objectdist2)+0) = ax;
	/* mov	ObjectDist2[IN_FRONT_BIN],ax */
	*(dw*)(((db*)&objectdist2)+2) = ax;
	/* mov	ObjectDist3[BEHIND_BIN],ax */
	*(dw*)(((db*)&objectdist3)+0) = ax;
	/* mov	ObjectDist3[IN_FRONT_BIN],ax */
	*(dw*)(((db*)&objectdist3)+2) = ax;
	// 0 ;* clear far object distance sort array
	/* mov	cx,NUM_FAR_BINS */
	cx = 64+1;
	/* mov	di,OFFSET FarObjectDist */
	di = m2c::near_offset_external(farobjectdist);
	// 899 rep	stosw
	/* rep	stosw */
	REP STOSW;
	// 0 ;* reset object buffer pointer
	/* mov	ax,OFFSET ObjectBuffer */
	ax = m2c::near_offset_external(objectbuffer);
	/* mov	ObjectBufPtr,ax */
	objectbufptr = ax;
	// 0 ;* set rotated grid size to minimum size
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	XGridSize,ax */
	xgridsize = ax;
	/* mov	YGridSize,ax */
	ygridsize = ax;
	/* mov	ZGridSize,ax */
	zgridsize = ax;
	/* ret */
	RETN(0);
calcangles:
	// 924 
	// 0 ;* heading
edummylabel2:
	// 4375 
	/* mov	ax,V_VIEW.VP_HDG */
	ax = v_view.vp_hdg;
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	V_SinH,ax */
	v_sinh = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	V_CosH,ax */
	v_cosh = ax;
	// 0 ;* pitch
	/* mov	ax,V_VIEW.VP_PITCH */
	ax = v_view.vp_pitch;
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	V_SinP,ax */
	v_sinp = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	V_CosP,ax */
	v_cosp = ax;
	// 0 ;* roll
	/* mov	ax,V_VIEW.VP_ROLL */
	ax = v_view.vp_roll;
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	V_SinR,ax */
	v_sinr = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	V_CosR,ax */
	v_cosr = ax;
	/* ret */
	RETN(0);
calcafactors:
	// 969 
	/* mov	ax,V_CosR ;* kill: assume all */
	ax = v_cosr;
edummylabel3:
	// 4377 
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,V_CosH */
	ax = v_cosh;
	/* mov	si,ax */
	si = ax;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bx,dx */
	bx = dx;
	// 0 ;bx = cosH.cosR
	/* mov	ax,V_SinH */
	ax = v_sinh;
	/* mov	di,ax */
	di = ax;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;cx = sinH.cosR
	/* mov	ax,V_SinR */
	ax = v_sinr;
	/* mov	bp,ax */
	bp = ax;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	si,dx */
	si = dx;
	// 0 ;si = cosH.sinR
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	di,dx */
	di = dx;
	// 0 ;di = sinH.sinR
	/* mov	ax,V_SinP */
	ax = v_sinp;
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,di */
	ax = di;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = sinP.sinH.sinR
	/* add	ax,bx		;ax = sinP.sinH.sinR + cosH.cosR */
	ADD(ax, bx);
	/* mov	A1,ax */
	a1 = ax;
	/* mov	ax,si */
	ax = si;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = sinP.cosH.sinR
	/* sub	ax,cx		;ax = sinP.cosH.sinR - sinH.cosR */
	SUB(ax, cx);
	/* mov	A2,ax */
	a2 = ax;
	/* mov	ax,cx */
	ax = cx;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = sinP.sinH.cosR
	/* mov	ax,si */
	ax = si;
	/* sub	ax,dx		;ax = cosH.sinR - sinP.sinH.cosR */
	SUB(ax, dx);
	/* mov	A7,ax */
	a7 = ax;
	/* mov	ax,bx */
	ax = bx;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = sinP.cosH.cosR
	/* mov	ax,di */
	ax = di;
	/* neg	ax		;ax = -sinH.sinR */
	NEG(ax);
	/* sub	ax,dx		;ax = -sinH.sinR - sinP.cosH.cosR */
	SUB(ax, dx);
	/* mov	A8,ax */
	a8 = ax;
	/* mov	ax,V_CosP */
	ax = v_cosp;
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,V_SinR */
	ax = v_sinr;
	/* neg	ax		;ax = -sinR */
	NEG(ax);
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = -sinR.cosP
	/* mov	A3,ax */
	a3 = ax;
	/* mov	ax,V_SinH */
	ax = v_sinh;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = sinH.cosP
	/* mov	A4,ax */
	a4 = ax;
	/* mov	ax,V_CosH */
	ax = v_cosh;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = cosH.cosP
	/* mov	A5,ax */
	a5 = ax;
	/* mov	ax,V_CosR */
	ax = v_cosr;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = cosR.cosP
	/* mov	A9,ax */
	a9 = ax;
	/* mov	ax,V_SinP	;ax = sinP */
	ax = v_sinp;
	/* mov	A6,ax */
	a6 = ax;
	/* ret */
	RETN(0);
viscode_0_proc:
	// 1106 
fastbfactors:
	// 4379 
	// 0 ;* kill: assume all
	/* mov	cx,9 */
	cx = 9;
	/* mov	si,OFFSET A1 */
	si = m2c::near_offset_external(a1);
	/* mov	di,OFFSET B1 */
	di = m2c::near_offset_external(b1);
	// 1110 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* ret */
	RETN(0);
fastcfactors:
	// 4383 
	// 0 ;* kill: assume all
	/* mov	cx,9 */
	cx = 9;
	/* mov	si,OFFSET B1 */
	si = m2c::near_offset_external(b1);
	/* mov	di,OFFSET C1 */
	di = m2c::near_offset_external(c1);
	// 1274 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* ret */
	RETN(0);
fastdfactors:
	// 4387 
	// 0 ;* kill: assume all
	/* mov	cx,9 */
	cx = 9;
	/* mov	si,OFFSET C1 */
	si = m2c::near_offset_external(c1);
	/* mov	di,OFFSET D1 */
	di = m2c::near_offset_external(d1);
	// 1438 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* ret */
	RETN(0);
zerosctrsubdiv:
	// 4393 
	// 0 ;* kill: assume all
	/* mov	cx,129		;set all values to 0 */
	cx = 129;
	// 1638 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* ret */
	RETN(0);
zerosctrzsubdiv:
	// 4401 
	// 0 ;* note: Z sector grids are +4k step 256 only.
	/* mov	cx,17		;set all values to 0 */
	cx = 17;
	// 2840 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* ret */
	RETN(0);
zeroobjsubdiv:
	// 4423 
	// 0 ;* kill: assume all
	/* mov	cx,65		;set all values to 0 */
	cx = 65;
	// 3348 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* ret */
	RETN(0);
calcbfactors:
	// 1112 
	/* test	ax,ax		;hdg = 0? */
	TEST(ax, ax);
edummylabel4:
	// 4381 
	/* jz	FastBFactors	;yes -> */
	if (ZF) {goto fastbfactors;}
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;si = sin(hdg), di = cos(hdg)
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 1122 mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 1123 mov	di,CosTable[bx] */
	// 0 ;* B1 = A1.cos(hdg) - A2.sin(hdg)
	/* mov	ax,A1 */
	ax = a1;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,A2 */
	ax = a2;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_HDG */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_HDG */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	B1,ax */
	b1 = ax;
	// 0 ;* B2 = A1.sin(hdg) + A2.cos(hdg)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_HDG */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_HDG */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	B2,ax */
	b2 = ax;
	// 0 ;* B3 = A3
	/* mov	ax,A3 */
	ax = a3;
	/* mov	B3,ax */
	b3 = ax;
	// 0 ;* B4 = A4.cos(hdg) - A5.sin(hdg)
	/* mov	ax,A4 */
	ax = a4;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,A5 */
	ax = a5;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_HDG */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_HDG */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	B4,ax */
	b4 = ax;
	// 0 ;* B5 = A4.sin(hdg) + A5.cos(hdg)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_HDG */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_HDG */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	B5,ax */
	b5 = ax;
	// 0 ;* B6 = A6
	/* mov	ax,A6 */
	ax = a6;
	/* mov	B6,ax */
	b6 = ax;
	// 0 ;* B7 = A7.cos(hdg) - A8.sin(hdg)
	/* mov	ax,A7 */
	ax = a7;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,A8 */
	ax = a8;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_HDG */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_HDG */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	B7,ax */
	b7 = ax;
	// 0 ;* B8 = A7.sin(hdg) + A8.cos(hdg)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_HDG */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_HDG */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	B8,ax */
	b8 = ax;
	// 0 ;* B9 = A9
	/* mov	ax,A9 */
	ax = a9;
	/* mov	B9,ax */
	b9 = ax;
	/* ret */
	RETN(0);
calccfactors:
	// 1276 
	/* test	ax,ax		;pitch = 0? */
	TEST(ax, ax);
edummylabel5:
	// 4385 
	/* jz	FastCFactors	;yes -> */
	if (ZF) {goto fastcfactors;}
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;si = sin(pitch), di = cos(pitch)
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 1286 mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 1287 mov	di,CosTable[bx] */
	// 0 ;* C1 = B1
	/* mov	ax,B1 */
	ax = b1;
	/* mov	C1,ax */
	c1 = ax;
	// 0 ;* C2 = B2.cos(pitch) + B3.sin(pitch)
	/* mov	ax,B2 */
	ax = b2;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,B3 */
	ax = b3;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_PITCH */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_PITCH */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	C2,ax */
	c2 = ax;
	// 0 ;* C3 = -B2.sin(pitch) + B3.cos(pitch)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_PITCH */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_PITCH */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	C3,ax */
	c3 = ax;
	// 0 ;* C4 = B4
	/* mov	ax,B4 */
	ax = b4;
	/* mov	C4,ax */
	c4 = ax;
	// 0 ;* C5 = B5.cos(pitch) + B6.sin(pitch)
	/* mov	ax,B5 */
	ax = b5;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,B6 */
	ax = b6;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_PITCH */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_PITCH */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	C5,ax */
	c5 = ax;
	// 0 ;* C6 = -B5.sin(pitch) + B6.cos(pitch)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_PITCH */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_PITCH */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	C6,ax */
	c6 = ax;
	// 0 ;* C7 = B7
	/* mov	ax,B7 */
	ax = b7;
	/* mov	C7,ax */
	c7 = ax;
	// 0 ;* C8 = B8.cos(pitch) + B9.sin(pitch)
	/* mov	ax,B8 */
	ax = b8;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,B9 */
	ax = b9;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_PITCH */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_PITCH */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	C8,ax */
	c8 = ax;
	// 0 ;* C9 = -B8.sin(pitch) + B9.cos(pitch)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_PITCH */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_PITCH */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	C9,ax */
	c9 = ax;
	/* ret */
	RETN(0);
calcdfactors:
	// 1440 
	/* test	ax,ax		;roll = 0? */
	TEST(ax, ax);
edummylabel6:
	// 4389 
	/* jz	FastDFactors	;yes -> */
	if (ZF) {goto fastdfactors;}
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 1447 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 1448 						mov	di,CosTable[bx] */
	// 0 ;si = sin(roll), di = cos(roll)
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* D1 = C1.cos(roll) - C3.sin(roll)
	/* mov	ax,C1 */
	ax = c1;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,C3 */
	ax = c3;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_ROLL */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_ROLL */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	D1,ax */
	d1 = ax;
	// 0 ;* D2 = C2
	/* mov	ax,C2 */
	ax = c2;
	/* mov	D2,ax */
	d2 = ax;
	// 0 ;* D3 = C1.sin(roll) + C3.cos(roll)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_ROLL */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_ROLL */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	D3,ax */
	d3 = ax;
	// 0 ;* D4 = C4.cos(roll) - C6.sin(roll)
	/* mov	ax,C4 */
	ax = c4;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,C6 */
	ax = c6;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_ROLL */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_ROLL */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	D4,ax */
	d4 = ax;
	// 0 ;* D5 = C5
	/* mov	ax,C5 */
	ax = c5;
	/* mov	D5,ax */
	d5 = ax;
	// 0 ;* D6 = C4.sin(roll) + C6.cos(roll)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_ROLL */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_ROLL */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	D6,ax */
	d6 = ax;
	// 0 ;* D7 = C7.cos(roll) - C9.sin(roll)
	/* mov	ax,C7 */
	ax = c7;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,C9 */
	ax = c9;
	/* mov	cx,ax */
	cx = ax;
	/* imul	SIN_ROLL */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	COS_ROLL */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	D7,ax */
	d7 = ax;
	// 0 ;* D8 = C8
	/* mov	ax,C8 */
	ax = c8;
	/* mov	D8,ax */
	d8 = ax;
	// 0 ;* D9 = C7.sin(roll) + C9.cos(roll)
	/* mov	ax,bx */
	ax = bx;
	/* imul	SIN_ROLL */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,cx */
	ax = cx;
	/* imul	COS_ROLL */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	D9,ax */
	d9 = ax;
	/* ret */
	RETN(0);
calcsctrgrid:
	// 1597 
	/* mov	ax,A1 ;* kill: assume all */
	ax = a1;
edummylabel7:
	// 4391 
	/* mov	di,OFFSET XSX */
	di = m2c::near_offset_external(xsx);
	/* call	CalcSctrSubDiv */
	CALL(calcsctrsubdiv, 0);
	/* mov	ax,A2 */
	ax = a2;
	/* mov	di,OFFSET XSY */
	di = m2c::near_offset_external(xsy);
	/* call	CalcSctrSubDiv */
	CALL(calcsctrsubdiv, 0);
	/* mov	ax,A3 */
	ax = a3;
	/* mov	di,OFFSET XSZ */
	di = m2c::near_offset_external(xsz);
	/* call	CalcSctrZSubDiv */
	CALL(calcsctrzsubdiv, 0);
	/* mov	ax,A4 */
	ax = a4;
	/* mov	di,OFFSET YSX */
	di = m2c::near_offset_external(ysx);
	/* call	CalcSctrSubDiv */
	CALL(calcsctrsubdiv, 0);
	/* mov	ax,A5 */
	ax = a5;
	/* mov	di,OFFSET YSY */
	di = m2c::near_offset_external(ysy);
	/* call	CalcSctrSubDiv */
	CALL(calcsctrsubdiv, 0);
	/* mov	ax,A6 */
	ax = a6;
	/* mov	di,OFFSET YSZ */
	di = m2c::near_offset_external(ysz);
	/* call	CalcSctrZSubDiv */
	CALL(calcsctrzsubdiv, 0);
	/* mov	ax,A7 */
	ax = a7;
	/* mov	di,OFFSET ZSX */
	di = m2c::near_offset_external(zsx);
	/* call	CalcSctrSubDiv */
	CALL(calcsctrsubdiv, 0);
	/* mov	ax,A8 */
	ax = a8;
	/* mov	di,OFFSET ZSY */
	di = m2c::near_offset_external(zsy);
	/* call	CalcSctrSubDiv */
	CALL(calcsctrsubdiv, 0);
	/* mov	ax,A9 */
	ax = a9;
	/* mov	di,OFFSET ZSZ */
	di = m2c::near_offset_external(zsz);
	/* call	CalcSctrZSubDiv */
	CALL(calcsctrzsubdiv, 0);
	/* ret */
	RETN(0);
calcsctrsubdiv:
	// 1640 
	/* test	ax,ax */
	TEST(ax, ax);
edummylabel8:
	// 4395 
	/* jz	ZeroSctrSubDiv	;all values are zero -> */
	if (ZF) {goto zerosctrsubdiv;}
	/* jns	PosSctrSubDiv	;pos value -> */
	if (!SF) {goto possctrsubdiv;}
	/* jmp	NegSctrSubDiv	;neg value -> */
	goto negsctrsubdiv;
possctrsubdiv:
	// 4397 
	/* PosSctrSubDiv:	xor	dx,dx		;ax, dx = 65536 * value */
	XOR(dx, dx);
	/* shr	ax,1		;/2 for +/-16k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* mov	bx,ax		;bx, cx = 65536 * value / 2 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	cl,ch		;bx, cx = 65536 * value / 2 / 64 */
	cl = ch;
	/* mov	ch,bl */
	ch = bl;
	/* mov	bl,bh */
	bl = bh;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	cx,1 */
	SHL(cx, 1);
	/* rcl	bx,1 */
	RCL(bx, 1);
	/* shl	cx,1 */
	SHL(cx, 1);
	/* rcl	bx,1 */
	RCL(bx, 1);
	// 1658 MIDVAL		=	64*2
	// 1659 INDEX		=	64*2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(64*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(64*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1669 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(128-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(128-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1678 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(126-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(126-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1687 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(124-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(124-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1696 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(122-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(122-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1705 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(120-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(120-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1714 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(118-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(118-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1723 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(116-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(116-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1732 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(114-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(114-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1741 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(112-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(112-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1750 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(110-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(110-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1759 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(108-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(108-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1768 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(106-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(106-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1777 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(104-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(104-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1786 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(102-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(102-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1795 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(100-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(100-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1804 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(98-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(98-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1813 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(96-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(96-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1822 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(94-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(94-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1831 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(92-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(92-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1840 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(90-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(90-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1849 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(88-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(88-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1858 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(86-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(86-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1867 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(84-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(84-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1876 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(82-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(82-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1885 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(80-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(80-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1894 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(78-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(78-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1903 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(76-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(76-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1912 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(74-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(74-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1921 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(72-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(72-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1930 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(70-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(70-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1939 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(68-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(68-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1948 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(66-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(66-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1957 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1966 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1975 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1984 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 1993 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2002 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2011 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2020 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2029 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2038 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2047 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2056 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2065 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2074 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2083 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2092 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2101 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2110 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2119 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2128 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2137 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2146 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2155 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2164 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2173 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2182 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2191 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2200 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2209 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2218 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2227 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(4-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(4-2)))), m2c::getdata(ax));
	// 2233 INDEX		=	INDEX-2
	/* ret */
	RETN(0);
negsctrsubdiv:
	// 4399 
	/* NegSctrSubDiv:	neg	ax		;make positive */
	NEG(ax);
	/* xor	dx,dx		;ax, dx = 65536 * value */
	XOR(dx, dx);
	/* shr	ax,1		;/2 for +/-16k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* mov	bx,ax		;bx, cx = 65536 * value / 2 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	cl,ch		;bx, cx = 65536 * value / 2 / 64 */
	cl = ch;
	/* mov	ch,bl */
	ch = bl;
	/* mov	bl,bh */
	bl = bh;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	cx,1 */
	SHL(cx, 1);
	/* rcl	bx,1 */
	RCL(bx, 1);
	/* shl	cx,1 */
	SHL(cx, 1);
	/* rcl	bx,1 */
	RCL(bx, 1);
	// 2249 MIDVAL		=	64*2
	// 2250 INDEX		=	64*2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(64*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(64*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2260 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(128-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(128-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2269 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(126-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(126-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2278 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(124-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(124-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2287 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(122-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(122-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2296 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(120-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(120-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2305 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(118-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(118-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2314 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(116-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(116-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2323 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(114-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(114-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2332 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(112-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(112-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2341 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(110-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(110-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2350 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(108-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(108-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2359 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(106-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(106-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2368 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(104-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(104-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2377 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(102-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(102-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2386 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(100-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(100-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2395 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(98-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(98-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2404 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(96-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(96-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2413 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(94-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(94-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2422 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(92-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(92-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2431 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(90-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(90-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2440 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(88-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(88-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2449 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(86-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(86-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2458 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(84-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(84-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2467 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(82-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(82-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2476 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(80-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(80-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2485 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(78-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(78-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2494 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(76-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(76-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2503 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(74-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(74-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2512 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(72-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(72-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2521 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(70-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(70-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2530 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(68-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(68-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2539 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(66-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(66-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2548 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2557 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2566 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2575 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2584 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2593 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2602 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2611 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2620 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2629 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2638 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2647 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2656 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2665 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2674 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2683 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2692 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2701 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2710 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2719 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2728 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2737 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2746 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2755 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2764 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2773 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2782 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2791 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2800 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2809 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2818 INDEX		=	INDEX-2
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)-(4-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(64*2)+(4-2)))), m2c::getdata(ax));
	// 2824 INDEX		=	INDEX-2
	/* ret */
	RETN(0);
calcsctrzsubdiv:
	// 2842 
	/* test	ax,ax */
	TEST(ax, ax);
edummylabel9:
	// 4403 
	/* jz	ZeroSctrZSubDiv	;all values are zero -> */
	if (ZF) {goto zerosctrzsubdiv;}
	/* jns	PosSctrZSubDiv	;pos value -> */
	if (!SF) {goto possctrzsubdiv;}
	/* jmp	NegSctrZSubDiv	;neg value -> */
	goto negsctrzsubdiv;
possctrzsubdiv:
	// 4405 
	/* PosSctrZSubDiv:	xor	dx,dx		;ax, dx = 65536 * value */
	XOR(dx, dx);
	/* shr	ax,1		;/8 for +4k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1		;/8 for +4k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1		;/8 for +4k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* mov	bx,ax		;bx, cx = 65536 * value / 8 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	// 2866 INDEX		=	16*2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(16*2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2873 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2879 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(30-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2885 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(28-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2891 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(26-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2897 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(24-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2903 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(22-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2909 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(20-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2915 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(18-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2921 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(16-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2927 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(14-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2933 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(12-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2939 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(10-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2945 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(8-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2951 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(6-2)))), m2c::getdata(ax));
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 2957 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(4-2)))), m2c::getdata(ax));
	// 2961 INDEX		=	INDEX-2
	/* ret */
	RETN(0);
negsctrzsubdiv:
	// 4407 
	/* NegSctrZSubDiv:	neg	ax		;make positive */
	NEG(ax);
	/* xor	dx,dx		;ax, dx = 65536 * value */
	XOR(dx, dx);
	/* shr	ax,1		;/8 for +4k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1		;/8 for +4k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1		;/8 for +4k grid */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* mov	bx,ax		;bx, cx = 65536 * value / 8 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 		;bx, cx = 65536 * value / 8 / 16 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* not	dx */
	dx = ~dx;
	/* not	ax */
	ax = ~ax;
	/* add	dx,1 */
	ADD(dx, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 2988 INDEX		=	16*2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(16*2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 2995 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3001 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(30-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3007 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(28-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3013 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(26-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3019 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(24-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3025 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(22-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3031 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(20-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3037 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(18-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3043 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(16-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3049 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(14-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3055 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(12-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3061 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(10-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3067 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(8-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3073 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(6-2)))), m2c::getdata(ax));
	/* add	dx,cx */
	ADD(dx, cx);
	/* adc	ax,bx */
	ADC(ax, bx);
	// 3079 INDEX		=	INDEX-2
	/* mov	[di][INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(4-2)))), m2c::getdata(ax));
	// 3083 INDEX		=	INDEX-2
	/* ret */
	RETN(0);
calcobjgrid:
	// 3098 
	/* mov	ax,A1 ;* kill: assume all */
	ax = a1;
edummylabel10:
	// 4409 
	/* mov	di,OFFSET XGX */
	di = m2c::near_offset_external(xgx);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A2 */
	ax = a2;
	/* mov	di,OFFSET XGY */
	di = m2c::near_offset_external(xgy);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A3 */
	ax = a3;
	/* mov	di,OFFSET XGZ */
	di = m2c::near_offset_external(xgz);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A4 */
	ax = a4;
	/* mov	di,OFFSET YGX */
	di = m2c::near_offset_external(ygx);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A5 */
	ax = a5;
	/* mov	di,OFFSET YGY */
	di = m2c::near_offset_external(ygy);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A6 */
	ax = a6;
	/* mov	di,OFFSET YGZ */
	di = m2c::near_offset_external(ygz);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A7 */
	ax = a7;
	/* mov	di,OFFSET ZGX */
	di = m2c::near_offset_external(zgx);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A8 */
	ax = a8;
	/* mov	di,OFFSET ZGY */
	di = m2c::near_offset_external(zgy);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* mov	ax,A9 */
	ax = a9;
	/* mov	di,OFFSET ZGZ */
	di = m2c::near_offset_external(zgz);
	/* call	CalcObjSubDiv */
	CALL(calcobjsubdiv, 0);
	/* ret */
	RETN(0);
calcrotategrid1:
	// 3145 
	/* mov	ax,B1 ;*       R_ZGZ[] = ZGZ[] ) */
	ax = b1;
edummylabel11:
	// 4411 
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_XGX */
	di = m2c::near_offset_external(r_xgx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,B2 */
	ax = b2;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_XGY */
	di = m2c::near_offset_external(r_xgy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,B4 */
	ax = b4;
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_YGX */
	di = m2c::near_offset_external(r_ygx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,B5 */
	ax = b5;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_YGY */
	di = m2c::near_offset_external(r_ygy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,B7 */
	ax = b7;
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_ZGX */
	di = m2c::near_offset_external(r_zgx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,B8 */
	ax = b8;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_ZGY */
	di = m2c::near_offset_external(r_zgy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* ret */
	RETN(0);
calcrotategrid2:
	// 3185 
	/* mov	ax,C1 ;* kill: assume all */
	ax = c1;
edummylabel12:
	// 4413 
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_XGX */
	di = m2c::near_offset_external(r_xgx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C2 */
	ax = c2;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_XGY */
	di = m2c::near_offset_external(r_xgy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C3 */
	ax = c3;
	/* mov	si,ZGridSize */
	si = zgridsize;
	/* mov	di,OFFSET R_XGZ */
	di = m2c::near_offset_external(r_xgz);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C4 */
	ax = c4;
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_YGX */
	di = m2c::near_offset_external(r_ygx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C5 */
	ax = c5;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_YGY */
	di = m2c::near_offset_external(r_ygy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C6 */
	ax = c6;
	/* mov	si,ZGridSize */
	si = zgridsize;
	/* mov	di,OFFSET R_YGZ */
	di = m2c::near_offset_external(r_ygz);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C7 */
	ax = c7;
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_ZGX */
	di = m2c::near_offset_external(r_zgx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C8 */
	ax = c8;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_ZGY */
	di = m2c::near_offset_external(r_zgy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,C9 */
	ax = c9;
	/* mov	si,ZGridSize */
	si = zgridsize;
	/* mov	di,OFFSET R_ZGZ */
	di = m2c::near_offset_external(r_zgz);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* ret */
	RETN(0);
calcrotategrid3:
	// 3237 
	/* mov	ax,D1 ;* kill: assume all */
	ax = d1;
edummylabel13:
	// 4415 
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_XGX */
	di = m2c::near_offset_external(r_xgx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D2 */
	ax = d2;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_XGY */
	di = m2c::near_offset_external(r_xgy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D3 */
	ax = d3;
	/* mov	si,ZGridSize */
	si = zgridsize;
	/* mov	di,OFFSET R_XGZ */
	di = m2c::near_offset_external(r_xgz);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D4 */
	ax = d4;
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_YGX */
	di = m2c::near_offset_external(r_ygx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D5 */
	ax = d5;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_YGY */
	di = m2c::near_offset_external(r_ygy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D6 */
	ax = d6;
	/* mov	si,ZGridSize */
	si = zgridsize;
	/* mov	di,OFFSET R_YGZ */
	di = m2c::near_offset_external(r_ygz);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D7 */
	ax = d7;
	/* mov	si,XGridSize */
	si = xgridsize;
	/* mov	di,OFFSET R_ZGX */
	di = m2c::near_offset_external(r_zgx);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D8 */
	ax = d8;
	/* mov	si,YGridSize */
	si = ygridsize;
	/* mov	di,OFFSET R_ZGY */
	di = m2c::near_offset_external(r_zgy);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* mov	ax,D9 */
	ax = d9;
	/* mov	si,ZGridSize */
	si = zgridsize;
	/* mov	di,OFFSET R_ZGZ */
	di = m2c::near_offset_external(r_zgz);
	/* call	CalcObjVSubDiv */
	CALL(calcobjvsubdiv, 0);
	/* ret */
	RETN(0);
calcobjvsubdiv:
	// 3286 
	/* test	ax,ax ;* kill: assume all */
	TEST(ax, ax);
edummylabel14:
	// 4417 
	/* js	NegObjVSubDiv	;neg value -> */
	if (SF) {goto negobjvsubdiv;}
posobjvsubdiv:
	// 4419 
	/* PosObjVSubDiv:	mov	ch,al		;bx, cx = 65536 * value / 64 / 32 */
	ch = al;
	/* xor	cl,cl */
	XOR(cl, cl);
	/* mov	bl,ah */
	bl = ah;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* mul	si		;dx, ax = value * grid size */
	MUL1_2(si);
	/* mov	dh,al		;ax, dx = (65536 * value) * (grid size / 32) / 64 */
	dh = al;
	/* mov	al,ah */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
__disp=*(dw*)(((db*)&calcpossubdiv)+si);
	/* jmp	CalcPosSubDiv[si] */
	J(return __dispatch_call_ext(__disp, _state));
negobjvsubdiv:
	// 4421 
	/* NegObjVSubDiv:	neg	ax		;make positive */
	NEG(ax);
	/* mov	ch,al		;bx, cx = 65536 * value / 64 / 32 */
	ch = al;
	/* xor	cl,cl */
	XOR(cl, cl);
	/* mov	bl,ah */
	bl = ah;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* mul	si		;dx, ax = value * grid size */
	MUL1_2(si);
	/* mov	dh,al		;ax, dx = (65536 * value) * (grid size / 32) / 64 */
	dh = al;
	/* mov	al,ah */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
__disp=*(dw*)(((db*)&calcnegsubdiv)+si);
	/* jmp	CalcNegSubDiv[si] */
	J(return __dispatch_call_ext(__disp, _state));
calcobjsubdiv:
	// 3350 
	/* test	ax,ax */
	TEST(ax, ax);
edummylabel15:
	// 4425 
	/* jz	ZeroObjSubDiv	;all values are zero -> */
	if (ZF) {goto zeroobjsubdiv;}
	/* jns	PosObjSubDiv	;pos value -> */
	if (!SF) {goto posobjsubdiv;}
	/* jmp	NegObjSubDiv	;neg value -> */
	goto negobjsubdiv;
posobjsubdiv:
	// 4427 
	/* PosObjSubDiv:	mov	dh,al		;ax, dx = 65536 * value / 256 */
	dh = al;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	al,ah */
	al = ah;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bx,ax		;bx, cx = 65536 * value / 256 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	// 3373 MIDVAL		=	32*2
	// 3374 INDEX		=	32*2
	// 3375 COUNT		=	32
possubdiv32:
	// 4429 
	/* PosSubDiv32:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(32*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(32*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3387 INDEX		=	INDEX-2
possubdiv31:
	// 4431 
	/* PosSubDiv31:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3397 INDEX		=	INDEX-2
possubdiv30:
	// 4433 
	/* PosSubDiv30:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3407 INDEX		=	INDEX-2
possubdiv29:
	// 4435 
	/* PosSubDiv29:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3417 INDEX		=	INDEX-2
possubdiv28:
	// 4437 
	/* PosSubDiv28:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3427 INDEX		=	INDEX-2
possubdiv27:
	// 4439 
	/* PosSubDiv27:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3437 INDEX		=	INDEX-2
possubdiv26:
	// 4441 
	/* PosSubDiv26:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3447 INDEX		=	INDEX-2
possubdiv25:
	// 4443 
	/* PosSubDiv25:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3457 INDEX		=	INDEX-2
possubdiv24:
	// 4445 
	/* PosSubDiv24:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3467 INDEX		=	INDEX-2
possubdiv23:
	// 4447 
	/* PosSubDiv23:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3477 INDEX		=	INDEX-2
possubdiv22:
	// 4449 
	/* PosSubDiv22:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3487 INDEX		=	INDEX-2
possubdiv21:
	// 4451 
	/* PosSubDiv21:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3497 INDEX		=	INDEX-2
possubdiv20:
	// 4453 
	/* PosSubDiv20:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3507 INDEX		=	INDEX-2
possubdiv19:
	// 4455 
	/* PosSubDiv19:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3517 INDEX		=	INDEX-2
possubdiv18:
	// 4457 
	/* PosSubDiv18:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3527 INDEX		=	INDEX-2
possubdiv17:
	// 4459 
	/* PosSubDiv17:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3537 INDEX		=	INDEX-2
possubdiv16:
	// 4461 
	/* PosSubDiv16:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3547 INDEX		=	INDEX-2
possubdiv15:
	// 4463 
	/* PosSubDiv15:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3557 INDEX		=	INDEX-2
possubdiv14:
	// 4465 
	/* PosSubDiv14:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3567 INDEX		=	INDEX-2
possubdiv13:
	// 4467 
	/* PosSubDiv13:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3577 INDEX		=	INDEX-2
possubdiv12:
	// 4469 
	/* PosSubDiv12:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3587 INDEX		=	INDEX-2
possubdiv11:
	// 4471 
	/* PosSubDiv11:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3597 INDEX		=	INDEX-2
possubdiv10:
	// 4473 
	/* PosSubDiv10:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3607 INDEX		=	INDEX-2
possubdiv9:
	// 4475 
	/* PosSubDiv9:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3617 INDEX		=	INDEX-2
possubdiv8:
	// 4477 
	/* PosSubDiv8:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3627 INDEX		=	INDEX-2
possubdiv7:
	// 4479 
	/* PosSubDiv7:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3637 INDEX		=	INDEX-2
possubdiv6:
	// 4481 
	/* PosSubDiv6:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3647 INDEX		=	INDEX-2
possubdiv5:
	// 4483 
	/* PosSubDiv5:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3657 INDEX		=	INDEX-2
possubdiv4:
	// 4485 
	/* PosSubDiv4:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3667 INDEX		=	INDEX-2
possubdiv3:
	// 4487 
	/* PosSubDiv3:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3677 INDEX		=	INDEX-2
possubdiv2:
	// 4489 
	/* PosSubDiv2:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3687 INDEX		=	INDEX-2
possubdiv1:
	// 4491 
	/* PosSubDiv1:	mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(4-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(4-2)))), m2c::getdata(ax));
	// 3694 INDEX		=	INDEX-2
possubdiv0:
	// 4493 
	/* PosSubDiv0:	ret */
	RETN(0);
negobjsubdiv:
	// 4495 
	/* NegObjSubDiv:	neg	ax		;make positive */
	NEG(ax);
	/* mov	dh,al		;ax, dx = 65536 * value / 256 */
	dh = al;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	al,ah */
	al = ah;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bx,ax		;bx, cx = 65536 * value / 256 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	// 3715 MIDVAL		=	32*2
	// 3716 INDEX		=	32*2
	// 3717 COUNT		=	32
negsubdiv32:
	// 4497 
	/* NegSubDiv32:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(32*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(32*2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3729 INDEX		=	INDEX-2
negsubdiv31:
	// 4499 
	/* NegSubDiv31:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(64-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3739 INDEX		=	INDEX-2
negsubdiv30:
	// 4501 
	/* NegSubDiv30:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(62-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3749 INDEX		=	INDEX-2
negsubdiv29:
	// 4503 
	/* NegSubDiv29:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(60-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3759 INDEX		=	INDEX-2
negsubdiv28:
	// 4505 
	/* NegSubDiv28:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(58-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3769 INDEX		=	INDEX-2
negsubdiv27:
	// 4507 
	/* NegSubDiv27:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(56-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3779 INDEX		=	INDEX-2
negsubdiv26:
	// 4509 
	/* NegSubDiv26:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(54-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3789 INDEX		=	INDEX-2
negsubdiv25:
	// 4511 
	/* NegSubDiv25:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(52-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3799 INDEX		=	INDEX-2
negsubdiv24:
	// 4513 
	/* NegSubDiv24:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(50-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3809 INDEX		=	INDEX-2
negsubdiv23:
	// 4515 
	/* NegSubDiv23:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(48-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3819 INDEX		=	INDEX-2
negsubdiv22:
	// 4517 
	/* NegSubDiv22:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(46-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3829 INDEX		=	INDEX-2
negsubdiv21:
	// 4519 
	/* NegSubDiv21:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(44-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3839 INDEX		=	INDEX-2
negsubdiv20:
	// 4521 
	/* NegSubDiv20:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(42-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3849 INDEX		=	INDEX-2
negsubdiv19:
	// 4523 
	/* NegSubDiv19:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(40-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3859 INDEX		=	INDEX-2
negsubdiv18:
	// 4525 
	/* NegSubDiv18:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(38-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3869 INDEX		=	INDEX-2
negsubdiv17:
	// 4527 
	/* NegSubDiv17:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(36-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3879 INDEX		=	INDEX-2
negsubdiv16:
	// 4529 
	/* NegSubDiv16:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(34-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3889 INDEX		=	INDEX-2
negsubdiv15:
	// 4531 
	/* NegSubDiv15:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(32-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3899 INDEX		=	INDEX-2
negsubdiv14:
	// 4533 
	/* NegSubDiv14:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(30-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3909 INDEX		=	INDEX-2
negsubdiv13:
	// 4535 
	/* NegSubDiv13:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(28-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3919 INDEX		=	INDEX-2
negsubdiv12:
	// 4537 
	/* NegSubDiv12:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(26-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3929 INDEX		=	INDEX-2
negsubdiv11:
	// 4539 
	/* NegSubDiv11:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(24-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3939 INDEX		=	INDEX-2
negsubdiv10:
	// 4541 
	/* NegSubDiv10:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(22-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3949 INDEX		=	INDEX-2
negsubdiv9:
	// 4543 
	/* NegSubDiv9:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(20-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3959 INDEX		=	INDEX-2
negsubdiv8:
	// 4545 
	/* NegSubDiv8:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(18-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3969 INDEX		=	INDEX-2
negsubdiv7:
	// 4547 
	/* NegSubDiv7:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(16-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3979 INDEX		=	INDEX-2
negsubdiv6:
	// 4549 
	/* NegSubDiv6:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(14-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3989 INDEX		=	INDEX-2
negsubdiv5:
	// 4551 
	/* NegSubDiv5:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(12-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 3999 INDEX		=	INDEX-2
negsubdiv4:
	// 4553 
	/* NegSubDiv4:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(10-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 4009 INDEX		=	INDEX-2
negsubdiv3:
	// 4555 
	/* NegSubDiv3:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(8-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 4019 INDEX		=	INDEX-2
negsubdiv2:
	// 4557 
	/* NegSubDiv2:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(6-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* sbb	ax,bx */
	SBB(ax, bx);
	// 4029 INDEX		=	INDEX-2
negsubdiv1:
	// 4559 
	/* NegSubDiv1:	mov	[di][MIDVAL-INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)-(4-2)))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	[di][MIDVAL+INDEX],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,di+(32*2)+(4-2)))), m2c::getdata(ax));
	// 4036 INDEX		=	INDEX-2
negsubdiv0:
	// 4561 
	/* NegSubDiv0:	ret */
	RETN(0);
calcsctroffsets:
	// 4062 
	// 0 ;-----------------------
	// 0 ;* current sector visual (including values for overscaled objects)
	// 0 ;-----------------------
edummylabel16:
	// 4563 
	/* xor	al,al	 	;clear all valid flags */
	XOR(al, al);
	/* mov	Valid1_2,al */
	valid1_2 = al;
	/* mov	Valid1_4,al */
	valid1_4 = al;
	/* mov	Valid1_8,al */
	valid1_8 = al;
	/* mov	Valid1_16,al */
	valid1_16 = al;
	/* mov	ax,ZScaled */
	ax = zscaled;
	/* mov	bp,ax */
	bp = ax;
	/* neg	ax */
	NEG(ax);
	/* mov	ZRel1,ax */
	zrel1 = ax;
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,V_VIEW.VP_YFT */
	ax = v_view.vp_yft;
	/* and	ax,000ffh	;256 sub-div */
	AND(ax, 0x000ff);
	/* neg	ax */
	NEG(ax);
	/* mov	YRel1,ax */
	yrel1 = ax;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,V_VIEW.VP_XFT */
	ax = v_view.vp_xft;
	/* and	ax,000ffh	;256 sub-div */
	AND(ax, 0x000ff);
	/* neg	ax */
	NEG(ax);
	/* mov	XRel1,ax */
	xrel1 = ax;
	/* xor	si,si		;reset index */
	XOR(si, si);
	/* cmp	bp,MAX_RANGE16	;zft in range for 16 * overscaled values? */
	CMP(bp, 1024);
	/* jb	ScaleSwitch	;yes -> */
	if ((dw)(bp) < (dw)(1024)) {goto scaleswitch;}
	/* add	si,2 */
	ADD(si, 2);
	/* cmp	bp,MAX_RANGE8	;zft in range for 8 * overscaled values? */
	CMP(bp, 2048);
	/* jb	ScaleSwitch	;yes -> */
	if ((dw)(bp) < (dw)(2048)) {goto scaleswitch;}
	/* add	si,2 */
	ADD(si, 2);
	/* cmp	bp,MAX_RANGE4	;zft in range for 4 * overscaled values? */
	CMP(bp, 4096);
	/* jb	ScaleSwitch	;yes -> */
	if ((dw)(bp) < (dw)(4096)) {goto scaleswitch;}
	/* add	si,2 */
	ADD(si, 2);
	/* cmp	bp,MAX_RANGE2	;zft in range for 2 * overscaled values? */
	CMP(bp, 8192);
	/* jb	ScaleSwitch	;yes -> */
	if ((dw)(bp) < (dw)(8192)) {goto scaleswitch;}
	/* add	si,2 */
	ADD(si, 2);
scaleswitch:
	// 4565 
__disp=*(dw*)(((db*)&calcscale)+si);
	/* ScaleSwitch:	jmp	CalcScale[si] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;* calc values for all scales up to * 16 overscaled
calcscale16:
	// 4567 
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* jmp	StoreScale16 */
	goto storescale16;
	// 0 ;* calc values for all scales up to * 8 overscaled
calcscale8:
	// 4569 
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* jmp	StoreScale8 */
	goto storescale8;
	// 0 ;* calc values for all scales up to * 4 overscaled
calcscale4:
	// 4571 
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* jmp	StoreScale4 */
	goto storescale4;
	// 0 ;* calc values for all scales up to * 2 overscaled
calcscale2:
	// 4573 
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* jmp	StoreScale2 */
	goto storescale2;
	// 0 ;* calc values for normal scaling only
calcscale1:
	// 4575 
	/* CalcScale1: 	call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* jmp	StoreScale1 */
	goto storescale1;
storescale16:
	// 4577 
	/* StoreScale16:	mov	XE01_16,ax */
	xe01_16 = ax;
	/* mov	YE01_16,bx */
	ye01_16 = bx;
	/* mov	ZE01_16,cx */
	ze01_16 = cx;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	bx,1 */
	SAR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* mov	Valid1_16,1	;set valid flag */
	valid1_16 = 1;
storescale8:
	// 4579 
	/* StoreScale8:	mov	XE01_8,ax */
	xe01_8 = ax;
	/* mov	YE01_8,bx */
	ye01_8 = bx;
	/* mov	ZE01_8,cx */
	ze01_8 = cx;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	bx,1 */
	SAR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* mov	Valid1_8,1	;set valid flag */
	valid1_8 = 1;
storescale4:
	// 4581 
	/* StoreScale4:	mov	XE01_4,ax */
	xe01_4 = ax;
	/* mov	YE01_4,bx */
	ye01_4 = bx;
	/* mov	ZE01_4,cx */
	ze01_4 = cx;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	bx,1 */
	SAR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* mov	Valid1_4,1	;set valid flag */
	valid1_4 = 1;
storescale2:
	// 4583 
	/* StoreScale2:	mov	XE01_2,ax */
	xe01_2 = ax;
	/* mov	YE01_2,bx */
	ye01_2 = bx;
	/* mov	ZE01_2,cx */
	ze01_2 = cx;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	bx,1 */
	SAR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* mov	Valid1_2,1	;set valid flag */
	valid1_2 = 1;
storescale1:
	// 4585 
	/* StoreScale1:	mov	XE01,ax */
	xe01 = ax;
	/* mov	YE01,bx */
	ye01 = bx;
	/* mov	ZE01,cx */
	ze01 = cx;
	// 0 ;----------------------
	// 0 ;* 3 by 3 sector visual
	// 0 ;----------------------
	/* mov	ax,ZScaled */
	ax = zscaled;
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	ZRel2,ax */
	zrel2 = ax;
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,V_VIEW.VP_YFT */
	ax = v_view.vp_yft;
	/* and	ax,001ffh	;512 sub-div */
	AND(ax, 0x001ff);
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	YRel2,ax */
	yrel2 = ax;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,V_VIEW.VP_XFT */
	ax = v_view.vp_xft;
	/* and	ax,001ffh	;512 sub-div */
	AND(ax, 0x001ff);
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	XRel2,ax */
	xrel2 = ax;
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	XE02,ax */
	xe02 = ax;
	/* mov	YE02,bx */
	ye02 = bx;
	/* mov	ZE02,cx */
	ze02 = cx;
	// 0 ;----------------------
	// 0 ;* 7 by 7 sector visual
	// 0 ;----------------------
	/* mov	ax,ZScaled */
	ax = zscaled;
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	ZRel8,ax */
	zrel8 = ax;
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,V_VIEW.VP_YFT */
	ax = v_view.vp_yft;
	/* and	ax,007ffh	;2048 sub-div */
	AND(ax, 0x007ff);
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	YRel8,ax */
	yrel8 = ax;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,V_VIEW.VP_XFT */
	ax = v_view.vp_xft;
	/* and	ax,007ffh	;2048 sub-div */
	AND(ax, 0x007ff);
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	XRel8,ax */
	xrel8 = ax;
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	XE08,ax */
	xe08 = ax;
	/* mov	YE08,bx */
	ye08 = bx;
	/* mov	ZE08,cx */
	ze08 = cx;
	// 0 ;------------------------
	// 0 ;* 15 by 15 sector visual
	// 0 ;------------------------
	/* mov	ax,ZScaled */
	ax = zscaled;
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	ZRel16,ax */
	zrel16 = ax;
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,V_VIEW.VP_YFT */
	ax = v_view.vp_yft;
	/* and	ax,00fffh	;4096 sub-div */
	AND(ax, 0x00fff);
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	YRel16,ax */
	yrel16 = ax;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,V_VIEW.VP_XFT */
	ax = v_view.vp_xft;
	/* and	ax,00fffh	;4096 sub-div */
	AND(ax, 0x00fff);
	/* neg	ax */
	NEG(ax);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	XRel16,ax */
	xrel16 = ax;
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	XE016,ax */
	xe016 = ax;
	/* mov	YE016,bx */
	ye016 = bx;
	/* mov	ZE016,cx */
	ze016 = cx;
	/* ret */
	RETN(0);
calceyeposition:
	// 4272 
	/* mov	si,ax ;* kill: dx, si, di, bp, flags */
	si = ax;
edummylabel17:
	// 4587 
	/* mov	di,bx */
	di = bx;
	/* push	cx */
	PUSH(cx);
	/* mov	ax,A1 */
	ax = a1;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,dx */
	bp = dx;
	// 0 ;bp = A1.x rel
	/* mov	ax,A4 */
	ax = a4;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bx,dx */
	bx = dx;
	// 0 ;bx = A4.x rel
	/* mov 	ax,A7 */
	ax = a7;
	/* imul 	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;cx = A7.x rel
	/* mov	ax,A2 */
	ax = a2;
	/* imul 	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* add 	bp,dx		;bp = A1.x rel + A2.y rel */
	ADD(bp, dx);
	/* mov	ax,A5 */
	ax = a5;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* add	bx,dx		;bx = A4.x rel + A5.y rel */
	ADD(bx, dx);
	/* mov	ax,A8 */
	ax = a8;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* add	cx,dx		;cx = A7.x rel + A8.y rel */
	ADD(cx, dx);
	/* pop	si */
	POP(si);
	/* mov	ax,A6 */
	ax = a6;
	/* imul 	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* add	bx,dx		;bx = A4.x rel + A5.y rel + A6.z rel */
	ADD(bx, dx);
	/* mov	ax,A9 */
	ax = a9;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* add	cx,dx		;cx = A7.x rel + A8.y rel + A9.z rel */
	ADD(cx, dx);
	/* mov	ax,A3 */
	ax = a3;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,bp		;ax = A1.x rel + A2.y rel + A3.z rel */
	ADD(ax, bp);
	/* ret */
	RETN(0);
rotateview:
	// 4354 
	/* mov	bx,ViewRotateMode ;* kill: assume all */
	bx = viewrotatemode;
edummylabel18:
	// 4589 
__disp=*(dw*)(((db*)&rotateswitch)+bx);
	/* jmp	RotateSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
rotatenull:
	// 4591 
	// 0 ;---------------------------
	/* ret */
	RETN(0);
	// 0 ;---------------------------
rotateviewrt:
	// 4593 
	// 0 ;---------------------------
	// 0 ;* xe = -ye
	// 0 ;* ye = xe
	/* mov	ax,A4 */
	ax = a4;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A1 */
	XCHG(ax, a1);
	/* mov	A4,ax */
	a4 = ax;
	/* mov	ax,A5 */
	ax = a5;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A2 */
	XCHG(ax, a2);
	/* mov	A5,ax */
	a5 = ax;
	/* mov	ax,A6 */
	ax = a6;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A3 */
	XCHG(ax, a3);
	/* mov	A6,ax */
	a6 = ax;
	/* jmp	ContRotate */
	goto controtate;
	// 0 ;---------------------------
rotateviewlt:
	// 4595 
	// 0 ;---------------------------
	// 0 ;* xe = ye
	// 0 ;* ye = -xe
	/* mov	ax,A1 */
	ax = a1;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A4 */
	XCHG(ax, a4);
	/* mov	A1,ax */
	a1 = ax;
	/* mov	ax,A2 */
	ax = a2;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A5 */
	XCHG(ax, a5);
	/* mov	A2,ax */
	a2 = ax;
	/* mov	ax,A3 */
	ax = a3;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A6 */
	XCHG(ax, a6);
	/* mov	A3,ax */
	a3 = ax;
	/* jmp	ContRotate */
	goto controtate;
	// 0 ;---------------------------
rotateviewup:
	// 4597 
	// 0 ;---------------------------
	// 0 ;* A4 = A4.cos(45) + A7.sin(45)
	// 0 ;* A7 = A7.cos(45) - A4.sin(45)
	/* mov	ax,A4 */
	ax = a4;
	/* mov	dx,23170 */
	dx = 23170;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;cx = A4.sin(45) = A4.cos(45)
	/* mov	ax,A7 */
	ax = a7;
	/* mov	dx,23170 */
	dx = 23170;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = A7.sin(45) = A7.cos(45)
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	A4,ax */
	a4 = ax;
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mov	A7,dx */
	a7 = dx;
	// 0 ;* A5 = A5.cos(45) + A8.sin(45)
	// 0 ;* A8 = A8.cos(45) - A5.sin(45)
	/* mov	ax,A5 */
	ax = a5;
	/* mov	dx,23170 */
	dx = 23170;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;cx = A5.sin(45) = A5.cos(45)
	/* mov	ax,A8 */
	ax = a8;
	/* mov	dx,23170 */
	dx = 23170;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = A8.sin(45) = A8.cos(45)
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	A5,ax */
	a5 = ax;
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mov	A8,dx */
	a8 = dx;
	// 0 ;* A6 = A6.cos(45) + A9.sin(45)
	// 0 ;* A9 = A9.cos(45) - A6.sin(45)
	/* mov	ax,A6 */
	ax = a6;
	/* mov	dx,23170 */
	dx = 23170;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;cx = A6.sin(45) = A6.cos(45)
	/* mov	ax,A9 */
	ax = a9;
	/* mov	dx,23170 */
	dx = 23170;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = A9.sin(45) = A9.cos(45)
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	A6,ax */
	a6 = ax;
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mov	A9,dx */
	a9 = dx;
	// 0 ;* new hdg = arctan360(A4 / A5)
	/* mov	cx,A4 */
	cx = a4;
	/* mov	dx,A5 */
	dx = a5;
	/* call	ArcTan360 */
	CALLF(arctan360, 0);
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	V_VIEW.VP_HDG,ax */
	v_view.vp_hdg = ax;
	/* jmp	ContRotate */
	goto controtate;
	// 0 ;---------------------------
rotateviewdn:
	// 4599 
	// 0 ;---------------------------
	// 0 ;* ye = -ze
	// 0 ;* ze = ye
	/* mov	ax,A7 */
	ax = a7;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A4 */
	XCHG(ax, a4);
	/* mov	A7,ax */
	a7 = ax;
	/* mov	ax,A8 */
	ax = a8;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A5 */
	XCHG(ax, a5);
	/* mov	A8,ax */
	a8 = ax;
	/* mov	ax,A9 */
	ax = a9;
	/* neg	ax */
	NEG(ax);
	/* xchg	ax,A6 */
	XCHG(ax, a6);
	/* mov	A9,ax */
	a9 = ax;
	/* jmp	ContRotate */
	goto controtate;
	// 0 ;---------------------------
rotateviewbk:
	// 4601 
	// 0 ;---------------------------
	// 0 ;* xe = -xe
	/* neg	A1 */
	NEG(a1);
	/* neg	A2 */
	NEG(a2);
	/* neg	A3 */
	NEG(a3);
	// 0 ;* ye = -ye
	/* neg	A4 */
	NEG(a4);
	/* neg	A5 */
	NEG(a5);
	/* neg	A6 */
	NEG(a6);
	// 0 ;* roll = -roll
	/* mov	ax,V_VIEW.VP_ROLL */
	ax = v_view.vp_roll;
	/* neg	ax */
	NEG(ax);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	V_VIEW.VP_ROLL,ax */
	v_view.vp_roll = ax;
	// 0 ;* pitch = -pitch
	/* mov	ax,V_VIEW.VP_PITCH */
	ax = v_view.vp_pitch;
	/* neg	ax */
	NEG(ax);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	V_VIEW.VP_PITCH,ax */
	v_view.vp_pitch = ax;
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* ret */
	RETN(0);
	// 0 ;---------------------------
rotateviewft:
	// 4603 
	// 0 ;---------------------------
	// 0 ;* xe = -xe
	/* neg	A1 */
	NEG(a1);
	/* neg	A2 */
	NEG(a2);
	/* neg	A3 */
	NEG(a3);
	// 0 ;* ye = -ye
	/* neg	A4 */
	NEG(a4);
	/* neg	A5 */
	NEG(a5);
	/* neg	A6 */
	NEG(a6);
	// 0 ;* roll = -roll
	/* mov	ax,V_VIEW.VP_ROLL */
	ax = v_view.vp_roll;
	/* neg	ax */
	NEG(ax);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	V_VIEW.VP_ROLL,ax */
	v_view.vp_roll = ax;
	// 0 ;* pitch = -pitch
	/* mov	ax,V_VIEW.VP_PITCH */
	ax = v_view.vp_pitch;
	/* neg	ax */
	NEG(ax);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	V_VIEW.VP_PITCH,ax */
	v_view.vp_pitch = ax;
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* ret */
	RETN(0);
	// 0 ;---------------------------
controtate:
	// 4605 
	// 0 ;---------------------------
	// 0 ;----------------
	// 0 ;* calc new pitch
	// 0 ;----------------
	// 0 ;* new pitch = arcsin(A6)
	/* mov	ax,A6 */
	ax = a6;
	/* call	FastArcSin */
	CALLF(fastarcsin, 0);
	// 0 ;* convert fine pdegs to pdegs
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	V_VIEW.VP_PITCH,ax */
	v_view.vp_pitch = ax;
	// 0 ;---------------
	// 0 ;* calc new roll
	// 0 ;---------------
	// 0 ;* if pitch = 90 degs or pitch = -90 degs then
	// 0 ;*    new roll = 0
	// 0 ;* else
	// 0 ;*    new roll = arctan360(-A3 / A9)
	// 0 ;* endif
	/* xor	dx,dx */
	XOR(dx, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* je	@F */
	if ((dw)(ax) == (dw)(128)) {goto dummylabel1;}
	/* cmp	ax,384 */
	CMP(ax, 384);
	/* je	@F */
	if ((dw)(ax) == (dw)(384)) {goto dummylabel1;}
	/* mov	cx,A3 */
	cx = a3;
	/* neg	cx */
	NEG(cx);
	/* mov	dx,A9 */
	dx = a9;
	/* call	ArcTan360 */
	CALLF(arctan360, 0);
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	dx,ax */
	dx = ax;
dummylabel1:
	// 4607 
	/* @@:		mov	V_VIEW.VP_ROLL,dx */
	v_view.vp_roll = dx;
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcalcafactors: 	goto calcafactors;
        case m2c::kcalcangles: 	goto calcangles;
        case m2c::kcalcbfactors: 	goto calcbfactors;
        case m2c::kcalccfactors: 	goto calccfactors;
        case m2c::kcalcdfactors: 	goto calcdfactors;
        case m2c::kcalceyeposition: 	goto calceyeposition;
        case m2c::kcalcobjgrid: 	goto calcobjgrid;
        case m2c::kcalcobjsubdiv: 	goto calcobjsubdiv;
        case m2c::kcalcobjvsubdiv: 	goto calcobjvsubdiv;
        case m2c::kcalcrotategrid1: 	goto calcrotategrid1;
        case m2c::kcalcrotategrid2: 	goto calcrotategrid2;
        case m2c::kcalcrotategrid3: 	goto calcrotategrid3;
        case m2c::kcalcscale1: 	goto calcscale1;
        case m2c::kcalcscale16: 	goto calcscale16;
        case m2c::kcalcscale2: 	goto calcscale2;
        case m2c::kcalcscale4: 	goto calcscale4;
        case m2c::kcalcscale8: 	goto calcscale8;
        case m2c::kcalcsctrgrid: 	goto calcsctrgrid;
        case m2c::kcalcsctroffsets: 	goto calcsctroffsets;
        case m2c::kcalcsctrsubdiv: 	goto calcsctrsubdiv;
        case m2c::kcalcsctrzsubdiv: 	goto calcsctrzsubdiv;
        case m2c::kcalczscaled: 	goto calczscaled;
        case m2c::kcontrotate: 	goto controtate;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel16: 	goto edummylabel16;
        case m2c::kedummylabel17: 	goto edummylabel17;
        case m2c::kedummylabel18: 	goto edummylabel18;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kfastbfactors: 	goto fastbfactors;
        case m2c::kfastcfactors: 	goto fastcfactors;
        case m2c::kfastdfactors: 	goto fastdfactors;
        case m2c::kinitvisual: 	goto initvisual;
        case m2c::knegobjsubdiv: 	goto negobjsubdiv;
        case m2c::knegobjvsubdiv: 	goto negobjvsubdiv;
        case m2c::knegsctrsubdiv: 	goto negsctrsubdiv;
        case m2c::knegsctrzsubdiv: 	goto negsctrzsubdiv;
        case m2c::knegsubdiv0: 	goto negsubdiv0;
        case m2c::knegsubdiv1: 	goto negsubdiv1;
        case m2c::knegsubdiv10: 	goto negsubdiv10;
        case m2c::knegsubdiv11: 	goto negsubdiv11;
        case m2c::knegsubdiv12: 	goto negsubdiv12;
        case m2c::knegsubdiv13: 	goto negsubdiv13;
        case m2c::knegsubdiv14: 	goto negsubdiv14;
        case m2c::knegsubdiv15: 	goto negsubdiv15;
        case m2c::knegsubdiv16: 	goto negsubdiv16;
        case m2c::knegsubdiv17: 	goto negsubdiv17;
        case m2c::knegsubdiv18: 	goto negsubdiv18;
        case m2c::knegsubdiv19: 	goto negsubdiv19;
        case m2c::knegsubdiv2: 	goto negsubdiv2;
        case m2c::knegsubdiv20: 	goto negsubdiv20;
        case m2c::knegsubdiv21: 	goto negsubdiv21;
        case m2c::knegsubdiv22: 	goto negsubdiv22;
        case m2c::knegsubdiv23: 	goto negsubdiv23;
        case m2c::knegsubdiv24: 	goto negsubdiv24;
        case m2c::knegsubdiv25: 	goto negsubdiv25;
        case m2c::knegsubdiv26: 	goto negsubdiv26;
        case m2c::knegsubdiv27: 	goto negsubdiv27;
        case m2c::knegsubdiv28: 	goto negsubdiv28;
        case m2c::knegsubdiv29: 	goto negsubdiv29;
        case m2c::knegsubdiv3: 	goto negsubdiv3;
        case m2c::knegsubdiv30: 	goto negsubdiv30;
        case m2c::knegsubdiv31: 	goto negsubdiv31;
        case m2c::knegsubdiv32: 	goto negsubdiv32;
        case m2c::knegsubdiv4: 	goto negsubdiv4;
        case m2c::knegsubdiv5: 	goto negsubdiv5;
        case m2c::knegsubdiv6: 	goto negsubdiv6;
        case m2c::knegsubdiv7: 	goto negsubdiv7;
        case m2c::knegsubdiv8: 	goto negsubdiv8;
        case m2c::knegsubdiv9: 	goto negsubdiv9;
        case m2c::kposobjsubdiv: 	goto posobjsubdiv;
        case m2c::kposobjvsubdiv: 	goto posobjvsubdiv;
        case m2c::kpossctrsubdiv: 	goto possctrsubdiv;
        case m2c::kpossctrzsubdiv: 	goto possctrzsubdiv;
        case m2c::kpossubdiv0: 	goto possubdiv0;
        case m2c::kpossubdiv1: 	goto possubdiv1;
        case m2c::kpossubdiv10: 	goto possubdiv10;
        case m2c::kpossubdiv11: 	goto possubdiv11;
        case m2c::kpossubdiv12: 	goto possubdiv12;
        case m2c::kpossubdiv13: 	goto possubdiv13;
        case m2c::kpossubdiv14: 	goto possubdiv14;
        case m2c::kpossubdiv15: 	goto possubdiv15;
        case m2c::kpossubdiv16: 	goto possubdiv16;
        case m2c::kpossubdiv17: 	goto possubdiv17;
        case m2c::kpossubdiv18: 	goto possubdiv18;
        case m2c::kpossubdiv19: 	goto possubdiv19;
        case m2c::kpossubdiv2: 	goto possubdiv2;
        case m2c::kpossubdiv20: 	goto possubdiv20;
        case m2c::kpossubdiv21: 	goto possubdiv21;
        case m2c::kpossubdiv22: 	goto possubdiv22;
        case m2c::kpossubdiv23: 	goto possubdiv23;
        case m2c::kpossubdiv24: 	goto possubdiv24;
        case m2c::kpossubdiv25: 	goto possubdiv25;
        case m2c::kpossubdiv26: 	goto possubdiv26;
        case m2c::kpossubdiv27: 	goto possubdiv27;
        case m2c::kpossubdiv28: 	goto possubdiv28;
        case m2c::kpossubdiv29: 	goto possubdiv29;
        case m2c::kpossubdiv3: 	goto possubdiv3;
        case m2c::kpossubdiv30: 	goto possubdiv30;
        case m2c::kpossubdiv31: 	goto possubdiv31;
        case m2c::kpossubdiv32: 	goto possubdiv32;
        case m2c::kpossubdiv4: 	goto possubdiv4;
        case m2c::kpossubdiv5: 	goto possubdiv5;
        case m2c::kpossubdiv6: 	goto possubdiv6;
        case m2c::kpossubdiv7: 	goto possubdiv7;
        case m2c::kpossubdiv8: 	goto possubdiv8;
        case m2c::kpossubdiv9: 	goto possubdiv9;
        case m2c::krotatenull: 	goto rotatenull;
        case m2c::krotateview: 	goto rotateview;
        case m2c::krotateviewbk: 	goto rotateviewbk;
        case m2c::krotateviewdn: 	goto rotateviewdn;
        case m2c::krotateviewft: 	goto rotateviewft;
        case m2c::krotateviewlt: 	goto rotateviewlt;
        case m2c::krotateviewrt: 	goto rotateviewrt;
        case m2c::krotateviewup: 	goto rotateviewup;
        case m2c::kscaleswitch: 	goto scaleswitch;
        case m2c::kstorescale1: 	goto storescale1;
        case m2c::kstorescale16: 	goto storescale16;
        case m2c::kstorescale2: 	goto storescale2;
        case m2c::kstorescale4: 	goto storescale4;
        case m2c::kstorescale8: 	goto storescale8;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kzeroobjsubdiv: 	goto zeroobjsubdiv;
        case m2c::kzerosctrsubdiv: 	goto zerosctrsubdiv;
        case m2c::kzerosctrzsubdiv: 	goto zerosctrzsubdiv;
        case m2c::kzok: 	goto zok;
        default: return __dispatch_call(__disp, _state);
    };
}


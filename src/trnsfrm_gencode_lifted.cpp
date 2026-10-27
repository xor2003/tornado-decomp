/* THIS IS GENERATED FILE */

        
#include "trnsfrm.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
calctransmatrix:
	// 615 
	// 0 ;------------------
	// 0 ;* calc trig angles
	// 0 ;------------------
	// 0 ;* heading
edummylabel1:
	// 4369 
	/* mov	ax,[si].VP_HDG */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_hdg)));
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
	/* mov	ax,[si].VP_PITCH */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_pitch)));
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
	/* mov	ax,[si].VP_ROLL */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_roll)));
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
	// 0 ;------------------
	// 0 ;* calc 'A' factors
	// 0 ;------------------
	/* mov	ax,V_CosR */
	ax = v_cosr;
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
	RETF(0);
calceyecoords:
	// 790 
	/* mov	si,ax ;* kill: dx, si, di, bp, flags */
	si = ax;
edummylabel2:
	// 4371 
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
	RETF(0);
calctgtrelco:
	// 890 
	// 0 ;------------
	// 0 ;* calc x rel (target xft - aircraft xft)
	// 0 ;------------
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel3:
	// 4373 
	/* mov	cx,M_VIEW.VP_XSEC	;xsec * 65536 */
	cx = m_view.vp_xsec;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* mov	bp,M_VIEW.VP_XFT */
	bp = m_view.vp_xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,[si].VP_XSEC	;xsec * 65536 */
	dx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	bp,[si].VP_XFT */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* x rel = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store x rel */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;------------
	// 0 ;* calc y rel (target yft - aircraft yft)
	// 0 ;------------
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,M_VIEW.VP_YSEC	;ysec * 65536 */
	dx = m_view.vp_ysec;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,M_VIEW.VP_YFT */
	bp = m_view.vp_yft;
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,[si].VP_YSEC	;ysec * 65536 */
	cx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	bp,[si].VP_YFT */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* y rel = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	// 0 ;------------
	// 0 ;* calc z rel (target zft - aircraft zft)
	// 0 ;------------
	/* mov	bp,WORD PTR [si].VP_ZFT_LO */
	bp = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	ax,WORD PTR [si].VP_ZFT_HI */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* sub	bp,WORD PTR M_VIEW.VP_ZFT_LO */
	SUB(bp, *((dw*)((db*)&m_view+vp_zft_lo)));
	/* sbb	ax,WORD PTR M_VIEW.VP_ZFT_HI */
	SBB(ax, *((dw*)((db*)&m_view+vp_zft_hi)));
	/* cwd			;dx = sign(z rel) */
	CWD;
	/* jns	@F */
	if ((short)(ax) >= 0) {goto dummylabel1;}
	/* not	bp */
	bp = ~bp;
	/* not	ax */
	ax = ~ax;
	/* add	bp,1 */
	ADD(bp, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;* compress z rel (assume abs(z rel) <= 100,000)
	// 0 ;*
	// 0 ;* if abs(z rel) > 10000 then
	// 0 ;*    abs(z rel) = abs(z rel) / 4 + 7500
	// 0 ;* endif
dummylabel1:
	// 4375 
	/* @@:		test	ax,ax		;abs(z rel) > 65535? */
	TEST(ax, ax);
	/* jnz	@F		;yes -> */
	if ((ax & ax) != 0) {goto dummylabel2;}
	/* cmp	bp,10000	;abs(z rel) > 10000? */
	CMP(bp, 10000);
	/* jbe	ZRelOk		;no -> */
	if ((dw)(bp) <= (dw)(10000)) {goto zrelok;}
dummylabel2:
	// 4377 
	/* add	bp,7500		;abs(z rel) / 4 + 7500 */
	ADD(bp, 7500);
zrelok:
	// 4379 
	/* ZRelOk: 	xor	bp,dx		;restore sign */
	XOR(bp, dx);
	/* sub	bp,dx */
	SUB(bp, dx);
	/* pop	dx		;restore x rel */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;-----------------------------------------
	// 0 ;* calc abs(x rel), abs(y rel), abs(z rel)
	// 0 ;-----------------------------------------
	/* push	dx		;sign(x rel) */
	PUSH(dx);
	/* push	cx		;sign(y rel) */
	PUSH(cx);
	/* push	bp		;sign(z rel) */
	PUSH(bp);
	// 0 ;* abs(x rel)
	/* test	dx,dx */
	TEST(dx, dx);
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel3;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* abs(y rel)
dummylabel3:
	// 4381 
	/* @@:		test	cx,cx */
	TEST(cx, cx);
	/* jns	@F */
	if ((short)((cx & cx)) >= 0) {goto dummylabel4;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* abs(z rel)
dummylabel4:
	// 4383 
	/* @@:		test	bp,bp */
	TEST(bp, bp);
	/* jns	@F */
	if ((short)((bp & bp)) >= 0) {goto dummylabel5;}
	/* neg	bp */
	NEG(bp);
	// 0 ;------------------------------------------
	// 0 ;* check abs(x rel) and abs(y rel) in range
	// 0 ;------------------------------------------
	// 0 ;* max range = 03ffffh (approx. 50 miles)
dummylabel5:
	// 4385 
	/* @@:		cmp	dx,3		;abs(x rel) in range? */
	CMP(dx, 3);
	/* jbe	__m2c_macrolocal_27_skip */
	if ((dw)(dx) <= (dw)(3)) {goto __m2c_macrolocal_27_skip;}
	/* jmp	RelCoError */
	goto relcoerror;
__m2c_macrolocal_27_skip:
	// 4387 
	// 0 ;no ->
	/* cmp	cx,3		;abs(y rel) in range? */
	CMP(cx, 3);
	/* jbe	__m2c_macrolocal_28_skip */
	if ((dw)(cx) <= (dw)(3)) {goto __m2c_macrolocal_28_skip;}
	/* jmp	RelCoError */
	goto relcoerror;
__m2c_macrolocal_28_skip:
	// 4389 
	// 0 ;no ->
	// 0 ;--------------
	// 0 ;* scale values (all rel values must be < 16384)
	// 0 ;--------------
	// 0 ;* scale wrt abs(x rel)
	/* test	dx,dx		;abs(x rel) > 65535? */
	TEST(dx, dx);
	/* jz	@F		;no -> */
	if (!(dx & dx)) {goto dummylabel6;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 131071)
	/* test	dx,dx		;abs(x rel) > 65535? */
	TEST(dx, dx);
	/* jz	@F		;no -> */
	if (!(dx & dx)) {goto dummylabel6;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 65535)
dummylabel6:
	// 4391 
	/* @@:		cmp	ax,16384	;abs(x rel) < 16384? */
	CMP(ax, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(16384)) {goto dummylabel7;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 32767)
	/* cmp	ax,16384	;abs(x rel) < 16384? */
	CMP(ax, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(16384)) {goto dummylabel7;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 16383)
	// 0 ;* scale wrt abs(y rel)
dummylabel7:
	// 4393 
	/* @@:		test	cx,cx		;abs(y rel) > 65535? */
	TEST(cx, cx);
	/* jz	@F		;no -> */
	if (!(cx & cx)) {goto dummylabel8;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 131071)
	/* test	cx,cx		;abs(y rel) > 65535? */
	TEST(cx, cx);
	/* jz	@F		;no -> */
	if (!(cx & cx)) {goto dummylabel8;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 65535)
dummylabel8:
	// 4395 
	/* @@:		cmp	bx,16384	;abs(y rel) < 16384? */
	CMP(bx, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(bx) < (dw)(16384)) {goto dummylabel9;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 32767)
	/* cmp	bx,16384	;abs(y rel) < 16384? */
	CMP(bx, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(bx) < (dw)(16384)) {goto dummylabel9;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 16383)
	// 0 ;* scale wrt abs(z rel)
dummylabel9:
	// 4397 
	/* @@:		cmp	bp,16384	;abs(z rel) < 16384? */
	CMP(bp, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(bp) < (dw)(16384)) {goto dummylabel10;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;abs(z rel) / 2
	// 0 ;(max = 16383)
	// 0 ;---------------
	// 0 ;* restore signs
	// 0 ;---------------
	// 0 ;* ax = abs(x rel)
	// 0 ;* bx = abs(y rel)
	// 0 ;* bp = abs(z rel)
dummylabel10:
	// 4399 
	/* @@:		mov	si,ax */
	si = ax;
	/* pop	ax		;sign(z rel) */
	POP(ax);
	/* cwd */
	CWD;
	/* mov	cx,bp */
	cx = bp;
	/* xor	cx,dx */
	XOR(cx, dx);
	/* sub	cx,dx */
	SUB(cx, dx);
	/* pop	ax		;sign(y rel) */
	POP(ax);
	/* cwd */
	CWD;
	/* xor	bx,dx */
	XOR(bx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* pop	ax		;sign(x rel) */
	POP(ax);
	/* cwd */
	CWD;
	/* mov	ax,si */
	ax = si;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
relcoerror:
	// 4401 
	// 0 ;---------------------------
	// 0 ;* clean up stack
	/* pop	ax		;sign(z rel) */
	POP(ax);
	/* pop	ax		;sign(y rel) */
	POP(ax);
	/* pop	ax		;sign(x rel) */
	POP(ax);
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
calc3doffset:
	// 1202 
	/* mov	bp,ax ;* kill: dx, si, di, bp, flags */
	bp = ax;
edummylabel4:
	// 4403 
	/* mov	ax,A1 */
	ax = a1;
	/* imul	bp */
	IMUL1_2(bp);
	/* mov	si,ax		;x.a1 */
	si = ax;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,A4 */
	ax = a4;
	/* imul	bx */
	IMUL1_2(bx);
	/* add	si,ax		;x.a1 + y.a4 */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* mov	ax,A7 */
	ax = a7;
	/* imul	cx */
	IMUL1_2(cx);
	/* add	si,ax		;x.a1 + y.a4 + z.a7 */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* shl	si,1		;*2 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* shl	si,1		;1/2 bit round up */
	SHL(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
	/* push	di		;store x offset */
	PUSH(di);
	/* mov	ax,A2 */
	ax = a2;
	/* imul	bp */
	IMUL1_2(bp);
	/* mov	si,ax		;x.a2 */
	si = ax;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,A5 */
	ax = a5;
	/* imul	bx */
	IMUL1_2(bx);
	/* add	si,ax		;x.a2 + y.a5 */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* mov	ax,A8 */
	ax = a8;
	/* imul	cx */
	IMUL1_2(cx);
	/* add	si,ax		;x.a2 + y.a5 + z.a8 */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* shl	si,1		;*2 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* shl	si,1		;1/2 bit round up */
	SHL(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
	/* push	di		;store y offset */
	PUSH(di);
	/* mov	ax,A3 */
	ax = a3;
	/* imul	bp */
	IMUL1_2(bp);
	/* mov	si,ax		;x.a3 */
	si = ax;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,A6 */
	ax = a6;
	/* imul	bx */
	IMUL1_2(bx);
	/* add	si,ax		;x.a3 + y.a6 */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* mov	ax,A9 */
	ax = a9;
	/* imul	cx */
	IMUL1_2(cx);
	/* add	si,ax		;x.a3 + y.a6 + z.a9 */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* shl	si,1		;*2 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* shl	si,1		;1/2 bit round up */
	SHL(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
	/* mov	cx,di		;z offset */
	cx = di;
	/* pop	bx   		;y offset */
	POP(bx);
	/* pop	ax		;x offset */
	POP(ax);
	/* ret */
	RETF(0);
calcrngrelco:
	// 1287 
	// 0 ;---------------------------------------
	// 0 ;* calc slant range, x rel, y rel, z rel
	// 0 ;---------------------------------------
edummylabel5:
	// 4405 
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* mov	WORD PTR TmpRng,ax */
	*(dw*)(&tmprng) = ax;
	/* mov	WORD PTR TmpRng+2,dx */
	*(dw*)(((db*)&tmprng)+2) = dx;
	/* mov	ax,WORD PTR SlantDx */
	ax = *(dw*)(&slantdx);
	/* mov	dx,WORD PTR SlantDx+2 */
	dx = *(dw*)(((db*)&slantdx)+2);
	/* mov	bx,WORD PTR SlantDy */
	bx = *(dw*)(&slantdy);
	/* mov	cx,WORD PTR SlantDy+2 */
	cx = *(dw*)(((db*)&slantdy)+2);
	/* mov	si,WORD PTR SlantDz */
	si = *(dw*)(&slantdz);
	/* mov	di,WORD PTR SlantDz+2 */
	di = *(dw*)(((db*)&slantdz)+2);
	// 0 ;-----------------------------------------
	// 0 ;* calc abs(x rel), abs(y rel), abs(z rel)
	// 0 ;-----------------------------------------
	// 0 ;* abs(x rel)
	/* test	dx,dx */
	TEST(dx, dx);
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel11;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* abs(y rel)
dummylabel11:
	// 4407 
	/* @@:		test	cx,cx */
	TEST(cx, cx);
	/* jns	@F */
	if ((short)((cx & cx)) >= 0) {goto dummylabel12;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* abs(z rel)
dummylabel12:
	// 4409 
	/* @@:		test	di,di */
	TEST(di, di);
	/* jns	@F */
	if ((short)((di & di)) >= 0) {goto dummylabel13;}
	/* not	si */
	si = ~si;
	/* not	di */
	di = ~di;
	/* add	si,1 */
	ADD(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
	// 0 ;--------------
	// 0 ;* scale values (all rel values must be < 16384)
	// 0 ;--------------
	// 0 ;* scale wrt abs(x rel)
dummylabel13:
	// 4411 
	/* @@:		test	dx,dx		;abs(x rel) > 65535? */
	TEST(dx, dx);
	/* jz	@F		;no -> */
	if (!(dx & dx)) {goto dummylabel14;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel13;
dummylabel14:
	// 4413 
	/* @@:		cmp	ax,16384	;abs(x rel) < 16384? */
	CMP(ax, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(16384)) {goto dummylabel15;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel14;
	// 0 ;* scale wrt abs(y rel)
dummylabel15:
	// 4415 
	/* @@:		test	cx,cx		;abs(y rel) > 65535? */
	TEST(cx, cx);
	/* jz	@F		;no -> */
	if (!(cx & cx)) {goto dummylabel16;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel15;
dummylabel16:
	// 4417 
	/* @@:		cmp	bx,16384	;abs(y rel) < 16384? */
	CMP(bx, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(bx) < (dw)(16384)) {goto dummylabel17;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel16;
	// 0 ;* scale wrt abs(z rel)
dummylabel17:
	// 4419 
	/* @@:		test	di,di		;abs(z rel) > 65535? */
	TEST(di, di);
	/* jz	@F		;no -> */
	if (!(di & di)) {goto dummylabel18;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel17;
dummylabel18:
	// 4421 
	/* @@:		cmp	si,16384	;abs(z rel) < 16384? */
	CMP(si, 16384);
	/* jb	@F		;yes -> */
	if ((dw)(si) < (dw)(16384)) {goto dummylabel19;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel18;
	// 0 ;* scale wrt slant range
dummylabel19:
	// 4423 
	/* @@:		cmp	WORD PTR TmpRng+2,0	;slant range > 65535? */
	CMP(*(dw*)(((db*)&tmprng)+2), 0);
	/* je	@F			;no -> */
	if ((dw)(*(dw*)(((db*)&tmprng)+2)) == (dw)(0)) {goto dummylabel20;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel19;
dummylabel20:
	// 4425 
	/* @@:		cmp	WORD PTR TmpRng,16384	;abs(z rel) < 16384? */
	CMP(*(dw*)(&tmprng), 16384);
	/* jb	@F */
	if ((dw)(*(dw*)(&tmprng)) < (dw)(16384)) {goto dummylabel21;}
	/* shr	dx,1 */
	SHR(dx, 1);
	// 0 ;abs(x rel) / 2
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;abs(y rel) / 2
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;abs(z rel) / 2
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	WORD PTR TmpRng+2,1 */
	SHR(*(dw*)(((db*)&tmprng)+2), 1);
	/* rcr	WORD PTR TmpRng,1 */
	RCR(*(dw*)(&tmprng), 1);
	/* jmp	@B */
	goto dummylabel20;
	// 0 ;---------------
	// 0 ;* restore signs
	// 0 ;---------------
dummylabel21:
	// 4427 
	/* @@:		mov	bp,ax */
	bp = ax;
	/* mov	ax,WORD PTR SlantDz+2 */
	ax = *(dw*)(((db*)&slantdz)+2);
	/* cwd */
	CWD;
	/* mov	cx,si */
	cx = si;
	/* xor	cx,dx */
	XOR(cx, dx);
	/* sub	cx,dx */
	SUB(cx, dx);
	/* mov	ax,WORD PTR SlantDy+2 */
	ax = *(dw*)(((db*)&slantdy)+2);
	/* cwd */
	CWD;
	/* xor	bx,dx */
	XOR(bx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* mov	ax,WORD PTR SlantDx+2 */
	ax = *(dw*)(((db*)&slantdx)+2);
	/* cwd */
	CWD;
	/* mov	ax,bp */
	ax = bp;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;---------------------
	// 0 ;* recalc scaled range
	// 0 ;---------------------
	// 0 ;* Re-calc scaled range from scaled x rel, y rel and z rel values in order to
	// 0 ;* remove noise from the system (especially where slant range is long and the
	// 0 ;* approximated slant range calculation is used).
	// 0 ;* scaled range = sqrt(x rel * x rel + y rel * y rel + z rel * z rel)
	/* push	ax		;store x rel */
	PUSH(ax);
	/* push	bx		;store y rel */
	PUSH(bx);
	/* push	cx		;store z rel */
	PUSH(cx);
	/* imul	ax		;x rel * x rel */
	IMUL1_2(ax);
	/* mov	si,ax */
	si = ax;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	ax		;y rel * y rel */
	IMUL1_2(ax);
	/* add	si,ax */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	/* mov	ax,cx */
	ax = cx;
	/* imul	ax		;z rel * z rel */
	IMUL1_2(ax);
	/* add	ax,si */
	ADD(ax, si);
	/* adc	dx,di */
	ADC(dx, di);
	/* call	Sqrt32 */
	CALLF(sqrt32, 0);
	/* mov	dx,ax		;scaled range */
	dx = ax;
	/* pop	cx		;restore z rel */
	POP(cx);
	/* pop	bx		;restore y rel */
	POP(bx);
	/* pop	ax		;restore x rel */
	POP(ax);
	/* ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_27_skip: 	goto __m2c_macrolocal_27_skip;
        case m2c::k__m2c_macrolocal_28_skip: 	goto __m2c_macrolocal_28_skip;
        case m2c::kcalc3doffset: 	goto calc3doffset;
        case m2c::kcalceyecoords: 	goto calceyecoords;
        case m2c::kcalcrngrelco: 	goto calcrngrelco;
        case m2c::kcalctgtrelco: 	goto calctgtrelco;
        case m2c::kcalctransmatrix: 	goto calctransmatrix;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel17: 	goto dummylabel17;
        case m2c::kdummylabel18: 	goto dummylabel18;
        case m2c::kdummylabel19: 	goto dummylabel19;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel20: 	goto dummylabel20;
        case m2c::kdummylabel21: 	goto dummylabel21;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::krelcoerror: 	goto relcoerror;
        case m2c::kzrelok: 	goto zrelok;
        default: return __dispatch_call(__disp, _state);
    };
}


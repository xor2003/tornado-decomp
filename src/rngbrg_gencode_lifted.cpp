/* THIS IS GENERATED FILE */

        
#include "rngbrg.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
calcrngbrgvp_vp:
	// 1850 
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel1:
	// 4369 
	/* mov	cx,VP_XSEC[si]	;xsec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
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
	/* mov	bp,VP_XFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,VP_XSEC[di]	;xsec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,di))->vp_xsec)));
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
	/* mov	bp,VP_XFT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,di))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,VP_YSEC[si]	;ysec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
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
	/* mov	bp,VP_YFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,VP_YSEC[di]	;ysec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,di))->vp_ysec)));
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
	/* mov	bp,VP_YFT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,di))->vp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	NEAR PTR CalcRngBrg */
	goto calcrngbrg;
calcrngbrgvp_wp:
	// 1932 
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel2:
	// 4371 
	/* mov	cx,VP_XSEC[si]	;xsec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
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
	/* mov	bp,VP_XFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,WP_XSEC[di]	;xsec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_xsec)));
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
	/* mov	bp,WP_XFT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,VP_YSEC[si]	;ysec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
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
	/* mov	bp,VP_YFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,WP_YSEC[di]	;ysec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_ysec)));
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
	/* mov	bp,WP_YFT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	NEAR PTR CalcRngBrg */
	goto calcrngbrg;
calcrngbrgwp_wp:
	// 2014 
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel3:
	// 4373 
	/* mov	cx,WP_XSEC[si]	;xsec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
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
	/* mov	bp,WP_XFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,WP_XSEC[di]	;xsec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_xsec)));
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
	/* mov	bp,WP_XFT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,WP_YSEC[si]	;ysec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
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
	/* mov	bp,WP_YFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,WP_YSEC[di]	;ysec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_ysec)));
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
	/* mov	bp,WP_YFT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	NEAR PTR CalcRngBrg */
	goto calcrngbrg;
calcrngbrgvp_af:
	// 2096 
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel4:
	// 4375 
	/* mov	cx,VP_XSEC[si]	;xsec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
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
	/* mov	bp,VP_XFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,AF_XSEC[di]	;xsec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_xsec)));
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
	/* mov	bp,AF_ILS_PTR[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_ils_ptr)));
	/* mov	bp,DS:ILS_X_DATUM[bp] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,bp))->ils_x_datum)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,VP_YSEC[si]	;ysec * 65536 */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
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
	/* mov	bp,VP_YFT[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,AF_YSEC[di]	;ysec * 65536 */
	cx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_ysec)));
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
	/* mov	si,AF_ILS_PTR[di] */
	si = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_ils_ptr)));
	/* mov	bp,ILS_Y_DATUM[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,si))->ils_y_datum)));
	/* sub	bp,8192		;//BUG FIX// */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	NEAR PTR CalcRngBrg */
	goto calcrngbrg;
calcrngbrg:
	// 2191 
	/* mov	WORD PTR FlatDx,ax ;*       were calculated using fine pdegs. */
	*(dw*)(&flatdx) = ax;
edummylabel5:
	// 4377 
	/* mov	WORD PTR FlatDx+2,dx */
	*(dw*)(((db*)&flatdx)+2) = dx;
	/* mov	WORD PTR FlatDy,bx */
	*(dw*)(&flatdy) = bx;
	/* mov	WORD PTR FlatDy+2,cx */
	*(dw*)(((db*)&flatdy)+2) = cx;
	// 0 ;--------------
	// 0 ;* calc bearing
	// 0 ;--------------
	/* xor	si,si		;reset table index */
	XOR(si, si);
	/* test	dx,dx		;abs(Dx) */
	TEST(dx, dx);
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel1;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* or	si,10000b	;-Dx flag */
	OR(si, 0x10);
dummylabel1:
	// 4379 
	/* @@:		test	cx,cx		;abs(Dy) */
	TEST(cx, cx);
	/* jns	@F */
	if ((short)((cx & cx)) >= 0) {goto dummylabel2;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* or	si,01000b	;-Dy flag */
	OR(si, 0x8);
dummylabel2:
	// 4381 
	/* @@: 		cmp	dx,cx */
	CMP(dx, cx);
	/* jb	ScaleVals	;abs(Dx) < abs(Dy) -> */
	if ((dw)(dx) < (dw)(cx)) {goto scalevals;}
	/* ja	SwapVals	;abs(Dx) > abs(Dy) -> */
	if ((dw)(dx) > (dw)(cx)) {goto swapvals;}
	/* cmp	ax,bx */
	CMP(ax, bx);
	/* jb	ScaleVals	;abs(Dx) < abs(Dy) -> */
	if ((dw)(ax) < (dw)(bx)) {goto scalevals;}
	/* ja	SwapVals	;abs(Dx) > abs(Dy) -> */
	if ((dw)(ax) > (dw)(bx)) {goto swapvals;}
	// 0 ;* if abs(Dx) = abs(Dy) = 0 then
	// 0 ;*    theta = 0 degs
	// 0 ;* else
	// 0 ;*    theta = 45 degs
	// 0 ;* end
	/* push	dx		;store min(abs(Dx), abs(Dy)) */
	PUSH(dx);
	/* push	ax */
	PUSH(ax);
	/* push	cx		;store max(abs(Dx), abs(Dy)) */
	PUSH(cx);
	/* push	bx */
	PUSH(bx);
	/* mov	ax,64*128	;assume 45 degs */
	ax = 64*128;
	/* or	bx,cx		;abs(Dx) = abs(Dy) <> 0? */
	OR(bx, cx);
	/* jnz	ContBrg		;yes -> */
	if (bx != 0) {goto contbrg;}
	/* xor	ax,ax		;0 degs */
	XOR(ax, ax);
	/* jmp	ContBrg */
	goto contbrg;
swapvals:
	// 4383 
	/* SwapVals:	xchg	dx,cx */
	XCHG(dx, cx);
	/* xchg	ax,bx */
	XCHG(ax, bx);
	/* or	si,00100b	;abs(Dx) > abs(Dy) flag */
	OR(si, 0x4);
scalevals:
	// 4385 
	/* ScaleVals: 	push	dx		;store min(abs(Dx), abs(Dy)) */
	PUSH(dx);
	/* push	ax */
	PUSH(ax);
	/* push	cx		;store max(abs(Dx), abs(Dy)) */
	PUSH(cx);
	/* push	bx */
	PUSH(bx);
	// 0 ;* numerator * 32768 for binary fraction
	/* mov	bp,dx */
	bp = dx;
	/* mov	dx,ax */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 0 ;* scale values for 16 bit denominator (val <= 65536)
scaleloop:
	// 4387 
	/* ScaleLoop:	jcxz	@F */
	JCXZ(dummylabel3);
	/* shr	bp,1		;numerator / 2 */
	SHR(bp, 1);
	/* rcr	dx,1 */
	RCR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1		;denominator / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	ScaleLoop */
	goto scaleloop;
dummylabel3:
	// 4389 
	/* @@:		div	bx */
	DIV2(bx);
	/* push	si */
	PUSH(si);
	/* call	ArcTan		;(0 .. 45 degs) */
	CALLF(arctan, 0);
	/* pop	si */
	POP(si);
contbrg:
	// 4391 
	/* ContBrg:	mov	di,ax		;theta (fine pdegs) */
	di = ax;
	/* mov	cl,7		;/128 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	bx,ax		;theta (pdegs) */
	bx = ax;
	// 0 ;* bearing = oct offset + theta * oct sign
	/* mov	ax,OctTable[si+0]	;oct offset */
	ax = *(dw*)(((db*)octtable)+si+0);
	/* mov	dx,OctTable[si+2]	;oct sign */
	dx = *(dw*)(((db*)octtable)+si+2);
	/* xor	di,dx */
	XOR(di, dx);
	/* sub	di,dx */
	SUB(di, dx);
	/* add	di,ax		;di = bearing (fine pdegs) */
	ADD(di, ax);
	/* mov	si,di */
	si = di;
	/* mov	cl,7		;/128 */
	cl = 7;
	/* shr	si,cl */
	SHR(si, cl);
	/* adc	si,0 */
	ADC(si, 0);
	/* and	si,001ffh	;si = bearing (pdegs) */
	AND(si, 0x001ff);
	// 0 ;------------
	// 0 ;* calc range
	// 0 ;------------
	/* pop	ax		;restore max(abs(Dx), abs(Dy)) */
	POP(ax);
	/* pop	dx */
	POP(dx);
	/* pop	bp		;restore min(abs(Dx), abs(Dy)) */
	POP(bp);
	/* pop	cx */
	POP(cx);
	// 0 ;* if max(abs(Dx), abs(Dy)) < 32768 then
	// 0 ;*    calc range (short)
	// 0 ;* else
	// 0 ;*    calc range (long)
	// 0 ;* end
	// 0 ;* short range = max(abs(Dx), abs(Dy)) * 32768 / cos(theta)
	/* test	dx,dx */
	TEST(dx, dx);
	/* jnz	@F		;long -> */
	if ((dx & dx) != 0) {goto dummylabel4;}
	/* cmp	ax,32768 */
	CMP(ax, 32768);
	/* jae	@F		;long -> */
	if ((dw)(ax) >= (dw)(32768)) {goto dummylabel4;}
	/* mov	dx,ax		;*32768 */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	bx,CosTable[bx] */
	bx = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(bx = *(dw*)(((db*)&costable)+bx););	// 2309 						mov	bx,CosTable[bx] */
	/* div	bx */
	DIV2(bx);
	/* xor	dx,dx		;dx, ax = range */
	XOR(dx, dx);
	/* jmp	ExitRngBrg */
	goto exitrngbrg;
	// 0 ;* long range = [min(abs(Dx), abs(Dy)) + 4 * max(abs(Dx), abs(Dy))] / 4
dummylabel4:
	// 4393 
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
exitrngbrg:
	// 4395 
	/* ExitRngBrg:	mov	bx,si		;bx = bearing (pdegs) */
	bx = si;
	/* mov	bp,di		;bp = bearing (fine pdegs) */
	bp = di;
	/* ret */
	RETF(0);
calcangdiff:
	// 2340 
	/* mov	cl,7		;scale by 128 */
	cl = 7;
edummylabel6:
	// 4397 
	/* and	ax,001ffh	;ensure 0 .. 511 pdeg */
	AND(ax, 0x001ff);
	/* and	dx,001ffh	;ensure 0 .. 511 pdeg */
	AND(dx, 0x001ff);
	/* shl	ax,cl		;*128 */
	SHL(ax, cl);
	/* shl	dx,cl		;*128 */
	SHL(dx, cl);
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* sub	ax,dx		;ang diff * 128 */
	SUB(ax, dx);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(ang diff), dx = sign(ang diff)
	/* shr	ax,cl		;/128 */
	SHR(ax, cl);
	/* ret */
	RETF(0);
calcnmiles:
	// 2366 
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
edummylabel7:
	// 4399 
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,bx		;*10 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* mov	bx,6076 */
	bx = 6076;
	/* cmp	bx,dx		;div ok */
	CMP(bx, dx);
	/* jbe	SetMaxRange	;no -> */
	if ((dw)(bx) <= (dw)(dx)) {goto setmaxrange;}
	/* div	bx */
	DIV2(bx);
	/* cmp	dx,6076/2	;round up? */
	CMP(dx, 6076/2);
	/* jb	@F		;no -> */
	if ((dw)(dx) < (dw)(6076/2)) {goto dummylabel5;}
	/* inc	ax */
	INC(ax);
dummylabel5:
	// 4401 
	/* @@:		ret */
	RETF(0);
setmaxrange:
	// 4403 
	/* SetMaxRange:	mov	ax,9999		;999.9NM */
	ax = 9999;
	/* ret */
	RETF(0);
calceta:
	// 2398 
	/* cmp	bx,0		;speed > 0? */
	CMP(bx, 0);
edummylabel8:
	// 4405 
	/* jle	SetMaxTime	;no -> */
	if ((ZF || SF != OF)) {goto setmaxtime;}
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* cmp	bx,dx		;div ok? */
	CMP(bx, dx);
	/* jbe	SetMaxTime	;no -> */
	if ((dw)(bx) <= (dw)(dx)) {goto setmaxtime;}
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,MAX_TIME 	;> max time? */
	CMP(ax, (60*60)-1);
	/* ja	SetMaxTime	;yes -> */
	if ((dw)(ax) > (dw)((60*60)-1)) {goto setmaxtime;}
	/* ret */
	RETF(0);
setmaxtime:
	// 4407 
	/* SetMaxTime:	mov	ax,MAX_TIME */
	ax = (60*60)-1;
	/* ret */
	RETF(0);
calcslantrange:
	// 2448 
	// 0 ;------------------------
	// 0 ;* calc Dx = abs(x2 - x1)
	// 0 ;------------------------
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel9:
	// 4409 
	/* mov	cx,[si].VP_XSEC	;xsec * 65536 */
	cx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
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
	/* mov	bp,[si].VP_XFT */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,[di].VP_XSEC	;xsec * 65536 */
	dx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_xsec)));
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
	/* mov	bp,[di].VP_XFT */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_xft)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = abs(x2 - x1)
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* mov	WORD PTR SlantDx,ax */
	*(dw*)(&slantdx) = ax;
	/* mov	WORD PTR SlantDx+2,dx */
	*(dw*)(((db*)&slantdx)+2) = dx;
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel6;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel6:
	// 4411 
	/* @@:		push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;------------------------
	// 0 ;* calc Dy = abs(y2 - y1)
	// 0 ;------------------------
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,[si].VP_YSEC	;ysec * 65536 */
	dx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
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
	/* mov	bp,[si].VP_YFT */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,[di].VP_YSEC	;ysec * 65536 */
	cx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_ysec)));
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
	/* mov	bp,[di].VP_YFT */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_yft)));
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = abs(y2 - y1)
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* mov	WORD PTR SlantDy,bx */
	*(dw*)(&slantdy) = bx;
	/* mov	WORD PTR SlantDy+2,cx */
	*(dw*)(((db*)&slantdy)+2) = cx;
	/* jns	@F */
	if ((short)(cx) >= 0) {goto dummylabel7;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;------------------------
	// 0 ;* calc Dz = abs(z2 - z1)
	// 0 ;------------------------
	// 0 ;* z1
dummylabel7:
	// 4413 
	/* @@:		mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	dx,WORD PTR [si].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	// 0 ;* z2
	/* mov	si,WORD PTR [di].VP_ZFT_LO */
	si = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_lo)));
	/* mov	di,WORD PTR [di].VP_ZFT_HI */
	di = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_hi)));
	// 0 ;* Dz = abs(z2 - z1)
	/* sub	si,ax */
	SUB(si, ax);
	/* sbb	di,dx */
	SBB(di, dx);
	/* mov	WORD PTR SlantDz,si */
	*(dw*)(&slantdz) = si;
	/* mov	WORD PTR SlantDz+2,di */
	*(dw*)(((db*)&slantdz)+2) = di;
	/* jns	@F */
	if ((short)(di) >= 0) {goto dummylabel8;}
	/* not	si */
	si = ~si;
	/* not	di */
	di = ~di;
	/* add	si,1 */
	ADD(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
dummylabel8:
	// 4415 
	/* @@:		pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;-----------------------------------------
	// 0 ;* select short range or long range method
	// 0 ;-----------------------------------------
	// 0 ;* dx, ax = Dx
	// 0 ;* cx, bx = Dy
	// 0 ;* di, si = Dz
	/* mov	bp,32768	;set limit */
	bp = 32768;
	/* test	dx,dx		;Dx < 65536? */
	TEST(dx, dx);
	/* jnz	LongRange	;no -> */
	if ((dx & dx) != 0) {goto longrange;}
	/* cmp	ax,bp		;Dx < limit? */
	CMP(ax, bp);
	/* ja	LongRange	;no -> */
	if ((dw)(ax) > (dw)(bp)) {goto longrange;}
	/* test	cx,cx		;Dy < 65536? */
	TEST(cx, cx);
	/* jnz	LongRange	;no -> */
	if ((cx & cx) != 0) {goto longrange;}
	/* cmp	bx,bp		;Dy < limit? */
	CMP(bx, bp);
	/* ja	LongRange	;no -> */
	if ((dw)(bx) > (dw)(bp)) {goto longrange;}
	/* test	di,di		;Dz < 65536? */
	TEST(di, di);
	/* jnz	LongRange	;no -> */
	if ((di & di) != 0) {goto longrange;}
	/* cmp	si,bp		;Dz < limit? */
	CMP(si, bp);
	/* ja	LongRange	;no -> */
	if ((dw)(si) > (dw)(bp)) {goto longrange;}
	// 0 ;---------------------------
shortrange:
	// 4417 
	// 0 ;---------------------------
	// 0 ;* ax = Dx
	// 0 ;* bx = Dy
	// 0 ;* si = Dz
	// 0 ;* slant range = sqrt(Dx * Dx + Dy * Dy + Dz * Dz)
	/* mul	ax		;Dx * Dx */
	MUL1_2(ax);
	/* xchg	ax,bx */
	XCHG(ax, bx);
	/* mov	cx,dx */
	cx = dx;
	/* mul	ax		;Dy * Dy */
	MUL1_2(ax);
	/* add	bx,ax		;Dx * Dx + Dy * Dy */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* mov	ax,si */
	ax = si;
	/* mul	ax		;Dz * Dz */
	MUL1_2(ax);
	/* add	ax,bx		;Dx * Dx + Dy * Dy + Dz * Dz */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* call	Sqrt32 */
	CALLF(sqrt32, 0);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	WORD PTR SlantRng,ax */
	*(dw*)(&slantrng) = ax;
	/* mov	WORD PTR SlantRng+2,dx */
	*(dw*)(((db*)&slantrng)+2) = dx;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
longrange:
	// 4419 
	// 0 ;---------------------------
	// 0 ;* dx, ax = Dx
	// 0 ;* cx, bx = Dy
	// 0 ;* di, si = Dz
	// 0 ;* sort max(Dx, Dy, Dz)
	/* cmp	dx,cx		;Dx > Dy? */
	CMP(dx, cx);
	/* ja	SortOk1		;yes -> */
	if ((dw)(dx) > (dw)(cx)) {goto sortok1;}
	/* jb	@F		;no -> */
	if ((dw)(dx) < (dw)(cx)) {goto dummylabel9;}
	/* cmp	ax,bx		;Dx >= Dy? */
	CMP(ax, bx);
	/* jae	SortOk1		;yes -> */
	if ((dw)(ax) >= (dw)(bx)) {goto sortok1;}
dummylabel9:
	// 4421 
	/* @@:		xchg	ax,bx */
	XCHG(ax, bx);
	/* xchg	dx,cx */
	XCHG(dx, cx);
	// 0 ;* dx, ax = max(Dx, Dy)
sortok1:
	// 4423 
	/* SortOk1:	cmp	dx,di		;max(Dx, Dy) > Dz? */
	CMP(dx, di);
	/* ja	SortOk2		;yes -> */
	if ((dw)(dx) > (dw)(di)) {goto sortok2;}
	/* jb	@F		;no -> */
	if ((dw)(dx) < (dw)(di)) {goto dummylabel10;}
	/* cmp	ax,si		;max(Dx, Dy) >= Dz? */
	CMP(ax, si);
	/* jae	SortOk2		;yes -> */
	if ((dw)(ax) >= (dw)(si)) {goto sortok2;}
dummylabel10:
	// 4425 
	/* @@:		xchg	ax,si */
	XCHG(ax, si);
	/* xchg	dx,di */
	XCHG(dx, di);
	// 0 ;* dx, ax = max(Dx, Dy, Dz)
	// 0 ;* cx, bx = either med(Dx, Dy, Dz) or min(Dx, Dy, Dz)
	// 0 ;* di, si = either med(Dx, Dy, Dz) or min(Dx, Dy, Dz)
	// 0 ;* calc med(Dx, Dy, Dz) / 4
	// 0 ;* calc min(Dx, Dy, Dz) / 4
sortok2:
	// 4427 
	// 0 ;* slant range = max(Dx, Dy, Dz) + med(Dx, Dy, Dz) / 4 + min(Dx, Dy, Dz) / 4
	/* add	ax,bx */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* add	ax,si */
	ADD(ax, si);
	/* adc	dx,di */
	ADC(dx, di);
	/* mov	WORD PTR SlantRng,ax */
	*(dw*)(&slantrng) = ax;
	/* mov	WORD PTR SlantRng+2,dx */
	*(dw*)(((db*)&slantrng)+2) = dx;
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
                case m2c::kcalcangdiff: 	goto calcangdiff;
        case m2c::kcalceta: 	goto calceta;
        case m2c::kcalcnmiles: 	goto calcnmiles;
        case m2c::kcalcrngbrg: 	goto calcrngbrg;
        case m2c::kcalcrngbrgvp_af: 	goto calcrngbrgvp_af;
        case m2c::kcalcrngbrgvp_vp: 	goto calcrngbrgvp_vp;
        case m2c::kcalcrngbrgvp_wp: 	goto calcrngbrgvp_wp;
        case m2c::kcalcrngbrgwp_wp: 	goto calcrngbrgwp_wp;
        case m2c::kcalcslantrange: 	goto calcslantrange;
        case m2c::kcontbrg: 	goto contbrg;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel2: 	goto dummylabel2;
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
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitrngbrg: 	goto exitrngbrg;
        case m2c::klongrange: 	goto longrange;
        case m2c::kscaleloop: 	goto scaleloop;
        case m2c::kscalevals: 	goto scalevals;
        case m2c::ksetmaxrange: 	goto setmaxrange;
        case m2c::ksetmaxtime: 	goto setmaxtime;
        case m2c::kshortrange: 	goto shortrange;
        case m2c::ksortok1: 	goto sortok1;
        case m2c::ksortok2: 	goto sortok2;
        case m2c::kswapvals: 	goto swapvals;
        default: return __dispatch_call(__disp, _state);
    };
}


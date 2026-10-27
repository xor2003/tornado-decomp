/* THIS IS GENERATED FILE */

        
#include "circle.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
gcode_0_proc:
	// 155 
circlesmoke:
	// 4369 
	// 0 ;--------------------------
	// 0 ;--------------------------
	/* test	dx,dx		;radius > 0? */
	TEST(dx, dx);
	/* jle	CircleExit	;no -> */
	TEST(dx, dx);
	if ((ZF || SF != OF)) {goto circleexit;}
	/* mov	si,bx		;si = y org */
	si = bx;
	/* mov	bp,cx		;bp = x org */
	bp = cx;
	/* mov	bx,OFFSET Palette */
	bx = m2c::near_offset_external(palette);
	/* xlat */
	XLAT;
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR FillCol,ax */
	*(dw*)(&fillcol) = ax;
	/* mov	ax,_SmokeFill */
	ax = _smokefill;
	/* mov	FillVector,ax */
	fillvector = ax;
	/* jmp	IntoCircleFill */
	goto intocirclefill;
	// 0 ;--------------------------
circlemesh:
	// 4371 
	// 0 ;--------------------------
	/* test	dx,dx		;radius > 0? */
	TEST(dx, dx);
	/* jle	CircleExit	;no -> */
	TEST(dx, dx);
	if ((ZF || SF != OF)) {goto circleexit;}
	/* mov	si,bx		;si = y org */
	si = bx;
	/* mov	bp,cx		;bp = x org */
	bp = cx;
	/* mov	bx,OFFSET Palette */
	bx = m2c::near_offset_external(palette);
	/* xlat */
	XLAT;
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR FillCol,ax */
	*(dw*)(&fillcol) = ax;
	/* mov	ax,_MeshFill */
	ax = _meshfill;
	/* mov	FillVector,ax */
	fillvector = ax;
	/* jmp	IntoCircleFill */
	goto intocirclefill;
	// 0 ;---------------------------
circleexit:
	// 4373 
	// 0 ;exit point for non-visible circles
	// 0 ;---------------------------
	/* xor	al,al		;circle not visible */
	XOR(al, al);
	/* mov	CircleFlag,al */
	*(circleflag) = al;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
	// 0 ;--------------------------
circlefill:
	// 192 
	// 0 ;--------------------------
edummylabel1:
	// 4375 
	/* test	dx,dx		;radius > 0? */
	TEST(dx, dx);
	/* jle	CircleExit	;no -> */
	TEST(dx, dx);
	if ((ZF || SF != OF)) {goto circleexit;}
	/* mov	si,bx		;si = y org */
	si = bx;
	/* mov	bp,cx		;bp = x org */
	bp = cx;
	/* mov	bx,OFFSET Palette */
	bx = m2c::near_offset_external(palette);
	/* xlat */
	XLAT;
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR FillCol,ax */
	*(dw*)(&fillcol) = ax;
	/* mov	ax,_PolyFill */
	ax = _polyfill;
	/* mov	FillVector,ax */
	fillvector = ax;
	// 0 ;* calc min / max x and y values to determine if circle is visible
	// 0 ;*
	// 0 ;* min x val = x org - radius * aspect ratio
	// 0 ;* max x val = x org + radius * aspect ratio
	// 0 ;* min y val = y org - radius
	// 0 ;* max y val = y org + radius
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
intocirclefill:
	// 4377 
	/* IntoCircleFill:	mov	cx,dx */
	cx = dx;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	cx,dx	;*1.25 */
	ADC(cx, dx);
	// 0 ;cx = radius * aspect ratio (AR)
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,cx		;x min val = x org - radius * AR */
	SUB(ax, cx);
	/* cmp	ax,CircleXMax	;x min val > clip x max? */
	CMP(ax, circlexmax);
	/* jg	CircleExit	;yes, not visible -> */
	if ((short)(ax) > (short)(circlexmax)) {goto circleexit;}
	/* mov	di,ax */
	di = ax;
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,cx		;x max val = x org + radius * AR */
	ADD(ax, cx);
	/* cmp	ax,CircleXMin	;x max val < clip x min? */
	CMP(ax, circlexmin);
	/* jl	CircleExit	;yes, not visible -> */
	if ((short)(ax) < (short)(circlexmin)) {goto circleexit;}
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,si */
	ax = si;
	/* sub	ax,dx		;y min val = y org - radius */
	SUB(ax, dx);
	/* cmp	ax,CircleYMax	;y min val > clip y max? */
	CMP(ax, circleymax);
	/* jg	CircleExit	;yes, not visible -> */
	if ((short)(ax) > (short)(circleymax)) {goto circleexit;}
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,si */
	ax = si;
	/* add	ax,dx		;y max val = y org + radius */
	ADD(ax, dx);
	/* cmp	ax,CircleYMin	;y max val < clip y min? */
	CMP(ax, circleymin);
	/* jl	CircleExit	;yes, not visible -> */
	if ((short)(ax) < (short)(circleymin)) {goto circleexit;}
	// 0 ;* ax = y max val
	// 0 ;* bx = y min val
	// 0 ;* cx = x max val
	// 0 ;* di = x min val
	// 0 ;*
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* determine if circle requires clipping
	/* cmp	ax,CircleYMax	;y max val requires clipping? */
	CMP(ax, circleymax);
	/* jg	ClipCircleLink	;yes -> */
	if ((short)(ax) > (short)(circleymax)) {goto clipcirclelink;}
	/* cmp	bx,CircleYMin	;y min val requires clipping? */
	CMP(bx, circleymin);
	/* jl	ClipCircleLink	;yes -> */
	if ((short)(bx) < (short)(circleymin)) {goto clipcirclelink;}
	/* cmp	cx,CircleXMax	;x max val requires clipping? */
	CMP(cx, circlexmax);
	/* jg	ClipCircleLink	;yes -> */
	if ((short)(cx) > (short)(circlexmax)) {goto clipcirclelink;}
	/* cmp	di,CircleXMin	;x min val requires clipping? */
	CMP(di, circlexmin);
	/* jge	UnclippedCircle	;no -> */
	if ((short)(di) >= (short)(circlexmin)) {goto unclippedcircle;}
clipcirclelink:
	// 4379 
	/* ClipCircleLink:	jmp	ClippedCircle */
	goto clippedcircle;
	// 0 ;==================
	// 0 ;* unclipped circle
	// 0 ;==================
	// 0 ;* ax = y max val
	// 0 ;* bx = y min val
	// 0 ;*
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = y min val
	// 0 ;* max y = y max val
unclippedcircle:
	// 4381 
	/* UnclippedCircle:mov	MinY,bx */
	miny = bx;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop1:
	// 4383 
	/* CircleLoop1:	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	CircleDone */
	if ((short)(cx) > (short)(bx)) {goto circledone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    rhsx(y org - y) = xorg + x aspect
	// 0 ;*    rhsx(y org + y) = xorg + x aspect
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* neg	bx		;(-y) */
	NEG(bx);
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*    lhsx(y org - y) = xorg - x aspect
	// 0 ;*    lhsx(y org + y) = xorg - x aspect
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* neg	bx		;(-y) */
	NEG(bx);
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*    swap x, y
	/* shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts1 */
	if ((ZF || SF != OF)) {goto skipxyocts1;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       rhsx(y org - y) = xorg + x aspect
	// 0 ;*       rhsx(y org + y) = xorg + x aspect
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* neg	bx		;(-y) */
	NEG(bx);
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*       lhsx(y org - y) = xorg - x aspect
	// 0 ;*       lhsx(y org + y) = xorg - x aspect
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* neg	bx		;(-y) */
	NEG(bx);
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts1:
	// 4385 
	/* SkipXYOcts1:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop1 */
	goto circleloop1;
	// 0 ;* jump to appropriate graphics primitive to draw circle
circledone:
	// 4387 
	/* CircleDone:	mov	al,1		;circle visible */
	al = 1;
	/* mov	CircleFlag,al */
	*(circleflag) = al;
	/* inc	PolyCount */
	INC(polycount);
	/* mov	ax,FillVector */
	ax = fillvector;
__disp=ax;
	/* jmp	ax */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;================
	// 0 ;* clipped circle
	// 0 ;================
	// 0 ;* ax = y max val
	// 0 ;* bx = y min val
	// 0 ;*
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* check if circle origin is inside or outside clip region
clippedcircle:
	// 4389 
	/* ClippedCircle:	cmp	bp,CircleXMin	;x org < clip x min? */
	CMP(bp, circlexmin);
	/* jl	OutsideLink	;yes, outside -> */
	if ((short)(bp) < (short)(circlexmin)) {goto outsidelink;}
	/* cmp	bp,CircleXMax	;x org > clip x max? */
	CMP(bp, circlexmax);
	/* jg	OutsideLink	;yes, outside -> */
	if ((short)(bp) > (short)(circlexmax)) {goto outsidelink;}
	/* cmp	si,CircleYMin	;y org < clip y min? */
	CMP(si, circleymin);
	/* jl	OutsideLink	;yes, outside -> */
	if ((short)(si) < (short)(circleymin)) {goto outsidelink;}
	/* cmp	si,CircleYMax	;y org > clip y max? */
	CMP(si, circleymax);
	/* jle	InsideClip	;no, inside -> */
	if ((short)(si) <= (short)(circleymax)) {goto insideclip;}
outsidelink:
	// 4391 
	/* OutsideLink:	jmp	OutsideClip */
	goto outsideclip;
	// 0 ;===========================================
	// 0 ;* clipped circle, origin inside clip region
	// 0 ;===========================================
	// 0 ;* ax = y max val
	// 0 ;* bx = y min val
	// 0 ;*
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* max y = min(y max val, clip y max)
insideclip:
	// 4393 
	/* InsideClip:	cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jle	Ok2_1 */
	if ((short)(ax) <= (short)(circleymax)) {goto ok2_1;}
	/* mov	ax,CircleYMax */
	ax = circleymax;
ok2_1:
	// 4395 
	/* Ok2_1:		mov	MaxY,ax */
	maxy = ax;
	// 0 ;* min y = max(y min val, clip y min)
	/* mov	ax,bx */
	ax = bx;
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jge	Ok2_2 */
	if ((short)(ax) >= (short)(circleymin)) {goto ok2_2;}
	/* mov	ax,CircleYMin */
	ax = circleymin;
ok2_2:
	// 4397 
	/* Ok2_2:		mov	MinY,ax */
	miny = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop2:
	// 4399 
	/* CircleLoop2:	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	CircleDone */
	if ((short)(cx) > (short)(bx)) {goto circledone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (y org - y) >= clip y min then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip2_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip2_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip2_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip2_1;}
	/* neg	bx		;(-y) */
	NEG(bx);
	// 0 ;*       x temp = min(x org + x aspect, clip x max)
	// 0 ;*       rhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok2_3 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok2_3;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok2_3:
	// 4401 
	/* Ok2_3:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*       x temp = max(x org - x aspect, clip x min)
	// 0 ;*       lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok2_4 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok2_4;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok2_4:
	// 4403 
	/* Ok2_4:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*    end if
	// 0 ;*    if (y org + y) <= clip y max then
skip2_1:
	// 4405 
	/* Skip2_1:	mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip2_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip2_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip2_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip2_2;}
	// 0 ;*       x temp = min(x org + x aspect, clip x max)
	// 0 ;*       rhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok2_5 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok2_5;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok2_5:
	// 4407 
	/* Ok2_5:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*       x temp = max(x org - x aspect, clip x min)
	// 0 ;*       lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok2_6 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok2_6;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok2_6:
	// 4409 
	/* Ok2_6:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip2_2:
	// 4411 
	/* Skip2_2: 	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts2 */
	if ((ZF || SF != OF)) {goto skipxyocts2;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (y org - y) >= clip y min then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip2_3		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip2_3;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip2_3 */
	if ((short)(ax) < (short)(circleymin)) {goto skip2_3;}
	/* neg	bx		;(-y) */
	NEG(bx);
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok2_7 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok2_7;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok2_7:
	// 4413 
	/* Ok2_7:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok2_8 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok2_8;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok2_8:
	// 4415 
	/* Ok2_8:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*       end if
	// 0 ;*       if (y org + y) <= clip y max then
skip2_3:
	// 4417 
	/* Skip2_3:	mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip2_4		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip2_4;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip2_4 */
	if ((short)(ax) > (short)(circleymax)) {goto skip2_4;}
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok2_9 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok2_9;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok2_9:
	// 4419 
	/* Ok2_9:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok2_10 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok2_10;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok2_10:
	// 4421 
	/* Ok2_10:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*       end if
skip2_4:
	// 4423 
	/* Skip2_4: 	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts2:
	// 4425 
	/* SkipXYOcts2:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop2 */
	goto circleloop2;
	// 0 ;============================================
	// 0 ;* clipped circle, origin outside clip region
	// 0 ;============================================
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* calc out code for circle origin (bx = out code = 000ABRL0)
outsideclip:
	// 4427 
	/* OutsideClip:	xor	bx,bx */
	XOR(bx, bx);
	/* cmp	bp,CircleXMin	;left of clip region? */
	CMP(bp, circlexmin);
	/* jge	OutCode1	;no -> */
	if ((short)(bp) >= (short)(circlexmin)) {goto outcode1;}
	/* or	bx,00010b */
	OR(bx, 0x2);
outcode1:
	// 4429 
	/* OutCode1: 	cmp	bp,CircleXMax	;right of clip region? */
	CMP(bp, circlexmax);
	/* jle	OutCode2  	;no -> */
	if ((short)(bp) <= (short)(circlexmax)) {goto outcode2;}
	/* or	bx,00100b */
	OR(bx, 0x4);
outcode2:
	// 4431 
	/* OutCode2:	cmp	si,CircleYMax	;below clip region? */
	CMP(si, circleymax);
	/* jle	OutCode3	;no -> */
	if ((short)(si) <= (short)(circleymax)) {goto outcode3;}
	/* or	bx,01000b */
	OR(bx, 0x8);
outcode3:
	// 4433 
	/* OutCode3:	cmp	si,CircleYMin	;above clip region? */
	CMP(si, circleymin);
	/* jge	OutCode4	;no -> */
	if ((short)(si) >= (short)(circleymin)) {goto outcode4;}
	/* or	bx,10000b */
	OR(bx, 0x10);
	// 0 ;* jump to appropriate outside clip routine
outcode4:
	// 4435 
	/* OutCode4:	mov	ax,CircleVectors[bx] */
	ax = *(dw*)(((db*)&circlevectors)+bx);
__disp=ax;
	/* jmp	ax */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;=================================
	// 0 ;* circle origin above clip region
	// 0 ;=================================
abovedone:
	// 4437 
	/* AboveDone: 	jmp	CircleDone */
	goto circledone;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = clip y min
	// 0 ;* max y = clip y min
clipabove:
	// 4439 
	/* ClipAbove:	mov	ax,CircleYMin */
	ax = circleymin;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop3:
	// 4441 
	/* CircleLoop3:	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	AboveDone */
	if ((short)(cx) > (short)(bx)) {goto abovedone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    if (y org + y) >= clip y min and (y org + y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip3_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip3_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip3_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip3_1;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip3_1 */
	if ((short)(ax) > (short)(circleymax)) {goto skip3_1;}
	// 0 ;*       max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok3_1 */
	if ((short)(ax) <= (short)(maxy)) {goto ok3_1;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*       x aspect = x * aspect ratio
ok3_1:
	// 4443 
	/* Ok3_1:	mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       x temp = min(x org + x aspect, clip x max)
	// 0 ;*       rhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok3_2 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok3_2;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok3_2:
	// 4445 
	/* Ok3_2:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*       x temp = max(x org - x aspect, clip x min)
	// 0 ;*       lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok3_3 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok3_3;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok3_3:
	// 4447 
	/* Ok3_3:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip3_1:
	// 4449 
	/* Skip3_1:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts3 */
	if ((ZF || SF != OF)) {goto skipxyocts3;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       if (y org + y) >= clip y min and (y org + y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip3_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip3_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip3_2 */
	if ((short)(ax) < (short)(circleymin)) {goto skip3_2;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip3_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip3_2;}
	// 0 ;*          max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok3_4 */
	if ((short)(ax) <= (short)(maxy)) {goto ok3_4;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*          x aspect = x * aspect ratio
ok3_4:
	// 4451 
	/* Ok3_4:	mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok3_5 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok3_5;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok3_5:
	// 4453 
	/* Ok3_5:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok3_6 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok3_6;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok3_6:
	// 4455 
	/* Ok3_6:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*       end if
skip3_2:
	// 4457 
	/* Skip3_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts3:
	// 4459 
	/* SkipXYOcts3:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop3 */
	goto circleloop3;
	// 0 ;============================================
	// 0 ;* circle origin above / right of clip region
	// 0 ;============================================
	// 0 ;* test if circle is visible before drawing
aboverightdone:
	// 4461 
	/* AboveRightDone:	mov	ax,MaxY */
	ax = maxy;
	/* cmp	ax,DUMMY_MIN	;visible? */
	CMP(ax, -32768);
	/* je	AboveRightSkip	;no -> */
	if ((dw)(ax) == (dw)(-32768)) {goto aboverightskip;}
	/* jmp	CircleDone */
	goto circledone;
aboverightskip:
	// 4463 
	/* AboveRightSkip:	jmp	CircleExit */
	goto circleexit;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = clip y min
	// 0 ;* max y = DUMMY_MIN
clipaboveright:
	// 4465 
	/* ClipAboveRight:	mov	ax,CircleYMin */
	ax = circleymin;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	ax,DUMMY_MIN */
	ax = -32768;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop4:
	// 4467 
	/* CircleLoop4: 	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	AboveRightDone */
	if ((short)(cx) > (short)(bx)) {goto aboverightdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (x org - x aspect) <= clip x max then
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jg	Skip4_1 */
	if ((short)(ax) > (short)(circlexmax)) {goto skip4_1;}
	// 0 ;*       if (y org + y) >= clip y min and (y org + y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip4_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip4_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip4_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip4_1;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip4_1 */
	if ((short)(ax) > (short)(circleymax)) {goto skip4_1;}
	// 0 ;*          max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok4_1 */
	if ((short)(ax) <= (short)(maxy)) {goto ok4_1;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*          x temp = clip x max
	// 0 ;*          rhsx(y org + y) = x temp
ok4_1:
	// 4469 
	/* Ok4_1:		mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok4_2 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok4_2;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok4_2:
	// 4471 
	/* Ok4_2:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*       end if
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip4_1:
	// 4473 
	/* Skip4_1:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts4 */
	if ((ZF || SF != OF)) {goto skipxyocts4;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (x org - x aspect) <= clip x max then
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jg	Skip4_2 */
	if ((short)(ax) > (short)(circlexmax)) {goto skip4_2;}
	// 0 ;*          if (y org + y) >= clip y min and (y org + y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip4_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip4_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip4_2 */
	if ((short)(ax) < (short)(circleymin)) {goto skip4_2;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip4_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip4_2;}
	// 0 ;*             max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok4_3 */
	if ((short)(ax) <= (short)(maxy)) {goto ok4_3;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*             x temp = clip x max
	// 0 ;*             rhsx(y org + y) = x temp
ok4_3:
	// 4475 
	/* Ok4_3:		mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = max(x org - x aspect, clip x min)
	// 0 ;*             lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok4_4 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok4_4;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok4_4:
	// 4477 
	/* Ok4_4:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*          end if
	// 0 ;*       end if
skip4_2:
	// 4479 
	/* Skip4_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts4:
	// 4481 
	/* SkipXYOcts4:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop4 */
	goto circleloop4;
	// 0 ;===========================================
	// 0 ;* circle origin above / left of clip region
	// 0 ;===========================================
	// 0 ;* test if circle is visible before drawing
aboveleftdone:
	// 4483 
	/* AboveLeftDone: 	mov	ax,MaxY */
	ax = maxy;
	/* cmp	ax,DUMMY_MIN	;visible? */
	CMP(ax, -32768);
	/* je	AboveLeftSkip	;no -> */
	if ((dw)(ax) == (dw)(-32768)) {goto aboveleftskip;}
	/* jmp	CircleDone */
	goto circledone;
aboveleftskip:
	// 4485 
	/* AboveLeftSkip:	jmp	CircleExit */
	goto circleexit;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = clip y min
	// 0 ;* max y = DUMMY_MIN
clipaboveleft:
	// 4487 
	/* ClipAboveLeft:	mov	ax,CircleYMin */
	ax = circleymin;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	ax,DUMMY_MIN */
	ax = -32768;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop5:
	// 4489 
	/* CircleLoop5:	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	AboveLeftDone */
	if ((short)(cx) > (short)(bx)) {goto aboveleftdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (x org + x aspect) >= clip x min then
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jl	Skip5_1 */
	if ((short)(ax) < (short)(circlexmin)) {goto skip5_1;}
	// 0 ;*       if (y org + y) >= clip y min and (y org + y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip5_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip5_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip5_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip5_1;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip5_1 */
	if ((short)(ax) > (short)(circleymax)) {goto skip5_1;}
	// 0 ;*          max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok5_1 */
	if ((short)(ax) <= (short)(maxy)) {goto ok5_1;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org + y) = x temp
ok5_1:
	// 4491 
	/* Ok5_1:		mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok5_2 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok5_2;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok5_2:
	// 4493 
	/* Ok5_2:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = clip x min
	// 0 ;*          lhsx(y org + y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*       end if
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip5_1:
	// 4495 
	/* Skip5_1:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts5 */
	if ((ZF || SF != OF)) {goto skipxyocts5;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (x org + x aspect) >= clip x min then
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jl	Skip5_2 */
	if ((short)(ax) < (short)(circlexmin)) {goto skip5_2;}
	// 0 ;*          if (y org + y) >= clip y min and (y org + y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip5_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip5_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip5_2 */
	if ((short)(ax) < (short)(circleymin)) {goto skip5_2;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip5_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip5_2;}
	// 0 ;*             max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok5_3 */
	if ((short)(ax) <= (short)(maxy)) {goto ok5_3;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*             x temp = min(x org + x aspect, clip x max)
	// 0 ;*             rhsx(y org + y) = x temp
ok5_3:
	// 4497 
	/* Ok5_3:		mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok5_4 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok5_4;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok5_4:
	// 4499 
	/* Ok5_4:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = clip x min
	// 0 ;*             lhsx(y org + y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*          end if
	// 0 ;*       end if
skip5_2:
	// 4501 
	/* Skip5_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts5:
	// 4503 
	/* SkipXYOcts5:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop5 */
	goto circleloop5;
	// 0 ;=================================
	// 0 ;* circle origin below clip region
	// 0 ;=================================
belowdone:
	// 4505 
	/* BelowDone:	jmp	CircleDone */
	goto circledone;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = clip y max
	// 0 ;* max y = clip y max
clipbelow:
	// 4507 
	/* ClipBelow:	mov	ax,CircleYMax */
	ax = circleymax;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop6:
	// 4509 
	/* CircleLoop6:	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	BelowDone */
	if ((short)(cx) > (short)(bx)) {goto belowdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    if (y org - y) >= clip y min and (y org - y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip6_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip6_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip6_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip6_1;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip6_1 */
	if ((short)(ax) > (short)(circleymax)) {goto skip6_1;}
	// 0 ;*       min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok6_1 */
	if ((short)(ax) >= (short)(miny)) {goto ok6_1;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*       x aspect = x * aspect ratio
ok6_1:
	// 4511 
	/* Ok6_1:	mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       x temp = min(x org + x aspect, clip x max)
	// 0 ;*       rhsx(y org - y) = x temp
	/* neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok6_2 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok6_2;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok6_2:
	// 4513 
	/* Ok6_2:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*       x temp = max(x org - x aspect, clip x min)
	// 0 ;*       lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok6_3 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok6_3;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok6_3:
	// 4515 
	/* Ok6_3:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip6_1:
	// 4517 
	/* Skip6_1:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts6 */
	if ((ZF || SF != OF)) {goto skipxyocts6;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       if (y org - y) >= clip y min and (y org - y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip6_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip6_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip6_2 */
	if ((short)(ax) < (short)(circleymin)) {goto skip6_2;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip6_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip6_2;}
	// 0 ;*          min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok6_4 */
	if ((short)(ax) >= (short)(miny)) {goto ok6_4;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*          x aspect = x * aspect ratio
ok6_4:
	// 4519 
	/* Ok6_4:	mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org - y) = x temp
	/* neg 	bx		;(-y) */
	NEG(bx);
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok6_5 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok6_5;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok6_5:
	// 4521 
	/* Ok6_5:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok6_6 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok6_6;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok6_6:
	// 4523 
	/* Ok6_6:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*       end if
skip6_2:
	// 4525 
	/* Skip6_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts6:
	// 4527 
	/* SkipXYOcts6:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop6 */
	goto circleloop6;
	// 0 ;============================================
	// 0 ;* circle origin below / right of clip region
	// 0 ;============================================
	// 0 ;* test if circle is visible before drawing
belowrightdone:
	// 4529 
	/* BelowRightDone: mov	ax,MinY */
	ax = miny;
	/* cmp	ax,DUMMY_MAX	;visible? */
	CMP(ax, 32767);
	/* je	BelowRightSkip	;no -> */
	if ((dw)(ax) == (dw)(32767)) {goto belowrightskip;}
	/* jmp	CircleDone */
	goto circledone;
belowrightskip:
	// 4531 
	/* BelowRightSkip:	jmp	CircleExit */
	goto circleexit;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = DUMMY_MAX
	// 0 ;* max y = clip y max
clipbelowright:
	// 4533 
	/* ClipBelowRight:	mov	ax,DUMMY_MAX */
	ax = 32767;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	ax,CircleYMax */
	ax = circleymax;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop7:
	// 4535 
	/* CircleLoop7: 	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	BelowRightDone */
	if ((short)(cx) > (short)(bx)) {goto belowrightdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (x org - x aspect) <= clip x max then
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jg	Skip7_1 */
	if ((short)(ax) > (short)(circlexmax)) {goto skip7_1;}
	// 0 ;*       if (y org - y) >= clip y min and (y org - y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip7_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip7_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip7_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip7_1;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip7_1 */
	if ((short)(ax) > (short)(circleymax)) {goto skip7_1;}
	// 0 ;*          min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok7_1 */
	if ((short)(ax) >= (short)(miny)) {goto ok7_1;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*          x temp = clip x max
	// 0 ;*          rhsx(y org - y) = x temp
ok7_1:
	// 4537 
	/* Ok7_1:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok7_2 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok7_2;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok7_2:
	// 4539 
	/* Ok7_2:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*       end if
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip7_1:
	// 4541 
	/* Skip7_1:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts7 */
	if ((ZF || SF != OF)) {goto skipxyocts7;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (x org - x aspect) <= clip x max then
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jg	Skip7_2 */
	if ((short)(ax) > (short)(circlexmax)) {goto skip7_2;}
	// 0 ;*          if (y org - y) >= clip y min and (y org - y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip7_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip7_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip7_2 */
	if ((short)(ax) < (short)(circleymin)) {goto skip7_2;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip7_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip7_2;}
	// 0 ;*             min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok7_3 */
	if ((short)(ax) >= (short)(miny)) {goto ok7_3;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*             x temp = clip x max
	// 0 ;*             rhsx(y org - y) = x temp
ok7_3:
	// 4543 
	/* Ok7_3:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = max(x org - x aspect, clip x min)
	// 0 ;*             lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok7_4 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok7_4;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok7_4:
	// 4545 
	/* Ok7_4:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*          end if
	// 0 ;*       end if
skip7_2:
	// 4547 
	/* Skip7_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts7:
	// 4549 
	/* SkipXYOcts7:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop7 */
	goto circleloop7;
	// 0 ;===========================================
	// 0 ;* circle origin below / left of clip region
	// 0 ;===========================================
	// 0 ;* test if circle is visible before drawing
belowleftdone:
	// 4551 
	/* BelowLeftDone: 	mov	ax,MinY */
	ax = miny;
	/* cmp	ax,DUMMY_MAX	;visible? */
	CMP(ax, 32767);
	/* je	BelowLeftSkip	;no -> */
	if ((dw)(ax) == (dw)(32767)) {goto belowleftskip;}
	/* jmp	CircleDone */
	goto circledone;
belowleftskip:
	// 4553 
	/* BelowLeftSkip:	jmp	CircleExit */
	goto circleexit;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = DUMMY_MAX
	// 0 ;* max y = clip y max
clipbelowleft:
	// 4555 
	/* ClipBelowLeft:	mov	ax,DUMMY_MAX */
	ax = 32767;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	ax,CircleYMax */
	ax = circleymax;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop8:
	// 4557 
	/* CircleLoop8:	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	BelowLeftDone */
	if ((short)(cx) > (short)(bx)) {goto belowleftdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (x org + x aspect) >= clip x min then
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jl	Skip8_1 */
	if ((short)(ax) < (short)(circlexmin)) {goto skip8_1;}
	// 0 ;*       if (y org - y) >= clip y min and (y org - y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip8_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip8_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip8_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip8_1;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip8_1 */
	if ((short)(ax) > (short)(circleymax)) {goto skip8_1;}
	// 0 ;*          min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok8_1 */
	if ((short)(ax) >= (short)(miny)) {goto ok8_1;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org - y) = x temp
ok8_1:
	// 4559 
	/* Ok8_1:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok8_2 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok8_2;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok8_2:
	// 4561 
	/* Ok8_2:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = clip x min
	// 0 ;*          lhsx(y org - y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*       end if
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip8_1:
	// 4563 
	/* Skip8_1:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts8 */
	if ((ZF || SF != OF)) {goto skipxyocts8;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (x org + x aspect) >= clip x min then
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jl	Skip8_2 */
	if ((short)(ax) < (short)(circlexmin)) {goto skip8_2;}
	// 0 ;*          if (y org - y) >= clip y min and (y org - y) <= clip y max then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip8_2		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip8_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip8_2 */
	if ((short)(ax) < (short)(circleymin)) {goto skip8_2;}
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip8_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip8_2;}
	// 0 ;*             min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok8_3 */
	if ((short)(ax) >= (short)(miny)) {goto ok8_3;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*             x temp = min(x org + x aspect, clip x max)
	// 0 ;*             rhsx(y org - y) = x temp
ok8_3:
	// 4565 
	/* Ok8_3:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok8_4 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok8_4;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok8_4:
	// 4567 
	/* Ok8_4:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = clip x min
	// 0 ;*             lhsx(y org - y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*          end if
	// 0 ;*       end if
skip8_2:
	// 4569 
	/* Skip8_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts8:
	// 4571 
	/* SkipXYOcts8:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop8 */
	goto circleloop8;
	// 0 ;====================================
	// 0 ;* circle origin right of clip region
	// 0 ;====================================
rightdone:
	// 4573 
	/* RightDone: 	jmp	CircleDone */
	goto circledone;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = clip y max
	// 0 ;* max y = clip y min
clipright:
	// 4575 
	/* ClipRight:	mov	ax,CircleYMax */
	ax = circleymax;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	ax,CircleYMin */
	ax = circleymin;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop9:
	// 4577 
	/* CircleLoop9: 	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	RightDone */
	if ((short)(cx) > (short)(bx)) {goto rightdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (x org - x aspect) <= clip x max then
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jg      Skip9_2 */
	if ((short)(ax) > (short)(circlexmax)) {goto skip9_2;}
	// 0 ;*       if (y org - y) >= clip y min then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip9_1		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip9_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip9_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip9_1;}
	// 0 ;*          min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok9_1 */
	if ((short)(ax) >= (short)(miny)) {goto ok9_1;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*          x temp = clip x max
	// 0 ;*          rhsx(y org - y) = x temp
ok9_1:
	// 4579 
	/* Ok9_1:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok9_2 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok9_2;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok9_2:
	// 4581 
	/* Ok9_2:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*       end if
	// 0 ;*       if (y org + y) <= clip y max then
skip9_1:
	// 4583 
	/* Skip9_1:	mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip9_2 	;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip9_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip9_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip9_2;}
	// 0 ;*          max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok9_3 */
	if ((short)(ax) <= (short)(maxy)) {goto ok9_3;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*          x temp = clip x max
	// 0 ;*          rhsx(y org + y) = x temp
ok9_3:
	// 4585 
	/* Ok9_3:		mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = max(x org - x aspect, clip x min)
	// 0 ;*          lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok9_4 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok9_4;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok9_4:
	// 4587 
	/* Ok9_4:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*       end if
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip9_2:
	// 4589 
	/* Skip9_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts9 */
	if ((ZF || SF != OF)) {goto skipxyocts9;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (x org - x aspect) <= clip x max then
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jg	Skip9_4 */
	if ((short)(ax) > (short)(circlexmax)) {goto skip9_4;}
	// 0 ;*          if (y org - y) >= clip y min then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip9_3		;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip9_3;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip9_3 */
	if ((short)(ax) < (short)(circleymin)) {goto skip9_3;}
	// 0 ;*             min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok9_5 */
	if ((short)(ax) >= (short)(miny)) {goto ok9_5;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*             x temp = clip x max
	// 0 ;*             rhsx(y org - y) = x temp
ok9_5:
	// 4591 
	/* Ok9_5:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = max(x org - x aspect, clip x min)
	// 0 ;*             lhsx(y org - y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok9_6 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok9_6;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok9_6:
	// 4593 
	/* Ok9_6:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*          end if
	// 0 ;*          if (y org + y) <= clip y max then
skip9_3:
	// 4595 
	/* Skip9_3:	mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip9_4 	;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip9_4;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip9_4 */
	if ((short)(ax) > (short)(circleymax)) {goto skip9_4;}
	// 0 ;*             max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok9_7 */
	if ((short)(ax) <= (short)(maxy)) {goto ok9_7;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*             x temp = clip x max
	// 0 ;*             rhsx(y org + y) = x temp
ok9_7:
	// 4597 
	/* Ok9_7:		mov	ax,CircleXMax */
	ax = circlexmax;
	/* mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = max(x org - x aspect, clip x min)
	// 0 ;*             lhsx(y org + y) = x temp
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jge	Ok9_8 */
	if ((short)(ax) >= (short)(circlexmin)) {goto ok9_8;}
	/* mov	ax,CircleXMin */
	ax = circlexmin;
ok9_8:
	// 4599 
	/* Ok9_8:		mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*          end if
	// 0 ;*       end if
skip9_4:
	// 4601 
	/* Skip9_4:       shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts9:
	// 4603 
	/* SkipXYOcts9:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop9 */
	goto circleloop9;
	// 0 ;===================================
	// 0 ;* circle origin left of clip region
	// 0 ;===================================
leftdone:
	// 4605 
	/* LeftDone: 	jmp	CircleDone */
	goto circledone;
	// 0 ;* dx = radius
	// 0 ;* si = y org
	// 0 ;* bp = x org
	// 0 ;* min y = clip y max
	// 0 ;* max y = clip y min
clipleft:
	// 4607 
	/* ClipLeft:	mov	ax,CircleYMax */
	ax = circleymax;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	ax,CircleYMin */
	ax = circleymin;
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;* x = 0
	// 0 ;* y = radius
	// 0 ;* sum = 0
	/* xor	cx,cx */
	XOR(cx, cx);
	/* mov	bx,dx */
	bx = dx;
	/* xor	di,di */
	XOR(di, di);
	/* shl	si,1		;y org * 2 (word access) */
	SHL(si, 1);
	// 0 ;* while(x <= y)
circleloop10:
	// 4609 
	/* CircleLoop10: 	cmp	cx,bx */
	CMP(cx, bx);
	/* jg	LeftDone */
	if ((short)(cx) > (short)(bx)) {goto leftdone;}
	// 0 ;*    swap x, y
	/* xchg	bx,cx */
	XCHG(bx, cx);
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*    x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*    if (x org + x aspect) >= clip x min then
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jl	Skip10_2 */
	if ((short)(ax) < (short)(circlexmin)) {goto skip10_2;}
	// 0 ;*       if (y org - y) >= clip y min then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip10_1	;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip10_1;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip10_1 */
	if ((short)(ax) < (short)(circleymin)) {goto skip10_1;}
	// 0 ;*          min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge     Ok10_1 */
	if ((short)(ax) >= (short)(miny)) {goto ok10_1;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org - y) = x temp
ok10_1:
	// 4611 
	/* Ok10_1:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok10_2 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok10_2;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok10_2:
	// 4613 
	/* Ok10_2:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = clip x min
	// 0 ;*          lhsx(y org - y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*       end if
	// 0 ;*       if (y org + y) <= clip y max then
skip10_1:
	// 4615 
	/* Skip10_1:	mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip10_2	;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip10_2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip10_2 */
	if ((short)(ax) > (short)(circleymax)) {goto skip10_2;}
	// 0 ;*          max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok10_3 */
	if ((short)(ax) <= (short)(maxy)) {goto ok10_3;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*          x temp = min(x org + x aspect, clip x max)
	// 0 ;*          rhsx(y org + y) = x temp
ok10_3:
	// 4617 
	/* Ok10_3:		mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok10_4 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok10_4;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok10_4:
	// 4619 
	/* Ok10_4:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*          x temp = clip x min
	// 0 ;*          lhsx(y org + y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*       end if
	// 0 ;*    end if
	// 0 ;*    swap x, y
skip10_2:
	// 4621 
	/* Skip10_2:	shr	bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	/* xchg	bx,cx */
	XCHG(bx, cx);
	// 0 ;*    sum = sum + x
	// 0 ;*    if sum > 0 then
	/* add	di,cx */
	ADD(di, cx);
	/* jle	SkipXYOcts10 */
	if ((ZF || SF != OF)) {goto skipxyocts10;}
	/* shl	bx,1		;y * 2 (word access) */
	SHL(bx, 1);
	// 0 ;*       x aspect = x * aspect ratio
	/* mov	dx,cx */
	dx = cx;
	/* shr	dx,1		;*0.5 */
	SHR(dx, 1);
	/* shr	dx,1		;*0.25 */
	SHR(dx, 1);
	/* adc	dx,cx	;*1.25 */
	ADC(dx, cx);
	// 0 ;*       if (x org + x aspect) >= clip x min then
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMin */
	CMP(ax, circlexmin);
	/* jl	Skip10_4 */
	if ((short)(ax) < (short)(circlexmin)) {goto skip10_4;}
	// 0 ;*          if (y org - y) >= clip y min then
	/* mov	ax,si */
	ax = si;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* js	Skip10_3	;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip10_3;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMin */
	CMP(ax, circleymin);
	/* jl	Skip10_3 */
	if ((short)(ax) < (short)(circleymin)) {goto skip10_3;}
	// 0 ;*             min y = min(min y, y org - y)
	/* cmp	ax,MinY */
	CMP(ax, miny);
	/* jge	Ok10_5 */
	if ((short)(ax) >= (short)(miny)) {goto ok10_5;}
	/* mov	MinY,ax */
	miny = ax;
	// 0 ;*             x temp = min(x org + x aspect, clip x max)
	// 0 ;*             rhsx(y org - y) = x temp
ok10_5:
	// 4623 
	/* Ok10_5:		neg	bx		;(-y) */
	NEG(bx);
	/* mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok10_6 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok10_6;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok10_6:
	// 4625 
	/* Ok10_6:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = clip x min
	// 0 ;*             lhsx(y org - y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	/* neg	bx		;(+y) */
	NEG(bx);
	// 0 ;*          end if
	// 0 ;*          if (y org + y) <= clip y max then
skip10_3:
	// 4627 
	/* Skip10_3:	mov	ax,si */
	ax = si;
	/* add	ax,bx */
	ADD(ax, bx);
	/* js	Skip10_4	;not valid if -ve -> */
	if ((short)(ax) < 0) {goto skip10_4;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,CircleYMax */
	CMP(ax, circleymax);
	/* jg	Skip10_4 */
	if ((short)(ax) > (short)(circleymax)) {goto skip10_4;}
	// 0 ;*             max y = max(max y, y org + y)
	/* cmp	ax,MaxY */
	CMP(ax, maxy);
	/* jle	Ok10_7 */
	if ((short)(ax) <= (short)(maxy)) {goto ok10_7;}
	/* mov	MaxY,ax */
	maxy = ax;
	// 0 ;*             x temp = min(x org + x aspect, clip x max)
	// 0 ;*             rhsx(y org + y) = x temp
ok10_7:
	// 4629 
	/* Ok10_7:		mov	ax,bp */
	ax = bp;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,CircleXMax */
	CMP(ax, circlexmax);
	/* jle	Ok10_8 */
	if ((short)(ax) <= (short)(circlexmax)) {goto ok10_8;}
	/* mov	ax,CircleXMax */
	ax = circlexmax;
ok10_8:
	// 4631 
	/* Ok10_8:		mov	RhsX[si+bx],ax */
	*(dw*)(((db*)&rhsx)+si+bx) = ax;
	// 0 ;*             x temp = clip x min
	// 0 ;*             lhsx(y org + y) = x temp
	/* mov	ax,CircleXMin */
	ax = circlexmin;
	/* mov	LhsX[si+bx],ax */
	*(dw*)(((db*)&lhsx)+si+bx) = ax;
	// 0 ;*          end if
	// 0 ;*       end if
skip10_4:
	// 4633 
	/* Skip10_4:       shr bx,1		;y / 2 (restore) */
	SHR(bx, 1);
	// 0 ;*       sum = sum - y
	// 0 ;*       y = y - 1
	/* sub	di,bx */
	SUB(di, bx);
	/* dec	bx */
	DEC(bx);
	// 0 ;*    end if
	// 0 ;*    x = x + 1
skipxyocts10:
	// 4635 
	/* SkipXYOcts10:	inc	cx */
	INC(cx);
	// 0 ;* while end
	/* jmp	CircleLoop10 */
	goto circleloop10;

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kabovedone: 	goto abovedone;
        case m2c::kaboveleftdone: 	goto aboveleftdone;
        case m2c::kaboveleftskip: 	goto aboveleftskip;
        case m2c::kaboverightdone: 	goto aboverightdone;
        case m2c::kaboverightskip: 	goto aboverightskip;
        case m2c::kbelowdone: 	goto belowdone;
        case m2c::kbelowleftdone: 	goto belowleftdone;
        case m2c::kbelowleftskip: 	goto belowleftskip;
        case m2c::kbelowrightdone: 	goto belowrightdone;
        case m2c::kbelowrightskip: 	goto belowrightskip;
        case m2c::kcircledone: 	goto circledone;
        case m2c::kcircleexit: 	goto circleexit;
        case m2c::kcirclefill: 	goto circlefill;
        case m2c::kcircleloop1: 	goto circleloop1;
        case m2c::kcircleloop10: 	goto circleloop10;
        case m2c::kcircleloop2: 	goto circleloop2;
        case m2c::kcircleloop3: 	goto circleloop3;
        case m2c::kcircleloop4: 	goto circleloop4;
        case m2c::kcircleloop5: 	goto circleloop5;
        case m2c::kcircleloop6: 	goto circleloop6;
        case m2c::kcircleloop7: 	goto circleloop7;
        case m2c::kcircleloop8: 	goto circleloop8;
        case m2c::kcircleloop9: 	goto circleloop9;
        case m2c::kcirclemesh: 	goto circlemesh;
        case m2c::kcirclesmoke: 	goto circlesmoke;
        case m2c::kclipabove: 	goto clipabove;
        case m2c::kclipaboveleft: 	goto clipaboveleft;
        case m2c::kclipaboveright: 	goto clipaboveright;
        case m2c::kclipbelow: 	goto clipbelow;
        case m2c::kclipbelowleft: 	goto clipbelowleft;
        case m2c::kclipbelowright: 	goto clipbelowright;
        case m2c::kclipcirclelink: 	goto clipcirclelink;
        case m2c::kclipleft: 	goto clipleft;
        case m2c::kclippedcircle: 	goto clippedcircle;
        case m2c::kclipright: 	goto clipright;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        case m2c::kinsideclip: 	goto insideclip;
        case m2c::kintocirclefill: 	goto intocirclefill;
        case m2c::kleftdone: 	goto leftdone;
        case m2c::kok10_1: 	goto ok10_1;
        case m2c::kok10_2: 	goto ok10_2;
        case m2c::kok10_3: 	goto ok10_3;
        case m2c::kok10_4: 	goto ok10_4;
        case m2c::kok10_5: 	goto ok10_5;
        case m2c::kok10_6: 	goto ok10_6;
        case m2c::kok10_7: 	goto ok10_7;
        case m2c::kok10_8: 	goto ok10_8;
        case m2c::kok2_1: 	goto ok2_1;
        case m2c::kok2_10: 	goto ok2_10;
        case m2c::kok2_2: 	goto ok2_2;
        case m2c::kok2_3: 	goto ok2_3;
        case m2c::kok2_4: 	goto ok2_4;
        case m2c::kok2_5: 	goto ok2_5;
        case m2c::kok2_6: 	goto ok2_6;
        case m2c::kok2_7: 	goto ok2_7;
        case m2c::kok2_8: 	goto ok2_8;
        case m2c::kok2_9: 	goto ok2_9;
        case m2c::kok3_1: 	goto ok3_1;
        case m2c::kok3_2: 	goto ok3_2;
        case m2c::kok3_3: 	goto ok3_3;
        case m2c::kok3_4: 	goto ok3_4;
        case m2c::kok3_5: 	goto ok3_5;
        case m2c::kok3_6: 	goto ok3_6;
        case m2c::kok4_1: 	goto ok4_1;
        case m2c::kok4_2: 	goto ok4_2;
        case m2c::kok4_3: 	goto ok4_3;
        case m2c::kok4_4: 	goto ok4_4;
        case m2c::kok5_1: 	goto ok5_1;
        case m2c::kok5_2: 	goto ok5_2;
        case m2c::kok5_3: 	goto ok5_3;
        case m2c::kok5_4: 	goto ok5_4;
        case m2c::kok6_1: 	goto ok6_1;
        case m2c::kok6_2: 	goto ok6_2;
        case m2c::kok6_3: 	goto ok6_3;
        case m2c::kok6_4: 	goto ok6_4;
        case m2c::kok6_5: 	goto ok6_5;
        case m2c::kok6_6: 	goto ok6_6;
        case m2c::kok7_1: 	goto ok7_1;
        case m2c::kok7_2: 	goto ok7_2;
        case m2c::kok7_3: 	goto ok7_3;
        case m2c::kok7_4: 	goto ok7_4;
        case m2c::kok8_1: 	goto ok8_1;
        case m2c::kok8_2: 	goto ok8_2;
        case m2c::kok8_3: 	goto ok8_3;
        case m2c::kok8_4: 	goto ok8_4;
        case m2c::kok9_1: 	goto ok9_1;
        case m2c::kok9_2: 	goto ok9_2;
        case m2c::kok9_3: 	goto ok9_3;
        case m2c::kok9_4: 	goto ok9_4;
        case m2c::kok9_5: 	goto ok9_5;
        case m2c::kok9_6: 	goto ok9_6;
        case m2c::kok9_7: 	goto ok9_7;
        case m2c::kok9_8: 	goto ok9_8;
        case m2c::koutcode1: 	goto outcode1;
        case m2c::koutcode2: 	goto outcode2;
        case m2c::koutcode3: 	goto outcode3;
        case m2c::koutcode4: 	goto outcode4;
        case m2c::koutsideclip: 	goto outsideclip;
        case m2c::koutsidelink: 	goto outsidelink;
        case m2c::krightdone: 	goto rightdone;
        case m2c::kskip10_1: 	goto skip10_1;
        case m2c::kskip10_2: 	goto skip10_2;
        case m2c::kskip10_3: 	goto skip10_3;
        case m2c::kskip10_4: 	goto skip10_4;
        case m2c::kskip2_1: 	goto skip2_1;
        case m2c::kskip2_2: 	goto skip2_2;
        case m2c::kskip2_3: 	goto skip2_3;
        case m2c::kskip2_4: 	goto skip2_4;
        case m2c::kskip3_1: 	goto skip3_1;
        case m2c::kskip3_2: 	goto skip3_2;
        case m2c::kskip4_1: 	goto skip4_1;
        case m2c::kskip4_2: 	goto skip4_2;
        case m2c::kskip5_1: 	goto skip5_1;
        case m2c::kskip5_2: 	goto skip5_2;
        case m2c::kskip6_1: 	goto skip6_1;
        case m2c::kskip6_2: 	goto skip6_2;
        case m2c::kskip7_1: 	goto skip7_1;
        case m2c::kskip7_2: 	goto skip7_2;
        case m2c::kskip8_1: 	goto skip8_1;
        case m2c::kskip8_2: 	goto skip8_2;
        case m2c::kskip9_1: 	goto skip9_1;
        case m2c::kskip9_2: 	goto skip9_2;
        case m2c::kskip9_3: 	goto skip9_3;
        case m2c::kskip9_4: 	goto skip9_4;
        case m2c::kskipxyocts1: 	goto skipxyocts1;
        case m2c::kskipxyocts10: 	goto skipxyocts10;
        case m2c::kskipxyocts2: 	goto skipxyocts2;
        case m2c::kskipxyocts3: 	goto skipxyocts3;
        case m2c::kskipxyocts4: 	goto skipxyocts4;
        case m2c::kskipxyocts5: 	goto skipxyocts5;
        case m2c::kskipxyocts6: 	goto skipxyocts6;
        case m2c::kskipxyocts7: 	goto skipxyocts7;
        case m2c::kskipxyocts8: 	goto skipxyocts8;
        case m2c::kskipxyocts9: 	goto skipxyocts9;
        case m2c::kunclippedcircle: 	goto unclippedcircle;
        default: return __dispatch_call(__disp, _state);
    };
}


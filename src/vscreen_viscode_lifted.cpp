/* THIS IS GENERATED FILE */

        
#include "vscreen.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
vsetviewport:
	// 503 
	// 0 ;----------------------
	// 0 ;* reset rotation angle
	// 0 ;----------------------
edummylabel1:
	// 4369 
	/* call	FAR PTR VSetRotation */
	CALLF(vsetrotation, 0);
	// 0 ;--------------------------
	// 0 ;* copy VIEWPORT data block
	// 0 ;--------------------------
	/* mov	di,OFFSET VP */
	di = m2c::near_offset_external(vp);
	/* mov	cx,VP_REC_SIZE */
	cx = 10;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 517 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 519 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 520 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 521 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 0 ;-----------------------------
	// 0 ;* calc clipping window limits
	// 0 ;-----------------------------
	/* mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	// 0 ;* limit = (VP.V_WIDTH / 2) << VP.V_SCALE_DN
	// 0 ;*
	// 0 ;* CLIPR = limit - 1
	// 0 ;* CLIPL = -limit
	/* mov	ax,VP.V_WIDTH */
	ax = vp.v_width;
	/* shr	ax,1		;assume even width (no resolution lost) */
	SHR(ax, 1);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	XADJUST,ax */
	xadjust = ax;
	/* neg	ax		;-limit */
	NEG(ax);
	/* mov	CLIPL,ax */
	clipl = ax;
	/* neg	ax */
	NEG(ax);
	/* dec	ax		;limit - 1 */
	DEC(ax);
	/* mov	CLIPR,ax */
	clipr = ax;
	// 0 ;* limit = (VP.V_DEPTH / 2) << VP.V_SCALE_DN
	// 0 ;*
	// 0 ;* CLIPA = limit - 1
	// 0 ;* CLIPB = -limit
	/* mov	ax,VP.V_DEPTH */
	ax = vp.v_depth;
	/* shr	ax,1		;assume even depth (no resolution lost) */
	SHR(ax, 1);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	YADJUST,ax */
	yadjust = ax;
	/* neg	ax		;-limit */
	NEG(ax);
	/* mov	CLIPB,ax */
	clipb = ax;
	/* neg	ax */
	NEG(ax);
	/* dec	ax		;limit - 1 */
	DEC(ax);
	/* mov	CLIPA,ax */
	clipa = ax;
	// 0 ;----------------------
	// 0 ;* calc viewport origin (bottom lh corner)
	// 0 ;----------------------
	/* mov	ax,VP.V_X_ORG */
	ax = vp.v_x_org;
	/* mov	X_ORG,ax */
	x_org = ax;
	/* mov	ax,VP.V_Y_ORG */
	ax = vp.v_y_org;
	/* add	ax,VP.V_DEPTH */
	ADD(ax, vp.v_depth);
	/* dec	ax */
	DEC(ax);
	/* mov	Y_ORG,ax */
	y_org = ax;
	// 0 ;----------------------
	// 0 ;* calc viewport limits
	// 0 ;----------------------
	// 0 ;* XCRTMAX = VP.V_WIDTH - 1
	/* mov	ax,VP.V_WIDTH */
	ax = vp.v_width;
	/* dec	ax */
	DEC(ax);
	/* mov	XCRTMAX,ax */
	xcrtmax = ax;
	// 0 ;* YCRTMAX = VP.V_DEPTH - 1
	/* mov	ax,VP.V_DEPTH */
	ax = vp.v_depth;
	/* dec	ax */
	DEC(ax);
	/* mov	YCRTMAX,ax */
	ycrtmax = ax;
	/* ret */
	RETF(0);
vsetrotation:
	// 590 
	/* mov	bx,ax ;* kill: ax, bx, dx, flags */
	bx = ax;
edummylabel2:
	// 4371 
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&sintable)+bx););	// 595 						mov	ax,SinTable[bx] */
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&costable)+bx););	// 596 						mov	dx,CosTable[bx] */
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	dx,CosTable[bx] */
	dx = *(dw*)(((db*)&costable)+bx);
	/* mov	VSinR,ax */
	vsinr = ax;
	/* mov	VCosR,dx */
	vcosr = dx;
	/* ret */
	RETF(0);
vcalcoutcodes:
	// 615 
	/* push	si 		;store last vertex index */
	PUSH(si);
edummylabel3:
	// 4373 
	/* mov	cl,VP.V_SCALE_UP */
	cl = vp.v_scale_up;
	// 0 ;* dl = object non-visible test mask, dh = object totally visible test mask
	/* mov	dx,000ffh */
	dx = 0x000ff;
ocodeloop:
	// 4375 
	/* OCodeLoop:	push	dx */
	PUSH(dx);
	/* call	VTransform	;scale and rotate */
	CALL(vtransform, 0);
	/* pop	dx */
	POP(dx);
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	di,CLIPR	;right clip? */
	CMP(di, clipr);
	/* jle	__m2c_macrolocal_3_OCode1		;no -> */
	if ((short)(di) <= (short)(clipr)) {goto __m2c_macrolocal_3_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_3_OCode2 */
	goto __m2c_macrolocal_3_ocode2;
__m2c_macrolocal_3_ocode1:
	// 4377 
	/* __m2c_macrolocal_3_OCode1:		cmp	di,CLIPL	;left clip? */
	CMP(di, clipl);
	/* jge	__m2c_macrolocal_3_OCode2		;no -> */
	if ((short)(di) >= (short)(clipl)) {goto __m2c_macrolocal_3_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_3_ocode2:
	// 4379 
	/* __m2c_macrolocal_3_OCode2:		cmp	bp,CLIPA	;above clip? */
	CMP(bp, clipa);
	/* jle	__m2c_macrolocal_3_Ocode3		;no -> */
	if ((short)(bp) <= (short)(clipa)) {goto __m2c_macrolocal_3_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_3_OCode4 */
	goto __m2c_macrolocal_3_ocode4;
__m2c_macrolocal_3_ocode3:
	// 4381 
	/* __m2c_macrolocal_3_Ocode3:		cmp	bp,CLIPB	;below clip? */
	CMP(bp, clipb);
	/* jge	__m2c_macrolocal_3_OCode4		;no -> */
	if ((short)(bp) >= (short)(clipb)) {goto __m2c_macrolocal_3_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_3_ocode4:
	// 4383 
	/* __m2c_macrolocal_3_OCode4:		test	al,al */
	TEST(al, al);
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* and	dl,al		;update non-visible test mask */
	AND(dl, al);
	/* or	dh,al		;update totally visible test mask */
	OR(dh, al);
	/* sub	si,2		;next co-ord */
	SUB(si, 2);
	/* jnc	OCodeLoop */
	if (!CF) {goto ocodeloop;}
	/* pop	si		;restore last vertex index */
	POP(si);
	/* test	dl,dl		;object visible? */
	TEST(dl, dl);
	/* jnz	SkipObject	;no -> */
	if ((dl & dl) != 0) {goto skipobject;}
	/* test	dh,dh		;object totally visible? */
	TEST(dh, dh);
	/* jz	DrawObject	;yes -> */
	if (!(dh & dh)) {goto drawobject;}
	// 0 ;* clip object - object partially visible
clipobject:
	// 4385 
	/* ClipObject:	mov	ax,CLIP_OBJECT */
	ax = 2;
	/* mov	ObjectDrawMode,ax */
	objectdrawmode = ax;
	/* clc			;cf = 0 (object visible) */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;* skip object - object totally non-visible
skipobject:
	// 4387 
	/* SkipObject:	mov	ax,SKIP_OBJECT */
	ax = 4;
	/* mov	ObjectDrawMode,ax */
	objectdrawmode = ax;
	/* stc			;cf = 1 (object non-visible) */
	STC;
	/* ret */
	RETF(0);
	// 0 ;* draw object - object totally visible, generate all crt co-ords now
drawobject:
	// 4389 
	/* DrawObject:	mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
genxycrtloop:
	// 4391 
	/* GenXYCrtLoop:	mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	dx,Ye[si] */
	dx = *(dw*)(((db*)&ye)+si);
	/* add	ax,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(ax, xadjust);
	/* shr	ax,cl		;scale down */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* cmp	ax,XCRTMAX	;in limits? */
	CMP(ax, xcrtmax);
	/* jbe	__m2c_macrolocal_4_XCrtOk		;yes -> */
	if ((dw)(ax) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_4_xcrtok;}
	/* mov	ax,XCRTMAX */
	ax = xcrtmax;
__m2c_macrolocal_4_xcrtok:
	// 4393 
	/* __m2c_macrolocal_4_XCrtOk:		add	ax,X_ORG */
	ADD(ax, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_4_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_4_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_4_ycrtok:
	// 4395 
	/* __m2c_macrolocal_4_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	/* mov	XCrt[si],ax */
	*(dw*)(((db*)&xcrt)+si) = ax;
	/* mov	WORD PTR YCrt[si],dx */
	*(dw*)((&ycrt)+si) = dx;
	/* sub	si,2		;next vertex index */
	SUB(si, 2);
	/* jnc	GenXYCrtLoop */
	if (!CF) {goto genxycrtloop;}
	/* mov	ax,DRAW_OBJECT */
	ax = 0;
	/* mov	ObjectDrawMode,ax */
	objectdrawmode = ax;
	/* clc			;cf = 0 (object visible) */
	CLC;
	/* ret */
	RETF(0);
vquickoutcodes:
	// 702 
	// 0 ;* dl = object non-visible test mask
edummylabel4:
	// 4397 
	/* mov	dl,0ffh */
	dl = 0x0ff;
	/* mov	cl,VP.V_SCALE_UP */
	cl = vp.v_scale_up;
quickocodeloop:
	// 4399 
	/* QuickOCodeLoop:	push	dx */
	PUSH(dx);
	/* call	VTransform	;scale and rotate */
	CALL(vtransform, 0);
	/* pop	dx */
	POP(dx);
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	di,CLIPR	;right clip? */
	CMP(di, clipr);
	/* jle	__m2c_macrolocal_5_OCode1		;no -> */
	if ((short)(di) <= (short)(clipr)) {goto __m2c_macrolocal_5_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_5_OCode2 */
	goto __m2c_macrolocal_5_ocode2;
__m2c_macrolocal_5_ocode1:
	// 4401 
	/* __m2c_macrolocal_5_OCode1:		cmp	di,CLIPL	;left clip? */
	CMP(di, clipl);
	/* jge	__m2c_macrolocal_5_OCode2		;no -> */
	if ((short)(di) >= (short)(clipl)) {goto __m2c_macrolocal_5_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_5_ocode2:
	// 4403 
	/* __m2c_macrolocal_5_OCode2:		cmp	bp,CLIPA	;above clip? */
	CMP(bp, clipa);
	/* jle	__m2c_macrolocal_5_Ocode3		;no -> */
	if ((short)(bp) <= (short)(clipa)) {goto __m2c_macrolocal_5_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_5_OCode4 */
	goto __m2c_macrolocal_5_ocode4;
__m2c_macrolocal_5_ocode3:
	// 4405 
	/* __m2c_macrolocal_5_Ocode3:		cmp	bp,CLIPB	;below clip? */
	CMP(bp, clipb);
	/* jge	__m2c_macrolocal_5_OCode4		;no -> */
	if ((short)(bp) >= (short)(clipb)) {goto __m2c_macrolocal_5_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_5_ocode4:
	// 4407 
	/* __m2c_macrolocal_5_OCode4:		test	al,al */
	TEST(al, al);
	/* and	dl,al		;update non-visible test mask */
	AND(dl, al);
	/* sub	si,2		;next eye co-ord */
	SUB(si, 2);
	/* jnc	QuickOCodeLoop */
	if (!CF) {goto quickocodeloop;}
	/* xor	al,al */
	XOR(al, al);
	/* sub	al,dl		;cf = 0 = visible, cf = 1 = non-visible */
	SUB(al, dl);
	/* ret */
	RETF(0);
vtransform:
	// 744 
	// 0 ;----------
	// 0 ;* scale up
	// 0 ;----------
edummylabel5:
	// 4409 
	/* mov	di,Xe[si] */
	di = *(dw*)(((db*)&xe)+si);
	/* sal	di,cl		;xs = x << cl */
	SAL(di, cl);
	/* mov	bp,Ye[si] */
	bp = *(dw*)(((db*)&ye)+si);
	/* sal	bp,cl		;ys = y << cl */
	SAL(bp, cl);
	// 0 ;-----------------------------------
	// 0 ;* rotate xs and adjust aspect ratio
	// 0 ;-----------------------------------
	// 0 ;* xt = (xs * VCosR + ys * VSinR) * 1.25
	/* mov	ax,VCosR */
	ax = vcosr;
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
	/* mov	bx,dx */
	bx = dx;
	// 0 ;xs * VCosR
	/* mov	ax,VSinR */
	ax = vsinr;
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
	// 0 ;ys * VSinR
	/* add	dx,bx 		;xs * VCosR + ys * VSinR */
	ADD(dx, bx);
	/* mov	bx,dx */
	bx = dx;
	/* sar	bx,1		;/2 (0.5) */
	SAR(bx, 1);
	/* sar	bx,1		;/4 (0.25) */
	SAR(bx, 1);
	/* add	dx,bx		;(xs * VCosR + ys * VSinR) * 1.25 */
	ADD(dx, bx);
	/* mov	Xe[si],dx */
	*(dw*)(((db*)&xe)+si) = dx;
	// 0 ;----------
	// 0 ;* rotate y
	// 0 ;----------
	// 0 ;* yt = ys * VCosR - xs * VSinR
	/* xchg	dx,di		;dx = xs, di = xt */
	XCHG(dx, di);
	/* mov	ax,VSinR */
	ax = vsinr;
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
	/* mov	bx,dx */
	bx = dx;
	// 0 ;xs * VSinR
	/* mov	ax,VCosR */
	ax = vcosr;
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
	/* mov	bp,dx */
	bp = dx;
	// 0 ;ys * VCosR
	/* sub	bp,bx  		;ys * VCosR - xs * VSinR */
	SUB(bp, bx);
	/* mov	Ye[si],bp */
	*(dw*)(((db*)&ye)+si) = bp;
	/* ret */
	RETN(0);
vpolyclip:
	// 823 
	/* mov	bx,ObjectDrawMode ;* kill: ax, bx, cx, dx, bp, flags */
	bx = objectdrawmode;
edummylabel6:
	// 4411 
__disp=*(dw*)(((db*)&polyclipmode)+bx);
	/* jmp	PolyClipMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
drawpoly:
	// 838 
	/* mov	bp,di		;store crt buffer ptr */
	bp = di;
edummylabel7:
	// 4413 
	/* xor	bx,bx */
	XOR(bx, bx);
drawpolyloop:
	// 4415 
	/* DrawPolyLoop:	lodsb			;fetch vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	SortPolyTerm	;yes -> */
	if ((db)(al) == (db)(-1)) {goto sortpolyterm;}
	/* mov	bl,al */
	bl = al;
	/* mov	ax,XCrt[bx] */
	ax = *(dw*)(((db*)&xcrt)+bx);
	/* stosw */
	{ STOSW; }
	/* mov	ax,WORD PTR YCrt[bx] */
	ax = *(dw*)((&ycrt)+bx);
	/* stosw */
	{ STOSW; }
	/* jmp	DrawPolyLoop */
	goto drawpolyloop;
sortpolyterm:
	// 4417 
	/* SortPolyTerm:	cmp	di,bp		;any points? */
	CMP(di, bp);
	/* je	DrawPolyFail	;no -> */
	if ((dw)(di) == (dw)(bp)) {goto drawpolyfail;}
	/* xchg	bp,si		;store ptr to next polygon data */
	XCHG(bp, si);
	/* movsw			;copy 1st x crt to end */
	{ MOVSW; }
	/* movsw			;copy 1st y crt to end */
	{ MOVSW; }
	/* mov	ax,-1 */
	ax = -1;
	/* stosw			;store terminator */
	{ STOSW; }
	/* mov	si,bp		;restore ptr to next polygon data */
	si = bp;
	/* clc			;cf = 0 = visible */
	CLC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
drawpolyfail:
	// 4419 
	/* DrawPolyFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
clippoly:
	// 873 
	/* mov	TempPtr1,di ;* note: Uses Sutherland - Hodgman polygon clipping algorithm. */
	tempptr1 = di;
edummylabel8:
	// 4421 
	/* xor	bx,bx */
	XOR(bx, bx);
	// 0 ;* dl = object non-visible test mask, dh = object totally visible test mask
	/* mov	dx,000ffh */
	dx = 0x000ff;
	/* mov	di,OFFSET ClipBuffer+6 */
	di = m2c::near_offset_external(clipbuffer)+6;
nextpolycoord:
	// 4423 
	/* NextPolyCoord:	lodsb			;fetch vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	SortPolyVis	;yes, sort polygon visibility -> */
	if ((db)(al) == (db)(-1)) {goto sortpolyvis;}
	/* mov	bl,al */
	bl = al;
	/* mov	ax,Xe[bx] */
	ax = *(dw*)(((db*)&xe)+bx);
	/* stosw */
	{ STOSW; }
	/* mov	ax,Ye[bx] */
	ax = *(dw*)(((db*)&ye)+bx);
	/* stosw */
	{ STOSW; }
	/* mov	al,OutCode[bx] */
	al = *((&outcode)+bx);
	/* stosw			;store word for padding */
	{ STOSW; }
	/* and	dl,al		;update non-visible test mask */
	AND(dl, al);
	/* or	dh,al		;update totally visible test mask */
	OR(dh, al);
	/* jmp	NextPolyCoord */
	goto nextpolycoord;
	// 0 ;* sort polygon visibility (totally visible, partially visible, non-visible)
sortpolyvis:
	// 4425 
	/* SortPolyVis:	push	si		;store ptr to next polygon data */
	PUSH(si);
	/* mov	ClipRecover,sp	;recover stack to here if clip error */
	cliprecover = sp;
	/* mov	si,OFFSET ClipBuffer+6 */
	si = m2c::near_offset_external(clipbuffer)+6;
	/* test	dl,dl		;polygon non-visible? */
	TEST(dl, dl);
	/* jnz	ClipPolyFailLnk	;yes -> */
	if ((dl & dl) != 0) {goto clippolyfaillnk;}
	// 0 ;* if partially visible then jump to first clip required
	/* xor	bx,bx		;reset index */
	XOR(bx, bx);
	/* rcr	dh,1		;cf = 1 = left clip required */
	RCR(dh, 1);
	/* jc	ClipSwitch */
	if (CF) {goto clipswitch;}
	/* add	bx,2 */
	ADD(bx, 2);
	/* rcr	dh,1		;cf = 1 = right clip required */
	RCR(dh, 1);
	/* jc	ClipSwitch */
	if (CF) {goto clipswitch;}
	/* add	bx,2 */
	ADD(bx, 2);
	/* rcr	dh,1		;cf = 1 = below clip required */
	RCR(dh, 1);
	/* jc	ClipSwitch */
	if (CF) {goto clipswitch;}
	/* add	bx,2 */
	ADD(bx, 2);
	/* rcr	dh,1		;cf = 1 = above clip required */
	RCR(dh, 1);
	/* jc	ClipSwitch */
	if (CF) {goto clipswitch;}
	/* add	bx,2 */
	ADD(bx, 2);
clipswitch:
	// 4427 
__disp=*(dw*)(((db*)&intopolyclip)+bx);
	/* ClipSwitch:	jmp	IntoPolyClip[bx] */
	J(return __dispatch_call_ext(__disp, _state));
clippolyfaillnk:
	// 4429 
	/* ClipPolyFailLnk:jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;----------------------
	// 0 ;* clip all points left
	// 0 ;----------------------
intoleftclip:
	// 4431 
	/* IntoLeftClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-6]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-6)));
	/* mov	[si-6],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-6))), m2c::getdata(ax));
	/* mov	ax,[di-4] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-4)));
	/* mov	[si-4],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-4))), m2c::getdata(ax));
	/* mov	ax,[di-2] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-2)));
	/* mov	[si-2],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-2))), m2c::getdata(ax));
	/* mov	dl,al */
	dl = al;
	/* and	dl,OCODEL 	;dl = end b outcode */
	AND(dl, 0x1);
leftcliploop:
	// 4433 
	/* LeftClipLoop:	mov	dh,[si+4] */
	dh = m2c::getdata(*(raddr(ds,si+4)));
	/* and	dh,OCODEL	;dh = end a outcode */
	AND(dh, 0x1);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of viewport? */
	XOR(al, dl);
	/* jz 	SkipLeftClip	;yes -> */
	if (al == 0) {goto skipleftclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipLeft */
	CALL(polyclipleft, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* pop 	dx */
	POP(dx);
skipleftclip:
	// 4435 
	/* SkipLeftClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipLeftPoint	;no -> */
	if ((dh & dh) != 0) {goto skipleftpoint;}
	/* movsw			;store new point if visible */
	{ MOVSW; }
	/* movsw */
	{ MOVSW; }
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextLeftClip */
	goto nextleftclip;
skipleftpoint:
	// 4437 
	/* SkipLeftPoint:	add	si,6		;skip point */
	ADD(si, 6);
nextleftclip:
	// 4439 
	/* NextLeftClip:	mov	dl,dh */
	dl = dh;
	/* cmp	si,LastPtr	;all points done? */
	CMP(si, lastptr);
	/* jb	LeftClipLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto leftcliploop;}
	/* cmp	si,di		;any points remaining? */
	CMP(si, di);
	/* jne	RightClipStart	;yes, move on to next clip -> */
	if ((dw)(si) != (dw)(di)) {goto rightclipstart;}
leftfail:
	// 4441 
	/* LeftFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;-----------------------
	// 0 ;* clip all points right
	// 0 ;-----------------------
rightclipstart:
	// 4443 
	/* RightClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,0001b	;any rogue points? */
	TEST(al, 0x1);
	/* jnz	LeftFail	;yes, clip failed -> */
	if ((al & 0x1) != 0) {goto leftfail;}
	/* test	al,OCODER	;any right clipping required? */
	TEST(al, 0x2);
	/* jz	BelowClipStart	;no -> */
	if (!(al & 0x2)) {goto belowclipstart;}
intorightclip:
	// 4445 
	/* IntoRightClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-6]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-6)));
	/* mov	[si-6],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-6))), m2c::getdata(ax));
	/* mov	ax,[di-4] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-4)));
	/* mov	[si-4],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-4))), m2c::getdata(ax));
	/* mov	ax,[di-2] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-2)));
	/* mov	[si-2],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-2))), m2c::getdata(ax));
	/* mov	dl,al */
	dl = al;
	/* and	dl,OCODER 	;dl = end b outcode */
	AND(dl, 0x2);
rightcliploop:
	// 4447 
	/* RightClipLoop:	mov	dh,[si+4] */
	dh = m2c::getdata(*(raddr(ds,si+4)));
	/* and	dh,OCODER	;dh = end a outcode */
	AND(dh, 0x2);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of viewport? */
	XOR(al, dl);
	/* jz 	SkipRightClip	;yes -> */
	if (al == 0) {goto skiprightclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipRight */
	CALL(polyclipright, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* pop 	dx */
	POP(dx);
skiprightclip:
	// 4449 
	/* SkipRightClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipRightPoint	;no -> */
	if ((dh & dh) != 0) {goto skiprightpoint;}
	/* movsw			;store new point if visible */
	{ MOVSW; }
	/* movsw */
	{ MOVSW; }
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextRightClip */
	goto nextrightclip;
skiprightpoint:
	// 4451 
	/* SkipRightPoint:	add	si,6		;skip point */
	ADD(si, 6);
nextrightclip:
	// 4453 
	/* NextRightClip:	mov	dl,dh */
	dl = dh;
	/* cmp	si,LastPtr	;all points done? */
	CMP(si, lastptr);
	/* jb	RightClipLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto rightcliploop;}
	/* cmp	si,di		;any points remaining? */
	CMP(si, di);
	/* jne	BelowClipStart	;yes, move on to next clip -> */
	if ((dw)(si) != (dw)(di)) {goto belowclipstart;}
rightfail:
	// 4455 
	/* RightFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;-----------------------
	// 0 ;* clip all points below
	// 0 ;-----------------------
belowclipstart:
	// 4457 
	/* BelowClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,0011b	;any rogue points? */
	TEST(al, 0x3);
	/* jnz	RightFail	;yes, clip failed -> */
	if ((al & 0x3) != 0) {goto rightfail;}
	/* test	al,OCODEB	;any below clipping required? */
	TEST(al, 0x4);
	/* jz	AboveClipStart	;no -> */
	if (!(al & 0x4)) {goto aboveclipstart;}
intobelowclip:
	// 4459 
	/* IntoBelowClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-6]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-6)));
	/* mov	[si-6],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-6))), m2c::getdata(ax));
	/* mov	ax,[di-4] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-4)));
	/* mov	[si-4],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-4))), m2c::getdata(ax));
	/* mov	ax,[di-2] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-2)));
	/* mov	[si-2],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-2))), m2c::getdata(ax));
	/* mov	dl,al */
	dl = al;
	/* and	dl,OCODEB 	;dl = end b outcode */
	AND(dl, 0x4);
belowcliploop:
	// 4461 
	/* BelowClipLoop:	mov	dh,[si+4] */
	dh = m2c::getdata(*(raddr(ds,si+4)));
	/* and	dh,OCODEB	;dh = end a outcode */
	AND(dh, 0x4);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of viewport? */
	XOR(al, dl);
	/* jz 	SkipBelowClip	;yes -> */
	if (al == 0) {goto skipbelowclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipBelow */
	CALL(polyclipbelow, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* pop 	dx */
	POP(dx);
skipbelowclip:
	// 4463 
	/* SkipBelowClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipBelowPoint	;no -> */
	if ((dh & dh) != 0) {goto skipbelowpoint;}
	/* movsw			;store new point if visible */
	{ MOVSW; }
	/* movsw */
	{ MOVSW; }
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextBelowClip */
	goto nextbelowclip;
skipbelowpoint:
	// 4465 
	/* SkipBelowPoint:	add	si,6		;skip point */
	ADD(si, 6);
nextbelowclip:
	// 4467 
	/* NextBelowClip:	mov	dl,dh */
	dl = dh;
	/* cmp	si,LastPtr	;all points done? */
	CMP(si, lastptr);
	/* jb	BelowClipLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto belowcliploop;}
	/* cmp	si,di		;any points remaining? */
	CMP(si, di);
	/* jne	AboveClipStart	;yes, move on to next clip -> */
	if ((dw)(si) != (dw)(di)) {goto aboveclipstart;}
belowfail:
	// 4469 
	/* BelowFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;-----------------------
	// 0 ;* clip all points above
	// 0 ;-----------------------
aboveclipstart:
	// 4471 
	/* AboveClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,0111b	;any rogue points? */
	TEST(al, 0x7);
	/* jnz	BelowFail	;yes, clip failed -> */
	if ((al & 0x7) != 0) {goto belowfail;}
	/* test	al,OCODEA	;any above clipping required? */
	TEST(al, 0x8);
	/* jz	SortPolyCrt	;no -> */
	if (!(al & 0x8)) {goto sortpolycrt;}
intoaboveclip:
	// 4473 
	/* IntoAboveClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-6]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-6)));
	/* mov	[si-6],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-6))), m2c::getdata(ax));
	/* mov	ax,[di-4] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-4)));
	/* mov	[si-4],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-4))), m2c::getdata(ax));
	/* mov	ax,[di-2] */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-2)));
	/* mov	[si-2],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-2))), m2c::getdata(ax));
	/* mov	dl,al */
	dl = al;
	/* and	dl,OCODEA 	;dl = end b outcode */
	AND(dl, 0x8);
abovecliploop:
	// 4475 
	/* AboveClipLoop:	mov	dh,[si+4] */
	dh = m2c::getdata(*(raddr(ds,si+4)));
	/* and	dh,OCODEA	;dh = end a outcode */
	AND(dh, 0x8);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of viewport? */
	XOR(al, dl);
	/* jz 	SkipAboveClip	;yes -> */
	if (al == 0) {goto skipaboveclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipAbove */
	CALL(polyclipabove, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* pop 	dx */
	POP(dx);
skipaboveclip:
	// 4477 
	/* SkipAboveClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipAbovePoint	;no -> */
	if ((dh & dh) != 0) {goto skipabovepoint;}
	/* movsw			;store new point if visible */
	{ MOVSW; }
	/* movsw */
	{ MOVSW; }
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextAboveClip */
	goto nextaboveclip;
skipabovepoint:
	// 4479 
	/* SkipAbovePoint:	add	si,6		;skip point */
	ADD(si, 6);
nextaboveclip:
	// 4481 
	/* NextAboveClip:	mov	dl,dh */
	dl = dh;
	/* cmp	si,LastPtr	;all points done? */
	CMP(si, lastptr);
	/* jb	AboveClipLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto abovecliploop;}
	/* mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,1111b	;any rogue points? */
	TEST(al, 0xf);
	/* jnz	ClipPolyFail	;yes, clip failed -> */
	if ((al & 0xf) != 0) {goto clippolyfail;}
	// 0 ;-----------------------------
	// 0 ;* create crt list for polygon
	// 0 ;-----------------------------
sortpolycrt:
	// 4483 
	/* SortPolyCrt:	cmp	si,di		;any points remaining? */
	CMP(si, di);
	/* je	ClipPolyFail	;no -> */
	if ((dw)(si) == (dw)(di)) {goto clippolyfail;}
	/* mov	bp,di */
	bp = di;
	/* mov	di,TempPtr1 */
	di = tempptr1;
	/* mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
polycrtloop:
	// 4485 
	/* PolyCrtLoop:	lodsw			;fetch x */
	{ LODSW; }
	/* mov	dx,ax */
	dx = ax;
	/* lodsw			;fetch y */
	{ LODSW; }
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* add	ax,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(ax, xadjust);
	/* shr	ax,cl		;scale down */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* cmp	ax,XCRTMAX	;in limits? */
	CMP(ax, xcrtmax);
	/* jbe	__m2c_macrolocal_10_XCrtOk		;yes -> */
	if ((dw)(ax) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_10_xcrtok;}
	/* mov	ax,XCRTMAX */
	ax = xcrtmax;
__m2c_macrolocal_10_xcrtok:
	// 4487 
	/* __m2c_macrolocal_10_XCrtOk:		add	ax,X_ORG */
	ADD(ax, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_10_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_10_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_10_ycrtok:
	// 4489 
	/* __m2c_macrolocal_10_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	/* stosw			;store x crt */
	{ STOSW; }
	/* mov	ax,dx */
	ax = dx;
	/* stosw			;store y crt */
	{ STOSW; }
	/* add	si,2		;skip outcode data */
	ADD(si, 2);
	/* cmp	si,bp	 	;done all points? */
	CMP(si, bp);
	/* jb	PolyCrtLoop	;no -> */
	if ((dw)(si) < (dw)(bp)) {goto polycrtloop;}
	/* mov	si,TempPtr1 */
	si = tempptr1;
	/* movsw			;copy 1st x crt to end */
	{ MOVSW; }
	/* movsw			;copy 1st y crt to end */
	{ MOVSW; }
	/* mov	ax,-1 */
	ax = -1;
	/* stosw			;store terminator */
	{ STOSW; }
	/* pop	si		;restore ptr to next polygon data */
	POP(si);
	/* clc			;cf = 0 = visible */
	CLC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
clippolyfail:
	// 4491 
	/* ClipPolyFail:	pop	si		;restore ptr to next polygon data */
	POP(si);
	/* stc			;cf = 1 = non-visible or error */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
polyclipcheck:
	// 1144 
	/* push	dx ;* kill: flags */
	PUSH(dx);
edummylabel9:
	// 4493 
	/* push	bp */
	PUSH(bp);
	/* test	bp,bp */
	TEST(bp, bp);
	/* jz	ClipDivError	;divide by zero -> */
	if (!(bp & bp)) {goto clipdiverror;}
	/* jns	@F */
	if ((short)((bp & bp)) >= 0) {goto dummylabel1;}
	/* neg	bp */
	NEG(bp);
dummylabel1:
	// 4495 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel2;}
	/* neg	dx */
	NEG(dx);
dummylabel2:
	// 4497 
	/* @@:		cmp	bp,dx		;abs(bp) > abs(dx)? */
	CMP(bp, dx);
	/* jbe	ClipDivError	;no -> */
	if ((dw)(bp) <= (dw)(dx)) {goto clipdiverror;}
	/* pop	bp */
	POP(bp);
	/* pop	dx */
	POP(dx);
	/* ret */
	RETN(0);
clipdiverror:
	// 4499 
	/* ClipDivError:	mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipPolyFail */
	goto clippolyfail;
viscode_0_proc:
	// 1187 
pclipabovefail:
	// 4501 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipPolyFail */
	goto clippolyfail;
pclipbelowfail:
	// 4521 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipPolyFail */
	goto clippolyfail;
pcliprightfail:
	// 4541 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipPolyFail */
	goto clippolyfail;
pclipleftfail:
	// 4561 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipPolyFail */
	goto clippolyfail;
lclipabovefail:
	// 4603 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipEndFail */
	goto clipendfail;
lclipbelowfail:
	// 4623 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipEndFail */
	goto clipendfail;
lcliprightfail:
	// 4643 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipEndFail */
	goto clipendfail;
lclipleftfail:
	// 4663 
	// 0 ;<<<<< ERROR HANDLE <<<<<
	/* mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipEndFail */
	goto clipendfail;
clipplineexit:
	// 4693 
	// 0 ;* kill: )
	/* mov	ax,TempPtr2 */
	ax = tempptr2;
	/* cmp	ax,TempPtr1	;any points? */
	CMP(ax, tempptr1);
	/* je	ClipPLineFail	;no -> */
	if ((dw)(ax) == (dw)(tempptr1)) {goto clipplinefail;}
	/* mov	di,ax */
	di = ax;
	/* mov	ax,-1 */
	ax = -1;
	/* stosw			;store terminator */
	{ STOSW; }
	/* clc			;cf = 0 = visible */
	CLC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
clipplinefail:
	// 4695 
	/* ClipPLineFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
polyclipabove:
	// 1190 
	/* mov	cx,XB[si]	;DX */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
edummylabel10:
	// 4503 
	/* sub	cx,XA[si] */
	SUB(cx, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipabovefail;}
	/* mov	bx,YB[si]	;DY */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	bx,YA[si] */
	SUB(bx, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipabovefail;}
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* cmp	ax,bp		;select abs(DX) */
	CMP(ax, bp);
	/* je	PClipA_EQ	;case = abs(DY) -> */
	if ((dw)(ax) == (dw)(bp)) {goto pclipa_eq;}
	/* ja	PClipA_GT	;case > abs(DY) -> */
	if ((dw)(ax) > (dw)(bp)) {goto pclipa_gt;}
	// 0 ;* case abs(DX) < abs(DY)
pclipa_lt:
	// 4505 
	/* PClipA_LT:	mov	ax,CLIPA */
	ax = clipa;
	/* sub	ax,YA[si]	;CLIPA - YA */
	SUB(ax, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipabovefail;}
	/* imul	cx		;DX * (CLIPA - YA) */
	IMUL1_2(cx);
	/* idiv	bx		;DX * (CLIPA - YA) / DY */
	IDIV2(bx);
	/* jmp	PClipACont */
	goto pclipacont;
	// 0 ;* case abs(DX) > abs(DY)
pclipa_gt:
	// 4507 
	/* PClipA_GT:	mov	dx,bx */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	cx		;DY / DX */
	IDIV2(cx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPA */
	dx = clipa;
	/* sub	dx,YA[si]	;CLIPA - YA */
	SUB(dx, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipabovefail;}
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPA - YA) / (DY / DX) */
	IDIV2(bp);
	/* jmp	PClipACont */
	goto pclipacont;
	// 0 ;* case abs(DX) = abs(DY)
pclipa_eq:
	// 4509 
	/* PClipA_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPA */
	ax = clipa;
	/* sub	ax,YA[si]	;CLIPA - YA */
	SUB(ax, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipabovefail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
pclipacont:
	// 4511 
	/* PClipACont:	add	ax,XA[si] */
	ADD(ax, *(dw*)(raddr(ds,0+si)));
	/* mov	XC[di],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,CLIPA */
	bx = clipa;
	/* mov	YC[di],bx */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(bx));
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	cx,CLIPR	;right clip? */
	CMP(cx, clipr);
	/* jle	__m2c_macrolocal_13_OCode1		;no -> */
	if ((short)(cx) <= (short)(clipr)) {goto __m2c_macrolocal_13_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_13_OCode2 */
	goto __m2c_macrolocal_13_ocode2;
__m2c_macrolocal_13_ocode1:
	// 4513 
	/* __m2c_macrolocal_13_OCode1:		cmp	cx,CLIPL	;left clip? */
	CMP(cx, clipl);
	/* jge	__m2c_macrolocal_13_OCode2		;no -> */
	if ((short)(cx) >= (short)(clipl)) {goto __m2c_macrolocal_13_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_13_ocode2:
	// 4515 
	/* __m2c_macrolocal_13_OCode2:		cmp	bx,CLIPA	;above clip? */
	CMP(bx, clipa);
	/* jle	__m2c_macrolocal_13_Ocode3		;no -> */
	if ((short)(bx) <= (short)(clipa)) {goto __m2c_macrolocal_13_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_13_OCode4 */
	goto __m2c_macrolocal_13_ocode4;
__m2c_macrolocal_13_ocode3:
	// 4517 
	/* __m2c_macrolocal_13_Ocode3:		cmp	bx,CLIPB	;below clip? */
	CMP(bx, clipb);
	/* jge	__m2c_macrolocal_13_OCode4		;no -> */
	if ((short)(bx) >= (short)(clipb)) {goto __m2c_macrolocal_13_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_13_ocode4:
	// 4519 
	/* __m2c_macrolocal_13_OCode4:		test	al,al */
	TEST(al, al);
	/* mov	OC[di],al */
	m2c::setdata(&(*(raddr(ds,4+di))), m2c::getdata(al));
	/* add	di,6 */
	ADD(di, 6);
	/* ret */
	RETN(0);
polyclipbelow:
	// 1300 
	/* mov	cx,XB[si]	;DX */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
edummylabel11:
	// 4523 
	/* sub	cx,XA[si] */
	SUB(cx, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipbelowfail;}
	/* mov	bx,YB[si]	;DY */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	bx,YA[si] */
	SUB(bx, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipbelowfail;}
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* cmp	ax,bp		;select abs(DX) */
	CMP(ax, bp);
	/* je	PClipB_EQ	;case = abs(DY) -> */
	if ((dw)(ax) == (dw)(bp)) {goto pclipb_eq;}
	/* ja	PClipB_GT	;case > abs(DY) -> */
	if ((dw)(ax) > (dw)(bp)) {goto pclipb_gt;}
	// 0 ;* case abs(DX) < abs(DY)
pclipb_lt:
	// 4525 
	/* PClipB_LT:	mov	ax,CLIPB */
	ax = clipb;
	/* sub	ax,YA[si]	;CLIPB - YA */
	SUB(ax, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipbelowfail;}
	/* imul	cx		;DX * (CLIPB - YA) */
	IMUL1_2(cx);
	/* idiv	bx		;DX * (CLIPB - YA) / DY */
	IDIV2(bx);
	/* jmp	PClipBCont */
	goto pclipbcont;
	// 0 ;* case abs(DX) > abs(DY)
pclipb_gt:
	// 4527 
	/* PClipB_GT:	mov	dx,bx */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	cx		;DY / DX */
	IDIV2(cx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPB */
	dx = clipb;
	/* sub	dx,YA[si]	;CLIPB - YA */
	SUB(dx, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipbelowfail;}
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPB - YA) / (DY / DX) */
	IDIV2(bp);
	/* jmp	PClipBCont */
	goto pclipbcont;
	// 0 ;* case abs(DX) = abs(DY)
pclipb_eq:
	// 4529 
	/* PClipB_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPB */
	ax = clipb;
	/* sub	ax,YA[si]	;CLIPB - YA */
	SUB(ax, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipbelowfail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
pclipbcont:
	// 4531 
	/* PClipBCont:	add	ax,XA[si] */
	ADD(ax, *(dw*)(raddr(ds,0+si)));
	/* mov	XC[di],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	cx,ax */
	cx = ax;
	/* mov	bx,CLIPB */
	bx = clipb;
	/* mov	YC[di],bx */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(bx));
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	cx,CLIPR	;right clip? */
	CMP(cx, clipr);
	/* jle	__m2c_macrolocal_16_OCode1		;no -> */
	if ((short)(cx) <= (short)(clipr)) {goto __m2c_macrolocal_16_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_16_OCode2 */
	goto __m2c_macrolocal_16_ocode2;
__m2c_macrolocal_16_ocode1:
	// 4533 
	/* __m2c_macrolocal_16_OCode1:		cmp	cx,CLIPL	;left clip? */
	CMP(cx, clipl);
	/* jge	__m2c_macrolocal_16_OCode2		;no -> */
	if ((short)(cx) >= (short)(clipl)) {goto __m2c_macrolocal_16_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_16_ocode2:
	// 4535 
	/* __m2c_macrolocal_16_OCode2:		cmp	bx,CLIPA	;above clip? */
	CMP(bx, clipa);
	/* jle	__m2c_macrolocal_16_Ocode3		;no -> */
	if ((short)(bx) <= (short)(clipa)) {goto __m2c_macrolocal_16_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_16_OCode4 */
	goto __m2c_macrolocal_16_ocode4;
__m2c_macrolocal_16_ocode3:
	// 4537 
	/* __m2c_macrolocal_16_Ocode3:		cmp	bx,CLIPB	;below clip? */
	CMP(bx, clipb);
	/* jge	__m2c_macrolocal_16_OCode4		;no -> */
	if ((short)(bx) >= (short)(clipb)) {goto __m2c_macrolocal_16_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_16_ocode4:
	// 4539 
	/* __m2c_macrolocal_16_OCode4:		test	al,al */
	TEST(al, al);
	/* mov	OC[di],al */
	m2c::setdata(&(*(raddr(ds,4+di))), m2c::getdata(al));
	/* add	di,6 */
	ADD(di, 6);
	/* ret */
	RETN(0);
polyclipright:
	// 1410 
	/* mov	cx,XB[si]	;DX */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
edummylabel12:
	// 4543 
	/* sub	cx,XA[si] */
	SUB(cx, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pcliprightfail;}
	/* mov	bx,YB[si]	;DY */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	bx,YA[si] */
	SUB(bx, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pcliprightfail;}
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* cmp	ax,bp		;select abs(DY) */
	CMP(ax, bp);
	/* je	PClipR_EQ	;case = abs(DX) -> */
	if ((dw)(ax) == (dw)(bp)) {goto pclipr_eq;}
	/* ja	PClipR_GT	;case > abs(DX) -> */
	if ((dw)(ax) > (dw)(bp)) {goto pclipr_gt;}
	// 0 ;* case abs(DY) < abs(DX)
pclipr_lt:
	// 4545 
	/* PClipR_LT:	mov	ax,CLIPR */
	ax = clipr;
	/* sub	ax,XA[si]	;CLIPR - XA */
	SUB(ax, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pcliprightfail;}
	/* imul	bx		;DY * (CLIPR - XA) */
	IMUL1_2(bx);
	/* idiv	cx		;DY * (CLIPR - XA) / DX */
	IDIV2(cx);
	/* jmp	PClipRCont */
	goto pcliprcont;
	// 0 ;* case abs(DY) > abs(DX)
pclipr_gt:
	// 4547 
	/* PClipR_GT:	mov	dx,cx */
	dx = cx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;DX / DY */
	IDIV2(bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPR */
	dx = clipr;
	/* sub	dx,XA[si]	;CLIPR - XA */
	SUB(dx, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pcliprightfail;}
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPR - XA) / (DX / DY) */
	IDIV2(bp);
	/* jmp	PClipRCont */
	goto pcliprcont;
	// 0 ;* case abs(DY) = abs(DX)
pclipr_eq:
	// 4549 
	/* PClipR_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPR */
	ax = clipr;
	/* sub	ax,XA[si]	;CLIPR - XA */
	SUB(ax, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pcliprightfail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
pcliprcont:
	// 4551 
	/* PClipRCont:	add	ax,YA[si] */
	ADD(ax, *(dw*)(raddr(ds,2+si)));
	/* mov	YC[di],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,CLIPR */
	cx = clipr;
	/* mov	XC[di],cx */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(cx));
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	cx,CLIPR	;right clip? */
	CMP(cx, clipr);
	/* jle	__m2c_macrolocal_19_OCode1		;no -> */
	if ((short)(cx) <= (short)(clipr)) {goto __m2c_macrolocal_19_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_19_OCode2 */
	goto __m2c_macrolocal_19_ocode2;
__m2c_macrolocal_19_ocode1:
	// 4553 
	/* __m2c_macrolocal_19_OCode1:		cmp	cx,CLIPL	;left clip? */
	CMP(cx, clipl);
	/* jge	__m2c_macrolocal_19_OCode2		;no -> */
	if ((short)(cx) >= (short)(clipl)) {goto __m2c_macrolocal_19_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_19_ocode2:
	// 4555 
	/* __m2c_macrolocal_19_OCode2:		cmp	bx,CLIPA	;above clip? */
	CMP(bx, clipa);
	/* jle	__m2c_macrolocal_19_Ocode3		;no -> */
	if ((short)(bx) <= (short)(clipa)) {goto __m2c_macrolocal_19_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_19_OCode4 */
	goto __m2c_macrolocal_19_ocode4;
__m2c_macrolocal_19_ocode3:
	// 4557 
	/* __m2c_macrolocal_19_Ocode3:		cmp	bx,CLIPB	;below clip? */
	CMP(bx, clipb);
	/* jge	__m2c_macrolocal_19_OCode4		;no -> */
	if ((short)(bx) >= (short)(clipb)) {goto __m2c_macrolocal_19_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_19_ocode4:
	// 4559 
	/* __m2c_macrolocal_19_OCode4:		test	al,al */
	TEST(al, al);
	/* mov	OC[di],al */
	m2c::setdata(&(*(raddr(ds,4+di))), m2c::getdata(al));
	/* add	di,6 */
	ADD(di, 6);
	/* ret */
	RETN(0);
polyclipleft:
	// 1520 
	/* mov	cx,XB[si]	;DX */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
edummylabel13:
	// 4563 
	/* sub	cx,XA[si] */
	SUB(cx, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipleftfail;}
	/* mov	bx,YB[si]	;DY */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	bx,YA[si] */
	SUB(bx, *(dw*)(raddr(ds,2+si)));
	/* jo	PClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipleftfail;}
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* cmp	ax,bp		;select abs(DY) */
	CMP(ax, bp);
	/* je	PClipL_EQ	;case = abs(DX) -> */
	if ((dw)(ax) == (dw)(bp)) {goto pclipl_eq;}
	/* ja	PClipL_GT	;case > abs(DX) -> */
	if ((dw)(ax) > (dw)(bp)) {goto pclipl_gt;}
	// 0 ;* case abs(DY) < abs(DX)
pclipl_lt:
	// 4565 
	/* PClipL_LT:	mov	ax,CLIPL */
	ax = clipl;
	/* sub	ax,XA[si]	;CLIPL - XA */
	SUB(ax, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipleftfail;}
	/* imul	bx		;DY * (CLIPL - XA) */
	IMUL1_2(bx);
	/* idiv	cx		;DY * (CLIPL - XA) / DX */
	IDIV2(cx);
	/* jmp	PClipLCont */
	goto pcliplcont;
	// 0 ;* case abs(DY) > abs(DX)
pclipl_gt:
	// 4567 
	/* PClipL_GT:	mov	dx,cx */
	dx = cx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;DX / DY */
	IDIV2(bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPL */
	dx = clipl;
	/* sub	dx,XA[si]	;CLIPL - XA */
	SUB(dx, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipleftfail;}
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPL - XA) / (DX / DY) */
	IDIV2(bp);
	/* jmp	PClipLCont */
	goto pcliplcont;
	// 0 ;* case abs(DY) = abs(DX)
pclipl_eq:
	// 4569 
	/* PClipL_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPL */
	ax = clipl;
	/* sub	ax,XA[si]	;CLIPL - XA */
	SUB(ax, *(dw*)(raddr(ds,0+si)));
	/* jo	PClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto pclipleftfail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
pcliplcont:
	// 4571 
	/* PClipLCont:	add	ax,YA[si] */
	ADD(ax, *(dw*)(raddr(ds,2+si)));
	/* mov	YC[di],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,CLIPL */
	cx = clipl;
	/* mov	XC[di],cx */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(cx));
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	cx,CLIPR	;right clip? */
	CMP(cx, clipr);
	/* jle	__m2c_macrolocal_22_OCode1		;no -> */
	if ((short)(cx) <= (short)(clipr)) {goto __m2c_macrolocal_22_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_22_OCode2 */
	goto __m2c_macrolocal_22_ocode2;
__m2c_macrolocal_22_ocode1:
	// 4573 
	/* __m2c_macrolocal_22_OCode1:		cmp	cx,CLIPL	;left clip? */
	CMP(cx, clipl);
	/* jge	__m2c_macrolocal_22_OCode2		;no -> */
	if ((short)(cx) >= (short)(clipl)) {goto __m2c_macrolocal_22_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_22_ocode2:
	// 4575 
	/* __m2c_macrolocal_22_OCode2:		cmp	bx,CLIPA	;above clip? */
	CMP(bx, clipa);
	/* jle	__m2c_macrolocal_22_Ocode3		;no -> */
	if ((short)(bx) <= (short)(clipa)) {goto __m2c_macrolocal_22_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_22_OCode4 */
	goto __m2c_macrolocal_22_ocode4;
__m2c_macrolocal_22_ocode3:
	// 4577 
	/* __m2c_macrolocal_22_Ocode3:		cmp	bx,CLIPB	;below clip? */
	CMP(bx, clipb);
	/* jge	__m2c_macrolocal_22_OCode4		;no -> */
	if ((short)(bx) >= (short)(clipb)) {goto __m2c_macrolocal_22_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_22_ocode4:
	// 4579 
	/* __m2c_macrolocal_22_OCode4:		test	al,al */
	TEST(al, al);
	/* mov	OC[di],al */
	m2c::setdata(&(*(raddr(ds,4+di))), m2c::getdata(al));
	/* add	di,6 */
	ADD(di, 6);
	/* ret */
	RETN(0);
nullpoly:
	// 1610 
nullpolyloop:
	// 4581 
	/* NullPolyLoop:	lodsb			;move pointer past polygon data */
	{ LODSB; }
	/* cmp	al,-1 */
	CMP(al, -1);
	/* jne	NullPolyLoop */
	if ((db)(al) != (db)(-1)) {goto nullpolyloop;}
	/* stc			;cf = 1 = error */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
cliplineend:
	// 1629 
	/* mov	ClipRecover,sp	;recover stack to here if clip error */
	cliprecover = sp;
edummylabel14:
	// 4583 
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
	/* test	al,OCODEL	;left? */
	TEST(al, 0x1);
	/* jz	SkipLineLeft	;no -> */
	if (!(al & 0x1)) {goto skiplineleft;}
	/* call	LineClipLeft */
	CALL(lineclipleft, 0);
	/* jz	ClipEndExit */
	if (ZF) {goto clipendexit;}
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
skiplineleft:
	// 4585 
	/* SkipLineLeft:	test	al,OCODER	;right? */
	TEST(al, 0x2);
	/* jz	SkipLineRight	;no -> */
	if (!(al & 0x2)) {goto skiplineright;}
	/* call	LineClipRight */
	CALL(lineclipright, 0);
	/* jz	ClipEndExit */
	if (ZF) {goto clipendexit;}
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
skiplineright:
	// 4587 
	/* SkipLineRight:	test	al,OCODEB	;below? */
	TEST(al, 0x4);
	/* jz	SkipLineBelow	;no -> */
	if (!(al & 0x4)) {goto skiplinebelow;}
	/* call	LineClipBelow */
	CALL(lineclipbelow, 0);
	/* jz	ClipEndExit */
	if (ZF) {goto clipendexit;}
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
skiplinebelow:
	// 4589 
	/* SkipLineBelow:	test	al,OCODEA	;above? */
	TEST(al, 0x8);
	/* jz	ClipEndFail	;no -> */
	if (!(al & 0x8)) {goto clipendfail;}
	/* call	LineClipAbove */
	CALL(lineclipabove, 0);
	/* jnz	ClipEndFail	;error -> */
	if (!ZF) {goto clipendfail;}
clipendexit:
	// 4591 
	/* ClipEndExit:	clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
clipendfail:
	// 4593 
	/* ClipEndFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
lineclipcheck:
	// 1665 
	/* push	dx ;* kill: flags */
	PUSH(dx);
edummylabel15:
	// 4595 
	/* push	bp */
	PUSH(bp);
	/* test	bp,bp */
	TEST(bp, bp);
	/* jz	LClipDivError	;divide by zero -> */
	if (!(bp & bp)) {goto lclipdiverror;}
	/* jns	@F */
	if ((short)((bp & bp)) >= 0) {goto dummylabel3;}
	/* neg	bp */
	NEG(bp);
dummylabel3:
	// 4597 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel4;}
	/* neg	dx */
	NEG(dx);
dummylabel4:
	// 4599 
	/* @@:		cmp	bp,dx		;abs(bp) > abs(dx)? */
	CMP(bp, dx);
	/* jbe	LClipDivError	;no -> */
	if ((dw)(bp) <= (dw)(dx)) {goto lclipdiverror;}
	/* pop	bp */
	POP(bp);
	/* pop	dx */
	POP(dx);
	/* ret */
	RETN(0);
lclipdiverror:
	// 4601 
	/* LClipDivError:	mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipEndFail */
	goto clipendfail;
lineclipabove:
	// 1715 
	/* mov	cx,Xe[di]	;DX */
	cx = *(dw*)(((db*)&xe)+di);
edummylabel16:
	// 4605 
	/* sub	cx,Xe[si] */
	SUB(cx, *(dw*)(((db*)&xe)+si));
	/* jo	LClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipabovefail;}
	/* mov	bx,Ye[di]	;DY */
	bx = *(dw*)(((db*)&ye)+di);
	/* sub	bx,Ye[si] */
	SUB(bx, *(dw*)(((db*)&ye)+si));
	/* jo	LClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipabovefail;}
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* cmp	ax,bp		;select abs(DX) */
	CMP(ax, bp);
	/* je	LClipA_EQ	;case = abs(DY) -> */
	if ((dw)(ax) == (dw)(bp)) {goto lclipa_eq;}
	/* ja	LClipA_GT	;case > abs(DY) -> */
	if ((dw)(ax) > (dw)(bp)) {goto lclipa_gt;}
	// 0 ;* case abs(DX) < abs(DY)
lclipa_lt:
	// 4607 
	/* LClipA_LT:	mov	ax,CLIPA */
	ax = clipa;
	/* sub	ax,Ye[si]	;CLIPA - YA */
	SUB(ax, *(dw*)(((db*)&ye)+si));
	/* jo	LClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipabovefail;}
	/* imul	cx		;DX * (CLIPA - YA) */
	IMUL1_2(cx);
	/* idiv	bx		;DX * (CLIPA - YA) / DY */
	IDIV2(bx);
	/* jmp	LClipACont */
	goto lclipacont;
	// 0 ;* case abs(DX) > abs(DY)
lclipa_gt:
	// 4609 
	/* LClipA_GT:	mov	dx,bx */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	cx		;DY / DX */
	IDIV2(cx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPA */
	dx = clipa;
	/* sub	dx,Ye[si]	;CLIPA - YA */
	SUB(dx, *(dw*)(((db*)&ye)+si));
	/* jo	LClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipabovefail;}
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPA - YA) / (DY / DX) */
	IDIV2(bp);
	/* jmp	LClipACont */
	goto lclipacont;
	// 0 ;* case abs(DX) = abs(DY)
lclipa_eq:
	// 4611 
	/* LClipA_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPA */
	ax = clipa;
	/* sub	ax,Ye[si]	;CLIPA - YA */
	SUB(ax, *(dw*)(((db*)&ye)+si));
	/* jo	LClipAboveFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipabovefail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
lclipacont:
	// 4613 
	/* LClipACont:	add	ax,Xe[si] */
	ADD(ax, *(dw*)(((db*)&xe)+si));
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPA */
	dx = clipa;
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	bp,CLIPR	;right clip? */
	CMP(bp, clipr);
	/* jle	__m2c_macrolocal_25_OCode1		;no -> */
	if ((short)(bp) <= (short)(clipr)) {goto __m2c_macrolocal_25_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_25_OCode2 */
	goto __m2c_macrolocal_25_ocode2;
__m2c_macrolocal_25_ocode1:
	// 4615 
	/* __m2c_macrolocal_25_OCode1:		cmp	bp,CLIPL	;left clip? */
	CMP(bp, clipl);
	/* jge	__m2c_macrolocal_25_OCode2		;no -> */
	if ((short)(bp) >= (short)(clipl)) {goto __m2c_macrolocal_25_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_25_ocode2:
	// 4617 
	/* __m2c_macrolocal_25_OCode2:		cmp	dx,CLIPA	;above clip? */
	CMP(dx, clipa);
	/* jle	__m2c_macrolocal_25_Ocode3		;no -> */
	if ((short)(dx) <= (short)(clipa)) {goto __m2c_macrolocal_25_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_25_OCode4 */
	goto __m2c_macrolocal_25_ocode4;
__m2c_macrolocal_25_ocode3:
	// 4619 
	/* __m2c_macrolocal_25_Ocode3:		cmp	dx,CLIPB	;below clip? */
	CMP(dx, clipb);
	/* jge	__m2c_macrolocal_25_OCode4		;no -> */
	if ((short)(dx) >= (short)(clipb)) {goto __m2c_macrolocal_25_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_25_ocode4:
	// 4621 
	/* __m2c_macrolocal_25_OCode4:		test	al,al */
	TEST(al, al);
	/* ret */
	RETN(0);
lineclipbelow:
	// 1825 
	/* mov	cx,Xe[di]	;DX */
	cx = *(dw*)(((db*)&xe)+di);
edummylabel17:
	// 4625 
	/* sub	cx,Xe[si] */
	SUB(cx, *(dw*)(((db*)&xe)+si));
	/* jo	LClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipbelowfail;}
	/* mov	bx,Ye[di]	;DY */
	bx = *(dw*)(((db*)&ye)+di);
	/* sub	bx,Ye[si] */
	SUB(bx, *(dw*)(((db*)&ye)+si));
	/* jo	LClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipbelowfail;}
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* cmp	ax,bp		;select abs(DX) */
	CMP(ax, bp);
	/* je	LClipB_EQ	;case = abs(DY) -> */
	if ((dw)(ax) == (dw)(bp)) {goto lclipb_eq;}
	/* ja	LClipB_GT	;case > abs(DY) -> */
	if ((dw)(ax) > (dw)(bp)) {goto lclipb_gt;}
	// 0 ;* case abs(DX) < abs(DY)
lclipb_lt:
	// 4627 
	/* LClipB_LT:	mov	ax,CLIPB */
	ax = clipb;
	/* sub	ax,Ye[si]	;CLIPB - YA */
	SUB(ax, *(dw*)(((db*)&ye)+si));
	/* jo	LClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipbelowfail;}
	/* imul	cx		;DX * (CLIPB - YA) */
	IMUL1_2(cx);
	/* idiv	bx		;DX * (CLIPB - YA) / DY */
	IDIV2(bx);
	/* jmp	LClipBCont */
	goto lclipbcont;
	// 0 ;* case abs(DX) > abs(DY)
lclipb_gt:
	// 4629 
	/* LClipB_GT:	mov	dx,bx */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	cx		;DY / DX */
	IDIV2(cx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPB */
	dx = clipb;
	/* sub	dx,Ye[si]	;CLIPB - YA */
	SUB(dx, *(dw*)(((db*)&ye)+si));
	/* jo	LClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipbelowfail;}
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPB - YA) / (DY / DX) */
	IDIV2(bp);
	/* jmp	LClipBCont */
	goto lclipbcont;
	// 0 ;* case abs(DX) = abs(DY)
lclipb_eq:
	// 4631 
	/* LClipB_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPB */
	ax = clipb;
	/* sub	ax,Ye[si]	;CLIPB - YA */
	SUB(ax, *(dw*)(((db*)&ye)+si));
	/* jo	LClipBelowFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipbelowfail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
lclipbcont:
	// 4633 
	/* LClipBCont:	add	ax,Xe[si] */
	ADD(ax, *(dw*)(((db*)&xe)+si));
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPB */
	dx = clipb;
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	bp,CLIPR	;right clip? */
	CMP(bp, clipr);
	/* jle	__m2c_macrolocal_28_OCode1		;no -> */
	if ((short)(bp) <= (short)(clipr)) {goto __m2c_macrolocal_28_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_28_OCode2 */
	goto __m2c_macrolocal_28_ocode2;
__m2c_macrolocal_28_ocode1:
	// 4635 
	/* __m2c_macrolocal_28_OCode1:		cmp	bp,CLIPL	;left clip? */
	CMP(bp, clipl);
	/* jge	__m2c_macrolocal_28_OCode2		;no -> */
	if ((short)(bp) >= (short)(clipl)) {goto __m2c_macrolocal_28_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_28_ocode2:
	// 4637 
	/* __m2c_macrolocal_28_OCode2:		cmp	dx,CLIPA	;above clip? */
	CMP(dx, clipa);
	/* jle	__m2c_macrolocal_28_Ocode3		;no -> */
	if ((short)(dx) <= (short)(clipa)) {goto __m2c_macrolocal_28_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_28_OCode4 */
	goto __m2c_macrolocal_28_ocode4;
__m2c_macrolocal_28_ocode3:
	// 4639 
	/* __m2c_macrolocal_28_Ocode3:		cmp	dx,CLIPB	;below clip? */
	CMP(dx, clipb);
	/* jge	__m2c_macrolocal_28_OCode4		;no -> */
	if ((short)(dx) >= (short)(clipb)) {goto __m2c_macrolocal_28_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_28_ocode4:
	// 4641 
	/* __m2c_macrolocal_28_OCode4:		test	al,al */
	TEST(al, al);
	/* ret */
	RETN(0);
lineclipright:
	// 1935 
	/* mov	cx,Xe[di]	;DX */
	cx = *(dw*)(((db*)&xe)+di);
edummylabel18:
	// 4645 
	/* sub	cx,Xe[si] */
	SUB(cx, *(dw*)(((db*)&xe)+si));
	/* jo	LClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lcliprightfail;}
	/* mov	bx,Ye[di]	;DY */
	bx = *(dw*)(((db*)&ye)+di);
	/* sub	bx,Ye[si] */
	SUB(bx, *(dw*)(((db*)&ye)+si));
	/* jo	LClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lcliprightfail;}
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* cmp	ax,bp		;select abs(DY) */
	CMP(ax, bp);
	/* je	LClipR_EQ	;case = abs(DX) -> */
	if ((dw)(ax) == (dw)(bp)) {goto lclipr_eq;}
	/* ja	LClipR_GT	;case > abs(DX) -> */
	if ((dw)(ax) > (dw)(bp)) {goto lclipr_gt;}
	// 0 ;* case abs(DY) < abs(DX)
lclipr_lt:
	// 4647 
	/* LClipR_LT:	mov	ax,CLIPR */
	ax = clipr;
	/* sub	ax,Xe[si]	;CLIPR - XA */
	SUB(ax, *(dw*)(((db*)&xe)+si));
	/* jo	LClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lcliprightfail;}
	/* imul	bx		;DY * (CLIPR - XA) */
	IMUL1_2(bx);
	/* idiv	cx		;DY * (CLIPR - XA) / DX */
	IDIV2(cx);
	/* jmp	LClipRCont */
	goto lcliprcont;
	// 0 ;* case abs(DY) > abs(DX)
lclipr_gt:
	// 4649 
	/* LClipR_GT:	mov	dx,cx */
	dx = cx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;DX / DY */
	IDIV2(bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPR */
	dx = clipr;
	/* sub	dx,Xe[si]	;CLIPR - XA */
	SUB(dx, *(dw*)(((db*)&xe)+si));
	/* jo	LClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lcliprightfail;}
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPR - XA) / (DX / DY) */
	IDIV2(bp);
	/* jmp	LClipRCont */
	goto lcliprcont;
	// 0 ;* case abs(DY) = abs(DX)
lclipr_eq:
	// 4651 
	/* LClipR_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPR */
	ax = clipr;
	/* sub	ax,Xe[si]	;CLIPR - XA */
	SUB(ax, *(dw*)(((db*)&xe)+si));
	/* jo	LClipRightFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lcliprightfail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
lcliprcont:
	// 4653 
	/* LClipRCont:	add	ax,Ye[si] */
	ADD(ax, *(dw*)(((db*)&ye)+si));
	/* mov	dx,ax */
	dx = ax;
	/* mov	bp,CLIPR */
	bp = clipr;
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	bp,CLIPR	;right clip? */
	CMP(bp, clipr);
	/* jle	__m2c_macrolocal_31_OCode1		;no -> */
	if ((short)(bp) <= (short)(clipr)) {goto __m2c_macrolocal_31_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_31_OCode2 */
	goto __m2c_macrolocal_31_ocode2;
__m2c_macrolocal_31_ocode1:
	// 4655 
	/* __m2c_macrolocal_31_OCode1:		cmp	bp,CLIPL	;left clip? */
	CMP(bp, clipl);
	/* jge	__m2c_macrolocal_31_OCode2		;no -> */
	if ((short)(bp) >= (short)(clipl)) {goto __m2c_macrolocal_31_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_31_ocode2:
	// 4657 
	/* __m2c_macrolocal_31_OCode2:		cmp	dx,CLIPA	;above clip? */
	CMP(dx, clipa);
	/* jle	__m2c_macrolocal_31_Ocode3		;no -> */
	if ((short)(dx) <= (short)(clipa)) {goto __m2c_macrolocal_31_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_31_OCode4 */
	goto __m2c_macrolocal_31_ocode4;
__m2c_macrolocal_31_ocode3:
	// 4659 
	/* __m2c_macrolocal_31_Ocode3:		cmp	dx,CLIPB	;below clip? */
	CMP(dx, clipb);
	/* jge	__m2c_macrolocal_31_OCode4		;no -> */
	if ((short)(dx) >= (short)(clipb)) {goto __m2c_macrolocal_31_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_31_ocode4:
	// 4661 
	/* __m2c_macrolocal_31_OCode4:		test	al,al */
	TEST(al, al);
	/* ret */
	RETN(0);
lineclipleft:
	// 2045 
	/* mov	cx,Xe[di]	;DX */
	cx = *(dw*)(((db*)&xe)+di);
edummylabel19:
	// 4665 
	/* sub	cx,Xe[si] */
	SUB(cx, *(dw*)(((db*)&xe)+si));
	/* jo	LClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipleftfail;}
	/* mov	bx,Ye[di]	;DY */
	bx = *(dw*)(((db*)&ye)+di);
	/* sub	bx,Ye[si] */
	SUB(bx, *(dw*)(((db*)&ye)+si));
	/* jo	LClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipleftfail;}
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DX)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(DY)
	/* cmp	ax,bp		;select abs(DY) */
	CMP(ax, bp);
	/* je	LClipL_EQ	;case = abs(DX) -> */
	if ((dw)(ax) == (dw)(bp)) {goto lclipl_eq;}
	/* ja	LClipL_GT	;case > abs(DX) -> */
	if ((dw)(ax) > (dw)(bp)) {goto lclipl_gt;}
	// 0 ;* case abs(DY) < abs(DX)
lclipl_lt:
	// 4667 
	/* LClipL_LT:	mov	ax,CLIPL */
	ax = clipl;
	/* sub	ax,Xe[si]	;CLIPL - XA */
	SUB(ax, *(dw*)(((db*)&xe)+si));
	/* jo	LClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipleftfail;}
	/* imul	bx		;DY * (CLIPL - XA) */
	IMUL1_2(bx);
	/* idiv	cx		;DY * (CLIPL - XA) / DX */
	IDIV2(cx);
	/* jmp	LClipLCont */
	goto lcliplcont;
	// 0 ;* case abs(DY) > abs(DX)
lclipl_gt:
	// 4669 
	/* LClipL_GT:	mov	dx,cx */
	dx = cx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx		;DX / DY */
	IDIV2(bx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	dx,CLIPL */
	dx = clipl;
	/* sub	dx,Xe[si]	;CLIPL - XA */
	SUB(dx, *(dw*)(((db*)&xe)+si));
	/* jo	LClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipleftfail;}
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;(CLIPL - XA) / (DX / DY) */
	IDIV2(bp);
	/* jmp	LClipLCont */
	goto lcliplcont;
	// 0 ;* case abs(DY) = abs(DX)
lclipl_eq:
	// 4671 
	/* LClipL_EQ:	mov	ax,cx */
	ax = cx;
	/* xor	ax,bx */
	XOR(ax, bx);
	/* cwd			;dx = sign(slope) */
	CWD;
	/* mov	ax,CLIPL */
	ax = clipl;
	/* sub	ax,Xe[si]	;CLIPL - XA */
	SUB(ax, *(dw*)(((db*)&xe)+si));
	/* jo	LClipLeftFail	;>>>>> ERROR >>>>> */
	if (OF) {goto lclipleftfail;}
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
lcliplcont:
	// 4673 
	/* LClipLCont:	add	ax,Ye[si] */
	ADD(ax, *(dw*)(((db*)&ye)+si));
	/* mov	dx,ax */
	dx = ax;
	/* mov	bp,CLIPL */
	bp = clipl;
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	bp,CLIPR	;right clip? */
	CMP(bp, clipr);
	/* jle	__m2c_macrolocal_34_OCode1		;no -> */
	if ((short)(bp) <= (short)(clipr)) {goto __m2c_macrolocal_34_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_34_OCode2 */
	goto __m2c_macrolocal_34_ocode2;
__m2c_macrolocal_34_ocode1:
	// 4675 
	/* __m2c_macrolocal_34_OCode1:		cmp	bp,CLIPL	;left clip? */
	CMP(bp, clipl);
	/* jge	__m2c_macrolocal_34_OCode2		;no -> */
	if ((short)(bp) >= (short)(clipl)) {goto __m2c_macrolocal_34_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_34_ocode2:
	// 4677 
	/* __m2c_macrolocal_34_OCode2:		cmp	dx,CLIPA	;above clip? */
	CMP(dx, clipa);
	/* jle	__m2c_macrolocal_34_Ocode3		;no -> */
	if ((short)(dx) <= (short)(clipa)) {goto __m2c_macrolocal_34_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_34_OCode4 */
	goto __m2c_macrolocal_34_ocode4;
__m2c_macrolocal_34_ocode3:
	// 4679 
	/* __m2c_macrolocal_34_Ocode3:		cmp	dx,CLIPB	;below clip? */
	CMP(dx, clipb);
	/* jge	__m2c_macrolocal_34_OCode4		;no -> */
	if ((short)(dx) >= (short)(clipb)) {goto __m2c_macrolocal_34_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_34_ocode4:
	// 4681 
	/* __m2c_macrolocal_34_OCode4:		test	al,al */
	TEST(al, al);
	/* ret */
	RETN(0);
vpolylineclip:
	// 2139 
	/* mov	bx,ObjectDrawMode ;* kill: ax, bx, cx, dx, bp, flags */
	bx = objectdrawmode;
edummylabel20:
	// 4683 
__disp=*(dw*)(((db*)&plineclipmode)+bx);
	/* jmp	PLineClipMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
drawpolyline:
	// 2154 
	/* mov	bp,di		;store crt buffer ptr */
	bp = di;
edummylabel21:
	// 4685 
	/* xor	bx,bx */
	XOR(bx, bx);
	/* lodsb			;fetch first vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	DrawPLineExit	;yes -> */
	if ((db)(al) == (db)(-1)) {goto drawplineexit;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XCrt[bx]	;cx = x1 */
	cx = *(dw*)(((db*)&xcrt)+bx);
	/* mov	dl,YCrt[bx]	;dl = y1 */
	dl = *((&ycrt)+bx);
drawplineloop:
	// 4687 
	/* DrawPLineLoop:	lodsb			;fetch next vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	DrawPLineExit	;yes -> */
	if ((db)(al) == (db)(-1)) {goto drawplineexit;}
	/* mov	bl,al */
	bl = al;
	/* mov	ax,XCrt[bx]	;ax = x2 */
	ax = *(dw*)(((db*)&xcrt)+bx);
	/* mov	dh,YCrt[bx]	;dh = y2 */
	dh = *((&ycrt)+bx);
	/* xchg	ax,cx		;x1 = x2 */
	XCHG(ax, cx);
	/* stosw			;store x1 */
	{ STOSW; }
	/* mov	ax,cx */
	ax = cx;
	/* stosw			;store x2 */
	{ STOSW; }
	/* mov	ax,dx */
	ax = dx;
	/* stosw			;store y1, y2 */
	{ STOSW; }
	/* xchg	dl,dh		;y1 = y2 */
	XCHG(dl, dh);
	/* jmp	DrawPLineLoop */
	goto drawplineloop;
drawplineexit:
	// 4689 
	/* DrawPLineExit:	cmp	di,bp		;any points? */
	CMP(di, bp);
	/* je	DrawPLineFail	;no -> */
	if ((dw)(di) == (dw)(bp)) {goto drawplinefail;}
	/* mov	ax,-1 */
	ax = -1;
	/* stosw			;store terminator */
	{ STOSW; }
	/* clc			;cf = 0 = visible */
	CLC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
drawplinefail:
	// 4691 
	/* DrawPLineFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
clippolyline:
	// 2205 
	/* mov	ax,di */
	ax = di;
edummylabel22:
	// 4697 
	/* mov	TempPtr1,ax */
	tempptr1 = ax;
	/* mov	TempPtr2,ax */
	tempptr2 = ax;
	/* lodsb			;fetch first vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	ClipPLineExit	;yes -> */
	if ((db)(al) == (db)(-1)) {goto clipplineexit;}
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bx,ax		;bx = end a index */
	bx = ax;
	/* mov	al,OutCode[bx]	;fetch end a outcode */
	al = *((&outcode)+bx);
	/* test	al,al		;end a visible? */
	TEST(al, al);
	/* jnz	ClipPLineLoop	;no -> */
	if ((al & al) != 0) {goto clipplineloop;}
	/* mov	ax,Xe[bx] */
	ax = *(dw*)(((db*)&xe)+bx);
	/* mov	dx,Ye[bx] */
	dx = *(dw*)(((db*)&ye)+bx);
	/* mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	ax,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(ax, xadjust);
	/* shr	ax,cl		;scale down */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* cmp	ax,XCRTMAX	;in limits? */
	CMP(ax, xcrtmax);
	/* jbe	__m2c_macrolocal_35_XCrtOk		;yes -> */
	if ((dw)(ax) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_35_xcrtok;}
	/* mov	ax,XCRTMAX */
	ax = xcrtmax;
__m2c_macrolocal_35_xcrtok:
	// 4699 
	/* __m2c_macrolocal_35_XCrtOk:		add	ax,X_ORG */
	ADD(ax, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_35_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_35_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_35_ycrtok:
	// 4701 
	/* __m2c_macrolocal_35_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	// 0 ;calc end a crt co-ords
	/* mov	XCrt[bx],ax */
	*(dw*)(((db*)&xcrt)+bx) = ax;
	/* mov	YCrt[bx],dl */
	*((&ycrt)+bx) = dl;
clipplineloop:
	// 4703 
	/* ClipPLineLoop:	lodsb			;fetch next vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	ClipPLineExit	;yes -> */
	if ((db)(al) == (db)(-1)) {goto clipplineexit;}
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	di,ax		;di = end b index */
	di = ax;
	/* mov	al,OutCode[di]	;fetch end b outcode */
	al = *((&outcode)+di);
	/* test	al,al		;end b visible? */
	TEST(al, al);
	/* jnz	PLineVisTest	;no -> */
	if ((al & al) != 0) {goto plinevistest;}
	/* mov	ax,Xe[di] */
	ax = *(dw*)(((db*)&xe)+di);
	/* mov	dx,Ye[di] */
	dx = *(dw*)(((db*)&ye)+di);
	/* mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	ax,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(ax, xadjust);
	/* shr	ax,cl		;scale down */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* cmp	ax,XCRTMAX	;in limits? */
	CMP(ax, xcrtmax);
	/* jbe	__m2c_macrolocal_36_XCrtOk		;yes -> */
	if ((dw)(ax) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_36_xcrtok;}
	/* mov	ax,XCRTMAX */
	ax = xcrtmax;
__m2c_macrolocal_36_xcrtok:
	// 4705 
	/* __m2c_macrolocal_36_XCrtOk:		add	ax,X_ORG */
	ADD(ax, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_36_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_36_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_36_ycrtok:
	// 4707 
	/* __m2c_macrolocal_36_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	// 0 ;calc end b crt co-ords
	/* mov	XCrt[di],ax */
	*(dw*)(((db*)&xcrt)+di) = ax;
	/* mov	YCrt[di],dl */
	*((&ycrt)+di) = dl;
plinevistest:
	// 4709 
	/* PLineVisTest:	mov	TempPtr3,si */
	tempptr3 = si;
	/* mov	si,bx		;si = end a index */
	si = bx;
	/* mov	dl,OutCode[si]	;dl = end a outcode */
	dl = *((&outcode)+si);
	/* mov	dh,OutCode[di]	;dh = end b outcode */
	dh = *((&outcode)+di);
	/* test	dl,dh		;line totally non-visible? */
	TEST(dl, dh);
	/* jz	@F */
	if (!(dl & dh)) {goto dummylabel5;}
	/* jmp	PLineNonVis	;yes -> */
	goto plinenonvis;
dummylabel5:
	// 4711 
	/* @@:		mov	al,dl */
	al = dl;
	/* or	al,dh	    	;line totally visible? */
	OR(al, dh);
	/* jnz	@F */
	if (al != 0) {goto dummylabel6;}
	/* jmp	ClipPLineDraw	;yes -> */
	goto clipplinedraw;
dummylabel6:
	// 4713 
	/* @@:		test	dl,dl		;end a requires clipping? */
	TEST(dl, dl);
	/* jz	ClipPLineEndB	;no, must be end b -> */
	if (!(dl & dl)) {goto clipplineendb;}
	/* call	ClipLineEnd	;clip end a */
	CALL(cliplineend, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel7;}
	/* jmp	PLineNonVis	;end a non-visible -> */
	goto plinenonvis;
dummylabel7:
	// 4715 
	/* @@:		mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	bp,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(bp, xadjust);
	/* shr	bp,cl		;scale down */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* cmp	bp,XCRTMAX	;in limits? */
	CMP(bp, xcrtmax);
	/* jbe	__m2c_macrolocal_37_XCrtOk		;yes -> */
	if ((dw)(bp) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_37_xcrtok;}
	/* mov	bp,XCRTMAX */
	bp = xcrtmax;
__m2c_macrolocal_37_xcrtok:
	// 4717 
	/* __m2c_macrolocal_37_XCrtOk:		add	bp,X_ORG */
	ADD(bp, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_37_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_37_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_37_ycrtok:
	// 4719 
	/* __m2c_macrolocal_37_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	// 0 ;calc end a crt co-ords
	/* mov	XCrt[si],bp */
	*(dw*)(((db*)&xcrt)+si) = bp;
	/* mov	YCrt[si],dl */
	*((&ycrt)+si) = dl;
	/* mov	al,OutCode[di] */
	al = *((&outcode)+di);
	/* test	al,al		;end b requires cliping? */
	TEST(al, al);
	/* jz	ClipPLineDraw	;no -> */
	if (!(al & al)) {goto clipplinedraw;}
clipplineendb:
	// 4721 
	/* ClipPLineEndB:	xchg	si,di */
	XCHG(si, di);
	/* call	ClipLineEnd	;clip end b */
	CALL(cliplineend, 0);
	/* xchg	si,di */
	XCHG(si, di);
	/* jc	PLineNonVis	;end b non-visible -> */
	if (CF) {goto plinenonvis;}
	/* mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	bp,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(bp, xadjust);
	/* shr	bp,cl		;scale down */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* cmp	bp,XCRTMAX	;in limits? */
	CMP(bp, xcrtmax);
	/* jbe	__m2c_macrolocal_38_XCrtOk		;yes -> */
	if ((dw)(bp) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_38_xcrtok;}
	/* mov	bp,XCRTMAX */
	bp = xcrtmax;
__m2c_macrolocal_38_xcrtok:
	// 4723 
	/* __m2c_macrolocal_38_XCrtOk:		add	bp,X_ORG */
	ADD(bp, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_38_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_38_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_38_ycrtok:
	// 4725 
	/* __m2c_macrolocal_38_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	// 0 ;calc end b crt co-ords
	/* mov	XCrt[di],bp */
	*(dw*)(((db*)&xcrt)+di) = bp;
	/* mov	YCrt[di],dl */
	*((&ycrt)+di) = dl;
clipplinedraw:
	// 4727 
	/* ClipPLineDraw:	mov	bx,di		;bx = new end a index */
	bx = di;
	/* mov	di,TempPtr2 */
	di = tempptr2;
	/* mov	ax,XCrt[si] */
	ax = *(dw*)(((db*)&xcrt)+si);
	/* stosw */
	{ STOSW; }
	/* mov	ax,XCrt[bx] */
	ax = *(dw*)(((db*)&xcrt)+bx);
	/* stosw */
	{ STOSW; }
	/* mov	al,YCrt[si] */
	al = *((&ycrt)+si);
	/* mov	ah,YCrt[bx] */
	ah = *((&ycrt)+bx);
	/* stosw */
	{ STOSW; }
	/* mov	TempPtr2,di */
	tempptr2 = di;
	/* mov	si,TempPtr3 */
	si = tempptr3;
	/* jmp	ClipPLineLoop */
	goto clipplineloop;
plinenonvis:
	// 4729 
	/* PLineNonVis:	mov	bx,di		;bx = new end a index */
	bx = di;
	/* mov	si,TempPtr3 */
	si = tempptr3;
	/* jmp	ClipPLineLoop */
	goto clipplineloop;
nullpolyline:
	// 2352 
nullplineloop:
	// 4731 
	/* NullPLineLoop:	lodsb			;move pointer past line data */
	{ LODSB; }
	/* cmp	al,-1 */
	CMP(al, -1);
	/* jne	NullPLineLoop */
	if ((db)(al) != (db)(-1)) {goto nullplineloop;}
	/* stc			;cf = 1 = error */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
vquicklineclip:
	// 2370 
	/* mov	si,0		;end a index */
	si = 0;
edummylabel23:
	// 4733 
	/* mov	cl,VP.V_SCALE_UP */
	cl = vp.v_scale_up;
	/* call	VTransform */
	CALL(vtransform, 0);
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	di,CLIPR	;right clip? */
	CMP(di, clipr);
	/* jle	__m2c_macrolocal_39_OCode1		;no -> */
	if ((short)(di) <= (short)(clipr)) {goto __m2c_macrolocal_39_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_39_OCode2 */
	goto __m2c_macrolocal_39_ocode2;
__m2c_macrolocal_39_ocode1:
	// 4735 
	/* __m2c_macrolocal_39_OCode1:		cmp	di,CLIPL	;left clip? */
	CMP(di, clipl);
	/* jge	__m2c_macrolocal_39_OCode2		;no -> */
	if ((short)(di) >= (short)(clipl)) {goto __m2c_macrolocal_39_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_39_ocode2:
	// 4737 
	/* __m2c_macrolocal_39_OCode2:		cmp	bp,CLIPA	;above clip? */
	CMP(bp, clipa);
	/* jle	__m2c_macrolocal_39_Ocode3		;no -> */
	if ((short)(bp) <= (short)(clipa)) {goto __m2c_macrolocal_39_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_39_OCode4 */
	goto __m2c_macrolocal_39_ocode4;
__m2c_macrolocal_39_ocode3:
	// 4739 
	/* __m2c_macrolocal_39_Ocode3:		cmp	bp,CLIPB	;below clip? */
	CMP(bp, clipb);
	/* jge	__m2c_macrolocal_39_OCode4		;no -> */
	if ((short)(bp) >= (short)(clipb)) {goto __m2c_macrolocal_39_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_39_ocode4:
	// 4741 
	/* __m2c_macrolocal_39_OCode4:		test	al,al */
	TEST(al, al);
	// 0 ;calculate outcode
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* mov	si,2		;end b index */
	si = 2;
	/* call	VTransform */
	CALL(vtransform, 0);
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	di,CLIPR	;right clip? */
	CMP(di, clipr);
	/* jle	__m2c_macrolocal_40_OCode1		;no -> */
	if ((short)(di) <= (short)(clipr)) {goto __m2c_macrolocal_40_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_40_OCode2 */
	goto __m2c_macrolocal_40_ocode2;
__m2c_macrolocal_40_ocode1:
	// 4743 
	/* __m2c_macrolocal_40_OCode1:		cmp	di,CLIPL	;left clip? */
	CMP(di, clipl);
	/* jge	__m2c_macrolocal_40_OCode2		;no -> */
	if ((short)(di) >= (short)(clipl)) {goto __m2c_macrolocal_40_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_40_ocode2:
	// 4745 
	/* __m2c_macrolocal_40_OCode2:		cmp	bp,CLIPA	;above clip? */
	CMP(bp, clipa);
	/* jle	__m2c_macrolocal_40_Ocode3		;no -> */
	if ((short)(bp) <= (short)(clipa)) {goto __m2c_macrolocal_40_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_40_OCode4 */
	goto __m2c_macrolocal_40_ocode4;
__m2c_macrolocal_40_ocode3:
	// 4747 
	/* __m2c_macrolocal_40_Ocode3:		cmp	bp,CLIPB	;below clip? */
	CMP(bp, clipb);
	/* jge	__m2c_macrolocal_40_OCode4		;no -> */
	if ((short)(bp) >= (short)(clipb)) {goto __m2c_macrolocal_40_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_40_ocode4:
	// 4749 
	/* __m2c_macrolocal_40_OCode4:		test	al,al */
	TEST(al, al);
	// 0 ;calculate outcode
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* mov	si,0		;end a index */
	si = 0;
	/* mov	di,2		;end b index */
	di = 2;
	// 0 ;* test line visibility
	/* mov	ah,OutCode[si] */
	ah = *((&outcode)+si);
	/* test	al,ah		;both ends on same side of viewport? */
	TEST(al, ah);
	/* jz	@F */
	if (!(al & ah)) {goto dummylabel8;}
	/* jmp	QLineClipFail	;yes, non-visible -> */
	goto qlineclipfail;
	// 0 ;* test end a visibility, clip and calc crt co-ords
dummylabel8:
	// 4751 
	/* @@:		test	ah,ah		;end a visible? */
	TEST(ah, ah);
	/* jnz	ClipEndA	;no -> */
	if ((ah & ah) != 0) {goto clipenda;}
	/* mov	bp,Xe[si] */
	bp = *(dw*)(((db*)&xe)+si);
	/* mov	dx,Ye[si] */
	dx = *(dw*)(((db*)&ye)+si);
	/* jmp	CalcEndACrt */
	goto calcendacrt;
clipenda:
	// 4753 
	/* ClipEndA:	call	ClipLineEnd */
	CALL(cliplineend, 0);
	/* jnc	CalcEndACrt */
	if (!CF) {goto calcendacrt;}
	/* jmp	QLineClipFail	;non-visible -> */
	goto qlineclipfail;
calcendacrt:
	// 4755 
	/* CalcEndACrt: 	mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	bp,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(bp, xadjust);
	/* shr	bp,cl		;scale down */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* cmp	bp,XCRTMAX	;in limits? */
	CMP(bp, xcrtmax);
	/* jbe	__m2c_macrolocal_41_XCrtOk		;yes -> */
	if ((dw)(bp) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_41_xcrtok;}
	/* mov	bp,XCRTMAX */
	bp = xcrtmax;
__m2c_macrolocal_41_xcrtok:
	// 4757 
	/* __m2c_macrolocal_41_XCrtOk:		add	bp,X_ORG */
	ADD(bp, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_41_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_41_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_41_ycrtok:
	// 4759 
	/* __m2c_macrolocal_41_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	/* mov	XCrt[si],bp */
	*(dw*)(((db*)&xcrt)+si) = bp;
	/* mov	WORD PTR YCrt[si],dx */
	*(dw*)((&ycrt)+si) = dx;
	// 0 ;* test end b visibility, clip and calc crt co-ords
	/* xchg	si,di */
	XCHG(si, di);
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
	/* test	al,al		;end b visible? */
	TEST(al, al);
	/* jnz	ClipEndB	;no -> */
	if ((al & al) != 0) {goto clipendb;}
	/* mov	bp,Xe[si] */
	bp = *(dw*)(((db*)&xe)+si);
	/* mov	dx,Ye[si] */
	dx = *(dw*)(((db*)&ye)+si);
	/* jmp	CalcEndBCrt */
	goto calcendbcrt;
clipendb:
	// 4761 
	/* ClipEndB:	call	ClipLineEnd */
	CALL(cliplineend, 0);
	/* jc	QLineClipFail	;non-visible -> */
	if (CF) {goto qlineclipfail;}
calcendbcrt:
	// 4763 
	/* CalcEndBCrt:	mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	bp,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(bp, xadjust);
	/* shr	bp,cl		;scale down */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* cmp	bp,XCRTMAX	;in limits? */
	CMP(bp, xcrtmax);
	/* jbe	__m2c_macrolocal_42_XCrtOk		;yes -> */
	if ((dw)(bp) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_42_xcrtok;}
	/* mov	bp,XCRTMAX */
	bp = xcrtmax;
__m2c_macrolocal_42_xcrtok:
	// 4765 
	/* __m2c_macrolocal_42_XCrtOk:		add	bp,X_ORG */
	ADD(bp, x_org);
	/* add	dx,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(dx, yadjust);
	/* shr	dx,cl		;scale down */
	SHR(dx, cl);
	/* adc	dx,0		;1/2 bit round up */
	ADC(dx, 0);
	/* cmp	dx,YCRTMAX	;in limits? */
	CMP(dx, ycrtmax);
	/* jbe	__m2c_macrolocal_42_YCrtOk		;yes -> */
	if ((dw)(dx) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_42_ycrtok;}
	/* mov	dx,YCRTMAX */
	dx = ycrtmax;
__m2c_macrolocal_42_ycrtok:
	// 4767 
	/* __m2c_macrolocal_42_YCrtOk:		neg	dx */
	NEG(dx);
	/* add	dx,Y_ORG */
	ADD(dx, y_org);
	/* mov	XCrt[si],bp */
	*(dw*)(((db*)&xcrt)+si) = bp;
	/* mov	WORD PTR YCrt[si],dx */
	*(dw*)((&ycrt)+si) = dx;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETF(0);
qlineclipfail:
	// 4769 
	/* QLineClipFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETF(0);
vdotclip:
	// 2496 
	/* xor	si,si		;index = 0 */
	XOR(si, si);
edummylabel24:
	// 4771 
	/* mov	cl,VP.V_SCALE_UP */
	cl = vp.v_scale_up;
	/* call	VTransform	;scale and rotate */
	CALL(vtransform, 0);
	/* xor	al,al		;clear outcode (assume visible) */
	XOR(al, al);
	/* cmp	di,CLIPR	;right clip? */
	CMP(di, clipr);
	/* jle	__m2c_macrolocal_43_OCode1		;no -> */
	if ((short)(di) <= (short)(clipr)) {goto __m2c_macrolocal_43_ocode1;}
	/* or	al,OCODER */
	OR(al, 0x2);
	/* jmp	__m2c_macrolocal_43_OCode2 */
	goto __m2c_macrolocal_43_ocode2;
__m2c_macrolocal_43_ocode1:
	// 4773 
	/* __m2c_macrolocal_43_OCode1:		cmp	di,CLIPL	;left clip? */
	CMP(di, clipl);
	/* jge	__m2c_macrolocal_43_OCode2		;no -> */
	if ((short)(di) >= (short)(clipl)) {goto __m2c_macrolocal_43_ocode2;}
	/* or	al,OCODEL */
	OR(al, 0x1);
__m2c_macrolocal_43_ocode2:
	// 4775 
	/* __m2c_macrolocal_43_OCode2:		cmp	bp,CLIPA	;above clip? */
	CMP(bp, clipa);
	/* jle	__m2c_macrolocal_43_Ocode3		;no -> */
	if ((short)(bp) <= (short)(clipa)) {goto __m2c_macrolocal_43_ocode3;}
	/* or	al,OCODEA */
	OR(al, 0x8);
	/* jmp	__m2c_macrolocal_43_OCode4 */
	goto __m2c_macrolocal_43_ocode4;
__m2c_macrolocal_43_ocode3:
	// 4777 
	/* __m2c_macrolocal_43_Ocode3:		cmp	bp,CLIPB	;below clip? */
	CMP(bp, clipb);
	/* jge	__m2c_macrolocal_43_OCode4		;no -> */
	if ((short)(bp) >= (short)(clipb)) {goto __m2c_macrolocal_43_ocode4;}
	/* or	al,OCODEB */
	OR(al, 0x4);
__m2c_macrolocal_43_ocode4:
	// 4779 
	/* __m2c_macrolocal_43_OCode4:		test	al,al */
	TEST(al, al);
	// 0 ;calculate outcode
	/* jnz	DotClipFail	;non-visible -> */
	if ((al & al) != 0) {goto dotclipfail;}
	/* mov	cl,VP.V_SCALE_DN */
	cl = vp.v_scale_dn;
	/* add	di,XADJUST	;0 .. clip limit * 2 - 1 */
	ADD(di, xadjust);
	/* shr	di,cl		;scale down */
	SHR(di, cl);
	/* adc	di,0		;1/2 bit round up */
	ADC(di, 0);
	/* cmp	di,XCRTMAX	;in limits? */
	CMP(di, xcrtmax);
	/* jbe	__m2c_macrolocal_44_XCrtOk		;yes -> */
	if ((dw)(di) <= (dw)(xcrtmax)) {goto __m2c_macrolocal_44_xcrtok;}
	/* mov	di,XCRTMAX */
	di = xcrtmax;
__m2c_macrolocal_44_xcrtok:
	// 4781 
	/* __m2c_macrolocal_44_XCrtOk:		add	di,X_ORG */
	ADD(di, x_org);
	/* add	bp,YADJUST	;0 .. clip limit * 2 - 1 */
	ADD(bp, yadjust);
	/* shr	bp,cl		;scale down */
	SHR(bp, cl);
	/* adc	bp,0		;1/2 bit round up */
	ADC(bp, 0);
	/* cmp	bp,YCRTMAX	;in limits? */
	CMP(bp, ycrtmax);
	/* jbe	__m2c_macrolocal_44_YCrtOk		;yes -> */
	if ((dw)(bp) <= (dw)(ycrtmax)) {goto __m2c_macrolocal_44_ycrtok;}
	/* mov	bp,YCRTMAX */
	bp = ycrtmax;
__m2c_macrolocal_44_ycrtok:
	// 4783 
	/* __m2c_macrolocal_44_YCrtOk:		neg	bp */
	NEG(bp);
	/* add	bp,Y_ORG */
	ADD(bp, y_org);
	/* mov	cx,di */
	cx = di;
	/* mov	bx,bp */
	bx = bp;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETF(0);
dotclipfail:
	// 4785 
	/* DotClipFail:	stc			;cf = 1 = non-visible or error */
	STC;
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
                case m2c::k__m2c_macrolocal_10_xcrtok: 	goto __m2c_macrolocal_10_xcrtok;
        case m2c::k__m2c_macrolocal_10_ycrtok: 	goto __m2c_macrolocal_10_ycrtok;
        case m2c::k__m2c_macrolocal_13_ocode1: 	goto __m2c_macrolocal_13_ocode1;
        case m2c::k__m2c_macrolocal_13_ocode2: 	goto __m2c_macrolocal_13_ocode2;
        case m2c::k__m2c_macrolocal_13_ocode3: 	goto __m2c_macrolocal_13_ocode3;
        case m2c::k__m2c_macrolocal_13_ocode4: 	goto __m2c_macrolocal_13_ocode4;
        case m2c::k__m2c_macrolocal_16_ocode1: 	goto __m2c_macrolocal_16_ocode1;
        case m2c::k__m2c_macrolocal_16_ocode2: 	goto __m2c_macrolocal_16_ocode2;
        case m2c::k__m2c_macrolocal_16_ocode3: 	goto __m2c_macrolocal_16_ocode3;
        case m2c::k__m2c_macrolocal_16_ocode4: 	goto __m2c_macrolocal_16_ocode4;
        case m2c::k__m2c_macrolocal_19_ocode1: 	goto __m2c_macrolocal_19_ocode1;
        case m2c::k__m2c_macrolocal_19_ocode2: 	goto __m2c_macrolocal_19_ocode2;
        case m2c::k__m2c_macrolocal_19_ocode3: 	goto __m2c_macrolocal_19_ocode3;
        case m2c::k__m2c_macrolocal_19_ocode4: 	goto __m2c_macrolocal_19_ocode4;
        case m2c::k__m2c_macrolocal_22_ocode1: 	goto __m2c_macrolocal_22_ocode1;
        case m2c::k__m2c_macrolocal_22_ocode2: 	goto __m2c_macrolocal_22_ocode2;
        case m2c::k__m2c_macrolocal_22_ocode3: 	goto __m2c_macrolocal_22_ocode3;
        case m2c::k__m2c_macrolocal_22_ocode4: 	goto __m2c_macrolocal_22_ocode4;
        case m2c::k__m2c_macrolocal_25_ocode1: 	goto __m2c_macrolocal_25_ocode1;
        case m2c::k__m2c_macrolocal_25_ocode2: 	goto __m2c_macrolocal_25_ocode2;
        case m2c::k__m2c_macrolocal_25_ocode3: 	goto __m2c_macrolocal_25_ocode3;
        case m2c::k__m2c_macrolocal_25_ocode4: 	goto __m2c_macrolocal_25_ocode4;
        case m2c::k__m2c_macrolocal_28_ocode1: 	goto __m2c_macrolocal_28_ocode1;
        case m2c::k__m2c_macrolocal_28_ocode2: 	goto __m2c_macrolocal_28_ocode2;
        case m2c::k__m2c_macrolocal_28_ocode3: 	goto __m2c_macrolocal_28_ocode3;
        case m2c::k__m2c_macrolocal_28_ocode4: 	goto __m2c_macrolocal_28_ocode4;
        case m2c::k__m2c_macrolocal_31_ocode1: 	goto __m2c_macrolocal_31_ocode1;
        case m2c::k__m2c_macrolocal_31_ocode2: 	goto __m2c_macrolocal_31_ocode2;
        case m2c::k__m2c_macrolocal_31_ocode3: 	goto __m2c_macrolocal_31_ocode3;
        case m2c::k__m2c_macrolocal_31_ocode4: 	goto __m2c_macrolocal_31_ocode4;
        case m2c::k__m2c_macrolocal_34_ocode1: 	goto __m2c_macrolocal_34_ocode1;
        case m2c::k__m2c_macrolocal_34_ocode2: 	goto __m2c_macrolocal_34_ocode2;
        case m2c::k__m2c_macrolocal_34_ocode3: 	goto __m2c_macrolocal_34_ocode3;
        case m2c::k__m2c_macrolocal_34_ocode4: 	goto __m2c_macrolocal_34_ocode4;
        case m2c::k__m2c_macrolocal_35_xcrtok: 	goto __m2c_macrolocal_35_xcrtok;
        case m2c::k__m2c_macrolocal_35_ycrtok: 	goto __m2c_macrolocal_35_ycrtok;
        case m2c::k__m2c_macrolocal_36_xcrtok: 	goto __m2c_macrolocal_36_xcrtok;
        case m2c::k__m2c_macrolocal_36_ycrtok: 	goto __m2c_macrolocal_36_ycrtok;
        case m2c::k__m2c_macrolocal_37_xcrtok: 	goto __m2c_macrolocal_37_xcrtok;
        case m2c::k__m2c_macrolocal_37_ycrtok: 	goto __m2c_macrolocal_37_ycrtok;
        case m2c::k__m2c_macrolocal_38_xcrtok: 	goto __m2c_macrolocal_38_xcrtok;
        case m2c::k__m2c_macrolocal_38_ycrtok: 	goto __m2c_macrolocal_38_ycrtok;
        case m2c::k__m2c_macrolocal_39_ocode1: 	goto __m2c_macrolocal_39_ocode1;
        case m2c::k__m2c_macrolocal_39_ocode2: 	goto __m2c_macrolocal_39_ocode2;
        case m2c::k__m2c_macrolocal_39_ocode3: 	goto __m2c_macrolocal_39_ocode3;
        case m2c::k__m2c_macrolocal_39_ocode4: 	goto __m2c_macrolocal_39_ocode4;
        case m2c::k__m2c_macrolocal_3_ocode1: 	goto __m2c_macrolocal_3_ocode1;
        case m2c::k__m2c_macrolocal_3_ocode2: 	goto __m2c_macrolocal_3_ocode2;
        case m2c::k__m2c_macrolocal_3_ocode3: 	goto __m2c_macrolocal_3_ocode3;
        case m2c::k__m2c_macrolocal_3_ocode4: 	goto __m2c_macrolocal_3_ocode4;
        case m2c::k__m2c_macrolocal_40_ocode1: 	goto __m2c_macrolocal_40_ocode1;
        case m2c::k__m2c_macrolocal_40_ocode2: 	goto __m2c_macrolocal_40_ocode2;
        case m2c::k__m2c_macrolocal_40_ocode3: 	goto __m2c_macrolocal_40_ocode3;
        case m2c::k__m2c_macrolocal_40_ocode4: 	goto __m2c_macrolocal_40_ocode4;
        case m2c::k__m2c_macrolocal_41_xcrtok: 	goto __m2c_macrolocal_41_xcrtok;
        case m2c::k__m2c_macrolocal_41_ycrtok: 	goto __m2c_macrolocal_41_ycrtok;
        case m2c::k__m2c_macrolocal_42_xcrtok: 	goto __m2c_macrolocal_42_xcrtok;
        case m2c::k__m2c_macrolocal_42_ycrtok: 	goto __m2c_macrolocal_42_ycrtok;
        case m2c::k__m2c_macrolocal_43_ocode1: 	goto __m2c_macrolocal_43_ocode1;
        case m2c::k__m2c_macrolocal_43_ocode2: 	goto __m2c_macrolocal_43_ocode2;
        case m2c::k__m2c_macrolocal_43_ocode3: 	goto __m2c_macrolocal_43_ocode3;
        case m2c::k__m2c_macrolocal_43_ocode4: 	goto __m2c_macrolocal_43_ocode4;
        case m2c::k__m2c_macrolocal_44_xcrtok: 	goto __m2c_macrolocal_44_xcrtok;
        case m2c::k__m2c_macrolocal_44_ycrtok: 	goto __m2c_macrolocal_44_ycrtok;
        case m2c::k__m2c_macrolocal_4_xcrtok: 	goto __m2c_macrolocal_4_xcrtok;
        case m2c::k__m2c_macrolocal_4_ycrtok: 	goto __m2c_macrolocal_4_ycrtok;
        case m2c::k__m2c_macrolocal_5_ocode1: 	goto __m2c_macrolocal_5_ocode1;
        case m2c::k__m2c_macrolocal_5_ocode2: 	goto __m2c_macrolocal_5_ocode2;
        case m2c::k__m2c_macrolocal_5_ocode3: 	goto __m2c_macrolocal_5_ocode3;
        case m2c::k__m2c_macrolocal_5_ocode4: 	goto __m2c_macrolocal_5_ocode4;
        case m2c::kabovecliploop: 	goto abovecliploop;
        case m2c::kaboveclipstart: 	goto aboveclipstart;
        case m2c::kbelowcliploop: 	goto belowcliploop;
        case m2c::kbelowclipstart: 	goto belowclipstart;
        case m2c::kbelowfail: 	goto belowfail;
        case m2c::kcalcendacrt: 	goto calcendacrt;
        case m2c::kcalcendbcrt: 	goto calcendbcrt;
        case m2c::kclipdiverror: 	goto clipdiverror;
        case m2c::kclipenda: 	goto clipenda;
        case m2c::kclipendb: 	goto clipendb;
        case m2c::kclipendexit: 	goto clipendexit;
        case m2c::kclipendfail: 	goto clipendfail;
        case m2c::kcliplineend: 	goto cliplineend;
        case m2c::kclipobject: 	goto clipobject;
        case m2c::kclipplinedraw: 	goto clipplinedraw;
        case m2c::kclipplineendb: 	goto clipplineendb;
        case m2c::kclipplineexit: 	goto clipplineexit;
        case m2c::kclipplinefail: 	goto clipplinefail;
        case m2c::kclipplineloop: 	goto clipplineloop;
        case m2c::kclippoly: 	goto clippoly;
        case m2c::kclippolyfail: 	goto clippolyfail;
        case m2c::kclippolyfaillnk: 	goto clippolyfaillnk;
        case m2c::kclippolyline: 	goto clippolyline;
        case m2c::kclipswitch: 	goto clipswitch;
        case m2c::kdotclipfail: 	goto dotclipfail;
        case m2c::kdrawobject: 	goto drawobject;
        case m2c::kdrawplineexit: 	goto drawplineexit;
        case m2c::kdrawplinefail: 	goto drawplinefail;
        case m2c::kdrawplineloop: 	goto drawplineloop;
        case m2c::kdrawpoly: 	goto drawpoly;
        case m2c::kdrawpolyfail: 	goto drawpolyfail;
        case m2c::kdrawpolyline: 	goto drawpolyline;
        case m2c::kdrawpolyloop: 	goto drawpolyloop;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
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
        case m2c::kedummylabel19: 	goto edummylabel19;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel20: 	goto edummylabel20;
        case m2c::kedummylabel21: 	goto edummylabel21;
        case m2c::kedummylabel22: 	goto edummylabel22;
        case m2c::kedummylabel23: 	goto edummylabel23;
        case m2c::kedummylabel24: 	goto edummylabel24;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kgenxycrtloop: 	goto genxycrtloop;
        case m2c::kintoaboveclip: 	goto intoaboveclip;
        case m2c::kintobelowclip: 	goto intobelowclip;
        case m2c::kintoleftclip: 	goto intoleftclip;
        case m2c::kintorightclip: 	goto intorightclip;
        case m2c::klclipa_eq: 	goto lclipa_eq;
        case m2c::klclipa_gt: 	goto lclipa_gt;
        case m2c::klclipa_lt: 	goto lclipa_lt;
        case m2c::klclipabovefail: 	goto lclipabovefail;
        case m2c::klclipacont: 	goto lclipacont;
        case m2c::klclipb_eq: 	goto lclipb_eq;
        case m2c::klclipb_gt: 	goto lclipb_gt;
        case m2c::klclipb_lt: 	goto lclipb_lt;
        case m2c::klclipbcont: 	goto lclipbcont;
        case m2c::klclipbelowfail: 	goto lclipbelowfail;
        case m2c::klclipdiverror: 	goto lclipdiverror;
        case m2c::klclipl_eq: 	goto lclipl_eq;
        case m2c::klclipl_gt: 	goto lclipl_gt;
        case m2c::klclipl_lt: 	goto lclipl_lt;
        case m2c::klcliplcont: 	goto lcliplcont;
        case m2c::klclipleftfail: 	goto lclipleftfail;
        case m2c::klclipr_eq: 	goto lclipr_eq;
        case m2c::klclipr_gt: 	goto lclipr_gt;
        case m2c::klclipr_lt: 	goto lclipr_lt;
        case m2c::klcliprcont: 	goto lcliprcont;
        case m2c::klcliprightfail: 	goto lcliprightfail;
        case m2c::kleftcliploop: 	goto leftcliploop;
        case m2c::kleftfail: 	goto leftfail;
        case m2c::klineclipabove: 	goto lineclipabove;
        case m2c::klineclipbelow: 	goto lineclipbelow;
        case m2c::klineclipcheck: 	goto lineclipcheck;
        case m2c::klineclipleft: 	goto lineclipleft;
        case m2c::klineclipright: 	goto lineclipright;
        case m2c::knextaboveclip: 	goto nextaboveclip;
        case m2c::knextbelowclip: 	goto nextbelowclip;
        case m2c::knextleftclip: 	goto nextleftclip;
        case m2c::knextpolycoord: 	goto nextpolycoord;
        case m2c::knextrightclip: 	goto nextrightclip;
        case m2c::knullplineloop: 	goto nullplineloop;
        case m2c::knullpoly: 	goto nullpoly;
        case m2c::knullpolyline: 	goto nullpolyline;
        case m2c::knullpolyloop: 	goto nullpolyloop;
        case m2c::kocodeloop: 	goto ocodeloop;
        case m2c::kpclipa_eq: 	goto pclipa_eq;
        case m2c::kpclipa_gt: 	goto pclipa_gt;
        case m2c::kpclipa_lt: 	goto pclipa_lt;
        case m2c::kpclipabovefail: 	goto pclipabovefail;
        case m2c::kpclipacont: 	goto pclipacont;
        case m2c::kpclipb_eq: 	goto pclipb_eq;
        case m2c::kpclipb_gt: 	goto pclipb_gt;
        case m2c::kpclipb_lt: 	goto pclipb_lt;
        case m2c::kpclipbcont: 	goto pclipbcont;
        case m2c::kpclipbelowfail: 	goto pclipbelowfail;
        case m2c::kpclipl_eq: 	goto pclipl_eq;
        case m2c::kpclipl_gt: 	goto pclipl_gt;
        case m2c::kpclipl_lt: 	goto pclipl_lt;
        case m2c::kpcliplcont: 	goto pcliplcont;
        case m2c::kpclipleftfail: 	goto pclipleftfail;
        case m2c::kpclipr_eq: 	goto pclipr_eq;
        case m2c::kpclipr_gt: 	goto pclipr_gt;
        case m2c::kpclipr_lt: 	goto pclipr_lt;
        case m2c::kpcliprcont: 	goto pcliprcont;
        case m2c::kpcliprightfail: 	goto pcliprightfail;
        case m2c::kplinenonvis: 	goto plinenonvis;
        case m2c::kplinevistest: 	goto plinevistest;
        case m2c::kpolyclipabove: 	goto polyclipabove;
        case m2c::kpolyclipbelow: 	goto polyclipbelow;
        case m2c::kpolyclipcheck: 	goto polyclipcheck;
        case m2c::kpolyclipleft: 	goto polyclipleft;
        case m2c::kpolyclipright: 	goto polyclipright;
        case m2c::kpolycrtloop: 	goto polycrtloop;
        case m2c::kqlineclipfail: 	goto qlineclipfail;
        case m2c::kquickocodeloop: 	goto quickocodeloop;
        case m2c::krightcliploop: 	goto rightcliploop;
        case m2c::krightclipstart: 	goto rightclipstart;
        case m2c::krightfail: 	goto rightfail;
        case m2c::kskipaboveclip: 	goto skipaboveclip;
        case m2c::kskipabovepoint: 	goto skipabovepoint;
        case m2c::kskipbelowclip: 	goto skipbelowclip;
        case m2c::kskipbelowpoint: 	goto skipbelowpoint;
        case m2c::kskipleftclip: 	goto skipleftclip;
        case m2c::kskipleftpoint: 	goto skipleftpoint;
        case m2c::kskiplinebelow: 	goto skiplinebelow;
        case m2c::kskiplineleft: 	goto skiplineleft;
        case m2c::kskiplineright: 	goto skiplineright;
        case m2c::kskipobject: 	goto skipobject;
        case m2c::kskiprightclip: 	goto skiprightclip;
        case m2c::kskiprightpoint: 	goto skiprightpoint;
        case m2c::ksortpolycrt: 	goto sortpolycrt;
        case m2c::ksortpolyterm: 	goto sortpolyterm;
        case m2c::ksortpolyvis: 	goto sortpolyvis;
        case m2c::kvcalcoutcodes: 	goto vcalcoutcodes;
        case m2c::kvdotclip: 	goto vdotclip;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kvpolyclip: 	goto vpolyclip;
        case m2c::kvpolylineclip: 	goto vpolylineclip;
        case m2c::kvquicklineclip: 	goto vquicklineclip;
        case m2c::kvquickoutcodes: 	goto vquickoutcodes;
        case m2c::kvsetrotation: 	goto vsetrotation;
        case m2c::kvsetviewport: 	goto vsetviewport;
        case m2c::kvtransform: 	goto vtransform;
        default: return __dispatch_call(__disp, _state);
    };
}


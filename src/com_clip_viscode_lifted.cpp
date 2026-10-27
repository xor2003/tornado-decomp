/* THIS IS GENERATED FILE */

        
#include "com_clip.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
setviewmode:
	// 551 
	/* mov	ViewMode,ax ;*       initialize the clip variables - there is no default condition. */
	viewmode = ax;
edummylabel1:
	// 4369 
	/* mov	si,ax */
	si = ax;
	/* shr	si,1		;/2 byte index */
	SHR(si, 1);
	/* test	VarClipOrg[si],1;variable origin? */
	TEST(*((&varcliporg)+si), 1);
	/* jnz	@F		;yes -> */
	if ((*((&varcliporg)+si) & 1) != 0) {goto dummylabel1;}
	/* xor	cx,cx		;set default origin */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
dummylabel1:
	// 4371 
	/* @@:		mov	ClipWndwXOrg,cx	;only valid if TV?_VIEWMODE */
	clipwndwxorg = cx;
	/* mov	ClipWndwYOrg,bl	;only valid if TV?_VIEWMODE */
	*(clipwndwyorg) = bl;
	/* mov	CircleXMin,cx */
	circlexmin = cx;
	/* mov	BYTE PTR CircleYMin,bl */
	*(db*)(&circleymin) = bl;
	/* mov	si,ax */
	si = ax;
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	ax,ClipWndwSize[si] */
	ax = *(dw*)(((db*)clipwndwsize)+si);
	/* mov	ClipWndwWidth,ax */
	clipwndwwidth = ax;
	/* add	cx,ax */
	ADD(cx, ax);
	/* dec	cx */
	DEC(cx);
	/* mov	ClipWndwXMax,cx */
	clipwndwxmax = cx;
	/* mov	CircleXMax,cx */
	circlexmax = cx;
	/* mov	al,BYTE PTR ClipWndwSize[si+2] */
	al = *(db*)(((db*)clipwndwsize)+si+2);
	/* mov	BYTE PTR ClipWndwDepth,al */
	*(db*)(&clipwndwdepth) = al;
	/* add	bl,al */
	ADD(bl, al);
	/* dec	bl */
	DEC(bl);
	/* mov	ClipWndwYMax,bl */
	*(clipwndwymax) = bl;
	/* mov	BYTE PTR CircleYMax,bl */
	*(db*)(&circleymax) = bl;
	/* shr	si,1		;/2 index */
	SHR(si, 1);
	// 0 ;* set up indirection pointers for clip routines
	/* mov	ax,_ScaleVPyramid[si+2] */
	ax = *(dw*)(((db*)&_scalevpyramid)+si+2);
	/* mov	_ScaleVPyramid,ax */
	_scalevpyramid = ax;
	/* mov	ax,_CalcCRT[si+2] */
	ax = *(dw*)(((db*)&_calccrt)+si+2);
	/* mov	_CalcCRT,ax */
	_calccrt = ax;
	/* mov	ax,_CircleCRT[si+2] */
	ax = *(dw*)(((db*)&_circlecrt)+si+2);
	/* mov	_CircleCRT,ax */
	_circlecrt = ax;
	/* ret */
	RETF(0);
calcoutcodes:
	// 605 
	/* mov	di,si 		;store last vertex index */
	di = si;
	// 0 ;* dl = object non-visible test mask, dh = object totally visible test mask
edummylabel2:
	// 4373 
	/* mov	dx,000ffh */
	dx = 0x000ff;
ocodeloop:
	// 4375 
	/* OCodeLoop:	mov	ax,Xe[si]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* and	dl,al		;update non-visible test mask */
	AND(dl, al);
	/* or	dh,al		;update totally visible test mask */
	OR(dh, al);
	/* sub	si,2		;next eye co-ord */
	SUB(si, 2);
	/* jnc	OCodeLoop */
	if (!CF) {goto ocodeloop;}
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
	// 4377 
	/* ClipObject:	mov	ax,CLIP_OBJECT */
	ax = 2;
	/* mov	ObjectDrawMode,ax */
	objectdrawmode = ax;
	/* clc			;cf = 0 (object visible) */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;* skip object - object totally non-visible
skipobject:
	// 4379 
	/* SkipObject:	mov	ax,SKIP_OBJECT */
	ax = 4;
	/* mov	ObjectDrawMode,ax */
	objectdrawmode = ax;
	/* stc			;cf = 1 (object non-visible) */
	STC;
	/* ret */
	RETN(0);
	// 0 ;* draw object - object totally visible, generate all crt co-ords now
drawobject:
	// 4381 
	/* DrawObject:	xor	si,si		;index = 0 */
	XOR(si, si);
genxycrtloop:
	// 4383 
	/* GenXYCrtLoop:	mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;* store crt co-ords, even if error (x = -1, y = -1)
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	WORD PTR YCrt[si],bx */
	*(dw*)((&ycrt)+si) = bx;
	/* add	si,2		;next vertex index */
	ADD(si, 2);
	/* cmp	si,di		;all vertices done? */
	CMP(si, di);
	/* jbe	GenXYCrtLoop	;no -> */
	if ((dw)(si) <= (dw)(di)) {goto genxycrtloop;}
	/* mov	ax,DRAW_OBJECT */
	ax = 0;
	/* mov	ObjectDrawMode,ax */
	objectdrawmode = ax;
	/* clc			;cf = 0 (object visible) */
	CLC;
	/* ret */
	RETN(0);
quickoutcodes:
	// 669 
	// 0 ;* dl = object non-visible test mask
edummylabel3:
	// 4385 
	/* mov	dl,0ffh */
	dl = 0x0ff;
quickocodeloop:
	// 4387 
	/* QuickOCodeLoop:	mov	ax,Xe[si]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
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
	RETN(0);
calcocode:
	// 701 
	/* mov	bp,ax ;* kill: ah, bx, cx, bp, flags */
	bp = ax;
edummylabel4:
	// 4389 
	/* cmp	bx,1		;behind? */
	CMP(bx, 1);
	/* jl	YNeg1		;yes -> */
	if ((short)(bx) < (short)(1)) {goto yneg1;}
	// 0 ;* calculate outcode for point in front
	/* xor	al,al		;init in front outcode */
	XOR(al, al);
	/* test	bp,bp		;x left or right? */
	TEST(bp, bp);
	/* js	XNeg1		;left -> */
	if ((short)((bp & bp)) < 0) {goto xneg1;}
	/* cmp	bp,bx		;x <= y? */
	CMP(bp, bx);
	/* jbe	CheckZY1	;yes -> */
	if ((dw)(bp) <= (dw)(bx)) {goto checkzy1;}
	/* or	al,002h		;set clip right flag */
	OR(al, 0x002);
	/* jmp	CheckZY1 */
	goto checkzy1;
xneg1:
	// 4391 
	/* XNeg1:		neg	bp		;abs(x) */
	NEG(bp);
	/* cmp	bp,bx		;x <= y? */
	CMP(bp, bx);
	/* jbe	CheckZY1	;yes -> */
	if ((dw)(bp) <= (dw)(bx)) {goto checkzy1;}
	/* or	al,001h		;set clip left flag */
	OR(al, 0x001);
checkzy1:
	// 4393 
	/* CheckZY1:	test	cx,cx		;z above or below? */
	TEST(cx, cx);
	/* js	ZNeg1		;below -> */
	if ((short)((cx & cx)) < 0) {goto zneg1;}
	/* cmp	cx,bx		;z <= y? */
	CMP(cx, bx);
	/* jbe	CalcOCodeExit	;yes -> */
	if ((dw)(cx) <= (dw)(bx)) {goto calcocodeexit;}
	/* or	al,008h		;set clip above flag */
	OR(al, 0x008);
	/* jmp	CalcOCodeExit */
	goto calcocodeexit;
zneg1:
	// 4395 
	/* ZNeg1:		neg	cx		;abs(z) */
	NEG(cx);
	/* cmp	cx,bx		;z <= y? */
	CMP(cx, bx);
	/* jbe	CalcOCodeExit	;yes -> */
	if ((dw)(cx) <= (dw)(bx)) {goto calcocodeexit;}
	/* or	al,004h		;set clip below flag */
	OR(al, 0x004);
	/* jmp	CalcOCodeExit */
	goto calcocodeexit;
	// 0 ;* calculate outcode for point behind
yneg1:
	// 4397 
	/* YNeg1:		neg	bx		;abs(y) */
	NEG(bx);
	/* mov	al,08fh		;init behind outcode */
	al = 0x08f;
	/* test	bp,bp		;x left or right? */
	TEST(bp, bp);
	/* js	XNeg2		;left -> */
	if ((short)((bp & bp)) < 0) {goto xneg2;}
	/* cmp	bp,bx		;x <= y? */
	CMP(bp, bx);
	/* jbe	CheckZY2	;yes -> */
	if ((dw)(bp) <= (dw)(bx)) {goto checkzy2;}
	/* and	al,08eh		;set clip right flag */
	AND(al, 0x08e);
	/* jmp	CheckZY2 */
	goto checkzy2;
xneg2:
	// 4399 
	/* XNeg2:		neg	bp		;abs(x) */
	NEG(bp);
	/* cmp	bp,bx		;x <= y? */
	CMP(bp, bx);
	/* jbe	CheckZY2	;yes -> */
	if ((dw)(bp) <= (dw)(bx)) {goto checkzy2;}
	/* and	al,08dh		;set clip left flag */
	AND(al, 0x08d);
checkzy2:
	// 4401 
	/* CheckZY2:	test	cx,cx		;z above or below? */
	TEST(cx, cx);
	/* js	ZNeg2		;below -> */
	if ((short)((cx & cx)) < 0) {goto zneg2;}
	/* cmp	cx,bx		;z <= y? */
	CMP(cx, bx);
	/* jbe	CalcOCodeExit	;yes -> */
	if ((dw)(cx) <= (dw)(bx)) {goto calcocodeexit;}
	/* and	al,08bh		;set clip above flag */
	AND(al, 0x08b);
	/* jmp	CalcOCodeExit */
	goto calcocodeexit;
zneg2:
	// 4403 
	/* ZNeg2:		neg	cx		;abs(z) */
	NEG(cx);
	/* cmp	cx,bx		;z <= y? */
	CMP(cx, bx);
	/* jbe	CalcOCodeExit	;yes -> */
	if ((dw)(cx) <= (dw)(bx)) {goto calcocodeexit;}
	/* and	al,087h		;set clip below flag */
	AND(al, 0x087);
calcocodeexit:
	// 4405 
	/* CalcOCodeExit:	test	al,al		;zf = 1 = visible */
	TEST(al, al);
	/* ret */
	RETN(0);
scalevpyramid:
	// 765 
	/* mov	bp,_ScaleVPyramid ;* kill: bp, flags */
	bp = _scalevpyramid;
edummylabel5:
	// 4407 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
calccrt:
	// 782 
	/* mov	bp,_CalcCRT ;* kill: ax, dx, bp, flags */
	bp = _calccrt;
edummylabel6:
	// 4409 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
circlecrt:
	// 799 
	/* mov	bp,_CircleCRT ;* kill: ax, dx, bp, flags */
	bp = _circlecrt;
edummylabel7:
	// 4411 
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
polyclip:
	// 819 
	/* mov	bx,ObjectDrawMode ;* kill: ax, bx, cx, dx, bp, flags */
	bx = objectdrawmode;
edummylabel8:
	// 4413 
__disp=*(dw*)(((db*)&polyclipmode)+bx);
	/* jmp	PolyClipMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
drawpoly:
	// 834 
	/* mov	bp,di		;store crt buffer ptr */
	bp = di;
edummylabel9:
	// 4415 
	/* xor	bx,bx */
	XOR(bx, bx);
drawpolyloop:
	// 4417 
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
	/* cmp	ax,-1		;error? */
	CMP(ax, -1);
	/* je	DrawPolyLoop	;yes, skip point -> */
	if ((dw)(ax) == (dw)(-1)) {goto drawpolyloop;}
	/* stosw */
	{ STOSW; }
	/* mov	ax,WORD PTR YCrt[bx] */
	ax = *(dw*)((&ycrt)+bx);
	/* stosw */
	{ STOSW; }
	/* jmp	DrawPolyLoop */
	goto drawpolyloop;
sortpolyterm:
	// 4419 
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
	/* ret */
	RETN(0);
drawpolyfail:
	// 4421 
	/* DrawPolyFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
clippoly:
	// 871 
	/* mov	TempPtr1,di ;* note: Uses Sutherland - Hodgman polygon clipping algorithm. */
	tempptr1 = di;
edummylabel10:
	// 4423 
	/* xor	bx,bx */
	XOR(bx, bx);
	// 0 ;* dl = object non-visible test mask, dh = object totally visible test mask
	/* mov	dx,000ffh */
	dx = 0x000ff;
	/* mov	di,OFFSET ClipBuffer+8 */
	di = m2c::near_offset_external(clipbuffer)+8;
nextpolycoord:
	// 4425 
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
	/* mov	ax,Ze[bx] */
	ax = *(dw*)(((db*)&ze)+bx);
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
	// 4427 
	/* SortPolyVis:	push	si		;store ptr to next polygon data */
	PUSH(si);
	/* mov	ClipRecover,sp	;recover stack to here if clip error */
	cliprecover = sp;
	/* mov	si,OFFSET ClipBuffer+8 */
	si = m2c::near_offset_external(clipbuffer)+8;
	/* test	dl,dl		;polygon non-visible? */
	TEST(dl, dl);
	/* jnz	ClipPolyFailLnk	;yes -> */
	if ((dl & dl) != 0) {goto clippolyfaillnk;}
	// 0 ;* if partially visible then jump to first clip required
	/* xor	bx,bx		;reset index */
	XOR(bx, bx);
	/* rol	dh,1		;outcodes xxxABRLB */
	ROL(dh, 1);
	/* rcr	dh,1		;cf = 1 = behind clip required */
	RCR(dh, 1);
	/* jc	ClipSwitch */
	if (CF) {goto clipswitch;}
	/* add	bx,2 */
	ADD(bx, 2);
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
	// 4429 
__disp=*(dw*)(((db*)&intopolyclip)+bx);
	/* ClipSwitch:	jmp	IntoPolyClip[bx] */
	J(return __dispatch_call_ext(__disp, _state));
clippolyfaillnk:
	// 4431 
	/* ClipPolyFailLnk:jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;------------------------
	// 0 ;* clip all points behind
	// 0 ;------------------------
intobehindclip:
	// 4433 
	/* IntoBehindClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-8]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-8)));
	/* mov	[si-8],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-8))), m2c::getdata(ax));
	/* mov	ax,[di-6] */
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
	/* and	dl,080h	 	;dl = end b outcode */
	AND(dl, 0x080);
behindcliploop:
	// 4435 
	/* BehindClipLoop:	mov	dh,[si+6] */
	dh = m2c::getdata(*(raddr(ds,si+6)));
	/* and	dh,080h		;dh = end a outcode */
	AND(dh, 0x080);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of pyramid? */
	XOR(al, dl);
	/* jz 	SkipBehindClip	;yes -> */
	if (al == 0) {goto skipbehindclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipBehind */
	CALL(polyclipbehind, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw			;store outcode of clipped point */
	{ STOSW; }
	/* pop 	dx */
	POP(dx);
skipbehindclip:
	// 4437 
	/* SkipBehindClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipBehindPoint	;no -> */
	if ((dh & dh) != 0) {goto skipbehindpoint;}
	/* mov	cx,3		;store new point if visible */
	cx = 3;
	// 951 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextBehindClip */
	goto nextbehindclip;
skipbehindpoint:
	// 4439 
	/* SkipBehindPoint:add	si,8		;skip point */
	ADD(si, 8);
nextbehindclip:
	// 4441 
	/* NextBehindClip:	mov	dl,dh */
	dl = dh;
	/* cmp	si,LastPtr	;all points done? */
	CMP(si, lastptr);
	/* jb	BehindClipLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto behindcliploop;}
	/* cmp	si,di		;any points remaining? */
	CMP(si, di);
	/* jne	LeftClipStart	;yes, move on to next clip -> */
	if ((dw)(si) != (dw)(di)) {goto leftclipstart;}
behindfail:
	// 4443 
	/* BehindFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;----------------------
	// 0 ;* clip all points left
	// 0 ;----------------------
leftclipstart:
	// 4445 
	/* LeftClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,080h		;any rogue points? */
	TEST(al, 0x080);
	/* jnz	BehindFail	;yes, clip failed -> */
	if ((al & 0x080) != 0) {goto behindfail;}
	/* test	al,001h		;any left clipping required? */
	TEST(al, 0x001);
	/* jz	RightClipStart	;no -> */
	if (!(al & 0x001)) {goto rightclipstart;}
intoleftclip:
	// 4447 
	/* IntoLeftClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-8]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-8)));
	/* mov	[si-8],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-8))), m2c::getdata(ax));
	/* mov	ax,[di-6] */
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
	/* and	dl,001h	 	;dl = end b outcode */
	AND(dl, 0x001);
leftcliploop:
	// 4449 
	/* LeftClipLoop:	mov	dh,[si+6] */
	dh = m2c::getdata(*(raddr(ds,si+6)));
	/* and	dh,001h		;dh = end a outcode */
	AND(dh, 0x001);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of pyramid? */
	XOR(al, dl);
	/* jz 	SkipLeftClip	;yes -> */
	if (al == 0) {goto skipleftclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipLeft */
	CALL(polyclipleft, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw			;store outcode of clipped point */
	{ STOSW; }
	/* pop 	dx */
	POP(dx);
skipleftclip:
	// 4451 
	/* SkipLeftClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipLeftPoint	;no -> */
	if ((dh & dh) != 0) {goto skipleftpoint;}
	/* mov	cx,3		;store new point if visible */
	cx = 3;
	// 998 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextLeftClip */
	goto nextleftclip;
skipleftpoint:
	// 4453 
	/* SkipLeftPoint:	add	si,8		;skip point */
	ADD(si, 8);
nextleftclip:
	// 4455 
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
	// 4457 
	/* LeftFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;-----------------------
	// 0 ;* clip all points right
	// 0 ;-----------------------
rightclipstart:
	// 4459 
	/* RightClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,081h		;any rogue points? */
	TEST(al, 0x081);
	/* jnz	LeftFail	;yes, clip failed -> */
	if ((al & 0x081) != 0) {goto leftfail;}
	/* test	al,002h		;any right clipping required? */
	TEST(al, 0x002);
	/* jz	BelowClipStart	;no -> */
	if (!(al & 0x002)) {goto belowclipstart;}
intorightclip:
	// 4461 
	/* IntoRightClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-8]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-8)));
	/* mov	[si-8],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-8))), m2c::getdata(ax));
	/* mov	ax,[di-6] */
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
	/* and	dl,002h	 	;dl = end b outcode */
	AND(dl, 0x002);
rightcliploop:
	// 4463 
	/* RightClipLoop:	mov	dh,[si+6] */
	dh = m2c::getdata(*(raddr(ds,si+6)));
	/* and	dh,002h		;dh = end a outcode */
	AND(dh, 0x002);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of pyramid? */
	XOR(al, dl);
	/* jz 	SkipRightClip	;yes -> */
	if (al == 0) {goto skiprightclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipRight */
	CALL(polyclipright, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw			;store outcode of clipped point */
	{ STOSW; }
	/* pop 	dx */
	POP(dx);
skiprightclip:
	// 4465 
	/* SkipRightClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipRightPoint	;no -> */
	if ((dh & dh) != 0) {goto skiprightpoint;}
	/* mov	cx,3		;store new point if visible */
	cx = 3;
	// 1045 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextRightClip */
	goto nextrightclip;
skiprightpoint:
	// 4467 
	/* SkipRightPoint:	add	si,8		;skip point */
	ADD(si, 8);
nextrightclip:
	// 4469 
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
	// 4471 
	/* RightFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;-----------------------
	// 0 ;* clip all points below
	// 0 ;-----------------------
belowclipstart:
	// 4473 
	/* BelowClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,083h		;any rogue points? */
	TEST(al, 0x083);
	/* jnz	RightFail	;yes, clip failed -> */
	if ((al & 0x083) != 0) {goto rightfail;}
	/* test	al,004h		;any below clipping required? */
	TEST(al, 0x004);
	/* jz	AboveClipStart	;no -> */
	if (!(al & 0x004)) {goto aboveclipstart;}
intobelowclip:
	// 4475 
	/* IntoBelowClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-8]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-8)));
	/* mov	[si-8],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-8))), m2c::getdata(ax));
	/* mov	ax,[di-6] */
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
	/* and	dl,004h	 	;dl = end b outcode */
	AND(dl, 0x004);
belowcliploop:
	// 4477 
	/* BelowClipLoop:	mov	dh,[si+6] */
	dh = m2c::getdata(*(raddr(ds,si+6)));
	/* and	dh,004h		;dh = end a outcode */
	AND(dh, 0x004);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of pyramid? */
	XOR(al, dl);
	/* jz 	SkipBelowClip	;yes -> */
	if (al == 0) {goto skipbelowclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipBelow */
	CALL(polyclipbelow, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw			;store outcode of clipped point */
	{ STOSW; }
	/* pop 	dx */
	POP(dx);
skipbelowclip:
	// 4479 
	/* SkipBelowClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipBelowPoint	;no -> */
	if ((dh & dh) != 0) {goto skipbelowpoint;}
	/* mov	cx,3		;store new point if visible */
	cx = 3;
	// 1092 rep	movsw	
	/* rep	movsw */
	REP MOVSW;
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextBelowClip */
	goto nextbelowclip;
skipbelowpoint:
	// 4481 
	/* SkipBelowPoint:	add	si,8		;skip point */
	ADD(si, 8);
nextbelowclip:
	// 4483 
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
	// 4485 
	/* BelowFail:	jmp	ClipPolyFail */
	goto clippolyfail;
	// 0 ;-----------------------
	// 0 ;* clip all points above
	// 0 ;-----------------------
aboveclipstart:
	// 4487 
	/* AboveClipStart:	mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,087h		;any rogue points? */
	TEST(al, 0x087);
	/* jnz	BelowFail	;yes, clip failed -> */
	if ((al & 0x087) != 0) {goto belowfail;}
	/* test	al,008h		;any above clipping required? */
	TEST(al, 0x008);
	/* jz	SortPolyCrt	;no -> */
	if (!(al & 0x008)) {goto sortpolycrt;}
intoaboveclip:
	// 4489 
	/* IntoAboveClip:	xor	al,al		;reset look ahead outcode mask */
	XOR(al, al);
	/* mov	LookAhead,al */
	*(lookahead) = al;
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	ax,[di-8]	;move last point in front of first */
	ax = m2c::getdata(*(dw*)(raddr(ds,di-8)));
	/* mov	[si-8],ax */
	m2c::setdata(&(*(dw*)(raddr(ds,si-8))), m2c::getdata(ax));
	/* mov	ax,[di-6] */
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
	/* and	dl,008h	 	;dl = end b outcode */
	AND(dl, 0x008);
abovecliploop:
	// 4491 
	/* AboveClipLoop:	mov	dh,[si+6] */
	dh = m2c::getdata(*(raddr(ds,si+6)));
	/* and	dh,008h		;dh = end a outcode */
	AND(dh, 0x008);
	/* mov	al,dh */
	al = dh;
	/* xor	al,dl	    	;ends a and b on same side of pyramid? */
	XOR(al, dl);
	/* jz 	SkipAboveClip	;yes -> */
	if (al == 0) {goto skipaboveclip;}
	/* push	dx */
	PUSH(dx);
	/* call	PolyClipAbove */
	CALL(polyclipabove, 0);
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw			;store outcode of clipped point */
	{ STOSW; }
	/* pop 	dx */
	POP(dx);
skipaboveclip:
	// 4493 
	/* SkipAboveClip:	test	dh,dh		;end a visible? */
	TEST(dh, dh);
	/* jnz	SkipAbovePoint	;no -> */
	if ((dh & dh) != 0) {goto skipabovepoint;}
	/* mov	cx,3		;store new point if visible */
	cx = 3;
	// 1139 rep	movsw	
	/* rep	movsw */
	REP MOVSW;
	/* lodsw */
	{ LODSW; }
	/* or	LookAhead,al	;update look ahead outcode mask */
	OR(*(lookahead), al);
	/* stosw */
	{ STOSW; }
	/* jmp	NextAboveClip */
	goto nextaboveclip;
skipabovepoint:
	// 4495 
	/* SkipAbovePoint:	add	si,8		;skip point */
	ADD(si, 8);
nextaboveclip:
	// 4497 
	/* NextAboveClip:	mov	dl,dh */
	dl = dh;
	/* cmp	si,LastPtr	;all points done? */
	CMP(si, lastptr);
	/* jb	AboveClipLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto abovecliploop;}
	/* mov	al,LookAhead */
	al = *(lookahead);
	/* test	al,08fh		;any rogue points? */
	TEST(al, 0x08f);
	/* jnz	ClipPolyFail	;yes, clip failed -> */
	if ((al & 0x08f) != 0) {goto clippolyfail;}
	// 0 ;-----------------------------
	// 0 ;* create crt list for polygon
	// 0 ;-----------------------------
sortpolycrt:
	// 4499 
	/* SortPolyCrt:	cmp	si,di		;any points remaining? */
	CMP(si, di);
	/* je	ClipPolyFail	;no -> */
	if ((dw)(si) == (dw)(di)) {goto clippolyfail;}
	/* mov	LastPtr,di */
	lastptr = di;
	/* mov	di,TempPtr1 */
	di = tempptr1;
polycrtloop:
	// 4501 
	/* PolyCrtLoop:	lodsw			;fetch x eye */
	{ LODSW; }
	/* mov	bp,ax */
	bp = ax;
	/* lodsw			;fetch y eye */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* lodsw			;fetch z eye */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,bp */
	ax = bp;
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	/* jc	SkipPolyPoint	;crt calc error, skip point -> */
	if (CF) {goto skippolypoint;}
	/* mov	ax,cx */
	ax = cx;
	/* stosw			;store x crt */
	{ STOSW; }
	/* mov	ax,bx */
	ax = bx;
	/* stosw			;store y crt */
	{ STOSW; }
skippolypoint:
	// 4503 
	/* SkipPolyPoint:	add	si,2		;skip outcode data */
	ADD(si, 2);
	/* cmp	si,LastPtr 	;done all points? */
	CMP(si, lastptr);
	/* jb	PolyCrtLoop	;no -> */
	if ((dw)(si) < (dw)(lastptr)) {goto polycrtloop;}
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
	/* ret */
	RETN(0);
clippolyfail:
	// 4505 
	/* ClipPolyFail:	pop	si		;restore ptr to next polygon data */
	POP(si);
	/* stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
polyclipcheck:
	// 1204 
	/* mov	ax,dx ;*       then the program recovers the stack and drops out of ClipPoly. */
	ax = dx;
edummylabel11:
	// 4507 
	/* xor	ax,bp		;sign(dx) = sign(bp)? */
	XOR(ax, bp);
	/* js	ClipDivError	;no, error -> */
	if ((short)(ax) < 0) {goto clipdiverror;}
	/* test	bp,bp		;+ve? */
	TEST(bp, bp);
	/* jns	ClipDivTest	;yes -> */
	if ((short)((bp & bp)) >= 0) {goto clipdivtest;}
	/* neg	dx */
	NEG(dx);
	/* neg	bp */
	NEG(bp);
clipdivtest:
	// 4509 
	/* ClipDivTest:	cmp	bp,dx		;abs(bp) < abs(dx)? */
	CMP(bp, dx);
	/* jb	ClipDivError	;yes -> */
	if ((dw)(bp) < (dw)(dx)) {goto clipdiverror;}
	/* ret */
	RETN(0);
clipdiverror:
	// 4511 
	/* ClipDivError:	mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipPolyFail */
	goto clippolyfail;
polyclipbehind:
	// 1241 
	/* mov	cx,XA[si] ;*              ZC = ZB */
	cx = m2c::getdata(*(dw*)(raddr(ds,0+si)));
edummylabel12:
	// 4513 
	/* mov	dx,YA[si] */
	dx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
	/* mov	bx,XB[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* sub	bx,cx		;bx = XB - XA */
	SUB(bx, cx);
	/* mov	bp,dx		;bp = YA */
	bp = dx;
	/* sub	bp,ax		;bp = YA - YB */
	SUB(bp, ax);
	/* dec	dx  		;dx = YA - 1 */
	DEC(dx);
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* je	PClipBehind1	;T = 1 -> */
	if (ZF) {goto pclipbehind1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;ax = T = (YA - 1) / (YA - YB) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* imul	bx 		;dx, ax = T * (XB - XA) */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (XB - XA)
	/* add 	dx,cx		;dx = T * (XB - XA) + XA */
	ADD(dx, cx);
	/* mov 	XC[di],dx	;XC = T * (XB - XA) + XA */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(dx));
	/* mov	ax,1 */
	ax = 1;
	/* mov	YC[di],ax	;YC = 1 */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* mov	cx,ZA[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+si)));
	/* mov	bx,ZB[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	bx,cx		;bx = ZB - ZA */
	SUB(bx, cx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	bx		;dx, ax = T * (ZB - ZA) */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (ZB - ZA)
	/* add	dx,cx		;dx = T * (ZB - ZA) + ZA */
	ADD(dx, cx);
	/* mov	ZC[di],dx	;ZC = T * (ZB - ZA) + ZA */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(dx));
behindpclipdone:
	// 4515 
	/* BehindPClipDone:mov	ax,XC[di] */
	ax = m2c::getdata(*(dw*)(raddr(ds,0+di)));
	/* mov	bx,YC[di] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+di)));
	/* mov	cx,ZC[di] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+di)));
	/* add	di,6 */
	ADD(di, 6);
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
pclipbehind1:
	// 4517 
	/* PClipBehind1:	mov	ax,XB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* mov	XC[di],ax	;XC = XB */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	ax,1 */
	ax = 1;
	/* mov	YC[di],ax	;YC = 1 */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* mov	ax,ZB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* mov	ZC[di],ax	;ZC = ZB */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(ax));
	/* jmp	BehindPClipDone */
	goto behindpclipdone;
polyclipabove:
	// 1317 
	/* mov	dx,YA[si] ;*              ZC = YC */
	dx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
edummylabel13:
	// 4519 
	/* mov	bx,ZA[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,4+si)));
	/* mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* mov	cx,ZB[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	dx,bx		;dx = YA - ZA */
	SUB(dx, bx);
	/* mov 	bp,dx		;bp = YA - ZA */
	bp = dx;
	/* add	bp,cx		;bp = YA - ZA + ZB */
	ADD(bp, cx);
	/* sub	bp,ax		;bp = YA - ZA + ZB - YB = ((ZB - ZA) - (YB - YA)) */
	SUB(bp, ax);
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* je	PClipAbove1	;T = 1 -> */
	if (ZF) {goto pclipabove1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv 	bp		;ax = T = (YA - ZA) / ((ZB - ZA) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* mov	bx,YA[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
	/* mov	cx,YB[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* sub	cx,bx		;cx = YB - YA */
	SUB(cx, bx);
	/* imul	cx		;dx, ax = T * (YB - YA) */
	IMUL1_2(cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (YB - YA)
	/* add	dx,bx		;dx = T * (YB - YA) + YA */
	ADD(dx, bx);
	/* mov	YC[di],dx	;YC = T * (YB - YA) + YA */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(dx));
	/* mov	ZC[di],dx	;ZC = YC */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(dx));
	/* mov	bx,XA[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,0+si)));
	/* mov	cx,XB[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* sub	cx,bx		;cx = XB - XA */
	SUB(cx, bx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	cx		;dx, ax = T * (XB - XA) */
	IMUL1_2(cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (XB - XA)
	/* add	dx,bx 		;dx = T * (XB - XA) + XA */
	ADD(dx, bx);
	/* mov 	XC[di],dx 	;XC = T * (XB - XA) + XA */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(dx));
abovepclipdone:
	// 4521 
	/* AbovePClipDone:	mov	ax,XC[di] */
	ax = m2c::getdata(*(dw*)(raddr(ds,0+di)));
	/* mov	bx,YC[di] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+di)));
	/* mov	cx,ZC[di] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+di)));
	/* add	di,6 */
	ADD(di, 6);
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
pclipabove1:
	// 4523 
	/* PClipAbove1:	mov 	ax,XB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* mov 	XC[di],ax	;XC = XB */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* mov	YC[di],ax	;YC = YB */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* mov	ZC[di],ax	;ZC = YC */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(ax));
	/* jmp	AbovePClipDone */
	goto abovepclipdone;
polyclipbelow:
	// 1394 
	/* mov	dx,YA[si] ;*              ZC = -YC */
	dx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
edummylabel14:
	// 4525 
	/* mov	bx,ZA[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,4+si)));
	/* mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* mov	cx,ZB[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* add	dx,bx		;dx = YA + ZA */
	ADD(dx, bx);
	/* mov	bp,dx		;bp = YA + ZA */
	bp = dx;
	/* sub	bp,cx		;bp = YA + ZA - ZB */
	SUB(bp, cx);
	/* sub	bp,ax		;bp = YA + ZA - ZB - YB = ((ZA - ZB) - (YB - YA)) */
	SUB(bp, ax);
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* je	PClipBelow1	;T = 1 -> */
	if (ZF) {goto pclipbelow1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp    		;ax = T = (YA + ZA) / ((ZA - ZB) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* mov	bx,YA[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
	/* mov	cx,YB[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* sub	cx,bx		;cx = YB - YA */
	SUB(cx, bx);
	/* imul	cx		;dx, ax = T * (YB - YA) */
	IMUL1_2(cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (YB - YA)
	/* add	dx,bx		;dx = T * (YB - YA) + YA */
	ADD(dx, bx);
	/* mov	YC[di],dx	;YC = T * (YB - YA) + YA */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(dx));
	/* neg	dx */
	NEG(dx);
	/* mov 	ZC[di],dx	;ZC = -YC */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(dx));
	/* mov	bx,XA[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,0+si)));
	/* mov	cx,XB[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* sub	cx,bx		;cx = XB - XA */
	SUB(cx, bx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	cx		;dx, ax = T * (XB - XA) */
	IMUL1_2(cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (XB - XA)
	/* add	dx,bx		;dx = T * (XB - XA) + XA */
	ADD(dx, bx);
	/* mov	XC[di],dx	;XC = T * (XB - XA) + XA */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(dx));
belowpclipdone:
	// 4527 
	/* BelowPClipDone:	mov	ax,XC[di] */
	ax = m2c::getdata(*(dw*)(raddr(ds,0+di)));
	/* mov	bx,YC[di] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+di)));
	/* mov	cx,ZC[di] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+di)));
	/* add	di,6 */
	ADD(di, 6);
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
pclipbelow1:
	// 4529 
	/* PClipBelow1:	mov	ax,XB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* mov	XC[di],ax	;XC = XB */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* mov	YC[di],ax	;YC = YB */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	ZC[di],ax	;ZC = -YB */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(ax));
	/* jmp	BelowPClipDone */
	goto belowpclipdone;
polyclipright:
	// 1473 
	/* mov	ax,XA[si] ;*              ZC = ZB */
	ax = m2c::getdata(*(dw*)(raddr(ds,0+si)));
edummylabel15:
	// 4531 
	/* mov	cx,YA[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
	/* mov	bp,XB[si] */
	bp = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* mov	bx,YB[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* sub	bx,cx		;bx = YB - YA */
	SUB(bx, cx);
	/* mov	dx,cx		;dx = YA */
	dx = cx;
	/* sub	dx,ax		;dx = YA - XA */
	SUB(dx, ax);
	/* sub	bp,ax		;bp = XB - XA */
	SUB(bp, ax);
	/* sub	bp,bx		;bp = ((XB - XA) - (YB - YA)) */
	SUB(bp, bx);
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* je	PClipRight1	;T = 1 -> */
	if (ZF) {goto pclipright1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv 	bp		;ax = T = (YA - XA) / ((XB - XA) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* imul	bx	 	;dx, ax = T * (YB - YA) */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (YB - YA)
	/* add	dx,cx		;dx = T * (YB - YA) + YA */
	ADD(dx, cx);
	/* mov	YC[di],dx 	;YC = T * (YB - YA) + YA */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(dx));
	/* mov	XC[di],dx 	;XC = YC */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(dx));
	/* mov	cx,ZA[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+si)));
	/* mov	bx,ZB[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub 	bx,cx		;bx = ZB - ZA */
	SUB(bx, cx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	bx		;dx, ax = T * (ZB - ZA) */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (ZB - ZA)
	/* add	dx,cx		;dx = T * (ZB - ZA) + ZA */
	ADD(dx, cx);
	/* mov	ZC[di],dx	;ZC = T * (ZB - ZA) + ZA */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(dx));
rightpclipdone:
	// 4533 
	/* RightPClipDone:	mov	ax,XC[di] */
	ax = m2c::getdata(*(dw*)(raddr(ds,0+di)));
	/* mov	bx,YC[di] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+di)));
	/* mov	cx,ZC[di] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+di)));
	/* add	di,6 */
	ADD(di, 6);
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
pclipright1:
	// 4535 
	/* PClipRight1: 	mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* mov	YC[di],ax	;YC = YB */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* mov	XC[di],ax 	;XC = YC */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	ax,ZB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* mov	ZC[di],ax	;ZC = ZB */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(ax));
	/* jmp	RightPClipDone */
	goto rightpclipdone;
polyclipleft:
	// 1548 
	/* mov	bp,XA[si] ;*              ZC = ZB */
	bp = m2c::getdata(*(dw*)(raddr(ds,0+si)));
edummylabel16:
	// 4537 
	/* mov	cx,YA[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,2+si)));
	/* mov	ax,XB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-8)+si)));
	/* mov	bx,YB[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* sub	bx,cx		;bx = YB - YA */
	SUB(bx, cx);
	/* mov	dx,cx		;dx = YA */
	dx = cx;
	/* add	dx,bp  		;dx = YA + XA */
	ADD(dx, bp);
	/* sub	bp,ax		;bp = XA - XB */
	SUB(bp, ax);
	/* sub	bp,bx		;bp = (XA - XB) - (YB - YA) */
	SUB(bp, bx);
	/* call	PolyClipCheck */
	CALL(polyclipcheck, 0);
	/* je	PClipLeft1 	;T = 1 -> */
	if (ZF) {goto pclipleft1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;ax = T = (YA + XA) / ((XA - XB) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* imul	bx	 	;dx, ax =  T * (YB - YA) */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (YB - YA)
	/* add	dx,cx		;dx = T * (YB - YA) + YA */
	ADD(dx, cx);
	/* mov	YC[di],dx 	;YC = T * (YB - YA) + YA */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(dx));
	/* neg	dx */
	NEG(dx);
	/* mov	XC[di],dx	;XC = -YC */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(dx));
	/* mov	cx,ZA[si] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+si)));
	/* mov	bx,ZB[si] */
	bx = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* sub	bx,cx		;bx = ZB - ZA */
	SUB(bx, cx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	bx		;dx, ax = T * (ZB - ZA) */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;dx = T * (ZB - ZA)
	/* add	dx,cx		;dx = T * (ZB - ZA) + ZA */
	ADD(dx, cx);
	/* mov	ZC[di],dx	;ZC = T * (ZB - ZA) + ZA */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(dx));
leftpclipdone:
	// 4539 
	/* LeftPClipDone:	mov	ax,XC[di] */
	ax = m2c::getdata(*(dw*)(raddr(ds,0+di)));
	/* mov	bx,YC[di] */
	bx = m2c::getdata(*(dw*)(raddr(ds,2+di)));
	/* mov	cx,ZC[di] */
	cx = m2c::getdata(*(dw*)(raddr(ds,4+di)));
	/* add	di,6 */
	ADD(di, 6);
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
pclipleft1:
	// 4541 
	/* PClipLeft1:	mov	ax,YB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-6)+si)));
	/* mov	YC[di],ax	;YC = YB */
	m2c::setdata(&(*(dw*)(raddr(ds,2+di))), m2c::getdata(ax));
	/* neg	ax */
	NEG(ax);
	/* mov	XC[di],ax 	;XC = -YC */
	m2c::setdata(&(*(dw*)(raddr(ds,0+di))), m2c::getdata(ax));
	/* mov	ax,ZB[si] */
	ax = m2c::getdata(*(dw*)(raddr(ds,(-4)+si)));
	/* mov	ZC[di],ax	;ZC = ZB */
	m2c::setdata(&(*(dw*)(raddr(ds,4+di))), m2c::getdata(ax));
	/* jmp	LeftPClipDone */
	goto leftpclipdone;
nullpoly:
	// 1610 
nullpolyloop:
	// 4543 
	/* NullPolyLoop:	lodsb			;move pointer past polygon data */
	{ LODSB; }
	/* cmp	al,-1 */
	CMP(al, -1);
	/* jne	NullPolyLoop */
	if ((db)(al) != (db)(-1)) {goto nullpolyloop;}
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
cliplineend:
	// 1628 
	/* mov	ClipRecover,sp	;recover stack to here if clip error */
	cliprecover = sp;
edummylabel17:
	// 4545 
	/* mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	XEndA,ax */
	xenda = ax;
	/* mov	ax,Ye[si] */
	ax = *(dw*)(((db*)&ye)+si);
	/* mov	YEndA,ax */
	yenda = ax;
	/* mov	ax,Ze[si] */
	ax = *(dw*)(((db*)&ze)+si);
	/* mov	ZEndA,ax */
	zenda = ax;
	/* mov	ax,Xe[di] */
	ax = *(dw*)(((db*)&xe)+di);
	/* mov	XEndB,ax */
	xendb = ax;
	/* mov	ax,Ye[di] */
	ax = *(dw*)(((db*)&ye)+di);
	/* mov	YEndB,ax */
	yendb = ax;
	/* mov	ax,Ze[di] */
	ax = *(dw*)(((db*)&ze)+di);
	/* mov	ZEndB,ax */
	zendb = ax;
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
	/* mov	OCodeEndA,al */
	*(ocodeenda) = al;
	/* test	al,080h		;behind? */
	TEST(al, 0x080);
	/* jz	SkipLineBehind	;no -> */
	if (!(al & 0x080)) {goto skiplinebehind;}
	/* call	LineClipBehind */
	CALL(lineclipbehind, 0);
	/* test	al,OutCode[di]	;totally non-vis after behind clip? */
	TEST(al, *((&outcode)+di));
	/* jnz	ClipEndFail	;yes -> */
	if ((al & *((&outcode)+di)) != 0) {goto clipendfail;}
	/* mov	OCodeEndA,al	;overwrite end a with clipped end */
	*(ocodeenda) = al;
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	XEndA,ax */
	xenda = ax;
	/* mov	ax,YEndC */
	ax = yendc;
	/* mov	YEndA,ax */
	yenda = ax;
	/* mov	ax,ZEndC */
	ax = zendc;
	/* mov	ZEndA,ax */
	zenda = ax;
	/* mov	al,OCodeEndA */
	al = *(ocodeenda);
skiplinebehind:
	// 4547 
	/* SkipLineBehind:	test	al,001h		;left? */
	TEST(al, 0x001);
	/* jz	SkipLineLeft	;no -> */
	if (!(al & 0x001)) {goto skiplineleft;}
	/* call	LineClipLeft */
	CALL(lineclipleft, 0);
	/* jz	ClipEndExit */
	if (ZF) {goto clipendexit;}
	/* mov	al,OCodeEndA */
	al = *(ocodeenda);
skiplineleft:
	// 4549 
	/* SkipLineLeft:	test	al,002h		;right? */
	TEST(al, 0x002);
	/* jz	SkipLineRight	;no -> */
	if (!(al & 0x002)) {goto skiplineright;}
	/* call	LineClipRight */
	CALL(lineclipright, 0);
	/* jz	ClipEndExit */
	if (ZF) {goto clipendexit;}
	/* mov	al,OCodeEndA */
	al = *(ocodeenda);
skiplineright:
	// 4551 
	/* SkipLineRight:	test	al,004h		;below? */
	TEST(al, 0x004);
	/* jz	SkipLineBelow	;no -> */
	if (!(al & 0x004)) {goto skiplinebelow;}
	/* call	LineClipBelow */
	CALL(lineclipbelow, 0);
	/* jz	ClipEndExit */
	if (ZF) {goto clipendexit;}
	/* mov	al,OCodeEndA */
	al = *(ocodeenda);
skiplinebelow:
	// 4553 
	/* SkipLineBelow:	test	al,008h		;above? */
	TEST(al, 0x008);
	/* jz	ClipEndFail	;no -> */
	if (!(al & 0x008)) {goto clipendfail;}
	/* call	LineClipAbove */
	CALL(lineclipabove, 0);
	/* jnz	ClipEndFail	;error -> */
	if (!ZF) {goto clipendfail;}
clipendexit:
	// 4555 
	/* ClipEndExit:	clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
clipendfail:
	// 4557 
	/* ClipEndFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
lineclipcheck:
	// 1696 
	/* mov	ax,dx ;*       then the program recovers the stack and drops out of ClipLineEnd. */
	ax = dx;
edummylabel18:
	// 4559 
	/* xor	ax,bp		;sign(dx) = sign(bp)? */
	XOR(ax, bp);
	/* js	LClipDivError	;no, error -> */
	if ((short)(ax) < 0) {goto lclipdiverror;}
	/* test	bp,bp		;+ve? */
	TEST(bp, bp);
	/* jns	LClipDivTest	;yes -> */
	if ((short)((bp & bp)) >= 0) {goto lclipdivtest;}
	/* neg	dx */
	NEG(dx);
	/* neg	bp */
	NEG(bp);
lclipdivtest:
	// 4561 
	/* LClipDivTest:	cmp	bp,dx		;abs(bp) < abs(dx)? */
	CMP(bp, dx);
	/* jb	LClipDivError	;yes -> */
	if ((dw)(bp) < (dw)(dx)) {goto lclipdiverror;}
	/* ret */
	RETN(0);
lclipdiverror:
	// 4563 
	/* LClipDivError:	mov	sp,ClipRecover	;recover the stack */
	sp = cliprecover;
	/* jmp	ClipEndFail */
	goto clipendfail;
lineclipbehind:
	// 1733 
	/* mov	cx,XEndA ;*              ZC = ZB */
	cx = xenda;
edummylabel19:
	// 4565 
	/* mov	dx,YEndA */
	dx = yenda;
	/* mov	bx,XEndB */
	bx = xendb;
	/* mov	ax,YEndB */
	ax = yendb;
	/* sub	bx,cx		;bx = XB - XA */
	SUB(bx, cx);
	/* mov	bp,dx		;bp = YA */
	bp = dx;
	/* sub	bp,ax		;bp = YA - YB */
	SUB(bp, ax);
	/* dec	dx  		;dx = YA - 1 */
	DEC(dx);
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* je	LClipBehind1	;T = 1 -> */
	if (ZF) {goto lclipbehind1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;ax = T = (YA - 1) / (YA - YB) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* imul	bx 		;dx, ax = T * (XB - XA) */
	IMUL1_2(bx);
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
	// 0 ;ax = T * (XB - XA)
	/* add 	ax,cx		;ax = T * (XB - XA) + XA */
	ADD(ax, cx);
	/* mov 	XEndC,ax	;XC = T * (XB - XA) + XA */
	xendc = ax;
	/* mov	ax,1 */
	ax = 1;
	/* mov	YEndC,ax	;YC = 1 */
	yendc = ax;
	/* mov	cx,ZEndA */
	cx = zenda;
	/* mov	bx,ZEndB */
	bx = zendb;
	/* sub	bx,cx		;bx = ZB - ZA */
	SUB(bx, cx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	bx		;dx, ax = T * (ZB - ZA) */
	IMUL1_2(bx);
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
	// 0 ;ax = T * (ZB - ZA)
	/* add	ax,cx		;ax = T * (ZB - ZA) + ZA */
	ADD(ax, cx);
	/* mov	ZEndC,ax	;ZC = T * (ZB - ZA) + ZA */
	zendc = ax;
behindlclipdone:
	// 4567 
	/* BehindLClipDone:mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
lclipbehind1:
	// 4569 
	/* LClipBehind1:	mov	ax,XEndB */
	ax = xendb;
	/* mov	XEndC,ax	;XC = XB */
	xendc = ax;
	/* mov	ax,1 */
	ax = 1;
	/* mov	YEndC,ax	;YC = 1 */
	yendc = ax;
	/* mov	ax,ZEndB */
	ax = zendb;
	/* mov	ZEndC,ax	;ZC = ZB */
	zendc = ax;
	/* jmp	BehindLClipDone */
	goto behindlclipdone;
lineclipabove:
	// 1810 
	/* mov	dx,YEndA ;*              ZC = YC */
	dx = yenda;
edummylabel20:
	// 4571 
	/* mov	bx,ZEndA */
	bx = zenda;
	/* mov	ax,YEndB */
	ax = yendb;
	/* mov	cx,ZEndB */
	cx = zendb;
	/* sub	dx,bx		;dx = YA - ZA */
	SUB(dx, bx);
	/* mov 	bp,dx		;bp = YA - ZA */
	bp = dx;
	/* add	bp,cx		;bp = YA - ZA + ZB */
	ADD(bp, cx);
	/* sub	bp,ax		;bp = YA - ZA + ZB - YB = ((ZB - ZA) - (YB - YA)) */
	SUB(bp, ax);
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* je	LClipAbove1	;T = 1 -> */
	if (ZF) {goto lclipabove1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv 	bp		;ax = T = (YA - ZA) / ((ZB - ZA) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* mov	bx,YEndA */
	bx = yenda;
	/* mov	cx,YEndB */
	cx = yendb;
	/* sub	cx,bx		;cx = YB - YA */
	SUB(cx, bx);
	/* imul	cx		;dx, ax = T * (YB - YA) */
	IMUL1_2(cx);
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
	// 0 ;ax = T * (YB - YA)
	/* add	ax,bx		;ax = T * (YB - YA) + YA */
	ADD(ax, bx);
	/* mov	YEndC,ax	;YC = T * (YB - YA) + YA */
	yendc = ax;
	/* mov	ZEndC,ax	;ZC = YC */
	zendc = ax;
	/* mov	bx,XEndA */
	bx = xenda;
	/* mov	cx,XEndB */
	cx = xendb;
	/* sub	cx,bx		;cx = XB - XA */
	SUB(cx, bx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	cx		;dx, ax = T * (XB - XA) */
	IMUL1_2(cx);
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
	// 0 ;ax = T * (XB - XA)
	/* add	ax,bx 		;ax = T * (XB - XA) + XA */
	ADD(ax, bx);
	/* mov 	XEndC,ax 	;XC = T * (XB - XA) + XA */
	xendc = ax;
abovelclipdone:
	// 4573 
	/* AboveLClipDone:	mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
lclipabove1:
	// 4575 
	/* LClipAbove1:	mov 	ax,XEndB */
	ax = xendb;
	/* mov 	XEndC,ax	;XC = XB */
	xendc = ax;
	/* mov	ax,YEndB */
	ax = yendb;
	/* mov	YEndC,ax	;YC = YB */
	yendc = ax;
	/* mov	ZEndC,ax	;ZC = YC */
	zendc = ax;
	/* jmp	AboveLClipDone */
	goto abovelclipdone;
lineclipbelow:
	// 1888 
	/* mov	dx,YEndA ;*              ZC = -YC */
	dx = yenda;
edummylabel21:
	// 4577 
	/* mov	bx,ZEndA */
	bx = zenda;
	/* mov	ax,YEndB */
	ax = yendb;
	/* mov	cx,ZEndB */
	cx = zendb;
	/* add	dx,bx		;dx = YA + ZA */
	ADD(dx, bx);
	/* mov	bp,dx		;bp = YA + ZA */
	bp = dx;
	/* sub	bp,cx		;bp = YA + ZA - ZB */
	SUB(bp, cx);
	/* sub	bp,ax		;bp = YA + ZA - ZB - YB = ((ZA - ZB) - (YB - YA)) */
	SUB(bp, ax);
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* je	LClipBelow1 	;T = 1 -> */
	if (ZF) {goto lclipbelow1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp    		;ax = T = (YA + ZA) / ((ZA - ZB) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* mov	bx,YEndA */
	bx = yenda;
	/* mov	cx,YEndB */
	cx = yendb;
	/* sub	cx,bx		;cx = YB - YA */
	SUB(cx, bx);
	/* imul	cx		;dx, ax = T * (YB - YA) */
	IMUL1_2(cx);
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
	// 0 ;ax = T * (YB - YA)
	/* add	ax,bx		;ax = T * (YB - YA) + YA */
	ADD(ax, bx);
	/* mov	YEndC,ax	;YC = T * (YB - YA) + YA */
	yendc = ax;
	/* neg	ax */
	NEG(ax);
	/* mov 	ZEndC,ax	;ZC = -YC */
	zendc = ax;
	/* mov	bx,XEndA */
	bx = xenda;
	/* mov	cx,XEndB */
	cx = xendb;
	/* sub	cx,bx		;cx = XB - XA */
	SUB(cx, bx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	cx		;dx, ax = T * (XB - XA) */
	IMUL1_2(cx);
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
	// 0 ;ax = T * (XB - XA)
	/* add	ax,bx		;ax = T * (XB - XA) + XA */
	ADD(ax, bx);
	/* mov	XEndC,ax	;XC = T * (XB - XA) + XA */
	xendc = ax;
belowlclipdone:
	// 4579 
	/* BelowLClipDone:	mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
lclipbelow1:
	// 4581 
	/* LClipBelow1:	mov	ax,XEndB */
	ax = xendb;
	/* mov	XEndC,ax	;XC = XB */
	xendc = ax;
	/* mov	ax,YEndB */
	ax = yendb;
	/* mov	YEndC,ax	;YC = YB */
	yendc = ax;
	/* neg	ax */
	NEG(ax);
	/* mov	ZEndC,ax	;ZC = -YB */
	zendc = ax;
	/* jmp	BelowLClipDone */
	goto belowlclipdone;
lineclipright:
	// 1968 
	/* mov	ax,XEndA ;*              ZC = ZB */
	ax = xenda;
edummylabel22:
	// 4583 
	/* mov	cx,YEndA */
	cx = yenda;
	/* mov	bp,XEndB */
	bp = xendb;
	/* mov	bx,YEndB */
	bx = yendb;
	/* sub	bx,cx		;bx = YB - YA */
	SUB(bx, cx);
	/* mov	dx,cx		;dx = YA */
	dx = cx;
	/* sub	dx,ax		;dx = YA - XA */
	SUB(dx, ax);
	/* sub	bp,ax		;bp = XB - XA */
	SUB(bp, ax);
	/* sub	bp,bx		;bp = ((XB - XA) - (YB - YA)) */
	SUB(bp, bx);
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* je	LClipRight1 	;T = 1 -> */
	if (ZF) {goto lclipright1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv 	bp		;ax = T = (YA - XA) / ((XB - XA) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* imul	bx	 	;dx, ax = T * (YB - YA) */
	IMUL1_2(bx);
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
	// 0 ;ax = T * (YB - YA)
	/* add	ax,cx		;ax = T * (YB - YA) + YA */
	ADD(ax, cx);
	/* mov	YEndC,ax 	;YC = T * (YB - YA) + YA */
	yendc = ax;
	/* mov	XEndC,ax 	;XC = YC */
	xendc = ax;
	/* mov	cx,ZEndA */
	cx = zenda;
	/* mov	bx,ZEndB */
	bx = zendb;
	/* sub 	bx,cx		;bx = ZB - ZA */
	SUB(bx, cx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	bx		;dx, ax = T * (ZB - ZA) */
	IMUL1_2(bx);
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
	// 0 ;ax = T * (ZB - ZA)
	/* add	ax,cx		;ax = T * (ZB - ZA) + ZA */
	ADD(ax, cx);
	/* mov	ZEndC,ax	;ZC = T * (ZB - ZA) + ZA */
	zendc = ax;
rightlclipdone:
	// 4585 
	/* RightLClipDone:	mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
lclipright1:
	// 4587 
	/* LClipRight1:	mov	ax,YEndB */
	ax = yendb;
	/* mov	YEndC,ax	;YC = YB */
	yendc = ax;
	/* mov	XEndC,ax 	;XC = YC */
	xendc = ax;
	/* mov	ax,ZEndB */
	ax = zendb;
	/* mov	ZEndC,ax	;ZC = ZB */
	zendc = ax;
	/* jmp	RightLClipDone */
	goto rightlclipdone;
lineclipleft:
	// 2044 
	/* mov	bp,XEndA ;*              ZC = ZB */
	bp = xenda;
edummylabel23:
	// 4589 
	/* mov	cx,YEndA */
	cx = yenda;
	/* mov	ax,XEndB */
	ax = xendb;
	/* mov	bx,YEndB */
	bx = yendb;
	/* sub	bx,cx		;bx = YB - YA */
	SUB(bx, cx);
	/* mov	dx,cx		;dx = YA */
	dx = cx;
	/* add	dx,bp  		;dx = YA + XA */
	ADD(dx, bp);
	/* sub	bp,ax		;bp = XA - XB */
	SUB(bp, ax);
	/* sub	bp,bx		;bp = (XA - XB) - (YB - YA) */
	SUB(bp, bx);
	/* call	LineClipCheck */
	CALL(lineclipcheck, 0);
	/* je	LClipLeft1	;T = 1 -> */
	if (ZF) {goto lclipleft1;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp		;ax = T = (YA + XA) / ((XA - XB) - (YB - YA)) */
	IDIV2(bp);
	/* mov	bp,ax		;bp = T */
	bp = ax;
	/* imul	bx	 	;dx, ax =  T * (YB - YA) */
	IMUL1_2(bx);
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
	// 0 ;ax = T * (YB - YA)
	/* add	ax,cx		;ax = T * (YB - YA) + YA */
	ADD(ax, cx);
	/* mov	YEndC,ax 	;YC = T * (YB - YA) + YA */
	yendc = ax;
	/* neg	ax */
	NEG(ax);
	/* mov	XEndC,ax	;XC = -YC */
	xendc = ax;
	/* mov	cx,ZEndA */
	cx = zenda;
	/* mov	bx,ZEndB */
	bx = zendb;
	/* sub	bx,cx		;bx = ZB - ZA */
	SUB(bx, cx);
	/* mov	ax,bp		;ax = T */
	ax = bp;
	/* imul	bx		;dx, ax = T * (ZB - ZA) */
	IMUL1_2(bx);
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
	// 0 ;ax = T * (ZB - ZA)
	/* add	ax,cx		;ax = T * (ZB - ZA) + ZA */
	ADD(ax, cx);
	/* mov	ZEndC,ax	;ZC = T * (ZB - ZA) + ZA */
	zendc = ax;
leftlclipdone:
	// 4591 
	/* LeftLClipDone:	mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* jmp	CalcOCode	;return via CalcOCode */
	goto calcocode;
	// 0 ;* T = 1
lclipleft1:
	// 4593 
	/* LClipLeft1: 	mov	ax,YEndB */
	ax = yendb;
	/* mov	YEndC,ax	;YC = YB */
	yendc = ax;
	/* neg	ax */
	NEG(ax);
	/* mov	XEndC,ax 	;XC = -YC */
	xendc = ax;
	/* mov	ax,ZEndB */
	ax = zendb;
	/* mov	ZEndC,ax	;ZC = ZB */
	zendc = ax;
	/* jmp	LeftLClipDone */
	goto leftlclipdone;
polylineclip:
	// 2115 
	/* mov	bx,ObjectDrawMode ;* kill: ax, bx, cx, dx, bp, flags */
	bx = objectdrawmode;
edummylabel24:
	// 4595 
__disp=*(dw*)(((db*)&plineclipmode)+bx);
	/* jmp	PLineClipMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
drawpolyline:
	// 2130 
	/* mov	bp,di		;store crt buffer ptr */
	bp = di;
edummylabel25:
	// 4597 
	/* xor	bx,bx */
	XOR(bx, bx);
redodrawpline:
	// 4599 
	/* ReDoDrawPLine:	lodsb			;fetch first vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	DrawPLineExit	;yes -> */
	if ((db)(al) == (db)(-1)) {goto drawplineexit;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XCrt[bx]	;cx = x1 */
	cx = *(dw*)(((db*)&xcrt)+bx);
	/* cmp	cx,-1	      	;error? */
	CMP(cx, -1);
	/* je	ReDoDrawPLine	;yes -> */
	if ((dw)(cx) == (dw)(-1)) {goto redodrawpline;}
	/* mov	dl,YCrt[bx]	;dl = y1 */
	dl = *((&ycrt)+bx);
drawplineloop:
	// 4601 
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
	/* cmp	ax,-1		;error? */
	CMP(ax, -1);
	/* je	ReDoDrawPLine	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto redodrawpline;}
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
	// 4603 
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
	/* ret */
	RETN(0);
drawplinefail:
	// 4605 
	/* DrawPLineFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
viscode_0_proc:
	// 2174 
clipplineexit:
	// 4607 
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
	/* ret */
	RETN(0);
clipplinefail:
	// 4609 
	/* ClipPLineFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
slowcyclicfail:
	// 4665 
	// 0 ;* failed cyclic check - cannot determine point order - assume clockwise
	/* xor	ax,ax		;clockwise */
	XOR(ax, ax);
	/* stc			;cyclic error */
	STC;
	/* ret */
	RETN(0);
clippolyline:
	// 2185 
	/* mov	ax,di */
	ax = di;
edummylabel26:
	// 4611 
	/* mov	TempPtr1,ax */
	tempptr1 = ax;
	/* mov	TempPtr2,ax */
	tempptr2 = ax;
redoclippline:
	// 4613 
	/* ReDoClipPLine:	lodsb			;fetch first vertex index */
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
	/* mov	di,bx */
	di = bx;
	/* mov	ax,Xe[di] */
	ax = *(dw*)(((db*)&xe)+di);
	/* mov	bx,Ye[di] */
	bx = *(dw*)(((db*)&ye)+di);
	/* mov	cx,Ze[di] */
	cx = *(dw*)(((db*)&ze)+di);
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;calc end a crt co-ords
	/* jc	ReDoClipPLine	;error -> */
	if (CF) {goto redoclippline;}
	/* mov	XCrt[di],cx */
	*(dw*)(((db*)&xcrt)+di) = cx;
	/* mov	YCrt[di],bl */
	*((&ycrt)+di) = bl;
	/* mov	bx,di */
	bx = di;
clipplineloop:
	// 4615 
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
	/* push	bx */
	PUSH(bx);
	/* mov	ax,Xe[di] */
	ax = *(dw*)(((db*)&xe)+di);
	/* mov	bx,Ye[di] */
	bx = *(dw*)(((db*)&ye)+di);
	/* mov	cx,Ze[di] */
	cx = *(dw*)(((db*)&ze)+di);
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;calc end b crt co-ords
	/* mov	XCrt[di],cx */
	*(dw*)(((db*)&xcrt)+di) = cx;
	/* mov	YCrt[di],bl */
	*((&ycrt)+di) = bl;
	/* pop	bx */
	POP(bx);
	/* jc	ReDoClipPLine	;error -> */
	if (CF) {goto redoclippline;}
plinevistest:
	// 4617 
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
	/* jnz	PLineNonVis	;yes -> */
	if ((dl & dh) != 0) {goto plinenonvis;}
	/* mov	al,dl */
	al = dl;
	/* or	al,dh	    	;line totally visible? */
	OR(al, dh);
	/* jz	ClipPLineDraw	;yes -> */
	if (al == 0) {goto clipplinedraw;}
	/* test	dl,dl		;end a requires clipping? */
	TEST(dl, dl);
	/* jz	ClipPLineEndB	;no, must be end b -> */
	if (!(dl & dl)) {goto clipplineendb;}
	/* call	ClipLineEnd	;clip end a */
	CALL(cliplineend, 0);
	/* jc	PLineNonVis	;end a non-visible -> */
	if (CF) {goto plinenonvis;}
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;calc end a crt co-ords
	/* jc	PLineNonVis	;error -> */
	if (CF) {goto plinenonvis;}
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	YCrt[si],bl */
	*((&ycrt)+si) = bl;
	/* mov	al,OutCode[di] */
	al = *((&outcode)+di);
	/* test	al,al		;end b requires cliping? */
	TEST(al, al);
	/* jz	ClipPLineDraw	;no -> */
	if (!(al & al)) {goto clipplinedraw;}
clipplineendb:
	// 4619 
	/* ClipPLineEndB:	xchg	si,di */
	XCHG(si, di);
	/* call	ClipLineEnd	;clip end b */
	CALL(cliplineend, 0);
	/* xchg	si,di */
	XCHG(si, di);
	/* jc	PLineNonVis	;end b non-visible -> */
	if (CF) {goto plinenonvis;}
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;calc end b crt co-ords
	/* jc	PLineNonVis	;error -> */
	if (CF) {goto plinenonvis;}
	/* mov	XCrt[di],cx */
	*(dw*)(((db*)&xcrt)+di) = cx;
	/* mov	YCrt[di],bl */
	*((&ycrt)+di) = bl;
clipplinedraw:
	// 4621 
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
	// 4623 
	/* PLineNonVis:	mov	bx,di		;bx = new end a index */
	bx = di;
	/* mov	si,TempPtr3 */
	si = tempptr3;
	/* jmp	ClipPLineLoop */
	goto clipplineloop;
nullpolyline:
	// 2289 
nullplineloop:
	// 4625 
	/* NullPLineLoop:	lodsb			;move pointer past line data */
	{ LODSB; }
	/* cmp	al,-1 */
	CMP(al, -1);
	/* jne	NullPLineLoop */
	if ((db)(al) != (db)(-1)) {goto nullplineloop;}
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETN(0);
polydotclip:
	// 2304 
	/* mov	bx,ObjectDrawMode ;* kill: assume all */
	bx = objectdrawmode;
edummylabel27:
	// 4627 
__disp=*(dw*)(((db*)&pdotclipmode)+bx);
	/* jmp	PDotClipMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
drawpolydots:
	// 2319 
	/* ret ;*       and stored in the crt arrays XCrt[] and YCrt[]. */
	RETN(0);
clippolydots:
	// 2330 
	/* mov	al,OutCode[si] ;* kill: ) */
	al = *((&outcode)+si);
edummylabel28:
	// 4629 
	/* test	al,al		;point visible? */
	TEST(al, al);
	/* jnz	@F		;no -> */
	if ((al & al) != 0) {goto dummylabel2;}
	// 0 ;* point visible calc crt co-ord
	/* mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;calc crt co-ords
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	YCrt[si],bl */
	*((&ycrt)+si) = bl;
	/* sub	si,2 */
	SUB(si, 2);
	/* jnc	ClipPolyDots  	;next point -> */
	if (!CF) {goto clippolydots;}
	/* ret */
	RETN(0);
	// 0 ;* point non-visible, XCrt = YCrt = -1 (do not draw)
dummylabel2:
	// 4631 
	/* @@:		mov	ax,-1 */
	ax = -1;
	/* mov	XCrt[si],ax */
	*(dw*)(((db*)&xcrt)+si) = ax;
	/* mov	YCrt[si],al */
	*((&ycrt)+si) = al;
	/* sub	si,2 */
	SUB(si, 2);
	/* jnc	ClipPolyDots  	;next point -> */
	if (!CF) {goto clippolydots;}
	/* ret */
	RETN(0);
nullpolydots:
	// 2364 
	/* mov	ax,-1 ;* kill: ) */
	ax = -1;
	// 0 ;* point non-visible, XCrt = YCrt = -1 (do not draw)
dummylabel3:
	// 4633 
	/* @@:		mov	XCrt[si],ax */
	*(dw*)(((db*)&xcrt)+si) = ax;
	/* mov	YCrt[si],al */
	*((&ycrt)+si) = al;
	/* sub	si,2 */
	SUB(si, 2);
	/* jnc	@B		;next point -> */
	if (!CF) {goto dummylabel3;}
	/* ret */
	RETN(0);
quicklineclip:
	// 2385 
	/* mov	si,0		;end a index */
	si = 0;
edummylabel29:
	// 4635 
	/* mov	di,2		;end b index */
	di = 2;
	/* mov	ax,Xe[si]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* xchg	si,di */
	XCHG(si, di);
	/* mov	ax,Xe[si]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* xchg	si,di */
	XCHG(si, di);
	// 0 ;* test line visibility
	/* mov	ah,OutCode[si] */
	ah = *((&outcode)+si);
	/* test	al,ah		;both ends on same side of pyramid? */
	TEST(al, ah);
	/* jnz	QLineClipFail	;yes, non-visible -> */
	if ((al & ah) != 0) {goto qlineclipfail;}
	// 0 ;* test end a visibility, clip and calc crt co-ords
	/* test	ah,ah		;end a visible? */
	TEST(ah, ah);
	/* jnz	ClipEndA	;no -> */
	if ((ah & ah) != 0) {goto clipenda;}
	/* mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* jmp	CalcEndACrt */
	goto calcendacrt;
clipenda:
	// 4637 
	/* ClipEndA:	call	ClipLineEnd */
	CALL(cliplineend, 0);
	/* jc	QLineClipFail	;non-visible -> */
	if (CF) {goto qlineclipfail;}
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
calcendacrt:
	// 4639 
	/* CalcEndACrt:	mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	/* jc	QLineClipFail 	;non-visible -> */
	if (CF) {goto qlineclipfail;}
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	WORD PTR YCrt[si],bx */
	*(dw*)((&ycrt)+si) = bx;
	// 0 ;* test end b visibility, clip and calc crt co-ords
	/* xchg	si,di */
	XCHG(si, di);
	/* mov	al,OutCode[si] */
	al = *((&outcode)+si);
	/* test	al,al		;end b visible? */
	TEST(al, al);
	/* jnz	ClipEndB	;no -> */
	if ((al & al) != 0) {goto clipendb;}
	/* mov	ax,Xe[si] */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* jmp	CalcEndBCrt */
	goto calcendbcrt;
clipendb:
	// 4641 
	/* ClipEndB:	call	ClipLineEnd */
	CALL(cliplineend, 0);
	/* jc	QLineClipFail	;non-visible -> */
	if (CF) {goto qlineclipfail;}
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
calcendbcrt:
	// 4643 
	/* CalcEndBCrt:	mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	/* jc	QLineClipFail 	;non-visible -> */
	if (CF) {goto qlineclipfail;}
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	WORD PTR YCrt[si],bx */
	*(dw*)((&ycrt)+si) = bx;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
qlineclipfail:
	// 4645 
	/* QLineClipFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
horizonclip:
	// 2470 
	/* mov	si,0		;end a index */
	si = 0;
edummylabel30:
	// 4647 
	/* mov	di,2		;end b index */
	di = 2;
	/* mov	ax,Xe[si]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* xchg	si,di */
	XCHG(si, di);
	/* mov	ax,Xe[si]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+si);
	/* mov	bx,Ye[si] */
	bx = *(dw*)(((db*)&ye)+si);
	/* mov	cx,Ze[si] */
	cx = *(dw*)(((db*)&ze)+si);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* mov	OutCode[si],al	;store outcode */
	*((&outcode)+si) = al;
	/* xchg	si,di */
	XCHG(si, di);
	// 0 ;* test horizon visibility
	/* mov	ah,OutCode[si] */
	ah = *((&outcode)+si);
	/* test	al,ah		;both ends on same side of pyramid? */
	TEST(al, ah);
	/* jnz	HrznClipFail	;yes, non-visible -> */
	if ((al & ah) != 0) {goto hrznclipfail;}
	// 0 ;* clip end a and test for visibility, if visible calc crt co-ords
	/* call	ClipLineEnd */
	CALL(cliplineend, 0);
	/* jc	HrznClipFail	;non-visible -> */
	if (CF) {goto hrznclipfail;}
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	/* jc	HrznClipFail	;non-visible -> */
	if (CF) {goto hrznclipfail;}
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	WORD PTR YCrt[si],bx */
	*(dw*)((&ycrt)+si) = bx;
	// 0 ;* clip end b and test for visibility, if visible calc crt co-ords
	/* xchg	si,di */
	XCHG(si, di);
	/* call	ClipLineEnd */
	CALL(cliplineend, 0);
	/* jc	HrznClipFail	;non-visible -> */
	if (CF) {goto hrznclipfail;}
	/* mov	ax,XEndC */
	ax = xendc;
	/* mov	bx,YEndC */
	bx = yendc;
	/* mov	cx,ZEndC */
	cx = zendc;
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	/* jc	HrznClipFail	;non-visible -> */
	if (CF) {goto hrznclipfail;}
	/* mov	XCrt[si],cx */
	*(dw*)(((db*)&xcrt)+si) = cx;
	/* mov	WORD PTR YCrt[si],bx */
	*(dw*)((&ycrt)+si) = bx;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
hrznclipfail:
	// 4649 
	/* HrznClipFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
dotclip:
	// 2538 
	/* xor	si,si		;index = 0 */
	XOR(si, si);
edummylabel31:
	// 4651 
	/* mov	ax,Xe[0]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	bx,Ye[0] */
	bx = *(dw*)(((db*)&ye)+0);
	/* mov	cx,Ze[0] */
	cx = *(dw*)(((db*)&ze)+0);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* jnz	DotClipFail	;non-visible -> */
	if (!ZF) {goto dotclipfail;}
	/* mov	ax,Xe[0]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	bx,Ye[0] */
	bx = *(dw*)(((db*)&ye)+0);
	/* mov	cx,Ze[0] */
	cx = *(dw*)(((db*)&ze)+0);
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;cx = x crt, bl = y crt, cf = error status
	/* ret */
	RETN(0);
dotclipfail:
	// 4653 
	/* DotClipFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETN(0);
xdotclip:
	// 2570 
	/* xor	si,si		;index = 0 */
	XOR(si, si);
edummylabel32:
	// 4655 
	/* mov	ax,Xe[0]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	bx,Ye[0] */
	bx = *(dw*)(((db*)&ye)+0);
	/* mov	cx,Ze[0] */
	cx = *(dw*)(((db*)&ze)+0);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* call	CalcOCode	;calculate outcode */
	CALL(calcocode, 0);
	/* jnz	XDotClipFail	;non-visible -> */
	if (!ZF) {goto xdotclipfail;}
	/* mov	ax,Xe[0]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	bx,Ye[0] */
	bx = *(dw*)(((db*)&ye)+0);
	/* mov	cx,Ze[0] */
	cx = *(dw*)(((db*)&ze)+0);
	/* mov	bp,_CalcCRT */
	bp = _calccrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;cx = x crt, bl = y crt, cf = error status
	/* ret */
	RETF(0);
xdotclipfail:
	// 4657 
	/* XDotClipFail:	stc			;cf = 1 = non-visible or error */
	STC;
	/* ret */
	RETF(0);
cycliccheck:
	// 2638 
	/* mov	bx,ObjectDrawMode ;*       x1, y1, x2, y2, x3, y3, x1, y1, -1 */
	bx = objectdrawmode;
edummylabel33:
	// 4659 
__disp=*(dw*)(((db*)&cyclicmode)+bx);
	/* jmp	CyclicMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
fastcyclic:
	// 2650 
	/* lodsw			;fetch x1 */
	{ LODSW; }
edummylabel34:
	// 4661 
	/* test	ax,ax	      	;end of list? */
	TEST(ax, ax);
	/* js	FastCyclicFail	;yes -> */
	if ((short)((ax & ax)) < 0) {goto fastcyclicfail;}
	/* mov	bp,ax */
	bp = ax;
	/* lodsw			;fetch y1 */
	{ LODSW; }
	/* mov	di,ax */
	di = ax;
	/* lodsw			;fetch x2 */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	FastCyclicFail	;yes -> */
	if ((short)((ax & ax)) < 0) {goto fastcyclicfail;}
	/* mov	bx,ax */
	bx = ax;
	/* lodsw			;fetch y2 */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* lodsw			;fetch x3 */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	FastCyclicFail	;yes -> */
	if ((short)((ax & ax)) < 0) {goto fastcyclicfail;}
	/* mov	dx,ax */
	dx = ax;
	/* lodsw			;fetch y3 */
	{ LODSW; }
	/* sub	bp,bx		;Dx1 = x1 - x2 */
	SUB(bp, bx);
	/* sub	di,cx		;Dy1 = y1 - y2 */
	SUB(di, cx);
	/* sub	bx,dx		;Dx2 = x2 - x3 */
	SUB(bx, dx);
	/* sub	cx,ax		;Dy2 = y2 - y3 */
	SUB(cx, ax);
	/* mov	ax,bp		;ax = Dx1 */
	ax = bp;
	/* imul	cx		;dx, ax = Dx1 * Dy2 */
	IMUL1_2(cx);
	/* xchg	ax,di		;ax = Dy1 */
	XCHG(ax, di);
	/* mov	bp,dx		;bp, di = Dx1 * Dy2 */
	bp = dx;
	/* imul	bx		;dx, ax = Dx2 * Dy1 */
	IMUL1_2(bx);
	/* sub	di,ax */
	SUB(di, ax);
	/* sbb	bp,dx		;result (Dx1 * Dy2) - (Dx2 * Dy1) */
	SBB(bp, dx);
	/* clc			;cyclic ok */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;* failed cyclic check - cannot determine point order - assume clockwise
fastcyclicfail:
	// 4663 
	/* FastCyclicFail:	xor	ax,ax		;clockwise */
	XOR(ax, ax);
	/* stc			;cyclic error */
	STC;
	/* ret */
	RETN(0);
slowcyclic:
	// 2701 
	/* lodsw			;fetch x1 */
	{ LODSW; }
edummylabel35:
	// 4667 
	/* test	ax,ax	      	;end of list? */
	TEST(ax, ax);
	/* js	SlowCyclicFail	;yes -> */
	if ((short)((ax & ax)) < 0) {goto slowcyclicfail;}
	/* mov	bp,ax */
	bp = ax;
	/* lodsw			;fetch y1 */
	{ LODSW; }
	/* mov	di,ax */
	di = ax;
x2y2loop:
	// 4669 
	/* X2Y2Loop:	mov	TempPtr1,si	;store ptr to x2, y2 */
	tempptr1 = si;
	/* lodsw			;fetch x2 */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	SlowCyclicFail	;yes -> */
	if ((short)((ax & ax)) < 0) {goto slowcyclicfail;}
	/* mov	bx,ax */
	bx = ax;
	/* lodsw			;fetch y2 */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* cmp	bx,bp		;x2 = x1? */
	CMP(bx, bp);
	/* jne	X3Y3Loop	;no -> */
	if ((dw)(bx) != (dw)(bp)) {goto x3y3loop;}
	/* cmp	cx,di		;y2 = y1? */
	CMP(cx, di);
	/* je	X2Y2Loop	;yes -> */
	if ((dw)(cx) == (dw)(di)) {goto x2y2loop;}
x3y3loop:
	// 4671 
	/* X3Y3Loop:	lodsw			;fetch x3 */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	SlowCyclicFail	;yes -> */
	if ((short)((ax & ax)) < 0) {goto slowcyclicfail;}
	/* mov	dx,ax */
	dx = ax;
	/* lodsw			;fetch y3 */
	{ LODSW; }
	/* cmp	dx,bx		;x3 = x2? */
	CMP(dx, bx);
	/* jne	CalcResult1	;no -> */
	if ((dw)(dx) != (dw)(bx)) {goto calcresult1;}
	/* cmp	ax,cx		;y3 = y2? */
	CMP(ax, cx);
	/* je	X3Y3Loop	;yes -> */
	if ((dw)(ax) == (dw)(cx)) {goto x3y3loop;}
calcresult1:
	// 4673 
	/* CalcResult1:	push	dx		;store x3 */
	PUSH(dx);
	/* push	ax		;store y3 */
	PUSH(ax);
	/* sub	bp,bx		;Dx1 = x1 - x2 */
	SUB(bp, bx);
	/* sub	di,cx		;Dy1 = y1 - y2 */
	SUB(di, cx);
	/* sub	bx,dx		;Dx2 = x2 - x3 */
	SUB(bx, dx);
	/* sub	cx,ax		;Dy2 = y2 - y3 */
	SUB(cx, ax);
	/* mov	ax,bp		;ax = Dx1 */
	ax = bp;
	/* imul	cx		;dx, ax = Dx1 * Dy2 */
	IMUL1_2(cx);
	/* xchg	ax,di		;ax = Dy1 */
	XCHG(ax, di);
	/* mov	bp,dx		;bp, di = Dx1 * Dy2 */
	bp = dx;
	/* imul	bx		;dx, ax = Dx2 * Dy1 */
	IMUL1_2(bx);
	/* sub	di,ax */
	SUB(di, ax);
	/* sbb	bp,dx		;result1 = (Dx1 * Dy2) - (Dx2 * Dy1) */
	SBB(bp, dx);
	/* pop	dx		;restore y3 */
	POP(dx);
	/* pop	di		;restore x3 */
	POP(di);
	// 0 ;* bx = Dx2
	// 0 ;* cx = Dy2
	// 0 ;* dx = y3
	// 0 ;* si = ptr
	// 0 ;* di = x3
	// 0 ;* bp = result1
	/* push	bp		;store result1 */
	PUSH(bp);
x4y4loop:
	// 4675 
	/* X4Y4Loop:	lodsw			;fetch x4 */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	LoopBack1	;yes, loop back to x2, y2 -> */
	if ((short)((ax & ax)) < 0) {goto loopback1;}
contcyclic1:
	// 4677 
	/* ContCyclic1:	mov	bp,ax */
	bp = ax;
	/* lodsw			;fetch y4 */
	{ LODSW; }
	/* cmp	bp,di		;x4 = x3? */
	CMP(bp, di);
	/* jne	CalcResult2	;no -> */
	if ((dw)(bp) != (dw)(di)) {goto calcresult2;}
	/* cmp	ax,dx		;y4 = y3? */
	CMP(ax, dx);
	/* je	X4Y4Loop	;yes -> */
	if ((dw)(ax) == (dw)(dx)) {goto x4y4loop;}
calcresult2:
	// 4679 
	/* CalcResult2:	sub	di,bp		;Dx3 = x3 - x4 */
	SUB(di, bp);
	/* sub	dx,ax		;Dy3 = y3 - y4 */
	SUB(dx, ax);
	/* push	bp		;store x4 */
	PUSH(bp);
	/* push	ax		;store y4 */
	PUSH(ax);
	/* mov	ax,bx		;ax = Dx2 */
	ax = bx;
	/* mov	bx,dx  		;bx = Dy3 */
	bx = dx;
	/* imul	bx		;dx, ax = Dx2 * Dy3 */
	IMUL1_2(bx);
	/* xchg	ax,cx		;ax = Dy2 */
	XCHG(ax, cx);
	/* mov	bp,dx		;bp, cx = Dx2 * Dy3 */
	bp = dx;
	/* imul	di		;dx, ax = Dx3 * Dy2 */
	IMUL1_2(di);
	/* sub	cx,ax */
	SUB(cx, ax);
	/* sbb	bp,dx		;result2 = (Dx2 * Dy3) - (Dx3 * Dy2) */
	SBB(bp, dx);
	/* pop	dx		;restore y4 */
	POP(dx);
	/* pop	cx		;restore x4 */
	POP(cx);
	/* pop	ax		;restore result1 */
	POP(ax);
	/* xor	ax,bp		;sign(result1) = sign(result2)? */
	XOR(ax, bp);
	/* js	X5Y5Loop	;no -> */
	if ((short)(ax) < 0) {goto x5y5loop;}
	/* test	bp,bp		;result = sign(result2) = sign(result1), cyclic ok */
	TEST(bp, bp);
	/* ret */
	RETN(0);
	// 0 ;* bx = Dy3
	// 0 ;* cx = x4
	// 0 ;* dx = y4
	// 0 ;* di = Dx3
x5y5loop:
	// 4681 
	/* X5Y5Loop:	lodsw			;fetch x5 */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	LoopBack2	;yes, loop back to x2, y2 -> */
	if ((short)((ax & ax)) < 0) {goto loopback2;}
contcyclic2:
	// 4683 
	/* ContCyclic2:	mov	bp,ax */
	bp = ax;
	/* lodsw			;fetch y5 */
	{ LODSW; }
	/* cmp	bp,cx		;x5 = x4? */
	CMP(bp, cx);
	/* jne	CalcResult3	;no -> */
	if ((dw)(bp) != (dw)(cx)) {goto calcresult3;}
	/* cmp	ax,dx		;y5 = y4? */
	CMP(ax, dx);
	/* je	X5Y5Loop	;yes -> */
	if ((dw)(ax) == (dw)(dx)) {goto x5y5loop;}
calcresult3:
	// 4685 
	/* CalcResult3:	sub	cx,bp		;Dx4 = x4 - x5 */
	SUB(cx, bp);
	/* sub	dx,ax		;Dy4 = y4 - y5 */
	SUB(dx, ax);
	/* mov	ax,dx		;ax = Dy4 */
	ax = dx;
	/* imul	di		;dx, ax = Dx3 * Dy4 */
	IMUL1_2(di);
	/* xchg	ax,bx		;ax = Dy3 */
	XCHG(ax, bx);
	/* mov	bp,dx		;bp, bx = Dx3 * Dy4 */
	bp = dx;
	/* imul	cx		;dx, ax = Dx4 * Dy3 */
	IMUL1_2(cx);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	bp,dx		;result3 = (Dx3 * Dy4) - (Dx4 * Dy3) */
	SBB(bp, dx);
	/* clc			;cyclic ok */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;* reached end of point list, loop back to x2, y2
loopback1:
	// 4687 
	/* LoopBack1:	mov	si,TempPtr1 */
	si = tempptr1;
	/* lodsw */
	{ LODSW; }
	/* jmp	ContCyclic1 */
	goto contcyclic1;
loopback2:
	// 4689 
	/* LoopBack2:	mov	si,TempPtr1 */
	si = tempptr1;
	/* lodsw */
	{ LODSW; }
	/* jmp	ContCyclic2 */
	goto contcyclic2;
nullcyclic:
	// 2821 
	/* xor	ax,ax		;clockwise */
	XOR(ax, ax);
edummylabel36:
	// 4691 
	/* stc			;cyclic error */
	STC;
	/* ret */
	RETN(0);
calccirclecrt:
	// 2836 
	/* xor	si,si		;index = 0 */
	XOR(si, si);
edummylabel37:
	// 4693 
	/* mov	ax,Xe[0]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	bx,Ye[0] */
	bx = *(dw*)(((db*)&ye)+0);
	/* mov	cx,Ze[0] */
	cx = *(dw*)(((db*)&ze)+0);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* mov	bp,_CircleCRT */
	bp = _circlecrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;cx = x crt, bx = y crt, cf = error status
	/* ret */
	RETN(0);
xcalcunclipcrt:
	// 2861 
	/* xor	si,si		;index = 0 */
	XOR(si, si);
edummylabel38:
	// 4695 
	/* mov	ax,Xe[0]	;fetch eye co-ords */
	ax = *(dw*)(((db*)&xe)+0);
	/* mov	bx,Ye[0] */
	bx = *(dw*)(((db*)&ye)+0);
	/* mov	cx,Ze[0] */
	cx = *(dw*)(((db*)&ze)+0);
	/* mov	bp,_ScaleVPyramid */
	bp = _scalevpyramid;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;scale viewing pyramid wrt view mode
	/* mov	bp,_CircleCRT */
	bp = _circlecrt;
	/* call	bp */
	CALL(__dispatch_call_ext, bp);
	// 0 ;cx = x crt, bx = y crt, cf = error status
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
                case m2c::kabovecliploop: 	goto abovecliploop;
        case m2c::kaboveclipstart: 	goto aboveclipstart;
        case m2c::kabovelclipdone: 	goto abovelclipdone;
        case m2c::kabovepclipdone: 	goto abovepclipdone;
        case m2c::kbehindcliploop: 	goto behindcliploop;
        case m2c::kbehindfail: 	goto behindfail;
        case m2c::kbehindlclipdone: 	goto behindlclipdone;
        case m2c::kbehindpclipdone: 	goto behindpclipdone;
        case m2c::kbelowcliploop: 	goto belowcliploop;
        case m2c::kbelowclipstart: 	goto belowclipstart;
        case m2c::kbelowfail: 	goto belowfail;
        case m2c::kbelowlclipdone: 	goto belowlclipdone;
        case m2c::kbelowpclipdone: 	goto belowpclipdone;
        case m2c::kcalccirclecrt: 	goto calccirclecrt;
        case m2c::kcalccrt: 	goto calccrt;
        case m2c::kcalcendacrt: 	goto calcendacrt;
        case m2c::kcalcendbcrt: 	goto calcendbcrt;
        case m2c::kcalcocode: 	goto calcocode;
        case m2c::kcalcocodeexit: 	goto calcocodeexit;
        case m2c::kcalcoutcodes: 	goto calcoutcodes;
        case m2c::kcalcresult1: 	goto calcresult1;
        case m2c::kcalcresult2: 	goto calcresult2;
        case m2c::kcalcresult3: 	goto calcresult3;
        case m2c::kcheckzy1: 	goto checkzy1;
        case m2c::kcheckzy2: 	goto checkzy2;
        case m2c::kcirclecrt: 	goto circlecrt;
        case m2c::kclipdiverror: 	goto clipdiverror;
        case m2c::kclipdivtest: 	goto clipdivtest;
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
        case m2c::kclippolydots: 	goto clippolydots;
        case m2c::kclippolyfail: 	goto clippolyfail;
        case m2c::kclippolyfaillnk: 	goto clippolyfaillnk;
        case m2c::kclippolyline: 	goto clippolyline;
        case m2c::kclipswitch: 	goto clipswitch;
        case m2c::kcontcyclic1: 	goto contcyclic1;
        case m2c::kcontcyclic2: 	goto contcyclic2;
        case m2c::kcycliccheck: 	goto cycliccheck;
        case m2c::kdotclip: 	goto dotclip;
        case m2c::kdotclipfail: 	goto dotclipfail;
        case m2c::kdrawobject: 	goto drawobject;
        case m2c::kdrawplineexit: 	goto drawplineexit;
        case m2c::kdrawplinefail: 	goto drawplinefail;
        case m2c::kdrawplineloop: 	goto drawplineloop;
        case m2c::kdrawpoly: 	goto drawpoly;
        case m2c::kdrawpolydots: 	goto drawpolydots;
        case m2c::kdrawpolyfail: 	goto drawpolyfail;
        case m2c::kdrawpolyline: 	goto drawpolyline;
        case m2c::kdrawpolyloop: 	goto drawpolyloop;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
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
        case m2c::kedummylabel25: 	goto edummylabel25;
        case m2c::kedummylabel26: 	goto edummylabel26;
        case m2c::kedummylabel27: 	goto edummylabel27;
        case m2c::kedummylabel28: 	goto edummylabel28;
        case m2c::kedummylabel29: 	goto edummylabel29;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel30: 	goto edummylabel30;
        case m2c::kedummylabel31: 	goto edummylabel31;
        case m2c::kedummylabel32: 	goto edummylabel32;
        case m2c::kedummylabel33: 	goto edummylabel33;
        case m2c::kedummylabel34: 	goto edummylabel34;
        case m2c::kedummylabel35: 	goto edummylabel35;
        case m2c::kedummylabel36: 	goto edummylabel36;
        case m2c::kedummylabel37: 	goto edummylabel37;
        case m2c::kedummylabel38: 	goto edummylabel38;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kfastcyclic: 	goto fastcyclic;
        case m2c::kfastcyclicfail: 	goto fastcyclicfail;
        case m2c::kgenxycrtloop: 	goto genxycrtloop;
        case m2c::khorizonclip: 	goto horizonclip;
        case m2c::khrznclipfail: 	goto hrznclipfail;
        case m2c::kintoaboveclip: 	goto intoaboveclip;
        case m2c::kintobehindclip: 	goto intobehindclip;
        case m2c::kintobelowclip: 	goto intobelowclip;
        case m2c::kintoleftclip: 	goto intoleftclip;
        case m2c::kintorightclip: 	goto intorightclip;
        case m2c::klclipabove1: 	goto lclipabove1;
        case m2c::klclipbehind1: 	goto lclipbehind1;
        case m2c::klclipbelow1: 	goto lclipbelow1;
        case m2c::klclipdiverror: 	goto lclipdiverror;
        case m2c::klclipdivtest: 	goto lclipdivtest;
        case m2c::klclipleft1: 	goto lclipleft1;
        case m2c::klclipright1: 	goto lclipright1;
        case m2c::kleftcliploop: 	goto leftcliploop;
        case m2c::kleftclipstart: 	goto leftclipstart;
        case m2c::kleftfail: 	goto leftfail;
        case m2c::kleftlclipdone: 	goto leftlclipdone;
        case m2c::kleftpclipdone: 	goto leftpclipdone;
        case m2c::klineclipabove: 	goto lineclipabove;
        case m2c::klineclipbehind: 	goto lineclipbehind;
        case m2c::klineclipbelow: 	goto lineclipbelow;
        case m2c::klineclipcheck: 	goto lineclipcheck;
        case m2c::klineclipleft: 	goto lineclipleft;
        case m2c::klineclipright: 	goto lineclipright;
        case m2c::kloopback1: 	goto loopback1;
        case m2c::kloopback2: 	goto loopback2;
        case m2c::knextaboveclip: 	goto nextaboveclip;
        case m2c::knextbehindclip: 	goto nextbehindclip;
        case m2c::knextbelowclip: 	goto nextbelowclip;
        case m2c::knextleftclip: 	goto nextleftclip;
        case m2c::knextpolycoord: 	goto nextpolycoord;
        case m2c::knextrightclip: 	goto nextrightclip;
        case m2c::knullcyclic: 	goto nullcyclic;
        case m2c::knullplineloop: 	goto nullplineloop;
        case m2c::knullpoly: 	goto nullpoly;
        case m2c::knullpolydots: 	goto nullpolydots;
        case m2c::knullpolyline: 	goto nullpolyline;
        case m2c::knullpolyloop: 	goto nullpolyloop;
        case m2c::kocodeloop: 	goto ocodeloop;
        case m2c::kpclipabove1: 	goto pclipabove1;
        case m2c::kpclipbehind1: 	goto pclipbehind1;
        case m2c::kpclipbelow1: 	goto pclipbelow1;
        case m2c::kpclipleft1: 	goto pclipleft1;
        case m2c::kpclipright1: 	goto pclipright1;
        case m2c::kplinenonvis: 	goto plinenonvis;
        case m2c::kplinevistest: 	goto plinevistest;
        case m2c::kpolyclip: 	goto polyclip;
        case m2c::kpolyclipabove: 	goto polyclipabove;
        case m2c::kpolyclipbehind: 	goto polyclipbehind;
        case m2c::kpolyclipbelow: 	goto polyclipbelow;
        case m2c::kpolyclipcheck: 	goto polyclipcheck;
        case m2c::kpolyclipleft: 	goto polyclipleft;
        case m2c::kpolyclipright: 	goto polyclipright;
        case m2c::kpolycrtloop: 	goto polycrtloop;
        case m2c::kpolydotclip: 	goto polydotclip;
        case m2c::kpolylineclip: 	goto polylineclip;
        case m2c::kqlineclipfail: 	goto qlineclipfail;
        case m2c::kquicklineclip: 	goto quicklineclip;
        case m2c::kquickocodeloop: 	goto quickocodeloop;
        case m2c::kquickoutcodes: 	goto quickoutcodes;
        case m2c::kredoclippline: 	goto redoclippline;
        case m2c::kredodrawpline: 	goto redodrawpline;
        case m2c::krightcliploop: 	goto rightcliploop;
        case m2c::krightclipstart: 	goto rightclipstart;
        case m2c::krightfail: 	goto rightfail;
        case m2c::krightlclipdone: 	goto rightlclipdone;
        case m2c::krightpclipdone: 	goto rightpclipdone;
        case m2c::kscalevpyramid: 	goto scalevpyramid;
        case m2c::ksetviewmode: 	goto setviewmode;
        case m2c::kskipaboveclip: 	goto skipaboveclip;
        case m2c::kskipabovepoint: 	goto skipabovepoint;
        case m2c::kskipbehindclip: 	goto skipbehindclip;
        case m2c::kskipbehindpoint: 	goto skipbehindpoint;
        case m2c::kskipbelowclip: 	goto skipbelowclip;
        case m2c::kskipbelowpoint: 	goto skipbelowpoint;
        case m2c::kskipleftclip: 	goto skipleftclip;
        case m2c::kskipleftpoint: 	goto skipleftpoint;
        case m2c::kskiplinebehind: 	goto skiplinebehind;
        case m2c::kskiplinebelow: 	goto skiplinebelow;
        case m2c::kskiplineleft: 	goto skiplineleft;
        case m2c::kskiplineright: 	goto skiplineright;
        case m2c::kskipobject: 	goto skipobject;
        case m2c::kskippolypoint: 	goto skippolypoint;
        case m2c::kskiprightclip: 	goto skiprightclip;
        case m2c::kskiprightpoint: 	goto skiprightpoint;
        case m2c::kslowcyclic: 	goto slowcyclic;
        case m2c::kslowcyclicfail: 	goto slowcyclicfail;
        case m2c::ksortpolycrt: 	goto sortpolycrt;
        case m2c::ksortpolyterm: 	goto sortpolyterm;
        case m2c::ksortpolyvis: 	goto sortpolyvis;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kx2y2loop: 	goto x2y2loop;
        case m2c::kx3y3loop: 	goto x3y3loop;
        case m2c::kx4y4loop: 	goto x4y4loop;
        case m2c::kx5y5loop: 	goto x5y5loop;
        case m2c::kxcalcunclipcrt: 	goto xcalcunclipcrt;
        case m2c::kxdotclip: 	goto xdotclip;
        case m2c::kxdotclipfail: 	goto xdotclipfail;
        case m2c::kxneg1: 	goto xneg1;
        case m2c::kxneg2: 	goto xneg2;
        case m2c::kyneg1: 	goto yneg1;
        case m2c::kzneg1: 	goto zneg1;
        case m2c::kzneg2: 	goto zneg2;
        default: return __dispatch_call(__disp, _state);
    };
}


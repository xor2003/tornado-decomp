/* THIS IS GENERATED FILE */

        
#include "polyfill.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
gcode_0_proc:
	// 102 
polydone:
	// 4369 
	// 0 ;* note: Some drivers use FillCol as a word.
	/* inc	PolyCount */
	INC(polycount);
	/* mov	bp,FillVector */
	bp = fillvector;
__disp=bp;
	/* jmp	bp */
	J(return __dispatch_call_ext(__disp, _state));
meshfill:
	// 4393 
	// 0 ;--------------------------
	// 0 ;--------------------------
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
	/* mov	ax,OFFSET Octant */
	ax = m2c::near_offset_external(octant);
	/* jmp	IntoPolyFill */
	goto intopolyfill;
	// 0 ;--------------------------
smokefill:
	// 4395 
	// 0 ;--------------------------
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
	/* mov	ax,OFFSET Octant */
	ax = m2c::near_offset_external(octant);
	/* jmp	IntoPolyFill */
	goto intopolyfill;
	// 0 ;--------------------------
rvrspolyfill:
	// 4397 
	// 0 ;--------------------------
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
	/* mov	ax,OFFSET RvrsOctant */
	ax = m2c::near_offset_external(rvrsoctant);
	/* jmp	IntoPolyFill */
	goto intopolyfill;
	// 0 ;--------------------------
rvrsmeshfill:
	// 4399 
	// 0 ;--------------------------
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
	/* mov	ax,OFFSET RvrsOctant */
	ax = m2c::near_offset_external(rvrsoctant);
	/* jmp	IntoPolyFill */
	goto intopolyfill;
	// 0 ;--------------------------
rvrssmokefill:
	// 4401 
	// 0 ;--------------------------
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
	/* mov	ax,OFFSET RvrsOctant */
	ax = m2c::near_offset_external(rvrsoctant);
	/* jmp	IntoPolyFill */
	goto intopolyfill;
	// 0 ;----------------------------------------------------------------------------
	// 0 ;* PolyFill octant routines
	// 0 ;*
	// 0 ;* pass: ax = x
	// 0 ;*       dx = abs(Dx)
	// 0 ;*       bp = abs(Dy)
	// 0 ;* ret : LhsX[]
	// 0 ;*       RhsX[]
	// 0 ;*       LhsPtr = RhsPtr = updated y ptr
	// 0 ;* kill: assume all (except si)
	// 0 ;*
	// 0 ;* note: The octant routines assume the following:-
	// 0 ;*
	// 0 ;*       Dy is always > 0 (when Dy = 0, horizontal routine is used).
	// 0 ;*
	// 0 ;*       In octants where Dx > Dy, Dx must be > 0 as Dy is always > 0.
	// 0 ;----------------------------------
	// 0 ;* Octant1: Dx > 0, Dy > 0, Dx > Dy
	// 0 ;----------------------------------
polyfill:
	// 106 
	/* mov	bx,OFFSET Palette */
	bx = m2c::near_offset_external(palette);
edummylabel1:
	// 4371 
	{static int _xl=-1;if(_xl<0)_xl=getenv("M2C_XLAT")?1:0;if(_xl)fprintf(stderr,"[XLAT] facecol(al)=%d ",(int)(al&0xff));}
	/* xlat */
	XLAT;
	{static int _xl=-1;if(_xl<0)_xl=getenv("M2C_XLAT")?1:0;if(_xl)fprintf(stderr,"-> palette=%d\n",(int)(al&0xff));}
	/* mov	ah,al */
	ah = al;
	/* mov	WORD PTR FillCol,ax */
	*(dw*)(&fillcol) = ax;
	/* mov	ax,_PolyFill */
	ax = _polyfill;
	/* mov	FillVector,ax */
	fillvector = ax;
	/* mov	ax,OFFSET Octant */
	ax = m2c::near_offset_external(octant);
intopolyfill:
	// 4373 
	/* IntoPolyFill:	mov	OctantBase,ax	;store octant table base address */
	octantbase = ax;
	/* lodsw		  	;fetch first point - x1, y1 */
	{ LODSW; }
	/* mov 	OldX,ax */
	oldx = ax;
	/* lodsw */
	{ LODSW; }
	/* mov 	OldY,ax */
	oldy = ax;
	/* mov	MinY,ax */
	miny = ax;
	/* mov	MaxY,ax */
	maxy = ax;
	/* mov	bx,ax */
	bx = ax;
	/* shl 	bx,1 		;word access */
	SHL(bx, 1);
	/* mov 	ax,OFFSET RhsX  ;init RhsPtr wrt y1 */
	ax = m2c::near_offset_external(rhsx);
	/* add	ax,bx */
	ADD(ax, bx);
	/* mov	RhsPtr,ax */
	rhsptr = ax;
	/* mov 	di,ax  		;store first point */
	di = ax;
	/* mov 	ax,OldX */
	ax = oldx;
	/* stosw */
	{ STOSW; }
	/* mov 	ax,OFFSET LhsX	;init LhsPtr wrt y1 */
	ax = m2c::near_offset_external(lhsx);
	/* add 	ax,bx */
	ADD(ax, bx);
	/* mov 	LhsPtr,ax */
	lhsptr = ax;
	/* mov 	di,ax		;store first point */
	di = ax;
	/* mov 	ax,OldX */
	ax = oldx;
	/* stosw */
	{ STOSW; }
polyloop:
	// 4375 
	/* PolyLoop:	lodsw			;fetch x */
	{ LODSW; }
	/* test	ax,ax		;end of list? */
	TEST(ax, ax);
	/* js	PolyDone	;yes -> */
	if ((short)((ax & ax)) < 0) {goto polydone;}
	/* mov	dx,ax */
	dx = ax;
	/* mov	NewX,ax */
	newx = ax;
	/* lodsw			;fetch y */
	{ LODSW; }
	/* mov	bp,ax */
	bp = ax;
	/* mov	NewY,ax */
	newy = ax;
	/* cmp	bp,MinY		;y < MinY? */
	CMP(bp, miny);
	/* jae	NotMin		;no -> */
	if ((dw)(bp) >= (dw)(miny)) {goto notmin;}
	/* mov	MinY,bp */
	miny = bp;
	// 0 ;* new y min - store new x in LhsX[new y] and RhsX[new y]
	/* mov	bx,bp */
	bx = bp;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	LhsX[bx],dx */
	*(dw*)(((db*)lhsx)+bx) = dx;
	/* mov	RhsX[bx],dx */
	*(dw*)(((db*)rhsx)+bx) = dx;
notmin:
	// 4377 
	/* NotMin:		cmp	bp,MaxY		;y > MaxY? */
	CMP(bp, maxy);
	/* jbe	NotMax		;no -> */
	if ((dw)(bp) <= (dw)(maxy)) {goto notmax;}
	/* mov	MaxY,bp */
	maxy = bp;
	// 0 ;* new y max - store new x in LhsX[new y] and RhsX[new y]
	/* mov	bx,bp */
	bx = bp;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	LhsX[bx],dx */
	*(dw*)(((db*)lhsx)+bx) = dx;
	/* mov	RhsX[bx],dx */
	*(dw*)(((db*)rhsx)+bx) = dx;
notmax:
	// 4379 
	/* NotMax:		sub	bp,OldY 	;bp = Dy = NewY - OldY */
	SUB(bp, oldy);
	/* jz	Horizontal	;Dy = 0 -> */
	if (bp == 0) {goto horizontal;}
	/* sub	dx,OldX		;dx = Dx = NewX - OldX */
	SUB(dx, oldx);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* rcl	di,1	     	;get sign Dx */
	RCL(di, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* rcl	di,1		;get sign Dy */
	RCL(di, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* xchg	dx,bp */
	XCHG(dx, bp);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx		;ax = abs(Dy) */
	SUB(ax, dx);
	/* xchg	ax,bp */
	XCHG(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx		;ax = abs(Dx) */
	SUB(ax, dx);
	/* mov	dx,ax */
	dx = ax;
	/* cmp	bp,dx		;cf = 1 if Dx > Dy */
	CMP(bp, dx);
	/* rcl	di,1 */
	RCL(di, 1);
	/* and	di,7		;b2=sign Dx, b1=sign Dy, b0=Dx > Dy */
	AND(di, 7);
	/* shl	di,1 */
	SHL(di, 1);
	/* mov	ax,OctantBase */
	ax = octantbase;
	/* add	di,ax		;di -> Octant or RvrsOctant table */
	ADD(di, ax);
	/* mov	ax,[di]	     	;fetch octant routine address */
	ax = m2c::getdata(*(dw*)(raddr(ds,di)));
	/* mov	di,ax */
	di = ax;
	/* mov	ax,OldX */
	ax = oldx;
	/* call	di		;call the octant */
	CALL(__dispatch_call_ext, di);
polycont:
	// 4381 
	/* PolyCont: 	mov	ax,NewX */
	ax = newx;
	/* mov	OldX,ax */
	oldx = ax;
	/* mov	ax,NewY */
	ax = newy;
	/* mov	OldY,ax */
	oldy = ax;
	/* jmp	PolyLoop */
	goto polyloop;
	// 0 ;* if new x = old x then we have a duplicate point so ignore it
horizontal:
	// 4383 
	/* Horizontal:	cmp	dx,OldX		;determine line direction */
	CMP(dx, oldx);
	/* je	PolyCont	;duplicate point, ignore it -> */
	if ((dw)(dx) == (dw)(oldx)) {goto polycont;}
	/* ja	RhsHoz		;new x > old x, left to right -> */
	if ((dw)(dx) > (dw)(oldx)) {goto rhshoz;}
	// 0 ;* right to left horizontal line, store left hand point
	// 0 ;* do not allow new x point to bisect current horizontal line
lhshoz:
	// 4385 
	/* LhsHoz:     	mov	di,LhsPtr	;fetch lh ptr */
	di = lhsptr;
	/* mov	ax,dx		;ax = new x */
	ax = dx;
	/* cmp	ax,[di]		;new x < lh x? */
	CMP(ax, *(dw*)(raddr(ds,di)));
	/* jb	SetLHPoint	;yes -> */
	if ((dw)(ax) < (dw)(*(dw*)(raddr(ds,di)))) {goto setlhpoint;}
	/* cmp	ax,BUF_SIZE[di]	;new x > rh x? */
	CMP(ax, *(dw*)(raddr(ds,400+di)));
	/* jbe	PolyCont	;no -> */
	if ((dw)(ax) <= (dw)(*(dw*)(raddr(ds,400+di)))) {goto polycont;}
setlhpoint:
	// 4387 
	/* SetLHPoint:	stosw */
	{ STOSW; }
	/* jmp	PolyCont */
	goto polycont;
	// 0 ;* left to right horizontal line, store right hand point
	// 0 ;* do not allow new x point to bisect current horizontal line
rhshoz:
	// 4389 
	/* RhsHoz:     	mov	di,RhsPtr	;fetch rh ptr */
	di = rhsptr;
	/* mov	ax,dx		;ax = new x */
	ax = dx;
	/* cmp	ax,[di]		;new x > rh x? */
	CMP(ax, *(dw*)(raddr(ds,di)));
	/* ja	SetRHPoint	;yes -> */
	if ((dw)(ax) > (dw)(*(dw*)(raddr(ds,di)))) {goto setrhpoint;}
	/* cmp	ax,-BUF_SIZE[di];new x < lh x? */
	CMP(ax, *(dw*)(raddr(ds,-400+di)));
	/* jae	PolyCont	;no -> */
	if ((dw)(ax) >= (dw)(*(dw*)(raddr(ds,-400+di)))) {goto polycont;}
setrhpoint:
	// 4391 
	/* SetRHPoint:	stosw */
	{ STOSW; }
	/* jmp	PolyCont */
	goto polycont;
octant1:
	// 307 
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
edummylabel2:
	// 4403 
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* jmp	IntoOct1 */
	goto intooct1;
oct1lp:
	// 4405 
	/* Oct1Lp:		inc	ax		;x = x + 1 */
	INC(ax);
intooct1:
	// 4407 
	/* IntoOct1:	sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	Oct1Lp		;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto oct1lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* loop	Oct1Lp		;count = count - 1, count > 0 -> */
	LOOP(oct1lp);
	/* mov	ax,NewX		;fetch last point */
	ax = newx;
	/* mov	[di],ax		;store last point */
	m2c::setdata(&(*(dw*)(raddr(ds,di))), m2c::getdata(ax));
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* ret */
	RETN(0);
octant2:
	// 332 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel3:
	// 4409 
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	Oct2LpB		;vertical line -> */
	JCXZ(oct2lpb);
oct2lpa:
	// 4411 
	/* Oct2LpA:	stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	Oct2LpA		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct2lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* inc	ax		;x = x + 1 */
	INC(ax);
	/* loop	Oct2LpA		;count = count - 1, count > 0 -> */
	LOOP(oct2lpa);
oct2lpb:
	// 4413 
	/* Oct2LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 350 rep 	stosw
	/* rep 	stosw */
	REP STOSW;
	/* sub	di,2		;move y up one line */
	SUB(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
octant3:
	// 363 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel4:
	// 4415 
	/* std			;auto-decrement */
	STD;
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	Oct3LpB		;vertical line -> */
	JCXZ(oct3lpb);
oct3lpa:
	// 4417 
	/* Oct3LpA:	stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	Oct3LpA		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct3lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* inc	ax		;x = x + 1 */
	INC(ax);
	/* loop	Oct3LpA		;count = count - 1, count > 0 -> */
	LOOP(oct3lpa);
oct3lpb:
	// 4419 
	/* Oct3LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 382 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* add	di,2		;move y down one line */
	ADD(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
octant4:
	// 396 
	/* std			;auto-decrement */
	STD;
edummylabel5:
	// 4421 
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* stosw			;store first x, y = y - 1 */
	{ STOSW; }
oct4lp:
	// 4423 
	/* Oct4Lp:		inc	ax		;x = x + 1 */
	INC(ax);
	/* sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	Oct4Lp		;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto oct4lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* loop	Oct4Lp		;count = count - 1, count > 0 -> */
	LOOP(oct4lp);
	/* add	di,2		;move y down one line */
	ADD(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* ret */
	RETN(0);
octant5:
	// 422 
	/* std			;auto-decrement */
	STD;
edummylabel6:
	// 4425 
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* jmp	IntoOct5 */
	goto intooct5;
oct5lp:
	// 4427 
	/* Oct5Lp:		dec	ax		;x = x - 1 */
	DEC(ax);
intooct5:
	// 4429 
	/* IntoOct5:	sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	Oct5Lp		;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto oct5lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* loop	Oct5Lp		;count = count - 1, count > 0 -> */
	LOOP(oct5lp);
	/* mov	ax,NewX		;fetch last point */
	ax = newx;
	/* mov	[di],ax		;store last point */
	m2c::setdata(&(*(dw*)(raddr(ds,di))), m2c::getdata(ax));
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* ret */
	RETN(0);
octant6:
	// 449 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel7:
	// 4431 
	/* std			;auto-decrement */
	STD;
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	Oct6LpB		;vertical line -> */
	JCXZ(oct6lpb);
oct6lpa:
	// 4433 
	/* Oct6LpA:	stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	Oct6LpA		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct6lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* dec	ax		;x = x - 1 */
	DEC(ax);
	/* loop	Oct6LpA		;count = count - 1, count > 0 -> */
	LOOP(oct6lpa);
oct6lpb:
	// 4435 
	/* Oct6LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 468 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* add	di,2		;move y down one line */
	ADD(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
octant7:
	// 482 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel8:
	// 4437 
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	Oct7LpB		;vertical line -> */
	JCXZ(oct7lpb);
oct7lpa:
	// 4439 
	/* Oct7LpA:	stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	Oct7LpA		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct7lpa;}
	/* add	bx,bp		;error = error - Dy */
	ADD(bx, bp);
	/* dec	ax		;x = x - 1 */
	DEC(ax);
	/* loop	Oct7LpA		;count = count - 1, count > 0 -> */
	LOOP(oct7lpa);
oct7lpb:
	// 4441 
	/* Oct7LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 500 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* sub	di,2		;move y up one line */
	SUB(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
octant8:
	// 513 
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
edummylabel9:
	// 4443 
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* stosw			;store first x, y = y + 1 */
	{ STOSW; }
oct8lp:
	// 4445 
	/* Oct8Lp:		dec	ax		;x = x - 1 */
	DEC(ax);
	/* sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	Oct8Lp		;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto oct8lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* loop	Oct8Lp		;count = count - 1, count > 0 -> */
	LOOP(oct8lp);
	/* sub	di,2		;move y up one line */
	SUB(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* ret */
	RETN(0);
rvrsoctant1:
	// 555 
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
edummylabel10:
	// 4447 
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* stosw			;store first x, y = y + 1 */
	{ STOSW; }
rvrsoct1lp:
	// 4449 
	/* RvrsOct1Lp:	inc	ax		;x = x + 1 */
	INC(ax);
	/* sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	RvrsOct1Lp	;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto rvrsoct1lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* loop	RvrsOct1Lp	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct1lp);
	/* sub	di,2		;move y up one line */
	SUB(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* ret */
	RETN(0);
rvrsoctant2:
	// 579 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel11:
	// 4451 
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	RvrsOct2LpB 	;vertical line -> */
	JCXZ(rvrsoct2lpb);
rvrsoct2lpa:
	// 4453 
	/* RvrsOct2LpA:	stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	RvrsOct2LpA 	;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto rvrsoct2lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* inc	ax		;x = x + 1 */
	INC(ax);
	/* loop	RvrsOct2LpA 	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct2lpa);
rvrsoct2lpb:
	// 4455 
	/* RvrsOct2LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 597 rep 	stosw
	/* rep 	stosw */
	REP STOSW;
	/* sub	di,2		;move y up one line */
	SUB(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
rvrsoctant3:
	// 610 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel12:
	// 4457 
	/* std			;auto-decrement */
	STD;
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	RvrsOct3LpB  	;vertical line -> */
	JCXZ(rvrsoct3lpb);
rvrsoct3lpa:
	// 4459 
	/* RvrsOct3LpA:	stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	RvrsOct3LpA   	;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto rvrsoct3lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* inc	ax		;x = x + 1 */
	INC(ax);
	/* loop	RvrsOct3LpA 	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct3lpa);
rvrsoct3lpb:
	// 4461 
	/* RvrsOct3LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 629 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* add	di,2		;move y down one line */
	ADD(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
rvrsoctant4:
	// 643 
	/* std			;auto-decrement */
	STD;
edummylabel13:
	// 4463 
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* jmp	IntoRvrsOct4 */
	goto intorvrsoct4;
rvrsoct4lp:
	// 4465 
	/* RvrsOct4Lp:	inc	ax		;x = x + 1 */
	INC(ax);
intorvrsoct4:
	// 4467 
	/* IntoRvrsOct4:	sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	RvrsOct4Lp 	;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto rvrsoct4lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* loop	RvrsOct4Lp 	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct4lp);
	/* mov	ax,NewX		;fetch last point */
	ax = newx;
	/* mov	[di],ax		;store last point */
	m2c::setdata(&(*(dw*)(raddr(ds,di))), m2c::getdata(ax));
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* ret */
	RETN(0);
rvrsoctant5:
	// 670 
	/* std			;auto-decrement */
	STD;
edummylabel14:
	// 4469 
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* stosw			;store first x, y = y - 1 */
	{ STOSW; }
rvrsoct5lp:
	// 4471 
	/* RvrsOct5Lp:	dec	ax		;x = x - 1 */
	DEC(ax);
	/* sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	RvrsOct5Lp 	;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto rvrsoct5lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* loop	RvrsOct5Lp 	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct5lp);
	/* add	di,2		;move y down one line */
	ADD(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* ret */
	RETN(0);
rvrsoctant6:
	// 696 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel15:
	// 4473 
	/* std			;auto-decrement */
	STD;
	/* mov	di,RhsPtr	;fetch rhs ptr */
	di = rhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	RvrsOct6LpB 	;vertical line -> */
	JCXZ(rvrsoct6lpb);
rvrsoct6lpa:
	// 4475 
	/* RvrsOct6LpA:	stosw			;store x, y = y - 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	RvrsOct6LpA 	;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto rvrsoct6lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* dec	ax		;x = x - 1 */
	DEC(ax);
	/* loop	RvrsOct6LpA  	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct6lpa);
rvrsoct6lpb:
	// 4477 
	/* RvrsOct6LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 715 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* add	di,2		;move y down one line */
	ADD(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* sub	ax,BUF_SIZE	;adjust for lhs */
	SUB(ax, 400);
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* cld			;auto-increment */
	CLD;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
rvrsoctant7:
	// 729 
	/* push	si		;store co-ord ptr */
	PUSH(si);
edummylabel16:
	// 4479 
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
	/* mov	cx,dx		;count = Dx */
	cx = dx;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	RvrsOct7LpB 	;vertical line -> */
	JCXZ(rvrsoct7lpb);
rvrsoct7lpa:
	// 4481 
	/* RvrsOct7LpA:	stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	RvrsOct7LpA  	;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto rvrsoct7lpa;}
	/* add	bx,bp		;error = error - Dy */
	ADD(bx, bp);
	/* dec	ax		;x = x - 1 */
	DEC(ax);
	/* loop	RvrsOct7LpA  	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct7lpa);
rvrsoct7lpb:
	// 4483 
	/* RvrsOct7LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 747 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* sub	di,2		;move y up one line */
	SUB(di, 2);
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* pop	si		;restore co-ord ptr */
	POP(si);
	/* ret */
	RETN(0);
rvrsoctant8:
	// 760 
	/* mov	di,LhsPtr	;fetch lhs ptr */
	di = lhsptr;
edummylabel17:
	// 4485 
	/* mov	cx,bp		;count = Dy */
	cx = bp;
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* jmp	IntoRvrsOct8 */
	goto intorvrsoct8;
rvrsoct8lp:
	// 4487 
	/* RvrsOct8Lp:  	dec	ax		;x = x - 1 */
	DEC(ax);
intorvrsoct8:
	// 4489 
	/* IntoRvrsOct8:	sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	RvrsOct8Lp 	;if error > 0 then no y change -> */
	if ((!CF && !ZF)) {goto rvrsoct8lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* loop	RvrsOct8Lp 	;count = count - 1, count > 0 -> */
	LOOP(rvrsoct8lp);
	/* mov	ax,NewX		;fetch last point */
	ax = newx;
	/* mov	[di],ax		;store last point */
	m2c::setdata(&(*(dw*)(raddr(ds,di))), m2c::getdata(ax));
	/* mov	ax,di */
	ax = di;
	/* mov	LhsPtr,ax	;store new lhs ptr */
	lhsptr = ax;
	/* add	ax,BUF_SIZE	;adjust for rhs */
	ADD(ax, 400);
	/* mov	RhsPtr,ax	;store new rhs ptr */
	rhsptr = ax;
	/* ret */
	RETN(0);
polyline:
	// 800 
	/* mov	TempCol,al	;store colour */
	*(tempcol) = al;
polylineloop:
	// 4491 
	/* PolyLineLoop:	lodsw			;fetch x1 */
	{ LODSW; }
	/* cmp	ax,-1		;end of list? */
	CMP(ax, -1);
	/* je	PolyLineExit	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto polylineexit;}
	/* mov	cx,ax */
	cx = ax;
	/* lodsw			;fetch x2 */
	{ LODSW; }
	/* mov	dx,ax */
	dx = ax;
	/* lodsw			;fetch y1, y2 */
	{ LODSW; }
	/* mov	bx,ax */
	bx = ax;
	/* mov	al,TempCol	;fetch colour */
	al = *(tempcol);
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* jmp	PolyLineLoop */
	goto polylineloop;
polylineexit:
	// 4493 
	/* PolyLineExit:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel16: 	goto edummylabel16;
        case m2c::kedummylabel17: 	goto edummylabel17;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        case m2c::khorizontal: 	goto horizontal;
        case m2c::kintooct1: 	goto intooct1;
        case m2c::kintooct5: 	goto intooct5;
        case m2c::kintopolyfill: 	goto intopolyfill;
        case m2c::kintorvrsoct4: 	goto intorvrsoct4;
        case m2c::kintorvrsoct8: 	goto intorvrsoct8;
        case m2c::klhshoz: 	goto lhshoz;
        case m2c::kmeshfill: 	goto meshfill;
        case m2c::knotmax: 	goto notmax;
        case m2c::knotmin: 	goto notmin;
        case m2c::koct1lp: 	goto oct1lp;
        case m2c::koct2lpa: 	goto oct2lpa;
        case m2c::koct2lpb: 	goto oct2lpb;
        case m2c::koct3lpa: 	goto oct3lpa;
        case m2c::koct3lpb: 	goto oct3lpb;
        case m2c::koct4lp: 	goto oct4lp;
        case m2c::koct5lp: 	goto oct5lp;
        case m2c::koct6lpa: 	goto oct6lpa;
        case m2c::koct6lpb: 	goto oct6lpb;
        case m2c::koct7lpa: 	goto oct7lpa;
        case m2c::koct7lpb: 	goto oct7lpb;
        case m2c::koct8lp: 	goto oct8lp;
        case m2c::koctant1: 	goto octant1;
        case m2c::koctant2: 	goto octant2;
        case m2c::koctant3: 	goto octant3;
        case m2c::koctant4: 	goto octant4;
        case m2c::koctant5: 	goto octant5;
        case m2c::koctant6: 	goto octant6;
        case m2c::koctant7: 	goto octant7;
        case m2c::koctant8: 	goto octant8;
        case m2c::kpolycont: 	goto polycont;
        case m2c::kpolydone: 	goto polydone;
        case m2c::kpolyfill: 	goto polyfill;
        case m2c::kpolyline: 	goto polyline;
        case m2c::kpolylineexit: 	goto polylineexit;
        case m2c::kpolylineloop: 	goto polylineloop;
        case m2c::kpolyloop: 	goto polyloop;
        case m2c::krhshoz: 	goto rhshoz;
        case m2c::krvrsmeshfill: 	goto rvrsmeshfill;
        case m2c::krvrsoct1lp: 	goto rvrsoct1lp;
        case m2c::krvrsoct2lpa: 	goto rvrsoct2lpa;
        case m2c::krvrsoct2lpb: 	goto rvrsoct2lpb;
        case m2c::krvrsoct3lpa: 	goto rvrsoct3lpa;
        case m2c::krvrsoct3lpb: 	goto rvrsoct3lpb;
        case m2c::krvrsoct4lp: 	goto rvrsoct4lp;
        case m2c::krvrsoct5lp: 	goto rvrsoct5lp;
        case m2c::krvrsoct6lpa: 	goto rvrsoct6lpa;
        case m2c::krvrsoct6lpb: 	goto rvrsoct6lpb;
        case m2c::krvrsoct7lpa: 	goto rvrsoct7lpa;
        case m2c::krvrsoct7lpb: 	goto rvrsoct7lpb;
        case m2c::krvrsoct8lp: 	goto rvrsoct8lp;
        case m2c::krvrsoctant1: 	goto rvrsoctant1;
        case m2c::krvrsoctant2: 	goto rvrsoctant2;
        case m2c::krvrsoctant3: 	goto rvrsoctant3;
        case m2c::krvrsoctant4: 	goto rvrsoctant4;
        case m2c::krvrsoctant5: 	goto rvrsoctant5;
        case m2c::krvrsoctant6: 	goto rvrsoctant6;
        case m2c::krvrsoctant7: 	goto rvrsoctant7;
        case m2c::krvrsoctant8: 	goto rvrsoctant8;
        case m2c::krvrspolyfill: 	goto rvrspolyfill;
        case m2c::krvrssmokefill: 	goto rvrssmokefill;
        case m2c::ksetlhpoint: 	goto setlhpoint;
        case m2c::ksetrhpoint: 	goto setrhpoint;
        case m2c::ksmokefill: 	goto smokefill;
        default: return __dispatch_call(__disp, _state);
    };
}


/* THIS IS GENERATED FILE */

        
#include "scanface.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
scanface:
	// 547 
nextface:
	// 4369 
	/* NextFace:	lodsb		    	;fetch attribute */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	FlushBuffer	;yes -> */
	if ((db)(al) == (db)(-1)) {goto flushbuffer;}
	/* mov	bl,al */
	bl = al;
	/* and	bx,0007eh	;*2 index */
	AND(bx, 0x0007e);
	/* call	FaceSort[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&facesort)+bx));
	/* jmp	NextFace */
	goto nextface;
	// 0 ;* flush all faces in crt buffer (if any)
flushbuffer:
	// 4371 
	/* FlushBuffer:	push	si		;store face data ptr */
	PUSH(si);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
faceloop:
	// 4373 
	/* FaceLoop:	cmp	si,CrtBufPtr	;any more faces? */
	CMP(si, crtbufptr);
	/* je	ScanFaceExit	;no -> */
	if ((dw)(si) == (dw)(crtbufptr)) {goto scanfaceexit;}
	/* lodsw			;fetch attribute / colour */
	{ LODSW; }
	/* mov	bl,al */
	bl = al;
	/* mov	al,ah */
	al = ah;
	/* and	bx,0011b */
	AND(bx, 0x3);
	/* shl	bx,1	     	;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 index */
	SHL(bx, 1);
	/* call	FaceDraw[bx] */
	CALLF(__dispatch_call_ext, *(dd*)(((db*)&facedraw)+bx));
	/* jmp	FaceLoop */
	goto faceloop;
	// 0 ;* reset crt buffer ptr
scanfaceexit:
	// 4375 
	/* ScanFaceExit:	mov	ax,OFFSET CrtBuffer */
	ax = m2c::near_offset_external(crtbuffer);
	/* mov	CrtBufPtr,ax */
	crtbufptr = ax;
	/* pop	si		;restore face data ptr */
	POP(si);
	/* ret */
	RETN(0);
sortprmpoly1:
	// 588 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel1:
	// 4377 
	/* stosb			;store face attribute */
	{ STOSB; }
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	PrmPolyFail1	;non-visible -> */
	if (CF) {goto prmpolyfail1;}
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* add	si,2		;ignore attribute / colour */
	ADD(si, 2);
	/* call	CyclicCheck */
	CALL(cycliccheck, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* js	PrmPolyRvrs1 */
	if (SF) {goto prmpolyrvrs1;}
	// 0 ;* clockwise cyclic, store face, set cyclic
	/* mov	CrtBufPtr,di */
	crtbufptr = di;
	/* mov	al,+1		;clockwise cyclic */
	al = 1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, ignore face, set cyclic
prmpolyrvrs1:
	// 4379 
	/* PrmPolyRvrs1:	mov	al,-1		;anti-clockwise cyclic */
	al = -1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* ret */
	RETN(0);
	// 0 ;* face non-visible, set invalid cyclic
prmpolyfail1:
	// 4381 
	/* PrmPolyFail1:  	xor	al,al	 	;invalid cyclic */
	XOR(al, al);
	/* mov	Cyclic,al */
	cyclic = al;
	/* ret */
	RETN(0);
sortprmpoly2:
	// 631 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel2:
	// 4383 
	/* stosb			;store face attribute */
	{ STOSB; }
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* lodsb			;fetch inside colour */
	{ LODSB; }
	/* mov	Col2,al		;store inside colour */
	col2 = al;
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	PrmPolyFail2	;non-visible -> */
	if (CF) {goto prmpolyfail2;}
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* add	si,2		;ignore attribute / colour */
	ADD(si, 2);
	/* call	CyclicCheck */
	CALL(cycliccheck, 0);
	/* pop	di */
	POP(di);
	/* js	PrmPolyRvrs2 */
	if (SF) {goto prmpolyrvrs2;}
	/* pop	si */
	POP(si);
	// 0 ;* clockwise cyclic, store face, set cyclic
	/* mov	CrtBufPtr,di */
	crtbufptr = di;
	/* mov	al,+1		;clockwise cyclic */
	al = 1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, draw face, set cyclic
prmpolyrvrs2:
	// 4385 
	/* PrmPolyRvrs2:	mov	si,CrtBufPtr */
	si = crtbufptr;
	/* lodsw			;fetch attribute / colour */
	{ LODSW; }
	/* mov	bl,al */
	bl = al;
	/* and	bx,0001b */
	AND(bx, 0x1);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 index */
	SHL(bx, 1);
	/* mov	al,Col2 */
	al = col2;
	/* call	RvrsFaceDraw[bx] */
	CALLF(__dispatch_call_ext, *(dd*)(((db*)&rvrsfacedraw)+bx));
	/* mov	al,-1		;anti-clockwise cyclic */
	al = -1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
	// 0 ;* face non-visible, set invalid cyclic
prmpolyfail2:
	// 4387 
	/* PrmPolyFail2:  	xor	al,al	 	;invalid cyclic */
	XOR(al, al);
	/* mov	Cyclic,al */
	cyclic = al;
	/* ret */
	RETN(0);
sortsecpoly1:
	// 685 
	/* mov	ah,Cyclic ;* kill: assume all (except si) */
	ah = cyclic;
edummylabel3:
	// 4389 
	/* test	ah,ah		;cyclic valid and clockwise? */
	TEST(ah, ah);
	/* jle	SecPolyFail1_1	;no -> */
	TEST(ah, ah);
	if ((ZF || SF != OF)) {goto secpolyfail1_1;}
	/* mov	di,CrtBufPtr */
	di = crtbufptr;
	/* stosb			;store face attribute */
	{ STOSB; }
	/* inc	si		;ignore count */
	INC(si);
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	SecPolyFail1_2	;non-visible -> */
	if (CF) {goto secpolyfail1_2;}
	// 0 ;* clockwise cyclic, store face
	/* mov	CrtBufPtr,di */
	crtbufptr = di;
	/* ret */
	RETN(0);
	// 0 ;* move ptr past face data
secpolyfail1_1:
	// 4391 
	/* SecPolyFail1_1:	lodsb			;fetch count */
	{ LODSB; }
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	si,ax */
	ADD(si, ax);
secpolyfail1_2:
	// 4393 
	/* SecPolyFail1_2:	ret */
	RETN(0);
sortsecpoly2:
	// 718 
	/* mov	ah,Cyclic ;* kill: assume all (except si) */
	ah = cyclic;
edummylabel4:
	// 4395 
	/* test	ah,ah		;cyclic valid? */
	TEST(ah, ah);
	/* jz	SecPolyFail2_1	;no -> */
	if (!(ah & ah)) {goto secpolyfail2_1;}
	/* mov	di,CrtBufPtr */
	di = crtbufptr;
	/* stosb			;store face attribute */
	{ STOSB; }
	/* inc	si		;ignore count */
	INC(si);
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* lodsb			;fetch inside colour */
	{ LODSB; }
	/* mov	Col2,al		;store inside colour */
	col2 = al;
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	SecPolyFail2_2	;non-visible -> */
	if (CF) {goto secpolyfail2_2;}
	/* mov	al,Cyclic */
	al = cyclic;
	/* test	al,al		;clockwise? */
	TEST(al, al);
	/* js	SecPolyRvrs2	;no -> */
	if ((signed char)((al & al)) < 0) {goto secpolyrvrs2;}
	// 0 ;* clockwise cyclic, store face
	/* mov	CrtBufPtr,di */
	crtbufptr = di;
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, draw face
secpolyrvrs2:
	// 4397 
	/* SecPolyRvrs2:  	push	si */
	PUSH(si);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* lodsw			;fetch attribute / colour */
	{ LODSW; }
	/* mov	bl,al */
	bl = al;
	/* and	bx,0001b */
	AND(bx, 0x1);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 index */
	SHL(bx, 1);
	/* mov	al,Col2 */
	al = col2;
	/* call	RvrsFaceDraw[bx] */
	CALLF(__dispatch_call_ext, *(dd*)(((db*)&rvrsfacedraw)+bx));
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
	// 0 ;* move ptr past face data
secpolyfail2_1:
	// 4399 
	/* SecPolyFail2_1: lodsb			;fetch count */
	{ LODSB; }
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	si,ax */
	ADD(si, ax);
secpolyfail2_2:
	// 4401 
	/* SecPolyFail2_2: ret */
	RETN(0);
sortprmline1:
	// 767 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel5:
	// 4403 
	/* stosb			;store face attribute */
	{ STOSB; }
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	PrmLineFail1	;non-visible -> */
	if (CF) {goto prmlinefail1;}
	/* push	si */
	PUSH(si);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* lodsw			;fetch attribute / colour */
	{ LODSW; }
	/* mov	al,ah */
	al = ah;
	/* call	PolyLine */
	CALLF(polyline, 0);
	/* pop	si */
	POP(si);
prmlinefail1:
	// 4405 
	/* PrmLineFail1:	ret */
	RETN(0);
sortprmline2:
	// 791 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel6:
	// 4407 
	/* stosb			;store face attribute */
	{ STOSB; }
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* inc	si		;ignore inside colour */
	INC(si);
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	PrmLineFail2	;non-visible -> */
	if (CF) {goto prmlinefail2;}
	/* push	si */
	PUSH(si);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* lodsw			;fetch attribute / colour */
	{ LODSW; }
	/* mov	al,ah */
	al = ah;
	/* call	PolyLine */
	CALLF(polyline, 0);
	/* pop	si */
	POP(si);
prmlinefail2:
	// 4409 
	/* PrmLineFail2:	ret */
	RETN(0);
sortsecline1:
	// 818 
	/* mov	ah,Cyclic ;* kill: assume all (except si) */
	ah = cyclic;
edummylabel7:
	// 4411 
	/* test	ah,ah		;cyclic valid and clockwise? */
	TEST(ah, ah);
	/* jle	SecLineFail1_1	;no -> */
	TEST(ah, ah);
	if ((ZF || SF != OF)) {goto seclinefail1_1;}
	/* mov	di,CrtBufPtr */
	di = crtbufptr;
	/* stosb			;store face attribute */
	{ STOSB; }
	/* inc	si		;ignore count */
	INC(si);
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	SecLineFail1_2	;non-visible -> */
	if (CF) {goto seclinefail1_2;}
	// 0 ;* clockwise cyclic, store face
	/* mov	CrtBufPtr,di */
	crtbufptr = di;
	/* ret */
	RETN(0);
	// 0 ;* move ptr past face data
seclinefail1_1:
	// 4413 
	/* SecLineFail1_1:	lodsb			;fetch count */
	{ LODSB; }
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	si,ax */
	ADD(si, ax);
seclinefail1_2:
	// 4415 
	/* SecLineFail1_2:	ret */
	RETN(0);
sortsecline2:
	// 851 
	/* mov	ah,Cyclic ;* kill: assume all (except si) */
	ah = cyclic;
edummylabel8:
	// 4417 
	/* test	ah,ah		;cyclic valid? */
	TEST(ah, ah);
	/* jz	SecLineFail2_1	;no -> */
	if (!(ah & ah)) {goto seclinefail2_1;}
	/* mov	di,CrtBufPtr */
	di = crtbufptr;
	/* stosb			;store face attribute */
	{ STOSB; }
	/* inc	si		;ignore count */
	INC(si);
	/* movsb			;fetch and store outside colour */
	{ MOVSB; }
	/* lodsb			;fetch inside colour */
	{ LODSB; }
	/* mov	Col2,al		;store inside colour */
	col2 = al;
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	SecLineFail2_2	;non-visible -> */
	if (CF) {goto seclinefail2_2;}
	/* mov	al,Cyclic */
	al = cyclic;
	/* test	al,al		;clockwise? */
	TEST(al, al);
	/* js	SecLineRvrs2	;no -> */
	if ((signed char)((al & al)) < 0) {goto seclinervrs2;}
	// 0 ;* clockwise cyclic, store face
	/* mov	CrtBufPtr,di */
	crtbufptr = di;
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, draw face
seclinervrs2:
	// 4419 
	/* SecLineRvrs2:	push	si */
	PUSH(si);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* add	si,2		;ignore attribute / colour */
	ADD(si, 2);
	/* mov	al,Col2 */
	al = col2;
	/* call	PolyLine */
	CALLF(polyline, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
	// 0 ;* move ptr past face data
seclinefail2_1:
	// 4421 
	/* SecLineFail2_1:	lodsb			;fetch count */
	{ LODSB; }
	/* xor	ah,ah */
	XOR(ah, ah);
	/* add	si,ax */
	ADD(si, ax);
seclinefail2_2:
	// 4423 
	/* SecLineFail2_2:	ret */
	RETN(0);
sortprmdecinc:
	// 896 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel9:
	// 4425 
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	SortClkWise1 	;non-visible, assume clockwise -> */
	if (CF) {goto sortclkwise1;}
	/* push	si */
	PUSH(si);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* call	CyclicCheck */
	CALL(cycliccheck, 0);
	/* pop	si */
	POP(si);
	/* js	SortAClkWise1	;anti-clockwise decision plane -> */
	if (SF) {goto sortaclkwise1;}
	// 0 ;* clockwise cyclic, process clockwise data then anti-clockwise data
sortclkwise1:
	// 4427 
	/* SortClkWise1:	mov	al,+1		;clockwise cyclic */
	al = 1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* lodsw			;fetch clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* lodsw			;fetch anti-clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process anti-clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, process anti-clockwise data then clockwise data
sortaclkwise1:
	// 4429 
	/* SortAClkWise1:	mov	al,-1		;anti-clockwise cyclic */
	al = -1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* lodsw			;fetch clockwise ptr add on */
	{ LODSW; }
	/* mov	di,si */
	di = si;
	/* add	di,ax */
	ADD(di, ax);
	/* lodsw	     		;fetch anti-clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process anti-clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* call	ScanFace	;process clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
sortprmdecexc:
	// 947 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel10:
	// 4431 
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	SortClkWise2 	;non-visible, assume clockwise -> */
	if (CF) {goto sortclkwise2;}
	/* push	si */
	PUSH(si);
	/* mov	si,CrtBufPtr */
	si = crtbufptr;
	/* call	CyclicCheck */
	CALL(cycliccheck, 0);
	/* pop	si */
	POP(si);
	/* js	SortAClkWise2	;anti-clockwise decision plane -> */
	if (SF) {goto sortaclkwise2;}
	// 0 ;* clockwise cyclic, process clockwise data only
sortclkwise2:
	// 4433 
	/* SortClkWise2:	mov	al,+1		;clockwise cyclic */
	al = 1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* lodsw			;fetch clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* add	si,2		;ignore anti-clockwise ptr add on */
	ADD(si, 2);
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, process anti-clockwise data only
sortaclkwise2:
	// 4435 
	/* SortAClkWise2:	mov	al,-1		;anti-clockwise cyclic */
	al = -1;
	/* mov	Cyclic,al */
	cyclic = al;
	/* add	si,2		;ignore clockwise ptr add on */
	ADD(si, 2);
	/* lodsw	     		;fetch anti-clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process anti-clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
sortsecdecinc:
	// 990 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel11:
	// 4437 
	/* mov	al,Cyclic */
	al = cyclic;
	/* test	al,al		;cyclic clockwise or invalid? */
	TEST(al, al);
	/* js	SortAClkWise3	;no -> */
	if ((signed char)((al & al)) < 0) {goto sortaclkwise3;}
	// 0 ;* clockwise cyclic, process clockwise data then anti-clockwise data
sortclkwise3:
	// 4439 
	/* SortClkWise3:	lodsw			;fetch clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* lodsw			;fetch anti-clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process anti-clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, process anti-clockwise data then clockwise data
sortaclkwise3:
	// 4441 
	/* SortAClkWise3:	lodsw			;fetch clockwise ptr add on */
	{ LODSW; }
	/* mov	di,si */
	di = si;
	/* add	di,ax */
	ADD(di, ax);
	/* lodsw	     		;fetch anti-clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process anti-clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* call	ScanFace	;process clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
sortsecdecexc:
	// 1034 
	/* mov	di,CrtBufPtr ;* kill: assume all (except si) */
	di = crtbufptr;
edummylabel12:
	// 4443 
	/* mov	al,Cyclic */
	al = cyclic;
	/* test	al,al		;cyclic clockwise or invalid? */
	TEST(al, al);
	/* js	SortAClkWise4	;no -> */
	if ((signed char)((al & al)) < 0) {goto sortaclkwise4;}
	// 0 ;* clockwise cyclic, process clockwise data only
sortclkwise4:
	// 4445 
	/* SortClkWise4:	lodsw			;fetch clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* add	si,2		;ignore anti-clockwise ptr add on */
	ADD(si, 2);
	/* ret */
	RETN(0);
	// 0 ;* anti-clockwise cyclic, process anti-clockwise data only
sortaclkwise4:
	// 4447 
	/* SortAClkWise4:	add	si,2		;ignore clockwise ptr add on */
	ADD(si, 2);
	/* lodsw	     		;fetch anti-clockwise ptr add on */
	{ LODSW; }
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process anti-clockwise data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
ifthen:
	// 1066 
	/* lodsb			;fetch mask */
	{ LODSB; }
edummylabel13:
	// 4449 
	/* mov	dl,al */
	dl = al;
	/* lodsw			;fetch end if ptr add on */
	{ LODSW; }
	/* mov	di,si */
	di = si;
	/* add	di,ax */
	ADD(di, ax);
	/* test	dl,ObjAnimFlags	;condition true? */
	TEST(dl, objanimflags);
	/* jz	CondFalse1	;no -> */
	if (!(dl & objanimflags)) {goto condfalse1;}
	/* lodsw			;fetch condition true ptr add on */
	{ LODSW; }
	/* add	si,ax */
	ADD(si, ax);
	/* push	di */
	PUSH(di);
	/* call	ScanFace	;process condition true data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
condfalse1:
	// 4451 
	/* CondFalse1:	mov	si,di */
	si = di;
	/* ret */
	RETN(0);
ifthenelse:
	// 1091 
	/* lodsb			;fetch mask */
	{ LODSB; }
edummylabel14:
	// 4453 
	/* mov	dl,al */
	dl = al;
	/* lodsw			;fetch end if ptr add on */
	{ LODSW; }
	/* mov	di,si */
	di = si;
	/* add	di,ax */
	ADD(di, ax);
	/* test	dl,ObjAnimFlags	;condition true? */
	TEST(dl, objanimflags);
	/* jz	CondFalse2	;no -> */
	if (!(dl & objanimflags)) {goto condfalse2;}
	/* lodsw			;fetch condition true ptr add on */
	{ LODSW; }
	/* add	si,ax */
	ADD(si, ax);
	/* push	di */
	PUSH(di);
	/* call	ScanFace	;process condition true data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
condfalse2:
	// 4455 
	/* CondFalse2:	add	si,2		;ignore condition true ptr add on */
	ADD(si, 2);
	/* lodsw			;fetch condition false ptr add on */
	{ LODSW; }
	/* add	si,ax */
	ADD(si, ax);
	/* push	di */
	PUSH(di);
	/* call	ScanFace	;process condition false data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
selectcase:
	// 1121 
	/* lodsw			;fetch mask, fetch shift count */
	{ LODSW; }
edummylabel15:
	// 4457 
	/* mov	dl,al		;mask */
	dl = al;
	/* mov	cl,ah		;shift count */
	cl = ah;
	/* lodsw			;fetch case end ptr add on */
	{ LODSW; }
	/* mov	di,si */
	di = si;
	/* add	di,ax */
	ADD(di, ax);
	/* mov	al,ObjAnimFlags */
	al = objanimflags;
	/* shr	al,cl		;shift bit field into low order bits */
	SHR(al, cl);
	/* and	al,dl		;extract case */
	AND(al, dl);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 word index */
	SHL(ax, 1);
	/* add	si,ax */
	ADD(si, ax);
	/* lodsw			;fetch case ptr add on */
	{ LODSW; }
	/* add	si,ax */
	ADD(si, ax);
	/* push	di */
	PUSH(di);
	/* call	ScanFace	;process case data */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
gosub:
	// 1149 
	/* lodsw			;fetch block ptr */
	{ LODSW; }
edummylabel16:
	// 4459 
	/* push	si */
	PUSH(si);
	/* add	si,ax */
	ADD(si, ax);
	/* call	ScanFace	;process block */
	CALL(scanface, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
illegal:
	// 1165 
	/* mov	sp,DrawRecover	;recover stack to abort object draw */
	sp = drawrecover;
edummylabel17:
	// 4461 
	/* stc			;cf = 1 = error */
	STC;
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
                case m2c::kcondfalse1: 	goto condfalse1;
        case m2c::kcondfalse2: 	goto condfalse2;
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
        case m2c::kfaceloop: 	goto faceloop;
        case m2c::kflushbuffer: 	goto flushbuffer;
        case m2c::kgosub: 	goto gosub;
        case m2c::kifthen: 	goto ifthen;
        case m2c::kifthenelse: 	goto ifthenelse;
        case m2c::killegal: 	goto illegal;
        case m2c::knextface: 	goto nextface;
        case m2c::kprmlinefail1: 	goto prmlinefail1;
        case m2c::kprmlinefail2: 	goto prmlinefail2;
        case m2c::kprmpolyfail1: 	goto prmpolyfail1;
        case m2c::kprmpolyfail2: 	goto prmpolyfail2;
        case m2c::kprmpolyrvrs1: 	goto prmpolyrvrs1;
        case m2c::kprmpolyrvrs2: 	goto prmpolyrvrs2;
        case m2c::kscanface: 	goto scanface;
        case m2c::kscanfaceexit: 	goto scanfaceexit;
        case m2c::kseclinefail1_1: 	goto seclinefail1_1;
        case m2c::kseclinefail1_2: 	goto seclinefail1_2;
        case m2c::kseclinefail2_1: 	goto seclinefail2_1;
        case m2c::kseclinefail2_2: 	goto seclinefail2_2;
        case m2c::kseclinervrs2: 	goto seclinervrs2;
        case m2c::ksecpolyfail1_1: 	goto secpolyfail1_1;
        case m2c::ksecpolyfail1_2: 	goto secpolyfail1_2;
        case m2c::ksecpolyfail2_1: 	goto secpolyfail2_1;
        case m2c::ksecpolyfail2_2: 	goto secpolyfail2_2;
        case m2c::ksecpolyrvrs2: 	goto secpolyrvrs2;
        case m2c::kselectcase: 	goto selectcase;
        case m2c::ksortaclkwise1: 	goto sortaclkwise1;
        case m2c::ksortaclkwise2: 	goto sortaclkwise2;
        case m2c::ksortaclkwise3: 	goto sortaclkwise3;
        case m2c::ksortaclkwise4: 	goto sortaclkwise4;
        case m2c::ksortclkwise1: 	goto sortclkwise1;
        case m2c::ksortclkwise2: 	goto sortclkwise2;
        case m2c::ksortclkwise3: 	goto sortclkwise3;
        case m2c::ksortclkwise4: 	goto sortclkwise4;
        case m2c::ksortprmdecexc: 	goto sortprmdecexc;
        case m2c::ksortprmdecinc: 	goto sortprmdecinc;
        case m2c::ksortprmline1: 	goto sortprmline1;
        case m2c::ksortprmline2: 	goto sortprmline2;
        case m2c::ksortprmpoly1: 	goto sortprmpoly1;
        case m2c::ksortprmpoly2: 	goto sortprmpoly2;
        case m2c::ksortsecdecexc: 	goto sortsecdecexc;
        case m2c::ksortsecdecinc: 	goto sortsecdecinc;
        case m2c::ksortsecline1: 	goto sortsecline1;
        case m2c::ksortsecline2: 	goto sortsecline2;
        case m2c::ksortsecpoly1: 	goto sortsecpoly1;
        case m2c::ksortsecpoly2: 	goto sortsecpoly2;
        default: return __dispatch_call(__disp, _state);
    };
}


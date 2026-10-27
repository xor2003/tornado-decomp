/* THIS IS GENERATED FILE */

        
#include "ground.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawgndobject:
	// 724 
	/* mov	DrawRecover,sp	;recover stack to here if error */
	drawrecover = sp;
	// 0 ;----------------------------------
	// 0 ;* calc max(abs(x), abs(y), abs(z))
	// 0 ;----------------------------------
edummylabel1:
	// 4369 
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	cx,ax		;cx = abs(z) */
	cx = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bx,ax		;bx = abs(y) */
	bx = ax;
	/* mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x)
	/* cmp	ax,bx		;abs(x) >= abs(y)? */
	CMP(ax, bx);
	/* jae	SkipSort1	;yes -> */
	if ((dw)(ax) >= (dw)(bx)) {goto skipsort1;}
	/* mov	ax,bx */
	ax = bx;
skipsort1:
	// 4371 
	/* SkipSort1:	cmp	ax,cx		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, cx);
	/* jae	SkipSort2	;yes -> */
	if ((dw)(ax) >= (dw)(cx)) {goto skipsort2;}
	/* mov	ax,cx */
	ax = cx;
skipsort2:
	// 4373 
	/* SkipSort2:	mov	dx,ax		;dx = max(abs(x), abs(y), abs(z)) */
	dx = ax;
	// 0 ;-------------------------------------
	// 0 ;* fetch pointer to ground object data
	// 0 ;-------------------------------------
	/* mov	bl,OBJ_NUM[si] */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_num);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	ax,GroundTable[bx] */
	ax = *(dw*)(((db*)&groundtable)+bx);
	// 0 ;-------------------------------------------------------------------------
	// 0 ;* test if object is in range, if not, move to next approximation (if any)
	// 0 ;-------------------------------------------------------------------------
	/* mov	bp,GRNDOBJ1 */
	bp = seg_offset(grndobj1);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
approxloop:
	// 4375 
	/* ApproxLoop:	mov	bx,ax		;bx -> object data */
	bx = ax;
	/* cmp	dx,OBJ_HDR_RANGE[bx] */
	CMP(dx, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)));
	/* jb	SortPosition	;in range -> */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)))) {goto sortposition;}
	/* mov	ax,OBJ_HDR_PTR[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ptr)));
	/* cmp	ax,-1		;any more approximations? */
	CMP(ax, -1);
	/* jne	ApproxLoop	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto approxloop;}
	// 0 ;------------------------------------------
	// 0 ;* approximate object to pixel (if enabled)
	// 0 ;------------------------------------------
	/* mov	ah,OBJ_HDR_FLAGS[bx] */
	ah = m2c::getdata(((objectheader*)raddr(ds,bx))->obj_hdr_flags);
	/* mov	al,OBJ_HDR_COL[bx] */
	al = m2c::getdata(((objectheader*)raddr(ds,bx))->obj_hdr_col);
	/* mov	bp,DATA */
	bp = seg_offset(data);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
	/* test	ah,OBJ_FLG_PIXEL */
	TEST(ah, 0x1);
	/* jz	ExitGndObject	;pixel approximation disabled -> */
	if (!(ah & 0x1)) {goto exitgndobject;}
	/* push	ax		;store colour */
	PUSH(ax);
	/* mov	ax,OBJ_XPOS[si]	;fetch object position */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* call	DotClip */
	CALL(dotclip, 0);
	/* pop	ax		;restore colour */
	POP(ax);
	/* jc	ExitGndObject	;non-visible -> */
	if (CF) {goto exitgndobject;}
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* jmp	ExitGndObject */
	goto exitgndobject;
	// 0 ;-------------------------------------
	// 0 ;* sort object position wrt scale mode
	// 0 ;-------------------------------------
sortposition:
	// 4377 
	/* SortPosition:	mov	di,OBJ_HDR_SCALE[bx] */
	di = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	bp,bx		;store object ptr */
	bp = bx;
	/* call	CalcObjectPos[di] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcobjectpos)+di));
	// 0 ;----------------------
	// 0 ;* sort animation flags
	// 0 ;----------------------
	/* mov	al,OBJ_ANIM_FLAGS[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* mov	ObjAnimFlags,al */
	objanimflags = al;
	/* mov	si,bp		;restore object ptr */
	si = bp;
	/* add	si,OBJ_HDR_SIZE	;skip header data */
	ADD(si, 14);
	// 0 ;------------------------------------------------
	// 0 ;* scan vertex list and calculate eye co-ord data
	// 0 ;------------------------------------------------
	/* mov	ax,GRNDOBJ1 */
	ax = seg_offset(grndobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	ScanVertexList */
	CALL(scanvertexlist, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
	// 0 ;* test if object is visible
	// 0 ;---------------------------
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitGndObject	;object non-visible -> */
	if (CF) {goto exitgndobject;}
	// 0 ;------------------------------------------------------
	// 0 ;* copy face data from GRNDOBJ1 segment to DATA segment
	// 0 ;------------------------------------------------------
	/* mov	ax,GRNDOBJ1 */
	ax = seg_offset(grndobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 841 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 843 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 844 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 845 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;---------------------
	// 0 ;* scan and draw faces
	// 0 ;---------------------
	// 0 ;* reset crt buffer ptr
	/* mov	ax,OFFSET CrtBuffer */
	ax = m2c::near_offset_external(crtbuffer);
	/* mov	CrtBufPtr,ax */
	crtbufptr = ax;
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
	/* call	ScanFace */
	CALL(scanface, 0);
exitgndobject:
	// 4379 
	/* ExitGndObject:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
drawflatobject:
	// 870 
	/* mov	DrawRecover,sp	;recover stack to here if error */
	drawrecover = sp;
edummylabel2:
	// 4381 
	/* mov	Cyclic,+1	;clockwise cyclic (always) */
	cyclic = 1;
	/* mov	si,OFFSET FlatObject */
	si = m2c::near_offset_external(flatobject);
	// 0 ;----------------------------------
	// 0 ;* calc max(abs(x), abs(y), abs(z))
	// 0 ;----------------------------------
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	cx,ax		;cx = abs(z) */
	cx = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bx,ax		;bx = abs(y) */
	bx = ax;
	/* mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x)
	/* cmp	ax,bx		;abs(x) >= abs(y)? */
	CMP(ax, bx);
	/* jae	SkipSortA	;yes -> */
	if ((dw)(ax) >= (dw)(bx)) {goto skipsorta;}
	/* mov	ax,bx */
	ax = bx;
skipsorta:
	// 4383 
	/* SkipSortA:	cmp	ax,cx		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, cx);
	/* jae	SkipSortB	;yes -> */
	if ((dw)(ax) >= (dw)(cx)) {goto skipsortb;}
	/* mov	ax,cx */
	ax = cx;
skipsortb:
	// 4385 
	/* SkipSortB:	mov	dx,ax		;dx = max(abs(x), abs(y), abs(z)) */
	dx = ax;
	// 0 ;------------------------------------------
	// 0 ;* fetch pointer to flat ground object data
	// 0 ;------------------------------------------
	/* mov	bl,OBJ_NUM[si] */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_num);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	ax,FlatTable[bx] */
	ax = *(dw*)(((db*)&flattable)+bx);
	// 0 ;-------------------------------------------------------------------------
	// 0 ;* test if object is in range, if not, move to next approximation (if any)
	// 0 ;-------------------------------------------------------------------------
	/* mov	bp,FLATOBJ1 */
	bp = seg_offset(flatobj1);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
flatapproxloop:
	// 4387 
	/* FlatApproxLoop:	mov	bx,ax		;bx -> object data */
	bx = ax;
	/* cmp	dx,OBJ_HDR_RANGE[bx] */
	CMP(dx, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)));
	/* jb	SortFlatPos	;in range -> */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)))) {goto sortflatpos;}
	/* mov	ax,OBJ_HDR_PTR[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ptr)));
	/* cmp	ax,-1		;any more approximations? */
	CMP(ax, -1);
	/* jne	FlatApproxLoop	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto flatapproxloop;}
	// 0 ;------------------------------------------
	// 0 ;* approximate object to pixel (if enabled)
	// 0 ;------------------------------------------
	/* mov	ah,OBJ_HDR_FLAGS[bx] */
	ah = m2c::getdata(((objectheader*)raddr(ds,bx))->obj_hdr_flags);
	/* mov	al,OBJ_HDR_COL[bx] */
	al = m2c::getdata(((objectheader*)raddr(ds,bx))->obj_hdr_col);
	/* mov	bp,DATA */
	bp = seg_offset(data);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
	/* test	ah,OBJ_FLG_PIXEL */
	TEST(ah, 0x1);
	/* jz	ExitFlatObject	;pixel approximation disabled -> */
	if (!(ah & 0x1)) {goto exitflatobject;}
	/* push	ax		;store colour */
	PUSH(ax);
	/* mov	ax,OBJ_XPOS[si]	;fetch object position */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* call	DotClip */
	CALL(dotclip, 0);
	/* pop	ax		;restore colour */
	POP(ax);
	/* jc	ExitFlatObject	;non-visible -> */
	if (CF) {goto exitflatobject;}
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* jmp	ExitFlatObject */
	goto exitflatobject;
	// 0 ;------------------------------------------
	// 0 ;* sort flat object position wrt scale mode
	// 0 ;------------------------------------------
sortflatpos:
	// 4389 
	/* SortFlatPos:	mov	di,OBJ_HDR_SCALE[bx] */
	di = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	bp,bx		;store object ptr */
	bp = bx;
	/* call	CalcObjectPos[di] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcobjectpos)+di));
	// 0 ;----------------------
	// 0 ;* sort animation flags
	// 0 ;----------------------
	/* mov	al,OBJ_ANIM_FLAGS[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* mov	ObjAnimFlags,al */
	objanimflags = al;
	/* mov	si,bp		;restore object ptr */
	si = bp;
	/* add	si,OBJ_HDR_SIZE	;skip header data */
	ADD(si, 14);
	// 0 ;------------------------------------------------
	// 0 ;* scan vertex list and calculate eye co-ord data
	// 0 ;------------------------------------------------
	/* mov	ax,FLATOBJ1 */
	ax = seg_offset(flatobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	ScanFlatVrtxLst */
	CALL(scanflatvrtxlst, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
	// 0 ;* test if object is visible
	// 0 ;---------------------------
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitFlatObject	;object non-visible -> */
	if (CF) {goto exitflatobject;}
	// 0 ;------------------------------------------------------
	// 0 ;* copy face data from FLATOBJ1 segment to DATA segment
	// 0 ;------------------------------------------------------
	/* mov	ax,FLATOBJ1 */
	ax = seg_offset(flatobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 989 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 991 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 992 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 993 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;---------------------
	// 0 ;* scan and draw faces
	// 0 ;---------------------
	// 0 ;* reset crt buffer ptr
	/* mov	ax,OFFSET CrtBuffer */
	ax = m2c::near_offset_external(crtbuffer);
	/* mov	CrtBufPtr,ax */
	crtbufptr = ax;
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
	/* call	ScanFace */
	CALL(scanface, 0);
exitflatobject:
	// 4391 
	/* ExitFlatObject:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
calcobjectpos1:
	// 1017 
	/* mov	ax,OBJ_XPOS[si] ;* kill: ax */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
edummylabel3:
	// 4393 
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcobjectpos2:
	// 1034 
	/* mov	al,Valid1_2 ;* kill: ax, bx, di, flags */
	al = valid1_2;
edummylabel4:
	// 4395 
	/* test	al,al		;2 * overscaled vars valid? */
	TEST(al, al);
	/* jz	FixObjectPos2	;no -> */
	if (!(al & al)) {goto fixobjectpos2;}
	/* mov	ax,OBJ_XGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos2	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos2;}
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,OBJ_YGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos2	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos2;}
	/* mov	di,ax */
	di = ax;
	/* mov	ax,XE01_2 */
	ax = xe01_2;
	/* add	ax,XSX[bx] */
	ADD(ax, *(dw*)(((db*)&xsx)+bx));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YE01_2 */
	ax = ye01_2;
	/* add	ax,YSX[bx] */
	ADD(ax, *(dw*)(((db*)&ysx)+bx));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZE01_2 */
	ax = ze01_2;
	/* add	ax,ZSX[bx] */
	ADD(ax, *(dw*)(((db*)&zsx)+bx));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
	// 0 ;* index out of range, calc coarse position values
fixobjectpos2:
	// 4397 
	/* FixObjectPos2:	mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcobjectpos4:
	// 1086 
	/* mov	al,Valid1_4 ;* kill: ax, bx, di, flags */
	al = valid1_4;
edummylabel5:
	// 4399 
	/* test	al,al		;4 * overscaled vars valid? */
	TEST(al, al);
	/* jz	FixObjectPos4	;no -> */
	if (!(al & al)) {goto fixobjectpos4;}
	/* mov	ax,OBJ_XGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos4	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos4;}
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,OBJ_YGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos4	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos4;}
	/* mov	di,ax */
	di = ax;
	/* mov	ax,XE01_4 */
	ax = xe01_4;
	/* add	ax,XSX[bx] */
	ADD(ax, *(dw*)(((db*)&xsx)+bx));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YE01_4 */
	ax = ye01_4;
	/* add	ax,YSX[bx] */
	ADD(ax, *(dw*)(((db*)&ysx)+bx));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZE01_4 */
	ax = ze01_4;
	/* add	ax,ZSX[bx] */
	ADD(ax, *(dw*)(((db*)&zsx)+bx));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
	// 0 ;* index out of range, calc coarse position values
fixobjectpos4:
	// 4401 
	/* FixObjectPos4:	mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcobjectpos8:
	// 1143 
	/* mov	al,Valid1_8 ;* kill: ax, bx, di, flags */
	al = valid1_8;
edummylabel6:
	// 4403 
	/* test	al,al		;8 * overscaled vars valid? */
	TEST(al, al);
	/* jz	FixObjectPos8	;no -> */
	if (!(al & al)) {goto fixobjectpos8;}
	/* mov	ax,OBJ_XGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos8	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos8;}
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,OBJ_YGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos8	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos8;}
	/* mov	di,ax */
	di = ax;
	/* mov	ax,XE01_8 */
	ax = xe01_8;
	/* add	ax,XSX[bx] */
	ADD(ax, *(dw*)(((db*)&xsx)+bx));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YE01_8 */
	ax = ye01_8;
	/* add	ax,YSX[bx] */
	ADD(ax, *(dw*)(((db*)&ysx)+bx));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZE01_8 */
	ax = ze01_8;
	/* add	ax,ZSX[bx] */
	ADD(ax, *(dw*)(((db*)&zsx)+bx));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
	// 0 ;* index out of range, calc coarse position values
fixobjectpos8:
	// 4405 
	/* FixObjectPos8:	mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
calcobjectpos16:
	// 1205 
	/* mov	al,Valid1_16 ;* kill: ax, bx, di, flags */
	al = valid1_16;
edummylabel7:
	// 4407 
	/* test	al,al		;16 * overscaled vars valid? */
	TEST(al, al);
	/* jz	FixObjectPos16	;no -> */
	if (!(al & al)) {goto fixobjectpos16;}
	/* mov	ax,OBJ_XGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* shl	ax,1		;*16 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos16	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos16;}
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,OBJ_YGRID[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* sub	ax,64*2		;centre index around zero */
	SUB(ax, 64*2);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* shl	ax,1		;*16 index (signed) */
	SHL(ax, 1);
	/* add	ax,64*2		;place around sector grid centre */
	ADD(ax, 64*2);
	/* cmp	ax,128*2	;index in range? */
	CMP(ax, 128*2);
	/* ja	FixObjectPos16	;no -> */
	if ((dw)(ax) > (dw)(128*2)) {goto fixobjectpos16;}
	/* mov	di,ax */
	di = ax;
	/* mov	ax,XE01_16 */
	ax = xe01_16;
	/* add	ax,XSX[bx] */
	ADD(ax, *(dw*)(((db*)&xsx)+bx));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,YE01_16 */
	ax = ye01_16;
	/* add	ax,YSX[bx] */
	ADD(ax, *(dw*)(((db*)&ysx)+bx));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,ZE01_16 */
	ax = ze01_16;
	/* add	ax,ZSX[bx] */
	ADD(ax, *(dw*)(((db*)&zsx)+bx));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
	// 0 ;* index out of range, calc coarse position values
fixobjectpos16:
	// 4409 
	/* FixObjectPos16:	mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;*8 */
	SHL(ax, 1);
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* mov	ZPos,ax */
	zpos = ax;
	/* ret */
	RETN(0);
scanvertexlist:
	// 1275 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel8:
	// 4411 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
scanvertexloop:
	// 4413 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitScanVertex	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitscanvertex;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XGX[bx]	;XGX */
	cx = *(dw*)(((db*)&xgx)+bx);
	/* mov	dx,YGX[bx]	;YGX */
	dx = *(dw*)(((db*)&ygx)+bx);
	/* mov	bp,ZGX[bx]	;ZGX */
	bp = *(dw*)(((db*)&zgx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XGY[bx]	;XGX + XGY */
	ADD(cx, *(dw*)(((db*)&xgy)+bx));
	/* add	dx,YGY[bx]	;YGX + YGY */
	ADD(dx, *(dw*)(((db*)&ygy)+bx));
	/* add	bp,ZGY[bx]	;ZGX + ZGY */
	ADD(bp, *(dw*)(((db*)&zgy)+bx));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch z index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XGZ[bx]	;XGX + XGY + XGZ */
	ADD(cx, *(dw*)(((db*)&xgz)+bx));
	/* add	dx,YGZ[bx]	;YGX + YGY + YGZ */
	ADD(dx, *(dw*)(((db*)&ygz)+bx));
	/* add	bp,ZGZ[bx]	;ZGX + ZGY + ZGZ */
	ADD(bp, *(dw*)(((db*)&zgz)+bx));
	/* add	cx,XPos		;XPos + XGX + XGY + XGZ */
	ADD(cx, xpos);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos		;YPos + YGX + YGY + YGZ */
	ADD(dx, ypos);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos		;ZPos + ZGX + ZGY + ZGZ */
	ADD(bp, zpos);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	ScanVertexLoop */
	goto scanvertexloop;
exitscanvertex:
	// 4415 
	/* ExitScanVertex:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanflatvrtxlst:
	// 1325 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel9:
	// 4417 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
scanflatloop:
	// 4419 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitScanFlat	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitscanflat;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XGX[bx]	;XGX */
	cx = *(dw*)(((db*)&xgx)+bx);
	/* mov	dx,YGX[bx]	;YGX */
	dx = *(dw*)(((db*)&ygx)+bx);
	/* mov	bp,ZGX[bx]	;ZGX */
	bp = *(dw*)(((db*)&zgx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XGY[bx]	;XGX + XGY */
	ADD(cx, *(dw*)(((db*)&xgy)+bx));
	/* add	dx,YGY[bx]	;YGX + YGY */
	ADD(dx, *(dw*)(((db*)&ygy)+bx));
	/* add	bp,ZGY[bx]	;ZGX + ZGY */
	ADD(bp, *(dw*)(((db*)&zgy)+bx));
	/* add	cx,XPos		;XPos + XGX + XGY */
	ADD(cx, xpos);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos		;YPos + YGX + YGY */
	ADD(dx, ypos);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos		;ZPos + ZGX + ZGY */
	ADD(bp, zpos);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	ScanFlatLoop */
	goto scanflatloop;
exitscanflat:
	// 4421 
	/* ExitScanFlat:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
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
                case m2c::kapproxloop: 	goto approxloop;
        case m2c::kcalcobjectpos1: 	goto calcobjectpos1;
        case m2c::kcalcobjectpos16: 	goto calcobjectpos16;
        case m2c::kcalcobjectpos2: 	goto calcobjectpos2;
        case m2c::kcalcobjectpos4: 	goto calcobjectpos4;
        case m2c::kcalcobjectpos8: 	goto calcobjectpos8;
        case m2c::kdrawflatobject: 	goto drawflatobject;
        case m2c::kdrawgndobject: 	goto drawgndobject;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitflatobject: 	goto exitflatobject;
        case m2c::kexitgndobject: 	goto exitgndobject;
        case m2c::kexitscanflat: 	goto exitscanflat;
        case m2c::kexitscanvertex: 	goto exitscanvertex;
        case m2c::kfixobjectpos16: 	goto fixobjectpos16;
        case m2c::kfixobjectpos2: 	goto fixobjectpos2;
        case m2c::kfixobjectpos4: 	goto fixobjectpos4;
        case m2c::kfixobjectpos8: 	goto fixobjectpos8;
        case m2c::kflatapproxloop: 	goto flatapproxloop;
        case m2c::kscanflatloop: 	goto scanflatloop;
        case m2c::kscanflatvrtxlst: 	goto scanflatvrtxlst;
        case m2c::kscanvertexlist: 	goto scanvertexlist;
        case m2c::kscanvertexloop: 	goto scanvertexloop;
        case m2c::kskipsort1: 	goto skipsort1;
        case m2c::kskipsort2: 	goto skipsort2;
        case m2c::kskipsorta: 	goto skipsorta;
        case m2c::kskipsortb: 	goto skipsortb;
        case m2c::ksortflatpos: 	goto sortflatpos;
        case m2c::ksortposition: 	goto sortposition;
        default: return __dispatch_call(__disp, _state);
    };
}


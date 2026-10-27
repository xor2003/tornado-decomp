/* THIS IS GENERATED FILE */

        
#include "mobile.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawmobobject1:
	// 731 
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
	/* jae	SkipSort1_1	;yes -> */
	if ((dw)(ax) >= (dw)(bx)) {goto skipsort1_1;}
	/* mov	ax,bx */
	ax = bx;
skipsort1_1:
	// 4371 
	/* SkipSort1_1:	cmp	ax,cx		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, cx);
	/* jae	SkipSort2_1	;yes -> */
	if ((dw)(ax) >= (dw)(cx)) {goto skipsort2_1;}
	/* mov	ax,cx */
	ax = cx;
skipsort2_1:
	// 4373 
	/* SkipSort2_1:	mov	dx,ax		;dx = max(abs(x), abs(y), abs(z)) */
	dx = ax;
	// 0 ;-------------------------------------
	// 0 ;* fetch pointer to mobile object data
	// 0 ;-------------------------------------
	/* mov	bl,OBJ_NUM[si] */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_num);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	ax,MobileTable[bx] */
	ax = *(dw*)(((db*)&mobiletable)+bx);
	// 0 ;-------------------------------------------------------------------------
	// 0 ;* test if object is in range, if not, move to next approximation (if any)
	// 0 ;-------------------------------------------------------------------------
	/* mov	bp,MOBOBJ1 */
	bp = seg_offset(mobobj1);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
approxloop1:
	// 4375 
	/* ApproxLoop1:	mov	bx,ax		;bx -> object data */
	bx = ax;
	/* cmp	dx,OBJ_HDR_RANGE[bx] */
	CMP(dx, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)));
	/* jb	SortPosition1	;in range -> */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)))) {goto sortposition1;}
	/* mov	ax,OBJ_HDR_PTR[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ptr)));
	/* cmp	ax,-1		;any more approximations? */
	CMP(ax, -1);
	/* jne	ApproxLoop1	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto approxloop1;}
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
	/* jz	ExitLink1	;pixel approximation disabled -> */
	if (!(ah & 0x1)) {goto exitlink1;}
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
	/* jc	ExitLink1	;non-visible -> */
	if (CF) {goto exitlink1;}
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitlink1:
	// 4377 
	/* ExitLink1:	jmp	ExitMobObject1 */
	goto exitmobobject1;
	// 0 ;-------------------------------------
	// 0 ;* sort object position wrt scale mode
	// 0 ;-------------------------------------
sortposition1:
	// 4379 
	/* SortPosition1:	mov	di,OBJ_HDR_SCALE[bx] */
	di = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,OBJ_HDR_XGRID[bx] */
	cx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,OBJ_HDR_YGRID[bx] */
	dx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	di,CalcObjectPos[di] */
	di = *(dw*)(((db*)&calcobjectpos)+di);
	/* xchg	cx,di */
	XCHG(cx, di);
	/* mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	ZPos,ax */
	zpos = ax;
	// 0 ;----------------------
	// 0 ;* sort animation flags
	// 0 ;----------------------
	/* mov	al,OBJ_ANIM_FLAGS[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* mov	ObjAnimFlags,al */
	objanimflags = al;
	// 0 ;-----------------------------------
	// 0 ;* rotate object grid (if necessary)
	// 0 ;-----------------------------------
	/* push	bx		;store object data ptr */
	PUSH(bx);
	// 0 ;* check if heading, pitch and roll match previously rotated grid
	/* mov	ax,OBJ_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* cmp	ax,RGridHdg */
	CMP(ax, rgridhdg);
	/* jne	ContRotate1 */
	if ((dw)(ax) != (dw)(rgridhdg)) {goto controtate1;}
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* cmp	ax,RGridPitch */
	CMP(ax, rgridpitch);
	/* jne	ContRotate1 */
	if ((dw)(ax) != (dw)(rgridpitch)) {goto controtate1;}
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* cmp	ax,RGridRoll */
	CMP(ax, rgridroll);
	/* jne	ContRotate1 */
	if ((dw)(ax) != (dw)(rgridroll)) {goto controtate1;}
	// 0 ;* check if previously rotated grid is large enough to use
	/* cmp	di,XGridSize	;x grid size ok? */
	CMP(di, xgridsize);
	/* ja	ContRotate1	;no -> */
	if ((dw)(di) > (dw)(xgridsize)) {goto controtate1;}
	/* cmp	dx,YGridSize	;y grid size ok? */
	CMP(dx, ygridsize);
	/* jbe	SkipRotate1	;yes -> */
	if ((dw)(dx) <= (dw)(ygridsize)) {goto skiprotate1;}
controtate1:
	// 4381 
	/* ContRotate1:	mov	XGridSize,di */
	xgridsize = di;
	/* mov	YGridSize,dx */
	ygridsize = dx;
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	RGridRoll,ax */
	rgridroll = ax;
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	RGridPitch,ax */
	rgridpitch = ax;
	/* mov	ax,OBJ_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	RGridHdg,ax */
	rgridhdg = ax;
	/* call	CalcBFactors	;skew */
	CALL(calcbfactors, 0);
	/* call	CalcRotateGrid1 */
	CALL(calcrotategrid1, 0);
skiprotate1:
	// 4383 
	/* SkipRotate1:	pop	si		;restore object data ptr */
	POP(si);
	/* add	si,OBJ_HDR_SIZE	;skip header data */
	ADD(si, 14);
	// 0 ;------------------------------------------------
	// 0 ;* scan vertex list and calculate eye co-ord data
	// 0 ;------------------------------------------------
	/* mov	ax,MOBOBJ1 */
	ax = seg_offset(mobobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	ScanVertexList1 */
	CALL(scanvertexlist1, 0);
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
	/* jc	ExitMobObject1	;object non-visible -> */
	if (CF) {goto exitmobobject1;}
	// 0 ;-----------------------------------------------------
	// 0 ;* copy face data from MOBOBJ1 segment to DATA segment
	// 0 ;-----------------------------------------------------
	/* mov	ax,MOBOBJ1 */
	ax = seg_offset(mobobj1);
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
	// 891 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 893 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 894 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 895 rep	movsb
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
exitmobobject1:
	// 4385 
	/* ExitMobObject1:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
drawmobobject2:
	// 920 
	/* mov	DrawRecover,sp	;recover stack to here if error */
	drawrecover = sp;
	// 0 ;----------------------------------
	// 0 ;* calc max(abs(x), abs(y), abs(z))
	// 0 ;----------------------------------
edummylabel2:
	// 4387 
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
	/* jae	SkipSort1_2	;yes -> */
	if ((dw)(ax) >= (dw)(bx)) {goto skipsort1_2;}
	/* mov	ax,bx */
	ax = bx;
skipsort1_2:
	// 4389 
	/* SkipSort1_2:	cmp	ax,cx		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, cx);
	/* jae	SkipSort2_2	;yes -> */
	if ((dw)(ax) >= (dw)(cx)) {goto skipsort2_2;}
	/* mov	ax,cx */
	ax = cx;
skipsort2_2:
	// 4391 
	/* SkipSort2_2:	mov	dx,ax		;dx = max(abs(x), abs(y), abs(z)) */
	dx = ax;
	// 0 ;-------------------------------------
	// 0 ;* fetch pointer to mobile object data
	// 0 ;-------------------------------------
	/* mov	bl,OBJ_NUM[si] */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_num);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	ax,MobileTable[bx] */
	ax = *(dw*)(((db*)&mobiletable)+bx);
	// 0 ;-------------------------------------------------------------------------
	// 0 ;* test if object is in range, if not, move to next approximation (if any)
	// 0 ;-------------------------------------------------------------------------
	/* mov	bp,MOBOBJ1 */
	bp = seg_offset(mobobj1);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
approxloop2:
	// 4393 
	/* ApproxLoop2:	mov	bx,ax		;bx -> object data */
	bx = ax;
	/* cmp	dx,OBJ_HDR_RANGE[bx] */
	CMP(dx, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)));
	/* jb	SortPosition2	;in range -> */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)))) {goto sortposition2;}
	/* mov	ax,OBJ_HDR_PTR[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ptr)));
	/* cmp	ax,-1		;any more approximations? */
	CMP(ax, -1);
	/* jne	ApproxLoop2	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto approxloop2;}
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
	/* jz	ExitLink2	;pixel approximation disabled -> */
	if (!(ah & 0x1)) {goto exitlink2;}
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
	/* jc	ExitLink2	;non-visible -> */
	if (CF) {goto exitlink2;}
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitlink2:
	// 4395 
	/* ExitLink2:	jmp	ExitMobObject2 */
	goto exitmobobject2;
	// 0 ;-------------------------------------
	// 0 ;* sort object position wrt scale mode
	// 0 ;-------------------------------------
sortposition2:
	// 4397 
	/* SortPosition2:	mov	di,OBJ_HDR_SCALE[bx] */
	di = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,OBJ_HDR_XGRID[bx] */
	cx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,OBJ_HDR_YGRID[bx] */
	dx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	bp,OBJ_HDR_ZGRID[bx] */
	bp = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	di,CalcObjectPos[di] */
	di = *(dw*)(((db*)&calcobjectpos)+di);
	/* xchg	cx,di */
	XCHG(cx, di);
	/* mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	ZPos,ax */
	zpos = ax;
	// 0 ;----------------------
	// 0 ;* sort animation flags
	// 0 ;----------------------
	/* mov	al,OBJ_ANIM_FLAGS[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* mov	ObjAnimFlags,al */
	objanimflags = al;
	// 0 ;-----------------------------------
	// 0 ;* rotate object grid (if necessary)
	// 0 ;-----------------------------------
	/* push	bx		;store object data ptr */
	PUSH(bx);
	// 0 ;* check if heading, pitch and roll match previously rotated grid
	/* mov	ax,OBJ_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* cmp	ax,RGridHdg */
	CMP(ax, rgridhdg);
	/* jne	ContRotate2 */
	if ((dw)(ax) != (dw)(rgridhdg)) {goto controtate2;}
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* cmp	ax,RGridPitch */
	CMP(ax, rgridpitch);
	/* jne	ContRotate2 */
	if ((dw)(ax) != (dw)(rgridpitch)) {goto controtate2;}
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* cmp	ax,RGridRoll */
	CMP(ax, rgridroll);
	/* jne	ContRotate2 */
	if ((dw)(ax) != (dw)(rgridroll)) {goto controtate2;}
	// 0 ;* check if previously rotated grid is large enough to use
	/* cmp	di,XGridSize	;x grid size ok? */
	CMP(di, xgridsize);
	/* ja	ContRotate2	;no -> */
	if ((dw)(di) > (dw)(xgridsize)) {goto controtate2;}
	/* cmp	dx,YGridSize	;y grid size ok? */
	CMP(dx, ygridsize);
	/* ja	ContRotate2	;no -> */
	if ((dw)(dx) > (dw)(ygridsize)) {goto controtate2;}
	/* cmp	bp,ZGridSize	;z grid size ok? */
	CMP(bp, zgridsize);
	/* jbe	SkipRotate2	;yes -> */
	if ((dw)(bp) <= (dw)(zgridsize)) {goto skiprotate2;}
controtate2:
	// 4399 
	/* ContRotate2:	mov	XGridSize,di */
	xgridsize = di;
	/* mov	YGridSize,dx */
	ygridsize = dx;
	/* mov	ZGridSize,bp */
	zgridsize = bp;
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	RGridRoll,ax */
	rgridroll = ax;
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	RGridPitch,ax */
	rgridpitch = ax;
	/* mov	ax,OBJ_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	RGridHdg,ax */
	rgridhdg = ax;
	/* push	si */
	PUSH(si);
	/* call	CalcBFactors	;skew */
	CALL(calcbfactors, 0);
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* call	CalcCFactors	;pitch */
	CALL(calccfactors, 0);
	/* call	CalcRotateGrid2 */
	CALL(calcrotategrid2, 0);
skiprotate2:
	// 4401 
	/* SkipRotate2:	pop	si		;restore object data ptr */
	POP(si);
	/* add	si,OBJ_HDR_SIZE	;skip header data */
	ADD(si, 14);
	// 0 ;------------------------------------------------
	// 0 ;* scan vertex list and calculate eye co-ord data
	// 0 ;------------------------------------------------
	/* mov	ax,MOBOBJ1 */
	ax = seg_offset(mobobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	ScanVertexList2 */
	CALL(scanvertexlist2, 0);
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
	/* jc	ExitMobObject2	;object non-visible -> */
	if (CF) {goto exitmobobject2;}
	// 0 ;-----------------------------------------------------
	// 0 ;* copy face data from MOBOBJ1 segment to DATA segment
	// 0 ;-----------------------------------------------------
	/* mov	ax,MOBOBJ1 */
	ax = seg_offset(mobobj1);
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
	// 1088 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1090 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1091 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1092 rep	movsb
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
exitmobobject2:
	// 4403 
	/* ExitMobObject2:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
drawmobobject3:
	// 1117 
	/* mov	DrawRecover,sp	;recover stack to here if error */
	drawrecover = sp;
	// 0 ;----------------------------------
	// 0 ;* calc max(abs(x), abs(y), abs(z))
	// 0 ;----------------------------------
edummylabel3:
	// 4405 
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
	/* jae	SkipSort1_3	;yes -> */
	if ((dw)(ax) >= (dw)(bx)) {goto skipsort1_3;}
	/* mov	ax,bx */
	ax = bx;
skipsort1_3:
	// 4407 
	/* SkipSort1_3:	cmp	ax,cx		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, cx);
	/* jae	SkipSort2_3	;yes -> */
	if ((dw)(ax) >= (dw)(cx)) {goto skipsort2_3;}
	/* mov	ax,cx */
	ax = cx;
skipsort2_3:
	// 4409 
	/* SkipSort2_3:	mov	dx,ax		;dx = max(abs(x), abs(y), abs(z)) */
	dx = ax;
	// 0 ;-------------------------------------
	// 0 ;* fetch pointer to mobile object data
	// 0 ;-------------------------------------
	/* mov	bl,OBJ_NUM[si] */
	bl = m2c::getdata(((objectdata*)raddr(ds,si))->obj_num);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	ax,MobileTable[bx] */
	ax = *(dw*)(((db*)&mobiletable)+bx);
	// 0 ;-------------------------------------------------------------------------
	// 0 ;* test if object is in range, if not, move to next approximation (if any)
	// 0 ;-------------------------------------------------------------------------
	/* mov	bp,MOBOBJ1 */
	bp = seg_offset(mobobj1);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
approxloop3:
	// 4411 
	/* ApproxLoop3:	mov	bx,ax		;bx -> object data */
	bx = ax;
	/* cmp	dx,OBJ_HDR_RANGE[bx] */
	CMP(dx, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)));
	/* jb	SortPosition3	;in range -> */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_range)))) {goto sortposition3;}
	/* mov	ax,OBJ_HDR_PTR[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ptr)));
	/* cmp	ax,-1		;any more approximations? */
	CMP(ax, -1);
	/* jne	ApproxLoop3	;yes -> */
	if ((dw)(ax) != (dw)(-1)) {goto approxloop3;}
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
	/* jz	ExitLink3	;pixel approximation disabled -> */
	if (!(ah & 0x1)) {goto exitlink3;}
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
	/* jc	ExitLink3	;non-visible -> */
	if (CF) {goto exitlink3;}
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitlink3:
	// 4413 
	/* ExitLink3:	jmp	ExitMobObject3 */
	goto exitmobobject3;
	// 0 ;-------------------------------------
	// 0 ;* sort object position wrt scale mode
	// 0 ;-------------------------------------
sortposition3:
	// 4415 
	/* SortPosition3:	mov	di,OBJ_HDR_SCALE[bx] */
	di = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,OBJ_HDR_XGRID[bx] */
	cx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,OBJ_HDR_YGRID[bx] */
	dx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	bp,OBJ_HDR_ZGRID[bx] */
	bp = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	di,CalcObjectPos[di] */
	di = *(dw*)(((db*)&calcobjectpos)+di);
	/* xchg	cx,di */
	XCHG(cx, di);
	/* mov	ax,OBJ_XPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_xpos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	XPos,ax */
	xpos = ax;
	/* mov	ax,OBJ_YPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_ypos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	YPos,ax */
	ypos = ax;
	/* mov	ax,OBJ_ZPOS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_zpos)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	ZPos,ax */
	zpos = ax;
	// 0 ;----------------------
	// 0 ;* sort animation flags
	// 0 ;----------------------
	/* mov	al,OBJ_ANIM_FLAGS[si] */
	al = m2c::getdata(((objectdata*)raddr(ds,si))->obj_userb1);
	/* mov	ObjAnimFlags,al */
	objanimflags = al;
	// 0 ;-----------------------------------
	// 0 ;* rotate object grid (if necessary)
	// 0 ;-----------------------------------
	/* push	bx		;store object data ptr */
	PUSH(bx);
	// 0 ;* check if heading, pitch and roll match previously rotated grid
	/* mov	ax,OBJ_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* cmp	ax,RGridHdg */
	CMP(ax, rgridhdg);
	/* jne	ContRotate3 */
	if ((dw)(ax) != (dw)(rgridhdg)) {goto controtate3;}
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* cmp	ax,RGridPitch */
	CMP(ax, rgridpitch);
	/* jne	ContRotate3 */
	if ((dw)(ax) != (dw)(rgridpitch)) {goto controtate3;}
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* cmp	ax,RGridRoll */
	CMP(ax, rgridroll);
	/* jne	ContRotate3 */
	if ((dw)(ax) != (dw)(rgridroll)) {goto controtate3;}
	// 0 ;* check if previously rotated grid is large enough to use
	/* cmp	di,XGridSize	;x grid size ok? */
	CMP(di, xgridsize);
	/* ja	ContRotate3	;no -> */
	if ((dw)(di) > (dw)(xgridsize)) {goto controtate3;}
	/* cmp	dx,YGridSize	;y grid size ok? */
	CMP(dx, ygridsize);
	/* ja	ContRotate3	;no -> */
	if ((dw)(dx) > (dw)(ygridsize)) {goto controtate3;}
	/* cmp	bp,ZGridSize	;z grid size ok? */
	CMP(bp, zgridsize);
	/* jbe	SkipRotate3	;yes -> */
	if ((dw)(bp) <= (dw)(zgridsize)) {goto skiprotate3;}
controtate3:
	// 4417 
	/* ContRotate3:	mov	XGridSize,di */
	xgridsize = di;
	/* mov	YGridSize,dx */
	ygridsize = dx;
	/* mov	ZGridSize,bp */
	zgridsize = bp;
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* mov	RGridRoll,ax */
	rgridroll = ax;
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* mov	RGridPitch,ax */
	rgridpitch = ax;
	/* mov	ax,OBJ_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw1)));
	/* mov	RGridHdg,ax */
	rgridhdg = ax;
	/* push	si */
	PUSH(si);
	/* call	CalcBFactors	;skew */
	CALL(calcbfactors, 0);
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw2)));
	/* push	si */
	PUSH(si);
	/* call	CalcCFactors	;pitch */
	CALL(calccfactors, 0);
	/* pop	si */
	POP(si);
	/* mov	ax,OBJ_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectdata*)raddr(ds,si))->obj_userw3)));
	/* call	CalcDFactors	;roll */
	CALL(calcdfactors, 0);
	/* call	CalcRotateGrid3 */
	CALL(calcrotategrid3, 0);
skiprotate3:
	// 4419 
	/* SkipRotate3:	pop	si		;restore object data ptr */
	POP(si);
	/* add	si,OBJ_HDR_SIZE	;skip header data */
	ADD(si, 14);
	// 0 ;------------------------------------------------
	// 0 ;* scan vertex list and calculate eye co-ord data
	// 0 ;------------------------------------------------
	/* mov	ax,MOBOBJ1 */
	ax = seg_offset(mobobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	ScanVertexList3 */
	CALL(scanvertexlist3, 0);
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
	/* jc	ExitMobObject3	;object non-visible -> */
	if (CF) {goto exitmobobject3;}
	// 0 ;-----------------------------------------------------
	// 0 ;* copy face data from MOBOBJ1 segment to DATA segment
	// 0 ;-----------------------------------------------------
	/* mov	ax,MOBOBJ1 */
	ax = seg_offset(mobobj1);
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
	// 1289 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1291 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1292 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1293 rep	movsb
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
exitmobobject3:
	// 4421 
	/* ExitMobObject3:	clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
scanvertexlist1:
	// 1321 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel4:
	// 4423 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
scanvertexloop1:
	// 4425 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitScanVertex1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitscanvertex1;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,R_XGX[bx]	;R_XGX */
	cx = *(dw*)(((db*)&r_xgx)+bx);
	/* mov	dx,R_YGX[bx]	;R_YGX */
	dx = *(dw*)(((db*)&r_ygx)+bx);
	/* mov	bp,R_ZGX[bx]	;R_ZGX */
	bp = *(dw*)(((db*)&r_zgx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,R_XGY[bx]	;R_XGX + R_XGY */
	ADD(cx, *(dw*)(((db*)&r_xgy)+bx));
	/* add	dx,R_YGY[bx]	;R_YGX + R_YGY */
	ADD(dx, *(dw*)(((db*)&r_ygy)+bx));
	/* add	bp,R_ZGY[bx]	;R_ZGX + R_ZGY */
	ADD(bp, *(dw*)(((db*)&r_zgy)+bx));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch z index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XGZ[bx]	;R_XGX + R_XGY + XGZ */
	ADD(cx, *(dw*)(((db*)&xgz)+bx));
	/* add	dx,YGZ[bx]	;R_YGX + R_YGY + YGZ */
	ADD(dx, *(dw*)(((db*)&ygz)+bx));
	/* add	bp,ZGZ[bx]	;R_ZGX + R_ZGY + ZGZ */
	ADD(bp, *(dw*)(((db*)&zgz)+bx));
	/* add	cx,XPos		;XPos + R_XGX + R_XGY + XGZ */
	ADD(cx, xpos);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos		;YPos + R_YGX + R_YGY + YGZ */
	ADD(dx, ypos);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos		;ZPos + R_ZGX + R_ZGY + ZGZ */
	ADD(bp, zpos);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	ScanVertexLoop1 */
	goto scanvertexloop1;
exitscanvertex1:
	// 4427 
	/* ExitScanVertex1:sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertexlist2:
	// 1372 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel5:
	// 4429 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
scanvertexloop2:
	// 4431 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitScanVertex2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitscanvertex2;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,R_XGX[bx]	;R_XGX */
	cx = *(dw*)(((db*)&r_xgx)+bx);
	/* mov	dx,R_YGX[bx]	;R_YGX */
	dx = *(dw*)(((db*)&r_ygx)+bx);
	/* mov	bp,R_ZGX[bx]	;R_ZGX */
	bp = *(dw*)(((db*)&r_zgx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,R_XGY[bx]	;R_XGX + R_XGY */
	ADD(cx, *(dw*)(((db*)&r_xgy)+bx));
	/* add	dx,R_YGY[bx]	;R_YGX + R_YGY */
	ADD(dx, *(dw*)(((db*)&r_ygy)+bx));
	/* add	bp,R_ZGY[bx]	;R_ZGX + R_ZGY */
	ADD(bp, *(dw*)(((db*)&r_zgy)+bx));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch z index
	/* mov	bl,al */
	bl = al;
	/* add	cx,R_XGZ[bx]	;R_XGX + R_XGY + R_XGZ */
	ADD(cx, *(dw*)(((db*)&r_xgz)+bx));
	/* add	dx,R_YGZ[bx]	;R_YGX + R_YGY + R_YGZ */
	ADD(dx, *(dw*)(((db*)&r_ygz)+bx));
	/* add	bp,R_ZGZ[bx]	;R_ZGX + R_ZGY + R_ZGZ */
	ADD(bp, *(dw*)(((db*)&r_zgz)+bx));
	/* add	cx,XPos		;XPos + R_XGX + R_XGY + R_XGZ */
	ADD(cx, xpos);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos		;YPos + R_YGX + R_YGY + R_YGZ */
	ADD(dx, ypos);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos		;ZPos + R_ZGX + R_ZGY + R_ZGZ */
	ADD(bp, zpos);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	ScanVertexLoop2 */
	goto scanvertexloop2;
exitscanvertex2:
	// 4433 
	/* ExitScanVertex2:sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertexlist3:
	// 1423 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel6:
	// 4435 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
scanvertexloop3:
	// 4437 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitScanVertex3	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitscanvertex3;}
	/* mov	bl,al */
	bl = al;
	/* mov	cx,R_XGX[bx]	;R_XGX */
	cx = *(dw*)(((db*)&r_xgx)+bx);
	/* mov	dx,R_YGX[bx]	;R_YGX */
	dx = *(dw*)(((db*)&r_ygx)+bx);
	/* mov	bp,R_ZGX[bx]	;R_ZGX */
	bp = *(dw*)(((db*)&r_zgx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,R_XGY[bx]	;R_XGX + R_XGY */
	ADD(cx, *(dw*)(((db*)&r_xgy)+bx));
	/* add	dx,R_YGY[bx]	;R_YGX + R_YGY */
	ADD(dx, *(dw*)(((db*)&r_ygy)+bx));
	/* add	bp,R_ZGY[bx]	;R_ZGX + R_ZGY */
	ADD(bp, *(dw*)(((db*)&r_zgy)+bx));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch z index
	/* mov	bl,al */
	bl = al;
	/* add	cx,R_XGZ[bx]	;R_XGX + R_XGY + R_XGZ */
	ADD(cx, *(dw*)(((db*)&r_xgz)+bx));
	/* add	dx,R_YGZ[bx]	;R_YGX + R_YGY + R_YGZ */
	ADD(dx, *(dw*)(((db*)&r_ygz)+bx));
	/* add	bp,R_ZGZ[bx]	;R_ZGX + R_ZGY + R_ZGZ */
	ADD(bp, *(dw*)(((db*)&r_zgz)+bx));
	/* add	cx,XPos		;XPos + R_XGX + R_XGY + R_XGZ */
	ADD(cx, xpos);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos		;YPos + R_YGX + R_YGY + R_YGZ */
	ADD(dx, ypos);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos		;ZPos + R_ZGX + R_ZGY + R_ZGZ */
	ADD(bp, zpos);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	ScanVertexLoop3 */
	goto scanvertexloop3;
exitscanvertex3:
	// 4439 
	/* ExitScanVertex3:sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
calcmobmaxdim:
	// 1470 
	// 0 ;* sort ptr to object header
edummylabel7:
	// 4441 
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1	;*2 word index */
	SHL(bx, 1);
	/* mov	bx,MobileTable[bx] */
	bx = *(dw*)(((db*)&mobiletable)+bx);
	/* mov	dx,MOBOBJ1 */
	dx = seg_offset(mobobj1);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	// 0 ;* max dimension = max(xgrid, ygrid, zgrid) * scale
	/* mov	ax,OBJ_HDR_XGRID[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* cmp	ax,OBJ_HDR_YGRID[bx] */
	CMP(ax, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* jae	@F */
	if ((dw)(ax) >= (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)))) {goto dummylabel1;}
	/* mov	ax,OBJ_HDR_YGRID[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
dummylabel1:
	// 4443 
	/* @@:		cmp	ax,OBJ_HDR_ZGRID[bx] */
	CMP(ax, *(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* jae	@F */
	if ((dw)(ax) >= (dw)(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)))) {goto dummylabel2;}
	/* mov	ax,OBJ_HDR_ZGRID[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
dummylabel2:
	// 4445 
	/* @@:		mov	bx,OBJ_HDR_SCALE[bx] */
	bx = m2c::getdata(*(dw*)(((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	cl,ObjScaleConvert[bx] */
	cl = *((&objscaleconvert)+bx);
	/* shl	ax,cl */
	SHL(ax, cl);
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
                case m2c::kapproxloop1: 	goto approxloop1;
        case m2c::kapproxloop2: 	goto approxloop2;
        case m2c::kapproxloop3: 	goto approxloop3;
        case m2c::kcalcmobmaxdim: 	goto calcmobmaxdim;
        case m2c::kcontrotate1: 	goto controtate1;
        case m2c::kcontrotate2: 	goto controtate2;
        case m2c::kcontrotate3: 	goto controtate3;
        case m2c::kdrawmobobject1: 	goto drawmobobject1;
        case m2c::kdrawmobobject2: 	goto drawmobobject2;
        case m2c::kdrawmobobject3: 	goto drawmobobject3;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kexitlink1: 	goto exitlink1;
        case m2c::kexitlink2: 	goto exitlink2;
        case m2c::kexitlink3: 	goto exitlink3;
        case m2c::kexitmobobject1: 	goto exitmobobject1;
        case m2c::kexitmobobject2: 	goto exitmobobject2;
        case m2c::kexitmobobject3: 	goto exitmobobject3;
        case m2c::kexitscanvertex1: 	goto exitscanvertex1;
        case m2c::kexitscanvertex2: 	goto exitscanvertex2;
        case m2c::kexitscanvertex3: 	goto exitscanvertex3;
        case m2c::kscanvertexlist1: 	goto scanvertexlist1;
        case m2c::kscanvertexlist2: 	goto scanvertexlist2;
        case m2c::kscanvertexlist3: 	goto scanvertexlist3;
        case m2c::kscanvertexloop1: 	goto scanvertexloop1;
        case m2c::kscanvertexloop2: 	goto scanvertexloop2;
        case m2c::kscanvertexloop3: 	goto scanvertexloop3;
        case m2c::kskiprotate1: 	goto skiprotate1;
        case m2c::kskiprotate2: 	goto skiprotate2;
        case m2c::kskiprotate3: 	goto skiprotate3;
        case m2c::kskipsort1_1: 	goto skipsort1_1;
        case m2c::kskipsort1_2: 	goto skipsort1_2;
        case m2c::kskipsort1_3: 	goto skipsort1_3;
        case m2c::kskipsort2_1: 	goto skipsort2_1;
        case m2c::kskipsort2_2: 	goto skipsort2_2;
        case m2c::kskipsort2_3: 	goto skipsort2_3;
        case m2c::ksortposition1: 	goto sortposition1;
        case m2c::ksortposition2: 	goto sortposition2;
        case m2c::ksortposition3: 	goto sortposition3;
        default: return __dispatch_call(__disp, _state);
    };
}


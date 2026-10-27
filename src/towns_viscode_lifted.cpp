/* THIS IS GENERATED FILE */

        
#include "towns.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawtown:
	// 1637 
	// 0 ;* sort ptr to town data
edummylabel1:
	// 4369 
	/* mov	bl,al */
	bl = al;
	/* sub	bl,TOWN_1 */
	SUB(bl, town_1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* mov	si,TownTable[bx] */
	si = *(dw*)(((db*)&towntable)+bx);
	// 0 ;* do not draw towns in SEC_SCALE16 visual
	/* mov	ax,SctrScaleMode */
	ax = sctrscalemode;
	/* cmp	ax,SEC_SCALE16 */
	CMP(ax, 6);
	/* je	ExitTowns */
	if ((dw)(ax) == (dw)(6)) {goto exittowns;}
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* draw as lines or polygons (polygons if SEC_SCALE1 and zft < Z_APPROX_THRES)?
	/* cmp	ax,SEC_SCALE1 */
	CMP(ax, 0);
	/* jne	ContLines */
	if ((dw)(ax) != (dw)(0)) {goto contlines;}
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&v_view+vp_zft_hi));
	/* test	ax,ax */
	TEST(ax, ax);
	/* jnz	ContLines */
	if ((ax & ax) != 0) {goto contlines;}
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* cmp	ax,Z_APPROX_THRES */
	CMP(ax, 2048);
	/* jb	ContPolys */
	if ((dw)(ax) < (dw)(2048)) {goto contpolys;}
	// 0 ;---------------------
	// 0 ;* draw towns as lines
	// 0 ;---------------------
contlines:
	// 4371 
	/* ContLines:	mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* scan vertex list and calculate eye co-ord data wrt sector scale mode
	/* call	ScanVertexList[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&scanvertexlist)+bx));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* test if town is visible
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitTowns	;town non-visible -> */
	if (CF) {goto exittowns;}
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to even face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1689 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1691 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1692 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1693 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* generate faces
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextlineface:
	// 4373 
	/* NextLineFace:	lodsb		    	;fetch logical colour */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	ExitTowns	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exittowns;}
	/* mov	Col1,al */
	col1 = al;
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	NextLineFace	;lines non-visible -> */
	if (CF) {goto nextlineface;}
	/* push	si */
	PUSH(si);
	/* mov	al,Col1 */
	al = col1;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyLine */
	CALLF(polyline, 0);
	/* pop	si */
	POP(si);
	/* jmp	NextLineFace */
	goto nextlineface;
exittowns:
	// 4375 
	/* ExitTowns:	ret */
	RETN(0);
	// 0 ;------------------------
	// 0 ;* draw towns as polygons
	// 0 ;------------------------
contpolys:
	// 4377 
	/* ContPolys:	mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* scan vertex list and calculate eye co-ord data
	/* call	MakeVertex1 */
	CALL(makevertex1, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* test if town is visible
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitTowns	;town non-visible -> */
	if (CF) {goto exittowns;}
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to even face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1741 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1743 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1744 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1745 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* generate faces
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextpolyface:
	// 4379 
	/* NextPolyFace:	lodsb		    	;fetch logical colour */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	ExitTowns	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exittowns;}
	/* mov	Col1,al */
	col1 = al;
	/* lodsb			;fetch first vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	NextPolyFace	;yes -> */
	if ((db)(al) == (db)(-1)) {goto nextpolyface;}
	/* shl	al,1	  	;index * 2 for lh end point */
	SHL(al, 1);
	/* mov	RoadPoly[0],al */
	*((roadpoly)+0) = al;
	/* add	al,2		;index + 2 for rh end point */
	ADD(al, 2);
	/* mov	RoadPoly[3],al */
	*((roadpoly)+3) = al;
nextpoly:
	// 4381 
	/* NextPoly:	lodsb			;fetch next vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	NextPolyFace	;yes -> */
	if ((db)(al) == (db)(-1)) {goto nextpolyface;}
	/* shl	al,1	  	;index * 2 for lh end point */
	SHL(al, 1);
	/* mov	RoadPoly[1],al */
	*((roadpoly)+1) = al;
	/* add	al,2		;index + 2 for rh end point */
	ADD(al, 2);
	/* mov	RoadPoly[2],al */
	*((roadpoly)+2) = al;
	/* push	si   		;store face list ptr */
	PUSH(si);
	/* mov	si,OFFSET RoadPoly */
	si = m2c::near_offset_external(roadpoly);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	SkipPoly	;poly non-visible -> */
	if (CF) {goto skippoly;}
	/* mov	al,Col1 */
	al = col1;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
skippoly:
	// 4383 
	/* SkipPoly:	pop	si		;restore face list ptr */
	POP(si);
	/* mov	al,RoadPoly[1]	;next road shares previous points */
	al = *((roadpoly)+1);
	/* mov	RoadPoly[0],al */
	*((roadpoly)+0) = al;
	/* mov	al,RoadPoly[2] */
	al = *((roadpoly)+2);
	/* mov	RoadPoly[3],al */
	*((roadpoly)+3) = al;
	/* jmp	NextPoly */
	goto nextpoly;
scanvertex1:
	// 1794 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel2:
	// 4385 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
vertexloop1:
	// 4387 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex1;}
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* add	cx,XPos1	;XPos1 + XSX + XSY */
	ADD(cx, xpos1);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos1	;YPos1 + YSX + YSY */
	ADD(dx, ypos1);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(bp, zpos1);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
exitvertex1:
	// 4389 
	/* ExitVertex1:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex2:
	// 1839 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel3:
	// 4391 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
vertexloop2:
	// 4393 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex2;}
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* sar	cx,1		;/2 scaling */
	SAR(cx, 1);
	/* add	cx,XPos2	;XPos2 + XSX + XSY */
	ADD(cx, xpos2);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1		;/2 scaling */
	SAR(dx, 1);
	/* add	dx,YPos2	;YPos2 + YSX + YSY */
	ADD(dx, ypos2);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1		;/2 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos2	;ZPos2 + ZSX + ZSY */
	ADD(bp, zpos2);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop2 */
	goto vertexloop2;
exitvertex2:
	// 4395 
	/* ExitVertex2:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex8:
	// 1887 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel4:
	// 4397 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
vertexloop8:
	// 4399 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex8	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex8;}
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1		;/8 scaling */
	SAR(cx, 1);
	/* add	cx,XPos8	;XPos8 + XSX + XSY */
	ADD(cx, xpos8);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1		;/8 scaling */
	SAR(dx, 1);
	/* add	dx,YPos8	;YPos8 + YSX + YSY */
	ADD(dx, ypos8);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;/8 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos8	;ZPos8 + ZSX + ZSY */
	ADD(bp, zpos8);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop8 */
	goto vertexloop8;
exitvertex8:
	// 4401 
	/* ExitVertex8:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
viscode_9_proc:
	// 1941 
exitmakevert1:
	// 4403 
	// 0 ;* kill: ax, bx, cx, dx, bp, flags
	/* sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
makevertex1:
	// 1944 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel5:
	// 4405 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
makevertloop1:
	// 4407 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitMakeVert1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitmakevert1;}
	/* mov	bl,al */
	bl = al;
	/* push	bx		;store end type index */
	PUSH(bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XSX[bx]	;XSX */
	cx = *(dw*)(((db*)&xsx)+bx);
	/* mov	dx,YSX[bx]	;YSX */
	dx = *(dw*)(((db*)&ysx)+bx);
	/* mov	bp,ZSX[bx]	;ZSX */
	bp = *(dw*)(((db*)&zsx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* mov	bl,al */
	bl = al;
	/* add	cx,XSY[bx]	;XSX + XSY */
	ADD(cx, *(dw*)(((db*)&xsy)+bx));
	/* add	dx,YSY[bx]	;YSX + YSY */
	ADD(dx, *(dw*)(((db*)&ysy)+bx));
	/* add	bp,ZSY[bx]	;ZSX + ZSY */
	ADD(bp, *(dw*)(((db*)&zsy)+bx));
	/* add	cx,XPos1	;XPos1 + XSX + XSY */
	ADD(cx, xpos1);
	/* add	dx,YPos1	;YPos1 + YSX + YSY */
	ADD(dx, ypos1);
	/* add	bp,ZPos1	;ZPos1 + ZSX + ZSY */
	ADD(bp, zpos1);
	/* mov	bx,dx */
	bx = dx;
	// 0 ;* calc max(abs(x), abs(y), abs(z))
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	ax,bp */
	ax = bp;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	di,ax		;di = abs(z) */
	di = ax;
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	si,ax		;si = abs(y) */
	si = ax;
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x)
	/* cmp	ax,si		;abs(x) >= abs(y)? */
	CMP(ax, si);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(si)) {goto dummylabel1;}
	/* mov	ax,si */
	ax = si;
dummylabel1:
	// 4409 
	/* @@:		cmp	ax,di		;max(abs(x), abs(y)) >= abs(z)? */
	CMP(ax, di);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(di)) {goto dummylabel2;}
	/* mov	ax,di */
	ax = di;
dummylabel2:
	// 4411 
	/* @@:		pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* mov	dx,cx */
	dx = cx;
	// 0 ;* calc scaling mode wrt distance (see RAILWAYS.ASM for 3D Euclidian distance notes)
	/* mov	cx,00004h	;cl = position scale, ch = offset scale */
	cx = 0x00004;
	/* cmp	ax,387		;*16 scaling ok? */
	CMP(ax, 387);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(387)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	/* cmp	ax,774		;*8 scaling ok? */
	CMP(ax, 774);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(774)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	/* cmp	ax,1548		;*4 scaling ok? */
	CMP(ax, 1548);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(1548)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
	/* cmp	ax,3096		;*2 scaling ok? */
	CMP(ax, 3096);
	/* jb	ScaleOk		;yes -> */
	if ((dw)(ax) < (dw)(3096)) {goto scaleok;}
	/* dec	cl */
	DEC(cl);
	/* inc	ch */
	INC(ch);
scaleok:
	// 4413 
	/* ScaleOk:	sal	dx,cl		;scale x pos */
	SAL(dx, cl);
	/* sal	bx,cl  		;scale y pos */
	SAL(bx, cl);
	/* sal	bp,cl		;scale z pos */
	SAL(bp, cl);
	/* mov	XPos,dx */
	xpos = dx;
	/* mov	YPos,bx */
	ypos = bx;
	/* mov	ZPos,bp */
	zpos = bp;
	// 0 ;* calc lh and rh points wrt end type (two co-ords generated for each vertex)
	/* mov	cl,ch		;cl = offset scale */
	cl = ch;
	/* pop	bx		;restore end type index */
	POP(bx);
	/* push	si 		;store vertex list ptr */
	PUSH(si);
	/* push	bx   		;store end type index */
	PUSH(bx);
	/* mov	si,EndType[bx]		;xl */
	si = *(dw*)(((db*)&endtype)+bx);
	/* mov	bx,EndType[bx+2]	;yl */
	bx = *(dw*)(((db*)&endtype)+bx+2);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* sar	ax,cl		;scale x offset */
	SAR(ax, cl);
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* sar	ax,cl		;scale y offset */
	SAR(ax, cl);
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* sar	ax,cl		;scale z offset */
	SAR(ax, cl);
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	bx	 	;restore end type index */
	POP(bx);
	/* add	di,2   		;rh point index */
	ADD(di, 2);
	/* mov	si,EndType[bx+4]	;xr */
	si = *(dw*)(((db*)&endtype)+bx+4);
	/* mov	bx,EndType[bx+6]	;yr */
	bx = *(dw*)(((db*)&endtype)+bx+6);
	/* mov	ax,XGX[si] */
	ax = *(dw*)(((db*)&xgx)+si);
	/* add	ax,XGY[bx] */
	ADD(ax, *(dw*)(((db*)&xgy)+bx));
	/* sar	ax,cl		;scale x offset */
	SAR(ax, cl);
	/* add	ax,XPos */
	ADD(ax, xpos);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,YGX[si] */
	ax = *(dw*)(((db*)&ygx)+si);
	/* add	ax,YGY[bx] */
	ADD(ax, *(dw*)(((db*)&ygy)+bx));
	/* sar	ax,cl		;scale y offset */
	SAR(ax, cl);
	/* add	ax,YPos */
	ADD(ax, ypos);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* mov	ax,ZGX[si] */
	ax = *(dw*)(((db*)&zgx)+si);
	/* add	ax,ZGY[bx] */
	ADD(ax, *(dw*)(((db*)&zgy)+bx));
	/* sar	ax,cl		;scale z offset */
	SAR(ax, cl);
	/* add	ax,ZPos */
	ADD(ax, zpos);
	/* mov	Ze[di],ax */
	*(dw*)(((db*)&ze)+di) = ax;
	/* pop	si		;restore vertex list ptr */
	POP(si);
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	MakeVertLoop1 */
	goto makevertloop1;

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcontlines: 	goto contlines;
        case m2c::kcontpolys: 	goto contpolys;
        case m2c::kdrawtown: 	goto drawtown;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kexitmakevert1: 	goto exitmakevert1;
        case m2c::kexittowns: 	goto exittowns;
        case m2c::kexitvertex1: 	goto exitvertex1;
        case m2c::kexitvertex2: 	goto exitvertex2;
        case m2c::kexitvertex8: 	goto exitvertex8;
        case m2c::kmakevertex1: 	goto makevertex1;
        case m2c::kmakevertloop1: 	goto makevertloop1;
        case m2c::knextlineface: 	goto nextlineface;
        case m2c::knextpoly: 	goto nextpoly;
        case m2c::knextpolyface: 	goto nextpolyface;
        case m2c::kscaleok: 	goto scaleok;
        case m2c::kscanvertex1: 	goto scanvertex1;
        case m2c::kscanvertex2: 	goto scanvertex2;
        case m2c::kscanvertex8: 	goto scanvertex8;
        case m2c::kskippoly: 	goto skippoly;
        case m2c::kvertexloop1: 	goto vertexloop1;
        case m2c::kvertexloop2: 	goto vertexloop2;
        case m2c::kvertexloop8: 	goto vertexloop8;
        case m2c::kviscode_9_proc: 	goto viscode_9_proc;
        default: return __dispatch_call(__disp, _state);
    };
}


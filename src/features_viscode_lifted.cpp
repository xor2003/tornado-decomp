/* THIS IS GENERATED FILE */

        
#include "features_m2c.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
drawrivers:
	// 785 
	/* mov	bp,MapIndex ;* kill: assume all */
	bp = mapindex;
edummylabel1:
	// 4369 
	/* mov	al,RiverLayer1[bp] */
	al = *((&riverlayer1)+bp);
	/* test	al,al		;null river? */
	TEST(al, al);
	/* jz	ExitRivers	;yes -> */
	if (!(al & al)) {goto exitrivers;}
	// 0 ;* fetch pointer to river data
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	si,RiverTable[bx] */
	si = *(dw*)(((db*)&rivertable)+bx);
	/* jmp	IntoFeatures */
	goto intofeatures;
exitrivers:
	// 4371 
	/* ExitRivers:	ret */
	RETN(0);
drawfeatures1:
	// 808 
	/* mov	bp,MapIndex ;* kill: assume all */
	bp = mapindex;
edummylabel2:
	// 4373 
	/* mov	al,FeatureLayer1[bp] */
	al = *((&featurelayer1)+bp);
	/* test	al,al		;null feature? */
	TEST(al, al);
	/* jnz	ContFeatures	;no -> */
	if ((al & al) != 0) {goto contfeatures;}
	/* ret */
	RETN(0);
drawfeatures2:
	// 4375 
	/* test	GndTextEnabled,1	;ground texture enabled? */
	TEST(*(gndtextenabled), 1);
	/* jz	@F			;no -> */
	if (!(*(gndtextenabled) & 1)) {goto dummylabel1;}
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,FeatureLayer2[bp] */
	al = *((&featurelayer2)+bp);
	/* test	al,al		;null feature? */
	TEST(al, al);
	/* jnz	ContFeatures	;no -> */
	if ((al & al) != 0) {goto contfeatures;}
dummylabel1:
	// 4377 
	/* @@:		ret */
	RETN(0);
	// 0 ;* fetch pointer to feature data
contfeatures:
	// 4379 
	/* ContFeatures:	xor	ah,ah */
	XOR(ah, ah);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	si,FeatureTable[bx] */
	si = *(dw*)(((db*)&featuretable)+bx);
	// 0 ;* test if feature is within visual range
intofeatures:
	// 4381 
	/* IntoFeatures:	mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;extra-segment override
	/* lodsw */
	LODS(*(dw*)(raddr(es,si)),si,2);
	// 0 ;fetch max visual range
	/* cmp	ax,SctrScaleMode;within visual range? */
	CMP(ax, sctrscalemode);
	/* jae	InRange		;yes -> */
	if ((dw)(ax) >= (dw)(sctrscalemode)) {goto inrange;}
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* jmp	ExitFeatures */
	goto exitfeatures;
	// 0 ;* scan vertex list and calculate eye co-ord data wrt sector scale mode
inrange:
	// 4383 
	/* InRange:	mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* call	ScanVertexList[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&scanvertexlist)+bx));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* test if feature is visible
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitFeatures	;feature non-visible -> */
	if (CF) {goto exitfeatures;}
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	/* mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si+bx]	;point to face data wrt scale mode */
	si = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 865 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 867 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 868 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 869 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* generate faces
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextface:
	// 4385 
	/* NextFace:	lodsb		    	;fetch attribute */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	ExitFeatures	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitfeatures;}
	// 0 ;* line or polygon structure?
	/* test	al,FACE_STRUCTURE */
	TEST(al, 0x2);
	/* jnz	SortLine */
	if ((al & 0x2) != 0) {goto sortline;}
	// 0 ;* sort polygon structure
	/* lodsb			;fetch logical colour */
	{ LODSB; }
	/* mov	Col1,al */
	col1 = al;
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	NextFace	;polygon non-visible -> */
	if (CF) {goto nextface;}
	/* push	si */
	PUSH(si);
	/* mov	al,Col1 */
	al = col1;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	/* pop	si */
	POP(si);
	/* jmp	NextFace */
	goto nextface;
	// 0 ;* sort line structure
sortline:
	// 4387 
	/* SortLine:   	lodsb			;fetch logical colour */
	{ LODSB; }
	/* mov	Col1,al */
	col1 = al;
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyLineClip */
	CALL(polylineclip, 0);
	/* jc	NextFace	;lines non-visible -> */
	if (CF) {goto nextface;}
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
	/* jmp	NextFace */
	goto nextface;
exitfeatures:
	// 4389 
	/* ExitFeatures:	ret */
	RETN(0);
scanvertex1:
	// 920 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel3:
	// 4391 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
skipvertex1:
	// 4393 
	/* SkipVertex1:	add	si,2 */
	ADD(si, 2);
vertexloop1:
	// 4395 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch vertex flags
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex1	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex1;}
	/* test	al,0001b	;vertex required? */
	TEST(al, 0x1);
	/* jz	SkipVertex1	;no -> */
	if (!(al & 0x1)) {goto skipvertex1;}
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
	// 4397 
	/* ExitVertex1:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex2:
	// 969 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel4:
	// 4399 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop2 */
	goto vertexloop2;
skipvertex2:
	// 4401 
	/* SkipVertex2:	add	si,2 */
	ADD(si, 2);
vertexloop2:
	// 4403 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch vertex flags
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex2;}
	/* test	al,0010b	;vertex required? */
	TEST(al, 0x2);
	/* jz	SkipVertex2	;no -> */
	if (!(al & 0x2)) {goto skipvertex2;}
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
	// 4405 
	/* ExitVertex2:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex8:
	// 1021 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel5:
	// 4407 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop8 */
	goto vertexloop8;
skipvertex8:
	// 4409 
	/* SkipVertex8:	add	si,2 */
	ADD(si, 2);
vertexloop8:
	// 4411 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch vertex flags
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex8	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex8;}
	/* test	al,0100b	;vertex required? */
	TEST(al, 0x4);
	/* jz	SkipVertex8	;no -> */
	if (!(al & 0x4)) {goto skipvertex8;}
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
	// 4413 
	/* ExitVertex8:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex16:
	// 1079 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel6:
	// 4415 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop16 */
	goto vertexloop16;
skipvertex16:
	// 4417 
	/* SkipVertex16:	add	si,2 */
	ADD(si, 2);
vertexloop16:
	// 4419 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch vertex flags
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ExitVertex16	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitvertex16;}
	/* test	al,1000b	;vertex required? */
	TEST(al, 0x8);
	/* jz	SkipVertex16	;no -> */
	if (!(al & 0x8)) {goto skipvertex16;}
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
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1		;/16 scaling */
	SAR(cx, 1);
	/* add	cx,XPos16	;XPos16 + XSX + XSY */
	ADD(cx, xpos16);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1		;/16 scaling */
	SAR(dx, 1);
	/* add	dx,YPos16	;YPos16 + YSX + YSY */
	ADD(dx, ypos16);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;/16 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos16	;ZPos16 + ZSX + ZSY */
	ADD(bp, zpos16);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop16 */
	goto vertexloop16;
exitvertex16:
	// 4421 
	/* ExitVertex16:	sub	di,2		;di indexes last vertex */
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
                case m2c::kcontfeatures: 	goto contfeatures;
        case m2c::kdrawfeatures1: 	goto drawfeatures1;
        case m2c::kdrawfeatures2: 	goto drawfeatures2;
        case m2c::kdrawrivers: 	goto drawrivers;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kexitfeatures: 	goto exitfeatures;
        case m2c::kexitrivers: 	goto exitrivers;
        case m2c::kexitvertex1: 	goto exitvertex1;
        case m2c::kexitvertex16: 	goto exitvertex16;
        case m2c::kexitvertex2: 	goto exitvertex2;
        case m2c::kexitvertex8: 	goto exitvertex8;
        case m2c::kinrange: 	goto inrange;
        case m2c::kintofeatures: 	goto intofeatures;
        case m2c::knextface: 	goto nextface;
        case m2c::kscanvertex1: 	goto scanvertex1;
        case m2c::kscanvertex16: 	goto scanvertex16;
        case m2c::kscanvertex2: 	goto scanvertex2;
        case m2c::kscanvertex8: 	goto scanvertex8;
        case m2c::kskipvertex1: 	goto skipvertex1;
        case m2c::kskipvertex16: 	goto skipvertex16;
        case m2c::kskipvertex2: 	goto skipvertex2;
        case m2c::kskipvertex8: 	goto skipvertex8;
        case m2c::ksortline: 	goto sortline;
        case m2c::kvertexloop1: 	goto vertexloop1;
        case m2c::kvertexloop16: 	goto vertexloop16;
        case m2c::kvertexloop2: 	goto vertexloop2;
        case m2c::kvertexloop8: 	goto vertexloop8;
        default: return __dispatch_call(__disp, _state);
    };
}


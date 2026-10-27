/* THIS IS GENERATED FILE */

        
#include "collide.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
surfacecheck:
	// 1166 
	// 0 ;---------------------
	// 0 ;* initialize position
	// 0 ;---------------------
edummylabel1:
	// 4369 
	/* mov	ax,[si].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	Xft,ax */
	xft = ax;
	/* mov	ax,[si].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	Yft,ax */
	yft = ax;
	/* mov	dx,[si].VP_XSEC */
	dx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	ax,[si].VP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	// 0 ;* is the sector inside active map?
	/* mov	bl,1		;assume outside map */
	bl = 1;
	/* cmp	dx,32		;x sec inside map? */
	CMP(dx, 32);
	/* jae	@F		;no -> */
	if ((dw)(dx) >= (dw)(32)) {goto dummylabel1;}
	/* cmp	ax,32		;y sec inside map? */
	CMP(ax, 32);
	/* jae	@F		;no -> */
	if ((dw)(ax) >= (dw)(32)) {goto dummylabel1;}
	/* xor	bl,bl */
	XOR(bl, bl);
dummylabel1:
	// 4371 
	/* @@:		mov	NoMansLand,bl */
	nomansland = bl;
	// 0 ;* sector wrap around for no mans land
	/* and	dx,MAP_X_WRAP */
	AND(dx, 0x0001f);
	/* and	ax,MAP_Y_WRAP */
	AND(ax, 0x0001f);
	// 0 ;* calc map index = x sec + y sec * 32
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	MapIndex,ax */
	mapindex = ax;
	// 0 ;----------------
	// 0 ;* check surfaces (in priority order)
	// 0 ;----------------
	/* call	CheckRivers */
	CALL(checkrivers, 0);
	/* jc	@F */
	if (CF) {goto dummylabel2;}
	/* call	CheckLakes */
	CALL(checklakes, 0);
	/* jc	@F */
	if (CF) {goto dummylabel2;}
	/* call	CheckRunways */
	CALL(checkrunways, 0);
	/* jc	@F */
	if (CF) {goto dummylabel2;}
	/* call	CheckTaxiways */
	CALL(checktaxiways, 0);
	/* jc	@F */
	if (CF) {goto dummylabel2;}
	/* call	CheckHard */
	CALL(checkhard, 0);
	/* jc	@F */
	if (CF) {goto dummylabel2;}
	/* call	CheckRoads */
	CALL(checkroads, 0);
	/* jc	@F */
	if (CF) {goto dummylabel2;}
	/* call	CheckRailways */
	CALL(checkrailways, 0);
dummylabel2:
	// 4373 
	/* @@:		ret */
	RETF(0);
viscode_0_proc:
	// 1231 
cloudcheck1:
	// 4375 
	// 0 ;* note: Only call if not overcast and clouds enabled.
	/* mov	di,OFFSET CloudLayer1 */
	di = m2c::near_offset_external(cloudlayer1);
	/* jmp	CloudCheck */
	goto cloudcheck;
cloudcheck2:
	// 4377 
	/* mov	di,OFFSET CloudLayer2 */
	di = m2c::near_offset_external(cloudlayer2);
cloudcheck:
	// 1236 
	// 0 ;---------------------
	// 0 ;* initialize position
	// 0 ;---------------------
	/* mov	ax,[si].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	Xft,ax */
	xft = ax;
	/* mov	ax,[si].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	Yft,ax */
	yft = ax;
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	bp,[si].VP_YSEC */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	// 0 ;* sector wrap around for no mans land
	/* and	ax,MAP_X_WRAP */
	AND(ax, 0x0001f);
	/* and	bp,MAP_Y_WRAP */
	AND(bp, 0x0001f);
	// 0 ;* calc map index = x sec + y sec * 32
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;* check for null feature
	/* mov	bl,[bp+di] */
	bl = m2c::getdata(*(raddr(ss,bp+di)));
	/* test	bl,bl	 	;null feature? */
	TEST(bl, bl);
	/* jz	ExitClouds	;yes (cf = 0) -> */
	if (!(bl & bl)) {goto exitclouds;}
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,CloudTable[bx] */
	si = *(dw*)(((db*)&cloudtable)+bx);
	/* mov	NumFaceCols,2 */
	numfacecols = 2;
	/* call	CheckFeature */
	CALL(checkfeature, 0);
	/* mov	NumFaceCols,1 */
	numfacecols = 1;
exitclouds:
	// 4379 
	/* ExitClouds:	ret */
	RETF(0);
checkrivers:
	// 1286 
	/* mov	bp,MapIndex ;* kill: assume all (except ax, cf) */
	bp = mapindex;
edummylabel2:
	// 4381 
	/* mov	bl,RiverLayer1[bp] */
	bl = *((&riverlayer1)+bp);
	/* test	bl,bl	 	;null feature? */
	TEST(bl, bl);
	/* jz	FailRivers	;yes -> */
	if (!(bl & bl)) {goto failrivers;}
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,RiverTable[bx] */
	si = *(dw*)(((db*)&rivertable)+bx);
	/* call	CheckFeature */
	CALL(checkfeature, 0);
	/* jnc	FailRivers */
	if (!CF) {goto failrivers;}
	/* mov	ax,SURFACE_RIVER */
	ax = 12;
	/* ret */
	RETN(0);
failrivers:
	// 4383 
	/* FailRivers:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
checklakes:
	// 1315 
	/* mov	bp,MapIndex ;* kill: assume all (except ax, cf) */
	bp = mapindex;
edummylabel3:
	// 4385 
	/* mov	bl,FeatureLayer1[bp] */
	bl = *((&featurelayer1)+bp);
	/* test	bl,bl	 	;null feature? */
	TEST(bl, bl);
	/* jz	FailLakes	;yes -> */
	if (!(bl & bl)) {goto faillakes;}
	/* cmp	bl,LAKE_FEATURE	;lake? */
	CMP(bl, lake_feature);
	/* ja	FailLakes	;no -> */
	if ((db)(bl) > (db)(lake_feature)) {goto faillakes;}
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,FeatureTable[bx] */
	si = *(dw*)(((db*)&featuretable)+bx);
	/* call	CheckFeature */
	CALL(checkfeature, 0);
	/* jnc	FailLakes */
	if (!CF) {goto faillakes;}
	/* mov	ax,SURFACE_LAKE */
	ax = 14;
	/* ret */
	RETN(0);
faillakes:
	// 4387 
	/* FailLakes:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
checkhard:
	// 1346 
	/* test	NoMansLand,1	;on active map? */
	TEST(nomansland, 1);
edummylabel4:
	// 4389 
	/* jnz	FailHard	;no -> */
	if (!ZF) {goto failhard;}
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	bl,FeatureLayer2[bp] */
	bl = *((&featurelayer2)+bp);
	/* cmp	bl,HARD_FEATURE1	;hardstanding? */
	CMP(bl, hard_feature1);
	/* jb	FailHard		;no -> */
	if ((db)(bl) < (db)(hard_feature1)) {goto failhard;}
	/* cmp	bl,HARD_FEATURE8	;hardstanding? */
	CMP(bl, hard_feature8);
	/* ja	FailHard		;no -> */
	if ((db)(bl) > (db)(hard_feature8)) {goto failhard;}
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,FeatureTable[bx] */
	si = *(dw*)(((db*)&featuretable)+bx);
	/* call	CheckFeature */
	CALL(checkfeature, 0);
	/* jnc	FailHard */
	if (!CF) {goto failhard;}
	/* mov	ax,SURFACE_HARD */
	ax = 6;
	/* ret */
	RETN(0);
failhard:
	// 4391 
	/* FailHard:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
checkfeature:
	// 1378 
	/* add	si,2		;skip visual range data */
	ADD(si, 2);
	// 0 ;------------------
	// 0 ;* scan vertex list (use SEC_SCALE1 vertices)
	// 0 ;------------------
edummylabel5:
	// 4393 
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dl,0001b	;SEC_SCALE1 test mask */
	dl = 0x1;
	/* xor	di,di		;reset index */
	XOR(di, di);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
skipvertex1:
	// 4395 
	/* SkipVertex1:	add	si,2 */
	ADD(si, 2);
vertexloop1:
	// 4397 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch vertex flags
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ContFeatures	;yes -> */
	if ((db)(al) == (db)(-1)) {goto contfeatures;}
	/* test	al,dl		;vertex required? */
	TEST(al, dl);
	/* jz	SkipVertex1	;no -> */
	if (!(al & dl)) {goto skipvertex1;}
	// 0 ;* x val = (v / 2 - 64) * 256
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* shr	al,1 */
	SHR(al, 1);
	/* sub	al,64 */
	SUB(al, 64);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	// 0 ;* y val = (v / 2 - 64) * 256
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* shr	al,1 */
	SHR(al, 1);
	/* sub	al,64 */
	SUB(al, 64);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
contfeatures:
	// 4399 
	/* ContFeatures:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;------------------------------------------------------
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	// 0 ;------------------------------------------------------
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si]		;point to face data (SEC_SCALE1) */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1435 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1437 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1438 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1439 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;--------------------------
	// 0 ;* generate and check faces
	// 0 ;--------------------------
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextface:
	// 4401 
	/* NextFace:	lodsb			;fetch attribute */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	FailFeature	;yes -> */
	if ((db)(al) == (db)(-1)) {goto failfeature;}
	// 0 ;* line or polygon structure?
	/* test	al,FACE_STRUCTURE */
	TEST(al, 0x2);
	/* jnz	SortLine */
	if ((al & 0x2) != 0) {goto sortline;}
	// 0 ;* sort polygon structure
	/* add	si,NumFaceCols	;ignore logical colour(s) */
	ADD(si, numfacecols);
	/* xor	bh,bh		;clear index high byte */
	XOR(bh, bh);
	/* xor	cx,cx		;count = 0 */
	XOR(cx, cx);
	/* xor	di,di		;index = 0 */
	XOR(di, di);
makepolyloop:
	// 4403 
	/* MakePolyLoop:	lodsb */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	@F		;yes -> */
	if ((db)(al) == (db)(-1)) {goto dummylabel3;}
	/* mov	bl,al */
	bl = al;
	/* mov	ax,Xe[bx] */
	ax = *(dw*)(((db*)&xe)+bx);
	/* mov	XCrt[di],ax */
	*(dw*)(((db*)&xcrt)+di) = ax;
	/* mov	ax,Ye[bx] */
	ax = *(dw*)(((db*)&ye)+bx);
	/* mov	WORD PTR YCrt[di],ax */
	*(dw*)((&ycrt)+di) = ax;
	/* inc	cx */
	INC(cx);
	/* add	di,2 */
	ADD(di, 2);
	/* jmp	MakePolyLoop */
	goto makepolyloop;
dummylabel3:
	// 4405 
	/* @@:		cmp	cx,3		;enough vertices for polygon? */
	CMP(cx, 3);
	/* jb	NextFace	;no -> */
	if ((dw)(cx) < (dw)(3)) {goto nextface;}
	/* mov	ax,XCrt[0]	;repeat first co-ord at end */
	ax = *(dw*)(((db*)&xcrt)+0);
	/* mov	XCrt[di],ax */
	*(dw*)(((db*)&xcrt)+di) = ax;
	/* mov	ax,WORD PTR YCrt[0] */
	ax = *(dw*)((&ycrt)+0);
	/* mov	WORD PTR YCrt[di],ax */
	*(dw*)((&ycrt)+di) = ax;
	/* push	si */
	PUSH(si);
	/* call	TestInsideArea */
	CALL(testinsidearea, 0);
	/* pop	si */
	POP(si);
	/* jnc	NextFace	;not in features -> */
	if (!CF) {goto nextface;}
	/* ret			;cf = 1 (in feature) */
	RETN(0);
	// 0 ;* sort line structure (ignore)
sortline:
	// 4407 
	/* SortLine:   	inc	si		;ignore logical colour */
	INC(si);
dummylabel4:
	// 4409 
	/* @@:		lodsb			;wind ptr past line data */
	{ LODSB; }
	/* cmp	al,-1 */
	CMP(al, -1);
	/* jne	@B */
	if ((db)(al) != (db)(-1)) {goto dummylabel4;}
	/* jmp	NextFace */
	goto nextface;
failfeature:
	// 4411 
	/* FailFeature:	clc			;cf = 0 (not in feature) */
	CLC;
	/* ret */
	RETN(0);
checkroads:
	// 1507 
	// 0 ;-------------------------------------
	// 0 ;* sort road layer wrt sector quadrant
	// 0 ;-------------------------------------
edummylabel6:
	// 4413 
	/* mov	ax,Xft */
	ax = xft;
	/* cwd */
	CWD;
	/* mov	cx,dx		;store sign(x) */
	cx = dx;
	/* mov	ax,Yft */
	ax = yft;
	/* cwd */
	CWD;
	/* mov	bx,dx		;store sign(y) */
	bx = dx;
	/* xor	si,si */
	XOR(si, si);
	/* rol	cx,1		;expose sign(x) */
	ROL(cx, 1);
	/* rcl	si,1		;pick up sign(x) */
	RCL(si, 1);
	/* rol	bx,1		;expose sign(y) */
	ROL(bx, 1);
	/* rcl	si,1		;pick up sign(x) */
	RCL(si, 1);
	/* shl	si,1		;*2 word index */
	SHL(si, 1);
	/* mov	bp,RoadQuad[si]	;si -> road layer wrt sector quadrant */
	bp = *(dw*)(((db*)&roadquad)+si);
	/* mov	si,MapIndex */
	si = mapindex;
	/* mov	al,[bp+si]	;fetch road node */
	al = m2c::getdata(*(raddr(ss,bp+si)));
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_5_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_5_skip;}
	/* jmp	FailRoad */
	goto failroad;
__m2c_macrolocal_5_skip:
	// 4415 
	// 0 ;yes ->
	// 0 ;-----------------------
	// 0 ;* calc road node centre
	// 0 ;-----------------------
	/* mov	dx,4096		;4096 * sign(x) */
	dx = 4096;
	/* xchg	cx,dx */
	XCHG(cx, dx);
	/* xor	cx,dx */
	XOR(cx, dx);
	/* sub	cx,dx */
	SUB(cx, dx);
	/* mov	dx,4096		;4096 * sign(y) */
	dx = 4096;
	/* xchg	bx,dx */
	XCHG(bx, dx);
	/* xor	bx,dx */
	XOR(bx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	// 0 ;----------------
	// 0 ;* scan road node
	// 0 ;----------------
	/* xor	si,si		;length index */
	XOR(si, si);
	/* xor	di,di		;width index */
	XOR(di, di);
scannextroad:
	// 4417 
	/* ScanNextRoad:	shr	al,1		;road to scan? */
	SHR(al, 1);
	/* jnc	SkipRoad	;no -> */
	if (!CF) {goto skiproad;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* x1, y1
	/* mov	al,RoadWidth[di+0]	;x1 */
	al = *((&roadwidth)+di+0);
	/* cbw */
	CBW;
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	XCrt[0],ax */
	*(dw*)(((db*)&xcrt)+0) = ax;
	/* mov	XCrt[8],ax		;repeat at end */
	*(dw*)(((db*)&xcrt)+8) = ax;
	/* mov	al,RoadWidth[di+1]	;y1 */
	al = *((&roadwidth)+di+1);
	/* cbw */
	CBW;
	/* add	ax,bx */
	ADD(ax, bx);
	/* mov	WORD PTR YCrt[0],ax */
	*(dw*)((&ycrt)+0) = ax;
	/* mov	WORD PTR YCrt[8],ax  	;repeat at end */
	*(dw*)((&ycrt)+8) = ax;
	// 0 ;* x2, y2
	/* mov	al,RoadWidth[di+2]	;x2 */
	al = *((&roadwidth)+di+2);
	/* cbw */
	CBW;
	/* add	ax,RoadLength[si+0] */
	ADD(ax, *(dw*)(((db*)&roadlength)+si+0));
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	XCrt[2],ax */
	*(dw*)(((db*)&xcrt)+2) = ax;
	/* mov	al,RoadWidth[di+3]	;y3 */
	al = *((&roadwidth)+di+3);
	/* cbw */
	CBW;
	/* add	ax,RoadLength[si+2] */
	ADD(ax, *(dw*)(((db*)&roadlength)+si+2));
	/* add	ax,bx */
	ADD(ax, bx);
	/* mov	WORD PTR YCrt[2],ax */
	*(dw*)((&ycrt)+2) = ax;
	// 0 ;* x3, y3
	/* mov	al,RoadWidth[di+4]	;x3 */
	al = *((&roadwidth)+di+4);
	/* cbw */
	CBW;
	/* add	ax,RoadLength[si+0] */
	ADD(ax, *(dw*)(((db*)&roadlength)+si+0));
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	XCrt[4],ax */
	*(dw*)(((db*)&xcrt)+4) = ax;
	/* mov	al,RoadWidth[di+5]	;y3 */
	al = *((&roadwidth)+di+5);
	/* cbw */
	CBW;
	/* add	ax,RoadLength[si+2] */
	ADD(ax, *(dw*)(((db*)&roadlength)+si+2));
	/* add	ax,bx */
	ADD(ax, bx);
	/* mov	WORD PTR YCrt[4],ax */
	*(dw*)((&ycrt)+4) = ax;
	// 0 ;* x4, y4
	/* mov	al,RoadWidth[di+6]	;x4 */
	al = *((&roadwidth)+di+6);
	/* cbw */
	CBW;
	/* add	ax,cx */
	ADD(ax, cx);
	/* mov	XCrt[6],ax */
	*(dw*)(((db*)&xcrt)+6) = ax;
	/* mov	al,RoadWidth[di+7]	;y4 */
	al = *((&roadwidth)+di+7);
	/* cbw */
	CBW;
	/* add	ax,bx */
	ADD(ax, bx);
	/* mov	WORD PTR YCrt[6],ax */
	*(dw*)((&ycrt)+6) = ax;
	/* mov	cx,4 */
	cx = 4;
	/* call	TestInsideArea */
	CALL(testinsidearea, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* jc	PassRoad */
	if (CF) {goto passroad;}
skiproad:
	// 4419 
	/* SkipRoad:	add	si,4		;next road */
	ADD(si, 4);
	/* add	di,8 */
	ADD(di, 8);
	/* test	al,al		;any more roads? */
	TEST(al, al);
	/* jz	__m2c_macrolocal_6_skip */
	if (!(al & al)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	ScanNextRoad */
	goto scannextroad;
__m2c_macrolocal_6_skip:
	// 4421 
	// 0 ;yes ->
failroad:
	// 4423 
	/* FailRoad:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
passroad:
	// 4425 
	/* PassRoad:	mov	ax,SURFACE_ROAD */
	ax = 8;
	/* ret */
	RETN(0);
checkrailways:
	// 1639 
	/* mov	bp,MapIndex ;* note: Refer to RAILWAYS.ASM for data format etc. */
	bp = mapindex;
edummylabel7:
	// 4427 
	/* mov	al,RailLayer1[bp] */
	al = *((&raillayer1)+bp);
	/* test	al,al		;null node? */
	TEST(al, al);
	/* jz	FailRail	;yes -> */
	if (!(al & al)) {goto failrail;}
	// 0 ;----------------
	// 0 ;* scan rail node
	// 0 ;----------------
	/* xor	si,si		;length index */
	XOR(si, si);
	/* xor	di,di		;width index */
	XOR(di, di);
scannextrail:
	// 4429 
	/* ScanNextRail:	shr	al,1		;rail to scan? */
	SHR(al, 1);
	/* jnc	SkipRail	;no -> */
	if (!CF) {goto skiprail;}
	/* push	ax */
	PUSH(ax);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* x1, y1
	/* mov	al,RailWidth[di+0]	;x1 */
	al = *((&railwidth)+di+0);
	/* cbw */
	CBW;
	/* mov	XCrt[0],ax */
	*(dw*)(((db*)&xcrt)+0) = ax;
	/* mov	XCrt[8],ax		;repeat at end */
	*(dw*)(((db*)&xcrt)+8) = ax;
	/* mov	al,RailWidth[di+1]	;y1 */
	al = *((&railwidth)+di+1);
	/* cbw */
	CBW;
	/* mov	WORD PTR YCrt[0],ax */
	*(dw*)((&ycrt)+0) = ax;
	/* mov	WORD PTR YCrt[8],ax  	;repeat at end */
	*(dw*)((&ycrt)+8) = ax;
	// 0 ;* x2, y2
	/* mov	al,RailWidth[di+2]	;x2 */
	al = *((&railwidth)+di+2);
	/* cbw */
	CBW;
	/* add	ax,RailLength[si+0] */
	ADD(ax, *(dw*)(((db*)&raillength)+si+0));
	/* mov	XCrt[2],ax */
	*(dw*)(((db*)&xcrt)+2) = ax;
	/* mov	al,RailWidth[di+3]	;y3 */
	al = *((&railwidth)+di+3);
	/* cbw */
	CBW;
	/* add	ax,RailLength[si+2] */
	ADD(ax, *(dw*)(((db*)&raillength)+si+2));
	/* mov	WORD PTR YCrt[2],ax */
	*(dw*)((&ycrt)+2) = ax;
	// 0 ;* x3, y3
	/* mov	al,RailWidth[di+4]	;x3 */
	al = *((&railwidth)+di+4);
	/* cbw */
	CBW;
	/* add	ax,RailLength[si+0] */
	ADD(ax, *(dw*)(((db*)&raillength)+si+0));
	/* mov	XCrt[4],ax */
	*(dw*)(((db*)&xcrt)+4) = ax;
	/* mov	al,RailWidth[di+5]	;y3 */
	al = *((&railwidth)+di+5);
	/* cbw */
	CBW;
	/* add	ax,RailLength[si+2] */
	ADD(ax, *(dw*)(((db*)&raillength)+si+2));
	/* mov	WORD PTR YCrt[4],ax */
	*(dw*)((&ycrt)+4) = ax;
	// 0 ;* x4, y4
	/* mov	al,RailWidth[di+6]	;x4 */
	al = *((&railwidth)+di+6);
	/* cbw */
	CBW;
	/* mov	XCrt[6],ax */
	*(dw*)(((db*)&xcrt)+6) = ax;
	/* mov	al,RailWidth[di+7]	;y4 */
	al = *((&railwidth)+di+7);
	/* cbw */
	CBW;
	/* mov	WORD PTR YCrt[6],ax */
	*(dw*)((&ycrt)+6) = ax;
	/* mov	cx,4 */
	cx = 4;
	/* call	TestInsideArea */
	CALL(testinsidearea, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	ax */
	POP(ax);
	/* jc	PassRail */
	if (CF) {goto passrail;}
skiprail:
	// 4431 
	/* SkipRail:	add	si,4		;next rail */
	ADD(si, 4);
	/* add	di,8 */
	ADD(di, 8);
	/* test	al,al		;any more rails? */
	TEST(al, al);
	/* jnz	ScanNextRail	;yes -> */
	if ((al & al) != 0) {goto scannextrail;}
failrail:
	// 4433 
	/* FailRail:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
passrail:
	// 4435 
	/* PassRail:	mov	ax,SURFACE_RAILWAY */
	ax = 10;
	/* ret */
	RETN(0);
checkrunways:
	// 1724 
	/* test	NoMansLand,1	;on active map? */
	TEST(nomansland, 1);
edummylabel8:
	// 4437 
	/* jz	__m2c_macrolocal_7_skip */
	if (ZF) {goto __m2c_macrolocal_7_skip;}
	/* jmp	FailRunway */
	goto failrunway;
__m2c_macrolocal_7_skip:
	// 4439 
	// 0 ;no ->
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	bl,SpecialLayer1[bp] */
	bl = *((&speciallayer1)+bp);
	/* cmp	bl,AIRFIELD_1	;airfield? */
	CMP(bl, airfield_1);
	/* jae	__m2c_macrolocal_8_skip */
	if ((db)(bl) >= (db)(airfield_1)) {goto __m2c_macrolocal_8_skip;}
	/* jmp	FailRunway */
	goto failrunway;
__m2c_macrolocal_8_skip:
	// 4441 
	// 0 ;no ->
	/* cmp	bl,AIRFIELD_N	;airfield? */
	CMP(bl, airfield_n);
	/* jbe	__m2c_macrolocal_9_skip */
	if ((db)(bl) <= (db)(airfield_n)) {goto __m2c_macrolocal_9_skip;}
	/* jmp	FailRunway */
	goto failrunway;
__m2c_macrolocal_9_skip:
	// 4443 
	// 0 ;no ->
	/* sub	bl,AIRFIELD_1 */
	SUB(bl, airfield_1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,AirfieldTable[bx]	;si -> runway list */
	si = *(dw*)(((db*)&airfieldtable)+bx);
runwayloop:
	// 4445 
	/* RunwayLoop:	cmp	[si].RWY_DIR,-1		;end of list? */
	CMP(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir)), -1);
	/* jne	__m2c_macrolocal_10_skip */
	if ((dw)(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir))) != (dw)(-1)) {goto __m2c_macrolocal_10_skip;}
	/* jmp	FailRunway */
	goto failrunway;
__m2c_macrolocal_10_skip:
	// 4447 
	// 0 ;yes ->
	/* mov	di,[si].RWY_WIDTH */
	di = m2c::getdata(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_width)));
	/* mov	di,RunwayWidth[di] */
	di = *(dw*)(((db*)&runwaywidth)+di);
	/* add	di,[si].RWY_DIR */
	ADD(di, *((dw*)((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	// 0 ;* end 1
	/* mov	cx,[si].RWY_X1		;    0 .. 64 */
	cx = m2c::getdata(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* sub	cx,32			;  -32 .. 32 */
	SUB(cx, 32);
	/* mov	ch,cl			;-8192 .. 8192 */
	ch = cl;
	/* xor	cl,cl */
	XOR(cl, cl);
	/* mov	bx,[si].RWY_Y1		;    0 .. 64 */
	bx = m2c::getdata(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* sub	bx,32			;  -32 .. 32 */
	SUB(bx, 32);
	/* mov	bh,bl			;-8192 .. 8192 */
	bh = bl;
	/* xor	bl,bl */
	XOR(bl, bl);
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,[di+0]		;x = x1 + xl */
	ADD(ax, *(dw*)(raddr(ds,di+0)));
	/* mov	XCrt[0],ax */
	*(dw*)(((db*)&xcrt)+0) = ax;
	/* mov	XCrt[8],ax		;repeat at end */
	*(dw*)(((db*)&xcrt)+8) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,[di+2]		;y = y1 + yl */
	ADD(ax, *(dw*)(raddr(ds,di+2)));
	/* mov	WORD PTR YCrt[0],ax */
	*(dw*)((&ycrt)+0) = ax;
	/* mov	WORD PTR YCrt[8],ax	;repeat at end */
	*(dw*)((&ycrt)+8) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,[di+4]		;x = x1 + xr */
	ADD(ax, *(dw*)(raddr(ds,di+4)));
	/* mov	XCrt[6],ax */
	*(dw*)(((db*)&xcrt)+6) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,[di+6]		;y = y1 + yr */
	ADD(ax, *(dw*)(raddr(ds,di+6)));
	/* mov	WORD PTR YCrt[6],ax */
	*(dw*)((&ycrt)+6) = ax;
	// 0 ;* end 2
	/* mov	cx,[si].RWY_X2		;    0 .. 64 */
	cx = m2c::getdata(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* sub	cx,32			;  -32 .. 32 */
	SUB(cx, 32);
	/* mov	ch,cl			;-8192 .. 8192 */
	ch = cl;
	/* xor	cl,cl */
	XOR(cl, cl);
	/* mov	bx,[si].RWY_Y2		;    0 .. 64 */
	bx = m2c::getdata(*((dw*)((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* sub	bx,32			;  -32 .. 32 */
	SUB(bx, 32);
	/* mov	bh,bl			;-8192 .. 8192 */
	bh = bl;
	/* xor	bl,bl */
	XOR(bl, bl);
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,[di+0]		;x = x2 + xl */
	ADD(ax, *(dw*)(raddr(ds,di+0)));
	/* mov	XCrt[2],ax */
	*(dw*)(((db*)&xcrt)+2) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,[di+2]		;y = y2 + yl */
	ADD(ax, *(dw*)(raddr(ds,di+2)));
	/* mov	WORD PTR YCrt[2],ax */
	*(dw*)((&ycrt)+2) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,[di+4]		;x = x2 + xr */
	ADD(ax, *(dw*)(raddr(ds,di+4)));
	/* mov	XCrt[4],ax */
	*(dw*)(((db*)&xcrt)+4) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,[di+6]		;y = y2 + yr */
	ADD(ax, *(dw*)(raddr(ds,di+6)));
	/* mov	WORD PTR YCrt[4],ax */
	*(dw*)((&ycrt)+4) = ax;
	/* mov	cx,4 */
	cx = 4;
	/* push	si */
	PUSH(si);
	/* call	TestInsideArea */
	CALL(testinsidearea, 0);
	/* pop	si */
	POP(si);
	/* jc	PassRunway */
	if (CF) {goto passrunway;}
	/* add	si,RWY_REC_SIZE		;next runway */
	ADD(si, 12);
	/* jmp	RunwayLoop */
	goto runwayloop;
failrunway:
	// 4449 
	/* FailRunway:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
passrunway:
	// 4451 
	/* PassRunway:	mov	ax,SURFACE_RUNWAY */
	ax = 2;
	/* ret */
	RETN(0);
checktaxiways:
	// 1829 
	/* test	NoMansLand,1	;on active map? */
	TEST(nomansland, 1);
edummylabel9:
	// 4453 
	/* jz	__m2c_macrolocal_11_skip */
	if (ZF) {goto __m2c_macrolocal_11_skip;}
	/* jmp	FailTaxiway */
	goto failtaxiway;
__m2c_macrolocal_11_skip:
	// 4455 
	// 0 ;no ->
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	bl,SpecialLayer1[bp] */
	bl = *((&speciallayer1)+bp);
	/* cmp	bl,AIRFIELD_1	;airfield? */
	CMP(bl, airfield_1);
	/* jae	__m2c_macrolocal_12_skip */
	if ((db)(bl) >= (db)(airfield_1)) {goto __m2c_macrolocal_12_skip;}
	/* jmp	FailTaxiway */
	goto failtaxiway;
__m2c_macrolocal_12_skip:
	// 4457 
	// 0 ;no ->
	/* cmp	bl,AIRFIELD_N	;airfield? */
	CMP(bl, airfield_n);
	/* jbe	__m2c_macrolocal_13_skip */
	if ((db)(bl) <= (db)(airfield_n)) {goto __m2c_macrolocal_13_skip;}
	/* jmp	FailTaxiway */
	goto failtaxiway;
__m2c_macrolocal_13_skip:
	// 4459 
	// 0 ;no ->
	/* sub	bl,AIRFIELD_1 */
	SUB(bl, airfield_1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,AirfieldTable[bx+2]	;si -> taxiway data */
	si = *(dw*)(((db*)&airfieldtable)+bx+2);
	// 0 ;------------------------------------
	// 0 ;* scan vertex list and make vertices
	// 0 ;------------------------------------
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;reset co-ord store index */
	XOR(di, di);
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
makevertexloop:
	// 4461 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ContTaxi	;yes -> */
	if ((db)(al) == (db)(-1)) {goto conttaxi;}
	/* mov	bl,al */
	bl = al;
	// 0 ;* x val = (v / 2 - 64) * 256
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x index
	/* shr	al,1 */
	SHR(al, 1);
	/* sub	al,64 */
	SUB(al, 64);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* mov	cx,ax */
	cx = ax;
	// 0 ;* y val = (v / 2 - 64) * 256
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y index
	/* shr	al,1 */
	SHR(al, 1);
	/* sub	al,64 */
	SUB(al, 64);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* mov	dx,ax */
	dx = ax;
	// 0 ;* sort lh co-ord
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,EndType64[bx+0]	;x + xl */
	ADD(ax, *(dw*)(((db*)&endtype64)+bx+0));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,EndType64[bx+2]	;y + yl */
	ADD(ax, *(dw*)(((db*)&endtype64)+bx+2));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* add	di,2 */
	ADD(di, 2);
	// 0 ;* sort rh co-ord
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,EndType64[bx+4]	;x + xr */
	ADD(ax, *(dw*)(((db*)&endtype64)+bx+4));
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,EndType64[bx+6]	;y + yr */
	ADD(ax, *(dw*)(((db*)&endtype64)+bx+6));
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* add	di,2 */
	ADD(di, 2);
	/* jmp	MakeVertexLoop */
	goto makevertexloop;
	// 0 ;------------------------------------------------------
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	// 0 ;------------------------------------------------------
conttaxi:
	// 4463 
	/* ContTaxi:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
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
	// 1921 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1923 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1924 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1925 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;-------------
	// 0 ;* check faces
	// 0 ;-------------
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nexttaxilist:
	// 4465 
	/* NextTaxiList:	lodsb			;fetch logical colour */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	FailTaxiway	;yes -> */
	if ((db)(al) == (db)(-1)) {goto failtaxiway;}
	/* lodsb			;fetch first vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	NextTaxiList	;yes -> */
	if ((db)(al) == (db)(-1)) {goto nexttaxilist;}
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	// 0 ;* lh point
	/* mov	ax,Xe[bx] */
	ax = *(dw*)(((db*)&xe)+bx);
	/* mov	XCrt[0],ax */
	*(dw*)(((db*)&xcrt)+0) = ax;
	/* mov	XCrt[8],ax	;repeat first point at end */
	*(dw*)(((db*)&xcrt)+8) = ax;
	/* mov	ax,Ye[bx] */
	ax = *(dw*)(((db*)&ye)+bx);
	/* mov	WORD PTR YCrt[0],ax */
	*(dw*)((&ycrt)+0) = ax;
	/* mov	WORD PTR YCrt[8],ax	;repeat first point at end */
	*(dw*)((&ycrt)+8) = ax;
	// 0 ;* rh point
	/* mov	ax,Xe[bx+2] */
	ax = *(dw*)(((db*)&xe)+bx+2);
	/* mov	XCrt[6],ax */
	*(dw*)(((db*)&xcrt)+6) = ax;
	/* mov	ax,Ye[bx+2] */
	ax = *(dw*)(((db*)&ye)+bx+2);
	/* mov	WORD PTR YCrt[6],ax */
	*(dw*)((&ycrt)+6) = ax;
nexttaxiface:
	// 4467 
	/* NextTaxiFace:	lodsb			;fetch next vertex index */
	{ LODSB; }
	/* cmp	al,-1		;end of list? */
	CMP(al, -1);
	/* je	NextTaxiList	;yes -> */
	if ((db)(al) == (db)(-1)) {goto nexttaxilist;}
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	// 0 ;* lh point
	/* mov	ax,Xe[bx] */
	ax = *(dw*)(((db*)&xe)+bx);
	/* mov	XCrt[2],ax */
	*(dw*)(((db*)&xcrt)+2) = ax;
	/* mov	ax,Ye[bx] */
	ax = *(dw*)(((db*)&ye)+bx);
	/* mov	WORD PTR YCrt[2],ax */
	*(dw*)((&ycrt)+2) = ax;
	// 0 ;* rh point
	/* mov	ax,Xe[bx+2] */
	ax = *(dw*)(((db*)&xe)+bx+2);
	/* mov	XCrt[4],ax */
	*(dw*)(((db*)&xcrt)+4) = ax;
	/* mov	ax,Ye[bx+2] */
	ax = *(dw*)(((db*)&ye)+bx+2);
	/* mov	WORD PTR YCrt[4],ax */
	*(dw*)((&ycrt)+4) = ax;
	// 0 ;* check taxiway face
	/* mov	cx,4 */
	cx = 4;
	/* push	si */
	PUSH(si);
	/* call	TestInsideArea */
	CALL(testinsidearea, 0);
	/* pop	si */
	POP(si);
	/* jc	PassTaxiway */
	if (CF) {goto passtaxiway;}
	// 0 ;* next taxiway face shares previous points
	// 0 ;* lh point
	/* mov	ax,XCrt[2] */
	ax = *(dw*)(((db*)&xcrt)+2);
	/* mov	XCrt[0],ax */
	*(dw*)(((db*)&xcrt)+0) = ax;
	/* mov	XCrt[8],ax */
	*(dw*)(((db*)&xcrt)+8) = ax;
	/* mov	ax,WORD PTR YCrt[2] */
	ax = *(dw*)((&ycrt)+2);
	/* mov	WORD PTR YCrt[0],ax */
	*(dw*)((&ycrt)+0) = ax;
	/* mov	WORD PTR YCrt[8],ax */
	*(dw*)((&ycrt)+8) = ax;
	// 0 ;* rh point
	/* mov	ax,XCrt[4] */
	ax = *(dw*)(((db*)&xcrt)+4);
	/* mov	XCrt[6],ax */
	*(dw*)(((db*)&xcrt)+6) = ax;
	/* mov	ax,WORD PTR YCrt[4] */
	ax = *(dw*)((&ycrt)+4);
	/* mov	WORD PTR YCrt[6],ax */
	*(dw*)((&ycrt)+6) = ax;
	/* jmp	NextTaxiFace */
	goto nexttaxiface;
failtaxiway:
	// 4469 
	/* FailTaxiway:	mov	ax,SURFACE_UNKNOWN */
	ax = 0;
	/* clc */
	CLC;
	/* ret */
	RETN(0);
passtaxiway:
	// 4471 
	/* PassTaxiway:	mov	ax,SURFACE_TAXIWAY */
	ax = 4;
	/* ret */
	RETN(0);
testinsidearea:
	// 2044 
	/* xor	si,si ;*       result = (Dx2 * Dy1) - (Dx1 * Dy2) */
	XOR(si, si);
cyclicloop:
	// 4473 
	/* CyclicLoop:	mov	ax,XCrt[si]		;x1 */
	ax = *(dw*)(((db*)&xcrt)+si);
	/* mov	bx,WORD PTR YCrt[si]	;y1 */
	bx = *(dw*)((&ycrt)+si);
	/* add	si,2			;next vertex */
	ADD(si, 2);
	/* mov	bp,XCrt[si]		;x2 */
	bp = *(dw*)(((db*)&xcrt)+si);
	/* mov	dx,WORD PTR YCrt[si]	;y2 */
	dx = *(dw*)((&ycrt)+si);
	/* sub	ax,bp		;Dx1 = x1 - x2 */
	SUB(ax, bp);
	/* sub	bx,dx		;Dy1 = y1 - y2 */
	SUB(bx, dx);
	/* sub	bp,Xft		;Dx2 = x2 - x3 */
	SUB(bp, xft);
	/* sub	dx,Yft		;Dy2 = y2 - y3 */
	SUB(dx, yft);
	/* imul	dx		;Dx1 * Dy2 */
	IMUL1_2(dx);
	/* xchg	ax,bp */
	XCHG(ax, bp);
	/* xchg	dx,bx */
	XCHG(dx, bx);
	/* imul	dx		;Dx2 * Dy1 */
	IMUL1_2(dx);
	/* sub	ax,bp		;result = (Dx2 * Dy1) - (Dx1 * Dy2) */
	SUB(ax, bp);
	/* sbb	dx,bx */
	SBB(dx, bx);
	/* js	InsideFail	;not inside (early out) -> */
	if ((short)(dx) < 0) {goto insidefail;}
	/* loop	CyclicLoop */
	LOOP(cyclicloop);
insidepass:
	// 4475 
	/* InsidePass:	stc			;cf = 1 = inside */
	STC;
	/* ret */
	RETN(0);
insidefail:
	// 4477 
	/* InsideFail:	clc			;cf = 0 = outside */
	CLC;
	/* ret */
	RETN(0);
groundcollision:
	// 2079 
	// 0 ;--------------------------------------
	// 0 ;* check zft <= ground object threshold
	// 0 ;--------------------------------------
edummylabel10:
	// 4479 
	/* cmp	WORD PTR [si].VP_ZFT_HI,0 */
	CMP(*((dw*)raddr(ds,si+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_18_skip */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_18_skip;}
	/* jmp	GndOk */
	goto gndok;
__m2c_macrolocal_18_skip:
	// 4481 
	/* cmp	WORD PTR [si].VP_ZFT_LO,512 */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), 512);
	/* jbe	__m2c_macrolocal_19_skip */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) <= (dw)(512)) {goto __m2c_macrolocal_19_skip;}
	/* jmp	GndOk */
	goto gndok;
__m2c_macrolocal_19_skip:
	// 4483 
	// 0 ;---------------------
	// 0 ;* check on active map
	// 0 ;---------------------
	/* cmp	[si].VP_XSEC,31 */
	CMP(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)), 31);
	/* jbe	__m2c_macrolocal_20_skip */
	if ((dw)(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec))) <= (dw)(31)) {goto __m2c_macrolocal_20_skip;}
	/* jmp	GndOk */
	goto gndok;
__m2c_macrolocal_20_skip:
	// 4485 
	/* cmp	[si].VP_YSEC,31 */
	CMP(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)), 31);
	/* jbe	__m2c_macrolocal_21_skip */
	if ((dw)(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec))) <= (dw)(31)) {goto __m2c_macrolocal_21_skip;}
	/* jmp	GndOk */
	goto gndok;
__m2c_macrolocal_21_skip:
	// 4487 
	// 0 ;----------------
	// 0 ;* calc map index (xsec + ysec * 32)
	// 0 ;----------------
	/* mov	bp,[si].VP_YSEC */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* add	bp,[si].VP_XSEC */
	ADD(bp, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	// 0 ;---------------------------
	// 0 ;* check for occupied sector
	// 0 ;---------------------------
	/* mov	al,SectorLayer1[bp] */
	al = *((&sectorlayer1)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_22_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_22_skip;}
	/* jmp	GndOk */
	goto gndok;
__m2c_macrolocal_22_skip:
	// 4489 
	// 0 ;-----------------------------
	// 0 ;* sort sector object list ptr
	// 0 ;-----------------------------
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* add	bx,OFFSET SectorTable */
	ADD(bx, m2c::near_offset_external(sectortable));
	// m2c-dedup: removed duplicate expansion row: R(ADD(bx, m2c::near_offset_external(sectortable)));	// 2135 						add	bx,OFFSET SectorTable
	/* mov	di,[bx].SEC_OBJ_PTR */
	di = m2c::getdata(*((dw*)((db*)&((sectordata*)raddr(ds,bx))->sec_obj_ptr)));
	// 0 ;-------------------------
	// 0 ;* scan ground object list
	// 0 ;-------------------------
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* check for end of list
gndloop:
	// 4491 
	/* GndLoop:	cmp	ES:[di].GND_NUM,-1 */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num)), -1);
	/* je	DoneGnd */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num))) == (db)(-1)) {goto donegnd;}
	// 0 ;* check abs(delta x) <= 256
	/* mov	ah,ES:[di].GND_XGRID */
	ah = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	/* sub	ax,[si].VP_XFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,256 */
	CMP(ax, 256);
	/* ja	NextGnd */
	if ((dw)(ax) > (dw)(256)) {goto nextgnd;}
	/* mov	TmpXErr,ax */
	tmpxerr = ax;
	// 0 ;* check abs(delta y) <= 256
	/* mov	ah,ES:[di].GND_YGRID */
	ah = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	/* sub	ax,[si].VP_YFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,256 */
	CMP(ax, 256);
	/* ja	NextGnd */
	if ((dw)(ax) > (dw)(256)) {goto nextgnd;}
	/* mov	TmpYErr,ax */
	tmpyerr = ax;
	// 0 ;-----------------------------
	// 0 ;* get object x, y and z sizes
	// 0 ;-----------------------------
	/* mov	bl,ES:[di].GND_NUM */
	bl = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,GroundTable[bx] */
	bx = *(dw*)(((db*)&groundtable)+bx);
	/* mov	cx,GRNDOBJ1 */
	cx = seg_offset(grndobj1);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* mov	ax,[bx].OBJ_HDR_XGRID */
	ax = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,[bx].OBJ_HDR_YGRID */
	dx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	bp,[bx].OBJ_HDR_ZGRID */
	bp = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* mov	bx,[bx].OBJ_HDR_SCALE */
	bx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,DATA */
	cx = seg_offset(data);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	cl,ObjScaleConvert[bx] */
	cl = *((&objscaleconvert)+bx);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* shl	dx,cl */
	SHL(dx, cl);
	/* shl	bp,cl */
	SHL(bp, cl);
	// 0 ;---------------------
	// 0 ;* check for collision
	// 0 ;---------------------
	/* cmp	WORD PTR [si].VP_ZFT_LO,bp */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), bp);
	/* ja	NextGnd */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(bp)) {goto nextgnd;}
	/* cmp	TmpXErr,ax */
	CMP(tmpxerr, ax);
	/* ja	NextGnd */
	if ((dw)(tmpxerr) > (dw)(ax)) {goto nextgnd;}
	/* cmp	TmpYErr,dx */
	CMP(tmpyerr, dx);
	/* jbe	GndHit */
	if ((dw)(tmpyerr) <= (dw)(dx)) {goto gndhit;}
	// 0 ;---------------------------
nextgnd:
	// 4493 
	// 0 ;---------------------------
	/* add	di,GND_REC_SIZE */
	ADD(di, 4);
	/* jmp	GndLoop */
	goto gndloop;
	// 0 ;---------------------------
donegnd:
	// 4495 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
gndok:
	// 4497 
	// 0 ;---------------------------
	/* xor	al,al		;no collision (cf = 0) */
	XOR(al, al);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
gndhit:
	// 4499 
	// 0 ;---------------------------
	/* mov	al,ES:[di].GND_NUM */
	al = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num)));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	es,dx */
	m2c::set_segment_register(es, dx);
	/* stc			;collision (cf = 1) */
	STC;
	/* ret */
	RETF(0);
staticcollision:
	// 2241 
	// 0 ;--------------------------------------
	// 0 ;* check zft <= static mobile threshold
	// 0 ;--------------------------------------
edummylabel11:
	// 4501 
	/* cmp	WORD PTR [si].VP_ZFT_HI,0 */
	CMP(*((dw*)raddr(ds,si+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_26_skip */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_26_skip;}
	/* jmp	StatOk */
	goto statok;
__m2c_macrolocal_26_skip:
	// 4503 
	/* cmp	WORD PTR [si].VP_ZFT_LO,128 */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), 128);
	/* jbe	__m2c_macrolocal_27_skip */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) <= (dw)(128)) {goto __m2c_macrolocal_27_skip;}
	/* jmp	StatOk */
	goto statok;
__m2c_macrolocal_27_skip:
	// 4505 
	// 0 ;---------------------
	// 0 ;* check on active map
	// 0 ;---------------------
	/* cmp	[si].VP_XSEC,31 */
	CMP(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)), 31);
	/* jbe	__m2c_macrolocal_28_skip */
	if ((dw)(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec))) <= (dw)(31)) {goto __m2c_macrolocal_28_skip;}
	/* jmp	StatOk */
	goto statok;
__m2c_macrolocal_28_skip:
	// 4507 
	/* cmp	[si].VP_YSEC,31 */
	CMP(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)), 31);
	/* jbe	__m2c_macrolocal_29_skip */
	if ((dw)(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec))) <= (dw)(31)) {goto __m2c_macrolocal_29_skip;}
	/* jmp	StatOk */
	goto statok;
__m2c_macrolocal_29_skip:
	// 4509 
	// 0 ;----------------
	// 0 ;* calc map index (xsec + ysec * 32)
	// 0 ;----------------
	/* mov	bp,[si].VP_YSEC */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* add	bp,[si].VP_XSEC */
	ADD(bp, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	// 0 ;---------------------------
	// 0 ;* check for occupied sector
	// 0 ;---------------------------
	/* mov	bl,MobileLayer1[bp] */
	bl = *((&mobilelayer1)+bp);
	/* test	bl,bl */
	TEST(bl, bl);
	/* jnz	__m2c_macrolocal_30_skip */
	if ((bl & bl) != 0) {goto __m2c_macrolocal_30_skip;}
	/* jmp	StatOk */
	goto statok;
__m2c_macrolocal_30_skip:
	// 4511 
	// 0 ;-----------------------------
	// 0 ;* sort sector object list ptr
	// 0 ;-----------------------------
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	di,MobSectorTable[bx] */
	di = *(dw*)(((db*)&mobsectortable)+bx);
	// 0 ;-------------------------
	// 0 ;* scan ground object list
	// 0 ;-------------------------
	/* mov	ax,MSECDATA1 */
	ax = seg_offset(msecdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* check for end of list
statloop:
	// 4513 
	/* StatLoop:	cmp	ES:[di].STAT_NUM,-1 */
	CMP(*((db*)((db*)&((statmob*)raddr(es,di))->stat_num)), -1);
	/* je	DoneStat */
	if ((db)(*((db*)((db*)&((statmob*)raddr(es,di))->stat_num))) == (db)(-1)) {goto donestat;}
	// 0 ;* check abs(delta x) <= 128
	/* mov	ax,ES:[di].STAT_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(es,di))->stat_xft)));
	/* sub	ax,[si].VP_XFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextStat */
	if ((dw)(ax) > (dw)(128)) {goto nextstat;}
	/* mov	TmpXErr,ax */
	tmpxerr = ax;
	// 0 ;* check abs(delta y) <= 128
	/* mov	ax,ES:[di].STAT_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(es,di))->stat_yft)));
	/* sub	ax,[si].VP_YFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextStat */
	if ((dw)(ax) > (dw)(128)) {goto nextstat;}
	/* mov	TmpYErr,ax */
	tmpyerr = ax;
	// 0 ;-----------------------------
	// 0 ;* get object x, y and z sizes
	// 0 ;-----------------------------
	/* mov	bl,ES:[di].STAT_NUM */
	bl = m2c::getdata(*((db*)((db*)&((statmob*)raddr(es,di))->stat_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,MobileTable[bx] */
	bx = *(dw*)(((db*)&mobiletable)+bx);
	/* mov	cx,MOBOBJ1 */
	cx = seg_offset(mobobj1);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* mov	ax,[bx].OBJ_HDR_XGRID */
	ax = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,[bx].OBJ_HDR_YGRID */
	dx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	bp,[bx].OBJ_HDR_ZGRID */
	bp = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* mov	bx,[bx].OBJ_HDR_SCALE */
	bx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,DATA */
	cx = seg_offset(data);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	cl,ObjScaleConvert[bx] */
	cl = *((&objscaleconvert)+bx);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* shl	dx,cl */
	SHL(dx, cl);
	/* shl	bp,cl */
	SHL(bp, cl);
	// 0 ;---------------------
	// 0 ;* check for collision
	// 0 ;---------------------
	/* cmp	WORD PTR [si].VP_ZFT_LO,bp */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), bp);
	/* ja	NextStat */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(bp)) {goto nextstat;}
	/* cmp	TmpXErr,ax */
	CMP(tmpxerr, ax);
	/* ja	NextStat */
	if ((dw)(tmpxerr) > (dw)(ax)) {goto nextstat;}
	/* cmp	TmpYErr,dx */
	CMP(tmpyerr, dx);
	/* jbe	StatHit */
	if ((dw)(tmpyerr) <= (dw)(dx)) {goto stathit;}
	// 0 ;---------------------------
nextstat:
	// 4515 
	// 0 ;---------------------------
	/* add	di,STAT_REC_SIZE */
	ADD(di, 8);
	/* jmp	StatLoop */
	goto statloop;
	// 0 ;---------------------------
donestat:
	// 4517 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
statok:
	// 4519 
	// 0 ;---------------------------
	/* xor	al,al		;no collision (cf = 0) */
	XOR(al, al);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
stathit:
	// 4521 
	// 0 ;---------------------------
	/* mov	al,ES:[di].STAT_NUM */
	al = m2c::getdata(*((db*)((db*)&((statmob*)raddr(es,di))->stat_num)));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	es,dx */
	m2c::set_segment_register(es, dx);
	/* stc			;collision (cf = 1) */
	STC;
	/* ret */
	RETF(0);
mobilecollision:
	// 2396 
	/* mov	SourcePtr,di ;* kill: assume all (except al, cf) */
	sourceptr = di;
	// 0 ;--------------------------
	// 0 ;* locate mobiles in sector
	// 0 ;--------------------------
edummylabel12:
	// 4523 
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	dx,[si].VP_YSEC */
	dx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* mov	di,si */
	di = si;
	/* call	LocateMobiles */
	CALLF(locatemobiles, 0);
	/* jnc	__m2c_macrolocal_33_skip */
	if (!CF) {goto __m2c_macrolocal_33_skip;}
	/* jmp	MobOk */
	goto mobok;
__m2c_macrolocal_33_skip:
	// 4525 
	/* xchg	si,di		;si -> viewpoint, di -> mobiles */
	XCHG(si, di);
	// 0 ;--------------
	// 0 ;* scan mobiles
	// 0 ;--------------
	// 0 ;* check for end of list
mobloop:
	// 4527 
	/* MobLoop:	cmp	di,-1 */
	CMP(di, -1);
	/* jne	__m2c_macrolocal_34_skip */
	if ((dw)(di) != (dw)(-1)) {goto __m2c_macrolocal_34_skip;}
	/* jmp	MobOk */
	goto mobok;
__m2c_macrolocal_34_skip:
	// 4529 
	// 0 ;* check for self
	/* cmp	di,SourcePtr */
	CMP(di, sourceptr);
	/* jne	__m2c_macrolocal_35_skip */
	if ((dw)(di) != (dw)(sourceptr)) {goto __m2c_macrolocal_35_skip;}
	/* jmp	NextMob */
	goto nextmob;
__m2c_macrolocal_35_skip:
	// 4531 
	// 0 ;* check abs(delta x) <= 128
	/* mov	ax,_VP_XFT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+di))->vp_xft)));
	/* sub	ax,[si].VP_XFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextMob */
	if ((dw)(ax) > (dw)(128)) {goto nextmob;}
	/* mov	TmpXErr,ax */
	tmpxerr = ax;
	// 0 ;* check abs(delta y) <= 128
	/* mov	ax,_VP_YFT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+di))->vp_yft)));
	/* sub	ax,[si].VP_YFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextMob */
	if ((dw)(ax) > (dw)(128)) {goto nextmob;}
	/* mov	TmpYErr,ax */
	tmpyerr = ax;
	// 0 ;* check abs(delta z) <= 128
	/* mov	ax,WORD PTR _VP_ZFT_LO[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+di))->vp_zft)));
	/* mov	dx,WORD PTR _VP_ZFT_HI[di] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+di))->vp_zft)));
	/* sub	ax,WORD PTR [si].VP_ZFT_LO */
	SUB(ax, *((dw*)raddr(ds,si+vp_zft_lo)));
	/* sbb	dx,WORD PTR [si].VP_ZFT_HI */
	SBB(dx, *((dw*)raddr(ds,si+vp_zft_hi)));
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel5;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel5:
	// 4533 
	/* @@:		cmp	dx,0 */
	CMP(dx, 0);
	/* ja	NextMob */
	if ((dw)(dx) > (dw)(0)) {goto nextmob;}
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextMob */
	if ((dw)(ax) > (dw)(128)) {goto nextmob;}
	/* mov	TmpZErr,ax */
	tmpzerr = ax;
	// 0 ;-----------------------------
	// 0 ;* get object x, y and z sizes
	// 0 ;-----------------------------
	/* mov	bl,[di].MOB_NUM */
	bl = m2c::getdata(*((db*)((db*)&((mobile*)raddr(ds,di))->mob_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,MobileTable[bx] */
	bx = *(dw*)(((db*)&mobiletable)+bx);
	/* mov	cx,MOBOBJ1 */
	cx = seg_offset(mobobj1);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* mov	ax,[bx].OBJ_HDR_XGRID */
	ax = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,[bx].OBJ_HDR_YGRID */
	dx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	bp,[bx].OBJ_HDR_ZGRID */
	bp = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* mov	bx,[bx].OBJ_HDR_SCALE */
	bx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,DATA */
	cx = seg_offset(data);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	cl,ObjScaleConvert[bx] */
	cl = *((&objscaleconvert)+bx);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* shl	dx,cl */
	SHL(dx, cl);
	/* shl	bp,cl */
	SHL(bp, cl);
	// 0 ;---------------------
	// 0 ;* check for collision
	// 0 ;---------------------
	/* cmp	TmpXErr,ax */
	CMP(tmpxerr, ax);
	/* ja	NextMob */
	if ((dw)(tmpxerr) > (dw)(ax)) {goto nextmob;}
	/* cmp	TmpYErr,dx */
	CMP(tmpyerr, dx);
	/* ja	NextMob */
	if ((dw)(tmpyerr) > (dw)(dx)) {goto nextmob;}
	/* cmp	TmpZErr,bp */
	CMP(tmpzerr, bp);
	/* jbe	MobHit */
	if ((dw)(tmpzerr) <= (dw)(bp)) {goto mobhit;}
	// 0 ;---------------------------
nextmob:
	// 4535 
	// 0 ;---------------------------
	/* mov	di,[di].MOB_LINK_PTR */
	di = m2c::getdata(*((dw*)((db*)&((mobile*)raddr(ds,di))->mob_link_ptr)));
	/* jmp	MobLoop */
	goto mobloop;
	// 0 ;---------------------------
mobok:
	// 4537 
	// 0 ;---------------------------
	/* xor	al,al		;no collision (cf = 0) */
	XOR(al, al);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
mobhit:
	// 4539 
	// 0 ;---------------------------
	/* mov	al,[di].MOB_NUM */
	al = m2c::getdata(*((db*)((db*)&((mobile*)raddr(ds,di))->mob_num)));
	/* stc			;collision (cf = 1) */
	STC;
	/* ret */
	RETF(0);
treecollision:
	// 2524 
	// 0 ;---------------------
	// 0 ;* check trees enabled
	// 0 ;---------------------
edummylabel13:
	// 4541 
	/* test	TreesEnabled,1 */
	TEST(treesenabled, 1);
	/* jz	TreesOk */
	if (!(treesenabled & 1)) {goto treesok;}
	// 0 ;------------------------------
	// 0 ;* check zft <= trees threshold
	// 0 ;------------------------------
	/* cmp	WORD PTR [si].VP_ZFT_HI,0 */
	CMP(*((dw*)raddr(ds,si+vp_zft_hi)), 0);
	/* ja	TreesOk */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_hi))) > (dw)(0)) {goto treesok;}
	/* cmp	WORD PTR [si].VP_ZFT_LO,128 */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), 128);
	/* ja	TreesOk */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(128)) {goto treesok;}
	// 0 ;---------------------------------
	// 0 ;* calc map index with wrap around (xsec + ysec * 32)
	// 0 ;---------------------------------
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	bp,[si].VP_YSEC */
	bp = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* and	ax,MAP_X_WRAP */
	AND(ax, 0x0001f);
	/* and	bp,MAP_Y_WRAP */
	AND(bp, 0x0001f);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;---------------------------------
	// 0 ;* select layout wrt xsec and ysec (via MapIndex so values are wrapped)
	// 0 ;---------------------------------
	/* mov	ax,bp */
	ax = bp;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* and	ax,01b		;x */
	AND(ax, 0x1);
	/* and	bx,10b		;y */
	AND(bx, 0x2);
	/* or	bx,ax */
	OR(bx, ax);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,TreeLayouts[bx] */
	bx = *(dw*)(((db*)&treelayouts)+bx);
	// 0 ;------------------
	// 0 ;* scan tree layers
	// 0 ;------------------
	/* mov	al,TreeLayer1[bp] */
	al = *((&treelayer1)+bp);
	/* mov	ah,GND_COPSEA */
	ah = 13;
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* jc	TreesHit */
	if (CF) {goto treeshit;}
	/* mov	al,TreeLayer2[bp] */
	al = *((&treelayer2)+bp);
	/* mov	ah,GND_COPSEB */
	ah = 14;
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* jc	TreesHit */
	if (CF) {goto treeshit;}
	/* mov	al,TreeLayer3[bp] */
	al = *((&treelayer3)+bp);
	/* mov	ah,GND_COPSEC */
	ah = 15;
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* jc	TreesHit */
	if (CF) {goto treeshit;}
	/* mov	al,TreeLayer4[bp] */
	al = *((&treelayer4)+bp);
	/* mov	ah,GND_COPSED */
	ah = 16;
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* jc	TreesHit */
	if (CF) {goto treeshit;}
	// 0 ;---------------------------
treesok:
	// 4543 
	// 0 ;---------------------------
	/* xor	al,al		;no collision (cf = 0) */
	XOR(al, al);
	// 0 ;---------------------------
treeshit:
	// 4545 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
scantrees:
	// 2615 
	/* push	ax		;store copse object */
	PUSH(ax);
edummylabel14:
	// 4547 
	/* push	bx		;store tree index */
	PUSH(bx);
	/* push	bp		;store map index */
	PUSH(bp);
	// 0 ;-----------------------------
	// 0 ;* get object x, y and z sizes
	// 0 ;-----------------------------
	/* push	bx */
	PUSH(bx);
	/* mov	bl,ah */
	bl = ah;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,GroundTable[bx] */
	bx = *(dw*)(((db*)&groundtable)+bx);
	/* mov	cx,GRNDOBJ1 */
	cx = seg_offset(grndobj1);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* mov	di,[bx].OBJ_HDR_XGRID */
	di = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	bp,[bx].OBJ_HDR_YGRID */
	bp = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	dx,[bx].OBJ_HDR_ZGRID */
	dx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_zgrid)));
	/* mov	bx,[bx].OBJ_HDR_SCALE */
	bx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,DATA */
	cx = seg_offset(data);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	cl,ObjScaleConvert[bx] */
	cl = *((&objscaleconvert)+bx);
	/* shl	di,cl */
	SHL(di, cl);
	/* shl	bp,cl */
	SHL(bp, cl);
	/* shl	dx,cl */
	SHL(dx, cl);
	/* pop	bx */
	POP(bx);
	// 0 ;* check zft <= tree height
	/* cmp	WORD PTR [si].VP_ZFT_LO,dx */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), dx);
	/* ja	MissTrees */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(dx)) {goto misstrees;}
	/* mov	cl,al */
	cl = al;
	// 0 ;---------------------------
scantreeloop:
	// 4549 
	// 0 ;---------------------------
	/* shr	cl,1 */
	SHR(cl, 1);
	/* jnc	NextTree */
	if (!CF) {goto nexttree;}
	// 0 ;* check abs(delta x) <= x size
	/* mov	ah,[bx+0]	;xgrid */
	ah = m2c::getdata(*(raddr(ds,bx+0)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	/* sub	ax,[si].VP_XFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,di */
	CMP(ax, di);
	/* ja	NextTree */
	if ((dw)(ax) > (dw)(di)) {goto nexttree;}
	// 0 ;* check abs(delta y) <= y size
	/* mov	ah,[bx+1]	;ygrid */
	ah = m2c::getdata(*(raddr(ds,bx+1)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	/* sub	ax,[si].VP_YFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	HitTrees */
	if ((dw)(ax) <= (dw)(bp)) {goto hittrees;}
	// 0 ;---------------------------
nexttree:
	// 4551 
	// 0 ;---------------------------
	/* add	bx,2		;next index */
	ADD(bx, 2);
	/* test	cl,cl */
	TEST(cl, cl);
	/* jnz	ScanTreeLoop */
	if ((cl & cl) != 0) {goto scantreeloop;}
	// 0 ;---------------------------
misstrees:
	// 4553 
	// 0 ;---------------------------
	/* pop	bp		;restore map index */
	POP(bp);
	/* pop	bx		;restore tree index */
	POP(bx);
	/* pop	ax		;restore copse object */
	POP(ax);
	/* add	bx,8*2		;update trees index */
	ADD(bx, 8*2);
	/* xor	al,al		;no collision (cf = 0) */
	XOR(al, al);
	/* ret */
	RETN(0);
	// 0 ;---------------------------
hittrees:
	// 4555 
	// 0 ;---------------------------
	/* pop	bp		;restore map index */
	POP(bp);
	/* pop	bx		;restore tree index */
	POP(bx);
	/* pop	ax		;restore copse object */
	POP(ax);
	/* mov	al,ah */
	al = ah;
	/* stc			;collision (cf = 1) */
	STC;
	/* ret */
	RETN(0);
cratercollision:
	// 2714 
	// 0 ;---------------
	// 0 ;* check zft = 0
	// 0 ;---------------
edummylabel15:
	// 4557 
	/* mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* or	ax,WORD PTR [si].VP_ZFT_HI */
	OR(ax, *((dw*)raddr(ds,si+vp_zft_hi)));
	/* jz	__m2c_macrolocal_41_skip */
	if (ax == 0) {goto __m2c_macrolocal_41_skip;}
	/* jmp	CratersOk */
	goto cratersok;
__m2c_macrolocal_41_skip:
	// 4559 
	// 0 ;------------------
	// 0 ;* scan crater loop
	// 0 ;------------------
	/* mov	ax,SEG CraterBuffer */
	ax = m2c::segment_of_external(craterbuffer);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET CraterBuffer */
	di = m2c::near_offset_external(craterbuffer);
	/* mov	cx,NUM_CRATERS */
	cx = 128;
	// 0 ;* check for crater not in use (search no further)
craterloop:
	// 4561 
	/* CraterLoop:	mov	al,ES:[di].CRATER_TYPE */
	al = m2c::getdata(*((db*)((db*)&((crater*)raddr(es,di))->crater_type)));
	/* cmp	al,CRATER_NULL */
	CMP(al, 0);
	/* jne	__m2c_macrolocal_42_skip */
	if ((db)(al) != (db)(0)) {goto __m2c_macrolocal_42_skip;}
	/* jmp	DoneCraters */
	goto donecraters;
__m2c_macrolocal_42_skip:
	// 4563 
	// 0 ;* ignore "shell" craters (too small)
	/* cmp	al,CRATER_SHELL */
	CMP(al, 4);
	/* je	NextCrater */
	if ((db)(al) == (db)(4)) {goto nextcrater;}
	// 0 ;* check for xsec match
	/* mov	ax,ES:[di].CRATER_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,di))->crater_xsec)));
	/* cmp	ax,[si].VP_XSEC */
	CMP(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* jne	NextCrater */
	if ((dw)(ax) != (dw)(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)))) {goto nextcrater;}
	// 0 ;* check for ysec match
	/* mov	ax,ES:[di].CRATER_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,di))->crater_ysec)));
	/* cmp	ax,[si].VP_YSEC */
	CMP(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* jne	NextCrater */
	if ((dw)(ax) != (dw)(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)))) {goto nextcrater;}
	// 0 ;* check abs(delta x) <= 128
	/* mov	ax,ES:[di].CRATER_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,di))->crater_xft)));
	/* sub	ax,[si].VP_XFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextCrater */
	if ((dw)(ax) > (dw)(128)) {goto nextcrater;}
	/* mov	TmpXErr,ax */
	tmpxerr = ax;
	// 0 ;* check abs(delta y) <= 128
	/* mov	ax,ES:[di].CRATER_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((crater*)raddr(es,di))->crater_yft)));
	/* sub	ax,[si].VP_YFT */
	SUB(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,128 */
	CMP(ax, 128);
	/* ja	NextCrater */
	if ((dw)(ax) > (dw)(128)) {goto nextcrater;}
	/* mov	TmpYErr,ax */
	tmpyerr = ax;
	// 0 ;-----------------------------
	// 0 ;* get object x, y and z sizes
	// 0 ;-----------------------------
	/* mov	bp,cx */
	bp = cx;
	/* mov	bl,ES:[di].CRATER_TYPE */
	bl = m2c::getdata(*((db*)((db*)&((crater*)raddr(es,di))->crater_type)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	bl,CraterNum[bx] */
	bl = *((&craternum)+bx);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,MobileTable[bx] */
	bx = *(dw*)(((db*)&mobiletable)+bx);
	/* mov	cx,MOBOBJ1 */
	cx = seg_offset(mobobj1);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* mov	ax,[bx].OBJ_HDR_XGRID */
	ax = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_xgrid)));
	/* mov	dx,[bx].OBJ_HDR_YGRID */
	dx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_ygrid)));
	/* mov	bx,[bx].OBJ_HDR_SCALE */
	bx = m2c::getdata(*((dw*)((db*)&((objectheader*)raddr(ds,bx))->obj_hdr_scale)));
	/* mov	cx,DATA */
	cx = seg_offset(data);
	/* mov	ds,cx */
	m2c::set_segment_register(ds, cx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	cl,ObjScaleConvert[bx] */
	cl = *((&objscaleconvert)+bx);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* shl	dx,cl */
	SHL(dx, cl);
	/* mov	cx,bp */
	cx = bp;
	// 0 ;---------------------
	// 0 ;* check for collision
	// 0 ;---------------------
	/* cmp	TmpXErr,ax */
	CMP(tmpxerr, ax);
	/* ja	NextCrater */
	if ((dw)(tmpxerr) > (dw)(ax)) {goto nextcrater;}
	/* cmp	TmpYErr,dx */
	CMP(tmpyerr, dx);
	/* jbe	CraterHit */
	if ((dw)(tmpyerr) <= (dw)(dx)) {goto craterhit;}
	// 0 ;---------------------------
nextcrater:
	// 4565 
	// 0 ;---------------------------
	/* add	di,CRATER_REC_SIZE */
	ADD(di, 14);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_45_skip */
	if (cx == 0) {goto __m2c_macrolocal_45_skip;}
	/* jmp	CraterLoop */
	goto craterloop;
__m2c_macrolocal_45_skip:
	// 4567 
	// 0 ;---------------------------
donecraters:
	// 4569 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
cratersok:
	// 4571 
	// 0 ;---------------------------
	/* xor	al,al		;no collision (cf = 0) */
	XOR(al, al);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
craterhit:
	// 4573 
	// 0 ;---------------------------
	/* mov	al,ES:[di].CRATER_TYPE */
	al = m2c::getdata(*((db*)((db*)&((crater*)raddr(es,di))->crater_type)));
	/* mov	bx,OFFSET CraterNum */
	bx = m2c::near_offset_external(craternum);
	/* xlat */
	XLAT;
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	es,dx */
	m2c::set_segment_register(es, dx);
	/* stc			;collision (cf = 1) */
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
                case m2c::k__m2c_macrolocal_10_skip: 	goto __m2c_macrolocal_10_skip;
        case m2c::k__m2c_macrolocal_11_skip: 	goto __m2c_macrolocal_11_skip;
        case m2c::k__m2c_macrolocal_12_skip: 	goto __m2c_macrolocal_12_skip;
        case m2c::k__m2c_macrolocal_13_skip: 	goto __m2c_macrolocal_13_skip;
        case m2c::k__m2c_macrolocal_18_skip: 	goto __m2c_macrolocal_18_skip;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_20_skip: 	goto __m2c_macrolocal_20_skip;
        case m2c::k__m2c_macrolocal_21_skip: 	goto __m2c_macrolocal_21_skip;
        case m2c::k__m2c_macrolocal_22_skip: 	goto __m2c_macrolocal_22_skip;
        case m2c::k__m2c_macrolocal_26_skip: 	goto __m2c_macrolocal_26_skip;
        case m2c::k__m2c_macrolocal_27_skip: 	goto __m2c_macrolocal_27_skip;
        case m2c::k__m2c_macrolocal_28_skip: 	goto __m2c_macrolocal_28_skip;
        case m2c::k__m2c_macrolocal_29_skip: 	goto __m2c_macrolocal_29_skip;
        case m2c::k__m2c_macrolocal_30_skip: 	goto __m2c_macrolocal_30_skip;
        case m2c::k__m2c_macrolocal_33_skip: 	goto __m2c_macrolocal_33_skip;
        case m2c::k__m2c_macrolocal_34_skip: 	goto __m2c_macrolocal_34_skip;
        case m2c::k__m2c_macrolocal_35_skip: 	goto __m2c_macrolocal_35_skip;
        case m2c::k__m2c_macrolocal_41_skip: 	goto __m2c_macrolocal_41_skip;
        case m2c::k__m2c_macrolocal_42_skip: 	goto __m2c_macrolocal_42_skip;
        case m2c::k__m2c_macrolocal_45_skip: 	goto __m2c_macrolocal_45_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kcheckfeature: 	goto checkfeature;
        case m2c::kcheckhard: 	goto checkhard;
        case m2c::kchecklakes: 	goto checklakes;
        case m2c::kcheckrailways: 	goto checkrailways;
        case m2c::kcheckrivers: 	goto checkrivers;
        case m2c::kcheckroads: 	goto checkroads;
        case m2c::kcheckrunways: 	goto checkrunways;
        case m2c::kchecktaxiways: 	goto checktaxiways;
        case m2c::kcloudcheck: 	goto cloudcheck;
        case m2c::kcloudcheck1: 	goto cloudcheck1;
        case m2c::kcloudcheck2: 	goto cloudcheck2;
        case m2c::kcontfeatures: 	goto contfeatures;
        case m2c::kconttaxi: 	goto conttaxi;
        case m2c::kcratercollision: 	goto cratercollision;
        case m2c::kcraterhit: 	goto craterhit;
        case m2c::kcraterloop: 	goto craterloop;
        case m2c::kcratersok: 	goto cratersok;
        case m2c::kcyclicloop: 	goto cyclicloop;
        case m2c::kdonecraters: 	goto donecraters;
        case m2c::kdonegnd: 	goto donegnd;
        case m2c::kdonestat: 	goto donestat;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitclouds: 	goto exitclouds;
        case m2c::kfailfeature: 	goto failfeature;
        case m2c::kfailhard: 	goto failhard;
        case m2c::kfaillakes: 	goto faillakes;
        case m2c::kfailrail: 	goto failrail;
        case m2c::kfailrivers: 	goto failrivers;
        case m2c::kfailroad: 	goto failroad;
        case m2c::kfailrunway: 	goto failrunway;
        case m2c::kfailtaxiway: 	goto failtaxiway;
        case m2c::kgndhit: 	goto gndhit;
        case m2c::kgndloop: 	goto gndloop;
        case m2c::kgndok: 	goto gndok;
        case m2c::kgroundcollision: 	goto groundcollision;
        case m2c::khittrees: 	goto hittrees;
        case m2c::kinsidefail: 	goto insidefail;
        case m2c::kinsidepass: 	goto insidepass;
        case m2c::kmakepolyloop: 	goto makepolyloop;
        case m2c::kmakevertexloop: 	goto makevertexloop;
        case m2c::kmisstrees: 	goto misstrees;
        case m2c::kmobhit: 	goto mobhit;
        case m2c::kmobilecollision: 	goto mobilecollision;
        case m2c::kmobloop: 	goto mobloop;
        case m2c::kmobok: 	goto mobok;
        case m2c::knextcrater: 	goto nextcrater;
        case m2c::knextface: 	goto nextface;
        case m2c::knextgnd: 	goto nextgnd;
        case m2c::knextmob: 	goto nextmob;
        case m2c::knextstat: 	goto nextstat;
        case m2c::knexttaxiface: 	goto nexttaxiface;
        case m2c::knexttaxilist: 	goto nexttaxilist;
        case m2c::knexttree: 	goto nexttree;
        case m2c::kpassrail: 	goto passrail;
        case m2c::kpassroad: 	goto passroad;
        case m2c::kpassrunway: 	goto passrunway;
        case m2c::kpasstaxiway: 	goto passtaxiway;
        case m2c::krunwayloop: 	goto runwayloop;
        case m2c::kscannextrail: 	goto scannextrail;
        case m2c::kscannextroad: 	goto scannextroad;
        case m2c::kscantreeloop: 	goto scantreeloop;
        case m2c::kscantrees: 	goto scantrees;
        case m2c::kskiprail: 	goto skiprail;
        case m2c::kskiproad: 	goto skiproad;
        case m2c::kskipvertex1: 	goto skipvertex1;
        case m2c::ksortline: 	goto sortline;
        case m2c::kstathit: 	goto stathit;
        case m2c::kstaticcollision: 	goto staticcollision;
        case m2c::kstatloop: 	goto statloop;
        case m2c::kstatok: 	goto statok;
        case m2c::ksurfacecheck: 	goto surfacecheck;
        case m2c::ktestinsidearea: 	goto testinsidearea;
        case m2c::ktreecollision: 	goto treecollision;
        case m2c::ktreeshit: 	goto treeshit;
        case m2c::ktreesok: 	goto treesok;
        case m2c::kvertexloop1: 	goto vertexloop1;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        default: return __dispatch_call(__disp, _state);
    };
}


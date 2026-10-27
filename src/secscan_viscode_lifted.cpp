/* THIS IS GENERATED FILE */

        
#include "secscan.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
scansectors:
	// 680 
	/* mov	NumVisSctrs,0	;reset visible sector counter */
	numvissctrs = 0;
	// 0 ;--------------------------------------------
	// 0 ;* test visibility wrt Overcast and CloudMode
	// 0 ;--------------------------------------------
edummylabel1:
	// 4369 
	/* test	OverCast,1	;overcast? */
	TEST(overcast, 1);
	/* jz	@F		;no -> */
	if (!(overcast & 1)) {goto dummylabel1;}
	/* cmp	CloudMode,CLOUD_MODE1	;below clouds? */
	CMP(cloudmode, cloud_mode1);
	/* je	__m2c_macrolocal_1_skip */
	if ((dw)(cloudmode) == (dw)(cloud_mode1)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	ExitSectors */
	goto exitsectors;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;no ->
	// 0 ;----------------------------------------------------------------------
	// 0 ;* calculate flat scan size wrt zft (still draw hills to max scan size)
	// 0 ;----------------------------------------------------------------------
dummylabel1:
	// 4373 
	/* @@:		mov	ax,WORD PTR V_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&v_view+vp_zft_hi));
	/* test	ax,ax	   	;zft > 65,535ft? */
	TEST(ax, ax);
	/* jnz	MaxScanSize	;yes -> */
	if ((ax & ax) != 0) {goto maxscansize;}
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* cmp	ax,7*512	;zft >= z threshold? */
	CMP(ax, 7*512);
	/* jae	MaxScanSize	;yes -> */
	if ((dw)(ax) >= (dw)(7*512)) {goto maxscansize;}
	/* mov	al,ah		;/256 */
	al = ah;
	/* and	ax,1110b	;/512 * 2 = 0 .. 12 step 2 */
	AND(ax, 0xe);
	/* add	ax,3		;+3 = MIN_SEC_SCAN .. MAX_SEC_SCAN step 2 */
	ADD(ax, 3);
	/* cmp	ax,SecScanCnt1	;scan size <= max scan size? */
	CMP(ax, secscancnt1);
	/* jbe	SetScanSize	;yes -> */
	if ((dw)(ax) <= (dw)(secscancnt1)) {goto setscansize;}
maxscansize:
	// 4375 
	/* MaxScanSize:	mov	ax,SecScanCnt1	;use max scan size */
	ax = secscancnt1;
setscansize:
	// 4377 
	/* SetScanSize:	shr	ax,1		;max offset (count / 2) */
	SHR(ax, 1);
	/* mov	FlatScanMaxOff,ax */
	flatscanmaxoff = ax;
	// 0 ;--------------------------------
	// 0 ;* for y sector offset = -n to +n
	// 0 ;--------------------------------
	/* mov	cx,SecScanCnt1	;y count */
	cx = secscancnt1;
	/* mov	di,SecScanOff1	;y sector offset */
	di = secscanoff1;
scanyloop1:
	// 4379 
	/* ScanYLoop1:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;--------------------------------
	// 0 ;* for x sector offset = -m to +m
	// 0 ;--------------------------------
	/* mov	cx,SecScanCnt1	;x count */
	cx = secscancnt1;
	/* mov	si,SecScanOff1	;x sector offset */
	si = secscanoff1;
scanxloop1:
	// 4381 
	/* ScanXLoop1:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;-------------------------
	// 0 ;* calc sector map co-ords
	// 0 ;-------------------------
	/* mov	ax,V_VIEW.VP_XSEC */
	ax = v_view.vp_xsec;
	/* add	ax,si		;x sec = vp x sec + x sec offset */
	ADD(ax, si);
	/* mov	dx,ax */
	dx = ax;
	/* mov	ax,V_VIEW.VP_YSEC */
	ax = v_view.vp_ysec;
	/* add	ax,di		;y sec = vp y sec + y sec offset */
	ADD(ax, di);
	/* mov	XSecScan,dx */
	xsecscan = dx;
	/* mov	YSecScan,ax */
	ysecscan = ax;
	// 0 ;-------------------------------------------------------
	// 0 ;* is the sector inside the map area or in no mans land?
	// 0 ;-------------------------------------------------------
	/* mov	bl,1		;assume outside map */
	bl = 1;
	/* cmp	dx,32		;x sec inside map? */
	CMP(dx, 32);
	/* jae	@F		;no -> */
	if ((dw)(dx) >= (dw)(32)) {goto dummylabel2;}
	/* cmp	ax,32		;y sec inside map? */
	CMP(ax, 32);
	/* jae	@F		;no -> */
	if ((dw)(ax) >= (dw)(32)) {goto dummylabel2;}
	/* xor	bl,bl */
	XOR(bl, bl);
dummylabel2:
	// 4383 
	/* @@:		mov	NoMansLand,bl */
	nomansland = bl;
	// 0 ;-------------------------------------
	// 0 ;* sector wrap around for no mans land
	// 0 ;-------------------------------------
	/* and	dx,MAP_X_WRAP */
	AND(dx, 0x0001f);
	/* and	ax,MAP_Y_WRAP */
	AND(ax, 0x0001f);
	// 0 ;-------------------------------------
	// 0 ;* calc map index = x sec + y sec * 32
	// 0 ;-------------------------------------
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
	// 0 ;------------------------------------
	// 0 ;* draw complete sector or hills only
	// 0 ;------------------------------------
	/* mov	bp,ax */
	bp = ax;
	/* mov	HillsOnlyFlag,0 */
	hillsonlyflag = 0;
	// 0 ;* if hills in sector then do complete sector reject test
	/* mov	al,HillLayer9[bp] */
	al = *((&hilllayer9)+bp);
	/* rol	al,1 */
	ROL(al, 1);
	/* and	al,001h		;1 = hills in sector */
	AND(al, 0x001);
	/* mov	CompRejectTest,al */
	comprejecttest = al;
	// 0 ;* is x index inside or outside flat scan range?
	/* mov	ax,si */
	ax = si;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,FlatScanMaxOff */
	CMP(ax, flatscanmaxoff);
	/* ja	CheckForHills	;outside flat scan range -> */
	if ((dw)(ax) > (dw)(flatscanmaxoff)) {goto checkforhills;}
	// 0 ;* is y index inside or outside flat scan range?
	/* mov	ax,di */
	ax = di;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,FlatScanMaxOff */
	CMP(ax, flatscanmaxoff);
	/* jbe	ContSector1	;inside flat scan range -> */
	if ((dw)(ax) <= (dw)(flatscanmaxoff)) {goto contsector1;}
	// 0 ;* are there hills in this sector?
checkforhills:
	// 4385 
	/* CheckForHills:	mov	al,HillLayer9[bp] */
	al = *((&hilllayer9)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jns	SkipSector1	;no hills -> */
	if ((signed char)((al & al)) >= 0) {goto skipsector1;}
	/* mov	HillsOnlyFlag,1 */
	hillsonlyflag = 1;
	// 0 ;------------------------
	// 0 ;* calc sector scale mode
	// 0 ;------------------------
contsector1:
	// 4387 
	/* ContSector1:	call	CalcSctrScale */
	CALL(calcsctrscale, 0);
	// 0 ;-----------------------------------------------------------
	// 0 ;* calc sector centre position and test if sector is visible
	// 0 ;-----------------------------------------------------------
	/* call	CalcSctrCentre[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcsctrcentre)+bx));
	/* call	SectorReject[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&sectorreject)+bx));
	/* jc	SkipSector1	;sector non-visible -> */
	if (CF) {goto skipsector1;}
	/* inc	NumVisSctrs	;update visible sector counter */
	INC(numvissctrs);
	// 0 ;-----------------------------------
	// 0 ;* draw flat ground detail and hills
	// 0 ;-----------------------------------
	/* test	HillsOnlyFlag,1	;hills only? */
	TEST(hillsonlyflag, 1);
	/* jnz	Hills 		;yes -> */
	if ((hillsonlyflag & 1) != 0) {goto hills;}
	/* call	DrawFeatures1 */
	CALL(drawfeatures1, 0);
	/* test	NoMansLand,1	;no man's land? */
	TEST(nomansland, 1);
	/* jnz	@F		;yes -> */
	if ((nomansland & 1) != 0) {goto dummylabel3;}
	/* call	DrawFeatures2 */
	CALL(drawfeatures2, 0);
dummylabel3:
	// 4389 
	/* @@:	       	call	DrawRivers */
	CALL(drawrivers, 0);
	/* call	DrawRoads */
	CALL(drawroads, 0);
	/* call	DrawRailways */
	CALL(drawrailways, 0);
	/* test	NoMansLand,1	;no man's land? */
	TEST(nomansland, 1);
	/* jnz	Hills		;yes -> */
	if ((nomansland & 1) != 0) {goto hills;}
	/* call	DrawSpecials */
	CALL(drawspecials, 0);
hills:
	// 4391 
	/* Hills: 		call	ScanHills */
	CALL(scanhills, 0);
	// 0 ;---------------
	// 0 ;* next x sector
	// 0 ;---------------
skipsector1:
	// 4393 
	/* SkipSector1:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,1		;x = x + 1 */
	ADD(si, 1);
	/* dec	cx */
	DEC(cx);
	/* jz	EndXLoop1 */
	if (cx == 0) {goto endxloop1;}
	/* jmp	ScanXLoop1 */
	goto scanxloop1;
endxloop1:
	// 4395 
	// 0 ;---------------
	// 0 ;* next y sector
	// 0 ;---------------
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* add	di,1		;y = y + 1 */
	ADD(di, 1);
	/* dec	cx */
	DEC(cx);
	/* jz	EndYLoop1 */
	if (cx == 0) {goto endyloop1;}
	/* jmp	ScanYLoop1 */
	goto scanyloop1;
endyloop1:
	// 4397 
	// 0 ;--------------------------------------
	// 0 ;* draw sector objects in 3 by 3 visual
	// 0 ;--------------------------------------
	// 0 ;* check if zft is above ground object z threshold
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&v_view+vp_zft_hi));
	/* test	ax,ax	   	;zft > 65,535ft? */
	TEST(ax, ax);
	/* jz	__m2c_macrolocal_4_skip */
	if (!(ax & ax)) {goto __m2c_macrolocal_4_skip;}
	/* jmp	ExitSectors */
	goto exitsectors;
__m2c_macrolocal_4_skip:
	// 4399 
	// 0 ;yes ->
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* cmp	ax,OBJ_Z_THRES	;zft >= z threshold? */
	CMP(ax, (16384-7500)*4);
	/* jb	__m2c_macrolocal_5_skip */
	if ((dw)(ax) < (dw)((16384-7500)*4)) {goto __m2c_macrolocal_5_skip;}
	/* jmp	ExitSectors */
	goto exitsectors;
__m2c_macrolocal_5_skip:
	// 4401 
	// 0 ;yes ->
	// 0 ;* always do complete sector reject test
	/* mov	CompRejectTest,1 */
	comprejecttest = 1;
	// 0 ;--------------------------------
	// 0 ;* for y sector offset = -1 to +1
	// 0 ;--------------------------------
	/* mov	cx,3		;y count */
	cx = 3;
	/* mov	di,-1		;y sector offset */
	di = -1;
scanyloop2:
	// 4403 
	/* ScanYLoop2:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;--------------------------------
	// 0 ;* for x sector offset = -1 to +1
	// 0 ;--------------------------------
	/* mov	cx,3		;x count */
	cx = 3;
	/* mov	si,-1		;x sector offset */
	si = -1;
scanxloop2:
	// 4405 
	/* ScanXLoop2:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;-------------------------
	// 0 ;* calc sector map co-ords
	// 0 ;-------------------------
	/* mov	ax,V_VIEW.VP_XSEC */
	ax = v_view.vp_xsec;
	/* add	ax,si		;x sec = vp x sec + x sec offset */
	ADD(ax, si);
	/* mov	dx,ax */
	dx = ax;
	/* mov	ax,V_VIEW.VP_YSEC */
	ax = v_view.vp_ysec;
	/* add	ax,di		;y sec = vp y sec + y sec offset */
	ADD(ax, di);
	/* mov	XSecScan,dx */
	xsecscan = dx;
	/* mov	YSecScan,ax */
	ysecscan = ax;
	// 0 ;-------------------------------------------------------
	// 0 ;* is the sector inside the map area or in no mans land?
	// 0 ;-------------------------------------------------------
	/* mov	bl,1		;assume outside map */
	bl = 1;
	/* cmp	dx,32		;x sec inside map? */
	CMP(dx, 32);
	/* jae	@F		;no -> */
	if ((dw)(dx) >= (dw)(32)) {goto dummylabel4;}
	/* cmp	ax,32		;y sec inside map? */
	CMP(ax, 32);
	/* jae	@F		;no -> */
	if ((dw)(ax) >= (dw)(32)) {goto dummylabel4;}
	/* xor	bl,bl */
	XOR(bl, bl);
dummylabel4:
	// 4407 
	/* @@:		mov	NoMansLand,bl */
	nomansland = bl;
	// 0 ;-------------------------------------
	// 0 ;* sector wrap around for no mans land
	// 0 ;-------------------------------------
	/* and	dx,MAP_X_WRAP */
	AND(dx, 0x0001f);
	/* and	ax,MAP_Y_WRAP */
	AND(ax, 0x0001f);
	// 0 ;-------------------------------------
	// 0 ;* calc map index = x sec + y sec * 32
	// 0 ;-------------------------------------
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
	// 0 ;------------------------
	// 0 ;* calc sector scale mode
	// 0 ;------------------------
	/* call	CalcSctrScale */
	CALL(calcsctrscale, 0);
	// 0 ;-----------------------------------------------------------
	// 0 ;* calc sector centre position and test if sector is visible
	// 0 ;-----------------------------------------------------------
	/* push	si		;store x sec offset */
	PUSH(si);
	/* push	di		;store y sec offset */
	PUSH(di);
	/* call	CalcSctrCentre[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcsctrcentre)+bx));
	/* call	SectorReject[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&sectorreject)+bx));
	/* pop	di		;restore y sec offset */
	POP(di);
	/* pop	si		;restore x sec offset */
	POP(si);
	/* jc	SkipSector2	;sector non-visible -> */
	if (CF) {goto skipsector2;}
	// 0 ;------------------------
	// 0 ;* draw objects in sector
	// 0 ;------------------------
	/* test	NoMansLand,1	;no man's land? */
	TEST(nomansland, 1);
	/* jnz	@F		;yes -> */
	if ((nomansland & 1) != 0) {goto dummylabel5;}
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	DrawSector */
	CALL(drawsector, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	DrawStatMobiles */
	CALL(drawstatmobiles, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
dummylabel5:
	// 4409 
	/* @@:		call	ScanTrees */
	CALL(scantrees, 0);
	// 0 ;---------------
	// 0 ;* next x sector
	// 0 ;---------------
skipsector2:
	// 4411 
	/* SkipSector2:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,1		;x = x + 1 */
	ADD(si, 1);
	/* loop	ScanXLoop2 */
	LOOP(scanxloop2);
	// 0 ;---------------
	// 0 ;* next y sector
	// 0 ;---------------
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* add	di,1		;y = y + 1 */
	ADD(di, 1);
	/* loop	ScanYLoop2 */
	LOOP(scanyloop2);
exitsectors:
	// 4413 
	/* ExitSectors:	ret */
	RETN(0);
calcsctrscale:
	// 995 
	/* mov	bx,SEC_SCALE16	;assume > 3 sectors */
	bx = 6;
edummylabel2:
	// 4415 
	/* mov	ax,si */
	ax = si;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x sec offset)
	/* cmp	ax,3	  	;> 3 sectors? */
	CMP(ax, 3);
	/* ja	SetScaleMode	;yes -> */
	if ((dw)(ax) > (dw)(3)) {goto setscalemode;}
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,di */
	ax = di;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(y sec offset)
	/* cmp	ax,3		;> 3 sectors? */
	CMP(ax, 3);
	/* ja	SetScaleMode	;yes -> */
	if ((dw)(ax) > (dw)(3)) {goto setscalemode;}
	/* mov	bp,ax */
	bp = ax;
	/* mov	bx,SEC_SCALE8	;assume zft >= 8,192ft */
	bx = 4;
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&v_view+vp_zft_hi));
	/* test	ax,ax		;zft > 65,535ft? */
	TEST(ax, ax);
	/* jnz	SetScaleMode	;yes -> */
	if ((ax & ax) != 0) {goto setscalemode;}
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* cmp	ax,8192		;zft >= 8,192ft? */
	CMP(ax, 8192);
	/* jae	SetScaleMode	;yes -> */
	if ((dw)(ax) >= (dw)(8192)) {goto setscalemode;}
	/* mov	bx,SEC_SCALE1	;assume current sector */
	bx = 0;
	/* mov	ax,si */
	ax = si;
	/* or	ax,di		;current sector? */
	OR(ax, di);
	/* jz	SetScaleMode	;yes -> */
	if (ax == 0) {goto setscalemode;}
	/* mov	bx,SEC_SCALE8	;assume not adjacent to current sector */
	bx = 4;
	/* cmp	cx,1		;adjacent to current sector? */
	CMP(cx, 1);
	/* ja	SetScaleMode	;no -> */
	if ((dw)(cx) > (dw)(1)) {goto setscalemode;}
	/* cmp	bp,1		;adjacent to current sector? */
	CMP(bp, 1);
	/* ja	SetScaleMode	;no -> */
	if ((dw)(bp) > (dw)(1)) {goto setscalemode;}
	/* mov	bx,SEC_SCALE2	;must be adjacent to current sector */
	bx = 2;
setscalemode:
	// 4417 
	/* SetScaleMode:	mov	SctrScaleMode,bx */
	sctrscalemode = bx;
	/* ret */
	RETN(0);
calccentre1:
	// 1046 
	// 0 ;* calc current sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 64 - XGrid1 + 32 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 64 - YGrid1 + 32 + 64) * 2
edummylabel3:
	// 4419 
	/* sub	si,XGrid1 */
	SUB(si, xgrid1);
	/* add	si,32+64 */
	ADD(si, 32+64);
	/* shl	si,1 */
	SHL(si, 1);
	/* sub	di,YGrid1 */
	SUB(di, ygrid1);
	/* add	di,32+64 */
	ADD(di, 32+64);
	/* shl	di,1 */
	SHL(di, 1);
	/* mov	ax,XE01 */
	ax = xe01;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos1,ax */
	xpos1 = ax;
	/* mov	ax,YE01 */
	ax = ye01;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos1,ax */
	ypos1 = ax;
	/* mov	ax,ZE01 */
	ax = ze01;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos1,ax */
	zpos1 = ax;
	/* ret */
	RETN(0);
calccentre2:
	// 1082 
	// 0 ;* calc 3 by 3 visual sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 32 - XGrid2 + 16 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 32 - YGrid2 + 16 + 64) * 2
edummylabel4:
	// 4421 
	/* neg	di		;-(y sec offset) */
	NEG(di);
	/* shl	si,1		;x sec offset * 32 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 32 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 32 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 32 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 32 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 32 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 32 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 32 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 32 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 32 */
	SHL(di, 1);
	/* sub	si,XGrid2 */
	SUB(si, xgrid2);
	/* add	si,16+64 */
	ADD(si, 16+64);
	/* shl	si,1 */
	SHL(si, 1);
	/* sub	di,YGrid2 */
	SUB(di, ygrid2);
	/* add	di,16+64 */
	ADD(di, 16+64);
	/* shl	di,1 */
	SHL(di, 1);
	/* mov	ax,XE02 */
	ax = xe02;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos2,ax */
	xpos2 = ax;
	/* mov	ax,YE02 */
	ax = ye02;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos2,ax */
	ypos2 = ax;
	/* mov	ax,ZE02 */
	ax = ze02;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos2,ax */
	zpos2 = ax;
	/* ret */
	RETN(0);
calccentre8:
	// 1130 
	// 0 ;* calc 7 by 7 visual sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 8 - XGrid8 + 4 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 8 - YGrid8 + 4 + 64) * 2
edummylabel5:
	// 4423 
	/* neg	di		;-(y sec offset) */
	NEG(di);
	/* shl	si,1		;x sec offset * 8 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 8 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 8 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 8 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 8 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 8 */
	SHL(di, 1);
	/* sub	si,XGrid8 */
	SUB(si, xgrid8);
	/* add	si,4+64 */
	ADD(si, 4+64);
	/* shl	si,1 */
	SHL(si, 1);
	/* sub	di,YGrid8 */
	SUB(di, ygrid8);
	/* add	di,4+64 */
	ADD(di, 4+64);
	/* shl	di,1 */
	SHL(di, 1);
	/* mov	ax,XE08 */
	ax = xe08;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos8,ax */
	xpos8 = ax;
	/* mov	ax,YE08 */
	ax = ye08;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos8,ax */
	ypos8 = ax;
	/* mov	ax,ZE08 */
	ax = ze08;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos8,ax */
	zpos8 = ax;
	/* ret */
	RETN(0);
calccentre16:
	// 1174 
	// 0 ;* calc 15 by 15 visual sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 4 - XGrid16 + 2 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 4 - YGrid16 + 2 + 64) * 2
edummylabel6:
	// 4425 
	/* neg	di		;-(y sec offset) */
	NEG(di);
	/* shl	si,1		;x sec offset * 4 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 4 */
	SHL(di, 1);
	/* shl	si,1		;x sec offset * 4 */
	SHL(si, 1);
	/* shl	di,1		;-(y sec offset) * 4 */
	SHL(di, 1);
	/* sub	si,XGrid16 */
	SUB(si, xgrid16);
	/* add	si,2+64 */
	ADD(si, 2+64);
	/* shl	si,1 */
	SHL(si, 1);
	/* sub	di,YGrid16 */
	SUB(di, ygrid16);
	/* add	di,2+64 */
	ADD(di, 2+64);
	/* shl	di,1 */
	SHL(di, 1);
	/* mov	ax,XE016 */
	ax = xe016;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos16,ax */
	xpos16 = ax;
	/* mov	ax,YE016 */
	ax = ye016;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* mov	YPos16,ax */
	ypos16 = ax;
	/* mov	ax,ZE016 */
	ax = ze016;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos16,ax */
	zpos16 = ax;
	/* ret */
	RETN(0);
testsector1:
	// 1215 
	/* clc			;current sector always visible */
	CLC;
edummylabel7:
	// 4427 
	/* ret */
	RETN(0);
viscode_0_proc:
	// 1229 
failsector2:
	// 4429 
	// 0 ;* kill: assume all (except cf)
	/* stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
failsector8:
	// 4437 
	// 0 ;* kill: assume all (except cf)
	/* stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
failsector16:
	// 4445 
	// 0 ;* kill: assume all (except cf)
	/* stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
testsector2:
	// 1232 
	// 0 ;-------------------------------
	// 0 ;* test if sector too far behind
	// 0 ;-------------------------------
edummylabel8:
	// 4431 
	/* mov	ax,YPos2 */
	ax = ypos2;
	/* cmp	ax,-SCTR_Y_THRES/2 */
	CMP(ax, -11600/2);
	/* jl	FailSector2 */
	if ((short)(ax) < (short)(-11600/2)) {goto failsector2;}
	// 0 ;--------------------------------------------------------------
	// 0 ;* test if sector perimeter at zft = 0ft and 4,096ft is visible
	// 0 ;--------------------------------------------------------------
	// 1244 X_INDEX		=	(32/2)*2
	// 1245 Y_INDEX		=	(32/2)*2
	// 1246 Z_INDEX		=	(16/2)*2
	/* mov	bx,XPos2 */
	bx = xpos2;
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,ZPos2 */
	dx = zpos2;
	// 0 ;* calc points for sector perimeter at zft = 0
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/2)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/2)*2)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/2)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/2)*2)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/2)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/2)*2)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/2)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/2)*2)));
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/2)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/2)*2)));
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/2)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/2)*2)));
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/2)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/2)*2)));
	/* mov	Xe[4],ax */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/2)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/2)*2)));
	/* mov	Ye[4],ax */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/2)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/2)*2)));
	/* mov	Ze[4],ax */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/2)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/2)*2)));
	/* mov	Xe[6],ax */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/2)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/2)*2)));
	/* mov	Ye[6],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/2)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/2)*2)));
	/* mov	Ze[6],ax */
	*(dw*)(((db*)&ze)+6) = ax;
	/* test	CompRejectTest,1	;complete sector reject test? */
	TEST(comprejecttest, 1);
	/* jnz	@F			;yes -> */
	if ((comprejecttest & 1) != 0) {goto dummylabel6;}
	/* jmp	FastSector2 */
	goto fastsector2;
	// 0 ;* calc points for sector perimeter at zft = 4,096
dummylabel6:
	// 4433 
	/* @@:		add	bx,XSZ[Z_INDEX] */
	ADD(bx, *(dw*)(((db*)&xsz)+((16/2)*2)));
	/* add	cx,YSZ[Z_INDEX] */
	ADD(cx, *(dw*)(((db*)&ysz)+((16/2)*2)));
	/* add	dx,ZSZ[Z_INDEX] */
	ADD(dx, *(dw*)(((db*)&zsz)+((16/2)*2)));
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/2)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/2)*2)));
	/* mov	Xe[8],ax */
	*(dw*)(((db*)&xe)+8) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/2)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/2)*2)));
	/* mov	Ye[8],ax */
	*(dw*)(((db*)&ye)+8) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/2)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/2)*2)));
	/* mov	Ze[8],ax */
	*(dw*)(((db*)&ze)+8) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/2)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/2)*2)));
	/* mov	Xe[10],ax */
	*(dw*)(((db*)&xe)+10) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/2)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/2)*2)));
	/* mov	Ye[10],ax */
	*(dw*)(((db*)&ye)+10) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/2)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/2)*2)));
	/* mov	Ze[10],ax */
	*(dw*)(((db*)&ze)+10) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/2)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/2)*2)));
	/* mov	Xe[12],ax */
	*(dw*)(((db*)&xe)+12) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/2)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/2)*2)));
	/* mov	Ye[12],ax */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/2)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/2)*2)));
	/* mov	Ze[12],ax */
	*(dw*)(((db*)&ze)+12) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/2)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/2)*2)));
	/* mov	Xe[14],ax */
	*(dw*)(((db*)&xe)+14) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/2)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/2)*2)));
	/* mov	Ye[14],ax */
	*(dw*)(((db*)&ye)+14) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/2)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/2)*2)));
	/* mov	Ze[14],ax */
	*(dw*)(((db*)&ze)+14) = ax;
	/* mov	si,14 */
	si = 14;
	/* call	QuickOutCodes */
	CALL(quickoutcodes, 0);
	/* ret */
	RETN(0);
fastsector2:
	// 4435 
	/* FastSector2:	mov	si,6 */
	si = 6;
	/* call	QuickOutCodes */
	CALL(quickoutcodes, 0);
	/* ret */
	RETN(0);
testsector8:
	// 1376 
	// 0 ;-------------------------------
	// 0 ;* test if sector too far behind
	// 0 ;-------------------------------
edummylabel9:
	// 4439 
	/* mov	ax,YPos8 */
	ax = ypos8;
	/* cmp	ax,-SCTR_Y_THRES/8 */
	CMP(ax, -11600/8);
	/* jl	FailSector8 */
	if ((short)(ax) < (short)(-11600/8)) {goto failsector8;}
	// 0 ;--------------------------------------------------------------
	// 0 ;* test if sector perimeter at zft = 0ft and 4,096ft is visible
	// 0 ;--------------------------------------------------------------
	// 1388 X_INDEX		=	(32/8)*2
	// 1389 Y_INDEX		=	(32/8)*2
	// 1390 Z_INDEX		=	(16/8)*2
	/* mov	bx,XPos8 */
	bx = xpos8;
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,ZPos8 */
	dx = zpos8;
	// 0 ;* calc points for sector perimeter at zft = 0
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/8)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/8)*2)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/8)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/8)*2)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/8)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/8)*2)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/8)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/8)*2)));
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/8)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/8)*2)));
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/8)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/8)*2)));
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/8)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/8)*2)));
	/* mov	Xe[4],ax */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/8)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/8)*2)));
	/* mov	Ye[4],ax */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/8)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/8)*2)));
	/* mov	Ze[4],ax */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/8)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/8)*2)));
	/* mov	Xe[6],ax */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/8)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/8)*2)));
	/* mov	Ye[6],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/8)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/8)*2)));
	/* mov	Ze[6],ax */
	*(dw*)(((db*)&ze)+6) = ax;
	/* test	CompRejectTest,1	;complete sector reject test? */
	TEST(comprejecttest, 1);
	/* jnz	@F			;yes -> */
	if ((comprejecttest & 1) != 0) {goto dummylabel7;}
	/* jmp	FastSector8 */
	goto fastsector8;
	// 0 ;* calc points for sector perimeter at zft = 4,096
dummylabel7:
	// 4441 
	/* @@:		add	bx,XSZ[Z_INDEX] */
	ADD(bx, *(dw*)(((db*)&xsz)+((16/8)*2)));
	/* add	cx,YSZ[Z_INDEX] */
	ADD(cx, *(dw*)(((db*)&ysz)+((16/8)*2)));
	/* add	dx,ZSZ[Z_INDEX] */
	ADD(dx, *(dw*)(((db*)&zsz)+((16/8)*2)));
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/8)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/8)*2)));
	/* mov	Xe[8],ax */
	*(dw*)(((db*)&xe)+8) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/8)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/8)*2)));
	/* mov	Ye[8],ax */
	*(dw*)(((db*)&ye)+8) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/8)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/8)*2)));
	/* mov	Ze[8],ax */
	*(dw*)(((db*)&ze)+8) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/8)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/8)*2)));
	/* mov	Xe[10],ax */
	*(dw*)(((db*)&xe)+10) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/8)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/8)*2)));
	/* mov	Ye[10],ax */
	*(dw*)(((db*)&ye)+10) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/8)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/8)*2)));
	/* mov	Ze[10],ax */
	*(dw*)(((db*)&ze)+10) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/8)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/8)*2)));
	/* mov	Xe[12],ax */
	*(dw*)(((db*)&xe)+12) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/8)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/8)*2)));
	/* mov	Ye[12],ax */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/8)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/8)*2)));
	/* mov	Ze[12],ax */
	*(dw*)(((db*)&ze)+12) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/8)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/8)*2)));
	/* mov	Xe[14],ax */
	*(dw*)(((db*)&xe)+14) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/8)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/8)*2)));
	/* mov	Ye[14],ax */
	*(dw*)(((db*)&ye)+14) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/8)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/8)*2)));
	/* mov	Ze[14],ax */
	*(dw*)(((db*)&ze)+14) = ax;
	/* mov	si,14 */
	si = 14;
	/* call	QuickOutCodes */
	CALL(quickoutcodes, 0);
	/* ret */
	RETN(0);
fastsector8:
	// 4443 
	/* FastSector8: 	mov	si,6 */
	si = 6;
	/* call	QuickOutCodes */
	CALL(quickoutcodes, 0);
	/* ret */
	RETN(0);
testsector16:
	// 1520 
	// 0 ;-------------------------------
	// 0 ;* test if sector too far behind
	// 0 ;-------------------------------
edummylabel10:
	// 4447 
	/* mov	ax,YPos16 */
	ax = ypos16;
	/* cmp	ax,-SCTR_Y_THRES/16 */
	CMP(ax, -11600/16);
	/* jl	FailSector16 */
	if ((short)(ax) < (short)(-11600/16)) {goto failsector16;}
	// 0 ;--------------------------------------------------------------
	// 0 ;* test if sector perimeter at zft = 0ft and 4,096ft is visible
	// 0 ;--------------------------------------------------------------
	// 1532 X_INDEX		=	(32/16)*2
	// 1533 Y_INDEX		=	(32/16)*2
	// 1534 Z_INDEX		=	(16/16)*2
	/* mov	bx,XPos16 */
	bx = xpos16;
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,ZPos16 */
	dx = zpos16;
	// 0 ;* calc points for sector perimeter at zft = 0
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/16)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/16)*2)));
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/16)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/16)*2)));
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/16)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/16)*2)));
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/16)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/16)*2)));
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/16)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/16)*2)));
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/16)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/16)*2)));
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/16)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/16)*2)));
	/* mov	Xe[4],ax */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/16)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/16)*2)));
	/* mov	Ye[4],ax */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/16)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/16)*2)));
	/* mov	Ze[4],ax */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/16)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/16)*2)));
	/* mov	Xe[6],ax */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/16)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/16)*2)));
	/* mov	Ye[6],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/16)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/16)*2)));
	/* mov	Ze[6],ax */
	*(dw*)(((db*)&ze)+6) = ax;
	/* test	CompRejectTest,1	;complete sector reject test? */
	TEST(comprejecttest, 1);
	/* jnz	@F			;yes -> */
	if ((comprejecttest & 1) != 0) {goto dummylabel8;}
	/* jmp	FastSector16 */
	goto fastsector16;
	// 0 ;* calc points for sector perimeter at zft = 4,096
dummylabel8:
	// 4449 
	/* @@:		add	bx,XSZ[Z_INDEX] */
	ADD(bx, *(dw*)(((db*)&xsz)+((16/16)*2)));
	/* add	cx,YSZ[Z_INDEX] */
	ADD(cx, *(dw*)(((db*)&ysz)+((16/16)*2)));
	/* add	dx,ZSZ[Z_INDEX] */
	ADD(dx, *(dw*)(((db*)&zsz)+((16/16)*2)));
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/16)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/16)*2)));
	/* mov	Xe[8],ax */
	*(dw*)(((db*)&xe)+8) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/16)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/16)*2)));
	/* mov	Ye[8],ax */
	*(dw*)(((db*)&ye)+8) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/16)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/16)*2)));
	/* mov	Ze[8],ax */
	*(dw*)(((db*)&ze)+8) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128+((32/16)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/16)*2)));
	/* mov	Xe[10],ax */
	*(dw*)(((db*)&xe)+10) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128+((32/16)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/16)*2)));
	/* mov	Ye[10],ax */
	*(dw*)(((db*)&ye)+10) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID+X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128+((32/16)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/16)*2)));
	/* mov	Ze[10],ax */
	*(dw*)(((db*)&ze)+10) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/16)*2)));
	/* add	ax,XSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128-((32/16)*2)));
	/* mov	Xe[12],ax */
	*(dw*)(((db*)&xe)+12) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/16)*2)));
	/* add	ax,YSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128-((32/16)*2)));
	/* mov	Ye[12],ax */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/16)*2)));
	/* add	ax,ZSY[$MID-Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128-((32/16)*2)));
	/* mov	Ze[12],ax */
	*(dw*)(((db*)&ze)+12) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,XSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsx)+128-((32/16)*2)));
	/* add	ax,XSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&xsy)+128+((32/16)*2)));
	/* mov	Xe[14],ax */
	*(dw*)(((db*)&xe)+14) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,YSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysx)+128-((32/16)*2)));
	/* add	ax,YSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&ysy)+128+((32/16)*2)));
	/* mov	Ye[14],ax */
	*(dw*)(((db*)&ye)+14) = ax;
	/* mov	ax,dx */
	ax = dx;
	/* add	ax,ZSX[$MID-X_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsx)+128-((32/16)*2)));
	/* add	ax,ZSY[$MID+Y_INDEX] */
	ADD(ax, *(dw*)(((db*)&zsy)+128+((32/16)*2)));
	/* mov	Ze[14],ax */
	*(dw*)(((db*)&ze)+14) = ax;
	/* mov	si,14 */
	si = 14;
	/* call	QuickOutCodes */
	CALL(quickoutcodes, 0);
	/* ret */
	RETN(0);
fastsector16:
	// 4451 
	/* FastSector16:	mov	si,6 */
	si = 6;
	/* call	QuickOutCodes */
	CALL(quickoutcodes, 0);
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
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::kcalccentre1: 	goto calccentre1;
        case m2c::kcalccentre16: 	goto calccentre16;
        case m2c::kcalccentre2: 	goto calccentre2;
        case m2c::kcalccentre8: 	goto calccentre8;
        case m2c::kcalcsctrscale: 	goto calcsctrscale;
        case m2c::kcheckforhills: 	goto checkforhills;
        case m2c::kcontsector1: 	goto contsector1;
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
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kendxloop1: 	goto endxloop1;
        case m2c::kendyloop1: 	goto endyloop1;
        case m2c::kexitsectors: 	goto exitsectors;
        case m2c::kfailsector16: 	goto failsector16;
        case m2c::kfailsector2: 	goto failsector2;
        case m2c::kfailsector8: 	goto failsector8;
        case m2c::kfastsector16: 	goto fastsector16;
        case m2c::kfastsector2: 	goto fastsector2;
        case m2c::kfastsector8: 	goto fastsector8;
        case m2c::khills: 	goto hills;
        case m2c::kmaxscansize: 	goto maxscansize;
        case m2c::kscansectors: 	goto scansectors;
        case m2c::kscanxloop1: 	goto scanxloop1;
        case m2c::kscanxloop2: 	goto scanxloop2;
        case m2c::kscanyloop1: 	goto scanyloop1;
        case m2c::kscanyloop2: 	goto scanyloop2;
        case m2c::ksetscalemode: 	goto setscalemode;
        case m2c::ksetscansize: 	goto setscansize;
        case m2c::kskipsector1: 	goto skipsector1;
        case m2c::kskipsector2: 	goto skipsector2;
        case m2c::ktestsector1: 	goto testsector1;
        case m2c::ktestsector16: 	goto testsector16;
        case m2c::ktestsector2: 	goto testsector2;
        case m2c::ktestsector8: 	goto testsector8;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        default: return __dispatch_call(__disp, _state);
    };
}


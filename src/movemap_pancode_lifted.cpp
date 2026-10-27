/* THIS IS GENERATED FILE */

        
#include "movemap.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updatemovingmap:
	// 2693 
	/* call	InitMovingMap ;* kill: assume all */
	CALL(initmovingmap, 0);
edummylabel1:
	// 4369 
	/* call	DrawGround */
	CALL(drawground, 0);
	// 0 ;------------------------------------------
	// 0 ;* for y sector = -ScanOffset to ScanOffset
	// 0 ;------------------------------------------
	/* mov	cx,ScanSize */
	cx = scansize;
	/* mov	di,ScanOffset */
	di = scanoffset;
scanyloop:
	// 4371 
	/* ScanYLoop:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;------------------------------------------
	// 0 ;* for x sector = -ScanOffset to ScanOffset
	// 0 ;------------------------------------------
	/* mov	cx,ScanSize */
	cx = scansize;
	/* mov	si,ScanOffset */
	si = scanoffset;
scanxloop:
	// 4373 
	/* ScanXLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;-------------------------
	// 0 ;* calc sector map co-ords
	// 0 ;-------------------------
	/* mov	ax,MAP_VIEW.VP_XSEC */
	ax = map_view.vp_xsec;
	/* add	ax,si		;x sec = vp x sec + x sec offset */
	ADD(ax, si);
	/* mov	dx,ax */
	dx = ax;
	/* mov	ax,MAP_VIEW.VP_YSEC */
	ax = map_view.vp_ysec;
	/* add	ax,di		;y sec = vp y sec + y sec offset */
	ADD(ax, di);
	/* mov	XSec,dx */
	xsec = dx;
	/* mov	YSec,ax */
	ysec = ax;
	// 0 ;-------------------------------------------------------
	// 0 ;* is the sector inside the map area or in no mans land?
	// 0 ;-------------------------------------------------------
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
	// 4375 
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
	// 0 ;--------------------------------
	// 0 ;* calc sector reference position (lower left hand corner of sector)
	// 0 ;--------------------------------
	/* mov	cl,6		;prime for *64 */
	cl = 6;
	/* add	cl,SctrScale	;prime for * 64 * sector scale */
	ADD(cl, *(sctrscale));
	// 0 ;* XSecRef = x sec offset * 64 * sector scale - XGrid
	/* sal	si,cl */
	SAL(si, cl);
	/* sub	si,XGrid */
	SUB(si, xgrid);
	/* mov	XSecRef,si */
	xsecref = si;
	// 0 ;* YSecRef = -(y sec offset) * 64 * sector scale - YGrid
	/* neg	di		;flip y */
	NEG(di);
	/* sal	di,cl */
	SAL(di, cl);
	/* sub	di,YGrid */
	SUB(di, ygrid);
	/* mov	YSecRef,di */
	ysecref = di;
	// 0 ;------------------------
	// 0 ;* test if sector visible
	// 0 ;------------------------
	/* call	SectorReject */
	CALL(sectorreject, 0);
	/* jc	SkipSector	;sector non-visible -> */
	if (CF) {goto skipsector;}
	// 0 ;-------------
	// 0 ;* draw sector
	// 0 ;-------------
	/* call	DrawFeatures */
	CALL(drawfeatures, 0);
	/* call	DrawHills */
	CALL(drawhills, 0);
	/* call	DrawRivers */
	CALL(drawrivers, 0);
	/* call	DrawRoads */
	CALL(drawroads, 0);
	/* call	DrawRailways */
	CALL(drawrailways, 0);
	/* call	SortACDatum */
	CALL(sortacdatum, 0);
	/* test	NoMansLand,1	;no man's land? */
	TEST(nomansland, 1);
	/* jnz	SkipSector	;yes -> */
	if ((nomansland & 1) != 0) {goto skipsector;}
	/* call	DrawSpecials */
	CALL(drawspecials, 0);
	/* call	DrawGndObjects */
	CALL(drawgndobjects, 0);
	/* call	SortCurrentWP */
	CALL(sortcurrentwp, 0);
	/* call	SortFloatWP */
	CALL(sortfloatwp, 0);
	// 0 ;* Only draw mobiles if in ground radar mode. Draw mobiles last so that they
	// 0 ;* have highest priority. Only show mobiles on active map (they should never
	// 0 ;* stray outside and if they do then they are of no interest).
	/* test	GndRadar,1	;ground radar mode? */
	TEST(gndradar, 1);
	/* jz	SkipSector	;no -> */
	if (!(gndradar & 1)) {goto skipsector;}
	// 0 ;* check sector is in radar range
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* sub	ax,XSec */
	SUB(ax, xsec);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,RadarRange	;in range? */
	CMP(ax, radarrange);
	/* ja	SkipSector	;no -> */
	if ((dw)(ax) > (dw)(radarrange)) {goto skipsector;}
	/* mov	ax,M_VIEW.VP_YSEC */
	ax = m_view.vp_ysec;
	/* sub	ax,YSec */
	SUB(ax, ysec);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,RadarRange	;in range? */
	CMP(ax, radarrange);
	/* ja	SkipSector	;no -> */
	if ((dw)(ax) > (dw)(radarrange)) {goto skipsector;}
	/* mov	QuadTested,0000b	;clear quad tested flags */
	quadtested = 0x0;
	/* mov	QuadResult,1111b	;clear quad result flags */
	quadresult = 0xf;
	/* call	DrawStatMobiles */
	CALL(drawstatmobiles, 0);
	/* call	DrawMobiles */
	CALL(drawmobiles, 0);
	// 0 ;---------------
	// 0 ;* next x sector
	// 0 ;---------------
skipsector:
	// 4377 
	/* SkipSector:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* inc	si		;x = x + 1 */
	INC(si);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_3_skip */
	if (cx == 0) {goto __m2c_macrolocal_3_skip;}
	/* jmp	ScanXLoop */
	goto scanxloop;
__m2c_macrolocal_3_skip:
	// 4379 
	// 0 ;---------------
	// 0 ;* next y sector
	// 0 ;---------------
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* inc	di		;y = y + 1 */
	INC(di);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_4_skip */
	if (cx == 0) {goto __m2c_macrolocal_4_skip;}
	/* jmp	ScanYLoop */
	goto scanyloop;
__m2c_macrolocal_4_skip:
	// 4381 
	/* ret */
	RETF(0);
initmovingmap:
	// 2857 
	/* mov	DispType,ax ;* kill: assume all */
	disptype = ax;
	// 0 ;Original was blank
edummylabel2:
	// 4383 
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne frankie_1 */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto frankie_1;}
	/* cmp	DispType,MAP_HALF_DISP */
	CMP(disptype, 4);
	/* je @F */
	if ((dw)(disptype) == (dw)(4)) {goto dummylabel2;}
	/* jmp hopstepleap2 */
	goto hopstepleap2;
dummylabel2:
	// 4385 
	/* cmp EScopeToggle,10 */
	CMP(escopetoggle, 10);
	/* jbe check2 */
	if ((dw)(escopetoggle) <= (dw)(10)) {goto check2;}
	/* ret */
	RETN(0);
check2:
	// 4387 
	/* cmp EScopeToggle,0 */
	CMP(escopetoggle, 0);
	/* jg assign096 */
	if ((short)(escopetoggle) > (short)(0)) {goto assign096;}
	/* ret */
	RETN(0);
assign096:
	// 4389 
	/* mov cx, 0 */
	cx = 0;
	/* mov bl,96 */
	bl = 96;
hopstepleap2:
	// 4391 
	// 0 ;Original was blank
frankie_1:
	// 4393 
	/* mov	GndRadar,bh */
	gndradar = bh;
	/* mov	Zoom,dx */
	zoom = dx;
	/* mov	Origin,bp */
	origin = bp;
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel3;}
	/* mov	VP.V_X_ORG,cx */
	vp.v_x_org = cx;
	/* mov	BYTE PTR VP.V_Y_ORG,bl */
	vp.v_y_org = bl;
	/* jmp frankie_6 */
	goto frankie_6;
dummylabel3:
	// 4395 
	/* mov	VP_FULL.V_X_ORG,cx */
	vp_full.v_x_org = cx;
	/* mov	BYTE PTR VP_FULL.V_Y_ORG,bl */
	vp_full.v_y_org = bl;
frankie_6:
	// 4397 
	/* mov	di,OFFSET MAP_VIEW */
	di = m2c::near_offset_external(map_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 2894 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2895 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;-------------
	// 0 ;* sort origin
	// 0 ;-------------
	// 0 ;cmp	DispType,MAP_HALF_DISP	;BIG display?
	/* cmp	DispType,MAP_FULL_DISP	;BIG display? */
	CMP(disptype, 4);
	/* je	SortDisp		;yes -> */
	if ((dw)(disptype) == (dw)(4)) {goto sortdisp;}
	/* cmp	Origin,MAP_ORG_CENTRE	;map origin at display centre? */
	CMP(origin, 0);
	/* je	SortDisp		;yes -> */
	if ((dw)(origin) == (dw)(0)) {goto sortdisp;}
	// 0 ;* lookup offset wrt zoom
	/* mov	si,OFFSET MFDBaseOrgTable	;assume MFD */
	si = m2c::near_offset_external(mfdbaseorgtable);
	/* cmp	DispType,MAP_MFD_DISP	;MFD? */
	CMP(disptype, 0);
	/* je	@F			;yes -> */
	if ((dw)(disptype) == (dw)(0)) {goto dummylabel4;}
	/* mov	si,OFFSET TABBaseOrgTable */
	si = m2c::near_offset_external(tabbaseorgtable);
dummylabel4:
	// 4399 
	/* @@:		mov	bx,Zoom */
	bx = zoom;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	bp,[si+bx+0] */
	bp = m2c::getdata(*(dw*)(raddr(ds,si+bx+0)));
	/* push	[si+bx+2]	;store result scale up */
	PUSH(*(dw*)(raddr(ds,si+bx+2)));
	// 0 ;* rotate offset wrt hdg (note: y = offset, x = 0)
	/* mov	ax,MAP_VIEW.VP_HDG */
	ax = map_view.vp_hdg;
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 2923 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 2924 						mov	di,CosTable[bx] */
	// 0 ;si = sin(hdg), di = cos(hdg)
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* yr = y.cos(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* xr = y.sin(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	// 0 ;* offset viewpoint
	/* pop	bp		;restore result scale up */
	POP(bp);
	/* test	bp,bp		;scale result? */
	TEST(bp, bp);
	/* jz	SkipScaleUp	;no -> */
	if (!(bp & bp)) {goto skipscaleup;}
dummylabel5:
	// 4401 
	/* @@:		shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* dec	bp */
	DEC(bp);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel5;}
skipscaleup:
	// 4403 
	/* SkipScaleUp:	mov	si,OFFSET MAP_VIEW */
	si = m2c::near_offset_external(map_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	// 0 ;-------------------
	// 0 ;* sort display size
	// 0 ;-------------------
sortdisp:
	// 4405 
	/* SortDisp:	mov	bx,DispType */
	bx = disptype;
	/* mov	si,DispDataTable[bx]	;ptr disp data table */
	si = *(dw*)(((db*)&dispdatatable)+bx);
	/* shl	bx,1			;(*4 index) */
	SHL(bx, 1);
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel6;}
	/* mov	ax,DispSizeTableHalf[bx+0]	;width */
	ax = *(dw*)(((db*)dispsizetablehalf)+bx+0);
	/* mov	VP.V_WIDTH,ax */
	vp.v_width = ax;
	/* mov	ax,DispSizeTableHalf[bx+2]	;depth */
	ax = *(dw*)(((db*)dispsizetablehalf)+bx+2);
	/* mov	VP.V_DEPTH,ax */
	vp.v_depth = ax;
	/* jmp frankie_4 */
	goto frankie_4;
dummylabel6:
	// 4407 
	/* mov	ax,DispSizeTableFull[bx+0]	;width */
	ax = *(dw*)(((db*)dispsizetablefull)+bx+0);
	/* mov	VP_FULL.V_WIDTH,ax */
	vp_full.v_width = ax;
	/* mov	ax,DispSizeTableFull[bx+2]	;depth */
	ax = *(dw*)(((db*)dispsizetablefull)+bx+2);
	/* mov	VP_FULL.V_DEPTH,ax */
	vp_full.v_depth = ax;
frankie_4:
	// 4409 
	// 0 ;-----------------
	// 0 ;* sort zoom level
	// 0 ;-----------------
	/* mov	bx,Zoom */
	bx = zoom;
	/* shl	bx,1			;(*4 index) */
	SHL(bx, 1);
	/* mov	al,[si+bx+0]  	;scan size */
	al = m2c::getdata(*(raddr(ds,si+bx+0)));
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	ScanSize,ax */
	scansize = ax;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* neg	ax */
	NEG(ax);
	/* mov	ScanOffset,ax */
	scanoffset = ax;
	/* mov	al,[si+bx+1]	;sector scale */
	al = m2c::getdata(*(raddr(ds,si+bx+1)));
	/* mov	SctrScale,al */
	*(sctrscale) = al;
	/* mov	al,[si+bx+2]	;scale up */
	al = m2c::getdata(*(raddr(ds,si+bx+2)));
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel7;}
	/* mov	VP.V_SCALE_UP,al */
	vp.v_scale_up = al;
	/* mov	al,[si+bx+3]	;scale down */
	al = m2c::getdata(*(raddr(ds,si+bx+3)));
	/* mov	VP.V_SCALE_DN,al */
	vp.v_scale_dn = al;
	/* jmp frankie_7 */
	goto frankie_7;
dummylabel7:
	// 4411 
	/* mov	VP_FULL.V_SCALE_UP,al */
	vp_full.v_scale_up = al;
	/* mov	al,[si+bx+3]	;scale down */
	al = m2c::getdata(*(raddr(ds,si+bx+3)));
	/* mov	VP_FULL.V_SCALE_DN,al */
	vp_full.v_scale_dn = al;
frankie_7:
	// 4413 
	// 0 ;------------------
	// 0 ;* calc radar range
	// 0 ;------------------
	// 0 ;* radar range = (zft / 1024) + 2
	/* mov	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* shr	ax,1		;/1024 */
	SHR(ax, 1);
	/* shr	ax,1		;/1024 */
	SHR(ax, 1);
	/* add	ax,2 */
	ADD(ax, 2);
	/* mov	RadarRange,ax */
	radarrange = ax;
	// 0 ;* assume current waypoint invalid / non-visible
	/* mov	CurrentWPX,-1 */
	currentwpx = -1;
	/* mov	CurrentWPY,-1 */
	currentwpy = -1;
	// 0 ;* assume floating waypoint invalid / non-visible
	/* mov	FloatWPX,-1 */
	floatwpx = -1;
	/* mov	FloatWPY,-1 */
	floatwpy = -1;
	// 0 ;* assume aircraft non-visible
	/* mov	ACDatumX,-1 */
	acdatumx = -1;
	/* mov	ACDatumY,-1 */
	acdatumy = -1;
	// 0 ;---------------------
	// 0 ;* initialize viewport
	// 0 ;---------------------
	/* mov	ax,MAP_VIEW.VP_HDG */
	ax = map_view.vp_hdg;
	/* neg	ax   		;negate hdg */
	NEG(ax);
	/* and 	ax,001ffh */
	AND(ax, 0x001ff);
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel8;}
	/* mov	si,OFFSET VP */
	si = m2c::near_offset_external(vp);
	/* jmp frankie_5 */
	goto frankie_5;
dummylabel8:
	// 4415 
	/* mov	si,OFFSET VP_FULL */
	si = m2c::near_offset_external(vp_full);
frankie_5:
	// 4417 
	/* call	VSetViewport */
	CALLF(vsetviewport, 0);
	// 0 ;---------------------
	// 0 ;* sort grid positions
	// 0 ;---------------------
	// 0 ;* XGrid = (xft + 8192) * sector scale / 256 + 1/2 bit
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	ax,MAP_VIEW.VP_XFT */
	ax = map_view.vp_xft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	al,ah		;/256 */
	al = ah;
	/* shl	ah,1 */
	SHL(ah, 1);
	/* mov	ah,0 */
	ah = 0;
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	XGrid,ax */
	xgrid = ax;
	// 0 ;* YGrid = (yft + 8192) * sector scale / 256 + 1/2 bit
	/* mov	ax,MAP_VIEW.VP_YFT */
	ax = map_view.vp_yft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	al,ah		;/256 */
	al = ah;
	/* shl	ah,1 */
	SHL(ah, 1);
	/* mov	ah,0 */
	ah = 0;
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	YGrid,ax */
	ygrid = ax;
	/* ret */
	RETN(0);
drawground:
	// 3083 
	/* cmp SplitScreenBigMapIsOn,1 ;* kill: assume all */
	CMP(splitscreenbigmapison, 1);
edummylabel3:
	// 4419 
	/* jne @F */
	if (!ZF) {goto dummylabel9;}
	/* mov	cx,VP.V_X_ORG */
	cx = vp.v_x_org;
	/* mov	bl,BYTE PTR VP.V_Y_ORG */
	bl = vp.v_y_org;
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,VP.V_WIDTH */
	ADD(dx, vp.v_width);
	/* dec	dx */
	DEC(dx);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,BYTE PTR VP.V_DEPTH */
	ADD(bh, vp.v_depth);
	/* jmp frankie_8 */
	goto frankie_8;
dummylabel9:
	// 4421 
	/* mov	cx,VP_FULL.V_X_ORG */
	cx = vp_full.v_x_org;
	/* mov	bl,BYTE PTR VP_FULL.V_Y_ORG */
	bl = vp_full.v_y_org;
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,VP_FULL.V_WIDTH */
	ADD(dx, vp_full.v_width);
	/* dec	dx */
	DEC(dx);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,BYTE PTR VP_FULL.V_DEPTH */
	ADD(bh, vp_full.v_depth);
frankie_8:
	// 4423 
	/* dec	bh */
	DEC(bh);
	/* mov	al,COL_MAP_GND1 */
	al = 144;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* ret */
	RETN(0);
sectorreject:
	// 3117 
	/* mov	cl,SctrScale ;* kill: assume all (except cf) */
	cl = *(sctrscale);
edummylabel4:
	// 4425 
	/* mov	dx,64 */
	dx = 64;
	/* sal	dx,cl */
	SAL(dx, cl);
	/* mov	ax,XSecRef */
	ax = xsecref;
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Xe[4],ax */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	Xe[6],ax */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,YSecRef */
	ax = ysecref;
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Ye[6],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	Ye[4],ax */
	*(dw*)(((db*)&ye)+4) = ax;
	/* mov	si,6 */
	si = 6;
	/* call	VQuickOutCodes */
	CALLF(vquickoutcodes, 0);
	/* ret */
	RETN(0);
drawroads:
	// 3147 
	/* mov	bp,MapIndex ;* note: Refer to ROADS.ASM for road data format. */
	bp = mapindex;
edummylabel5:
	// 4427 
	/* mov	al,RoadLayer1[bp] */
	al = *((&roadlayer1)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jz	@F */
	if (!(al & al)) {goto dummylabel10;}
	/* mov	si,16		;x node */
	si = 16;
	/* mov	di,48		;y node */
	di = 48;
	/* call	DrawRoadNode */
	CALL(drawroadnode, 0);
	/* mov	bp,MapIndex */
	bp = mapindex;
dummylabel10:
	// 4429 
	/* @@:		mov	al,RoadLayer2[bp] */
	al = *((&roadlayer2)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jz	@F */
	if (!(al & al)) {goto dummylabel11;}
	/* mov	si,48		;x node */
	si = 48;
	/* mov	di,48		;y node */
	di = 48;
	/* call	DrawRoadNode */
	CALL(drawroadnode, 0);
	/* mov	bp,MapIndex */
	bp = mapindex;
dummylabel11:
	// 4431 
	/* @@:		mov	al,RoadLayer3[bp] */
	al = *((&roadlayer3)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jz	@F */
	if (!(al & al)) {goto dummylabel12;}
	/* mov	si,16		;x node */
	si = 16;
	/* mov	di,16		;y node */
	di = 16;
	/* call	DrawRoadNode */
	CALL(drawroadnode, 0);
	/* mov	bp,MapIndex */
	bp = mapindex;
dummylabel12:
	// 4433 
	/* @@:		mov	al,RoadLayer4[bp] */
	al = *((&roadlayer4)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jz	@F */
	if (!(al & al)) {goto dummylabel13;}
	/* mov	si,48		;x node */
	si = 48;
	/* mov	di,16		;y node */
	di = 16;
	/* call	DrawRoadNode */
	CALL(drawroadnode, 0);
dummylabel13:
	// 4435 
	/* @@:		ret */
	RETN(0);
drawroadnode:
	// 3188 
	/* mov	cl,SctrScale ;* kill: assume all */
	cl = *(sctrscale);
edummylabel6:
	// 4437 
	/* sal	si,cl */
	SAL(si, cl);
	/* add	si,XSecRef */
	ADD(si, xsecref);
	/* sal	di,cl */
	SAL(di, cl);
	/* add	di,YSecRef */
	ADD(di, ysecref);
	/* mov	NodeX,si */
	nodex = si;
	/* mov	NodeY,di */
	nodey = di;
	/* xor	bx,bx		;index */
	XOR(bx, bx);
drawnextroad:
	// 4439 
	/* DrawNextRoad:	shr	al,1		;road to draw? */
	SHR(al, 1);
	/* jnc	SkipRoad	;no -> */
	if (!CF) {goto skiproad;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	ax,NodeX */
	ax = nodex;
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	dx,RoadEndTable[bx+0]	;x */
	dx = *(dw*)(((db*)roadendtable)+bx+0);
	/* sal	dx,cl */
	SAL(dx, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,NodeY */
	ax = nodey;
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	dx,RoadEndTable[bx+2]	;y */
	dx = *(dw*)(((db*)roadendtable)+bx+2);
	/* sal	dx,cl */
	SAL(dx, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel14;}
	/* mov	al,COL_MAP_ROAD1 */
	al = 145;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel14:
	// 4441 
	/* @@:		pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
skiproad:
	// 4443 
	/* SkipRoad: 	add	bx,4		;next road */
	ADD(bx, 4);
	/* test	al,al		;any more roads? */
	TEST(al, al);
	/* jnz	DrawNextRoad	;yes -> */
	if ((al & al) != 0) {goto drawnextroad;}
	/* ret */
	RETN(0);
drawrailways:
	// 3239 
	/* mov	bp,MapIndex ;* note: Refer to RAILWAYS.ASM for road data format. */
	bp = mapindex;
edummylabel7:
	// 4445 
	/* mov	al,RailLayer1[bp] */
	al = *((&raillayer1)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jz	ExitRailways */
	if (!(al & al)) {goto exitrailways;}
	/* mov	si,32		;node x */
	si = 32;
	/* mov	di,32		;node y */
	di = 32;
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* sal	si,cl */
	SAL(si, cl);
	/* add	si,XSecRef */
	ADD(si, xsecref);
	/* sal	di,cl */
	SAL(di, cl);
	/* add	di,YSecRef */
	ADD(di, ysecref);
	/* mov	NodeX,si */
	nodex = si;
	/* mov	NodeY,di */
	nodey = di;
	/* xor	bx,bx		;index */
	XOR(bx, bx);
drawnextrail:
	// 4447 
	/* DrawNextRail:	shr	al,1		;rail to draw? */
	SHR(al, 1);
	/* jnc	SkipRail	;no -> */
	if (!CF) {goto skiprail;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	ax,NodeX */
	ax = nodex;
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	dx,RailEndTable[bx+0]	;x */
	dx = *(dw*)(((db*)railendtable)+bx+0);
	/* sal	dx,cl */
	SAL(dx, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,NodeY */
	ax = nodey;
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	dx,RailEndTable[bx+2]	;y */
	dx = *(dw*)(((db*)railendtable)+bx+2);
	/* sal	dx,cl */
	SAL(dx, cl);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel15;}
	/* mov	al,COL_MAP_RAIL1 */
	al = 146;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel15:
	// 4449 
	/* @@:		pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
skiprail:
	// 4451 
	/* SkipRail: 	add	bx,4		;next rail */
	ADD(bx, 4);
	/* test	al,al		;any more rails? */
	TEST(al, al);
	/* jnz	DrawNextRail	;yes -> */
	if ((al & al) != 0) {goto drawnextrail;}
exitrailways:
	// 4453 
	/* ExitRailways:	ret */
	RETN(0);
drawrivers:
	// 3296 
	/* mov	bp,MapIndex ;* note: Refer to FEATURES.ASM for feature data format. */
	bp = mapindex;
edummylabel8:
	// 4455 
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
	// 4457 
	/* ExitRivers:	ret */
	RETN(0);
pancode_0_proc:
	// 3322 
exitfeatures1:
	// 4459 
	// 0 ;*       Draw lakes only on moving map (lakes must be in FeatureLayer1[]).
	/* ret */
	RETN(0);
drawfeatures:
	// 3324 
	/* mov	bp,MapIndex */
	bp = mapindex;
edummylabel9:
	// 4461 
	/* mov	al,FeatureLayer1[bp] */
	al = *((&featurelayer1)+bp);
	/* test	al,al		;null feature? */
	TEST(al, al);
	/* jz	ExitFeatures1	;yes -> */
	if (!(al & al)) {goto exitfeatures1;}
	/* cmp	al,LAKE_FEATURE	;lake? */
	CMP(al, lake_feature);
	/* ja	ExitFeatures1	;no -> */
	if ((db)(al) > (db)(lake_feature)) {goto exitfeatures1;}
	// 0 ;* fetch pointer to feature data
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	si,FeatureTable[bx] */
	si = *(dw*)(((db*)&featuretable)+bx);
intofeatures:
	// 4463 
	/* IntoFeatures:	mov	Col1,COL_MAP_RIVER1	;draw rivers / lakes only */
	col1 = 148;
	// 0 ;* skip visual range data
	/* add	si,2 */
	ADD(si, 2);
	// 0 ;------------------
	// 0 ;* scan vertex list (use SEC_SCALE1 or SEC_SCALE16 vertices wrt zoom)
	// 0 ;------------------
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	ch,0001b	;SEC_SCALE1 test mask */
	ch = 0x1;
	/* cmp	Zoom,MAP_ZOOM2	;use lower approximation? */
	CMP(zoom, 2);
	/* ja	@F		;no -> */
	if ((dw)(zoom) > (dw)(2)) {goto dummylabel16;}
	/* mov	ch,1000b	;SEC_SCALE16 test mask */
	ch = 0x8;
dummylabel16:
	// 4465 
	/* @@:		xor	di,di		;reset index */
	XOR(di, di);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
skipvertex1:
	// 4467 
	/* SkipVertex1:	add	si,2 */
	ADD(si, 2);
vertexloop1:
	// 4469 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch vertex flags
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ContFeatures	;yes -> */
	if ((db)(al) == (db)(-1)) {goto contfeatures;}
	/* test	al,ch		;vertex required? */
	TEST(al, ch);
	/* jz	SkipVertex1	;no -> */
	if (!(al & ch)) {goto skipvertex1;}
	// 0 ;* x grid = (v - 64) / 2
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x vertex
	/* xor	ah,ah */
	XOR(ah, ah);
	/* sub	ax,64 */
	SUB(ax, 64);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sal	ax,cl		;scale */
	SAL(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	// 0 ;* y grid = (v - 64) / 2
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y vertex
	/* xor	ah,ah */
	XOR(ah, ah);
	/* sub	ax,64 */
	SUB(ax, 64);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sal	ax,cl		;scale */
	SAL(ax, cl);
	/* add	ax,YSecRef */
	ADD(ax, ysecref);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
contfeatures:
	// 4471 
	/* ContFeatures:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;----------------------------
	// 0 ;* test if feature is visible
	// 0 ;----------------------------
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	VCalcOutCodes */
	CALLF(vcalcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitFeatures2	;non-visible -> */
	if (CF) {goto exitfeatures2;}
	// 0 ;------------------------------------------------------
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	// 0 ;------------------------------------------------------
	/* xor	bx,bx		;assume SEC_SCALE1 */
	XOR(bx, bx);
	/* cmp	Zoom,MAP_ZOOM2	;use lower approximation? */
	CMP(zoom, 2);
	/* ja	@F		;no -> */
	if ((dw)(zoom) > (dw)(2)) {goto dummylabel17;}
	/* mov	bx,6		;SEC_SCALE16 */
	bx = 6;
dummylabel17:
	// 4473 
	/* @@:		mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,[si+bx]	;point to face data */
	si = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
	/* lodsw			;fetch counter */
	{ LODSW; }
	/* mov	cx,ax */
	cx = ax;
	/* mov	di,OFFSET CopyBuffer */
	di = m2c::near_offset_external(copybuffer);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 3416 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 3418 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 3419 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3420 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;----------------
	// 0 ;* generate faces
	// 0 ;----------------
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextface:
	// 4475 
	/* NextFace:	lodsb			;fetch attribute */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	ExitFeatures2	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitfeatures2;}
	// 0 ;* line or polygon structure?
	/* test	al,FACE_STRUCTURE */
	TEST(al, 0x2);
	/* jnz	SortLine */
	if ((al & 0x2) != 0) {goto sortline;}
	// 0 ;* sort polygon structure
	/* lodsb			;fetch and ignore logical colour */
	{ LODSB; }
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
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
	// 4477 
	/* SortLine:   	lodsb			;fetch and ignore logical colour */
	{ LODSB; }
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyLineClip */
	CALLF(vpolylineclip, 0);
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
exitfeatures2:
	// 4479 
	/* ExitFeatures2:	ret */
	RETN(0);
pancode_3_proc:
	// 3471 
exithills:
	// 4481 
	// 0 ;* note: Refer to HILLS.ASM for feature data format.
	/* ret */
	RETN(0);
drawhills:
	// 3473 
	// 0 ;--------------------------
	// 0 ;* test for hills in sector
	// 0 ;--------------------------
edummylabel10:
	// 4483 
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer9[bp] */
	al = *((&hilllayer9)+bp);
	/* test	al,al		;null hills? */
	TEST(al, al);
	/* jns	ExitHills	;yes -> */
	if ((signed char)((al & al)) >= 0) {goto exithills;}
	// 0 ;--------------------------
	// 0 ;* calc spot height co-ords (ZA .. ZI)
	// 0 ;--------------------------
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	dx,32 */
	dx = 32;
	/* sal	dx,cl */
	SAL(dx, cl);
	/* mov	ax,XSecRef */
	ax = xsecref;
	/* mov	Xe[$ZA],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Xe[$ZD],ax */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	Xe[$ZG],ax */
	*(dw*)(((db*)&xe)+12) = ax;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Xe[$ZB],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	Xe[$ZE],ax */
	*(dw*)(((db*)&xe)+8) = ax;
	/* mov	Xe[$ZH],ax */
	*(dw*)(((db*)&xe)+14) = ax;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Xe[$ZC],ax */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	Xe[$ZF],ax */
	*(dw*)(((db*)&xe)+10) = ax;
	/* mov	Xe[$ZI],ax */
	*(dw*)(((db*)&xe)+16) = ax;
	/* mov	ax,YSecRef */
	ax = ysecref;
	/* mov	Ye[$ZG],ax */
	*(dw*)(((db*)&ye)+12) = ax;
	/* mov	Ye[$ZH],ax */
	*(dw*)(((db*)&ye)+14) = ax;
	/* mov	Ye[$ZI],ax */
	*(dw*)(((db*)&ye)+16) = ax;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZD],ax */
	*(dw*)(((db*)&ye)+6) = ax;
	/* mov	Ye[$ZE],ax */
	*(dw*)(((db*)&ye)+8) = ax;
	/* mov	Ye[$ZF],ax */
	*(dw*)(((db*)&ye)+10) = ax;
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	Ye[$ZA],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Ye[$ZB],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	Ye[$ZC],ax */
	*(dw*)(((db*)&ye)+4) = ax;
	// 0 ;--------------------------
	// 0 ;* generate virtual co-ords
	// 0 ;--------------------------
	/* mov	si,$ZI */
	si = 16;
	/* call	VCalcOutCodes */
	CALLF(vcalcoutcodes, 0);
	/* jc	ExitHills	;non-visible -> */
	if (CF) {goto exithills;}
	// 0 ;------------
	// 0 ;* draw faces
	// 0 ;------------
	// 0 ;* draw face 0
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer5[bp] */
	al = *((&hilllayer5)+bp);
	/* and	al,00fh		;extract colour data */
	AND(al, 0x00f);
	/* jz	SkipFace0	;no face -> */
	if (al == 0) {goto skipface0;}
	/* mov	si,OFFSET HillFaceList0 */
	si = m2c::near_offset_external(hillfacelist0);
	/* test	HillLayer1[bp],080h	;z crease? */
	TEST(*((&hilllayer1)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer1)+bp) & 0x080)) {goto dummylabel18;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel18:
	// 4485 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace0	;non-visible -> */
	if (CF) {goto skipface0;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 1
skipface0:
	// 4487 
	/* SkipFace0:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer5[bp] */
	al = *((&hilllayer5)+bp);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* jz	SkipFace1	;no face -> */
	if (al == 0) {goto skipface1;}
	/* mov	si,OFFSET HillFaceList1 */
	si = m2c::near_offset_external(hillfacelist1);
	/* test	HillLayer1[bp],080h	;z crease? */
	TEST(*((&hilllayer1)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer1)+bp) & 0x080)) {goto dummylabel19;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel19:
	// 4489 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace1	;non-visible -> */
	if (CF) {goto skipface1;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 2
skipface1:
	// 4491 
	/* SkipFace1:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer6[bp] */
	al = *((&hilllayer6)+bp);
	/* and	al,00fh		;extract colour data */
	AND(al, 0x00f);
	/* jz	SkipFace2	;no face -> */
	if (al == 0) {goto skipface2;}
	/* mov	si,OFFSET HillFaceList2 */
	si = m2c::near_offset_external(hillfacelist2);
	/* test	HillLayer2[bp],080h	;z crease? */
	TEST(*((&hilllayer2)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer2)+bp) & 0x080)) {goto dummylabel20;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel20:
	// 4493 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace2	;non-visible -> */
	if (CF) {goto skipface2;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 3
skipface2:
	// 4495 
	/* SkipFace2:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer6[bp] */
	al = *((&hilllayer6)+bp);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* jz	SkipFace3	;no face -> */
	if (al == 0) {goto skipface3;}
	/* mov	si,OFFSET HillFaceList3 */
	si = m2c::near_offset_external(hillfacelist3);
	/* test	HillLayer2[bp],080h	;z crease? */
	TEST(*((&hilllayer2)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer2)+bp) & 0x080)) {goto dummylabel21;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel21:
	// 4497 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace3	;non-visible -> */
	if (CF) {goto skipface3;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 4
skipface3:
	// 4499 
	/* SkipFace3:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer7[bp] */
	al = *((&hilllayer7)+bp);
	/* and	al,00fh		;extract colour data */
	AND(al, 0x00f);
	/* jz	SkipFace4	;no face -> */
	if (al == 0) {goto skipface4;}
	/* mov	si,OFFSET HillFaceList4 */
	si = m2c::near_offset_external(hillfacelist4);
	/* test	HillLayer3[bp],080h	;z crease? */
	TEST(*((&hilllayer3)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer3)+bp) & 0x080)) {goto dummylabel22;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel22:
	// 4501 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace4	;non-visible -> */
	if (CF) {goto skipface4;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 5
skipface4:
	// 4503 
	/* SkipFace4:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer7[bp] */
	al = *((&hilllayer7)+bp);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* jz	SkipFace5	;no face -> */
	if (al == 0) {goto skipface5;}
	/* mov	si,OFFSET HillFaceList5 */
	si = m2c::near_offset_external(hillfacelist5);
	/* test	HillLayer3[bp],080h	;z crease? */
	TEST(*((&hilllayer3)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer3)+bp) & 0x080)) {goto dummylabel23;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel23:
	// 4505 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace5	;non-visible -> */
	if (CF) {goto skipface5;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 6
skipface5:
	// 4507 
	/* SkipFace5:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer8[bp] */
	al = *((&hilllayer8)+bp);
	/* and	al,00fh		;extract colour data */
	AND(al, 0x00f);
	/* jz	SkipFace6	;no face -> */
	if (al == 0) {goto skipface6;}
	/* mov	si,OFFSET HillFaceList6 */
	si = m2c::near_offset_external(hillfacelist6);
	/* test	HillLayer4[bp],080h	;z crease? */
	TEST(*((&hilllayer4)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer4)+bp) & 0x080)) {goto dummylabel24;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel24:
	// 4509 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace6	;non-visible -> */
	if (CF) {goto skipface6;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* draw face 6
skipface6:
	// 4511 
	/* SkipFace6:	mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,HillLayer8[bp] */
	al = *((&hilllayer8)+bp);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* jz	SkipFace7	;no face -> */
	if (al == 0) {goto skipface7;}
	/* mov	si,OFFSET HillFaceList7 */
	si = m2c::near_offset_external(hillfacelist7);
	/* test	HillLayer4[bp],080h	;z crease? */
	TEST(*((&hilllayer4)+bp), 0x080);
	/* jz	@F			;yes -> */
	if (!(*((&hilllayer4)+bp) & 0x080)) {goto dummylabel25;}
	/* add	si,4 */
	ADD(si, 4);
dummylabel25:
	// 4513 
	/* @@:		push	ax */
	PUSH(ax);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyClip */
	CALLF(vpolyclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipFace7	;non-visible -> */
	if (CF) {goto skipface7;}
	/* add	al,COL_MAP_HILL1 */
	ADD(al, 112);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
skipface7:
	// 4515 
	/* SkipFace7:	ret */
	RETN(0);
drawgndobjects:
	// 3690 
	// 0 ;* only display objects at high zoom levels
edummylabel11:
	// 4517 
	/* cmp	Zoom,MAP_ZOOM4	;high zoom level? */
	CMP(zoom, 6);
	/* jb	ExitGndObjects	;no -> */
	if ((dw)(zoom) < (dw)(6)) {goto exitgndobjects;}
	// 0 ;* test for occupied sector
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	al,SectorLayer1[bp] */
	al = *((&sectorlayer1)+bp);
	/* test	al,al		;occupied sector? */
	TEST(al, al);
	/* jz	ExitGndObjects	;no -> */
	if (!(al & al)) {goto exitgndobjects;}
	// 0 ;* sort allied / enemy object colour
	/* mov	ah,COL_MAP_ALLIED */
	ah = 153;
	/* test	SctrGameLayer1[bp],SECT_ENEMY */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz	@F */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel26;}
	/* mov	ah,COL_MAP_ENEMY */
	ah = 158;
dummylabel26:
	// 4519 
	/* @@:		mov	GndObjectCol,ah */
	gndobjectcol = ah;
	// 0 ;* calc pointer to sector data record
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
	// m2c-dedup: removed duplicate expansion row: R(ADD(bx, m2c::near_offset_external(sectortable)));	// 3716 						add	bx,OFFSET SectorTable
	// 0 ;* scan object list
	/* mov	si,SEC_OBJ_PTR[bx] */
	si = m2c::getdata(*(dw*)(((db*)&((sectordata*)raddr(ds,bx))->sec_obj_ptr)));
scangndobjects:
	// 4521 
	/* ScanGndObjects:	mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch object number
	/* mov	cl,al */
	cl = al;
	/* inc	si		;skip object flag */
	INC(si);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x grid position
	/* mov	dl,al */
	dl = al;
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y grid position
	/* mov	bl,al */
	bl = al;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* cmp	cl,-1		;end of list? */
	CMP(cl, -1);
	/* je	ExitGndObjects	;yes -> */
	if ((db)(cl) == (db)(-1)) {goto exitgndobjects;}
	// 0 ;* do not draw trees (assume GND_COPSEA .. GND_COPSED are contiguous)
	/* cmp	cl,GND_COPSEA	;tree? */
	CMP(cl, 13);
	/* jb	@F		;no -> */
	if ((db)(cl) < (db)(13)) {goto dummylabel27;}
	/* cmp	cl,GND_COPSED	;tree? */
	CMP(cl, 16);
	/* jbe	ScanGndObjects	;yes -> */
	if ((db)(cl) <= (db)(16)) {goto scangndobjects;}
dummylabel27:
	// 4523 
	/* @@:		mov	cl,SctrScale */
	cl = *(sctrscale);
	/* xor	dh,dh */
	XOR(dh, dh);
	/* sal	dx,cl */
	SAL(dx, cl);
	/* add	dx,XSecRef */
	ADD(dx, xsecref);
	/* mov	Xe[0],dx */
	*(dw*)(((db*)&xe)+0) = dx;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* sal	bx,cl */
	SAL(bx, cl);
	/* add	bx,YSecRef */
	ADD(bx, ysecref);
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* push	si */
	PUSH(si);
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel28;}
	/* mov	al,GndObjectCol */
	al = gndobjectcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
dummylabel28:
	// 4525 
	/* @@:		pop	si */
	POP(si);
	/* jmp	ScanGndObjects */
	goto scangndobjects;
exitgndobjects:
	// 4527 
	/* ExitGndObjects:	ret */
	RETN(0);
sortcurrentwp:
	// 3776 
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
edummylabel12:
	// 4529 
	/* je	ExitCurrentWP	;no -> */
	if (ZF) {goto exitcurrentwp;}
	// 0 ;* is current waypoint in sector?
	/* mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* cmp	ax,XSec		;x sector match? */
	CMP(ax, xsec);
	/* jne	ExitCurrentWP  	;no -> */
	if ((dw)(ax) != (dw)(xsec)) {goto exitcurrentwp;}
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* cmp	ax,YSec		;y sector match? */
	CMP(ax, ysec);
	/* jne	ExitCurrentWP	;no -> */
	if ((dw)(ax) != (dw)(ysec)) {goto exitcurrentwp;}
	// 0 ;* calc current waypoint position relative to display origin
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	bx,[si].WP_YFT */
	bx = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	ax,cl */
	SHR(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	bx,8192 */
	ADD(bx, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	bx,cl */
	SHR(bx, cl);
	/* add	bx,YSecRef */
	ADD(bx, ysecref);
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	ExitCurrentWP	;non-visible -> */
	if (CF) {goto exitcurrentwp;}
	// 0 ;* calc x, y position relative to display origin
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel29;}
	/* sub	cx,VP.V_X_ORG */
	SUB(cx, vp.v_x_org);
	/* mov	CurrentWPX,cx */
	currentwpx = cx;
	/* sub	bx,VP.V_Y_ORG */
	SUB(bx, vp.v_y_org);
	/* mov	CurrentWPY,bx */
	currentwpy = bx;
	/* jmp frankie_9 */
	goto frankie_9;
dummylabel29:
	// 4531 
	/* sub	cx,VP_FULL.V_X_ORG */
	SUB(cx, vp_full.v_x_org);
	/* mov	CurrentWPX,cx */
	currentwpx = cx;
	/* sub	bx,VP_FULL.V_Y_ORG */
	SUB(bx, vp_full.v_y_org);
	/* mov	CurrentWPY,bx */
	currentwpy = bx;
frankie_9:
	// 4533 
exitcurrentwp:
	// 4535 
	/* ExitCurrentWP:	ret */
	RETN(0);
sortfloatwp:
	// 3833 
	// 0 ;* is floating waypoint valid?
edummylabel13:
	// 4537 
	/* test	FloatWP.WP_ATTR,WP_VALID	;valid? */
	TEST(floatwp.wp_attr, 0x80);
	/* jz	ExitFloatWP			;no -> */
	if (!(floatwp.wp_attr & 0x80)) {goto exitfloatwp;}
	// 0 ;* is floating waypoint in sector?
	/* mov	ax,FloatWP.WP_XSEC */
	ax = floatwp.wp_xsec;
	/* cmp	ax,XSec		;x sector match? */
	CMP(ax, xsec);
	/* jne	ExitFloatWP	;no -> */
	if ((dw)(ax) != (dw)(xsec)) {goto exitfloatwp;}
	/* mov	ax,FloatWP.WP_YSEC */
	ax = floatwp.wp_ysec;
	/* cmp	ax,YSec		;y sector match? */
	CMP(ax, ysec);
	/* jne	ExitFloatWP	;no -> */
	if ((dw)(ax) != (dw)(ysec)) {goto exitfloatwp;}
	// 0 ;* calc floating waypoint position relative to display origin
	/* mov	ax,FloatWP.WP_XFT */
	ax = floatwp.wp_xft;
	/* mov	bx,FloatWP.WP_YFT */
	bx = floatwp.wp_yft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	ax,cl */
	SHR(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	bx,8192 */
	ADD(bx, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	bx,cl */
	SHR(bx, cl);
	/* add	bx,YSecRef */
	ADD(bx, ysecref);
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	ExitFloatWP	;non-visible -> */
	if (CF) {goto exitfloatwp;}
	// 0 ;* calc x, y position relative to display origin
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel30;}
	/* sub	cx,VP.V_X_ORG */
	SUB(cx, vp.v_x_org);
	/* mov	FloatWPX,cx */
	floatwpx = cx;
	/* sub	bx,VP.V_Y_ORG */
	SUB(bx, vp.v_y_org);
	/* mov	FloatWPY,bx */
	floatwpy = bx;
	/* jmp frankie_10 */
	goto frankie_10;
dummylabel30:
	// 4539 
	/* sub	cx,VP_FULL.V_X_ORG */
	SUB(cx, vp_full.v_x_org);
	/* mov	FloatWPX,cx */
	floatwpx = cx;
	/* sub	bx,VP_FULL.V_Y_ORG */
	SUB(bx, vp_full.v_y_org);
	/* mov	FloatWPY,bx */
	floatwpy = bx;
frankie_10:
	// 4541 
exitfloatwp:
	// 4543 
	/* ExitFloatWP:	ret */
	RETN(0);
sortacdatum:
	// 3891 
	// 0 ;* is aircraft in sector?
edummylabel14:
	// 4545 
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* cmp	ax,XSec		;x sector match? */
	CMP(ax, xsec);
	/* jne	ExitACDatum	;no -> */
	if ((dw)(ax) != (dw)(xsec)) {goto exitacdatum;}
	/* mov	ax,M_VIEW.VP_YSEC */
	ax = m_view.vp_ysec;
	/* cmp	ax,YSec		;y sector match? */
	CMP(ax, ysec);
	/* jne	ExitACDatum	;no -> */
	if ((dw)(ax) != (dw)(ysec)) {goto exitacdatum;}
	// 0 ;* calc aircraft position relative to display origin
	/* mov	ax,M_VIEW.VP_XFT */
	ax = m_view.vp_xft;
	/* mov	bx,M_VIEW.VP_YFT */
	bx = m_view.vp_yft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	ax,cl */
	SHR(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	bx,8192 */
	ADD(bx, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	bx,cl */
	SHR(bx, cl);
	/* add	bx,YSecRef */
	ADD(bx, ysecref);
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	ExitACDatum	;non-visible -> */
	if (CF) {goto exitacdatum;}
	// 0 ;* calc x, y position relative to display origin
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel31;}
	/* sub	cx,VP.V_X_ORG */
	SUB(cx, vp.v_x_org);
	/* mov	ACDatumX,cx */
	acdatumx = cx;
	/* sub	bx,VP.V_Y_ORG */
	SUB(bx, vp.v_y_org);
	/* mov	ACDatumY,bx */
	acdatumy = bx;
	/* jmp frankie_11 */
	goto frankie_11;
dummylabel31:
	// 4547 
	/* sub	cx,VP_FULL.V_X_ORG */
	SUB(cx, vp_full.v_x_org);
	/* mov	ACDatumX,cx */
	acdatumx = cx;
	/* sub	bx,VP_FULL.V_Y_ORG */
	SUB(bx, vp_full.v_y_org);
	/* mov	ACDatumY,bx */
	acdatumy = bx;
frankie_11:
	// 4549 
exitacdatum:
	// 4551 
	/* ExitACDatum:	ret */
	RETN(0);
drawstatmobiles:
	// 3945 
	// 0 ;* test for occupied sector
edummylabel15:
	// 4553 
	/* mov	bp,MapIndex */
	bp = mapindex;
	/* mov	bl,MobileLayer1[bp] */
	bl = *((&mobilelayer1)+bp);
	/* test	bl,bl		;occupied sector? */
	TEST(bl, bl);
	/* jz	ExitStatMobs	;no -> */
	if (!(bl & bl)) {goto exitstatmobs;}
	// 0 ;* calc pointer to sector data record
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,MobSectorTable[bx] */
	si = *(dw*)(((db*)&mobsectortable)+bx);
	// 0 ;* scan object list
scanstatmobs:
	// 4555 
	/* ScanStatMobs:	mov	ax,MSECDATA1 */
	ax = seg_offset(msecdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	dl,ES:STAT_NUM[si] */
	dl = m2c::getdata(((statmob*)raddr(es,si))->stat_num);
	/* mov	dh,ES:STAT_ANIM[si] */
	dh = m2c::getdata(((statmob*)raddr(es,si))->stat_anim);
	/* mov	cx,ES:STAT_XFT[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((statmob*)raddr(es,si))->stat_xft)));
	/* mov	bx,ES:STAT_YFT[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((statmob*)raddr(es,si))->stat_yft)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* cmp	dl,-1		;end of list? */
	CMP(dl, -1);
	/* je	ExitStatMobs	;yes -> */
	if ((db)(dl) == (db)(-1)) {goto exitstatmobs;}
	/* test	dh,OBJECT_DEAD	;dead? */
	TEST(dh, 0x80);
	/* jnz	SkipStatic2	;yes -> */
	if ((dh & 0x80) != 0) {goto skipstatic2;}
	// 0 ;* radar shadow test
	/* push	si */
	PUSH(si);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ShadowCheck */
	CALL(shadowcheck, 0);
	/* pop	ax */
	POP(ax);
	/* pop	bx */
	POP(bx);
	/* jc	SkipStatic1	;in radar shadow (non-visible) -> */
	if (CF) {goto skipstatic1;}
	// 0 ;* plot static mobile on radar
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	ax,cl */
	SHR(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	bx,8192 */
	ADD(bx, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	bx,cl */
	SHR(bx, cl);
	/* add	bx,YSecRef */
	ADD(bx, ysecref);
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	SkipStatic1	;non-visible -> */
	if (CF) {goto skipstatic1;}
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skipstatic1:
	// 4557 
	/* SkipStatic1:	pop	si */
	POP(si);
skipstatic2:
	// 4559 
	/* SkipStatic2:	add	si,STAT_REC_SIZE */
	ADD(si, 8);
	/* jmp	ScanStatMobs */
	goto scanstatmobs;
exitstatmobs:
	// 4561 
	/* ExitStatMobs:	ret */
	RETN(0);
drawmobiles:
	// 4014 
	// 0 ;* test for occupied sector
edummylabel16:
	// 4563 
	/* mov	ax,XSec */
	ax = xsec;
	/* mov	dx,YSec */
	dx = ysec;
	/* call	LocateMobiles	;mobiles in sector? */
	CALLF(locatemobiles, 0);
	/* jc	ExitMobiles	;no -> */
	if (CF) {goto exitmobiles;}
	// 0 ;* scan mobiles
scanmobiles:
	// 4565 
	/* ScanMobiles:  	cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	ExitMobiles	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto exitmobiles;}
	/* push	si */
	PUSH(si);
	/* cmp	si,OFFSET M_MOBILE	;Tornado? */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* je	SkipMobile		;yes -> */
	if ((dw)(si) == (dw)(m2c::near_offset_external(m_mobile))) {goto skipmobile;}
	// 0 ;* only allow mobiles whose zft <= 50ft (still see vehicles on bridges)
	/* cmp	WORD PTR _VP_ZFT_HI[si],0	;alt > 65535ft? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	/* ja	SkipMobile			;yes -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))) > (dw)(0)) {goto skipmobile;}
	/* cmp	WORD PTR _VP_ZFT_LO[si],50	;alt <= 50ft? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 50);
	/* ja	SkipMobile			;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) > (dw)(50)) {goto skipmobile;}
	/* mov	cx,_VP_XFT[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xft)));
	/* mov	bx,_VP_YFT[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_yft)));
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ShadowCheck */
	CALL(shadowcheck, 0);
	/* pop	ax */
	POP(ax);
	/* pop	bx */
	POP(bx);
	/* jc	SkipMobile	;in radar shadow (non-visible) -> */
	if (CF) {goto skipmobile;}
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	ax,cl */
	SHR(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* add	bx,8192 */
	ADD(bx, 8192);
	/* mov	cl,8 */
	cl = 8;
	/* sub	cl,SctrScale */
	SUB(cl, *(sctrscale));
	/* shr	bx,cl */
	SHR(bx, cl);
	/* add	bx,YSecRef */
	ADD(bx, ysecref);
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	SkipMobile	;non-visible -> */
	if (CF) {goto skipmobile;}
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skipmobile:
	// 4567 
	/* SkipMobile:	pop	si */
	POP(si);
	/* mov	si,MOB_LINK_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	ScanMobiles */
	goto scanmobiles;
exitmobiles:
	// 4569 
	/* ExitMobiles:	ret */
	RETN(0);
shadowcheck:
	// 4076 
	// 0 ;--------------------------------------
	// 0 ;* always visible if altitude > 65535ft
	// 0 ;--------------------------------------
edummylabel17:
	// 4571 
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0	;alt > 65535ft? */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* je	@F				;no -> */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) == (dw)(0)) {goto dummylabel32;}
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;-----------------------------------
	// 0 ;* has quadrant been tested already?
	// 0 ;-----------------------------------
	// 0 ;* calc quad x centre
dummylabel32:
	// 4573 
	/* @@:		mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* mov	si,4096 */
	si = 4096;
	/* xor	si,dx */
	XOR(si, dx);
	/* sub	si,dx */
	SUB(si, dx);
	/* rol	dx,1		;cf = sign(xft) */
	ROL(dx, 1);
	/* rcl	cl,1 */
	RCL(cl, 1);
	// 0 ;* calc quad y centre
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* mov	di,4096 */
	di = 4096;
	/* xor	di,dx */
	XOR(di, dx);
	/* sub	di,dx */
	SUB(di, dx);
	/* rol	dx,1		;cf = sign(yft) */
	ROL(dx, 1);
	/* rcl	cl,1 */
	RCL(cl, 1);
	/* and	cl,0011b */
	AND(cl, 0x3);
	/* mov	al,0001b */
	al = 0x1;
	/* shl	al,cl */
	SHL(al, cl);
	/* test	QuadTested,al	;quadrant already tested? */
	TEST(quadtested, al);
	/* jz	@F		;no -> */
	if (!(quadtested & al)) {goto dummylabel33;}
	/* mov	al,QuadResult */
	al = quadresult;
	/* inc	cl */
	INC(cl);
	/* shr	al,cl		;cf = result wrt quad */
	SHR(al, cl);
	/* ret */
	RETN(0);
dummylabel33:
	// 4575 
	/* @@:		or	QuadTested,al */
	OR(quadtested, al);
	/* mov	QuadMask,al */
	quadmask = al;
	// 0 ;-------------------------
	// 0 ;* copy M_VIEW to TMP_VIEW
	// 0 ;-------------------------
	/* mov	ax,si */
	ax = si;
	/* mov	dx,di */
	dx = di;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4128 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 4129 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 4130 mov	di,OFFSET TMP_VIEW */
	// 4131 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	si,ax */
	si = ax;
	/* mov	di,dx */
	di = dx;
	// 0 ;----------------
	// 0 ;* calc Dx and Dy
	// 0 ;----------------
	// 0 ;* x1 = xsec * 16384 + xft + 8192
	/* mov	cx,M_VIEW.VP_XSEC	;xsec * 65536 */
	cx = m_view.vp_xsec;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* mov	bp,M_VIEW.VP_XFT */
	bp = m_view.vp_xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,XSec		;xsec * 65536 */
	dx = xsec;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	bp,si */
	bp = si;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,M_VIEW.VP_YSEC	;ysec * 65536 */
	dx = m_view.vp_ysec;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,M_VIEW.VP_YFT */
	bp = m_view.vp_yft;
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,YSec		;ysec * 65536 */
	cx = ysec;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	bp,di */
	bp = di;
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;-----------------------------------
	// 0 ;* calc sample dist (Dx / 8, Dy / 8)
	// 0 ;-----------------------------------
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	// 0 ;-------------------
	// 0 ;* calc Dz = zft / 8
	// 0 ;-------------------
	/* mov	di,WORD PTR M_VIEW.VP_ZFT_LO */
	di = *((dw*)((db*)&m_view+vp_zft_lo));
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	// 0 ;------------------
	// 0 ;* shadow test loop
	// 0 ;------------------
	/* mov	bp,7		;loop count */
	bp = 7;
shadowloop:
	// 4577 
	/* ShadowLoop:	push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	di */
	PUSH(di);
	/* push	bp */
	PUSH(bp);
	/* push	di */
	PUSH(di);
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	/* pop	di */
	POP(di);
	/* mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* sub	ax,di */
	SUB(ax, di);
	/* cmc */
	CMC;
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0 */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* and	ax,dx */
	AND(ax, dx);
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* cmp	ax,256*15	;alt > max gnd ht? */
	CMP(ax, 256*15);
	/* ja	@F	 	;yes -> */
	if ((dw)(ax) > (dw)(256*15)) {goto dummylabel34;}
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR TMP_VIEW.VP_ZFT_LO,ax	;alt > gnd ht? */
	CMP(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
dummylabel34:
	// 4579 
	/* @@:		pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* jbe	RadarNonVis    	;alt <= gnd ht -> */
	if ((CF || ZF)) {goto radarnonvis;}
	/* dec	bp	    	;next test */
	DEC(bp);
	/* jnz	ShadowLoop */
	if (bp != 0) {goto shadowloop;}
	// 0 ;* set result to visible
radarvis:
	// 4581 
	/* RadarVis:	mov	al,QuadMask */
	al = quadmask;
	/* not	al */
	al = ~al;
	/* and	QuadResult,al */
	AND(quadresult, al);
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
radarnonvis:
	// 4583 
	/* RadarNonVis:	stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
drawspecials:
	// 4286 
	/* mov	bp,MapIndex ;* kill: assume all */
	bp = mapindex;
edummylabel18:
	// 4585 
	/* mov	al,SpecialLayer1[bp] */
	al = *((&speciallayer1)+bp);
	/* test	al,al		;null? */
	TEST(al, al);
	/* jz	ExitSpecials	;yes -> */
	if (!(al & al)) {goto exitspecials;}
	// 0 ;----------------
	// 0 ;* draw airfields
	// 0 ;----------------
	/* cmp	al,AIRFIELD_N	;airfield? */
	CMP(al, airfield_n);
	/* ja	@F		;no -> */
	if ((db)(al) > (db)(airfield_n)) {goto dummylabel35;}
	/* call	DrawAirfield */
	CALL(drawairfield, 0);
	/* jmp	ExitSpecials */
	goto exitspecials;
	// 0 ;------------
	// 0 ;* draw towns
	// 0 ;------------
dummylabel35:
	// 4587 
	/* @@:		cmp	al,TOWN_N	;town? */
	CMP(al, town_n);
	/* ja	ExitSpecials	;no -> */
	if ((db)(al) > (db)(town_n)) {goto exitspecials;}
	/* call	DrawTown */
	CALL(drawtown, 0);
exitspecials:
	// 4589 
	/* ExitSpecials:	ret */
	RETN(0);
drawairfield:
	// 4316 
	/* mov	bl,al ;* kill: assume all */
	bl = al;
edummylabel19:
	// 4591 
	/* sub	bl,AIRFIELD_1 */
	SUB(bl, airfield_1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1	;*2 */
	SHL(bx, 1);
	/* shl	bx,1	;*4 */
	SHL(bx, 1);
	/* mov	si,AirfieldTable[bx+2] */
	si = *(dw*)(((db*)&airfieldtable)+bx+2);
	/* push	bx */
	PUSH(bx);
	/* call	DrawTaxiways */
	CALL(_group1, m2c::kdrawtaxiways);
	/* pop	bx */
	POP(bx);
	/* mov	si,AirfieldTable[bx] */
	si = *(dw*)(((db*)&airfieldtable)+bx);
	/* call	DrawRunways */
	CALL(drawrunways, 0);
	/* ret */
	RETN(0);
drawrunways:
	// 4340 
nextrunway:
	// 4593 
	/* NextRunway:	mov	ax,RWY_DIR[si] ;* note: Assume last runway in list is the active runway. */
	ax = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_dir)));
	/* cmp	ax,-1		;end of list? */
	CMP(ax, -1);
	/* je	ExitRunways	;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto exitrunways;}
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	ax,RWY_X1[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x1)));
	/* sal	ax,cl */
	SAL(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,RWY_Y1[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y1)));
	/* sal	ax,cl */
	SAL(ax, cl);
	/* add	ax,YSecRef */
	ADD(ax, ysecref);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,RWY_X2[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_x2)));
	/* sal	ax,cl */
	SAL(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,RWY_Y2[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((runway*)raddr(ds,si))->rwy_y2)));
	/* sal	ax,cl */
	SAL(ax, cl);
	/* add	ax,YSecRef */
	ADD(ax, ysecref);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* push	si */
	PUSH(si);
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* pop	si */
	POP(si);
	/* jc	SkipRunway	;non-visible -> */
	if (CF) {goto skiprunway;}
	// 0 ;* sort active / inactive runway colours
	/* mov	al,COL_MAP_RWY2			;assume active runway */
	al = 157;
	/* cmp	RWY_REC_SIZE+RWY_DIR[si],-1	;last runway in list? */
	CMP(*(dw*)(((db*)&((runway*)raddr(ds,12+si))->rwy_dir)), -1);
	/* je	@F				;yes -> */
	if ((dw)(*(dw*)(((db*)&((runway*)raddr(ds,12+si))->rwy_dir))) == (dw)(-1)) {goto dummylabel36;}
	/* mov	al,COL_MAP_RWY1			;inactive runway */
	al = 147;
dummylabel36:
	// 4595 
	/* @@:		mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
skiprunway:
	// 4597 
	/* SkipRunway: 	add	si,RWY_REC_SIZE */
	ADD(si, 12);
	/* jmp	NextRunway */
	goto nextrunway;
exitrunways:
	// 4599 
	/* ExitRunways:	ret */
	RETN(0);
drawtown:
	// 4390 
	/* mov	bl,al ;* kill: assume all */
	bl = al;
edummylabel20:
	// 4601 
	/* sub	bl,TOWN_1 */
	SUB(bl, town_1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* mov	si,TownTable[bx] */
	si = *(dw*)(((db*)&towntable)+bx);
	/* call	DrawTownRoads */
	CALL(_group1, m2c::kdrawtownroads);
	/* ret */
	RETN(0);
pancode_6_proc:
	// 4407 
skipnetwork:
	// 4603 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
drawtaxiways:
	// 4605 
	/* mov	Col1,COL_MAP_RWY1 */
	col1 = 147;
	/* jmp	DrawNetwork */
	goto drawnetwork;
drawtownroads:
	// 4607 
	/* mov	Col1,COL_MAP_ROAD1 */
	col1 = 145;
drawnetwork:
	// 4414 
	/* cmp	Zoom,MAP_ZOOM2	;zoomed out too far? */
	CMP(zoom, 2);
	/* jbe	SkipNetwork	;no -> */
	if ((dw)(zoom) <= (dw)(2)) {goto skipnetwork;}
	// 0 ;------------------
	// 0 ;* scan vertex list
	// 0 ;------------------
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	cl,SctrScale */
	cl = *(sctrscale);
	/* xor	di,di		;reset index */
	XOR(di, di);
vertexloop2:
	// 4609 
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch end type
	/* cmp	al,-1		;end of vertex list? */
	CMP(al, -1);
	/* je	ContNetwork	;yes -> */
	if ((db)(al) == (db)(-1)) {goto contnetwork;}
	// 0 ;* x grid = (v - 64) / 2
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x vertex
	/* xor	ah,ah */
	XOR(ah, ah);
	/* sub	ax,64 */
	SUB(ax, 64);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sal	ax,cl		;scale */
	SAL(ax, cl);
	/* add	ax,XSecRef */
	ADD(ax, xsecref);
	/* mov	Xe[di],ax */
	*(dw*)(((db*)&xe)+di) = ax;
	// 0 ;* y grid = (v - 64) / 2
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y vertex
	/* xor	ah,ah */
	XOR(ah, ah);
	/* sub	ax,64 */
	SUB(ax, 64);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sal	ax,cl		;scale */
	SAL(ax, cl);
	/* add	ax,YSecRef */
	ADD(ax, ysecref);
	/* mov	Ye[di],ax */
	*(dw*)(((db*)&ye)+di) = ax;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop2 */
	goto vertexloop2;
contnetwork:
	// 4611 
	/* ContNetwork:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;----------------------------
	// 0 ;* test if network is visible
	// 0 ;----------------------------
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	VCalcOutCodes */
	CALLF(vcalcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitNetwork	;non-visible -> */
	if (CF) {goto exitnetwork;}
	// 0 ;------------------------------------------------------
	// 0 ;* copy face data from FEATOBJ1 segment to DATA segment
	// 0 ;------------------------------------------------------
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
	// 4481 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 4483 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 4484 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 4485 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;----------------
	// 0 ;* generate faces
	// 0 ;----------------
	/* mov	si,OFFSET CopyBuffer */
	si = m2c::near_offset_external(copybuffer);
nextlineface:
	// 4613 
	/* NextLineFace:	lodsb		    	;fetch logical colour (colour ignored) */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	ExitNetwork	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitnetwork;}
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	VPolyLineClip */
	CALLF(vpolylineclip, 0);
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
exitnetwork:
	// 4615 
	/* ExitNetwork:	ret */
	RETN(0);
pancode_9_proc:
	// 4521 
exitmapborder:
	// 4617 
	// 0 ;*       This routine will only work if the map is not rotated.
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
drawmapborder:
	// 4523 
	// 0 ;--------------------------
	// 0 ;* check if too far off map
	// 0 ;--------------------------
edummylabel21:
	// 4619 
	/* cmp	MAP_VIEW.VP_XSEC,-16 */
	CMP(map_view.vp_xsec, -16);
	/* jl	ExitMapBorder */
	if ((short)(map_view.vp_xsec) < (short)(-16)) {goto exitmapborder;}
	/* cmp	MAP_VIEW.VP_XSEC,47 */
	CMP(map_view.vp_xsec, 47);
	/* jg	ExitMapBorder */
	if ((short)(map_view.vp_xsec) > (short)(47)) {goto exitmapborder;}
	/* cmp	MAP_VIEW.VP_YSEC,-16 */
	CMP(map_view.vp_ysec, -16);
	/* jl	ExitMapBorder */
	if ((short)(map_view.vp_ysec) < (short)(-16)) {goto exitmapborder;}
	/* cmp	MAP_VIEW.VP_YSEC,47 */
	CMP(map_view.vp_ysec, 47);
	/* jg	ExitMapBorder */
	if ((short)(map_view.vp_ysec) > (short)(47)) {goto exitmapborder;}
	// 0 ;---------------------
	// 0 ;* initialize viewport
	// 0 ;---------------------
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel37;}
	/* mov	VP.V_SCALE_UP,0 */
	vp.v_scale_up = 0;
	/* jmp frankie_12 */
	goto frankie_12;
dummylabel37:
	// 4621 
	/* mov	VP_FULL.V_SCALE_UP,0 */
	vp_full.v_scale_up = 0;
frankie_12:
	// 4623 
	// 0 ;* calc scale down wrt zoom:-
	// 0 ;*
	// 0 ;* MAP_ZOOM1 =   8 pixels / sector =   4096 / 8 * 16 = 32 (>> 5)
	// 0 ;* MAP_ZOOM2 =  16 pixels / sector =  4096 / 16 * 16 = 16 (>> 4)
	// 0 ;* MAP_ZOOM3 =  32 pixels / sector =  4096 / 32 * 16 =  8 (>> 3)
	// 0 ;* MAP_ZOOM4 =  64 pixels / sector =  4096 / 64 * 16 =  4 (>> 2)
	// 0 ;* MAP_ZOOM5 = 128 pixels / sector = 4096 / 128 * 16 =  2 (>> 1)
	// 0 ;* MAP_ZOOM6 = 256 pixels / sector = 4096 / 256 * 16 =  1 (>> 0)
	// 0 ;*
	// 0 ;* scale down = 5 - zoom / 2
	/* mov	ax,5 */
	ax = 5;
	/* mov	dx,Zoom */
	dx = zoom;
	/* shr	dx,1 */
	SHR(dx, 1);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel38;}
	/* mov	VP.V_SCALE_DN,al */
	vp.v_scale_dn = al;
	/* jmp frankie_13 */
	goto frankie_13;
dummylabel38:
	// 4625 
	/* mov	VP_FULL.V_SCALE_DN,al */
	vp_full.v_scale_dn = al;
frankie_13:
	// 4627 
	/* xor	ax,ax		;zero hdg */
	XOR(ax, ax);
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne @F */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto dummylabel39;}
	/* mov	si,OFFSET VP */
	si = m2c::near_offset_external(vp);
	/* jmp frankie_14 */
	goto frankie_14;
dummylabel39:
	// 4629 
	/* mov	si,OFFSET VP_FULL */
	si = m2c::near_offset_external(vp_full);
frankie_14:
	// 4631 
	/* call	VSetViewport */
	CALLF(vsetviewport, 0);
	// 0 ;----------------------
	// 0 ;* calc linear position
	// 0 ;----------------------
	/* mov	cl,6		;/64 */
	cl = 6;
	// 0 ;* lin x = (xsec * 256) + (xft + 8192) / 64 + 1/2 bit (-4096 .. 12288)
	/* mov	dx,MAP_VIEW.VP_XSEC */
	dx = map_view.vp_xsec;
	/* mov	dh,dl */
	dh = dl;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	ax,MAP_VIEW.VP_XFT */
	ax = map_view.vp_xft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	si,ax */
	si = ax;
	// 0 ;* lin y = ((31 - ysec) * 256) + (yft + 8192) / 64 + 1/2 bit (-4096 .. 12288)
	/* mov	dx,31 */
	dx = 31;
	/* sub	dx,MAP_VIEW.VP_YSEC */
	SUB(dx, map_view.vp_ysec);
	/* mov	dh,dl */
	dh = dl;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	ax,MAP_VIEW.VP_YFT */
	ax = map_view.vp_yft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* add	ax,dx */
	ADD(ax, dx);
	/* mov	di,ax */
	di = ax;
	// 0 ;-------------
	// 0 ;* draw border
	// 0 ;-------------
	// 0 ;* (Xb, Yb) ��������������Ŀ (Xc, Yc)
	// 0 ;*          ?             ?
	// 0 ;*          ?             ?
	// 0 ;*          ?             ?
	// 0 ;*          ?             ?
	// 0 ;*          ?             ?
	// 0 ;* (Xa, Ya) ���������������� (Xd, Yd)
	// 0 ;*
	// 0 ;* Xa' = Xa - lin x =    0 - lin x = -(lin x)
	// 0 ;* Ya' = Ya - lin y =    0 - lin y = -(lin y)
	// 0 ;* Xb' = Xb - lin x =    0 - lin x = -(lin x)
	// 0 ;* Yb' = Yb - lin y = 8192 - lin y
	// 0 ;* Xc' = Xc - lin x = 8192 - lin x
	// 0 ;* Yc' = Yc - lin y = 8192 - lin y
	// 0 ;* Xd' = Xd - lin x = 8192 - lin x
	// 0 ;* Yd' = Yd - lin y =    0 - lin y = -(lin y)
	// 0 ;* draw (Xa, Ya) -> (Xb, Yb)
	/* mov	ax,si */
	ax = si;
	/* neg	ax */
	NEG(ax);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,di */
	ax = di;
	/* neg	ax */
	NEG(ax);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,8192 */
	ax = 8192;
	/* sub	ax,di */
	SUB(ax, di);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel40;}
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	VDotLineDraw */
	CALL(vdotlinedraw, 0);
dummylabel40:
	// 4633 
	/* @@:		pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	// 0 ;* draw (Xb, Yb) -> (Xc, Yc)
	/* mov	ax,8192 */
	ax = 8192;
	/* sub	ax,di */
	SUB(ax, di);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,si */
	ax = si;
	/* neg	ax */
	NEG(ax);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,8192 */
	ax = 8192;
	/* sub	ax,si */
	SUB(ax, si);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel41;}
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	HDotLineDraw */
	CALL(hdotlinedraw, 0);
dummylabel41:
	// 4635 
	/* @@:		pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	// 0 ;* draw (Xc, Yc) -> (Xd, Yd)
	/* mov	ax,8192 */
	ax = 8192;
	/* sub	ax,si */
	SUB(ax, si);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,8192 */
	ax = 8192;
	/* sub	ax,di */
	SUB(ax, di);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,di */
	ax = di;
	/* neg	ax */
	NEG(ax);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel42;}
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	VDotLineDraw */
	CALL(vdotlinedraw, 0);
dummylabel42:
	// 4637 
	/* @@:		pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	// 0 ;* draw (Xd, Yd) -> (Xa, Ya)
	/* mov	ax,di */
	ax = di;
	/* neg	ax */
	NEG(ax);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* mov	ax,8192 */
	ax = 8192;
	/* sub	ax,si */
	SUB(ax, si);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,si */
	ax = si;
	/* neg	ax */
	NEG(ax);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel43;}
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	HDotLineDraw */
	CALL(hdotlinedraw, 0);
dummylabel43:
	// 4639 
	/* @@:		ret */
	RETF(0);
hdotlinedraw:
	// 4728 
	// 0 ;* sort x1 < x2 (always draw left to right)
edummylabel22:
	// 4641 
	/* cmp	cx,dx */
	CMP(cx, dx);
	/* jbe	HDotLoop */
	if ((dw)(cx) <= (dw)(dx)) {goto hdotloop;}
	/* xchg	cx,dx */
	XCHG(cx, dx);
	/* xchg	bl,bh */
	XCHG(bl, bh);
hdotloop:
	// 4643 
	/* HDotLoop:	cmp	cx,dx		;end of line? */
	CMP(cx, dx);
	/* ja	@F		;yes -> */
	if ((dw)(cx) > (dw)(dx)) {goto dummylabel44;}
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,COL_MAP_BORDER */
	al = 154;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* jmp	HDotLoop */
	goto hdotloop;
dummylabel44:
	// 4645 
	/* @@:		ret */
	RETN(0);
vdotlinedraw:
	// 4760 
	// 0 ;* sort y1 <= y2 (always draw top to bottom)
edummylabel23:
	// 4647 
	/* cmp	bl,bh */
	CMP(bl, bh);
	/* jbe	VDotLoop */
	if ((db)(bl) <= (db)(bh)) {goto vdotloop;}
	/* xchg	cx,dx */
	XCHG(cx, dx);
	/* xchg	bl,bh */
	XCHG(bl, bh);
vdotloop:
	// 4649 
	/* VDotLoop:	cmp	bl,bh		;end of line? */
	CMP(bl, bh);
	/* ja	@F		;yes -> */
	if ((db)(bl) > (db)(bh)) {goto dummylabel45;}
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,COL_MAP_BORDER */
	al = 154;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bl,2 */
	ADD(bl, 2);
	/* jmp	VDotLoop */
	goto vdotloop;
dummylabel45:
	// 4651 
	/* @@:		ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::kassign096: 	goto assign096;
        case m2c::kcheck2: 	goto check2;
        case m2c::kcontfeatures: 	goto contfeatures;
        case m2c::kcontnetwork: 	goto contnetwork;
        case m2c::kdrawairfield: 	goto drawairfield;
        case m2c::kdrawfeatures: 	goto drawfeatures;
        case m2c::kdrawgndobjects: 	goto drawgndobjects;
        case m2c::kdrawground: 	goto drawground;
        case m2c::kdrawhills: 	goto drawhills;
        case m2c::kdrawmapborder: 	goto drawmapborder;
        case m2c::kdrawmobiles: 	goto drawmobiles;
        case m2c::kdrawnetwork: 	goto drawnetwork;
        case m2c::kdrawnextrail: 	goto drawnextrail;
        case m2c::kdrawnextroad: 	goto drawnextroad;
        case m2c::kdrawrailways: 	goto drawrailways;
        case m2c::kdrawrivers: 	goto drawrivers;
        case m2c::kdrawroadnode: 	goto drawroadnode;
        case m2c::kdrawroads: 	goto drawroads;
        case m2c::kdrawrunways: 	goto drawrunways;
        case m2c::kdrawspecials: 	goto drawspecials;
        case m2c::kdrawstatmobiles: 	goto drawstatmobiles;
        case m2c::kdrawtaxiways: 	goto drawtaxiways;
        case m2c::kdrawtown: 	goto drawtown;
        case m2c::kdrawtownroads: 	goto drawtownroads;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel17: 	goto dummylabel17;
        case m2c::kdummylabel18: 	goto dummylabel18;
        case m2c::kdummylabel19: 	goto dummylabel19;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel20: 	goto dummylabel20;
        case m2c::kdummylabel21: 	goto dummylabel21;
        case m2c::kdummylabel22: 	goto dummylabel22;
        case m2c::kdummylabel23: 	goto dummylabel23;
        case m2c::kdummylabel24: 	goto dummylabel24;
        case m2c::kdummylabel25: 	goto dummylabel25;
        case m2c::kdummylabel26: 	goto dummylabel26;
        case m2c::kdummylabel27: 	goto dummylabel27;
        case m2c::kdummylabel28: 	goto dummylabel28;
        case m2c::kdummylabel29: 	goto dummylabel29;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel30: 	goto dummylabel30;
        case m2c::kdummylabel31: 	goto dummylabel31;
        case m2c::kdummylabel32: 	goto dummylabel32;
        case m2c::kdummylabel33: 	goto dummylabel33;
        case m2c::kdummylabel34: 	goto dummylabel34;
        case m2c::kdummylabel35: 	goto dummylabel35;
        case m2c::kdummylabel36: 	goto dummylabel36;
        case m2c::kdummylabel37: 	goto dummylabel37;
        case m2c::kdummylabel38: 	goto dummylabel38;
        case m2c::kdummylabel39: 	goto dummylabel39;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel40: 	goto dummylabel40;
        case m2c::kdummylabel41: 	goto dummylabel41;
        case m2c::kdummylabel42: 	goto dummylabel42;
        case m2c::kdummylabel43: 	goto dummylabel43;
        case m2c::kdummylabel44: 	goto dummylabel44;
        case m2c::kdummylabel45: 	goto dummylabel45;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
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
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitacdatum: 	goto exitacdatum;
        case m2c::kexitcurrentwp: 	goto exitcurrentwp;
        case m2c::kexitfeatures1: 	goto exitfeatures1;
        case m2c::kexitfeatures2: 	goto exitfeatures2;
        case m2c::kexitfloatwp: 	goto exitfloatwp;
        case m2c::kexitgndobjects: 	goto exitgndobjects;
        case m2c::kexithills: 	goto exithills;
        case m2c::kexitmapborder: 	goto exitmapborder;
        case m2c::kexitmobiles: 	goto exitmobiles;
        case m2c::kexitnetwork: 	goto exitnetwork;
        case m2c::kexitrailways: 	goto exitrailways;
        case m2c::kexitrivers: 	goto exitrivers;
        case m2c::kexitrunways: 	goto exitrunways;
        case m2c::kexitspecials: 	goto exitspecials;
        case m2c::kexitstatmobs: 	goto exitstatmobs;
        case m2c::kfrankie_1: 	goto frankie_1;
        case m2c::kfrankie_10: 	goto frankie_10;
        case m2c::kfrankie_11: 	goto frankie_11;
        case m2c::kfrankie_12: 	goto frankie_12;
        case m2c::kfrankie_13: 	goto frankie_13;
        case m2c::kfrankie_14: 	goto frankie_14;
        case m2c::kfrankie_4: 	goto frankie_4;
        case m2c::kfrankie_5: 	goto frankie_5;
        case m2c::kfrankie_6: 	goto frankie_6;
        case m2c::kfrankie_7: 	goto frankie_7;
        case m2c::kfrankie_8: 	goto frankie_8;
        case m2c::kfrankie_9: 	goto frankie_9;
        case m2c::khdotlinedraw: 	goto hdotlinedraw;
        case m2c::khdotloop: 	goto hdotloop;
        case m2c::khopstepleap2: 	goto hopstepleap2;
        case m2c::kinitmovingmap: 	goto initmovingmap;
        case m2c::kintofeatures: 	goto intofeatures;
        case m2c::knextface: 	goto nextface;
        case m2c::knextlineface: 	goto nextlineface;
        case m2c::knextrunway: 	goto nextrunway;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kpancode_3_proc: 	goto pancode_3_proc;
        case m2c::kpancode_6_proc: 	goto pancode_6_proc;
        case m2c::kpancode_9_proc: 	goto pancode_9_proc;
        case m2c::kradarnonvis: 	goto radarnonvis;
        case m2c::kradarvis: 	goto radarvis;
        case m2c::kscangndobjects: 	goto scangndobjects;
        case m2c::kscanmobiles: 	goto scanmobiles;
        case m2c::kscanstatmobs: 	goto scanstatmobs;
        case m2c::kscanxloop: 	goto scanxloop;
        case m2c::kscanyloop: 	goto scanyloop;
        case m2c::ksectorreject: 	goto sectorreject;
        case m2c::kshadowcheck: 	goto shadowcheck;
        case m2c::kshadowloop: 	goto shadowloop;
        case m2c::kskipface0: 	goto skipface0;
        case m2c::kskipface1: 	goto skipface1;
        case m2c::kskipface2: 	goto skipface2;
        case m2c::kskipface3: 	goto skipface3;
        case m2c::kskipface4: 	goto skipface4;
        case m2c::kskipface5: 	goto skipface5;
        case m2c::kskipface6: 	goto skipface6;
        case m2c::kskipface7: 	goto skipface7;
        case m2c::kskipmobile: 	goto skipmobile;
        case m2c::kskipnetwork: 	goto skipnetwork;
        case m2c::kskiprail: 	goto skiprail;
        case m2c::kskiproad: 	goto skiproad;
        case m2c::kskiprunway: 	goto skiprunway;
        case m2c::kskipscaleup: 	goto skipscaleup;
        case m2c::kskipsector: 	goto skipsector;
        case m2c::kskipstatic1: 	goto skipstatic1;
        case m2c::kskipstatic2: 	goto skipstatic2;
        case m2c::kskipvertex1: 	goto skipvertex1;
        case m2c::ksortacdatum: 	goto sortacdatum;
        case m2c::ksortcurrentwp: 	goto sortcurrentwp;
        case m2c::ksortdisp: 	goto sortdisp;
        case m2c::ksortfloatwp: 	goto sortfloatwp;
        case m2c::ksortline: 	goto sortline;
        case m2c::kupdatemovingmap: 	goto updatemovingmap;
        case m2c::kvdotlinedraw: 	goto vdotlinedraw;
        case m2c::kvdotloop: 	goto vdotloop;
        case m2c::kvertexloop1: 	goto vertexloop1;
        case m2c::kvertexloop2: 	goto vertexloop2;
        default: return __dispatch_call(__disp, _state);
    };
}


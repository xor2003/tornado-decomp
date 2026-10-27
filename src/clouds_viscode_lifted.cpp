/* THIS IS GENERATED FILE */

        
#include "clouds.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initclouds:
	// 729 
	// 0 ;-----------------
	// 0 ;* sort cloud mode (even if clouds are not enabled)
	// 0 ;-----------------
edummylabel1:
	// 4369 
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* mov	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&v_view+vp_zft_hi));
	/* mov	bx,CLOUD_MODE1	;assume viewpoint below clouds */
	bx = 0;
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jb	SetCloudMode	;below clouds -> */
	if (CF) {goto setcloudmode;}
	/* mov	bx,CLOUD_MODE2	;assume viewpoint in clouds */
	bx = 2;
	/* sub	ax,CloudDepth */
	SUB(ax, clouddepth);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* jb	SetCloudMode	;in clouds -> */
	if (CF) {goto setcloudmode;}
	/* mov	bx,CLOUD_MODE3	;viewpoint must be above clouds */
	bx = 4;
setcloudmode:
	// 4371 
	/* SetCloudMode:	mov	CloudMode,bx */
	cloudmode = bx;
	// 0 ;------------------------
	// 0 ;* test if clouds enabled
	// 0 ;------------------------
	/* test	CloudsEnabled,1	;clouds enabled? */
	TEST(*(cloudsenabled), 1);
	/* jnz	__m2c_macrolocal_1_skip */
	if ((*(cloudsenabled) & 1) != 0) {goto __m2c_macrolocal_1_skip;}
	/* jmp	InitDone */
	goto initdone;
__m2c_macrolocal_1_skip:
	// 4373 
	// 0 ;no ->
	// 0 ;----------------------------------------------------------
	// 0 ;* scale (ZFT - CloudBase) > 10,000ft so max ZFT < 32,768ft
	// 0 ;----------------------------------------------------------
	// 0 ;* z scaled = zft / 4 + 7,500
	// 0 ;*
	// 0 ;* @  10,000ft z scaled =  10,000 / 4 + 7,500 = 10,000
	// 0 ;* @ 100,000ft z scaled = 100,000 / 4 + 7,500 = 32,500
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* mov	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&v_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* js	SortNegZScaled */
	if ((short)(dx) < 0) {goto sortnegzscaled;}
	/* mov	WORD PTR ABS_Delta_ZFT,ax */
	*(dw*)(&abs_delta_zft) = ax;
	/* mov	WORD PTR ABS_Delta_ZFT+2,dx */
	*(dw*)(((db*)&abs_delta_zft)+2) = dx;
	/* test	dx,dx		;zft > 65,535ft? */
	TEST(dx, dx);
	/* jnz	CalcPosZScaled	;yes -> */
	if ((dx & dx) != 0) {goto calcposzscaled;}
	/* cmp	ax,10000	;zft > 10,000ft? */
	CMP(ax, 10000);
	/* jbe	ZOk		;no -> */
	if ((dw)(ax) <= (dw)(10000)) {goto zok;}
calcposzscaled:
	// 4375 
	/* add	ax,7500		;z ft / 4 + 7,500 */
	ADD(ax, 7500);
	/* jmp	ZOk */
	goto zok;
sortnegzscaled:
	// 4377 
	/* SortNegZScaled:	not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	WORD PTR ABS_Delta_ZFT,ax */
	*(dw*)(&abs_delta_zft) = ax;
	/* mov	WORD PTR ABS_Delta_ZFT+2,dx */
	*(dw*)(((db*)&abs_delta_zft)+2) = dx;
	/* test	dx,dx		;zft > 65,535ft? */
	TEST(dx, dx);
	/* jnz	CalcNegZScaled	;yes -> */
	if ((dx & dx) != 0) {goto calcnegzscaled;}
	/* cmp	ax,10000	;zft > 10,000ft? */
	CMP(ax, 10000);
	/* jbe	NegZOk		;no -> */
	if ((dw)(ax) <= (dw)(10000)) {goto negzok;}
calcnegzscaled:
	// 4379 
	/* add	ax,7500		;z ft / 4 + 7,500 */
	ADD(ax, 7500);
negzok:
	// 4381 
	/* NegZOk:	not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
zok:
	// 4383 
	/* ZOk:		mov	_ZScaled,ax */
	_zscaled = ax;
	// 0 ;------------------------------------
	// 0 ;* calc sector offsets using _ZScaled
	// 0 ;------------------------------------
	// 0 ;* current sector visual
	/* mov	ax,XRel1 */
	ax = xrel1;
	/* mov	bx,YRel1 */
	bx = yrel1;
	/* mov	cx,_ZScaled */
	cx = _zscaled;
	/* neg	cx */
	NEG(cx);
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	_XE01,ax */
	_xe01 = ax;
	/* mov	_YE01,bx */
	_ye01 = bx;
	/* mov	_ZE01,cx */
	_ze01 = cx;
	// 0 ;* 3 by 3 sector visual
	/* mov	ax,XRel2 */
	ax = xrel2;
	/* mov	bx,YRel2 */
	bx = yrel2;
	/* mov	cx,_ZScaled */
	cx = _zscaled;
	/* neg	cx */
	NEG(cx);
	/* sar	cx,1		;/2 scaling */
	SAR(cx, 1);
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	_XE02,ax */
	_xe02 = ax;
	/* mov	_YE02,bx */
	_ye02 = bx;
	/* mov	_ZE02,cx */
	_ze02 = cx;
	// 0 ;* 7 by 7 sector visual
	/* mov	ax,XRel8 */
	ax = xrel8;
	/* mov	bx,YRel8 */
	bx = yrel8;
	/* mov	cx,_ZScaled */
	cx = _zscaled;
	/* neg	cx */
	NEG(cx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1		;/8 scaling */
	SAR(cx, 1);
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	_XE08,ax */
	_xe08 = ax;
	/* mov	_YE08,bx */
	_ye08 = bx;
	/* mov	_ZE08,cx */
	_ze08 = cx;
	// 0 ;* 15 by 15 sector visual
	/* mov	ax,XRel16 */
	ax = xrel16;
	/* mov	bx,YRel16 */
	bx = yrel16;
	/* mov	cx,_ZScaled */
	cx = _zscaled;
	/* neg	cx */
	NEG(cx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* sar	cx,1		;/16 scaling */
	SAR(cx, 1);
	/* call	CalcEyePosition */
	CALL(calceyeposition, 0);
	/* mov	_XE016,ax */
	_xe016 = ax;
	/* mov	_YE016,bx */
	_ye016 = bx;
	/* mov	_ZE016,cx */
	_ze016 = cx;
initdone:
	// 4385 
	/* InitDone:	ret */
	RETN(0);
viscode_0_proc:
	// 863 
exitclouds1:
	// 4387 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
exitclouds2:
	// 4397 
	// 0 ;* kill: assume all
	/* ret */
	RETN(0);
drawclouds1:
	// 865 
	/* test	CloudsEnabled,1	;clouds enabled? */
	TEST(*(cloudsenabled), 1);
edummylabel2:
	// 4389 
	/* jz	ExitClouds1	;no -> */
	if (ZF) {goto exitclouds1;}
	// 0 ;---------------------------
	// 0 ;* sort cyclic wrt CloudMode
	// 0 ;---------------------------
	/* mov	bx,CloudMode */
	bx = cloudmode;
	/* mov	ax,Cloud1Cyclic[bx] */
	ax = *(dw*)(((db*)&cloud1cyclic)+bx);
	/* mov	FaceCyclic,ax */
	facecyclic = ax;
	// 0 ;--------------------------------
	// 0 ;* for y sector offset = -n to +n
	// 0 ;--------------------------------
	/* mov	cx,SecScanCnt2	;y count */
	cx = secscancnt2;
	/* mov	di,SecScanOff2	;y sector offset */
	di = secscanoff2;
scanyloop1:
	// 4391 
	/* ScanYLoop1:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;--------------------------------
	// 0 ;* for x sector offset = -n to +n
	// 0 ;--------------------------------
	/* mov	cx,SecScanCnt2	;x count */
	cx = secscancnt2;
	/* mov	si,SecScanOff2	;x sector offset */
	si = secscanoff2;
scanxloop1:
	// 4393 
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
	// 0 ;---------------------
	// 0 ;* test for null cloud
	// 0 ;---------------------
	/* mov	bp,ax */
	bp = ax;
	/* mov	al,CloudLayer1[bp] */
	al = *((&cloudlayer1)+bp);
	/* test	al,al		;null cloud? */
	TEST(al, al);
	/* jz	SkipSector1	;yes -> */
	if (!(al & al)) {goto skipsector1;}
	/* mov	CloudNum,al */
	*(cloudnum) = al;
	// 0 ;------------------------
	// 0 ;* calc sector scale mode
	// 0 ;------------------------
	/* call	CalcSctrScale */
	CALL(calcsctrscale, 0);
	// 0 ;------------------------------------------------------------------
	// 0 ;* calc sector centre position and if sector is visible, draw cloud
	// 0 ;------------------------------------------------------------------
	/* xor	bp,bp		;draw clouds at CloudBase */
	XOR(bp, bp);
	/* call	CalcSctrCentre[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcsctrcentre)+bx));
	/* jc	SkipSector1	;sector non-visible -> */
	if (CF) {goto skipsector1;}
	/* call	DrawOneCloud */
	CALL(drawonecloud, 0);
	// 0 ;---------------
	// 0 ;* next x sector
	// 0 ;---------------
skipsector1:
	// 4395 
	/* SkipSector1:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,1		;x = x + 1 */
	ADD(si, 1);
	/* loop	ScanXLoop1 */
	LOOP(scanxloop1);
	// 0 ;---------------
	// 0 ;* next y sector
	// 0 ;---------------
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* add	di,1		;y = y + 1 */
	ADD(di, 1);
	/* loop	ScanYLoop1 */
	LOOP(scanyloop1);
	/* ret */
	RETN(0);
drawclouds2:
	// 969 
	/* test	CloudsEnabled,1	;clouds enabled? */
	TEST(*(cloudsenabled), 1);
edummylabel3:
	// 4399 
	/* jz	ExitClouds2	;no -> */
	if (ZF) {goto exitclouds2;}
	// 0 ;---------------------------
	// 0 ;* sort cyclic wrt CloudMode
	// 0 ;---------------------------
	/* mov	bx,CloudMode */
	bx = cloudmode;
	/* mov	ax,Cloud2Cyclic[bx] */
	ax = *(dw*)(((db*)&cloud2cyclic)+bx);
	/* mov	FaceCyclic,ax */
	facecyclic = ax;
	// 0 ;--------------------------------
	// 0 ;* for y sector offset = -n to +n
	// 0 ;--------------------------------
	/* mov	cx,SecScanCnt2	;y count */
	cx = secscancnt2;
	/* mov	di,SecScanOff2	;y sector offset */
	di = secscanoff2;
scanyloop2:
	// 4401 
	/* ScanYLoop2:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;--------------------------------
	// 0 ;* for x sector offset = -n to +n
	// 0 ;--------------------------------
	/* mov	cx,SecScanCnt2	;x count */
	cx = secscancnt2;
	/* mov	si,SecScanOff2	;x sector offset */
	si = secscanoff2;
scanxloop2:
	// 4403 
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
	// 0 ;---------------------
	// 0 ;* test for null cloud
	// 0 ;---------------------
	/* mov	bp,ax */
	bp = ax;
	/* mov	al,CloudLayer2[bp] */
	al = *((&cloudlayer2)+bp);
	/* test	al,al		;null cloud? */
	TEST(al, al);
	/* jz	SkipSector2	;yes -> */
	if (!(al & al)) {goto skipsector2;}
	/* mov	CloudNum,al */
	*(cloudnum) = al;
	// 0 ;------------------------
	// 0 ;* calc sector scale mode
	// 0 ;------------------------
	/* call	CalcSctrScale */
	CALL(calcsctrscale, 0);
	// 0 ;------------------------------------------------------------------
	// 0 ;* calc sector centre position and if sector is visible, draw cloud
	// 0 ;------------------------------------------------------------------
	/* mov	ax,CloudDepth	;draw clouds at CloudBase + CloudDepth */
	ax = clouddepth;
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 word index */
	SHL(ax, 1);
	/* mov	bp,ax */
	bp = ax;
	/* call	CalcSctrCentre[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&calcsctrcentre)+bx));
	/* jc	SkipSector2	;sector non-visible -> */
	if (CF) {goto skipsector2;}
	/* call	DrawOneCloud */
	CALL(drawonecloud, 0);
	// 0 ;---------------
	// 0 ;* next x sector
	// 0 ;---------------
skipsector2:
	// 4405 
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
	/* ret */
	RETN(0);
drawonecloud:
	// 1075 
	// 0 ;* fetch pointer to cloud data
edummylabel4:
	// 4407 
	/* mov	bl,CloudNum */
	bl = *(cloudnum);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	si,CloudTable[bx] */
	si = *(dw*)(((db*)&cloudtable)+bx);
	// 0 ;* test if cloud is within visual range
	/* mov	ax,FEATOBJ1 */
	ax = seg_offset(featobj1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;extra-segment override
	/* lodsw */
	LODS(*(dw*)(raddr(es,si)),si,2);
	// 0 ;fetch max visual range
	/* cmp	ax,SctrScaleMode */
	CMP(ax, sctrscalemode);
	/* jae	InRange		;in range -> */
	if ((dw)(ax) >= (dw)(sctrscalemode)) {goto inrange;}
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* jmp	ExitOneCloud */
	goto exitonecloud;
	// 0 ;* scan vertex list and calculate eye co-ord data wrt sector scale mode
inrange:
	// 4409 
	/* InRange:	mov	bx,SctrScaleMode */
	bx = sctrscalemode;
	/* call	ScanVertexList[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&scanvertexlist)+bx));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* test if cloud is visible
	/* push	si */
	PUSH(si);
	/* mov	si,di */
	si = di;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* pop	si */
	POP(si);
	/* jc	ExitOneCloud	;cloud non-visible -> */
	if (CF) {goto exitonecloud;}
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
	// 1119 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1121 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1122 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1123 rep	movsb
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
	// 4411 
	/* NextFace:	lodsb		    	;fetch attribute */
	{ LODSB; }
	/* cmp	al,-1		;end of face list? */
	CMP(al, -1);
	/* je	ExitOneCloud	;yes -> */
	if ((db)(al) == (db)(-1)) {goto exitonecloud;}
	/* push	ax	  	;store attribute */
	PUSH(ax);
	/* lodsw			;fetch logical colours */
	{ LODSW; }
	/* mov	Colours,ax */
	colours = ax;
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* pop	bx		;restore attribute */
	POP(bx);
	/* jc	NextFace	;polygon non-visible -> */
	if (CF) {goto nextface;}
	/* push	si		;store face ptr */
	PUSH(si);
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* and	bx,0001b	;select solid / mesh */
	AND(bx, 0x1);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* add	bx,FaceCyclic */
	ADD(bx, facecyclic);
__disp=*(dw*)(raddr(ds,bx));
	/* jmp	[bx] */
	J(return __dispatch_call_ext(__disp, _state));
_polyfill:
	// 4413 
	/* _PolyFill:	mov	al,Col1 */
	al = col1;
	/* call	PolyFill */
	CALLF(polyfill, 0);
	/* pop	si		;restore face ptr */
	POP(si);
	/* jmp	Nextface */
	goto nextface;
_meshfill:
	// 4415 
	/* _MeshFill:	mov	al,Col1 */
	al = col1;
	/* call	MeshFill */
	CALLF(meshfill, 0);
	/* pop	si		;restore face ptr */
	POP(si);
	/* jmp	Nextface */
	goto nextface;
_rvrspolyfill:
	// 4417 
	/* _RvrsPolyFill:	mov	al,Col2 */
	al = col2;
	/* call	RvrsPolyFill */
	CALLF(rvrspolyfill, 0);
	/* pop	si		;restore face ptr */
	POP(si);
	/* jmp	Nextface */
	goto nextface;
_rvrsmeshfill:
	// 4419 
	/* _RvrsMeshFill:	mov	al,Col2 */
	al = col2;
	/* call	RvrsMeshFill */
	CALLF(rvrsmeshfill, 0);
	/* pop	si		;restore face ptr */
	POP(si);
	/* jmp	Nextface */
	goto nextface;
exitonecloud:
	// 4421 
	/* ExitOneCloud:	ret */
	RETN(0);
calcsctrscale:
	// 1173 
	/* mov	bx,SEC_SCALE16	;assume > 3 sectors */
	bx = 6;
edummylabel5:
	// 4423 
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
	/* mov	ax,WORD PTR ABS_Delta_ZFT+2 */
	ax = *(dw*)(((db*)&abs_delta_zft)+2);
	/* test	ax,ax		;zft > 65,535ft? */
	TEST(ax, ax);
	/* jnz	SetScaleMode	;yes -> */
	if ((ax & ax) != 0) {goto setscalemode;}
	/* mov	ax,WORD PTR ABS_Delta_ZFT */
	ax = *(dw*)(&abs_delta_zft);
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
	// 4425 
	/* SetScaleMode:	mov	SctrScaleMode,bx */
	sctrscalemode = bx;
	/* ret */
	RETN(0);
calccentre1:
	// 1227 
	// 0 ;* calc current sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 64 - XGrid1 + 32 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 64 - YGrid1 + 32 + 64) * 2
edummylabel6:
	// 4427 
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
	/* mov	bx,bp */
	bx = bp;
	/* mov	ax,_XE01 */
	ax = _xe01;
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* add	ax,XSZ[bx] */
	ADD(ax, *(dw*)(((db*)&xsz)+bx));
	/* mov	XPos1,ax */
	xpos1 = ax;
	/* mov	ax,_YE01 */
	ax = _ye01;
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* add	ax,YSZ[bx] */
	ADD(ax, *(dw*)(((db*)&ysz)+bx));
	/* mov	YPos1,ax */
	ypos1 = ax;
	/* mov	ax,_ZE01 */
	ax = _ze01;
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* add	ax,ZSZ[bx] */
	ADD(ax, *(dw*)(((db*)&zsz)+bx));
	/* mov	ZPos1,ax */
	zpos1 = ax;
	/* clc			;current sector always visible */
	CLC;
	/* ret */
	RETN(0);
calccentre2:
	// 1271 
	// 0 ;* calc 3 by 3 visual sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 32 - XGrid2 + 16 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 32 - YGrid2 + 16 + 64) * 2
edummylabel7:
	// 4429 
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
	/* mov	bx,bp */
	bx = bp;
	/* mov	ax,YSZ[bx] */
	ax = *(dw*)(((db*)&ysz)+bx);
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,_YE02 */
	ADD(ax, _ye02);
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* cmp	ax,-SCTR_Y_THRES/2 */
	CMP(ax, -11600/2);
	/* jl	FailSector2	;reject sector -> */
	if ((short)(ax) < (short)(-11600/2)) {goto failsector2;}
	/* mov	YPos2,ax */
	ypos2 = ax;
	/* mov	ax,XSZ[bx] */
	ax = *(dw*)(((db*)&xsz)+bx);
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,_XE02 */
	ADD(ax, _xe02);
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos2,ax */
	xpos2 = ax;
	/* mov	ax,ZSZ[bx] */
	ax = *(dw*)(((db*)&zsz)+bx);
	/* sar	ax,1		;/2 scaling */
	SAR(ax, 1);
	/* add	ax,_ZE02 */
	ADD(ax, _ze02);
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos2,ax */
	zpos2 = ax;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
failsector2:
	// 4431 
	/* FailSector2:	stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
calccentre8:
	// 1334 
	// 0 ;* calc 7 by 7 visual sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 8 - XGrid8 + 4 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 8 - YGrid8 + 4 + 64) * 2
edummylabel8:
	// 4433 
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
	/* mov	bx,bp */
	bx = bp;
	/* mov	ax,YSZ[bx] */
	ax = *(dw*)(((db*)&ysz)+bx);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,_YE08 */
	ADD(ax, _ye08);
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* cmp	ax,-SCTR_Y_THRES/8 */
	CMP(ax, -11600/8);
	/* jl	FailSector8	;reject sector -> */
	if ((short)(ax) < (short)(-11600/8)) {goto failsector8;}
	/* mov	YPos8,ax */
	ypos8 = ax;
	/* mov	ax,XSZ[bx] */
	ax = *(dw*)(((db*)&xsz)+bx);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,_XE08 */
	ADD(ax, _xe08);
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos8,ax */
	xpos8 = ax;
	/* mov	ax,ZSZ[bx] */
	ax = *(dw*)(((db*)&zsz)+bx);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/8 scaling */
	SAR(ax, 1);
	/* add	ax,_ZE08 */
	ADD(ax, _ze08);
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos8,ax */
	zpos8 = ax;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
failsector8:
	// 4435 
	/* FailSector8:	stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
calccentre16:
	// 1399 
	// 0 ;* calc 15 by 15 visual sector centre position:-
	// 0 ;*
	// 0 ;* x sector grid index = (x sec offset * 4 - XGrid16 + 2 + 64) * 2
	// 0 ;*
	// 0 ;* y sector grid index = (-(y sec offset) * 4 - YGrid16 + 2 + 64) * 2
edummylabel9:
	// 4437 
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
	/* mov	bx,bp */
	bx = bp;
	/* mov	ax,YSZ[bx] */
	ax = *(dw*)(((db*)&ysz)+bx);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,_YE016 */
	ADD(ax, _ye016);
	/* add	ax,YSX[si] */
	ADD(ax, *(dw*)(((db*)&ysx)+si));
	/* add	ax,YSY[di] */
	ADD(ax, *(dw*)(((db*)&ysy)+di));
	/* cmp	ax,-SCTR_Y_THRES/16 */
	CMP(ax, -11600/16);
	/* jl	FailSector16	;reject sector -> */
	if ((short)(ax) < (short)(-11600/16)) {goto failsector16;}
	/* mov	YPos16,ax */
	ypos16 = ax;
	/* mov	ax,XSZ[bx] */
	ax = *(dw*)(((db*)&xsz)+bx);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,_XE016 */
	ADD(ax, _xe016);
	/* add	ax,XSX[si] */
	ADD(ax, *(dw*)(((db*)&xsx)+si));
	/* add	ax,XSY[di] */
	ADD(ax, *(dw*)(((db*)&xsy)+di));
	/* mov	XPos16,ax */
	xpos16 = ax;
	/* mov	ax,ZSZ[bx] */
	ax = *(dw*)(((db*)&zsz)+bx);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1		;/16 scaling */
	SAR(ax, 1);
	/* add	ax,_ZE016 */
	ADD(ax, _ze016);
	/* add	ax,ZSX[si] */
	ADD(ax, *(dw*)(((db*)&zsx)+si));
	/* add	ax,ZSY[di] */
	ADD(ax, *(dw*)(((db*)&zsy)+di));
	/* mov	ZPos16,ax */
	zpos16 = ax;
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
failsector16:
	// 4439 
	/* FailSector16:	stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
scanvertex1:
	// 1463 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel10:
	// 4441 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
skipvertex1:
	// 4443 
	/* SkipVertex1:	add	si,2 */
	ADD(si, 2);
vertexloop1:
	// 4445 
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
	/* add	cx,XPos1 	;XPos1 + XSX + XSY */
	ADD(cx, xpos1);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* add	dx,YPos1 	;YPos1 + YSX + YSY */
	ADD(dx, ypos1);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* add	bp,ZPos1 	;ZPos1 + ZSX + ZSY */
	ADD(bp, zpos1);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop1 */
	goto vertexloop1;
exitvertex1:
	// 4447 
	/* ExitVertex1:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex2:
	// 1512 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel11:
	// 4449 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop2 */
	goto vertexloop2;
skipvertex2:
	// 4451 
	/* SkipVertex2:	add	si,2 */
	ADD(si, 2);
vertexloop2:
	// 4453 
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
	/* add	cx,XPos2 	;XPos2 + XSX + XSY */
	ADD(cx, xpos2);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1		;/2 scaling */
	SAR(dx, 1);
	/* add	dx,YPos2  	;YPos2 + YSX + YSY */
	ADD(dx, ypos2);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1		;/2 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos2 	;ZPos2 + ZSX + ZSY */
	ADD(bp, zpos2);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop2 */
	goto vertexloop2;
exitvertex2:
	// 4455 
	/* ExitVertex2:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex8:
	// 1564 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel12:
	// 4457 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop8 */
	goto vertexloop8;
skipvertex8:
	// 4459 
	/* SkipVertex8:	add	si,2 */
	ADD(si, 2);
vertexloop8:
	// 4461 
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
	/* add	cx,XPos8 	;XPos8 + XSX + XSY */
	ADD(cx, xpos8);
	/* mov	Xe[di],cx */
	*(dw*)(((db*)&xe)+di) = cx;
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* sar	dx,1		;/8 scaling */
	SAR(dx, 1);
	/* add	dx,YPos8 	;YPos8 + YSX + YSY */
	ADD(dx, ypos8);
	/* mov	Ye[di],dx */
	*(dw*)(((db*)&ye)+di) = dx;
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1		;/8 scaling */
	SAR(bp, 1);
	/* add	bp,ZPos8 	;ZPos8 + ZSX + ZSY */
	ADD(bp, zpos8);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop8 */
	goto vertexloop8;
exitvertex8:
	// 4463 
	/* ExitVertex8:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
scanvertex16:
	// 1622 
	/* xor	di,di		;reset eye co-ord index */
	XOR(di, di);
edummylabel13:
	// 4465 
	/* xor	bx,bx		;reset index (high byte always 0) */
	XOR(bx, bx);
	/* jmp	VertexLoop16 */
	goto vertexloop16;
skipvertex16:
	// 4467 
	/* SkipVertex16:	add	si,2 */
	ADD(si, 2);
vertexloop16:
	// 4469 
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
	/* add	bp,ZPos16  	;ZPos16 + ZSX + ZSY */
	ADD(bp, zpos16);
	/* mov	Ze[di],bp */
	*(dw*)(((db*)&ze)+di) = bp;
	/* add	di,2		;next index */
	ADD(di, 2);
	/* jmp	VertexLoop16 */
	goto vertexloop16;
exitvertex16:
	// 4471 
	/* ExitVertex16:	sub	di,2		;di indexes last vertex */
	SUB(di, 2);
	/* ret */
	RETN(0);
randomizeclouds:
	// 1683 
	// 0 ;----------------
	// 0 ;* calc cloud top
	// 0 ;----------------
edummylabel14:
	// 4473 
	/* mov	ax,WORD PTR CloudBase */
	ax = *(dw*)(&cloudbase);
	/* mov	dx,WORD PTR CloudBase+2 */
	dx = *(dw*)(((db*)&cloudbase)+2);
	/* add	ax,CloudDepth */
	ADD(ax, clouddepth);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	WORD PTR CloudTop,ax */
	*(dw*)(&cloudtop) = ax;
	/* mov	WORD PTR CloudTop+2,dx */
	*(dw*)(((db*)&cloudtop)+2) = dx;
	// 0 ;------------------
	// 0 ;* shift x position
	// 0 ;------------------
	/* call	RandX */
	CALLF(randx, 0);
	/* and	ax,0001fh	;0 .. 31 */
	AND(ax, 0x0001f);
	/* jz	SkipXShift	;0 -> */
	if (ax == 0) {goto skipxshift;}
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,SEG CloudLayer1 */
	ax = m2c::segment_of_external(cloudlayer1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* shift CloudLayer1[]
	/* push	cx */
	PUSH(cx);
xloop1:
	// 4475 
	/* XLoop1:		push	cx */
	PUSH(cx);
	/* mov	cx,32 */
	cx = 32;
	/* mov	si,OFFSET CloudLayer1+1 */
	si = m2c::near_offset_external(cloudlayer1)+1;
	/* mov	di,OFFSET CloudLayer1 */
	di = m2c::near_offset_external(cloudlayer1);
dummylabel1:
	// 4477 
	/* @@:		push	cx */
	PUSH(cx);
	/* mov	al,[di]		;shift row left */
	al = m2c::getdata(*(raddr(ds,di)));
	/* mov	cx,31 */
	cx = 31;
	// 1715 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	[di],al */
	m2c::setdata(&(*(raddr(ds,di))), m2c::getdata(al));
	/* inc	si */
	INC(si);
	/* inc	di */
	INC(di);
	/* pop	cx */
	POP(cx);
	/* loop	@B */
	LOOP(dummylabel1);
	/* pop	cx */
	POP(cx);
	/* loop	XLoop1 */
	LOOP(xloop1);
	/* pop	cx */
	POP(cx);
	// 0 ;* shift CloudLayer2[]
xloop2:
	// 4479 
	/* XLoop2:		push	cx */
	PUSH(cx);
	/* mov	cx,32 */
	cx = 32;
	/* mov	si,OFFSET CloudLayer2+1 */
	si = m2c::near_offset_external(cloudlayer2)+1;
	/* mov	di,OFFSET CloudLayer2 */
	di = m2c::near_offset_external(cloudlayer2);
dummylabel2:
	// 4481 
	/* @@:		push	cx */
	PUSH(cx);
	/* mov	al,[di]		;shift row left */
	al = m2c::getdata(*(raddr(ds,di)));
	/* mov	cx,31 */
	cx = 31;
	// 1733 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	[di],al */
	m2c::setdata(&(*(raddr(ds,di))), m2c::getdata(al));
	/* inc	si */
	INC(si);
	/* inc	di */
	INC(di);
	/* pop	cx */
	POP(cx);
	/* loop	@B */
	LOOP(dummylabel2);
	/* pop	cx */
	POP(cx);
	/* loop	XLoop2 */
	LOOP(xloop2);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;------------------
	// 0 ;* shift y position
	// 0 ;------------------
skipxshift:
	// 4483 
	/* SkipXShift: 	call	RandX */
	CALLF(randx, 0);
	/* and	ax,0001fh	;0 .. 31 */
	AND(ax, 0x0001f);
	/* jz	SkipYShift	;0 -> */
	if (ax == 0) {goto skipyshift;}
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,SEG CloudLayer1 */
	ax = m2c::segment_of_external(cloudlayer1);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* shift CloudLayer1[]
	/* push	cx */
	PUSH(cx);
yloop1:
	// 4485 
	/* YLoop1:		push	cx */
	PUSH(cx);
	// 0 ;* store first row on stack
	/* mov	cx,16 */
	cx = 16;
	/* mov	si,OFFSET CloudLayer1 */
	si = m2c::near_offset_external(cloudlayer1);
dummylabel3:
	// 4487 
	/* @@:		lodsw */
	{ LODSW; }
	/* push	ax */
	PUSH(ax);
	/* loop	@B */
	LOOP(dummylabel3);
	// 0 ;* shift 31 rows up (overwriting first row)
	/* mov	cx,31*32/2 */
	cx = 31*32/2;
	/* mov	si,OFFSET CloudLayer1+32 */
	si = m2c::near_offset_external(cloudlayer1)+32;
	/* mov	di,OFFSET CloudLayer1 */
	di = m2c::near_offset_external(cloudlayer1);
	// 1771 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* restore last row from stack
	/* mov	cx,16 */
	cx = 16;
	/* mov	di,OFFSET CloudLayer1+32*32-2 */
	di = m2c::near_offset_external(cloudlayer1)+32*32-2;
	/* std */
	STD;
dummylabel4:
	// 4489 
	/* @@:		pop	ax */
	POP(ax);
	/* stosw */
	{ STOSW; }
	/* loop	@B */
	LOOP(dummylabel4);
	/* cld */
	CLD;
	/* pop	cx */
	POP(cx);
	/* loop	YLoop1 */
	LOOP(yloop1);
	/* pop	cx */
	POP(cx);
	// 0 ;* shift CloudLayer2[]
yloop2:
	// 4491 
	/* YLoop2:		push	cx */
	PUSH(cx);
	// 0 ;* store first row on stack
	/* mov	cx,16 */
	cx = 16;
	/* mov	si,OFFSET CloudLayer2 */
	si = m2c::near_offset_external(cloudlayer2);
dummylabel5:
	// 4493 
	/* @@:		lodsw */
	{ LODSW; }
	/* push	ax */
	PUSH(ax);
	/* loop	@B */
	LOOP(dummylabel5);
	// 0 ;* shift 31 rows up (overwriting first row)
	/* mov	cx,31*32/2 */
	cx = 31*32/2;
	/* mov	si,OFFSET CloudLayer2+32 */
	si = m2c::near_offset_external(cloudlayer2)+32;
	/* mov	di,OFFSET CloudLayer2 */
	di = m2c::near_offset_external(cloudlayer2);
	// 1799 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* restore last row from stack
	/* mov	cx,16 */
	cx = 16;
	/* mov	di,OFFSET CloudLayer2+32*32-2 */
	di = m2c::near_offset_external(cloudlayer2)+32*32-2;
	/* std */
	STD;
dummylabel6:
	// 4495 
	/* @@:		pop	ax */
	POP(ax);
	/* stosw */
	{ STOSW; }
	/* loop	@B */
	LOOP(dummylabel6);
	/* cld */
	CLD;
	/* pop	cx */
	POP(cx);
	/* loop	YLoop2 */
	LOOP(yloop2);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
skipyshift:
	// 4497 
	/* SkipYShift:	ret */
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
        case m2c::k_meshfill: 	goto _meshfill;
        case m2c::k_polyfill: 	goto _polyfill;
        case m2c::k_rvrsmeshfill: 	goto _rvrsmeshfill;
        case m2c::k_rvrspolyfill: 	goto _rvrspolyfill;
        case m2c::kcalccentre1: 	goto calccentre1;
        case m2c::kcalccentre16: 	goto calccentre16;
        case m2c::kcalccentre2: 	goto calccentre2;
        case m2c::kcalccentre8: 	goto calccentre8;
        case m2c::kcalcnegzscaled: 	goto calcnegzscaled;
        case m2c::kcalcposzscaled: 	goto calcposzscaled;
        case m2c::kcalcsctrscale: 	goto calcsctrscale;
        case m2c::kdrawclouds1: 	goto drawclouds1;
        case m2c::kdrawclouds2: 	goto drawclouds2;
        case m2c::kdrawonecloud: 	goto drawonecloud;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitclouds1: 	goto exitclouds1;
        case m2c::kexitclouds2: 	goto exitclouds2;
        case m2c::kexitonecloud: 	goto exitonecloud;
        case m2c::kexitvertex1: 	goto exitvertex1;
        case m2c::kexitvertex16: 	goto exitvertex16;
        case m2c::kexitvertex2: 	goto exitvertex2;
        case m2c::kexitvertex8: 	goto exitvertex8;
        case m2c::kfailsector16: 	goto failsector16;
        case m2c::kfailsector2: 	goto failsector2;
        case m2c::kfailsector8: 	goto failsector8;
        case m2c::kinitclouds: 	goto initclouds;
        case m2c::kinitdone: 	goto initdone;
        case m2c::kinrange: 	goto inrange;
        case m2c::knegzok: 	goto negzok;
        case m2c::knextface: 	goto nextface;
        case m2c::krandomizeclouds: 	goto randomizeclouds;
        case m2c::kscanvertex1: 	goto scanvertex1;
        case m2c::kscanvertex16: 	goto scanvertex16;
        case m2c::kscanvertex2: 	goto scanvertex2;
        case m2c::kscanvertex8: 	goto scanvertex8;
        case m2c::kscanxloop1: 	goto scanxloop1;
        case m2c::kscanxloop2: 	goto scanxloop2;
        case m2c::kscanyloop1: 	goto scanyloop1;
        case m2c::kscanyloop2: 	goto scanyloop2;
        case m2c::ksetcloudmode: 	goto setcloudmode;
        case m2c::ksetscalemode: 	goto setscalemode;
        case m2c::kskipsector1: 	goto skipsector1;
        case m2c::kskipsector2: 	goto skipsector2;
        case m2c::kskipvertex1: 	goto skipvertex1;
        case m2c::kskipvertex16: 	goto skipvertex16;
        case m2c::kskipvertex2: 	goto skipvertex2;
        case m2c::kskipvertex8: 	goto skipvertex8;
        case m2c::kskipxshift: 	goto skipxshift;
        case m2c::kskipyshift: 	goto skipyshift;
        case m2c::ksortnegzscaled: 	goto sortnegzscaled;
        case m2c::kvertexloop1: 	goto vertexloop1;
        case m2c::kvertexloop16: 	goto vertexloop16;
        case m2c::kvertexloop2: 	goto vertexloop2;
        case m2c::kvertexloop8: 	goto vertexloop8;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        case m2c::kxloop1: 	goto xloop1;
        case m2c::kxloop2: 	goto xloop2;
        case m2c::kyloop1: 	goto yloop1;
        case m2c::kyloop2: 	goto yloop2;
        case m2c::kzok: 	goto zok;
        default: return __dispatch_call(__disp, _state);
    };
}


/* THIS IS GENERATED FILE */

        
#include "explore.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
mapexplore:
	// 2633 
	// 0 ;mov SplitScreenBigMapIsOn,0
edummylabel1:
	// 4369 
	/* call	InitMapExplore */
	CALL(initmapexplore, 0);
exploreloop:
	// 4371 
	/* ExploreLoop:	call	MapView */
	CALLF(mapview, 0);
	/* mov	al,BYTE PTR KF_Quit[K_STATUS] */
	al = *((&kf_quit)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;quit explore mode?
/* m2c-phantom removed: 	R(al = *((&kf_quit)+k_status););	// 2641 mov	al,BYTE PTR KF_Quit[K_STATUS] */
	/* jnz	ExploreExit	;yes -> */
	if ((al & al) != 0) {goto exploreexit;}
	/* call	FlyView */
	CALL(flyview, 0);
	/* mov	al,BYTE PTR KF_Quit[K_STATUS] */
	al = *((&kf_quit)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;quit explore mode?
/* m2c-phantom removed: 	R(al = *((&kf_quit)+k_status););	// 2647 mov	al,BYTE PTR KF_Quit[K_STATUS] */
	/* jnz	ExploreExit	;yes -> */
	if ((al & al) != 0) {goto exploreexit;}
	/* jmp	ExploreLoop */
	goto exploreloop;
exploreexit:
	// 4373 
	/* ExploreExit:	call	BorderCheck	;ensure on map (for mission planner) */
	CALL(bordercheck, 0);
	/* mov	DieFlag,DIE_QUIT */
	dieflag = 1;
	/* ret */
	RETF(0);
initmapexplore:
	// 2662 
	// 0 ;* install user timer interrupt
edummylabel2:
	// 4375 
	/* mov	ax,OFFSET ExploreIntr100 */
	ax = m2c::kglobal_exploreintr100;
	/* mov	dx,SEG ExploreIntr100 */
	dx = seg_offset(exploreintr100);
	/* call	InstallUser100 */
	CALLF(installuser100, 0);
	// 0 ;* initialize mouse
	/* mov	MouseXMin,MOUSE_X_MIN */
	mousexmin = 0;
	/* mov	MouseXMax,MOUSE_X_MAX */
	mousexmax = 639;
	/* mov	MouseYMin,MOUSE_Y_MIN */
	mouseymin = 0;
	/* mov	MouseYMax,MOUSE_Y_MAX */
	mouseymax = 399;
	/* call	SetMouseLimits */
	CALLF(setmouselimits, 0);
	/* ret */
	RETN(0);
mapview:
	// 2685 
	/* call	InitMapView ;* kill: assume all */
	CALL(initmapview, 0);
maploop:
	// 4377 
	/* MapLoop:	call	UpdateKeys */
	CALL(updatekeys, 0);
	/* call	CalcDeltaTime */
	CALLF(calcdeltatime, 0);
	/* call	ReadMouse */
	CALLF(readmouse, 0);
	/* test	dl,dl		;lh button pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel1;}
	/* call	MapZoomIn */
	CALL(mapzoomin, 0);
	/* jmp	ContMap */
	goto contmap;
dummylabel1:
	// 4379 
	/* @@:		test	dh,dh		;rh button pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel2;}
	/* call	MapZoomOut */
	CALL(mapzoomout, 0);
	/* jmp	ContMap */
	goto contmap;
dummylabel2:
	// 4381 
	/* @@:		call	ScrollMap */
	CALL(scrollmap, 0);
contmap:
	// 4383 
	/* ContMap:	call	DrawMap */
	CALL(drawmap, 0);
	/* call	DrawLocator */
	CALL(drawlocator, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* mov	al,BYTE PTR KF_ToggleMode[K_STATUS] */
	al = *(db*)(((db*)&kf_togglemode)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;toggle mode?
	/* jnz	ExitMapView	;yes -> */
	if ((al & al) != 0) {goto exitmapview;}
	/* mov	al,BYTE PTR KF_Quit[K_STATUS] */
	al = *((&kf_quit)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;quit explore mode?
/* m2c-phantom removed: 	R(al = *((&kf_quit)+k_status););	// 2710 mov	al,BYTE PTR KF_Quit[K_STATUS] */
	/* jnz	ExitMapView	;yes -> */
	if ((al & al) != 0) {goto exitmapview;}
	/* jmp	MapLoop */
	goto maploop;
exitmapview:
	// 4385 
	/* ExitMapView:	ret */
	RETF(0);
initmapview:
	// 2723 
	/* mov	EXP_VIEW.VP_HDG,0 ;* kill: assume all */
	exp_view.vp_hdg = 0;
	// 0 ;* draw map
edummylabel3:
	// 4387 
	/* mov	ReDrawMap,1 */
	*(redrawmap) = 1;
	/* call	DrawMap */
	CALL(drawmap, 0);
	// 0 ;* move locator to screen centre
	/* mov	cx,MOUSE_X_CENTRE */
	cx = 320;
	/* mov	bx,MOUSE_Y_CENTRE */
	bx = 200;
	/* call	SetMousePos */
	CALLF(setmousepos, 0);
	/* call	DrawLocator */
	CALL(drawlocator, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* ret */
	RETN(0);
drawmap:
	// 2747 
	/* test	ReDrawMap,1	;redraw map? */
	TEST(*(redrawmap), 1);
edummylabel4:
	// 4389 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel3;}
	/* call	BorderCheck */
	CALL(bordercheck, 0);
	// 0 ;* redraw map and save to buffer
	/* mov	ax,MAP_FULL_DISP */
	ax = map_full_disp;
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	dx,ExpMapZoom */
	dx = expmapzoom;
	/* mov	bp,MAP_ORG_CENTRE */
	bp = map_org_centre;
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	UpdateMovingMap */
	CALLF(updatemovingmap, 0);
	/* call	DrawMapBorder */
	CALLF(drawmapborder, 0);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	dx,ExpMapZoom */
	dx = expmapzoom;
	/* call	MapCompass */
	CALLF(mapcompass, 0);
	/* call	SaveMap */
	CALL(savemap, 0);
	/* mov	ReDrawMap,0 */
	*(redrawmap) = 0;
	/* jmp	ExitDrawMap */
	goto exitdrawmap;
	// 0 ;* draw map from buffer
dummylabel3:
	// 4391 
	/* @@:		call	LoadMap */
	CALL(loadmap, 0);
exitdrawmap:
	// 4393 
	/* ExitDrawMap:	ret */
	RETN(0);
savemap:
	// 2783 
	/* push	ds ;* note: VGA ONLY */
	PUSH(ds);
edummylabel5:
	// 4395 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,VGA_PAGE_2 */
	ax = 0x0a800;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	si,si */
	XOR(si, si);
	/* xor	di,di */
	XOR(di, di);
	/* mov	cx,80*200 */
	cx = 80*200;
	// 2808 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
loadmap:
	// 2826 
	/* push	ds ;* note: VGA ONLY */
	PUSH(ds);
edummylabel6:
	// 4397 
	/* push	es */
	PUSH(es);
	/* mov	dx,VGA_SEQ */
	dx = 0x003c4;
	/* mov	al,VGA_SEQ_MAPMSK */
	al = 0x002;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* mov	al,1111b */
	al = 0xf;
	/* out	dx,al */
	OUT(dx, al);
	/* mov	dx,VGA_CTRL */
	dx = 0x003ce;
	/* mov	al,VGA_CTRL_MODE */
	al = 0x005;
	/* out	dx,al */
	OUT(dx, al);
	/* inc	dx */
	INC(dx);
	/* in	al,dx */
	IN(al, dx);
	/* or	al,01b		;write mode 1 */
	OR(al, 0x1);
	/* out	dx,al */
	OUT(dx, al);
	/* mov	ax,WorkScrPtr */
	ax = workscrptr;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,VGA_PAGE_2 */
	ax = 0x0a800;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* xor	si,si */
	XOR(si, si);
	/* xor	di,di */
	XOR(di, di);
	/* mov	cx,80*200 */
	cx = 80*200;
	// 2851 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* in	al,dx */
	IN(al, dx);
	/* and	al,NOT 11b	;write mode 0 */
	AND(al, ~0x3);
	/* out	dx,al */
	OUT(dx, al);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
mapzoomin:
	// 2867 
	/* call	CalcNewPos ;* kill: assume all */
	CALL(calcnewpos, 0);
edummylabel7:
	// 4399 
	/* cmp	ExpMapZoom,MAP_ZOOM6	;fully zoomed in? */
	CMP(expmapzoom, map_zoom6);
	/* je	@F			;yes -> */
	if ((dw)(expmapzoom) == (dw)(map_zoom6)) {goto dummylabel4;}
	/* add	ExpMapZoom,2 */
	ADD(expmapzoom, 2);
dummylabel4:
	// 4401 
	/* @@:		mov	ReDrawMap,1 */
	*(redrawmap) = 1;
	/* ret */
	RETN(0);
mapzoomout:
	// 2883 
	/* call	CalcNewPos ;* kill: assume all */
	CALL(calcnewpos, 0);
edummylabel8:
	// 4403 
	/* cmp	ExpMapZoom,MAP_ZOOM1	;fully zoomed out? */
	CMP(expmapzoom, map_zoom1);
	/* je	@F			;yes -> */
	if ((dw)(expmapzoom) == (dw)(map_zoom1)) {goto dummylabel5;}
	/* sub	ExpMapZoom,2 */
	SUB(expmapzoom, 2);
dummylabel5:
	// 4405 
	/* @@:		mov	ReDrawMap,1 */
	*(redrawmap) = 1;
	/* ret */
	RETN(0);
scrollmap:
	// 2899 
	// 0 ;-------------------------------------
	// 0 ;* check mouse position for map scroll
	// 0 ;-------------------------------------
edummylabel9:
	// 4407 
	/* xor	cx,cx		;assume no x scroll */
	XOR(cx, cx);
	/* xor	bx,bx		;assume no y scroll */
	XOR(bx, bx);
	/* cmp	LocatorX,LOC_X_MIN	;scroll map right? */
	CMP(locatorx, 0);
	/* jne	@F			;no -> */
	if ((dw)(locatorx) != (dw)(0)) {goto dummylabel6;}
	/* mov	cx,-SCROLL_SPEED */
	cx = -2048;
dummylabel6:
	// 4409 
	/* @@:		cmp	LocatorX,LOC_X_MAX	;scroll map left? */
	CMP(locatorx, 319);
	/* jne	@F		     	;no -> */
	if ((dw)(locatorx) != (dw)(319)) {goto dummylabel7;}
	/* mov	cx,SCROLL_SPEED */
	cx = 2048;
dummylabel7:
	// 4411 
	/* @@:		cmp	LocatorY,LOC_Y_MIN	;scroll map down? */
	CMP(locatory, 0);
	/* jne	@F			;no -> */
	if ((dw)(locatory) != (dw)(0)) {goto dummylabel8;}
	/* mov	bx,SCROLL_SPEED */
	bx = 2048;
dummylabel8:
	// 4413 
	/* @@:		cmp	LocatorY,LOC_Y_MAX	;scroll map up? */
	CMP(locatory, 199);
	/* jne	@F			;no -> */
	if ((dw)(locatory) != (dw)(199)) {goto dummylabel9;}
	/* mov	bx,-SCROLL_SPEED */
	bx = -2048;
dummylabel9:
	// 4415 
	/* @@:		mov	ax,cx */
	ax = cx;
	/* or	ax,bx		;scroll? */
	OR(ax, bx);
	/* jz	ExitScroll	;no -> */
	if (ax == 0) {goto exitscroll;}
	// 0 ;-----------------------------------
	// 0 ;* scroll dist = scroll speed * time
	// 0 ;-----------------------------------
	/* mov	bp,DeltaTime */
	bp = deltatime;
	/* mov	ax,cx */
	ax = cx;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bx,dx */
	bx = dx;
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xchg	cx,ax */
	XCHG(cx, ax);
	/* mov	bx,dx */
	bx = dx;
	/* xchg	bx,cx		;cx, bx = y dist */
	XCHG(bx, cx);
	/* cwd			;dx, ax = x dist */
	CWD;
	// 0 ;----------------------------
	// 0 ;* adjust dist wrt zoom level
	// 0 ;----------------------------
	// 0 ;* shift count = 10 - ExpMapZoom (10 .. 0 step 2)
	/* mov	bp,10 */
	bp = 10;
	/* sub	bp,ExpMapZoom */
	SUB(bp, expmapzoom);
	/* jz	SkipDistScale */
	if (bp == 0) {goto skipdistscale;}
dummylabel10:
	// 4417 
	/* @@:		shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* sub	bp,2 */
	SUB(bp, 2);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel10;}
skipdistscale:
	// 4419 
	/* SkipDistScale:	mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	/* mov	ReDrawMap,1 */
	*(redrawmap) = 1;
exitscroll:
	// 4421 
	/* ExitScroll:	ret */
	RETN(0);
bordercheck:
	// 2974 
	/* cmp	EXP_VIEW.VP_XSEC,0 ;* kill: flags */
	CMP(exp_view.vp_xsec, 0);
edummylabel10:
	// 4423 
	/* jge	@F */
	if ((SF == OF)) {goto dummylabel11;}
	/* mov	EXP_VIEW.VP_XSEC,0 */
	exp_view.vp_xsec = 0;
	/* mov	EXP_VIEW.VP_XFT,-8192 */
	exp_view.vp_xft = -8192;
dummylabel11:
	// 4425 
	/* @@:		cmp	EXP_VIEW.VP_XSEC,31 */
	CMP(exp_view.vp_xsec, 31);
	/* jle	@F */
	if ((short)(exp_view.vp_xsec) <= (short)(31)) {goto dummylabel12;}
	/* mov	EXP_VIEW.VP_XSEC,31 */
	exp_view.vp_xsec = 31;
	/* mov	EXP_VIEW.VP_XFT,8191 */
	exp_view.vp_xft = 8191;
dummylabel12:
	// 4427 
	/* @@:		cmp	EXP_VIEW.VP_YSEC,0 */
	CMP(exp_view.vp_ysec, 0);
	/* jge	@F */
	if ((short)(exp_view.vp_ysec) >= (short)(0)) {goto dummylabel13;}
	/* mov	EXP_VIEW.VP_YSEC,0 */
	exp_view.vp_ysec = 0;
	/* mov	EXP_VIEW.VP_YFT,8191 */
	exp_view.vp_yft = 8191;
dummylabel13:
	// 4429 
	/* @@:		cmp	EXP_VIEW.VP_YSEC,31 */
	CMP(exp_view.vp_ysec, 31);
	/* jle	@F */
	if ((short)(exp_view.vp_ysec) <= (short)(31)) {goto dummylabel14;}
	/* mov	EXP_VIEW.VP_YSEC,31 */
	exp_view.vp_ysec = 31;
	/* mov	EXP_VIEW.VP_YFT,-8192 */
	exp_view.vp_yft = -8192;
dummylabel14:
	// 4431 
	/* @@:		ret */
	RETN(0);
drawlocator:
	// 3003 
	// 0 ;------------------------------
	// 0 ;* calc locator centre position
	// 0 ;------------------------------
edummylabel11:
	// 4433 
	/* mov	cx,MouseX */
	cx = mousex;
	/* shr	cx,1 */
	SHR(cx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* cmp	cx,LOC_X_MAX */
	CMP(cx, 319);
	/* jbe	@F */
	if ((dw)(cx) <= (dw)(319)) {goto dummylabel15;}
	/* mov	cx,LOC_X_MAX */
	cx = 319;
dummylabel15:
	// 4435 
	/* @@:		mov	LocatorX,cx */
	locatorx = cx;
	/* mov	bx,MouseY */
	bx = mousey;
	/* shr	bx,1 */
	SHR(bx, 1);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* cmp	bx,LOC_Y_MAX */
	CMP(bx, 199);
	/* jbe	@F */
	if ((dw)(bx) <= (dw)(199)) {goto dummylabel16;}
	/* mov	bx,LOC_Y_MAX */
	bx = 199;
dummylabel16:
	// 4437 
	/* @@:		mov	LocatorY,bx */
	locatory = bx;
	// 0 ;------------------------
	// 0 ;* draw locator (clipped)
	// 0 ;------------------------
	// 0 ;* locator shape:-
	// 0 ;*
	// 0 ;*              � (a)
	// 0 ;*              �
	// 0 ;*      (c) ���� ���� (d)
	// 0 ;*              �
	// 0 ;*              � (b)
	// 0 ;* draw stroke (a)
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	bl,2 */
	SUB(bl, 2);
	/* jc	SkipA */
	if (CF) {goto skipa;}
	/* mov	bh,bl */
	bh = bl;
	/* sub	bh,4 */
	SUB(bh, 4);
	/* jnc	@F */
	if (!CF) {goto dummylabel17;}
	/* xor	bh,bh */
	XOR(bh, bh);
dummylabel17:
	// 4439 
	/* @@:		mov	al,COL_LOCATOR */
	al = 156;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
skipa:
	// 4441 
	/* SkipA:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw stroke (b)
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,LOC_Y_MAX */
	CMP(bl, 199);
	/* ja	SkipB */
	if ((db)(bl) > (db)(199)) {goto skipb;}
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,4 */
	ADD(bh, 4);
	/* cmp	bh,LOC_Y_MAX */
	CMP(bh, 199);
	/* jbe	@F */
	if ((db)(bh) <= (db)(199)) {goto dummylabel18;}
	/* mov	bh,LOC_Y_MAX */
	bh = 199;
dummylabel18:
	// 4443 
	/* @@:		mov	al,COL_LOCATOR */
	al = 156;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
skipb:
	// 4445 
	/* SkipB:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw stroke (c)
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	cx,2 */
	SUB(cx, 2);
	/* jc	SkipC */
	if (CF) {goto skipc;}
	/* mov	dx,cx */
	dx = cx;
	/* sub	dx,5 */
	SUB(dx, 5);
	/* jnc	@F */
	if (!CF) {goto dummylabel19;}
	/* xor	dx,dx */
	XOR(dx, dx);
dummylabel19:
	// 4447 
	/* @@:		mov	al,COL_LOCATOR */
	al = 156;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
skipc:
	// 4449 
	/* SkipC:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw stroke (d)
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,LOC_X_MAX */
	CMP(cx, 319);
	/* ja	SkipD */
	if ((dw)(cx) > (dw)(319)) {goto skipd;}
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,5 */
	ADD(dx, 5);
	/* cmp	dx,LOC_X_MAX */
	CMP(dx, 319);
	/* jbe	@F */
	if ((dw)(dx) <= (dw)(319)) {goto dummylabel20;}
	/* mov	dx,LOC_X_MAX */
	dx = 319;
dummylabel20:
	// 4451 
	/* @@:		mov	al,COL_LOCATOR */
	al = 156;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
skipd:
	// 4453 
	/* SkipD:		ret */
	RETN(0);
calcnewpos:
	// 3100 
	// 0 ;* calc position scale wrt zoom:-
	// 0 ;*
	// 0 ;* MAP_ZOOM1 =   8 pixels / sector = 1024ft / mouse pos (<< 10)
	// 0 ;* MAP_ZOOM2 =  16 pixels / sector =  512ft / mouse pos (<< 9)
	// 0 ;* MAP_ZOOM3 =  32 pixels / sector =  256ft / mouse pos (<< 8)
	// 0 ;* MAP_ZOOM4 =  64 pixels / sector =  128ft / mouse pos (<< 7)
	// 0 ;* MAP_ZOOM5 = 128 pixels / sector =   64ft / mouse pos (<< 6)
	// 0 ;* MAP_ZOOM6 = 256 pixels / sector =   32ft / mouse pos (<< 5)
	// 0 ;*
	// 0 ;* scale = 10 - (zoom / 2)
edummylabel12:
	// 4455 
	/* mov	bp,10 */
	bp = 10;
	/* mov	ax,ExpMapZoom */
	ax = expmapzoom;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sub	bp,ax */
	SUB(bp, ax);
	// 0 ;* y offset = -(MouseY - MOUSE_Y_CENTRE) << scale
	/* mov	ax,MouseY */
	ax = mousey;
	/* sub	ax,MOUSE_Y_CENTRE */
	SUB(ax, 200);
	/* neg	ax */
	NEG(ax);
	/* cwd */
	CWD;
	/* mov	cx,dx */
	cx = dx;
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* x offset = ((MouseX - MOUSE_X_CENTRE) * 26214 / 32768) << scale
	/* mov	ax,MouseX */
	ax = mousex;
	/* sub	ax,MOUSE_X_CENTRE */
	SUB(ax, 320);
	/* mov	dx,26214	;aspect ratio correction */
	dx = 26214;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
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
	/* xchg	cx,bp */
	XCHG(cx, bp);
dummylabel21:
	// 4457 
	/* @@:		shl	ax,1		;scale up wrt zoom */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	bp,1 */
	RCL(bp, 1);
	/* loop	@B */
	LOOP(dummylabel21);
	/* mov	cx,bp */
	cx = bp;
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	// 0 ;* move locator to screen centre
	/* mov	cx,MOUSE_X_CENTRE */
	cx = 320;
	/* mov	bx,MOUSE_Y_CENTRE */
	bx = 200;
	/* call	SetMousePos */
	CALLF(setmousepos, 0);
	/* ret */
	RETN(0);
flyview:
	// 3160 
	/* call	InitFlyView ;* kill: assume all */
	CALL(initflyview, 0);
flyloop:
	// 4459 
	/* FlyLoop:	call	UpdateKeys */
	CALL(updatekeys, 0);
	/* call	UserOptions */
	CALLF(useroptions, 0);
	/* call	CalcDeltaTime */
	CALLF(calcdeltatime, 0);
	/* call	ExploreModel */
	CALL(exploremodel, 0);
	// 0 ;mov	WORD PTR EXP_VIEW.VP_PITCH,384
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	Visual */
	CALLF(visual, 0);
	/* call	DispInfoBar */
	CALL(dispinfobar, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* mov	al,BYTE PTR KF_ToggleMode[K_STATUS] */
	al = *(db*)(((db*)&kf_togglemode)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;toggle mode?
	/* jnz	ExitFlyView	;yes -> */
	if ((al & al) != 0) {goto exitflyview;}
	/* mov	al,BYTE PTR KF_Quit[K_STATUS] */
	al = *((&kf_quit)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;quit explore mode?
/* m2c-phantom removed: 	R(al = *((&kf_quit)+k_status););	// 3181 mov	al,BYTE PTR KF_Quit[K_STATUS] */
	/* jnz	ExitFlyView	;yes -> */
	if ((al & al) != 0) {goto exitflyview;}
	/* jmp	FlyLoop */
	goto flyloop;
exitflyview:
	// 4461 
	/* ExitFlyView:	ret */
	RETN(0);
initflyview:
	// 3194 
	// 0 ;* initialize explore model
edummylabel13:
	// 4463 
	/* mov	WORD PTR EXP_VIEW.VP_PITCH,384 */
	exp_view.vp_pitch = 384;
	/* call	InitExpModel */
	CALL(initexpmodel, 0);
	// 0 ;* set full screen visual
	/* mov	ax,EXT_VIEWMODE */
	ax = 4;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;* generate visual and clear info bar on both screens
	/* mov	WORD PTR EXP_VIEW.VP_PITCH,384 */
	exp_view.vp_pitch = 384;
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	Visual */
	CALLF(visual, 0);
	/* call	ClearInfoBar */
	CALL(_group1, m2c::kclearinfobar);
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	ClearInfoBar */
	CALL(_group1, m2c::kclearinfobar);
	/* ret */
	RETN(0);
initexpmodel:
	// 3221 
	// 0 ;* init model vars
edummylabel14:
	// 4465 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	X_XFine,ax */
	x_xfine = ax;
	/* mov	X_YFine,ax */
	x_yfine = ax;
	/* mov	X_ZFine,ax */
	x_zfine = ax;
	/* mov	X_PFine,ax */
	x_pfine = ax;
	/* mov	X_RFine,ax */
	x_rfine = ax;
	/* mov	X_Vtas,ax */
	x_vtas = ax;
	/* mov	X_Zdot,ax */
	x_zdot = ax;
	/* mov	X_ElePosn,ax */
	x_eleposn = ax;
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
	// 0 ;* init viewpoint
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,Z_INIT */
	ADD(ax, 1000);
	/* cmp	ax,WORD PTR EXP_VIEW.VP_ZFT_LO	;z min < z? */
	CMP(ax, *((dw*)((db*)&exp_view+vp_zft_lo)));
	/* jbe	@F				;yes -> */
	if ((dw)(ax) <= (dw)(*((dw*)((db*)&exp_view+vp_zft_lo)))) {goto dummylabel22;}
	/* mov	WORD PTR EXP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&exp_view+vp_zft_lo)) = ax;
dummylabel22:
	// 4467 
	/* @@:		mov	WORD PTR EXP_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&exp_view+vp_zft_hi)) = 0;
	// 0 ;mov	WORD PTR EXP_VIEW.VP_PITCH,384	;sub pitch displacement
	/* mov	bx, EXP_VIEW.VP_PITCH */
	bx = exp_view.vp_pitch;
	/* mov	HorizonValue4, bx */
	horizonvalue4 = bx;
	/* call	CalcAngles */
	CALL(calcangles, 0);
	// 0 ;* init control device
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	/* ret */
	RETN(0);
exploremodel:
	// 3261 
	// 0 ;-----------------
	// 0 ;* update controls
	// 0 ;-----------------
edummylabel15:
	// 4469 
	/* call	SortControls */
	CALL(sortcontrols, 0);
	// 0 ;--------------
	// 0 ;* update speed
	// 0 ;--------------
	// 0 ;* v rate = X_ThrotPosn * V_RATE
	/* mov	ax,X_ThrotPosn */
	ax = x_throtposn;
	/* mov	dx,V_RATE */
	dx = 2*1360;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* delta v rate = v rate * DeltaTime
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* X_Vtas = SBOUND(X_Vtas - delta v rate, -V_MAX, V_MAX)
	/* mov	ax,X_Vtas */
	ax = x_vtas;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,-V_MAX */
	CMP(ax, -10880);
	/* jge	__m2c_macrolocal_42_TestHi */
	if ((short)(ax) >= (short)(-10880)) {goto __m2c_macrolocal_42_testhi;}
	/* mov	ax,-V_MAX */
	ax = -10880;
	/* jmp	__m2c_macrolocal_42_TestOk */
	goto __m2c_macrolocal_42_testok;
__m2c_macrolocal_42_testhi:
	// 4471 
	/* __m2c_macrolocal_42_TestHi:		cmp	ax,V_MAX */
	CMP(ax, 10880);
	/* jle	__m2c_macrolocal_42_TestOk */
	if ((short)(ax) <= (short)(10880)) {goto __m2c_macrolocal_42_testok;}
	/* mov	ax,V_MAX */
	ax = 10880;
__m2c_macrolocal_42_testok:
	// 4473 
	/* mov	X_Vtas,ax */
	x_vtas = ax;
	// 0 ;----------------
	// 0 ;* update heading
	// 0 ;----------------
	// 0 ;* hdg rate = X_AilPosn * HDG_RATE
	/* mov	ax,X_AilPosn */
	ax = x_ailposn;
	/* mov	dx,HDG_RATE */
	dx = 64*128;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* delta hdg rate = hdg rate * DeltaTime
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* X_HFine = X_HFine + delta hdg rate
	/* add	X_HFine,dx */
	ADD(x_hfine, dx);
	// 0 ;--------------
	// 0 ;* update pitch
	// 0 ;--------------
	// 0 ;* pitch rate = X_ElePosn * PITCH_RATE
	/* mov	ax,X_ElePosn */
	ax = x_eleposn;
	/* mov	dx,PITCH_RATE */
	dx = 43*128;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* delta pitch rate = pitch rate * DeltaTime
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* X_PFine = SBOUND(X_PFine + delta pitch rate, -PITCH_MAX, PITCH_MAX)
	/* mov	ax,X_PFine */
	ax = x_pfine;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,-PITCH_MAX */
	CMP(ax, -(35*128));
	/* jge	__m2c_macrolocal_47_TestHi */
	if ((short)(ax) >= (short)(-(35*128))) {goto __m2c_macrolocal_47_testhi;}
	/* mov	ax,-PITCH_MAX */
	ax = -(35*128);
	/* jmp	__m2c_macrolocal_47_TestOk */
	goto __m2c_macrolocal_47_testok;
__m2c_macrolocal_47_testhi:
	// 4475 
	/* __m2c_macrolocal_47_TestHi:		cmp	ax,PITCH_MAX */
	CMP(ax, 35*128);
	/* jle	__m2c_macrolocal_47_TestOk */
	if ((short)(ax) <= (short)(35*128)) {goto __m2c_macrolocal_47_testok;}
	/* mov	ax,PITCH_MAX */
	ax = 35*128;
__m2c_macrolocal_47_testok:
	// 4477 
	/* mov	X_PFine,ax */
	x_pfine = ax;
	// 0 ;-------------
	// 0 ;* update roll
	// 0 ;-------------
	// 0 ;* roll rate = X_AilPosn * ROLL_RATE
	/* mov	ax,X_AilPosn */
	ax = x_ailposn;
	/* mov	dx,ROLL_RATE */
	dx = 64*128;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* delta roll rate = roll rate * DeltaTime
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* X_RFine = SBOUND(X_RFine + delta roll rate, -ROLL_MAX, ROLL_MAX)
	/* mov	ax,X_RFine */
	ax = x_rfine;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,-ROLL_MAX */
	CMP(ax, -(0*128));
	/* jge	__m2c_macrolocal_50_TestHi */
	if ((short)(ax) >= (short)(-(0*128))) {goto __m2c_macrolocal_50_testhi;}
	/* mov	ax,-ROLL_MAX */
	ax = -(0*128);
	/* jmp	__m2c_macrolocal_50_TestOk */
	goto __m2c_macrolocal_50_testok;
__m2c_macrolocal_50_testhi:
	// 4479 
	/* __m2c_macrolocal_50_TestHi:		cmp	ax,ROLL_MAX */
	CMP(ax, 0*128);
	/* jle	__m2c_macrolocal_50_TestOk */
	if ((short)(ax) <= (short)(0*128)) {goto __m2c_macrolocal_50_testok;}
	/* mov	ax,ROLL_MAX */
	ax = 0*128;
__m2c_macrolocal_50_testok:
	// 4481 
	/* mov	X_RFine,ax */
	x_rfine = ax;
	// 0 ;-------------
	// 0 ;* calc angles
	// 0 ;-------------
	/* call	CalcAngles */
	CALL(calcangles, 0);
	// 0 ;----------
	// 0 ;* position
	// 0 ;----------
	// 0 ;* delta x = X_Vtas * X_CosP * X_SinH * DeltaTime * 8192
	/* mov	ax,X_Vtas */
	ax = x_vtas;
	/* mov	dx,X_CosP */
	dx = x_cosp;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,X_SinH */
	ax = x_sinh;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cwd	  		;*256 */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 3447 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipAlexx1 */
	if (!(al & al)) {goto skipalexx1;}
	/* sub HorizonValue4, 2 */
	SUB(horizonvalue4, 2);
	/* cmp HorizonValue4,380 */
	CMP(horizonvalue4, 380);
	/* jl CapValueTo380 */
	if ((short)(horizonvalue4) < (short)(380)) {goto capvalueto380;}
	/* jmp SkipCapValueTo380 */
	goto skipcapvalueto380;
capvalueto380:
	// 4483 
	/* mov HorizonValue4,380 */
	horizonvalue4 = 380;
skipcapvalueto380:
	// 4485 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 3466 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 3467 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 3468 mov	BYTE PTR KF_Minimise[K_STATUS],al */
skipalexx1:
	// 4487 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 3472 						mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipAlexx2 */
	if (!(al & al)) {goto skipalexx2;}
	/* add HorizonValue4, 2 */
	ADD(horizonvalue4, 2);
	/* cmp HorizonValue4,500 */
	CMP(horizonvalue4, 500);
	/* jg CapValueTo500 */
	if ((short)(horizonvalue4) > (short)(500)) {goto capvalueto500;}
	/* jmp SkipCapValueTo500 */
	goto skipcapvalueto500;
capvalueto500:
	// 4489 
	/* mov HorizonValue4,500 */
	horizonvalue4 = 500;
skipcapvalueto500:
	// 4491 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 3490 						mov	BYTE PTR KF_Range[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 3491 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 3492 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
skipalexx2:
	// 4493 
	/* mov bx, HorizonValue4 */
	bx = horizonvalue4;
	/* mov	EXP_VIEW.VP_PITCH, bx */
	exp_view.vp_pitch = bx;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;* update x position (with sector change test)
	/* add	X_XFine,ax */
	ADD(x_xfine, ax);
	/* adc	dx,EXP_VIEW.VP_XFT */
	ADC(dx, exp_view.vp_xft);
	/* cmp	dx,8192		;xft < 8192? */
	CMP(dx, 8192);
	/* jl	@F		;yes -> */
	if ((short)(dx) < (short)(8192)) {goto dummylabel23;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* inc	EXP_VIEW.VP_XSEC */
	INC(exp_view.vp_xsec);
dummylabel23:
	// 4495 
	/* @@:		cmp	dx,-8192	;xft >= -8192? */
	CMP(dx, -8192);
	/* jge	@F		;yes -> */
	if ((short)(dx) >= (short)(-8192)) {goto dummylabel24;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* dec	EXP_VIEW.VP_XSEC */
	DEC(exp_view.vp_xsec);
dummylabel24:
	// 4497 
	/* @@:		mov	EXP_VIEW.VP_XFT,dx */
	exp_view.vp_xft = dx;
	// 0 ;* delta y = X_Vtas * X_CosP * X_CosH * DeltaTime * 8192
	/* mov	ax,X_Vtas */
	ax = x_vtas;
	/* mov	dx,X_CosP */
	dx = x_cosp;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,X_CosH */
	ax = x_cosh;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cwd	  		;*256 */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	// 0 ;* update y position (with sector change test)
	/* add	X_YFine,ax */
	ADD(x_yfine, ax);
	/* adc	dx,EXP_VIEW.VP_YFT */
	ADC(dx, exp_view.vp_yft);
	/* cmp	dx,8192		;yft < 8192? */
	CMP(dx, 8192);
	/* jl	@F		;yes -> */
	if ((short)(dx) < (short)(8192)) {goto dummylabel25;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	EXP_VIEW.VP_YSEC */
	DEC(exp_view.vp_ysec);
dummylabel25:
	// 4499 
	/* @@:		cmp	dx,-8192	;yft >= -8192? */
	CMP(dx, -8192);
	/* jge	@F		;yes -> */
	if ((short)(dx) >= (short)(-8192)) {goto dummylabel26;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	EXP_VIEW.VP_YSEC */
	INC(exp_view.vp_ysec);
dummylabel26:
	// 4501 
	/* @@:		mov	EXP_VIEW.VP_YFT,dx */
	exp_view.vp_yft = dx;
	// 0 ;----------
	// 0 ;* altitude
	// 0 ;----------
	// 0 ;* min alt = ground height + Z_MIN
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,Z_MIN */
	ADD(ax, 16);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,X_Vtas */
	ax = x_vtas;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* add	ax,1360		;k = 100kts */
	ADD(ax, 1360);
	/* mov	dx,X_SinP */
	dx = x_sinp;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	X_Zdot,dx */
	x_zdot = dx;
	// 0 ;* VP_ZFT_LO, X_ZFine = VP_ZFT_LO, X_ZFine + (Zdot * DeltaTime * 8192)
	// 0 ;* sort computation order wrt accuracy and overflow
	/* cmp	dx,127 */
	CMP(dx, 127);
	/* jg	@F		;method 2 -> */
	if ((short)(dx) > (short)(127)) {goto dummylabel27;}
	/* cmp	dx,-128 */
	CMP(dx, -128);
	/* jl	@F		;method 2 -> */
	if ((short)(dx) < (short)(-128)) {goto dummylabel27;}
	// 0 ;* method 1: calc Zdot * 256 * DeltaTime (for max accuracy)
	/* mov	dh,dl */
	dh = dl;
	/* xor	dl,dl		;Zdot * 256 */
	XOR(dl, dl);
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;Zdot * 256 * DeltaTime
	/* cwd */
	CWD;
	/* jmp	ContCalcAlt */
	goto contcalcalt;
	// 0 ;* method 2: calc Zdot * DeltaTime * 256 (to prevent overflow)
dummylabel27:
	// 4503 
	/* @@:		mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;Zdot * DeltaTime
	/* cwd	  		;Zdot * DeltaTime * 256 */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
contcalcalt:
	// 4505 
	/* add	ax,X_ZFine */
	ADD(ax, x_zfine);
	/* adc	dx,WORD PTR EXP_VIEW.VP_ZFT_LO */
	ADC(dx, *((dw*)((db*)&exp_view+vp_zft_lo)));
	/* cmp	dx,bp		;zft < min alt? */
	CMP(dx, bp);
	/* jge	@F		;no -> */
	if ((short)(dx) >= (short)(bp)) {goto dummylabel28;}
	/* mov	dx,bp */
	dx = bp;
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel28:
	// 4507 
	/* @@:		cmp	dx,Z_MAX	;zft > max alt? */
	CMP(dx, 10000);
	/* jle	@F		;no -> */
	if ((short)(dx) <= (short)(10000)) {goto dummylabel29;}
	/* mov	dx,Z_MAX */
	dx = 10000;
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel29:
	// 4509 
	/* @@:		mov	X_ZFine,ax */
	x_zfine = ax;
	/* mov	WORD PTR EXP_VIEW.VP_ZFT_LO,dx */
	*((dw*)((db*)&exp_view+vp_zft_lo)) = dx;
	/* ret */
	RETN(0);
calcangles:
	// 3651 
	/* mov	cl,7		;/128 */
	cl = 7;
	// 0 ;* VP_HDG = X_HFine / 128
edummylabel16:
	// 4511 
	/* mov	bx,X_HFine */
	bx = x_hfine;
	/* shr	bx,cl */
	SHR(bx, cl);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* mov	EXP_VIEW.VP_HDG,bx */
	exp_view.vp_hdg = bx;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	X_SinH,ax */
	x_sinh = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	X_CosH,ax */
	x_cosh = ax;
	// 0 ;* VP_PITCH = X_PFine / 128
	/* mov	bx,X_PFine */
	bx = x_pfine;
	/* shr	bx,cl */
	SHR(bx, cl);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* mov	EXP_VIEW.VP_PITCH,bx */
	exp_view.vp_pitch = bx;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	X_SinP,ax */
	x_sinp = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	X_CosP,ax */
	x_cosp = ax;
	// 0 ;* VP_ROLL = X_RFine / 128
	/* mov	bx,X_RFine */
	bx = x_rfine;
	/* shr	bx,cl */
	SHR(bx, cl);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* mov	EXP_VIEW.VP_ROLL,bx */
	exp_view.vp_roll = bx;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	X_SinR,ax */
	x_sinr = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	X_CosR,ax */
	x_cosr = ax;
	/* ret */
	RETN(0);
sortcontrols:
	// 3700 
	/* mov	bx,X_CtrlDevice ;*       X_Vtas */
	bx = x_ctrldevice;
edummylabel17:
	// 4513 
__disp=*(dw*)(((db*)&sortctrlswitch)+bx);
	/* jmp	SortCtrlSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
sortctrlkbd:
	// 4515 
	// 0 ;---------------------------
	/* ret */
	RETN(0);
	// 0 ;---------------------------
sortctrljoy1:
	// 4517 
	// 0 ;---------------------------
	// 0 ;* pitch up (climb) ..... joystick backwards
	// 0 ;* pitch down (dive) .... joystick forwards
	// 0 ;* roll right ........... joystick right
	// 0 ;* roll left ............ joystick left
	// 0 ;*
	// 0 ;* inc speed ............ joystick forwards + fire button 1
	// 0 ;* dec speed ............ joystick backwards + fire button 1
	// 0 ;*
	// 0 ;* stop dead ............ fire button 2
	/* call	ReadJoysticks */
	CALLF(readjoysticks, 0);
	/* test	JoyA_Flag,1	;single joystick fitted? */
	TEST(joya_flag, 1);
	/* jnz	@F	   	;yes -> */
	if ((joya_flag & 1) != 0) {goto dummylabel30;}
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	/* jmp	SortCtrlKbd	;assume default to keyboard */
	goto sortctrlkbd;
dummylabel30:
	// 4519 
	/* @@:		mov	bx,JoyA_XVal */
	bx = joya_xval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
	/* mov	bx,JoyA_YVal */
	bx = joya_yval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* test	JoyA_Fire1,1	;adjust pitch or throttle? */
	TEST(joya_fire1, 1);
	/* jz	@F		;pitch -> */
	if (!(joya_fire1 & 1)) {goto dummylabel31;}
	/* xchg	ax,dx */
	XCHG(ax, dx);
dummylabel31:
	// 4521 
	/* @@:		mov	X_ElePosn,ax */
	x_eleposn = ax;
	/* mov	X_ThrotPosn,dx */
	x_throtposn = dx;
	/* test	JoyA_Fire2,1	;stop dead? */
	TEST(joya_fire2, 1);
	/* jz	@F		;no -> */
	if (!(joya_fire2 & 1)) {goto dummylabel32;}
	/* mov	X_Vtas,0 */
	x_vtas = 0;
	/* mov	X_ThrotPosn,0 */
	x_throtposn = 0;
dummylabel32:
	// 4523 
	/* @@:		ret */
	RETN(0);
	// 0 ;---------------------------
sortctrljoy2:
	// 4525 
	// 0 ;---------------------------
	// 0 ;* pitch up (climb) ..... joystick A backwards
	// 0 ;* pitch down (dive) .... joystick A forwards
	// 0 ;* roll right ........... joystick A right
	// 0 ;* roll left ............ joystick A left
	// 0 ;*
	// 0 ;* inc speed ............ joystick B forwards
	// 0 ;* dec speed ............ joystick B backwards
	// 0 ;*
	// 0 ;* stop dead ............ any fire button
	/* call	ReadJoysticks */
	CALLF(readjoysticks, 0);
	/* mov	al,JoyA_Flag */
	al = joya_flag;
	/* test	al,JoyB_Flag 	;both joysticks fitted? */
	TEST(al, joyb_flag);
	/* jnz	@F	     	;yes -> */
	if ((al & joyb_flag) != 0) {goto dummylabel33;}
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	/* jmp	SortCtrlKbd	;assume default to keyboard */
	goto sortctrlkbd;
dummylabel33:
	// 4527 
	/* @@:		mov	bx,JoyA_XVal */
	bx = joya_xval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
	/* mov	bx,JoyA_YVal */
	bx = joya_yval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	X_ElePosn,ax */
	x_eleposn = ax;
	/* mov	bx,JoyB_YVal */
	bx = joyb_yval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	X_ThrotPosn,ax */
	x_throtposn = ax;
	// 0 ;* stop dead if any fire button pressed
	/* mov	al,JoyA_Fire1 */
	al = joya_fire1;
	/* or	al,JoyA_Fire2 */
	OR(al, joya_fire2);
	/* or	al,JoyB_Fire1 */
	OR(al, joyb_fire1);
	/* or	al,JoyB_Fire2 */
	OR(al, joyb_fire2);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel34;}
	/* mov	X_Vtas,0 */
	x_vtas = 0;
	/* mov	X_ThrotPosn,0 */
	x_throtposn = 0;
dummylabel34:
	// 4529 
	/* @@:		ret */
	RETN(0);
	// 0 ;---------------------------
sortctrlmouse:
	// 4531 
	// 0 ;---------------------------
	// 0 ;* pitch up (climb) ..... mouse forwards
	// 0 ;* pitch down (dive) .... mouse backwards
	// 0 ;* roll right ........... mouse right
	// 0 ;* roll left ............ mouse left
	// 0 ;*
	// 0 ;* inc speed ............ mouse forwards + lh button
	// 0 ;* dec speed ............ mouse backwards + lh button
	// 0 ;*
	// 0 ;* stop dead ............ lh button + rh button
	// 0 ;*
	// 0 ;* centre mouse ......... rh button
	/* call	ReadMouse */
	CALLF(readmouse, 0);
	// 0 ;* if lh button just released then centre y to prevent unwanted pitch change
	/* mov	al,LhsButton */
	al = lhsbutton;
	/* sub	al,_LhsButton	;cf = 1 = 1 -> 0 transtion */
	SUB(al, _lhsbutton);
	/* jnc	@F */
	if (!CF) {goto dummylabel35;}
	/* mov	cx,MouseX */
	cx = mousex;
	/* mov	bx,MOUSE_Y_CENTRE */
	bx = 200;
	/* call	SetMousePos */
	CALLF(setmousepos, 0);
dummylabel35:
	// 4533 
	/* @@:		mov	ax,MouseX */
	ax = mousex;
	/* sub	ax,MOUSE_X_CENTRE */
	SUB(ax, 320);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bp,dx */
	bp = dx;
	/* sub	ax,MOUSE_X_DBAND */
	SUB(ax, 320/8);
	/* jnc	@F */
	if (!CF) {goto dummylabel36;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel36:
	// 4535 
	/* @@:		mov	dx,MOUSE_X_SCALE */
	dx = 32768/(320-(320/8));
	/* mul	dx */
	MUL1_2(dx);
	/* xor	ax,bp */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
	/* mov	ax,MouseY */
	ax = mousey;
	/* sub	ax,MOUSE_Y_CENTRE */
	SUB(ax, 200);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bp,dx */
	bp = dx;
	/* sub	ax,MOUSE_Y_DBAND */
	SUB(ax, 200/8);
	/* jnc	@F */
	if (!CF) {goto dummylabel37;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel37:
	// 4537 
	/* @@:		mov	dx,MOUSE_Y_SCALE */
	dx = 32768/(200-(200/8));
	/* mul	dx */
	MUL1_2(dx);
	/* xor	ax,bp */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* test	LhsButton,1	;adjust pitch or throttle? */
	TEST(lhsbutton, 1);
	/* jz	@F		;pitch -> */
	if (!(lhsbutton & 1)) {goto dummylabel38;}
	/* xchg	ax,dx */
	XCHG(ax, dx);
dummylabel38:
	// 4539 
	/* @@:		mov	X_ElePosn,ax */
	x_eleposn = ax;
	/* mov	X_ThrotPosn,dx */
	x_throtposn = dx;
	/* mov	al,LhsButton */
	al = lhsbutton;
	/* and	al,RhsButton	;stop dead? */
	AND(al, rhsbutton);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel39;}
	/* mov	X_Vtas,0 */
	x_vtas = 0;
	/* mov	X_ThrotPosn,0 */
	x_throtposn = 0;
dummylabel39:
	// 4541 
	/* @@:		test	RhsButton,1	;centre mouse -> */
	TEST(rhsbutton, 1);
	/* jz	@F		;no -> */
	if (!(rhsbutton & 1)) {goto dummylabel40;}
	/* mov	cx,MOUSE_X_CENTRE */
	cx = 320;
	/* mov	bx,MOUSE_Y_CENTRE */
	bx = 200;
	/* call	SetMousePos */
	CALLF(setmousepos, 0);
dummylabel40:
	// 4543 
	/* @@:		ret */
	RETN(0);
initctrldevice:
	// 3865 
	/* xor	ax,ax ;* kill: assume all */
	XOR(ax, ax);
edummylabel18:
	// 4545 
	/* mov	X_ElePosn,ax */
	x_eleposn = ax;
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
	/* mov	X_ThrotPosn,ax */
	x_throtposn = ax;
	/* call	RecalJoysticks */
	CALLF(recaljoysticks, 0);
	/* mov	bx,X_CtrlDevice */
	bx = x_ctrldevice;
__disp=*(dw*)(((db*)&initctrlswitch)+bx);
	/* jmp	InitCtrlSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
initkbd:
	// 4547 
	// 0 ;---------------------------
	/* mov	X_CtrlDevice,CTRL_DEV_KBD */
	x_ctrldevice = 0;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
initjoy1:
	// 4549 
	// 0 ;---------------------------
	// 0 ;* if single joystick not fitted then default to keyboard
	/* test	JoyA_Flag,1	;joystick fitted? */
	TEST(joya_flag, 1);
	/* jz	InitKbd		;no -> */
	if (!(joya_flag & 1)) {goto initkbd;}
	/* ret */
	RETN(0);
	// 0 ;---------------------------
initjoy2:
	// 4551 
	// 0 ;---------------------------
	// 0 ;* if both joysticks not fitted then default to keyboard
	/* mov	al,JoyA_Flag */
	al = joya_flag;
	/* test	al,JoyB_Flag	;joysticks fitted? */
	TEST(al, joyb_flag);
	/* jz	InitKbd		;no -> */
	if (!(al & joyb_flag)) {goto initkbd;}
	/* ret */
	RETN(0);
	// 0 ;---------------------------
initmouse:
	// 4553 
	// 0 ;---------------------------
	// 0 ;* if mouse not fitted then default to keyboard
	/* test	MouseFlag,1	;mouse fitted? */
	TEST(mouseflag, 1);
	/* jz	InitKbd		;no -> */
	if (!(mouseflag & 1)) {goto initkbd;}
	/* mov	cx,MOUSE_X_CENTRE */
	cx = 320;
	/* mov	bx,MOUSE_Y_CENTRE */
	bx = 200;
	/* call	SetMousePos */
	CALLF(setmousepos, 0);
	/* ret */
	RETN(0);
expcode_0_proc:
	// 3920 
clearinfobar:
	// 4555 
	// 0 ;* kill: assume all
	/* mov	al,COL_BLACK */
	al = 0;
	/* mov	cx,0 */
	cx = 0;
	/* mov	bl,192 */
	bl = 192;
	/* mov	dx,319 */
	dx = 319;
	/* mov	bh,199 */
	bh = 199;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* mov	si,OFFSET Title$ */
	si = m2c::near_offset_external(titledol);
	/* call	Print$ */
	CALLF(printdol, 0);
dispinfobar:
	// 3929 
	// 0 ;-------
	// 0 ;* speed
	// 0 ;-------
	// 0 ;* DispVkts = X_Vtas * 2409 / 32768
	/* mov	SpeedCol,OFFSET TextCol2	;assume forwards */
	speedcol = m2c::near_offset_external(textcol2);
	/* mov	ax,X_Vtas */
	ax = x_vtas;
	/* test	ax,ax		;flying forwards? */
	TEST(ax, ax);
	/* jns	@F		;yes -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel41;}
	/* mov	SpeedCol,OFFSET AlertCol */
	speedcol = m2c::near_offset_external(alertcol);
	/* neg	ax */
	NEG(ax);
dummylabel41:
	// 4557 
	/* @@:		mov	dx,2409 */
	dx = 2409;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	DispVkts,dx */
	dispvkts = dx;
	// 0 ;---------
	// 0 ;* heading
	// 0 ;---------
	/* mov	ax,X_HFine */
	ax = x_hfine;
	/* mov	dx,360 */
	dx = 360;
	/* mul	dx */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* jnz	@F */
	if (dx != 0) {goto dummylabel42;}
	/* mov	dx,360		;display 0 as 360 */
	dx = 360;
dummylabel42:
	// 4559 
	/* @@:		mov	DispHdg,dx */
	disphdg = dx;
	// 0 ;----------
	// 0 ;* altitude
	// 0 ;----------
	/* mov	ax,WORD PTR EXP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&exp_view+vp_zft_lo));
	/* mov	DispAlt,ax */
	dispalt = ax;
	// 0 ;--------------
	// 0 ;* visual range
	// 0 ;--------------
	/* mov	bx,SecScanCnt1		;3 .. 15 */
	bx = secscancnt1;
	/* sub	bx,3			;0 .. 12 */
	SUB(bx, 3);
	/* shr	bx,1			;0 .. 6 */
	SHR(bx, 1);
	/* mov	al,VisRange[bx] */
	al = *((visrange)+bx);
	/* mov	BYTE PTR DispRange,al */
	*(db*)(&disprange) = al;
	// 0 ;----------------
	// 0 ;* control device
	// 0 ;----------------
	/* mov	ax,X_CtrlDevice */
	ax = x_ctrldevice;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* add	ax,X_CtrlDevice	;*3 */
	ADD(ax, x_ctrldevice);
	/* shl	ax,1		;*6 */
	SHL(ax, 1);
	/* add	ax,OFFSET CtrlDev$ */
	ADD(ax, m2c::near_offset_external(ctrldevdol));
	/* mov	CtrlDevPtr,ax */
	ctrldevptr = ax;
	/* mov	si,OFFSET Info$ */
	si = m2c::near_offset_external(infodol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
exploreintr100:
	// 3998 
	// 0 ;--------------------
	// 0 ;* update theme music
	// 0 ;--------------------
edummylabel19:
	// 4561 
	/* xor	Timer50,1	;toggle 50Hz */
	XOR(timer50, 1);
	/* jz	@F		;skip -> */
	if (timer50 == 0) {goto dummylabel43;}
	/* call	RefreshMusic */
	CALLF(refreshmusic, 0);
	// 0 ;-----------
	// 0 ;* scan keys
	// 0 ;-----------
dummylabel43:
	// 4563 
	/* @@:	mov	al,Key[K_SPACE] */
	al = *((&key)+57);
	/* or	al,Key[K_ENTER] */
	OR(al, *((&key)+28));
	/* or	BYTE PTR KF_ToggleMode[K_STATE],al */
	OR(*(db*)(((db*)&kf_togglemode)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+57););	// 4013 mov	al,Key[K_SPACE] */
/* m2c-phantom removed: 	R(OR(al, *((&key)+28)));	// 4014 or	al,Key[K_ENTER] */
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 4015 												mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+16)));	// 4016 						and	al,Key[K_Q] */
/* m2c-phantom removed: 	R(OR(*((&kf_quit)+k_state), al));	// 4017 												or	BYTE PTR KF_Quit[K_STATE],al */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_Q] */
	AND(al, *((&key)+16));
	/* or	BYTE PTR KF_Quit[K_STATE],al */
	OR(*((&kf_quit)+k_state), al);
	/* mov	al,Key[K_1] */
	al = *((&key)+2);
	/* or	BYTE PTR KF_Range[K_STATE],al */
	OR(*((&kf_range)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+2););	// 4023 						mov	al,Key[K_1] */
/* m2c-phantom removed: 	R(OR(*((&kf_range)+k_state), al));	// 4024 or	BYTE PTR KF_Range[K_STATE],al */
/* m2c-phantom removed: 	R(al = *((&key)+3););	// 4025 												mov	al,Key[K_2] */
/* m2c-phantom removed: 	R(OR(*((&kf_gndtext)+k_state), al));	// 4026 												or	BYTE PTR KF_GndText[K_STATE],al */
	/* mov	al,Key[K_2] */
	al = *((&key)+3);
	/* or	BYTE PTR KF_GndText[K_STATE],al */
	OR(*((&kf_gndtext)+k_state), al);
	/* mov	al,Key[K_3] */
	al = *((&key)+4);
	/* or	BYTE PTR KF_HillText[K_STATE],al */
	OR(*((&kf_hilltext)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+4););	// 4031 						mov	al,Key[K_3] */
/* m2c-phantom removed: 	R(OR(*((&kf_hilltext)+k_state), al));	// 4032 or	BYTE PTR KF_HillText[K_STATE],al */
/* m2c-phantom removed: 	R(al = *((&key)+5););	// 4033 												mov	al,Key[K_4] */
/* m2c-phantom removed: 	R(OR(*((&kf_clouds)+k_state), al));	// 4034 												or	BYTE PTR KF_Clouds[K_STATE],al */
	/* mov	al,Key[K_4] */
	al = *((&key)+5);
	/* or	BYTE PTR KF_Clouds[K_STATE],al */
	OR(*((&kf_clouds)+k_state), al);
	/* mov	al,Key[K_5] */
	al = *((&key)+6);
	/* or	BYTE PTR KF_Horizon[K_STATE],al */
	OR(*((&kf_horizon)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+6););	// 4039 						mov	al,Key[K_5] */
/* m2c-phantom removed: 	R(OR(*((&kf_horizon)+k_state), al));	// 4040 or	BYTE PTR KF_Horizon[K_STATE],al */
/* m2c-phantom removed: 	R(al = *((&key)+11););	// 4041 												mov	al,Key[K_0] */
/* m2c-phantom removed: 	R(OR(*((&kf_minimise)+k_state), al));	// 4042 												or	BYTE PTR KF_Minimise[K_STATE],al */
	/* mov	al,Key[K_0] */
	al = *((&key)+11);
	/* or	BYTE PTR KF_Minimise[K_STATE],al */
	OR(*((&kf_minimise)+k_state), al);
	/* mov	al,Key[K_K] */
	al = *((&key)+37);
	/* or	BYTE PTR KF_Keyboard[K_STATE],al */
	OR(*(db*)(((db*)&kf_keyboard)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+37););	// 4047 						mov	al,Key[K_K] */
	/* mov	al,Key[K_J] */
	al = *((&key)+36);
	/* or	BYTE PTR KF_Joystick[K_STATE],al */
	OR(*(db*)(((db*)&kf_joystick)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+36););	// 4050 						mov	al,Key[K_J] */
	/* mov	al,Key[K_M] */
	al = *((&key)+50);
	/* or	BYTE PTR KF_Mouse[K_STATE],al */
	OR(*(db*)(((db*)&kf_mouse)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+50););	// 4053 						mov	al,Key[K_M] */
/* m2c-phantom removed: 	R(al = *((&key)+21););	// 4054 												mov	al,Key[K_Y] */
/* m2c-phantom removed: 	R(OR(*((&kf_recal)+k_state), al));	// 4055 												or	BYTE PTR KF_Recal[K_STATE],al */
	/* mov	al,Key[K_Y] */
	al = *((&key)+21);
	/* or	BYTE PTR KF_Recal[K_STATE],al */
	OR(*((&kf_recal)+k_state), al);
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_Y] */
	AND(al, *((&key)+21));
	/* or	BYTE PTR KF_JoySensNorm[K_STATE],al */
	OR(*((&kf_joysensnorm)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 4061 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+21)));	// 4062 and	al,Key[K_Y] */
/* m2c-phantom removed: 	R(OR(*((&kf_joysensnorm)+k_state), al));	// 4063 or	BYTE PTR KF_JoySensNorm[K_STATE],al */
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 4064 												mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+21)));	// 4065 						and	al,Key[K_Y] */
/* m2c-phantom removed: 	R(OR(*((&kf_joysenshigh)+k_state), al));	// 4066 												or	BYTE PTR KF_JoySensHigh[K_STATE],al */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_Y] */
	AND(al, *((&key)+21));
	/* or	BYTE PTR KF_JoySensHigh[K_STATE],al */
	OR(*((&kf_joysenshigh)+k_state), al);
	// 0 ;------------------
	// 0 ;* keyboard control
	// 0 ;------------------
	// 0 ;* pitch up (climb) ..... cursor down
	// 0 ;* pitch down (dive) .... cursor up
	// 0 ;* roll right ........... cursor right
	// 0 ;* roll left ............ cursor left
	// 0 ;*
	// 0 ;* inc speed ............ '+'
	// 0 ;* dec speed ............ '-'
	// 0 ;*
	// 0 ;* stop dead ............ num keypad '5'
	// 0 ;call	SwitchOnLights
	// 0 ;call	SetNightPanel
	/* mov ah, Key[K_TAB] */
	ah = *((&key)+15);
	/* and ah, Key[K_SHIFT] */
	AND(ah, *((&key)+42));
	/* jnz	__m2c_macrolocal_86_skip */
	if (ah != 0) {goto __m2c_macrolocal_86_skip;}
	/* jmp	GetOuttaNVG */
	goto getouttanvg;
__m2c_macrolocal_86_skip:
	// 4565 
	/* mov Night,4 */
	night = 4;
	// 0 ;cmp	Night,0	;day?
	// 0 ;je @F ;yes ->
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR Key[K_TAB][K_STATE] */
	XCHG(al, *((&key)+15+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR Key[K_TAB][K_LOCK] */
	XCHG(ah, *((&key)+15+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR Key[K_TAB][K_STATUS],al */
	*((&key)+15+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR Key[K_SHIFT][K_STATE] */
	XCHG(al, *((&key)+42+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR Key[K_SHIFT][K_LOCK] */
	XCHG(ah, *((&key)+42+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR Key[K_SHIFT][K_STATUS],al */
	*((&key)+42+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&key)+15+k_state)));	// 4115 						xchg	al,BYTE PTR Key[K_TAB][K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&key)+15+k_lock)));	// 4116 xchg	ah,BYTE PTR Key[K_TAB][K_LOCK] */
/* m2c-phantom removed: 	R(*((&key)+15+k_status) = al;);	// 4117 mov	BYTE PTR Key[K_TAB][K_STATUS],al */
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je GoUnSetNVG */
	if ((dw)(nvg_set) == (dw)(1)) {goto gounsetnvg;}
	/* call	SetIRPalette */
	CALLF(setirpalette, 0);
	/* mov	GradEnabled,1 */
	gradenabled = 1;
	/* mov StarsEnabled,1 */
	starsenabled = 1;
	/* mov CloudsEnabled,1 */
	cloudsenabled = 1;
	/* mov NVG_set,1 */
	nvg_set = 1;
	/* jmp GetOuttaNVG */
	goto getouttanvg;
gounsetnvg:
	// 4567 
	/* call	FixIRPalette */
	CALLF(fixirpalette, 0);
	/* mov	GradEnabled,1 */
	gradenabled = 1;
	/* mov StarsEnabled,1 */
	starsenabled = 1;
	/* mov CloudsEnabled,1 */
	cloudsenabled = 1;
	/* mov NVG_set,0 */
	nvg_set = 0;
	/* mov Night,0 */
	night = 0;
	// 0 ;jmp SkipCredits2
	// 0 ;@@:
getouttanvg:
	// 4569 
	/* cmp	X_CtrlDevice,CTRL_DEV_KBD	;kbd? */
	CMP(x_ctrldevice, 0);
	/* jne	WashRoll			;no -> */
	if ((dw)(x_ctrldevice) != (dw)(0)) {goto washroll;}
	/* mov	bl,Key[K_X]	;roll right */
	bl = *((&key)+45);
	/* shl	bl,1 */
	SHL(bl, 1);
	/* or	bl,Key[K_Z]	;roll left */
	OR(bl, *((&key)+44));
	/* jz Jumpz */
	if (bl == 0) {goto jumpz;}
	/* mov	ax,X_AilPosn */
	ax = x_ailposn;
	/* mov	dx,KBD_AIL_RATE */
	dx = 200;
	/* call	UpdatePosn */
	CALL(updateposn, 0);
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
	/* jmp AfterJumpz */
	goto afterjumpz;
jumpz:
	// 4571 
	/* mov	bl,Key[K_CRSRRT]	;roll right */
	bl = *((&key)+77);
	/* shl	bl,1 */
	SHL(bl, 1);
	/* or	bl,Key[K_CRSRLF]	;roll left */
	OR(bl, *((&key)+75));
	/* mov	ax,X_AilPosn */
	ax = x_ailposn;
	/* mov	dx,KBD_AIL_RATE */
	dx = 200;
	/* call	UpdatePosn */
	CALL(updateposn, 0);
	/* mov	X_AilPosn,ax */
	x_ailposn = ax;
afterjumpz:
	// 4573 
	// 0 ;* elevators
	/* mov	bl,Key[K_CRSRDN]	;pitch down */
	bl = *((&key)+80);
	/* shl	bl,1 */
	SHL(bl, 1);
	/* or	bl,Key[K_CRSRUP]	;pitch up */
	OR(bl, *((&key)+72));
	/* mov	ax,X_ElePosn */
	ax = x_eleposn;
	/* mov	dx,KBD_ELE_RATE */
	dx = 200;
	/* call	UpdatePosn */
	CALL(updateposn, 0);
	/* mov	X_ElePosn,ax */
	x_eleposn = ax;
	// 0 ;* ailerons
	// 0 ;mov	bl,Key[K_CRSRRT]	;roll right
	// 0 ;shl	bl,1
	// 0 ;or	bl,Key[K_CRSRLF]	;roll left
	// 0 ;mov	ax,X_AilPosn
	// 0 ;mov	dx,KBD_AIL_RATE
	// 0 ;call	UpdatePosn
	// 0 ;mov	X_AilPosn,ax
	// 0 ;* speed (change Vtas directly - do not go via X_ThrotPosn)
	/* xor	ax,ax		;assume stop dead */
	XOR(ax, ax);
	/* test	Key[K_CENTRE],1	;stop dead? */
	TEST(*((&key)+76), 1);
	/* jnz	SetSpeed	;yes -> */
	if ((*((&key)+76) & 1) != 0) {goto setspeed;}
	/* mov	ax,X_Vtas */
	ax = x_vtas;
	/* test	Key[K_PLUS],1	;inc speed? */
	TEST(*((&key)+13), 1);
	/* jz	@F		;no -> */
	if (!(*((&key)+13) & 1)) {goto dummylabel44;}
	/* add	ax,KBD_V_RATE */
	ADD(ax, 16);
dummylabel44:
	// 4575 
	/* @@:		test	Key[K_MINUS],1	;dec speed? */
	TEST(*((&key)+12), 1);
	/* jz	@F		;no -> */
	if (!(*((&key)+12) & 1)) {goto dummylabel45;}
	/* sub	ax,KBD_V_RATE */
	SUB(ax, 16);
dummylabel45:
	// 4577 
	/* @@:	cmp	ax,-V_MAX */
	CMP(ax, -10880);
	/* jge	__m2c_macrolocal_87_TestHi */
	if ((short)(ax) >= (short)(-10880)) {goto __m2c_macrolocal_87_testhi;}
	/* mov	ax,-V_MAX */
	ax = -10880;
	/* jmp	__m2c_macrolocal_87_TestOk */
	goto __m2c_macrolocal_87_testok;
__m2c_macrolocal_87_testhi:
	// 4579 
	/* __m2c_macrolocal_87_TestHi:		cmp	ax,V_MAX */
	CMP(ax, 10880);
	/* jle	__m2c_macrolocal_87_TestOk */
	if ((short)(ax) <= (short)(10880)) {goto __m2c_macrolocal_87_testok;}
	/* mov	ax,V_MAX */
	ax = 10880;
__m2c_macrolocal_87_testok:
	// 4581 
setspeed:
	// 4583 
	/* SetSpeed:	mov	X_Vtas,ax */
	x_vtas = ax;
	// 0 ;--------------
	// 0 ;* washout roll
	// 0 ;--------------
washroll:
	// 4585 
	/* WashRoll:	cmp	X_AilPosn,0	;ailerons active? */
	CMP(x_ailposn, 0);
	/* jne	WashPitch	;yes -> */
	if ((dw)(x_ailposn) != (dw)(0)) {goto washpitch;}
	/* mov	ax,X_RFine */
	ax = x_rfine;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* sub	ax,ROLL_WASH_RATE */
	SUB(ax, 50);
	/* jnc	@F */
	if (!CF) {goto dummylabel46;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel46:
	// 4587 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	X_RFine,ax */
	x_rfine = ax;
	// 0 ;---------------
	// 0 ;* washout pitch
	// 0 ;---------------
washpitch:
	// 4589 
	/* WashPitch:	cmp	X_ElePosn,0	;elevators active? */
	CMP(x_eleposn, 0);
	/* jne	ExitIntr100	;yes -> */
	if ((dw)(x_eleposn) != (dw)(0)) {goto exitintr100;}
	/* mov	ax,X_PFine */
	ax = x_pfine;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* sub	ax,PITCH_WASH_RATE */
	SUB(ax, 25);
	/* jnc	@F */
	if (!CF) {goto dummylabel47;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel47:
	// 4591 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	X_PFine,ax */
	x_pfine = ax;
exitintr100:
	// 4593 
	/* ExitIntr100:	ret */
	RETF(0);
updateposn:
	// 4243 
	/* cmp	bl,10b		;inc key pressed only? */
	CMP(bl, 0x2);
edummylabel20:
	// 4595 
	/* je	IncPosn		;yes -> */
	if (ZF) {goto incposn;}
	/* cmp	bl,01b		;dec key pressed only? */
	CMP(bl, 0x1);
	/* je	DecPosn		;yes -> */
	if ((db)(bl) == (db)(0x1)) {goto decposn;}
	// 0 ;* washout position
	/* mov	bx,dx */
	bx = dx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(posn), dx = sign(posn)
	/* shl	bx,1		;washout rate = 2 * input rate */
	SHL(bx, 1);
	/* sub	ax,bx		;washout */
	SUB(ax, bx);
	/* jnc	@F		;ok -> */
	if (!CF) {goto dummylabel48;}
	/* xor	ax,ax		;washout to 0 */
	XOR(ax, ax);
dummylabel48:
	// 4597 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETN(0);
	// 0 ;* increment position
incposn:
	// 4599 
	/* IncPosn:	add	ax,dx		;posn = posn + rate */
	ADD(ax, dx);
	/* jno	@F		;ok -> */
	if (!OF) {goto dummylabel49;}
	/* mov	ax,+32767	;limit */
	ax = 32767;
dummylabel49:
	// 4601 
	/* @@:		ret */
	RETN(0);
	// 0 ;* decrement position
decposn:
	// 4603 
	/* DecPosn:	sub	ax,dx		;posn = posn - rate */
	SUB(ax, dx);
	/* jno	@F		;ok -> */
	if (!OF) {goto dummylabel50;}
	/* mov	ax,-32768	;limit */
	ax = -32768;
dummylabel50:
	// 4605 
	/* @@:		ret */
	RETN(0);
updatekeys:
	// 4283 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
edummylabel21:
	// 4607 
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ToggleMode[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_togglemode)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ToggleMode[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_togglemode)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ToggleMode[K_STATUS],al */
	*(db*)(((db*)&kf_togglemode)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Quit[K_STATE] */
	XCHG(al, *((&kf_quit)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Quit[K_LOCK] */
	XCHG(ah, *((&kf_quit)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Quit[K_STATUS],al */
	*((&kf_quit)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_quit)+k_state)));	// 4305 						xchg	al,BYTE PTR KF_Quit[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_quit)+k_lock)));	// 4306 xchg	ah,BYTE PTR KF_Quit[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_quit)+k_status) = al;);	// 4307 mov	BYTE PTR KF_Quit[K_STATUS],al */
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 4317 						mov	BYTE PTR KF_Range[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 4318 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 4319 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_GndText[K_STATE] */
	XCHG(al, *((&kf_gndtext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	XCHG(ah, *((&kf_gndtext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_GndText[K_STATUS],al */
	*((&kf_gndtext)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_gndtext)+k_state)));	// 4331 						xchg	al,BYTE PTR KF_GndText[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_gndtext)+k_lock)));	// 4332 xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_gndtext)+k_status) = al;);	// 4333 mov	BYTE PTR KF_GndText[K_STATUS],al */
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_HillText[K_STATE] */
	XCHG(al, *((&kf_hilltext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_HillText[K_LOCK] */
	XCHG(ah, *((&kf_hilltext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_hilltext)+k_status) = al;);	// 4343 						mov	BYTE PTR KF_HillText[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_hilltext)+k_state)));	// 4344 						xchg	al,BYTE PTR KF_HillText[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_hilltext)+k_lock)));	// 4345 xchg	ah,BYTE PTR KF_HillText[K_LOCK] */
	/* mov	BYTE PTR KF_HillText[K_STATUS],al */
	*((&kf_hilltext)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Clouds[K_STATE] */
	XCHG(al, *((&kf_clouds)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Clouds[K_LOCK] */
	XCHG(ah, *((&kf_clouds)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Clouds[K_STATUS],al */
	*((&kf_clouds)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_clouds)+k_state)));	// 4357 						xchg	al,BYTE PTR KF_Clouds[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_clouds)+k_lock)));	// 4358 xchg	ah,BYTE PTR KF_Clouds[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_clouds)+k_status) = al;);	// 4359 mov	BYTE PTR KF_Clouds[K_STATUS],al */
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Horizon[K_STATE] */
	XCHG(al, *((&kf_horizon)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Horizon[K_LOCK] */
	XCHG(ah, *((&kf_horizon)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Horizon[K_STATUS],al */
	*((&kf_horizon)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_horizon)+k_state)));	// 4370 						xchg	al,BYTE PTR KF_Horizon[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_horizon)+k_lock)));	// 4371 xchg	ah,BYTE PTR KF_Horizon[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_horizon)+k_status) = al;);	// 4372 mov	BYTE PTR KF_Horizon[K_STATUS],al */
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 4382 						mov	BYTE PTR KF_Minimise[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 4383 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 4384 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Keyboard[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_keyboard)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Keyboard[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_keyboard)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Keyboard[K_STATUS],al */
	*(db*)(((db*)&kf_keyboard)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Joystick[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_joystick)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Joystick[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_joystick)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Joystick[K_STATUS],al */
	*(db*)(((db*)&kf_joystick)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Mouse[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_mouse)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Mouse[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_mouse)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Mouse[K_STATUS],al */
	*(db*)(((db*)&kf_mouse)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Recal[K_STATE] */
	XCHG(al, *((&kf_recal)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Recal[K_LOCK] */
	XCHG(ah, *((&kf_recal)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Recal[K_STATUS],al */
	*((&kf_recal)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_recal)+k_state)));	// 4426 						xchg	al,BYTE PTR KF_Recal[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_recal)+k_lock)));	// 4427 xchg	ah,BYTE PTR KF_Recal[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_recal)+k_status) = al;);	// 4428 mov	BYTE PTR KF_Recal[K_STATUS],al */
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JoySensNorm[K_STATE] */
	XCHG(al, *((&kf_joysensnorm)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JoySensNorm[K_LOCK] */
	XCHG(ah, *((&kf_joysensnorm)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_joysensnorm)+k_status) = al;);	// 4438 						mov	BYTE PTR KF_JoySensNorm[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_joysensnorm)+k_state)));	// 4439 						xchg	al,BYTE PTR KF_JoySensNorm[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_joysensnorm)+k_lock)));	// 4440 xchg	ah,BYTE PTR KF_JoySensNorm[K_LOCK] */
	/* mov	BYTE PTR KF_JoySensNorm[K_STATUS],al */
	*((&kf_joysensnorm)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JoySensHigh[K_STATE] */
	XCHG(al, *((&kf_joysenshigh)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JoySensHigh[K_LOCK] */
	XCHG(ah, *((&kf_joysenshigh)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_JoySensHigh[K_STATUS],al */
	*((&kf_joysenshigh)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_joysenshigh)+k_state)));	// 4452 						xchg	al,BYTE PTR KF_JoySensHigh[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_joysenshigh)+k_lock)));	// 4453 xchg	ah,BYTE PTR KF_JoySensHigh[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_joysenshigh)+k_status) = al;);	// 4454 mov	BYTE PTR KF_JoySensHigh[K_STATUS],al */
	/* ret */
	RETN(0);
useroptions:
	// 4465 
	// 0 ;------------------
	// 0 ;* keyboard control
	// 0 ;------------------
edummylabel22:
	// 4609 
	/* mov	al,BYTE PTR KF_Keyboard[K_STATUS] */
	al = *(db*)(((db*)&kf_keyboard)+k_status);
	/* test	al,al */
	TEST(al, al);
	/* jz	SkipKbd */
	if (!(al & al)) {goto skipkbd;}
	/* mov	X_CtrlDevice,CTRL_DEV_KBD */
	x_ctrldevice = 0;
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;------------------
	// 0 ;* joystick control
	// 0 ;------------------
skipkbd:
	// 4611 
	/* SkipKbd:	mov	al,BYTE PTR KF_Joystick[K_STATUS] */
	al = *(db*)(((db*)&kf_joystick)+k_status);
	/* test	al,al */
	TEST(al, al);
	/* jz	SkipJoy */
	if (!(al & al)) {goto skipjoy;}
	/* cmp	X_CtrlDevice,CTRL_DEV_JS1	;single joystick control? */
	CMP(x_ctrldevice, 2);
	/* jne	@F				;no -> */
	if ((dw)(x_ctrldevice) != (dw)(2)) {goto dummylabel51;}
	/* mov	X_CtrlDevice,CTRL_DEV_JS2	;dual joysticks */
	x_ctrldevice = 4;
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	/* cmp	X_CtrlDevice,CTRL_DEV_JS2	;dual joysticks ok? */
	CMP(x_ctrldevice, 4);
	/* je	SkipJoy				;yes -> */
	if ((dw)(x_ctrldevice) == (dw)(4)) {goto skipjoy;}
dummylabel51:
	// 4613 
	/* @@:		mov	X_CtrlDevice,CTRL_DEV_JS1	;single joystick */
	x_ctrldevice = 2;
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;---------------
	// 0 ;* mouse control
	// 0 ;---------------
skipjoy:
	// 4615 
	/* SkipJoy:	mov	al,BYTE PTR KF_Mouse[K_STATUS] */
	al = *(db*)(((db*)&kf_mouse)+k_status);
	/* test	al,al */
	TEST(al, al);
	/* jz	SkipMouse */
	if (!(al & al)) {goto skipmouse;}
	/* mov	X_CtrlDevice,CTRL_DEV_MOUSE */
	x_ctrldevice = 6;
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;------------------------
	// 0 ;* joystick recalibration
	// 0 ;------------------------
skipmouse:
	// 4617 
	/* SkipMouse:	mov	al,BYTE PTR KF_JoySensNorm[K_STATUS] */
	al = *((&kf_joysensnorm)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_joysensnorm)+k_status););	// 4506 mov	al,BYTE PTR KF_JoySensNorm[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel52;}
	/* mov	JoySensitivity,0 */
	joysensitivity = 0;
dummylabel52:
	// 4619 
	/* @@:	mov	al,BYTE PTR KF_JoySensHigh[K_STATUS] */
	al = *((&kf_joysenshigh)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_joysenshigh)+k_status););	// 4511 mov	al,BYTE PTR KF_JoySensHigh[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel53;}
	/* mov	JoySensitivity,1 */
	joysensitivity = 1;
dummylabel53:
	// 4621 
	/* @@:	mov	al,BYTE PTR KF_Recal[K_STATUS] */
	al = *((&kf_recal)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_recal)+k_status););	// 4516 mov	al,BYTE PTR KF_Recal[K_STATUS] */
	/* jz	SkipRecal */
	if (!(al & al)) {goto skiprecal;}
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;----------------
	// 0 ;* visual options
	// 0 ;----------------
skiprecal:
	// 4623 
	/* SkipRecal:	call	UserVisOptions */
	CALLF(uservisoptions, 0);
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
                case m2c::k__m2c_macrolocal_42_testhi: 	goto __m2c_macrolocal_42_testhi;
        case m2c::k__m2c_macrolocal_42_testok: 	goto __m2c_macrolocal_42_testok;
        case m2c::k__m2c_macrolocal_47_testhi: 	goto __m2c_macrolocal_47_testhi;
        case m2c::k__m2c_macrolocal_47_testok: 	goto __m2c_macrolocal_47_testok;
        case m2c::k__m2c_macrolocal_50_testhi: 	goto __m2c_macrolocal_50_testhi;
        case m2c::k__m2c_macrolocal_50_testok: 	goto __m2c_macrolocal_50_testok;
        case m2c::k__m2c_macrolocal_86_skip: 	goto __m2c_macrolocal_86_skip;
        case m2c::k__m2c_macrolocal_87_testhi: 	goto __m2c_macrolocal_87_testhi;
        case m2c::k__m2c_macrolocal_87_testok: 	goto __m2c_macrolocal_87_testok;
        case m2c::kafterjumpz: 	goto afterjumpz;
        case m2c::kbordercheck: 	goto bordercheck;
        case m2c::kcalcangles: 	goto calcangles;
        case m2c::kcalcnewpos: 	goto calcnewpos;
        case m2c::kcapvalueto380: 	goto capvalueto380;
        case m2c::kcapvalueto500: 	goto capvalueto500;
        case m2c::kclearinfobar: 	goto clearinfobar;
        case m2c::kcontcalcalt: 	goto contcalcalt;
        case m2c::kcontmap: 	goto contmap;
        case m2c::kdecposn: 	goto decposn;
        case m2c::kdispinfobar: 	goto dispinfobar;
        case m2c::kdrawlocator: 	goto drawlocator;
        case m2c::kdrawmap: 	goto drawmap;
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
        case m2c::kdummylabel46: 	goto dummylabel46;
        case m2c::kdummylabel47: 	goto dummylabel47;
        case m2c::kdummylabel48: 	goto dummylabel48;
        case m2c::kdummylabel49: 	goto dummylabel49;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel50: 	goto dummylabel50;
        case m2c::kdummylabel51: 	goto dummylabel51;
        case m2c::kdummylabel52: 	goto dummylabel52;
        case m2c::kdummylabel53: 	goto dummylabel53;
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
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitdrawmap: 	goto exitdrawmap;
        case m2c::kexitflyview: 	goto exitflyview;
        case m2c::kexitintr100: 	goto exitintr100;
        case m2c::kexitmapview: 	goto exitmapview;
        case m2c::kexitscroll: 	goto exitscroll;
        case m2c::kexpcode_0_proc: 	goto expcode_0_proc;
        case m2c::kexploreexit: 	goto exploreexit;
        case m2c::kexploreintr100: 	goto exploreintr100;
        case m2c::kexploreloop: 	goto exploreloop;
        case m2c::kexploremodel: 	goto exploremodel;
        case m2c::kflyloop: 	goto flyloop;
        case m2c::kflyview: 	goto flyview;
        case m2c::kgetouttanvg: 	goto getouttanvg;
        case m2c::kgounsetnvg: 	goto gounsetnvg;
        case m2c::kincposn: 	goto incposn;
        case m2c::kinitctrldevice: 	goto initctrldevice;
        case m2c::kinitexpmodel: 	goto initexpmodel;
        case m2c::kinitflyview: 	goto initflyview;
        case m2c::kinitjoy1: 	goto initjoy1;
        case m2c::kinitjoy2: 	goto initjoy2;
        case m2c::kinitkbd: 	goto initkbd;
        case m2c::kinitmapexplore: 	goto initmapexplore;
        case m2c::kinitmapview: 	goto initmapview;
        case m2c::kinitmouse: 	goto initmouse;
        case m2c::kjumpz: 	goto jumpz;
        case m2c::kloadmap: 	goto loadmap;
        case m2c::kmapexplore: 	goto mapexplore;
        case m2c::kmaploop: 	goto maploop;
        case m2c::kmapview: 	goto mapview;
        case m2c::kmapzoomin: 	goto mapzoomin;
        case m2c::kmapzoomout: 	goto mapzoomout;
        case m2c::ksavemap: 	goto savemap;
        case m2c::kscrollmap: 	goto scrollmap;
        case m2c::ksetspeed: 	goto setspeed;
        case m2c::kskipa: 	goto skipa;
        case m2c::kskipalexx1: 	goto skipalexx1;
        case m2c::kskipalexx2: 	goto skipalexx2;
        case m2c::kskipb: 	goto skipb;
        case m2c::kskipc: 	goto skipc;
        case m2c::kskipcapvalueto380: 	goto skipcapvalueto380;
        case m2c::kskipcapvalueto500: 	goto skipcapvalueto500;
        case m2c::kskipd: 	goto skipd;
        case m2c::kskipdistscale: 	goto skipdistscale;
        case m2c::kskipjoy: 	goto skipjoy;
        case m2c::kskipkbd: 	goto skipkbd;
        case m2c::kskipmouse: 	goto skipmouse;
        case m2c::kskiprecal: 	goto skiprecal;
        case m2c::ksortcontrols: 	goto sortcontrols;
        case m2c::ksortctrljoy1: 	goto sortctrljoy1;
        case m2c::ksortctrljoy2: 	goto sortctrljoy2;
        case m2c::ksortctrlkbd: 	goto sortctrlkbd;
        case m2c::ksortctrlmouse: 	goto sortctrlmouse;
        case m2c::kupdatekeys: 	goto updatekeys;
        case m2c::kupdateposn: 	goto updateposn;
        case m2c::kuseroptions: 	goto useroptions;
        case m2c::kwashpitch: 	goto washpitch;
        case m2c::kwashroll: 	goto washroll;
        default: return __dispatch_call(__disp, _state);
    };
}


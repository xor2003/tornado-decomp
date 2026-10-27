/* THIS IS GENERATED FILE */

        
#include "extrnpan.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
loadextrnpan:
	// 2287 
	// 0 ;* sort text RGB colours
edummylabel1:
	// 4369 
	/* mov	si,OFFSET VGA_EXT_TEXT1 */
	si = m2c::near_offset_external(vga_ext_text1);
	/* cmp	si,TextRGBPtr	;palette colours ok? */
	CMP(si, textrgbptr);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(textrgbptr)) {goto dummylabel1;}
	/* mov	TextRGBPtr,si */
	textrgbptr = si;
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET VGA_EXT_TEXT */
	di = m2c::near_offset_external(vga_ext_text);
	/* mov	cx,3*3 */
	cx = 3*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2303 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2305 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
/* m2c-phantom removed: 	R(ax = m2c::segment_of_external(vga_rgb_data););	// 2308 						mov	ax,SEG VGA_RGB_Data */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(vga_ext_text););	// 2309 mov	di,OFFSET VGA_EXT_TEXT */
	// 2310 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2311 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	SetPaletteFlag,1 */
	setpaletteflag = 1;
	// 0 ;* clear text area
dummylabel1:
	// 4371 
	/* @@:		cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je @F */
	if ((dw)(nvg_set) == (dw)(1)) {goto dummylabel2;}
	/* mov	al,COL_BLACK */
	al = 0;
	/* jmp SkipCOL_CRT2 */
	goto skipcol_crt2;
dummylabel2:
	// 4373 
	/* mov al,COL_CRT2 */
	al = 161;
skipcol_crt2:
	// 4375 
	/* mov	bl,192 */
	bl = 192;
	/* mov	bh,199 */
	bh = 199;
	/* mov	cx,0 */
	cx = 0;
	/* mov	dx,319 */
	dx = 319;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;* print info bar
	/* mov	si,OFFSET Info$		;assume not demo view */
	si = m2c::near_offset_external(infodol);
	/* cmp	DemoMode,0		;demo mode? */
	CMP(demomode, 0);
	/* je	@F			;no -> */
	if ((dw)(demomode) == (dw)(0)) {goto dummylabel3;}
	/* mov	si,OFFSET Demo$ */
	si = m2c::near_offset_external(demodol);
dummylabel3:
	// 4377 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
updateextrn:
	// 2344 
	/* cmp	DemoMode,0	;demo mode? */
	CMP(demomode, 0);
edummylabel2:
	// 4379 
	/* je	__m2c_macrolocal_89_skip */
	if (ZF) {goto __m2c_macrolocal_89_skip;}
	/* jmp	ExitUpdate */
	goto exitupdate;
__m2c_macrolocal_89_skip:
	// 4381 
	// 0 ;yes ->
	// 0 ;* if VIEW_MAP then
	// 0 ;*    sort text RGB colours
	// 0 ;*    print Info$
	// 0 ;*    print over = on
	// 0 ;* else
	// 0 ;*    print over = off
	// 0 ;* endif
	/* xor	al,al		;assume not VIEW_MAP */
	XOR(al, al);
	/* cmp	GameViewMode,VIEW_MAP	;map view? */
	CMP(gameviewmode, 16);
	/* jne	SkipMap			;no -> */
	if ((dw)(gameviewmode) != (dw)(16)) {goto skipmap;}
	// 0 ;* sort text RGB colours
	/* mov	si,OFFSET VGA_EXT_TEXT2 */
	si = m2c::near_offset_external(vga_ext_text2);
	/* cmp	si,TextRGBPtr	;palette colours ok? */
	CMP(si, textrgbptr);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(textrgbptr)) {goto dummylabel4;}
	/* mov	TextRGBPtr,si */
	textrgbptr = si;
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET VGA_EXT_TEXT */
	di = m2c::near_offset_external(vga_ext_text);
	/* mov	cx,3*3 */
	cx = 3*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2376 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2378 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
/* m2c-phantom removed: 	R(ax = m2c::segment_of_external(vga_rgb_data););	// 2381 						mov	ax,SEG VGA_RGB_Data */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(vga_ext_text););	// 2382 mov	di,OFFSET VGA_EXT_TEXT */
	// 2383 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2384 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	SetPaletteFlag,1 */
	setpaletteflag = 1;
	// 0 ;* print Info$
dummylabel4:
	// 4383 
	// 0 ;mov	si,OFFSET MoreInfo$
	// 0 ;call	Print$
	/* mov	si,OFFSET Info$ */
	si = m2c::near_offset_external(infodol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	al,1 */
	al = 1;
skipmap:
	// 4385 
	/* SkipMap:	mov	PrintOver,al */
	printover = al;
	// 0 ;* sort altitude display (barometric or radar)
	/* mov	ax,OFFSET BarAlt$ */
	ax = m2c::near_offset_external(baraltdol);
	/* cmp	TrueRadAlt,5000	;disp bar alt? */
	CMP(trueradalt, 5000);
	/* jae	@F		;yes -> */
	if ((dw)(trueradalt) >= (dw)(5000)) {goto dummylabel5;}
	/* mov	ax,OFFSET RadAlt$ */
	ax = m2c::near_offset_external(radaltdol);
dummylabel5:
	// 4387 
	/* @@:		mov	AltValPtr,ax */
	altvalptr = ax;
	// 0 ;* sort VSI text col (display -ve VSI in ALERT colour)
	/* mov	si,OFFSET TextCol2	;assume VSI +ve */
	si = m2c::near_offset_external(textcol2);
	/* mov	ax,DispVSI */
	ax = dispvsi;
	/* test	ax,ax		;VSI +ve? */
	TEST(ax, ax);
	/* jns	@F		;yes -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel6;}
	/* mov	si,OFFSET AlertCol */
	si = m2c::near_offset_external(alertcol);
dummylabel6:
	// 4389 
	/* @@:		mov	VSICol,si */
	vsicol = si;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	VSIVal,ax */
	vsival = ax;
	// 0 ;* sort fuel text col (display <= 1000lbs fuel in ALERT colour)
	/* mov	si,OFFSET TextCol2	;assume > 1000lbs fuel */
	si = m2c::near_offset_external(textcol2);
	/* cmp	FuelWt,1000	;> 1000lbs fuel? */
	CMP(fuelwt, 1000);
	/* ja	@F		;yes -> */
	if ((dw)(fuelwt) > (dw)(1000)) {goto dummylabel7;}
	/* mov	si,OFFSET AlertCol */
	si = m2c::near_offset_external(alertcol);
dummylabel7:
	// 4391 
	/* @@:		mov	FuelCol,si */
	fuelcol = si;
	// 0 ;* view mode text colour
	/* mov	ViewCol,OFFSET TextCol2	;assume not drone mode */
	viewcol = m2c::near_offset_external(textcol2);
	/* cmp	GameViewMode,VIEW_DRONE	;drone? */
	CMP(gameviewmode, 18);
	/* jne	@F	       		;no -> */
	if ((dw)(gameviewmode) != (dw)(18)) {goto dummylabel8;}
	/* test	DroneMode,010b		;enemy? */
	TEST(dronemode, 0x2);
	/* jz	@F			;no -> */
	if (!(dronemode & 0x2)) {goto dummylabel8;}
	/* mov	ViewCol,OFFSET AlertCol */
	viewcol = m2c::near_offset_external(alertcol);
	// 0 ;* print primary flight information
dummylabel8:
	// 4393 
	// 0 ;mov	si,OFFSET WAYP$
	// 0 ;call	Print$
	/* mov	PrtCl,8*4  ;3*4 */
	prtcl = 8*4;
	/* mov	PrtLn,193 */
	prtln = 193;
	/* cmp WPPtr, -1 */
	CMP(wpptr, -1);
	/* je @F */
	if ((dw)(wpptr) == (dw)(-1)) {goto dummylabel9;}
	/* mov	si,WPPtr */
	si = wpptr;
	/* jmp Skipppa */
	goto skipppa;
dummylabel9:
	// 4395 
	/* @@:	    mov	[WPPtr].WP_ID,'-' */
	m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds,m2c::near_offset_external(wpptr)))->wp_id))), m2c::getdata('-'));
	/* mov	si,WPPtr */
	si = wpptr;
skipppa:
	// 4397 
	/* mov	al,[si].WP_ID */
	al = m2c::getdata(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_id)));
	/* mov ForeCol, COL_TEXT_ALERT */
	forecol = 7;
	/* mov BackCol, COL_BLACK */
	backcol = 0;
	/* call	PrintChar */
	CALLF(printchar, 0);
	// 0 ;* print countdown timer to current waypoint
	/* cmp WPRngNMiles,10 */
	CMP(wprngnmiles, 10);
	/* ja Miles_Cyan */
	if ((dw)(wprngnmiles) > (dw)(10)) {goto miles_cyan;}
	/* cmp WPRngNMiles,5 */
	CMP(wprngnmiles, 5);
	/* ja Miles_Yellow */
	if ((dw)(wprngnmiles) > (dw)(5)) {goto miles_yellow;}
	/* cmp WPRngNMiles,0 */
	CMP(wprngnmiles, 0);
	/* ja Miles_LightRed */
	if ((dw)(wprngnmiles) > (dw)(0)) {goto miles_lightred;}
	/* mov	si,OFFSET PFIred$ */
	si = m2c::near_offset_external(pfireddol);
	/* jmp @F */
	goto dummylabel10;
miles_cyan:
	// 4399 
	/* mov	si,OFFSET PFIcyan$ */
	si = m2c::near_offset_external(pficyandol);
	/* jmp @F */
	goto dummylabel10;
miles_yellow:
	// 4401 
	/* mov	si,OFFSET PFIyellow$ */
	si = m2c::near_offset_external(pfiyellowdol);
	/* jmp @F */
	goto dummylabel10;
miles_lightred:
	// 4403 
	/* mov	si,OFFSET PFIlightred$ */
	si = m2c::near_offset_external(pfilightreddol);
dummylabel10:
	// 4405 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* calc DispHdg (1 .. 360)
	/* mov	si,OFFSET PFI$ */
	si = m2c::near_offset_external(pfidol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* sort view mode
	/* mov	ax,GameViewMode */
	ax = gameviewmode;
	/* mov	si,OFFSET Tracking$ */
	si = m2c::near_offset_external(trackingdol);
	/* cmp	ax,VIEW_TRACKING	;tracking? */
	CMP(ax, 12);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(12)) {goto viewok;}
	/* mov	si,OFFSET ZSUView1$ */
	si = m2c::near_offset_external(zsuview1dol);
	/* cmp	ax,VIEW_ZSU1	;ZSU View1? */
	CMP(ax, 36);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(36)) {goto viewok;}
	/* mov	si,OFFSET ZSUView2$ */
	si = m2c::near_offset_external(zsuview2dol);
	/* cmp	ax,VIEW_ZSU2	;ZSU View2? */
	CMP(ax, 38);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(38)) {goto viewok;}
	/* mov	si,OFFSET ZRKView$ */
	si = m2c::near_offset_external(zrkviewdol);
	/* cmp	ax,VIEW_ZRK	;tracking? */
	CMP(ax, 34);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(34)) {goto viewok;}
	/* mov	si,OFFSET ZRKZSUView$ */
	si = m2c::near_offset_external(zrkzsuviewdol);
	/* cmp	ax,VIEW_ZRK_AAA	;tracking? */
	CMP(ax, 40);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(40)) {goto viewok;}
	/* mov	si,OFFSET Satellite$ */
	si = m2c::near_offset_external(satellitedol);
	/* cmp	ax,VIEW_SATELLITE	;satellite? */
	CMP(ax, 14);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(14)) {goto viewok;}
	/* mov	si,OFFSET Map$ */
	si = m2c::near_offset_external(mapdol);
	/* cmp	ax,VIEW_MAP		;map? */
	CMP(ax, 16);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(16)) {goto viewok;}
	/* mov	si,OFFSET Spectator$ */
	si = m2c::near_offset_external(spectatordol);
	/* cmp	ax,VIEW_SPECTATOR	;spectator? */
	CMP(ax, 20);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(20)) {goto viewok;}
	/* mov	si,OFFSET Remote$ */
	si = m2c::near_offset_external(remotedol);
	/* cmp	ax,VIEW_REMOTE		;remote? */
	CMP(ax, 22);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(22)) {goto viewok;}
	/* mov	si,OFFSET Drone$ */
	si = m2c::near_offset_external(dronedol);
	/* cmp	ax,VIEW_DRONE		;drone? */
	CMP(ax, 18);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(18)) {goto viewok;}
	/* mov	si,OFFSET Destroyed$ */
	si = m2c::near_offset_external(destroyeddol);
	/* cmp	ax,VIEW_DESTROYED	;destroyed? */
	CMP(ax, 30);
	/* je	ViewOk			;yes -> */
	if ((dw)(ax) == (dw)(30)) {goto viewok;}
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je  ShowWeaponStatusLine; yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto showweaponstatusline;}
	/* mov	si,OFFSET Strike$ ;kbs */
	si = m2c::near_offset_external(strikedol);
	/* jmp ViewOk */
	goto viewok;
showweaponstatusline:
	// 4407 
	/* mov	si,OFFSET Weapon$ */
	si = m2c::near_offset_external(weapondol);
	// 0 ;kbs
viewok:
	// 4409 
	/* ViewOk:	call	Print$ */
	CALLF(printdol, 0);
	/* cmp	CrewMode,CREW_NAVIG ;Navigator? */
	CMP(crewmode, 2);
	/* je ExitUpdate */
	if ((dw)(crewmode) == (dw)(2)) {goto exitupdate;}
	// 0 ; EXTRNPAN.ASM(620): warning A6003: conditional jump lengthened : by 1176 byte(s)
	/* mov	al,BYTE PTR KF_HillText[K_STATUS] */
	al = *((&kf_hilltext)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hilltext)+k_status););	// 2520 						mov	al,BYTE PTR KF_HillText[K_STATUS] */
	/* jz @F */
	if (!(al & al)) {goto dummylabel11;}
/* m2c-phantom removed: 	R(*((&kf_hilltext)+k_status) = 0;);	// 2522 					    					    mov	BYTE PTR KF_HillText[K_STATUS],0 */
	/* mov	BYTE PTR KF_HillText[K_STATUS],0 */
	*((&kf_hilltext)+k_status) = 0;
	/* cmp SplitScreenBigMapIsOn,1  ;Check if the Half Map is active */
	CMP(splitscreenbigmapison, 1);
	/* je @F ;--> yes */
	if ((dw)(splitscreenbigmapison) == (dw)(1)) {goto dummylabel11;}
	// 0 ;Half Map is inactive, so bring the user back to the first F1-type (i.e., tracking cam view)screen
	/* mov	EScopeToggle,0 */
	escopetoggle = 0;
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
dummylabel11:
	// 4411 
	/* cmp CurrentViewIsCheckSix,1 */
	CMP(currentviewischecksix, 1);
	/* jne @F */
	if ((dw)(currentviewischecksix) != (dw)(1)) {goto dummylabel12;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* je ExitUpdate */
	if ((dw)(currentviewischecksix) == (dw)(1)) {goto exitupdate;}
	// 0 ; EXTRNPAN.ASM(634): warning A6003: conditional jump lengthened : by 1130 byte(s)
dummylabel12:
	// 4413 
	// 0 ;test	Key[K_OPN_SQ_BRKT],1
	// 0 ;jz	@F
	// 0 ;KCLEAR Key[K_OPN_SQ_BRKT]
	// 0 ;test	Key[K_5],1
	/* test Key[K_OPN_SQ_BRKT],1 */
	TEST(*((&key)+26), 1);
	/* jz @F */
	if (!(*((&key)+26) & 1)) {goto dummylabel13;}
	// 0 ;KCLEAR  Key[K_5]
/* m2c-phantom removed: 	R(*((&key)+26+k_status) = 0;);	// 2543 				        				        mov	BYTE PTR Key[K_OPN_SQ_BRKT][K_STATUS],0 */
	/* mov	BYTE PTR Key[K_OPN_SQ_BRKT][K_STATUS],0 */
	*((&key)+26+k_status) = 0;
	// 0 ;If the half-map is currently being viewed, don't go beyond this point of the "[" tab!
	/* cmp EScopeToggle,1 */
	CMP(escopetoggle, 1);
	/* jne jiffy ;--> No */
	if ((dw)(escopetoggle) != (dw)(1)) {goto jiffy;}
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne jiffy ;--> No */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto jiffy;}
	/* call MorseDashSound */
	CALLF(morsedashsound, 0);
	/* jmp leap2 ;EScopeToggle is left as 1 */
	goto leap2;
jiffy:
	// 4415 
	/* cmp TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne Non_ADVprocess */
	if ((dw)(tornadotype) != (dw)(2)) {goto non_advprocess;}
	/* jmp ADVprocess */
	goto advprocess;
advprocess:
	// 4417 
	/* cmp EScopeToggle,0 */
	CMP(escopetoggle, 0);
	/* je leap1 */
	if ((dw)(escopetoggle) == (dw)(0)) {goto leap1;}
	/* cmp EScopeToggle,3 */
	CMP(escopetoggle, 3);
	/* je leap3 */
	if ((dw)(escopetoggle) == (dw)(3)) {goto leap3;}
	/* cmp EScopeToggle,8 */
	CMP(escopetoggle, 8);
	/* je leap4 */
	if ((dw)(escopetoggle) == (dw)(8)) {goto leap4;}
	/* cmp EScopeToggle,18 */
	CMP(escopetoggle, 18);
	/* je leap5 */
	if ((dw)(escopetoggle) == (dw)(18)) {goto leap5;}
	/* sub	EScopeToggle,1 */
	SUB(escopetoggle, 1);
	/* jmp leap2 */
	goto leap2;
leap3:
	// 4419 
	/* leap3:	mov	EScopeToggle,1 */
	escopetoggle = 1;
	/* jmp leap2 */
	goto leap2;
leap4:
	// 4421 
	/* leap4:	mov	EScopeToggle,6 */
	escopetoggle = 6;
	/* jmp leap2 */
	goto leap2;
leap5:
	// 4423 
	/* leap5:	mov	EScopeToggle,16 */
	escopetoggle = 16;
	/* jmp leap2 */
	goto leap2;
non_advprocess:
	// 4425 
	/* cmp EScopeToggle,0 */
	CMP(escopetoggle, 0);
	/* je leap1 */
	if ((dw)(escopetoggle) == (dw)(0)) {goto leap1;}
	/* sub	EScopeToggle,1 */
	SUB(escopetoggle, 1);
	/* jmp leap2 */
	goto leap2;
leap1:
	// 4427 
	/* leap1:  mov	EScopeToggle,20 */
	escopetoggle = 20;
	/* jmp leapOfFaith */
	goto leapoffaith;
dummylabel13:
	// 4429 
	// 0 ;KTEST KF_TAB2Select
	/* test	Key[K_CLS_SQ_BRKT],1 */
	TEST(*((&key)+27), 1);
	/* jz @F */
	if (!(*((&key)+27) & 1)) {goto dummylabel14;}
/* m2c-phantom removed: 	R(*((&key)+27+k_status) = 0;);	// 2584 				        				        mov	BYTE PTR Key[K_CLS_SQ_BRKT][K_STATUS],0 */
	/* mov	BYTE PTR Key[K_CLS_SQ_BRKT][K_STATUS],0 */
	*((&key)+27+k_status) = 0;
	// 0 ;test	Key[K_CLS_SQ_BRKT],1
	// 0 ;jz	@F
	// 0 ;KCLEAR Key[K_CLS_SQ_BRKT]
	// 0 ;If the half-map is currently being viewed, don't go beyond this point of the "[" tab!
	/* cmp EScopeToggle,10 */
	CMP(escopetoggle, 10);
	/* jne iffy ;--> No */
	if ((dw)(escopetoggle) != (dw)(10)) {goto iffy;}
	/* cmp SplitScreenBigMapIsOn,1 */
	CMP(splitscreenbigmapison, 1);
	/* jne iffy ;--> No */
	if ((dw)(splitscreenbigmapison) != (dw)(1)) {goto iffy;}
	/* call MorseDashSound */
	CALLF(morsedashsound, 0);
	/* jmp leap2 ;EScopeToggle is left as 10 */
	goto leap2;
iffy:
	// 4431 
	/* add EScopeToggle,1 ;Toggle value from 0 to 1 */
	ADD(escopetoggle, 1);
dummylabel14:
	// 4433 
leap2:
	// 4435 
	/* leap2:	cmp	EScopeToggle,1 */
	CMP(escopetoggle, 1);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(1)) {goto dummylabel15;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel15;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Addd0
	// 0 ;call UpdateEScope2
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Addd0:
edummylabel3:
	// 4437 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel15:
	// 4439 
	/* @@:		cmp	EScopeToggle,2 */
	CMP(escopetoggle, 2);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(2)) {goto dummylabel16;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	// 0 ;ADV Tornado don't have the Terrain-following EScope - so add 1 EScopeToggle
	// 0 ;and skip to next "cmp EScopeToggle" section if flying ADV
	/* cmp TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je DontShowOriFLIR_And_Add0 */
	if ((dw)(tornadotype) == (dw)(2)) {goto dontshoworiflir_and_add0;}
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel16;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add0
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dontshoworiflir_and_add0:
	// 4441 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel16:
	// 4443 
	/* @@:		cmp	EScopeToggle,3 */
	CMP(escopetoggle, 3);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(3)) {goto dummylabel17;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel17;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add1
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage3 */
	if (al == 0) {goto nodamage3;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage3:
	// 4445 
	/* NoDamage3: call UpdateTAB */
	CALL(updatetab, 0);
	/* call TIALDDisp_Ori2  ; <-- This has to be last on the list! */
	CALL(tialddisp_ori2, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dontshoworiflir_and_add1:
	// 4447 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel17:
	// 4449 
	/* @@:		cmp	EScopeToggle,4 */
	CMP(escopetoggle, 4);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(4)) {goto dummylabel18;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel18;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add2
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2		;try this */
	CALL(updateadi2, 0);
	/* call UpdateRWR2		;try this */
	CALL(updaterwr2, 0);
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage4 */
	if (al == 0) {goto nodamage4;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage4:
	// 4451 
	/* NoDamage4:call UpdateTAB */
	CALL(updatetab, 0);
	/* call RefDisp */
	CALL(refdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Add2:
edummylabel4:
	// 4453 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel18:
	// 4455 
	/* @@:		cmp	EScopeToggle,5 */
	CMP(escopetoggle, 5);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(5)) {goto dummylabel19;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel19;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add2c
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage5 */
	if (al == 0) {goto nodamage5;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage5:
	// 4457 
	/* NoDamage5: call UpdateTAB              ;Can comment off!?????? */
	CALL(updatetab, 0);
	/* call RoutePlanDisp */
	CALL(routeplandisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Add2c:
edummylabel5:
	// 4459 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel19:
	// 4461 
leap6:
	// 4463 
	/* Leap6:	cmp	EScopeToggle,6 */
	CMP(escopetoggle, 6);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(6)) {goto dummylabel20;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel20;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Adb
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	// 0 ;call UpdateTAB
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage6 */
	if (al == 0) {goto nodamage6;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage6:
	// 4465 
	/* NoDamage6:call UpdateMFD */
	CALL(updatemfd, 0);
	/* call MapDisp */
	CALL(mapdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Adb:
edummylabel6:
	// 4467 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel20:
	// 4469 
	/* @@:		cmp	EScopeToggle,7 */
	CMP(escopetoggle, 7);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(7)) {goto dummylabel21;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	// 0 ;ADV Tornado don't have the Ground Mapping Radar - so add 1 EScopeToggle
	// 0 ;and skip to next "cmp EScopeToggle" section if flying ADV
	/* cmp TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je DontShowOriFLIR_And_Add2b */
	if ((dw)(tornadotype) == (dw)(2)) {goto dontshoworiflir_and_add2b;}
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel21;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add2b
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	// 0 ;call UpdateTAB
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage7 */
	if (al == 0) {goto nodamage7;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage7:
	// 4471 
	/* NoDamage7: call UpdateMFD */
	CALL(updatemfd, 0);
	/* call GndMappingRadar */
	CALL(gndmappingradar, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dontshoworiflir_and_add2b:
	// 4473 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel21:
	// 4475 
	/* @@:		cmp	EScopeToggle,8 */
	CMP(escopetoggle, 8);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(8)) {goto dummylabel22;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel22;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add2bc
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	// 0 ;call UpdateTAB
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage7b */
	if (al == 0) {goto nodamage7b;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage7b:
	// 4477 
	/* NoDamage7b: call UpdateMFD */
	CALL(updatemfd, 0);
	/* mov RadarMode,AIR_RADAR */
	radarmode = 4;
	/* call RadarDisp */
	CALL(radardisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Add2bc:
edummylabel7:
	// 4479 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel22:
	// 4481 
	/* @@:		cmp	EScopeToggle,9 */
	CMP(escopetoggle, 9);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(9)) {goto dummylabel23;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel23;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add6
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	// 0 ;call UpdateTAB
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage8 */
	if (al == 0) {goto nodamage8;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage8:
	// 4483 
	/* NoDamage8:call UpdateMFD */
	CALL(updatemfd, 0);
	/* call AutoPilotDisp */
	CALL(autopilotdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Add6:
edummylabel8:
	// 4485 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel23:
	// 4487 
gobackto10:
	// 4489 
	/* Gobackto10:	cmp	EScopeToggle,10 */
	CMP(escopetoggle, 10);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(10)) {goto dummylabel24;}
	/* mov AllowSplitScreenBigMap,1 */
	allowsplitscreenbigmap = 1;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel24;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add3
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	// 0 ;call UpdateTAB
	/* call FLIRDisp_Ori3 */
	CALL(flirdisp_ori3, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	/* call UpdateRWR2 */
	CALL(updaterwr2, 0);
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage9 */
	if (al == 0) {goto nodamage9;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage9:
	// 4491 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* call ILSDisp */
	CALL(ilsdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Add3:
edummylabel9:
	// 4493 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel24:
	// 4495 
	/* cmp	EScopeToggle,11 */
	CMP(escopetoggle, 11);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(11)) {goto dummylabel25;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	// 0 ;If the half-map is currently being viewed, don't go beyond this point of the "[" tab!
	// 0 ;cmp SplitScreenBigMapIsOn,1
	// 0 ;jne @F ;--> No
	// 0 ;mov EScopeToggle,10
	// 0 ;jmp leap2
	// 0 ;@@:
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel25;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	// 0 ;call UpdateTAB
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage12 */
	if (al == 0) {goto nodamage12;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage12:
	// 4497 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* call MapDisp */
	CALL(mapdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel25:
	// 4499 
	/* cmp	EScopeToggle,12 */
	CMP(escopetoggle, 12);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(12)) {goto dummylabel26;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel26;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage13 */
	if (al == 0) {goto nodamage13;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage13:
	// 4501 
	/* call UpdateTAB              ;Can comment off!?????? */
	CALL(updatetab, 0);
	/* call RoutePlanDisp */
	CALL(routeplandisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel26:
	// 4503 
	/* cmp	EScopeToggle,13 */
	CMP(escopetoggle, 13);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(13)) {goto dummylabel27;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel27;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage14 */
	if (al == 0) {goto nodamage14;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage14:
	// 4505 
	/* call UpdateTAB */
	CALL(updatetab, 0);
	/* call RefDisp */
	CALL(refdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel27:
	// 4507 
	/* cmp	EScopeToggle,14 */
	CMP(escopetoggle, 14);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(14)) {goto dummylabel28;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel28;}
	// 0 ;Only display the original FLIR display IF the TV-TAB1 is not showing the full-screen FLIR (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_FLIR_ORI ;Strange oversight: TAB_FLIR_ORI means full-screen FLIR in TAB!!
	// 0 ;je DontShowOriFLIR_And_Add4
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage15 */
	if (al == 0) {goto nodamage15;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage15:
	// 4509 
	/* call UpdateTAB */
	CALL(updatetab, 0);
	/* call FLIRDisp_Ori2 */
	CALL(flirdisp_ori2, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriFLIR_And_Add4:
edummylabel10:
	// 4511 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel28:
	// 4513 
	/* cmp	EScopeToggle,15 */
	CMP(escopetoggle, 15);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(15)) {goto dummylabel29;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel29;}
	// 0 ;Only display the original TIALD display IF the TV-TAB1 is not showing the full-screen TIALD (otherwise game will hang!)
	// 0 ;cmp	TAB1.TAB_MODE,TAB_TIALD_ORI ;Strange oversight: TAB_TIALD_ORI means full-screen TIALD in TAB!!
	// 0 ;je DontShowOriTIALD_And_Add1
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_TAB1 */
	al = ssf_tab1;
	/* and al, SSF_TAB2 */
	AND(al, ssf_tab2);
	/* jz	NoDamage16 */
	if (al == 0) {goto nodamage16;}
	/* call	DamagedDisp */
	CALL(damageddisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage16:
	// 4515 
	/* call UpdateTAB */
	CALL(updatetab, 0);
	/* call TIALDDisp_Ori2 */
	CALL(tialddisp_ori2, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
	// 0 ;DontShowOriTIALD_And_Add1:
edummylabel11:
	// 4517 
	/* add EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel29:
	// 4519 
	/* cmp	EScopeToggle,16 */
	CMP(escopetoggle, 16);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(16)) {goto dummylabel30;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel30;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage17 */
	if (al == 0) {goto nodamage17;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage17:
	// 4521 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* call AutoPilotDisp */
	CALL(autopilotdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel30:
	// 4523 
	/* cmp	EScopeToggle,17 */
	CMP(escopetoggle, 17);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(17)) {goto dummylabel31;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	// 0 ;ADV Tornado don't have the Ground Mapping Radar - so add 1 EScopeToggle
	// 0 ;and skip to next "cmp EScopeToggle" section if flying ADV
	/* cmp TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je DontShowOriTIALD_And_Addqa1 */
	if ((dw)(tornadotype) == (dw)(2)) {goto dontshoworitiald_and_addqa1;}
	/* test	QuieterCockpit,1 */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel31;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage18 */
	if (al == 0) {goto nodamage18;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage18:
	// 4525 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* call GndMappingRadar */
	CALL(gndmappingradar, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dontshoworitiald_and_addqa1:
	// 4527 
	/* add	EScopeToggle,1 */
	ADD(escopetoggle, 1);
dummylabel31:
	// 4529 
	/* cmp	EScopeToggle,18 */
	CMP(escopetoggle, 18);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(18)) {goto dummylabel32;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1 */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel32;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage18b */
	if (al == 0) {goto nodamage18b;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage18b:
	// 4531 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* mov RadarMode,AIR_RADAR */
	radarmode = 4;
	/* call RadarDisp */
	CALL(radardisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel32:
	// 4533 
	/* cmp	EScopeToggle,19 */
	CMP(escopetoggle, 19);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(19)) {goto dummylabel33;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1 */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel33;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage19 */
	if (al == 0) {goto nodamage19;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage19:
	// 4535 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* call AutoPilotDisp */
	CALL(autopilotdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel33:
	// 4537 
leapoffaith:
	// 4539 
	/* cmp	EScopeToggle,20 */
	CMP(escopetoggle, 20);
	/* jne @F */
	if ((dw)(escopetoggle) != (dw)(20)) {goto dummylabel34;}
	/* mov AllowSplitScreenBigMap,0 */
	allowsplitscreenbigmap = 0;
	/* test	QuieterCockpit,1 */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel34;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
	// 0 ;call UpdateRWR2
	/* mov al, SSF_NavigMFD */
	al = ssf_navigmfd;
	/* and al, SSF_PilotMFD */
	AND(al, ssf_pilotmfd);
	/* jz	NoDamage20 */
	if (al == 0) {goto nodamage20;}
	/* call	DamagedDispMFD */
	CALL(damageddispmfd, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
nodamage20:
	// 4541 
	/* call UpdateMFD */
	CALL(updatemfd, 0);
	/* call ILSDisp */
	CALL(ilsdisp, 0);
	/* jmp ExitUpdate */
	goto exitupdate;
dummylabel34:
	// 4543 
	/* cmp	EScopeToggle,21 */
	CMP(escopetoggle, 21);
	/* jne ExitUpdate */
	if ((dw)(escopetoggle) != (dw)(21)) {goto exitupdate;}
	/* mov	EScopeToggle,0 */
	escopetoggle = 0;
exitupdate:
	// 4545 
	/* ExitUpdate:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_89_skip: 	goto __m2c_macrolocal_89_skip;
        case m2c::kadvprocess: 	goto advprocess;
        case m2c::kdontshoworiflir_and_add0: 	goto dontshoworiflir_and_add0;
        case m2c::kdontshoworiflir_and_add1: 	goto dontshoworiflir_and_add1;
        case m2c::kdontshoworiflir_and_add2b: 	goto dontshoworiflir_and_add2b;
        case m2c::kdontshoworitiald_and_addqa1: 	goto dontshoworitiald_and_addqa1;
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
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitupdate: 	goto exitupdate;
        case m2c::kgobackto10: 	goto gobackto10;
        case m2c::kiffy: 	goto iffy;
        case m2c::kjiffy: 	goto jiffy;
        case m2c::kleap1: 	goto leap1;
        case m2c::kleap2: 	goto leap2;
        case m2c::kleap3: 	goto leap3;
        case m2c::kleap4: 	goto leap4;
        case m2c::kleap5: 	goto leap5;
        case m2c::kleap6: 	goto leap6;
        case m2c::kleapoffaith: 	goto leapoffaith;
        case m2c::kloadextrnpan: 	goto loadextrnpan;
        case m2c::kmiles_cyan: 	goto miles_cyan;
        case m2c::kmiles_lightred: 	goto miles_lightred;
        case m2c::kmiles_yellow: 	goto miles_yellow;
        case m2c::knodamage12: 	goto nodamage12;
        case m2c::knodamage13: 	goto nodamage13;
        case m2c::knodamage14: 	goto nodamage14;
        case m2c::knodamage15: 	goto nodamage15;
        case m2c::knodamage16: 	goto nodamage16;
        case m2c::knodamage17: 	goto nodamage17;
        case m2c::knodamage18: 	goto nodamage18;
        case m2c::knodamage18b: 	goto nodamage18b;
        case m2c::knodamage19: 	goto nodamage19;
        case m2c::knodamage20: 	goto nodamage20;
        case m2c::knodamage3: 	goto nodamage3;
        case m2c::knodamage4: 	goto nodamage4;
        case m2c::knodamage5: 	goto nodamage5;
        case m2c::knodamage6: 	goto nodamage6;
        case m2c::knodamage7: 	goto nodamage7;
        case m2c::knodamage7b: 	goto nodamage7b;
        case m2c::knodamage8: 	goto nodamage8;
        case m2c::knodamage9: 	goto nodamage9;
        case m2c::knon_advprocess: 	goto non_advprocess;
        case m2c::kshowweaponstatusline: 	goto showweaponstatusline;
        case m2c::kskipcol_crt2: 	goto skipcol_crt2;
        case m2c::kskipmap: 	goto skipmap;
        case m2c::kskipppa: 	goto skipppa;
        case m2c::kupdateextrn: 	goto updateextrn;
        case m2c::kviewok: 	goto viewok;
        default: return __dispatch_call(__disp, _state);
    };
}


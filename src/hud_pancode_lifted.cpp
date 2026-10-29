/* THIS IS GENERATED FILE */

        
#include "hud.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updatehud:
	// 2848 
	// 0 ;------------------------------------
	// 0 ;* update HUD brackets / canopy frame
	// 0 ;------------------------------------
edummylabel1:
	// 4369 
	/* test	IronWork,1	;ironwork enabled? */
	TEST(ironwork, 1);
	/* jz	@F		;no -> */
	if (!(ironwork & 1)) {goto dummylabel1;}
	/* call	DrawHUDBrackets */
	CALL(drawhudbrackets, 0);
	/* call	UpdateAoAMeter */
	CALL(updateaoameter, 0);
	// 0 ;------------------------
	// 0 ;* update HUD information
	// 0 ;------------------------
dummylabel1:
	// 4371 
	/* @@:		test	SSF_HUD,1	;HUD damaged? */
	TEST(ssf_hud, 1);
	/* jz	__m2c_macrolocal_63_skip */
	if (!(ssf_hud & 1)) {goto __m2c_macrolocal_63_skip;}
	/* jmp	ExitHUD */
	goto exithud;
__m2c_macrolocal_63_skip:
	// 4373 
	// 0 ;yes ->
	/* call	InitHUD */
	CALL(inithud, 0);
	/* test	HUDEnabled,1	;HUD enabled? */
	TEST(hudenabled, 1);
	/* jnz	__m2c_macrolocal_64_skip */
	if ((hudenabled & 1) != 0) {goto __m2c_macrolocal_64_skip;}
	/* jmp	ExitHUD */
	goto exithud;
__m2c_macrolocal_64_skip:
	// 4375 
	// 0 ;no ->
	/* mov	bx,ArmMode */
	bx = armmode;
__disp=*(dw*)(((db*)&hudswitch)+bx);
	/* jmp	HUDSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
hudnavigation:
	// 4377 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* test	ILSActive,1	;ILS active? */
	TEST(ilsactive, 1);
	/* jnz	@F		;yes -> */
	if ((ilsactive & 1) != 0) {goto dummylabel2;}
	/* call	UpdateACSymbol */
	CALL(updateacsymbol, 0);
	/* jmp	ContNav */
	goto contnav;
dummylabel2:
	// 4379 
	/* @@:		call	UpdateILS */
	CALL(updateils, 0);
contnav:
	// 4381 
	/* ContNav:	jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudmanualbomb:
	// 4383 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateACSymbol */
	CALL(updateacsymbol, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawCCIPMrkr */
	CALL(drawccipmrkr, 0);
	/* call	DrawBombFall */
	CALL(drawbombfall, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudlaydownbomb:
	// 4385 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateACSymbol */
	CALL(updateacsymbol, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawCCIPMrkr */
	CALL(drawccipmrkr, 0);
	/* call	DrawGndTgtMrkr */
	CALL(drawgndtgtmrkr, 0);
	/* call	DrawBombFall */
	CALL(drawbombfall, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudloftbomb:
	// 4387 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateACSymbol */
	CALL(updateacsymbol, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr */
	CALL(drawgndtgtmrkr, 0);
	/* mov	ax,LoftClock */
	ax = loftclock;
	/* cmp	ax,-1		;clock valid? */
	CMP(ax, -1);
	/* je	@F		;no -> */
	if ((dw)(ax) == (dw)(-1)) {goto dummylabel3;}
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* cmp	LoftRatio,-1	;ratio valid? */
	CMP(loftratio, -1);
	/* je	@F		;no -> */
	if ((dw)(loftratio) == (dw)(-1)) {goto dummylabel3;}
	/* call	LoftSteeringCue */
	CALL(loftsteeringcue, 0);
	/* jmp	ExitHUD */
	goto exithud;
dummylabel3:
	// 4389 
	/* @@: 		call	DrawSolidFall */
	CALL(drawsolidfall, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudlaserguided:
	// 4391 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateACSymbol */
	CALL(updateacsymbol, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* call	DrawSolidFall */
	CALL(drawsolidfall, 0);
	/* call	LaserRangeClock */
	CALL(laserrangeclock, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudjp233:
	// 4393 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateACSymbol */
	CALL(updateacsymbol, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* test	ArmLock,1  	;release in progress? */
	TEST(armlock, 1);
	/* jnz	@F	   	;yes -> */
	if ((armlock & 1) != 0) {goto dummylabel4;}
	// 0 ;* approaching target
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawCCIPMrkr */
	CALL(drawccipmrkr, 0);
	/* call	DrawGndTgtMrkr */
	CALL(drawgndtgtmrkr, 0);
	/* call	DrawSolidFall */
	CALL(drawsolidfall, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;* release in progress
dummylabel4:
	// 4395 
	/* @@:		call	JP233Clock */
	CALL(jp233clock, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudalarmdir:
	// 4397 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* call	DrawCentreCross */
	CALL(drawcentrecross, 0);
	/* test	RWRTgtValid,1	;target valid? */
	TEST(rwrtgtvalid, 1);
	/* jz	@F		;no -> */
	if (!(rwrtgtvalid & 1)) {goto dummylabel5;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr */
	CALL(drawgndtgtmrkr, 0);
	/* call	DrawAlarmClock */
	CALL(drawalarmclock, 0);
dummylabel5:
	// 4399 
	/* @@:		jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudalarmind:
	// 4401 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	/* call	DrawCentreCross */
	CALL(drawcentrecross, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr */
	CALL(drawgndtgtmrkr, 0);
	/* call	DrawAlarmClock */
	CALL(drawalarmclock, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudcannon:
	// 4403 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* cmp	RadarMode,AIR_RADAR	;air radar on? */
	CMP(radarmode, 4);
	/* jne	@F			;no -> */
	if ((dw)(radarmode) != (dw)(4)) {goto dummylabel6;}
	// 0 ;* >>>>> air-to-air mode <<<<<
	/* call	UpdateAlt */
	CALL(updatealt, 0);
	/* call	DrawAirTarget */
	CALL(drawairtarget, 0);
	/* jc	StandbySight	;invalid target or error -> */
	if (CF) {goto standbysight;}
	/* call	DrawIntercept */
	CALL(drawintercept, 0);
	/* call	DrawCentreCross */
	CALL(drawcentrecross, 0);
	/* call	DispAirTgtData */
	CALL(dispairtgtdata, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;* >>>>> air-to-ground mode <<<<<
dummylabel6:
	// 4405 
	/* @@:		call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateAltClock */
	CALL(updatealtclock, 0);
	/* call	UpdateEarlyLate */
	CALL(updateearlylate, 0);
	// 0 ;* check target valid (floating waypoint)
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	StandbySight		;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto standbysight;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr */
	CALL(drawgndtgtmrkr, 0);
	/* jc	StandbySight	;non-visible -> */
	if (CF) {goto standbysight;}
	/* call	DrawCentreCross */
	CALL(drawcentrecross, 0);
	/* call	DrawGndGunClock */
	CALL(drawgndgunclock, 0);
	/* jmp	ExitHUD */
	goto exithud;
standbysight:
	// 4407 
	/* StandbySight:	call	DrawStandby */
	CALL(drawstandby, 0);
	/* jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudsidewinder:
	// 4409 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateAlt */
	CALL(updatealt, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* call	DrawCentreCross */
	CALL(drawcentrecross, 0);
	/* call	DrawAirTarget */
	CALL(drawairtarget, 0);
	/* jc	@F		;invalid target or error -> */
	if (CF) {goto dummylabel7;}
	/* call	DrawIntercept */
	CALL(drawintercept, 0);
	/* call	DispAirTgtData */
	CALL(dispairtgtdata, 0);
dummylabel7:
	// 4411 
	/* @@:		jmp	ExitHUD */
	goto exithud;
	// 0 ;---------------------------
hudskyflash:
	// 4413 
	// 0 ;---------------------------
	/* call	UpdateAoA */
	CALL(updateaoa, 0);
	/* call	UpdateAlt */
	CALL(updatealt, 0);
	/* call	UpdateAirSpeed */
	CALL(updateairspeed, 0);
	/* call	UpdateHdg */
	CALL(updatehdg, 0);
	/* call	UpdatePitch */
	CALL(updatepitch, 0);
	/* mov	si,OFFSET SkyFlash$ */
	si = m2c::near_offset_external(skyflashdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* call	DrawCentreCross */
	CALL(drawcentrecross, 0);
	/* call	DrawAirTarget */
	CALL(drawairtarget, 0);
	/* jc	ExitHUD		;invalid target or error -> */
	if (CF) {goto exithud;}
	/* call	DrawIntercept */
	CALL(drawintercept, 0);
	/* call	DispAirTgtData */
	CALL(dispairtgtdata, 0);
exithud:
	// 4415 
	/* ExitHUD:	ret */
	RETN(0);
inithud:
	// 3112 
	// 0 ;------------------------
	// 0 ;* check for HUD on / off
	// 0 ;------------------------
edummylabel2:
	// 4417 
	/* mov	al,BYTE PTR KF_HUDSwitch[K_STATUS] */
	al = *((&kf_hudswitch)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudswitch)+k_status););	// 3120 						mov	al,BYTE PTR KF_HUDSwitch[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel8;}
	/* xor	HUDEnabled,1	;toggle on / off */
	XOR(hudenabled, 1);
	/* jnz	InitCont	;on -> */
	if (hudenabled != 0) {goto initcont;}
	/* jmp	InitDone */
	goto initdone;
dummylabel8:
	// 4419 
	/* @@:		test	HUDEnabled,1	;HUD enabled? */
	TEST(hudenabled, 1);
	/* jz	InitDone	;no -> */
	if (!(hudenabled & 1)) {goto initdone;}
	// 0 ;----------------------------------
	// 0 ;* check for mach num option toggle
	// 0 ;----------------------------------
	/* mov	al,BYTE PTR KF_HUDOption[K_STATUS] */
	al = *((&kf_hudoption)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudoption)+k_status););	// 3134 						mov	al,BYTE PTR KF_HUDOption[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel9;}
	/* xor	MachOption,1	;toggle mach num option */
	XOR(machoption, 1);
	/* jmp	InitCont */
	goto initcont;
	// 0 ;-------------------------------
	// 0 ;* check for HUD contrast change
	// 0 ;-------------------------------
dummylabel9:
	// 4421 
	/* @@:	mov	al,BYTE PTR KF_HUDContrast[K_STATUS] */
	al = *((&kf_hudcontrast)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudcontrast)+k_status););	// 3144 mov	al,BYTE PTR KF_HUDContrast[K_STATUS] */
	/* jz	InitCont */
	if (!(al & al)) {goto initcont;}
	/* mov	al,HUDLevel */
	al = hudlevel;
	/* inc	al */
	INC(al);
	/* and	al,3 */
	AND(al, 3);
	/* mov	HUDLevel,al */
	hudlevel = al;
	/* call	SetHUDLevel */
	CALLF(sethudlevel, 0);
	// 0 ;-----------------------------------------------------
	// 0 ;* sort heading strip position and HUD clipping window
	// 0 ;-----------------------------------------------------
initcont:
	// 4423 
	/* InitCont:	cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	@F */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel10;}
	/* mov	HdgYOff,40 */
	hdgyoff = 40;
	/* mov	CLIP_ABOVE,5 */
	clip_above = 5;
	/* mov	CLIP_BELOW,80 */
	clip_below = 80;
	/* jmp	SetClip */
	goto setclip;
dummylabel10:
	// 4425 
	/* @@:		mov	HdgYOff,-38 */
	hdgyoff = -38;
	/* mov	CLIP_ABOVE,16 */
	clip_above = 16;
	/* mov	CLIP_BELOW,94 */
	clip_below = 94;
setclip:
	// 4427 
	/* SetClip:	call	SetHUDClip */
	CALL(sethudclip, 0);
	// 0 ;-----------------------
	// 0 ;* init print attributes
	// 0 ;-----------------------
	/* mov	si,OFFSET SetUp$ */
	si = m2c::near_offset_external(setupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;-------------------
	// 0 ;* init HUD viewport
	// 0 ;-------------------
	// 0 ;* roll with horizon
	/* mov	ax,RFine */
	ax = rfine;
	/* neg	ax */
	NEG(ax);
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* mov	si,OFFSET VP */
	si = m2c::near_offset_external(vp);
	/* call	VSetViewport */
	CALLF(vsetviewport, 0);
initdone:
	// 4429 
	/* InitDone:	ret */
	RETN(0);
drawhudbrackets:
	// 3193 
	/* call	DrawBrackets ;* kill: assume all */
	CALLF(drawbrackets, 0);
edummylabel3:
	// 4431 
	/* ret */
	RETN(0);
updateaoameter:
	// 3207 
	// 0 ;* sort -ve AoA
edummylabel4:
	// 4433 
	/* mov	ax,DispAlpha */
	ax = dispalpha;
	/* test	ax,ax		;-ve AoA? */
	TEST(ax, ax);
	/* jns	@F		;no -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel11;}
	/* xor	ax,ax		;set -ve AoA to 0 */
	XOR(ax, ax);
	// 0 ;* calc bar length
dummylabel11:
	// 4435 
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	// 4435 
	/* adc	ax,0		;1/2 bit round up (0 ..43) */
	ADC(ax, 0);
	// 0 ;* draw meter bar (3 pixels wide)
	/* mov	bl,HUD_Y_ORG+44 */
	bl = 48+44;
	/* mov	bh,bl		;y2 = y1 */
	bh = bl;
	/* sub	bl,al		;y1 = y1 - bar length */
	SUB(bl, al);
	/* push	bx */
	PUSH(bx);
	/* mov	cx,HUD_X_ORG-84 */
	cx = 160-84;
	/* mov	al,COL_AOA */
	al = 135;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* mov	cx,HUD_X_ORG-83 */
	cx = 160-83;
	/* mov	al,COL_AOA */
	al = 135;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	bx */
	POP(bx);
	/* mov	cx,HUD_X_ORG-82 */
	cx = 160-82;
	/* mov	al,COL_AOA */
	al = 135;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
updateaoa:
	// 3250 
	// 0 ;* draw AoA graduations
edummylabel5:
	// 4437 
	/* mov	cx,HUD_X_ORG+-56 */
	cx = 160+-56;
	/* mov	bl,HUD_Y_ORG+-15 */
	bl = 48+-15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3258 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_ORG+-15 */
	bl = 48+-15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3263 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_ORG+-10 */
	bl = 48+-10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3268 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-56 */
	cx = 160+-56;
	/* mov	bl,HUD_Y_ORG+-5 */
	bl = 48+-5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3273 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_ORG+-5 */
	bl = 48+-5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3278 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3283 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-56 */
	cx = 160+-56;
	/* mov	bl,HUD_Y_ORG++5 */
	bl = 48+5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3288 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_ORG++5 */
	bl = 48+5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3293 						call	SetPixel
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_ORG++10 */
	bl = 48+10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3298 						call	SetPixel
	// 0 ;* draw AoA zero line
	/* mov	cx,HUD_X_ORG+-54 */
	cx = 160+-54;
	/* mov	dx,HUD_X_ORG+-52 */
	dx = 160+-52;
	/* mov	bl,HUD_Y_ORG++15 */
	bl = 48+15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3307 						call	HLineDraw
	// 0 ;* sort -ve AoA
	/* mov	ax,DispAlpha */
	ax = dispalpha;
	/* test	ax,ax		;-ve AoA? */
	TEST(ax, ax);
	/* jns	@F		;no -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel12;}
	/* xor	ax,ax		;set -ve AoA to 0 */
	XOR(ax, ax);
	// 0 ;* calc AoA indicator line length (1 pixel = 1 degree)
dummylabel12:
	// 4439 
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	// 4439 
	/* adc	ax,0		;1/2 bit round up (0 .. 22) */
	ADC(ax, 0);
	// 0 ;* draw AoA indicator line
	/* mov	bl,HUD_Y_ORG+15 */
	bl = 48+15;
	/* mov	bh,bl		;y2 = y1 */
	bh = bl;
	/* sub	bl,al		;y1 = y1 - line length */
	SUB(bl, al);
	/* mov	cx,HUD_X_ORG-51 */
	cx = 160-51;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
updatevsi:
	// 3340 
	// 0 ;* draw VSI graduations
edummylabel6:
	// 4441 
	/* mov	cx,HUD_X_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_ORG+-15 */
	bl = 48+-15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3348 						call	SetPixel
	/* mov	cx,HUD_X_ORG++49 */
	cx = 160+49;
	/* mov	bl,HUD_Y_ORG+-10 */
	bl = 48+-10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3353 						call	SetPixel
	/* mov	cx,HUD_X_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_ORG+-10 */
	bl = 48+-10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3358 						call	SetPixel
	/* mov	cx,HUD_X_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_ORG+-5 */
	bl = 48+-5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3363 						call	SetPixel
	/* mov	cx,HUD_X_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_ORG++5 */
	bl = 48+5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3368 						call	SetPixel
	/* mov	cx,HUD_X_ORG++49 */
	cx = 160+49;
	/* mov	bl,HUD_Y_ORG++10 */
	bl = 48+10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3373 						call	SetPixel
	/* mov	cx,HUD_X_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_ORG++10 */
	bl = 48+10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3378 						call	SetPixel
	/* mov	cx,HUD_X_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_ORG++15 */
	bl = 48+15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3383 						call	SetPixel
	// 0 ;* draw VSI zero line
	/* mov	cx,HUD_X_ORG++52 */
	cx = 160+52;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3391 						call	SetPixel
	/* mov	cx,HUD_X_ORG++53 */
	cx = 160+53;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3396 						call	SetPixel
	// 0 ;* calc VSI indicator line length (use abs(DispZdot) to avoid -1 truncation error)
	// 0 ;*
	// 0 ;* 1 pixel = 1 ft / sec (therefore 10 pixels = 600 ft / min)
	/* mov	ax,DispZdot */
	ax = dispzdot;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* cmp	ax,20		;abs(DispZdot) <= 20ft / sec */
	CMP(ax, 20);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(20)) {goto dummylabel13;}
	/* mov	ax,20		;limit to 20ft / sec */
	ax = 20;
dummylabel13:
	// 4443 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* draw VSI indicator line
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* mov	bh,bl		;y2 = y1 */
	bh = bl;
	/* sub	bl,al		;y1 = y1 - line length */
	SUB(bl, al);
	/* mov	cx,HUD_X_ORG+54 */
	cx = 160+54;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
updatealtclock:
	// 3437 
	// 0 ;* draw altitude clock graduations
edummylabel7:
	// 4445 
	/* mov	cx,HUD_X_ORG++45 */
	cx = 160+45;
	/* mov	bl,HUD_Y_ORG+-42 */
	bl = 48+-42;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3445 						call	SetPixel
	/* mov	cx,HUD_X_ORG++53 */
	cx = 160+53;
	/* mov	bl,HUD_Y_ORG+-40 */
	bl = 48+-40;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3450 						call	SetPixel
	/* mov	cx,HUD_X_ORG++58 */
	cx = 160+58;
	/* mov	bl,HUD_Y_ORG+-35 */
	bl = 48+-35;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3455 						call	SetPixel
	/* mov	cx,HUD_X_ORG++58 */
	cx = 160+58;
	/* mov	bl,HUD_Y_ORG+-27 */
	bl = 48+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3460 						call	SetPixel
	/* mov	cx,HUD_X_ORG++53 */
	cx = 160+53;
	/* mov	bl,HUD_Y_ORG+-22 */
	bl = 48+-22;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3465 						call	SetPixel
	/* mov	cx,HUD_X_ORG++45 */
	cx = 160+45;
	/* mov	bl,HUD_Y_ORG+-20 */
	bl = 48+-20;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3470 						call	SetPixel
	/* mov	cx,HUD_X_ORG++37 */
	cx = 160+37;
	/* mov	bl,HUD_Y_ORG+-22 */
	bl = 48+-22;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3475 						call	SetPixel
	/* mov	cx,HUD_X_ORG++32 */
	cx = 160+32;
	/* mov	bl,HUD_Y_ORG+-27 */
	bl = 48+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3480 						call	SetPixel
	/* mov	cx,HUD_X_ORG++32 */
	cx = 160+32;
	/* mov	bl,HUD_Y_ORG+-35 */
	bl = 48+-35;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3485 						call	SetPixel
	/* mov	cx,HUD_X_ORG++37 */
	cx = 160+37;
	/* mov	bl,HUD_Y_ORG+-40 */
	bl = 48+-40;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3490 						call	SetPixel
	// 0 ;----------------
	// 0 ;* print altitude
	// 0 ;----------------
	// 0 ;* if TrueRadAlt < 5000 then
	// 0 ;*    print radar altitude "Rdddd"
	// 0 ;* else
	// 0 ;*    print barometric altitude "dddd0" (lsd always zero)
	// 0 ;* end
	/* mov	ax,TrueRadAlt */
	ax = trueradalt;
	/* cmp	ax,5000		;disp bar alt? */
	CMP(ax, 5000);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(5000)) {goto dummylabel14;}
	// 0 ;* print radar altitude
	/* xor	dx,dx */
	XOR(dx, dx);
	/* push	ax		;store clock bug value */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	/* mov	si,OFFSET RadAlt$ */
	si = m2c::near_offset_external(radaltdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp	AltClockBug */
	goto altclockbug;
	// 0 ;* print barometric altitude
dummylabel14:
	// 4447 
	/* @@:		push	ZftLo		;store clock bug value */
	PUSH(zftlo);
	/* push	ZftHi */
	PUSH(zfthi);
	/* mov	si,OFFSET BarAlt$ */
	si = m2c::near_offset_external(baraltdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;-------------------------
	// 0 ;* calc clock bug position
	// 0 ;-------------------------
	// 0 ;* pos = remainder(alt / 1000) * 2066 / 32768 = 0 .. 63
altclockbug:
	// 4449 
	/* AltClockBug:	pop	dx		;restore clock bug value */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* mov	bx,1000 */
	bx = 1000;
	/* div	bx		;dx = remainder(zft / 1000) */
	DIV2(bx);
	/* mov	ax,2066 */
	ax = 2066;
	/* mul	dx */
	MUL1_2(dx);
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
	// 0 ;remainder(zft / 1000) * 2066 / 32768
	// 0 ;* select pos
	/* cmp	ax,48 */
	CMP(ax, 48);
	/* jae	BugQuad4 */
	if ((dw)(ax) >= (dw)(48)) {goto bugquad4;}
	/* cmp	ax,32 */
	CMP(ax, 32);
	/* jae	BugQuad3 */
	if ((dw)(ax) >= (dw)(32)) {goto bugquad3;}
	/* cmp	ax,16 */
	CMP(ax, 16);
	/* jae	BugQuad2 */
	if ((dw)(ax) >= (dw)(16)) {goto bugquad2;}
	// 0 ;* case 0 .. 15
	// 0 ;*    index = pos * 2
	// 0 ;*    x sign = 0
	// 0 ;*    y sign = 0
bugquad1:
	// 4451 
	/* BugQuad1:	mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;index = pos * 2 */
	SHL(bx, 1);
	/* mov	dx,00000h	;x sign = 0, y sign = 0 */
	dx = 0x00000;
	/* jmp	DrawAltBug */
	goto drawaltbug;
	// 0 ;* case 16 .. 31
	// 0 ;*    index = (32 - pos) * 2
	// 0 ;*    x sign = 0
	// 0 ;*    y sign = -1
bugquad2:
	// 4453 
	/* BugQuad2:	mov	bx,32 */
	bx = 32;
	/* sub	bx,ax */
	SUB(bx, ax);
	/* shl	bx,1		;index = (32 - pos) * 2 */
	SHL(bx, 1);
	/* mov	dx,0ff00h	;x sign = 0, y sign = -1 */
	dx = 0x0ff00;
	/* jmp	DrawAltBug */
	goto drawaltbug;
	// 0 ;* case 32 .. 47
	// 0 ;*    index = (pos - 32) * 2
	// 0 ;*    x sign = -1
	// 0 ;*    y sign = -1
bugquad3:
	// 4455 
	/* BugQuad3:	mov	bx,ax */
	bx = ax;
	/* sub	bx,32 */
	SUB(bx, 32);
	/* shl	bx,1		;index = (pos - 32) * 2 */
	SHL(bx, 1);
	/* mov	dx,0ffffh	;x sign = -1, y sign = -1 */
	dx = 0x0ffff;
	/* jmp	DrawAltBug */
	goto drawaltbug;
	// 0 ;* case 48 .. 63
	// 0 ;*    index = (64 - pos) * 2
	// 0 ;*    x sign = -1
	// 0 ;*    y sign = 0
	// 0 ;* end
bugquad4:
	// 4457 
	/* BugQuad4:	mov	bx,64 */
	bx = 64;
	/* sub	bx,ax */
	SUB(bx, ax);
	/* shl	bx,1		;index = (64 - pos) * 2 */
	SHL(bx, 1);
	/* mov	dx,000ffh	;x sign = -1, y sign = 0 */
	dx = 0x000ff;
drawaltbug:
	// 4459 
	/* DrawAltBug:	push	bx */
	PUSH(bx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,AltBugXY1[bx+0] */
	al = *((&altbugxy1)+bx+0);
	/* xor	al,dl		;sort x sign */
	XOR(al, dl);
	/* sub	al,dl */
	SUB(al, dl);
	/* cbw */
	CBW;
	/* add	ax,HUD_X_ORG+45	;add offset to clock x origin */
	ADD(ax, 160+45);
	/* mov	cx,ax */
	cx = ax;
	/* mov	al,AltBugXY1[bx+1] */
	al = *((&altbugxy1)+bx+1);
	/* xor	al,dh		;sort y sign */
	XOR(al, dh);
	/* sub	al,dh */
	SUB(al, dh);
	/* add	al,HUD_Y_ORG-31	;add offset to clock y origin */
	ADD(al, 48-31);
	/* mov	bl,al */
	bl = al;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	dx */
	POP(dx);
	/* pop	bx */
	POP(bx);
	/* mov	al,AltBugXY2[bx+0] */
	al = *((&altbugxy2)+bx+0);
	/* xor	al,dl		;sort x sign */
	XOR(al, dl);
	/* sub	al,dl */
	SUB(al, dl);
	/* cbw */
	CBW;
	/* add	ax,HUD_X_ORG+45	;add offset to clock x origin */
	ADD(ax, 160+45);
	/* mov	cx,ax */
	cx = ax;
	/* mov	al,AltBugXY2[bx+1] */
	al = *((&altbugxy2)+bx+1);
	/* xor	al,dh		;sort y sign */
	XOR(al, dh);
	/* sub	al,dh */
	SUB(al, dh);
	/* add	al,HUD_Y_ORG-31	;add offset to clock y origin */
	ADD(al, 48-31);
	/* mov	bl,al */
	bl = al;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* print 'T' if auto-terrain following
	/* test	TFAuto,1	;auto-terrain following? */
	TEST(tfauto, 1);
	/* jz	@F		;no -> */
	if (!(tfauto & 1)) {goto dummylabel15;}
	/* mov	PrtLn,HUD_Y_ORG-27 */
	prtln = 48-27;
	/* mov	PrtCl,HUD_X_ORG+44 */
	prtcl = 160+44;
	/* mov	al,'T' */
	al = 'T';
	/* call	PrintChar */
	CALLF(printchar, 0);
dummylabel15:
	// 4461 
	/* @@:		ret */
	RETN(0);
updatealt:
	// 3632 
	// 0 ;* if TrueRadAlt < 5000 then
	// 0 ;*    print radar altitude "Rdddd"
	// 0 ;* else
	// 0 ;*    print barometric altitude "dddd0" (lsd always zero)
	// 0 ;* end
edummylabel8:
	// 4463 
	/* mov	si,OFFSET RadAlt$	;assume disp rad alt */
	si = m2c::near_offset_external(radaltdol);
	/* cmp	TrueRadAlt,5000		;disp rad alt? */
	CMP(trueradalt, 5000);
	/* jb	@F			;yes -> */
	if ((dw)(trueradalt) < (dw)(5000)) {goto dummylabel16;}
	/* mov	si,OFFSET BarAlt$	;disp bar alt */
	si = m2c::near_offset_external(baraltdol);
dummylabel16:
	// 4465 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
updateacsymbol:
	// 3654 
	/* cmp	TornadoType,ADV_TORNADO	;ADV? */
	CMP(tornadotype, 2);
edummylabel9:
	// 4467 
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel17;}
	/* mov	bl,HUD_Y_ORG+-6 */
	bl = 48+-6;
	/* mov	bh,HUD_Y_ORG+-3 */
	bh = 48+-3;
	/* mov	cx,HUD_X_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;fin (ADV only)
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 3664 call	VLineDraw */
dummylabel17:
	// 4469 
	/* @@:	mov	cx,HUD_X_ORG+-1 */
	cx = 160+-1;
	/* mov	dx,HUD_X_ORG++1 */
	dx = 160+1;
	/* mov	bl,HUD_Y_ORG+-2 */
	bl = 48+-2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3670 call	HLineDraw
	/* mov	cx,HUD_X_ORG+-1 */
	cx = 160+-1;
	/* mov	dx,HUD_X_ORG++1 */
	dx = 160+1;
	/* mov	bl,HUD_Y_ORG++2 */
	bl = 48+2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3676 						call	HLineDraw
	/* mov	cx,HUD_X_ORG+-8 */
	cx = 160+-8;
	/* mov	dx,HUD_X_ORG+-3 */
	dx = 160+-3;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3682 						call	HLineDraw
	/* mov	cx,HUD_X_ORG++3 */
	cx = 160+3;
	/* mov	dx,HUD_X_ORG++8 */
	dx = 160+8;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3688 						call	HLineDraw
	/* mov	bl,HUD_Y_ORG+-1 */
	bl = 48+-1;
	/* mov	bh,HUD_Y_ORG++1 */
	bh = 48+1;
	/* mov	cx,HUD_X_ORG+-2 */
	cx = 160+-2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 3694 						call	VLineDraw
	/* mov	bl,HUD_Y_ORG+-1 */
	bl = 48+-1;
	/* mov	bh,HUD_Y_ORG++1 */
	bh = 48+1;
	/* mov	cx,HUD_X_ORG++2 */
	cx = 160+2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 3700 						call	VLineDraw
	/* ret */
	RETN(0);
updateairspeed:
	// 3711 
	/* test	MachOption,1	;display mach num? */
	TEST(machoption, 1);
edummylabel10:
	// 4471 
	/* jnz	@F		;yes -> */
	if (!ZF) {goto dummylabel18;}
	// 0 ;----------------------
	// 0 ;* display airspeed kts
	// 0 ;----------------------
	/* mov	si,OFFSET Vkts$ */
	si = m2c::near_offset_external(vktsdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp	AirSpeedExit */
	goto airspeedexit;
	// 0 ;------------------
	// 0 ;* display mach num
	// 0 ;------------------
dummylabel18:
	// 4473 
	/* @@:		mov	ax,DispMachNum */
	ax = dispmachnum;
	/* aam			;ah = integer, al = fraction */
	AAM;
	// 0 ;* print "d.d"
	/* mov	PrtLn,HUD_Y_ORG-33 */
	prtln = 48-33;
	/* mov	PrtCl,HUD_X_ORG-52 */
	prtcl = 160-52;
	/* add	al,'0' */
	ADD(al, '0');
	/* add	ah,'0' */
	ADD(ah, '0');
	/* push	ax */
	PUSH(ax);
	/* mov	al,ah */
	al = ah;
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* add	PrtCl,4 */
	ADD(prtcl, 4);
	/* pop	ax */
	POP(ax);
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* mov	cx,HUD_X_ORG+-47 */
	cx = 160+-47;
	/* mov	bl,HUD_Y_ORG+-29 */
	bl = 48+-29;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3744 						call	SetPixel
airspeedexit:
	// 4475 
	/* AirSpeedExit:	ret */
	RETN(0);
updatehdg:
	// 3755 
	// 0 ;* set sprite clipping window
edummylabel11:
	// 4477 
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* add	bl,BYTE PTR HdgYOff */
	ADD(bl, *(db*)(&hdgyoff));
	/* mov	bh,bl */
	bh = bl;
	/* sub	bl,6 */
	SUB(bl, 6);
	/* mov	cx,HUD_X_ORG-24 */
	cx = 160-24;
	/* mov	dx,HUD_X_ORG+23 */
	dx = 160+23;
	/* call	SetSSpriteClip */
	CALLF(setsspriteclip, 0);
	// 0 ;* draw heading datum marker
	/* mov	bl,HUD_Y_ORG+1 */
	bl = 48+1;
	/* add	bl,BYTE PTR HdgYOff */
	ADD(bl, *(db*)(&hdgyoff));
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,3 */
	ADD(bh, 3);
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* calc heading reading and offset:-
	// 0 ;*
	// 0 ;* reading = HFine * (720 / 65536) / 20 = 0 .. 35
	// 0 ;* offset  = remainder(HFine * (720 / 65536) / 20) = 0 .. 19 (2 pixels / degree)
	// 0 ;* KJB - 11.03.1992 - modified for improved accuracy
	/* mov	ax,HFine */
	ax = hfine;
	/* mov	dx,720 */
	dx = 720;
	/* mul	dx */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,720 */
	CMP(dx, 720);
	/* jb	@F */
	if ((dw)(dx) < (dw)(720)) {goto dummylabel19;}
	/* xor	dx,dx		;wrap around */
	XOR(dx, dx);
dummylabel19:
	// 4479 
	/* @@:		mov	ax,dx */
	ax = dx;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	bx,20 */
	bx = 20;
	/* div	bx		;(HFine / 64 * 23040 / 32768) / 20 */
	DIV2(bx);
	/* push	ax		;store reading */
	PUSH(ax);
	/* push	dx		;store offset */
	PUSH(dx);
	// 0 ;* draw heading dots (every 5 degs (10 pixels))
	/* mov	cx,HUD_X_ORG-20 */
	cx = 160-20;
	/* sub	cx,dx */
	SUB(cx, dx);
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* add	bl,BYTE PTR HdgYOff */
	ADD(bl, *(db*)(&hdgyoff));
	/* mov	dx,7		;draw 7 dots */
	dx = 7;
hdgdotloop:
	// 4481 
	/* HdgDotLoop:	cmp	cx,HUD_X_ORG-24	;clip left? */
	CMP(cx, 160-24);
	/* jb	@F		;yes -> */
	if ((dw)(cx) < (dw)(160-24)) {goto dummylabel20;}
	/* cmp	cx,HUD_X_ORG+23	;clip right? */
	CMP(cx, 160+23);
	/* ja	HdgDigits	;yes -> */
	if ((dw)(cx) > (dw)(160+23)) {goto hdgdigits;}
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
dummylabel20:
	// 4483 
	/* @@:		add	cx,10 */
	ADD(cx, 10);
	/* dec	dx */
	DEC(dx);
	/* jnz	HdgDotLoop */
	if (dx != 0) {goto hdgdotloop;}
	// 0 ;* draw heading digits (every 10 degs (20 pixels))
hdgdigits:
	// 4485 
	/* HdgDigits:	sub	bx,4 */
	SUB(bx, 4);
	/* mov	SpriteY,bx */
	spritey = bx;
	/* pop	dx		;restore offset */
	POP(dx);
	/* pop	bp		;restore reading */
	POP(bp);
	/* neg	dx */
	NEG(dx);
	/* add	dx,HUD_X_ORG-20-1 */
	ADD(dx, 160-20-1);
	/* mov	SpriteX,dx */
	spritex = dx;
	/* mov	bx,dx */
	bx = dx;
	/* and	bx,00001h */
	AND(bx, 0x00001);
	/* shl	bx,1		;0 or 2 wrt even or odd x offset */
	SHL(bx, 1);
	/* sub	bp,1		;start one value to left of reading */
	SUB(bp, 1);
	/* jnc	@F		;no wrap around -> */
	if (!CF) {goto dummylabel21;}
	/* add	bp,36		;wrap */
	ADD(bp, 36);
dummylabel21:
	// 4487 
	/* @@:		mov	cx,4		;display 4 values */
	cx = 4;
hdgdigitloop:
	// 4489 
	/* HdgDigitLoop:	push	cx */
	PUSH(cx);
	/* push	bp */
	PUSH(bp);
	/* mov	ax,bp */
	ax = bp;
	/* test	ax,ax		;hdg "00"? */
	TEST(ax, ax);
	/* jnz	@F */
	if ((ax & ax) != 0) {goto dummylabel22;}
	/* mov	ax,36		;display as "36" */
	ax = 36;
dummylabel22:
	// 4491 
	/* @@:		aam			;ah = msd, al = lsd */
	AAM;
	// 0 ;* print msd
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	// 0 ;* sprite offset = digit * 4 + (0 or 2 wrt even or odd) + OFFSET HUDDigits
	/* shl	ah,1		;*2 */
	SHL(ah, 1);
	/* shl	ah,1		;*4 */
	SHL(ah, 1);
	/* add	bl,ah */
	ADD(bl, ah);
	/* add	bx,OFFSET HUDDigits */
	ADD(bx, m2c::near_offset_external(huddigits));
	/* mov	SpritePtr,bx */
	spriteptr = bx;
	/* mov	si,OFFSET Sprite */
	si = m2c::near_offset_external(sprite);
	/* call	SSprite */
	CALLF(ssprite, 0);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;* print lsd
	/* add	SpriteX,4 */
	ADD(spritex, 4);
	/* push	bx */
	PUSH(bx);
	// 0 ;* sprite offset = digit * 4 + (0 or 2 wrt even or odd) + OFFSET HUDDigits
	/* shl	al,1		;*2 */
	SHL(al, 1);
	/* shl	al,1		;*4 */
	SHL(al, 1);
	/* add	bl,al */
	ADD(bl, al);
	/* add	bx,OFFSET HUDDigits */
	ADD(bx, m2c::near_offset_external(huddigits));
	/* mov	SpritePtr,bx */
	spriteptr = bx;
	/* mov	si,OFFSET Sprite */
	si = m2c::near_offset_external(sprite);
	/* call	SSprite */
	CALLF(ssprite, 0);
	/* pop	bx */
	POP(bx);
	/* pop	bp */
	POP(bp);
	/* pop	cx */
	POP(cx);
	/* add	SpriteX,20-4 */
	ADD(spritex, 20-4);
	/* inc	bp */
	INC(bp);
	/* cmp	bp,35		;wrap around? */
	CMP(bp, 35);
	/* jbe	@F		;no -> */
	if ((dw)(bp) <= (dw)(35)) {goto dummylabel23;}
	/* mov	bp,0 */
	bp = 0;
dummylabel23:
	// 4493 
	/* @@:		loop	HdgDigitLoop */
	LOOP(hdgdigitloop);
	/* call	SetHUDClip */
	CALL(sethudclip, 0);
	// 0 ;* draw bearing indicator (to next waypoint)
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel24;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	SkipBrg			;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto skipbrg;}
dummylabel24:
	// 4495 
	/* @@:		mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* mov	bp,dx		;store sign */
	bp = dx;
	/* cmp	ax,14		;limit to 10 degs */
	CMP(ax, 14);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(14)) {goto dummylabel25;}
	/* mov	ax,14 */
	ax = 14;
	// 0 ;* convert 0 .. 14 pdegs to 0 .. 20 pixels (*20/14 = *1.4286)
dummylabel25:
	// 4497 
	/* @@:		mov	dx,46811	;1.4286*32768 */
	dx = 46811;
	/* mul	dx */
	MUL1_2(dx);
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
	/* xor	cx,bp		;restore sign */
	XOR(cx, bp);
	/* sub	cx,bp */
	SUB(cx, bp);
	/* add	cx,HUD_X_ORG */
	ADD(cx, 160);
	/* mov	bl,HUD_Y_ORG+2 */
	bl = 48+2;
	/* add	bl,BYTE PTR HdgYOff */
	ADD(bl, *(db*)(&hdgyoff));
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* dec	cx */
	DEC(cx);
	/* inc	bl */
	INC(bl);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* inc	cx */
	INC(cx);
	/* inc	bl */
	INC(bl);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* sub	cx,4 */
	SUB(cx, 4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skipbrg:
	// 4499 
	/* SkipBrg:	ret */
	RETN(0);
updatepitch:
	// 3971 
	// 0 ;---------------------
	// 0 ;* calc rotated points
	// 0 ;---------------------
	// 0 ;* Px0 = M_CosR * 0 + M_SinR * -21
	// 0 ;* Py0 = M_CosR * -21 - M_SinR * 0
edummylabel12:
	// 4501 
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,-21*256	;*256 scaling for accuracy */
	dx = -21*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(0), dx = sign(0)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px0,ax */
	px0 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,-21*256	;*256 scaling for accuracy */
	dx = -21*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py0,dx */
	py0 = dx;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4024 						mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4025 mov	ax,M_CosR */
	// 0 ;* Px1 = M_CosR * 8 + M_SinR * 0
	// 0 ;* Py1 = M_CosR * 0 - M_SinR * 8
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,8*256	;*256 scaling for accuracy */
	dx = 8*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(8), dx = sign(8)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px1,ax */
	px1 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,8*256	;*256 scaling for accuracy */
	dx = 8*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py1,dx */
	py1 = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4074 mov	ax,M_SinR */
	// 0 ;* Px2 = M_CosR * 8 + M_SinR * 4
	// 0 ;* Py2 = M_CosR * 4 - M_SinR * 8
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4077 												mov	ax,M_CosR */
	/* mov	dx,8*256	;*256 scaling for accuracy */
	dx = 8*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,4*256	;*256 scaling for accuracy */
	dx = 4*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(8), dx = sign(8)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px2,ax */
	px2 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,8*256	;*256 scaling for accuracy */
	dx = 8*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,4*256	;*256 scaling for accuracy */
	dx = 4*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py2,dx */
	py2 = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4122 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4123 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4124 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4125 mov	ax,M_CosR */
	// 0 ;* Px3 = M_CosR * 10 + M_SinR * 0
	// 0 ;* Py3 = M_CosR * 0 - M_SinR * 10
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,10*256	;*256 scaling for accuracy */
	dx = 10*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(10), dx = sign(10)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px3,ax */
	px3 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,10*256	;*256 scaling for accuracy */
	dx = 10*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py3,dx */
	py3 = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4174 mov	ax,M_SinR */
	// 0 ;* Px4 = M_CosR * 13 + M_SinR * 0
	// 0 ;* Py4 = M_CosR * 0 - M_SinR * 13
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4177 												mov	ax,M_CosR */
	/* mov	dx,13*256	;*256 scaling for accuracy */
	dx = 13*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(13), dx = sign(13)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px4,ax */
	px4 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,13*256	;*256 scaling for accuracy */
	dx = 13*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py4,dx */
	py4 = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4222 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4223 mov	ax,M_SinR */
	// 0 ;* Px5 = M_CosR * 15 + M_SinR * 0
	// 0 ;* Py5 = M_CosR * 0 - M_SinR * 15
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,15*256	;*256 scaling for accuracy */
	dx = 15*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(15), dx = sign(15)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px5,ax */
	px5 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,15*256	;*256 scaling for accuracy */
	dx = 15*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py5,dx */
	py5 = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4272 mov	ax,M_SinR */
	// 0 ;* Px6 = M_CosR * 18 + M_SinR * 0
	// 0 ;* Py6 = M_CosR * 0 - M_SinR * 18
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4275 												mov	ax,M_CosR */
	/* mov	dx,18*256	;*256 scaling for accuracy */
	dx = 18*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(18), dx = sign(18)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px6,ax */
	px6 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,18*256	;*256 scaling for accuracy */
	dx = 18*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py6,dx */
	py6 = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4320 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4321 mov	ax,M_SinR */
	// 0 ;* Px7 = M_CosR * 20 + M_SinR * 0
	// 0 ;* Py7 = M_CosR * 0 - M_SinR * 20
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,20*256	;*256 scaling for accuracy */
	dx = 20*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(20), dx = sign(20)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px7,ax */
	px7 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,20*256	;*256 scaling for accuracy */
	dx = 20*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py7,dx */
	py7 = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4370 mov	ax,M_SinR */
	// 0 ;* Px8 = M_CosR * 23 + M_SinR * 0
	// 0 ;* Py8 = M_CosR * 0 - M_SinR * 23
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4373 												mov	ax,M_CosR */
	/* mov	dx,23*256	;*256 scaling for accuracy */
	dx = 23*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(23), dx = sign(23)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px8,ax */
	px8 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,23*256	;*256 scaling for accuracy */
	dx = 23*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py8,dx */
	py8 = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4418 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4419 mov	ax,M_SinR */
	// 0 ;* Px9 = M_CosR * 25 + M_SinR * 0
	// 0 ;* Py9 = M_CosR * 0 - M_SinR * 25
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,25*256	;*256 scaling for accuracy */
	dx = 25*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(25), dx = sign(25)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px9,ax */
	px9 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,25*256	;*256 scaling for accuracy */
	dx = 25*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py9,dx */
	py9 = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4468 mov	ax,M_SinR */
	// 0 ;* Px10 = M_CosR * 28 + M_SinR * 0
	// 0 ;* Py10 = M_CosR * 0 - M_SinR * 28
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4471 												mov	ax,M_CosR */
	/* mov	dx,28*256	;*256 scaling for accuracy */
	dx = 28*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(28), dx = sign(28)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px10,ax */
	px10 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,28*256	;*256 scaling for accuracy */
	dx = 28*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,0*256	;*256 scaling for accuracy */
	dx = 0*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py10,dx */
	py10 = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4516 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4517 mov	ax,M_SinR */
	// 0 ;* Px11 = M_CosR * 21 + M_SinR * -4
	// 0 ;* Py11 = M_CosR * -4 - M_SinR * 21
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,21*256	;*256 scaling for accuracy */
	dx = 21*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,-4*256	;*256 scaling for accuracy */
	dx = -4*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(21), dx = sign(21)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px11,ax */
	px11 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,21*256	;*256 scaling for accuracy */
	dx = 21*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,-4*256	;*256 scaling for accuracy */
	dx = -4*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py11,dx */
	py11 = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4566 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4567 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4568 mov	ax,M_CosR */
	// 0 ;* Px12 = M_CosR * 21 + M_SinR * 4
	// 0 ;* Py12 = M_CosR * 4 - M_SinR * 21
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4571 												mov	ax,M_CosR */
	/* mov	dx,21*256	;*256 scaling for accuracy */
	dx = 21*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,4*256	;*256 scaling for accuracy */
	dx = 4*256;
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
	/* add	ax,bp */
	ADD(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(21), dx = sign(21)
	/* mov	cx,ax */
	cx = ax;
	/* shr	cx,1		;*0.5 */
	SHR(cx, 1);
	/* shr	cx,1		;*0.25 */
	SHR(cx, 1);
	/* adc	ax,cx		;*1.25 (aspect ratio) */
	ADC(ax, cx);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Px12,ax */
	px12 = ax;
	/* mov	ax,M_SinR */
	ax = m_sinr;
	/* mov	dx,21*256	;*256 scaling for accuracy */
	dx = 21*256;
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,4*256	;*256 scaling for accuracy */
	dx = 4*256;
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
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mov	Py12,dx */
	py12 = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4616 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4617 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4618 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4619 mov	ax,M_CosR */
	// 0 ;-------------------------------
	// 0 ;* calc pitch bar origin co-ords
	// 0 ;-------------------------------
	/* mov	ax,PFine */
	ax = pfine;
	/* mov	dx,23040/10 */
	dx = 23040/10;
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
	// 0 ;ax = dx = -9 .. 0 .. +9  [*128]
	/* mov	bp,ax		;store pitch value */
	bp = ax;
	/* and	dx,0007fh	;ax = remainder 0 .. 127 */
	AND(dx, 0x0007f);
	/* xchg	dl,dh		;*256 gives binary fraction 0 .. 1 */
	XCHG(dl, dh);
	/* neg	dx		;frac = -frac */
	NEG(dx);
	// 0 ;* calc start x offset = Px0 * frac + Px0 * 2
	/* mov	bx,dx */
	bx = dx;
	/* mov	ax,Px0 */
	ax = px0;
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
	// 0 ;Px0 * frac
	/* mov	ax,Px0 */
	ax = px0;
	/* shl	ax,1		;Px0 * 2 */
	SHL(ax, 1);
	/* add	ax,dx	   	;Px0 * frac + Px0 * 2 */
	ADD(ax, dx);
	/* mov	BarXOff,ax */
	barxoff = ax;
	// 0 ;* calc start y offset = Py0 * frac + Py0 * 2
	/* mov	ax,Py0 */
	ax = py0;
	/* imul	bx */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;Py0 * frac
	/* mov	ax,Py0 */
	ax = py0;
	/* shl	ax,1		;Py0 * 2 */
	SHL(ax, 1);
	/* add	ax,dx		;Py0 * frac + Py0 * 2 */
	ADD(ax, dx);
	/* mov	BarYOff,ax */
	baryoff = ax;
	// 0 ;-----------------
	// 0 ;* draw pitch bars
	// 0 ;-----------------
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* sar	bp,1 */
	SAR(bp, 1);
	/* mov	dx,-1		;count direction */
	dx = -1;
	/* add	bp,2		;calc value of start bar */
	ADD(bp, 2);
	/* call	LimitPitch */
	CALL(limitpitch, 0);
	/* mov	cx,4		;draw 4 bars */
	cx = 4;
barloop:
	// 4503 
	/* BarLoop: 	push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	bp */
	PUSH(bp);
	/* test	bp,bp		;draw zero bar? */
	TEST(bp, bp);
	/* jz	Bar0		;yes -> */
	if (!(bp & bp)) {goto bar0;}
	/* cmp	bp,+9		;draw +90 bar? */
	CMP(bp, 9);
	/* je	Bar90		;yes -> */
	if ((dw)(bp) == (dw)(9)) {goto bar90;}
	/* cmp	bp,-9		;draw -90 bar? */
	CMP(bp, -9);
	/* je	Bar_90		;yes -> */
	if ((dw)(bp) == (dw)(-9)) {goto bar_90;}
	/* call	DrawPitchBar */
	CALL(drawpitchbar, 0);
	/* jmp	NextBar */
	goto nextbar;
bar0:
	// 4505 
	/* Bar0:		call	DrawZeroBar */
	CALL(drawzerobar, 0);
	/* jmp	NextBar */
	goto nextbar;
bar90:
	// 4507 
	/* Bar90:		call	DrawSolidBar */
	CALL(drawsolidbar, 0);
	/* jmp	NextBar */
	goto nextbar;
bar_90:
	// 4509 
	/* Bar_90:		call	DrawBrokenBar */
	CALL(drawbrokenbar, 0);
nextbar:
	// 4511 
	/* NextBar: 	pop	bp */
	POP(bp);
	/* pop	dx */
	POP(dx);
	/* add	bp,dx */
	ADD(bp, dx);
	/* call	LimitPitch */
	CALL(limitpitch, 0);
	/* mov	ax,Px0 */
	ax = px0;
	/* sub	BarXOff,ax */
	SUB(barxoff, ax);
	/* mov	ax,Py0 */
	ax = py0;
	/* sub	BarYOff,ax */
	SUB(baryoff, ax);
	/* pop	cx */
	POP(cx);
	/* loop	BarLoop */
	LOOP(barloop);
	/* ret */
	RETN(0);
limitpitch:
	// 4718 
	/* cmp	bp,9		;pitch <= 90 degs? */
	CMP(bp, 9);
edummylabel13:
	// 4513 
	/* jle	@F		;yes -> */
	if ((ZF || SF != OF)) {goto dummylabel26;}
	/* sub	bp,18		;flip pitch 180 degs */
	SUB(bp, 18);
	/* jmp	SortFlip */
	goto sortflip;
dummylabel26:
	// 4515 
	/* @@:		cmp	bp,-9		;pitch >= =90 degs? */
	CMP(bp, -9);
	/* jge	@F		;yes -> */
	if ((short)(bp) >= (short)(-9)) {goto dummylabel27;}
	/* add	bp,18		;flip pitch 180 degs */
	ADD(bp, 18);
sortflip:
	// 4517 
	/* SortFlip:	neg	bp		;invert sign */
	NEG(bp);
	/* neg	dx		;invert count direction */
	NEG(dx);
	// 0 ;* flip points
	/* neg	Px1 */
	NEG(px1);
	/* neg	Py1 */
	NEG(py1);
	/* neg	Px2 */
	NEG(px2);
	/* neg	Py2 */
	NEG(py2);
	/* neg	Px3 */
	NEG(px3);
	/* neg	Py3 */
	NEG(py3);
	/* neg	Px4 */
	NEG(px4);
	/* neg	Py4 */
	NEG(py4);
	/* neg	Px5 */
	NEG(px5);
	/* neg	Py5 */
	NEG(py5);
	/* neg	Px6 */
	NEG(px6);
	/* neg	Py6 */
	NEG(py6);
	/* neg	Px7 */
	NEG(px7);
	/* neg	Py7 */
	NEG(py7);
	/* neg	Px8 */
	NEG(px8);
	/* neg	Py8 */
	NEG(py8);
	/* neg	Px9 */
	NEG(px9);
	/* neg	Py9 */
	NEG(py9);
	/* neg	Px10 */
	NEG(px10);
	/* neg	Py10 */
	NEG(py10);
	/* neg	Px11 */
	NEG(px11);
	/* neg	Py11 */
	NEG(py11);
	/* neg	Px12 */
	NEG(px12);
	/* neg	Py12 */
	NEG(py12);
dummylabel27:
	// 4519 
	/* @@:		ret */
	RETN(0);
drawpitchbar:
	// 4764 
	/* push	bp		;store pitch value */
	PUSH(bp);
edummylabel14:
	// 4521 
	/* test	bp,bp		;+ve pitch? */
	TEST(bp, bp);
	/* jns	PosPitch	;no -> */
	if ((short)((bp & bp)) >= 0) {goto pospitch;}
	/* jmp	NegPitch */
	goto negpitch;
	// 0 ;-----------------
	// 0 ;* +ve pitch value
	// 0 ;-----------------
pospitch:
	// 4523 
	/* PosPitch:	call	DrawSolidBar */
	CALL(drawsolidbar, 0);
	/* call	DrawDownStroke */
	CALL(drawdownstroke, 0);
	// 0 ;* set +ve digit origin
	/* mov	ax,Px11 */
	ax = px11;
	/* add	ax,BarXOff */
	ADD(ax, barxoff);
	/* sub	ax,256		;align digits */
	SUB(ax, 256);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* cbw */
	CBW;
	/* add	ax,HUD_X_ORG */
	ADD(ax, 160);
	/* mov	SpriteX,ax */
	spritex = ax;
	/* mov	ax,Py11 */
	ax = py11;
	/* add	ax,BarYOff */
	ADD(ax, baryoff);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* cbw */
	CBW;
	/* add	ax,HUD_Y_ORG */
	ADD(ax, 48);
	/* mov	SpriteY,ax */
	spritey = ax;
	/* pop	bp */
	POP(bp);
	/* jmp	PrintPitch */
	goto printpitch;
	// 0 ;-----------------
	// 0 ;* -ve pitch value
	// 0 ;-----------------
negpitch:
	// 4525 
	/* NegPitch:	call	DrawBrokenBar */
	CALL(drawbrokenbar, 0);
	/* call	DrawDownStroke */
	CALL(drawdownstroke, 0);
	// 0 ;* set -ve digit origin
	/* mov	ax,Px12 */
	ax = px12;
	/* add	ax,BarXOff */
	ADD(ax, barxoff);
	/* sub	ax,256		;align digits */
	SUB(ax, 256);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* cbw */
	CBW;
	/* add	ax,HUD_X_ORG */
	ADD(ax, 160);
	/* mov	cx,ax */
	cx = ax;
	/* mov	SpriteX,ax */
	spritex = ax;
	/* mov	ax,Py12 */
	ax = py12;
	/* add	ax,BarYOff */
	ADD(ax, baryoff);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* cbw */
	CBW;
	/* add	ax,HUD_Y_ORG */
	ADD(ax, 48);
	/* mov	bl,al */
	bl = al;
	/* mov	SpriteY,ax */
	spritey = ax;
	// 0 ;* draw minus sign
	/* mov	bh,bl */
	bh = bl;
	/* mov	dx,cx */
	dx = cx;
	/* sub	cx,6 */
	SUB(cx, 6);
	/* sub	dx,4 */
	SUB(dx, 4);
	/* call	ClipLine */
	CALL(clipline, 0);
	/* pop	bp */
	POP(bp);
	/* neg	bp */
	NEG(bp);
	// 0 ;* print pitch value
	// 0 ;*
	// 0 ;* msd sprite offset = digit * 4 + (0 or 2 wrt even or odd) + OFFSET HUDDigits
	// 0 ;* '0' sprite offset = (0 or 2 wrt even or odd) + OFFSET HUDDigits
printpitch:
	// 4527 
	/* PrintPitch:	mov	ax,SpriteX */
	ax = spritex;
	/* and	ax,00001h	;0 or 1 (even or odd) */
	AND(ax, 0x00001);
	/* shl	ax,1		;0 or 2 */
	SHL(ax, 1);
	/* add	ax,OFFSET HUDDigits */
	ADD(ax, m2c::near_offset_external(huddigits));
	/* push	ax		;store sprite offset for '0' */
	PUSH(ax);
	/* shl	bp,1		;*2 */
	SHL(bp, 1);
	/* shl	bp,1		;*4 */
	SHL(bp, 1);
	/* add	ax,bp */
	ADD(ax, bp);
	/* mov	SpritePtr,ax */
	spriteptr = ax;
	/* mov	si,OFFSET Sprite */
	si = m2c::near_offset_external(sprite);
	/* call	SSprite */
	CALLF(ssprite, 0);
	// 0 ;* print '0'
	/* pop	ax		;restore sprite offset for '0' */
	POP(ax);
	/* mov	SpritePtr,ax */
	spriteptr = ax;
	/* add	SpriteX,4 */
	ADD(spritex, 4);
	/* mov	si,OFFSET Sprite */
	si = m2c::near_offset_external(sprite);
	/* call	SSprite */
	CALLF(ssprite, 0);
	/* ret */
	RETN(0);
drawzerobar:
	// 4865 
	// 0 ;* draw rhs line
edummylabel15:
	// 4529 
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px10 */
	si = px10;
	/* mov	di,Py10 */
	di = py10;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw lhs line
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px10 */
	si = px10;
	/* mov	di,Py10 */
	di = py10;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	/* ret */
	RETN(0);
drawsolidbar:
	// 4893 
	// 0 ;* draw rhs line
edummylabel16:
	// 4531 
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px9 */
	si = px9;
	/* mov	di,Py9 */
	di = py9;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw lhs line
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px9 */
	si = px9;
	/* mov	di,Py9 */
	di = py9;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	/* ret */
	RETN(0);
drawbrokenbar:
	// 4921 
	// 0 ;* draw rhs line
edummylabel17:
	// 4533 
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px3 */
	si = px3;
	/* mov	di,Py3 */
	di = py3;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw lhs line
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px3 */
	si = px3;
	/* mov	di,Py3 */
	di = py3;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw rhs line
	/* mov	cx,Px4 */
	cx = px4;
	/* mov	bx,Py4 */
	bx = py4;
	/* mov	si,Px5 */
	si = px5;
	/* mov	di,Py5 */
	di = py5;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw lhs line
	/* mov	cx,Px4 */
	cx = px4;
	/* mov	bx,Py4 */
	bx = py4;
	/* mov	si,Px5 */
	si = px5;
	/* mov	di,Py5 */
	di = py5;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw rhs line
	/* mov	cx,Px6 */
	cx = px6;
	/* mov	bx,Py6 */
	bx = py6;
	/* mov	si,Px7 */
	si = px7;
	/* mov	di,Py7 */
	di = py7;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw lhs line
	/* mov	cx,Px6 */
	cx = px6;
	/* mov	bx,Py6 */
	bx = py6;
	/* mov	si,Px7 */
	si = px7;
	/* mov	di,Py7 */
	di = py7;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw rhs line
	/* mov	cx,Px8 */
	cx = px8;
	/* mov	bx,Py8 */
	bx = py8;
	/* mov	si,Px9 */
	si = px9;
	/* mov	di,Py9 */
	di = py9;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	// 0 ;* draw lhs line
	/* mov	cx,Px8 */
	cx = px8;
	/* mov	bx,Py8 */
	bx = py8;
	/* mov	si,Px9 */
	si = px9;
	/* mov	di,Py9 */
	di = py9;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	/* ret */
	RETN(0);
drawdownstroke:
	// 4997 
	/* mov	cx,Px1 ;* kill: assume all */
	cx = px1;
edummylabel18:
	// 4535 
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px2 */
	si = px2;
	/* mov	di,Py2 */
	di = py2;
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	/* mov	cx,Px1 */
	cx = px1;
	/* mov	bx,Py1 */
	bx = py1;
	/* mov	si,Px2 */
	si = px2;
	/* mov	di,Py2 */
	di = py2;
	/* sub	si,cx */
	SUB(si, cx);
	/* sub	di,bx */
	SUB(di, bx);
	/* neg	cx */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* add	si,cx */
	ADD(si, cx);
	/* add	di,bx */
	ADD(di, bx);
	/* call	ClipScaledLine */
	CALL(_group1, m2c::kclipscaledline);
	/* ret */
	RETN(0);
sethudclip:
	// 5024 
	/* mov	bl,BYTE PTR CLIP_ABOVE ;* kill: assume all */
	bl = *(db*)(&clip_above);
edummylabel19:
	// 4537 
	/* mov	bh,BYTE PTR CLIP_BELOW */
	bh = *(db*)(&clip_below);
	/* mov	cx,CLIP_LEFT */
	cx = 104;
	/* mov	dx,CLIP_RIGHT */
	dx = 215;
	/* call	SetSSpriteClip */
	CALLF(setsspriteclip, 0);
	/* ret */
	RETN(0);
pancode_0_proc:
	// 5043 
clipscaledline:
	// 4539 
	// 0 ;* kill: assume all
	// 0 ;* sort y1
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,BarYOff */
	ADD(ax, baryoff);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* xor	al,dl		;restore sign */
	XOR(al, dl);
	/* sub	al,dl */
	SUB(al, dl);
	/* add	al,HUD_Y_ORG */
	ADD(al, 48);
	/* mov	bl,al */
	bl = al;
	// 0 ;* sort x1
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,BarXOff */
	ADD(ax, barxoff);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	ax,HUD_X_ORG */
	ADD(ax, 160);
	/* mov	cx,ax */
	cx = ax;
	// 0 ;* sort y2
	/* mov	ax,di */
	ax = di;
	/* add	ax,BarYOff */
	ADD(ax, baryoff);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* xor	al,dl		;restore sign */
	XOR(al, dl);
	/* sub	al,dl */
	SUB(al, dl);
	/* add	al,HUD_Y_ORG */
	ADD(al, 48);
	/* mov	bh,al */
	bh = al;
	// 0 ;* sort x2
	/* mov	ax,si */
	ax = si;
	/* add	ax,BarXOff */
	ADD(ax, barxoff);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	ax,HUD_X_ORG */
	ADD(ax, 160);
	/* mov	dx,ax */
	dx = ax;
	// 0 ;* ClipLine - clip line wrt HUD window, draw if totally visible
	// 0 ;*
	// 0 ;* pass: cx = x1
	// 0 ;*       bl = y1
	// 0 ;*       dx = x2
	// 0 ;*       bh = y2
	// 0 ;* ret : nothing
	// 0 ;* kill: assume all
clipline:
	// 5111 
	/* mov	al,BYTE PTR CLIP_ABOVE */
	al = *(db*)(&clip_above);
	/* cmp	bl,al		;y1 ok? */
	CMP(bl, al);
	/* jb	@F		;no -> */
	if ((db)(bl) < (db)(al)) {goto dummylabel28;}
	/* cmp	bh,al		;y2 ok? */
	CMP(bh, al);
	/* jb	@F		;no -> */
	if ((db)(bh) < (db)(al)) {goto dummylabel28;}
	/* mov	al,BYTE PTR CLIP_BELOW */
	al = *(db*)(&clip_below);
	/* cmp	bl,al		;y1 ok? */
	CMP(bl, al);
	/* ja	@F		;no -> */
	if ((db)(bl) > (db)(al)) {goto dummylabel28;}
	/* cmp	bh,al		;y2 ok? */
	CMP(bh, al);
	/* ja	@F		;no -> */
	if ((db)(bh) > (db)(al)) {goto dummylabel28;}
	/* cmp	cx,CLIP_LEFT	;x1 ok? */
	CMP(cx, 104);
	/* jb	@F		;no -> */
	if ((dw)(cx) < (dw)(104)) {goto dummylabel28;}
	/* cmp	dx,CLIP_LEFT	;x2 ok? */
	CMP(dx, 104);
	/* jb	@F		;no -> */
	if ((dw)(dx) < (dw)(104)) {goto dummylabel28;}
	/* cmp	cx,CLIP_RIGHT	;x1 ok? */
	CMP(cx, 215);
	/* ja	@F		;no -> */
	if ((dw)(cx) > (dw)(215)) {goto dummylabel28;}
	/* cmp	dx,CLIP_RIGHT	;x2 ok? */
	CMP(dx, 215);
	/* ja	@F		;no -> */
	if ((dw)(dx) > (dw)(215)) {goto dummylabel28;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel28:
	// 4541 
	/* @@:		ret */
	RETN(0);
updateearlylate:
	// 5147 
	/* cmp	WPTimeEarlyLate,-32768	;invalid? */
	CMP(wptimeearlylate, -32768);
edummylabel20:
	// 4543 
	/* je	ExitEarlyLate		;yes -> */
	if (ZF) {goto exitearlylate;}
	/* mov	cx,HUD_X_ORG+-59 */
	cx = 160+-59;
	/* mov	bl,HUD_Y_ORG+-27 */
	bl = 48+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;30 secs late
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5156 call	SetPixel */
	/* mov	cx,HUD_X_ORG+-47 */
	cx = 160+-47;
	/* mov	bl,HUD_Y_ORG+-27 */
	bl = 48+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;on time
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5162 call	SetPixel */
	/* mov	cx,HUD_X_ORG+-35 */
	cx = 160+-35;
	/* mov	bl,HUD_Y_ORG+-27 */
	bl = 48+-27;
	/* mov	al,COL_HUD */
	al = 133;
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5166 						call	SetPixel */
	// 0 ;30 secs early
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* 2.56 secs / pixel gives approx +/-30 sec range
	/* mov	ax,WPTimeEarlyLate */
	ax = wptimeearlylate;
	/* cmp	ax,-12*256 */
	CMP(ax, -12*256);
	/* jge	__m2c_macrolocal_139_TestHi */
	if ((short)(ax) >= (short)(-12*256)) {goto __m2c_macrolocal_139_testhi;}
	/* mov	ax,-12*256 */
	ax = -12*256;
	/* jmp	__m2c_macrolocal_139_TestOk */
	goto __m2c_macrolocal_139_testok;
__m2c_macrolocal_139_testhi:
	// 4545 
	/* __m2c_macrolocal_139_TestHi:		cmp	ax,12*256 */
	CMP(ax, 12*256);
	/* jle	__m2c_macrolocal_139_TestOk */
	if ((short)(ax) <= (short)(12*256)) {goto __m2c_macrolocal_139_testok;}
	/* mov	ax,12*256 */
	ax = 12*256;
__m2c_macrolocal_139_testok:
	// 4547 
	/* mov	al,ah */
	al = ah;
	/* cbw */
	CBW;
	/* add	ax,HUD_X_ORG-47 */
	ADD(ax, 160-47);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,HUD_Y_ORG-26 */
	bl = 48-26;
	/* mov	bh,HUD_Y_ORG-24 */
	bh = 48-24;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
exitearlylate:
	// 4549 
	/* ExitEarlyLate:	ret */
	RETN(0);
updateils:
	// 5201 
	// 0 ;------------------------
	// 0 ;* draw HUD centre marker
	// 0 ;------------------------
	// 0 ;* draw down stroke
edummylabel21:
	// 4551 
	/* mov	bl,HUD_Y_ORG+-3 */
	bl = 48+-3;
	/* mov	bh,HUD_Y_ORG+-1 */
	bh = 48+-1;
	/* mov	cx,HUD_X_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 5214 						call	VLineDraw
	/* mov	bl,HUD_Y_ORG+1 */
	bl = 48+1;
	/* mov	bh,HUD_Y_ORG+3 */
	bh = 48+3;
	/* mov	cx,HUD_X_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 5220 						call	VLineDraw
	// 0 ;* draw cross stroke
	/* mov	cx,HUD_X_ORG+-3 */
	cx = 160+-3;
	/* mov	dx,HUD_X_ORG+-1 */
	dx = 160+-1;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 5229 						call	HLineDraw
	/* mov	cx,HUD_X_ORG+1 */
	cx = 160+1;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 5235 						call	HLineDraw
	// 0 ;------------------------------------------
	// 0 ;* draw ILS (localizer / glideslope) marker
	// 0 ;------------------------------------------
	// 0 ;* project marker into 64 * 48 (square aspect) rectangle centred on HUD centre
	/* mov	ax,ILSLocalPos */
	ax = ilslocalpos;
	/* mov	dx,-64/2 */
	dx = -64/2;
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
	/* mov	cx,dx */
	cx = dx;
	/* add	cx,HUD_X_ORG */
	ADD(cx, 160);
	/* mov	ax,ILSGlidePos */
	ax = ilsglidepos;
	/* mov	dx,48/2 */
	dx = 48/2;
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
	/* mov	bx,dx */
	bx = dx;
	/* add	bx,HUD_Y_ORG */
	ADD(bx, 48);
	// 0 ;* draw down stroke
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	bh,bl */
	bh = bl;
	/* sub	bl,5 */
	SUB(bl, 5);
	/* sub	bh,2 */
	SUB(bh, 2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,2 */
	ADD(bl, 2);
	/* add	bh,5 */
	ADD(bh, 5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw cross stroke
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	dx,cx */
	dx = cx;
	/* sub	cx,6 */
	SUB(cx, 6);
	/* sub	dx,2 */
	SUB(dx, 2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,2 */
	ADD(cx, 2);
	/* add	dx,6 */
	ADD(dx, 6);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* ret */
	RETN(0);
drawgndtgtmrkr:
	// 5309 
	/* mov	MarkerX,-1	;assume non-visible */
	markerx = -1;
edummylabel22:
	// 4553 
	/* mov	MarkerY,-1 */
	*(markery) = -1;
	// 0 ;----------------------------------
	// 0 ;* project target position onto HUD
	// 0 ;----------------------------------
	/* mov	si,OFFSET TGT_VIEW */
	si = m2c::near_offset_external(tgt_view);
	/* call	ProjectHUDPoint */
	CALL(projecthudpoint, 0);
	/* jnc	__m2c_macrolocal_146_skip */
	if (!CF) {goto __m2c_macrolocal_146_skip;}
	/* jmp	FailGndTgtMrkr */
	goto failgndtgtmrkr;
__m2c_macrolocal_146_skip:
	// 4555 
	// 0 ;non-visible ->
	// 0 ;--------------------
	// 0 ;* clip target marker (crude clip on marker centre)
	// 0 ;--------------------
	/* cmp	cx,HUD_X_ORG-44 */
	CMP(cx, 160-44);
	/* jae	__m2c_macrolocal_147_skip */
	if ((dw)(cx) >= (dw)(160-44)) {goto __m2c_macrolocal_147_skip;}
	/* jmp	FailGndTgtMrkr */
	goto failgndtgtmrkr;
__m2c_macrolocal_147_skip:
	// 4557 
	// 0 ;non-visible ->
	/* cmp	cx,HUD_X_ORG+44 */
	CMP(cx, 160+44);
	/* jbe	__m2c_macrolocal_148_skip */
	if ((dw)(cx) <= (dw)(160+44)) {goto __m2c_macrolocal_148_skip;}
	/* jmp	FailGndTgtMrkr */
	goto failgndtgtmrkr;
__m2c_macrolocal_148_skip:
	// 4559 
	// 0 ;non-visible ->
	/* cmp	bl,HUD_Y_ORG-40 */
	CMP(bl, 48-40);
	/* jb	FailGndTgtMrkr	;non-visible -> */
	if ((db)(bl) < (db)(48-40)) {goto failgndtgtmrkr;}
	/* cmp	bl,HUD_Y_ORG+40 */
	CMP(bl, 48+40);
	/* ja	FailGndTgtMrkr	;non-visible -> */
	if ((db)(bl) > (db)(48+40)) {goto failgndtgtmrkr;}
	/* mov	MarkerX,cx */
	markerx = cx;
	/* mov	MarkerY,bl */
	*(markery) = bl;
	// 0 ;-------------------
	// 0 ;* draw cross symbol (rotated with horizon)
	// 0 ;-------------------
	/* mov	Xe[0],-4*128 */
	*(dw*)(((db*)&xe)+0) = -4*128;
	/* mov	Ye[0],0 */
	*(dw*)(((db*)&ye)+0) = 0;
	/* mov	Xe[2],-2*128 */
	*(dw*)(((db*)&xe)+2) = -2*128;
	/* mov	Ye[2],0 */
	*(dw*)(((db*)&ye)+2) = 0;
	/* call	RotateMrkrLine */
	CALL(rotatemrkrline, 0);
	/* mov	Xe[0],2*128-1 */
	*(dw*)(((db*)&xe)+0) = 2*128-1;
	/* mov	Ye[0],0 */
	*(dw*)(((db*)&ye)+0) = 0;
	/* mov	Xe[2],4*128 */
	*(dw*)(((db*)&xe)+2) = 4*128;
	/* mov	Ye[2],0 */
	*(dw*)(((db*)&ye)+2) = 0;
	/* call	RotateMrkrLine */
	CALL(rotatemrkrline, 0);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],4*128 */
	*(dw*)(((db*)&ye)+0) = 4*128;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],2*128 */
	*(dw*)(((db*)&ye)+2) = 2*128;
	/* call	RotateMrkrLine */
	CALL(rotatemrkrline, 0);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],-2*128 */
	*(dw*)(((db*)&ye)+0) = -2*128;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],-4*128 */
	*(dw*)(((db*)&ye)+2) = -4*128;
	/* call	RotateMrkrLine */
	CALL(rotatemrkrline, 0);
	/* clc			;visible */
	CLC;
	/* ret */
	RETN(0);
failgndtgtmrkr:
	// 4561 
	/* FailGndTgtMrkr:	stc			;non-visible */
	STC;
	/* ret */
	RETN(0);
drawccipmrkr:
	// 5382 
	/* mov	MarkerX,-1	;assume non-visible */
	markerx = -1;
edummylabel23:
	// 4563 
	/* mov	MarkerY,-1 */
	*(markery) = -1;
	// 0 ;--------------------------------
	// 0 ;* project CCIP position onto HUD
	// 0 ;--------------------------------
	/* mov	si,OFFSET CCIP_VIEW */
	si = m2c::near_offset_external(ccip_view);
	/* call	ProjectHUDPoint */
	CALL(projecthudpoint, 0);
	/* jc	FailCCIPMrkr	;non-visible -> */
	if (CF) {goto failccipmrkr;}
	// 0 ;------------------
	// 0 ;* clip CCIP marker (crude clip on marker centre)
	// 0 ;------------------
	/* cmp	cx,HUD_X_ORG-44 */
	CMP(cx, 160-44);
	/* jb	FailCCIPMrkr	;non-visible -> */
	if ((dw)(cx) < (dw)(160-44)) {goto failccipmrkr;}
	/* cmp	cx,HUD_X_ORG+44 */
	CMP(cx, 160+44);
	/* ja	FailCCIPMrkr	;non-visible -> */
	if ((dw)(cx) > (dw)(160+44)) {goto failccipmrkr;}
	/* cmp	bl,HUD_Y_ORG-40 */
	CMP(bl, 48-40);
	/* jb	FailCCIPMrkr	;non-visible -> */
	if ((db)(bl) < (db)(48-40)) {goto failccipmrkr;}
	/* cmp	bl,HUD_Y_ORG+40 */
	CMP(bl, 48+40);
	/* ja	FailCCIPMrkr	;non-visible -> */
	if ((db)(bl) > (db)(48+40)) {goto failccipmrkr;}
	/* mov	MarkerX,cx */
	markerx = cx;
	/* mov	MarkerY,bl */
	*(markery) = bl;
	// 0 ;------------------
	// 0 ;* draw CCIP symbol (rotated with horizon)
	// 0 ;------------------
	/* mov	Xe[0],-3*128 */
	*(dw*)(((db*)&xe)+0) = -3*128;
	/* mov	Ye[0],0 */
	*(dw*)(((db*)&ye)+0) = 0;
	/* mov	Xe[2],+3*128 */
	*(dw*)(((db*)&xe)+2) = 3*128;
	/* mov	Ye[2],0 */
	*(dw*)(((db*)&ye)+2) = 0;
	/* call	RotateMrkrLine */
	CALL(rotatemrkrline, 0);
	/* clc			;visible */
	CLC;
	/* ret */
	RETN(0);
failccipmrkr:
	// 4565 
	/* FailCCIPMrkr:	stc			;non-visible */
	STC;
	/* ret */
	RETN(0);
rotatemrkrline:
	// 5440 
	/* call	VQuickLineClip	;(always visible) */
	CALLF(vquicklineclip, 0);
edummylabel24:
	// 4567 
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* sub	cx,HUD_X_ORG */
	SUB(cx, 160);
	/* sub	bl,HUD_Y_ORG */
	SUB(bl, 48);
	/* sub	dx,HUD_X_ORG */
	SUB(dx, 160);
	/* sub	bh,HUD_Y_ORG */
	SUB(bh, 48);
	/* add	cx,MarkerX */
	ADD(cx, markerx);
	/* add	bl,MarkerY */
	ADD(bl, *(markery));
	/* add	dx,MarkerX */
	ADD(dx, markerx);
	/* add	bh,MarkerY */
	ADD(bh, *(markery));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
projecthudpoint:
	// 5475 
	/* call	CalcTgtRelCo ;*	 cockpit). */
	CALLF(calctgtrelco, 0);
edummylabel25:
	// 4569 
	/* jc	@F		;error -> */
	if (CF) {goto dummylabel29;}
	/* call	CalcEyeCoords */
	CALLF(calceyecoords, 0);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* mov	Ze[0],cx */
	*(dw*)(((db*)&ze)+0) = cx;
	/* call	XDotClip */
	CALLF(xdotclip, 0);
dummylabel29:
	// 4571 
	/* @@:		ret */
	RETN(0);
drawbombfall:
	// 5493 
	/* cmp	MarkerY,-1	;target marker visible? */
	CMP(*(markery), -1);
edummylabel26:
	// 4573 
	/* jne	__m2c_macrolocal_149_skip */
	if (!ZF) {goto __m2c_macrolocal_149_skip;}
	/* jmp	DrawSolidFall */
	goto drawsolidfall;
__m2c_macrolocal_149_skip:
	// 4575 
	// 0 ;no (return via DrawSolidFall) ->
	// 0 ;* sort height margin wrt weapon safety height
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	ax,SafetyHeights[bx] */
	ax = *(dw*)(((db*)&safetyheights)+bx);
	// 0 ;* height margin = min(-(safety height - alt) * 4, 8191)
	/* xor	dx,dx */
	XOR(dx, dx);
	/* sub	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&m_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&m_view+vp_zft_hi)));
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* js	HtMargOk	;< 0 (no limit on -ve result) -> */
	if ((short)(dx) < 0) {goto htmargok;}
	/* test	dx,dx		;> 65535? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel30;}
	/* cmp	ax,8191		;> 8191? */
	CMP(ax, 8191);
	/* jbe	HtMargOk	;no -> */
	if ((dw)(ax) <= (dw)(8191)) {goto htmargok;}
dummylabel30:
	// 4577 
	/* @@:		mov	ax,8191 */
	ax = 8191;
htmargok:
	// 4579 
	/* HtMargOk: 	mov	dx,ax */
	dx = ax;
	// 0 ;* calc target designator position relative to HUD origin
	/* mov	al,MarkerY */
	al = *(markery);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* sub	ax,HUD_Y_ORG */
	SUB(ax, 48);
	/* mov	cl,7		;*128 */
	cl = 7;
	/* sal	ax,cl		;convert to vscreen scaling */
	SAL(ax, cl);
	/* neg	ax */
	NEG(ax);
	// 0 ;* bomb fall line top = height margin + designator y rel position
	/* add	ax,dx		;ax = y line top */
	ADD(ax, dx);
	/* mov	bx,ax */
	bx = ax;
	/* add	bx,-5*128	;bx = y end of upper line section */
	ADD(bx, -5*128);
	/* mov	cx,bx */
	cx = bx;
	/* add	cx,-5*128	;cx = y start of lower line section */
	ADD(cx, -5*128);
	// 0 ;* keep bomb fall line out of aircraft symbol
	/* cmp	ax,-2*128 */
	CMP(ax, -2*128);
	/* jle	@F */
	if ((short)(ax) <= (short)(-2*128)) {goto dummylabel31;}
	/* mov	ax,-2*128 */
	ax = -2*128;
dummylabel31:
	// 4581 
	/* @@:		cmp	bx,-2*128 */
	CMP(bx, -2*128);
	/* jle	@F */
	if ((short)(bx) <= (short)(-2*128)) {goto dummylabel32;}
	/* mov	bx,-2*128 */
	bx = -2*128;
dummylabel32:
	// 4583 
	/* @@:		cmp	cx,-2*128 */
	CMP(cx, -2*128);
	/* jle	@F */
	if ((short)(cx) <= (short)(-2*128)) {goto dummylabel33;}
	/* mov	cx,-2*128 */
	cx = -2*128;
	// 0 ;* draw upper section of bomb fall line
dummylabel33:
	// 4585 
	/* @@: 		push	cx */
	PUSH(cx);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],bx */
	*(dw*)(((db*)&ye)+2) = bx;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel34;}
	/* mov	al,COL_HUD */
	al = 133;
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
	// 0 ;* draw lower section of bomb fall line
dummylabel34:
	// 4587 
	/* @@:		pop	cx */
	POP(cx);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],cx */
	*(dw*)(((db*)&ye)+0) = cx;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],-8192 */
	*(dw*)(((db*)&ye)+2) = -8192;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel35;}
	/* mov	al,COL_HUD */
	al = 133;
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
dummylabel35:
	// 4589 
	/* @@:		ret */
	RETN(0);
drawsolidfall:
	// 5592 
	/* mov	Xe[0],0 ;* kill: assume all */
	*(dw*)(((db*)&xe)+0) = 0;
edummylabel27:
	// 4591 
	/* mov	Ye[0],-2*128	;keep out of aircraft symbol */
	*(dw*)(((db*)&ye)+0) = -2*128;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],-8192 */
	*(dw*)(((db*)&ye)+2) = -8192;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel36;}
	/* mov	al,COL_HUD */
	al = 133;
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
dummylabel36:
	// 4593 
	/* @@:		ret */
	RETN(0);
updateclock:
	// 5629 
	// 0 ;-------------------
	// 0 ;* calc clock origin
	// 0 ;-------------------
edummylabel28:
	// 4595 
	/* add	cx,HUD_X_ORG */
	ADD(cx, 160);
	/* mov	ClockXOrg,cx */
	clockxorg = cx;
	/* add	bl,HUD_Y_ORG */
	ADD(bl, 48);
	/* mov	ClockYOrg,bl */
	*(clockyorg) = bl;
	// 0 ;------------------
	// 0 ;* draw centre ring
	// 0 ;------------------
	/* push	ax */
	PUSH(ax);
	/* mov	dx,55 */
	dx = 55;
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
	/* mov	cx,dx */
	cx = dx;
	/* inc	cx */
	INC(cx);
	/* mov	si,OFFSET CountClock1 */
	si = m2c::near_offset_external(countclock1);
dummylabel37:
	// 4597 
	/* @@:		push	cx */
	PUSH(cx);
	/* lodsb			;fetch x offset */
	{ LODSB; }
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg */
	ADD(ax, clockxorg);
	/* mov	cx,ax */
	cx = ax;
	/* lodsb	  		;fetch y offset */
	{ LODSB; }
	/* add	al,ClockYOrg */
	ADD(al, *(clockyorg));
	/* mov	bl,al */
	bl = al;
	/* push	si */
	PUSH(si);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_152_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_152_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_152_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_152_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_152_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_152_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_152_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_152_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_152_skip:
	// 4599 
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5673 						call	SetPixel */
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* loop	@B */
	LOOP(dummylabel37);
	/* pop	ax */
	POP(ax);
	// 0 ;-------------------------
	// 0 ;* draw end of line marker
	// 0 ;-------------------------
	// 0 ;* inner ring
	/* push	ax */
	PUSH(ax);
	/* mov	dx,51 */
	dx = 51;
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
	/* mov	bx,dx */
	bx = dx;
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	al,CountClock2[bx]	;fetch x offset */
	al = *((&countclock2)+bx);
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg */
	ADD(ax, clockxorg);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,CountClock2[bx+1]	;fetch y offset */
	bl = *((&countclock2)+bx+1);
	/* add	bl,ClockYOrg */
	ADD(bl, *(clockyorg));
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_154_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_154_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_154_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_154_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_154_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_154_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_154_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_154_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_154_skip:
	// 4601 
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5711 						call	SetPixel */
	/* pop	ax */
	POP(ax);
	// 0 ;* outer ring
	/* mov	dx,59 */
	dx = 59;
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
	/* mov	bx,dx */
	bx = dx;
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	al,CountClock3[bx]	;fetch x offset */
	al = *((&countclock3)+bx);
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg */
	ADD(ax, clockxorg);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,CountClock3[bx+1]	;fetch y offset */
	bl = *((&countclock3)+bx+1);
	/* add	bl,ClockYOrg */
	ADD(bl, *(clockyorg));
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_156_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_156_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_156_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_156_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_156_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_156_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_156_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_156_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_156_skip:
	// 4603 
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5741 						call	SetPixel */
	// 0 ;------------------------
	// 0 ;* draw 12 o'clock marker
	// 0 ;------------------------
	/* mov	al,CountClock3[0]	;fetch x offset */
	al = *((&countclock3)+0);
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg */
	ADD(ax, clockxorg);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,CountClock3[1]	;fetch y offset */
	bl = *((&countclock3)+1);
	/* add	bl,ClockYOrg */
	ADD(bl, *(clockyorg));
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_157_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_157_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_157_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_157_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_157_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_157_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_157_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_157_skip;}
	/* mov	al,COL_HUD */
	al = 133;
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5762 						call	SetPixel */
__m2c_macrolocal_157_skip:
	// 4605 
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
laserrangeclock:
	// 5776 
	/* test	LaserActive,1	;laser active? */
	TEST(laseractive, 1);
edummylabel29:
	// 4607 
	/* jz	ExitlaserRange	;no -> */
	if (ZF) {goto exitlaserrange;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET FloatWP */
	di = m2c::near_offset_external(floatwp);
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	// 0 ;* limit range to 32767
	/* test	dx,dx		;range > 65535? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel38;}
	/* cmp	ax,32767	;range > 32767? */
	CMP(ax, 32767);
	/* jbe	LaserRangeOk	;no -> */
	if ((dw)(ax) <= (dw)(32767)) {goto laserrangeok;}
dummylabel38:
	// 4609 
	/* @@:		mov	ax,32767 */
	ax = 32767;
laserrangeok:
	// 4611 
	/* LaserRangeOk:	xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock */
	CALL(updateclock, 0);
exitlaserrange:
	// 4613 
	/* ExitLaserRange:	ret */
	RETN(0);
jp233clock:
	// 5802 
	// 0 ;* note: It is not important that the release clock starts at 12 o'clock,
	// 0 ;*       however, scale JP233Timer to use a decent amount of the available
	// 0 ;*	 resolution. See WEAPONS.ASM for JP233_PERIOD and scale accordingly.
edummylabel30:
	// 4615 
	/* mov	ax,JP233Timer */
	ax = jp233timer;
	/* mov	cl,6		;*64 */
	cl = 6;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* ret */
	RETN(0);
loftsteeringcue:
	// 5825 
	// 0 ;* hdg error = sbound(WPBrgFine - HFine, -1024, 1024) * 2
edummylabel31:
	// 4617 
	/* mov	ax,WPBrgFine */
	ax = wpbrgfine;
	/* sub	ax,HFine */
	SUB(ax, hfine);
	/* cmp	ax,-1024 */
	CMP(ax, -1024);
	/* jge	__m2c_macrolocal_158_TestHi */
	if ((short)(ax) >= (short)(-1024)) {goto __m2c_macrolocal_158_testhi;}
	/* mov	ax,-1024 */
	ax = -1024;
	/* jmp	__m2c_macrolocal_158_TestOk */
	goto __m2c_macrolocal_158_testok;
__m2c_macrolocal_158_testhi:
	// 4619 
	/* __m2c_macrolocal_158_TestHi:		cmp	ax,1024 */
	CMP(ax, 1024);
	/* jle	__m2c_macrolocal_158_TestOk */
	if ((short)(ax) <= (short)(1024)) {goto __m2c_macrolocal_158_testok;}
	/* mov	ax,1024 */
	ax = 1024;
__m2c_macrolocal_158_testok:
	// 4621 
	/* sal	ax,1 */
	SAL(ax, 1);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	// 0 ;* pitch error = (32767 - LoftRatio) / 16 (0 .. 16 * 128)
	/* mov	ax,32767 */
	ax = 32767;
	/* sub	ax,LoftRatio */
	SUB(ax, loftratio);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	// 0 ;* draw steering cue dot
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel39;}
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* dec	cx */
	DEC(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* inc	cx */
	INC(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* dec	bl */
	DEC(bl);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_HUD */
	al = 133;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* inc	bl */
	INC(bl);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw centre line (average between base line and dot)
	/* add	bx,HUD_Y_ORG+BASE_LINE_Y */
	ADD(bx, 48+20);
	/* mov	ax,bx */
	ax = bx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	bx,ax */
	bx = ax;
	/* add	cx,HUD_X_ORG */
	ADD(cx, 160);
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,ax */
	dx = ax;
	/* sub	cx,BASE_LINE_WIDTH/4 */
	SUB(cx, 40/4);
	/* add	dx,BASE_LINE_WIDTH/4 */
	ADD(dx, 40/4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* draw base line
dummylabel39:
	// 4623 
	/* @@:	mov	cx,HUD_X_ORG+-BASE_LINE_WIDTH/2 */
	cx = 160+-40/2;
	/* mov	dx,HUD_X_ORG+BASE_LINE_WIDTH/2 */
	dx = 160+40/2;
	/* mov	bl,HUD_Y_ORG+BASE_LINE_Y */
	bl = 48+20;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 5922 call	HLineDraw
	/* ret */
	RETN(0);
drawairtarget:
	// 5947 
	/* cmp	AirTgtPtr,-1 	;valid target? */
	CMP(airtgtptr, -1);
edummylabel32:
	// 4625 
	/* jne	__m2c_macrolocal_165_skip */
	if (!ZF) {goto __m2c_macrolocal_165_skip;}
	/* jmp	FailAirTarget */
	goto failairtarget;
__m2c_macrolocal_165_skip:
	// 4627 
	// 0 ;no ->
	// 0 ;--------------------------------------
	// 0 ;* calc unclipped CRT co-ords of target
	// 0 ;--------------------------------------
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* mov	si,AirTgtPtr	;si -> MOBILE + VIEWPOINT */
	si = airtgtptr;
	/* add	si,MOB_REC_SIZE	;si -> VIEWPOINT */
	ADD(si, 6);
	/* call	CalcTgtRelCo */
	CALLF(calctgtrelco, 0);
	/* jnc	__m2c_macrolocal_166_skip */
	if (!CF) {goto __m2c_macrolocal_166_skip;}
	/* jmp	FailAirTarget */
	goto failairtarget;
__m2c_macrolocal_166_skip:
	// 4629 
	// 0 ;error ->
	/* call	CalcEyeCoords */
	CALLF(calceyecoords, 0);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Ye[0],bx */
	*(dw*)(((db*)&ye)+0) = bx;
	/* mov	Ze[0],cx */
	*(dw*)(((db*)&ze)+0) = cx;
	/* call	XCalcUnclipCRT */
	CALLF(xcalcunclipcrt, 0);
	/* jnc	__m2c_macrolocal_167_skip */
	if (!CF) {goto __m2c_macrolocal_167_skip;}
	/* jmp	FailAirTarget */
	goto failairtarget;
__m2c_macrolocal_167_skip:
	// 4631 
	// 0 ;error ->
	// 0 ;-----------------------------------------
	// 0 ;* hard clip to keep target symbol visible (useful for steering)
	// 0 ;-----------------------------------------
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jge	@F */
	if ((short)(cx) >= (short)(160-48)) {goto dummylabel40;}
	/* mov	cx,HUD_X_ORG-48 */
	cx = 160-48;
dummylabel40:
	// 4633 
	/* @@:		cmp	cx,HUD_X_ORG+47 */
	CMP(cx, 160+47);
	/* jle	@F */
	if ((short)(cx) <= (short)(160+47)) {goto dummylabel41;}
	/* mov	cx,HUD_X_ORG+47 */
	cx = 160+47;
dummylabel41:
	// 4635 
	/* @@:		cmp	bx,HUD_Y_ORG-43 */
	CMP(bx, 48-43);
	/* jge	@F */
	if ((short)(bx) >= (short)(48-43)) {goto dummylabel42;}
	/* mov	bx,HUD_Y_ORG-43 */
	bx = 48-43;
dummylabel42:
	// 4637 
	/* @@:		cmp	bx,HUD_Y_ORG+44 */
	CMP(bx, 48+44);
	/* jle	@F */
	if ((short)(bx) <= (short)(48+44)) {goto dummylabel43;}
	/* mov	bx,HUD_Y_ORG+44 */
	bx = 48+44;
	// 0 ;-------------------
	// 0 ;* draw cross symbol
	// 0 ;-------------------
	// 0 ;*              � (a)
	// 0 ;*              �
	// 0 ;*      (c) ���� ���� (d)
	// 0 ;*              �
	// 0 ;*              � (b)
	// 0 ;* draw stroke (a)
dummylabel43:
	// 4639 
	/* @@:		push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	bx,2 */
	SUB(bx, 2);
	/* cmp	bx,HUD_Y_ORG-43 */
	CMP(bx, 48-43);
	/* jl	SkipA */
	if ((short)(bx) < (short)(48-43)) {goto skipa;}
	/* mov	ax,bx */
	ax = bx;
	/* sub	ax,5 */
	SUB(ax, 5);
	/* cmp	ax,HUD_Y_ORG-43 */
	CMP(ax, 48-43);
	/* jge	@F */
	if ((short)(ax) >= (short)(48-43)) {goto dummylabel44;}
	/* mov	ax,HUD_Y_ORG-43 */
	ax = 48-43;
dummylabel44:
	// 4641 
	/* @@:		mov	bh,al */
	bh = al;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* draw stroke (b)
skipa:
	// 4643 
	/* SkipA:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	bx,2 */
	ADD(bx, 2);
	/* cmp	bx,HUD_Y_ORG+44 */
	CMP(bx, 48+44);
	/* jg	SkipB */
	if ((short)(bx) > (short)(48+44)) {goto skipb;}
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,5 */
	ADD(ax, 5);
	/* cmp	ax,HUD_Y_ORG+44 */
	CMP(ax, 48+44);
	/* jle	@F */
	if ((short)(ax) <= (short)(48+44)) {goto dummylabel45;}
	/* mov	ax,HUD_Y_ORG+44 */
	ax = 48+44;
dummylabel45:
	// 4645 
	/* @@:		mov	bh,al */
	bh = al;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* draw stroke (c)
skipb:
	// 4647 
	/* SkipB:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	cx,2 */
	SUB(cx, 2);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	SkipC */
	if ((short)(cx) < (short)(160-48)) {goto skipc;}
	/* mov	dx,cx */
	dx = cx;
	/* sub	dx,7 */
	SUB(dx, 7);
	/* cmp	dx,HUD_X_ORG-48 */
	CMP(dx, 160-48);
	/* jge	@F */
	if ((short)(dx) >= (short)(160-48)) {goto dummylabel46;}
	/* mov	dx,HUD_X_ORG-48 */
	dx = 160-48;
dummylabel46:
	// 4649 
	/* @@:		mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* draw stroke (d)
skipc:
	// 4651 
	/* SkipC:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,HUD_X_ORG+47 */
	CMP(cx, 160+47);
	/* jg	SkipD */
	if ((short)(cx) > (short)(160+47)) {goto skipd;}
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,7 */
	ADD(dx, 7);
	/* cmp	dx,HUD_X_ORG+47 */
	CMP(dx, 160+47);
	/* jle	@F */
	if ((short)(dx) <= (short)(160+47)) {goto dummylabel47;}
	/* mov	dx,HUD_X_ORG+47 */
	dx = 160+47;
dummylabel47:
	// 4653 
	/* @@:		mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
skipd:
	// 4655 
	/* SkipD:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;-------------------
	// 0 ;* calc range circle (wrt weapon type)
	// 0 ;-------------------
	/* mov	ax,ArmMode */
	ax = armmode;
	/* cmp	ax,ARM_CANNON */
	CMP(ax, 16);
	/* je	CannonRange */
	if ((dw)(ax) == (dw)(16)) {goto cannonrange;}
	/* cmp	ax,ARM_SIDEWINDER */
	CMP(ax, 18);
	/* jne	__m2c_macrolocal_168_skip */
	if ((dw)(ax) != (dw)(18)) {goto __m2c_macrolocal_168_skip;}
	/* jmp	SidewinderRange */
	goto sidewinderrange;
__m2c_macrolocal_168_skip:
	// 4657 
	/* cmp	ax,ARM_SKYFLASH */
	CMP(ax, 20);
	/* jne	__m2c_macrolocal_169_skip */
	if ((dw)(ax) != (dw)(20)) {goto __m2c_macrolocal_169_skip;}
	/* jmp	SkyFlashRange */
	goto skyflashrange;
__m2c_macrolocal_169_skip:
	// 4659 
	/* jmp	FailAirTarget	;(should never happen) */
	goto failairtarget;
	// 0 ;---------------------------
cannonrange:
	// 4661 
	// 0 ;---------------------------
	// 0 ;* draw 400m marker
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	Cont400m */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto cont400m;}
	/* cmp	WORD PTR AirTgtRange,1192	;1192 = ((20 / 55) * 32768) / 10 */
	CMP(*(dw*)(&airtgtrange), 1192);
	/* jb	Skip400m */
	if ((dw)(*(dw*)(&airtgtrange)) < (dw)(1192)) {goto skip400m;}
cont400m:
	// 4663 
	/* Cont400m:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,9 */
	ADD(cx, 9);
	/* add	bl,7 */
	ADD(bl, 7);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_170_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_170_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_170_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_170_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_170_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_170_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_170_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_170_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_170_skip:
	// 4665 
	/* __m2c_macrolocal_170_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6109 call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,10 */
	ADD(cx, 10);
	/* add	bl,8 */
	ADD(bl, 8);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_171_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_171_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_171_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_171_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_171_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_171_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_171_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_171_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_171_skip:
	// 4667 
	/* __m2c_macrolocal_171_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6126 						call	SetPixel */
skip400m:
	// 4669 
	// 0 ;* draw 600m marker
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	Cont600m */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto cont600m;}
	/* cmp	WORD PTR AirTgtRange,2145	;2145 = ((36 / 55) * 32768) / 10 */
	CMP(*(dw*)(&airtgtrange), 2145);
	/* jb	Skip600m */
	if ((dw)(*(dw*)(&airtgtrange)) < (dw)(2145)) {goto skip600m;}
cont600m:
	// 4671 
	/* Cont600m:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-9 */
	ADD(cx, -9);
	/* add	bl,7 */
	ADD(bl, 7);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_172_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_172_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_172_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_172_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_172_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_172_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_172_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_172_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_172_skip:
	// 4673 
	/* __m2c_macrolocal_172_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6150 call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-10 */
	ADD(cx, -10);
	/* add	bl,8 */
	ADD(bl, 8);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_173_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_173_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_173_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_173_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_173_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_173_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_173_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_173_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_173_skip:
	// 4675 
	/* __m2c_macrolocal_173_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6167 						call	SetPixel */
skip600m:
	// 4677 
	// 0 ;* range clock fsd = 3,276ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	ContAirTarget */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto contairtarget;}
	/* cmp	WORD PTR AirTgtRange,3276 */
	CMP(*(dw*)(&airtgtrange), 3276);
	/* ja	ContAirTarget */
	if ((dw)(*(dw*)(&airtgtrange)) > (dw)(3276)) {goto contairtarget;}
	/* mov	ax,WORD PTR AirTgtRange */
	ax = *(dw*)(&airtgtrange);
	/* mov	dx,10 */
	dx = 10;
	/* mul	dx */
	MUL1_2(dx);
	/* jmp	ContAirTarget */
	goto contairtarget;
	// 0 ;---------------------------
sidewinderrange:
	// 4679 
	// 0 ;---------------------------
	// 0 ;* range clock fsd = 32,767ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	ContAirTarget */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto contairtarget;}
	/* cmp	WORD PTR AirTgtRange,32767 */
	CMP(*(dw*)(&airtgtrange), 32767);
	/* ja	ContAirTarget */
	if ((dw)(*(dw*)(&airtgtrange)) > (dw)(32767)) {goto contairtarget;}
	/* mov	ax,WORD PTR AirTgtRange */
	ax = *(dw*)(&airtgtrange);
	/* jmp	ContAirTarget */
	goto contairtarget;
	// 0 ;---------------------------
skyflashrange:
	// 4681 
	// 0 ;---------------------------
	// 0 ;* range clock fsd = 131,071ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR AirTgtRange+2,1 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 1);
	/* ja	ContAirTarget */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(1)) {goto contairtarget;}
	/* mov	ax,WORD PTR AirTgtRange */
	ax = *(dw*)(&airtgtrange);
	/* mov	dx,WORD PTR AirTgtRange+2 */
	dx = *(dw*)(((db*)&airtgtrange)+2);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 0 ;---------------------------
contairtarget:
	// 4683 
	// 0 ;---------------------------
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	cx,HUD_X_ORG */
	SUB(cx, 160);
	/* sub	bl,HUD_Y_ORG */
	SUB(bl, 48);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;--------------
	// 0 ;* sort IR lock
	// 0 ;--------------
	/* test	IRLockFlag,1 */
	TEST(irlockflag, 1);
	/* jnz	__m2c_macrolocal_174_skip */
	if ((irlockflag & 1) != 0) {goto __m2c_macrolocal_174_skip;}
	/* jmp	SkipIRLock */
	goto skipirlock;
__m2c_macrolocal_174_skip:
	// 4685 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,-5 */
	ADD(bl, -5);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_175_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_175_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_175_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_175_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_175_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_175_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_175_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_175_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_175_skip:
	// 4687 
	/* __m2c_macrolocal_175_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6245 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* add	bl,-4 */
	ADD(bl, -4);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_176_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_176_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_176_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_176_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_176_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_176_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_176_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_176_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_176_skip:
	// 4689 
	/* __m2c_macrolocal_176_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6262 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_177_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_177_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_177_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_177_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_177_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_177_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_177_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_177_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_177_skip:
	// 4691 
	/* __m2c_macrolocal_177_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6279 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,4 */
	ADD(cx, 4);
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_178_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_178_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_178_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_178_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_178_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_178_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_178_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_178_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_178_skip:
	// 4693 
	/* __m2c_macrolocal_178_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6296 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_179_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_179_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_179_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_179_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_179_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_179_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_179_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_179_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_179_skip:
	// 4695 
	/* __m2c_macrolocal_179_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6313 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_180_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_180_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_180_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_180_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_180_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_180_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_180_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_180_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_180_skip:
	// 4697 
	/* __m2c_macrolocal_180_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6330 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_181_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_181_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_181_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_181_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_181_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_181_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_181_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_181_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_181_skip:
	// 4699 
	/* __m2c_macrolocal_181_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6347 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_182_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_182_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_182_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_182_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_182_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_182_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_182_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_182_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_182_skip:
	// 4701 
	/* __m2c_macrolocal_182_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6364 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-4 */
	ADD(cx, -4);
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_183_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_183_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_183_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_183_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_183_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_183_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_183_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_183_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_183_skip:
	// 4703 
	/* __m2c_macrolocal_183_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6381 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_184_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_184_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_184_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_184_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_184_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_184_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_184_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_184_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_184_skip:
	// 4705 
	/* __m2c_macrolocal_184_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6398 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* add	bl,-4 */
	ADD(bl, -4);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_185_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_185_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_185_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_185_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_185_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_185_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_185_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_185_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_185_skip:
	// 4707 
	/* __m2c_macrolocal_185_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6415 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,-5 */
	ADD(bl, -5);
	/* cmp	cx,HUD_X_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_186_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_186_skip;}
	/* cmp	cx,HUD_X_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_186_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_186_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1 */
	CMP(bl, 48-44+1);
	/* jl	__m2c_macrolocal_186_skip */
	if ((signed char)(bl) < (signed char)(48-44+1)) {goto __m2c_macrolocal_186_skip;}
	/* cmp	bl,HUD_Y_ORG-44+1+88 */
	CMP(bl, 48-44+1+88);
	/* jge	__m2c_macrolocal_186_skip */
	if ((signed char)(bl) >= (signed char)(48-44+1+88)) {goto __m2c_macrolocal_186_skip;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_186_skip:
	// 4709 
	/* __m2c_macrolocal_186_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6432 						call	SetPixel */
skipirlock:
	// 4711 
	/* SkipIRLock:	clc			;ok */
	CLC;
	/* ret */
	RETN(0);
failairtarget:
	// 4713 
	/* FailAirTarget:	stc			;invalid target or error */
	STC;
	/* ret */
	RETN(0);
drawcentrecross:
	// 6446 
	// 0 ;* draw centre cross
edummylabel33:
	// 4715 
	/* mov	bl,HUD_Y_ORG+-2 */
	bl = 48+-2;
	/* mov	bh,HUD_Y_ORG+-1 */
	bh = 48+-1;
	/* mov	cx,HUD_X_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 6455 						call	VLineDraw
	/* mov	bl,HUD_Y_ORG+1 */
	bl = 48+1;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	cx,HUD_X_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 6461 						call	VLineDraw
	/* mov	cx,HUD_X_ORG+-2 */
	cx = 160+-2;
	/* mov	dx,HUD_X_ORG+-1 */
	dx = 160+-1;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 6467 						call	HLineDraw
	/* mov	cx,HUD_X_ORG+1 */
	cx = 160+1;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG+0 */
	bl = 48+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 6473 						call	HLineDraw
	// 0 ;* if Sidewinder armed but no IR lock then draw diamond around centre cross
	/* cmp	ArmMode,ARM_SIDEWINDER */
	CMP(armmode, 18);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel48;}
	/* test	IRLockFlag,1 */
	TEST(irlockflag, 1);
	/* jnz	@F */
	if ((irlockflag & 1) != 0) {goto dummylabel48;}
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-4 */
	bl = 48-4;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bh,HUD_Y_ORG-1 */
	bh = 48-1;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* mov	dx,HUD_X_ORG+1 */
	dx = 160+1;
	/* mov	bh,HUD_Y_ORG+3 */
	bh = 48+3;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG+4 */
	bl = 48+4;
	/* mov	dx,HUD_X_ORG-3 */
	dx = 160-3;
	/* mov	bh,HUD_Y_ORG+1 */
	bh = 48+1;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* mov	cx,HUD_X_ORG-4 */
	cx = 160-4;
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* mov	dx,HUD_X_ORG-1 */
	dx = 160-1;
	/* mov	bh,HUD_Y_ORG-3 */
	bh = 48-3;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel48:
	// 4717 
	/* @@:		ret */
	RETN(0);
drawgndgunclock:
	// 6514 
	// 0 ;* draw 900m marker
edummylabel34:
	// 4719 
	/* cmp	WORD PTR GndTgtRange+2,0 */
	CMP(*(dw*)(((db*)&gndtgtrange)+2), 0);
	/* ja	Cont900m */
	if ((dw)(*(dw*)(((db*)&gndtgtrange)+2)) > (dw)(0)) {goto cont900m;}
	/* cmp	WORD PTR GndTgtRange,2979	;2979 = ((20 / 55) * 32768) / 4 */
	CMP(*(dw*)(&gndtgtrange), 2979);
	/* jb	Skip900m */
	if ((dw)(*(dw*)(&gndtgtrange)) < (dw)(2979)) {goto skip900m;}
cont900m:
	// 4721 
	/* Cont900m:	mov	cx,HUD_X_ORG+9 */
	cx = 160+9;
	/* mov	bl,HUD_Y_ORG+7 */
	bl = 48+7;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG+8 */
	bl = 48+8;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skip900m:
	// 4723 
	// 0 ;* draw 1500m marker
	/* cmp	WORD PTR GndTgtRange+2,0 */
	CMP(*(dw*)(((db*)&gndtgtrange)+2), 0);
	/* ja	Cont1500m */
	if ((dw)(*(dw*)(((db*)&gndtgtrange)+2)) > (dw)(0)) {goto cont1500m;}
	/* cmp	WORD PTR GndTgtRange,5362	;5362 = ((36 / 55) * 32768) / 4 */
	CMP(*(dw*)(&gndtgtrange), 5362);
	/* jb	Skip1500m */
	if ((dw)(*(dw*)(&gndtgtrange)) < (dw)(5362)) {goto skip1500m;}
cont1500m:
	// 4725 
	/* Cont1500m:	mov	cx,HUD_X_ORG-9 */
	cx = 160-9;
	/* mov	bl,HUD_Y_ORG+7 */
	bl = 48+7;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG+8 */
	bl = 48+8;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skip1500m:
	// 4727 
	// 0 ;* range clock fsd = 8191ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR GndTgtRange+2,0 */
	CMP(*(dw*)(((db*)&gndtgtrange)+2), 0);
	/* ja	@F */
	if ((dw)(*(dw*)(((db*)&gndtgtrange)+2)) > (dw)(0)) {goto dummylabel49;}
	/* cmp	WORD PTR GndTgtRange,8191 */
	CMP(*(dw*)(&gndtgtrange), 8191);
	/* ja	@F */
	if ((dw)(*(dw*)(&gndtgtrange)) > (dw)(8191)) {goto dummylabel49;}
	/* mov	ax,WORD PTR GndTgtRange */
	ax = *(dw*)(&gndtgtrange);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
dummylabel49:
	// 4729 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* ret */
	RETN(0);
drawalarmclock:
	// 6569 
	// 0 ;* range clock fsd = 131,071ft
edummylabel35:
	// 4731 
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR GndTgtRange+2,1 */
	CMP(*(dw*)(((db*)&gndtgtrange)+2), 1);
	/* ja	@F */
	if ((dw)(*(dw*)(((db*)&gndtgtrange)+2)) > (dw)(1)) {goto dummylabel50;}
	/* mov	ax,WORD PTR GndTgtRange */
	ax = *(dw*)(&gndtgtrange);
	/* mov	dx,WORD PTR GndTgtRange+2 */
	dx = *(dw*)(((db*)&gndtgtrange)+2);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
dummylabel50:
	// 4733 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* ret */
	RETN(0);
drawstandby:
	// 6595 
	// 0 ;* centre dot
edummylabel36:
	// 4735 
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* up stroke
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-17 */
	bl = 48-17;
	/* mov	bh,HUD_Y_ORG-6 */
	bh = 48-6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-18 */
	bl = 48-18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-14 */
	bl = 48-14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG-10 */
	bl = 48-10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_ORG-9 */
	bl = 48-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_ORG-9 */
	bl = 48-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_ORG-8 */
	bl = 48-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_ORG-8 */
	bl = 48-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-5 */
	bl = 48-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_ORG-4 */
	bl = 48-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_ORG-4 */
	bl = 48-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* down stroke
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG+17 */
	bl = 48+17;
	/* mov	bh,HUD_Y_ORG+6 */
	bh = 48+6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG+18 */
	bl = 48+18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG+14 */
	bl = 48+14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG+10 */
	bl = 48+10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_ORG+9 */
	bl = 48+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_ORG+9 */
	bl = 48+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_ORG+8 */
	bl = 48+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_ORG+8 */
	bl = 48+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG+5 */
	bl = 48+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_ORG+4 */
	bl = 48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_ORG+4 */
	bl = 48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* left stroke
	/* mov	cx,HUD_X_ORG-21 */
	cx = 160-21;
	/* mov	dx,HUD_X_ORG-7 */
	dx = 160-7;
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-22 */
	cx = 160-22;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-17 */
	cx = 160-17;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-12 */
	cx = 160-12;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_ORG-4 */
	bl = 48-4;
	/* mov	bh,HUD_Y_ORG-3 */
	bh = 48-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_ORG+3 */
	bl = 48+3;
	/* mov	bh,HUD_Y_ORG+4 */
	bh = 48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG-5 */
	bl = 48-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG+5 */
	bl = 48+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	bl,HUD_Y_ORG-1 */
	bl = 48-1;
	/* mov	bh,HUD_Y_ORG+1 */
	bh = 48+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_ORG+2 */
	bl = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* right stroke
	/* mov	cx,HUD_X_ORG+21 */
	cx = 160+21;
	/* mov	dx,HUD_X_ORG+7 */
	dx = 160+7;
	/* mov	bl,HUD_Y_ORG */
	bl = 48;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+22 */
	cx = 160+22;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+17 */
	cx = 160+17;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+12 */
	cx = 160+12;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	bh,HUD_Y_ORG+2 */
	bh = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_ORG-4 */
	bl = 48-4;
	/* mov	bh,HUD_Y_ORG-3 */
	bh = 48-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_ORG+3 */
	bl = 48+3;
	/* mov	bh,HUD_Y_ORG+4 */
	bh = 48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG-5 */
	bl = 48-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG+5 */
	bl = 48+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+6 */
	cx = 160+6;
	/* mov	bl,HUD_Y_ORG-1 */
	bl = 48-1;
	/* mov	bh,HUD_Y_ORG+1 */
	bh = 48+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_ORG-2 */
	bl = 48-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_ORG+2 */
	bl = 48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
drawintercept:
	// 6828 
	// 0 ;* check target valid
edummylabel37:
	// 4737 
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* jne	__m2c_macrolocal_191_skip */
	if ((dw)(airtgtptr) != (dw)(-1)) {goto __m2c_macrolocal_191_skip;}
	/* jmp	ExitIntercept */
	goto exitintercept;
__m2c_macrolocal_191_skip:
	// 4739 
	/* mov	si,AirTgtPtr */
	si = airtgtptr;
	// 0 ;* target speed
	/* call	GetDroneSpeed */
	CALLF(getdronespeed, 0);
	/* mov	cx,ax */
	cx = ax;
	// 0 ;* target range
	/* mov	ax,WORD PTR AirTgtRange */
	ax = *(dw*)(&airtgtrange);
	/* mov	dx,WORD PTR AirTgtRange+2 */
	dx = *(dw*)(((db*)&airtgtrange)+2);
	// 0 ;* target viewpoint
	/* add	si,MOB_REC_SIZE */
	ADD(si, 6);
	// 0 ;* shell velocity
	/* mov	bx,Vtas */
	bx = vtas;
	/* add	bx,MUZZLE_VELOCITY */
	ADD(bx, muzzle_velocity);
	/* cmp	bx,32767 */
	CMP(bx, 32767);
	/* jbe	@F */
	if ((dw)(bx) <= (dw)(32767)) {goto dummylabel51;}
	/* mov	bx,32767 */
	bx = 32767;
	// 0 ;* result viewpoint
dummylabel51:
	// 4741 
	/* @@:		mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	// 0 ;* calc intercept point
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	// 0 ;* project intercept point onto HUD
	/* call	ProjectHUDPoint */
	CALL(projecthudpoint, 0);
	/* jc	ExitIntercept */
	if (CF) {goto exitintercept;}
	// 0 ;* clip HUD point (crude clip on marker centre)
	/* cmp	cx,HUD_X_ORG-47 */
	CMP(cx, 160-47);
	/* jb	ExitIntercept */
	if ((dw)(cx) < (dw)(160-47)) {goto exitintercept;}
	/* cmp	cx,HUD_X_ORG+46 */
	CMP(cx, 160+46);
	/* ja	ExitIntercept */
	if ((dw)(cx) > (dw)(160+46)) {goto exitintercept;}
	/* cmp	bl,HUD_Y_ORG-42 */
	CMP(bl, 48-42);
	/* jb	ExitIntercept */
	if ((db)(bl) < (db)(48-42)) {goto exitintercept;}
	/* cmp	bl,HUD_Y_ORG+43 */
	CMP(bl, 48+43);
	/* ja	ExitIntercept */
	if ((db)(bl) > (db)(48+43)) {goto exitintercept;}
	// 0 ;* draw marker
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_HUD */
	al = 133;
	/* inc	cx */
	INC(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_HUD */
	al = 133;
	/* dec	cx */
	DEC(cx);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_HUD */
	al = 133;
	/* dec	bl */
	DEC(bl);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_HUD */
	al = 133;
	/* inc	bl */
	INC(bl);
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitintercept:
	// 4743 
	/* ExitIntercept:	ret */
	RETN(0);
dispairtgtdata:
	// 6916 
	/* cmp	AirTgtPtr,-1 ;* kill: assume all */
	CMP(airtgtptr, -1);
edummylabel38:
	// 4745 
	/* je	@F */
	if (ZF) {goto dummylabel52;}
	/* mov	si,OFFSET AirTgt$ */
	si = m2c::near_offset_external(airtgtdol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel52:
	// 4747 
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
                case m2c::k__m2c_macrolocal_139_testhi: 	goto __m2c_macrolocal_139_testhi;
        case m2c::k__m2c_macrolocal_139_testok: 	goto __m2c_macrolocal_139_testok;
        case m2c::k__m2c_macrolocal_146_skip: 	goto __m2c_macrolocal_146_skip;
        case m2c::k__m2c_macrolocal_147_skip: 	goto __m2c_macrolocal_147_skip;
        case m2c::k__m2c_macrolocal_148_skip: 	goto __m2c_macrolocal_148_skip;
        case m2c::k__m2c_macrolocal_149_skip: 	goto __m2c_macrolocal_149_skip;
        case m2c::k__m2c_macrolocal_152_skip: 	goto __m2c_macrolocal_152_skip;
        case m2c::k__m2c_macrolocal_154_skip: 	goto __m2c_macrolocal_154_skip;
        case m2c::k__m2c_macrolocal_156_skip: 	goto __m2c_macrolocal_156_skip;
        case m2c::k__m2c_macrolocal_157_skip: 	goto __m2c_macrolocal_157_skip;
        case m2c::k__m2c_macrolocal_158_testhi: 	goto __m2c_macrolocal_158_testhi;
        case m2c::k__m2c_macrolocal_158_testok: 	goto __m2c_macrolocal_158_testok;
        case m2c::k__m2c_macrolocal_165_skip: 	goto __m2c_macrolocal_165_skip;
        case m2c::k__m2c_macrolocal_166_skip: 	goto __m2c_macrolocal_166_skip;
        case m2c::k__m2c_macrolocal_167_skip: 	goto __m2c_macrolocal_167_skip;
        case m2c::k__m2c_macrolocal_168_skip: 	goto __m2c_macrolocal_168_skip;
        case m2c::k__m2c_macrolocal_169_skip: 	goto __m2c_macrolocal_169_skip;
        case m2c::k__m2c_macrolocal_170_skip: 	goto __m2c_macrolocal_170_skip;
        case m2c::k__m2c_macrolocal_171_skip: 	goto __m2c_macrolocal_171_skip;
        case m2c::k__m2c_macrolocal_172_skip: 	goto __m2c_macrolocal_172_skip;
        case m2c::k__m2c_macrolocal_173_skip: 	goto __m2c_macrolocal_173_skip;
        case m2c::k__m2c_macrolocal_174_skip: 	goto __m2c_macrolocal_174_skip;
        case m2c::k__m2c_macrolocal_175_skip: 	goto __m2c_macrolocal_175_skip;
        case m2c::k__m2c_macrolocal_176_skip: 	goto __m2c_macrolocal_176_skip;
        case m2c::k__m2c_macrolocal_177_skip: 	goto __m2c_macrolocal_177_skip;
        case m2c::k__m2c_macrolocal_178_skip: 	goto __m2c_macrolocal_178_skip;
        case m2c::k__m2c_macrolocal_179_skip: 	goto __m2c_macrolocal_179_skip;
        case m2c::k__m2c_macrolocal_180_skip: 	goto __m2c_macrolocal_180_skip;
        case m2c::k__m2c_macrolocal_181_skip: 	goto __m2c_macrolocal_181_skip;
        case m2c::k__m2c_macrolocal_182_skip: 	goto __m2c_macrolocal_182_skip;
        case m2c::k__m2c_macrolocal_183_skip: 	goto __m2c_macrolocal_183_skip;
        case m2c::k__m2c_macrolocal_184_skip: 	goto __m2c_macrolocal_184_skip;
        case m2c::k__m2c_macrolocal_185_skip: 	goto __m2c_macrolocal_185_skip;
        case m2c::k__m2c_macrolocal_186_skip: 	goto __m2c_macrolocal_186_skip;
        case m2c::k__m2c_macrolocal_191_skip: 	goto __m2c_macrolocal_191_skip;
        case m2c::k__m2c_macrolocal_63_skip: 	goto __m2c_macrolocal_63_skip;
        case m2c::k__m2c_macrolocal_64_skip: 	goto __m2c_macrolocal_64_skip;
        case m2c::kairspeedexit: 	goto airspeedexit;
        case m2c::kaltclockbug: 	goto altclockbug;
        case m2c::kbar0: 	goto bar0;
        case m2c::kbar90: 	goto bar90;
        case m2c::kbar_90: 	goto bar_90;
        case m2c::kbarloop: 	goto barloop;
        case m2c::kbugquad1: 	goto bugquad1;
        case m2c::kbugquad2: 	goto bugquad2;
        case m2c::kbugquad3: 	goto bugquad3;
        case m2c::kbugquad4: 	goto bugquad4;
        case m2c::kcannonrange: 	goto cannonrange;
        case m2c::kclipline: 	goto clipline;
        case m2c::kclipscaledline: 	goto clipscaledline;
        case m2c::kcont1500m: 	goto cont1500m;
        case m2c::kcont400m: 	goto cont400m;
        case m2c::kcont600m: 	goto cont600m;
        case m2c::kcont900m: 	goto cont900m;
        case m2c::kcontairtarget: 	goto contairtarget;
        case m2c::kcontnav: 	goto contnav;
        case m2c::kdispairtgtdata: 	goto dispairtgtdata;
        case m2c::kdrawairtarget: 	goto drawairtarget;
        case m2c::kdrawalarmclock: 	goto drawalarmclock;
        case m2c::kdrawaltbug: 	goto drawaltbug;
        case m2c::kdrawbombfall: 	goto drawbombfall;
        case m2c::kdrawbrokenbar: 	goto drawbrokenbar;
        case m2c::kdrawccipmrkr: 	goto drawccipmrkr;
        case m2c::kdrawcentrecross: 	goto drawcentrecross;
        case m2c::kdrawdownstroke: 	goto drawdownstroke;
        case m2c::kdrawgndgunclock: 	goto drawgndgunclock;
        case m2c::kdrawgndtgtmrkr: 	goto drawgndtgtmrkr;
        case m2c::kdrawhudbrackets: 	goto drawhudbrackets;
        case m2c::kdrawintercept: 	goto drawintercept;
        case m2c::kdrawpitchbar: 	goto drawpitchbar;
        case m2c::kdrawsolidbar: 	goto drawsolidbar;
        case m2c::kdrawsolidfall: 	goto drawsolidfall;
        case m2c::kdrawstandby: 	goto drawstandby;
        case m2c::kdrawzerobar: 	goto drawzerobar;
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
        case m2c::kedummylabel24: 	goto edummylabel24;
        case m2c::kedummylabel25: 	goto edummylabel25;
        case m2c::kedummylabel26: 	goto edummylabel26;
        case m2c::kedummylabel27: 	goto edummylabel27;
        case m2c::kedummylabel28: 	goto edummylabel28;
        case m2c::kedummylabel29: 	goto edummylabel29;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel30: 	goto edummylabel30;
        case m2c::kedummylabel31: 	goto edummylabel31;
        case m2c::kedummylabel32: 	goto edummylabel32;
        case m2c::kedummylabel33: 	goto edummylabel33;
        case m2c::kedummylabel34: 	goto edummylabel34;
        case m2c::kedummylabel35: 	goto edummylabel35;
        case m2c::kedummylabel36: 	goto edummylabel36;
        case m2c::kedummylabel37: 	goto edummylabel37;
        case m2c::kedummylabel38: 	goto edummylabel38;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitearlylate: 	goto exitearlylate;
        case m2c::kexithud: 	goto exithud;
        case m2c::kexitintercept: 	goto exitintercept;
        case m2c::kexitlaserrange: 	goto exitlaserrange;
        case m2c::kfailairtarget: 	goto failairtarget;
        case m2c::kfailccipmrkr: 	goto failccipmrkr;
        case m2c::kfailgndtgtmrkr: 	goto failgndtgtmrkr;
        case m2c::khdgdigitloop: 	goto hdgdigitloop;
        case m2c::khdgdigits: 	goto hdgdigits;
        case m2c::khdgdotloop: 	goto hdgdotloop;
        case m2c::khtmargok: 	goto htmargok;
        case m2c::khudalarmdir: 	goto hudalarmdir;
        case m2c::khudalarmind: 	goto hudalarmind;
        case m2c::khudcannon: 	goto hudcannon;
        case m2c::khudjp233: 	goto hudjp233;
        case m2c::khudlaserguided: 	goto hudlaserguided;
        case m2c::khudlaydownbomb: 	goto hudlaydownbomb;
        case m2c::khudloftbomb: 	goto hudloftbomb;
        case m2c::khudmanualbomb: 	goto hudmanualbomb;
        case m2c::khudnavigation: 	goto hudnavigation;
        case m2c::khudsidewinder: 	goto hudsidewinder;
        case m2c::khudskyflash: 	goto hudskyflash;
        case m2c::kinitcont: 	goto initcont;
        case m2c::kinitdone: 	goto initdone;
        case m2c::kinithud: 	goto inithud;
        case m2c::kjp233clock: 	goto jp233clock;
        case m2c::klaserrangeclock: 	goto laserrangeclock;
        case m2c::klaserrangeok: 	goto laserrangeok;
        case m2c::klimitpitch: 	goto limitpitch;
        case m2c::kloftsteeringcue: 	goto loftsteeringcue;
        case m2c::knegpitch: 	goto negpitch;
        case m2c::knextbar: 	goto nextbar;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kpospitch: 	goto pospitch;
        case m2c::kprintpitch: 	goto printpitch;
        case m2c::kprojecthudpoint: 	goto projecthudpoint;
        case m2c::krotatemrkrline: 	goto rotatemrkrline;
        case m2c::ksetclip: 	goto setclip;
        case m2c::ksethudclip: 	goto sethudclip;
        case m2c::ksidewinderrange: 	goto sidewinderrange;
        case m2c::kskip1500m: 	goto skip1500m;
        case m2c::kskip400m: 	goto skip400m;
        case m2c::kskip600m: 	goto skip600m;
        case m2c::kskip900m: 	goto skip900m;
        case m2c::kskipa: 	goto skipa;
        case m2c::kskipb: 	goto skipb;
        case m2c::kskipbrg: 	goto skipbrg;
        case m2c::kskipc: 	goto skipc;
        case m2c::kskipd: 	goto skipd;
        case m2c::kskipirlock: 	goto skipirlock;
        case m2c::kskyflashrange: 	goto skyflashrange;
        case m2c::ksortflip: 	goto sortflip;
        case m2c::kstandbysight: 	goto standbysight;
        case m2c::kupdateacsymbol: 	goto updateacsymbol;
        case m2c::kupdateairspeed: 	goto updateairspeed;
        case m2c::kupdatealt: 	goto updatealt;
        case m2c::kupdatealtclock: 	goto updatealtclock;
        case m2c::kupdateaoa: 	goto updateaoa;
        case m2c::kupdateaoameter: 	goto updateaoameter;
        case m2c::kupdateclock: 	goto updateclock;
        case m2c::kupdateearlylate: 	goto updateearlylate;
        case m2c::kupdatehdg: 	goto updatehdg;
        case m2c::kupdatehud: 	goto updatehud;
        case m2c::kupdateils: 	goto updateils;
        case m2c::kupdatepitch: 	goto updatepitch;
        case m2c::kupdatevsi: 	goto updatevsi;
        default: return __dispatch_call(__disp, _state);
    };
}


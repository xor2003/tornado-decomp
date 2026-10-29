/* THIS IS GENERATED FILE */

        
#include "hud2.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updatehud2:
	// 2850 
	/* call	InitHUD2 ;* kill: assume all */
	CALL(inithud2, 0);
	// 0 ;------------------------------------
	// 0 ;* update HUD brackets / canopy frame
	// 0 ;------------------------------------
edummylabel1:
	// 4369 
	/* test	IronWork,1	;ironwork enabled? */
	TEST(ironwork, 1);
	/* jz	@F		;no -> */
	if (!(ironwork & 1)) {goto dummylabel1;}
	/* test	QuieterCockpit,1 */
	TEST(quietercockpit, 1);
	/* jz	@F		;no -> */
	if (!(quietercockpit & 1)) {goto dummylabel1;}
	/* call	DrawHUDBrackets2 */
	CALL(drawhudbrackets2, 0);
	/* call	UpdateAoAMeter2 */
	CALL(updateaoameter2, 0);
	// 0 ;------------------------
	// 0 ;* update HUD information
	// 0 ;------------------------
dummylabel1:
	// 4371 
	// 0 ;test	SSF_HUD,1	;HUD damaged?
	// 0 ;_JNZ	ExitHUD2		;yes ->
	/* call	InitHUD2 */
	CALL(inithud2, 0);
	/* test	HUDEnabled2,1	;HUD enabled? */
	TEST(hudenabled2, 1);
	/* jnz	__m2c_macrolocal_63_skip */
	if ((hudenabled2 & 1) != 0) {goto __m2c_macrolocal_63_skip;}
	/* jmp	ExitHUD2 */
	goto exithud2;
__m2c_macrolocal_63_skip:
	// 4373 
	// 0 ;no ->
	/* mov	bx,ArmMode */
	bx = armmode;
__disp=*(dw*)(((db*)&hudswitch2)+bx);
	/* jmp	HUDSwitch2[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
hudnavigation2:
	// 4375 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* test	ILSActive,1	;ILS active? */
	TEST(ilsactive, 1);
	/* jnz	@F		;yes -> */
	if ((ilsactive & 1) != 0) {goto dummylabel2;}
	/* call	UpdateACSymbol2 */
	CALL(updateacsymbol2, 0);
	/* jmp	ContNav2 */
	goto contnav2;
dummylabel2:
	// 4377 
	/* @@:		call	UpdateILS2 */
	CALL(updateils2, 0);
contnav2:
	// 4379 
	/* ContNav2:	jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudmanualbomb2:
	// 4381 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateACSymbol2 */
	CALL(updateacsymbol2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawCCIPMrkr2 */
	CALL(drawccipmrkr2, 0);
	/* call	DrawBombFall2 */
	CALL(drawbombfall2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudlaydownbomb2:
	// 4383 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateACSymbol2 */
	CALL(updateacsymbol2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawCCIPMrkr2 */
	CALL(drawccipmrkr2, 0);
	/* call	DrawGndTgtMrkr2 */
	CALL(drawgndtgtmrkr2, 0);
	/* call	DrawBombFall2 */
	CALL(drawbombfall2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudloftbomb2:
	// 4385 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateACSymbol2 */
	CALL(updateacsymbol2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr2 */
	CALL(drawgndtgtmrkr2, 0);
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
	/* call	UpdateClock2 */
	CALL(updateclock2, 0);
	/* cmp	LoftRatio,-1	;ratio valid? */
	CMP(loftratio, -1);
	/* je	@F		;no -> */
	if ((dw)(loftratio) == (dw)(-1)) {goto dummylabel3;}
	/* call	LoftSteeringCue2 */
	CALL(loftsteeringcue2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
dummylabel3:
	// 4387 
	/* @@: 		call	DrawSolidFall2 */
	CALL(drawsolidfall2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudlaserguided2:
	// 4389 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateACSymbol2 */
	CALL(updateacsymbol2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* call	DrawSolidFall2 */
	CALL(drawsolidfall2, 0);
	/* call	LaserRangeClock2 */
	CALL(laserrangeclock2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudjp2332:
	// 4391 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateACSymbol2 */
	CALL(updateacsymbol2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* test	ArmLock,1  	;release in progress? */
	TEST(armlock, 1);
	/* jnz	@F	   	;yes -> */
	if ((armlock & 1) != 0) {goto dummylabel4;}
	// 0 ;* approaching target
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawCCIPMrkr2 */
	CALL(drawccipmrkr2, 0);
	/* call	DrawGndTgtMrkr2 */
	CALL(drawgndtgtmrkr2, 0);
	/* call	DrawSolidFall2 */
	CALL(drawsolidfall2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;* release in progress
dummylabel4:
	// 4393 
	/* @@:		call	JP233Clock2 */
	CALL(jp233clock2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudalarmdir2:
	// 4395 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* call	DrawCentreCross2 */
	CALL(drawcentrecross2, 0);
	/* test	RWRTgtValid,1	;target valid? */
	TEST(rwrtgtvalid, 1);
	/* jz	@F		;no -> */
	if (!(rwrtgtvalid & 1)) {goto dummylabel5;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr2 */
	CALL(drawgndtgtmrkr2, 0);
	/* call	DrawAlarmClock2 */
	CALL(drawalarmclock2, 0);
dummylabel5:
	// 4397 
	/* @@:		jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudalarmind2:
	// 4399 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	/* call	DrawCentreCross2 */
	CALL(drawcentrecross2, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr2 */
	CALL(drawgndtgtmrkr2, 0);
	/* call	DrawAlarmClock2 */
	CALL(drawalarmclock2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudcannon2:
	// 4401 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* mov	si,OFFSET Cannon2$ */
	si = m2c::near_offset_external(cannon2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* cmp	RadarMode,AIR_RADAR	;air radar on? */
	CMP(radarmode, 4);
	/* jne	@F			;no -> */
	if ((dw)(radarmode) != (dw)(4)) {goto dummylabel6;}
	// 0 ;* >>>>> air-to-air mode <<<<<
	/* call	UpdateAlt2 */
	CALL(updatealt2, 0);
	/* call	DrawAirTarget2 */
	CALL(drawairtarget2, 0);
	/* jc	StandbySight2	;invalid target or error -> */
	if (CF) {goto standbysight2;}
	/* call	DrawIntercept2 */
	CALL(drawintercept2, 0);
	/* call	DrawCentreCross2 */
	CALL(drawcentrecross2, 0);
	/* call	DispAirTgtData2 */
	CALL(dispairtgtdata2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;* >>>>> air-to-ground mode <<<<<
dummylabel6:
	// 4403 
	/* @@:		call	UpdateVSI2 */
	CALL(updatevsi2, 0);
	/* call	UpdateAltClock2 */
	CALL(updatealtclock2, 0);
	/* call	UpdateEarlyLate2 */
	CALL(updateearlylate2, 0);
	// 0 ;* check target valid (floating waypoint)
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	StandbySight2		;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto standbysight2;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	/* call	DrawGndTgtMrkr2 */
	CALL(drawgndtgtmrkr2, 0);
	/* jc	StandbySight2	;non-visible -> */
	if (CF) {goto standbysight2;}
	/* call	DrawCentreCross2 */
	CALL(drawcentrecross2, 0);
	/* call	DrawGndGunClock2 */
	CALL(drawgndgunclock2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
standbysight2:
	// 4405 
	/* StandbySight2:	call	DrawStandby2 */
	CALL(drawstandby2, 0);
	/* jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudsidewinder2:
	// 4407 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateAlt2 */
	CALL(updatealt2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* mov	si,OFFSET Sidewinder2$ */
	si = m2c::near_offset_external(sidewinder2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* call	DrawCentreCross2 */
	CALL(drawcentrecross2, 0);
	/* call	DrawAirTarget2 */
	CALL(drawairtarget2, 0);
	/* jc	@F		;invalid target or error -> */
	if (CF) {goto dummylabel7;}
	/* call	DrawIntercept2 */
	CALL(drawintercept2, 0);
	/* call	DispAirTgtData2 */
	CALL(dispairtgtdata2, 0);
dummylabel7:
	// 4409 
	/* @@:		jmp	ExitHUD2 */
	goto exithud2;
	// 0 ;---------------------------
hudskyflash2:
	// 4411 
	// 0 ;---------------------------
	/* call	UpdateAoA2 */
	CALL(updateaoa2, 0);
	/* call	UpdateAlt2 */
	CALL(updatealt2, 0);
	/* call	UpdateAirSpeed2 */
	CALL(updateairspeed2, 0);
	/* call	UpdateHdg2 */
	CALL(updatehdg2, 0);
	/* call	UpdatePitch2 */
	CALL(updatepitch2, 0);
	/* mov	si,OFFSET SkyFlash2$ */
	si = m2c::near_offset_external(skyflash2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* call	DrawCentreCross2 */
	CALL(drawcentrecross2, 0);
	/* call	DrawAirTarget2 */
	CALL(drawairtarget2, 0);
	/* jc	ExitHUD2		;invalid target or error -> */
	if (CF) {goto exithud2;}
	/* call	DrawIntercept2 */
	CALL(drawintercept2, 0);
	/* call	DispAirTgtData2 */
	CALL(dispairtgtdata2, 0);
exithud2:
	// 4413 
	/* ret */
	RETN(0);
inithud2:
	// 3113 
	// 0 ;------------------------
	// 0 ;* check for HUD on / off
	// 0 ;------------------------
	// 0 ;mov	al,Key[K_CTRL]
	// 0 ;and	al,Key[K_O]	;quit?
edummylabel2:
	// 4415 
	/* mov	al,BYTE PTR KF_HUDSwitch[K_STATUS] */
	al = *((&kf_hudswitch)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudswitch)+k_status););	// 3123 						mov	al,BYTE PTR KF_HUDSwitch[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel8;}
	/* mov	al,BYTE PTR KF_HUDSwitch[K_STATUS] */
	al = *((&kf_hudswitch)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudswitch)+k_status););	// 3129 						mov	al,BYTE PTR KF_HUDSwitch[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel8;}
	/* xor	HUDEnabled2,1	;toggle on / off */
	XOR(hudenabled2, 1);
	/* jnz	InitCont2	;on -> */
	if (hudenabled2 != 0) {goto initcont2;}
	/* jmp	InitDone2 */
	goto initdone2;
dummylabel8:
	// 4417 
	/* test	HUDEnabled2,1	;HUD enabled? */
	TEST(hudenabled2, 1);
	/* jz	InitDone2	;no -> */
	if (!(hudenabled2 & 1)) {goto initdone2;}
	// 0 ;----------------------------------
	// 0 ;* check for mach num option toggle
	// 0 ;----------------------------------
	/* mov	al,BYTE PTR KF_HUDOption[K_STATUS] */
	al = *((&kf_hudoption)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudoption)+k_status););	// 3144 						mov	al,BYTE PTR KF_HUDOption[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel9;}
	/* xor	MachOption2,1	;toggle mach num option */
	XOR(machoption2, 1);
	/* jmp	InitCont2 */
	goto initcont2;
	// 0 ;-------------------------------
	// 0 ;* check for HUD contrast change
	// 0 ;-------------------------------
dummylabel9:
	// 4419 
	/* mov	al,BYTE PTR KF_HUDContrast[K_STATUS] */
	al = *((&kf_hudcontrast)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hudcontrast)+k_status););	// 3155 				        mov	al,BYTE PTR KF_HUDContrast[K_STATUS] */
	/* jz	InitCont2 */
	if (!(al & al)) {goto initcont2;}
	/* mov	SSF_Engine1,1 */
	ssf_engine1 = 1;
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
initcont2:
	// 4421 
	/* InitCont2:	cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	@F */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel10;}
	/* mov	HdgYOff2,40 */
	hdgyoff2 = 40;
	/* mov	CLIP_ABOVE2,5+48;5  ;ori=5 */
	clip_above2 = 5+48;
	/* mov	CLIP_BELOW2, 80+48;;HUD_Y_FS_ORG+26;hack ori=80, then HUD_Y_FS_ORG+32 */
	clip_below2 = 80+48;
	// 0 ;+120 if HUD_Y_FS_ORG is 96 hacked success kbs frankie on 26/11/2017
	/* jmp	SetClip2 */
	goto setclip2;
dummylabel10:
	// 4423 
	/* @@:		mov	HdgYOff2,-38 */
	hdgyoff2 = -38;
	/* mov	CLIP_ABOVE2,16+48  ;hack ori=16, then 16+48 */
	clip_above2 = 16+48;
	/* mov	CLIP_BELOW2,94+48 */
	clip_below2 = 94+48;
	// 0 ;hack ori=94, then 94+48
setclip2:
	// 4425 
	/* SetClip2:	call	SetHUDClip2 */
	CALL(sethudclip2, 0);
	// 0 ;-----------------------
	// 0 ;* init print attributes
	// 0 ;-----------------------
	/* mov	si,OFFSET SetUp2$ */
	si = m2c::near_offset_external(setup2dol);
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
	/* mov	si,OFFSET VP2 */
	si = m2c::near_offset_external(vp2);
	/* call	VSetViewport */
	CALLF(vsetviewport, 0);
initdone2:
	// 4427 
	/* InitDone2:	ret */
	RETN(0);
drawhudbrackets2:
	// 3207 
	/* call	DrawBrackets ;* kill: assume all */
	CALLF(drawbrackets, 0);
edummylabel3:
	// 4429 
	/* ret */
	RETN(0);
updateaoameter2:
	// 3221 
	// 0 ;* sort -ve AoA
edummylabel4:
	// 4431 
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
	// 4433 
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	// 4433 
	/* adc	ax,0		;1/2 bit round up (0 ..43) */
	ADC(ax, 0);
	// 0 ;* draw meter bar (3 pixels wide)
	/* mov	bl,HUD_Y_FS_ORG+44 */
	bl = 96+44;
	/* mov	bh,bl		;y2 = y1 */
	bh = bl;
	/* sub	bl,al		;y1 = y1 - bar length */
	SUB(bl, al);
	/* push	bx */
	PUSH(bx);
	/* mov	cx,HUD_X_FS_ORG-84 */
	cx = 160-84;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* mov	cx,HUD_X_FS_ORG-83 */
	cx = 160-83;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* pop	bx */
	POP(bx);
	/* mov	cx,HUD_X_FS_ORG-82 */
	cx = 160-82;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
updateaoa2:
	// 3264 
	// 0 ;* draw AoA graduations
edummylabel5:
	// 4435 
	/* mov	cx,HUD_X_FS_ORG+-56 */
	cx = 160+-56;
	/* mov	bl,HUD_Y_FS_ORG+-15 */
	bl = 96+-15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3272 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_FS_ORG+-15 */
	bl = 96+-15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3277 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_FS_ORG+-10 */
	bl = 96+-10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3282 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-56 */
	cx = 160+-56;
	/* mov	bl,HUD_Y_FS_ORG+-5 */
	bl = 96+-5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3287 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_FS_ORG+-5 */
	bl = 96+-5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3292 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3297 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-56 */
	cx = 160+-56;
	/* mov	bl,HUD_Y_FS_ORG++5 */
	bl = 96+5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3302 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_FS_ORG++5 */
	bl = 96+5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3307 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	bl,HUD_Y_FS_ORG++10 */
	bl = 96+10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3312 						call	SetPixel
	// 0 ;* draw AoA zero line
	/* mov	cx,HUD_X_FS_ORG+-54 */
	cx = 160+-54;
	/* mov	dx,HUD_X_FS_ORG+-52 */
	dx = 160+-52;
	/* mov	bl,HUD_Y_FS_ORG++15 */
	bl = 96+15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3321 						call	HLineDraw
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
	// 4437 
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	// 4437 
	/* adc	ax,0		;1/2 bit round up (0 .. 22) */
	ADC(ax, 0);
	// 0 ;* draw AoA indicator line
	/* mov	bl,HUD_Y_FS_ORG+15 */
	bl = 96+15;
	/* mov	bh,bl		;y2 = y1 */
	bh = bl;
	/* sub	bl,al		;y1 = y1 - line length */
	SUB(bl, al);
	/* mov	cx,HUD_X_FS_ORG-51 */
	cx = 160-51;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
updatevsi2:
	// 3354 
	// 0 ;* draw VSI graduations
edummylabel6:
	// 4439 
	/* mov	cx,HUD_X_FS_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_FS_ORG+-15 */
	bl = 96+-15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3362 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++49 */
	cx = 160+49;
	/* mov	bl,HUD_Y_FS_ORG+-10 */
	bl = 96+-10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3367 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_FS_ORG+-10 */
	bl = 96+-10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3372 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_FS_ORG+-5 */
	bl = 96+-5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3377 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_FS_ORG++5 */
	bl = 96+5;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3382 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++49 */
	cx = 160+49;
	/* mov	bl,HUD_Y_FS_ORG++10 */
	bl = 96+10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3387 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_FS_ORG++10 */
	bl = 96+10;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3392 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++51 */
	cx = 160+51;
	/* mov	bl,HUD_Y_FS_ORG++15 */
	bl = 96+15;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3397 						call	SetPixel
	// 0 ;* draw VSI zero line
	/* mov	cx,HUD_X_FS_ORG++52 */
	cx = 160+52;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3405 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++53 */
	cx = 160+53;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3410 						call	SetPixel
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
	// 4441 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* draw VSI indicator line
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* mov	bh,bl		;y2 = y1 */
	bh = bl;
	/* sub	bl,al		;y1 = y1 - line length */
	SUB(bl, al);
	/* mov	cx,HUD_X_FS_ORG+54 */
	cx = 160+54;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* ret */
	RETN(0);
updatealtclock2:
	// 3451 
	// 0 ;* draw altitude clock graduations
edummylabel7:
	// 4443 
	/* mov	cx,HUD_X_FS_ORG++45 */
	cx = 160+45;
	/* mov	bl,HUD_Y_FS_ORG+-42 */
	bl = 96+-42;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3459 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++53 */
	cx = 160+53;
	/* mov	bl,HUD_Y_FS_ORG+-40 */
	bl = 96+-40;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3464 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++58 */
	cx = 160+58;
	/* mov	bl,HUD_Y_FS_ORG+-35 */
	bl = 96+-35;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3469 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++58 */
	cx = 160+58;
	/* mov	bl,HUD_Y_FS_ORG+-27 */
	bl = 96+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3474 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++53 */
	cx = 160+53;
	/* mov	bl,HUD_Y_FS_ORG+-22 */
	bl = 96+-22;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3479 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++45 */
	cx = 160+45;
	/* mov	bl,HUD_Y_FS_ORG+-20 */
	bl = 96+-20;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3484 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++37 */
	cx = 160+37;
	/* mov	bl,HUD_Y_FS_ORG+-22 */
	bl = 96+-22;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3489 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++32 */
	cx = 160+32;
	/* mov	bl,HUD_Y_FS_ORG+-27 */
	bl = 96+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3494 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++32 */
	cx = 160+32;
	/* mov	bl,HUD_Y_FS_ORG+-35 */
	bl = 96+-35;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3499 						call	SetPixel
	/* mov	cx,HUD_X_FS_ORG++37 */
	cx = 160+37;
	/* mov	bl,HUD_Y_FS_ORG+-40 */
	bl = 96+-40;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3504 						call	SetPixel
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
	/* mov	si,OFFSET RadAlt2$ */
	si = m2c::near_offset_external(radalt2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp	AltClockBug2 */
	goto altclockbug2;
	// 0 ;* print barometric altitude
dummylabel14:
	// 4445 
	/* @@:		push	ZftLo		;store clock bug value */
	PUSH(zftlo);
	/* push	ZftHi */
	PUSH(zfthi);
	/* mov	si,OFFSET BarAlt2$ */
	si = m2c::near_offset_external(baralt2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;-------------------------
	// 0 ;* calc clock bug position
	// 0 ;-------------------------
	// 0 ;* pos = remainder(alt / 1000) * 2066 / 32768 = 0 .. 63
altclockbug2:
	// 4447 
	/* AltClockBug2:	pop	dx		;restore clock bug value */
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
	/* jae	BugQuad4b */
	if ((dw)(ax) >= (dw)(48)) {goto bugquad4b;}
	/* cmp	ax,32 */
	CMP(ax, 32);
	/* jae	BugQuad3b */
	if ((dw)(ax) >= (dw)(32)) {goto bugquad3b;}
	/* cmp	ax,16 */
	CMP(ax, 16);
	/* jae	BugQuad2b */
	if ((dw)(ax) >= (dw)(16)) {goto bugquad2b;}
	// 0 ;* case 0 .. 15
	// 0 ;*    index = pos * 2
	// 0 ;*    x sign = 0
	// 0 ;*    y sign = 0
bugquad1b:
	// 4449 
	/* BugQuad1b:	mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;index = pos * 2 */
	SHL(bx, 1);
	/* mov	dx,00000h	;x sign = 0, y sign = 0 */
	dx = 0x00000;
	/* jmp	DrawAltBug2 */
	goto drawaltbug2;
	// 0 ;* case 16 .. 31
	// 0 ;*    index = (32 - pos) * 2
	// 0 ;*    x sign = 0
	// 0 ;*    y sign = -1
bugquad2b:
	// 4451 
	/* BugQuad2b:	mov	bx,32 */
	bx = 32;
	/* sub	bx,ax */
	SUB(bx, ax);
	/* shl	bx,1		;index = (32 - pos) * 2 */
	SHL(bx, 1);
	/* mov	dx,0ff00h	;x sign = 0, y sign = -1 */
	dx = 0x0ff00;
	/* jmp	DrawAltBug2 */
	goto drawaltbug2;
	// 0 ;* case 32 .. 47
	// 0 ;*    index = (pos - 32) * 2
	// 0 ;*    x sign = -1
	// 0 ;*    y sign = -1
bugquad3b:
	// 4453 
	/* BugQuad3b:	mov	bx,ax */
	bx = ax;
	/* sub	bx,32 */
	SUB(bx, 32);
	/* shl	bx,1		;index = (pos - 32) * 2 */
	SHL(bx, 1);
	/* mov	dx,0ffffh	;x sign = -1, y sign = -1 */
	dx = 0x0ffff;
	/* jmp	DrawAltBug2 */
	goto drawaltbug2;
	// 0 ;* case 48 .. 63
	// 0 ;*    index = (64 - pos) * 2
	// 0 ;*    x sign = -1
	// 0 ;*    y sign = 0
	// 0 ;* end
bugquad4b:
	// 4455 
	/* BugQuad4b:	mov	bx,64 */
	bx = 64;
	/* sub	bx,ax */
	SUB(bx, ax);
	/* shl	bx,1		;index = (64 - pos) * 2 */
	SHL(bx, 1);
	/* mov	dx,000ffh	;x sign = -1, y sign = 0 */
	dx = 0x000ff;
drawaltbug2:
	// 4457 
	/* DrawAltBug2:	push	bx */
	PUSH(bx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,AltBugXY1b[bx+0] */
	al = *((&altbugxy1b)+bx+0);
	/* xor	al,dl		;sort x sign */
	XOR(al, dl);
	/* sub	al,dl */
	SUB(al, dl);
	/* cbw */
	CBW;
	/* add	ax,HUD_X_FS_ORG+45	;add offset to clock x origin */
	ADD(ax, 160+45);
	/* mov	cx,ax */
	cx = ax;
	/* mov	al,AltBugXY1b[bx+1] */
	al = *((&altbugxy1b)+bx+1);
	/* xor	al,dh		;sort y sign */
	XOR(al, dh);
	/* sub	al,dh */
	SUB(al, dh);
	/* add	al,HUD_Y_FS_ORG-31	;add offset to clock y origin */
	ADD(al, 96-31);
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
	/* mov	al,AltBugXY2b[bx+0] */
	al = *((&altbugxy2b)+bx+0);
	/* xor	al,dl		;sort x sign */
	XOR(al, dl);
	/* sub	al,dl */
	SUB(al, dl);
	/* cbw */
	CBW;
	/* add	ax,HUD_X_FS_ORG+45	;add offset to clock x origin */
	ADD(ax, 160+45);
	/* mov	cx,ax */
	cx = ax;
	/* mov	al,AltBugXY2b[bx+1] */
	al = *((&altbugxy2b)+bx+1);
	/* xor	al,dh		;sort y sign */
	XOR(al, dh);
	/* sub	al,dh */
	SUB(al, dh);
	/* add	al,HUD_Y_FS_ORG-31	;add offset to clock y origin */
	ADD(al, 96-31);
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
	/* mov	PrtLn,HUD_Y_FS_ORG-27 */
	prtln = 96-27;
	/* mov	PrtCl,HUD_X_FS_ORG+44 */
	prtcl = 160+44;
	/* mov	al,'T' */
	al = 'T';
	/* call	PrintChar */
	CALLF(printchar, 0);
dummylabel15:
	// 4459 
	/* @@:		ret */
	RETN(0);
updatealt2:
	// 3646 
	// 0 ;* if TrueRadAlt < 5000 then
	// 0 ;*    print radar altitude "Rdddd"
	// 0 ;* else
	// 0 ;*    print barometric altitude "dddd0" (lsd always zero)
	// 0 ;* end
edummylabel8:
	// 4461 
	/* mov	si,OFFSET RadAlt2$	;assume disp rad alt */
	si = m2c::near_offset_external(radalt2dol);
	/* cmp	TrueRadAlt,5000		;disp rad alt? */
	CMP(trueradalt, 5000);
	/* jb	@F			;yes -> */
	if ((dw)(trueradalt) < (dw)(5000)) {goto dummylabel16;}
	/* mov	si,OFFSET BarAlt2$	;disp bar alt */
	si = m2c::near_offset_external(baralt2dol);
dummylabel16:
	// 4463 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
updateacsymbol2:
	// 3668 
	/* cmp	TornadoType,ADV_TORNADO	;ADV? */
	CMP(tornadotype, 2);
edummylabel9:
	// 4465 
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel17;}
	/* mov	bl,HUD_Y_FS_ORG+-6 */
	bl = 96+-6;
	/* mov	bh,HUD_Y_FS_ORG+-3 */
	bh = 96+-3;
	/* mov	cx,HUD_X_FS_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;fin (ADV only)
/* m2c-phantom removed: 	J(CALLF(vlinedraw,0));	// 3678 call	VLineDraw */
dummylabel17:
	// 4467 
	/* @@:	mov	cx,HUD_X_FS_ORG+-1 */
	cx = 160+-1;
	/* mov	dx,HUD_X_FS_ORG++1 */
	dx = 160+1;
	/* mov	bl,HUD_Y_FS_ORG+-2 */
	bl = 96+-2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3684 call	HLineDraw
	/* mov	cx,HUD_X_FS_ORG+-1 */
	cx = 160+-1;
	/* mov	dx,HUD_X_FS_ORG++1 */
	dx = 160+1;
	/* mov	bl,HUD_Y_FS_ORG++2 */
	bl = 96+2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3690 						call	HLineDraw
	/* mov	cx,HUD_X_FS_ORG+-8 */
	cx = 160+-8;
	/* mov	dx,HUD_X_FS_ORG+-3 */
	dx = 160+-3;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3696 						call	HLineDraw
	/* mov	cx,HUD_X_FS_ORG++3 */
	cx = 160+3;
	/* mov	dx,HUD_X_FS_ORG++8 */
	dx = 160+8;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 3702 						call	HLineDraw
	/* mov	bl,HUD_Y_FS_ORG+-1 */
	bl = 96+-1;
	/* mov	bh,HUD_Y_FS_ORG++1 */
	bh = 96+1;
	/* mov	cx,HUD_X_FS_ORG+-2 */
	cx = 160+-2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 3708 						call	VLineDraw
	/* mov	bl,HUD_Y_FS_ORG+-1 */
	bl = 96+-1;
	/* mov	bh,HUD_Y_FS_ORG++1 */
	bh = 96+1;
	/* mov	cx,HUD_X_FS_ORG++2 */
	cx = 160+2;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 3714 						call	VLineDraw
	/* ret */
	RETN(0);
updateairspeed2:
	// 3725 
	/* test	MachOption2,1	;display mach num? */
	TEST(machoption2, 1);
edummylabel10:
	// 4469 
	/* jnz	@F		;yes -> */
	if (!ZF) {goto dummylabel18;}
	// 0 ;----------------------
	// 0 ;* display airspeed kts
	// 0 ;----------------------
	/* mov	si,OFFSET Vkts2$ */
	si = m2c::near_offset_external(vkts2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp	AirSpeedExit2 */
	goto airspeedexit2;
	// 0 ;------------------
	// 0 ;* display mach num
	// 0 ;------------------
dummylabel18:
	// 4471 
	/* @@:		mov	ax,DispMachNum */
	ax = dispmachnum;
	/* aam			;ah = integer, al = fraction */
	AAM;
	// 0 ;* print "d.d"
	/* mov	PrtLn,HUD_Y_FS_ORG-33 */
	prtln = 96-33;
	/* mov	PrtCl,HUD_X_FS_ORG-52 */
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
	/* mov	cx,HUD_X_FS_ORG+-47 */
	cx = 160+-47;
	/* mov	bl,HUD_Y_FS_ORG+-29 */
	bl = 96+-29;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(setpixel,0));	// 3758 						call	SetPixel
airspeedexit2:
	// 4473 
	/* AirSpeedExit2:	ret */
	RETN(0);
updatehdg2:
	// 3769 
	// 0 ;* set sprite clipping window
edummylabel11:
	// 4475 
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* add	bl,BYTE PTR HdgYOff2 */
	ADD(bl, *(db*)(&hdgyoff2));
	/* mov	bh,bl */
	bh = bl;
	/* sub	bl,6 */
	SUB(bl, 6);
	/* mov	cx,HUD_X_FS_ORG-24 */
	cx = 160-24;
	/* mov	dx,HUD_X_FS_ORG+23 */
	dx = 160+23;
	/* call	SetSSpriteClip */
	CALLF(setsspriteclip, 0);
	// 0 ;* draw heading datum marker
	/* mov	bl,HUD_Y_FS_ORG+1 */
	bl = 96+1;
	/* add	bl,BYTE PTR HdgYOff2 */
	ADD(bl, *(db*)(&hdgyoff2));
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,3 */
	ADD(bh, 3);
	/* mov	cx,HUD_X_FS_ORG */
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
	// 4477 
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
	/* mov	cx,HUD_X_FS_ORG-20 */
	cx = 160-20;
	/* sub	cx,dx */
	SUB(cx, dx);
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* add	bl,BYTE PTR HdgYOff2 */
	ADD(bl, *(db*)(&hdgyoff2));
	/* mov	dx,7		;draw 7 dots */
	dx = 7;
hdgdotloop2:
	// 4479 
	/* HdgDotLoop2:	cmp	cx,HUD_X_FS_ORG-24	;clip left? */
	CMP(cx, 160-24);
	/* jb	@F		;yes -> */
	if ((dw)(cx) < (dw)(160-24)) {goto dummylabel20;}
	/* cmp	cx,HUD_X_FS_ORG+23	;clip right? */
	CMP(cx, 160+23);
	/* ja	HdgDigits2	;yes -> */
	if ((dw)(cx) > (dw)(160+23)) {goto hdgdigits2;}
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
	// 4481 
	/* @@:		add	cx,10 */
	ADD(cx, 10);
	/* dec	dx */
	DEC(dx);
	/* jnz	HdgDotLoop2 */
	if (dx != 0) {goto hdgdotloop2;}
	// 0 ;* draw heading digits (every 10 degs (20 pixels))
hdgdigits2:
	// 4483 
	/* HdgDigits2:	sub	bx,4 */
	SUB(bx, 4);
	/* mov	SpriteY,bx */
	spritey = bx;
	/* pop	dx		;restore offset */
	POP(dx);
	/* pop	bp		;restore reading */
	POP(bp);
	/* neg	dx */
	NEG(dx);
	/* add	dx,HUD_X_FS_ORG-20-1 */
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
	// 4485 
	/* @@:		mov	cx,4		;display 4 values */
	cx = 4;
hdgdigitloop2:
	// 4487 
	/* HdgDigitLoop2:	push	cx */
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
	// 4489 
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
	// 4491 
	/* @@:		loop	HdgDigitLoop2 */
	LOOP(hdgdigitloop2);
	/* call	SetHUDClip2 */
	CALL(sethudclip2, 0);
	// 0 ;* draw bearing indicator (to next waypoint)
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel24;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	SkipBrg2			;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto skipbrg2;}
dummylabel24:
	// 4493 
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
	// 4495 
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
	/* add	cx,HUD_X_FS_ORG */
	ADD(cx, 160);
	/* mov	bl,HUD_Y_FS_ORG+2 */
	bl = 96+2;
	/* add	bl,BYTE PTR HdgYOff2 */
	ADD(bl, *(db*)(&hdgyoff2));
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
skipbrg2:
	// 4497 
	/* SkipBrg2:	ret */
	RETN(0);
updatepitch2:
	// 3985 
	// 0 ;---------------------
	// 0 ;* calc rotated points
	// 0 ;---------------------
	// 0 ;* Px02 = M_CosR * 0 + M_SinR * -21
	// 0 ;* Py02 = M_CosR * -21 - M_SinR * 0
edummylabel12:
	// 4499 
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
	/* mov	Px02,ax */
	px02 = ax;
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
	/* mov	Py02,dx */
	py02 = dx;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4038 						mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4039 mov	ax,M_CosR */
	// 0 ;* Px1b = M_CosR * 8 + M_SinR * 0
	// 0 ;* Py1b = M_CosR * 0 - M_SinR * 8
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
	/* mov	Px1b,ax */
	px1b = ax;
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
	/* mov	Py1b,dx */
	py1b = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4088 mov	ax,M_SinR */
	// 0 ;* Px2b = M_CosR * 8 + M_SinR * 4
	// 0 ;* Py2b = M_CosR * 4 - M_SinR * 8
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4091 												mov	ax,M_CosR */
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
	/* mov	Px2b,ax */
	px2b = ax;
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
	/* mov	Py2b,dx */
	py2b = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4136 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4137 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4138 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4139 mov	ax,M_CosR */
	// 0 ;* Px3b = M_CosR * 10 + M_SinR * 0
	// 0 ;* Py3b = M_CosR * 0 - M_SinR * 10
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
	/* mov	Px3b,ax */
	px3b = ax;
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
	/* mov	Py3b,dx */
	py3b = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4188 mov	ax,M_SinR */
	// 0 ;* Px4b = M_CosR * 13 + M_SinR * 0
	// 0 ;* Py4b = M_CosR * 0 - M_SinR * 13
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4191 												mov	ax,M_CosR */
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
	/* mov	Px4b,ax */
	px4b = ax;
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
	/* mov	Py4b,dx */
	py4b = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4236 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4237 mov	ax,M_SinR */
	// 0 ;* Px5b = M_CosR * 15 + M_SinR * 0
	// 0 ;* Py5b = M_CosR * 0 - M_SinR * 15
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
	/* mov	Px5b,ax */
	px5b = ax;
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
	/* mov	Py5b,dx */
	py5b = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4286 mov	ax,M_SinR */
	// 0 ;* Px6b = M_CosR * 18 + M_SinR * 0
	// 0 ;* Py6b = M_CosR * 0 - M_SinR * 18
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4289 												mov	ax,M_CosR */
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
	/* mov	Px6b,ax */
	px6b = ax;
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
	/* mov	Py6b,dx */
	py6b = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4334 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4335 mov	ax,M_SinR */
	// 0 ;* Px7b = M_CosR * 20 + M_SinR * 0
	// 0 ;* Py7b = M_CosR * 0 - M_SinR * 20
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
	/* mov	Px7b,ax */
	px7b = ax;
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
	/* mov	Py7b,dx */
	py7b = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4384 mov	ax,M_SinR */
	// 0 ;* Px8b = M_CosR * 23 + M_SinR * 0
	// 0 ;* Py8b = M_CosR * 0 - M_SinR * 23
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4387 												mov	ax,M_CosR */
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
	/* mov	Px8b,ax */
	px8b = ax;
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
	/* mov	Py8b,dx */
	py8b = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4432 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4433 mov	ax,M_SinR */
	// 0 ;* Px9b = M_CosR * 25 + M_SinR * 0
	// 0 ;* Py9b = M_CosR * 0 - M_SinR * 25
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
	/* mov	Px9b,ax */
	px9b = ax;
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
	/* mov	Py9b,dx */
	py9b = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4482 mov	ax,M_SinR */
	// 0 ;* Px10b = M_CosR * 28 + M_SinR * 0
	// 0 ;* Py10b = M_CosR * 0 - M_SinR * 28
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4485 												mov	ax,M_CosR */
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
	/* mov	Px10b,ax */
	px10b = ax;
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
	/* mov	Py10b,dx */
	py10b = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4530 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4531 mov	ax,M_SinR */
	// 0 ;* Px11b = M_CosR * 21 + M_SinR * -4
	// 0 ;* Py11b = M_CosR * -4 - M_SinR * 21
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
	/* mov	Px11b,ax */
	px11b = ax;
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
	/* mov	Py11b,dx */
	py11b = dx;
	/* mov	ax,M_CosR */
	ax = m_cosr;
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4580 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4581 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4582 mov	ax,M_CosR */
	// 0 ;* Px12b = M_CosR * 21 + M_SinR * 4
	// 0 ;* Py12b = M_CosR * 4 - M_SinR * 21
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4585 												mov	ax,M_CosR */
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
	/* mov	Px12b,ax */
	px12b = ax;
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
	/* mov	Py12b,dx */
	py12b = dx;
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4630 						mov	ax,M_CosR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4631 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_sinr;);	// 4632 mov	ax,M_SinR */
/* m2c-phantom removed: 	R(ax = m_cosr;);	// 4633 mov	ax,M_CosR */
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
	// 0 ;* calc start x offset = Px02 * frac + Px02 * 2
	/* mov	bx,dx */
	bx = dx;
	/* mov	ax,Px02 */
	ax = px02;
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
	// 0 ;Px02 * frac
	/* mov	ax,Px02 */
	ax = px02;
	/* shl	ax,1		;Px02 * 2 */
	SHL(ax, 1);
	/* add	ax,dx	   	;Px02 * frac + Px02 * 2 */
	ADD(ax, dx);
	/* mov	BarXOff2,ax */
	barxoff2 = ax;
	// 0 ;* calc start y offset = Py02 * frac + Py02 * 2
	/* mov	ax,Py02 */
	ax = py02;
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
	// 0 ;Py02 * frac
	/* mov	ax,Py02 */
	ax = py02;
	/* shl	ax,1		;Py02 * 2 */
	SHL(ax, 1);
	/* add	ax,dx		;Py02 * frac + Py02 * 2 */
	ADD(ax, dx);
	/* mov	BarYOff2,ax */
	baryoff2 = ax;
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
	/* call	LimitPitch2 */
	CALL(limitpitch2, 0);
	/* mov	cx,4		;draw 4 bars */
	cx = 4;
barloop2:
	// 4501 
	/* BarLoop2: 	push	cx */
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
	/* call	DrawPitchBar2 */
	CALL(drawpitchbar2, 0);
	/* jmp	NextBar2 */
	goto nextbar2;
bar0:
	// 4503 
	/* Bar0:		call	DrawZeroBar2 */
	CALL(drawzerobar2, 0);
	/* jmp	NextBar2 */
	goto nextbar2;
bar90:
	// 4505 
	/* Bar90:		call	DrawSolidBar2 */
	CALL(drawsolidbar2, 0);
	/* jmp	NextBar2 */
	goto nextbar2;
bar_90:
	// 4507 
	/* Bar_90:		call	DrawBrokenBar2 */
	CALL(drawbrokenbar2, 0);
nextbar2:
	// 4509 
	/* NextBar2: 	pop	bp */
	POP(bp);
	/* pop	dx */
	POP(dx);
	/* add	bp,dx */
	ADD(bp, dx);
	/* call	LimitPitch2 */
	CALL(limitpitch2, 0);
	/* mov	ax,Px02 */
	ax = px02;
	/* sub	BarXOff2,ax */
	SUB(barxoff2, ax);
	/* mov	ax,Py02 */
	ax = py02;
	/* sub	BarYOff2,ax */
	SUB(baryoff2, ax);
	/* pop	cx */
	POP(cx);
	/* loop	BarLoop2 */
	LOOP(barloop2);
	/* ret */
	RETN(0);
limitpitch2:
	// 4732 
	/* cmp	bp,9		;pitch <= 90 degs? */
	CMP(bp, 9);
edummylabel13:
	// 4511 
	/* jle	@F		;yes -> */
	if ((ZF || SF != OF)) {goto dummylabel26;}
	/* sub	bp,18		;flip pitch 180 degs */
	SUB(bp, 18);
	/* jmp	SortFlip2 */
	goto sortflip2;
dummylabel26:
	// 4513 
	/* @@:		cmp	bp,-9		;pitch >= =90 degs? */
	CMP(bp, -9);
	/* jge	@F		;yes -> */
	if ((short)(bp) >= (short)(-9)) {goto dummylabel27;}
	/* add	bp,18		;flip pitch 180 degs */
	ADD(bp, 18);
sortflip2:
	// 4515 
	/* SortFlip2:	neg	bp		;invert sign */
	NEG(bp);
	/* neg	dx		;invert count direction */
	NEG(dx);
	// 0 ;* flip points
	/* neg	Px1b */
	NEG(px1b);
	/* neg	Py1b */
	NEG(py1b);
	/* neg	Px2b */
	NEG(px2b);
	/* neg	Py2b */
	NEG(py2b);
	/* neg	Px3b */
	NEG(px3b);
	/* neg	Py3b */
	NEG(py3b);
	/* neg	Px4b */
	NEG(px4b);
	/* neg	Py4b */
	NEG(py4b);
	/* neg	Px5b */
	NEG(px5b);
	/* neg	Py5b */
	NEG(py5b);
	/* neg	Px6b */
	NEG(px6b);
	/* neg	Py6b */
	NEG(py6b);
	/* neg	Px7b */
	NEG(px7b);
	/* neg	Py7b */
	NEG(py7b);
	/* neg	Px8b */
	NEG(px8b);
	/* neg	Py8b */
	NEG(py8b);
	/* neg	Px9b */
	NEG(px9b);
	/* neg	Py9b */
	NEG(py9b);
	/* neg	Px10b */
	NEG(px10b);
	/* neg	Py10b */
	NEG(py10b);
	/* neg	Px11b */
	NEG(px11b);
	/* neg	Py11b */
	NEG(py11b);
	/* neg	Px12b */
	NEG(px12b);
	/* neg	Py12b */
	NEG(py12b);
dummylabel27:
	// 4517 
	/* @@:		ret */
	RETN(0);
drawpitchbar2:
	// 4778 
	/* push	bp		;store pitch value */
	PUSH(bp);
edummylabel14:
	// 4519 
	/* test	bp,bp		;+ve pitch? */
	TEST(bp, bp);
	/* jns	PosPitch2	;no -> */
	if ((short)((bp & bp)) >= 0) {goto pospitch2;}
	/* jmp	NegPitch2 */
	goto negpitch2;
	// 0 ;-----------------
	// 0 ;* +ve pitch value
	// 0 ;-----------------
pospitch2:
	// 4521 
	/* PosPitch2:	call	DrawSolidBar2 */
	CALL(drawsolidbar2, 0);
	/* call	DrawDownStroke2 */
	CALL(drawdownstroke2, 0);
	// 0 ;* set +ve digit origin
	/* mov	ax,Px11b */
	ax = px11b;
	/* add	ax,BarXOff2 */
	ADD(ax, barxoff2);
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
	/* add	ax,HUD_X_FS_ORG */
	ADD(ax, 160);
	/* mov	SpriteX,ax */
	spritex = ax;
	/* mov	ax,Py11b */
	ax = py11b;
	/* add	ax,BarYOff2 */
	ADD(ax, baryoff2);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* cbw */
	CBW;
	/* add	ax,HUD_Y_FS_ORG */
	ADD(ax, 96);
	/* mov	SpriteY,ax */
	spritey = ax;
	/* pop	bp */
	POP(bp);
	/* jmp	PrintPitch2 */
	goto printpitch2;
	// 0 ;-----------------
	// 0 ;* -ve pitch value
	// 0 ;-----------------
negpitch2:
	// 4523 
	/* NegPitch2:	call	DrawBrokenBar2 */
	CALL(drawbrokenbar2, 0);
	/* call	DrawDownStroke2 */
	CALL(drawdownstroke2, 0);
	// 0 ;* set -ve digit origin
	/* mov	ax,Px12b */
	ax = px12b;
	/* add	ax,BarXOff2 */
	ADD(ax, barxoff2);
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
	/* add	ax,HUD_X_FS_ORG */
	ADD(ax, 160);
	/* mov	cx,ax */
	cx = ax;
	/* mov	SpriteX,ax */
	spritex = ax;
	/* mov	ax,Py12b */
	ax = py12b;
	/* add	ax,BarYOff2 */
	ADD(ax, baryoff2);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;1/2 bit round up */
	SHL(ah, 1);
	/* adc	al,0 */
	ADC(al, 0);
	/* cbw */
	CBW;
	/* add	ax,HUD_Y_FS_ORG */
	ADD(ax, 96);
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
	/* call	ClipLine2 */
	CALL(clipline2, 0);
	/* pop	bp */
	POP(bp);
	/* neg	bp */
	NEG(bp);
	// 0 ;* print pitch value
	// 0 ;*
	// 0 ;* msd sprite offset = digit * 4 + (0 or 2 wrt even or odd) + OFFSET HUDDigits
	// 0 ;* '0' sprite offset = (0 or 2 wrt even or odd) + OFFSET HUDDigits
printpitch2:
	// 4525 
	/* PrintPitch2:	mov	ax,SpriteX */
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
drawzerobar2:
	// 4879 
	// 0 ;* draw rhs line
edummylabel15:
	// 4527 
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px10b */
	si = px10b;
	/* mov	di,Py10b */
	di = py10b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw lhs line
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px10b */
	si = px10b;
	/* mov	di,Py10b */
	di = py10b;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	/* ret */
	RETN(0);
drawsolidbar2:
	// 4907 
	// 0 ;* draw rhs line
edummylabel16:
	// 4529 
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px9b */
	si = px9b;
	/* mov	di,Py9b */
	di = py9b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw lhs line
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px9b */
	si = px9b;
	/* mov	di,Py9b */
	di = py9b;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	/* ret */
	RETN(0);
drawbrokenbar2:
	// 4935 
	// 0 ;* draw rhs line
edummylabel17:
	// 4531 
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px3b */
	si = px3b;
	/* mov	di,Py3b */
	di = py3b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw lhs line
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px3b */
	si = px3b;
	/* mov	di,Py3b */
	di = py3b;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw rhs line
	/* mov	cx,Px4b */
	cx = px4b;
	/* mov	bx,Py4b */
	bx = py4b;
	/* mov	si,Px5b */
	si = px5b;
	/* mov	di,Py5b */
	di = py5b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw lhs line
	/* mov	cx,Px4b */
	cx = px4b;
	/* mov	bx,Py4b */
	bx = py4b;
	/* mov	si,Px5b */
	si = px5b;
	/* mov	di,Py5b */
	di = py5b;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw rhs line
	/* mov	cx,Px6b */
	cx = px6b;
	/* mov	bx,Py6b */
	bx = py6b;
	/* mov	si,Px7b */
	si = px7b;
	/* mov	di,Py7b */
	di = py7b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw lhs line
	/* mov	cx,Px6b */
	cx = px6b;
	/* mov	bx,Py6b */
	bx = py6b;
	/* mov	si,Px7b */
	si = px7b;
	/* mov	di,Py7b */
	di = py7b;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw rhs line
	/* mov	cx,Px8b */
	cx = px8b;
	/* mov	bx,Py8b */
	bx = py8b;
	/* mov	si,Px9b */
	si = px9b;
	/* mov	di,Py9b */
	di = py9b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	// 0 ;* draw lhs line
	/* mov	cx,Px8b */
	cx = px8b;
	/* mov	bx,Py8b */
	bx = py8b;
	/* mov	si,Px9b */
	si = px9b;
	/* mov	di,Py9b */
	di = py9b;
	/* neg	cx		;reflect points */
	NEG(cx);
	/* neg	bx */
	NEG(bx);
	/* neg	si */
	NEG(si);
	/* neg	di */
	NEG(di);
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	/* ret */
	RETN(0);
drawdownstroke2:
	// 5011 
	/* mov	cx,Px1b ;* kill: assume all */
	cx = px1b;
edummylabel18:
	// 4533 
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px2b */
	si = px2b;
	/* mov	di,Py2b */
	di = py2b;
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	/* mov	cx,Px1b */
	cx = px1b;
	/* mov	bx,Py1b */
	bx = py1b;
	/* mov	si,Px2b */
	si = px2b;
	/* mov	di,Py2b */
	di = py2b;
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
	/* call	ClipScaledLine2 */
	CALL(_group1, m2c::kclipscaledline2);
	/* ret */
	RETN(0);
sethudclip2:
	// 5038 
	/* mov	bl,BYTE PTR CLIP_ABOVE2 ;* kill: assume all */
	bl = *(db*)(&clip_above2);
edummylabel19:
	// 4535 
	/* mov	bh,BYTE PTR CLIP_BELOW2 */
	bh = *(db*)(&clip_below2);
	/* mov	cx,CLIP_LEFT2 */
	cx = 104;
	/* mov	dx,CLIP_RIGHT2 */
	dx = 215;
	/* call	SetSSpriteClip */
	CALLF(setsspriteclip, 0);
	/* ret */
	RETN(0);
pancode_0_proc:
	// 5057 
clipscaledline2:
	// 4537 
	// 0 ;* kill: assume all
	// 0 ;* sort y1
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,BarYOff2 */
	ADD(ax, baryoff2);
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
	/* add	al,HUD_Y_FS_ORG */
	ADD(al, 96);
	/* mov	bl,al */
	bl = al;
	// 0 ;* sort x1
	/* mov	ax,cx */
	ax = cx;
	/* add	ax,BarXOff2 */
	ADD(ax, barxoff2);
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
	/* add	ax,HUD_X_FS_ORG */
	ADD(ax, 160);
	/* mov	cx,ax */
	cx = ax;
	// 0 ;* sort y2
	/* mov	ax,di */
	ax = di;
	/* add	ax,BarYOff2 */
	ADD(ax, baryoff2);
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
	/* add	al,HUD_Y_FS_ORG */
	ADD(al, 96);
	/* mov	bh,al */
	bh = al;
	// 0 ;* sort x2
	/* mov	ax,si */
	ax = si;
	/* add	ax,BarXOff2 */
	ADD(ax, barxoff2);
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
	/* add	ax,HUD_X_FS_ORG */
	ADD(ax, 160);
	/* mov	dx,ax */
	dx = ax;
	// 0 ;* ClipLine2 - clip line wrt HUD window, draw if totally visible
	// 0 ;*
	// 0 ;* pass: cx = x1
	// 0 ;*       bl = y1
	// 0 ;*       dx = x2
	// 0 ;*       bh = y2
	// 0 ;* ret : nothing
	// 0 ;* kill: assume all
clipline2:
	// 5125 
	/* mov	al,BYTE PTR CLIP_ABOVE2 */
	al = *(db*)(&clip_above2);
	/* cmp	bl,al		;y1 ok? */
	CMP(bl, al);
	/* jb	@F		;no -> */
	if ((db)(bl) < (db)(al)) {goto dummylabel28;}
	/* cmp	bh,al		;y2 ok? */
	CMP(bh, al);
	/* jb	@F		;no -> */
	if ((db)(bh) < (db)(al)) {goto dummylabel28;}
	/* mov	al,BYTE PTR CLIP_BELOW2 */
	al = *(db*)(&clip_below2);
	/* cmp	bl,al		;y1 ok? */
	CMP(bl, al);
	/* ja	@F		;no -> */
	if ((db)(bl) > (db)(al)) {goto dummylabel28;}
	/* cmp	bh,al		;y2 ok? */
	CMP(bh, al);
	/* ja	@F		;no -> */
	if ((db)(bh) > (db)(al)) {goto dummylabel28;}
	/* cmp	cx,CLIP_LEFT2	;x1 ok? */
	CMP(cx, 104);
	/* jb	@F		;no -> */
	if ((dw)(cx) < (dw)(104)) {goto dummylabel28;}
	/* cmp	dx,CLIP_LEFT2	;x2 ok? */
	CMP(dx, 104);
	/* jb	@F		;no -> */
	if ((dw)(dx) < (dw)(104)) {goto dummylabel28;}
	/* cmp	cx,CLIP_RIGHT2	;x1 ok? */
	CMP(cx, 215);
	/* ja	@F		;no -> */
	if ((dw)(cx) > (dw)(215)) {goto dummylabel28;}
	/* cmp	dx,CLIP_RIGHT2	;x2 ok? */
	CMP(dx, 215);
	/* ja	@F		;no -> */
	if ((dw)(dx) > (dw)(215)) {goto dummylabel28;}
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel28:
	// 4539 
	/* @@:		ret */
	RETN(0);
updateearlylate2:
	// 5161 
	/* cmp	WPTimeEarlyLate,-32768	;invalid? */
	CMP(wptimeearlylate, -32768);
edummylabel20:
	// 4541 
	/* je	ExitEarlyLate2		;yes -> */
	if (ZF) {goto exitearlylate2;}
	/* mov	cx,HUD_X_FS_ORG+-59 */
	cx = 160+-59;
	/* mov	bl,HUD_Y_FS_ORG+-27 */
	bl = 96+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;30 secs late
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5170 call	SetPixel */
	/* mov	cx,HUD_X_FS_ORG+-47 */
	cx = 160+-47;
	/* mov	bl,HUD_Y_FS_ORG+-27 */
	bl = 96+-27;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;on time
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5176 call	SetPixel */
	/* mov	cx,HUD_X_FS_ORG+-35 */
	cx = 160+-35;
	/* mov	bl,HUD_Y_FS_ORG+-27 */
	bl = 96+-27;
	/* mov	al,COL_HUD */
	al = 133;
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5180 						call	SetPixel */
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
	// 4543 
	/* __m2c_macrolocal_139_TestHi:		cmp	ax,12*256 */
	CMP(ax, 12*256);
	/* jle	__m2c_macrolocal_139_TestOk */
	if ((short)(ax) <= (short)(12*256)) {goto __m2c_macrolocal_139_testok;}
	/* mov	ax,12*256 */
	ax = 12*256;
__m2c_macrolocal_139_testok:
	// 4545 
	/* mov	al,ah */
	al = ah;
	/* cbw */
	CBW;
	/* add	ax,HUD_X_FS_ORG-47 */
	ADD(ax, 160-47);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,HUD_Y_FS_ORG-26 */
	bl = 96-26;
	/* mov	bh,HUD_Y_FS_ORG-24 */
	bh = 96-24;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
exitearlylate2:
	// 4547 
	/* ExitEarlyLate2:	ret */
	RETN(0);
updateils2:
	// 5215 
	// 0 ;------------------------
	// 0 ;* draw HUD centre marker
	// 0 ;------------------------
	// 0 ;* draw down stroke
edummylabel21:
	// 4549 
	/* mov	bl,HUD_Y_FS_ORG+-3 */
	bl = 96+-3;
	/* mov	bh,HUD_Y_FS_ORG+-1 */
	bh = 96+-1;
	/* mov	cx,HUD_X_FS_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 5228 						call	VLineDraw
	/* mov	bl,HUD_Y_FS_ORG+1 */
	bl = 96+1;
	/* mov	bh,HUD_Y_FS_ORG+3 */
	bh = 96+3;
	/* mov	cx,HUD_X_FS_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 5234 						call	VLineDraw
	// 0 ;* draw cross stroke
	/* mov	cx,HUD_X_FS_ORG+-3 */
	cx = 160+-3;
	/* mov	dx,HUD_X_FS_ORG+-1 */
	dx = 160+-1;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 5243 						call	HLineDraw
	/* mov	cx,HUD_X_FS_ORG+1 */
	cx = 160+1;
	/* mov	dx,HUD_X_FS_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 5249 						call	HLineDraw
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
	/* add	cx,HUD_X_FS_ORG */
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
	/* add	bx,HUD_Y_FS_ORG */
	ADD(bx, 96);
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
	RETF(0);
drawgndtgtmrkr2:
	// 5323 
	/* mov	MarkerX2,-1	;assume non-visible */
	markerx2 = -1;
edummylabel22:
	// 4551 
	/* mov	MarkerY2,-1 */
	*(markery2) = -1;
	// 0 ;----------------------------------
	// 0 ;* project target position onto HUD
	// 0 ;----------------------------------
	/* mov	si,OFFSET TGT_VIEW */
	si = m2c::near_offset_external(tgt_view);
	/* call	ProjectHUDPoint2 */
	CALL(projecthudpoint2, 0);
	/* jnc	__m2c_macrolocal_146_skip */
	if (!CF) {goto __m2c_macrolocal_146_skip;}
	/* jmp	FailGndTgtMrkr2 */
	goto failgndtgtmrkr2;
__m2c_macrolocal_146_skip:
	// 4553 
	// 0 ;non-visible ->
	// 0 ;--------------------
	// 0 ;* clip target marker (crude clip on marker centre)
	// 0 ;--------------------
	/* cmp	cx,HUD_X_FS_ORG-44 */
	CMP(cx, 160-44);
	/* jae	__m2c_macrolocal_147_skip */
	if ((dw)(cx) >= (dw)(160-44)) {goto __m2c_macrolocal_147_skip;}
	/* jmp	FailGndTgtMrkr2 */
	goto failgndtgtmrkr2;
__m2c_macrolocal_147_skip:
	// 4555 
	// 0 ;non-visible ->
	/* cmp	cx,HUD_X_FS_ORG+44 */
	CMP(cx, 160+44);
	/* jbe	__m2c_macrolocal_148_skip */
	if ((dw)(cx) <= (dw)(160+44)) {goto __m2c_macrolocal_148_skip;}
	/* jmp	FailGndTgtMrkr2 */
	goto failgndtgtmrkr2;
__m2c_macrolocal_148_skip:
	// 4557 
	// 0 ;non-visible ->
	/* cmp	bl,HUD_Y_FS_ORG-40-48 ;hack or=-40 */
	CMP(bl, 96-40-48);
	/* jb	FailGndTgtMrkr2	;non-visible -> */
	if ((db)(bl) < (db)(96-40-48)) {goto failgndtgtmrkr2;}
	/* cmp	bl,HUD_Y_FS_ORG+40-48 ;hack ori=-40 */
	CMP(bl, 96+40-48);
	/* ja	FailGndTgtMrkr2	;non-visible -> */
	if ((db)(bl) > (db)(96+40-48)) {goto failgndtgtmrkr2;}
	/* mov	MarkerX2,cx */
	markerx2 = cx;
	/* mov	MarkerY2,bl */
	*(markery2) = bl;
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
	/* call	RotateMrkrLine2 */
	CALL(rotatemrkrline2, 0);
	/* mov	Xe[0],2*128-1 */
	*(dw*)(((db*)&xe)+0) = 2*128-1;
	/* mov	Ye[0],0 */
	*(dw*)(((db*)&ye)+0) = 0;
	/* mov	Xe[2],4*128 */
	*(dw*)(((db*)&xe)+2) = 4*128;
	/* mov	Ye[2],0 */
	*(dw*)(((db*)&ye)+2) = 0;
	/* call	RotateMrkrLine2 */
	CALL(rotatemrkrline2, 0);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],4*128 */
	*(dw*)(((db*)&ye)+0) = 4*128;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],2*128 */
	*(dw*)(((db*)&ye)+2) = 2*128;
	/* call	RotateMrkrLine2 */
	CALL(rotatemrkrline2, 0);
	/* mov	Xe[0],0 */
	*(dw*)(((db*)&xe)+0) = 0;
	/* mov	Ye[0],-2*128 */
	*(dw*)(((db*)&ye)+0) = -2*128;
	/* mov	Xe[2],0 */
	*(dw*)(((db*)&xe)+2) = 0;
	/* mov	Ye[2],-4*128 */
	*(dw*)(((db*)&ye)+2) = -4*128;
	/* call	RotateMrkrLine2 */
	CALL(rotatemrkrline2, 0);
	/* clc			;visible */
	CLC;
	/* ret */
	RETN(0);
failgndtgtmrkr2:
	// 4559 
	/* FailGndTgtMrkr2:	stc			;non-visible */
	STC;
	/* ret */
	RETN(0);
drawccipmrkr2:
	// 5396 
	/* mov	MarkerX2,-1	;assume non-visible */
	markerx2 = -1;
edummylabel23:
	// 4561 
	/* mov	MarkerY2,-1 */
	*(markery2) = -1;
	// 0 ;--------------------------------
	// 0 ;* project CCIP position onto HUD
	// 0 ;--------------------------------
	/* mov	si,OFFSET CCIP_VIEW */
	si = m2c::near_offset_external(ccip_view);
	/* call	ProjectHUDPoint2 */
	CALL(projecthudpoint2, 0);
	/* jc	FailCCIPMrkr2	;non-visible -> */
	if (CF) {goto failccipmrkr2;}
	// 0 ;------------------
	// 0 ;* clip CCIP marker (crude clip on marker centre)
	// 0 ;------------------
	/* cmp	cx,HUD_X_FS_ORG-44 */
	CMP(cx, 160-44);
	/* jb	FailCCIPMrkr2	;non-visible -> */
	if ((dw)(cx) < (dw)(160-44)) {goto failccipmrkr2;}
	/* cmp	cx,HUD_X_FS_ORG+44 */
	CMP(cx, 160+44);
	/* ja	FailCCIPMrkr2	;non-visible -> */
	if ((dw)(cx) > (dw)(160+44)) {goto failccipmrkr2;}
	/* cmp	bl,HUD_Y_FS_ORG-40 */
	CMP(bl, 96-40);
	/* jb	FailCCIPMrkr2	;non-visible -> */
	if ((db)(bl) < (db)(96-40)) {goto failccipmrkr2;}
	/* cmp	bl,HUD_Y_FS_ORG+40 */
	CMP(bl, 96+40);
	/* ja	FailCCIPMrkr2	;non-visible -> */
	if ((db)(bl) > (db)(96+40)) {goto failccipmrkr2;}
	/* mov	MarkerX2,cx */
	markerx2 = cx;
	/* mov	MarkerY2,bl */
	*(markery2) = bl;
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
	/* call	RotateMrkrLine2 */
	CALL(rotatemrkrline2, 0);
	/* clc			;visible */
	CLC;
	/* ret */
	RETN(0);
failccipmrkr2:
	// 4563 
	/* FailCCIPMrkr2:	stc			;non-visible */
	STC;
	/* ret */
	RETN(0);
rotatemrkrline2:
	// 5454 
	/* call	VQuickLineClip	;(always visible) */
	CALLF(vquicklineclip, 0);
edummylabel24:
	// 4565 
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* sub	cx,HUD_X_FS_ORG */
	SUB(cx, 160);
	/* sub	bl,HUD_Y_FS_ORG-48  ;hack */
	SUB(bl, 96-48);
	// 0 ;-48 brings down the target marker to the centre;
	/* sub	dx,HUD_X_FS_ORG */
	SUB(dx, 160);
	/* sub	bh,HUD_Y_FS_ORG-48  ;hack */
	SUB(bh, 96-48);
	// 0 ;-48 brings down the target marker to the centre;
	/* add	cx,MarkerX2 */
	ADD(cx, markerx2);
	/* add	bl,MarkerY2 */
	ADD(bl, *(markery2));
	/* add	dx,MarkerX2 */
	ADD(dx, markerx2);
	/* add	bh,MarkerY2 */
	ADD(bh, *(markery2));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
projecthudpoint2:
	// 5491 
	/* call	CalcTgtRelCo ;*	 cockpit). */
	CALLF(calctgtrelco, 0);
edummylabel25:
	// 4567 
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
	// 4569 
	/* @@:		ret */
	RETN(0);
drawbombfall2:
	// 5509 
	/* cmp	MarkerY2,-1	;target marker visible? */
	CMP(*(markery2), -1);
edummylabel26:
	// 4571 
	/* jne	__m2c_macrolocal_149_skip */
	if (!ZF) {goto __m2c_macrolocal_149_skip;}
	/* jmp	DrawSolidFall2 */
	goto drawsolidfall2;
__m2c_macrolocal_149_skip:
	// 4573 
	// 0 ;no (return via DrawSolidFall2) ->
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
	/* js	HtMargOk2	;< 0 (no limit on -ve result) -> */
	if ((short)(dx) < 0) {goto htmargok2;}
	/* test	dx,dx		;> 65535? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel30;}
	/* cmp	ax,8191		;> 8191? */
	CMP(ax, 8191);
	/* jbe	HtMargOk2	;no -> */
	if ((dw)(ax) <= (dw)(8191)) {goto htmargok2;}
dummylabel30:
	// 4575 
	/* @@:		mov	ax,8191 */
	ax = 8191;
htmargok2:
	// 4577 
	/* HtMargOk2: 	mov	dx,ax */
	dx = ax;
	// 0 ;* calc target designator position relative to HUD origin
	/* mov	al,MarkerY2 */
	al = *(markery2);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* sub	ax,HUD_Y_FS_ORG */
	SUB(ax, 96);
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
	// 4579 
	/* @@:		cmp	bx,-2*128 */
	CMP(bx, -2*128);
	/* jle	@F */
	if ((short)(bx) <= (short)(-2*128)) {goto dummylabel32;}
	/* mov	bx,-2*128 */
	bx = -2*128;
dummylabel32:
	// 4581 
	/* @@:		cmp	cx,-2*128 */
	CMP(cx, -2*128);
	/* jle	@F */
	if ((short)(cx) <= (short)(-2*128)) {goto dummylabel33;}
	/* mov	cx,-2*128 */
	cx = -2*128;
	// 0 ;* draw upper section of bomb fall line
dummylabel33:
	// 4583 
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
	// 4585 
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
	// 4587 
	/* @@:		ret */
	RETN(0);
drawsolidfall2:
	// 5608 
	/* mov	Xe[0],0 ;* kill: assume all */
	*(dw*)(((db*)&xe)+0) = 0;
edummylabel27:
	// 4589 
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
	/* mov	al,COL_HUD ;Black */
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
	// 4591 
	/* @@:		ret */
	RETN(0);
updateclock2:
	// 5645 
	// 0 ;-------------------
	// 0 ;* calc clock origin
	// 0 ;-------------------
edummylabel28:
	// 4593 
	/* add	cx,HUD_X_FS_ORG */
	ADD(cx, 160);
	/* mov	ClockXOrg2,cx */
	clockxorg2 = cx;
	/* add	bl,HUD_Y_FS_ORG */
	ADD(bl, 96);
	/* mov	ClockYOrg2,bl */
	*(clockyorg2) = bl;
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
	/* mov	si,OFFSET CountClock1b */
	si = m2c::near_offset_external(countclock1b);
dummylabel37:
	// 4595 
	/* @@:		push	cx */
	PUSH(cx);
	/* lodsb			;fetch x offset */
	{ LODSB; }
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg2 */
	ADD(ax, clockxorg2);
	/* mov	cx,ax */
	cx = ax;
	/* lodsb	  		;fetch y offset */
	{ LODSB; }
	/* add	al,ClockYOrg2 */
	ADD(al, *(clockyorg2));
	/* mov	bl,al */
	bl = al;
	/* push	si */
	PUSH(si);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_152_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_152_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_152_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_152_skip;}
	// 0 ;Why was this whole section commented off? hack!
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1   ;<-- hack Frankie 12/12/2017
	// 0 ;jl	__m2c_macrolocal_152_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1+88;<-- hack Frankie 12/12/2017
	// 0 ;jge	__m2c_macrolocal_152_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;add bl,48; hack 22/8/2018
	/* mov	al,COL_HUD;This is the countdown clock! COL_BLACK */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_152_skip:
	// 4597 
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5691 						call	SetPixel */
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
	/* mov	al,CountClock2b[bx]	;fetch x offset */
	al = *((&countclock2b)+bx);
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg2 */
	ADD(ax, clockxorg2);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,CountClock2b[bx+1]	;fetch y offset */
	bl = *((&countclock2b)+bx+1);
	/* add	bl,ClockYOrg2 */
	ADD(bl, *(clockyorg2));
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_154_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_154_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_154_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_154_skip;}
	// 0 ;Why was this whole section commented off? hack!
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1   ;<-- hack Frankie 12/12/2017
	// 0 ;jl	__m2c_macrolocal_154_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1+88;<-- hack Frankie 12/12/2017
	// 0 ;jge	__m2c_macrolocal_154_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;add bl,48; hack 22/8/2018
	/* mov	al,COL_HUD;This is the countdown clock! COL_BLACK */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_154_skip:
	// 4599 
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5731 						call	SetPixel */
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
	/* mov	al,CountClock3b[bx]	;fetch x offset */
	al = *((&countclock3b)+bx);
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg2 */
	ADD(ax, clockxorg2);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,CountClock3b[bx+1]	;fetch y offset */
	bl = *((&countclock3b)+bx+1);
	/* add	bl,ClockYOrg2 */
	ADD(bl, *(clockyorg2));
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_156_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_156_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_156_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_156_skip;}
	// 0 ;Why was this whole section commented off? hack!
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1   ;<-- hack Frankie 12/12/2017
	// 0 ;jl	__m2c_macrolocal_156_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1+88;<-- hack Frankie 12/12/2017
	// 0 ;jge	__m2c_macrolocal_156_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;add bl,48; hack 22/8/2018
	/* mov	al,COL_HUD;This is the countdown clock! COL_BLACK */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_156_skip:
	// 4601 
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5763 						call	SetPixel */
	// 0 ;------------------------
	// 0 ;* draw 12 o'clock marker
	// 0 ;------------------------
	/* mov	al,CountClock3b[0]	;fetch x offset */
	al = *((&countclock3b)+0);
	/* cbw */
	CBW;
	/* add	ax,ClockXOrg2 */
	ADD(ax, clockxorg2);
	/* mov	cx,ax */
	cx = ax;
	/* mov	bl,CountClock3b[1]	;fetch y offset */
	bl = *((&countclock3b)+1);
	/* add	bl,ClockYOrg2 */
	ADD(bl, *(clockyorg2));
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_157_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_157_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_157_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_157_skip;}
	// 0 ;Why was this whole section commented off? hack!
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1   ;<-- hack Frankie 12/12/2017
	// 0 ;jl	__m2c_macrolocal_157_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;cmp	bl,HUD_Y_FS_ORG-44+1+88;<-- hack Frankie 12/12/2017
	// 0 ;jge	__m2c_macrolocal_157_skip                  ;<-- hack Frankie 12/12/2017
	// 0 ;add bl,48; hack 22/8/2018
	/* mov	al,COL_HUD;This is the countdown clock! COL_BLACK */
	al = 133;
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5786 						call	SetPixel */
__m2c_macrolocal_157_skip:
	// 4603 
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
laserrangeclock2:
	// 5800 
	/* test	LaserActive,1	;laser active? */
	TEST(laseractive, 1);
edummylabel29:
	// 4605 
	/* jz	ExitlaserRange2	;no -> */
	if (ZF) {goto exitlaserrange2;}
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
	/* jbe	LaserRangeOk2	;no -> */
	if ((dw)(ax) <= (dw)(32767)) {goto laserrangeok2;}
dummylabel38:
	// 4607 
	/* @@:		mov	ax,32767 */
	ax = 32767;
laserrangeok2:
	// 4609 
	/* LaserRangeOk2:	xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock2 */
	CALL(updateclock2, 0);
exitlaserrange2:
	// 4611 
	/* ExitLaserRange2:	ret */
	RETN(0);
jp233clock2:
	// 5826 
	// 0 ;* note: It is not important that the release clock starts at 12 o'clock,
	// 0 ;*       however, scale JP233Timer to use a decent amount of the available
	// 0 ;*	 resolution. See WEAPONS.ASM for JP233_PERIOD and scale accordingly.
edummylabel30:
	// 4613 
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
	/* call	UpdateClock2 */
	CALL(updateclock2, 0);
	/* ret */
	RETN(0);
loftsteeringcue2:
	// 5849 
	// 0 ;* hdg error = sbound(WPBrgFine - HFine, -1024, 1024) * 2
edummylabel31:
	// 4615 
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
	// 4617 
	/* __m2c_macrolocal_158_TestHi:		cmp	ax,1024 */
	CMP(ax, 1024);
	/* jle	__m2c_macrolocal_158_TestOk */
	if ((short)(ax) <= (short)(1024)) {goto __m2c_macrolocal_158_testok;}
	/* mov	ax,1024 */
	ax = 1024;
__m2c_macrolocal_158_testok:
	// 4619 
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
	/* mov	al,COL_HUD ;Black? */
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
	/* add	bx,HUD_Y_FS_ORG+BASE_LINE_Y */
	ADD(bx, 96+20);
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
	/* add	cx,HUD_X_FS_ORG */
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
	// 4621 
	/* @@:	mov	cx,HUD_X_FS_ORG+-BASE_LINE_WIDTH/2 */
	cx = 160+-40/2;
	/* mov	dx,HUD_X_FS_ORG+BASE_LINE_WIDTH/2 */
	dx = 160+40/2;
	/* mov	bl,HUD_Y_FS_ORG+BASE_LINE_Y */
	bl = 96+20;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 5946 call	HLineDraw
	/* ret */
	RETN(0);
drawairtarget2:
	// 5971 
	/* cmp	AirTgtPtr,-1 	;valid target? */
	CMP(airtgtptr, -1);
edummylabel32:
	// 4623 
	/* jne	__m2c_macrolocal_165_skip */
	if (!ZF) {goto __m2c_macrolocal_165_skip;}
	/* jmp	FailAirTarget2 */
	goto failairtarget2;
__m2c_macrolocal_165_skip:
	// 4625 
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
	/* jmp	FailAirTarget2 */
	goto failairtarget2;
__m2c_macrolocal_166_skip:
	// 4627 
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
	/* jmp	FailAirTarget2 */
	goto failairtarget2;
__m2c_macrolocal_167_skip:
	// 4629 
	// 0 ;error ->
	// 0 ;-----------------------------------------
	// 0 ;* hard clip to keep target symbol visible (useful for steering)
	// 0 ;-----------------------------------------
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jge	@F */
	if ((short)(cx) >= (short)(160-48)) {goto dummylabel40;}
	/* mov	cx,HUD_X_FS_ORG-48 */
	cx = 160-48;
dummylabel40:
	// 4631 
	/* @@:		cmp	cx,HUD_X_FS_ORG+47 */
	CMP(cx, 160+47);
	/* jle	@F */
	if ((short)(cx) <= (short)(160+47)) {goto dummylabel41;}
	/* mov	cx,HUD_X_FS_ORG+47 */
	cx = 160+47;
dummylabel41:
	// 4633 
	/* @@:		cmp	bx,48-43;HUD_Y_FS_ORG-43 */
	CMP(bx, 48-43);
	/* jge	@F */
	if ((short)(bx) >= (short)(48-43)) {goto dummylabel42;}
	/* mov	bx,48-43;HUD_Y_FS_ORG-43 */
	bx = 48-43;
dummylabel42:
	// 4635 
	/* @@:		cmp	bx,48+44;HUD_Y_FS_ORG+44 */
	CMP(bx, 48+44);
	/* jle	@F */
	if ((short)(bx) <= (short)(48+44)) {goto dummylabel43;}
	/* mov	bx,48+44;HUD_Y_FS_ORG+44 */
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
	// 4637 
	/* @@:		add bx, 48 */
	ADD(bx, 48);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	bx,2 */
	SUB(bx, 2);
	/* cmp	bx,HUD_Y_FS_ORG-43 */
	CMP(bx, 96-43);
	/* jl	SkipA2 */
	if ((short)(bx) < (short)(96-43)) {goto skipa2;}
	/* mov	ax,bx */
	ax = bx;
	/* sub	ax,5 */
	SUB(ax, 5);
	/* cmp	ax,HUD_Y_FS_ORG-43;+48 ;22/8/2018 */
	CMP(ax, 96-43);
	/* jge	@F */
	if ((short)(ax) >= (short)(96-43)) {goto dummylabel44;}
	/* mov	ax,HUD_Y_FS_ORG-43;+48 ;22/8/2018 */
	ax = 96-43;
	// 0 ;This correctly positions the Cross Symbol
	// 0 ;48 pixels down the screen
	// 0 ;when in full-screen mode (Shift+D)
	// 0 ;add ax, 48 ;hack frankie on 22/8/2018
dummylabel44:
	// 4639 
	/* mov	bh,al */
	bh = al;
	/* mov	al,COL_HUD ;Black */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* draw stroke (b)
skipa2:
	// 4641 
	/* SkipA2:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	bx,2 */
	ADD(bx, 2);
	/* cmp	bx,HUD_Y_FS_ORG+44 */
	CMP(bx, 96+44);
	/* jg	SkipB2 */
	if ((short)(bx) > (short)(96+44)) {goto skipb2;}
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,5 */
	ADD(ax, 5);
	/* cmp	ax,HUD_Y_FS_ORG+44;+48 ;22/8/2018 */
	CMP(ax, 96+44);
	/* jle	@F */
	if ((short)(ax) <= (short)(96+44)) {goto dummylabel45;}
	/* mov	ax,HUD_Y_FS_ORG+44;+48 ;22/8/2018 */
	ax = 96+44;
	// 0 ;This correctly positions the Cross Symbol
	// 0 ;48 pixels down the screen
	// 0 ;when in full-screen mode (Shift+D)
	// 0 ;add ax, 48 ;hack frankie on 22/8/2018
dummylabel45:
	// 4643 
	/* mov	bh,al */
	bh = al;
	/* mov	al,COL_HUD ;Black */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* draw stroke (c)
skipb2:
	// 4645 
	/* SkipB2:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	cx,2 */
	SUB(cx, 2);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	SkipC2 */
	if ((short)(cx) < (short)(160-48)) {goto skipc2;}
	/* mov	dx,cx */
	dx = cx;
	/* sub	dx,7 */
	SUB(dx, 7);
	/* cmp	dx,HUD_X_FS_ORG-48 */
	CMP(dx, 160-48);
	/* jge	@F */
	if ((short)(dx) >= (short)(160-48)) {goto dummylabel46;}
	/* mov	dx,HUD_X_FS_ORG-48 */
	dx = 160-48;
dummylabel46:
	// 4647 
	/* @@:		mov	al,COL_HUD ;COL_BLACK */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* draw stroke (d)
skipc2:
	// 4649 
	/* SkipC2:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,HUD_X_FS_ORG+47 */
	CMP(cx, 160+47);
	/* jg	SkipD */
	if ((short)(cx) > (short)(160+47)) {goto skipd;}
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,7 */
	ADD(dx, 7);
	/* cmp	dx,HUD_X_FS_ORG+47 */
	CMP(dx, 160+47);
	/* jle	@F */
	if ((short)(dx) <= (short)(160+47)) {goto dummylabel47;}
	/* mov	dx,HUD_X_FS_ORG+47 */
	dx = 160+47;
dummylabel47:
	// 4651 
	/* @@:		mov	al,COL_HUD;Black */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
skipd:
	// 4653 
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
	/* je	CannonRange2 */
	if ((dw)(ax) == (dw)(16)) {goto cannonrange2;}
	/* cmp	ax,ARM_SIDEWINDER */
	CMP(ax, 18);
	/* jne	__m2c_macrolocal_168_skip */
	if ((dw)(ax) != (dw)(18)) {goto __m2c_macrolocal_168_skip;}
	/* jmp	SidewinderRange2 */
	goto sidewinderrange2;
__m2c_macrolocal_168_skip:
	// 4655 
	/* cmp	ax,ARM_SKYFLASH */
	CMP(ax, 20);
	/* jne	__m2c_macrolocal_169_skip */
	if ((dw)(ax) != (dw)(20)) {goto __m2c_macrolocal_169_skip;}
	/* jmp	SkyFlashRange2 */
	goto skyflashrange2;
__m2c_macrolocal_169_skip:
	// 4657 
	/* jmp	FailAirTarget2	;(should never happen) */
	goto failairtarget2;
	// 0 ;---------------------------
cannonrange2:
	// 4659 
	// 0 ;---------------------------
	// 0 ;* draw 400m marker
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	Cont400m2 */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto cont400m2;}
	/* cmp	WORD PTR AirTgtRange,1192	;1192 = ((20 / 55) * 32768) / 10 */
	CMP(*(dw*)(&airtgtrange), 1192);
	/* jb	Skip400m2 */
	if ((dw)(*(dw*)(&airtgtrange)) < (dw)(1192)) {goto skip400m2;}
cont400m2:
	// 4661 
	/* Cont400m2:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,9 */
	ADD(cx, 9);
	/* add	bl,7 */
	ADD(bl, 7);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_170_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_170_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_170_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_170_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_170_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_170_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_170_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_170_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_170_skip:
	// 4663 
	/* __m2c_macrolocal_170_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6147 call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,10 */
	ADD(cx, 10);
	/* add	bl,8 */
	ADD(bl, 8);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_171_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_171_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_171_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_171_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_171_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_171_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_171_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_171_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_171_skip:
	// 4665 
	/* __m2c_macrolocal_171_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6165 						call	SetPixel */
skip400m2:
	// 4667 
	// 0 ;* draw 600m marker
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	Cont600m2 */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto cont600m2;}
	/* cmp	WORD PTR AirTgtRange,2145	;2145 = ((36 / 55) * 32768) / 10 */
	CMP(*(dw*)(&airtgtrange), 2145);
	/* jb	Skip600m2 */
	if ((dw)(*(dw*)(&airtgtrange)) < (dw)(2145)) {goto skip600m2;}
cont600m2:
	// 4669 
	/* Cont600m2:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-9 */
	ADD(cx, -9);
	/* add	bl,7 */
	ADD(bl, 7);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_172_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_172_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_172_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_172_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_172_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_172_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_172_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_172_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_172_skip:
	// 4671 
	/* __m2c_macrolocal_172_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6190 call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-10 */
	ADD(cx, -10);
	/* add	bl,8 */
	ADD(bl, 8);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_173_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_173_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_173_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_173_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_173_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_173_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_173_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_173_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_173_skip:
	// 4673 
	/* __m2c_macrolocal_173_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6208 						call	SetPixel */
skip600m2:
	// 4675 
	// 0 ;* range clock fsd = 3,276ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	ContAirTarget2 */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto contairtarget2;}
	/* cmp	WORD PTR AirTgtRange,3276 */
	CMP(*(dw*)(&airtgtrange), 3276);
	/* ja	ContAirTarget2 */
	if ((dw)(*(dw*)(&airtgtrange)) > (dw)(3276)) {goto contairtarget2;}
	/* mov	ax,WORD PTR AirTgtRange */
	ax = *(dw*)(&airtgtrange);
	/* mov	dx,10 */
	dx = 10;
	/* mul	dx */
	MUL1_2(dx);
	/* jmp	ContAirTarget2 */
	goto contairtarget2;
	// 0 ;---------------------------
sidewinderrange2:
	// 4677 
	// 0 ;---------------------------
	// 0 ;* range clock fsd = 32,767ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	ContAirTarget2 */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto contairtarget2;}
	/* cmp	WORD PTR AirTgtRange,32767 */
	CMP(*(dw*)(&airtgtrange), 32767);
	/* ja	ContAirTarget2 */
	if ((dw)(*(dw*)(&airtgtrange)) > (dw)(32767)) {goto contairtarget2;}
	/* mov	ax,WORD PTR AirTgtRange */
	ax = *(dw*)(&airtgtrange);
	/* jmp	ContAirTarget2 */
	goto contairtarget2;
	// 0 ;---------------------------
skyflashrange2:
	// 4679 
	// 0 ;---------------------------
	// 0 ;* range clock fsd = 131,071ft
	/* mov	ax,32767	;assume range > fsd */
	ax = 32767;
	/* cmp	WORD PTR AirTgtRange+2,1 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 1);
	/* ja	ContAirTarget2 */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(1)) {goto contairtarget2;}
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
contairtarget2:
	// 4681 
	// 0 ;---------------------------
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* sub	cx,HUD_X_FS_ORG */
	SUB(cx, 160);
	/* sub	bl,HUD_Y_FS_ORG */
	SUB(bl, 96);
	/* call	UpdateClock2 */
	CALL(updateclock2, 0);
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
	/* jmp	SkipIRLock2 */
	goto skipirlock2;
__m2c_macrolocal_174_skip:
	// 4683 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,-5 */
	ADD(bl, -5);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_175_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_175_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_175_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_175_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_175_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_175_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_175_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_175_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_175_skip:
	// 4685 
	/* __m2c_macrolocal_175_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6287 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* add	bl,-4 */
	ADD(bl, -4);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_176_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_176_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_176_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_176_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_176_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_176_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_176_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_176_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_176_skip:
	// 4687 
	/* __m2c_macrolocal_176_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6305 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_177_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_177_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_177_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_177_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_177_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_177_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_177_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_177_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_177_skip:
	// 4689 
	/* __m2c_macrolocal_177_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6323 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,4 */
	ADD(cx, 4);
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_178_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_178_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_178_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_178_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_178_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_178_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_178_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_178_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_178_skip:
	// 4691 
	/* __m2c_macrolocal_178_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6341 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_179_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_179_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_179_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_179_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_179_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_179_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_179_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_179_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_179_skip:
	// 4693 
	/* __m2c_macrolocal_179_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6359 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_180_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_180_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_180_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_180_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_180_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_180_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_180_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_180_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_180_skip:
	// 4695 
	/* __m2c_macrolocal_180_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6377 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_181_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_181_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_181_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_181_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_181_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_181_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_181_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_181_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_181_skip:
	// 4697 
	/* __m2c_macrolocal_181_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6395 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_182_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_182_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_182_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_182_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_182_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_182_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_182_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_182_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_182_skip:
	// 4699 
	/* __m2c_macrolocal_182_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6413 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-4 */
	ADD(cx, -4);
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_183_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_183_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_183_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_183_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_183_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_183_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_183_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_183_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_183_skip:
	// 4701 
	/* __m2c_macrolocal_183_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6431 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_184_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_184_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_184_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_184_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_184_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_184_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_184_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_184_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_184_skip:
	// 4703 
	/* __m2c_macrolocal_184_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6449 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* add	bl,-4 */
	ADD(bl, -4);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_185_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_185_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_185_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_185_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_185_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_185_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_185_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_185_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_185_skip:
	// 4705 
	/* __m2c_macrolocal_185_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6467 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,-5 */
	ADD(bl, -5);
	/* cmp	cx,HUD_X_FS_ORG-48 */
	CMP(cx, 160-48);
	/* jl	__m2c_macrolocal_186_skip */
	if ((short)(cx) < (short)(160-48)) {goto __m2c_macrolocal_186_skip;}
	/* cmp	cx,HUD_X_FS_ORG-48+96 */
	CMP(cx, 160-48+96);
	/* jge	__m2c_macrolocal_186_skip */
	if ((short)(cx) >= (short)(160-48+96)) {goto __m2c_macrolocal_186_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1 */
	CMP(bl, 96-44+1);
	/* jl	__m2c_macrolocal_186_skip */
	if ((signed char)(bl) < (signed char)(96-44+1)) {goto __m2c_macrolocal_186_skip;}
	/* cmp	bl,HUD_Y_FS_ORG-44+1+88 */
	CMP(bl, 96-44+1+88);
	/* jge	__m2c_macrolocal_186_skip */
	if ((signed char)(bl) >= (signed char)(96-44+1+88)) {goto __m2c_macrolocal_186_skip;}
	/* add bl,48 ;hack by Frankie Kam on 22/8/2018 */
	ADD(bl, 48);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_186_skip:
	// 4707 
	/* __m2c_macrolocal_186_skip:		pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 6485 						call	SetPixel */
skipirlock2:
	// 4709 
	/* SkipIRLock2:	clc			;ok */
	CLC;
	/* ret */
	RETN(0);
failairtarget2:
	// 4711 
	/* FailAirTarget2:	stc			;invalid target or error */
	STC;
	/* ret */
	RETN(0);
drawcentrecross2:
	// 6499 
	// 0 ;* draw centre cross
edummylabel33:
	// 4713 
	/* mov	bl,HUD_Y_FS_ORG+-2 */
	bl = 96+-2;
	/* mov	bh,HUD_Y_FS_ORG+-1 */
	bh = 96+-1;
	/* mov	cx,HUD_X_FS_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 6508 						call	VLineDraw
	/* mov	bl,HUD_Y_FS_ORG+1 */
	bl = 96+1;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	cx,HUD_X_FS_ORG+0 */
	cx = 160+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(vlinedraw,0));	// 6514 						call	VLineDraw
	/* mov	cx,HUD_X_FS_ORG+-2 */
	cx = 160+-2;
	/* mov	dx,HUD_X_FS_ORG+-1 */
	dx = 160+-1;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 6520 						call	HLineDraw
	/* mov	cx,HUD_X_FS_ORG+1 */
	cx = 160+1;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG+0 */
	bl = 96+0;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(hlinedraw,0));	// 6526 						call	HLineDraw
	// 0 ;* if Sidewinder armed but no IR lock then draw diamond around centre cross
	/* cmp	ArmMode,ARM_SIDEWINDER */
	CMP(armmode, 18);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel48;}
	/* test	IRLockFlag,1 */
	TEST(irlockflag, 1);
	/* jnz	@F */
	if ((irlockflag & 1) != 0) {goto dummylabel48;}
	/* mov	cx,HUD_X_FS_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_FS_ORG-4 */
	bl = 96-4;
	/* mov	dx,HUD_X_FS_ORG+3 */
	dx = 160+3;
	/* mov	bh,HUD_Y_FS_ORG-1 */
	bh = 96-1;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+4 */
	cx = 160+4;
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* mov	dx,HUD_X_FS_ORG+1 */
	dx = 160+1;
	/* mov	bh,HUD_Y_FS_ORG+3 */
	bh = 96+3;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* mov	cx,HUD_X_FS_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_FS_ORG+4 */
	bl = 96+4;
	/* mov	dx,HUD_X_FS_ORG-3 */
	dx = 160-3;
	/* mov	bh,HUD_Y_FS_ORG+1 */
	bh = 96+1;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-4 */
	cx = 160-4;
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* mov	dx,HUD_X_FS_ORG-1 */
	dx = 160-1;
	/* mov	bh,HUD_Y_FS_ORG-3 */
	bh = 96-3;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel48:
	// 4715 
	/* @@:		ret */
	RETN(0);
drawgndgunclock2:
	// 6567 
	// 0 ;* draw 900m marker
edummylabel34:
	// 4717 
	/* cmp	WORD PTR GndTgtRange+2,0 */
	CMP(*(dw*)(((db*)&gndtgtrange)+2), 0);
	/* ja	Cont900m2 */
	if ((dw)(*(dw*)(((db*)&gndtgtrange)+2)) > (dw)(0)) {goto cont900m2;}
	/* cmp	WORD PTR GndTgtRange,2979	;2979 = ((20 / 55) * 32768) / 4 */
	CMP(*(dw*)(&gndtgtrange), 2979);
	/* jb	Skip900m2 */
	if ((dw)(*(dw*)(&gndtgtrange)) < (dw)(2979)) {goto skip900m2;}
cont900m2:
	// 4719 
	/* Cont900m2:	mov	cx,HUD_X_FS_ORG+9 */
	cx = 160+9;
	/* mov	bl,HUD_Y_FS_ORG+7 */
	bl = 96+7;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_FS_ORG+8 */
	bl = 96+8;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skip900m2:
	// 4721 
	// 0 ;* draw 1500m marker
	/* cmp	WORD PTR GndTgtRange+2,0 */
	CMP(*(dw*)(((db*)&gndtgtrange)+2), 0);
	/* ja	Cont1500m2 */
	if ((dw)(*(dw*)(((db*)&gndtgtrange)+2)) > (dw)(0)) {goto cont1500m2;}
	/* cmp	WORD PTR GndTgtRange,5362	;5362 = ((36 / 55) * 32768) / 4 */
	CMP(*(dw*)(&gndtgtrange), 5362);
	/* jb	Skip1500m2 */
	if ((dw)(*(dw*)(&gndtgtrange)) < (dw)(5362)) {goto skip1500m2;}
cont1500m2:
	// 4723 
	/* Cont1500m2:	mov	cx,HUD_X_FS_ORG-9 */
	cx = 160-9;
	/* mov	bl,HUD_Y_FS_ORG+7 */
	bl = 96+7;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_FS_ORG+8 */
	bl = 96+8;
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skip1500m2:
	// 4725 
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
	// 4727 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock2 */
	CALL(updateclock2, 0);
	/* ret */
	RETN(0);
drawalarmclock2:
	// 6622 
	// 0 ;* range clock fsd = 131,071ft
edummylabel35:
	// 4729 
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
	// 4731 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	/* xor	bl,bl */
	XOR(bl, bl);
	/* call	UpdateClock2 */
	CALL(updateclock2, 0);
	/* ret */
	RETN(0);
drawstandby2:
	// 6648 
	// 0 ;* centre dot
edummylabel36:
	// 4733 
	/* mov	cx,HUD_X_FS_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* up stroke
	/* mov	cx,HUD_X_FS_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_FS_ORG-17 */
	bl = 96-17;
	/* mov	bh,HUD_Y_FS_ORG-6 */
	bh = 96-6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG-18 */
	bl = 96-18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG-14 */
	bl = 96-14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_FS_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_FS_ORG-10 */
	bl = 96-10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_FS_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_FS_ORG-9 */
	bl = 96-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_FS_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_FS_ORG-9 */
	bl = 96-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_FS_ORG-8 */
	bl = 96-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_FS_ORG-8 */
	bl = 96-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG-5 */
	bl = 96-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_FS_ORG-4 */
	bl = 96-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_FS_ORG-4 */
	bl = 96-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* down stroke
	/* mov	cx,HUD_X_FS_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_FS_ORG+17 */
	bl = 96+17;
	/* mov	bh,HUD_Y_FS_ORG+6 */
	bh = 96+6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG+18 */
	bl = 96+18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG+14 */
	bl = 96+14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_FS_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_FS_ORG+10 */
	bl = 96+10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_FS_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_FS_ORG+9 */
	bl = 96+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_FS_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_FS_ORG+9 */
	bl = 96+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_FS_ORG+8 */
	bl = 96+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_FS_ORG+8 */
	bl = 96+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_FS_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_FS_ORG+5 */
	bl = 96+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_FS_ORG+4 */
	bl = 96+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_FS_ORG+4 */
	bl = 96+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* left stroke
	/* mov	cx,HUD_X_FS_ORG-21 */
	cx = 160-21;
	/* mov	dx,HUD_X_FS_ORG-7 */
	dx = 160-7;
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-22 */
	cx = 160-22;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-17 */
	cx = 160-17;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-12 */
	cx = 160-12;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_FS_ORG-4 */
	bl = 96-4;
	/* mov	bh,HUD_Y_FS_ORG-3 */
	bh = 96-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_FS_ORG+3 */
	bl = 96+3;
	/* mov	bh,HUD_Y_FS_ORG+4 */
	bh = 96+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_FS_ORG-5 */
	bl = 96-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_FS_ORG+5 */
	bl = 96+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG-6 */
	cx = 160-6;
	/* mov	bl,HUD_Y_FS_ORG-1 */
	bl = 96-1;
	/* mov	bh,HUD_Y_FS_ORG+1 */
	bh = 96+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_FS_ORG+2 */
	bl = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* right stroke
	/* mov	cx,HUD_X_FS_ORG+21 */
	cx = 160+21;
	/* mov	dx,HUD_X_FS_ORG+7 */
	dx = 160+7;
	/* mov	bl,HUD_Y_FS_ORG */
	bl = 96;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+22 */
	cx = 160+22;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+17 */
	cx = 160+17;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+12 */
	cx = 160+12;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	bh,HUD_Y_FS_ORG+2 */
	bh = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_FS_ORG-4 */
	bl = 96-4;
	/* mov	bh,HUD_Y_FS_ORG-3 */
	bh = 96-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_FS_ORG+3 */
	bl = 96+3;
	/* mov	bh,HUD_Y_FS_ORG+4 */
	bh = 96+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_FS_ORG-5 */
	bl = 96-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_FS_ORG+5 */
	bl = 96+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+6 */
	cx = 160+6;
	/* mov	bl,HUD_Y_FS_ORG-1 */
	bl = 96-1;
	/* mov	bh,HUD_Y_FS_ORG+1 */
	bh = 96+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_FS_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_FS_ORG-2 */
	bl = 96-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_FS_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_FS_ORG+2 */
	bl = 96+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
drawintercept2:
	// 6881 
	// 0 ;* check target valid
edummylabel37:
	// 4735 
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* jne	__m2c_macrolocal_191_skip */
	if ((dw)(airtgtptr) != (dw)(-1)) {goto __m2c_macrolocal_191_skip;}
	/* jmp	ExitIntercept2 */
	goto exitintercept2;
__m2c_macrolocal_191_skip:
	// 4737 
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
	// 4739 
	/* @@:		mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	// 0 ;* calc intercept point
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	// 0 ;* project intercept point onto HUD
	/* call	ProjectHUDPoint2 */
	CALL(projecthudpoint2, 0);
	/* jc	ExitIntercept2 */
	if (CF) {goto exitintercept2;}
	// 0 ;* clip HUD point (crude clip on marker centre)
	/* cmp	cx,HUD_X_FS_ORG-47 */
	CMP(cx, 160-47);
	/* jb	ExitIntercept2 */
	if ((dw)(cx) < (dw)(160-47)) {goto exitintercept2;}
	/* cmp	cx,HUD_X_FS_ORG+46 */
	CMP(cx, 160+46);
	/* ja	ExitIntercept2 */
	if ((dw)(cx) > (dw)(160+46)) {goto exitintercept2;}
	/* cmp	bl,48-42;+48 ;22/8/2018 */
	CMP(bl, 48-42);
	/* jb	ExitIntercept2 */
	if ((db)(bl) < (db)(48-42)) {goto exitintercept2;}
	/* cmp	bl,48+43;+48 ;22/8/2018 */
	CMP(bl, 48+43);
	/* ja	ExitIntercept2 */
	if ((db)(bl) > (db)(48+43)) {goto exitintercept2;}
	// 0 ;This correctly positions the Intercept Point
	// 0 ;48 pixels down the screen where bl = y crt
	// 0 ;when in full-screen mode (Shift+D)
	/* add bl,48 ;hack by Frankie 22/8/2018 */
	ADD(bl, 48);
	// 0 ;* draw marker
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_HUD ;Black */
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
	/* mov	al,COL_HUD ;Black */
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
	/* mov	al,COL_HUD ;COL_BLACK */
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
	/* mov	al,COL_HUD ;BLACK */
	al = 133;
	/* dec	bl */
	DEC(bl);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_HUD ;Black */
	al = 133;
	/* inc	bl */
	INC(bl);
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitintercept2:
	// 4741 
	/* ExitIntercept2:	ret */
	RETN(0);
dispairtgtdata2:
	// 6974 
	/* cmp	AirTgtPtr,-1 ;* kill: assume all */
	CMP(airtgtptr, -1);
edummylabel38:
	// 4743 
	/* je	@F */
	if (ZF) {goto dummylabel52;}
	/* mov	si,OFFSET AirTgt2$ */
	si = m2c::near_offset_external(airtgt2dol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel52:
	// 4745 
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
        case m2c::kairspeedexit2: 	goto airspeedexit2;
        case m2c::kaltclockbug2: 	goto altclockbug2;
        case m2c::kbar0: 	goto bar0;
        case m2c::kbar90: 	goto bar90;
        case m2c::kbar_90: 	goto bar_90;
        case m2c::kbarloop2: 	goto barloop2;
        case m2c::kbugquad1b: 	goto bugquad1b;
        case m2c::kbugquad2b: 	goto bugquad2b;
        case m2c::kbugquad3b: 	goto bugquad3b;
        case m2c::kbugquad4b: 	goto bugquad4b;
        case m2c::kcannonrange2: 	goto cannonrange2;
        case m2c::kclipline2: 	goto clipline2;
        case m2c::kclipscaledline2: 	goto clipscaledline2;
        case m2c::kcont1500m2: 	goto cont1500m2;
        case m2c::kcont400m2: 	goto cont400m2;
        case m2c::kcont600m2: 	goto cont600m2;
        case m2c::kcont900m2: 	goto cont900m2;
        case m2c::kcontairtarget2: 	goto contairtarget2;
        case m2c::kcontnav2: 	goto contnav2;
        case m2c::kdispairtgtdata2: 	goto dispairtgtdata2;
        case m2c::kdrawairtarget2: 	goto drawairtarget2;
        case m2c::kdrawalarmclock2: 	goto drawalarmclock2;
        case m2c::kdrawaltbug2: 	goto drawaltbug2;
        case m2c::kdrawbombfall2: 	goto drawbombfall2;
        case m2c::kdrawbrokenbar2: 	goto drawbrokenbar2;
        case m2c::kdrawccipmrkr2: 	goto drawccipmrkr2;
        case m2c::kdrawcentrecross2: 	goto drawcentrecross2;
        case m2c::kdrawdownstroke2: 	goto drawdownstroke2;
        case m2c::kdrawgndgunclock2: 	goto drawgndgunclock2;
        case m2c::kdrawgndtgtmrkr2: 	goto drawgndtgtmrkr2;
        case m2c::kdrawhudbrackets2: 	goto drawhudbrackets2;
        case m2c::kdrawintercept2: 	goto drawintercept2;
        case m2c::kdrawpitchbar2: 	goto drawpitchbar2;
        case m2c::kdrawsolidbar2: 	goto drawsolidbar2;
        case m2c::kdrawsolidfall2: 	goto drawsolidfall2;
        case m2c::kdrawstandby2: 	goto drawstandby2;
        case m2c::kdrawzerobar2: 	goto drawzerobar2;
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
        case m2c::kexitearlylate2: 	goto exitearlylate2;
        case m2c::kexithud2: 	goto exithud2;
        case m2c::kexitintercept2: 	goto exitintercept2;
        case m2c::kexitlaserrange2: 	goto exitlaserrange2;
        case m2c::kfailairtarget2: 	goto failairtarget2;
        case m2c::kfailccipmrkr2: 	goto failccipmrkr2;
        case m2c::kfailgndtgtmrkr2: 	goto failgndtgtmrkr2;
        case m2c::khdgdigitloop2: 	goto hdgdigitloop2;
        case m2c::khdgdigits2: 	goto hdgdigits2;
        case m2c::khdgdotloop2: 	goto hdgdotloop2;
        case m2c::khtmargok2: 	goto htmargok2;
        case m2c::khudalarmdir2: 	goto hudalarmdir2;
        case m2c::khudalarmind2: 	goto hudalarmind2;
        case m2c::khudcannon2: 	goto hudcannon2;
        case m2c::khudjp2332: 	goto hudjp2332;
        case m2c::khudlaserguided2: 	goto hudlaserguided2;
        case m2c::khudlaydownbomb2: 	goto hudlaydownbomb2;
        case m2c::khudloftbomb2: 	goto hudloftbomb2;
        case m2c::khudmanualbomb2: 	goto hudmanualbomb2;
        case m2c::khudnavigation2: 	goto hudnavigation2;
        case m2c::khudsidewinder2: 	goto hudsidewinder2;
        case m2c::khudskyflash2: 	goto hudskyflash2;
        case m2c::kinitcont2: 	goto initcont2;
        case m2c::kinitdone2: 	goto initdone2;
        case m2c::kinithud2: 	goto inithud2;
        case m2c::kjp233clock2: 	goto jp233clock2;
        case m2c::klaserrangeclock2: 	goto laserrangeclock2;
        case m2c::klaserrangeok2: 	goto laserrangeok2;
        case m2c::klimitpitch2: 	goto limitpitch2;
        case m2c::kloftsteeringcue2: 	goto loftsteeringcue2;
        case m2c::knegpitch2: 	goto negpitch2;
        case m2c::knextbar2: 	goto nextbar2;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kpospitch2: 	goto pospitch2;
        case m2c::kprintpitch2: 	goto printpitch2;
        case m2c::kprojecthudpoint2: 	goto projecthudpoint2;
        case m2c::krotatemrkrline2: 	goto rotatemrkrline2;
        case m2c::ksetclip2: 	goto setclip2;
        case m2c::ksethudclip2: 	goto sethudclip2;
        case m2c::ksidewinderrange2: 	goto sidewinderrange2;
        case m2c::kskip1500m2: 	goto skip1500m2;
        case m2c::kskip400m2: 	goto skip400m2;
        case m2c::kskip600m2: 	goto skip600m2;
        case m2c::kskip900m2: 	goto skip900m2;
        case m2c::kskipa2: 	goto skipa2;
        case m2c::kskipb2: 	goto skipb2;
        case m2c::kskipbrg2: 	goto skipbrg2;
        case m2c::kskipc2: 	goto skipc2;
        case m2c::kskipd: 	goto skipd;
        case m2c::kskipirlock2: 	goto skipirlock2;
        case m2c::kskyflashrange2: 	goto skyflashrange2;
        case m2c::ksortflip2: 	goto sortflip2;
        case m2c::kstandbysight2: 	goto standbysight2;
        case m2c::kupdateacsymbol2: 	goto updateacsymbol2;
        case m2c::kupdateairspeed2: 	goto updateairspeed2;
        case m2c::kupdatealt2: 	goto updatealt2;
        case m2c::kupdatealtclock2: 	goto updatealtclock2;
        case m2c::kupdateaoa2: 	goto updateaoa2;
        case m2c::kupdateaoameter2: 	goto updateaoameter2;
        case m2c::kupdateclock2: 	goto updateclock2;
        case m2c::kupdateearlylate2: 	goto updateearlylate2;
        case m2c::kupdatehdg2: 	goto updatehdg2;
        case m2c::kupdatehud2: 	goto updatehud2;
        case m2c::kupdateils2: 	goto updateils2;
        case m2c::kupdatepitch2: 	goto updatepitch2;
        case m2c::kupdatevsi2: 	goto updatevsi2;
        default: return __dispatch_call(__disp, _state);
    };
}


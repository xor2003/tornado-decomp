/* THIS IS GENERATED FILE */

        
#include "model.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initmodel:
	// 3331 
	// 0 ;-----------------------------
	// 0 ;* init model vars from M_VIEW
	// 0 ;-----------------------------
edummylabel1:
	// 4369 
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* mov	XSec,ax */
	xsec = ax;
	/* mov	ax,M_VIEW.VP_YSEC */
	ax = m_view.vp_ysec;
	/* mov	YSec,ax */
	ysec = ax;
	/* mov	ax,M_VIEW.VP_XFT */
	ax = m_view.vp_xft;
	/* mov	Xft,ax */
	xft = ax;
	/* mov	ax,M_VIEW.VP_YFT */
	ax = m_view.vp_yft;
	/* mov	Yft,ax */
	yft = ax;
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	ZftLo,ax */
	zftlo = ax;
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&m_view+vp_zft_hi));
	/* mov	ZftHi,ax */
	zfthi = ax;
	/* mov	cl,7		;*128 */
	cl = 7;
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	HFine,ax */
	hfine = ax;
	/* mov	ax,M_VIEW.VP_PITCH */
	ax = m_view.vp_pitch;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	PFine,ax */
	pfine = ax;
	/* mov	ax,M_VIEW.VP_ROLL */
	ax = m_view.vp_roll;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	RFine,ax */
	rfine = ax;
	/* call	CalcAngles */
	CALL(calcangles, 0);
	// 0 ;---------------------
	// 0 ;* sort start airborne
	// 0 ;---------------------
	/* test	StartAirborne,1	;start airborne? */
	TEST(startairborne, 1);
	/* jnz	__m2c_macrolocal_1_skip */
	if ((startairborne & 1) != 0) {goto __m2c_macrolocal_1_skip;}
	/* jmp	SkipAirborne */
	goto skipairborne;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;no ->
	/* mov	Throttle,256	;max dry */
	throttle = 256;
	/* mov	Rpm1,100*256 */
	rpm1 = 100*256;
	/* mov	Rpm2,100*256 */
	rpm2 = 100*256;
	/* mov	Gear,0		;gear up */
	gear = 0;
	/* mov	WheelBrakes,0	;wheelbrakes off */
	wheelbrakes = 0;
	/* mov	Airborne1,1	;airborne */
	airborne1 = 1;
	/* mov	Airborne2,1 */
	airborne2 = 1;
	/* mov	StallFlag1,0	;not stalled */
	stallflag1 = 0;
	/* mov	StallFlag1,0 */
	stallflag1 = 0;
	/* mov	CrntFlapPos,FLAPS_D_ZERO	;flaps up */
	crntflappos = 0;
	/* mov	DestFlapPos,FLAPS_D_ZERO */
	destflappos = 0;
	/* mov	CrntFlapVal,FLAPS_A_ZERO */
	crntflapval = 0;
	/* mov	DestFlapVal,FLAPS_A_ZERO */
	destflapval = 0;
	// 0 ;* calc vtas
	/* call	CalcAirDensity */
	CALL(calcairdensity, 0);
	// 0 ;* limit = 17144 = 2.2 * 573 * 1.7 * 8
	// 0 ;*
	// 0 ;* v = StartAirspeed * 1.7 * 8 * 32768 = StartAirspeed * 8 * 55706
	// 0 ;*
	// 0 ;* Vtas = min(v / SqrtRho, limit)
	/* mov	ax,StartAirspeed */
	ax = startairspeed;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	dx,55706 */
	dx = 55706;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	bx,SqrtRho */
	bx = sqrtrho;
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,17144 */
	CMP(ax, 17144);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(17144)) {goto dummylabel1;}
	/* mov	ax,17144 */
	ax = 17144;
dummylabel1:
	// 4373 
	/* @@:		mov	Vtas,ax */
	vtas = ax;
	/* mov	Vav,ax */
	vav = ax;
	// 0 ;* calc mach number
	// 0 ;* if zft < 36,096ft then
	// 0 ;*    Mach1 = 1123 - 0.0165 * zft / 4 = 1123 - 541 / 32768 * zft / 4
	// 0 ;* else
	// 0 ;*    Mach1 = 974
	// 0 ;* end
	/* mov	bx,974		;assume zft >= 36,096ft */
	bx = 974;
	/* cmp	ZftHi,0		;zft > 65,535? */
	CMP(zfthi, 0);
	/* jne	@F		;yes -> */
	if ((dw)(zfthi) != (dw)(0)) {goto dummylabel2;}
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* cmp	ax,36096	;zft >= 36,096? */
	CMP(ax, 36096);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(36096)) {goto dummylabel2;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	dx,541 */
	dx = 541;
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
	// 0 ;541 / 32768 * zft / 4
	/* mov	bx,1123 */
	bx = 1123;
	/* sub	bx,dx		;1123 - 541 / 32768 * zft / 4 */
	SUB(bx, dx);
dummylabel2:
	// 4375 
	/* @@:		mov	Mach1,bx */
	mach1 = bx;
	// 0 ;* MachNum [*16] = Vtas [*8] * 2 / Mach1
	/* mov	ax,Vtas */
	ax = vtas;
	// 0 ;* ensure Vtas >= 0
	/* test	ax,ax		;Vtas >= 0? */
	TEST(ax, ax);
	/* jns	@F		;yes -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel3;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel3:
	// 4377 
	/* @@:		cwd */
	CWD;
	/* shl	ax,1		;Vtas * 2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* idiv	bx		;Vtas * 2 / Mach1 */
	IDIV2(bx);
	/* mov	MachNum,ax */
	machnum = ax;
	/* mov	bl,SWEEP_D_25	;assume 25 deg sweep */
	bl = 0;
	/* mov	dx,SWEEP_A_25 */
	dx = 0;
	/* cmp	ax,10		;25 deg sweep? */
	CMP(ax, 10);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(10)) {goto dummylabel4;}
	/* mov	bl,SWEEP_D_45	;assume 45 deg sweep */
	bl = 1;
	/* mov	dx,SWEEP_A_45 */
	dx = 333;
	/* cmp	ax,12		;45 deg sweep? */
	CMP(ax, 12);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(12)) {goto dummylabel4;}
	/* mov	bl,SWEEP_D_67 */
	bl = 2;
	/* mov	dx,SWEEP_A_67 */
	dx = 700;
dummylabel4:
	// 4379 
	/* @@:		mov	CrntWingPos,bl */
	crntwingpos = bl;
	/* mov	DestWingPos,bl */
	destwingpos = bl;
	/* mov	CrntWingVal,dx */
	crntwingval = dx;
	/* mov	DestWingVal,dx */
	destwingval = dx;
	// 0 ;* engage auto-throttle
	/* mov	ax,StartAirspeed */
	ax = startairspeed;
	/* cli			;(in case conflict with kbd adjust) */
	CLI;
	/* mov	AutoVias,ax */
	autovias = ax;
	/* mov	AutoViasFine,0 */
	autoviasfine = 0;
	/* mov	AutoThrot,1 */
	autothrot = 1;
	/* sti */
	STI;
	// 0 ;---------------------
	// 0 ;* init control device
	// 0 ;---------------------
skipairborne:
	// 4381 
	/* SkipAirborne:	call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;------------------------------
	// 0 ;* start with damaged engine(s)
	// 0 ;------------------------------
	/* test	DamagedLEng,1 */
	TEST(damagedleng, 1);
	/* jz	@F */
	if (!(damagedleng & 1)) {goto dummylabel5;}
	/* mov	SSF_Engine1,1		;damage engine */
	ssf_engine1 = 1;
	/* or	RedWarnings2,RED_L_ENG	;report damage */
	OR(redwarnings2, 0x100);
dummylabel5:
	// 4383 
	/* @@:		test	DamagedREng,1 */
	TEST(damagedreng, 1);
	/* jz	@F */
	if (!(damagedreng & 1)) {goto dummylabel6;}
	/* mov	SSF_Engine2,1		;damage engine */
	ssf_engine2 = 1;
	/* or	RedWarnings2,RED_R_ENG	;report damage */
	OR(redwarnings2, 0x200);
	// 0 ;------------------------------
	// 0 ;* sort fixed min weight option
	// 0 ;------------------------------
dummylabel6:
	// 4385 
	/* @@:		test	FixMinWeight,1 */
	TEST(fixminweight, 1);
	/* jz	@F */
	if (!(fixminweight & 1)) {goto dummylabel7;}
	/* mov	DebugWeight,1 */
	*(debugweight) = 1;
	/* mov	FixedWeight,33000 */
	fixedweight = 33000;
	// 0 ;-----------------
	// 0 ;* init new sector
	// 0 ;-----------------
dummylabel7:
	// 4387 
	/* @@:		call	InitNewSector */
	CALL(initnewsector, 0);
	/* ret */
	RETF(0);
model:
	// 3505 
	/* call	CalcDeltaTime ;* kill: assume all */
	CALLF(calcdeltatime, 0);
edummylabel2:
	// 4389 
	/* call	UpdateGameKeys */
	CALL(updategamekeys, 0);
	/* call	PreAmble */
	CALL(preamble, 0);
	/* call	CrossWinds */
	CALL(crosswinds, 0);
	/* call	SortJoysticks */
	CALL(sortjoysticks, 0);
	/* call	UpdateSweep */
	CALL(updatesweep, 0);
	/* call	UpdateFlaps */
	CALL(updateflaps, 0);
	/* call	CalcAirDensity */
	CALL(calcairdensity, 0);
	/* call	CalcAirSpeed */
	CALL(calcairspeed, 0);
	/* call	CalcGForce */
	CALL(calcgforce, 0);
	/* call	CalcRates */
	CALL(calcrates, 0);
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* call	CalcThrust */
	CALL(calcthrust, 0);
	/* call	CalcFuelFlow */
	CALL(calcfuelflow, 0);
	/* call	CalcDrag */
	CALL(calcdrag, 0);
	/* call	CalcPosition */
	CALL(calcposition, 0);
	/* call	CalcAltitude */
	CALL(calcaltitude, 0);
	/* call	PostAmble */
	CALL(postamble, 0);
	/* ret */
	RETF(0);
updategamekeys:
	// 3535 
	/* test	Paused,1	;paused? */
	TEST(paused, 1);
edummylabel3:
	// 4391 
	/* jz	__m2c_macrolocal_3_skip */
	if (ZF) {goto __m2c_macrolocal_3_skip;}
	/* jmp	UpdatePaused */
	goto updatepaused;
__m2c_macrolocal_3_skip:
	// 4393 
	// 0 ;yes ->
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	__m2c_macrolocal_4_skip */
	if ((dw)(disableinput) == (dw)(0)) {goto __m2c_macrolocal_4_skip;}
	/* jmp	UpdateDisabled */
	goto updatedisabled;
__m2c_macrolocal_4_skip:
	// 4395 
	// 0 ;yes ->
	/* mov	bx,CrewMode */
	bx = crewmode;
__disp=*(dw*)(((db*)&kf_updateswitch)+bx);
	/* jmp	KF_UpdateSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
kf_updatepilot:
	// 4397 
	// 0 ;---------------------------
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_HUDContrast[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_hudcontrast)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_HUDContrast[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_hudcontrast)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_HUDContrast[K_STATUS],al */
	*(db*)(((db*)&kf_hudcontrast)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TogglePitchCam[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_togglepitchcam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TogglePitchCam[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_togglepitchcam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],al */
	*(db*)(((db*)&kf_togglepitchcam)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_HUDSwitch[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_hudswitch)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_HUDSwitch[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_hudswitch)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_HUDSwitch[K_STATUS],al */
	*(db*)(((db*)&kf_hudswitch)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_HUDOption[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_hudoption)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_HUDOption[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_hudoption)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_HUDOption[K_STATUS],al */
	*(db*)(((db*)&kf_hudoption)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ResetTrkCam[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_resettrkcam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ResetTrkCam[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_resettrkcam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ResetTrkCam[K_STATUS],al */
	*(db*)(((db*)&kf_resettrkcam)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ResetSatCam[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_resetsatcam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ResetSatCam[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_resetsatcam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ResetSatCam[K_STATUS],al */
	*(db*)(((db*)&kf_resetsatcam)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AdjustHorizonDown[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_adjusthorizondown)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AdjustHorizonDown[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_adjusthorizondown)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AdjustHorizonDown[K_STATUS],al */
	*(db*)(((db*)&kf_adjusthorizondown)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AdjustHorizonup[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_adjusthorizonup)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AdjustHorizonup[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_adjusthorizonup)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AdjustHorizonup[K_STATUS],al */
	*(db*)(((db*)&kf_adjusthorizonup)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ResetWpnCam[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_resetwpncam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ResetWpnCam[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_resetwpncam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ResetWpnCam[K_STATUS],al */
	*(db*)(((db*)&kf_resetwpncam)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ZoomIn[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_zoomin)+k_state));
	/* mov	BYTE PTR KF_ZoomIn[K_STATUS],al */
	*(db*)(((db*)&kf_zoomin)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ZoomOut[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_zoomout)+k_state));
	/* mov	BYTE PTR KF_ZoomOut[K_STATUS],al */
	*(db*)(((db*)&kf_zoomout)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_FastZoomIn[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_fastzoomin)+k_state));
	/* mov	BYTE PTR KF_FastZoomIn[K_STATUS],al */
	*(db*)(((db*)&kf_fastzoomin)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_FastZoomOut[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_fastzoomout)+k_state));
	/* mov	BYTE PTR KF_FastZoomOut[K_STATUS],al */
	*(db*)(((db*)&kf_fastzoomout)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TrackClk[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_trackclk)+k_state));
	/* mov	BYTE PTR KF_TrackClk[K_STATUS],al */
	*(db*)(((db*)&kf_trackclk)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TrackAClk[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_trackaclk)+k_state));
	/* mov	BYTE PTR KF_TrackAClk[K_STATUS],al */
	*(db*)(((db*)&kf_trackaclk)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_FastTrkClk[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_fasttrkclk)+k_state));
	/* mov	BYTE PTR KF_FastTrkClk[K_STATUS],al */
	*(db*)(((db*)&kf_fasttrkclk)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_FastTrkAClk[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_fasttrkaclk)+k_state));
	/* mov	BYTE PTR KF_FastTrkAClk[K_STATUS],al */
	*(db*)(((db*)&kf_fasttrkaclk)+k_status) = al;
	/* jmp	KF_UpdateCommon */
	goto kf_updatecommon;
	// 0 ;---------------------------
kf_updatenavig:
	// 4399 
	// 0 ;---------------------------
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_DispSelect[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_dispselect)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_DispSelect[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_dispselect)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_DispSelect[K_STATUS],al */
	*(db*)(((db*)&kf_dispselect)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TAB1Select[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_tab1select)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TAB1Select[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_tab1select)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TAB1Select[K_STATUS],al */
	*(db*)(((db*)&kf_tab1select)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TAB1Toggle[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_tab1toggle)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TAB1Toggle[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_tab1toggle)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TAB1Toggle[K_STATUS],al */
	*(db*)(((db*)&kf_tab1toggle)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TAB2Select[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_tab2select)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TAB2Select[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_tab2select)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TAB2Select[K_STATUS],al */
	*(db*)(((db*)&kf_tab2select)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TAB2Toggle[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_tab2toggle)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TAB2Toggle[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_tab2toggle)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TAB2Toggle[K_STATUS],al */
	*(db*)(((db*)&kf_tab2toggle)+k_status) = al;
	// 0 ;---------------------------
kf_updatecommon:
	// 4401 
	// 0 ;---------------------------
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_PilotView[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_pilotview)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_PilotView[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_pilotview)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_PilotView[K_STATUS],al */
	*(db*)(((db*)&kf_pilotview)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_NavigView[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_navigview)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_NavigView[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_navigview)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_NavigView[K_STATUS],al */
	*(db*)(((db*)&kf_navigview)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_NavigViewWithCtrl[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_navigviewwithctrl)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_NavigViewWithCtrl[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_navigviewwithctrl)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],al */
	*(db*)(((db*)&kf_navigviewwithctrl)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_LViewFix[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_lviewfix)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_LViewFix[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_lviewfix)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_LViewFix[K_STATUS],al */
	*(db*)(((db*)&kf_lviewfix)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_RViewFix[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_rviewfix)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_RViewFix[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_rviewfix)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_RViewFix[K_STATUS],al */
	*(db*)(((db*)&kf_rviewfix)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_LViewGlance[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_lviewglance)+k_state));
	/* mov	BYTE PTR KF_LViewGlance[K_STATUS],al */
	*(db*)(((db*)&kf_lviewglance)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_RViewGlance[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_rviewglance)+k_state));
	/* mov	BYTE PTR KF_RViewGlance[K_STATUS],al */
	*(db*)(((db*)&kf_rviewglance)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TrackingCam[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_trackingcam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TrackingCam[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_trackingcam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TrackingCam[K_STATUS],al */
	*(db*)(((db*)&kf_trackingcam)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TrackingCamUp[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_trackingcamup)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TrackingCamUp[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_trackingcamup)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TrackingCamUp[K_STATUS],al */
	*(db*)(((db*)&kf_trackingcamup)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AdjustHorizonUp[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_adjusthorizonup)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AdjustHorizonUp[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_adjusthorizonup)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AdjustHorizonUp[K_STATUS],al */
	*(db*)(((db*)&kf_adjusthorizonup)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_SatelliteCam[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_satellitecam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_SatelliteCam[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_satellitecam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_SatelliteCam[K_STATUS],al */
	*(db*)(((db*)&kf_satellitecam)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_RemoteView[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_remoteview)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_RemoteView[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_remoteview)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_RemoteView[K_STATUS],al */
	*(db*)(((db*)&kf_remoteview)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_MapView[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_mapview)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_MapView[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_mapview)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_MapView[K_STATUS],al */
	*(db*)(((db*)&kf_mapview)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_DroneView[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_droneview)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_DroneView[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_droneview)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_DroneView[K_STATUS],al */
	*(db*)(((db*)&kf_droneview)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_DronePrev[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_droneprev)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_DronePrev[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_droneprev)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_DronePrev[K_STATUS],al */
	*(db*)(((db*)&kf_droneprev)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_DroneSide[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_droneside)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_DroneSide[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_droneside)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_DroneSide[K_STATUS],al */
	*(db*)(((db*)&kf_droneside)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_DroneType[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_dronetype)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_DroneType[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_dronetype)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_DroneType[K_STATUS],al */
	*(db*)(((db*)&kf_dronetype)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Spectator[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_spectator)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Spectator[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_spectator)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Spectator[K_STATUS],al */
	*(db*)(((db*)&kf_spectator)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_RestoreSpec[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_restorespec)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_RestoreSpec[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_restorespec)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_RestoreSpec[K_STATUS],al */
	*(db*)(((db*)&kf_restorespec)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_LookDown[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_lookdown)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_LookDown[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_lookdown)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_LookDown[K_STATUS],al */
	*(db*)(((db*)&kf_lookdown)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ViewWeapon[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_viewweapon)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ViewWeapon[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_viewweapon)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ViewWeapon[K_STATUS],al */
	*(db*)(((db*)&kf_viewweapon)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_IronWork[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_ironwork)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_IronWork[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_ironwork)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_IronWork[K_STATUS],al */
	*(db*)(((db*)&kf_ironwork)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Control[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_control)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Control[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_control)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Control[K_STATUS],al */
	*(db*)(((db*)&kf_control)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Sound[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_sound)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Sound[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_sound)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Sound[K_STATUS],al */
	*(db*)(((db*)&kf_sound)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Yaw[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_yaw)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_yaw)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Yaw[K_STATUS],al */
	*(db*)(((db*)&kf_yaw)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Gear[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_gear)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Gear[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_gear)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Gear[K_STATUS],al */
	*(db*)(((db*)&kf_gear)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_WheelBrakes[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_wheelbrakes)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_WheelBrakes[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_wheelbrakes)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_WheelBrakes[K_STATUS],al */
	*(db*)(((db*)&kf_wheelbrakes)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AirBrakes[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_airbrakes)+k_state));
	/* mov	BYTE PTR KF_AirBrakes[K_STATUS],al */
	*(db*)(((db*)&kf_airbrakes)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_WingSwpFwd[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_wingswpfwd)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_WingSwpFwd[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_wingswpfwd)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_WingSwpFwd[K_STATUS],al */
	*(db*)(((db*)&kf_wingswpfwd)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_WingSwpBack[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_wingswpback)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_WingSwpBack[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_wingswpback)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_WingSwpBack[K_STATUS],al */
	*(db*)(((db*)&kf_wingswpback)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_FlapsUp[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_flapsup)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_FlapsUp[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_flapsup)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_FlapsUp[K_STATUS],al */
	*(db*)(((db*)&kf_flapsup)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_FlapsDn[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_flapsdn)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_FlapsDn[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_flapsdn)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_FlapsDn[K_STATUS],al */
	*(db*)(((db*)&kf_flapsdn)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_SPILS[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_spils)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_SPILS[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_spils)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_SPILS[K_STATUS],al */
	*(db*)(((db*)&kf_spils)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_MFDSelect[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_mfdselect)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_MFDSelect[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_mfdselect)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_MFDSelect[K_STATUS],al */
	*(db*)(((db*)&kf_mfdselect)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_MFDToggle[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_mfdtoggle)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_MFDToggle[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_mfdtoggle)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_MFDToggle[K_STATUS],al */
	*(db*)(((db*)&kf_mfdtoggle)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_MapZoomIn[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_mapzoomin)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_MapZoomIn[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_mapzoomin)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_MapZoomIn[K_STATUS],al */
	*(db*)(((db*)&kf_mapzoomin)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_MapZoomOut[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_mapzoomout)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_MapZoomOut[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_mapzoomout)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_MapZoomOut[K_STATUS],al */
	*(db*)(((db*)&kf_mapzoomout)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_MapOrigin[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_maporigin)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_MapOrigin[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_maporigin)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_MapOrigin[K_STATUS],al */
	*(db*)(((db*)&kf_maporigin)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_GndRadar[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_gndradar)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_GndRadar[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_gndradar)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_GndRadar[K_STATUS],al */
	*(db*)(((db*)&kf_gndradar)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AirRadar[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_airradar)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AirRadar[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_airradar)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AirRadar[K_STATUS],al */
	*(db*)(((db*)&kf_airradar)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_RadarOff[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_radaroff)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_RadarOff[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_radaroff)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_RadarOff[K_STATUS],al */
	*(db*)(((db*)&kf_radaroff)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_BoreSight[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_boresight)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_BoreSight[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_boresight)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_BoreSight[K_STATUS],al */
	*(db*)(((db*)&kf_boresight)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_CycleAirTgt[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_cycleairtgt)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_CycleAirTgt[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_cycleairtgt)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_CycleAirTgt[K_STATUS],al */
	*(db*)(((db*)&kf_cycleairtgt)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_CancelAirTgt[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_cancelairtgt)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_CancelAirTgt[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_cancelairtgt)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_CancelAirTgt[K_STATUS],al */
	*(db*)(((db*)&kf_cancelairtgt)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmGnd[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_armgnd)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmGnd[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_armgnd)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmGnd[K_STATUS],al */
	*(db*)(((db*)&kf_armgnd)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmAir[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_armair)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmAir[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_armair)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmAir[K_STATUS],al */
	*(db*)(((db*)&kf_armair)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmOff[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_armoff)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmOff[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_armoff)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmOff[K_STATUS],al */
	*(db*)(((db*)&kf_armoff)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Package[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_package)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Package[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_package)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Package[K_STATUS],al */
	*(db*)(((db*)&kf_package)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ChangeArmor[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_changearmor)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ChangeArmor[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_changearmor)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ChangeArmor[K_STATUS],al */
	*(db*)(((db*)&kf_changearmor)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmorCtrlShift[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_armorctrlshift)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmorCtrlShift[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_armorctrlshift)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmorCtrlShift[K_STATUS],al */
	*(db*)(((db*)&kf_armorctrlshift)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmorCtrlAlt[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_armorctrlalt)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmorCtrlAlt[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_armorctrlalt)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmorCtrlAlt[K_STATUS],al */
	*(db*)(((db*)&kf_armorctrlalt)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmorDown[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_armordown)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmorDown[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_armordown)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmorDown[K_STATUS],al */
	*(db*)(((db*)&kf_armordown)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TurnEScopeOn[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_turnescopeon)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TurnEScopeOn[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_turnescopeon)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TurnEScopeOn[K_STATUS],al */
	*(db*)(((db*)&kf_turnescopeon)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_WpnMode[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_wpnmode)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_WpnMode[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_wpnmode)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_WpnMode[K_STATUS],al */
	*(db*)(((db*)&kf_wpnmode)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AirWeapon[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_airweapon)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AirWeapon[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_airweapon)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AirWeapon[K_STATUS],al */
	*(db*)(((db*)&kf_airweapon)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_WpnFire[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_wpnfire)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_WpnFire[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_wpnfire)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_WpnFire[K_STATUS],al */
	*(db*)(((db*)&kf_wpnfire)+k_status) = al;
	// 0 ;* status = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_WpnCommit[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_wpncommit)+k_state));
	/* mov	BYTE PTR KF_WpnCommit[K_STATUS],al */
	*(db*)(((db*)&kf_wpncommit)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ECM[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_ecm)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ECM[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_ecm)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ECM[K_STATUS],al */
	*(db*)(((db*)&kf_ecm)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Chaff[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_chaff)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Chaff[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_chaff)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Chaff[K_STATUS],al */
	*(db*)(((db*)&kf_chaff)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Flare[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_flare)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Flare[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_flare)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Flare[K_STATUS],al */
	*(db*)(((db*)&kf_flare)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AutoCancel[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_autocancel)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AutoCancel[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_autocancel)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AutoCancel[K_STATUS],al */
	*(db*)(((db*)&kf_autocancel)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Approach[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_approach)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Approach[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_approach)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Approach[K_STATUS],al */
	*(db*)(((db*)&kf_approach)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Track[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_track)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Track[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_track)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Track[K_STATUS],al */
	*(db*)(((db*)&kf_track)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Hold[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_hold)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Hold[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_hold)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Hold[K_STATUS],al */
	*(db*)(((db*)&kf_hold)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TFollow[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_tfollow)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TFollow[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_tfollow)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TFollow[K_STATUS],al */
	*(db*)(((db*)&kf_tfollow)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Throttle[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_throttle)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Throttle[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_throttle)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Throttle[K_STATUS],al */
	*(db*)(((db*)&kf_throttle)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_SAMLauncherToTornado[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_samlaunchertotornado)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_SAMLauncherToTornado[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_samlaunchertotornado)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_SAMLauncherToTornado[K_STATUS],al */
	*(db*)(((db*)&kf_samlaunchertotornado)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AAAToTornadoView1[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_aaatotornadoview1)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AAAToTornadoView1[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_aaatotornadoview1)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AAAToTornadoView1[K_STATUS],al */
	*(db*)(((db*)&kf_aaatotornadoview1)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AAAToTornadoView2[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_aaatotornadoview2)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AAAToTornadoView2[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_aaatotornadoview2)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AAAToTornadoView2[K_STATUS],al */
	*(db*)(((db*)&kf_aaatotornadoview2)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_AutoTrim[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_autotrim)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_AutoTrim[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_autotrim)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_AutoTrim[K_STATUS],al */
	*(db*)(((db*)&kf_autotrim)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_SkipWaypoint[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_skipwaypoint)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_SkipWaypoint[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_skipwaypoint)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_SkipWaypoint[K_STATUS],al */
	*(db*)(((db*)&kf_skipwaypoint)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_SelectTgtWP[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_selecttgtwp)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_SelectTgtWP[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_selecttgtwp)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_SelectTgtWP[K_STATUS],al */
	*(db*)(((db*)&kf_selecttgtwp)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_CancelTgtWP[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_canceltgtwp)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_CancelTgtWP[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_canceltgtwp)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_CancelTgtWP[K_STATUS],al */
	*(db*)(((db*)&kf_canceltgtwp)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JetExtTanks[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_jetexttanks)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JetExtTanks[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_jetexttanks)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_JetExtTanks[K_STATUS],al */
	*(db*)(((db*)&kf_jetexttanks)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JetExtStores[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_jetextstores)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JetExtStores[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_jetextstores)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_JetExtStores[K_STATUS],al */
	*(db*)(((db*)&kf_jetextstores)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JetAll[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_jetall)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JetAll[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_jetall)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_JetAll[K_STATUS],al */
	*(db*)(((db*)&kf_jetall)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Eject[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_eject)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Eject[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_eject)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Eject[K_STATUS],al */
	*(db*)(((db*)&kf_eject)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_CancelAttn[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_cancelattn)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_CancelAttn[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_cancelattn)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_CancelAttn[K_STATUS],al */
	*(db*)(((db*)&kf_cancelattn)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Recal[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_recal)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Recal[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_recal)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Recal[K_STATUS],al */
	*(db*)(((db*)&kf_recal)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JoySensNorm[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_joysensnorm)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JoySensNorm[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_joysensnorm)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_JoySensNorm[K_STATUS],al */
	*(db*)(((db*)&kf_joysensnorm)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_JoySensHigh[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_joysenshigh)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_JoySensHigh[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_joysenshigh)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_JoySensHigh[K_STATUS],al */
	*(db*)(((db*)&kf_joysenshigh)+k_status) = al;
	/* jmp	ContGameKeys */
	goto contgamekeys;
	// 0 ;---------------------------
updatedisabled:
	// 4403 
	// 0 ;update when input disabled
	// 0 ;---------------------------
	/* mov	BYTE PTR KF_HUDContrast[K_STATUS],0 */
	*(db*)(((db*)&kf_hudcontrast)+k_status) = 0;
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	*(db*)(((db*)&kf_togglepitchcam)+k_status) = 0;
	/* mov	BYTE PTR KF_HUDSwitch[K_STATUS],0 */
	*(db*)(((db*)&kf_hudswitch)+k_status) = 0;
	/* mov	BYTE PTR KF_HUDOption[K_STATUS],0 */
	*(db*)(((db*)&kf_hudoption)+k_status) = 0;
	/* mov	BYTE PTR KF_ResetTrkCam[K_STATUS],0 */
	*(db*)(((db*)&kf_resettrkcam)+k_status) = 0;
	/* mov	BYTE PTR KF_ResetSatCam[K_STATUS],0 */
	*(db*)(((db*)&kf_resetsatcam)+k_status) = 0;
	/* mov	BYTE PTR KF_AdjustHorizonDown[K_STATUS],0 */
	*(db*)(((db*)&kf_adjusthorizondown)+k_status) = 0;
	/* mov	BYTE PTR KF_ResetWpnCam[K_STATUS],0 */
	*(db*)(((db*)&kf_resetwpncam)+k_status) = 0;
	/* mov	BYTE PTR KF_ZoomIn[K_STATUS],0 */
	*(db*)(((db*)&kf_zoomin)+k_status) = 0;
	/* mov	BYTE PTR KF_ZoomOut[K_STATUS],0 */
	*(db*)(((db*)&kf_zoomout)+k_status) = 0;
	/* mov	BYTE PTR KF_FastZoomIn[K_STATUS],0 */
	*(db*)(((db*)&kf_fastzoomin)+k_status) = 0;
	/* mov	BYTE PTR KF_FastZoomOut[K_STATUS],0 */
	*(db*)(((db*)&kf_fastzoomout)+k_status) = 0;
	/* mov	BYTE PTR KF_TrackClk[K_STATUS],0 */
	*(db*)(((db*)&kf_trackclk)+k_status) = 0;
	/* mov	BYTE PTR KF_TrackAClk[K_STATUS],0 */
	*(db*)(((db*)&kf_trackaclk)+k_status) = 0;
	/* mov	BYTE PTR KF_FastTrkClk[K_STATUS],0 */
	*(db*)(((db*)&kf_fasttrkclk)+k_status) = 0;
	/* mov	BYTE PTR KF_FastTrkAClk[K_STATUS],0 */
	*(db*)(((db*)&kf_fasttrkaclk)+k_status) = 0;
	/* mov	BYTE PTR KF_DispSelect[K_STATUS],0 */
	*(db*)(((db*)&kf_dispselect)+k_status) = 0;
	/* mov	BYTE PTR KF_TAB1Select[K_STATUS],0 */
	*(db*)(((db*)&kf_tab1select)+k_status) = 0;
	/* mov	BYTE PTR KF_TAB1Toggle[K_STATUS],0 */
	*(db*)(((db*)&kf_tab1toggle)+k_status) = 0;
	/* mov	BYTE PTR KF_TAB2Select[K_STATUS],0 */
	*(db*)(((db*)&kf_tab2select)+k_status) = 0;
	/* mov	BYTE PTR KF_TAB2Toggle[K_STATUS],0 */
	*(db*)(((db*)&kf_tab2toggle)+k_status) = 0;
	/* mov	BYTE PTR KF_PilotView[K_STATUS],0 */
	*(db*)(((db*)&kf_pilotview)+k_status) = 0;
	/* mov	BYTE PTR KF_NavigView[K_STATUS],0 */
	*(db*)(((db*)&kf_navigview)+k_status) = 0;
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*(db*)(((db*)&kf_navigviewwithctrl)+k_status) = 0;
	/* mov	BYTE PTR KF_LViewFix[K_STATUS],0 */
	*(db*)(((db*)&kf_lviewfix)+k_status) = 0;
	/* mov	BYTE PTR KF_RViewFix[K_STATUS],0 */
	*(db*)(((db*)&kf_rviewfix)+k_status) = 0;
	/* mov	BYTE PTR KF_LViewGlance[K_STATUS],0 */
	*(db*)(((db*)&kf_lviewglance)+k_status) = 0;
	/* mov	BYTE PTR KF_RViewGlance[K_STATUS],0 */
	*(db*)(((db*)&kf_rviewglance)+k_status) = 0;
	/* mov	BYTE PTR KF_TrackingCam[K_STATUS],0 */
	*(db*)(((db*)&kf_trackingcam)+k_status) = 0;
	/* mov	BYTE PTR KF_TrackingCamUp[K_STATUS],0 */
	*(db*)(((db*)&kf_trackingcamup)+k_status) = 0;
	/* mov	BYTE PTR KF_AdjustHorizonUp[K_STATUS],0 */
	*(db*)(((db*)&kf_adjusthorizonup)+k_status) = 0;
	/* mov	BYTE PTR KF_SatelliteCam[K_STATUS],0 */
	*(db*)(((db*)&kf_satellitecam)+k_status) = 0;
	/* mov	BYTE PTR KF_RemoteView[K_STATUS],0 */
	*(db*)(((db*)&kf_remoteview)+k_status) = 0;
	/* mov	BYTE PTR KF_MapView[K_STATUS],0 */
	*(db*)(((db*)&kf_mapview)+k_status) = 0;
	/* mov	BYTE PTR KF_DroneView[K_STATUS],0 */
	*(db*)(((db*)&kf_droneview)+k_status) = 0;
	/* mov	BYTE PTR KF_DronePrev[K_STATUS],0 */
	*(db*)(((db*)&kf_droneprev)+k_status) = 0;
	/* mov	BYTE PTR KF_DroneSide[K_STATUS],0 */
	*(db*)(((db*)&kf_droneside)+k_status) = 0;
	/* mov	BYTE PTR KF_DroneType[K_STATUS],0 */
	*(db*)(((db*)&kf_dronetype)+k_status) = 0;
	/* mov	BYTE PTR KF_Spectator[K_STATUS],0 */
	*(db*)(((db*)&kf_spectator)+k_status) = 0;
	/* mov	BYTE PTR KF_RestoreSpec[K_STATUS],0 */
	*(db*)(((db*)&kf_restorespec)+k_status) = 0;
	/* mov	BYTE PTR KF_LookDown[K_STATUS],0 */
	*(db*)(((db*)&kf_lookdown)+k_status) = 0;
	/* mov	BYTE PTR KF_ViewWeapon[K_STATUS],0 */
	*(db*)(((db*)&kf_viewweapon)+k_status) = 0;
	/* mov	BYTE PTR KF_IronWork[K_STATUS],0 */
	*(db*)(((db*)&kf_ironwork)+k_status) = 0;
	/* mov	BYTE PTR KF_Control[K_STATUS],0 */
	*(db*)(((db*)&kf_control)+k_status) = 0;
	/* mov	BYTE PTR KF_Sound[K_STATUS],0 */
	*(db*)(((db*)&kf_sound)+k_status) = 0;
	/* mov	BYTE PTR KF_Yaw[K_STATUS],0 */
	*(db*)(((db*)&kf_yaw)+k_status) = 0;
	/* mov	BYTE PTR KF_Gear[K_STATUS],0 */
	*(db*)(((db*)&kf_gear)+k_status) = 0;
	/* mov	BYTE PTR KF_WheelBrakes[K_STATUS],0 */
	*(db*)(((db*)&kf_wheelbrakes)+k_status) = 0;
	/* mov	BYTE PTR KF_AirBrakes[K_STATUS],0 */
	*(db*)(((db*)&kf_airbrakes)+k_status) = 0;
	/* mov	BYTE PTR KF_WingSwpFwd[K_STATUS],0 */
	*(db*)(((db*)&kf_wingswpfwd)+k_status) = 0;
	/* mov	BYTE PTR KF_WingSwpBack[K_STATUS],0 */
	*(db*)(((db*)&kf_wingswpback)+k_status) = 0;
	/* mov	BYTE PTR KF_FlapsUp[K_STATUS],0 */
	*(db*)(((db*)&kf_flapsup)+k_status) = 0;
	/* mov	BYTE PTR KF_FlapsDn[K_STATUS],0 */
	*(db*)(((db*)&kf_flapsdn)+k_status) = 0;
	/* mov	BYTE PTR KF_SPILS[K_STATUS],0 */
	*(db*)(((db*)&kf_spils)+k_status) = 0;
	/* mov	BYTE PTR KF_MFDSelect[K_STATUS],0 */
	*(db*)(((db*)&kf_mfdselect)+k_status) = 0;
	/* mov	BYTE PTR KF_MFDToggle[K_STATUS],0 */
	*(db*)(((db*)&kf_mfdtoggle)+k_status) = 0;
	/* mov	BYTE PTR KF_MapZoomIn[K_STATUS],0 */
	*(db*)(((db*)&kf_mapzoomin)+k_status) = 0;
	/* mov	BYTE PTR KF_MapZoomOut[K_STATUS],0 */
	*(db*)(((db*)&kf_mapzoomout)+k_status) = 0;
	/* mov	BYTE PTR KF_MapOrigin[K_STATUS],0 */
	*(db*)(((db*)&kf_maporigin)+k_status) = 0;
	/* mov	BYTE PTR KF_GndRadar[K_STATUS],0 */
	*(db*)(((db*)&kf_gndradar)+k_status) = 0;
	/* mov	BYTE PTR KF_AirRadar[K_STATUS],0 */
	*(db*)(((db*)&kf_airradar)+k_status) = 0;
	/* mov	BYTE PTR KF_RadarOff[K_STATUS],0 */
	*(db*)(((db*)&kf_radaroff)+k_status) = 0;
	/* mov	BYTE PTR KF_BoreSight[K_STATUS],0 */
	*(db*)(((db*)&kf_boresight)+k_status) = 0;
	/* mov	BYTE PTR KF_CycleAirTgt[K_STATUS],0 */
	*(db*)(((db*)&kf_cycleairtgt)+k_status) = 0;
	/* mov	BYTE PTR KF_CancelAirTgt[K_STATUS],0 */
	*(db*)(((db*)&kf_cancelairtgt)+k_status) = 0;
	/* mov	BYTE PTR KF_ChangeArmor[K_STATUS],0 */
	*(db*)(((db*)&kf_changearmor)+k_status) = 0;
	/* mov	BYTE PTR KF_ArmorCtrlShift[K_STATUS],0 */
	*(db*)(((db*)&kf_armorctrlshift)+k_status) = 0;
	/* mov	BYTE PTR KF_ArmorCtrlAlt[K_STATUS],0 */
	*(db*)(((db*)&kf_armorctrlalt)+k_status) = 0;
	/* mov	BYTE PTR KF_ArmorDown[K_STATUS],0 */
	*(db*)(((db*)&kf_armordown)+k_status) = 0;
	/* mov	BYTE PTR KF_TurnEScopeOn[K_STATUS],0 */
	*(db*)(((db*)&kf_turnescopeon)+k_status) = 0;
	/* mov	BYTE PTR KF_ArmGnd[K_STATUS],0 */
	*(db*)(((db*)&kf_armgnd)+k_status) = 0;
	/* mov	BYTE PTR KF_ArmAir[K_STATUS],0 */
	*(db*)(((db*)&kf_armair)+k_status) = 0;
	/* mov	BYTE PTR KF_ArmOff[K_STATUS],0 */
	*(db*)(((db*)&kf_armoff)+k_status) = 0;
	/* mov	BYTE PTR KF_Package[K_STATUS],0 */
	*(db*)(((db*)&kf_package)+k_status) = 0;
	/* mov	BYTE PTR KF_WpnMode[K_STATUS],0 */
	*(db*)(((db*)&kf_wpnmode)+k_status) = 0;
	/* mov	BYTE PTR KF_AirWeapon[K_STATUS],0 */
	*(db*)(((db*)&kf_airweapon)+k_status) = 0;
	/* mov	BYTE PTR KF_WpnFire[K_STATUS],0 */
	*(db*)(((db*)&kf_wpnfire)+k_status) = 0;
	/* mov	BYTE PTR KF_WpnCommit[K_STATUS],0 */
	*(db*)(((db*)&kf_wpncommit)+k_status) = 0;
	/* mov	BYTE PTR KF_ECM[K_STATUS],0 */
	*(db*)(((db*)&kf_ecm)+k_status) = 0;
	/* mov	BYTE PTR KF_Chaff[K_STATUS],0 */
	*(db*)(((db*)&kf_chaff)+k_status) = 0;
	/* mov	BYTE PTR KF_Flare[K_STATUS],0 */
	*(db*)(((db*)&kf_flare)+k_status) = 0;
	/* mov	BYTE PTR KF_AutoCancel[K_STATUS],0 */
	*(db*)(((db*)&kf_autocancel)+k_status) = 0;
	/* mov	BYTE PTR KF_Approach[K_STATUS],0 */
	*(db*)(((db*)&kf_approach)+k_status) = 0;
	/* mov	BYTE PTR KF_Track[K_STATUS],0 */
	*(db*)(((db*)&kf_track)+k_status) = 0;
	/* mov	BYTE PTR KF_Hold[K_STATUS],0 */
	*(db*)(((db*)&kf_hold)+k_status) = 0;
	/* mov	BYTE PTR KF_TFollow[K_STATUS],0 */
	*(db*)(((db*)&kf_tfollow)+k_status) = 0;
	/* mov	BYTE PTR KF_Throttle[K_STATUS],0 */
	*(db*)(((db*)&kf_throttle)+k_status) = 0;
	/* mov	BYTE PTR KF_SAMLauncherToTornado[K_STATUS],0 */
	*(db*)(((db*)&kf_samlaunchertotornado)+k_status) = 0;
	/* mov	BYTE PTR KF_AAAToTornadoView1[K_STATUS],0 */
	*(db*)(((db*)&kf_aaatotornadoview1)+k_status) = 0;
	/* mov	BYTE PTR KF_AAAToTornadoView2[K_STATUS],0 */
	*(db*)(((db*)&kf_aaatotornadoview2)+k_status) = 0;
	/* mov	BYTE PTR KF_AutoTrim[K_STATUS],0 */
	*(db*)(((db*)&kf_autotrim)+k_status) = 0;
	/* mov	BYTE PTR KF_SkipWaypoint[K_STATUS],0 */
	*(db*)(((db*)&kf_skipwaypoint)+k_status) = 0;
	/* mov	BYTE PTR KF_SelectTgtWP[K_STATUS],0 */
	*(db*)(((db*)&kf_selecttgtwp)+k_status) = 0;
	/* mov	BYTE PTR KF_CancelTgtWP[K_STATUS],0 */
	*(db*)(((db*)&kf_canceltgtwp)+k_status) = 0;
	/* mov	BYTE PTR KF_JetExtTanks[K_STATUS],0 */
	*(db*)(((db*)&kf_jetexttanks)+k_status) = 0;
	/* mov	BYTE PTR KF_JetExtStores[K_STATUS],0 */
	*(db*)(((db*)&kf_jetextstores)+k_status) = 0;
	/* mov	BYTE PTR KF_JetAll[K_STATUS],0 */
	*(db*)(((db*)&kf_jetall)+k_status) = 0;
	/* mov	BYTE PTR KF_Eject[K_STATUS],0 */
	*(db*)(((db*)&kf_eject)+k_status) = 0;
	/* mov	BYTE PTR KF_CancelAttn[K_STATUS],0 */
	*(db*)(((db*)&kf_cancelattn)+k_status) = 0;
	/* mov	BYTE PTR KF_Recal[K_STATUS],0 */
	*(db*)(((db*)&kf_recal)+k_status) = 0;
	/* mov	BYTE PTR KF_JoySensNorm[K_STATUS],0 */
	*(db*)(((db*)&kf_joysensnorm)+k_status) = 0;
	/* mov	BYTE PTR KF_JoySensHigh[K_STATUS],0 */
	*(db*)(((db*)&kf_joysenshigh)+k_status) = 0;
contgamekeys:
	// 4405 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*(db*)(((db*)&kf_range)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_GndText[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_gndtext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_gndtext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_GndText[K_STATUS],al */
	*(db*)(((db*)&kf_gndtext)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_HillText[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_hilltext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_HillText[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_hilltext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_HillText[K_STATUS],al */
	*(db*)(((db*)&kf_hilltext)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_HillTextCancel[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_hilltextcancel)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_HillTextCancel[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_hilltextcancel)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_HillTextCancel[K_STATUS],al */
	*(db*)(((db*)&kf_hilltextcancel)+k_status) = al;
	// 0 ;KBOUNCE KF_HillTextReverse
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Clouds[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_clouds)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Clouds[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_clouds)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Clouds[K_STATUS],al */
	*(db*)(((db*)&kf_clouds)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Horizon[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_horizon)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Horizon[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_horizon)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Horizon[K_STATUS],al */
	*(db*)(((db*)&kf_horizon)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*(db*)(((db*)&kf_minimise)+k_status) = al;
	// 0 ;---------------------------
updatepaused:
	// 4407 
	// 0 ;update when input disabled or paused
	// 0 ;---------------------------
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Quit[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_quit)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Quit[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_quit)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Quit[K_STATUS],al */
	*(db*)(((db*)&kf_quit)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Pause[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_pause)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Pause[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_pause)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Pause[K_STATUS],al */
	*(db*)(((db*)&kf_pause)+k_status) = al;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Full_MFD[K_STATE] */
	XCHG(al, *(db*)(((db*)&kf_full_mfd)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Full_MFD[K_LOCK] */
	XCHG(ah, *(db*)(((db*)&kf_full_mfd)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Full_MFD[K_STATUS],al */
	*(db*)(((db*)&kf_full_mfd)+k_status) = al;
	/* ret */
	RETN(0);
preamble:
	// 4791 
	// 0 ;--------------------------
	// 0 ;* store previous viewpoint (for collision testing)
	// 0 ;--------------------------
edummylabel4:
	// 4409 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET M_TEST */
	di = m2c::near_offset_external(m_test);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4800 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 4801 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------
	// 0 ;* sort jettison
	// 0 ;---------------
	// 0 ;* jettison interlock - must be airborne and erect
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jz	JettisonOk	;no -> */
	if (!(airborne1 & 1)) {goto jettisonok;}
	/* test	M_CosR,0ffffh	;erect? */
	TEST(m_cosr, 0x0ffff);
	/* js	JettisonOk	;no -> */
	if ((short)((m_cosr & 0x0ffff)) < 0) {goto jettisonok;}
	/* mov	al,BYTE PTR KF_JetAll[K_STATUS] */
	al = *(db*)(((db*)&kf_jetall)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;jettison all?
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel8;}
	/* call	JetAll */
	CALL(jetall, 0);
	/* jmp	JettisonOk */
	goto jettisonok;
dummylabel8:
	// 4411 
	/* @@:	mov	al,BYTE PTR KF_JetExtStores[K_STATUS] */
	al = *(db*)(((db*)&kf_jetextstores)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;jettison ext stores?
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel9;}
	/* call	JetExtStores */
	CALL(jetextstores, 0);
	/* jmp	JettisonOk */
	goto jettisonok;
dummylabel9:
	// 4413 
	/* @@:	mov	al,BYTE PTR KF_JetExtTanks[K_STATUS] */
	al = *(db*)(((db*)&kf_jetexttanks)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;jettison ext fuel tanks?
	/* jz	JettisonOk	;no -> */
	if (!(al & al)) {goto jettisonok;}
	/* call	JetExtTanks */
	CALL(jetexttanks, 0);
	// 0 ;----------------------
	// 0 ;* calc aircraft weight
	// 0 ;----------------------
jettisonok:
	// 4415 
	/* JettisonOk:	test	DebugWeight,1	;debug weight? */
	TEST(*(debugweight), 1);
	/* jz	@F		;no -> */
	if (!(*(debugweight) & 1)) {goto dummylabel10;}
	/* mov	ax,FixedWeight */
	ax = fixedweight;
	/* jmp	SetWeight */
	goto setweight;
	// 0 ;* Weight = MIN_WEIGHT + StoresWt + FuelWt
dummylabel10:
	// 4417 
	/* @@: 		call	CalcStoresWt */
	CALLF(calcstoreswt, 0);
	/* mov	ax,MIN_WEIGHT */
	ax = 31065+200+200;
	/* add	ax,StoresWt */
	ADD(ax, storeswt);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0ffffh */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* or	ax,dx */
	OR(ax, dx);
	/* add	ax,FuelWt */
	ADD(ax, fuelwt);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0ffffh */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* or	ax,dx */
	OR(ax, dx);
setweight:
	// 4419 
	/* SetWeight:	mov	Weight,ax */
	weight = ax;
	// 0 ;* Weight2 = Weight / 2
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* mov	Weight2,ax */
	weight2 = ax;
	// 0 ;--------------------
	// 0 ;* sort undercarriage (toggle up / down, unchanged if damaged)
	// 0 ;--------------------
	// 0 ;* gear stuck if damaged
	/* mov	al,SSF_Gear */
	al = ssf_gear;
	/* test	al,al		;damaged? */
	TEST(al, al);
	/* jnz	SkipGear	;yes -> */
	if ((al & al) != 0) {goto skipgear;}
	// 0 ;* update gear timer
	/* mov	ax,GearTimer */
	ax = geartimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
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
	/* mov	GearTimer,ax */
	geartimer = ax;
	/* mov	al,BYTE PTR KF_Gear[K_STATUS] */
	al = *(db*)(((db*)&kf_gear)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;raise / lower undercarriage?
	/* jz	SkipGear	;no -> */
	if (!(al & al)) {goto skipgear;}
	/* mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;airborne? */
	TEST(al, al);
	/* jz	SkipGear	;no -> */
	if (!(al & al)) {goto skipgear;}
	/* test	HitHill,1	;hit hill? */
	TEST(hithill, 1);
	/* jnz	SkipGear	;yes -> */
	if ((hithill & 1) != 0) {goto skipgear;}
	/* xor	Gear,1		;toggle up / down */
	XOR(gear, 1);
	/* mov	ax,GEAR_TIME */
	ax = 300;
	/* sub	ax,GearTimer */
	SUB(ax, geartimer);
	/* mov	GearTimer,ax */
	geartimer = ax;
	/* call	GearSound */
	CALLF(gearsound, 0);
	// 0 ;------------------
	// 0 ;* sort wheelbrakes (toggle on / off, off if damaged)
	// 0 ;------------------
skipgear:
	// 4421 
	/* SkipGear:	mov	al,SSF_WheelBrakes */
	al = ssf_wheelbrakes;
	/* test	al,al		;damaged? */
	TEST(al, al);
	/* mov	al,0		;assume so */
	al = 0;
	/* jnz	@F		;yes -> */
	if (!ZF) {goto dummylabel11;}
	/* mov	al,BYTE PTR KF_WheelBrakes[K_STATUS] */
	al = *(db*)(((db*)&kf_wheelbrakes)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;wheelbrakes on / off?
	/* jz	SkipWBrakes	;no -> */
	if (!(al & al)) {goto skipwbrakes;}
	/* mov	al,WheelBrakes */
	al = wheelbrakes;
	/* xor	al,1		;toggle on / off */
	XOR(al, 1);
dummylabel11:
	// 4423 
	/* @@:		mov	WheelBrakes,al */
	wheelbrakes = al;
	// 0 ;-------------------------------------
	// 0 ;* sort airbrakes and thrust reversers (on whilst key held, off if damaged)
	// 0 ;-------------------------------------
skipwbrakes:
	// 4425 
	/* SkipWBrakes:	mov	AirBrakes,0 */
	airbrakes = 0;
	/* mov	ThrustRvrs,0 */
	thrustrvrs = 0;
	/* mov	al,BYTE PTR KF_AirBrakes[K_STATUS] */
	al = *(db*)(((db*)&kf_airbrakes)+k_status);
	/* or	al,JoyB_Fire1 */
	OR(al, joyb_fire1);
	/* test	AirBorne1,1	;airbrakes or thrust reversers? */
	TEST(airborne1, 1);
	/* jz	@F		;thrust reversers -> */
	if (!(airborne1 & 1)) {goto dummylabel12;}
	/* test	SSF_AirBrakes,1	;damaged? */
	TEST(ssf_airbrakes, 1);
	/* jnz	SkipAirBrakes	;yes -> */
	if ((ssf_airbrakes & 1) != 0) {goto skipairbrakes;}
	/* mov	AirBrakes,al */
	airbrakes = al;
	/* jmp	SkipAirBrakes */
	goto skipairbrakes;
dummylabel12:
	// 4427 
	/* @@:		test	SSF_ThrustRvrs,1	;damaged? */
	TEST(ssf_thrustrvrs, 1);
	/* jnz	SkipAirBrakes		;yes -> */
	if ((ssf_thrustrvrs & 1) != 0) {goto skipairbrakes;}
	/* mov	ThrustRvrs,al */
	thrustrvrs = al;
	// 0 ;* if thrust reversers on and thrust > max dry then start engine fire
	/* test	al,al		;thrust reversers on? */
	TEST(al, al);
	/* jz	SkipAirBrakes	;no -> */
	if (!(al & al)) {goto skipairbrakes;}
	/* cmp	Thrust1,9000	;thrust > max dry? */
	CMP(thrust1, 9000);
	/* jbe	@F		;no -> */
	if ((dw)(thrust1) <= (dw)(9000)) {goto dummylabel13;}
	/* mov	EngFire1,1		;start engine fire */
	engfire1 = 1;
	/* or	RedWarnings2,RED_L_FIRE	;report damage */
	OR(redwarnings2, 0x2);
dummylabel13:
	// 4429 
	/* @@:		cmp	Thrust2,9000	;thrust > max dry? */
	CMP(thrust2, 9000);
	/* jbe	@F		;no -> */
	if ((dw)(thrust2) <= (dw)(9000)) {goto dummylabel14;}
	/* mov	EngFire2,1		;start engine fire */
	engfire2 = 1;
	/* or	RedWarnings2,RED_R_FIRE	;report damage */
	OR(redwarnings2, 0x4);
	// 0 ;* if thrust reversers on and vtas < 25kts then damage engines
dummylabel14:
	// 4431 
	/* @@:		cmp	Vtas,43*8	;vtas < 25kts? */
	CMP(vtas, 43*8);
	/* jae	SkipAirBrakes	;no -> */
	if ((dw)(vtas) >= (dw)(43*8)) {goto skipairbrakes;}
	/* cmp	Thrust1,0	;engine 1 developing thrust? */
	CMP(thrust1, 0);
	/* je	@F		;no -> */
	if ((dw)(thrust1) == (dw)(0)) {goto dummylabel15;}
	/* mov	SSF_Engine1,1		;damage engine */
	ssf_engine1 = 1;
	/* or	RedWarnings2,RED_L_ENG	;report damage */
	OR(redwarnings2, 0x100);
dummylabel15:
	// 4433 
	/* @@:		cmp	Thrust2,0	;engine 2 developing thrust? */
	CMP(thrust2, 0);
	/* je	SkipAirBrakes	;no -> */
	if ((dw)(thrust2) == (dw)(0)) {goto skipairbrakes;}
	/* mov	SSF_Engine2,1		;damage engine */
	ssf_engine2 = 1;
	/* or	RedWarnings2,RED_R_ENG	;report damage */
	OR(redwarnings2, 0x200);
	// 0 ;------------
	// 0 ;* sort SPILS (toggle on / off, off if damaged)
	// 0 ;------------
skipairbrakes:
	// 4435 
	/* SkipAirBrakes:	mov	al,SSF_SPILS */
	al = ssf_spils;
	/* test	al,al		;damaged? */
	TEST(al, al);
	/* mov	al,0		;assume so */
	al = 0;
	/* jnz	@F		;yes -> */
	if (!ZF) {goto dummylabel16;}
	/* mov	al,BYTE PTR KF_SPILS[K_STATUS] */
	al = *(db*)(((db*)&kf_spils)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;SPILS on / off?
	/* jz	SkipSPILS	;no -> */
	if (!(al & al)) {goto skipspils;}
	/* mov	al,SPILS */
	al = spils;
	/* xor	al,1		;toggle on / off */
	XOR(al, 1);
dummylabel16:
	// 4437 
	/* @@:		mov	SPILS,al */
	spils = al;
	// 0 ;----------------
	// 0 ;* sort auto-trim
	// 0 ;----------------
skipspils:
	// 4439 
	/* SkipSPILS:	mov	al,BYTE PTR KF_AutoTrim[K_STATUS] */
	al = *(db*)(((db*)&kf_autotrim)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;centre controls and engage auto-trim?
	/* jz	SkipAutoTrim	;no -> */
	if (!(al & al)) {goto skipautotrim;}
	// 0 ;* check auto-pilot is off
	/* cmp	AutoMode,AUTO_OFF	;off? */
	CMP(automode, 0);
	/* jne	SkipAutoTrim		;no -> */
	if ((dw)(automode) != (dw)(0)) {goto skipautotrim;}
	/* xor	ax,ax		;centre controls */
	XOR(ax, ax);
	/* mov	ElePosn,ax */
	eleposn = ax;
	/* mov	AilPosn,ax */
	ailposn = ax;
	/* mov	RudPosn,ax */
	rudposn = ax;
	// 0 ;* engage auto-trim only if GCoord +ve
	/* cmp	GCoord,0	;+ve? */
	CMP(gcoord, 0);
	/* jl	SkipAutoTrim	;no -> */
	if ((short)(gcoord) < (short)(0)) {goto skipautotrim;}
	/* mov	AutoTrim,1 */
	autotrim = 1;
	// 0 ;-------------------------
	// 0 ;* recalibrate joystick(s)
	// 0 ;-------------------------
skipautotrim:
	// 4441 
	/* SkipAutoTrim:	mov	al,BYTE PTR KF_JoySensNorm[K_STATUS] */
	al = *(db*)(((db*)&kf_joysensnorm)+k_status);
	/* test	al,al */
	TEST(al, al);
	/* jz	@F */
	if (!(al & al)) {goto dummylabel17;}
	/* mov	JoySensitivity,0 */
	joysensitivity = 0;
dummylabel17:
	// 4443 
	/* @@:	mov	al,BYTE PTR KF_JoySensHigh[K_STATUS] */
	al = *(db*)(((db*)&kf_joysenshigh)+k_status);
	/* test	al,al */
	TEST(al, al);
	/* jz	@F */
	if (!(al & al)) {goto dummylabel18;}
	/* mov	JoySensitivity,1 */
	joysensitivity = 1;
dummylabel18:
	// 4445 
	/* @@:	mov	al,BYTE PTR KF_Recal[K_STATUS] */
	al = *(db*)(((db*)&kf_recal)+k_status);
	/* test	al,al */
	TEST(al, al);
	/* jz	SkipRecal */
	if (!(al & al)) {goto skiprecal;}
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	// 0 ;------------
	// 0 ;* sort eject (check before ECM as share same key)
	// 0 ;------------
skiprecal:
	// 4447 
	/* SkipRecal:	mov	al,BYTE PTR KF_Eject[K_STATUS] */
	al = *(db*)(((db*)&kf_eject)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;eject?
	/* jz	SkipEject	;no -> */
	if (!(al & al)) {goto skipeject;}
	/* call	StartEjectSeq */
	CALL(startejectseq, 0);
	/* jmp	SkipECM */
	goto skipecm;
	// 0 ;-----------------
	// 0 ;* sort ECM toggle
	// 0 ;-----------------
skipeject:
	// 4449 
	/* SkipEject:	mov	al,BYTE PTR KF_ECM[K_STATUS] */
	al = *(db*)(((db*)&kf_ecm)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;toggle ECM?
	/* jz	SkipECM		;no -> */
	if (!(al & al)) {goto skipecm;}
	/* test	SSF_ECM,1	;damaged? */
	TEST(ssf_ecm, 1);
	/* jnz	SkipECM		;yes -> */
	if ((ssf_ecm & 1) != 0) {goto skipecm;}
	/* mov	al,ECMFitted */
	al = ecmfitted;
	/* xor	ECMActive,al */
	XOR(ecmactive, al);
	// 0 ;------------------------------
	// 0 ;* sort quit game / end mission
	// 0 ;------------------------------
skipecm:
	// 4451 
	/* SkipECM:	mov	al,BYTE PTR KF_Quit[K_STATUS] */
	al = *(db*)(((db*)&kf_quit)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;quit?
	/* jz	SkipQuit	;no -> */
	if (!(al & al)) {goto skipquit;}
	// 0 ;* if TmpDieFlag <> 0 then
	// 0 ;*    DieFlag = TmpDieFlag
	// 0 ;* else
	// 0 ;*    DieFlag = DIE_QUIT
	// 0 ;* endif
	/* mov	al,TmpDieFlag */
	al = tmpdieflag;
	/* test	al,al */
	TEST(al, al);
	/* jnz	@F */
	if ((al & al) != 0) {goto dummylabel19;}
	/* mov	al,DIE_QUIT */
	al = 1;
dummylabel19:
	// 4453 
	/* @@:		mov	DieFlag,al */
	dieflag = al;
	// 0 ;* check landing flags
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jnz	SkipQuit	;yes -> */
	if ((airborne1 & 1) != 0) {goto skipquit;}
	// 0 ;* check if enemy territory
	/* cmp	ModelMapIndex,-1 */
	CMP(modelmapindex, -1);
	/* je	@F */
	if ((dw)(modelmapindex) == (dw)(-1)) {goto dummylabel20;}
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],SECT_ENEMY */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz	@F */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto dummylabel20;}
	/* or	Landing,LAND_ENEMY */
	OR(landing, 0x20);
	// 0 ;* check if stationary
dummylabel20:
	// 4455 
	/* @@:		cmp	Vtas,0		;stationary? */
	CMP(vtas, 0);
	/* ja	SkipQuit	;no -> */
	if ((dw)(vtas) > (dw)(0)) {goto skipquit;}
	/* or	Landing,LAND_STATIONARY */
	OR(landing, 0x40);
skipquit:
	// 4457 
	/* SkipQuit:	ret */
	RETN(0);
crosswinds:
	// 5070 
	/* cmp	XWindVmax,0	;crosswinds enabled? */
	CMP(xwindvmax, 0);
edummylabel5:
	// 4459 
	/* jne	__m2c_macrolocal_238_skip */
	if (!ZF) {goto __m2c_macrolocal_238_skip;}
	/* jmp	ExitWinds */
	goto exitwinds;
__m2c_macrolocal_238_skip:
	// 4461 
	// 0 ;no ->
	// 0 ;------------------------------------
	// 0 ;* attenuate wind with aircraft speed (cancels wind effect for auto-pilot)
	// 0 ;------------------------------------
	// 0 ;* start fade at 150kts (tas), fully faded by 225kts (tas)
	/* mov	ax,Vtas */
	ax = vtas;
	/* cmp	ax,2048 */
	CMP(ax, 2048);
	/* jae	__m2c_macrolocal_239_TestHi */
	if ((dw)(ax) >= (dw)(2048)) {goto __m2c_macrolocal_239_testhi;}
	/* mov	ax,2048 */
	ax = 2048;
	/* jmp	__m2c_macrolocal_239_TestOk */
	goto __m2c_macrolocal_239_testok;
__m2c_macrolocal_239_testhi:
	// 4463 
	/* __m2c_macrolocal_239_TestHi:		cmp	ax,3071 */
	CMP(ax, 3071);
	/* jbe	__m2c_macrolocal_239_TestOk */
	if ((dw)(ax) <= (dw)(3071)) {goto __m2c_macrolocal_239_testok;}
	/* mov	ax,3071 */
	ax = 3071;
__m2c_macrolocal_239_testok:
	// 4465 
	/* sub	ax,2048 */
	SUB(ax, 2048);
	/* mov	dx,1023 */
	dx = 1023;
	/* sub	dx,ax */
	SUB(dx, ax);
	/* mov	cl,5 */
	cl = 5;
	/* shl	dx,cl */
	SHL(dx, cl);
	/* mov	XWindFade,dx */
	xwindfade = dx;
	/* jnz	@F */
	if (!ZF) {goto dummylabel21;}
	// 0 ;* fully faded, clear variables
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	XWindVeff,ax */
	xwindveff = ax;
	/* mov	XWindDXft,ax */
	xwinddxft = ax;
	/* mov	XWindDXFine,ax */
	xwinddxfine = ax;
	/* mov	XWindDYft,ax */
	xwinddyft = ax;
	/* mov	XWindDYFine,ax */
	xwinddyfine = ax;
	/* jmp	ExitWinds */
	goto exitwinds;
	// 0 ;-----------------------
	// 0 ;* change wind direction
	// 0 ;-----------------------
dummylabel21:
	// 4467 
	/* @@:		mov	ax,XWindDirTimer */
	ax = xwinddirtimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel22;}
	// 0 ;* calc random number -2 .. 2
	/* call	RandX */
	CALLF(randx, 0);
	/* shl	ax,1		;ah =  0 .. 1 */
	SHL(ax, 1);
	/* shl	ax,1		;ah =  0 .. 3 */
	SHL(ax, 1);
	/* shl	al,1 */
	SHL(al, 1);
	/* adc	ah,0		;ah =  0 .. 4 */
	ADC(ah, 0);
	/* sub	ah,2		;ah = -2 .. 2 */
	SUB(ah, 2);
	/* mov	al,ah */
	al = ah;
	/* cbw */
	CBW;
	/* add	XWindDir,ax */
	ADD(xwinddir, ax);
	/* and	XWindDir,511 */
	AND(xwinddir, 511);
	/* mov	ax,XWIND_DIR_INT */
	ax = 15*100;
dummylabel22:
	// 4469 
	/* @@:		mov	XWindDirTimer,ax */
	xwinddirtimer = ax;
	// 0 ;------------------
	// 0 ;* change windspeed
	// 0 ;------------------
	// 0 ;* check if reached aiming windspeed
	/* mov	ax,XWindVtas */
	ax = xwindvtas;
	/* cmp	ax,XWindVaim */
	CMP(ax, xwindvaim);
	/* jne	ContWindspeed */
	if ((dw)(ax) != (dw)(xwindvaim)) {goto contwindspeed;}
	// 0 ;* calc new aiming windspeed
	// 0 ;*
	// 0 ;* XWindVaim = max(XWindVmax * random(0 .. 1), XWindVmax / 16)
	/* call	RandX */
	CALLF(randx, 0);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* shr	ax,1		;0 .. 32767 */
	SHR(ax, 1);
	/* mov	bp,XWindVmax */
	bp = xwindvmax;
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
	/* mov	ax,dx */
	ax = dx;
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(bp)) {goto dummylabel23;}
	/* mov	ax,bp */
	ax = bp;
dummylabel23:
	// 4471 
	/* @@:		mov	XWindVaim,ax */
	xwindvaim = ax;
	// 0 ;* calc new gust acceleration
	// 0 ;*
	// 0 ;* XWindVaim = max(XWindVmax / 4 * random(0 .. 1), XWindVmax / 16)
	/* call	RandX */
	CALLF(randx, 0);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* shr	ax,1		;0 .. 32767 */
	SHR(ax, 1);
	/* mov	bp,XWindVmax */
	bp = xwindvmax;
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
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
	/* mov	ax,dx */
	ax = dx;
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(bp)) {goto dummylabel24;}
	/* mov	ax,bp */
	ax = bp;
dummylabel24:
	// 4473 
	/* @@:		mov	XWindGust,ax */
	xwindgust = ax;
	// 0 ;* calc new windspeed
contwindspeed:
	// 4475 
	/* ContWindspeed: 	mov	ax,XWindGust */
	ax = xwindgust;
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	/* jnz	@F */
	if (dx != 0) {goto dummylabel25;}
	/* inc	bp */
	INC(bp);
dummylabel25:
	// 4477 
	/* @@:		mov	ax,XWindVaim */
	ax = xwindvaim;
	/* sub	ax,XWindVtas */
	SUB(ax, xwindvtas);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bp		;error < change? */
	CMP(ax, bp);
	/* jae	@F		;no -> */
	if ((dw)(ax) >= (dw)(bp)) {goto dummylabel26;}
	/* mov	bp,ax		;change = error */
	bp = ax;
dummylabel26:
	// 4479 
	/* @@:		xor	bp,dx */
	XOR(bp, dx);
	/* sub	bp,dx */
	SUB(bp, dx);
	/* add	XWindVtas,bp */
	ADD(xwindvtas, bp);
	// 0 ;* fade windspeed
	/* mov	ax,XWindVtas */
	ax = xwindvtas;
	/* mov	dx,XWindFade */
	dx = xwindfade;
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
	/* mov	XWindVfix,dx */
	xwindvfix = dx;
	// 0 ;* calc effective vtas
	// 0 ;*
	// 0 ;* XWindVeff = max(cos((hdg - XWindDir) and 511), 0) * cos(pitch) * XWindVfix
	/* mov	bx,Hdg */
	bx = hdg;
	/* sub	bx,XWindDir */
	SUB(bx, xwinddir);
	/* and	bx,511 */
	AND(bx, 511);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&costable)+bx););	// 5226 						mov	ax,CosTable[bx] */
	/* test	ax,ax */
	TEST(ax, ax);
	/* jns	@F */
	if ((short)((ax & ax)) >= 0) {goto dummylabel27;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel27:
	// 4481 
	/* @@:		mov	dx,M_CosP */
	dx = m_cosp;
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
	/* mov	ax,XWindVfix */
	ax = xwindvfix;
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
	/* mov	XWindVeff,dx */
	xwindveff = dx;
	// 0 ;------------------------------
	// 0 ;* calc delta xft and delta yft (wrt windspeed and direction)
	// 0 ;------------------------------
	// 0 ;* calc sin(wind dir + 180), cos(wind dir + 180)
	/* mov	bx,XWindDir */
	bx = xwinddir;
	/* add	bx,256 */
	ADD(bx, 256);
	/* and	bx,511 */
	AND(bx, 511);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 5255 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 5256 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* scale vtas by 32 to retain resolution (vtas = 1023 max (approx 75kts)))
	/* mov	bp,XWindVfix */
	bp = xwindvfix;
	/* mov	cl,5 */
	cl = 5;
	/* shl	bp,cl */
	SHL(bp, cl);
	// 0 ;----------------
	// 0 ;* calc delta xft = sin(wind dir + 180) * XWindVfix * DeltaTime
	// 0 ;----------------
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
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
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	XWindDXft,dx */
	xwinddxft = dx;
	/* mov	XWindDXFine,ax */
	xwinddxfine = ax;
	// 0 ;----------------
	// 0 ;* calc delta yft = cos(wind dir + 180) * XWindVfix * DeltaTime
	// 0 ;----------------
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
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
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	XWindDYft,dx */
	xwinddyft = dx;
	/* mov	XWindDYFine,ax */
	xwinddyfine = ax;
exitwinds:
	// 4483 
	/* ExitWinds:	ret */
	RETN(0);
sortjoysticks:
	// 5343 
	// 0 ;---------------------
	// 0 ;* sort control device
	// 0 ;---------------------
edummylabel6:
	// 4485 
	/* cmp	ControlDevice,CTRL_DEV_JOY1 */
	CMP(controldevice, 4);
	/* je	TestJoy1 */
	if ((dw)(controldevice) == (dw)(4)) {goto testjoy1;}
	/* cmp	ControlDevice,CTRL_DEV_JOY2 */
	CMP(controldevice, 6);
	/* je	TestJoy2 */
	if ((dw)(controldevice) == (dw)(6)) {goto testjoy2;}
	/* jmp	ExitJoysticks */
	goto exitjoysticks;
testjoy1:
	// 4487 
	/* TestJoy1:	test	JoyA_Flag,1	;single joystick fitted? */
	TEST(joya_flag, 1);
	/* jnz	@F	   	;yes -> */
	if ((joya_flag & 1) != 0) {goto dummylabel28;}
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	/* jmp	ExitJoysticks	;assume default to keyboard */
	goto exitjoysticks;
testjoy2:
	// 4489 
	/* TestJoy2:	mov	al,JoyA_Flag */
	al = joya_flag;
	/* test	al,JoyB_Flag 	;both joysticks fitted? */
	TEST(al, joyb_flag);
	/* jnz	@F	     	;yes -> */
	if ((al & joyb_flag) != 0) {goto dummylabel28;}
	/* call	InitCtrlDevice */
	CALLF(initctrldevice, 0);
	/* jmp	ExitJoysticks	;assume default to keyboard */
	goto exitjoysticks;
	// 0 ;-------------------------
	// 0 ;* check if input disabled
	// 0 ;-------------------------
dummylabel28:
	// 4491 
	/* @@:		cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	@F		;no -> */
	if ((dw)(disableinput) == (dw)(0)) {goto dummylabel29;}
	/* xor	ax,ax		;reset all controls */
	XOR(ax, ax);
	/* mov	ElePosn,ax */
	eleposn = ax;
	/* mov	AilPosn,ax */
	ailposn = ax;
	/* mov	RudPosn,ax */
	rudposn = ax;
	/* mov	JoyA_X,ax */
	joya_x = ax;
	/* mov	JoyA_Y,ax */
	joya_y = ax;
	/* mov	JoyB_X,ax */
	joyb_x = ax;
	/* mov	JoyB_Y,ax */
	joyb_y = ax;
	/* mov	OldJoyA_X,ax */
	oldjoya_x = ax;
	/* mov	OldJoyA_Y,ax */
	oldjoya_y = ax;
	/* mov	OldJoyB_X,ax */
	oldjoyb_x = ax;
	/* mov	OldJoyB_Y,ax */
	oldjoyb_y = ax;
	/* mov	JoyA_Fire1,al */
	joya_fire1 = al;
	/* mov	JoyA_Fire2,al */
	joya_fire2 = al;
	/* mov	JoyA_JustFired1,al */
	joya_justfired1 = al;
	/* mov	JoyA_JustFired2,al */
	joya_justfired2 = al;
	/* mov	JoyB_Fire1,al */
	joyb_fire1 = al;
	/* mov	JoyB_Fire2,al */
	joyb_fire2 = al;
	/* mov	JoyB_JustFired1,al */
	joyb_justfired1 = al;
	/* mov	JoyB_JustFired2,al */
	joyb_justfired2 = al;
	/* jmp	ExitJoysticks */
	goto exitjoysticks;
	// 0 ;----------------
	// 0 ;* read joysticks
	// 0 ;----------------
dummylabel29:
	// 4493 
	/* @@:		call	ReadJoysticks */
	CALLF(readjoysticks, 0);
	// 0 ;* sort joystick A values
	/* mov	ax,JoyA_X */
	ax = joya_x;
	/* mov	OldJoyA_X,ax */
	oldjoya_x = ax;
	/* mov	ax,JoyA_Y */
	ax = joya_y;
	/* mov	OldJoyA_Y,ax */
	oldjoya_y = ax;
	/* mov	bx,JoyA_XVal */
	bx = joya_xval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	JoyA_X,ax */
	joya_x = ax;
	/* mov	bx,JoyA_YVal */
	bx = joya_yval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	JoyA_Y,ax */
	joya_y = ax;
	/* cmp	ControlDevice,CTRL_DEV_JOY1 */
	CMP(controldevice, 4);
	/* jne	__m2c_macrolocal_251_skip */
	if ((dw)(controldevice) != (dw)(4)) {goto __m2c_macrolocal_251_skip;}
	/* jmp	JoyElevators */
	goto joyelevators;
__m2c_macrolocal_251_skip:
	// 4495 
	// 0 ;* sort joystick B values
	/* mov	ax,JoyB_X */
	ax = joyb_x;
	/* mov	OldJoyB_X,ax */
	oldjoyb_x = ax;
	/* mov	ax,JoyB_Y */
	ax = joyb_y;
	/* mov	OldJoyB_Y,ax */
	oldjoyb_y = ax;
	/* mov	bx,JoyB_XVal */
	bx = joyb_xval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	JoyB_X,ax */
	joyb_x = ax;
	/* mov	bx,JoyB_YVal */
	bx = joyb_yval;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,JoyVals[bx] */
	ax = *(dw*)(((db*)&joyvals)+bx);
	/* mov	JoyB_Y,ax */
	joyb_y = ax;
	// 0 ;===========================
joyrudder:
	// 4497 
	// 0 ;===========================
	// 0 ;* no rudder input if auto-pilot selected
	/* xor	ax,ax		;assume no input */
	XOR(ax, ax);
	/* cmp	AutoMode,AUTO_OFF	;auto-pilot? */
	CMP(automode, 0);
	/* jne	@F			;yes -> */
	if ((dw)(automode) != (dw)(0)) {goto dummylabel30;}
	/* mov	ax,JoyB_X */
	ax = joyb_x;
dummylabel30:
	// 4499 
	/* @@:		mov	RudPosn,ax */
	rudposn = ax;
	// 0 ;===========================
	// 0 ;JoyThrottle	LABEL	NEAR
	// 0 ;===========================
	// 0 ;		test	AutoThrot,1	;auto-throttle?
	// 0 ;		_JNZ	JoyAutoThrot	;yes ->
	// 0 ;-----------------
	// 0 ;* manual throttle
	// 0 ;-----------------
	// 0 ;		mov	ax,JoyB_Y
	// 0 ;		neg	ax		;flip joystick sense
	// 0 ;		_JZ	JoyElevators	;no deflection ->
	// 0 ;* throttle change = (joy val * (100 * 256 / 32768) * DeltaTime * 2) / 128
	// 0 ;		mov	dx,100*256
	// 0 ;		imul	dx
	// 0 ;		FRACADJ	dx
	// 0 ;		mov	ax,DeltaTime
	// 0 ;		imul	dx
	// 0 ;		REPT	6		;* 2 / 128
	// 0 ;		sar	dx,1
	// 0 ;		rcr	ax,1
	// 0 ;		ENDM
	// 0 ;		test	dx,dx		;open or close?
	// 0 ;		js	JoyCloseThrot	;close ->
	// 0 ;---------------
	// 0 ;* open throttle
	// 0 ;---------------
	// 0 ;		mov	bx,Reheat
	// 0 ;		or	bx,ReheatFine	;adjust reheat?
	// 0 ;		jnz	JoyIncReheat	;yes ->
	// 0 ;		cmp	Throttle,256	;max throttle?
	// 0 ;		je	JoyReheatOn	;yes, test for engage reheat ->
	// 0 ;		add	ThrottleFine,ax
	// 0 ;		adc	Throttle,dx
	// 0 ;		cmp	Throttle,256	;exceed max throttle?
	// 0 ;		jb	@F		;no ->
	// 0 ;		mov	Throttle,256
	// 0 ;		mov	ThrottleFine,0
	// 0 ;@@:		jmp	JoyElevators
	// 0 ;JoyIncReheat:	add	ReheatFine,ax
	// 0 ;		adc	Reheat,dx
	// 0 ;		cmp	Reheat,128	;exceed max reheat?
	// 0 ;		jb	@F		;no ->
	// 0 ;		mov	Reheat,128
	// 0 ;		mov	ReheatFine,0
	// 0 ;@@:		jmp	JoyElevators
	// 0 ;* release joystick and push again to engage reheat
	// 0 ;JoyReheatOn:	cmp	OldJoyB_Y,0	;joystick released last frame?
	// 0 ;		jne	@F		;no ->
	// 0 ;		mov	Reheat,0
	// 0 ;		mov	ReheatFine,1
	// 0 ;@@:		jmp	JoyElevators
	// 0 ;----------------
	// 0 ;* close throttle
	// 0 ;----------------
	// 0 ;JoyCloseThrot:	mov	bx,Reheat
	// 0 ;		or	bx,ReheatFine	;adjust reheat?
	// 0 ;		jnz	JoyDecReheat	;yes ->
	// 0 ;		cmp	Throttle,256	;max throttle?
	// 0 ;		je	JoyReheatOff	;yes, test for disengage reheat ->
	// 0 ;		add	ThrottleFine,ax
	// 0 ;		adc	Throttle,dx
	// 0 ;		jns	@F
	// 0 ;		mov	Throttle,0
	// 0 ;		mov	ThrottleFine,0
	// 0 ;@@:		jmp	JoyElevators
	// 0 ;JoyDecReheat: 	add	ReheatFine,ax
	// 0 ;		adc	Reheat,dx
	// 0 ;		jns	@F
	// 0 ;		mov	Reheat,0
	// 0 ;		mov	ReheatFine,0
	// 0 ;@@:		jmp	JoyElevators
	// 0 ;* release joystick and pull again to disengage reheat
	// 0 ;JoyReheatOff:	cmp	OldJoyB_Y,0	;joystick released last frame?
	// 0 ;		jne	@F		;no ->
	// 0 ;		mov	Throttle,255
	// 0 ;		mov	ThrottleFine,65535
	// 0 ;@@:		jmp	JoyElevators
	// 0 ;------------------------------
	// 0 ;* increase / decrease AutoVias
	// 0 ;------------------------------
	// 0 ;* do not adjust AutoVias if approach mode
	// 0 ;JoyAutoThrot:	cmp	AutoMode,AUTO_APPROACH	;approach mode?
	// 0 ;		je	JoyElevators		;yes ->
	// 0 ;		mov	ax,JoyB_Y
	// 0 ;		neg	ax		;flip joystick sense
	// 0 ;* delta = LastFrame * 2 * joy val
	// 0 ;		mov	dx,LastFrame
	// 0 ;		shl	dx,1
	// 0 ;		imul	dx
	// 0 ;		add	AutoViasFine,ax
	// 0 ;		adc	AutoVias,dx
	// 0 ;		jns	@F		;>= 0 ->
	// 0 ;		mov	AutoVias,0
	// 0 ;		mov	AutoViasFine,0
	// 0 ;		jmp	JoyElevators
	// 0 ;@@:		cmp	AutoVias,MAX_AUTO_VIAS
	// 0 ;		jb	JoyElevators
	// 0 ;		mov	AutoVias,MAX_AUTO_VIAS
	// 0 ;		mov	AutoViasFine,0
	// 0 ;===========================
joythrottle:
	// 4501 
	// 0 ;===========================
	// 0 ;ATARIBABY joystick autothrottle code removed - keyboard +/- is used
	/* test	AutoThrot,1	;auto-throttle? */
	TEST(autothrot, 1);
	/* jz	__m2c_macrolocal_252_skip */
	if (!(autothrot & 1)) {goto __m2c_macrolocal_252_skip;}
	/* jmp	JoyElevators */
	goto joyelevators;
__m2c_macrolocal_252_skip:
	// 4503 
	// 0 ;yes ->
	// 0 ;-----------------
	// 0 ;* manual throttle
	// 0 ;-----------------
	// 0 ;ATARIBABY reworked analog throttle to work like real one
	// 0 ; joy possition, from 0 to 32766
	// 0 ; compute step for 0-255 throttle range
	/* mov	ax,22000 ;dry thrust stop */
	ax = 22000;
	/* mov	dx,0 */
	dx = 0;
	/* mov	bx,255 */
	bx = 255;
	/* idiv bx			; ax is 1 step. */
	IDIV2(bx);
	/* mov	dx,0		; be sure, we do not throw owwerflow */
	dx = 0;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,JoyB_Y */
	ax = joyb_y;
	/* neg	ax		;flip joystick sense */
	NEG(ax);
	/* sar ax,1 */
	SAR(ax, 1);
	/* add ax, 16383	; joy possition, from 0 to 32766 */
	ADD(ax, 16383);
	/* cmp	ax,32000 ;reheat start */
	CMP(ax, 32000);
	/* jb	ABoff		;no -> */
	if ((dw)(ax) < (dw)(32000)) {goto aboff;}
	/* mov cx,0 */
	cx = 0;
	/* cmp Rpm1,100*256 ;engine1 at 100% RPM? */
	CMP(rpm1, 100*256);
	/* jb	@F */
	if ((dw)(rpm1) < (dw)(100*256)) {goto dummylabel31;}
	/* inc cx */
	INC(cx);
dummylabel31:
	// 4505 
	/* @@:		cmp Rpm2,100*256 ;engine1 at 100% RPM? */
	CMP(rpm2, 100*256);
	/* jb	@F */
	if ((dw)(rpm2) < (dw)(100*256)) {goto dummylabel32;}
	/* inc cx */
	INC(cx);
dummylabel32:
	// 4507 
	/* @@:		cmp cx,0 ;if any engine already at 100% lets kick afterburner */
	CMP(cx, 0);
	/* jg ABon */
	if ((short)(cx) > (short)(0)) {goto abon;}
	/* jmp ABoff */
	goto aboff;
abon:
	// 4509 
	/* ABon:	mov	Reheat,128 */
	reheat = 128;
	/* mov	ReheatFine,0 */
	reheatfine = 0;
	/* jmp ABskip */
	goto abskip;
aboff:
	// 4511 
	/* ABoff:	mov	Reheat,0 */
	reheat = 0;
	/* mov	ReheatFine,0 */
	reheatfine = 0;
abskip:
	// 4513 
	/* ABskip:	idiv bx			; ax is x steps. */
	IDIV2(bx);
	/* mov	dx,0		; ignore remainder */
	dx = 0;
	/* mov Throttle,ax */
	throttle = ax;
	/* mov	ThrottleFine,0 */
	throttlefine = 0;
	/* cmp	Throttle,256	;exceed max throttle? */
	CMP(throttle, 256);
	/* jb	JoyElevators		;no -> */
	if ((dw)(throttle) < (dw)(256)) {goto joyelevators;}
	/* mov	Throttle,256 */
	throttle = 256;
	/* mov	ThrottleFine,0 */
	throttlefine = 0;
	// 0 ;===========================
joyelevators:
	// 4515 
	// 0 ;===========================
	/* mov	bx,AltMode */
	bx = altmode;
__disp=*(dw*)(((db*)&joyeleswitch)+bx);
	/* jmp	JoyEleSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
joyelemanual:
	// 4517 
	// 0 ;---------------------------
	/* mov	ax,JoyA_Y */
	ax = joya_y;
	/* mov	ElePosn,ax */
	eleposn = ax;
	// 0 ;* if elevator demand then cancel auto-trim
	/* test	ax,ax		;elevator demand? */
	TEST(ax, ax);
	/* jz	@F		;no -> */
	if (!(ax & ax)) {goto dummylabel33;}
	/* mov	AutoTrim,0	;cancel auto-trim */
	autotrim = 0;
dummylabel33:
	// 4519 
	/* @@:		jmp	JoyAilerons */
	goto joyailerons;
	// 0 ;---------------------------
joyeleapproach:
	// 4521 
	// 0 ;---------------------------
	/* mov	ElePosn,0 */
	eleposn = 0;
	/* jmp	JoyAilerons */
	goto joyailerons;
	// 0 ;---------------------------
joyeleacquire:
	// 4523 
	// 0 ;---------------------------
	/* mov	ElePosn,0 */
	eleposn = 0;
	// 0 ;* sort n wrt joystick deflection
	/* mov	ax,JoyA_Y */
	ax = joya_y;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	cl,1		;2^1 */
	cl = 1;
	/* cmp	ax,1024 */
	CMP(ax, 1024);
	/* jb	@F */
	if ((dw)(ax) < (dw)(1024)) {goto dummylabel34;}
	/* mov	cl,2		;2^2 */
	cl = 2;
	/* cmp	ax,4096 */
	CMP(ax, 4096);
	/* jb	@F */
	if ((dw)(ax) < (dw)(4096)) {goto dummylabel34;}
	/* mov	cl,3		;2^3 */
	cl = 3;
	/* cmp	ax,8192 */
	CMP(ax, 8192);
	/* jb	@F */
	if ((dw)(ax) < (dw)(8192)) {goto dummylabel34;}
	/* mov	cl,4		;2^4 */
	cl = 4;
dummylabel34:
	// 4525 
	/* @@:		mov	ax,JoyA_Y */
	ax = joya_y;
	// 0 ;* delta = LastFrame * 2^n * joy val
	/* mov	dx,LastFrame */
	dx = lastframe;
	/* shl	dx,cl */
	SHL(dx, cl);
	/* imul	dx */
	IMUL1_2(dx);
	/* add	AutoAltFine,ax */
	ADD(autoaltfine, ax);
	/* adc	AutoAlt,dx */
	ADC(autoalt, dx);
	/* jns	@F		;>= 0 -> */
	if ((short)(autoalt) >= 0) {goto dummylabel35;}
	/* mov	AutoAlt,MIN_AUTO_ALT */
	autoalt = min_auto_alt;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* jmp	JoyAilerons */
	goto joyailerons;
dummylabel35:
	// 4527 
	/* @@:		cmp	AutoAlt,MIN_AUTO_ALT */
	CMP(autoalt, min_auto_alt);
	/* jae	@F */
	if ((dw)(autoalt) >= (dw)(min_auto_alt)) {goto dummylabel36;}
	/* mov	AutoAlt,MIN_AUTO_ALT */
	autoalt = min_auto_alt;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* jmp	JoyAilerons */
	goto joyailerons;
dummylabel36:
	// 4529 
	/* @@:		cmp	AutoAlt,MAX_AUTO_ALT */
	CMP(autoalt, max_auto_alt);
	/* jb	JoyAilerons */
	if ((dw)(autoalt) < (dw)(max_auto_alt)) {goto joyailerons;}
	/* mov	AutoAlt,MAX_AUTO_ALT */
	autoalt = max_auto_alt;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* jmp	JoyAilerons */
	goto joyailerons;
	// 0 ;---------------------------
joyeletf:
	// 4531 
	// 0 ;---------------------------
	/* mov	ElePosn,0 */
	eleposn = 0;
	/* cmp	JoyA_Y,0	;joystick held? */
	CMP(joya_y, 0);
	/* je	JoyAilerons	;no -> */
	if ((dw)(joya_y) == (dw)(0)) {goto joyailerons;}
	/* cmp	OldJoyA_Y,0	;joystick released last frame? */
	CMP(oldjoya_y, 0);
	/* jne	@F		;no -> */
	if ((dw)(oldjoya_y) != (dw)(0)) {goto dummylabel37;}
	/* mov	TFRideDelay,JOY_AUTO_RPT */
	tfridedelay = 50;
	/* jmp	ContJoyRide */
	goto contjoyride;
dummylabel37:
	// 4533 
	/* @@:		mov	ax,TFRideDelay */
	ax = tfridedelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	ContJoyRide	;yes -> */
	if (!(ax & ax)) {goto contjoyride;}
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
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
	/* mov	TFRideDelay,ax */
	tfridedelay = ax;
	/* jmp	JoyAilerons */
	goto joyailerons;
contjoyride:
	// 4535 
	/* ContJoyRide:	cmp	JoyA_Y,0	;inc or dec ride alt? */
	CMP(joya_y, 0);
	/* jl	@F		;dec -> */
	if ((short)(joya_y) < (short)(0)) {goto dummylabel38;}
	/* cmp	TFRideIndex,MAX_TF_INDEX	;max limit? */
	CMP(tfrideindex, max_tf_index);
	/* je	JoyAilerons			;yes -> */
	if ((dw)(tfrideindex) == (dw)(max_tf_index)) {goto joyailerons;}
	/* add	TFRideIndex,2	;inc ride alt index */
	ADD(tfrideindex, 2);
	/* mov	TFRideDelay,JOY_AUTO_RPT */
	tfridedelay = 50;
	/* jmp	JoyAilerons */
	goto joyailerons;
dummylabel38:
	// 4537 
	/* @@:		cmp	TFRideIndex,0	;min limit? */
	CMP(tfrideindex, 0);
	/* je	JoyAilerons	;yes -> */
	if ((dw)(tfrideindex) == (dw)(0)) {goto joyailerons;}
	/* sub	TFRideIndex,2	;dec ride alt index */
	SUB(tfrideindex, 2);
	/* mov	TFRideDelay,JOY_AUTO_RPT */
	tfridedelay = 50;
	// 0 ;===========================
joyailerons:
	// 4539 
	// 0 ;===========================
	/* mov	bx,HdgMode */
	bx = hdgmode;
__disp=*(dw*)(((db*)&joyailswitch)+bx);
	/* jmp	JoyAilSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
joyailmanual:
	// 4541 
	// 0 ;---------------------------
	// 0 ;* //MOD// 03.12.1992 - Roll inertia added.
	// 0 ;* max rate = delta time * 2
	/* mov	bp,DeltaTime */
	bp = deltatime;
	/* shl	bp,1 */
	SHL(bp, 1);
	// 0 ;* rate = new rate - old rate
	// 0 ;*
	// 0 ;* new rate = min(abs(rate), max rate) * sign(rate) + old rate
	// 0 ;*
	// 0 ;* use 32 bit maths
	/* mov	ax,AilPosn	;old rate */
	ax = ailposn;
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,JoyA_X   	;new rate */
	ax = joya_x;
	/* cwd */
	CWD;
	/* sub	ax,bx 		;new rate - old rate */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* mov	si,dx		;store sign(rate) */
	si = dx;
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel39;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel39:
	// 4543 
	/* @@:		test	dx,dx		;abs(rate) > 65535? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel40;}
	/* cmp	ax,bp		;abs(rate) <= max rate? */
	CMP(ax, bp);
	/* jbe	RRateOk		;yes -> */
	if ((dw)(ax) <= (dw)(bp)) {goto rrateok;}
dummylabel40:
	// 4545 
	/* @@:		mov	ax,bp		;limit */
	ax = bp;
rrateok:
	// 4547 
	/* RRateOk:	test	si,si		;negate? */
	TEST(si, si);
	/* jns	@F		;no -> */
	if ((short)((si & si)) >= 0) {goto dummylabel41;}
	/* neg	ax */
	NEG(ax);
dummylabel41:
	// 4549 
	/* @@:		add	AilPosn,ax */
	ADD(ailposn, ax);
	/* jmp	ExitJoysticks */
	goto exitjoysticks;
	// 0 ;---------------------------
joyailapproach:
	// 4551 
	// 0 ;---------------------------
	/* mov	AilPosn,0 */
	ailposn = 0;
	/* jmp	ExitJoysticks */
	goto exitjoysticks;
	// 0 ;---------------------------
joyailacquire:
	// 4553 
	// 0 ;---------------------------
	/* mov	AilPosn,0 */
	ailposn = 0;
	/* mov	ax,JoyA_X */
	ax = joya_x;
	// 0 ;* delta = LastFrame * 2 * joy val
	/* mov	dx,LastFrame */
	dx = lastframe;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* imul	dx */
	IMUL1_2(dx);
	/* add	AutoHdgFine,ax */
	ADD(autohdgfine, ax);
	/* adc	AutoHdg,dx */
	ADC(autohdg, dx);
	/* jns	@F		;>= 0 -> */
	if ((short)(autohdg) >= 0) {goto dummylabel42;}
	/* mov	AutoHdg,MAX_AUTO_HDG	;wrap around */
	autohdg = max_auto_hdg;
	/* jmp	ExitJoysticks */
	goto exitjoysticks;
dummylabel42:
	// 4555 
	/* @@:		cmp	AutoHdg,MAX_AUTO_HDG */
	CMP(autohdg, max_auto_hdg);
	/* jbe	ExitJoysticks */
	if ((dw)(autohdg) <= (dw)(max_auto_hdg)) {goto exitjoysticks;}
	/* mov	AutoHdg,0		;wrap around */
	autohdg = 0;
	/* jmp	ExitJoysticks */
	goto exitjoysticks;
	// 0 ;---------------------------
joyailtrack:
	// 4557 
	// 0 ;---------------------------
	/* mov	AilPosn,0 */
	ailposn = 0;
exitjoysticks:
	// 4559 
	/* ExitJoysticks:	ret */
	RETN(0);
updatesweep:
	// 5834 
	// 0 ;---------------------------------------------------------------
	// 0 ;* wing sweep disabled whilst flaps active or wing sweep damaged
	// 0 ;---------------------------------------------------------------
edummylabel7:
	// 4561 
	/* mov	al,FlapsActive */
	al = *(flapsactive);
	/* or	al,SSF_Sweep	;flaps active or wing sweep damaged? */
	OR(al, ssf_sweep);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel43;}
	/* jmp	SweepExit */
	goto sweepexit;
	// 0 ;------------------------------
	// 0 ;* test for wing sweep forwards
	// 0 ;------------------------------
dummylabel43:
	// 4563 
	/* @@:	mov	al,BYTE PTR KF_WingSwpFwd[K_STATUS] */
	al = *(db*)(((db*)&kf_wingswpfwd)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;sweep forwards?
	/* jz	SkipSweepFwd	;no -> */
	if (!(al & al)) {goto skipsweepfwd;}
	/* mov	al,DestWingPos */
	al = destwingpos;
	/* cmp	al,SWEEP_D_25	;can wings go forward? */
	CMP(al, 0);
	/* je	SkipSweepFwd	;no -> */
	if ((db)(al) == (db)(0)) {goto skipsweepfwd;}
	/* dec	al		;new destination position */
	DEC(al);
	// 0 ;----------------------------------------------
	// 0 ;* test if new wing sweep position is inhibited
	// 0 ;----------------------------------------------
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	bl,al */
	bl = al;
	/* shl	bl,1		;*2 */
	SHL(bl, 1);
	/* shl	bl,1		;*4 */
	SHL(bl, 1);
	/* add	bl,CrntFlapPos */
	ADD(bl, crntflappos);
	/* test	PosInhibit[bx],1;inhibited? */
	TEST(*((posinhibit)+bx), 1);
	/* jz	SkipSweepFwd	;yes -> */
	if (!(*((posinhibit)+bx) & 1)) {goto skipsweepfwd;}
	/* mov	DestWingPos,al */
	destwingpos = al;
	// 0 ;* look up destination wing setting
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,WingSetting[bx] */
	ax = *(dw*)(((db*)&wingsetting)+bx);
	/* mov	DestWingVal,ax */
	destwingval = ax;
	// 0 ;-------------------------------
	// 0 ;* test for wing sweep backwards
	// 0 ;-------------------------------
skipsweepfwd:
	// 4565 
	/* SkipSweepFwd:	mov	al,BYTE PTR KF_WingSwpBack[K_STATUS] */
	al = *(db*)(((db*)&kf_wingswpback)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;sweep backwards?
	/* jz	SkipSweepBack	;no -> */
	if (!(al & al)) {goto skipsweepback;}
	/* mov	al,DestWingPos */
	al = destwingpos;
	/* cmp	al,SWEEP_D_67	;can wings go backward? */
	CMP(al, 2);
	/* je	SkipSweepBack	;no -> */
	if ((db)(al) == (db)(2)) {goto skipsweepback;}
	/* inc	al		;new destination position */
	INC(al);
	// 0 ;----------------------------------------------
	// 0 ;* test if new wing sweep position is inhibited
	// 0 ;----------------------------------------------
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	bl,al */
	bl = al;
	/* shl	bl,1		;*2 */
	SHL(bl, 1);
	/* shl	bl,1		;*4 */
	SHL(bl, 1);
	/* add	bl,CrntFlapPos */
	ADD(bl, crntflappos);
	/* test	PosInhibit[bx],1;inhibited? */
	TEST(*((posinhibit)+bx), 1);
	/* jz	SkipSweepBack	;yes -> */
	if (!(*((posinhibit)+bx) & 1)) {goto skipsweepback;}
	/* mov	DestWingPos,al */
	destwingpos = al;
	// 0 ;* look up destination wing setting
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,WingSetting[bx] */
	ax = *(dw*)(((db*)&wingsetting)+bx);
	/* mov	DestWingVal,ax */
	destwingval = ax;
	// 0 ;----------------------------------------
	// 0 ;* update wing sweep if changing position
	// 0 ;----------------------------------------
skipsweepback:
	// 4567 
	/* SkipSweepBack:	mov	SweepActive,0	;assume inactive */
	*(sweepactive) = 0;
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* cmp	ax,DestWingVal */
	CMP(ax, destwingval);
	/* je	SweepExit */
	if ((dw)(ax) == (dw)(destwingval)) {goto sweepexit;}
	/* mov	SweepActive,1 */
	*(sweepactive) = 1;
	/* jl	MoveWingsBack */
	if ((short)(ax) < (short)(destwingval)) {goto movewingsback;}
	// 0 ;* move wings forward (current > dest)
	/* mov	dx,ax		;dx = previous value */
	dx = ax;
	/* sub	ax,LastFrame	;ax = new value */
	SUB(ax, lastframe);
	/* cmp	ax,DestWingVal	;crossed destination position? */
	CMP(ax, destwingval);
	/* jle	SetWingDest	;yes -> */
	if ((short)(ax) <= (short)(destwingval)) {goto setwingdest;}
	/* cmp	dx,SWEEP_A_45	;crossed 45 deg sweep position? */
	CMP(dx, 333);
	/* jl 	SetWingVal	;no -> */
	if ((short)(dx) < (short)(333)) {goto setwingval;}
	/* cmp	ax,SWEEP_A_45	;crossed 45 deg sweep position? */
	CMP(ax, 333);
	/* jg	SetWingVal	;no -> */
	if ((short)(ax) > (short)(333)) {goto setwingval;}
	/* mov	CrntWingPos,SWEEP_D_45 */
	crntwingpos = 1;
	/* jmp	SetWingVal */
	goto setwingval;
	// 0 ;* move wings backward (current < dest)
movewingsback:
	// 4569 
	/* MoveWingsBack:	mov	dx,ax		;dx = previous value */
	dx = ax;
	/* add	ax,LastFrame	;ax = new value */
	ADD(ax, lastframe);
	/* cmp	ax,DestWingVal	;crossed destination position? */
	CMP(ax, destwingval);
	/* jge	SetWingDest	;yes -> */
	if ((short)(ax) >= (short)(destwingval)) {goto setwingdest;}
	/* cmp	dx,SWEEP_A_45	;crossed 45 deg sweep position? */
	CMP(dx, 333);
	/* jg 	SetWingVal	;no -> */
	if ((short)(dx) > (short)(333)) {goto setwingval;}
	/* cmp	ax,SWEEP_A_45	;crossed 45 deg sweep position? */
	CMP(ax, 333);
	/* jl	SetWingVal	;no -> */
	if ((short)(ax) < (short)(333)) {goto setwingval;}
	/* mov	CrntWingPos,SWEEP_D_45 */
	crntwingpos = 1;
	/* jmp	SetWingVal */
	goto setwingval;
setwingdest:
	// 4571 
	/* SetWingDest:	mov	al,DestWingPos */
	al = destwingpos;
	/* mov	CrntWingPos,al */
	crntwingpos = al;
	/* mov	ax,DestWingVal */
	ax = destwingval;
setwingval:
	// 4573 
	/* SetWingVal:	mov	CrntWingVal,ax */
	crntwingval = ax;
sweepexit:
	// 4575 
	/* SweepExit:	ret */
	RETN(0);
updateflaps:
	// 5953 
	// 0 ;----------------------------------------------------------
	// 0 ;* flaps disabled whilst wing sweep active or flaps damaged
	// 0 ;----------------------------------------------------------
edummylabel8:
	// 4577 
	/* mov	al,SweepActive */
	al = *(sweepactive);
	/* or	al,SSF_Flaps	;sweep active or flaps damaged? */
	OR(al, ssf_flaps);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel44;}
	/* jmp	FlapsExit */
	goto flapsexit;
	// 0 ;-------------------
	// 0 ;* test for flaps up
	// 0 ;-------------------
	// 0 ;* sort manoeuvre flaps in on joystick B button 2
dummylabel44:
	// 4579 
	/* @@:		test	JoyB_JustFired2,1 */
	TEST(joyb_justfired2, 1);
	/* jz	@F */
	if (!(joyb_justfired2 & 1)) {goto dummylabel45;}
	/* cmp	CrntFlapVal,FLAPS_A_MNVR */
	CMP(crntflapval, 150);
	/* je	IntoFlapsUp */
	if ((dw)(crntflapval) == (dw)(150)) {goto intoflapsup;}
dummylabel45:
	// 4581 
	/* @@:	mov	al,BYTE PTR KF_FlapsUp[K_STATUS] */
	al = *(db*)(((db*)&kf_flapsup)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;flaps up?
	/* jz	SkipFlapsUp	;no -> */
	if (!(al & al)) {goto skipflapsup;}
intoflapsup:
	// 4583 
	/* IntoFlapsUp:	mov	al,DestFlapPos */
	al = destflappos;
	/* cmp	al,FLAPS_D_ZERO	;can flaps go up? */
	CMP(al, 0);
	/* je	SkipFlapsUp	;no -> */
	if ((db)(al) == (db)(0)) {goto skipflapsup;}
	/* dec	al		;new destination position */
	DEC(al);
	// 0 ;-----------------------------------------
	// 0 ;* test if new flaps position is inhibited
	// 0 ;-----------------------------------------
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	bl,CrntWingPos */
	bl = crntwingpos;
	/* shl	bl,1		;*2 */
	SHL(bl, 1);
	/* shl	bl,1		;*4 */
	SHL(bl, 1);
	/* add	bl,al */
	ADD(bl, al);
	/* test	PosInhibit[bx],1;inhibited? */
	TEST(*((posinhibit)+bx), 1);
	/* jz	SkipFlapsUp	;yes -> */
	if (!(*((posinhibit)+bx) & 1)) {goto skipflapsup;}
	/* mov	DestFlapPos,al */
	destflappos = al;
	// 0 ;* look up destination flap setting
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,FlapSetting[bx] */
	ax = *(dw*)(((db*)&flapsetting)+bx);
	/* mov	DestFlapVal,ax */
	destflapval = ax;
	// 0 ;---------------------
	// 0 ;* test for flaps down
	// 0 ;---------------------
	// 0 ;* sort manoeuvre flaps out on joystick B button 2
skipflapsup:
	// 4585 
	/* SkipFlapsUp:	test	JoyB_JustFired2,1 */
	TEST(joyb_justfired2, 1);
	/* jz	@F */
	if (!(joyb_justfired2 & 1)) {goto dummylabel46;}
	/* cmp	CrntFlapVal,FLAPS_A_ZERO */
	CMP(crntflapval, 0);
	/* je	IntoFlapsDn */
	if ((dw)(crntflapval) == (dw)(0)) {goto intoflapsdn;}
dummylabel46:
	// 4587 
	/* @@:	mov	al,BYTE PTR KF_FlapsDn[K_STATUS] */
	al = *(db*)(((db*)&kf_flapsdn)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;flaps down?
	/* jz	SkipFlapsDn	;no -> */
	if (!(al & al)) {goto skipflapsdn;}
intoflapsdn:
	// 4589 
	/* IntoFlapsDn:	mov	al,DestFlapPos */
	al = destflappos;
	/* cmp	al,FLAPS_D_FULL	;can flaps go down? */
	CMP(al, 3);
	/* je	SkipFlapsDn	;no -> */
	if ((db)(al) == (db)(3)) {goto skipflapsdn;}
	/* inc	al		;new destination position */
	INC(al);
	// 0 ;-----------------------------------------
	// 0 ;* test if new flaps position is inhibited
	// 0 ;-----------------------------------------
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	bl,CrntWingPos */
	bl = crntwingpos;
	/* shl	bl,1		;*2 */
	SHL(bl, 1);
	/* shl	bl,1		;*4 */
	SHL(bl, 1);
	/* add	bl,al */
	ADD(bl, al);
	/* test	PosInhibit[bx],1;inhibited? */
	TEST(*((posinhibit)+bx), 1);
	/* jz	SkipFlapsDn	;yes -> */
	if (!(*((posinhibit)+bx) & 1)) {goto skipflapsdn;}
	/* mov	DestFlapPos,al */
	destflappos = al;
	// 0 ;* look up destination flap setting
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,FlapSetting[bx] */
	ax = *(dw*)(((db*)&flapsetting)+bx);
	/* mov	DestFlapVal,ax */
	destflapval = ax;
	// 0 ;-----------------------------------
	// 0 ;* update flaps if changing position
	// 0 ;-----------------------------------
skipflapsdn:
	// 4591 
	/* SkipFlapsDn:	mov	FlapsActive,0	;assume inactive */
	*(flapsactive) = 0;
	/* mov	ax,CrntFlapVal */
	ax = crntflapval;
	/* cmp	ax,DestFlapVal */
	CMP(ax, destflapval);
	/* je	FlapsExit */
	if ((dw)(ax) == (dw)(destflapval)) {goto flapsexit;}
	/* mov	FlapsActive,1 */
	*(flapsactive) = 1;
	/* jl	MoveFlapsDown */
	if ((short)(ax) < (short)(destflapval)) {goto moveflapsdown;}
	// 0 ;* move flaps up (current > dest)
	/* mov	dx,ax		;dx = previous value */
	dx = ax;
	/* sub	ax,LastFrame	;ax = new value */
	SUB(ax, lastframe);
	/* cmp	ax,DestFlapVal	;crossed destination position? */
	CMP(ax, destflapval);
	/* jle	SetFlapDest	;yes -> */
	if ((short)(ax) <= (short)(destflapval)) {goto setflapdest;}
	/* cmp	dx,FLAPS_A_MNVR	;crossed manoeuvre flaps position? */
	CMP(dx, 150);
	/* jl 	@F		;no -> */
	if ((short)(dx) < (short)(150)) {goto dummylabel47;}
	/* cmp	ax,FLAPS_A_MNVR	;crossed manoeuvre flaps position? */
	CMP(ax, 150);
	/* jg	@F		;no -> */
	if ((short)(ax) > (short)(150)) {goto dummylabel47;}
	/* mov	CrntFlapPos,FLAPS_D_MNVR */
	crntflappos = 1;
	/* jmp	SetFlapVal */
	goto setflapval;
dummylabel47:
	// 4593 
	/* @@:		cmp	dx,FLAPS_A_MID	;crossed mid flaps position? */
	CMP(dx, 300);
	/* jl 	SetFlapVal	;no -> */
	if ((short)(dx) < (short)(300)) {goto setflapval;}
	/* cmp	ax,FLAPS_A_MID	;crossed mid flaps position? */
	CMP(ax, 300);
	/* jg	SetFlapVal	;no -> */
	if ((short)(ax) > (short)(300)) {goto setflapval;}
	/* mov	CrntFlapPos,FLAPS_D_MID */
	crntflappos = 2;
	/* jmp	SetFlapVal */
	goto setflapval;
	// 0 ;* move flaps down (current < dest)
moveflapsdown:
	// 4595 
	/* MoveFlapsDown:	mov	dx,ax		;dx = previous value */
	dx = ax;
	/* add	ax,LastFrame	;ax = new value */
	ADD(ax, lastframe);
	/* cmp	ax,DestFlapVal	;crossed destination position? */
	CMP(ax, destflapval);
	/* jge	SetFlapDest	;yes -> */
	if ((short)(ax) >= (short)(destflapval)) {goto setflapdest;}
	/* cmp	dx,FLAPS_A_MID	;crossed mid flaps position? */
	CMP(dx, 300);
	/* jg 	@F		;no -> */
	if ((short)(dx) > (short)(300)) {goto dummylabel48;}
	/* cmp	ax,FLAPS_A_MID	;crossed mid flaps position? */
	CMP(ax, 300);
	/* jl	@F		;no -> */
	if ((short)(ax) < (short)(300)) {goto dummylabel48;}
	/* mov	CrntFlapPos,FLAPS_D_MID */
	crntflappos = 2;
	/* jmp	SetFlapVal */
	goto setflapval;
dummylabel48:
	// 4597 
	/* @@:		cmp	dx,FLAPS_A_MNVR	;crossed manoeuvre flaps position? */
	CMP(dx, 150);
	/* jg 	SetFlapVal	;no -> */
	if ((short)(dx) > (short)(150)) {goto setflapval;}
	/* cmp	ax,FLAPS_A_MNVR	;crossed manoeuvre flaps position? */
	CMP(ax, 150);
	/* jl	SetFlapVal	;no -> */
	if ((short)(ax) < (short)(150)) {goto setflapval;}
	/* mov	CrntFlapPos,FLAPS_D_MNVR */
	crntflappos = 1;
	/* jmp	SetFlapVal */
	goto setflapval;
setflapdest:
	// 4599 
	/* SetFlapDest:	mov	al,DestFlapPos */
	al = destflappos;
	/* mov	CrntFlapPos,al */
	crntflappos = al;
	/* mov	ax,DestFlapVal */
	ax = destflapval;
setflapval:
	// 4601 
	/* SetFlapVal:	mov	CrntFlapVal,ax */
	crntflapval = ax;
flapsexit:
	// 4603 
	/* FlapsExit:	ret */
	RETN(0);
calcairdensity:
	// 6097 
	// 0 ;------------------------
	// 0 ;* calc air density (Rho)
	// 0 ;------------------------
	// 0 ;* if zft >= 70,000ft then limit Rho, SqrtRho
edummylabel9:
	// 4605 
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* test	dx,dx		;zft > 65,535ft? */
	TEST(dx, dx);
	/* jz	@F		;no -> */
	if (!(dx & dx)) {goto dummylabel49;}
	/* cmp	ax,4464		;zft < 70,000ft? */
	CMP(ax, 4464);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(4464)) {goto dummylabel49;}
	/* mov	ax,RhoTable[70*2] */
	ax = *(dw*)(((db*)&rhotable)+70*2);
	/* mov	Rho,ax */
	rho = ax;
	/* mov	ax,SqrtRhoTable[70*2] */
	ax = *(dw*)(((db*)&sqrtrhotable)+70*2);
	/* mov	SqrtRho,ax */
	sqrtrho = ax;
	/* jmp	CalcAirDensExit */
	goto calcairdensexit;
	// 0 ;* tabulated from 0 .. 70,000ft step 1,000ft
dummylabel49:
	// 4607 
	/* @@:		mov	bp,1000 */
	bp = 1000;
	/* idiv	bp		;ax = quotient, dx = remainder */
	IDIV2(bp);
	/* mov	bx,ax		;0 .. 69 */
	bx = ax;
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* mov	si,dx		;si = remainder */
	si = dx;
	// 0 ;* interpolate between 1,000ft intervals
	/* mov	ax,RhoTable[bx]		;z1 */
	ax = *(dw*)(((db*)&rhotable)+bx);
	/* mov	di,ax */
	di = ax;
	/* sub	ax,RhoTable[bx+2]	;z1 - z2 = diff Rho */
	SUB(ax, *(dw*)(((db*)&rhotable)+bx+2));
	/* imul	si		;diff Rho * remainder */
	IMUL1_2(si);
	/* idiv	bp		;diff z = diff Rho * remainder / 1000 */
	IDIV2(bp);
	/* sub	di,ax		;z1 - diff z */
	SUB(di, ax);
	/* mov	Rho,di */
	rho = di;
	// 0 ;-------------------------------------------
	// 0 ;* calc square root of air density (SqrtRho)
	// 0 ;-------------------------------------------
	// 0 ;* tabulated from 0 .. 70,000ft step 1,000ft
	// 0 ;*
	// 0 ;* interpolate between 1,000ft intervals
	/* mov	ax,SqrtRhoTable[bx]  	;z1 */
	ax = *(dw*)(((db*)&sqrtrhotable)+bx);
	/* mov	di,ax */
	di = ax;
	/* sub	ax,SqrtRhoTable[bx+2]	;z1 - z2 = diff SqrtRho */
	SUB(ax, *(dw*)(((db*)&sqrtrhotable)+bx+2));
	/* imul	si		;diff SqrtRho * remainder */
	IMUL1_2(si);
	/* idiv	bp		;diff z = diff SqrtRho * remainder / 1000 */
	IDIV2(bp);
	/* sub	di,ax		;z1 - diff z */
	SUB(di, ax);
	/* mov	SqrtRho,di */
	sqrtrho = di;
calcairdensexit:
	// 4609 
	/* CalcAirDensExit:ret */
	RETN(0);
calcairspeed:
	// 6157 
	// 0 ;-----------
	// 0 ;* calc Vias
	// 0 ;-----------
	// 0 ;* Vias = SqrtRho * Vtas
edummylabel10:
	// 4611 
	/* mov	ax,Vtas */
	ax = vtas;
	/* add	ax,XWindVeff	;add crosswinds */
	ADD(ax, xwindveff);
	// 0 ;* ensure Vtas >= 0
	/* test	ax,ax		;Vtas >= 0? */
	TEST(ax, ax);
	/* jns	@F		;yes -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel50;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel50:
	// 4613 
	/* @@:		mov	dx,SqrtRho */
	dx = sqrtrho;
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
	// 0 ;SqrtRho * Vtas
	/* mov	Vias,ax */
	vias = ax;
	// 0 ;-----------
	// 0 ;* calc Vdiv
	// 0 ;-----------
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,1360		;Vias < 100kts (100 * 1.7 * 8)? */
	CMP(ax, 1360);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(1360)) {goto dummylabel51;}
	/* mov	ax,1360		;limit to prevent divide overflows */
	ax = 1360;
dummylabel51:
	// 4615 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	Vdiv,ax */
	vdiv = ax;
	// 0 ;-----------
	// 0 ;* calc Vkts
	// 0 ;-----------
	// 0 ;* Vkts = Vias * 2409 / 32768
	/* mov	ax,Vias */
	ax = vias;
	/* mov	dx,2409 */
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
	/* mov	Vkts,dx */
	vkts = dx;
	/* ret */
	RETN(0);
calcgforce:
	// 6225 
	// 0 ;---------------------------------------
	// 0 ;* calc Kfs - flap / wing sweep constant
	// 0 ;---------------------------------------
	// 0 ;* if sweep active then
	// 0 ;*    use KfsSweep table
	// 0 ;* else
	// 0 ;*    if flaps active then
	// 0 ;*       use KfsFlaps table
	// 0 ;*    else
	// 0 ;*       use KfsFixed table
	// 0 ;*    end
	// 0 ;* end
	// 0 ;-------------------------------------------------------
	// 0 ;* if sweep active then derive Kfs from KfsSweep[] table
	// 0 ;-------------------------------------------------------
edummylabel11:
	// 4617 
	/* mov	al,SweepActive */
	al = *(sweepactive);
	/* test	al,al		;sweep active? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel52;}
	// 0 ;* Kfs = value - (sweep value * scale) / 256
	/* mov	bl,CrntFlapPos */
	bl = crntflappos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 index */
	SHL(bx, 1);
	/* mov	dx,KfsSweep[bx+0] */
	dx = *(dw*)(((db*)kfssweep)+bx+0);
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* mul	dx		;dx, ax = sweep value * scale */
	MUL1_2(dx);
	/* mov	dh,dl		;/256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* shl	al,1		;1/2 bit round up */
	SHL(al, 1);
	/* adc	dx,0		;dx = sweep value * scale / 256 */
	ADC(dx, 0);
	/* mov	ax,KfsSweep[bx+2] */
	ax = *(dw*)(((db*)kfssweep)+bx+2);
	/* sub	ax,dx		;ax = value - (sweep value * scale) / 256 */
	SUB(ax, dx);
	/* jmp	KfsOk */
	goto kfsok;
	// 0 ;-------------------------------------------------------
	// 0 ;* if flaps active then derive Kfs from KfsFlaps[] table
	// 0 ;-------------------------------------------------------
dummylabel52:
	// 4619 
	/* @@:		mov	al,FlapsActive */
	al = *(flapsactive);
	/* test	al,al		;flaps active? */
	TEST(al, al);
	/* jz	@F    		;no -> */
	if (!(al & al)) {goto dummylabel53;}
	// 0 ;* Kfs = value + (flaps value * scale) / 256
	/* mov	bl,CrntWingPos */
	bl = crntwingpos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 index */
	SHL(bx, 1);
	/* mov	dx,KfsFlaps[bx+0] */
	dx = *(dw*)(((db*)kfsflaps)+bx+0);
	/* mov	ax,CrntFlapVal */
	ax = crntflapval;
	/* mul	dx		;dx, ax = flaps value * scale */
	MUL1_2(dx);
	/* mov	dh,dl		;/256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* shl	al,1		;1/2 bit round up */
	SHL(al, 1);
	/* adc	dx,0		;dx = flaps value * scale / 256 */
	ADC(dx, 0);
	/* mov	ax,KfsFlaps[bx+2] */
	ax = *(dw*)(((db*)kfsflaps)+bx+2);
	/* add	ax,dx		;ax = value + (flaps value * scale) / 256 */
	ADD(ax, dx);
	/* jmp	KfsOk */
	goto kfsok;
	// 0 ;-----------------------------------
	// 0 ;* look up Kfs from KfsFixed[] table
	// 0 ;-----------------------------------
dummylabel53:
	// 4621 
	/* @@:		mov	bl,CrntWingPos */
	bl = crntwingpos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 */
	SHL(bx, 1);
	/* shl	bx,1		;*8 index */
	SHL(bx, 1);
	/* mov	al,CrntFlapPos */
	al = crntflappos;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 index */
	SHL(ax, 1);
	/* add	bx,ax */
	ADD(bx, ax);
	/* mov	ax,KfsFixed[bx] */
	ax = *(dw*)(((db*)kfsfixed)+bx);
kfsok:
	// 4623 
	/* KfsOk:		mov	Kfs,ax */
	kfs = ax;
	// 0 ;-----------
	// 0 ;* calc GMax
	// 0 ;-----------
	// 0 ;* GMax = ((Vias * (Vias * Kfs)) / (Weight2 - (Thrust * sin(21) / 2))) / 8
	// 0 ;*
	// 0 ;* if pushing then GMax = -GMax
	// 0 ;*
	// 0 ;* note: GMax is *16 scaled
	// 0 ;*       Vias is *8 scaled
	// 0 ;*       Weight2 is /2 scaled
	// 0 ;*       Kfs has no scaling
	// 0 ;*
	// 0 ;*       GMax [*16] = result [*128] / 8
	// 0 ;* old stall flag = new stall flag
	/* mov	dl,StallFlag1 */
	dl = stallflag1;
	/* mov	StallFlag2,dl */
	stallflag2 = dl;
	/* mov	ax,Thrust */
	ax = thrust;
	/* mov	dx,23486/2	;sin(21) / 2 (*65536) */
	dx = 23486/2;
	/* mul	dx	  	;Thrust * sin(21) / 2 */
	MUL1_2(dx);
	/* mov	bx,Weight2 */
	bx = weight2;
	/* sub	bx,dx		;Weight2 - Thrust * sin(21) / 2 */
	SUB(bx, dx);
	/* mov	ax,Kfs */
	ax = kfs;
	/* mov	bp,Vias */
	bp = vias;
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
	/* mov	ax,dx */
	ax = dx;
	// 0 ;ax = Vias * Kfs
	/* imul	bp		;dx, ax = Vias * Vias * Kfs */
	IMUL1_2(bp);
	/* idiv	bx		;ax = Vias * Vias * Kfs / Weight2 */
	IDIV2(bx);
	// 0 ;* if GMax < 1g then stall (hold GMax at just < 1g)
	/* cmp	ax,16*8		;GMax < 1g? */
	CMP(ax, 16*8);
	/* jae	@F		;no -> */
	if ((dw)(ax) >= (dw)(16*8)) {goto dummylabel54;}
	/* mov	StallFlag1,1	;stalled */
	stallflag1 = 1;
	/* mov	ax,15*8		;hold GMax at just < 1g */
	ax = 15*8;
	/* jmp	SortGMax	;ignore elevator -> */
	goto sortgmax;
dummylabel54:
	// 4625 
	/* @@:		mov	StallFlag1,0	;not stalled */
	stallflag1 = 0;
	// 0 ;* test if pushing or pulling
	/* test	AutoTrim,1	;auto-trim? */
	TEST(autotrim, 1);
	/* mov	dx,ElePosn	;assume not */
	dx = eleposn;
	/* jz	@F		;no -> */
	if (!(autotrim & 1)) {goto dummylabel55;}
	/* mov	dx,GCoord */
	dx = gcoord;
dummylabel55:
	// 4627 
	/* @@:		test	dx,dx		;pushing? */
	TEST(dx, dx);
	/* js	SortGMin	;yes -> */
	if ((short)((dx & dx)) < 0) {goto sortgmin;}
sortgmax:
	// 4629 
	/* SortGMax:	shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1		;ax = Vias * Vias * Kfs / Weight2 / 8 */
	SHR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* mov	TrueGMax,ax	;unlimited GMax */
	truegmax = ax;
	// 0 ;* limit to G_MAX
	/* cmp	ax,G_MAX */
	CMP(ax, 120);
	/* jle	SetGMax */
	if ((short)(ax) <= (short)(120)) {goto setgmax;}
	/* mov	ax,G_MAX */
	ax = 120;
	/* jmp	SetGMax */
	goto setgmax;
sortgmin:
	// 4631 
	/* SortGMin:	shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1		;ax = Vias * Vias * Kfs / Weight2 / 8 */
	SHR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* neg	ax		;-GMax */
	NEG(ax);
	/* mov	TrueGMax,ax	;unlimited GMax */
	truegmax = ax;
	// 0 ;* limit to G_MIN
	/* cmp	ax,G_MIN */
	CMP(ax, -48);
	/* jge	SetGMax */
	if ((short)(ax) >= (short)(-48)) {goto setgmax;}
	/* mov	ax,G_MIN */
	ax = -48;
setgmax:
	// 4633 
	/* SetGMax: 	mov	GMax,ax */
	gmax = ax;
	// 0 ;-----------------
	// 0 ;* calc StartStall
	// 0 ;-----------------
	// 0 ;* StartStall = not(StallFlag2) and StallFlag1 (0 -> 1 transition)
	/* mov	ax,StallFlags	;al = StallFlag1, ah = StallFlag2 */
	ax = stallflags;
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	StartStall,al */
	startstall = al;
	/* jz	ContGForce	;not just stalled -> */
	if (al == 0) {goto contgforce;}
	// 0 ;* sort stall roll direction (wing drop):-
	// 0 ;*
	// 0 ;* RFine = 00000h .. 03fffh: +ve hdg rate, +ve roll rate )
	// 0 ;* RFine = 04000h .. 07fffh: -ve hdg rate, -ve roll rate ) b14 = 0 = +ve roll rate
	// 0 ;* RFine = 08000h .. 0bfffh: +ve hdg rate, +ve roll rate ) b14 = 1 = -ve roll rate
	// 0 ;* RFine = 0c000h .. 0ffffh: -ve hdg rate, -ve roll rate )
	/* mov	ax,RFine */
	ax = rfine;
	/* cmp	ax,0*128	;wings level (erect)? */
	CMP(ax, 0*128);
	/* je	@F		;yes -> */
	if ((dw)(ax) == (dw)(0*128)) {goto dummylabel56;}
	/* cmp	ax,256*128	;wings level (inverted)? */
	CMP(ax, 256*128);
	/* je	@F		;yes -> */
	if ((dw)(ax) == (dw)(256*128)) {goto dummylabel56;}
	/* shl	ax,1		;b14 = sign roll direction (wrt quadrant) */
	SHL(ax, 1);
	/* jmp	ContStallRoll */
	goto contstallroll;
dummylabel56:
	// 4635 
	/* @@:		call	RandX		;select random stall roll direction */
	CALLF(randx, 0);
	/* cbw			;(use sign bit) */
	CBW;
contstallroll:
	// 4637 
	/* ContStallRoll:	cwd			;0 = clk-wise, -1 = aclk-wise */
	CWD;
	/* mov	StallRollDir,dx */
	stallrolldir = dx;
	// 0 ;* store pitch angle at point of stall
	/* mov	ax,PFine */
	ax = pfine;
	/* mov	StallPitch,ax */
	stallpitch = ax;
	// 0 ;* set max stall pitch down angle
	/* mov	MaxPitchDown,MAX_STALL_PDN1 */
	maxpitchdown = -28*128;
	// 0 ;-------------
	// 0 ;* calc GForce
	// 0 ;-------------
	// 0 ;* if not stalled then
	// 0 ;*    if terrain following then
	// 0 ;*       GForce = TFGForce
	// 0 ;*    else
	// 0 ;*       if auto-altitude then
	// 0 ;*          GForce = AAGForce
	// 0 ;*       else
	// 0 ;*          if not auto-trim then
	// 0 ;*             GForce = ElePosn * abs(GMax) + M_CosR * M_CosP * 16
	// 0 ;*          else
	// 0 ;*             GForce = GCoord
	// 0 ;*          end
	// 0 ;*       end
	// 0 ;*    end
	// 0 ;* else
	// 0 ;*    GForce = M_CosR * M_CosP * 16
	// 0 ;* end
	// 0 ;*
	// 0 ;* if abs(GForce) > abs(GMax) then
	// 0 ;*    GForce = GMax
	// 0 ;* end
	// 0 ;*
	// 0 ;* if not airborne and stalled then
	// 0 ;*    GForce = 1g
	// 0 ;* end
contgforce:
	// 4639 
	/* ContGForce:	mov	ax,GMax */
	ax = gmax;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(GMax)
	/* mov	bx,ax */
	bx = ax;
	/* xor	bp,bp		;assume stalled */
	XOR(bp, bp);
	/* test	StallFlag1,1	;stalled? */
	TEST(stallflag1, 1);
	/* jnz	@F		;yes -> */
	if ((stallflag1 & 1) != 0) {goto dummylabel57;}
	// 0 ;* terrain following authority?
	/* test	TFAuto,1	;auto-terrain follow? */
	TEST(tfauto, 1);
	/* mov	ax,TFGForce	;assume so */
	ax = tfgforce;
	/* jnz	CheckGForce	;yes -> */
	if ((tfauto & 1) != 0) {goto checkgforce;}
	// 0 ;* auto-altitude authority?
	/* test	AAFlag,1	;auto-altitude? */
	TEST(aaflag, 1);
	/* mov	ax,AAGForce	;assume so */
	ax = aagforce;
	/* jnz	CheckGForce	;yes -> */
	if ((aaflag & 1) != 0) {goto checkgforce;}
	// 0 ;* auto-trim authority? (GForce lags GCoord by one frame)
	/* test	AutoTrim,1	;auto-trim? */
	TEST(autotrim, 1);
	/* mov	ax,GCoord	;assume so */
	ax = gcoord;
	/* jnz	CheckGForce	;yes -> */
	if ((autotrim & 1) != 0) {goto checkgforce;}
	/* mov	ax,ElePosn */
	ax = eleposn;
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
	/* mov	bp,dx */
	bp = dx;
	// 0 ;ElePosn * abs(GMax)
dummylabel57:
	// 4641 
	/* @@:	 	mov	ax,M_CosR */
	ax = m_cosr;
	/* mov	dx,M_CosP */
	dx = m_cosp;
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
	// 0 ;M_CosR * M_CosP
	/* cwd */
	CWD;
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
	// 0 ;M_CosR * M_CosP * 16
	/* add	ax,bp		;ElePosn * abs(GMax) + M_CosR * M_CosP * 16 */
	ADD(ax, bp);
checkgforce:
	// 4643 
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bx		;abs(GForce) <= abs(GMax)? */
	CMP(ax, bx);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(bx)) {goto dummylabel58;}
	/* mov	ax,bx		;abs(GForce) = abs(GMax) */
	ax = bx;
dummylabel58:
	// 4645 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	dl,Airborne1 */
	dl = airborne1;
	/* not	dl */
	dl = ~dl;
	/* and	dl,StallFlag1	;not airborne and stalled? */
	AND(dl, stallflag1);
	/* jz	@F */
	if (dl == 0) {goto dummylabel59;}
	/* mov	ax,16		;GForce = 1g */
	ax = 16;
dummylabel59:
	// 4647 
	/* @@:		mov	GForce,ax */
	gforce = ax;
	// 0 ;-------------
	// 0 ;* calc GCoord
	// 0 ;-------------
	// 0 ;* GCoord = (M_CosP * 256 / M_CosR) / 16
	// 0 ;*
	// 0 ;* note: Roll limited to 83 degs (to prevent overflow).
	// 0 ;*
	// 0 ;*       cos(83) = 0.122 = 3993 / 32768
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,3993		;roll <= 83 degs? */
	CMP(ax, 3993);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(3993)) {goto dummylabel60;}
	/* mov	ax,3993		;limit to 83 degs */
	ax = 3993;
dummylabel60:
	// 4649 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,M_CosP */
	ax = m_cosp;
	/* cwd */
	CWD;
	/* mov	dl,ah		;M_CosP * 256 */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* idiv	bp		;M_CosP * 256 / M_CosR */
	IDIV2(bp);
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
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* cancel auto-trim if GCoord is -ve
	/* jns	SetGCoord	;GCoord +ve -> */
	if ((short)(ax) >= 0) {goto setgcoord;}
	/* mov	AutoTrim,0	;cancel auto-trim */
	autotrim = 0;
setgcoord:
	// 4651 
	/* SetGCoord:	mov	GCoord,ax */
	gcoord = ax;
	// 0 ;------------------------------
	// 0 ;* calc Alpha (angle of attack)
	// 0 ;------------------------------
	// 0 ;* if spinning and not recovered then
	// 0 ;*    Alpha [*16] = ALPHA_MAX
	// 0 ;* else
	// 0 ;*    if airborne then
	// 0 ;*       Alpha [*16] = GForce * ALPHA_MAX / max(abs(TrueGMax), 1g)
	// 0 ;*    else
	// 0 ;*       Alpha [*16] = PFine * (23040 / 32768) / 8
	// 0 ;*    end
	// 0 ;* end
	/* mov	al,SpinFlag */
	al = spinflag;
	/* test	al,al		;spinning? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel61;}
	/* mov	ax,Recovery */
	ax = recovery;
	/* test	ax,ax		;recovered? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel61;}
	/* mov	ax,ALPHA_MAX	;assume so */
	ax = 21*16;
	/* jmp	SetAlpha */
	goto setalpha;
dummylabel61:
	// 4653 
	/* @@:		mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;airborne? */
	TEST(al, al);
	/* jnz	@F		;yes -> */
	if ((al & al) != 0) {goto dummylabel62;}
	/* mov	ax,PFine */
	ax = pfine;
	/* mov	dx,23040 */
	dx = 23040;
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
	// 0 ;PFine * 23040 / 32768
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* jmp	SetAlpha */
	goto setalpha;
dummylabel62:
	// 4655 
	/* @@:		mov	bx,16		;assume abs(GMax) < 1g */
	bx = 16;
	/* mov	ax,TrueGMax */
	ax = truegmax;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(TrueGMax), dx = sign(TrueGMax)
	/* cmp	ax,bx		;abs(TrueGMax) < 1g? */
	CMP(ax, bx);
	/* jb	@F		;yes, limit to 1g -> */
	if ((dw)(ax) < (dw)(bx)) {goto dummylabel63;}
	/* mov	bx,ax */
	bx = ax;
dummylabel63:
	// 4657 
	/* @@:		mov	ax,GForce */
	ax = gforce;
	/* mov	dx,ALPHA_MAX */
	dx = 21*16;
	/* imul	dx		;GForce * ALPHA_MAX */
	IMUL1_2(dx);
	/* idiv	bx		;GForce * ALPHA_MAX / max(abs(TrueGMax), 1g) */
	IDIV2(bx);
	/* test	ax,ax		;Alpha >= 0? */
	TEST(ax, ax);
	/* jns	SetAlpha	;yes -> */
	if ((short)((ax & ax)) >= 0) {goto setalpha;}
	/* cmp	ax,ALPHA_MIN	;limit -ve Alpha to ALPHA_MIN */
	CMP(ax, -8*16);
	/* jge	SetAlpha */
	if ((short)(ax) >= (short)(-8*16)) {goto setalpha;}
	/* mov	ax,ALPHA_MIN */
	ax = -8*16;
setalpha:
	// 4659 
	/* SetAlpha:	mov	Alpha,ax */
	alpha = ax;
	/* ret */
	RETN(0);
calcrates:
	// 6627 
	/* mov	al,SpinFlag ;* kill: assume all */
	al = spinflag;
edummylabel12:
	// 4661 
	/* test	al,al		;spinning? */
	TEST(al, al);
	/* jz	@F		;no */
	if (!(al & al)) {goto dummylabel64;}
	/* jmp	SpinRates */
	goto spinrates;
	// 0 ;------------
	// 0 ;* calc GRate
	// 0 ;------------
	// 0 ;* GRate = (GForce - GCoord) * 656 * 256 / Vdiv
dummylabel64:
	// 4663 
	/* @@:		mov	ax,GForce */
	ax = gforce;
	/* sub	ax,GCoord	;GForce - GCoord */
	SUB(ax, gcoord);
	/* mov	dx,656 */
	dx = 656;
	/* imul	dx		;(GForce - GCoord) * 656 */
	IMUL1_2(dx);
	/* mov	dh,dl		;(GForce - GCoord) * 656 * 256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	bx,Vdiv */
	bx = vdiv;
	/* idiv	bx		;(GForce - GCoord) * 656 * 256 / Vdiv */
	IDIV2(bx);
	/* mov	GRate,ax */
	grate = ax;
	// 0 ;--------------
	// 0 ;* calc EleRate
	// 0 ;--------------
	// 0 ;* if not stalled then
	// 0 ;*    EleRate = ((41 * 65536) / Vdiv) * ElePosn
	// 0 ;* else
	// 0 ;*    EleRate = 0
	// 0 ;* end
	/* xor	dx,dx		;assume stalled */
	XOR(dx, dx);
	/* mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;stalled? */
	TEST(al, al);
	/* jnz	@F		;yes -> */
	if ((al & al) != 0) {goto dummylabel65;}
	/* mov	dx,41 */
	dx = 41;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	bx,Vdiv */
	bx = vdiv;
	/* idiv	bx		;(41 * 65536) / Vdiv */
	IDIV2(bx);
	/* mov	dx,ElePosn */
	dx = eleposn;
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
	// 0 ;((41 * 65536) / Vdiv) * ElePosn
dummylabel65:
	// 4665 
	/* @@:		mov	EleRate,dx */
	elerate = dx;
	// 0 ;------------------
	// 0 ;* calc EleRollRate
	// 0 ;------------------
	// 0 ;* EleRollRate = EleRate * 8 * M_SinR * M_SinP
	// 0 ;* //MOD// 28.04.1993 - Use (EleRate * 8) to boost induced roll with elevator
	// 0 ;*			(to improve off axis loop).
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* mov	ax,M_SinR */
	ax = m_sinr;
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
	// 0 ;EleRate * 8 * M_SinR
	/* mov	ax,M_SinP */
	ax = m_sinp;
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
	// 0 ;EleRate * 8 * M_SinR * M_SinP
	/* mov	EleRollRate,dx */
	elerollrate = dx;
	// 0 ;--------------
	// 0 ;* calc RudRate
	// 0 ;--------------
	// 0 ;* RudRate = ((41 * 65536) / Vdiv) * RudPosn
	/* mov	dx,41 */
	dx = 41;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	bx,Vdiv */
	bx = vdiv;
	/* idiv	bx		;(41 * 65536) / Vdiv */
	IDIV2(bx);
	/* mov	dx,RudPosn */
	dx = rudposn;
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
	// 0 ;((41 * 65536) / Vdiv) * RudPosn
	// 0 ;* if stalled then
	// 0 ;*    RudRate = RudRate / 4
	// 0 ;* end
	/* mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;stalled? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel66;}
	// 0 ;* RudRate / 4 (ignore -1 truncation error)
	/* sar	dx,1		;/2 */
	SAR(dx, 1);
	/* sar	dx,1		;/4 */
	SAR(dx, 1);
dummylabel66:
	// 4667 
	/* @@:		mov	RudRate,dx */
	rudrate = dx;
	// 0 ;------------------
	// 0 ;* calc RudRollRate
	// 0 ;------------------
	// 0 ;* RudRollRate = RudRate * M_CosR * M_SinP
	/* mov	ax,M_CosR */
	ax = m_cosr;
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
	// 0 ;RudRate * M_CosR
	/* mov	ax,M_SinP */
	ax = m_sinp;
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
	// 0 ;RudRate * M_CosR * M_SinP
	/* mov	RudRollRate,dx */
	rudrollrate = dx;
	// 0 ;------------------
	// 0 ;* calc AilRollRate
	// 0 ;------------------
	// 0 ;* if abs(Vias) < 4096 (300kts) then
	// 0 ;*    rate = abs(Vias) * 8
	// 0 ;* else
	// 0 ;*    rate = 32767 (max roll rate)
	// 0 ;* end
	// 0 ;*
	// 0 ;* AilRollRate = AilPosn * rate * sign(Vias)
	/* mov	ax,Vias */
	ax = vias;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(Vias), dx = sign(Vias)
	/* cmp	ax,4096		;abs(Vias) >= 300kts? */
	CMP(ax, 4096);
	/* mov	bp,32767	;assume so (max roll rate) */
	bp = 32767;
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(4096)) {goto dummylabel67;}
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* shl	ax,1		;rate = abs(Vias) * 8 */
	SHL(ax, 1);
	/* mov	bp,ax */
	bp = ax;
dummylabel67:
	// 4669 
	/* @@:		xor	bp,dx		;rate * sign(Vias) */
	XOR(bp, dx);
	/* sub	bp,dx */
	SUB(bp, dx);
	/* mov	ax,AilPosn */
	ax = ailposn;
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
	// 0 ;AilPosn * rate * sign(Vias)
	// 0 ;* if stalled then
	// 0 ;*    AilRolRate = AilRollRate / 4
	// 0 ;* end
	/* mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;stalled? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel68;}
	// 0 ;* AilRollRate / 4 (ignore -1 truncation error)
	/* sar	dx,1		;/2 */
	SAR(dx, 1);
	/* sar	dx,1		;/4 */
	SAR(dx, 1);
dummylabel68:
	// 4671 
	/* @@:		mov	AilRollRate,dx */
	ailrollrate = dx;
	// 0 ;--------------
	// 0 ;* calc HdgRate
	// 0 ;--------------
	// 0 ;* if airborne then
	// 0 ;*    HdgRate = ((GForce * 1.125 * 656 * 256 / Vtas) * M_SinR + RudRate * M_CosR)
	// 0 ;* else
	// 0 ;*    HdgRate = ground steering (see below)
	// 0 ;* end
	/* mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;airborne? */
	TEST(al, al);
	/* jz	GndSteering	;no -> */
	if (!(al & al)) {goto gndsteering;}
	// 0 ;* //MOD// 28.04.1993 - Sort roll / hdg singularity at +/-90degs.
	/* cmp	Pitch,128 */
	CMP(pitch, 128);
	/* je	Fix90 */
	if ((dw)(pitch) == (dw)(128)) {goto fix90;}
	/* cmp	Pitch,384 */
	CMP(pitch, 384);
	/* je	Fix90 */
	if ((dw)(pitch) == (dw)(384)) {goto fix90;}
	/* mov	ax,RudRate */
	ax = rudrate;
	/* mov	dx,M_CosR */
	dx = m_cosr;
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
	// 0 ;RudRate * M_CosR
	// 0 ;* //MOD// 28.04.1993 - Use (GForce * 1.125) to increase hdg rate (required
	// 0 ;*                      to improve off axis loop).
	/* mov	ax,GForce */
	ax = gforce;
	/* mov	dx,738		;738 = 1.125 * 656 */
	dx = 738;
	/* imul	dx    		;GForce * 738 */
	IMUL1_2(dx);
	/* mov	dh,dl		;GForce * 738 * 256 */
	dh = dl;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	// 0 ;* //MOD// 22.07.1992 - Vdiv replaced with Vtas. This prevents high heading
	// 0 ;*                      rates at altitude.
	/* mov	bx,Vtas */
	bx = vtas;
	/* cmp	bx,1360		;Vtas < 100kts? */
	CMP(bx, 1360);
	/* jge	@F		;no -> */
	if ((short)(bx) >= (short)(1360)) {goto dummylabel69;}
	/* mov	bx,1360		;limit to 100kts (prevent overflow) */
	bx = 1360;
dummylabel69:
	// 4673 
	/* @@:		idiv	bx		;GForce * 738 * 256 / Vtas */
	IDIV2(bx);
	/* mov	dx,M_SinR */
	dx = m_sinr;
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
	// 0 ;(GForce * 738 * 256 / Vtas) * M_SinR
	/* add	dx,bp		;(GForce * 738 * 256 / Vtas) * M_SinR + RudRate * M_CosR */
	ADD(dx, bp);
	/* jmp	SetHdgRate */
	goto sethdgrate;
fix90:
	// 4675 
	/* Fix90:		mov	dx,AilRollRate	;hdg rate = aileron roll rate */
	dx = ailrollrate;
	/* mov	AilRollRate,0	;aileron roll rate = 0 */
	ailrollrate = 0;
	/* jmp	SetHdgRate */
	goto sethdgrate;
	// 0 ;* ground steering:-
	// 0 ;*
	// 0 ;* if Vtas > 0 and gear down then
	// 0 ;*    if sign(AilPosn) = sign(RudPosn) then
	// 0 ;*       if abs(AilPosn) > abs(RudPosn) then
	// 0 ;*          steer posn = AilPosn
	// 0 ;*       else
	// 0 ;*          steer posn = RudPosn
	// 0 ;*       end
	// 0 ;*    else
	// 0 ;*       steer posn = AilPosn + RudPosn
	// 0 ;*    end
	// 0 ;*    HdgRate = (max(21 * 128 - Vtas * 2, 0) + 1) * steer posn
	// 0 ;* else
	// 0 ;*    HdgRate = 0
	// 0 ;* end
gndsteering:
	// 4677 
	/* GndSteering:	xor	dx,dx		;assume Vtas <= 0 or gear up */
	XOR(dx, dx);
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jz	SetHdgRate	;no -> */
	if (!(gear & 1)) {goto sethdgrate;}
	/* mov	ax,Vtas */
	ax = vtas;
	/* cmp	ax,0		;Vtas > 0? */
	CMP(ax, 0);
	/* jle	SetHdgRate	;no -> */
	if ((short)(ax) <= (short)(0)) {goto sethdgrate;}
	/* shl	ax,1		;Vtas * 2 */
	SHL(ax, 1);
	/* mov	dx,21*128 */
	dx = 21*128;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
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
	// 0 ;max(21 * 128 - Vtas * 2, 0)
	/* add	ax,128		;max(21 * 128 - Vtas * 2, 0) + 128 */
	ADD(ax, 128);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,AilPosn */
	ax = ailposn;
	/* xor	ax,RudPosn	;sign(AilPosn) = sign(RudPosn)? */
	XOR(ax, rudposn);
	/* js	SumControls	;no -> */
	if ((short)(ax) < 0) {goto sumcontrols;}
	/* mov	ax,AilPosn */
	ax = ailposn;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,RudPosn */
	ax = rudposn;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bx		;ailerons or rudder dominant? */
	CMP(ax, bx);
	/* jae	@F		;rudder dominant (or same) -> */
	if ((dw)(ax) >= (dw)(bx)) {goto dummylabel70;}
	/* mov	ax,bx */
	ax = bx;
	/* mov	dx,cx */
	dx = cx;
dummylabel70:
	// 4679 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* jmp	@F */
	goto dummylabel71;
sumcontrols:
	// 4681 
	/* SumControls:	mov	ax,AilPosn */
	ax = ailposn;
	/* add	ax,RudPosn */
	ADD(ax, rudposn);
dummylabel71:
	// 4683 
	/* @@:		imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;max(21 * 128 - Vtas * 2, 0) + 128 * steer posn
sethdgrate:
	// 4685 
	/* SetHdgRate:    	mov	HdgRate,dx */
	hdgrate = dx;
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
	// 0 ;DeltaHRate = HdgRate * DeltaTime
	/* mov	DeltaHRate,dx */
	deltahrate = dx;
	// 0 ;----------------
	// 0 ;* calc PitchRate
	// 0 ;----------------
	// 0 ;* if not stalled then
	// 0 ;*    if terrain following then
	// 0 ;*       PitchRate = terrain following pitch rate
	// 0 ;*    else
	// 0 ;*       if auto-altitude then
	// 0 ;*          PitchRate = auto-altitude pitch rate
	// 0 ;*       else
	// 0 ;*          PitchRate = (GRate * M_CosR - RudRate * M_SinR)
	// 0 ;*       end
	// 0 ;*    end
	// 0 ;* else
	// 0 ;*    PitchRate = pitch down wrt stall (see below)
	// 0 ;* end
	/* mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;stalled? */
	TEST(al, al);
	/* jnz	StallPitchDown	;yes -> */
	if ((al & al) != 0) {goto stallpitchdown;}
	// 0 ;* terrain following authority?
	/* test	TFAuto,1	;auto-terrain following on? */
	TEST(tfauto, 1);
	/* jz	@F		;no -> */
	if (!(tfauto & 1)) {goto dummylabel72;}
	/* mov	ax,TFPitchRate */
	ax = tfpitchrate;
	/* mov	PitchRate,ax */
	pitchrate = ax;
	/* mov	dx,TFDeltaPRate */
	dx = tfdeltaprate;
	/* jmp	ContPitchRate */
	goto contpitchrate;
	// 0 ;* auto-altitude authority?
dummylabel72:
	// 4687 
	/* @@:		test	AAFlag,1	;auto-altitude engaged? */
	TEST(aaflag, 1);
	/* jz	@F		;no -> */
	if (!(aaflag & 1)) {goto dummylabel73;}
	/* mov	ax,AAPitchRate */
	ax = aapitchrate;
	/* mov	PitchRate,ax */
	pitchrate = ax;
	/* mov	dx,AADeltaPRate */
	dx = aadeltaprate;
	/* jmp	ContPitchRate */
	goto contpitchrate;
dummylabel73:
	// 4689 
	/* @@:		mov	ax,RudRate */
	ax = rudrate;
	/* mov	dx,M_SinR */
	dx = m_sinr;
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
	// 0 ;RudRate * M_SinR
	// 0 ;* //MOD// 28.04.1993 - Keep abs(M_CosR) >= cos(83) else nose does not drop
	// 0 ;*		        when rolled 90 degs.
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,3993		;cos(83) */
	CMP(ax, 3993);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(3993)) {goto dummylabel74;}
	/* mov	ax,3993		;cos(83) */
	ax = 3993;
dummylabel74:
	// 4691 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	dx,GRate */
	dx = grate;
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
	// 0 ;GRate * M_CosR
	/* sub	dx,bp		;GRate * M_CosR - RudRate * M_SinR */
	SUB(dx, bp);
	/* jmp	SetPitchRate */
	goto setpitchrate;
	// 0 ;-------------------------
	// 0 ;* pitch down due to stall
	// 0 ;-------------------------
	// 0 ;* if airborne then
	// 0 ;*    PitchRate = DampRate(-(M_CosP * MAX_STALL_PRATE + MIN_STALL_PRATE))
	// 0 ;* else
	// 0 ;*    if accelerating then
	// 0 ;*       PitchRate = 0
	// 0 ;*    else
	// 0 ;*       PitchRate = -10degs/sec
	// 0 ;*    endif
	// 0 ;* endif
	// 0 ;* //MOD// 05.11.1992 - Pitch down on ground if decelerating.
stallpitchdown:
	// 4693 
	/* StallPitchDown:	test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jnz	@F		;yes -> */
	if ((airborne1 & 1) != 0) {goto dummylabel75;}
	/* xor	dx,dx		;assume accelerating */
	XOR(dx, dx);
	/* cmp	Accel,0		;accelerating? */
	CMP(accel, 0);
	/* jg	SetPitchRate	;yes -> */
	if ((short)(accel) > (short)(0)) {goto setpitchrate;}
	/* mov	dx,-1820	;-10degs/sec pitch down */
	dx = -1820;
	/* jmp	SetPitchRate */
	goto setpitchrate;
	// 0 ;* new pitch rate = -(M_CosP * MAX_STALL_PRATE + MIN_STALL_PRATE))
dummylabel75:
	// 4695 
	/* @@:		mov	ax,M_CosP */
	ax = m_cosp;
	/* mov	dx,MAX_STALL_PRATE */
	dx = 46*128;
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
	/* add	dx,MIN_STALL_PRATE */
	ADD(dx, 1*128);
	/* neg	dx     		;dx = new pitch rate */
	NEG(dx);
	/* mov	ax,PitchRate	;ax = old pitch rate */
	ax = pitchrate;
	/* mov	cx,DAMP2 */
	cx = 1;
	/* call	DampRate */
	CALL(damprate, 0);
setpitchrate:
	// 4697 
	/* SetPitchRate:	mov	PitchRate,dx */
	pitchrate = dx;
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
	// 0 ;DeltaPRate = PitchRate * DeltaTime
	// 0 ;* if on ground then
	// 0 ;*    PFine = max(PFine, 0)		;limit pitch down to 0 degrees
	// 0 ;* end
contpitchrate:
	// 4699 
	/* ContPitchRate:	mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;airborne? */
	TEST(al, al);
	/* jnz	SkipGndPDown	;yes -> */
	if ((al & al) != 0) {goto skipgndpdown;}
	/* mov	ax,PFine */
	ax = pfine;
	/* add	ax,dx		;PFine + DeltaPRate */
	ADD(ax, dx);
	/* js	__m2c_macrolocal_293_skip */
	if ((short)(ax) < 0) {goto __m2c_macrolocal_293_skip;}
	/* jmp	SetDeltaPRate */
	goto setdeltaprate;
__m2c_macrolocal_293_skip:
	// 4701 
	// 0 ;PFine + DeltaPRate >= 0 ->
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jz	@F    		;no -> */
	if (!(gear & 1)) {goto dummylabel76;}
	/* cmp	PFine,0		;nose wheel just touched down? */
	CMP(pfine, 0);
	/* je	@F		;no -> */
	if ((dw)(pfine) == (dw)(0)) {goto dummylabel76;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_294_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_294_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 7060 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 7061 						mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 7062 						mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 10;);	// 7063 						mov	ShakeTimer,10 */
__m2c_macrolocal_294_skip:
	// 4703 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 7065 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,10 */
	shaketimer = 10;
dummylabel76:
	// 4705 
	/* @@:		mov	dx,PFine */
	dx = pfine;
	/* neg	dx		;DeltaPRate = -PFine */
	NEG(dx);
	/* jmp	SetDeltaPRate */
	goto setdeltaprate;
	// 0 ;* if stalled then
	// 0 ;*    if nose just gone through horizon then
	// 0 ;*       if HdgRate <> 0 then
	// 0 ;*          if SPILS off then
	// 0 ;*             start spin
	// 0 ;*          end
	// 0 ;*       end
	// 0 ;*    end
	// 0 ;*    if not spinning then
	// 0 ;*       PFine = max(PFine, MaxPitchDown)
	// 0 ;*    end
	// 0 ;* end
skipgndpdown:
	// 4707 
	/* SkipGndPDown:	mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;stalled? */
	TEST(al, al);
	/* jz	SetDeltaPRate	;no -> */
	if (!(al & al)) {goto setdeltaprate;}
	// 0 ;----------------------
	// 0 ;* check for start spin
	// 0 ;----------------------
	/* mov	ax,PFine */
	ax = pfine;
	/* test	ax,ax		;nose was above horizon? */
	TEST(ax, ax);
	/* js	SkipStartSpin	;no -> */
	if ((short)((ax & ax)) < 0) {goto skipstartspin;}
	/* add	ax,dx		;nose now below horizon? */
	ADD(ax, dx);
	/* jns	SkipStartSpin	;no -> */
	if ((short)(ax) >= 0) {goto skipstartspin;}
	/* mov	ax,StallPitch */
	ax = stallpitch;
	/* cmp	ax,16*128	;gentle stall (pitch < 11 degs)? */
	CMP(ax, 16*128);
	/* jle	SkipStartSpin	;yes -> */
	if ((short)(ax) <= (short)(16*128)) {goto skipstartspin;}
	/* mov	al,SPILS */
	al = spils;
	/* test	al,al		;SPILS on? */
	TEST(al, al);
	/* jnz	SkipStartSpin	;yes -> */
	if ((al & al) != 0) {goto skipstartspin;}
	// 0 ;------------
	// 0 ;* start spin
	// 0 ;------------
	/* mov	SpinFlag,1 */
	spinflag = 1;
	// 0 ;* set max stall pitch down angle
	/* mov	MaxPitchDown,MAX_STALL_PDN2 */
	maxpitchdown = -64*128;
	// 0 ;* spin recovery time = 3 * 100 + RandX * 2
	// 0 ;*
	// 0 ;*                    = 300 + (0 .. 510)
	// 0 ;*
	// 0 ;*                    = 3.00 .. 8.10 secs
	/* call	RandX */
	CALLF(randx, 0);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* add	ax,3*100 */
	ADD(ax, 3*100);
	/* mov	Recovery,ax */
	recovery = ax;
	/* jmp	SetDeltaPRate */
	goto setdeltaprate;
	// 0 ;--------------------------
	// 0 ;* check for max pitch down
	// 0 ;--------------------------
skipstartspin:
	// 4709 
	/* SkipStartSpin:	mov	ax,PFine */
	ax = pfine;
	/* add	ax,dx		;PFine + DeltaPRate */
	ADD(ax, dx);
	/* cmp	ax,MaxPitchDown	;pitch < MaxPitchDown? */
	CMP(ax, maxpitchdown);
	/* jge	SetDeltaPRate	;no -> */
	if ((short)(ax) >= (short)(maxpitchdown)) {goto setdeltaprate;}
	/* mov	dx,MaxPitchDown */
	dx = maxpitchdown;
	/* sub	dx,PFine	;DeltaPRate = MaxPitchDown - PFine */
	SUB(dx, pfine);
setdeltaprate:
	// 4711 
	/* SetDeltaPRate:	mov	DeltaPRate,dx */
	deltaprate = dx;
	// 0 ;---------------
	// 0 ;* calc RollRate
	// 0 ;---------------
	// 0 ;* if airborne then
	// 0 ;*    if stalled and pitched up then
	// 0 ;*       RollRate = DampRate((M_CosP * MAX_STALL_RRATE + MIN_STALL_RRATE) * StallRollDir)
	// 0 ;*    else
	// 0 ;*       RollRate = (EleRollRate + AilRollRate + RudRollRate)
	// 0 ;*    end
	// 0 ;* else
	// 0 ;*    RollRate = 0
	// 0 ;* end
	/* xor	dx,dx		;assume not airborne */
	XOR(dx, dx);
	/* mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;airborne? */
	TEST(al, al);
	/* jz	SetRollRate	;no -> */
	if (!(al & al)) {goto setrollrate;}
	// 0 ;* KJB - 10.03.1992 - auto-heading modification
	/* test	AHFlag,1	;auto-hdg active? */
	TEST(ahflag, 1);
	/* jz	@F		;no -> */
	if (!(ahflag & 1)) {goto dummylabel77;}
	/* mov	ax,AHRollRate */
	ax = ahrollrate;
	/* mov	RollRate,ax */
	rollrate = ax;
	/* mov	dx,AHDeltaRRate */
	dx = ahdeltarrate;
	/* jmp	SetDeltaRRate */
	goto setdeltarrate;
dummylabel77:
	// 4713 
	/* @@:		mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;stalled? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel78;}
	/* mov	ax,PFine */
	ax = pfine;
	/* test	ax,ax		;pitched up? */
	TEST(ax, ax);
	/* jns	StallWingDrop	;yes -> */
	if ((short)((ax & ax)) >= 0) {goto stallwingdrop;}
	// 0 ;* scale by /2 to prevent overflow
dummylabel78:
	// 4715 
	/* @@:		mov	ax,EleRollRate */
	ax = elerollrate;
	/* sar	ax,1		;/2 */
	SAR(ax, 1);
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	ax,AilRollRate */
	ax = ailrollrate;
	/* sar	ax,1		;/2 */
	SAR(ax, 1);
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	ax,RudRollRate */
	ax = rudrollrate;
	/* sar	ax,1		;/2 */
	SAR(ax, 1);
	/* add	dx,ax */
	ADD(dx, ax);
	/* cmp	dx,-16384	;limit roll left rate? */
	CMP(dx, -16384);
	/* jge	@F		;no -> */
	if ((short)(dx) >= (short)(-16384)) {goto dummylabel79;}
	/* mov	dx,-16384 */
	dx = -16384;
dummylabel79:
	// 4717 
	/* @@:		cmp	dx,+16363	;limit roll right rate? */
	CMP(dx, 16363);
	/* jle	@F		;no -> */
	if ((short)(dx) <= (short)(16363)) {goto dummylabel80;}
	/* mov	dx,+16383 */
	dx = 16383;
dummylabel80:
	// 4719 
	/* @@:		sal	dx,1		;*2 (restore scale) */
	SAL(dx, 1);
	/* jmp	SetRollRate */
	goto setrollrate;
	// 0 ;-------------------------------------
	// 0 ;* stalled and pitched up so drop wing
	// 0 ;-------------------------------------
stallwingdrop:
	// 4721 
	/* StallWingDrop:	mov	ax,M_CosP */
	ax = m_cosp;
	/* mov	dx,MAX_STALL_RRATE */
	dx = 32*128;
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
	// 0 ;M_CosP * MAX_STALL_RRATE
	/* add	dx,MIN_STALL_RRATE	;M_CosP * MAX_STALL_RRATE + MIN_STALL_RRATE */
	ADD(dx, 1*128);
	/* mov	ax,StallRollDir	;(M_CosP * MAX_STALL_RRATE + MIN_STALL_RRATE) * StallRollDir */
	ax = stallrolldir;
	/* xor	dx,ax */
	XOR(dx, ax);
	/* sub	dx,ax		;dx = new roll rate */
	SUB(dx, ax);
	/* mov	ax,RollRate	;ax = old roll rate */
	ax = rollrate;
	/* mov	cx,DAMP2 */
	cx = 1;
	/* call	DampRate */
	CALL(damprate, 0);
setrollrate:
	// 4723 
	/* SetRollRate:	mov	RollRate,dx */
	rollrate = dx;
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
	// 0 ;DeltaRRate = RollRate * DeltaTime
setdeltarrate:
	// 4725 
	/* SetDeltaRRate:	mov	DeltaRRate,dx */
	deltarrate = dx;
	/* jmp	CalcRatesExit */
	goto calcratesexit;
	// 0 ;-----------------
	// 0 ;* calc spin rates
	// 0 ;-----------------
spinrates:
	// 4727 
	// 0 ;--------------------
	// 0 ;* sort spin recovery
	// 0 ;--------------------
	/* mov	ax,Recovery */
	ax = recovery;
	/* test	ax,ax		;recovered? */
	TEST(ax, ax);
	/* jnz	@F		;no -> */
	if ((ax & ax) != 0) {goto dummylabel81;}
	/* jmp	RecoveryRates */
	goto recoveryrates;
	// 0 ;* if stick back then
	// 0 ;*    if "in spin" aileron then
	// 0 ;*       Recovery = max(Recovery - LastFrame, 0)
	// 0 ;*    end
	// 0 ;* end
	// 0 ;* note: Do not check for max control positions (ie. +32767 and -32768) as
	// 0 ;*       some joysticks may not be able to reach these limits. Instead use
	// 0 ;*       +16384 and -16384 limits.
dummylabel81:
	// 4729 
	/* @@:		mov	ax,ElePosn */
	ax = eleposn;
	/* cmp	ax,+16384	;stick back? */
	CMP(ax, 16384);
	/* jl	@F		;no -> */
	if ((short)(ax) < (short)(16384)) {goto dummylabel82;}
	// 0 ;* check for "in spin" aileron
	/* mov	ax,AilPosn */
	ax = ailposn;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(AilPosn), dx = sign(AilPosn)
	/* cmp	ax,+16384	;enough aileron? */
	CMP(ax, 16384);
	/* jb	@F		;no -> */
	if ((dw)(ax) < (dw)(16384)) {goto dummylabel82;}
	/* xor	dx,HdgRate	;"in spin" aileron? */
	XOR(dx, hdgrate);
	/* js	@F		;no -> */
	if ((short)(dx) < 0) {goto dummylabel82;}
	/* mov	ax,Recovery */
	ax = recovery;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
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
	/* mov	Recovery,ax */
	recovery = ax;
	// 0 ;-------------------
	// 0 ;* sort heading rate
	// 0 ;-------------------
	// 0 ;* continuous heading rate:-
	// 0 ;*
	// 0 ;* HdgRate = ((SWEEP_A_67 - CrntWingVal) * 32 + 10367) * sign(old PitchRate)
	// 0 ;*
	// 0 ;* @ 25 deg wing sweep, rate =   (700 - 0) * 32 + 10367 = 180 degs / sec
	// 0 ;* @ 45 deg wing sweep, rate = (700 - 333) * 32 + 10367 = 121 degs / sec
	// 0 ;* @ 67 deg wing sweep, rate = (700 - 700) * 32 + 10367 =  57 degs / sec
dummylabel82:
	// 4731 
	/* @@:	 	mov	ax,HdgRate */
	ax = hdgrate;
	/* cwd			;dx = heading direction */
	CWD;
	/* mov	ax,SWEEP_A_67 */
	ax = 700;
	/* sub	ax,CrntWingVal	;SWEEP_A_67 - CrntWingVal */
	SUB(ax, crntwingval);
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
	/* add	ax,10367	;(SWEEP_A_67 - CrntWingVal) * 32 + 10367 */
	ADD(ax, 10367);
	/* xor	ax,dx		;set heading direction */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	dx,ax		;dx = new heading rate */
	dx = ax;
	/* mov	ax,HdgRate	;ax = old heading rate */
	ax = hdgrate;
	/* mov	cx,DAMP64 */
	cx = 6;
	/* call	DampRate */
	CALL(damprate, 0);
	/* mov	HdgRate,dx */
	hdgrate = dx;
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
	// 0 ;DeltaHRate = HdgRate * DeltaTime
	/* mov	DeltaHRate,dx */
	deltahrate = dx;
	// 0 ;-----------------
	// 0 ;* sort pitch rate
	// 0 ;-----------------
	// 0 ;* if CrntWingVal <= SWEEP_A_45 then
	// 0 ;*    pitch to steady state position wrt wing sweep
	// 0 ;* else
	// 0 ;*    continuous pitch (set pitch rate wrt wing sweep)
	// 0 ;* end
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* cmp	ax,SWEEP_A_45	;wing sweep <= 45 degs? */
	CMP(ax, 333);
	/* ja	ContSpinPitch	;no -> */
	if ((dw)(ax) > (dw)(333)) {goto contspinpitch;}
	// 0 ;* steady state pitch:-
	/* mov	ax,-8192	;steady state pitch = -45 degs */
	ax = -8192;
	// 0 ;* pitch rate = steady state pitch - current pitch
	/* sub	ax,PFine */
	SUB(ax, pfine);
	/* jmp	DampSpinPitch */
	goto dampspinpitch;
	// 0 ;* continuous pitch rate:-
	// 0 ;*
	// 0 ;* pitch rate = (3407 + (CrntWingVal - SWEEP_A_45) * 80) * sign(PitchRate)
	// 0 ;*
	// 0 ;*           = 3407 .. 32767 (fine pdegs / sec)
	// 0 ;*
	// 0 ;*           = 19 .. 180 degs / sec
contspinpitch:
	// 4733 
	/* ContSpinPitch:	sub	ax,SWEEP_A_45 */
	SUB(ax, 333);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	dx,ax */
	dx = ax;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	ax,dx		;(CrntWingVal - SWEEP_A_45) * 80 */
	ADD(ax, dx);
	/* add	ax,3407		;3407 + (CrntWingVal - SWEEP_A_45) * 80 */
	ADD(ax, 3407);
	/* mov	dx,PitchRate */
	dx = pitchrate;
	/* test	dx,dx		;pitch up or down? */
	TEST(dx, dx);
	/* jns	DampSpinPitch	;up -> */
	if ((short)((dx & dx)) >= 0) {goto dampspinpitch;}
	/* neg	ax */
	NEG(ax);
dampspinpitch:
	// 4735 
	/* DampSpinPitch:	mov	dx,ax		;dx = new pitch rate */
	dx = ax;
	/* mov	ax,PitchRate	;ax = old pitch rate */
	ax = pitchrate;
	/* mov	cx,DAMP2 */
	cx = 1;
	/* call	DampRate */
	CALL(damprate, 0);
	/* mov	PitchRate,dx */
	pitchrate = dx;
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
	// 0 ;DeltaPRate = PitchRate * DeltaTime
	/* mov	DeltaPRate,dx */
	deltaprate = dx;
	// 0 ;* flip pitch direction if pitch over top / bottom
	/* add	dx,PFine */
	ADD(dx, pfine);
	/* cmp	dx,128*128	;pitch <= 90 degs? */
	CMP(dx, 128*128);
	/* jbe	@F		;yes -> */
	if ((dw)(dx) <= (dw)(128*128)) {goto dummylabel83;}
	/* cmp	dx,384*128	;pitch >= -90 degs */
	CMP(dx, 384*128);
	/* jae	@F		;yes -> */
	if ((dw)(dx) >= (dw)(384*128)) {goto dummylabel83;}
	/* neg	PitchRate */
	NEG(pitchrate);
	// 0 ;----------------
	// 0 ;* sort roll rate
	// 0 ;----------------
	// 0 ;* if CrntWingVal <= SWEEP_A_45 then
	// 0 ;*    roll to steady state position wrt wing sweep
	// 0 ;* else
	// 0 ;*    continuous roll (set roll rate wrt wing sweep)
	// 0 ;* end
dummylabel83:
	// 4737 
	/* @@:		mov	ax,CrntWingVal */
	ax = crntwingval;
	/* cmp	ax,SWEEP_A_45	;wing sweep <= 45 degs? */
	CMP(ax, 333);
	/* ja	ContSpinRoll	;no -> */
	if ((dw)(ax) > (dw)(333)) {goto contspinroll;}
	// 0 ;* steady state roll:-
	// 0 ;* calc roll angle wrt wing sweep
	// 0 ;*
	// 0 ;* roll angle = 200 + CrntWingVal * 24
	// 0 ;*
	// 0 ;*            = 200 .. 8192 fine pdegs
	// 0 ;*
	// 0 ;*            = 1 .. 45 degs
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	dx,ax */
	dx = ax;
	/* shl	ax,1		;*16 */
	SHL(ax, 1);
	/* add	ax,dx		;CrntWingVal * 24 */
	ADD(ax, dx);
	/* add	ax,200		;200 + CrntWingVal * 24 */
	ADD(ax, 200);
	// 0 ;* roll angle * sign(HdgRate)
	/* mov	dx,HdgRate */
	dx = hdgrate;
	/* test	dx,dx	  	;clk-wise or aclk-wise roll? */
	TEST(dx, dx);
	/* jns	@F		;clk-wise -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel84;}
	/* neg	ax */
	NEG(ax);
	// 0 ;* if erect then
	// 0 ;*    steady state roll = 0 * 128 + roll angle * sign(HdgRate)
	// 0 ;* else
	// 0 ;*    steady state roll = 256 * 128 + roll angle * sign(HdgRate)
	// 0 ;* end
dummylabel84:
	// 4739 
	/* @@:		mov	dx,M_CosR */
	dx = m_cosr;
	/* test	dx,dx		;erect or inverted? */
	TEST(dx, dx);
	/* jns	@F		;erect -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel85;}
	/* add	ax,256*128 */
	ADD(ax, 256*128);
	// 0 ;* roll rate = steady state roll - current roll
dummylabel85:
	// 4741 
	/* @@:		sub	ax,RFine */
	SUB(ax, rfine);
	/* jmp	DampSpinRoll */
	goto dampspinroll;
	// 0 ;* continuous roll rate:-
	// 0 ;*
	// 0 ;* roll rate = (3407 + (CrntWingVal - SWEEP_A_45) * 80) * sign(HdgRate)
	// 0 ;*
	// 0 ;*           = 3407 .. 32767 (fine pdegs / sec)
	// 0 ;*
	// 0 ;*           = 19 .. 180 degs / sec
contspinroll:
	// 4743 
	/* ContSpinRoll:	sub	ax,SWEEP_A_45 */
	SUB(ax, 333);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	dx,ax */
	dx = ax;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	ax,dx		;(CrntWingVal - SWEEP_A_45) * 80 */
	ADD(ax, dx);
	/* add	ax,3407		;3407 + (CrntWingVal - SWEEP_A_45) * 80 */
	ADD(ax, 3407);
	/* mov	dx,HdgRate */
	dx = hdgrate;
	/* test	dx,dx		;clk-wise or aclk-wise roll? */
	TEST(dx, dx);
	/* jns	DampSpinRoll	;clk-wise -> */
	if ((short)((dx & dx)) >= 0) {goto dampspinroll;}
	/* neg	ax */
	NEG(ax);
dampspinroll:
	// 4745 
	/* DampSpinRoll:	mov	dx,ax		;dx = new roll rate */
	dx = ax;
	/* mov	ax,RollRate	;ax = old roll rate */
	ax = rollrate;
	/* mov	cx,DAMP2 */
	cx = 1;
	/* call	DampRate */
	CALL(damprate, 0);
	/* mov	RollRate,dx */
	rollrate = dx;
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
	// 0 ;DeltaRRate = RollRate * DeltaTime
	/* mov	DeltaRRate,dx */
	deltarrate = dx;
	/* jmp	CalcRatesExit */
	goto calcratesexit;
	// 0 ;---------------------
	// 0 ;* spin recovery rates
	// 0 ;---------------------
recoveryrates:
	// 4747 
	// 0 ;-------------------------------------
	// 0 ;* check for unexpected stall recovery
	// 0 ;-------------------------------------
	/* mov	al,StallFlag1 */
	al = stallflag1;
	/* test	al,al		;recovered from stall? */
	TEST(al, al);
	/* jnz	@F		;no -> */
	if ((al & al) != 0) {goto dummylabel86;}
	/* mov	SpinFlag,0	;stop spin */
	spinflag = 0;
	/* xor	ax,ax		;set rates to 0 */
	XOR(ax, ax);
	/* mov	HdgRate,ax */
	hdgrate = ax;
	/* mov	DeltaHRate,ax */
	deltahrate = ax;
	/* mov	PitchRate,ax */
	pitchrate = ax;
	/* mov	DeltaPRate,ax */
	deltaprate = ax;
	/* mov	RollRate,ax */
	rollrate = ax;
	/* mov	DeltaRRate,ax */
	deltarrate = ax;
	/* jmp	CalcRatesExit */
	goto calcratesexit;
	// 0 ;----------------------------
	// 0 ;* sort recovery heading rate - reduce heading rate to 0 degs / sec
	// 0 ;----------------------------
dummylabel86:
	// 4749 
	/* @@:		mov	ax,40*128	;approx 30 degs / sec decrease */
	ax = 40*128;
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	/* mov	ax,HdgRate */
	ax = hdgrate;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* sub	ax,bp		;reduce heading rate to 0 degs / sec */
	SUB(ax, bp);
	/* ja	@F		;not reached zero -> */
	if ((!CF && !ZF)) {goto dummylabel87;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	SpinFlag,0	;stop spin */
	spinflag = 0;
dummylabel87:
	// 4751 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	HdgRate,ax */
	hdgrate = ax;
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	// 0 ;DeltaHRate = HdgRate * DeltaTime
	/* mov	DeltaHRate,dx */
	deltahrate = dx;
	// 0 ;--------------------------
	// 0 ;* sort recovery pitch rate - aim for MaxPitchDown
	// 0 ;--------------------------
	/* mov	dx,MaxPitchDown */
	dx = maxpitchdown;
	/* sub	dx,PFine	;dx = new pitch rate */
	SUB(dx, pfine);
	/* mov	ax,PitchRate	;ax = old pitch rate */
	ax = pitchrate;
	/* mov	cx,DAMP2 */
	cx = 1;
	/* call	DampRate */
	CALL(damprate, 0);
	/* mov	PitchRate,dx */
	pitchrate = dx;
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
	// 0 ;DeltaPRate = PitchRate * DeltaTime
	/* mov	DeltaPRate,dx */
	deltaprate = dx;
	// 0 ;* flip pitch direction if pitch over top / bottom
	/* add	dx,PFine */
	ADD(dx, pfine);
	/* cmp	dx,128*128	;pitch <= 90 degs? */
	CMP(dx, 128*128);
	/* jbe	@F		;yes -> */
	if ((dw)(dx) <= (dw)(128*128)) {goto dummylabel88;}
	/* cmp	dx,384*128	;pitch >= -90 degs */
	CMP(dx, 384*128);
	/* jae	@F		;yes -> */
	if ((dw)(dx) >= (dw)(384*128)) {goto dummylabel88;}
	/* neg	PitchRate */
	NEG(pitchrate);
	// 0 ;-------------------------
	// 0 ;* sort recovery roll rate - wash out wrt erect / inverted
	// 0 ;-------------------------
dummylabel88:
	// 4753 
	/* @@:  		mov	ax,M_CosR */
	ax = m_cosr;
	/* test	ax,ax		;erect or inverted? */
	TEST(ax, ax);
	/* mov	ax,0		;assume erect */
	ax = 0;
	/* jns	@F   		;erect -> */
	if (!SF) {goto dummylabel89;}
	/* mov	ax,RFine */
	ax = rfine;
	/* cwd			;dx = sign(roll) */
	CWD;
	/* mov	ax,32767	;ax = 32767 * sign(roll) */
	ax = 32767;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
dummylabel89:
	// 4755 
	/* @@:	      	sub	ax,RFine */
	SUB(ax, rfine);
	/* mov	dx,ax		;new roll rate */
	dx = ax;
	/* mov	ax,RollRate	;old roll rate */
	ax = rollrate;
	/* mov	cx,DAMP2 */
	cx = 1;
	/* call	DampRate */
	CALL(damprate, 0);
	/* mov	RollRate,dx */
	rollrate = dx;
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
	// 0 ;DeltaRRate = RollRate * DeltaTime
	/* mov	DeltaRRate,dx */
	deltarrate = dx;
calcratesexit:
	// 4757 
	/* CalcRatesExit:	ret */
	RETN(0);
calcangles:
	// 7568 
	// 0 ;-------------------------------
	// 0 ;* update HFine, PFine and RFine
	// 0 ;-------------------------------
edummylabel13:
	// 4759 
	/* mov	ax,HFine */
	ax = hfine;
	/* add	ax,DeltaHRate	;HFine + DeltaHRate */
	ADD(ax, deltahrate);
	/* mov	bx,PFine */
	bx = pfine;
	/* add	bx,DeltaPRate	;PFine + DeltaPRate */
	ADD(bx, deltaprate);
	/* mov	cx,RFine */
	cx = rfine;
	/* add	cx,DeltaRRate	;RFine + DeltaRRate */
	ADD(cx, deltarrate);
	/* mov	dx,PitchFlip */
	dx = pitchflip;
	/* call	LimitPFine */
	CALLF(limitpfine, 0);
	/* mov	HFine,ax */
	hfine = ax;
	/* mov	PFine,bx */
	pfine = bx;
	/* mov	RFine,cx */
	rfine = cx;
	/* mov	PitchFlip,dx */
	pitchflip = dx;
	// 0 ;--------------------------
	// 0 ;* calc Hdg, Pitch and Roll
	// 0 ;--------------------------
	// 0 ;* Hdg = HFine / 128
	/* mov	dx,cx */
	dx = cx;
	/* mov	cl,7		;/128 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	Hdg,ax */
	hdg = ax;
	// 0 ;* Pitch = PFine / 128
	/* shr	bx,cl */
	SHR(bx, cl);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* mov	Pitch,bx */
	pitch = bx;
	// 0 ;* Roll = RFine / 128
	/* shr	dx,cl */
	SHR(dx, cl);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* and	dx,001ffh */
	AND(dx, 0x001ff);
	/* mov	Roll,dx */
	roll = dx;
	// 0 ;------------------
	// 0 ;* calc trig angles
	// 0 ;------------------
	// 0 ;* heading
	/* mov	bx,Hdg */
	bx = hdg;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	M_SinH,ax */
	m_sinh = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	M_CosH,ax */
	m_cosh = ax;
	// 0 ;* pitch
	/* mov	bx,Pitch */
	bx = pitch;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	M_SinP,ax */
	m_sinp = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	M_CosP,ax */
	m_cosp = ax;
	// 0 ;* roll
	/* mov	bx,Roll */
	bx = roll;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	M_SinR,ax */
	m_sinr = ax;
	/* mov	ax,CosTable[bx] */
	ax = *(dw*)(((db*)&costable)+bx);
	/* mov	M_CosR,ax */
	m_cosr = ax;
	/* ret */
	RETN(0);
calcthrust:
	// 7654 
	// 0 ;--------------------
	// 0 ;* calc Rpm1 and Rpm2
	// 0 ;--------------------
	// 0 ;* calc rpm delta max wrt frame rate
edummylabel14:
	// 4761 
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* mov	dx,RPM_DELTA_MAX */
	dx = 1894;
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
	/* mov	si,dx */
	si = dx;
	// 0 ;* calc aiming rpm = IDLE_RPM + Throttle * 37
	/* mov	ax,Throttle */
	ax = throttle;
	/* mov	dx,37 */
	dx = 37;
	/* mul	dx */
	MUL1_2(dx);
	/* add	ax,IDLE_RPM	;IDLE_RPM + Throttle * 37 */
	ADD(ax, 63*256);
	/* mov	di,ax */
	di = ax;
	// 0 ;* calc rpm engine 1
calcrpm1:
	// 4763 
	/* CalcRpm1:	mov	al,SSF_Engine1 */
	al = ssf_engine1;
	/* test	al,al		;engine ok? */
	TEST(al, al);
	/* jnz	SpoolDown1	;no -> */
	if ((al & al) != 0) {goto spooldown1;}
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* test	ax,ax		;out of fuel? */
	TEST(ax, ax);
	/* jz	SpoolDown1	;yes -> */
	if (!(ax & ax)) {goto spooldown1;}
	/* mov	ax,di */
	ax = di;
	/* sub	ax,Rpm1		;rpm delta required = aiming rpm - rpm */
	SUB(ax, rpm1);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(rpm delta req), dx = sign
	/* cmp	ax,si		;abs(rpm delta req) > rpm delta max? */
	CMP(ax, si);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(si)) {goto dummylabel90;}
	/* mov	ax,si */
	ax = si;
dummylabel90:
	// 4765 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	Rpm1,ax		;update rpm */
	ADD(rpm1, ax);
	/* jmp	CalcRpm2 */
	goto calcrpm2;
	// 0 ;* out of fuel or engine failure, spool down to 0% rpm (at faster rate)
spooldown1:
	// 4767 
	/* SpoolDown1:	mov	ax,Rpm1		;rpm delta required */
	ax = rpm1;
	/* mov	dx,si */
	dx = si;
	/* shl	dx,1		;*2 */
	SHL(dx, 1);
	/* shl	dx,1		;rpm delta max * 4 */
	SHL(dx, 1);
	/* cmp	ax,dx		;rpm delta req > rpm delta max? */
	CMP(ax, dx);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(dx)) {goto dummylabel91;}
	/* mov	ax,dx */
	ax = dx;
dummylabel91:
	// 4769 
	/* @@:		sub	Rpm1,ax		;update rpm */
	SUB(rpm1, ax);
	// 0 ;* calc rpm engine 2
calcrpm2:
	// 4771 
	/* CalcRpm2:	mov	al,SSF_Engine2 */
	al = ssf_engine2;
	/* test	al,al		;engine ok? */
	TEST(al, al);
	/* jnz	SpoolDown2	;no -> */
	if ((al & al) != 0) {goto spooldown2;}
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* test	ax,ax		;out of fuel? */
	TEST(ax, ax);
	/* jz	SpoolDown2	;yes -> */
	if (!(ax & ax)) {goto spooldown2;}
	/* mov	ax,di */
	ax = di;
	/* sub	ax,Rpm2		;rpm delta required = aiming rpm - rpm */
	SUB(ax, rpm2);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(rpm delta req), dx = sign
	/* cmp	ax,si		;abs(rpm delta req) > rpm delta max? */
	CMP(ax, si);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(si)) {goto dummylabel92;}
	/* mov	ax,si */
	ax = si;
dummylabel92:
	// 4773 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	Rpm2,ax		;update rpm */
	ADD(rpm2, ax);
	/* jmp	RpmOk */
	goto rpmok;
	// 0 ;* out of fuel or engine failure, spool down to 0% rpm (at faster rate)
spooldown2:
	// 4775 
	/* SpoolDown2:	mov	ax,Rpm2		;rpm delta required */
	ax = rpm2;
	/* mov	dx,si */
	dx = si;
	/* shl	dx,1		;*2 */
	SHL(dx, 1);
	/* shl	dx,1		;rpm delta max * 4 */
	SHL(dx, 1);
	/* cmp	ax,dx		;rpm delta req > rpm delta max? */
	CMP(ax, dx);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(dx)) {goto dummylabel93;}
	/* mov	ax,dx */
	ax = dx;
dummylabel93:
	// 4777 
	/* @@:		sub	Rpm2,ax		;update rpm */
	SUB(rpm2, ax);
	// 0 ;-------------
	// 0 ;* calc Thrust
	// 0 ;-------------
	// 0 ;* thrust wrt rpm tabulated from 63% to 100%
	// 0 ;*
	// 0 ;* @  63% rpm, thrust = 0lbf
	// 0 ;* @ 100% rpm, thrust = 18,000lbf (max dry)
	// 0 ;*
	// 0 ;* reheat = 128 stages of 125lbf each
	// 0 ;*
	// 0 ;* @ 100% rpm with full reheat, thrust = 34,000lbf
	// 0 ;*
	// 0 ;* these thrust values should be halved for each engine
	// 0 ;* engine 1 thrust
rpmok:
	// 4779 
	/* RpmOk:		xor	bp,bp		;assume engine 1 is idling */
	XOR(bp, bp);
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* cmp	ax,IDLE_RPM	;rpm < idle? */
	CMP(ax, 63*256);
	/* jb	SetThrust1	;yes -> */
	if ((dw)(ax) < (dw)(63*256)) {goto setthrust1;}
	// 0 ;* calc thrust developed from engine 1 wrt rpm (look up and interpolate)
	/* sub	ax,IDLE_RPM */
	SUB(ax, 63*256);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xchg	bl,ah */
	XCHG(bl, ah);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bp,ThrustTable[bx] */
	bp = *(dw*)(((db*)&thrusttable)+bx);
	/* cmp	bx,37*2			;100% ? */
	CMP(bx, 37*2);
	/* je	@F			;yes -> */
	if ((dw)(bx) == (dw)(37*2)) {goto dummylabel94;}
	/* mov	dx,ThrustTable[bx+2] */
	dx = *(dw*)(((db*)&thrusttable)+bx+2);
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mul	dx */
	MUL1_2(dx);
	/* shl	al,1		;store 1/2 bit */
	SHL(al, 1);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* adc	bp,ax		;restore 1/2 bit */
	ADC(bp, ax);
	// 0 ;* calc thrust developed from engine 1 wrt reheat
dummylabel94:
	// 4781 
	/* @@:		mov	al,SSF_Engine1 */
	al = ssf_engine1;
	/* test	al,al		;engine ok? */
	TEST(al, al);
	/* jnz	SetThrust1	;no, no reheat thrust -> */
	if ((al & al) != 0) {goto setthrust1;}
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* test	ax,ax		;out of fuel? */
	TEST(ax, ax);
	/* jz	SetThrust1	;yes, no reheat thrust -> */
	if (!(ax & ax)) {goto setthrust1;}
	/* mov	ax,Reheat	;0 .. 128 */
	ax = reheat;
	/* mov	ah,125 */
	ah = 125;
	/* mul	ah */
	MUL1_1(ah);
	/* shr	ax,1		;/2 for one engine */
	SHR(ax, 1);
	/* adc	bp,ax		;(1/2 bit round up) */
	ADC(bp, ax);
	// 0 ;* set thrust and calc eng temp
setthrust1:
	// 4783 
	/* SetThrust1:	mov	Thrust1,bp */
	thrust1 = bp;
	/* mov	dx,bp */
	dx = bp;
	/* mov	al,SSF_Engine1 */
	al = ssf_engine1;
	/* mov	ah,EngFire1 */
	ah = engfire1;
	/* mov	bp,Temp1 */
	bp = temp1;
	/* call	CalcEngTemp */
	CALL(calcengtemp, 0);
	/* mov	Temp1,ax */
	temp1 = ax;
	// 0 ;* engine 2 thrust
	/* xor	bp,bp		;assume engine 2 is idling */
	XOR(bp, bp);
	/* mov	ax,Rpm2 */
	ax = rpm2;
	/* cmp	ax,IDLE_RPM	;rpm < idle? */
	CMP(ax, 63*256);
	/* jb	SetThrust2	;yes -> */
	if ((dw)(ax) < (dw)(63*256)) {goto setthrust2;}
	// 0 ;* calc thrust developed from engine 2 wrt rpm (look up and interpolate)
	/* sub	ax,IDLE_RPM */
	SUB(ax, 63*256);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xchg	bl,ah */
	XCHG(bl, ah);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bp,ThrustTable[bx] */
	bp = *(dw*)(((db*)&thrusttable)+bx);
	/* cmp	bx,37*2			;100% ? */
	CMP(bx, 37*2);
	/* je	@F			;yes -> */
	if ((dw)(bx) == (dw)(37*2)) {goto dummylabel95;}
	/* mov	dx,ThrustTable[bx+2] */
	dx = *(dw*)(((db*)&thrusttable)+bx+2);
	/* sub	dx,bp */
	SUB(dx, bp);
	/* mul	dx */
	MUL1_2(dx);
	/* shl	al,1		;store 1/2 bit */
	SHL(al, 1);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* adc	bp,ax		;restore 1/2 bit */
	ADC(bp, ax);
	// 0 ;* calc thrust developed from engine 2 wrt reheat
dummylabel95:
	// 4785 
	/* @@:		mov	al,SSF_Engine2 */
	al = ssf_engine2;
	/* test	al,al		;engine ok? */
	TEST(al, al);
	/* jnz	SetThrust2	;no, no reheat thrust -> */
	if ((al & al) != 0) {goto setthrust2;}
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* test	ax,ax		;out of fuel? */
	TEST(ax, ax);
	/* jz	SetThrust2	;yes, no reheat thrust -> */
	if (!(ax & ax)) {goto setthrust2;}
	/* mov	ax,Reheat	;0 .. 128 */
	ax = reheat;
	/* mov	ah,125 */
	ah = 125;
	/* mul	ah */
	MUL1_1(ah);
	/* shr	ax,1		;/2 for one engine */
	SHR(ax, 1);
	/* adc	bp,ax		;(1/2 bit round up) */
	ADC(bp, ax);
	// 0 ;* set thrust and calc eng temp
setthrust2:
	// 4787 
	/* SetThrust2:	mov	Thrust2,bp */
	thrust2 = bp;
	/* mov	dx,bp */
	dx = bp;
	/* mov	al,SSF_Engine2 */
	al = ssf_engine2;
	/* mov	ah,EngFire2 */
	ah = engfire2;
	/* mov	bp,Temp2 */
	bp = temp2;
	/* call	CalcEngTemp */
	CALL(calcengtemp, 0);
	/* mov	Temp2,ax */
	temp2 = ax;
	// 0 ;* if spinning and not recovered then
	// 0 ;*    Thrust = 0
	// 0 ;* end
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jz	CalcThrustVar	;no -> */
	if (!(spinflag & 1)) {goto calcthrustvar;}
	/* cmp	Recovery,0	;recovered? */
	CMP(recovery, 0);
	/* je	CalcThrustVar	;yes -> */
	if ((dw)(recovery) == (dw)(0)) {goto calcthrustvar;}
	/* xor	ax,ax		;Thrust = 0 */
	XOR(ax, ax);
	/* jmp	SetThrust */
	goto setthrust;
	// 0 ;* //MOD// 08.05.1992 - Variation of thrust with altitude has been modified
	// 0 ;*                      to prevent the aircraft flying at speeds in excess of
	// 0 ;*                      mach 1 at 36,000ft with max dry thrust only.
	// 0 ;* variation of thrust with altitude
	// 0 ;*
	// 0 ;* if zft < 36,000ft then
	// 0 ;*    thrust = thrust - zft * 0.325
	// 0 ;* else
	// 0 ;*    thrust = thrust - 11700 - (zft - 36000) * 0.656
	// 0 ;* endif
calcthrustvar:
	// 4789 
	/* CalcThrustVar:	mov	ax,ZftLo */
	ax = zftlo;
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	@F */
	if ((dw)(dx) > (dw)(0)) {goto dummylabel96;}
	/* cmp	ax,36000 */
	CMP(ax, 36000);
	/* ja	@F */
	if ((dw)(ax) > (dw)(36000)) {goto dummylabel96;}
	/* mov	dx,21299	;0.325 = 21299 / 65536 */
	dx = 21299;
	/* mul	dx */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* jmp	SortThrust */
	goto sortthrust;
dummylabel96:
	// 4791 
	/* @@:		sub	ax,36000 */
	SUB(ax, 36000);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* jnz	@F		;zft > (65535 + 36000) -> */
	if (dx != 0) {goto dummylabel97;}
	/* mov	dx,42984	;0.656 = 42984 / 65536 */
	dx = 42984;
	/* mul	dx */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,11700 */
	ADC(dx, 11700);
sortthrust:
	// 4793 
	/* SortThrust:	mov	ax,Thrust1 */
	ax = thrust1;
	/* add	ax,Thrust2 */
	ADD(ax, thrust2);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* jnc	SetThrust */
	if (!CF) {goto setthrust;}
dummylabel97:
	// 4795 
	/* @@:		xor	ax,ax */
	XOR(ax, ax);
setthrust:
	// 4797 
	/* SetThrust:	mov	Thrust,ax */
	thrust = ax;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* shr	ax,1		;Thrust4 = Thrust / 4 */
	SHR(ax, 1);
	/* test	ThrustRvrs,1	;thrust reversers on? */
	TEST(thrustrvrs, 1);
	/* jz	@F		;no -> */
	if (!(thrustrvrs & 1)) {goto dummylabel98;}
	/* neg	ax		;Thrust4 = -Thrust4 */
	NEG(ax);
dummylabel98:
	// 4799 
	/* @@:	  	mov	Thrust4,ax */
	thrust4 = ax;
	/* ret */
	RETN(0);
calcfuelflow:
	// 7908 
	// 0 ;--------------------------------------
	// 0 ;* calc fuel consumption wrt engine rpm
	// 0 ;--------------------------------------
	// 0 ;* fuel flow rate wrt rpm:-
	// 0 ;*
	// 0 ;* val = max((rpm - IDLE_RPM) / 256, 0)
	// 0 ;*
	// 0 ;* fuel flow rate = ((val * 763 + 1802) * Rho * DeltaTime) * 4 (32 bit)
	// 0 ;* check if out of fuel
edummylabel15:
	// 4801 
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* or	ax,FuelWtFine	;out of fuel? */
	OR(ax, fuelwtfine);
	/* jnz	@F		;no -> */
	if (ax != 0) {goto dummylabel99;}
	/* xor	si,si		;eng 1 fuel flow = 0 */
	XOR(si, si);
	/* xor	di,di		;eng 2 fuel flow = 0 */
	XOR(di, di);
	/* jmp	DampFuelFlow */
	goto dampfuelflow;
	// 0 ;* keep Rho constant above 36,000ft so that fuel economy does not improve with altitude
dummylabel99:
	// 4803 
	/* @@:		mov	bp,Rho */
	bp = rho;
	/* cmp	bp,RhoTable[36*2] */
	CMP(bp, *(dw*)(((db*)&rhotable)+36*2));
	/* jae	@F */
	if ((dw)(bp) >= (dw)(*(dw*)(((db*)&rhotable)+36*2))) {goto dummylabel100;}
	/* mov	bp,RhoTable[36*2] */
	bp = *(dw*)(((db*)&rhotable)+36*2);
	// 0 ;* engine 1 fuel flow rate wrt rpm
dummylabel100:
	// 4805 
	/* @@:		mov	ax,Rpm1 */
	ax = rpm1;
	/* sub	ax,IDLE_RPM 	;rpm - IDLE_RPM */
	SUB(ax, 63*256);
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
	// 0 ;max((rpm - IDLE_RPM), 0)
	/* mov	al,ah */
	al = ah;
	/* xor	ah,ah		;val = max((rpm - IDLE_RPM) / 256, 0) */
	XOR(ah, ah);
	/* mov	dx,763 */
	dx = 763;
	/* mul	dx		;val * 763 */
	MUL1_2(dx);
	/* add	ax,1802		;val * 763 + 1802 */
	ADD(ax, 1802);
	/* imul	bp		;(val * 763 + 1802) * Rho */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* calc fuel flow lbs / sec * 1024
	/* mov	si,dx */
	si = dx;
	/* shr	si,1 */
	SHR(si, 1);
	/* shr	si,1 */
	SHR(si, 1);
	/* shr	si,1 */
	SHR(si, 1);
	/* shr	si,1 */
	SHR(si, 1);
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx		;(val * 763 + 1802) * Rho * DeltaTime */
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
	/* xor	dx,dx */
	XOR(dx, dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax		;update fuel flow rate total */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* engine 2 fuel flow rate wrt rpm
	/* mov	ax,Rpm2 */
	ax = rpm2;
	/* sub	ax,IDLE_RPM 	;rpm - IDLE_RPM */
	SUB(ax, 63*256);
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
	// 0 ;max((rpm - IDLE_RPM), 0)
	/* mov	al,ah */
	al = ah;
	/* xor	ah,ah		;val = max((rpm - IDLE_RPM) / 256, 0) */
	XOR(ah, ah);
	/* mov	dx,763 */
	dx = 763;
	/* mul	dx		;val * 763 */
	MUL1_2(dx);
	/* add	ax,1802		;val * 763 + 1802 */
	ADD(ax, 1802);
	/* imul	bp		;(val * 763 + 1802) * Rho */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* calc fuel flow lbs / sec * 1024
	/* mov	di,dx */
	di = dx;
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx		;(val * 763 + 1802) * Rho * DeltaTime */
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
	/* xor	dx,dx */
	XOR(dx, dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	bx,ax		;update fuel flow rate total */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	// 0 ;* fuel flow rate wrt reheat:-
	// 0 ;*
	// 0 ;* fuel flow rate = (reheat * 235 * Rho * DeltaTime) * 32 (32 bit)
	// 0 ;* fuel flow rate wrt reheat (any engine)
	/* mov	ax,Reheat */
	ax = reheat;
	/* mov	dx,235 */
	dx = 235;
	/* mul	dx		;reheat * 235 */
	MUL1_2(dx);
	/* imul	bp		;reheat * 235 * Rho */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* calc fuel flow lbs / sec * 1024
	/* mov	bp,dx */
	bp = dx;
	/* shr	bp,1		;/2 (for single engine) */
	SHR(bp, 1);
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	dx		;reheat * 235 * Rho * DeltaTime */
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
	/* xor	dx,dx */
	XOR(dx, dx);
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
	/* test	SSF_Engine1,1	;engine 1 ok? */
	TEST(ssf_engine1, 1);
	/* jnz	@F		;no -> */
	if ((ssf_engine1 & 1) != 0) {goto dummylabel101;}
	/* add	bx,ax		;update fuel flow rate total */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,bp */
	ADD(si, bp);
dummylabel101:
	// 4807 
	/* @@:  		test	SSF_Engine2,1	;engine 2 ok? */
	TEST(ssf_engine2, 1);
	/* jnz	@F		;no -> */
	if ((ssf_engine2 & 1) != 0) {goto dummylabel102;}
	/* add	bx,ax		;update fuel flow rate total */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	di,bp */
	ADD(di, bp);
	// 0 ;* update fuel weight
dummylabel102:
	// 4809 
	/* @@:		test	InfiniteFuel,1	;infinite fuel? */
	TEST(infinitefuel, 1);
	/* jnz	DampFuelFlow	;yes -> */
	if ((infinitefuel & 1) != 0) {goto dampfuelflow;}
	/* sub	FuelWtFine,bx */
	SUB(fuelwtfine, bx);
	/* sbb	FuelWt,cx */
	SBB(fuelwt, cx);
	/* jnc	DampFuelFlow 	;not out of fuel -> */
	if (!CF) {goto dampfuelflow;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	FuelWtFine,ax */
	fuelwtfine = ax;
	/* mov	FuelWt,ax */
	fuelwt = ax;
	// 0 ;* damp fuel flow 1 (frame rate dependant)
dampfuelflow:
	// 4811 
	/* DampFuelFlow: 	mov	ax,si */
	ax = si;
	/* sub	ax,FuelFlow1	;delta = new - old */
	SUB(ax, fuelflow1);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(delta), dx = sign(delta)
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	FuelFlow1,ax	;(new - old) / 4 + old */
	ADD(fuelflow1, ax);
	// 0 ;* damp fuel flow 2 (frame rate dependant)
	/* mov	ax,di */
	ax = di;
	/* sub	ax,FuelFlow2	;delta = new - old */
	SUB(ax, fuelflow2);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(delta), dx = sign(delta)
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	FuelFlow2,ax	;(new - old) / 4 + old */
	ADD(fuelflow2, ax);
	// 0 ;------------------------
	// 0 ;* check for fuel warning
	// 0 ;------------------------
	/* cmp	FuelWt,1000 */
	CMP(fuelwt, 1000);
	/* ja	@F */
	if ((dw)(fuelwt) > (dw)(1000)) {goto dummylabel103;}
	/* or	RedWarnings2,RED_FUEL */
	OR(redwarnings2, 0x80);
dummylabel103:
	// 4813 
	/* @@:		ret */
	RETN(0);
calcdrag:
	// 8117 
	// 0 ;----------------
	// 0 ;* calc DragCoeff
	// 0 ;----------------
	// 0 ;* DragCoeff (CD) = CD0 + KsweepCL^2 + Kgear + Kairbrakes + Kground
	// 0 ;* calc CD0 (profile drag)
edummylabel16:
	// 4815 
	/* mov	si,OFFSET CD0Table */
	si = m2c::near_offset_external(cd0table);
	/* call	CalcSFValue */
	CALL(calcsfvalue, 0);
	/* mov	CD0,ax */
	cd0 = ax;
	/* mov	bp,ax		;set drag coeff */
	bp = ax;
	// 0 ;* calc CL1 (induced drag)
	// 0 ;*
	// 0 ;* if on ground then
	// 0 ;*    CL1[*128] = Kfs * Alpha * 8 * 0.14
	// 0 ;* else
	// 0 ;*    CL1[*128] = (GForce * Weight2 / 0.085 * Vdiv) * 256 / Vdiv
	// 0 ;* end
	/* mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;on ground? */
	TEST(al, al);
	/* jnz	@F		;no -> */
	if ((al & al) != 0) {goto dummylabel104;}
	// 0 ;* calc CL on ground
	// 8143 frac1		=	4588		;0.14 = 4588 / 32768
	// 0 ;0.14 = 4588 / 32768
	/* mov	ax,Kfs */
	ax = kfs;
	/* mov	dx,Alpha */
	dx = alpha;
	/* sal	dx,1		;*2 */
	SAL(dx, 1);
	/* sal	dx,1		;*4 */
	SAL(dx, 1);
	/* sal	dx,1		;Alpha * 8 */
	SAL(dx, 1);
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
	// 0 ;Kfs * Alpha * 8
	/* mov	ax,frac1 */
	ax = 4588;
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
	// 0 ;Kfs * Alpha * 8 * frac1
	/* jmp	SetInducedDrag */
	goto setinduceddrag;
	// 0 ;* calc CL airborne
	// 8166 frac1		=	2785		;0.085 = 2785 / 32768
	// 0 ;0.085 = 2785 / 32768
dummylabel104:
	// 4817 
	/* @@:		mov	ax,Vdiv */
	ax = vdiv;
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,frac1 */
	dx = 2785;
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
	// 0 ;frac1 * Vdiv
	/* mov	ax,GForce */
	ax = gforce;
	/* mov	dx,Weight2 */
	dx = weight2;
	/* imul	dx		;GForce * Weight2 */
	IMUL1_2(dx);
	/* idiv	bx		;GForce * Weight2 / frac1 * Vdiv */
	IDIV2(bx);
	/* cwd			;(GForce * Weight2 / frac1 * Vdiv) * 256 */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* idiv	cx		;(GForce * Weight2 / frac1 * Vdiv) * 256 / Vdiv */
	IDIV2(cx);
	// 0 ;* limit CL to +/-2.9
setinduceddrag:
	// 4819 
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(CL), dx = sign(CL)
	/* cmp	ax,371		;CL < 2.9? */
	CMP(ax, 371);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(371)) {goto dummylabel105;}
	/* mov	ax,371		;limit to 2.9 */
	ax = 371;
dummylabel105:
	// 4821 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	CL1,ax */
	cl1 = ax;
	/* mov	si,ax		;>>>>> store in si <<<<< */
	si = ax;
	// 0 ;* calc Ksweep
	// 0 ;*
	// 0 ;* if CrntWingVal < SWEEP_A_45 then
	// 0 ;*    Ksweep = 0.0848 - (0.0848 - 0.041) * CrntWingVal / SWEEP_A_45
	// 0 ;* else
	// 0 ;*    Ksweep = 0.041 + (0.105 - 0.041) * (CrntWingVal - SWEEP_A_45) / (SWEEP_A_67 - SWEEP_A_45)
	// 0 ;* end
	// 8208 frac1		=	2779		;0.0848 = 2779 / 32768
	// 0 ;0.0848 = 2779 / 32768
	// 8209 frac2		=	1343		;0.041 = 1343 / 32768
	// 0 ;0.041 = 1343 / 32768
	// 8210 frac3		=	3441		;0.105 = 3441 / 32768
	// 0 ;0.105 = 3441 / 32768
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* cmp	ax,SWEEP_A_45	;wing sweep <= 45 degs? */
	CMP(ax, 333);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(333)) {goto dummylabel106;}
	/* mov	dx,frac1-frac2 */
	dx = 2779-1343;
	/* mul	dx		;(frac1 - frac2) * CrntWingVal */
	MUL1_2(dx);
	/* mov	bx,SWEEP_A_45 */
	bx = 333;
	/* div	bx		;(frac1 - frac2) * CrntWingVal / SWEEP_A_45 */
	DIV2(bx);
	/* neg	ax		;-((frac1 - frac2) * CrntWingVal / SWEEP_A_45) */
	NEG(ax);
	/* add	ax,frac1	;frac 1 - (frac1 - frac2) * CrntWingVal / SWEEP_A_45 */
	ADD(ax, 2779);
	/* jmp	SetKsweep */
	goto setksweep;
dummylabel106:
	// 4823 
	/* @@:		sub	ax,SWEEP_A_45	;CrntWingVal - SWEEP_A_45 */
	SUB(ax, 333);
	/* mov	dx,frac3-frac2 */
	dx = 3441-1343;
	/* mul	dx		;(frac3 - frac2) * (CrntWingVal - SWEEP_A_45) */
	MUL1_2(dx);
	/* mov	bx,SWEEP_A_67-SWEEP_A_45 */
	bx = 700-333;
	/* div	bx		;(frac3 - frac2) * (CrntWingVal - SWEEP_A_45) / (SWEEP_A_67 - SWEEP_A_45) */
	DIV2(bx);
	/* add	ax,frac2	;frac2 + (frac3 - frac2) * (CrntWingVal - SWEEP_A_45) / (SWEEP_A_67 - SWEEP_A_45) */
	ADD(ax, 1343);
setksweep:
	// 4825 
	/* SetKSweep:	mov	Ksweep,ax */
	ksweep = ax;
	/* mov	di,ax		;>>>>> store in di <<<<< */
	di = ax;
	// 0 ;* calc KsweepCL^2
	// 0 ;*
	// 0 ;* if abs(CL) <= 181 then
	// 0 ;*    KsweepCL^2 = Ksweep * (CL * CL)	;maintain accuracy when CL is low
	// 0 ;* else
	// 0 ;*    KsweepCL^2 = (Ksweep * CL) * CL	;prevent overflow when CL is high
	// 0 ;* end
	/* mov	ax,si */
	ax = si;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(CL)
	/* cmp	ax,181		;CL low? */
	CMP(ax, 181);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(181)) {goto dummylabel107;}
	// 0 ;* CL low
	/* imul	ax		;CL * CL */
	IMUL1_2(ax);
	/* imul	di */
	IMUL1_2(di);
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
	// 0 ;Ksweep * (CL * CL) [*16384]
	/* jmp	SetKsweepCL2 */
	goto setksweepcl2;
	// 0 ;* CL high
dummylabel107:
	// 4827 
	/* @@:		mov	ax,di */
	ax = di;
	/* imul	si */
	IMUL1_2(si);
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
	// 0 ;Ksweep * CL
	/* imul	si		;(Ksweep * CL) * CL [*16384] */
	IMUL1_2(si);
setksweepcl2:
	// 4829 
	/* SetKsweepCL2:	sal	ax,1		;*2 gives binary fraction */
	SAL(ax, 1);
	/* mov	KsweepCL2,ax */
	ksweepcl2 = ax;
	/* add	bp,ax		;add to drag coeff */
	ADD(bp, ax);
	// 0 ;* Kgear - undercarriage drag
	/* mov	al,Gear */
	al = gear;
	/* test	al,al		;gear down? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel108;}
	/* add	bp,Kgear	;add to drag coeff */
	ADD(bp, 1475);
	// 0 ;* Kairbrakes - airbrake drag
dummylabel108:
	// 4831 
	/* @@:		mov	al,AirBrakes */
	al = airbrakes;
	/* test	al,al		;airbrakes applied? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel109;}
	/* add	bp,Kairbrakes 	;add to drag coeff */
	ADD(bp, 3677);
	// 0 ;* Kground - ground drag
dummylabel109:
	// 4833 
	/* @@:		mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;on ground? */
	TEST(al, al);
	/* jnz	@F		;no -> */
	if ((al & al) != 0) {goto dummylabel110;}
	/* add	bp,Kground    	;add to drag coeff */
	ADD(bp, 2336);
dummylabel110:
	// 4835 
	/* @@:		mov	DragCoeff,bp */
	dragcoeff = bp;
	// 0 ;-----------
	// 0 ;* Calc Drag
	// 0 ;-----------
	// 0 ;* Drag = 0.34 * DragCoeff * Vias^2 / 64 + Kwheelbrakes
	/* mov	ax,Vias */
	ax = vias;
	/* xchg	ax,bp */
	XCHG(ax, bp);
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
	// 0 ;(Vias * DragCoeff)
	/* mov	ax,11141	;0.34 = 11141 / 32768 */
	ax = 11141;
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
	/* mov	ax,dx */
	ax = dx;
	// 0 ;(Vias * 0.34)
	/* imul	bx		;0.34 * DragCoeff * Vias^2 */
	IMUL1_2(bx);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	cx,dx */
	cx = dx;
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* //MOD// 05.11.1992 - Modified for wheels up landing etc.
	// 0 ;* if not airborne and not hit hill then
	// 0 ;*    if gear down then
	// 0 ;*	 if wheelbrakes applied then
	// 0 ;*          if vtas = 0 then
	// 0 ;*             Kwheelbrakes = Kstatic
	// 0 ;* 	    else
	// 0 ;*	       Kwheelbrakes = Krolling
	// 0 ;*	    endif
	// 0 ;*	 else
	// 0 ;*	    if accel < 0 then
	// 0 ;*             Kwheelbrakes = Kfreewheel
	// 0 ;*	    endif
	// 0 ;*       endif
	// 0 ;*    else
	// 0 ;*       Kwheelbrakes = Kwheelsup
	// 0 ;*    endif
	// 0 ;* else
	// 0 ;*    Kwheelbrakes = 0
	// 0 ;* endif
	/* test	HitHill,1	;hit hill? */
	TEST(hithill, 1);
	/* jnz	@F		;yes, ignore airborne flag -> */
	if ((hithill & 1) != 0) {goto dummylabel111;}
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jnz	SetDrag		;yes, ignore brake drag -> */
	if ((airborne1 & 1) != 0) {goto setdrag;}
dummylabel111:
	// 4837 
	/* @@:		mov	ax,Kwheelsup	;assume wheels up landing */
	ax = 34000;
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jz	AddWBrakeDrag	;no -> */
	if (!(gear & 1)) {goto addwbrakedrag;}
	/* test	WheelBrakes,1	;wheelbrakes applied? */
	TEST(wheelbrakes, 1);
	/* jz	@F		;no -> */
	if (!(wheelbrakes & 1)) {goto dummylabel112;}
	/* mov	ax,Kstatic	;assume static */
	ax = 34000;
	/* cmp	Vtas,0		;static? */
	CMP(vtas, 0);
	/* je	AddWBrakeDrag */
	if ((dw)(vtas) == (dw)(0)) {goto addwbrakedrag;}
	/* mov	ax,Krolling */
	ax = 12000;
	/* jmp	AddWBrakeDrag */
	goto addwbrakedrag;
dummylabel112:
	// 4839 
	/* @@:		cmp	Accel,0		;decelerating? */
	CMP(accel, 0);
	/* jg	SetDrag		;no -> */
	if ((short)(accel) > (short)(0)) {goto setdrag;}
	/* mov	ax,Kfreewheel */
	ax = 4000;
addwbrakedrag:
	// 4841 
	/* AddWBrakeDrag:	add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* limit drag to 131,071 (01ffffh)
setdrag:
	// 4843 
	/* SetDrag:	cmp	cx,1		;drag > 131,071? */
	CMP(cx, 1);
	/* jbe	@F		;no -> */
	if ((dw)(cx) <= (dw)(1)) {goto dummylabel113;}
	/* mov	cx,00001h */
	cx = 0x00001;
	/* mov	bx,0ffffh */
	bx = 0x0ffff;
dummylabel113:
	// 4845 
	/* @@:		mov	DragHi,cx */
	draghi = cx;
	/* mov	DragLo,bx */
	draglo = bx;
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* mov	Drag4,bx */
	drag4 = bx;
	/* ret */
	RETN(0);
calcposition:
	// 8396 
	// 0 ;-----------------------------------
	// 0 ;* calc Accel and Vtas when spinning
	// 0 ;-----------------------------------
	// 0 ;* if spinning and not recovered then
	// 0 ;*    Accel = 0
	// 0 ;*    Vtas = max(-(Weight2 * 128 * 8 * M_SinP), 0) + 50 * 8
	// 0 ;* end
edummylabel17:
	// 4847 
	/* mov	al,SpinFlag */
	al = spinflag;
	/* test	al,al		;spinning? */
	TEST(al, al);
	/* jz	CalcAccel	;no -> */
	if (!(al & al)) {goto calcaccel;}
	/* mov	ax,Recovery */
	ax = recovery;
	/* test	ax,ax		;recovered? */
	TEST(ax, ax);
	/* jz	CalcAccel	;yes -> */
	if (!(ax & ax)) {goto calcaccel;}
	// 0 ;* cx, bx = old Vtas for CalcVav calculation
	/* mov	ax,Vtas		;//BUG FIX// */
	ax = vtas;
	/* cwd			;//BUG FIX// */
	CWD;
	/* mov	bx,ax		;//BUG FIX// */
	bx = ax;
	/* mov	cx,dx		;//BUG FIX// */
	cx = dx;
	/* mov	Accel,0 */
	accel = 0;
	// 0 ;* Vtas = max(-(Weight2 / 32 * M_SinP), 0) + 400
	/* mov	ax,Weight2 */
	ax = weight2;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* mov	dx,M_SinP */
	dx = m_sinp;
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
	// 0 ;Weight2 / 32 * M_SinP
	/* neg	ax		;-(Weight2 / 32 * M_SinP) */
	NEG(ax);
	/* cwd			;dx = 00000h (+ve), dx = 0ffffh (-ve) */
	CWD;
	/* not	dx		;dx = 0ffffh (+ve), dx = 00000h (-ve) */
	dx = ~dx;
	/* and	ax,dx		;max(-(Weight2 / 32 * M_SinP), 0) */
	AND(ax, dx);
	/* add	ax,400		;approx 30kts (@ sea level) */
	ADD(ax, 400);
	/* mov	Vtas,ax		;max(-(Weight2 / 32 * M_SinP), 0) + 400 */
	vtas = ax;
	/* mov	VtasFine,0 */
	vtasfine = 0;
	/* jmp	CalcVav */
	goto calcvav;
	// 0 ;------------
	// 0 ;* calc Accel
	// 0 ;------------
	// 0 ;* Accel = (Thrust4 - Drag4 - Weight2 / 2 * M_SinP) * 256 / Weight2
calcaccel:
	// 4849 
	/* CalcAccel:	mov	ax,M_SinP */
	ax = m_sinp;
	/* mov	bp,Weight2 */
	bp = weight2;
	/* shr	bp,1		;Weight2 / 2 */
	SHR(bp, 1);
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
	/* mov	ax,dx */
	ax = dx;
	// 0 ;Weight2 / 2 * M_SinP
	// 0 ;* use 32-bits to avoid possible overflow
	/* cwd */
	CWD;
	/* mov	cx,dx		;cx, bx = Weight2 / 2 * M_SinP */
	cx = dx;
	/* mov	bx,ax */
	bx = ax;
	/* mov	ax,Thrust4 */
	ax = thrust4;
	/* sub	ax,Drag4	;Thrust4 - Drag4 */
	SUB(ax, drag4);
	/* cwd */
	CWD;
	/* sub	ax,bx		;Thrust4 - Drag4 - Weight2 / 2 * M_SinP */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* mov	dl,ah		;(Thrust4 - Drag4 - Weight2 / 2 * M_SinP) * 256 */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* idiv	bp  		;(Thrust4 - Drag4 - Weight2 / 2 * M_SinP) * 256 / Weight2 / 2 */
	IDIV2(bp);
	/* mov	Accel,ax */
	accel = ax;
	// 0 ;-----------
	// 0 ;* calc Vtas
	// 0 ;-----------
	// 0 ;* //MOD// 12.05.1992 - VtasFine added (Vtas not changing when Accel is small
	// 0 ;*                      due to truncation when Accel multiplied by DeltaTime).
	// 0 ;* cx, bx = old Vtas for CalcVav calculation
	/* mov	ax,Vtas */
	ax = vtas;
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* Vtas = Vtas + Accel * DeltaTime
	/* mov	ax,Accel */
	ax = accel;
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	// 0 ;* //MOD// 13.11.1992 - Vtas never allowed < 0 now
	/* add	VtasFine,ax */
	ADD(vtasfine, ax);
	/* adc	Vtas,dx */
	ADC(vtas, dx);
	/* mov	ax,Vtas */
	ax = vtas;
	/* jns	CalcVav */
	if ((short)(vtas) >= 0) {goto calcvav;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Vtas,ax */
	vtas = ax;
	/* mov	VtasFine,ax */
	vtasfine = ax;
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jnz	CalcVav		;yes -> */
	if ((airborne1 & 1) != 0) {goto calcvav;}
	/* mov	Accel,ax */
	accel = ax;
	// 0 ;----------
	// 0 ;* calc Vav
	// 0 ;----------
	// 0 ;* Vav = (new Vtas + old Vtas) / 2
	// 0 ;* ax = new Vtas
	// 0 ;* cx, bx = sign extended old Vtas
calcvav:
	// 4851 
	/* CalcVav:	cwd	     		;dx, ax = sign extend new Vtas */
	CWD;
	/* add	ax,bx */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* sar	dx,1		;(new Vtas + old Vtas) / 2 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	Vav,ax */
	vav = ax;
	// 0 ;------------
	// 0 ;* calc Mach1
	// 0 ;------------
	// 0 ;* if zft < 36,096ft then
	// 0 ;*    Mach1 = 1123 - 0.0165 * zft / 4 = 1123 - 541 / 32768 * zft / 4
	// 0 ;* else
	// 0 ;*    Mach1 = 974
	// 0 ;* end
	/* mov	bx,974		;assume zft >= 36,096ft */
	bx = 974;
	/* cmp	ZftHi,0		;zft > 65,535? */
	CMP(zfthi, 0);
	/* jne	@F		;yes -> */
	if ((dw)(zfthi) != (dw)(0)) {goto dummylabel114;}
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* cmp	ax,36096	;zft >= 36,096? */
	CMP(ax, 36096);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(36096)) {goto dummylabel114;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	dx,541 */
	dx = 541;
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
	// 0 ;541 / 32768 * zft / 4
	/* mov	bx,1123 */
	bx = 1123;
	/* sub	bx,dx		;1123 - 541 / 32768 * zft / 4 */
	SUB(bx, dx);
dummylabel114:
	// 4853 
	/* @@:		mov	Mach1,bx */
	mach1 = bx;
	// 0 ;--------------
	// 0 ;* calc MachNum
	// 0 ;--------------
	// 0 ;* MachNum [*16] = Vtas [*8] * 2 / Mach1
	/* mov	ax,Vtas */
	ax = vtas;
	// 0 ;* ensure Vtas >= 0
	/* test	ax,ax		;Vtas >= 0? */
	TEST(ax, ax);
	/* jns	@F		;yes -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel115;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel115:
	// 4855 
	/* @@:		cwd */
	CWD;
	/* shl	ax,1		;Vtas * 2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* idiv	bx		;Vtas * 2 / Mach1 */
	IDIV2(bx);
	/* mov	MachNum,ax */
	machnum = ax;
	// 0 ;-----------------------
	// 0 ;* calc XSec, Xft, XFine
	// 0 ;-----------------------
	// 0 ;* VavX = Vav * M_CosP * M_SinH
	// 0 ;*
	// 0 ;* Xft, XFine = Xft, XFine + VavX * DeltaTime * 8192
	/* mov	ax,Vav */
	ax = vav;
	/* mov	dx,M_CosP */
	dx = m_cosp;
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
	// 0 ;Vav * M_CosP >>>>> store in bp <<<<<
	/* mov	ax,M_SinH */
	ax = m_sinh;
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
	// 0 ;Vav * M_CosP * M_SinH
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
	// 0 ;VavX * DeltaTime
	/* cwd	  		;VavX * DeltaTime * 256 */
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
	/* add	XFine,ax */
	ADD(xfine, ax);
	/* adc	Xft,dx */
	ADC(xft, dx);
	// 0 ;* if airborne then take account of crosswinds
	/* test	Airborne1,1 */
	TEST(airborne1, 1);
	/* jz	@F */
	if (!(airborne1 & 1)) {goto dummylabel116;}
	/* mov	ax,XWindDXFine */
	ax = xwinddxfine;
	/* mov	dx,XWindDXft */
	dx = xwinddxft;
	/* add	XFine,ax */
	ADD(xfine, ax);
	/* adc	Xft,dx */
	ADC(xft, dx);
dummylabel116:
	// 4857 
	// 0 ;* update XSec (keep Xft in range)
	/* mov	dx,XSec */
	dx = xsec;
	/* mov	ax,Xft */
	ax = xft;
	/* cmp	ax,8192		;xft < 8192? */
	CMP(ax, 8192);
	/* jl	@F		;yes -> */
	if ((short)(ax) < (short)(8192)) {goto dummylabel117;}
	/* sub	ax,16384 */
	SUB(ax, 16384);
	/* inc	XSec */
	INC(xsec);
dummylabel117:
	// 4859 
	/* @@:		cmp	ax,-8192	;xft >= -8192? */
	CMP(ax, -8192);
	/* jge	@F		;yes -> */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel118;}
	/* add	ax,16384 */
	ADD(ax, 16384);
	/* dec	XSec */
	DEC(xsec);
dummylabel118:
	// 4861 
	/* @@:		mov	Xft,ax */
	xft = ax;
	// 0 ;* check for new sector
	/* xor	al,al		;assume not changed sector */
	XOR(al, al);
	/* cmp	dx,XSec		;changed sector? */
	CMP(dx, xsec);
	/* je	@F		;no -> */
	if ((dw)(dx) == (dw)(xsec)) {goto dummylabel119;}
	/* mov	al,1 */
	al = 1;
dummylabel119:
	// 4863 
	/* @@:		mov	NewSector,al */
	newsector = al;
	// 0 ;-----------------------
	// 0 ;* calc YSec, Yft, YFine
	// 0 ;-----------------------
	// 0 ;* VavY = Vav * M_CosP * M_CosH
	// 0 ;*
	// 0 ;* Yft, YFine = Yft, YFine + VavY * DeltaTime * 8192
	/* mov	ax,M_CosH */
	ax = m_cosh;
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
	// 0 ;Vav * M_CosP * M_CosH
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
	// 0 ;VavY * DeltaTime
	/* cwd	  		;VavY * DeltaTime * 256 */
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
	/* add	YFine,ax */
	ADD(yfine, ax);
	/* adc	Yft,dx */
	ADC(yft, dx);
	// 0 ;* if airborne then take account of crosswinds
	/* test	Airborne1,1 */
	TEST(airborne1, 1);
	/* jz	@F */
	if (!(airborne1 & 1)) {goto dummylabel120;}
	/* mov	ax,XWindDYFine */
	ax = xwinddyfine;
	/* mov	dx,XWindDYft */
	dx = xwinddyft;
	/* add	YFine,ax */
	ADD(yfine, ax);
	/* adc	Yft,dx */
	ADC(yft, dx);
dummylabel120:
	// 4865 
	// 0 ;* update YSec (keep Yft in range)
	/* mov	dx,YSec */
	dx = ysec;
	/* mov	ax,Yft */
	ax = yft;
	/* cmp	ax,8192		;yft < 8192? */
	CMP(ax, 8192);
	/* jl	@F		;yes -> */
	if ((short)(ax) < (short)(8192)) {goto dummylabel121;}
	/* sub	ax,16384 */
	SUB(ax, 16384);
	/* dec	YSec */
	DEC(ysec);
dummylabel121:
	// 4867 
	/* @@:		cmp	ax,-8192	;yft >= -8192? */
	CMP(ax, -8192);
	/* jge	@F		;yes -> */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel122;}
	/* add	ax,16384 */
	ADD(ax, 16384);
	/* inc	YSec */
	INC(ysec);
dummylabel122:
	// 4869 
	/* @@:		mov	Yft,ax */
	yft = ax;
	// 0 ;* check for new sector
	/* cmp	dx,YSec		;changed sector? */
	CMP(dx, ysec);
	/* je	@F		;no -> */
	if ((dw)(dx) == (dw)(ysec)) {goto dummylabel123;}
	/* mov	NewSector,1 */
	newsector = 1;
dummylabel123:
	// 4871 
	/* @@:		ret */
	RETN(0);
calcaltitude:
	// 8726 
	// 0 ;------------
	// 0 ;* calc Vtrim
	// 0 ;------------
	// 0 ;* //MOD// 08.05.1992 - Vtrim(delta) modified to correct alpha at take off.
	// 0 ;* Vtrim = Vtrim(33,000lbwt) + Vtrim(delta) + Vtrim(inverted)
	// 0 ;*
	// 0 ;* Vtrim(33,000lbwt) tabulated
	// 0 ;*
	// 0 ;* Vtrim(delta) = Weight / 32 - 128 * 8
	// 0 ;*
	// 0 ;* Vtrim(inverted) = 32 * 8
edummylabel18:
	// 4873 
	/* mov	si,OFFSET VtrimTable */
	si = m2c::near_offset_external(vtrimtable);
	/* call	CalcSFValue */
	CALL(calcsfvalue, 0);
	/* mov	bp,ax		;Vtrim(33,000lbwt) */
	bp = ax;
	/* mov	ax,Weight */
	ax = weight;
	/* mov	cl,5		;/32 */
	cl = 5;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* sub	ax,128*8 */
	SUB(ax, 128*8);
	/* add	bp,ax		;Vtrim(33,000lbwt) + Vtrim(delta) */
	ADD(bp, ax);
	/* mov	ax,M_CosR */
	ax = m_cosr;
	/* test	ax,ax		;inverted flight? */
	TEST(ax, ax);
	/* jns	@F		;no -> */
	if ((short)((ax & ax)) >= 0) {goto dummylabel124;}
	/* add	bp,32*8		;Vtrim(33,000lbwt) + Vtrim(delta) + Vtrim(inverted) */
	ADD(bp, 32*8);
dummylabel124:
	// 4875 
	/* @@:		mov	Vtrim,bp */
	vtrim = bp;
	// 0 ;-----------
	// 0 ;* calc Zdot
	// 0 ;-----------
	// 0 ;* if spinning and not recovered then
	// 0 ;*    Zdot = -(Weight2 / 32768 * (250 + CrntWingVal / 2)) * 8
	// 0 ;* else
	// 0 ;*    Zdot = sink rate + climb rate
	// 0 ;* end
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jz	@F		;no -> */
	if (!(spinflag & 1)) {goto dummylabel125;}
	/* cmp	Recovery,0	;recovered? */
	CMP(recovery, 0);
	/* je	@F		;yes -> */
	if ((dw)(recovery) == (dw)(0)) {goto dummylabel125;}
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* add	ax,250		;250 + CrntWingVal / 2 */
	ADD(ax, 250);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* neg	ax		;-(250 + CrntWingVal / 2) * 8 */
	NEG(ax);
	/* mov	dx,Weight2 */
	dx = weight2;
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
	// 0 ;-(Weight2 / 32768 * (250 + CrntWingVal / 2)) * 8
	/* jmp	SetZdot */
	goto setzdot;
	// 0 ;* //MOD// 08.05.1992 - Sink rate modified to use Vtas in place of Vias.
	// 0 ;*                      This is so the aircraft can fly straight and level
	// 0 ;*                      at altitude (36,000ft) with max dry thrust.
	// 0 ;* Zdot = sink rate + climb rate
	// 0 ;*
	// 0 ;* sink rate = min(Vtas - Vtrim, 0) * M_CosP / 4 (only applies when Vtas < Vtrim)
	// 0 ;*
	// 0 ;* climb rate = Vtas * sin(PFine)
dummylabel125:
	// 4877 
	/* @@:		xor	bp,bp		;assume sink rate = 0 */
	XOR(bp, bp);
	/* mov	ax,Vtas */
	ax = vtas;
	/* sub	ax,Vtrim	;Vtas < Vtrim */
	SUB(ax, vtrim);
	/* jns	@F		;no -> */
	if ((short)(ax) >= 0) {goto dummylabel126;}
	/* mov	dx,M_CosP */
	dx = m_cosp;
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
	// 0 ;min(Vtas - Vtrim, 0) * M_CosP
	/* sar	bp,1		;/2 */
	SAR(bp, 1);
	/* sar	bp,1		;min(Vtas - Vtrim, 0) * M_CosP / 4 */
	SAR(bp, 1);
	// 0 ;* note: sin(PFine) required for precise control when auto-terrain following
dummylabel126:
	// 4879 
	/* @@:		push	bp */
	PUSH(bp);
	/* mov	ax,PFine */
	ax = pfine;
	/* call	CalcSineFine */
	CALLF(calcsinefine, 0);
	/* mov	dx,Vtas */
	dx = vtas;
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
	// 0 ;Vtas * sin(PFine)
	/* pop	bp */
	POP(bp);
	/* add	dx,bp		;sink rate + climb rate */
	ADD(dx, bp);
setzdot:
	// 4881 
	/* SetZdot:	mov	Zdot,dx */
	zdot = dx;
	// 0 ;--------------------------
	// 0 ;* calc ZftHi, ZftLo, ZFine
	// 0 ;--------------------------
	// 0 ;* if airborne or Zdot > 0 then
	// 0 ;*    ZftHi, ZftLo, ZFine = ZftHi, ZftLo, ZFine + (Zdot * DeltaTime * 8192)
	// 0 ;* end
	/* mov	al,Airborne1 */
	al = airborne1;
	/* test	al,al		;airborne? */
	TEST(al, al);
	/* jnz	@F		;yes -> */
	if ((al & al) != 0) {goto dummylabel127;}
	/* test	dx,dx		;sinking? */
	TEST(dx, dx);
	/* js	SortAirborne	;yes -> */
	if ((short)((dx & dx)) < 0) {goto sortairborne;}
	// 0 ;* sort computation order wrt accuracy and overflow
dummylabel127:
	// 4883 
	/* @@:		cmp	dx,127 */
	CMP(dx, 127);
	/* jg	@F		;method 2 -> */
	if ((short)(dx) > (short)(127)) {goto dummylabel128;}
	/* cmp	dx,-128 */
	CMP(dx, -128);
	/* jl	@F		;method 2 -> */
	if ((short)(dx) < (short)(-128)) {goto dummylabel128;}
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
dummylabel128:
	// 4885 
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
	// 4887 
	/* add	ZFine,ax */
	ADD(zfine, ax);
	/* adc	ZftLo,dx */
	ADC(zftlo, dx);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* adc	ZftHi,dx */
	ADC(zfthi, dx);
	/* jns	SortAirborne */
	if ((short)(zfthi) >= 0) {goto sortairborne;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	ZftHi,ax */
	zfthi = ax;
	/* mov	ZftLo,ax */
	zftlo = ax;
	/* mov	ZFine,ax */
	zfine = ax;
	// 0 ;-----------------------------
	// 0 ;* test if airborne (zft <> 0)
	// 0 ;-----------------------------
sortairborne:
	// 4889 
	/* SortAirborne:	mov	ax,ZftLo */
	ax = zftlo;
	/* or	ax,ZftHi */
	OR(ax, zfthi);
	/* jz	@F		;on ground -> */
	if (ax == 0) {goto dummylabel129;}
	/* mov	al,1		;airborne */
	al = 1;
dummylabel129:
	// 4891 
	/* @@:		mov	ah,al */
	ah = al;
	/* xchg	ah,Airborne1 */
	XCHG(ah, airborne1);
	/* mov	Airborne2,ah */
	airborne2 = ah;
	// 0 ;* TouchDown = Airborne2 and not(Airborne1) (1 -> 0 transition)
	/* not	al */
	al = ~al;
	/* and	al,ah */
	AND(al, ah);
	/* mov	TouchDown,al */
	touchdown = al;
	/* jnz	__m2c_macrolocal_346_skip */
	if (al != 0) {goto __m2c_macrolocal_346_skip;}
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
__m2c_macrolocal_346_skip:
	// 4893 
	// 0 ;--------------
	// 0 ;* touched down
	// 0 ;--------------
	/* xor	ax,ax */
	XOR(ax, ax);
	// 0 ;* clear previous landing flags
	/* mov	Landing,al */
	landing = al;
	// 0 ;* set aircraft level
	/* mov	Roll,ax */
	roll = ax;
	/* mov	RFine,ax */
	rfine = ax;
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jz	@F		;no -> */
	if (!(spinflag & 1)) {goto dummylabel130;}
	/* mov	Pitch,ax */
	pitch = ax;
	/* mov	PFine,ax */
	pfine = ax;
	// 0 ;* stop spinning (in case no collisions)
	/* mov	SpinFlag,al */
	spinflag = al;
	/* mov	Recovery,ax */
	recovery = ax;
	// 0 ;* check if landed on road
dummylabel130:
	// 4895 
	/* @@:		mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	SurfaceCheck */
	CALLF(surfacecheck, 0);
	/* cmp	ax,SURFACE_ROAD	;landed on a road? */
	CMP(ax, 8);
	/* jne	DidntLandOnRoad		;no -> */
	if ((dw)(ax) != (dw)(8)) {goto didntlandonroad;}
	/* or	Landing,LAND_ROAD */
	OR(landing, 0x10);
	// 0 ;		;Refill by hitting "3" key!
	// 0 ;		KTEST KF_HillText
	// 0 ;		jz @F
	// 0 ;		KCLEAR KF_HillText
	// 0 ;		;Check if out of fuel?
	// 0 ;		mov	ax,FuelWt
	// 0 ;		test	ax,ax		;out of fuel?
	// 0 ;		jz	RefuelPlease	;yes ->
	// 0 ;		jmp SkipRefuelPlease
	// 0 ;RefuelPlease:
	// 0 ;mov	FuelWt,2000
	// 0 ;SkipRefuelPlease:
	// 0 ;@@:
	// 0 ;* no collisions?
didntlandonroad:
	// 4897 
	/* DidntLandOnRoad:		test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jz	__m2c_macrolocal_347_skip */
	if (!(nocollisions & 1)) {goto __m2c_macrolocal_347_skip;}
	/* jmp	ContLanding */
	goto contlanding;
__m2c_macrolocal_347_skip:
	// 4899 
	// 0 ;yes ->
	// 0 ;* check approx attitude for landing
	/* cmp	M_CosR,23170	;abs(roll) > 45 degs? */
	CMP(m_cosr, 23170);
	/* jl	@F		;yes -> */
	if ((short)(m_cosr) < (short)(23170)) {goto dummylabel131;}
	/* cmp	PFine,-1820	;pitch < -10degs? */
	CMP(pfine, -1820);
	/* jl	@F		;yes -> */
	if ((short)(pfine) < (short)(-1820)) {goto dummylabel131;}
	/* cmp	PFine,5461	;pitch > 30degs? */
	CMP(pfine, 5461);
	/* jle	AttOk		;no -> */
	if ((short)(pfine) <= (short)(5461)) {goto attok;}
dummylabel131:
	// 4901 
	/* mov	al,DIE_CRASH_GND */
	al = 5;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
	// 0 ;* check sink rate:-
	// 0 ;*
	// 0 ;* gear down: crash if sink rate < -40ft/sec
	// 0 ;* gear up  : crash if sink rate < -10ft/sec
attok:
	// 4903 
	/* AttOk:		mov	ax,-40*8	;assume gear down */
	ax = -40*8;
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jnz	@F		;yes -> */
	if ((gear & 1) != 0) {goto dummylabel132;}
	/* mov	ax,-10*8 */
	ax = -10*8;
dummylabel132:
	// 4905 
	/* @@:		cmp	ax,Zdot		;sink rate too high? */
	CMP(ax, zdot);
	/* jle	SinkOk		;no -> */
	if ((short)(ax) <= (short)(zdot)) {goto sinkok;}
	/* mov	al,DIE_SINK_HI */
	al = 8;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
	// 0 ;* check roll (wrt wing sweep):-
	// 0 ;*
	// 0 ;* @ 25degs: abs(roll) <= 17degs
	// 0 ;* @ 45degs: abs(roll) <= 18degs
	// 0 ;* @ 67degs: abs(roll) <= 19degs
sinkok:
	// 4907 
	/* SinkOk:		mov	ax,31336	;cos(17) (assume 25degs) */
	ax = 31336;
	/* cmp	CrntWingPos,SWEEP_D_25 */
	CMP(crntwingpos, 0);
	/* je	@F */
	if ((dw)(crntwingpos) == (dw)(0)) {goto dummylabel133;}
	/* mov	ax,31164	;cos(18) (assume 45degs) */
	ax = 31164;
	/* cmp	CrntWingPos,SWEEP_D_45 */
	CMP(crntwingpos, 1);
	/* je	@F */
	if ((dw)(crntwingpos) == (dw)(1)) {goto dummylabel133;}
	/* mov	ax,30983	;cos(19) */
	ax = 30983;
dummylabel133:
	// 4909 
	/* @@:		cmp	ax,M_CosR	;roll too high? */
	CMP(ax, m_cosr);
	/* jle	RollOk		;no -> */
	if ((short)(ax) <= (short)(m_cosr)) {goto rollok;}
	/* mov	al,DIE_ROLL_HI */
	al = 9;
	/* mov	ah,MAJOR_DAMAGE */
	ah = 2;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
	// 0 ;* check for nose wheel collapsed
rollok:
	// 4911 
	/* RollOk:		cmp	PFine,0		;pitched down? */
	CMP(pfine, 0);
	/* jge	NoseOk		;no -> */
	if ((short)(pfine) >= (short)(0)) {goto noseok;}
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jz	@F		;no -> */
	if (!(gear & 1)) {goto dummylabel134;}
	/* mov	Gear,0			;collapse gear */
	gear = 0;
	/* mov	SSF_Gear,1		;damage gear */
	ssf_gear = 1;
	/* or	RedWarnings2,RED_UC	;report damage */
	OR(redwarnings2, 0x40);
	/* mov	al,DIE_NOSE_WHEEL */
	al = 10;
	/* mov	ah,MAJOR_DAMAGE */
	ah = 2;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
dummylabel134:
	// 4913 
	/* mov	al,DIE_CRASH_GND */
	al = 5;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
	// 0 ;* check pitch (wrt wing sweep):-
	// 0 ;*
	// 0 ;* @ 25degs: pitch <= 19degs
	// 0 ;* @ 45degs: pitch <= 18degs
	// 0 ;* @ 67degs: pitch <= 17degs
noseok:
	// 4915 
	/* NoseOk:		mov	ax,3459		;19degs (assume 25degs) */
	ax = 3459;
	/* cmp	CrntWingPos,SWEEP_D_25 */
	CMP(crntwingpos, 0);
	/* je	@F */
	if ((dw)(crntwingpos) == (dw)(0)) {goto dummylabel135;}
	/* mov	ax,3277		;18degs (assume 45degs) */
	ax = 3277;
	/* cmp	CrntWingPos,SWEEP_D_45 */
	CMP(crntwingpos, 1);
	/* je	@F */
	if ((dw)(crntwingpos) == (dw)(1)) {goto dummylabel135;}
	/* mov	ax,3095		;17degs */
	ax = 3095;
dummylabel135:
	// 4917 
	/* @@:		cmp	ax,PFine	;pitch too high? */
	CMP(ax, pfine);
	/* jge	ContLanding	;no -> */
	if ((short)(ax) >= (short)(pfine)) {goto contlanding;}
	/* mov	al,DIE_TAIL_SCRAPE */
	al = 11;
	/* mov	ah,MAJOR_DAMAGE */
	ah = 2;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
	// 0 ;* calc gear collapse threshold (wrt weight):-
	// 0 ;*
	// 0 ;* @32768lbs, threshold = -20ft/sec (*8 scaled)
	// 0 ;* @65535lbs, threshold =  -4ft/sec (*8 scaled)
	// 0 ;*
	// 0 ;* wt = max(weight,32768) - 32768 = 0 .. 32767
	// 0 ;*
	// 0 ;* threshold = -(20 * 8 - wt / 256) = -160 .. -40
contlanding:
	// 4919 
	/* ContLanding:	mov	ax,Weight */
	ax = weight;
	/* sub	ax,32768 */
	SUB(ax, 32768);
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
	// 0 ;0 .. 32767
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1		;expose 1/2 bit */
	SHL(ah, 1);
	/* adc	al,0		;round up */
	ADC(al, 0);
	/* xor	ah,ah		;0 .. 128 */
	XOR(ah, ah);
	/* mov	bp,20*8 */
	bp = 20*8;
	/* sub	bp,ax */
	SUB(bp, ax);
	/* neg	bp */
	NEG(bp);
	/* test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jnz	SortLanding	;yes -> */
	if ((nocollisions & 1) != 0) {goto sortlanding;}
	// 0 ;* check for gear collapse (sink rate < threshold)
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jnz	__m2c_macrolocal_355_skip */
	if ((gear & 1) != 0) {goto __m2c_macrolocal_355_skip;}
	/* jmp	SortWheelsUp */
	goto sortwheelsup;
__m2c_macrolocal_355_skip:
	// 4921 
	// 0 ;no ->
	/* cmp	Zdot,bp		;gear collapsed? */
	CMP(zdot, bp);
	/* jge	SortLanding	;no -> */
	if ((short)(zdot) >= (short)(bp)) {goto sortlanding;}
	/* mov	Gear,0			;collapse gear */
	gear = 0;
	/* mov	SSF_Gear,1		;damage gear */
	ssf_gear = 1;
	/* or	RedWarnings2,RED_UC	;report damage */
	OR(redwarnings2, 0x40);
	/* mov	al,DIE_COLLAPSE */
	al = 12;
	/* mov	ah,MAJOR_DAMAGE */
	ah = 2;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipTouchDown */
	goto skiptouchdown;
	// 0 ;* sort landing - heavy / wheels up / dead stick etc.
sortlanding:
	// 4923 
	/* SortLanding:	test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jnz	__m2c_macrolocal_357_skip */
	if ((gear & 1) != 0) {goto __m2c_macrolocal_357_skip;}
	/* jmp	SortWheelsUp */
	goto sortwheelsup;
__m2c_macrolocal_357_skip:
	// 4925 
	// 0 ;no ->
	// 0 ;* if no collisions then check approx aircraft attitude (else wheelsbrakes
	// 0 ;* get damaged and wheel screech sounds etc. when aircraft lands inverted)
	/* test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jz	@F		;no -> */
	if (!(nocollisions & 1)) {goto dummylabel136;}
	/* cmp	M_CosR,31164	;abs(roll) > 18 degs? */
	CMP(m_cosr, 31164);
	/* jl	LandHeavy	;yes -> */
	if ((short)(m_cosr) < (short)(31164)) {goto landheavy;}
	/* cmp	PFine,0		;pitch < 0degs? */
	CMP(pfine, 0);
	/* jl	LandHeavy	;yes -> */
	if ((short)(pfine) < (short)(0)) {goto landheavy;}
	/* cmp	PFine,3277	;pitch > 18degs? */
	CMP(pfine, 3277);
	/* jg	LandHeavy	;no -> */
	if ((short)(pfine) > (short)(3277)) {goto landheavy;}
	// 0 ;* wheelbrakes on then damage wheelbrakes
dummylabel136:
	// 4927 
	/* @@:		test	WheelBrakes,1	;wheelbrakes applied? */
	TEST(wheelbrakes, 1);
	/* jz	@F		;no -> */
	if (!(wheelbrakes & 1)) {goto dummylabel137;}
	/* mov	SSF_WheelBrakes,1	;damage wheelbrakes */
	ssf_wheelbrakes = 1;
	/* or	AmbWarnings2,AMB_WB	;report damage */
	OR(ambwarnings2, 0x10);
dummylabel137:
	// 4929 
	/* @@:		push	bp */
	PUSH(bp);
	/* call	ScreechSound	;make wheel screech sound */
	CALLF(screechsound, 0);
	/* pop	bp */
	POP(bp);
	/* sar	bp,1		;heavy thresh = gear collapse thresh / 2 */
	SAR(bp, 1);
	/* cmp	ZDot,bp		;heavy landing? */
	CMP(zdot, bp);
	/* jge	@F		;no -> */
	if ((short)(zdot) >= (short)(bp)) {goto dummylabel138;}
landheavy:
	// 4931 
	/* LandHeavy:	or	Landing,LAND_HEAVY */
	OR(landing, 0x2);
	/* cmp	ShakePriority,SHAKE_LAND_HVY	;;higher SHAKE_LAND_HVY shake in progress? */
	CMP(shakepriority, 15);
	/* ja	__m2c_macrolocal_358_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(15)) {goto __m2c_macrolocal_358_skip;}
	/* mov	ShakePriority,SHAKE_LAND_HVY */
	shakepriority = 15;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,20 */
	shaketimer = 20;
__m2c_macrolocal_358_skip:
	// 4933 
/* m2c-phantom removed: 	R(CMP(shakepriority, 15));	// 9120 						cmp	ShakePriority,SHAKE_LAND_HVY	 */
/* m2c-phantom removed: 	R(shakepriority = 15;);	// 9121 mov	ShakePriority,SHAKE_LAND_HVY */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9122 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9123 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 20;);	// 9124 mov	ShakeTimer,20 */
	/* jmp	SortDeadStick */
	goto sortdeadstick;
dummylabel138:
	// 4935 
	/* @@:  		or	Landing,LAND_GOOD */
	OR(landing, 0x1);
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_359_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_359_skip;}
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 9130 												mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9131 						mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 9132 						mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 10;);	// 9133 						mov	ShakeTimer,10 */
__m2c_macrolocal_359_skip:
	// 4937 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 9135 						cmp	ShakePriority,SHAKE_LAND_GOOD	 */
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,10 */
	shaketimer = 10;
	/* jmp	SortDeadStick */
	goto sortdeadstick;
sortwheelsup:
	// 4939 
	/* SortWheelsUp: 	or	Landing,LAND_WHEELS_UP+LAND_HEAVY */
	OR(landing, 0x4+0x2);
sortdeadstick:
	// 4941 
	/* SortDeadStick:	mov	al,SSF_Engine1	;both engines failed? */
	al = ssf_engine1;
	/* and	al,SSF_Engine2 */
	AND(al, ssf_engine2);
	/* jnz	@F		;yes -> */
	if (al != 0) {goto dummylabel139;}
	/* cmp	FuelWt,0	;out of fuel? */
	CMP(fuelwt, 0);
	/* ja	SkipTouchDown	;no -> */
	if ((dw)(fuelwt) > (dw)(0)) {goto skiptouchdown;}
dummylabel139:
	// 4943 
	/* @@:		or	Landing,LAND_DEAD_STICK */
	OR(landing, 0x8);
skiptouchdown:
	// 4945 
	/* SkipTouchDown:	ret */
	RETN(0);
postamble:
	// 9158 
	// 0 ;-----------------------------
	// 0 ;* copy model vars into M_VIEW
	// 0 ;-----------------------------
	// 0 ;* //MOD// 22.06.1992 - Delete mobile if changed sector.
edummylabel19:
	// 4947 
	/* test	NewSector,1	;changed sector? */
	TEST(newsector, 1);
	/* jz	@F		;no -> */
	if (!(newsector & 1)) {goto dummylabel140;}
	/* mov	si,OFFSET M_MOBILE */
	si = m2c::near_offset_external(m_mobile);
	/* call	DeleteMobile */
	CALLF(deletemobile, 0);
dummylabel140:
	// 4949 
	/* @@:		mov	ax,XSec */
	ax = xsec;
	/* mov	M_VIEW.VP_XSEC,ax */
	m_view.vp_xsec = ax;
	/* mov	ax,YSec */
	ax = ysec;
	/* mov	M_VIEW.VP_YSEC,ax */
	m_view.vp_ysec = ax;
	/* mov	ax,Xft */
	ax = xft;
	/* mov	M_VIEW.VP_XFT,ax */
	m_view.vp_xft = ax;
	/* mov	ax,Yft */
	ax = yft;
	/* mov	M_VIEW.VP_YFT,ax */
	m_view.vp_yft = ax;
	/* mov	ax,ZftHi */
	ax = zfthi;
	/* mov	WORD PTR M_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&m_view+vp_zft_hi)) = ax;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	WORD PTR M_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&m_view+vp_zft_lo)) = ax;
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	M_VIEW.VP_HDG,ax */
	m_view.vp_hdg = ax;
	/* mov	ax,Pitch */
	ax = pitch;
	/* mov	M_VIEW.VP_PITCH,ax */
	m_view.vp_pitch = ax;
	/* mov	ax,Roll */
	ax = roll;
	/* mov	M_VIEW.VP_ROLL,ax */
	m_view.vp_roll = ax;
	// 0 ;* //MOD// 22.06.1992 - Create mobile if changed sector.
	/* test	NewSector,1	;changed sector? */
	TEST(newsector, 1);
	/* jz	@F		;no -> */
	if (!(newsector & 1)) {goto dummylabel141;}
	/* mov	si,OFFSET M_MOBILE */
	si = m2c::near_offset_external(m_mobile);
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	// 0 ;----------------------
	// 0 ;* sort animation flags
	// 0 ;----------------------
	// 0 ;* //MOD// 27.07.1992 - Animation reorganized.
	// 0 ;* wing sweep
dummylabel141:
	// 4951 
	/* @@:		mov	al,CrntWingPos */
	al = crntwingpos;
	// 0 ;* undercarriage
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jz	@F		;no -> */
	if (!(gear & 1)) {goto dummylabel142;}
	/* or	al,GEAR_DOWN */
	OR(al, 0x4);
	// 0 ;* reheat
dummylabel142:
	// 4953 
	/* @@:		cmp	Reheat,0	;reheat on? */
	CMP(reheat, 0);
	/* je	SetAnim		;no -> */
	if ((dw)(reheat) == (dw)(0)) {goto setanim;}
	/* cmp	FuelWt,0	;any fuel? */
	CMP(fuelwt, 0);
	/* je	SetAnim		;no -> */
	if ((dw)(fuelwt) == (dw)(0)) {goto setanim;}
	/* test	SSF_Engine1,1	;lh engine ok? */
	TEST(ssf_engine1, 1);
	/* jnz	@F		;no -> */
	if ((ssf_engine1 & 1) != 0) {goto dummylabel143;}
	/* or	al,REHEAT_L_ENG */
	OR(al, 0x8);
dummylabel143:
	// 4955 
	/* @@:		test	SSF_Engine2,1	;rh engine ok? */
	TEST(ssf_engine2, 1);
	/* jnz	SetAnim		;no -> */
	if ((ssf_engine2 & 1) != 0) {goto setanim;}
	/* or	al,REHEAT_R_ENG */
	OR(al, 0x10);
setanim:
	// 4957 
	/* SetAnim:	mov	M_MOBILE.MOB_ANIM,al */
	m_mobile.mob_anim = al;
	// 0 ;-------------------
	// 0 ;* calc display vars
	// 0 ;-------------------
	// 0 ;* calc DispGForce (frame rate dependant)
	// 0 ;* DispGForce = (GForce - DispGForce) / 4 + DispGForce
	/* mov	ax,GForce */
	ax = gforce;
	/* sub	ax,DispGForce */
	SUB(ax, dispgforce);
	// 0 ;* use abs(GForce - DispGForce) to avoid -1 truncation error
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
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	DispGForce,ax */
	ADD(dispgforce, ax);
	// 0 ;* calc DispAlpha (frame rate dependant)
	// 0 ;* DispAlpha = (Alpha - DispAlpha) / 4 + DispAlpha
	/* mov	ax,Alpha */
	ax = alpha;
	/* sub	ax,DispAlpha */
	SUB(ax, dispalpha);
	// 0 ;* use abs(Alpha - DispAlpha) to avoid -1 truncation error
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
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	DispAlpha,ax */
	ADD(dispalpha, ax);
	// 0 ;* calc DispZdot (frame rate dependant)
	// 0 ;* if on ground then
	// 0 ;*    Zdot = 0
	// 0 ;* end
	// 0 ;*
	// 0 ;* DispZdot = (Zdot - DispZdot) / 2 + DispZdot
	/* xor	ax,ax		;assume Zdot = 0 */
	XOR(ax, ax);
	/* test	Airborne1,1	;on ground? */
	TEST(airborne1, 1);
	/* jz	@F		;yes -> */
	if (!(airborne1 & 1)) {goto dummylabel144;}
	/* mov	ax,Zdot */
	ax = zdot;
dummylabel144:
	// 4959 
	/* @@:   		sub	ax,DispZdot */
	SUB(ax, dispzdot);
	// 0 ;* use abs(Zdot - DispZdot) to avoid -1 truncation error
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	DispZdot,ax */
	ADD(dispzdot, ax);
	// 0 ;* calc DispVSI (ft / min) = DispZdot * 3 / 4
	/* mov	ax,DispZdot */
	ax = dispzdot;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs, dx = sign
	/* mov	bp,ax */
	bp = ax;
	/* xor	bx,bx		;bx, ax = 32 bit value */
	XOR(bx, bx);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	DispVSI,ax */
	dispvsi = ax;
	// 0 ;* calc DispHdg (1 .. 360)
	/* mov	ax,HFine */
	ax = hfine;
	/* mov	dx,360 */
	dx = 360;
	/* mul	dx */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* jnz	@F */
	if (dx != 0) {goto dummylabel145;}
	/* mov	dx,360		;display 0 as 360 */
	dx = 360;
dummylabel145:
	// 4961 
	/* @@:		mov	DispHdg,dx */
	disphdg = dx;
	// 0 ;* calc DispBarAlt (zft / 10)
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,10 */
	bx = 10;
	/* div	bx */
	DIV2(bx);
	/* mov	DispBarAlt,ax */
	dispbaralt = ax;
	// 0 ;* calc DispMachNum (convert MachNum[*16] to *10 scaled (MachNum * 5 / 8))
	/* mov	ax,MachNum */
	ax = machnum;
	/* mov	dx,ax */
	dx = ax;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	ax,dx		;*5 */
	ADD(ax, dx);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	DispMachNum,ax */
	dispmachnum = ax;
	// 0 ;------------------
	// 0 ;* check for buffet (excess speed wrt wing sweep)
	// 0 ;------------------
	/* mov	al,CrntWingPos */
	al = crntwingpos;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* mov	bx,ax */
	bx = ax;
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* add	bx,ax		;*6 */
	ADD(bx, ax);
	/* mov	ax,MachNum */
	ax = machnum;
	/* cmp	ax,BuffetThresh[bx]	;< buffet threshold? */
	CMP(ax, *(dw*)(((db*)&buffetthresh)+bx));
	/* jb	NoBuffet		;yes -> */
	if ((dw)(ax) < (dw)(*(dw*)(((db*)&buffetthresh)+bx))) {goto nobuffet;}
	/* cmp	ax,BuffetThresh[bx+2]	;< lo buffet threshold? */
	CMP(ax, *(dw*)(((db*)&buffetthresh)+bx+2));
	/* jb	LoBuffet		;yes -> */
	if ((dw)(ax) < (dw)(*(dw*)(((db*)&buffetthresh)+bx+2))) {goto lobuffet;}
	/* cmp	ax,BuffetThresh[bx+4]	;< hi buffet threshold? */
	CMP(ax, *(dw*)(((db*)&buffetthresh)+bx+4));
	/* jb	HiBuffet		;yes -> */
	if ((dw)(ax) < (dw)(*(dw*)(((db*)&buffetthresh)+bx+4))) {goto hibuffet;}
	/* mov	al,DIE_BREAK_UP */
	al = 3;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	BuffetOk */
	goto buffetok;
lobuffet:
	// 4963 
	/* LoBuffet:	cmp	ShakePriority,SHAKE_BUFFET	;;higher SHAKE_BUFFET shake in progress? */
	CMP(shakepriority, 245);
	/* ja	__m2c_macrolocal_367_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(245)) {goto __m2c_macrolocal_367_skip;}
	/* mov	ShakePriority,SHAKE_BUFFET */
	shakepriority = 245;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_367_skip:
	// 4965 
/* m2c-phantom removed: 	R(CMP(shakepriority, 245));	// 9366 cmp	ShakePriority,SHAKE_BUFFET	 */
/* m2c-phantom removed: 	R(shakepriority = 245;);	// 9367 mov	ShakePriority,SHAKE_BUFFET */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9368 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 9369 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9370 mov	ShakeTimer,65535 */
	/* jmp	BuffetOk */
	goto buffetok;
hibuffet:
	// 4967 
	/* HiBuffet:	cmp	ShakePriority,SHAKE_BUFFET	;;higher SHAKE_BUFFET shake in progress? */
	CMP(shakepriority, 245);
	/* ja	__m2c_macrolocal_368_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(245)) {goto __m2c_macrolocal_368_skip;}
/* m2c-phantom removed: 	R(shakepriority = 245;);	// 9374 mov	ShakePriority,SHAKE_BUFFET */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9375 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9376 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9377 mov	ShakeTimer,65535 */
__m2c_macrolocal_368_skip:
	// 4969 
/* m2c-phantom removed: 	R(CMP(shakepriority, 245));	// 9379 cmp	ShakePriority,SHAKE_BUFFET	 */
	/* mov	ShakePriority,SHAKE_BUFFET */
	shakepriority = 245;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* call	MinDamage */
	CALLF(mindamage, 0);
	/* jmp	BuffetOk */
	goto buffetok;
nobuffet:
	// 4971 
	/* NoBuffet:	cmp	ShakePriority,SHAKE_BUFFET	;;same shake? */
	CMP(shakepriority, 245);
	/* jne	__m2c_macrolocal_369_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(245)) {goto __m2c_macrolocal_369_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_369_skip:
	// 4973 
/* m2c-phantom removed: 	R(CMP(shakepriority, 245));	// 9393 cmp	ShakePriority,SHAKE_BUFFET	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9394 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9395 mov	ShakeTimer,0 */
	// 0 ;-----------------------
	// 0 ;* check for flap damage
	// 0 ;-----------------------
	// 0 ;* if flaps are damaged then do not issue config warning as it is irritating!
buffetok:
	// 4975 
	/* BuffetOk:	test	SSF_Flaps,1	;flaps already damaged? */
	TEST(ssf_flaps, 1);
	/* jnz	FlapsOk		;yes -> */
	if ((ssf_flaps & 1) != 0) {goto flapsok;}
	/* mov	bl,CrntFlapPos */
	bl = crntflappos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 */
	SHL(bx, 1);
	/* mov	ax,Vias */
	ax = vias;
	/* cmp	ax,FlapThresh[bx]	;< warning threshold? */
	CMP(ax, *(dw*)(((db*)&flapthresh)+bx));
	/* jl	FlapsOk			;yes -> */
	if ((short)(ax) < (short)(*(dw*)(((db*)&flapthresh)+bx))) {goto flapsok;}
	/* or	AmbWarnings2,AMB_CNFG	;issue warning */
	OR(ambwarnings2, 0x1);
	/* cmp	ax,FlapThresh[bx+2]	;< damage threshold? */
	CMP(ax, *(dw*)(((db*)&flapthresh)+bx+2));
	/* jl	FlapsOk			;yes -> */
	if ((short)(ax) < (short)(*(dw*)(((db*)&flapthresh)+bx+2))) {goto flapsok;}
	/* mov	SSF_Flaps,1		;damage flaps mechanism */
	ssf_flaps = 1;
	/* or	AmbWarnings2,AMB_FLPS	;report damage */
	OR(ambwarnings2, 0x40);
	// 0 ;------------------------------
	// 0 ;* check for crashed into hills
	// 0 ;------------------------------
flapsok:
	// 4977 
	/* FlapsOk:	mov	HitHill,0 */
	hithill = 0;
	/* cmp	ZftHi,0		;zft > 65535ft? */
	CMP(zfthi, 0);
	/* jbe	__m2c_macrolocal_370_skip */
	if ((dw)(zfthi) <= (dw)(0)) {goto __m2c_macrolocal_370_skip;}
	/* jmp	SkipHillTest */
	goto skiphilltest;
__m2c_macrolocal_370_skip:
	// 4979 
	// 0 ;yes ->
	/* cmp	ZftLo,4095	;zft > 4095ft? */
	CMP(zftlo, 4095);
	/* jbe	__m2c_macrolocal_371_skip */
	if ((dw)(zftlo) <= (dw)(4095)) {goto __m2c_macrolocal_371_skip;}
	/* jmp	SkipHillTest */
	goto skiphilltest;
__m2c_macrolocal_371_skip:
	// 4981 
	// 0 ;yes ->
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* test	ax,ax		;hill here? */
	TEST(ax, ax);
	/* jnz	__m2c_macrolocal_372_skip */
	if ((ax & ax) != 0) {goto __m2c_macrolocal_372_skip;}
	/* jmp	SkipHillTest */
	goto skiphilltest;
__m2c_macrolocal_372_skip:
	// 4983 
	// 0 ;no ->
	/* cmp	ax,ZftLo	;crashed into hill? */
	CMP(ax, zftlo);
	/* jae	__m2c_macrolocal_373_skip */
	if ((dw)(ax) >= (dw)(zftlo)) {goto __m2c_macrolocal_373_skip;}
	/* jmp	SkipHillTest */
	goto skiphilltest;
__m2c_macrolocal_373_skip:
	// 4985 
	// 0 ;no ->
	// 0 ;* crashed into hill
	/* mov	HitHill,1 */
	hithill = 1;
	/* mov	ZFine,0 */
	zfine = 0;
	/* mov	ZftLo,ax */
	zftlo = ax;
	/* mov	ZftHi,0 */
	zfthi = 0;
	/* mov	WORD PTR M_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&m_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&m_view+vp_zft_hi)) = 0;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Roll,ax */
	roll = ax;
	/* mov	RFine,ax */
	rfine = ax;
	// 0 ;* enable aircraft to take from hillside (in case no collisions)
	/* cmp	PFine,0		;pitched down? */
	CMP(pfine, 0);
	/* jge	@F		;no -> */
	if ((short)(pfine) >= (short)(0)) {goto dummylabel146;}
	/* mov	Pitch,ax */
	pitch = ax;
	/* mov	PFine,ax */
	pfine = ax;
	// 0 ;* stop spinning (in case no collisions)
dummylabel146:
	// 4987 
	/* @@:		mov	SpinFlag,al */
	spinflag = al;
	/* mov	Recovery,ax */
	recovery = ax;
	// 0 ;* shake aircraft (unless moving) in case no collsions enabled
	/* cmp	ShakePriority,SHAKE_OFF_HARD	;;same shake? */
	CMP(shakepriority, 250);
	/* jne	__m2c_macrolocal_374_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(250)) {goto __m2c_macrolocal_374_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_374_skip:
	// 4989 
	// 0 ;assume not moving
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9475 cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9476 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9477 mov	ShakeTimer,0 */
	/* cmp	Vtas,0		;moving? */
	CMP(vtas, 0);
	/* je	@F		;no -> */
	if ((dw)(vtas) == (dw)(0)) {goto dummylabel147;}
	/* cmp	ShakePriority,SHAKE_OFF_HARD	;;higher SHAKE_OFF_HARD shake in progress? */
	CMP(shakepriority, 250);
	/* ja	__m2c_macrolocal_375_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(250)) {goto __m2c_macrolocal_375_skip;}
/* m2c-phantom removed: 	R(shakepriority = 250;);	// 9483 												mov	ShakePriority,SHAKE_OFF_HARD */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 9484 						mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9485 						mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9486 						mov	ShakeTimer,65535 */
__m2c_macrolocal_375_skip:
	// 4991 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9488 						cmp	ShakePriority,SHAKE_OFF_HARD	 */
	/* mov	ShakePriority,SHAKE_OFF_HARD */
	shakepriority = 250;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel147:
	// 4993 
	/* @@:		test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jnz	SkipHillTest	;yes -> */
	if ((nocollisions & 1) != 0) {goto skiphilltest;}
	/* mov	al,DIE_CRASH_HILL */
	al = 4;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	// 0 ;---------------
	// 0 ;* surface check
	// 0 ;---------------
skiphilltest:
	// 4995 
	/* SkipHillTest:	test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jz	@F		;no -> */
	if (!(airborne1 & 1)) {goto dummylabel148;}
	/* test	HitHill,1	;hit hill (do not unshake)? */
	TEST(hithill, 1);
	/* jnz	@F		;yes -> */
	if ((hithill & 1) != 0) {goto dummylabel148;}
	/* cmp	ShakePriority,SHAKE_OFF_HARD	;;same shake? */
	CMP(shakepriority, 250);
	/* jne	__m2c_macrolocal_377_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(250)) {goto __m2c_macrolocal_377_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_377_skip:
	// 4997 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9515 						cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9516 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9517 mov	ShakeTimer,0 */
	/* cmp	ShakePriority,SHAKE_WHEELS_UP	;;same shake? */
	CMP(shakepriority, 255);
	/* jne	__m2c_macrolocal_378_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(255)) {goto __m2c_macrolocal_378_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_378_skip:
	// 4999 
/* m2c-phantom removed: 	R(CMP(shakepriority, 255));	// 9525 						cmp	ShakePriority,SHAKE_WHEELS_UP	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9526 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9527 mov	ShakeTimer,0 */
	/* jmp	SkipSurfaceChk */
	goto skipsurfacechk;
dummylabel148:
	// 5001 
	/* @@:	cmp	ShakePriority,SHAKE_WHEELS_UP	;;same shake? */
	CMP(shakepriority, 255);
	/* jne	__m2c_macrolocal_379_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(255)) {goto __m2c_macrolocal_379_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_379_skip:
	// 5003 
	// 0 ;assume gear down
/* m2c-phantom removed: 	R(CMP(shakepriority, 255));	// 9537 cmp	ShakePriority,SHAKE_WHEELS_UP	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9538 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9539 mov	ShakeTimer,0 */
	/* test	Gear,1		;gear down? */
	TEST(gear, 1);
	/* jnz	@F		;yes -> */
	if ((gear & 1) != 0) {goto dummylabel149;}
	/* cmp	Vtas,0		;moving? */
	CMP(vtas, 0);
	/* je	@F		;no -> */
	if ((dw)(vtas) == (dw)(0)) {goto dummylabel149;}
	/* cmp	ShakePriority,SHAKE_WHEELS_UP	;;higher SHAKE_WHEELS_UP shake in progress? */
	CMP(shakepriority, 255);
	/* ja	__m2c_macrolocal_380_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(255)) {goto __m2c_macrolocal_380_skip;}
/* m2c-phantom removed: 	R(shakepriority = 255;);	// 9547 												mov	ShakePriority,SHAKE_WHEELS_UP */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 9548 						mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9549 						mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9550 						mov	ShakeTimer,65535 */
__m2c_macrolocal_380_skip:
	// 5005 
/* m2c-phantom removed: 	R(CMP(shakepriority, 255));	// 9552 						cmp	ShakePriority,SHAKE_WHEELS_UP	 */
	/* mov	ShakePriority,SHAKE_WHEELS_UP */
	shakepriority = 255;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* mov	bx,SMOKE_KICK_UP */
	bx = 8;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
dummylabel149:
	// 5007 
	/* @@:		mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	SurfaceCheck */
	CALLF(surfacecheck, 0);
	/* mov	dx,Vtas */
	dx = vtas;
	/* cmp	ax,SURFACE_RUNWAY */
	CMP(ax, 2);
	/* je	HardSurface */
	if ((dw)(ax) == (dw)(2)) {goto hardsurface;}
	/* cmp	ax,SURFACE_TAXIWAY */
	CMP(ax, 4);
	/* je	HardSurface */
	if ((dw)(ax) == (dw)(4)) {goto hardsurface;}
	/* cmp	ax,SURFACE_HARD */
	CMP(ax, 6);
	/* je	HardSurface */
	if ((dw)(ax) == (dw)(6)) {goto hardsurface;}
	/* cmp	ax,SURFACE_ROAD */
	CMP(ax, 8);
	/* je	HardSurface */
	if ((dw)(ax) == (dw)(8)) {goto hardsurface;}
	/* cmp	ax,SURFACE_RAILWAY */
	CMP(ax, 10);
	/* jne	__m2c_macrolocal_381_skip */
	if ((dw)(ax) != (dw)(10)) {goto __m2c_macrolocal_381_skip;}
	/* jmp	RailSurface */
	goto railsurface;
__m2c_macrolocal_381_skip:
	// 5009 
	/* cmp	ax,SURFACE_RIVER */
	CMP(ax, 12);
	/* jne	__m2c_macrolocal_382_skip */
	if ((dw)(ax) != (dw)(12)) {goto __m2c_macrolocal_382_skip;}
	/* jmp	Ditched */
	goto ditched;
__m2c_macrolocal_382_skip:
	// 5011 
	/* cmp	ax,SURFACE_LAKE */
	CMP(ax, 14);
	/* jne	__m2c_macrolocal_383_skip */
	if ((dw)(ax) != (dw)(14)) {goto __m2c_macrolocal_383_skip;}
	/* jmp	Ditched */
	goto ditched;
__m2c_macrolocal_383_skip:
	// 5013 
	// 0 ;* unknown surface
	// 0 ;*
	// 0 ;* up to  5kts ok (no shake)
	// 0 ;* up to 30kts ok (lo shake)
	// 0 ;* up to 50kts ok (hi shake)
	// 0 ;* above 50kts then crash
	/* cmp	dx,8*8		;vtas < 5kts? */
	CMP(dx, 8*8);
	/* jb	NoOffHard	;yes -> */
	if ((dw)(dx) < (dw)(8*8)) {goto nooffhard;}
	/* cmp	dx,51*8		;vtas < 30kts? */
	CMP(dx, 51*8);
	/* jb	LoOffHard	;no -> */
	if ((dw)(dx) < (dw)(51*8)) {goto looffhard;}
	/* cmp	dx,85*8		;vtas < 50kts? */
	CMP(dx, 85*8);
	/* jb	HiOffHard	;no -> */
	if ((dw)(dx) < (dw)(85*8)) {goto hioffhard;}
	/* jmp	GndSpeedHigh */
	goto gndspeedhigh;
	// 0 ;* hard surface
	// 0 ;*
	// 0 ;* up to 180kts ok (no shake)
	// 0 ;* up to 200kts ok (lo shake)
	// 0 ;* up to 225kts ok (hi shake)
	// 0 ;* above 225kts then crash
hardsurface:
	// 5015 
	/* HardSurface:	cmp	dx,306*8 	;vtas < 180kts? */
	CMP(dx, 306*8);
	/* jb	NoOffHard	;yes -> */
	if ((dw)(dx) < (dw)(306*8)) {goto nooffhard;}
	/* cmp	dx,340*8 	;vtas < 200kts? */
	CMP(dx, 340*8);
	/* jb	LoOffHard	;no -> */
	if ((dw)(dx) < (dw)(340*8)) {goto looffhard;}
	/* cmp	dx,383*8  	;vtas < 225kts? */
	CMP(dx, 383*8);
	/* jb	HiOffHard	;no -> */
	if ((dw)(dx) < (dw)(383*8)) {goto hioffhard;}
	/* jmp	GndSpeedHigh */
	goto gndspeedhigh;
looffhard:
	// 5017 
	/* LoOffHard:	cmp	ShakePriority,SHAKE_OFF_HARD	;;higher SHAKE_OFF_HARD shake in progress? */
	CMP(shakepriority, 250);
	/* ja	__m2c_macrolocal_384_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(250)) {goto __m2c_macrolocal_384_skip;}
	/* mov	ShakePriority,SHAKE_OFF_HARD */
	shakepriority = 250;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_384_skip:
	// 5019 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9618 cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 250;);	// 9619 mov	ShakePriority,SHAKE_OFF_HARD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9620 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 9621 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9622 mov	ShakeTimer,65535 */
	/* jmp	SkipSurfaceChk */
	goto skipsurfacechk;
hioffhard:
	// 5021 
	/* HiOffHard:	cmp	ShakePriority,SHAKE_OFF_HARD	;;higher SHAKE_OFF_HARD shake in progress? */
	CMP(shakepriority, 250);
	/* ja	__m2c_macrolocal_385_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(250)) {goto __m2c_macrolocal_385_skip;}
/* m2c-phantom removed: 	R(shakepriority = 250;);	// 9626 mov	ShakePriority,SHAKE_OFF_HARD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9627 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9628 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9629 mov	ShakeTimer,65535 */
__m2c_macrolocal_385_skip:
	// 5023 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9631 cmp	ShakePriority,SHAKE_OFF_HARD	 */
	/* mov	ShakePriority,SHAKE_OFF_HARD */
	shakepriority = 250;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* jmp	SkipSurfaceChk */
	goto skipsurfacechk;
nooffhard:
	// 5025 
	/* NoOffHard:	cmp	ShakePriority,SHAKE_OFF_HARD	;;same shake? */
	CMP(shakepriority, 250);
	/* jne	__m2c_macrolocal_386_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(250)) {goto __m2c_macrolocal_386_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_386_skip:
	// 5027 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9644 cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9645 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9646 mov	ShakeTimer,0 */
	/* jmp	SkipSurfaceChk */
	goto skipsurfacechk;
	// 0 ;* rail surface
	// 0 ;*
	// 0 ;* if no collisions and not moving then
	// 0 ;*    no shake
	// 0 ;* else
	// 0 ;*    ground speed too high
	// 0 ;* endif
railsurface:
	// 5029 
	/* RailSurface: 	test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jz	GndSpeedHigh	;no -> */
	if (!(nocollisions & 1)) {goto gndspeedhigh;}
	/* test	dx,dx		;moving? */
	TEST(dx, dx);
	/* jnz	GndSpeedHigh	;yes -> */
	if ((dx & dx) != 0) {goto gndspeedhigh;}
	/* cmp	ShakePriority,SHAKE_OFF_HARD	;;same shake? */
	CMP(shakepriority, 250);
	/* jne	__m2c_macrolocal_387_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(250)) {goto __m2c_macrolocal_387_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_387_skip:
	// 5031 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9668 						cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9669 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9670 mov	ShakeTimer,0 */
	/* jmp	SkipSurfaceChk */
	goto skipsurfacechk;
	// 0 ;* ground speed too high - shake in case no collisions
gndspeedhigh:
	// 5033 
	/* GndSpeedHigh:	cmp	ShakePriority,SHAKE_OFF_HARD	;;higher SHAKE_OFF_HARD shake in progress? */
	CMP(shakepriority, 250);
	/* ja	__m2c_macrolocal_388_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(250)) {goto __m2c_macrolocal_388_skip;}
/* m2c-phantom removed: 	R(shakepriority = 250;);	// 9676 mov	ShakePriority,SHAKE_OFF_HARD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9677 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9678 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9679 mov	ShakeTimer,65535 */
__m2c_macrolocal_388_skip:
	// 5035 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9681 cmp	ShakePriority,SHAKE_OFF_HARD	 */
	/* mov	ShakePriority,SHAKE_OFF_HARD */
	shakepriority = 250;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jnz	SkipSurfaceChk	;yes -> */
	if ((nocollisions & 1) != 0) {goto skipsurfacechk;}
	/* mov	al,DIE_GND_SPD_HI */
	al = 7;
	/* mov	ah,MINOR_DAMAGE */
	ah = 1;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipSurfaceChk */
	goto skipsurfacechk;
	// 0 ;* ditched - shake in case no collisions
ditched:
	// 5037 
	/* Ditched:	cmp	ShakePriority,SHAKE_OFF_HARD	;;higher SHAKE_OFF_HARD shake in progress? */
	CMP(shakepriority, 250);
	/* ja	__m2c_macrolocal_390_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(250)) {goto __m2c_macrolocal_390_skip;}
	/* mov	ShakePriority,SHAKE_OFF_HARD */
	shakepriority = 250;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_390_skip:
	// 5039 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9702 cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 250;);	// 9703 mov	ShakePriority,SHAKE_OFF_HARD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9704 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 9705 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9706 mov	ShakeTimer,65535 */
	/* test	dx,dx		;moving? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel150;}
	/* cmp	ShakePriority,SHAKE_OFF_HARD	;;same shake? */
	CMP(shakepriority, 250);
	/* jne	__m2c_macrolocal_391_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(250)) {goto __m2c_macrolocal_391_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_391_skip:
	// 5041 
/* m2c-phantom removed: 	R(CMP(shakepriority, 250));	// 9717 						cmp	ShakePriority,SHAKE_OFF_HARD	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9718 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9719 mov	ShakeTimer,0 */
dummylabel150:
	// 5043 
	/* @@:		test	NoCollisions,1	;no collisions? */
	TEST(nocollisions, 1);
	/* jnz	SkipSurfaceChk	;yes -> */
	if ((nocollisions & 1) != 0) {goto skipsurfacechk;}
	/* mov	al,DIE_DITCHED */
	al = 6;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	// 0 ;-------------------
	// 0 ;* check engine fire
	// 0 ;-------------------
skipsurfacechk:
	// 5045 
	/* SkipSurfaceChk:	mov	al,EngFire1 */
	al = engfire1;
	/* or	al,EngFire2	;any engine on fire? */
	OR(al, engfire2);
	/* jz	SkipEngFire	;no -> */
	if (al == 0) {goto skipengfire;}
	/* mov	ax,EngFireTimer */
	ax = engfiretimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
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
	/* mov	EngFireTimer,ax */
	engfiretimer = ax;
	/* jnz	@F		;not destroyed by fire -> */
	if (ax != 0) {goto dummylabel151;}
	/* mov	al,DIE_FIRE */
	al = 13;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipEngFire */
	goto skipengfire;
dummylabel151:
	// 5047 
	/* @@:		cmp	ax,ENG_FIRE_TIME/2	;time to damage engine(s)? */
	CMP(ax, (30*100)/2);
	/* ja	SkipEngFire */
	if ((dw)(ax) > (dw)((30*100)/2)) {goto skipengfire;}
	/* test	EngFire1,1	;engine 1 on fire? */
	TEST(engfire1, 1);
	/* jz	@F		;no -> */
	if (!(engfire1 & 1)) {goto dummylabel152;}
	/* mov	SSF_Engine1,1		;damage engine */
	ssf_engine1 = 1;
	/* or	RedWarnings2,RED_L_ENG	;report damage */
	OR(redwarnings2, 0x100);
dummylabel152:
	// 5049 
	/* @@:		test	EngFire2,1	;engine 2 on fire? */
	TEST(engfire2, 1);
	/* jz	SkipEngFire	;no -> */
	if (!(engfire2 & 1)) {goto skipengfire;}
	/* mov	SSF_Engine2,1		;damage engine */
	ssf_engine2 = 1;
	/* or	RedWarnings2,RED_R_ENG	;report damage */
	OR(redwarnings2, 0x200);
	// 0 ;------------------------------------
	// 0 ;* check for not moving and reheat on (shake aircraft)
	// 0 ;------------------------------------
skipengfire:
	// 5051 
	/* SkipEngFire:	cmp	ShakePriority,SHAKE_BRAKE	;;same shake? */
	CMP(shakepriority, 240);
	/* jne	__m2c_macrolocal_395_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(240)) {goto __m2c_macrolocal_395_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_395_skip:
	// 5053 
	// 0 ;assume moving
/* m2c-phantom removed: 	R(CMP(shakepriority, 240));	// 9769 cmp	ShakePriority,SHAKE_BRAKE	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 9770 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 9771 mov	ShakeTimer,0 */
	/* cmp	Vtas,0		;moving? */
	CMP(vtas, 0);
	/* jg	SkipBrakeShake	;yes -> */
	if ((short)(vtas) > (short)(0)) {goto skipbrakeshake;}
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jz	@F		;no -> */
	if (!(airborne1 & 1)) {goto dummylabel153;}
	/* test	HitHill,1	;hit hill? */
	TEST(hithill, 1);
	/* jz	SkipBrakeShake	;no -> */
	if (!(hithill & 1)) {goto skipbrakeshake;}
dummylabel153:
	// 5055 
	/* @@:		cmp	Thrust1,9000	;engine 1 thrust > max dry? */
	CMP(thrust1, 9000);
	/* ja	@F		;yes -> */
	if ((dw)(thrust1) > (dw)(9000)) {goto dummylabel154;}
	/* cmp	Thrust2,9000	;engine 2 thrust > max dry? */
	CMP(thrust2, 9000);
	/* jbe	SkipBrakeShake	;no -> */
	if ((dw)(thrust2) <= (dw)(9000)) {goto skipbrakeshake;}
dummylabel154:
	// 5057 
	/* @@:	cmp	ShakePriority,SHAKE_BRAKE	;;higher SHAKE_BRAKE shake in progress? */
	CMP(shakepriority, 240);
	/* ja	__m2c_macrolocal_396_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(240)) {goto __m2c_macrolocal_396_skip;}
/* m2c-phantom removed: 	R(shakepriority = 240;);	// 9784 mov	ShakePriority,SHAKE_BRAKE */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 9785 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 9786 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 9787 mov	ShakeTimer,65535 */
__m2c_macrolocal_396_skip:
	// 5059 
/* m2c-phantom removed: 	R(CMP(shakepriority, 240));	// 9789 cmp	ShakePriority,SHAKE_BRAKE	 */
	/* mov	ShakePriority,SHAKE_BRAKE */
	shakepriority = 240;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
skipbrakeshake:
	// 5061 
	// 0 ;-------------------
	// 0 ;* check gear damage
	// 0 ;-------------------
	// 0 ;* only damage gear if lowered
	/* test	Gear,1 */
	TEST(gear, 1);
	/* jz	@F */
	if (!(gear & 1)) {goto dummylabel155;}
	// 0 ;* ignore if already damaged
	/* test	SSF_Gear,1 */
	TEST(ssf_gear, 1);
	/* jnz	@F */
	if ((ssf_gear & 1) != 0) {goto dummylabel155;}
	// 0 ;* issue warning if IAS > 250kts
	/* cmp	Vkts,250 */
	CMP(vkts, 250);
	/* jbe	@F */
	if ((dw)(vkts) <= (dw)(250)) {goto dummylabel155;}
	/* or	AmbWarnings2,AMB_UC	;issue warning */
	OR(ambwarnings2, 0x8);
	// 0 ;* damage gear if IAS > 350kts
	/* cmp	Vkts,350 */
	CMP(vkts, 350);
	/* jbe	@F */
	if ((dw)(vkts) <= (dw)(350)) {goto dummylabel155;}
	/* mov	SSF_Gear,1		;damage gear */
	ssf_gear = 1;
	/* or	RedWarnings2,RED_UC	;report damage */
	OR(redwarnings2, 0x40);
dummylabel155:
	// 5063 
	// 0 ;------------------
	// 0 ;* sort smoke trail
	// 0 ;------------------
	// 0 ;* if destroyed or engine fire then
	// 0 ;*    if airborne and not hit hill then
	// 0 ;*       make smoke trail
	// 0 ;*    else
	// 0 ;*       kick up smoke
	// 0 ;*    endif
	// 0 ;* endif
	/* mov	al,Destroyed */
	al = destroyed;
	/* or	al,EngFire1 */
	OR(al, engfire1);
	/* or	al,EngFire2 */
	OR(al, engfire2);
	/* jz	SkipSmokeTrail */
	if (al == 0) {goto skipsmoketrail;}
	/* mov	bx,SMOKE_AIR_TRAIL */
	bx = 12;
	/* mov	al,HitHill */
	al = hithill;
	/* not	al */
	al = ~al;
	/* and	al,Airborne1 */
	AND(al, airborne1);
	/* jnz	@F */
	if (al != 0) {goto dummylabel156;}
	/* mov	bx,SMOKE_KICK_UP */
	bx = 8;
dummylabel156:
	// 5065 
	/* @@:		mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
skipsmoketrail:
	// 5067 
	// 0 ;-----------------
	// 0 ;* init new sector
	// 0 ;-----------------
	/* test	NewSector,1	;changed sector? */
	TEST(newsector, 1);
	/* jz	@F		;no -> */
	if (!(newsector & 1)) {goto dummylabel157;}
	/* call	InitNewSector */
	CALL(initnewsector, 0);
dummylabel157:
	// 5069 
	// 0 ;---------------------
	// 0 ;* collision detection
	// 0 ;---------------------
	// 0 ;-----------------------------------
	// 0 ;* calc delta x, delta y and delta z
	// 0 ;-----------------------------------
	// 0 ;-------------
	// 0 ;* calc Dx / 4
	// 0 ;-------------
	// 0 ;* x1 = xsec * 16384 + xft + 8192
	/* mov	cx,M_TEST.VP_XSEC */
	cx = m_test.vp_xsec;
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
	/* mov	bp,M_TEST.VP_XFT */
	bp = m_test.vp_xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,M_VIEW.VP_XSEC */
	dx = m_view.vp_xsec;
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
	/* mov	bp,M_VIEW.VP_XFT */
	bp = m_view.vp_xft;
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
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel158;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* jmp	DxOk */
	goto dxok;
dummylabel158:
	// 5071 
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 5071 
	/* adc	ax,0 */
	ADC(ax, 0);
	/* adc	dx,0 */
	ADC(dx, 0);
dxok:
	// 5073 
	/* DxOk:		push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;-------------
	// 0 ;* calc Dy / 4
	// 0 ;-------------
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,M_TEST.VP_YSEC */
	dx = m_test.vp_ysec;
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
	/* mov	bp,M_TEST.VP_YFT */
	bp = m_test.vp_yft;
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,M_VIEW.VP_YSEC */
	cx = m_view.vp_ysec;
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
	/* mov	bp,M_VIEW.VP_YFT */
	bp = m_view.vp_yft;
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
	/* jns	@F */
	if ((short)(cx) >= 0) {goto dummylabel159;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* jmp	DyOk */
	goto dyok;
dummylabel159:
	// 5075 
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	// 5075 
	/* adc	bx,0 */
	ADC(bx, 0);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;-------------
	// 0 ;* calc Dz / 4
	// 0 ;-------------
	// 0 ;* z1
dyok:
	// 5077 
	/* DyOk:		mov	ax,WORD PTR M_TEST.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_test+vp_zft_lo));
	/* mov	dx,WORD PTR M_TEST.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_test+vp_zft_hi));
	// 0 ;* z2
	/* mov	si,WORD PTR M_VIEW.VP_ZFT_LO */
	si = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	di,WORD PTR M_VIEW.VP_ZFT_HI */
	di = *((dw*)((db*)&m_view+vp_zft_hi));
	// 0 ;* Dz = abs(z2 - z1)
	/* sub	si,ax */
	SUB(si, ax);
	/* sbb	di,dx */
	SBB(di, dx);
	/* jns	@F */
	if ((short)(di) >= 0) {goto dummylabel160;}
	/* not	si */
	si = ~si;
	/* not	di */
	di = ~di;
	/* add	si,1 */
	ADD(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
	/* shr	di,1 */
	SHR(di, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* adc	si,0 */
	ADC(si, 0);
	/* adc	di,0 */
	ADC(di, 0);
	/* not	si */
	si = ~si;
	/* not	di */
	di = ~di;
	/* add	si,1 */
	ADD(si, 1);
	/* adc	di,0 */
	ADC(di, 0);
	/* jmp	DzOk */
	goto dzok;
dummylabel160:
	// 5079 
	/* shr	di,1 */
	SHR(di, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* rcr	si,1 */
	RCR(si, 1);
	// 5079 
	/* adc	si,0 */
	ADC(si, 0);
	/* adc	di,0 */
	ADC(di, 0);
dzok:
	// 5081 
	/* DzOk:		pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;-------------
	// 0 ;* sample loop
	// 0 ;-------------
	// 0 ;* Dx = dx, ax
	// 0 ;* Dy = cx, bx
	// 0 ;* Dz = di, si
	/* mov	bp,4 */
	bp = 4;
collisionloop:
	// 5083 
	/* CollisionLoop:	push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* push	bp */
	PUSH(bp);
	/* add	WORD PTR M_TEST.VP_ZFT_LO,si */
	ADD(*((dw*)((db*)&m_test+vp_zft_lo)), si);
	/* adc	WORD PTR M_TEST.VP_ZFT_HI,di */
	ADC(*((dw*)((db*)&m_test+vp_zft_hi)), di);
	/* jns	@F */
	if ((short)(*((dw*)((db*)&m_test+vp_zft_hi))) >= 0) {goto dummylabel161;}
	/* mov	WORD PTR M_TEST.VP_ZFT_LO,0 */
	*((dw*)((db*)&m_test+vp_zft_lo)) = 0;
	/* mov	WORD PTR M_TEST.VP_ZFT_HI,0 */
	*((dw*)((db*)&m_test+vp_zft_hi)) = 0;
dummylabel161:
	// 5085 
	/* @@:		mov	si,OFFSET M_TEST */
	si = m2c::near_offset_external(m_test);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	// 0 ;* ground object collision
	/* mov	si,OFFSET M_TEST */
	si = m2c::near_offset_external(m_test);
	/* call	GroundCollision */
	CALLF(groundcollision, 0);
	/* jc	HitGndObject */
	if (CF) {goto hitgndobject;}
	// 0 ;* static mobile collision
	/* mov	si,OFFSET M_TEST */
	si = m2c::near_offset_external(m_test);
	/* call	StaticCollision */
	CALLF(staticcollision, 0);
	/* jc	HitMobObject */
	if (CF) {goto hitmobobject;}
	// 0 ;* mobile object collision
	/* mov	si,OFFSET M_TEST */
	si = m2c::near_offset_external(m_test);
	/* mov	di,OFFSET M_MOBILE */
	di = m2c::near_offset_external(m_mobile);
	/* call	MobileCollision */
	CALLF(mobilecollision, 0);
	/* jc	HitMobObject */
	if (CF) {goto hitmobobject;}
	// 0 ;* tree collision
	/* mov	si,OFFSET M_TEST */
	si = m2c::near_offset_external(m_test);
	/* call	TreeCollision */
	CALLF(treecollision, 0);
	/* jc	HitGndObject */
	if (CF) {goto hitgndobject;}
	// 0 ;* crater collision
	/* mov	si,OFFSET M_TEST */
	si = m2c::near_offset_external(m_test);
	/* call	CraterCollision */
	CALLF(cratercollision, 0);
	/* jc	HitMobObject */
	if (CF) {goto hitmobobject;}
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* dec	bp */
	DEC(bp);
	/* jnz	CollisionLoop */
	if (bp != 0) {goto collisionloop;}
	/* jmp	SkipCollisions */
	goto skipcollisions;
	// 0 ;---------------------------
hitgndobject:
	// 5087 
	// 0 ;---------------------------
	/* mov	HitObjectNum,al */
	hitobjectnum = al;
	// 0 ;* clean up stack
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;* destroy Tornado
	/* test	NoCollisions,1 */
	TEST(nocollisions, 1);
	/* jnz	@F */
	if ((nocollisions & 1) != 0) {goto dummylabel162;}
	/* mov	al,DIE_HIT_GND_OBJ */
	al = 21;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipCollisions */
	goto skipcollisions;
dummylabel162:
	// 5089 
	/* @@:	cmp	ShakePriority,SHAKE_COLLIDE	;;higher SHAKE_COLLIDE shake in progress? */
	CMP(shakepriority, 100);
	/* ja	__m2c_macrolocal_406_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(100)) {goto __m2c_macrolocal_406_skip;}
	/* mov	ShakePriority,SHAKE_COLLIDE */
	shakepriority = 100;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
__m2c_macrolocal_406_skip:
	// 5091 
/* m2c-phantom removed: 	R(CMP(shakepriority, 100));	// 10116 cmp	ShakePriority,SHAKE_COLLIDE	 */
/* m2c-phantom removed: 	R(shakepriority = 100;);	// 10117 mov	ShakePriority,SHAKE_COLLIDE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 10118 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 10119 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 10120 mov	ShakeTimer,50 */
	/* jmp	SkipCollisions */
	goto skipcollisions;
	// 0 ;---------------------------
hitmobobject:
	// 5093 
	// 0 ;---------------------------
	/* mov	HitObjectNum,al */
	hitobjectnum = al;
	// 0 ;* clean up stack
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;* destroy Tornado
	/* test	NoCollisions,1 */
	TEST(nocollisions, 1);
	/* jnz	@F */
	if ((nocollisions & 1) != 0) {goto dummylabel163;}
	/* mov	al,DIE_HIT_MOB_OBJ */
	al = 22;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	/* jmp	SkipCollisions */
	goto skipcollisions;
dummylabel163:
	// 5095 
	/* @@:	cmp	ShakePriority,SHAKE_COLLIDE	;;higher SHAKE_COLLIDE shake in progress? */
	CMP(shakepriority, 100);
	/* ja	__m2c_macrolocal_408_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(100)) {goto __m2c_macrolocal_408_skip;}
	/* mov	ShakePriority,SHAKE_COLLIDE */
	shakepriority = 100;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
__m2c_macrolocal_408_skip:
	// 5097 
/* m2c-phantom removed: 	R(CMP(shakepriority, 100));	// 10152 cmp	ShakePriority,SHAKE_COLLIDE	 */
/* m2c-phantom removed: 	R(shakepriority = 100;);	// 10153 mov	ShakePriority,SHAKE_COLLIDE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 10154 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 10155 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 10156 mov	ShakeTimer,50 */
skipcollisions:
	// 5099 
	/* SkipCollisions:	ret */
	RETN(0);
gameintr20:
	// 10167 
	// 0 ;----------------
	// 0 ;* scan game keys
	// 0 ;----------------
edummylabel20:
	// 5101 
	/* test	Paused,1	;paused? */
	TEST(paused, 1);
	/* jz	__m2c_macrolocal_409_skip */
	if (!(paused & 1)) {goto __m2c_macrolocal_409_skip;}
	/* jmp	ScanPaused */
	goto scanpaused;
__m2c_macrolocal_409_skip:
	// 5103 
	// 0 ;yes ->
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	__m2c_macrolocal_410_skip */
	if ((dw)(disableinput) == (dw)(0)) {goto __m2c_macrolocal_410_skip;}
	/* jmp	ScanDisabled */
	goto scandisabled;
__m2c_macrolocal_410_skip:
	// 5105 
	// 0 ;yes ->
	/* mov	bx,CrewMode */
	bx = crewmode;
__disp=*(dw*)(((db*)&kf_scanswitch)+bx);
	/* jmp	KF_ScanSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
kf_scanpilot:
	// 5107 
	// 0 ;---------------------------
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_P] */
	AND(al, *((&key)+25));
	/* or	BYTE PTR KF_TogglePitchCam[K_STATE],al */
	OR(*(db*)(((db*)&kf_togglepitchcam)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10193 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+25)));	// 10194 and	al,Key[K_P] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_H] */
	AND(al, *((&key)+35));
	/* or	BYTE PTR KF_HUDSwitch[K_STATE],al */
	OR(*(db*)(((db*)&kf_hudswitch)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10198 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+35)));	// 10199 and	al,Key[K_H] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_H] */
	AND(al, *((&key)+35));
	/* or	BYTE PTR KF_HUDOption[K_STATE],al */
	OR(*(db*)(((db*)&kf_hudoption)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10203 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+35)));	// 10204 and	al,Key[K_H] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_F1] */
	AND(al, *((&key)+59));
	/* or	BYTE PTR KF_ResetTrkCam[K_STATE],al */
	OR(*(db*)(((db*)&kf_resettrkcam)+k_state), al);
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
/* m2c-phantom removed: 	R(AND(al, *((&key)+59)));	// 10210 and	al,Key[K_F1] */
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10211 												mov	al,Key[K_CTRL] */
	/* and	al,Key[K_F2] */
	AND(al, *((&key)+60));
	/* or	BYTE PTR KF_ResetSatCam[K_STATE],al */
	OR(*(db*)(((db*)&kf_resetsatcam)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10214 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+60)));	// 10215 and	al,Key[K_F2] */
	/* mov	al,Key[K_1] */
	al = *((&key)+2);
	/* or	BYTE PTR KF_Range[K_STATE],al */
	OR(*(db*)(((db*)&kf_range)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+2););	// 10218 						mov	al,Key[K_1] */
	/* mov	al,Key[K_0] */
	al = *((&key)+11);
	/* or	BYTE PTR KF_Minimise[K_STATE],al */
	OR(*(db*)(((db*)&kf_minimise)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+11););	// 10221 						mov	al,Key[K_0] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_V] */
	AND(al, *((&key)+47));
	/* or	BYTE PTR KF_ResetWpnCam[K_STATE],al */
	OR(*(db*)(((db*)&kf_resetwpncam)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10225 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+47)));	// 10226 and	al,Key[K_V] */
	/* mov	al,Key[K_LESSTHAN] */
	al = *((&key)+51);
	/* or	BYTE PTR KF_ZoomIn[K_STATE],al */
	OR(*(db*)(((db*)&kf_zoomin)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+51););	// 10229 						mov	al,Key[K_LESSTHAN] */
	/* mov	al,Key[K_GRTRTHAN] */
	al = *((&key)+52);
	/* or	BYTE PTR KF_ZoomOut[K_STATE],al */
	OR(*(db*)(((db*)&kf_zoomout)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+52););	// 10232 						mov	al,Key[K_GRTRTHAN] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_LESSTHAN] */
	AND(al, *((&key)+51));
	/* or	BYTE PTR KF_FastZoomIn[K_STATE],al */
	OR(*(db*)(((db*)&kf_fastzoomin)+k_state), al);
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
/* m2c-phantom removed: 	R(AND(al, *((&key)+51)));	// 10237 and	al,Key[K_LESSTHAN] */
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10238 												mov	al,Key[K_SHIFT] */
	/* and	al,Key[K_GRTRTHAN] */
	AND(al, *((&key)+52));
	/* or	BYTE PTR KF_FastZoomOut[K_STATE],al */
	OR(*(db*)(((db*)&kf_fastzoomout)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10241 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+52)));	// 10242 and	al,Key[K_GRTRTHAN] */
	/* mov	al,Key[K_X] */
	al = *((&key)+45);
	/* or	BYTE PTR KF_TrackClk[K_STATE],al */
	OR(*(db*)(((db*)&kf_trackclk)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+45););	// 10245 					    mov	al,Key[K_X] */
	/* mov	al,Key[K_Z] */
	al = *((&key)+44);
	/* or	BYTE PTR KF_TrackAClk[K_STATE],al */
	OR(*(db*)(((db*)&kf_trackaclk)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+44););	// 10248 						mov	al,Key[K_Z] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_X] */
	AND(al, *((&key)+45));
	/* or	BYTE PTR KF_FastTrkClk[K_STATE],al */
	OR(*(db*)(((db*)&kf_fasttrkclk)+k_state), al);
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
/* m2c-phantom removed: 	R(AND(al, *((&key)+45)));	// 10253 and	al,Key[K_X] */
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10254 												mov	al,Key[K_SHIFT] */
	/* and	al,Key[K_Z] */
	AND(al, *((&key)+44));
	/* or	BYTE PTR KF_FastTrkAClk[K_STATE],al */
	OR(*(db*)(((db*)&kf_fasttrkaclk)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10257 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+44)));	// 10258 and	al,Key[K_Z] */
	/* jmp	KF_ScanCommon */
	goto kf_scancommon;
	// 0 ;---------------------------
kf_scannavig:
	// 5109 
	// 0 ;---------------------------
	/* mov	al,Key[K_TAB] */
	al = *((&key)+15);
	/* or	BYTE PTR KF_DispSelect[K_STATE],al */
	OR(*(db*)(((db*)&kf_dispselect)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+15););	// 10269 						mov	al,Key[K_TAB] */
	/* mov	al,Key[K_OPN_SQ_BRKT] */
	al = *((&key)+26);
	/* or	BYTE PTR KF_TAB1Select[K_STATE],al */
	OR(*(db*)(((db*)&kf_tab1select)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+26););	// 10272 						mov	al,Key[K_OPN_SQ_BRKT] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_OPN_SQ_BRKT] */
	AND(al, *((&key)+26));
	/* or	BYTE PTR KF_TAB1Toggle[K_STATE],al */
	OR(*(db*)(((db*)&kf_tab1toggle)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10276 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+26)));	// 10277 and	al,Key[K_OPN_SQ_BRKT] */
	/* mov	al,Key[K_CLS_SQ_BRKT] */
	al = *((&key)+27);
	/* or	BYTE PTR KF_TAB2Select[K_STATE],al */
	OR(*(db*)(((db*)&kf_tab2select)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+27););	// 10280 						mov	al,Key[K_CLS_SQ_BRKT] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_CLS_SQ_BRKT] */
	AND(al, *((&key)+27));
	/* or	BYTE PTR KF_TAB2Toggle[K_STATE],al */
	OR(*(db*)(((db*)&kf_tab2toggle)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10284 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+27)));	// 10285 and	al,Key[K_CLS_SQ_BRKT] */
	// 0 ;---------------------------
kf_scancommon:
	// 5111 
	// 0 ;---------------------------
	/* mov	al,Key[K_HOME] */
	al = *((&key)+71);
	/* or	BYTE PTR KF_PilotView[K_STATE],al */
	OR(*(db*)(((db*)&kf_pilotview)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+71););	// 10295 						mov	al,Key[K_HOME] */
	/* mov	al,Key[K_PGUP] */
	al = *((&key)+73);
	/* or	BYTE PTR KF_NavigView[K_STATE],al */
	OR(*(db*)(((db*)&kf_navigview)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+73););	// 10298 						mov	al,Key[K_PGUP] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_PGUP] */
	AND(al, *((&key)+73));
	/* or	BYTE PTR KF_NavigViewWithCtrl[K_STATE],al */
	OR(*(db*)(((db*)&kf_navigviewwithctrl)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10302 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+73)));	// 10303 and	al,Key[K_PGUP] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_END] */
	AND(al, *((&key)+79));
	/* or	BYTE PTR KF_LViewFix[K_STATE],al */
	OR(*(db*)(((db*)&kf_lviewfix)+k_state), al);
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
/* m2c-phantom removed: 	R(AND(al, *((&key)+79)));	// 10308 and	al,Key[K_END] */
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10309 												mov	al,Key[K_SHIFT] */
	/* and	al,Key[K_PGDN] */
	AND(al, *((&key)+81));
	/* or	BYTE PTR KF_RViewFix[K_STATE],al */
	OR(*(db*)(((db*)&kf_rviewfix)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10312 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+81)));	// 10313 and	al,Key[K_PGDN] */
	/* mov	al,Key[K_END] */
	al = *((&key)+79);
	/* or	BYTE PTR KF_LViewGlance[K_STATE],al */
	OR(*(db*)(((db*)&kf_lviewglance)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+79););	// 10316 						mov	al,Key[K_END] */
	/* mov	al,Key[K_PGDN] */
	al = *((&key)+81);
	/* or	BYTE PTR KF_RViewGlance[K_STATE],al */
	OR(*(db*)(((db*)&kf_rviewglance)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+81););	// 10319 						mov	al,Key[K_PGDN] */
	/* mov	al,Key[K_F1] */
	al = *((&key)+59);
	/* or	BYTE PTR KF_TrackingCam[K_STATE],al */
	OR(*(db*)(((db*)&kf_trackingcam)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+59););	// 10322 						mov	al,Key[K_F1] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_F1] */
	AND(al, *((&key)+59));
	/* or	BYTE PTR KF_TrackingCamUp[K_STATE],al */
	OR(*(db*)(((db*)&kf_trackingcamup)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10326 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+59)));	// 10327 and	al,Key[K_F1] */
	/* mov	al,Key[K_F2] */
	al = *((&key)+60);
	/* or	BYTE PTR KF_SatelliteCam[K_STATE],al */
	OR(*(db*)(((db*)&kf_satellitecam)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+60););	// 10330 						mov	al,Key[K_F2] */
	/* mov	al,Key[K_F3] */
	al = *((&key)+61);
	/* or	BYTE PTR KF_RemoteView[K_STATE],al */
	OR(*(db*)(((db*)&kf_remoteview)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+61););	// 10333 						mov	al,Key[K_F3] */
	/* mov	al,Key[K_F4] */
	al = *((&key)+62);
	/* or	BYTE PTR KF_Spectator[K_STATE],al */
	OR(*(db*)(((db*)&kf_spectator)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+62););	// 10337 						mov	al,Key[K_F4] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_F4] */
	AND(al, *((&key)+62));
	/* or	BYTE PTR KF_RestoreSpec[K_STATE],al */
	OR(*(db*)(((db*)&kf_restorespec)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10341 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+62)));	// 10342 and	al,Key[K_F4] */
	/* mov	al,Key[K_F5] */
	al = *((&key)+63);
	/* or	BYTE PTR KF_DroneView[K_STATE],al */
	OR(*(db*)(((db*)&kf_droneview)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+63););	// 10345 						mov	al,Key[K_F5] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_F5] */
	AND(al, *((&key)+63));
	/* or	BYTE PTR KF_DronePrev[K_STATE],al */
	OR(*(db*)(((db*)&kf_droneprev)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10349 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+63)));	// 10350 and	al,Key[K_F5] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_F5] */
	AND(al, *((&key)+63));
	/* or	BYTE PTR KF_DroneSide[K_STATE],al */
	OR(*(db*)(((db*)&kf_droneside)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10354 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+63)));	// 10355 and	al,Key[K_F5] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_F5] */
	AND(al, *((&key)+63));
	/* or	BYTE PTR KF_DroneType[K_STATE],al */
	OR(*(db*)(((db*)&kf_dronetype)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10359 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+63)));	// 10360 and	al,Key[K_F5] */
	/* mov	al,Key[K_M] */
	al = *((&key)+50);
	/* or	BYTE PTR KF_MapView[K_STATE],al */
	OR(*(db*)(((db*)&kf_mapview)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+50););	// 10363 						mov	al,Key[K_M] */
	/* mov	al,Key[K_NUMLOCK] */
	al = *((&key)+69);
	/* or	BYTE PTR KF_LookDown[K_STATE],al */
	OR(*(db*)(((db*)&kf_lookdown)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+69););	// 10366 						mov	al,Key[K_NUMLOCK] */
	/* mov	al,Key[K_V] */
	al = *((&key)+47);
	/* or	BYTE PTR KF_ViewWeapon[K_STATE],al */
	OR(*(db*)(((db*)&kf_viewweapon)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+47););	// 10369 						mov	al,Key[K_V] */
	/* mov	al,Key[K_6] */
	al = *((&key)+7);
	/* or	BYTE PTR KF_IronWork[K_STATE],al */
	OR(*(db*)(((db*)&kf_ironwork)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+7););	// 10373 						mov	al,Key[K_6] */
	/* mov	al,Key[K_7] */
	al = *((&key)+8);
	/* or	BYTE PTR KF_Control[K_STATE],al */
	OR(*(db*)(((db*)&kf_control)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+8););	// 10376 						mov	al,Key[K_7] */
	/* mov	al,Key[K_8] */
	al = *((&key)+9);
	/* or	BYTE PTR KF_Sound[K_STATE],al */
	OR(*(db*)(((db*)&kf_sound)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+9););	// 10379 				        mov	al,Key[K_8] */
	/* mov	al,Key[K_9] */
	al = *((&key)+10);
	/* or	BYTE PTR KF_Yaw[K_STATE],al */
	OR(*(db*)(((db*)&kf_yaw)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+10););	// 10382 						mov	al,Key[K_9] */
	/* mov	al,Key[K_U] */
	al = *((&key)+22);
	/* or	al,Key[K_G] */
	OR(al, *((&key)+34));
	/* or	BYTE PTR KF_Gear[K_STATE],al */
	OR(*(db*)(((db*)&kf_gear)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+22););	// 10387 						mov	al,Key[K_U] */
/* m2c-phantom removed: 	R(OR(al, *((&key)+34)));	// 10388 or	al,Key[K_G] */
	/* mov	al,Key[K_B] */
	al = *((&key)+48);
	/* or	BYTE PTR KF_WheelBrakes[K_STATE],al */
	OR(*(db*)(((db*)&kf_wheelbrakes)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+48););	// 10391 						mov	al,Key[K_B] */
	/* mov	al,Key[K_BACKSPACE] */
	al = *((&key)+14);
	/* or	BYTE PTR KF_AirBrakes[K_STATE],al */
	OR(*(db*)(((db*)&kf_airbrakes)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+14););	// 10394 						mov	al,Key[K_BACKSPACE] */
	/* mov	al,Key[K_W] */
	al = *((&key)+17);
	/* or	BYTE PTR KF_WingSwpFwd[K_STATE],al */
	OR(*(db*)(((db*)&kf_wingswpfwd)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+17););	// 10397 						mov	al,Key[K_W] */
	/* mov	al,Key[K_S] */
	al = *((&key)+31);
	/* or	BYTE PTR KF_WingSwpBack[K_STATE],al */
	OR(*(db*)(((db*)&kf_wingswpback)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+31););	// 10400 						mov	al,Key[K_S] */
	/* mov	al,Key[K_Q] */
	al = *((&key)+16);
	/* or	BYTE PTR KF_FlapsUp[K_STATE],al */
	OR(*(db*)(((db*)&kf_flapsup)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+16););	// 10403 						mov	al,Key[K_Q] */
	/* mov	al,Key[K_A] */
	al = *((&key)+30);
	/* or	BYTE PTR KF_FlapsDn[K_STATE],al */
	OR(*(db*)(((db*)&kf_flapsdn)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+30););	// 10406 						mov	al,Key[K_A] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_I] */
	AND(al, *((&key)+23));
	/* or	BYTE PTR KF_SPILS[K_STATE],al */
	OR(*(db*)(((db*)&kf_spils)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10410 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+23)));	// 10411 and	al,Key[K_I] */
	/* mov	al,Key[K_D] */
	al = *((&key)+32);
	/* or	BYTE PTR KF_MFDSelect[K_STATE],al */
	OR(*(db*)(((db*)&kf_mfdselect)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+32););	// 10415 						mov	al,Key[K_D] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_D] */
	AND(al, *((&key)+32));
	/* or	BYTE PTR KF_MFDToggle[K_STATE],al */
	OR(*(db*)(((db*)&kf_mfdtoggle)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10419 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+32)));	// 10420 and	al,Key[K_D] */
	/* mov	al,Key[K_LESSTHAN] */
	al = *((&key)+51);
	/* or	BYTE PTR KF_MapZoomIn[K_STATE],al */
	OR(*(db*)(((db*)&kf_mapzoomin)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+51););	// 10423 						mov	al,Key[K_LESSTHAN] */
	/* mov	al,Key[K_GRTRTHAN] */
	al = *((&key)+52);
	/* or	BYTE PTR KF_MapZoomOut[K_STATE],al */
	OR(*(db*)(((db*)&kf_mapzoomout)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+52););	// 10426 						mov	al,Key[K_GRTRTHAN] */
	/* mov	al,Key[K_O] */
	al = *((&key)+24);
	/* or	BYTE PTR KF_MapOrigin[K_STATE],al */
	OR(*(db*)(((db*)&kf_maporigin)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+24););	// 10429 						mov	al,Key[K_O] */
	/* mov	al,Key[K_R] */
	al = *((&key)+19);
	/* or	BYTE PTR KF_GndRadar[K_STATE],al */
	OR(*(db*)(((db*)&kf_gndradar)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+19););	// 10433 						mov	al,Key[K_R] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_R] */
	AND(al, *((&key)+19));
	/* or	BYTE PTR KF_AirRadar[K_STATE],al */
	OR(*(db*)(((db*)&kf_airradar)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10437 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+19)));	// 10438 and	al,Key[K_R] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_R] */
	AND(al, *((&key)+19));
	/* or	BYTE PTR KF_RadarOff[K_STATE],al */
	OR(*(db*)(((db*)&kf_radaroff)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10442 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+19)));	// 10443 and	al,Key[K_R] */
	/* mov	al,Key[K_CAPSLOCK] */
	al = *((&key)+58);
	/* or	BYTE PTR KF_BoreSight[K_STATE],al */
	OR(*(db*)(((db*)&kf_boresight)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+58););	// 10446 						mov	al,Key[K_CAPSLOCK] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_CAPSLOCK] */
	AND(al, *((&key)+58));
	/* or	BYTE PTR KF_CycleAirTgt[K_STATE],al */
	OR(*(db*)(((db*)&kf_cycleairtgt)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10450 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+58)));	// 10451 and	al,Key[K_CAPSLOCK] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_CAPSLOCK] */
	AND(al, *((&key)+58));
	/* or	BYTE PTR KF_CancelAirTgt[K_STATE],al */
	OR(*(db*)(((db*)&kf_cancelairtgt)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10455 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+58)));	// 10456 and	al,Key[K_CAPSLOCK] */
	/* mov	al,Key[K_ENTER] */
	al = *((&key)+28);
	/* or	BYTE PTR KF_ArmGnd[K_STATE],al */
	OR(*(db*)(((db*)&kf_armgnd)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+28););	// 10461 						mov	al,Key[K_ENTER] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_ENTER] */
	AND(al, *((&key)+28));
	/* or	BYTE PTR KF_ArmAir[K_STATE],al */
	OR(*(db*)(((db*)&kf_armair)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10465 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+28)));	// 10466 and	al,Key[K_ENTER] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_ENTER] */
	AND(al, *((&key)+28));
	/* or	BYTE PTR KF_ArmOff[K_STATE],al */
	OR(*(db*)(((db*)&kf_armoff)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10470 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+28)));	// 10471 and	al,Key[K_ENTER] */
	/* mov	al,Key[K_K] */
	al = *((&key)+37);
	/* or	BYTE PTR KF_Package[K_STATE],al */
	OR(*(db*)(((db*)&kf_package)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+37););	// 10475 						mov	al,Key[K_K] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_SHIFT] */
	AND(al, *((&key)+42));
	/* or	BYTE PTR KF_ChangeArmor[K_STATE],al */
	OR(*(db*)(((db*)&kf_changearmor)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10479 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+42)));	// 10480 and	al,Key[K_SHIFT] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_SHIFT] */
	AND(al, *((&key)+42));
	/* or	BYTE PTR KF_ArmorCtrlShift[K_STATE],al */
	OR(*(db*)(((db*)&kf_armorctrlshift)+k_state), al);
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
/* m2c-phantom removed: 	R(AND(al, *((&key)+42)));	// 10485 and	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10486 												mov	al,Key[K_CTRL] */
	/* and	al,Key[K_ALT] */
	AND(al, *((&key)+56));
	/* or	BYTE PTR KF_ArmorCtrlAlt[K_STATE],al */
	OR(*(db*)(((db*)&kf_armorctrlalt)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10489 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+56)));	// 10490 and	al,Key[K_ALT] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_BACKSLASH] */
	AND(al, *((&key)+86));
	/* or	BYTE PTR KF_ArmorDown[K_STATE],al */
	OR(*(db*)(((db*)&kf_armordown)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10494 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+86)));	// 10495 and	al,Key[K_BACKSLASH] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_BACKSLASH] */
	AND(al, *((&key)+86));
	/* or	BYTE PTR KF_TurnEScopeOn[K_STATE],al */
	OR(*(db*)(((db*)&kf_turnescopeon)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10499 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+86)));	// 10500 and	al,Key[K_BACKSLASH] */
	/* mov	al,Key[K_L] */
	al = *((&key)+38);
	/* or	BYTE PTR KF_WpnMode[K_STATE],al */
	OR(*(db*)(((db*)&kf_wpnmode)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+38););	// 10503 						mov	al,Key[K_L] */
	/* mov	al,Key[K_SEMICOLON] */
	al = *((&key)+39);
	/* or	BYTE PTR KF_AirWeapon[K_STATE],al */
	OR(*(db*)(((db*)&kf_airweapon)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+39););	// 10506 						mov	al,Key[K_SEMICOLON] */
	/* mov	al,Key[K_SPACE] */
	al = *((&key)+57);
	/* or	BYTE PTR KF_WpnFire[K_STATE],al */
	OR(*(db*)(((db*)&kf_wpnfire)+k_state), al);
	/* mov	al,Key[K_SPACE] */
	al = *((&key)+57);
/* m2c-phantom removed: 	R(al = *((&key)+57););	// 10511 												mov	al,Key[K_SPACE] */
	/* or	BYTE PTR KF_WpnCommit[K_STATE],al */
	OR(*(db*)(((db*)&kf_wpncommit)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+57););	// 10513 						mov	al,Key[K_SPACE] */
	/* mov	al,Key[K_E] */
	al = *((&key)+18);
	/* or	BYTE PTR KF_ECM[K_STATE],al */
	OR(*(db*)(((db*)&kf_ecm)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+18););	// 10517 						mov	al,Key[K_E] */
	/* mov	al,Key[K_C] */
	al = *((&key)+46);
	/* or	BYTE PTR KF_Chaff[K_STATE],al */
	OR(*(db*)(((db*)&kf_chaff)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+46););	// 10520 						mov	al,Key[K_C] */
	/* mov	al,Key[K_F] */
	al = *((&key)+33);
	/* or	BYTE PTR KF_Flare[K_STATE],al */
	OR(*(db*)(((db*)&kf_flare)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+33););	// 10523 					    mov	al,Key[K_F] */
	/* mov	al,Key[K_ESC] */
	al = *((&key)+1);
	/* or	BYTE PTR KF_AutoCancel[K_STATE],al */
	OR(*(db*)(((db*)&kf_autocancel)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+1););	// 10526 						mov	al,Key[K_ESC] */
	/* mov	al,Key[K_F6] */
	al = *((&key)+64);
	/* or	BYTE PTR KF_Approach[K_STATE],al */
	OR(*(db*)(((db*)&kf_approach)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+64););	// 10529 						mov	al,Key[K_F6] */
	/* mov	al,Key[K_F7] */
	al = *((&key)+65);
	/* or	BYTE PTR KF_Track[K_STATE],al */
	OR(*(db*)(((db*)&kf_track)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+65););	// 10532 						mov	al,Key[K_F7] */
	/* mov	al,Key[K_F8] */
	al = *((&key)+66);
	/* or	BYTE PTR KF_Hold[K_STATE],al */
	OR(*(db*)(((db*)&kf_hold)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+66););	// 10535 						mov	al,Key[K_F8] */
	/* mov	al,Key[K_F9] */
	al = *((&key)+67);
	/* or	BYTE PTR KF_TFollow[K_STATE],al */
	OR(*(db*)(((db*)&kf_tfollow)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+67););	// 10538 						mov	al,Key[K_F9] */
	/* mov	al,Key[K_F10] */
	al = *((&key)+68);
	/* or	BYTE PTR KF_Throttle[K_STATE],al */
	OR(*(db*)(((db*)&kf_throttle)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+68););	// 10541 						mov	al,Key[K_F10] */
	/* mov	al,Key[K_F11] */
	al = *((&key)+87);
	/* or	BYTE PTR KF_SAMLauncherToTornado[K_STATE],al */
	OR(*(db*)(((db*)&kf_samlaunchertotornado)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+87););	// 10544 						mov	al,Key[K_F11] */
	/* mov	al,Key[K_F12] */
	al = *((&key)+88);
	/* or	BYTE PTR KF_AAAToTornadoView1[K_STATE],al */
	OR(*(db*)(((db*)&kf_aaatotornadoview1)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+88););	// 10547 						mov	al,Key[K_F12] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_F12] */
	AND(al, *((&key)+88));
	/* or	BYTE PTR KF_AAAToTornadoView2[K_STATE],al */
	OR(*(db*)(((db*)&kf_aaatotornadoview2)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10551 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+88)));	// 10552 and	al,Key[K_F12] */
	/* mov	al,Key[K_CENTRE] */
	al = *((&key)+76);
	/* or	BYTE PTR KF_AutoTrim[K_STATE],al */
	OR(*(db*)(((db*)&kf_autotrim)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+76););	// 10555 						mov	al,Key[K_CENTRE] */
	/* mov	al,Key[K_N] */
	al = *((&key)+49);
	/* or	BYTE PTR KF_SkipWaypoint[K_STATE],al */
	OR(*(db*)(((db*)&kf_skipwaypoint)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+49););	// 10559 						mov	al,Key[K_N] */
	/* mov	al,Key[K_T] */
	al = *((&key)+20);
	/* or	BYTE PTR KF_SelectTgtWP[K_STATE],al */
	OR(*(db*)(((db*)&kf_selecttgtwp)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+20););	// 10562 						mov	al,Key[K_T] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_T] */
	AND(al, *((&key)+20));
	/* or	BYTE PTR KF_CancelTgtWP[K_STATE],al */
	OR(*(db*)(((db*)&kf_canceltgtwp)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10566 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+20)));	// 10567 and	al,Key[K_T] */
	/* mov	al,Key[K_ALT] */
	al = *((&key)+56);
	/* and	al,Key[K_J] */
	AND(al, *((&key)+36));
	/* or	BYTE PTR KF_JetExtTanks[K_STATE],al */
	OR(*(db*)(((db*)&kf_jetexttanks)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+56););	// 10572 						mov	al,Key[K_ALT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+36)));	// 10573 and	al,Key[K_J] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_J] */
	AND(al, *((&key)+36));
	/* or	BYTE PTR KF_JetExtStores[K_STATE],al */
	OR(*(db*)(((db*)&kf_jetextstores)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10577 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+36)));	// 10578 and	al,Key[K_J] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_J] */
	AND(al, *((&key)+36));
	/* or	BYTE PTR KF_JetAll[K_STATE],al */
	OR(*(db*)(((db*)&kf_jetall)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10582 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+36)));	// 10583 and	al,Key[K_J] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_E] */
	AND(al, *((&key)+18));
	/* or	BYTE PTR KF_Eject[K_STATE],al */
	OR(*(db*)(((db*)&kf_eject)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10588 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+18)));	// 10589 and	al,Key[K_E] */
	/* mov	al,Key[K_PAD_STAR] */
	al = *((&key)+55);
	/* or	al,Key[K_APOSTROPHE] */
	OR(al, *((&key)+40));
	/* or	BYTE PTR KF_CancelAttn[K_STATE],al */
	OR(*(db*)(((db*)&kf_cancelattn)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+55););	// 10593 						mov	al,Key[K_PAD_STAR] */
/* m2c-phantom removed: 	R(OR(al, *((&key)+40)));	// 10594 or	al,Key[K_APOSTROPHE] */
	/* mov	al,Key[K_Y] */
	al = *((&key)+21);
	/* or	BYTE PTR KF_Recal[K_STATE],al */
	OR(*(db*)(((db*)&kf_recal)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+21););	// 10597 						mov	al,Key[K_Y] */
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_Y] */
	AND(al, *((&key)+21));
	/* or	BYTE PTR KF_JoySensNorm[K_STATE],al */
	OR(*(db*)(((db*)&kf_joysensnorm)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10601 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+21)));	// 10602 and	al,Key[K_Y] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_Y] */
	AND(al, *((&key)+21));
	/* or	BYTE PTR KF_JoySensHigh[K_STATE],al */
	OR(*(db*)(((db*)&kf_joysenshigh)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10606 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+21)));	// 10607 and	al,Key[K_Y] */
scandisabled:
	// 5113 
	// 0 ;scan when input disabled
	// 0 ;---------------------------
	// 0 ;KUPDATE	KF_Range,K_1
	/* mov	al,Key[K_2] */
	al = *((&key)+3);
	/* or	BYTE PTR KF_GndText[K_STATE],al */
	OR(*(db*)(((db*)&kf_gndtext)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+3););	// 10615 						mov	al,Key[K_2] */
	/* mov	al,Key[K_3] */
	al = *((&key)+4);
	/* or	BYTE PTR KF_HillText[K_STATE],al */
	OR(*(db*)(((db*)&kf_hilltext)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+4););	// 10618 						mov	al,Key[K_3] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_3] */
	AND(al, *((&key)+4));
	/* or	BYTE PTR KF_HillTextCancel[K_STATE],al */
	OR(*(db*)(((db*)&kf_hilltextcancel)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10622 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+4)));	// 10623 and	al,Key[K_3] */
	// 0 ;KUPDATE KF_HillTextReverse,K_ALT,_AND_,K_3
	/* mov	al,Key[K_4] */
	al = *((&key)+5);
	/* or	BYTE PTR KF_Clouds[K_STATE],al */
	OR(*(db*)(((db*)&kf_clouds)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+5););	// 10627 						mov	al,Key[K_4] */
	/* mov	al,Key[K_5] */
	al = *((&key)+6);
	/* or	BYTE PTR KF_Horizon[K_STATE],al */
	OR(*(db*)(((db*)&kf_horizon)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+6););	// 10630 						mov	al,Key[K_5] */
	// 0 ;KUPDATE	KF_Minimise,K_0
	// 0 ;---------------------------
scanpaused:
	// 5115 
	// 0 ;scan when input disabled or paused
	// 0 ;---------------------------
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_Q] */
	AND(al, *((&key)+16));
	/* or	BYTE PTR KF_Quit[K_STATE],al */
	OR(*(db*)(((db*)&kf_quit)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+29););	// 10640 						mov	al,Key[K_CTRL] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+16)));	// 10641 and	al,Key[K_Q] */
	/* mov	al,Key[K_P] */
	al = *((&key)+25);
	/* or	BYTE PTR KF_Pause[K_STATE],al */
	OR(*(db*)(((db*)&kf_pause)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+25););	// 10644 						mov	al,Key[K_P] */
	/* mov	al,Key[K_SHIFT] */
	al = *((&key)+42);
	/* and	al,Key[K_D] */
	AND(al, *((&key)+32));
	/* or	BYTE PTR KF_Full_MFD[K_STATE],al */
	OR(*(db*)(((db*)&kf_full_mfd)+k_state), al);
/* m2c-phantom removed: 	R(al = *((&key)+42););	// 10648 						mov	al,Key[K_SHIFT] */
/* m2c-phantom removed: 	R(AND(al, *((&key)+32)));	// 10649 and	al,Key[K_D] */
	// 0 ;-----------
	// 0 ;* wash roll
	// 0 ;-----------
	// 0 ;* wash roll if input disabled but not if paused
	/* test	Paused,1	;paused? */
	TEST(paused, 1);
	/* jnz	ExitIntr20	;yes -> */
	if ((paused & 1) != 0) {goto exitintr20;}
	// 0 ;* do not wash roll of auto-heading active
	/* test	AHFlag,1	;auto-heading active? */
	TEST(ahflag, 1);
	/* jnz	ExitIntr20	;yes -> */
	if ((ahflag & 1) != 0) {goto exitintr20;}
	// 0 ;* do not wash roll if ailerons active or rolling
	/* mov	ax,AilPosn */
	ax = ailposn;
	/* or	ax,RollRate	;ailerons active or rolling? */
	OR(ax, rollrate);
	/* jnz	ExitIntr20	;yes -> */
	if (ax != 0) {goto exitintr20;}
	/* mov	ax,RFine */
	ax = rfine;
	/* cmp	ax,RWASH_THRESH*128 */
	CMP(ax, 7*128);
	/* jbe	WashRoll1	;wash roll left to 360 degs -> */
	if ((dw)(ax) <= (dw)(7*128)) {goto washroll1;}
	/* cmp	ax,(256-RWASH_THRESH)*128 */
	CMP(ax, (256-7)*128);
	/* jb	ExitIntr20	;ignore wash -> */
	if ((dw)(ax) < (dw)((256-7)*128)) {goto exitintr20;}
	/* cmp	ax,256*128 */
	CMP(ax, 256*128);
	/* jbe	WashRoll2	;wash roll right to 180 degs -> */
	if ((dw)(ax) <= (dw)(256*128)) {goto washroll2;}
	/* cmp	ax,(256+RWASH_THRESH)*128 */
	CMP(ax, (256+7)*128);
	/* jbe	WashRoll3	;wash roll left to 180 degs -> */
	if ((dw)(ax) <= (dw)((256+7)*128)) {goto washroll3;}
	/* cmp	ax,(512-RWASH_THRESH)*128 */
	CMP(ax, (512-7)*128);
	/* jb	ExitIntr20	;ignore wash -> */
	if ((dw)(ax) < (dw)((512-7)*128)) {goto exitintr20;}
	// 0 ;* wash roll right to 360 degs
washroll4:
	// 5117 
	/* WashRoll4:	xor	dx,dx */
	XOR(dx, dx);
	/* sub	dx,ax		;delta roll = (360 degs - roll) */
	SUB(dx, ax);
	/* cmp	dx,RWASH_RATE	;delta roll <= wash rate? */
	CMP(dx, 40);
	/* jbe	@F		;yes -> */
	if ((dw)(dx) <= (dw)(40)) {goto dummylabel164;}
	/* mov	dx,RWASH_RATE	;limit to wash rate */
	dx = 40;
dummylabel164:
	// 5119 
	/* @@:		add	ax,dx */
	ADD(ax, dx);
	/* jmp	WashRollOk */
	goto washrollok;
	// 0 ;* wash roll left to 180 degs
washroll3:
	// 5121 
	/* WashRoll3:	mov	dx,ax */
	dx = ax;
	/* sub	dx,256*128	;delta roll = (roll - 180 degs) */
	SUB(dx, 256*128);
	/* cmp	dx,RWASH_RATE	;delta roll <= wash rate? */
	CMP(dx, 40);
	/* jbe	@F		;yes -> */
	if ((dw)(dx) <= (dw)(40)) {goto dummylabel165;}
	/* mov	dx,RWASH_RATE	;limit to wash rate */
	dx = 40;
dummylabel165:
	// 5123 
	/* @@:		sub	ax,dx */
	SUB(ax, dx);
	/* jmp	WashRollOk */
	goto washrollok;
	// 0 ;* wash roll right to 180 degs
washroll2:
	// 5125 
	/* WashRoll2:	mov	dx,256*128 */
	dx = 256*128;
	/* sub	dx,ax		;delta roll = (180 degs - roll) */
	SUB(dx, ax);
	/* cmp	dx,RWASH_RATE	;delta roll <= wash rate? */
	CMP(dx, 40);
	/* jbe	@F		;yes -> */
	if ((dw)(dx) <= (dw)(40)) {goto dummylabel166;}
	/* mov	dx,RWASH_RATE	;limit to wash rate */
	dx = 40;
dummylabel166:
	// 5127 
	/* @@:		add	ax,dx */
	ADD(ax, dx);
	/* jmp	WashRollOk */
	goto washrollok;
	// 0 ;* wash roll left to 360 degs
washroll1:
	// 5129 
	/* WashRoll1:	mov	dx,ax		;delta roll = roll */
	dx = ax;
	/* cmp	dx,RWASH_RATE	;delta roll <= wash rate? */
	CMP(dx, 40);
	/* jbe	@F		;yes -> */
	if ((dw)(dx) <= (dw)(40)) {goto dummylabel167;}
	/* mov	dx,RWASH_RATE	;limit to wash rate */
	dx = 40;
dummylabel167:
	// 5131 
	/* @@:		sub	ax,dx */
	SUB(ax, dx);
washrollok:
	// 5133 
	/* WashRollOk:	mov	RFine,ax */
	rfine = ax;
exitintr20:
	// 5135 
	/* ExitIntr20:	ret */
	RETF(0);
gameintr100:
	// 10759
	// 0 ;-----------------------------------
	// 0 ;* check if input disabled or paused
	// 0 ;-----------------------------------
edummylabel21:
	// 5137 
	/* test	Paused,1	;paused? */
	TEST(paused, 1);
	/* jz	__m2c_macrolocal_520_skip */
	if (!(paused & 1)) {goto __m2c_macrolocal_520_skip;}
	/* jmp	GameIntr50 */
	goto gameintr50;
__m2c_macrolocal_520_skip:
	// 5139 
	// 0 ;yes ->
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	@F		;no -> */
	if ((dw)(disableinput) == (dw)(0)) {goto dummylabel168;}
	/* xor	ax,ax		;reset all controls */
	XOR(ax, ax);
	/* mov	ElePosn,ax */
	eleposn = ax;
	/* mov	AilPosn,ax */
	ailposn = ax;
	/* mov	RudPosn,ax */
	rudposn = ax;
	/* jmp	KbdStatus */
	goto kbdstatus;
	// 0 ;-----------------------
	// 0 ;* control device switch
	// 0 ;-----------------------
dummylabel168:
	// 5141 
	/* @@:		mov	bx,ControlDevice */
	bx = controldevice;
__disp=*(dw*)(((db*)&kbdctrlswitch)+bx);
	/* jmp	KbdCtrlSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;===========================
kbdelevators:
	// 5143 
	// 0 ;===========================
	/* mov	bx,AltMode */
	bx = altmode;
__disp=*(dw*)(((db*)&kbdeleswitch)+bx);
	/* jmp	KbdEleSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
kbdelemanual:
	// 5145 
	// 0 ;ALT_MANUAL
	// 0 ;---------------------------
	/* mov	bl,Key[K_CRSRDN]	;pull */
	bl = *((&key)+80);
	/* shl	bl,1 */
	SHL(bl, 1);
	/* or	bl,Key[K_CRSRUP]	;push */
	OR(bl, *((&key)+72));
	/* jz	@F	  	;no input -> */
	if (bl == 0) {goto dummylabel169;}
	/* mov	AutoTrim,0  	;elevator demand, cancel auto-trim */
	autotrim = 0;
dummylabel169:
	// 5147 
	/* @@:		mov	ax,ElePosn */
	ax = eleposn;
	/* mov	dx,EleKbdRate */
	dx = elekbdrate;
	/* mov	bp,EleKbdWash */
	bp = elekbdwash;
	/* call	UpdatePosn */
	CALL(updateposn, 0);
	/* mov	ElePosn,ax */
	eleposn = ax;
	/* jmp	KbdAilerons */
	goto kbdailerons;
	// 0 ;---------------------------
kbdeleapproach:
	// 5149 
	// 0 ;ALT_APPROACH
	// 0 ;---------------------------
	/* mov	ElePosn,0 */
	eleposn = 0;
	/* jmp	KbdAilerons */
	goto kbdailerons;
	// 0 ;---------------------------
kbdeleacquire:
	// 5151 
	// 0 ;ALT_ACQUIRE
	// 0 ;---------------------------
	/* mov	ElePosn,0 */
	eleposn = 0;
	// 0 ;* inc AutoAlt
	/* test	Key[K_CRSRDN],1	;inc key pressed? */
	TEST(*((&key)+80), 1);
	/* jz	SkipIncAlt     	;no -> */
	if (!(*((&key)+80) & 1)) {goto skipincalt;}
	/* test	OldCrsrDn,1	;key pressed last intr? */
	TEST(oldcrsrdn, 1);
	/* jnz	@F		;yes -> */
	if ((oldcrsrdn & 1) != 0) {goto dummylabel170;}
	/* mov	AutoAltDelay,KBD_AUTO_RPT */
	autoaltdelay = 50;
	/* mov	ax,256*10	;assume ALT key not pressed */
	ax = 256*10;
	/* test	Key[K_ALT],1	;alt key pressed? */
	TEST(*((&key)+56), 1);
	/* jz	ContIncAlt */
	if (!(*((&key)+56) & 1)) {goto contincalt;}
	/* mov	ax,256 */
	ax = 256;
	/* jmp	ContIncAlt */
	goto contincalt;
dummylabel170:
	// 5153 
	/* @@:		mov	ax,AutoAltDelay */
	ax = autoaltdelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel171;}
	/* dec	ax */
	DEC(ax);
	/* mov	AutoAltDelay,ax */
	autoaltdelay = ax;
	/* jmp	KbdAilerons */
	goto kbdailerons;
dummylabel171:
	// 5155 
	/* @@:		mov	ax,256*10 */
	ax = 256*10;
	/* mov	cl,Key[K_ALT] */
	cl = *((&key)+56);
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* shr	ax,cl		;/1 or /16 */
	SHR(ax, cl);
contincalt:
	// 5157 
	/* ContIncAlt:	xor	dh,dh */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* add	ax,AutoAltFine */
	ADD(ax, autoaltfine);
	/* adc	dx,AutoAlt */
	ADC(dx, autoalt);
	/* cmp	dx,MAX_AUTO_ALT */
	CMP(dx, max_auto_alt);
	/* jb	@F */
	if ((dw)(dx) < (dw)(max_auto_alt)) {goto dummylabel172;}
	/* mov	dx,MAX_AUTO_ALT */
	dx = max_auto_alt;
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel172:
	// 5159 
	/* @@:		mov	AutoAlt,dx */
	autoalt = dx;
	/* mov	AutoAltFine,ax */
	autoaltfine = ax;
	/* jmp	KbdAilerons */
	goto kbdailerons;
	// 0 ;* dec AutoAlt
skipincalt:
	// 5161 
	/* SkipIncAlt:	test	Key[K_CRSRUP],1	;dec key pressed? */
	TEST(*((&key)+72), 1);
	/* jz	SkipDecAlt    	;no -> */
	if (!(*((&key)+72) & 1)) {goto skipdecalt;}
	/* test	OldCrsrUp,1	;key pressed last intr? */
	TEST(oldcrsrup, 1);
	/* jnz	@F		;yes -> */
	if ((oldcrsrup & 1) != 0) {goto dummylabel173;}
	/* mov	AutoAltDelay,KBD_AUTO_RPT */
	autoaltdelay = 50;
	/* mov	ax,256*10	;assume ALT key not pressed */
	ax = 256*10;
	/* test	Key[K_ALT],1	;alt key pressed? */
	TEST(*((&key)+56), 1);
	/* jz	ContDecAlt */
	if (!(*((&key)+56) & 1)) {goto contdecalt;}
	/* mov	ax,256 */
	ax = 256;
	/* jmp	ContDecAlt */
	goto contdecalt;
dummylabel173:
	// 5163 
	/* @@:		mov	ax,AutoAltDelay */
	ax = autoaltdelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel174;}
	/* dec	ax */
	DEC(ax);
	/* mov	AutoAltDelay,ax */
	autoaltdelay = ax;
	/* jmp	KbdAilerons */
	goto kbdailerons;
dummylabel174:
	// 5165 
	/* @@:		mov	ax,256*10 */
	ax = 256*10;
	/* mov	cl,Key[K_ALT] */
	cl = *((&key)+56);
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* shr	ax,cl		;/1 or /16 */
	SHR(ax, cl);
contdecalt:
	// 5167 
	/* ContDecAlt:	xor	dh,dh */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* sub	AutoAltFine,ax */
	SUB(autoaltfine, ax);
	/* sbb	AutoAlt,dx */
	SBB(autoalt, dx);
	/* jns	@F */
	if ((short)(autoalt) >= 0) {goto dummylabel175;}
	/* mov	AutoAlt,MIN_AUTO_ALT */
	autoalt = min_auto_alt;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* jmp	KbdAilerons */
	goto kbdailerons;
dummylabel175:
	// 5169 
	/* @@:		cmp	AutoAlt,MIN_AUTO_ALT */
	CMP(autoalt, min_auto_alt);
	/* jae	SkipDecAlt */
	if ((dw)(autoalt) >= (dw)(min_auto_alt)) {goto skipdecalt;}
	/* mov	AutoAlt,MIN_AUTO_ALT */
	autoalt = min_auto_alt;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
skipdecalt:
	// 5171 
	/* SkipDecAlt:	jmp	KbdAilerons */
	goto kbdailerons;
	// 0 ;---------------------------
kbdeletf:
	// 5173 
	// 0 ;ALT_TF
	// 0 ;---------------------------
	/* mov	ElePosn,0 */
	eleposn = 0;
	// 0 ;* increase ride altitude
	/* test	Key[K_CRSRDN],1	;increase ride alt? */
	TEST(*((&key)+80), 1);
	/* jz	SkipIncRide    	;no -> */
	if (!(*((&key)+80) & 1)) {goto skipincride;}
	/* test	OldCrsrDn,1	;key pressed last intr? */
	TEST(oldcrsrdn, 1);
	/* jnz	@F		;yes -> */
	if ((oldcrsrdn & 1) != 0) {goto dummylabel176;}
	/* mov	TFRideDelay,KBD_AUTO_RPT */
	tfridedelay = 50;
	/* jmp	ContIncRide */
	goto contincride;
dummylabel176:
	// 5175 
	/* @@:		mov	ax,TFRideDelay */
	ax = tfridedelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	ContIncRide	;yes -> */
	if (!(ax & ax)) {goto contincride;}
	/* dec	ax */
	DEC(ax);
	/* mov	TFRideDelay,ax */
	tfridedelay = ax;
	/* jmp	KbdAilerons */
	goto kbdailerons;
contincride:
	// 5177 
	/* ContIncRide: 	cmp	TFRideIndex,MAX_TF_INDEX	;max limit? */
	CMP(tfrideindex, max_tf_index);
	/* je	KbdAilerons			;yes -> */
	if ((dw)(tfrideindex) == (dw)(max_tf_index)) {goto kbdailerons;}
	/* add	TFRideIndex,2	;inc ride alt index */
	ADD(tfrideindex, 2);
	/* mov	TFRideDelay,KBD_AUTO_RPT */
	tfridedelay = 50;
	/* jmp	KbdAilerons */
	goto kbdailerons;
	// 0 ;* decrease ride altitude
skipincride:
	// 5179 
	/* SkipIncRide:	test	Key[K_CRSRUP],1	;increase ride alt? */
	TEST(*((&key)+72), 1);
	/* jz	KbdAilerons 	;no -> */
	if (!(*((&key)+72) & 1)) {goto kbdailerons;}
	/* test	OldCrsrUp,1	;key pressed last intr? */
	TEST(oldcrsrup, 1);
	/* jnz	@F		;yes -> */
	if ((oldcrsrup & 1) != 0) {goto dummylabel177;}
	/* mov	TFRideDelay,KBD_AUTO_RPT */
	tfridedelay = 50;
	/* jmp	ContDecRide */
	goto contdecride;
dummylabel177:
	// 5181 
	/* @@:		mov	ax,TFRideDelay */
	ax = tfridedelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	ContDecRide	;yes -> */
	if (!(ax & ax)) {goto contdecride;}
	/* dec	ax */
	DEC(ax);
	/* mov	TFRideDelay,ax */
	tfridedelay = ax;
	/* jmp	KbdAilerons */
	goto kbdailerons;
contdecride:
	// 5183 
	/* ContDecRide: 	cmp	TFRideIndex,0	;min limit? */
	CMP(tfrideindex, 0);
	/* je	KbdAilerons  	;yes -> */
	if ((dw)(tfrideindex) == (dw)(0)) {goto kbdailerons;}
	/* sub	TFRideIndex,2	;dec ride alt index */
	SUB(tfrideindex, 2);
	/* mov	TFRideDelay,KBD_AUTO_RPT */
	tfridedelay = 50;
	// 0 ;===========================
kbdailerons:
	// 5185 
	// 0 ;===========================
	/* mov	bx,HdgMode */
	bx = hdgmode;
__disp=*(dw*)(((db*)&kbdailswitch)+bx);
	/* jmp	KbdAilSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
kbdailmanual:
	// 5187 
	// 0 ;HDG_MANUAL
	// 0 ;---------------------------
	/* mov	bl,Key[K_CRSRRT]	;roll right */
	bl = *((&key)+77);
	/* shl	bl,1 */
	SHL(bl, 1);
	/* or	bl,Key[K_CRSRLF]	;roll left */
	OR(bl, *((&key)+75));
	/* mov	ax,AilPosn */
	ax = ailposn;
	/* mov	dx,AilKbdRate */
	dx = ailkbdrate;
	/* mov	bp,AilKbdWash */
	bp = ailkbdwash;
	/* call	UpdatePosn */
	CALL(updateposn, 0);
	/* mov	AilPosn,ax */
	ailposn = ax;
	/* jmp	KbdRudder */
	goto kbdrudder;
	// 0 ;---------------------------
kbdailapproach:
	// 5189 
	// 0 ;HDG_APPROACH
	// 0 ;---------------------------
	/* mov	AilPosn,0 */
	ailposn = 0;
	/* jmp	KbdRudder */
	goto kbdrudder;
	// 0 ;---------------------------
kbdailacquire:
	// 5191 
	// 0 ;HDG_ACQUIRE
	// 0 ;---------------------------
	/* mov	AilPosn,0 */
	ailposn = 0;
	// 0 ;* inc AutoHdg
	/* test	Key[K_CRSRRT],1	;inc key pressed? */
	TEST(*((&key)+77), 1);
	/* jz	SkipIncHdg     	;no -> */
	if (!(*((&key)+77) & 1)) {goto skipinchdg;}
	/* test	OldCrsrRt,1	;key pressed last intr? */
	TEST(oldcrsrrt, 1);
	/* jnz	@F		;yes -> */
	if ((oldcrsrrt & 1) != 0) {goto dummylabel178;}
	// 0 ;* note: kbd auto rpt /2 to prevent "kicking" effects with auto hdg
	/* mov	AutoHdgDelay,KBD_AUTO_RPT/2 */
	autohdgdelay = 50/2;
	/* mov	ax,256 */
	ax = 256;
	/* jmp	ContIncHdg */
	goto continchdg;
dummylabel178:
	// 5193 
	/* @@:		mov	ax,AutoHdgDelay */
	ax = autohdgdelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel179;}
	/* dec	ax */
	DEC(ax);
	/* mov	AutoHdgDelay,ax */
	autohdgdelay = ax;
	/* jmp	KbdRudder */
	goto kbdrudder;
dummylabel179:
	// 5195 
	/* @@:		mov	ax,256 */
	ax = 256;
	/* mov	cl,Key[K_ALT] */
	cl = *((&key)+56);
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* shr	ax,cl		;/1 or /16 */
	SHR(ax, cl);
continchdg:
	// 5197 
	/* ContIncHdg:	xor	dh,dh */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* add	ax,AutoHdgFine */
	ADD(ax, autohdgfine);
	/* adc	dx,AutoHdg */
	ADC(dx, autohdg);
	/* cmp	dx,MAX_AUTO_HDG */
	CMP(dx, max_auto_hdg);
	/* jbe	@F */
	if ((dw)(dx) <= (dw)(max_auto_hdg)) {goto dummylabel180;}
	/* xor	dx,dx		;wrap around */
	XOR(dx, dx);
dummylabel180:
	// 5199 
	/* @@:		mov	AutoHdg,dx */
	autohdg = dx;
	/* mov	AutoHdgFine,ax */
	autohdgfine = ax;
	/* jmp	KbdRudder */
	goto kbdrudder;
	// 0 ;* dec AutoHdg
skipinchdg:
	// 5201 
	/* SkipIncHdg:	test	Key[K_CRSRLF],1	;dec key pressed? */
	TEST(*((&key)+75), 1);
	/* jz	SkipDecHdg     	;no -> */
	if (!(*((&key)+75) & 1)) {goto skipdechdg;}
	/* test	OldCrsrLf,1	;key pressed last intr? */
	TEST(oldcrsrlf, 1);
	/* jnz	@F		;yes -> */
	if ((oldcrsrlf & 1) != 0) {goto dummylabel181;}
	// 0 ;* note: kbd auto rpt /2 to prevent "kicking" effects with auto hdg
	/* mov	AutoHdgDelay,KBD_AUTO_RPT/2 */
	autohdgdelay = 50/2;
	/* mov	ax,256 */
	ax = 256;
	/* jmp	ContDecHdg */
	goto contdechdg;
dummylabel181:
	// 5203 
	/* @@:		mov	ax,AutoHdgDelay */
	ax = autohdgdelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel182;}
	/* dec	ax */
	DEC(ax);
	/* mov	AutoHdgDelay,ax */
	autohdgdelay = ax;
	/* jmp	KbdRudder */
	goto kbdrudder;
dummylabel182:
	// 5205 
	/* @@:		mov	ax,256 */
	ax = 256;
	/* mov	cl,Key[K_ALT] */
	cl = *((&key)+56);
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* shr	ax,cl		;/1 or /16 */
	SHR(ax, cl);
contdechdg:
	// 5207 
	/* ContDecHdg:	xor	dh,dh */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* sub	AutoHdgFine,ax */
	SUB(autohdgfine, ax);
	/* sbb	AutoHdg,dx */
	SBB(autohdg, dx);
	/* jns	KbdRudder */
	if ((short)(autohdg) >= 0) {goto kbdrudder;}
	/* mov	AutoHdg,MAX_AUTO_HDG	;wrap around */
	autohdg = max_auto_hdg;
skipdechdg:
	// 5209 
	/* SkipDecHdg:	jmp	KbdRudder */
	goto kbdrudder;
	// 0 ;---------------------------
kbdailtrack:
	// 5211 
	// 0 ;HDG_TRACK
	// 0 ;---------------------------
	/* mov	AilPosn,0 */
	ailposn = 0;
	// 0 ;===========================
kbdrudder:
	// 5213 
	// 0 ;===========================
	// 0 ;* no rudder input if auto-pilot selected
	/* cmp	AutoMode,AUTO_OFF	;manual? */
	CMP(automode, 0);
	/* je	@F			;yes -> */
	if ((dw)(automode) == (dw)(0)) {goto dummylabel183;}
	/* mov	RudPosn,0 */
	rudposn = 0;
	/* jmp	KbdThrottle */
	goto kbdthrottle;
dummylabel183:
	// 5215 
	/* @@:		mov	bl,Key[K_PAD_DEL]	;right rudder */
	bl = *((&key)+83);
	/* shl	bl,1 */
	SHL(bl, 1);
	/* or	bl,Key[K_PAD_INS]	;left rudder */
	OR(bl, *((&key)+82));
	/* mov	ax,RudPosn */
	ax = rudposn;
	/* mov	dx,RudKbdRate */
	dx = rudkbdrate;
	/* mov	bp,RudKbdWash */
	bp = rudkbdwash;
	/* call	UpdatePosn */
	CALL(updateposn, 0);
	/* mov	RudPosn,ax */
	rudposn = ax;
	// 0 ;===========================
kbdthrottle:
	// 5217 
	// 0 ;===========================
	/* test	AutoThrot,1	;auto-throttle? */
	TEST(autothrot, 1);
	/* jz	__m2c_macrolocal_521_skip */
	if (!(autothrot & 1)) {goto __m2c_macrolocal_521_skip;}
	/* jmp	KbdAutoThrot */
	goto kbdautothrot;
__m2c_macrolocal_521_skip:
	// 5219 
	// 0 ;yes ->
	// 0 ;---------------
	// 0 ;* open throttle
	// 0 ;---------------
	/* test	Key[K_PLUS],1	;open throttle? */
	TEST(*((&key)+13), 1);
	/* jz	CloseThrottle	;no -> */
	if (!(*((&key)+13) & 1)) {goto closethrottle;}
	/* cmp	Reheat,0	;adjust reheat? */
	CMP(reheat, 0);
	/* jne	IncReheat	;yes -> */
	if ((dw)(reheat) != (dw)(0)) {goto increheat;}
	/* cmp	Throttle,256 	;max throttle? */
	CMP(throttle, 256);
	/* je	ReheatOn	;yes, test for engage reheat -> */
	if ((dw)(throttle) == (dw)(256)) {goto reheaton;}
	/* test	Key[K_SHIFT],1	;slam open? */
	TEST(*((&key)+42), 1);
	/* jnz	SlamThrotOpen	;yes -> */
	if ((*((&key)+42) & 1) != 0) {goto slamthrotopen;}
	/* inc	Throttle */
	INC(throttle);
	/* jmp	KbdStatus */
	goto kbdstatus;
slamthrotopen:
	// 5221 
	/* SlamThrotOpen:	mov	Throttle,256 */
	throttle = 256;
	/* jmp	KbdStatus */
	goto kbdstatus;
increheat:
	// 5223 
	/* IncReheat:   	test	Key[K_SHIFT],1	;slam open? */
	TEST(*((&key)+42), 1);
	/* jnz	SlamReheatOpen	;yes -> */
	if ((*((&key)+42) & 1) != 0) {goto slamreheatopen;}
	/* cmp	Reheat,128 	;max reheat? */
	CMP(reheat, 128);
	/* je	@F		;yes -> */
	if ((dw)(reheat) == (dw)(128)) {goto dummylabel184;}
	/* inc	Reheat */
	INC(reheat);
dummylabel184:
	// 5225 
	/* @@:		jmp	KbdStatus */
	goto kbdstatus;
slamreheatopen:
	// 5227 
	/* SlamReheatOpen:	mov	Reheat,128 */
	reheat = 128;
	/* jmp	KbdStatus */
	goto kbdstatus;
	// 0 ;* release '+' key and press again to engage reheat
reheaton:
	// 5229 
	/* ReheatOn:	test	OldPlus,1	;'+' key pressed last interrupt? */
	TEST(oldplus, 1);
	/* jnz	@F		;yes -> */
	if ((oldplus & 1) != 0) {goto dummylabel185;}
	/* mov	Reheat,1 */
	reheat = 1;
dummylabel185:
	// 5231 
	/* @@:		jmp	KbdStatus */
	goto kbdstatus;
	// 0 ;----------------
	// 0 ;* close throttle
	// 0 ;----------------
closethrottle:
	// 5233 
	/* CloseThrottle:	test	Key[K_MINUS],1	;close throttle? */
	TEST(*((&key)+12), 1);
	/* jz	@B		;no -> */
	if (!(*((&key)+12) & 1)) {goto dummylabel185;}
	/* cmp	Reheat,0	;adjust reheat? */
	CMP(reheat, 0);
	/* jne	DecReheat	;yes -> */
	if ((dw)(reheat) != (dw)(0)) {goto decreheat;}
	/* cmp	Throttle,256 	;max throttle? */
	CMP(throttle, 256);
	/* je	ReheatOff	;yes, test for disengage reheat -> */
	if ((dw)(throttle) == (dw)(256)) {goto reheatoff;}
	/* test	Key[K_SHIFT],1	;slam shut? */
	TEST(*((&key)+42), 1);
	/* jnz	SlamThrotShut	;yes -> */
	if ((*((&key)+42) & 1) != 0) {goto slamthrotshut;}
	/* cmp	Throttle,0	;min throttle? */
	CMP(throttle, 0);
	/* je	@F		;yes -> */
	if ((dw)(throttle) == (dw)(0)) {goto dummylabel186;}
	/* dec	Throttle */
	DEC(throttle);
dummylabel186:
	// 5235 
	/* @@:		jmp	KbdStatus */
	goto kbdstatus;
slamthrotshut:
	// 5237 
	/* SlamThrotShut:	mov	Throttle,0 */
	throttle = 0;
	/* jmp	KbdStatus */
	goto kbdstatus;
decreheat:
	// 5239 
	/* DecReheat:   	test	Key[K_SHIFT],1	;slam shut? */
	TEST(*((&key)+42), 1);
	/* jnz	SlamReheatShut	;yes -> */
	if ((*((&key)+42) & 1) != 0) {goto slamreheatshut;}
	/* cmp	Reheat,0	;min reheat? */
	CMP(reheat, 0);
	/* je	@F		;yes -> */
	if ((dw)(reheat) == (dw)(0)) {goto dummylabel187;}
	/* dec	Reheat */
	DEC(reheat);
dummylabel187:
	// 5241 
	/* @@:		jmp	KbdStatus */
	goto kbdstatus;
slamreheatshut:
	// 5243 
	/* SlamReheatShut:	mov	Reheat,0 */
	reheat = 0;
	/* jmp	KbdStatus */
	goto kbdstatus;
	// 0 ;* release '-' key and press again to disengage reheat
reheatoff:
	// 5245 
	/* ReheatOff:	test	OldMinus,1	;'-' key pressed last interrupt? */
	TEST(oldminus, 1);
	/* jnz	@F		;yes -> */
	if ((oldminus & 1) != 0) {goto dummylabel188;}
	/* mov	Throttle,255 */
	throttle = 255;
dummylabel188:
	// 5247 
	/* @@:		jmp	KbdStatus */
	goto kbdstatus;
	// 0 ;-------------------
	// 0 ;* increase AutoVias
	// 0 ;-------------------
	// 0 ;* do not adjust AutoVias if approach mode
kbdautothrot:
	// 5249 
	/* KbdAutoThrot:	cmp	AutoMode,AUTO_APPROACH	;approach mode? */
	CMP(automode, 2);
	/* jne	__m2c_macrolocal_522_skip */
	if ((dw)(automode) != (dw)(2)) {goto __m2c_macrolocal_522_skip;}
	/* jmp	KbdStatus */
	goto kbdstatus;
__m2c_macrolocal_522_skip:
	// 5251 
	// 0 ;yes ->
	/* test	Key[K_PLUS],1	;inc key pressed? */
	TEST(*((&key)+13), 1);
	/* jz	SkipIncVias	;no -> */
	if (!(*((&key)+13) & 1)) {goto skipincvias;}
	/* test	OldPlus,1	;key pressed last intr? */
	TEST(oldplus, 1);
	/* jnz	@F		;yes -> */
	if ((oldplus & 1) != 0) {goto dummylabel189;}
	/* mov	AutoThrotDelay,KBD_AUTO_RPT */
	autothrotdelay = 50;
	/* mov	ax,256 */
	ax = 256;
	/* jmp	ContIncVias */
	goto contincvias;
dummylabel189:
	// 5253 
	/* @@:		mov	ax,AutoThrotDelay */
	ax = autothrotdelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel190;}
	/* dec	ax */
	DEC(ax);
	/* mov	AutoThrotDelay,ax */
	autothrotdelay = ax;
	/* jmp	KbdStatus */
	goto kbdstatus;
dummylabel190:
	// 5255 
	/* @@:		mov	ax,256 */
	ax = 256;
	/* mov	cl,Key[K_ALT] */
	cl = *((&key)+56);
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* shr	ax,cl		;/1 or /16 */
	SHR(ax, cl);
contincvias:
	// 5257 
	/* ContIncVias:	xor	dh,dh */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* add	ax,AutoViasFine */
	ADD(ax, autoviasfine);
	/* adc	dx,AutoVias */
	ADC(dx, autovias);
	/* cmp	dx,MAX_AUTO_VIAS */
	CMP(dx, max_auto_vias);
	/* jb	@F */
	if ((dw)(dx) < (dw)(max_auto_vias)) {goto dummylabel191;}
	/* mov	dx,MAX_AUTO_VIAS */
	dx = max_auto_vias;
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel191:
	// 5259 
	/* @@:		mov	AutoVias,dx */
	autovias = dx;
	/* mov	AutoViasFine,ax */
	autoviasfine = ax;
	/* jmp	KbdStatus */
	goto kbdstatus;
	// 0 ;-------------------
	// 0 ;* decrease AutoVias
	// 0 ;-------------------
skipincvias:
	// 5261 
	/* SkipIncVias:	test	Key[K_MINUS],1	;dec key pressed? */
	TEST(*((&key)+12), 1);
	/* jz	KbdStatus	;no -> */
	if (!(*((&key)+12) & 1)) {goto kbdstatus;}
	/* test	OldMinus,1	;key pressed last intr? */
	TEST(oldminus, 1);
	/* jnz	@F		;yes -> */
	if ((oldminus & 1) != 0) {goto dummylabel192;}
	/* mov	AutoThrotDelay,KBD_AUTO_RPT */
	autothrotdelay = 50;
	/* mov	ax,256 */
	ax = 256;
	/* jmp	ContDecVias */
	goto contdecvias;
dummylabel192:
	// 5263 
	/* @@:		mov	ax,AutoThrotDelay */
	ax = autothrotdelay;
	/* test	ax,ax		;end of auto-rpt delay? */
	TEST(ax, ax);
	/* jz	@F		;yes -> */
	if (!(ax & ax)) {goto dummylabel193;}
	/* dec	ax */
	DEC(ax);
	/* mov	AutoThrotDelay,ax */
	autothrotdelay = ax;
	/* jmp	KbdStatus */
	goto kbdstatus;
dummylabel193:
	// 5265 
	/* @@:		mov	ax,256 */
	ax = 256;
	/* mov	cl,Key[K_ALT] */
	cl = *((&key)+56);
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* shr	ax,cl		;/1 or /16 */
	SHR(ax, cl);
contdecvias:
	// 5267 
	/* ContDecVias:	xor	dh,dh */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* sub	AutoViasFine,ax */
	SUB(autoviasfine, ax);
	/* sbb	AutoVias,dx */
	SBB(autovias, dx);
	/* jns	KbdStatus */
	if ((short)(autovias) >= 0) {goto kbdstatus;}
	/* mov	AutoVias,0 */
	autovias = 0;
	/* mov	AutoViasFine,0 */
	autoviasfine = 0;
	// 0 ;===========================
kbdstatus:
	// 5269 
	// 0 ;===========================
	/* mov	al,Key[K_CRSRUP] */
	al = *((&key)+72);
	/* mov	OldCrsrUp,al */
	oldcrsrup = al;
	/* mov	al,Key[K_CRSRDN] */
	al = *((&key)+80);
	/* mov	OldCrsrDn,al */
	oldcrsrdn = al;
	/* mov	al,Key[K_CRSRLF] */
	al = *((&key)+75);
	/* mov	OldCrsrLf,al */
	oldcrsrlf = al;
	/* mov	al,Key[K_CRSRRT] */
	al = *((&key)+77);
	/* mov	OldCrsrRt,al */
	oldcrsrrt = al;
	/* mov	al,Key[K_PLUS] */
	al = *((&key)+13);
	/* mov	OldPlus,al */
	oldplus = al;
	/* mov	al,Key[K_MINUS] */
	al = *((&key)+12);
	/* mov	OldMinus,al */
	oldminus = al;
	// 0 ;----------------------
	// 0 ;* update screen shaker
	// 0 ;----------------------
	/* mov	ax,ShakeTimer */
	ax = shaketimer;
	/* test	ax,ax		;shaking? */
	TEST(ax, ax);
	/* jz	GameIntr50	;no -> */
	if (!(ax & ax)) {goto gameintr50;}
	/* dec	ax		;update timer */
	DEC(ax);
	/* jnz	@F		;continue -> */
	if (ax != 0) {goto dummylabel194;}
	/* mov	ShakePriority,0	;clear priority */
	shakepriority = 0;
dummylabel194:
	// 5271 
	/* @@:		mov	ShakeTimer,ax */
	shaketimer = ax;
	/* test	InCockpit,1	;in cockpit? */
	TEST(incockpit, 1);
	/* jz	GameIntr50	;no -> */
	if (!(incockpit & 1)) {goto gameintr50;}
	/* call	ScreenShaker */
	CALLF(screenshaker, 0);
	// 0 ;===========================
gameintr50:
	// 5273 
	// 0 ;===========================
	/* xor	Timer50,1	;toggle 50Hz */
	XOR(timer50, 1);
	/* jz	@F		;skip -> */
	if (timer50 == 0) {goto dummylabel195;}
	/* call	RefreshSound */
	CALLF(refreshsound, 0);
	/* call	RefreshMusic */
	CALLF(refreshmusic, 0);
dummylabel195:
	// 5275 
	/* @@:		ret */
	RETF(0);
updateposn:
	// 11245 
	/* mov	cl,Key[K_ALT]	;fine control if alt key pressed */
	cl = *((&key)+56);
edummylabel22:
	// 5277 
	/* shl	cl,1		;0 or 2 */
	SHL(cl, 1);
	/* shl	cl,1		;0 or 4 */
	SHL(cl, 1);
	/* cmp	bl,10b		;inc key pressed only? */
	CMP(bl, 0x2);
	/* je	IncPosn		;yes -> */
	if ((db)(bl) == (db)(0x2)) {goto incposn;}
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
	/* cmp	ax,bp		;within washout limits? */
	CMP(ax, bp);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(bp)) {goto dummylabel196;}
	/* shl	bx,1		;washout rate = 2 * input rate */
	SHL(bx, 1);
	/* sub	ax,bx		;washout */
	SUB(ax, bx);
	/* jnc	@F		;ok -> */
	if (!CF) {goto dummylabel196;}
	/* xor	ax,ax		;washout to 0 */
	XOR(ax, ax);
dummylabel196:
	// 5279 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* ret */
	RETN(0);
	// 0 ;* increment position
incposn:
	// 5281 
	/* IncPosn:	shr	dx,cl		;rate / 1 or rate / 16 */
	SHR(dx, cl);
	/* add	ax,dx		;posn = posn + rate */
	ADD(ax, dx);
	/* jno	@F		;ok -> */
	if (!OF) {goto dummylabel197;}
	/* mov	ax,+32767	;limit */
	ax = 32767;
dummylabel197:
	// 5283 
	/* @@:		ret */
	RETN(0);
	// 0 ;* decrement position
decposn:
	// 5285 
	/* DecPosn:	shr	dx,cl		;rate / 1 or rate / 16 */
	SHR(dx, cl);
	/* sub	ax,dx		;posn = posn - rate */
	SUB(ax, dx);
	/* jno	@F		;ok -> */
	if (!OF) {goto dummylabel198;}
	/* mov	ax,-32768	;limit */
	ax = -32768;
dummylabel198:
	// 5287 
	/* @@:		ret */
	RETN(0);
calcsfvalue:
	// 11310 
	// 0 ;* if sweep active then
	// 0 ;*    interpolate value wrt sweep
	// 0 ;* else
	// 0 ;*    if flaps active then
	// 0 ;*       interpolate value wrt flaps
	// 0 ;*    else
	// 0 ;*       look up value
	// 0 ;*    end
	// 0 ;* end
	// 0 ;----------------------
	// 0 ;* test if sweep active
	// 0 ;----------------------
edummylabel23:
	// 5289 
	/* mov	al,SweepActive */
	al = *(sweepactive);
	/* test	al,al		;sweep active? */
	TEST(al, al);
	/* jz	SweepInActive	;no -> */
	if (!(al & al)) {goto sweepinactive;}
	// 0 ;--------------
	// 0 ;* sweep active
	// 0 ;--------------
	// 0 ;* column = CrntFlapPos * 2
	// 0 ;*
	// 0 ;* if CrntWingVal < SWEEP_A_45 then
	// 0 ;*    val1 = table[SWEEP_D_25*8][column]
	// 0 ;*    val2 = table[SWEEP_D_45*8][column]
	// 0 ;*    val3 = CrntWingVal
	// 0 ;*    val4 = SWEEP_A_45
	// 0 ;* else
	// 0 ;*    val1 = table[SWEEP_D_45*8][column]
	// 0 ;*    val2 = table[SWEEP_D_67*8][column]
	// 0 ;*    val3 = CrntWingVal - SWEEP_A_45
	// 0 ;*    val4 = SWEEP_A_67 - SWEEP_A_45
	// 0 ;* end
	// 0 ;*
	// 0 ;* value = val1 + ((val2 - val1) * val3 / val4)
	/* mov	bl,CrntFlapPos */
	bl = crntflappos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;column = flap pos * 2 */
	SHL(bx, 1);
	/* mov	di,CrntWingVal	;val3 */
	di = crntwingval;
	/* mov	bp,SWEEP_A_45	;val4 */
	bp = 333;
	/* cmp	di,bp		;<= 45 deg sweep? */
	CMP(di, bp);
	/* jbe	@F		;yes -> */
	if ((dw)(di) <= (dw)(bp)) {goto dummylabel199;}
	/* add	bx,8	  	;next row */
	ADD(bx, 8);
	/* sub	di,bp				;val3 */
	SUB(di, bp);
	/* mov	bp,SWEEP_A_67-SWEEP_A_45	;val4 */
	bp = 700-333;
dummylabel199:
	// 5291 
	/* @@:		mov	cx,[si+bx]	;val1 */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
	/* add	bx,8	  	;next row */
	ADD(bx, 8);
	/* mov	ax,[si+bx]	;val2 */
	ax = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
	/* sub	ax,cx		;val2 - val1 */
	SUB(ax, cx);
	/* imul	di	      	;(val2 - val1) * val3 */
	IMUL1_2(di);
	/* idiv	bp	      	;(val2 - val1) * val3 / val4 */
	IDIV2(bp);
	/* add	ax,cx	      	;val1 + ((val2 - val1) * val3 / val4) */
	ADD(ax, cx);
	/* jmp	CalcSFExit */
	goto calcsfexit;
	// 0 ;----------------------
	// 0 ;* test if flaps active
	// 0 ;----------------------
sweepinactive:
	// 5293 
	/* SweepInActive:	mov	al,FlapsActive */
	al = *(flapsactive);
	/* test	al,al		;flaps active? */
	TEST(al, al);
	/* jz	FlapsInActive	;no -> */
	if (!(al & al)) {goto flapsinactive;}
	// 0 ;--------------
	// 0 ;* flaps active
	// 0 ;--------------
	// 0 ;* row = CrntWingPos * 8
	// 0 ;*
	// 0 ;* if CrntFlapVal < FLAPS_A_MNVR then
	// 0 ;*    val1 = table[row][FLAPS_A_ZERO*2]
	// 0 ;*    val2 = table[row][FLAPS_A_MNVR*2]
	// 0 ;*    val3 = CrntFlapVal
	// 0 ;*    val4 = FLAPS_A_MNVR
	// 0 ;* else
	// 0 ;*    if CrntFlapVal < FLAPS_A_MID then
	// 0 ;*       val1 = table[row][FLAPS_A_MNVR*2]
	// 0 ;*       val2 = table[row][FLAPS_A_MID*2]
	// 0 ;*       val3 = CrntFlapVal - FLAPS_A_MNVR
	// 0 ;*       val4 = FLAPS_A_MID - FLAPS_A_MNVR
	// 0 ;*    else
	// 0 ;*       val1 = table[row][FLAPS_A_MID*2]
	// 0 ;*       val2 = table[row][FLAPS_A_FULL*2]
	// 0 ;*       val3 = CrntFlapVal - FLAPS_A_MID
	// 0 ;*       val4 = FLAPS_A_FULL - FLAPS_A_MID
	// 0 ;*    end
	// 0 ;* end
	// 0 ;*
	// 0 ;* val = val1 + ((val2 - val1) * val3 / val4)
	/* mov	bl,CrntWingPos */
	bl = crntwingpos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 */
	SHL(bx, 1);
	/* shl	bx,1		;row = wing pos * 8 */
	SHL(bx, 1);
	/* mov	di,CrntFlapVal	;val3 */
	di = crntflapval;
	/* mov	bp,FLAPS_A_MNVR	;val4 */
	bp = 150;
	/* cmp	di,bp		;<= manoeuvre flaps? */
	CMP(di, bp);
	/* jbe	@F		;yes -> */
	if ((dw)(di) <= (dw)(bp)) {goto dummylabel200;}
	/* add	bx,2	  	;next colomn */
	ADD(bx, 2);
	/* sub	di,bp				;val3 */
	SUB(di, bp);
	/* mov	bp,FLAPS_A_MID-FLAPS_A_MNVR	;val4 */
	bp = 300-150;
	/* cmp	di,bp		;<= mid flaps? */
	CMP(di, bp);
	/* jbe	@F		;yes -> */
	if ((dw)(di) <= (dw)(bp)) {goto dummylabel200;}
	/* add	bx,2	  	;next colomn */
	ADD(bx, 2);
	/* sub	di,bp				;val3 */
	SUB(di, bp);
	/* mov	bp,FLAPS_A_FULL-FLAPS_A_MID	;val4 */
	bp = 600-300;
dummylabel200:
	// 5295 
	/* @@:	  	mov	cx,[si+bx]	;val1 */
	cx = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
	/* add	bx,2	  	;next column */
	ADD(bx, 2);
	/* mov	ax,[si+bx]	;val2 */
	ax = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
	/* sub	ax,cx		;val2 - val1 */
	SUB(ax, cx);
	/* imul	di	      	;(val2 - val1) * val3 */
	IMUL1_2(di);
	/* idiv	bp	      	;(val2 - val1) * val3 / val4 */
	IDIV2(bp);
	/* add	ax,cx	      	;val1 + ((val2 - val1) * val3 / val4) */
	ADD(ax, cx);
	/* jmp	CalcSFExit */
	goto calcsfexit;
	// 0 ;--------------------------
	// 0 ;* sweep and flaps inactive
	// 0 ;--------------------------
flapsinactive:
	// 5297 
	/* FlapsInActive:	mov	bl,CrntWingPos */
	bl = crntwingpos;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 */
	SHL(bx, 1);
	/* shl	bx,1		;*4 */
	SHL(bx, 1);
	/* shl	bx,1		;wing sweep pos * 8 */
	SHL(bx, 1);
	/* mov	al,CrntFlapPos */
	al = crntflappos;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;flap pos * 2 */
	SHL(ax, 1);
	/* add	bx,ax		;wing sweep pos * 8 + flap pos * 2 */
	ADD(bx, ax);
	/* mov	ax,[si+bx] */
	ax = m2c::getdata(*(dw*)(raddr(ds,si+bx)));
calcsfexit:
	// 5299 
	/* CalcSFExit:	ret */
	RETN(0);
calcengtemp:
	// 11452 
	// 0 ;* if engine fire then
	// 0 ;*    aim for MAX_ENG_TEMP
	// 0 ;* else
	// 0 ;*    if engine damaged or out of fuel then
	// 0 ;*       aim for MIN_ENG_TEMP
	// 0 ;*    endif
	// 0 ;* endif
edummylabel24:
	// 5301 
	/* test	ah,ah		;fire? */
	TEST(ah, ah);
	/* jz	@F		;no -> */
	if (!(ah & ah)) {goto dummylabel201;}
	/* mov	dx,MAX_ENG_TEMP */
	dx = 1000*16;
	/* jmp	SortTemp */
	goto sorttemp;
dummylabel201:
	// 5303 
	/* @@:		test	al,al		;damaged? */
	TEST(al, al);
	/* jnz	@F		;yes -> */
	if ((al & al) != 0) {goto dummylabel202;}
	/* cmp	FuelWt,0	;out of fuel? */
	CMP(fuelwt, 0);
	/* ja	ContTemp	;no -> */
	if ((dw)(fuelwt) > (dw)(0)) {goto conttemp;}
dummylabel202:
	// 5305 
	/* @@:		mov	dx,MIN_ENG_TEMP */
	dx = 0*16;
	/* jmp	SortTemp */
	goto sorttemp;
	// 0 ;* @ idle: thrust =     0lbf, eng temp = 400 * 16 deg c
	// 0 ;* @ max : thrust = 17000lbf, eng temp = 700 * 16 deg c
	// 0 ;* new temp = thrust * (9252 / 32768) + 400 * 16
conttemp:
	// 5307 
	/* ContTemp: 	mov	ax,9252 */
	ax = 9252;
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
	/* add	dx,400*16	;new temp = thrust * (9252 / 32768) + 400 * 16 */
	ADD(dx, 400*16);
sorttemp:
	// 5309 
	/* SortTemp:	sub	dx,bp		;delta temp = new temp - old temp */
	SUB(dx, bp);
	/* mov	bx,dx		;bx = delta temp */
	bx = dx;
	/* js	DecTemp		;decrease temp -> */
	if ((short)(dx) < 0) {goto dectemp;}
inctemp:
	// 5311 
	/* IncTemp:	mov	ax,MAX_TEMP_INC */
	ax = 100*16;
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	// 0 ;dx = max temp change this frame
	/* cmp	bx,dx		;delta temp ok? */
	CMP(bx, dx);
	/* jle	TempOk		;yes -> */
	if ((short)(bx) <= (short)(dx)) {goto tempok;}
	/* mov	bx,dx		;limit temp change */
	bx = dx;
	/* jmp	TempOk */
	goto tempok;
dectemp:
	// 5313 
	/* DecTemp:	mov	ax,MAX_TEMP_DEC */
	ax = -25*16;
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	// 0 ;dx = max temp change this frame
	/* cmp	bx,dx		;delta temp ok? */
	CMP(bx, dx);
	/* jge	TempOk		;yes -> */
	if ((short)(bx) >= (short)(dx)) {goto tempok;}
	/* mov	bx,dx		;limit temp change */
	bx = dx;
	// 0 ;* new temp = old temp + delta temp
tempok:
	// 5315 
	/* TempOk:		mov	ax,bp */
	ax = bp;
	/* add	ax,bx */
	ADD(ax, bx);
	/* ret */
	RETN(0);
damprate:
	// 11527 
	/* mov	bp,ax		;store old rate */
	bp = ax;
edummylabel25:
	// 5317 
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* mov	bx,ax		;si, bx = new rate */
	bx = ax;
	/* mov	si,dx */
	si = dx;
	/* mov	ax,bp */
	ax = bp;
	/* cwd			;dx, ax = old rate */
	CWD;
	// 0 ;* damped new rate = (new rate - old rate) / damp factor + old rate
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	si,dx */
	SBB(si, dx);
	/* js	NegChange	;neg change -> */
	if ((short)(si) < 0) {goto negchange;}
	// 0 ;* pos change
dummylabel203:
	// 5319 
	/* @@:		shr	si,1		;(new rate - old rate) / damp factor */
	SHR(si, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* loop	@B */
	LOOP(dummylabel203);
	/* jmp	DampOk */
	goto dampok;
	// 0 ;* neg change (negate and scale to prevent -1 truncation error)
negchange:
	// 5321 
	/* NegChange:	not	bx */
	bx = ~bx;
	/* not	si */
	si = ~si;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	si,0 */
	ADC(si, 0);
dummylabel204:
	// 5323 
	/* @@:		shr	si,1		;(new rate - old rate) / damp factor */
	SHR(si, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* loop	@B */
	LOOP(dummylabel204);
	/* neg	bx		;restore sign */
	NEG(bx);
dampok:
	// 5325 
	/* DampOk:		add	bx,bp		;(new rate - old rate) / damp factor + old rate */
	ADD(bx, bp);
	/* mov	dx,bx */
	dx = bx;
	/* ret */
	RETN(0);
destroytornado:
	// 11569 
	/* test	TwoPlayer,1	;two player mode? */
	TEST(twoplayer, 1);
edummylabel26:
	// 5327 
	/* jnz	SortTwoPlayer	;yes -> */
	if (!ZF) {goto sorttwoplayer;}
	/* cmp	Destroyed,0	;already destroyed? */
	CMP(destroyed, 0);
	/* jne	ExitDestroy	;yes -> */
	if ((dw)(destroyed) != (dw)(0)) {goto exitdestroy;}
	/* mov	Destroyed,ah */
	destroyed = ah;
	/* cmp	TmpDieFlag,0	;die flag locked? */
	CMP(tmpdieflag, 0);
	/* jne	@F		;yes -> */
	if ((dw)(tmpdieflag) != (dw)(0)) {goto dummylabel205;}
	/* mov	TmpDieFlag,al */
	tmpdieflag = al;
dummylabel205:
	// 5329 
	/* @@:		or	DisableInput,DIP_DESTROYED */
	OR(disableinput, 0x8);
	/* test	Ejected,1	;ejected? */
	TEST(ejected, 1);
	/* jnz	ExitDestroy	;yes -> */
	if ((ejected & 1) != 0) {goto exitdestroy;}
	/* mov	ax,VIEW_DESTROYED */
	ax = 30;
	/* call	SetGameViewMode */
	CALLF(setgameviewmode, 0);
exitdestroy:
	// 5331 
	/* ExitDestroy:	ret */
	RETF(0);
	// 0 ;---------------------------
sorttwoplayer:
	// 5333 
	// 0 ;---------------------------
	/* cmp	Destroyed,0	;already destroyed? */
	CMP(destroyed, 0);
	/* jne	ExitDestroy	;yes -> */
	if ((dw)(destroyed) != (dw)(0)) {goto exitdestroy;}
	/* mov	Destroyed,ah */
	destroyed = ah;
	/* cmp	DieFlag,0	;die flag locked? */
	CMP(dieflag, 0);
	/* jne	@F		;yes -> */
	if ((dw)(dieflag) != (dw)(0)) {goto dummylabel206;}
	/* mov	DieFlag,al */
	dieflag = al;
dummylabel206:
	// 5335 
	/* @@:		or	DisableInput,DIP_DESTROYED */
	OR(disableinput, 0x8);
	/* jmp	ExitDestroy */
	goto exitdestroy;
startejectseq:
	// 11605 
	/* mov	Ejected,1 ;* kill: assume all */
	ejected = 1;
edummylabel27:
	// 5337 
	/* or	DisableInput,DIP_EJECT */
	OR(disableinput, 0x4);
	/* mov	DieFlag,DIE_EJECT */
	dieflag = 14;
	/* ret */
	RETN(0);
initnewsector:
	// 11619 
	// 0 ;----------------
	// 0 ;* make map index (if on active map)
	// 0 ;----------------
edummylabel28:
	// 5339 
	/* mov	ax,-1		;assume off active map */
	ax = -1;
	/* cmp	XSec,31 */
	CMP(xsec, 31);
	/* ja	@F */
	if ((dw)(xsec) > (dw)(31)) {goto dummylabel207;}
	/* cmp	YSec,31 */
	CMP(ysec, 31);
	/* ja	@F */
	if ((dw)(ysec) > (dw)(31)) {goto dummylabel207;}
	// 0 ;* map index = ysec * 32 + xsec
	/* mov	ax,YSec */
	ax = ysec;
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
	/* add	ax,XSec */
	ADD(ax, xsec);
dummylabel207:
	// 5341 
	/* @@:		mov	ModelMapIndex,ax */
	modelmapindex = ax;
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
        case m2c::k__m2c_macrolocal_238_skip: 	goto __m2c_macrolocal_238_skip;
        case m2c::k__m2c_macrolocal_239_testhi: 	goto __m2c_macrolocal_239_testhi;
        case m2c::k__m2c_macrolocal_239_testok: 	goto __m2c_macrolocal_239_testok;
        case m2c::k__m2c_macrolocal_251_skip: 	goto __m2c_macrolocal_251_skip;
        case m2c::k__m2c_macrolocal_252_skip: 	goto __m2c_macrolocal_252_skip;
        case m2c::k__m2c_macrolocal_293_skip: 	goto __m2c_macrolocal_293_skip;
        case m2c::k__m2c_macrolocal_294_skip: 	goto __m2c_macrolocal_294_skip;
        case m2c::k__m2c_macrolocal_346_skip: 	goto __m2c_macrolocal_346_skip;
        case m2c::k__m2c_macrolocal_347_skip: 	goto __m2c_macrolocal_347_skip;
        case m2c::k__m2c_macrolocal_355_skip: 	goto __m2c_macrolocal_355_skip;
        case m2c::k__m2c_macrolocal_357_skip: 	goto __m2c_macrolocal_357_skip;
        case m2c::k__m2c_macrolocal_358_skip: 	goto __m2c_macrolocal_358_skip;
        case m2c::k__m2c_macrolocal_359_skip: 	goto __m2c_macrolocal_359_skip;
        case m2c::k__m2c_macrolocal_367_skip: 	goto __m2c_macrolocal_367_skip;
        case m2c::k__m2c_macrolocal_368_skip: 	goto __m2c_macrolocal_368_skip;
        case m2c::k__m2c_macrolocal_369_skip: 	goto __m2c_macrolocal_369_skip;
        case m2c::k__m2c_macrolocal_370_skip: 	goto __m2c_macrolocal_370_skip;
        case m2c::k__m2c_macrolocal_371_skip: 	goto __m2c_macrolocal_371_skip;
        case m2c::k__m2c_macrolocal_372_skip: 	goto __m2c_macrolocal_372_skip;
        case m2c::k__m2c_macrolocal_373_skip: 	goto __m2c_macrolocal_373_skip;
        case m2c::k__m2c_macrolocal_374_skip: 	goto __m2c_macrolocal_374_skip;
        case m2c::k__m2c_macrolocal_375_skip: 	goto __m2c_macrolocal_375_skip;
        case m2c::k__m2c_macrolocal_377_skip: 	goto __m2c_macrolocal_377_skip;
        case m2c::k__m2c_macrolocal_378_skip: 	goto __m2c_macrolocal_378_skip;
        case m2c::k__m2c_macrolocal_379_skip: 	goto __m2c_macrolocal_379_skip;
        case m2c::k__m2c_macrolocal_380_skip: 	goto __m2c_macrolocal_380_skip;
        case m2c::k__m2c_macrolocal_381_skip: 	goto __m2c_macrolocal_381_skip;
        case m2c::k__m2c_macrolocal_382_skip: 	goto __m2c_macrolocal_382_skip;
        case m2c::k__m2c_macrolocal_383_skip: 	goto __m2c_macrolocal_383_skip;
        case m2c::k__m2c_macrolocal_384_skip: 	goto __m2c_macrolocal_384_skip;
        case m2c::k__m2c_macrolocal_385_skip: 	goto __m2c_macrolocal_385_skip;
        case m2c::k__m2c_macrolocal_386_skip: 	goto __m2c_macrolocal_386_skip;
        case m2c::k__m2c_macrolocal_387_skip: 	goto __m2c_macrolocal_387_skip;
        case m2c::k__m2c_macrolocal_388_skip: 	goto __m2c_macrolocal_388_skip;
        case m2c::k__m2c_macrolocal_390_skip: 	goto __m2c_macrolocal_390_skip;
        case m2c::k__m2c_macrolocal_391_skip: 	goto __m2c_macrolocal_391_skip;
        case m2c::k__m2c_macrolocal_395_skip: 	goto __m2c_macrolocal_395_skip;
        case m2c::k__m2c_macrolocal_396_skip: 	goto __m2c_macrolocal_396_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_406_skip: 	goto __m2c_macrolocal_406_skip;
        case m2c::k__m2c_macrolocal_408_skip: 	goto __m2c_macrolocal_408_skip;
        case m2c::k__m2c_macrolocal_409_skip: 	goto __m2c_macrolocal_409_skip;
        case m2c::k__m2c_macrolocal_410_skip: 	goto __m2c_macrolocal_410_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_520_skip: 	goto __m2c_macrolocal_520_skip;
        case m2c::k__m2c_macrolocal_521_skip: 	goto __m2c_macrolocal_521_skip;
        case m2c::k__m2c_macrolocal_522_skip: 	goto __m2c_macrolocal_522_skip;
        case m2c::kaboff: 	goto aboff;
        case m2c::kabon: 	goto abon;
        case m2c::kabskip: 	goto abskip;
        case m2c::kaddwbrakedrag: 	goto addwbrakedrag;
        case m2c::kattok: 	goto attok;
        case m2c::kbuffetok: 	goto buffetok;
        case m2c::kcalcaccel: 	goto calcaccel;
        case m2c::kcalcairdensexit: 	goto calcairdensexit;
        case m2c::kcalcairdensity: 	goto calcairdensity;
        case m2c::kcalcairspeed: 	goto calcairspeed;
        case m2c::kcalcaltitude: 	goto calcaltitude;
        case m2c::kcalcangles: 	goto calcangles;
        case m2c::kcalcdrag: 	goto calcdrag;
        case m2c::kcalcengtemp: 	goto calcengtemp;
        case m2c::kcalcfuelflow: 	goto calcfuelflow;
        case m2c::kcalcgforce: 	goto calcgforce;
        case m2c::kcalcposition: 	goto calcposition;
        case m2c::kcalcrates: 	goto calcrates;
        case m2c::kcalcratesexit: 	goto calcratesexit;
        case m2c::kcalcrpm1: 	goto calcrpm1;
        case m2c::kcalcrpm2: 	goto calcrpm2;
        case m2c::kcalcsfexit: 	goto calcsfexit;
        case m2c::kcalcsfvalue: 	goto calcsfvalue;
        case m2c::kcalcthrust: 	goto calcthrust;
        case m2c::kcalcthrustvar: 	goto calcthrustvar;
        case m2c::kcalcvav: 	goto calcvav;
        case m2c::kcheckgforce: 	goto checkgforce;
        case m2c::kclosethrottle: 	goto closethrottle;
        case m2c::kcollisionloop: 	goto collisionloop;
        case m2c::kcontcalcalt: 	goto contcalcalt;
        case m2c::kcontdecalt: 	goto contdecalt;
        case m2c::kcontdechdg: 	goto contdechdg;
        case m2c::kcontdecride: 	goto contdecride;
        case m2c::kcontdecvias: 	goto contdecvias;
        case m2c::kcontgamekeys: 	goto contgamekeys;
        case m2c::kcontgforce: 	goto contgforce;
        case m2c::kcontincalt: 	goto contincalt;
        case m2c::kcontinchdg: 	goto continchdg;
        case m2c::kcontincride: 	goto contincride;
        case m2c::kcontincvias: 	goto contincvias;
        case m2c::kcontjoyride: 	goto contjoyride;
        case m2c::kcontlanding: 	goto contlanding;
        case m2c::kcontpitchrate: 	goto contpitchrate;
        case m2c::kcontspinpitch: 	goto contspinpitch;
        case m2c::kcontspinroll: 	goto contspinroll;
        case m2c::kcontstallroll: 	goto contstallroll;
        case m2c::kconttemp: 	goto conttemp;
        case m2c::kcontwindspeed: 	goto contwindspeed;
        case m2c::kcrosswinds: 	goto crosswinds;
        case m2c::kdampfuelflow: 	goto dampfuelflow;
        case m2c::kdampok: 	goto dampok;
        case m2c::kdamprate: 	goto damprate;
        case m2c::kdampspinpitch: 	goto dampspinpitch;
        case m2c::kdampspinroll: 	goto dampspinroll;
        case m2c::kdecposn: 	goto decposn;
        case m2c::kdecreheat: 	goto decreheat;
        case m2c::kdectemp: 	goto dectemp;
        case m2c::kdestroytornado: 	goto destroytornado;
        case m2c::kdidntlandonroad: 	goto didntlandonroad;
        case m2c::kditched: 	goto ditched;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel100: 	goto dummylabel100;
        case m2c::kdummylabel101: 	goto dummylabel101;
        case m2c::kdummylabel102: 	goto dummylabel102;
        case m2c::kdummylabel103: 	goto dummylabel103;
        case m2c::kdummylabel104: 	goto dummylabel104;
        case m2c::kdummylabel105: 	goto dummylabel105;
        case m2c::kdummylabel106: 	goto dummylabel106;
        case m2c::kdummylabel107: 	goto dummylabel107;
        case m2c::kdummylabel108: 	goto dummylabel108;
        case m2c::kdummylabel109: 	goto dummylabel109;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel110: 	goto dummylabel110;
        case m2c::kdummylabel111: 	goto dummylabel111;
        case m2c::kdummylabel112: 	goto dummylabel112;
        case m2c::kdummylabel113: 	goto dummylabel113;
        case m2c::kdummylabel114: 	goto dummylabel114;
        case m2c::kdummylabel115: 	goto dummylabel115;
        case m2c::kdummylabel116: 	goto dummylabel116;
        case m2c::kdummylabel117: 	goto dummylabel117;
        case m2c::kdummylabel118: 	goto dummylabel118;
        case m2c::kdummylabel119: 	goto dummylabel119;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel120: 	goto dummylabel120;
        case m2c::kdummylabel121: 	goto dummylabel121;
        case m2c::kdummylabel122: 	goto dummylabel122;
        case m2c::kdummylabel123: 	goto dummylabel123;
        case m2c::kdummylabel124: 	goto dummylabel124;
        case m2c::kdummylabel125: 	goto dummylabel125;
        case m2c::kdummylabel126: 	goto dummylabel126;
        case m2c::kdummylabel127: 	goto dummylabel127;
        case m2c::kdummylabel128: 	goto dummylabel128;
        case m2c::kdummylabel129: 	goto dummylabel129;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel130: 	goto dummylabel130;
        case m2c::kdummylabel131: 	goto dummylabel131;
        case m2c::kdummylabel132: 	goto dummylabel132;
        case m2c::kdummylabel133: 	goto dummylabel133;
        case m2c::kdummylabel134: 	goto dummylabel134;
        case m2c::kdummylabel135: 	goto dummylabel135;
        case m2c::kdummylabel136: 	goto dummylabel136;
        case m2c::kdummylabel137: 	goto dummylabel137;
        case m2c::kdummylabel138: 	goto dummylabel138;
        case m2c::kdummylabel139: 	goto dummylabel139;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel140: 	goto dummylabel140;
        case m2c::kdummylabel141: 	goto dummylabel141;
        case m2c::kdummylabel142: 	goto dummylabel142;
        case m2c::kdummylabel143: 	goto dummylabel143;
        case m2c::kdummylabel144: 	goto dummylabel144;
        case m2c::kdummylabel145: 	goto dummylabel145;
        case m2c::kdummylabel146: 	goto dummylabel146;
        case m2c::kdummylabel147: 	goto dummylabel147;
        case m2c::kdummylabel148: 	goto dummylabel148;
        case m2c::kdummylabel149: 	goto dummylabel149;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel150: 	goto dummylabel150;
        case m2c::kdummylabel151: 	goto dummylabel151;
        case m2c::kdummylabel152: 	goto dummylabel152;
        case m2c::kdummylabel153: 	goto dummylabel153;
        case m2c::kdummylabel154: 	goto dummylabel154;
        case m2c::kdummylabel155: 	goto dummylabel155;
        case m2c::kdummylabel156: 	goto dummylabel156;
        case m2c::kdummylabel157: 	goto dummylabel157;
        case m2c::kdummylabel158: 	goto dummylabel158;
        case m2c::kdummylabel159: 	goto dummylabel159;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel160: 	goto dummylabel160;
        case m2c::kdummylabel161: 	goto dummylabel161;
        case m2c::kdummylabel162: 	goto dummylabel162;
        case m2c::kdummylabel163: 	goto dummylabel163;
        case m2c::kdummylabel164: 	goto dummylabel164;
        case m2c::kdummylabel165: 	goto dummylabel165;
        case m2c::kdummylabel166: 	goto dummylabel166;
        case m2c::kdummylabel167: 	goto dummylabel167;
        case m2c::kdummylabel168: 	goto dummylabel168;
        case m2c::kdummylabel169: 	goto dummylabel169;
        case m2c::kdummylabel17: 	goto dummylabel17;
        case m2c::kdummylabel170: 	goto dummylabel170;
        case m2c::kdummylabel171: 	goto dummylabel171;
        case m2c::kdummylabel172: 	goto dummylabel172;
        case m2c::kdummylabel173: 	goto dummylabel173;
        case m2c::kdummylabel174: 	goto dummylabel174;
        case m2c::kdummylabel175: 	goto dummylabel175;
        case m2c::kdummylabel176: 	goto dummylabel176;
        case m2c::kdummylabel177: 	goto dummylabel177;
        case m2c::kdummylabel178: 	goto dummylabel178;
        case m2c::kdummylabel179: 	goto dummylabel179;
        case m2c::kdummylabel18: 	goto dummylabel18;
        case m2c::kdummylabel180: 	goto dummylabel180;
        case m2c::kdummylabel181: 	goto dummylabel181;
        case m2c::kdummylabel182: 	goto dummylabel182;
        case m2c::kdummylabel183: 	goto dummylabel183;
        case m2c::kdummylabel184: 	goto dummylabel184;
        case m2c::kdummylabel185: 	goto dummylabel185;
        case m2c::kdummylabel186: 	goto dummylabel186;
        case m2c::kdummylabel187: 	goto dummylabel187;
        case m2c::kdummylabel188: 	goto dummylabel188;
        case m2c::kdummylabel189: 	goto dummylabel189;
        case m2c::kdummylabel19: 	goto dummylabel19;
        case m2c::kdummylabel190: 	goto dummylabel190;
        case m2c::kdummylabel191: 	goto dummylabel191;
        case m2c::kdummylabel192: 	goto dummylabel192;
        case m2c::kdummylabel193: 	goto dummylabel193;
        case m2c::kdummylabel194: 	goto dummylabel194;
        case m2c::kdummylabel195: 	goto dummylabel195;
        case m2c::kdummylabel196: 	goto dummylabel196;
        case m2c::kdummylabel197: 	goto dummylabel197;
        case m2c::kdummylabel198: 	goto dummylabel198;
        case m2c::kdummylabel199: 	goto dummylabel199;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel20: 	goto dummylabel20;
        case m2c::kdummylabel200: 	goto dummylabel200;
        case m2c::kdummylabel201: 	goto dummylabel201;
        case m2c::kdummylabel202: 	goto dummylabel202;
        case m2c::kdummylabel203: 	goto dummylabel203;
        case m2c::kdummylabel204: 	goto dummylabel204;
        case m2c::kdummylabel205: 	goto dummylabel205;
        case m2c::kdummylabel206: 	goto dummylabel206;
        case m2c::kdummylabel207: 	goto dummylabel207;
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
        case m2c::kdummylabel54: 	goto dummylabel54;
        case m2c::kdummylabel55: 	goto dummylabel55;
        case m2c::kdummylabel56: 	goto dummylabel56;
        case m2c::kdummylabel57: 	goto dummylabel57;
        case m2c::kdummylabel58: 	goto dummylabel58;
        case m2c::kdummylabel59: 	goto dummylabel59;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel60: 	goto dummylabel60;
        case m2c::kdummylabel61: 	goto dummylabel61;
        case m2c::kdummylabel62: 	goto dummylabel62;
        case m2c::kdummylabel63: 	goto dummylabel63;
        case m2c::kdummylabel64: 	goto dummylabel64;
        case m2c::kdummylabel65: 	goto dummylabel65;
        case m2c::kdummylabel66: 	goto dummylabel66;
        case m2c::kdummylabel67: 	goto dummylabel67;
        case m2c::kdummylabel68: 	goto dummylabel68;
        case m2c::kdummylabel69: 	goto dummylabel69;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel70: 	goto dummylabel70;
        case m2c::kdummylabel71: 	goto dummylabel71;
        case m2c::kdummylabel72: 	goto dummylabel72;
        case m2c::kdummylabel73: 	goto dummylabel73;
        case m2c::kdummylabel74: 	goto dummylabel74;
        case m2c::kdummylabel75: 	goto dummylabel75;
        case m2c::kdummylabel76: 	goto dummylabel76;
        case m2c::kdummylabel77: 	goto dummylabel77;
        case m2c::kdummylabel78: 	goto dummylabel78;
        case m2c::kdummylabel79: 	goto dummylabel79;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel80: 	goto dummylabel80;
        case m2c::kdummylabel81: 	goto dummylabel81;
        case m2c::kdummylabel82: 	goto dummylabel82;
        case m2c::kdummylabel83: 	goto dummylabel83;
        case m2c::kdummylabel84: 	goto dummylabel84;
        case m2c::kdummylabel85: 	goto dummylabel85;
        case m2c::kdummylabel86: 	goto dummylabel86;
        case m2c::kdummylabel87: 	goto dummylabel87;
        case m2c::kdummylabel88: 	goto dummylabel88;
        case m2c::kdummylabel89: 	goto dummylabel89;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kdummylabel90: 	goto dummylabel90;
        case m2c::kdummylabel91: 	goto dummylabel91;
        case m2c::kdummylabel92: 	goto dummylabel92;
        case m2c::kdummylabel93: 	goto dummylabel93;
        case m2c::kdummylabel94: 	goto dummylabel94;
        case m2c::kdummylabel95: 	goto dummylabel95;
        case m2c::kdummylabel96: 	goto dummylabel96;
        case m2c::kdummylabel97: 	goto dummylabel97;
        case m2c::kdummylabel98: 	goto dummylabel98;
        case m2c::kdummylabel99: 	goto dummylabel99;
        case m2c::kdxok: 	goto dxok;
        case m2c::kdyok: 	goto dyok;
        case m2c::kdzok: 	goto dzok;
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
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitdestroy: 	goto exitdestroy;
        case m2c::kexitintr20: 	goto exitintr20;
        case m2c::kexitjoysticks: 	goto exitjoysticks;
        case m2c::kexitwinds: 	goto exitwinds;
        case m2c::kfix90: 	goto fix90;
        case m2c::kflapsexit: 	goto flapsexit;
        case m2c::kflapsinactive: 	goto flapsinactive;
        case m2c::kflapsok: 	goto flapsok;
        case m2c::kgameintr100: 	goto gameintr100;
        case m2c::kgameintr20: 	goto gameintr20;
        case m2c::kgameintr50: 	goto gameintr50;
        case m2c::kgndspeedhigh: 	goto gndspeedhigh;
        case m2c::kgndsteering: 	goto gndsteering;
        case m2c::khardsurface: 	goto hardsurface;
        case m2c::khibuffet: 	goto hibuffet;
        case m2c::khioffhard: 	goto hioffhard;
        case m2c::khitgndobject: 	goto hitgndobject;
        case m2c::khitmobobject: 	goto hitmobobject;
        case m2c::kincposn: 	goto incposn;
        case m2c::kincreheat: 	goto increheat;
        case m2c::kinctemp: 	goto inctemp;
        case m2c::kinitmodel: 	goto initmodel;
        case m2c::kinitnewsector: 	goto initnewsector;
        case m2c::kintoflapsdn: 	goto intoflapsdn;
        case m2c::kintoflapsup: 	goto intoflapsup;
        case m2c::kjettisonok: 	goto jettisonok;
        case m2c::kjoyailacquire: 	goto joyailacquire;
        case m2c::kjoyailapproach: 	goto joyailapproach;
        case m2c::kjoyailerons: 	goto joyailerons;
        case m2c::kjoyailmanual: 	goto joyailmanual;
        case m2c::kjoyailtrack: 	goto joyailtrack;
        case m2c::kjoyeleacquire: 	goto joyeleacquire;
        case m2c::kjoyeleapproach: 	goto joyeleapproach;
        case m2c::kjoyelemanual: 	goto joyelemanual;
        case m2c::kjoyeletf: 	goto joyeletf;
        case m2c::kjoyelevators: 	goto joyelevators;
        case m2c::kjoyrudder: 	goto joyrudder;
        case m2c::kjoythrottle: 	goto joythrottle;
        case m2c::kkbdailacquire: 	goto kbdailacquire;
        case m2c::kkbdailapproach: 	goto kbdailapproach;
        case m2c::kkbdailerons: 	goto kbdailerons;
        case m2c::kkbdailmanual: 	goto kbdailmanual;
        case m2c::kkbdailtrack: 	goto kbdailtrack;
        case m2c::kkbdautothrot: 	goto kbdautothrot;
        case m2c::kkbdeleacquire: 	goto kbdeleacquire;
        case m2c::kkbdeleapproach: 	goto kbdeleapproach;
        case m2c::kkbdelemanual: 	goto kbdelemanual;
        case m2c::kkbdeletf: 	goto kbdeletf;
        case m2c::kkbdelevators: 	goto kbdelevators;
        case m2c::kkbdrudder: 	goto kbdrudder;
        case m2c::kkbdstatus: 	goto kbdstatus;
        case m2c::kkbdthrottle: 	goto kbdthrottle;
        case m2c::kkf_scancommon: 	goto kf_scancommon;
        case m2c::kkf_scannavig: 	goto kf_scannavig;
        case m2c::kkf_scanpilot: 	goto kf_scanpilot;
        case m2c::kkf_updatecommon: 	goto kf_updatecommon;
        case m2c::kkf_updatenavig: 	goto kf_updatenavig;
        case m2c::kkf_updatepilot: 	goto kf_updatepilot;
        case m2c::kkfsok: 	goto kfsok;
        case m2c::klandheavy: 	goto landheavy;
        case m2c::klobuffet: 	goto lobuffet;
        case m2c::klooffhard: 	goto looffhard;
        case m2c::kmodel: 	goto model;
        case m2c::kmoveflapsdown: 	goto moveflapsdown;
        case m2c::kmovewingsback: 	goto movewingsback;
        case m2c::knegchange: 	goto negchange;
        case m2c::knobuffet: 	goto nobuffet;
        case m2c::knooffhard: 	goto nooffhard;
        case m2c::knoseok: 	goto noseok;
        case m2c::kpostamble: 	goto postamble;
        case m2c::kpreamble: 	goto preamble;
        case m2c::krailsurface: 	goto railsurface;
        case m2c::krecoveryrates: 	goto recoveryrates;
        case m2c::kreheatoff: 	goto reheatoff;
        case m2c::kreheaton: 	goto reheaton;
        case m2c::krollok: 	goto rollok;
        case m2c::krpmok: 	goto rpmok;
        case m2c::krrateok: 	goto rrateok;
        case m2c::kscandisabled: 	goto scandisabled;
        case m2c::kscanpaused: 	goto scanpaused;
        case m2c::ksetalpha: 	goto setalpha;
        case m2c::ksetanim: 	goto setanim;
        case m2c::ksetdeltaprate: 	goto setdeltaprate;
        case m2c::ksetdeltarrate: 	goto setdeltarrate;
        case m2c::ksetdrag: 	goto setdrag;
        case m2c::ksetflapdest: 	goto setflapdest;
        case m2c::ksetflapval: 	goto setflapval;
        case m2c::ksetgcoord: 	goto setgcoord;
        case m2c::ksetgmax: 	goto setgmax;
        case m2c::ksethdgrate: 	goto sethdgrate;
        case m2c::ksetinduceddrag: 	goto setinduceddrag;
        case m2c::ksetksweep: 	goto setksweep;
        case m2c::ksetksweepcl2: 	goto setksweepcl2;
        case m2c::ksetpitchrate: 	goto setpitchrate;
        case m2c::ksetrollrate: 	goto setrollrate;
        case m2c::ksetthrust: 	goto setthrust;
        case m2c::ksetthrust1: 	goto setthrust1;
        case m2c::ksetthrust2: 	goto setthrust2;
        case m2c::ksetweight: 	goto setweight;
        case m2c::ksetwingdest: 	goto setwingdest;
        case m2c::ksetwingval: 	goto setwingval;
        case m2c::ksetzdot: 	goto setzdot;
        case m2c::ksinkok: 	goto sinkok;
        case m2c::kskipairborne: 	goto skipairborne;
        case m2c::kskipairbrakes: 	goto skipairbrakes;
        case m2c::kskipautotrim: 	goto skipautotrim;
        case m2c::kskipbrakeshake: 	goto skipbrakeshake;
        case m2c::kskipcollisions: 	goto skipcollisions;
        case m2c::kskipdecalt: 	goto skipdecalt;
        case m2c::kskipdechdg: 	goto skipdechdg;
        case m2c::kskipecm: 	goto skipecm;
        case m2c::kskipeject: 	goto skipeject;
        case m2c::kskipengfire: 	goto skipengfire;
        case m2c::kskipflapsdn: 	goto skipflapsdn;
        case m2c::kskipflapsup: 	goto skipflapsup;
        case m2c::kskipgear: 	goto skipgear;
        case m2c::kskipgndpdown: 	goto skipgndpdown;
        case m2c::kskiphilltest: 	goto skiphilltest;
        case m2c::kskipincalt: 	goto skipincalt;
        case m2c::kskipinchdg: 	goto skipinchdg;
        case m2c::kskipincride: 	goto skipincride;
        case m2c::kskipincvias: 	goto skipincvias;
        case m2c::kskipquit: 	goto skipquit;
        case m2c::kskiprecal: 	goto skiprecal;
        case m2c::kskipsmoketrail: 	goto skipsmoketrail;
        case m2c::kskipspils: 	goto skipspils;
        case m2c::kskipstartspin: 	goto skipstartspin;
        case m2c::kskipsurfacechk: 	goto skipsurfacechk;
        case m2c::kskipsweepback: 	goto skipsweepback;
        case m2c::kskipsweepfwd: 	goto skipsweepfwd;
        case m2c::kskiptouchdown: 	goto skiptouchdown;
        case m2c::kskipwbrakes: 	goto skipwbrakes;
        case m2c::kslamreheatopen: 	goto slamreheatopen;
        case m2c::kslamreheatshut: 	goto slamreheatshut;
        case m2c::kslamthrotopen: 	goto slamthrotopen;
        case m2c::kslamthrotshut: 	goto slamthrotshut;
        case m2c::ksortairborne: 	goto sortairborne;
        case m2c::ksortdeadstick: 	goto sortdeadstick;
        case m2c::ksortgmax: 	goto sortgmax;
        case m2c::ksortgmin: 	goto sortgmin;
        case m2c::ksortjoysticks: 	goto sortjoysticks;
        case m2c::ksortlanding: 	goto sortlanding;
        case m2c::ksorttemp: 	goto sorttemp;
        case m2c::ksortthrust: 	goto sortthrust;
        case m2c::ksorttwoplayer: 	goto sorttwoplayer;
        case m2c::ksortwheelsup: 	goto sortwheelsup;
        case m2c::kspinrates: 	goto spinrates;
        case m2c::kspooldown1: 	goto spooldown1;
        case m2c::kspooldown2: 	goto spooldown2;
        case m2c::kstallpitchdown: 	goto stallpitchdown;
        case m2c::kstallwingdrop: 	goto stallwingdrop;
        case m2c::kstartejectseq: 	goto startejectseq;
        case m2c::ksumcontrols: 	goto sumcontrols;
        case m2c::ksweepexit: 	goto sweepexit;
        case m2c::ksweepinactive: 	goto sweepinactive;
        case m2c::ktempok: 	goto tempok;
        case m2c::ktestjoy1: 	goto testjoy1;
        case m2c::ktestjoy2: 	goto testjoy2;
        case m2c::kupdatedisabled: 	goto updatedisabled;
        case m2c::kupdateflaps: 	goto updateflaps;
        case m2c::kupdategamekeys: 	goto updategamekeys;
        case m2c::kupdatepaused: 	goto updatepaused;
        case m2c::kupdateposn: 	goto updateposn;
        case m2c::kupdatesweep: 	goto updatesweep;
        case m2c::kwashroll1: 	goto washroll1;
        case m2c::kwashroll2: 	goto washroll2;
        case m2c::kwashroll3: 	goto washroll3;
        case m2c::kwashroll4: 	goto washroll4;
        case m2c::kwashrollok: 	goto washrollok;
        default: return __dispatch_call(__disp, _state);
    };
}


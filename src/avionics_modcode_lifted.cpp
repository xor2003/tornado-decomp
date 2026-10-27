/* THIS IS GENERATED FILE */

        
#include "avionics.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updateavionics:
	// 2811 
	/* call	CalcVFactor ;* kill: assume all */
	CALL(calcvfactor, 0);
edummylabel1:
	// 4369 
	/* call	ScanGndHeight */
	CALL(scangndheight, 0);
	/* call	CalcRadAlt */
	CALL(calcradalt, 0);
	/* call	UpdateNavSystem */
	CALL(updatenavsystem, 0);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* call	ScanAirfields */
	CALL(scanairfields, 0);
	/* call	UpdateILS */
	CALL(updateils, 0);
	/* call	AutoPilot */
	CALL(autopilot, 0);
	/* call	UpdateRadar */
	CALL(updateradar, 0);
	/* call	UpdateAppProg */
	CALL(updateappprog, 0);
	/* call	UpdateAirRadar */
	CALL(updateairradar, 0);
	/* call	UpdateRWR */
	CALL(updaterwr, 0);
	/* call	ValidateTIALD */
	CALLF(validatetiald, 0);
	/* call	CheckFailures */
	CALL(checkfailures, 0);
	/* ret */
	RETF(0);
calcvfactor:
	// 2836 
	// 0 ;----------------------
	// 0 ;* calc Vfac (wrt Vtas)
	// 0 ;----------------------
	// 0 ;* Vtas range relevant to terrain following and altitude acquire is
	// 0 ;* 200 .. 800kts, where:-
	// 0 ;*
	// 0 ;*    @ 200kts, Vfac = 0
	// 0 ;*    @ 800kts, Vfac = 16
	// 0 ;*
	// 0 ;* 200kts = 340ft/sec
	// 0 ;* 800kts = 1360ft/sec (approx. 340 + 1024 = 1364)
	// 0 ;*
	// 0 ;* Vfac = (bound(Vtas, 340*8, 1364*8) - 340*8) / 512 + 1/2 bit round up = 0 .. 16
edummylabel2:
	// 4371 
	/* mov	ax,Vtas */
	ax = vtas;
	/* cmp	ax,340*8 */
	CMP(ax, 340*8);
	/* jge	__m2c_macrolocal_1_TestHi */
	if ((short)(ax) >= (short)(340*8)) {goto __m2c_macrolocal_1_testhi;}
	/* mov	ax,340*8 */
	ax = 340*8;
	/* jmp	__m2c_macrolocal_1_TestOk */
	goto __m2c_macrolocal_1_testok;
__m2c_macrolocal_1_testhi:
	// 4373 
	/* __m2c_macrolocal_1_TestHi:		cmp	ax,1364*8 */
	CMP(ax, 1364*8);
	/* jle	__m2c_macrolocal_1_TestOk */
	if ((short)(ax) <= (short)(1364*8)) {goto __m2c_macrolocal_1_testok;}
	/* mov	ax,1364*8 */
	ax = 1364*8;
__m2c_macrolocal_1_testok:
	// 4375 
	/* sub	ax,340*8 */
	SUB(ax, 340*8);
	/* mov	al,ah		;/256 */
	al = ah;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shr	ax,1		;/512 */
	SHR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	Vfac,ax */
	vfac = ax;
	/* ret */
	RETN(0);
scangndheight:
	// 2878 
	// 0 ;* look up sample distance (wrt Vfac)
edummylabel3:
	// 4377 
	/* mov	bx,Vfac */
	bx = vfac;
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,RangeLaw[bx] */
	bx = *(dw*)(((db*)&rangelaw)+bx);
	/* mov	GndHtDist,bx */
	gndhtdist = bx;
	// 0 ;* copy aircraft position to temp buffer
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 2891 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 2892 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 2893 mov	di,OFFSET TMP_VIEW */
	// 2894 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* calc ground height immediately below aircraft
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* mov	GndHtData[0],ax */
	*(dw*)(((db*)gndhtdata)+0) = ax;
	// 0 ;* calc x and y offsets for distance between samples
	/* mov	ax,TMP_VIEW.VP_HDG */
	ax = tmp_view.vp_hdg;
	/* mov	dx,GndHtDist */
	dx = gndhtdist;
	// 0 ;* use *64 scaling for accuracy
	/* mov	cl,6		;*64 */
	cl = 6;
	/* shl	dx,cl		;dist * 64 */
	SHL(dx, cl);
	/* call	CalcDeltaXY */
	CALLF(calcdeltaxy, 0);
	/* mov	si,cx		;x offset */
	si = cx;
	/* mov	di,bx		;y offset */
	di = bx;
	/* mov	ax,si */
	ax = si;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x offset), dx = sign(x offset)
	/* mov	cl,6		;/64 */
	cl = 6;
	/* shr	ax,cl		;x offset / 64 */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	si,ax */
	si = ax;
	/* mov	ax,di */
	ax = di;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(y offset), dx = sign(y offset)
	/* mov	cl,6		;/64 */
	cl = 6;
	/* shr	ax,cl		;y offset / 64 */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	di,ax */
	di = ax;
	/* mov	ax,si		;x add */
	ax = si;
	/* mov	dx,di		;y add */
	dx = di;
	/* mov	bx,2			;index */
	bx = 2;
	/* mov	cx,NUM_HT_SAMPLES-1	;count */
	cx = 32-1;
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	// 0 ;* scan ground height loop
scangndhtloop:
	// 4379 
	/* ScanGndHtLoop: 	push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	// 0 ;* update xsec, xft
	/* add	ax,[si].VP_XFT	;x + ax */
	ADD(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cmp	ax,8192		;change sector? */
	CMP(ax, 8192);
	/* jl	__m2c_macrolocal_6_MvXY1			;no -> */
	if ((short)(ax) < (short)(8192)) {goto __m2c_macrolocal_6_mvxy1;}
	/* sub	ax,16384 */
	SUB(ax, 16384);
	/* inc	[si].VP_XSEC */
	INC(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
__m2c_macrolocal_6_mvxy1:
	// 4381 
	/* __m2c_macrolocal_6_MvXY1:		cmp	ax,-8192		;change sector? */
	CMP(ax, -8192);
	/* jge	__m2c_macrolocal_6_MvXY2			;no -> */
	if ((short)(ax) >= (short)(-8192)) {goto __m2c_macrolocal_6_mvxy2;}
	/* add	ax,16384 */
	ADD(ax, 16384);
	/* dec	[si].VP_XSEC */
	DEC(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
__m2c_macrolocal_6_mvxy2:
	// 4383 
	/* __m2c_macrolocal_6_MvXY2:		mov	[si].VP_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft))), m2c::getdata(ax));
	// 0 ;* update ysec, yft
	/* add	dx,[si].VP_YFT	;y + dx */
	ADD(dx, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cmp	dx,8192 		;change sector? */
	CMP(dx, 8192);
	/* jl	__m2c_macrolocal_6_MvXY3			;no -> */
	if ((short)(dx) < (short)(8192)) {goto __m2c_macrolocal_6_mvxy3;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	[si].VP_YSEC */
	DEC(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
__m2c_macrolocal_6_mvxy3:
	// 4385 
	/* __m2c_macrolocal_6_MvXY3:		cmp	dx,-8192		;change sector? */
	CMP(dx, -8192);
	/* jge	__m2c_macrolocal_6_MvXY4			;no -> */
	if ((short)(dx) >= (short)(-8192)) {goto __m2c_macrolocal_6_mvxy4;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	[si].VP_YSEC */
	INC(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
__m2c_macrolocal_6_mvxy4:
	// 4387 
	/* __m2c_macrolocal_6_MvXY4:		mov	[si].VP_YFT,dx */
	m2c::setdata(&(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft))), m2c::getdata(dx));
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	GndHtData[bx],ax */
	*(dw*)(((db*)gndhtdata)+bx) = ax;
	/* pop	ax */
	POP(ax);
	/* add	bx,2		;next index */
	ADD(bx, 2);
	/* loop	ScanGndHtLoop */
	LOOP(scangndhtloop);
	/* ret */
	RETN(0);
calcradalt:
	// 2988 
	// 0 ;---------------------
	// 0 ;* calc radar altitude
	// 0 ;---------------------
edummylabel4:
	// 4389 
	/* mov	ax,RAD_ALT_CEILING	;assume alt > 65,535ft */
	ax = 10000;
	/* cmp	ZftHi,0		;alt > 65,535ft */
	CMP(zfthi, 0);
	/* ja	@F		;yes -> */
	if ((dw)(zfthi) > (dw)(0)) {goto dummylabel1;}
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,GndHtData[0]	;radar alt = alt - ground height */
	SUB(ax, *(dw*)(((db*)gndhtdata)+0));
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
	// 0 ;limit to 0
	/* cmp	ax,RAD_ALT_CEILING	;limit to RAD_ALT_CEILING */
	CMP(ax, 10000);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(10000)) {goto dummylabel1;}
	/* mov	ax,RAD_ALT_CEILING */
	ax = 10000;
dummylabel1:
	// 4391 
	/* @@:		mov	TrueRadAlt,ax */
	trueradalt = ax;
	// 0 ;----------------
	// 0 ;* damp radar alt (frame rate dependant)
	// 0 ;----------------
	/* sub	ax,DispRadAlt */
	SUB(ax, dispradalt);
	// 0 ;* use abs(TrueRadAlt - DispRadAlt) to avoid -1 truncation error
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
	/* add	DispRadAlt,ax */
	ADD(dispradalt, ax);
	/* ret */
	RETN(0);
updatenavsystem:
	// 3035 
	// 0 ;----------------------
	// 0 ;* update waypoint data
	// 0 ;----------------------
edummylabel5:
	// 4393 
	/* call	UpdateWPData */
	CALL(updatewpdata, 0);
	// 0 ;------------------------------
	// 0 ;* sort waypoint selection keys
	// 0 ;------------------------------
	// 0 ;* skip to next waypoint
	/* mov	al,BYTE PTR KF_SkipWaypoint[K_STATUS] */
	al = *((&kf_skipwaypoint)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_skipwaypoint)+k_status););	// 3050 						mov	al,BYTE PTR KF_SkipWaypoint[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel2;}
	/* call	AdvanceWP */
	CALLF(advancewp, 0);
	// 0 ;* cancel target waypoint (check before "select target" as share same key)
dummylabel2:
	// 4395 
	/* @@:	mov	al,BYTE PTR KF_CancelTgtWP[K_STATUS] */
	al = *((&kf_canceltgtwp)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_canceltgtwp)+k_status););	// 3057 mov	al,BYTE PTR KF_CancelTgtWP[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel3;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* jmp	TgtWPOk */
	goto tgtwpok;
	// 0 ;* select target waypoint
dummylabel3:
	// 4397 
	/* @@:	mov	al,BYTE PTR KF_SelectTgtWP[K_STATUS] */
	al = *((&kf_selecttgtwp)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_selecttgtwp)+k_status););	// 3065 mov	al,BYTE PTR KF_SelectTgtWP[K_STATUS] */
	/* jz	TgtWPOk */
	if (!(al & al)) {goto tgtwpok;}
	/* call	SelectTgtWP */
	CALLF(selecttgtwp, 0);
tgtwpok:
	// 4399 
	/* TgtWPOk:	ret */
	RETN(0);
updateclock:
	// 3080 
	// 0 ;----------------------
	// 0 ;* update 24 hour clock
	// 0 ;----------------------
edummylabel6:
	// 4401 
	/* mov	al,Clock24.CLK_100THS */
	al = clock24.clk_100ths;
	/* add	al,BYTE PTR LastFrame */
	ADD(al, *(db*)(&lastframe));
	/* cmp	al,100		;> 1sec? */
	CMP(al, 100);
	/* jae	@F		;yes -> */
	if ((db)(al) >= (db)(100)) {goto dummylabel4;}
	/* mov	Clock24.CLK_100THS,al */
	clock24.clk_100ths = al;
	/* jmp	ClockOk */
	goto clockok;
dummylabel4:
	// 4403 
	/* @@:		sub	al,100 */
	SUB(al, 100);
	/* mov	Clock24.CLK_100THS,al */
	clock24.clk_100ths = al;
	/* mov	al,Clock24.CLK_SECS */
	al = clock24.clk_secs;
	/* inc	al */
	INC(al);
	/* cmp	al,60		;> 1min? */
	CMP(al, 60);
	/* jae	@F		;yes -> */
	if ((db)(al) >= (db)(60)) {goto dummylabel5;}
	/* mov	Clock24.CLK_SECS,al */
	clock24.clk_secs = al;
	/* jmp	ClockOk */
	goto clockok;
dummylabel5:
	// 4405 
	/* @@:		mov	Clock24.CLK_SECS,0 */
	clock24.clk_secs = 0;
	/* mov	al,Clock24.CLK_MINS */
	al = clock24.clk_mins;
	/* inc	al */
	INC(al);
	/* cmp	al,60		;> 1hr? */
	CMP(al, 60);
	/* jae	@F		;yes -> */
	if ((db)(al) >= (db)(60)) {goto dummylabel6;}
	/* mov	Clock24.CLK_MINS,al */
	clock24.clk_mins = al;
	/* jmp	ClockOk */
	goto clockok;
dummylabel6:
	// 4407 
	/* @@:		mov	Clock24.CLK_MINS,0 */
	clock24.clk_mins = 0;
	/* mov	al,Clock24.CLK_HRS */
	al = clock24.clk_hrs;
	/* inc	al */
	INC(al);
	/* cmp	al,24		;> 1day? */
	CMP(al, 24);
	/* jae	@F		;yes -> */
	if ((db)(al) >= (db)(24)) {goto dummylabel7;}
	/* mov	Clock24.CLK_HRS,al */
	clock24.clk_hrs = al;
	/* jmp	ClockOk */
	goto clockok;
dummylabel7:
	// 4409 
	/* @@:		mov	Clock24.CLK_HRS,0 */
	clock24.clk_hrs = 0;
clockok:
	// 4411 
	/* ClockOk:	ret */
	RETN(0);
autopilot:
	// 3124 
	// 0 ;-----------------------------------
	// 0 ;* ADC damaged - disengage autopilot (if on)
	// 0 ;-----------------------------------
edummylabel7:
	// 4413 
	/* test	SSF_ADC,1 */
	TEST(ssf_adc, 1);
	/* jz	ADCOk */
	if (!(ssf_adc & 1)) {goto adcok;}
	/* cmp	AutoMode,AUTO_OFF */
	CMP(automode, 0);
	/* je	@F */
	if ((dw)(automode) == (dw)(0)) {goto dummylabel8;}
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* or	RedWarnings2,RED_AUT */
	OR(redwarnings2, 0x8);
dummylabel8:
	// 4415 
	/* @@:		test	AutoThrot,1 */
	TEST(autothrot, 1);
	/* jz	@F */
	if (!(autothrot & 1)) {goto dummylabel9;}
	/* mov	AutoThrot,0 */
	autothrot = 0;
	/* or	RedWarnings2,RED_AUT */
	OR(redwarnings2, 0x8);
dummylabel9:
	// 4417 
	/* @@:		jmp	ExitAutoPilot */
	goto exitautopilot;
	// 0 ;----------------------------
	// 0 ;* cancel auto-pilot request?
	// 0 ;----------------------------
adcok:
	// 4419 
	/* ADCOk:	mov	al,BYTE PTR KF_AutoCancel[K_STATUS] */
	al = *((&kf_autocancel)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_autocancel)+k_status););	// 3146 mov	al,BYTE PTR KF_AutoCancel[K_STATUS] */
	/* jz	SkipCancel */
	if (!(al & al)) {goto skipcancel;}
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;------------------------
	// 0 ;* approach mode request?
	// 0 ;------------------------
skipcancel:
	// 4421 
	/* mov	al,BYTE PTR KF_Approach[K_STATUS] */
	al = *((&kf_approach)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_approach)+k_status););	// 3158 				        mov	al,BYTE PTR KF_Approach[K_STATUS] */
	/* jz	SkipApproach */
	if (!(al & al)) {goto skipapproach;}
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoMode,AUTO_APPROACH */
	automode = 2;
	/* mov	AppFlag,1 */
	appflag = 1;
	/* mov	AltMode,ALT_APPROACH */
	altmode = 2;
	/* mov	AAFlag,1 */
	aaflag = 1;
	/* mov	HdgMode,HDG_APPROACH */
	hdgmode = 2;
	/* mov	AHFlag,1 */
	ahflag = 1;
	/* mov	AutoThrot,1 */
	autothrot = 1;
	/* call	SelectAutoMFD */
	CALLF(selectautomfd, 0);
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;---------------------
	// 0 ;* track mode request?
	// 0 ;---------------------
skipapproach:
	// 4423 
/* m2c-phantom removed: 	R(al = *((&kf_track)+k_status););	// 3176 SkipApproach:	mov	al,BYTE PTR KF_Track[K_STATUS] */
	/* mov	al,BYTE PTR KF_Track[K_STATUS] */
	al = *((&kf_track)+k_status);
	/* or	al,AutoTrack	;track request or auto-start? */
	OR(al, autotrack);
	/* jz	SkipTrack	;no -> */
	if (al == 0) {goto skiptrack;}
	/* mov	AutoTrack,0 */
	autotrack = 0;
	// 0 ;* note: Preserve vars for SortWPAlt. If track mode cannot be selected
	// 0 ;*       then call AutoCancel again to ensure vars are reset to manual.
	/* push	AltMode */
	PUSH(altmode);
	/* mov	al,TFAuto */
	al = tfauto;
	/* mov	ah,AAFlag */
	ah = aaflag;
	/* push	ax */
	PUSH(ax);
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* pop	ax */
	POP(ax);
	/* mov	AAFlag,ah */
	aaflag = ah;
	/* mov	TFAuto,al */
	tfauto = al;
	/* pop	AltMode */
	POP(altmode);
	// 0 ;* cannot select track mode if weapon release in progress
	/* test	ArmLock,1 */
	TEST(armlock, 1);
	/* jnz	@F */
	if ((armlock & 1) != 0) {goto dummylabel10;}
	// 0 ;* cannot select track mode if no waypoints (even if floating waypoint valid)
	/* cmp	WayTotal,0 */
	CMP(waytotal, 0);
	/* ja	ContTrack */
	if ((dw)(waytotal) > (dw)(0)) {goto conttrack;}
dummylabel10:
	// 4425 
	/* @@:		call	AutoCancel */
	CALL(autocancel, 0);
	/* jmp	SkipTrack */
	goto skiptrack;
conttrack:
	// 4427 
	/* ContTrack:	cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoMode,AUTO_TRACK */
	automode = 4;
	/* mov	ARFlag,1 */
	arflag = 1;
	/* call	SortWPAlt */
	CALL(sortwpalt, 0);
	// 0 ;* set heading for waypoint
	/* mov	HdgMode,HDG_TRACK */
	hdgmode = 6;
	/* mov	AHFlag,1 */
	ahflag = 1;
	/* mov	ax,WPBrgFine */
	ax = wpbrgfine;
	/* mov	dx,360 */
	dx = 360;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	AutoHdg,dx */
	autohdg = dx;
	/* mov	AutoHdgFine,ax */
	autohdgfine = ax;
	/* call	SelectAutoMFD */
	CALLF(selectautomfd, 0);
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;--------------------
	// 0 ;* hold mode request?
	// 0 ;--------------------
skiptrack:
	// 4429 
	/* SkipTrack:	mov	al,BYTE PTR KF_Hold[K_STATUS] */
	al = *((&kf_hold)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_hold)+k_status););	// 3225 mov	al,BYTE PTR KF_Hold[K_STATUS] */
	/* jz	SkipHold */
	if (!(al & al)) {goto skiphold;}
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoMode,AUTO_HOLD */
	automode = 6;
	// 0 ;* hold current altitude
	/* mov	AltMode,ALT_ACQUIRE */
	altmode = 4;
	/* mov	AAFlag,1 */
	aaflag = 1;
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,10 */
	bx = 10;
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,MIN_AUTO_ALT */
	CMP(ax, 20);
	/* jae	__m2c_macrolocal_16_TestHi */
	if ((dw)(ax) >= (dw)(20)) {goto __m2c_macrolocal_16_testhi;}
	/* mov	ax,MIN_AUTO_ALT */
	ax = 20;
	/* jmp	__m2c_macrolocal_16_TestOk */
	goto __m2c_macrolocal_16_testok;
__m2c_macrolocal_16_testhi:
	// 4431 
	/* __m2c_macrolocal_16_TestHi:		cmp	ax,MAX_AUTO_ALT */
	CMP(ax, 7000);
	/* jbe	__m2c_macrolocal_16_TestOk */
	if ((dw)(ax) <= (dw)(7000)) {goto __m2c_macrolocal_16_testok;}
	/* mov	ax,MAX_AUTO_ALT */
	ax = 7000;
__m2c_macrolocal_16_testok:
	// 4433 
	/* mov	AutoAlt,ax */
	autoalt = ax;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	// 0 ;* hold current heading
	/* mov	HdgMode,HDG_ACQUIRE */
	hdgmode = 4;
	/* mov	AHFlag,1 */
	ahflag = 1;
	/* mov	ax,HFine */
	ax = hfine;
	/* mov	dx,360 */
	dx = 360;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	AutoHdg,dx */
	autohdg = dx;
	/* mov	AutoHdgFine,ax */
	autohdgfine = ax;
	/* call	SelectAutoMFD */
	CALLF(selectautomfd, 0);
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;-------------------------
	// 0 ;* terrain follow request?
	// 0 ;-------------------------
skiphold:
	// 4435 
	/* SkipHold:	mov	al,BYTE PTR KF_TFollow[K_STATUS] */
	al = *((&kf_tfollow)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_tfollow)+k_status););	// 3267 mov	al,BYTE PTR KF_TFollow[K_STATUS] */
	/* jnz	__m2c_macrolocal_18_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_18_skip;}
	/* jmp	SkipTFollow */
	goto skiptfollow;
__m2c_macrolocal_18_skip:
	// 4437 
	// 0 ;* terrain following not available in ADV
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne	__m2c_macrolocal_19_skip */
	if ((dw)(tornadotype) != (dw)(2)) {goto __m2c_macrolocal_19_skip;}
	/* jmp	SkipTFollow */
	goto skiptfollow;
__m2c_macrolocal_19_skip:
	// 4439 
	// 0 ;* toggle alt mode whilst in track mode?
	/* cmp	AutoMode,AUTO_TRACK	;track mode? */
	CMP(automode, 4);
	/* je	ToggleAltMode		;yes -> */
	if ((dw)(automode) == (dw)(4)) {goto togglealtmode;}
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoMode,AUTO_TF */
	automode = 8;
	// 0 ;* sort TF ride alt wrt current rad alt
	/* mov	AltMode,ALT_TF */
	altmode = 6;
	/* mov	TFAuto,1 */
	tfauto = 1;
	/* mov	ax,TrueRadAlt */
	ax = trueradalt;
	/* call	CalcTFRideIndex */
	CALL(calctfrideindex, 0);
	// 0 ;* hold current heading
	/* mov	HdgMode,HDG_ACQUIRE */
	hdgmode = 4;
	/* mov	AHFlag,1 */
	ahflag = 1;
	/* mov	ax,HFine */
	ax = hfine;
	/* mov	dx,360 */
	dx = 360;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	AutoHdg,dx */
	autohdg = dx;
	/* mov	AutoHdgFine,ax */
	autohdgfine = ax;
	/* call	SelectAutoMFD */
	CALLF(selectautomfd, 0);
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;-----------------------------
	// 0 ;* toggle ALT_ACQUIRE / ALT_TF
	// 0 ;-----------------------------
togglealtmode:
	// 4441 
	/* ToggleAltMode:	cmp	AltMode,ALT_TF	;terrain following? */
	CMP(altmode, 6);
	/* jne	@F		;no -> */
	if ((dw)(altmode) != (dw)(6)) {goto dummylabel11;}
	// 0 ;* set ALT_ACQUIRE mode
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	TFAuto,0 */
	tfauto = 0;
	/* mov	AltMode,ALT_ACQUIRE */
	altmode = 4;
	/* mov	AAFlag,1 */
	aaflag = 1;
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,10 */
	bx = 10;
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,MIN_AUTO_ALT */
	CMP(ax, 20);
	/* jae	__m2c_macrolocal_20_TestHi */
	if ((dw)(ax) >= (dw)(20)) {goto __m2c_macrolocal_20_testhi;}
	/* mov	ax,MIN_AUTO_ALT */
	ax = 20;
	/* jmp	__m2c_macrolocal_20_TestOk */
	goto __m2c_macrolocal_20_testok;
__m2c_macrolocal_20_testhi:
	// 4443 
	/* __m2c_macrolocal_20_TestHi:		cmp	ax,MAX_AUTO_ALT */
	CMP(ax, 7000);
	/* jbe	__m2c_macrolocal_20_TestOk */
	if ((dw)(ax) <= (dw)(7000)) {goto __m2c_macrolocal_20_testok;}
	/* mov	ax,MAX_AUTO_ALT */
	ax = 7000;
__m2c_macrolocal_20_testok:
	// 4445 
	/* mov	AutoAlt,ax */
	autoalt = ax;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;* set ALT_TF mode
dummylabel11:
	// 4447 
	/* @@:		cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AAFlag,0 */
	aaflag = 0;
	/* mov	AltMode,ALT_TF */
	altmode = 6;
	/* mov	TFAuto,1 */
	tfauto = 1;
	/* mov	ax,TrueRadAlt */
	ax = trueradalt;
	/* call	CalcTFRideIndex */
	CALL(calctfrideindex, 0);
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ContAutoPilot */
	goto contautopilot;
	// 0 ;------------------------
	// 0 ;* auto-throttle request?
	// 0 ;------------------------
skiptfollow:
	// 4449 
	/* SkipTFollow:	mov	al,BYTE PTR KF_Throttle[K_STATUS] */
	al = *((&kf_throttle)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_throttle)+k_status););	// 3347 mov	al,BYTE PTR KF_Throttle[K_STATUS] */
	/* jz	ContAutoPilot */
	if (!(al & al)) {goto contautopilot;}
	// 0 ;* cannot engage / disengage auto-throttle if approach mode selected
	/* cmp	AutoMode,AUTO_APPROACH */
	CMP(automode, 2);
	/* je	ContAutoPilot */
	if ((dw)(automode) == (dw)(2)) {goto contautopilot;}
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* xor	AutoThrot,1	;toggle on / off */
	XOR(autothrot, 1);
	/* jz	AutoThrotOk	;off -> */
	if (autothrot == 0) {goto autothrotok;}
	// 0 ;* hold current airspeed
	/* mov	ax,Vkts */
	ax = vkts;
	/* cmp	ax,MAX_AUTO_VIAS	;<= max value? */
	CMP(ax, 800);
	/* jbe	@F			;yes -> */
	if ((dw)(ax) <= (dw)(800)) {goto dummylabel12;}
	/* mov	ax,MAX_AUTO_VIAS */
	ax = 800;
dummylabel12:
	// 4451 
	/* @@:		mov	AutoVias,ax */
	autovias = ax;
	/* mov	AutoViasFine,0 */
	autoviasfine = 0;
	/* call	SelectAutoMFD */
	CALLF(selectautomfd, 0);
autothrotok:
	// 4453 
	/* AutoThrotOk:	sti			;<<<<< IMPORTANT <<<<< */
	STI;
	// 0 ;---------------------------
	// 0 ;* update auto-pilot systems
	// 0 ;---------------------------
	// 0 ;* WARNING: Order of subroutines is important - DO NOT CHANGE!
	// 0 ;*
	// 0 ;*          (Refer to AutoRoute and AutoApproach documentation).
contautopilot:
	// 4455 
	/* ContAutoPilot: 	call	AutoRoute */
	CALL(autoroute, 0);
	/* call	AutoApproach */
	CALL(autoapproach, 0);
	/* call	TerrainFollow */
	CALL(terrainfollow, 0);
	/* call	AutoAltitude */
	CALL(autoaltitude, 0);
	/* call	AutoHeading */
	CALL(autoheading, 0);
	/* call	AutoThrottle */
	CALL(autothrottle, 0);
	// 0 ;---------------------------------
	// 0 ;* test for auto-pilot malfunction
	// 0 ;---------------------------------
	/* mov	al,TFError */
	al = tferror;
	/* or	al,ATError */
	OR(al, aterror);
	/* or	al,AHError */
	OR(al, aherror);
	/* or	al,AAError */
	OR(al, aaerror);
	/* or	al,AppError */
	OR(al, apperror);
	/* jz	ExitAutoPilot	;no malfunction -> */
	if (al == 0) {goto exitautopilot;}
	// 0 ;* cancel auto-pilot
	/* call	AutoCancel */
	CALL(autocancel, 0);
	// 0 ;* clear errors
	/* xor	al,al */
	XOR(al, al);
	/* mov	TFError,al */
	tferror = al;
	/* mov	ATError,al */
	aterror = al;
	/* mov	AHError,al */
	aherror = al;
	/* mov	AAError,al */
	aaerror = al;
	/* mov	AppError,al */
	apperror = al;
	// 0 ;* warning
	/* or	RedWarnings2,RED_AUT */
	OR(redwarnings2, 0x8);
exitautopilot:
	// 4457 
	/* ExitAutoPilot:	ret */
	RETN(0);
autocancel:
	// 3414 
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
edummylabel8:
	// 4459 
	/* xor	al,al */
	XOR(al, al);
	// 0 ;* only cancel auto-throttle if approach mode
	/* cmp	AutoMode,AUTO_APPROACH	;approach mode? */
	CMP(automode, 2);
	/* jne	@F			;no -> */
	if ((dw)(automode) != (dw)(2)) {goto dummylabel13;}
	/* mov	AutoThrot,al */
	autothrot = al;
dummylabel13:
	// 4461 
	/* @@:		mov	AutoMode,AUTO_OFF */
	automode = 0;
	/* mov	AltMode,ALT_MANUAL */
	altmode = 0;
	/* mov	HdgMode,HDG_MANUAL */
	hdgmode = 0;
	/* mov	TFAuto,al */
	tfauto = al;
	/* mov	AHFlag,al */
	ahflag = al;
	/* mov	AAFlag,al */
	aaflag = al;
	/* mov	ARFlag,al */
	arflag = al;
	/* mov	AppFlag,al */
	appflag = al;
	/* mov	AutoTrim,al */
	autotrim = al;
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* ret */
	RETN(0);
modcode_0_proc:
	// 3446 
tfexit2:
	// 4463 
	// 0 ;<<<<< exit here if TF error <<<<<
	// 0 ;---------------------------
	/* mov	TFAuto,0	;disengage auto-terrain following */
	tfauto = 0;
	/* mov	TFError,1	;set TF error */
	tferror = 1;
	// 0 ;---------------------------
tfexit1:
	// 4465 
	// 0 ;<<<<< exit here if TF disabled <<<<<
	// 0 ;---------------------------
	/* mov	TFBRisk,0	;clear 'B' risk warning */
	tfbrisk = 0;
	/* mov	TFPitchRate,0 */
	tfpitchrate = 0;
	/* mov	TFDeltaPRate,0 */
	tfdeltaprate = 0;
	/* mov	TFGForce,16	;1g */
	tfgforce = 16;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
atexit2:
	// 4545 
	// 0 ;<<<<< exit here if AT error <<<<<
	/* mov	AutoThrot,0	;disengage auto-throttle */
	autothrot = 0;
	/* mov	ATError,1	;signal error */
	aterror = 1;
atexit1:
	// 4547 
	// 0 ;<<<<< exit here if AT disabled <<<<<
	/* ret */
	RETN(0);
ahexit2:
	// 4603 
	// 0 ;<<<<< exit here if AH error <<<<<
	// 0 ;---------------------------
	/* mov	AHFlag,0	;disengage auto-hdg */
	ahflag = 0;
	/* mov	AHError,1	;set auto-hdg error */
	aherror = 1;
	// 0 ;---------------------------
ahexit1:
	// 4605 
	// 0 ;<<<<< exit here if AH disabled <<<<<
	// 0 ;---------------------------
	/* mov	AHRollRate,0 */
	ahrollrate = 0;
	/* mov	AHDeltaRRate,0 */
	ahdeltarrate = 0;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
aaexit2:
	// 4627 
	// 0 ;<<<<< exit here if AA error <<<<<
	// 0 ;---------------------------
	/* mov	AAFlag,0	;disengage auto-alt */
	aaflag = 0;
	/* mov	AAError,1	;set auto-alt error */
	aaerror = 1;
	// 0 ;---------------------------
aaexit1:
	// 4629 
	// 0 ;<<<<< exit here if AA disabled <<<<<
	// 0 ;---------------------------
	/* mov	AAPitchRate,0 */
	aapitchrate = 0;
	/* mov	AADeltaPRate,0 */
	aadeltaprate = 0;
	/* mov	AAGForce,16	;1g */
	aagforce = 16;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
appexit2:
	// 4811 
	// 0 ;<<<<< exit here if error <<<<<
	// 0 ;---------------------------
	/* mov	AppFlag,0	;disengage auto-approach */
	appflag = 0;
	/* mov	AppError,1	;set error */
	apperror = 1;
	// 0 ;---------------------------
appexit1:
	// 4813 
	// 0 ;<<<<< exit here if disabled <<<<<
	// 0 ;---------------------------
	/* ret */
	RETN(0);
terrainfollow:
	// 3461 
	// 0 ;---------------------------
edummylabel9:
	// 4467 
	/* mov	al,TFAuto */
	al = tfauto;
	/* test	al,al		;TF enabled? */
	TEST(al, al);
	/* xchg	al,TFLast	;new <-> old */
	XCHG(al, tflast);
	/* jz	TFExit1		;no -> */
	if (ZF) {goto tfexit1;}
	/* xor	al,TFAuto	;just enabled? */
	XOR(al, tfauto);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel14;}
	/* mov	TFPullUp,0	;clear pull up flag */
	tfpullup = 0;
dummylabel14:
	// 4469 
	/* @@:		mov	TFBRisk,0	;clear 'B' risk warning */
	tfbrisk = 0;
	/* mov	TFError,0	;clear TF error */
	tferror = 0;
	// 0 ;---------------------------------
	// 0 ;* test if within operating limits
	// 0 ;---------------------------------
	// 0 ;* ensure pitch is within limits (+/-60 degs)
	/* cmp	M_CosP,16384	;pitch in limits? */
	CMP(m_cosp, 16384);
	/* jl	TFExit2 	;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto tfexit2;}
	// 0 ;* ensure roll is within limits (+/-60 degs)
	/* cmp	M_CosR,16384	;roll in limits (+/-60 degs)? */
	CMP(m_cosr, 16384);
	/* jl	TFExit2 	;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto tfexit2;}
	// 0 ;* ensure airborne
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jz	TFExit2		;no -> */
	if (!(airborne1 & 1)) {goto tfexit2;}
	// 0 ;* ensure not stalled
	/* test	StallFlag1,1	;stalled? */
	TEST(stallflag1, 1);
	/* jnz	TFExit2		;yes -> */
	if ((stallflag1 & 1) != 0) {goto tfexit2;}
	// 0 ;* ensure not spinning
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jnz	TFExit2		;yes -> */
	if ((spinflag & 1) != 0) {goto tfexit2;}
	// 0 ;* ensure Vtas > 0
	/* cmp	Vtas,0		;Vtas <= 0? */
	CMP(vtas, 0);
	/* jle	TFExit2		;yes -> */
	if ((short)(vtas) <= (short)(0)) {goto tfexit2;}
	// 0 ;-------------------
	// 0 ;* set ride altitude
	// 0 ;-------------------
	/* mov	bx,TFRideIndex */
	bx = tfrideindex;
	/* mov	ax,TFRideTable[bx] */
	ax = *(dw*)(((db*)&tfridetable)+bx);
	/* mov	TFRideAlt,ax */
	tfridealt = ax;
	// 0 ;-------------------------
	// 0 ;* reset g force to GCoord
	// 0 ;-------------------------
	/* mov	ax,GCoord */
	ax = gcoord;
	/* mov	TFGForce,ax */
	tfgforce = ax;
	// 0 ;----------------------------
	// 0 ;* calc pitch rate (wrt Vtas)
	// 0 ;----------------------------
	// 0 ;* @200kts, pitch rate = 20 pdeg / sec (2g)
	// 0 ;* @800kts, pitch rate =  4 pdeg / sec (2g)
	// 0 ;*
	// 0 ;* pitch rate = (20 - Vfac) * 128 (fine pdegs)
	/* mov	ax,Vfac */
	ax = vfac;
	/* mov	ah,20 */
	ah = 20;
	/* sub	ah,al		;(20 - Vfac) * 256 */
	SUB(ah, al);
	/* xor	al,al */
	XOR(al, al);
	/* shr	ax,1		;(20 - Vfac) * 128 */
	SHR(ax, 1);
	/* mov	TFPitchRate,ax */
	tfpitchrate = ax;
	// 0 ;----------------------------
	// 0 ;* test for emergency pull up
	// 0 ;----------------------------
	/* test	TFPullUp,1	;already pulling up? */
	TEST(tfpullup, 1);
	/* jnz	@F		;yes -> */
	if ((tfpullup & 1) != 0) {goto dummylabel15;}
	/* cmp	TrueRadAlt,TF_PULL_UP_ALT	;below pull up alt? */
	CMP(trueradalt, 100);
	/* jae	SkipPullUp			;no -> */
	if ((dw)(trueradalt) >= (dw)(100)) {goto skippullup;}
dummylabel15:
	// 4471 
	/* @@: 		mov	ax,TF_MAX_PITCH_UP */
	ax = 5461;
	/* shl	TFPitchRate,1	;pitch rate * 2 (4g) */
	SHL(tfpitchrate, 1);
	/* mov	TFPullUp,1	;emergency pull up */
	tfpullup = 1;
	/* mov	TFBRisk,1	;set 'B' risk warning */
	tfbrisk = 1;
	/* jmp	SortPitchRate */
	goto sortpitchrate;
	// 0 ;--------------------------------------------------------
	// 0 ;* if above TF_CEILING then push down to -TF_MAX_PITCH_DN
	// 0 ;--------------------------------------------------------
skippullup:
	// 4473 
	/* SkipPullUp:	cmp	ZftHi,0			;> 65,535ft? */
	CMP(zfthi, 0);
	/* jne	@F	   		;yes -> */
	if ((dw)(zfthi) != (dw)(0)) {goto dummylabel16;}
	/* cmp	ZftLo,TF_CEILING	;> TF_CEILING? */
	CMP(zftlo, 7500);
	/* jbe	SkipPushDown   		;no -> */
	if ((dw)(zftlo) <= (dw)(7500)) {goto skippushdown;}
dummylabel16:
	// 4475 
	/* @@:		mov	ax,-TF_MAX_PITCH_DN */
	ax = -2731;
	/* jmp	SortPitchRate */
	goto sortpitchrate;
	// 0 ;-------------------------
	// 0 ;* initialize terrain scan
	// 0 ;-------------------------
skippushdown:
	// 4477 
	/* SkipPushDown:	mov	cl,6		;prime for /64 */
	cl = 6;
	/* xor	bx,bx		;index */
	XOR(bx, bx);
	/* mov	di,LEVEL   	;slope */
	di = 0;
	/* mov	si,LEVEL_DIST	;assume level */
	si = (32/2)*2;
	/* mov	LookAhead,0 */
	lookahead = 0;
	// 0 ;-----------------------------
	// 0 ;* calc rel gnd dist below a/c
	// 0 ;-----------------------------
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,GndHtData[bx] */
	SUB(ax, *(dw*)(((db*)gndhtdata)+bx));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	bp,ax		;ht1 */
	bp = ax;
	// 0 ;-----------------
	// 0 ;* find first step
	// 0 ;-----------------
	/* mov	Count1,0	;count = 0 */
	count1 = 0;
findfirstloop:
	// 4479 
	/* FindFirstLoop: 	add	bx,2		;next sample */
	ADD(bx, 2);
	/* cmp	bx,END_DIST	;end of scan? */
	CMP(bx, (32-1)*2);
	/* jbe	@F */
	if ((dw)(bx) <= (dw)((32-1)*2)) {goto dummylabel17;}
	/* jmp	EndScan		;yes -> */
	goto endscan;
dummylabel17:
	// 4481 
	/* @@:		mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,GndHtData[bx] */
	SUB(ax, *(dw*)(((db*)gndhtdata)+bx));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx		;ht2 */
	SUB(ax, dx);
	/* cmp	ax,bp		;found step? */
	CMP(ax, bp);
	/* jne	InitSlope	;yes -> */
	if ((dw)(ax) != (dw)(bp)) {goto initslope;}
	/* inc	Count1		;count = count + 1 */
	INC(count1);
	/* jmp	FindFirstLoop */
	goto findfirstloop;
	// 0 ;------------------
	// 0 ;* initialize slope
	// 0 ;------------------
initslope:
	// 4483 
	/* InitSlope:	mov	bp,ax		;ht1 = ht2 */
	bp = ax;
	/* jg	InitDownSlope */
	if ((!ZF && SF == OF)) {goto initdownslope;}
	// 0 ;* initialize upslope
	/* mov	di,UPSLOPE */
	di = 1;
	/* mov	si,bx		;target dist = start of current step */
	si = bx;
	/* mov	Count3,127	;first step length invalid (default to "long") */
	count3 = 127;
	/* mov	Count2,127 */
	count2 = 127;
	/* mov	Count1,0 */
	count1 = 0;
	/* jmp	FindNextLoop */
	goto findnextloop;
initdownslope:
	// 4485 
	/* InitDownSlope:	mov	di,DOWNSLOPE */
	di = -1;
	/* mov	si,bx		;target dist = end of previous step */
	si = bx;
	/* sub	si,2 */
	SUB(si, 2);
	/* mov	al,Count1 */
	al = count1;
	/* mov	Count3,al */
	count3 = al;
	/* mov	Count2,al */
	count2 = al;
	/* mov	Count1,0 */
	count1 = 0;
	// 0 ;--------------------
	// 0 ;* find next step ...
	// 0 ;--------------------
findnextloop:
	// 4487 
	/* FindNextLoop:	add	bx,2		;next sample */
	ADD(bx, 2);
	/* cmp	bx,END_DIST	;end of scan? */
	CMP(bx, (32-1)*2);
	/* jbe	@F */
	if ((dw)(bx) <= (dw)((32-1)*2)) {goto dummylabel18;}
	/* jmp	CheckLastStep	;yes -> */
	goto checklaststep;
dummylabel18:
	// 4489 
	/* @@:		mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,GndHtData[bx] */
	SUB(ax, *(dw*)(((db*)gndhtdata)+bx));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx		;ht2 */
	SUB(ax, dx);
	/* cmp	ax,bp		;found step? */
	CMP(ax, bp);
	/* jne	SortSlope	;yes -> */
	if ((dw)(ax) != (dw)(bp)) {goto sortslope;}
	/* inc	Count1		;count = count + 1 */
	INC(count1);
	/* jmp	FindNextLoop */
	goto findnextloop;
	// 0 ;------------
	// 0 ;* sort slope
	// 0 ;------------
sortslope:
	// 4491 
	/* SortSlope:	mov	bp,ax		;ht1 = ht2 */
	bp = ax;
	/* jg	SortDownSlope */
	if ((!ZF && SF == OF)) {goto sortdownslope;}
	// 0 ;* sort upslope
	/* cmp	di,DOWNSLOPE	;previous slope = downslope (trough)? */
	CMP(di, -1);
	/* jne	@F		;no -> */
	if ((dw)(di) != (dw)(-1)) {goto dummylabel19;}
	/* mov	di,UPSLOPE */
	di = 1;
	/* mov	si,bx		;target dist = start of current step */
	si = bx;
	/* mov	Count3,127	;reset counters for upslope */
	count3 = 127;
	/* mov	Count2,127 */
	count2 = 127;
	/* mov	Count1,0 */
	count1 = 0;
	/* mov	LookAhead,0 */
	lookahead = 0;
	/* jmp	FindNextLoop */
	goto findnextloop;
dummylabel19:
	// 4493 
	/* @@:		test	LookAhead,1	;look ahead requested? */
	TEST(lookahead, 1);
	/* jz	@F		;no -> */
	if (!(lookahead & 1)) {goto dummylabel20;}
	/* mov	al,Count1 */
	al = count1;
	/* cmp	al,Count3	;short step -> long step? */
	CMP(al, count3);
	/* ja	EndScan		;yes -> */
	if ((db)(al) > (db)(count3)) {goto endscan;}
	/* mov	LookAhead,0 */
	lookahead = 0;
dummylabel20:
	// 4495 
	/* @@:		mov	al,Count2 */
	al = count2;
	/* sub	al,Count1	;short step -> long step? */
	SUB(al, count1);
	/* jns	@F		;no -> */
	if ((signed char)(al) >= 0) {goto dummylabel21;}
	/* cmp	al,-1		;step length change by 1? */
	CMP(al, -1);
	/* jne	EndScan		;no -> */
	if ((db)(al) != (db)(-1)) {goto endscan;}
	/* mov	LookAhead,1 */
	lookahead = 1;
	/* jmp	ContSortSlope */
	goto contsortslope;
dummylabel21:
	// 4497 
	/* @@:		mov	si,bx  		;target dist = start of current step */
	si = bx;
	/* jmp	ContSortSlope */
	goto contsortslope;
	// 0 ;* sort downslope
sortdownslope:
	// 4499 
	/* SortDownSlope:	test	LookAhead,1	;look ahead requested? */
	TEST(lookahead, 1);
	/* jz	@F		;no -> */
	if (!(lookahead & 1)) {goto dummylabel22;}
	/* mov	al,Count1 */
	al = count1;
	/* cmp	al,Count3	;long step -> short step? */
	CMP(al, count3);
	/* jb	EndScan		;yes -> */
	if ((db)(al) < (db)(count3)) {goto endscan;}
	/* mov	LookAhead,0 */
	lookahead = 0;
dummylabel22:
	// 4501 
	/* @@:		cmp	di,UPSLOPE	;previous slope = upslope (peak)? */
	CMP(di, 1);
	/* je	EndScan		;yes -> */
	if ((dw)(di) == (dw)(1)) {goto endscan;}
	/* mov	al,Count1 */
	al = count1;
	/* sub	al,Count2	;long step -> short step? */
	SUB(al, count2);
	/* jns	@F		;no -> */
	if ((signed char)(al) >= 0) {goto dummylabel23;}
	/* cmp	al,-1		;step length change by 1? */
	CMP(al, -1);
	/* jne	EndScan		;no -> */
	if ((db)(al) != (db)(-1)) {goto endscan;}
	/* mov	LookAhead,1 */
	lookahead = 1;
	/* jmp	ContSortSlope */
	goto contsortslope;
dummylabel23:
	// 4503 
	/* @@:		mov	si,bx		;target dist = end of previous step */
	si = bx;
	/* sub	si,2 */
	SUB(si, 2);
contsortslope:
	// 4505 
	/* ContSortSlope:	mov	al,Count2 */
	al = count2;
	/* mov	Count3,al */
	count3 = al;
	/* mov	al,Count1 */
	al = count1;
	/* mov	Count2,al */
	count2 = al;
	/* mov	Count1,0 */
	count1 = 0;
	/* jmp	FindNextLoop */
	goto findnextloop;
	// 0 ;--------------------------------------
	// 0 ;* if downslope then last step is valid
	// 0 ;--------------------------------------
checklaststep:
	// 4507 
	/* CheckLastStep:	cmp	di,DOWNSLOPE	;downslope? */
	CMP(di, -1);
	/* jne	EndScan		;no -> */
	if ((dw)(di) != (dw)(-1)) {goto endscan;}
	/* mov	al,Count1 */
	al = count1;
	/* cmp	al,Count2	;current step >= previous step? */
	CMP(al, count2);
	/* jb	EndScan		;no -> */
	if ((db)(al) < (db)(count2)) {goto endscan;}
	/* mov	si,END_DIST	;tgt dist = end of scan */
	si = (32-1)*2;
endscan:
	// 4509 
	/* EndScan:	mov	TFTrackPoint,si	;store debug value */
	tftrackpoint = si;
	// 0 ;--------------------------
	// 0 ;* calc dist to track point
	// 0 ;--------------------------
	/* mov	ax,si */
	ax = si;
	/* shr	ax,1		;index / 2 */
	SHR(ax, 1);
	/* mov	dx,GndHtDist */
	dx = gndhtdist;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	TFDistError,ax	;store debug value */
	tfdisterror = ax;
	/* mov	bp,ax */
	bp = ax;
	// 0 ;------------------------------------
	// 0 ;* aiming altitude = peak + TFRideAlt
	// 0 ;------------------------------------
	/* mov	dx,GndHtData[si] */
	dx = *(dw*)(((db*)gndhtdata)+si);
	/* add	dx,TFRideAlt */
	ADD(dx, tfridealt);
	/* mov	TFTgtAlt,dx	;store debug value */
	tftgtalt = dx;
	// 0 ;-------------------------------
	// 0 ;* aircraft below or above peak?
	// 0 ;-------------------------------
	/* sub	dx,ZftLo	;dx = alt error */
	SUB(dx, zftlo);
	/* js	TFAbove    	;above -> */
	if ((short)(dx) < 0) {goto tfabove;}
	// 0 ;---------------------
	// 0 ;* aircraft below peak
	// 0 ;---------------------
	// 0 ;* slope = arctan(alt error / peak dist)
	/* mov	TFAltError,dx	;store debug value */
	tfalterror = dx;
	/* mov	ax,32767	;assume slope >= 1 */
	ax = 32767;
	/* cmp	dx,bp		;slope >= 1 */
	CMP(dx, bp);
	/* jae	@F		;yes -> */
	if ((dw)(dx) >= (dw)(bp)) {goto dummylabel24;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* div	bp */
	DIV2(bp);
	/* shr	ax,1 */
	SHR(ax, 1);
dummylabel24:
	// 4511 
	/* @@:		call	ArcTan */
	CALLF(arctan, 0);
	// 0 ;* limit pitch up
	/* cmp	ax,TF_MAX_PITCH_UP */
	CMP(ax, 5461);
	/* jbe	TFCont */
	if ((dw)(ax) <= (dw)(5461)) {goto tfcont;}
	/* mov	ax,TF_MAX_PITCH_UP */
	ax = 5461;
	/* jmp	TFCont */
	goto tfcont;
	// 0 ;---------------------
	// 0 ;* aircraft above peak
	// 0 ;---------------------
tfabove:
	// 4513 
	/* TFAbove:   	neg	dx */
	NEG(dx);
	/* mov	TFAltError,dx	;store debug value */
	tfalterror = dx;
	/* mov	ax,32767	;assume slope >= 1 */
	ax = 32767;
	/* cmp	dx,bp		;slope >= 1 */
	CMP(dx, bp);
	/* jae	@F		;yes -> */
	if ((dw)(dx) >= (dw)(bp)) {goto dummylabel25;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* div	bp */
	DIV2(bp);
	/* shr	ax,1 */
	SHR(ax, 1);
dummylabel25:
	// 4515 
	/* @@:		call	ArcTan */
	CALLF(arctan, 0);
	// 0 ;* limit pitch down
	/* cmp	ax,TF_MAX_PITCH_DN */
	CMP(ax, 2731);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(2731)) {goto dummylabel26;}
	/* mov	ax,TF_MAX_PITCH_DN */
	ax = 2731;
dummylabel26:
	// 4517 
	/* @@:	   	neg	ax */
	NEG(ax);
	// 0 ;-----------------------
	// 0 ;* sort 'B' risk warning
	// 0 ;-----------------------
	// 0 ;* set 'B' risk if rad alt < TF_B_RISK_ALT
tfcont:
	// 4519 
	/* TFCont:	  	cmp	TrueRadAlt,TF_B_RISK_ALT;< 'B' risk altitude? */
	CMP(trueradalt, 160);
	/* jb	@F			;yes -> */
	if ((dw)(trueradalt) < (dw)(160)) {goto dummylabel27;}
	// 0 ;* set 'B' risk if speed > TF_B_RISK_SPEED and slope > TF_B_RISK_SLOPE
	/* cmp	Vtas,TF_B_RISK_SPEED	;> 'B' risk speed? */
	CMP(vtas, 8160);
	/* jle	SortVtrim		;no -> */
	if ((short)(vtas) <= (short)(8160)) {goto sortvtrim;}
	/* cmp	ax,TF_B_RISK_SLOPE	;> 'B' risk slope? */
	CMP(ax, 1274);
	/* jle	SortVtrim 		;no -> */
	if ((short)(ax) <= (short)(1274)) {goto sortvtrim;}
dummylabel27:
	// 4521 
	/* @@:		mov	TFBRisk,1	;set 'B' risk warning */
	tfbrisk = 1;
	// 0 ;-------------------------
	// 0 ;* sort pitch up wrt Vtrim
	// 0 ;-------------------------
	// 0 ;* if Vtas < Vtrim then
	// 0 ;*    pitch up = arctan(-((Vtas - Vtrim) / 4) / Vtas) (fine pdegs)
	// 0 ;* end
sortvtrim:
	// 4523 
	/* SortVtrim:     	mov	dx,Vtas */
	dx = vtas;
	/* sub	dx,Vtrim	;Vtas < Vtrim? */
	SUB(dx, vtrim);
	/* jns	SortPitchRate	;no -> */
	if ((short)(dx) >= 0) {goto sortpitchrate;}
	/* push	ax		;store slope */
	PUSH(ax);
	/* neg	dx		;make +ve */
	NEG(dx);
	/* mov	ax,32767	;assume slope >= 1 */
	ax = 32767;
	/* xor	cx,cx */
	XOR(cx, cx);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* mov	bx,Vtas */
	bx = vtas;
	/* cmp	dx,bx		;slope ok? (note Vtas > 0) */
	CMP(dx, bx);
	/* jae	@F		;no -> */
	if ((dw)(dx) >= (dw)(bx)) {goto dummylabel28;}
	/* mov	ax,cx */
	ax = cx;
	/* shr	dx,1		;/2 for signed binary fraction */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
dummylabel28:
	// 4525 
	/* @@:		call	ArcTan		;ax = arctan(frac) */
	CALLF(arctan, 0);
	/* pop	dx		;restore slope */
	POP(dx);
	/* add	ax,dx		;slope = slope + pitch up */
	ADD(ax, dx);
	// 0 ;* check pitch up limit
	/* cmp	ax,TF_MAX_PITCH_UP */
	CMP(ax, 5461);
	/* jle	SortPitchRate */
	if ((short)(ax) <= (short)(5461)) {goto sortpitchrate;}
	/* mov	ax,TF_MAX_PITCH_UP */
	ax = 5461;
	// 0 ;-----------------
	// 0 ;* sort pitch rate
	// 0 ;-----------------
sortpitchrate:
	// 4527 
	/* SortPitchRate:	mov	TFSlope,ax */
	tfslope = ax;
	/* sub	ax,PFine	;pitch error = slope - pitch */
	SUB(ax, pfine);
	/* jz	TFExit4		;zero pitch error -> */
	if (ax == 0) {goto tfexit4;}
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(error), dx = sign(error)
	/* mov	bx,ax		;bx = abs(error) */
	bx = ax;
	/* mov	cx,dx		;cx = sign(error) */
	cx = dx;
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* mov	bp,TFPitchRate */
	bp = tfpitchrate;
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
	// 0 ;dx = delta pitch rate
	/* cmp	dx,bx		;delta pitch rate > error? */
	CMP(dx, bx);
	/* jbe	@F		;no -> */
	if ((dw)(dx) <= (dw)(bx)) {goto dummylabel29;}
	/* mov	dx,bx		;delta pitch rate = error */
	dx = bx;
dummylabel29:
	// 4529 
	/* @@:		xor	dx,cx		;restore sign */
	XOR(dx, cx);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mov	TFDeltaPRate,dx */
	tfdeltaprate = dx;
	/* mov	ax,bp */
	ax = bp;
	/* xor	ax,cx		;restore sign */
	XOR(ax, cx);
	/* sub	ax,cx */
	SUB(ax, cx);
	/* mov	TFPitchRate,ax */
	tfpitchrate = ax;
	// 0 ;--------------
	// 0 ;* sort g force
	// 0 ;--------------
	/* test	ax,ax		;pulling or pushing? */
	TEST(ax, ax);
	/* jz	TFExit3		;no (g force = GCoord) -> */
	if (!(ax & ax)) {goto tfexit3;}
	/* cwd			;dx = sign(g force) */
	CWD;
	/* mov	ax,2*16		;2g */
	ax = 2*16;
	/* test	TFPullUp,1	;emergency pull up? */
	TEST(tfpullup, 1);
	/* jz	@F		;no -> */
	if (!(tfpullup & 1)) {goto dummylabel30;}
	/* mov	ax,4*16		;4g */
	ax = 4*16;
dummylabel30:
	// 4531 
	/* @@:		xor	ax,dx		;sort sign(g force) */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* scale wrt error
	/* cmp	bx,bp		;error >= rate? */
	CMP(bx, bp);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(bp)) {goto dummylabel31;}
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,bx		;frac = error / rate */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* div	bp */
	DIV2(bp);
	/* shr	ax,1		;/2 for binary fraction */
	SHR(ax, 1);
	/* imul	cx		;g * frac */
	IMUL1_2(cx);
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
dummylabel31:
	// 4533 
	/* @@:		add	TFGForce,ax */
	ADD(tfgforce, ax);
tfexit3:
	// 4535 
	/* TFExit3:	ret */
	RETN(0);
	// 0 ;---------------------------
tfexit4:
	// 4537 
	// 0 ;<<<<< exit here if zero pitch error <<<<<
	// 0 ;---------------------------
	/* mov	TFPitchRate,0 */
	tfpitchrate = 0;
	/* mov	TFDeltaPRate,0 */
	tfdeltaprate = 0;
	/* test	TFPullUp,1	;was this an emergency pull up? */
	TEST(tfpullup, 1);
	/* jz	@F		;no -> */
	if (!(tfpullup & 1)) {goto dummylabel32;}
	/* mov	TFAuto,0	;disengage auto-terrain following */
	tfauto = 0;
	/* mov	TFBRisk,0	;clear 'B' risk warning */
	tfbrisk = 0;
	/* mov	TFPullUp,0	;clear pull up flag */
	tfpullup = 0;
	/* mov	TFError,1	;set TF error */
	tferror = 1;
dummylabel32:
	// 4539 
	/* @@:		ret */
	RETN(0);
calctfrideindex:
	// 3902 
	/* mov	bx,MAX_TF_INDEX ;* kill: bx, flags */
	bx = 20;
tfrideloop:
	// 4541 
	/* TFRideLoop:	cmp	ax,TFRideTable[bx]	;alt >= ride alt? */
	CMP(ax, *(dw*)(((db*)&tfridetable)+bx));
	/* jae	@F			;yes -> */
	if ((dw)(ax) >= (dw)(*(dw*)(((db*)&tfridetable)+bx))) {goto dummylabel33;}
	/* sub	bx,2		;next ride alt */
	SUB(bx, 2);
	/* jnz	TFRideLoop	;(stop if last value) */
	if (bx != 0) {goto tfrideloop;}
dummylabel33:
	// 4543 
	/* @@:	       	mov	TFRideIndex,bx */
	tfrideindex = bx;
	/* ret */
	RETN(0);
autothrottle:
	// 3925 
	/* test	AutoThrot,1	;auto-throttle engaged? */
	TEST(autothrot, 1);
edummylabel10:
	// 4549 
	/* jz	ATExit1		;no -> */
	if (ZF) {goto atexit1;}
	/* mov	ATError,0	;clear error */
	aterror = 0;
	// 0 ;------------------------------------------
	// 0 ;* check auto-throttle operating conditions
	// 0 ;------------------------------------------
	/* cmp	FuelWt,0	;out of fuel? */
	CMP(fuelwt, 0);
	/* je	ATExit2		;yes -> */
	if ((dw)(fuelwt) == (dw)(0)) {goto atexit2;}
	/* mov	al,SSF_Engine1 */
	al = ssf_engine1;
	/* test	al,SSF_Engine2	;both engines damaged? */
	TEST(al, ssf_engine2);
	/* jnz	ATExit2		;yes -> */
	if ((al & ssf_engine2) != 0) {goto atexit2;}
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jnz	ATExit2		;yes -> */
	if ((spinflag & 1) != 0) {goto atexit2;}
	// 0 ;-----------------------------
	// 0 ;* calc AutoVtas from AutoVias
	// 0 ;-----------------------------
	// 0 ;* limit = 17144 = 2.2 * 573 * 1.7 * 8
	// 0 ;*
	// 0 ;* v = AutoVias * 1.7 * 8 * 32768 = AutoVias * 8 * 55706
	// 0 ;*
	// 0 ;* AutoVtas = min(v / SqrtRho, limit)
	/* mov	ax,AutoVias */
	ax = autovias;
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
	// 0 ;* //MOD// 01.04.1993 - Adjust for crosswinds.
	/* sub	ax,XWindVeff */
	SUB(ax, xwindveff);
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
	/* cmp	ax,17144 */
	CMP(ax, 17144);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(17144)) {goto dummylabel34;}
	/* mov	ax,17144 */
	ax = 17144;
dummylabel34:
	// 4551 
	/* @@:		mov	AutoVtas,ax */
	autovtas = ax;
	// 0 ;--------------------
	// 0 ;* calc aiming thrust
	// 0 ;--------------------
	// 0 ;* if aiming speed = 0 then
	// 0 ;*    set min throttle (prevent bogus throttle up when static)
	// 0 ;* end
	/* test	ax,ax		;aiming speed = 0? */
	TEST(ax, ax);
	/* jnz	__m2c_macrolocal_29_skip */
	if ((ax & ax) != 0) {goto __m2c_macrolocal_29_skip;}
	/* jmp	MinThrottle */
	goto minthrottle;
__m2c_macrolocal_29_skip:
	// 4553 
	// 0 ;yes ->
	// 0 ;* v = u + at
	// 0 ;*
	// 0 ;* a = (v - u) / t
	// 0 ;*
	// 0 ;* when t = 1
	// 0 ;*
	// 0 ;* accel = AutoVtas - Vtas
	/* sub	ax,Vtas */
	SUB(ax, vtas);
	// 0 ;* accel = (thrust - drag - weight * sin(pitch)) * 32 / weight
	// 0 ;*
	// 0 ;* thrust = accel * weight / 32 + drag + weight * sin(pitch)
	// 0 ;* if accel >= 32 ft/sec/sec then assume max throttle
	/* cmp	ax,32*8 */
	CMP(ax, 32*8);
	/* jl	__m2c_macrolocal_30_skip */
	if ((short)(ax) < (short)(32*8)) {goto __m2c_macrolocal_30_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_30_skip:
	// 4555 
	// 0 ;* if accel <= -32 ft/s/s then assume min throttle
	/* cmp	ax,-32*8 */
	CMP(ax, -32*8);
	/* jg	__m2c_macrolocal_31_skip */
	if ((short)(ax) > (short)(-32*8)) {goto __m2c_macrolocal_31_skip;}
	/* jmp	MinThrottle */
	goto minthrottle;
__m2c_macrolocal_31_skip:
	// 4557 
	// 0 ;* accel * weight / 32 = accel [*8] * weight [/2] / 128
	/* mov	dx,Weight2 */
	dx = weight2;
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
	// 0 ;* accel * weight / 32 + drag
	/* add	ax,DragLo */
	ADD(ax, draglo);
	/* adc	dx,DragHi */
	ADC(dx, draghi);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* weight * sin(pitch) = weight [/2] * sin(pitch) * 2
	/* mov	ax,M_SinP */
	ax = m_sinp;
	/* mov	dx,Weight2 */
	dx = weight2;
	/* imul	dx		;weight [/2] * sin(pitch) */
	IMUL1_2(dx);
	/* shl	ax,1		;adjust for signed binary fraction */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	// 0 ;* weight [/2] * sin(pitch) * 2 (maintaining lsb resolution) (32 bit result)
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* shl	bp,1		;restore lsb */
	SHL(bp, 1);
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	// 0 ;* thrust = accel * weight / 32 + drag + weight * sin(pitch)
	/* add	ax,bx */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* jns	__m2c_macrolocal_32_skip */
	if ((short)(dx) >= 0) {goto __m2c_macrolocal_32_skip;}
	/* jmp	MinThrottle */
	goto minthrottle;
__m2c_macrolocal_32_skip:
	// 4559 
	// 0 ;thrust < 0 ->
	/* test	dx,dx		;thrust > 65535? */
	TEST(dx, dx);
	/* jz	__m2c_macrolocal_33_skip */
	if (!(dx & dx)) {goto __m2c_macrolocal_33_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_33_skip:
	// 4561 
	// 0 ;yes ->
	/* cmp	ax,MAX_THRUST	;thrust > MAX_THRUST? */
	CMP(ax, 34000);
	/* jbe	__m2c_macrolocal_34_skip */
	if ((dw)(ax) <= (dw)(34000)) {goto __m2c_macrolocal_34_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_34_skip:
	// 4563 
	// 0 ;yes ->
	// 0 ;--------------------
	// 0 ;* calc aiming thrust (wrt altitude)
	// 0 ;--------------------
	// 0 ;* //MOD// 14.05.1992 - variation of thrust wrt altitude equations modified
	// 0 ;*                      (see MODEL.ASM)
	// 0 ;* if zft < 36,000ft then
	// 0 ;*    thrust = thrust + zft * 0.325
	// 0 ;* else
	// 0 ;*    thrust = thrust + 11700 + (zft - 36000) * 0.656
	// 0 ;* endif
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	@F */
	if ((dw)(dx) > (dw)(0)) {goto dummylabel35;}
	/* cmp	ax,36000 */
	CMP(ax, 36000);
	/* ja	@F */
	if ((dw)(ax) > (dw)(36000)) {goto dummylabel35;}
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
dummylabel35:
	// 4565 
	/* @@:		sub	ax,36000 */
	SUB(ax, 36000);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* jz	__m2c_macrolocal_36_skip */
	if (dx == 0) {goto __m2c_macrolocal_36_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_36_skip:
	// 4567 
	// 0 ;zft > (65535 + 36000) ->
	/* mov	dx,42984	;0.656 = 42984 / 65536 */
	dx = 42984;
	/* mul	dx */
	MUL1_2(dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,11700 */
	ADC(dx, 11700);
sortthrust:
	// 4569 
	/* SortThrust:	add	bp,dx */
	ADD(bp, dx);
	/* jnc	__m2c_macrolocal_37_skip */
	if (!CF) {goto __m2c_macrolocal_37_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_37_skip:
	// 4571 
	// 0 ;thrust > 65535 ->
	/* cmp	bp,MAX_THRUST	;thrust > MAX_THRUST? */
	CMP(bp, 34000);
	/* jbe	__m2c_macrolocal_38_skip */
	if ((dw)(bp) <= (dw)(34000)) {goto __m2c_macrolocal_38_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_38_skip:
	// 4573 
	// 0 ;yes ->
	/* mov	ATThrust,bp */
	atthrust = bp;
	// 0 ;* if one engine is damaged then the other engine must do the work of two
	/* mov	al,SSF_Engine1 */
	al = ssf_engine1;
	/* or	al,SSF_Engine2 */
	OR(al, ssf_engine2);
	/* jz	@F		;both engines ok -> */
	if (al == 0) {goto dummylabel36;}
	/* cmp	bp,MAX_THRUST/2	;thrust > MAX_THRUST single engine? */
	CMP(bp, 34000/2);
	/* jbe	__m2c_macrolocal_39_skip */
	if ((dw)(bp) <= (dw)(34000/2)) {goto __m2c_macrolocal_39_skip;}
	/* jmp	MaxThrottle */
	goto maxthrottle;
__m2c_macrolocal_39_skip:
	// 4575 
	// 0 ;yes ->
	/* shl	bp,1		;*2 */
	SHL(bp, 1);
	// 0 ;----------------------------------------
	// 0 ;* calc aiming throttle / reheat settings
	// 0 ;----------------------------------------
	// 0 ;* if thrust > MAX_DRY then
	// 0 ;*    throttle = 256
	// 0 ;*    reheat = (thrust - MAX_DRY) / 125
	// 0 ;* else
	// 0 ;*    throttle = (RPM - 63) * 1771 / 256
	// 0 ;*    reheat = 0
	// 0 ;* end
dummylabel36:
	// 4577 
	/* @@:		cmp	bp,MAX_DRY	;thrust > MAX_DRY? */
	CMP(bp, 18000);
	/* jbe	@F		;no -> */
	if ((dw)(bp) <= (dw)(18000)) {goto dummylabel37;}
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,MAX_DRY */
	SUB(ax, 18000);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	bx,125 */
	bx = 125;
	/* div	bx */
	DIV2(bx);
	/* cmp	dx,125/2	;cf = 1/2 bit */
	CMP(dx, 125/2);
	/* cmc */
	CMC;
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* mov	AimThrottle,256 */
	aimthrottle = 256;
	/* mov	AimReheat,ax */
	aimreheat = ax;
	/* jmp	ContThrottle */
	goto contthrottle;
	// 0 ;* scan thrust table for rpm value
dummylabel37:
	// 4579 
	/* @@:		shr	bp,1		;thrust for one engine */
	SHR(bp, 1);
	/* mov	bx,-2 */
	bx = -2;
dummylabel38:
	// 4581 
	/* @@:		add	bx,2 */
	ADD(bx, 2);
	/* cmp	bp,ThrustTable[bx] */
	CMP(bp, *(dw*)(((db*)&thrusttable)+bx));
	/* ja	@B */
	if ((dw)(bp) > (dw)(*(dw*)(((db*)&thrusttable)+bx))) {goto dummylabel38;}
	/* shr	bx,1		;(RPM - 63) = index / 2 */
	SHR(bx, 1);
	/* mov	ax,1771 */
	ax = 1771;
	/* mul	bx */
	MUL1_2(bx);
	/* xchg	al,ah		;/256 */
	XCHG(al, ah);
	/* shl	ah,1 */
	SHL(ah, 1);
	/* mov	ah,0 */
	ah = 0;
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	// 0 ;* linear search for more precise throttle setting
	/* mov	si,ax		;throttle */
	si = ax;
	/* mov	di,32768	;init old error */
	di = 32768;
	// 0 ;* look up and interpolate thrust value
throttleloop:
	// 4583 
	/* ThrottleLoop:	mov	ax,37		;calc rpm value */
	ax = 37;
	/* mul	si */
	MUL1_2(si);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xchg	bl,ah */
	XCHG(bl, ah);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	cx,ThrustTable[bx] */
	cx = *(dw*)(((db*)&thrusttable)+bx);
	/* cmp	bx,37*2			;100% ? */
	CMP(bx, 37*2);
	/* je	@F			;yes -> */
	if ((dw)(bx) == (dw)(37*2)) {goto dummylabel39;}
	/* mov	dx,ThrustTable[bx+2] */
	dx = *(dw*)(((db*)&thrusttable)+bx+2);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mul	dx */
	MUL1_2(dx);
	/* shl	al,1		;store 1/2 bit */
	SHL(al, 1);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* adc	cx,ax		;1/2 bit round up */
	ADC(cx, ax);
dummylabel39:
	// 4585 
	/* @@:		mov	ax,cx */
	ax = cx;
	/* sub	ax,bp */
	SUB(ax, bp);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = new error = abs(thrust - aiming thrust)
	/* cmp	ax,di		;new error >= new error? */
	CMP(ax, di);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(di)) {goto dummylabel40;}
	/* mov	di,ax		;old error = new error */
	di = ax;
	/* sub	si,1 */
	SUB(si, 1);
	/* jnc	ThrottleLoop */
	if (!CF) {goto throttleloop;}
dummylabel40:
	// 4587 
	/* @@:		add	si,1		;restore throttle */
	ADD(si, 1);
	/* mov	AimThrottle,si */
	aimthrottle = si;
	/* mov	AimReheat,0 */
	aimreheat = 0;
	/* jmp	ContThrottle */
	goto contthrottle;
	// 0 ;--------------
	// 0 ;* max throttle
	// 0 ;--------------
maxthrottle:
	// 4589 
	/* MaxThrottle:	mov	ATThrust,MAX_THRUST */
	atthrust = 34000;
	/* mov	AimThrottle,256 */
	aimthrottle = 256;
	/* mov	AimReheat,128 */
	aimreheat = 128;
	/* jmp	ContThrottle */
	goto contthrottle;
	// 0 ;--------------
	// 0 ;* min throttle
	// 0 ;--------------
minthrottle:
	// 4591 
	/* MinThrottle:	xor	ax,ax */
	XOR(ax, ax);
	/* mov	ATThrust,ax */
	atthrust = ax;
	/* mov	AimThrottle,ax */
	aimthrottle = ax;
	/* mov	AimReheat,ax */
	aimreheat = ax;
	// 0 ;--------------------------
	// 0 ;* adjust throttle / reheat (wrt time)
	// 0 ;--------------------------
	// 0 ;* throttle change rate = 256 / (100 * 2) = 1.28 secs fsd
	// 0 ;*
	// 0 ;* reheat change rate = 128 / (100 * 2) = 0.64 secs fsd
contthrottle:
	// 4593 
	/* ContThrottle:	mov	bp,LastFrame */
	bp = lastframe;
	/* shl	bp,1		;max throttle change rate */
	SHL(bp, 1);
	/* cmp	Throttle,256	;can we change reheat? */
	CMP(throttle, 256);
	/* jne	SkipReheat	;no -> */
	if ((dw)(throttle) != (dw)(256)) {goto skipreheat;}
	/* mov	ax,AimReheat */
	ax = aimreheat;
	/* sub	ax,Reheat	;change reheat? */
	SUB(ax, reheat);
	/* jz	SkipReheat	;no -> */
	if (ax == 0) {goto skipreheat;}
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(diff), dx = sign(diff)
	/* cmp	ax,bp		;diff < max rate? */
	CMP(ax, bp);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(bp)) {goto dummylabel41;}
	/* mov	ax,bp */
	ax = bp;
dummylabel41:
	// 4595 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	Reheat,ax */
	ADD(reheat, ax);
	/* jmp	ExitThrottle */
	goto exitthrottle;
skipreheat:
	// 4597 
	/* SkipReheat:	cmp	Reheat,0	;can we change throttle? */
	CMP(reheat, 0);
	/* jne	ExitThrottle	;no -> */
	if ((dw)(reheat) != (dw)(0)) {goto exitthrottle;}
	/* mov	ax,AimThrottle */
	ax = aimthrottle;
	/* sub	ax,Throttle	;change throttle? */
	SUB(ax, throttle);
	/* jz	ExitThrottle	;no -> */
	if (ax == 0) {goto exitthrottle;}
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(diff), dx = sign(diff)
	/* cmp	ax,bp		;diff < max rate? */
	CMP(ax, bp);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(bp)) {goto dummylabel42;}
	/* mov	ax,bp */
	ax = bp;
dummylabel42:
	// 4599 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	Throttle,ax */
	ADD(throttle, ax);
exitthrottle:
	// 4601 
	/* ExitThrottle:	ret */
	RETN(0);
autoheading:
	// 4285 
	// 0 ;---------------------------
edummylabel11:
	// 4607 
	/* test	AHFlag,1	;auto-hdg enabled? */
	TEST(ahflag, 1);
	/* jz	AHExit1		;no -> */
	if (!(ahflag & 1)) {goto ahexit1;}
	/* mov	AHError,0	;clear AH error */
	aherror = 0;
	// 0 ;---------------------------------
	// 0 ;* test if within operating limits
	// 0 ;---------------------------------
	// 0 ;* ensure pitch is within limits (+/-60 degs)
	/* cmp	M_CosP,16384	;pitch in limits? */
	CMP(m_cosp, 16384);
	/* jl	AHExit2 	;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto ahexit2;}
	// 0 ;* ensure roll is within limits (+/-60 degs)
	/* cmp	M_CosR,16384	;roll in limits (+/-60 degs)? */
	CMP(m_cosr, 16384);
	/* jl	AHExit2 	;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto ahexit2;}
	// 0 ;* ensure airborne
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jz	AHExit2		;no -> */
	if (!(airborne1 & 1)) {goto ahexit2;}
	// 0 ;* ensure not stalled
	/* test	StallFlag1,1	;stalled? */
	TEST(stallflag1, 1);
	/* jnz	AHExit2		;yes -> */
	if ((stallflag1 & 1) != 0) {goto ahexit2;}
	// 0 ;* ensure not spinning
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jnz	AHExit2		;yes -> */
	if ((spinflag & 1) != 0) {goto ahexit2;}
	// 0 ;* ensure Vtas > 0
	/* cmp	Vtas,0		;Vtas <= 0? */
	CMP(vtas, 0);
	/* jle	AHExit2		;yes -> */
	if ((short)(vtas) <= (short)(0)) {goto ahexit2;}
	// 0 ;--------------------------------------------
	// 0 ;* if emergency pull up then roll wings level
	// 0 ;--------------------------------------------
	/* xor	ax,ax		;assume emergency pull up */
	XOR(ax, ax);
	/* test	TFPullUp,1	;emergency? */
	TEST(tfpullup, 1);
	/* jz	__m2c_macrolocal_43_skip */
	if (!(tfpullup & 1)) {goto __m2c_macrolocal_43_skip;}
	/* jmp	ContHeading */
	goto contheading;
__m2c_macrolocal_43_skip:
	// 4609 
	// 0 ;yes ->
	// 0 ;---------------------------
	// 0 ;* calc new hdg (fine pdegs)
	// 0 ;---------------------------
	// 0 ;* if auto-approach enabled then
	// 0 ;*    new hdg (fine) = AppHFine - (ILSLocalError * 4)
	// 0 ;* else
	// 0 ;*    new hdg (fine) = AutoHdg, AutoHdgFine / 360
	// 0 ;* endif
	/* test	AppFlag,1	;auto-approach */
	TEST(appflag, 1);
	/* jnz	@F		;yes -> */
	if ((appflag & 1) != 0) {goto dummylabel43;}
	/* mov	dx,AutoHdg */
	dx = autohdg;
	/* mov	ax,AutoHdgFine */
	ax = autohdgfine;
	/* mov	bx,360 */
	bx = 360;
	/* div	bx */
	DIV2(bx);
	/* jmp	SetAimHFine */
	goto setaimhfine;
dummylabel43:
	// 4611 
	/* @@:		mov	dx,ILSLocalError */
	dx = ilslocalerror;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* mov	ax,AppHFine */
	ax = apphfine;
	/* sub	ax,dx */
	SUB(ax, dx);
setaimhfine:
	// 4613 
	/* SetAimHFine:	mov	AimHFine,ax	;store debug value */
	aimhfine = ax;
	// 0 ;----------------
	// 0 ;* calc hdg error
	// 0 ;----------------
	/* sub	ax,HFine */
	SUB(ax, hfine);
	/* mov	ErrHFine,ax 	;store debug value */
	errhfine = ax;
	// 0 ;* critical damping for heading error (prevent oscillation on slow machines
	// 0 ;* but have little effect on faster machines)
	// 0 ;*
	// 0 ;* hdg error = hdg error * max(32767 - DeltaTime, 16384) / 32768
	/* mov	dx,32767 */
	dx = 32767;
	/* sub	dx,DeltaTime */
	SUB(dx, deltatime);
	/* cmp	dx,16384 */
	CMP(dx, 16384);
	/* jae	@F */
	if ((dw)(dx) >= (dw)(16384)) {goto dummylabel44;}
	/* mov	dx,16384 */
	dx = 16384;
dummylabel44:
	// 4615 
	/* @@:		imul	dx */
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
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* mov	bx,ax		;bx = abs(hdg error) */
	bx = ax;
	/* mov	cx,dx		;cx = sign(hdg error) */
	cx = dx;
	// 0 ;----------------------------
	// 0 ;* limit Vtas (100 .. 800kts)
	// 0 ;----------------------------
	/* mov	bp,Vtas */
	bp = vtas;
	/* cmp	bp,1360 */
	CMP(bp, 1360);
	/* jge	__m2c_macrolocal_46_TestHi */
	if ((short)(bp) >= (short)(1360)) {goto __m2c_macrolocal_46_testhi;}
	/* mov	bp,1360 */
	bp = 1360;
	/* jmp	__m2c_macrolocal_46_TestOk */
	goto __m2c_macrolocal_46_testok;
__m2c_macrolocal_46_testhi:
	// 4617 
	/* __m2c_macrolocal_46_TestHi:		cmp	bp,10880 */
	CMP(bp, 10880);
	/* jle	__m2c_macrolocal_46_TestOk */
	if ((short)(bp) <= (short)(10880)) {goto __m2c_macrolocal_46_testok;}
	/* mov	bp,10880 */
	bp = 10880;
__m2c_macrolocal_46_testok:
	// 4619 
	// 0 ;------------------------------
	// 0 ;* calc hdg rate max (wrt Vtas)
	// 0 ;------------------------------
	// 0 ;* max rate = 47039bh / Vtas
	/* mov	dx,00047h */
	dx = 0x00047;
	/* mov	ax,0039bh */
	ax = 0x0039b;
	/* div	bp */
	DIV2(bp);
	/* mov	AHMaxRate,ax	;store debug value */
	ahmaxrate = ax;
	// 0 ;-----------------
	// 0 ;* sort roll angle
	// 0 ;-----------------
	// 0 ;* if hdg err <= max rate then
	// 0 ;*    calc roll angle
	// 0 ;* else
	// 0 ;*    roll angle = AH_MAX_ROLL * sign(hdg error)
	// 0 ;* end
	/* cmp	bx,ax		;hdg err <= max rate? */
	CMP(bx, ax);
	/* ja	MaxRollAngle	;no -> */
	if ((dw)(bx) > (dw)(ax)) {goto maxrollangle;}
	// 0 ;* roll angle = arctan(hdg err * Vtas * 400 / 65536)
	/* mov	ax,bx */
	ax = bx;
	/* xor	ax,cx		;restore sign */
	XOR(ax, cx);
	/* sub	ax,cx */
	SUB(ax, cx);
	/* imul	bp */
	IMUL1_2(bp);
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
	/* mov	di,dx		;*16 */
	di = dx;
	/* mov	si,ax */
	si = ax;
	/* shl	si,1 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* shl	si,1 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* shl	si,1 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* add	ax,si		;*144 */
	ADD(ax, si);
	/* adc	dx,di */
	ADC(dx, di);
	/* shl	si,1 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* add	ax,si		;*400 */
	ADD(ax, si);
	/* adc	dx,di */
	ADC(dx, di);
	/* mov	ax,dx */
	ax = dx;
	/* mov	AHRollVal,ax	;store debug value */
	ahrollval = ax;
	/* call	ArcTan2 */
	CALLF(arctan2, 0);
	/* jmp	ContHeading */
	goto contheading;
	// 0 ;* set roll angle to max
maxrollangle:
	// 4621 
	/* MaxRollAngle:	mov	ax,AH_MAX_ROLL */
	ax = 85*128;
	/* xor	ax,cx		;restore sign */
	XOR(ax, cx);
	/* sub	ax,cx */
	SUB(ax, cx);
contheading:
	// 4623 
	/* ContHeading:	mov	AutoRFine,ax	;store debug value */
	autorfine = ax;
	/* sub	ax,RFine	;roll error */
	SUB(ax, rfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(roll error), dx = sign(roll error)
	// 0 ;* AHRollRate = AH_ROLL_RATE * sign(error)
	// 0 ;*
	// 0 ;* AHDeltaRRate = min(abs(error), AH_ROLL_RATE * DeltaTime / 32768) * sign(error)
	/* mov	bx,ax		;abs(error) */
	bx = ax;
	/* mov	cx,dx		;sign(error) */
	cx = dx;
	/* mov	bp,AH_ROLL_RATE */
	bp = 64*128;
	/* mov	ax,DeltaTime */
	ax = deltatime;
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
	/* cmp	dx,bx		;rate > error? */
	CMP(dx, bx);
	/* jbe	@F		;no -> */
	if ((dw)(dx) <= (dw)(bx)) {goto dummylabel45;}
	/* mov	dx,bx */
	dx = bx;
dummylabel45:
	// 4625 
	/* @@:		xor	dx,cx		;restore sign */
	XOR(dx, cx);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mov	AHDeltaRRate,dx */
	ahdeltarrate = dx;
	/* xor	bp,cx		;restore sign */
	XOR(bp, cx);
	/* sub	bp,cx */
	SUB(bp, cx);
	/* mov	AHRollRate,bp */
	ahrollrate = bp;
	/* ret */
	RETN(0);
autoaltitude:
	// 4512 
	// 0 ;---------------------------
edummylabel12:
	// 4631 
	/* test	AAFlag,1	;auto-alt enabled? */
	TEST(aaflag, 1);
	/* jz	AAExit1		;no -> */
	if (!(aaflag & 1)) {goto aaexit1;}
	/* mov	AAError,0	;clear AA error */
	aaerror = 0;
	// 0 ;---------------------------------
	// 0 ;* test if within operating limits
	// 0 ;---------------------------------
	// 0 ;* ensure pitch is within limits (+/-60 degs)
	/* cmp	M_CosP,16384	;pitch in limits? */
	CMP(m_cosp, 16384);
	/* jl	AAExit2 	;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto aaexit2;}
	// 0 ;* ensure roll is within limits (+/-60 degs)
	/* cmp	M_CosR,16384	;roll in limits (+/-60 degs)? */
	CMP(m_cosr, 16384);
	/* jl	AAExit2 	;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto aaexit2;}
	// 0 ;* ensure airborne
	/* test	Airborne1,1	;airborne? */
	TEST(airborne1, 1);
	/* jz	AAExit2		;no -> */
	if (!(airborne1 & 1)) {goto aaexit2;}
	// 0 ;* ensure not stalled
	/* test	StallFlag1,1	;stalled? */
	TEST(stallflag1, 1);
	/* jnz	AAExit2		;yes -> */
	if ((stallflag1 & 1) != 0) {goto aaexit2;}
	// 0 ;* ensure not spinning
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jnz	AAExit2		;yes -> */
	if ((spinflag & 1) != 0) {goto aaexit2;}
	// 0 ;* ensure Vtas > 0
	/* cmp	Vtas,0		;Vtas <= 0? */
	CMP(vtas, 0);
	/* jle	AAExit2		;yes -> */
	if ((short)(vtas) <= (short)(0)) {goto aaexit2;}
	// 0 ;----------------------------
	// 0 ;* calc pitch rate (wrt Vtas)
	// 0 ;----------------------------
	// 0 ;* @200kts, pitch rate = 20 pdeg / sec (2g)
	// 0 ;* @800kts, pitch rate =  4 pdeg / sec (2g)
	// 0 ;*
	// 0 ;* pitch rate = 20 * 128 - (bound(Vtas, 340 * 8, 1360 * 8) - 340 * 8) / 4
	/* mov	ax,Vtas */
	ax = vtas;
	/* cmp	ax,340*8 */
	CMP(ax, 340*8);
	/* jge	__m2c_macrolocal_49_TestHi */
	if ((short)(ax) >= (short)(340*8)) {goto __m2c_macrolocal_49_testhi;}
	/* mov	ax,340*8 */
	ax = 340*8;
	/* jmp	__m2c_macrolocal_49_TestOk */
	goto __m2c_macrolocal_49_testok;
__m2c_macrolocal_49_testhi:
	// 4633 
	/* __m2c_macrolocal_49_TestHi:		cmp	ax,1360*8 */
	CMP(ax, 1360*8);
	/* jle	__m2c_macrolocal_49_TestOk */
	if ((short)(ax) <= (short)(1360*8)) {goto __m2c_macrolocal_49_testok;}
	/* mov	ax,1360*8 */
	ax = 1360*8;
__m2c_macrolocal_49_testok:
	// 4635 
	/* mov	di,ax */
	di = ax;
	/* sub	ax,340*8 */
	SUB(ax, 340*8);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	bp,20*128 */
	bp = 20*128;
	/* sbb	bp,ax		;(1/2 bit round up) */
	SBB(bp, ax);
	/* mov	AAPitchRate,bp */
	aapitchrate = bp;
	// 0 ;-----------------------------
	// 0 ;* calc pitch limit (wrt Vtas)
	// 0 ;-----------------------------
	// 0 ;* pitch limit = pitch rate * 2
	/* shl	bp,1 */
	SHL(bp, 1);
	// 0 ;----------------------------
	// 0 ;* calc dist error (wrt Vtas)
	// 0 ;----------------------------
	// 0 ;* dist error = bound(Vtas, 340 * 8, 1360 * 8) / 8
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* shr	di,1 */
	SHR(di, 1);
	/* adc	di,0 */
	ADC(di, 0);
	/* mov	AADistError,di	;store debug value */
	aadisterror = di;
	// 0 ;--------------
	// 0 ;* calc z error
	// 0 ;--------------
	// 0 ;* if auto-approach enabled then
	// 0 ;*    aiming z = ILSMaxError - 20 (auto alt reaction delay compensation)
	// 0 ;* else
	// 0 ;*    aiming z = AutoAlt * 10
	// 0 ;* endif
	/* test	AppFlag,1	;auto-approach? */
	TEST(appflag, 1);
	/* jnz	@F		;yes -> */
	if ((appflag & 1) != 0) {goto dummylabel46;}
	/* mov	ax,AutoAlt */
	ax = autoalt;
	/* mov	dx,10 */
	dx = 10;
	/* mul	dx */
	MUL1_2(dx);
	/* jmp	CalcZError */
	goto calczerror;
dummylabel46:
	// 4637 
	/* @@:		mov	ax,ILSMaxError */
	ax = ilsmaxerror;
	/* sub	ax,20 */
	SUB(ax, 20);
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
	/* xor	dx,dx */
	XOR(dx, dx);
	// 0 ;* z error = aiming z - current z
calczerror:
	// 4639 
	/* CalcZError: 	sub	ax,ZftLo */
	SUB(ax, zftlo);
	/* sbb	dx,ZftHi */
	SBB(dx, zfthi);
	/* mov	si,dx		;store sign(z error) */
	si = dx;
	/* test	dx,dx		;< 0? */
	TEST(dx, dx);
	/* jns	@F		;no -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel47;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;-------------------
	// 0 ;* calc aiming pitch
	// 0 ;-------------------
	// 0 ;* if z error < dist error then
	// 0 ;*    aiming pitch = arctan(z error * 32768 / dist error)
	// 0 ;*    aiming pitch = min(aiming pitch, pitch limit)
	// 0 ;* else
	// 0 ;*    aiming pitch = pitch limit
	// 0 ;* end
	// 0 ;*
	// 0 ;* aiming pitch = aiming pitch * sign(z error)
dummylabel47:
	// 4641 
	/* @@:		test	dx,dx		;z error > 65,535ft? */
	TEST(dx, dx);
	/* jnz	SetPitchLimit	;yes -> */
	if ((dx & dx) != 0) {goto setpitchlimit;}
	/* mov	AAAltError,ax	;store debug value */
	aaalterror = ax;
	/* cmp	ax,di		;z error < dist error? */
	CMP(ax, di);
	/* jae	SetPitchLimit	;no -> */
	if ((dw)(ax) >= (dw)(di)) {goto setpitchlimit;}
	/* mov	dx,ax		;z error * 32768 */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	di */
	DIV2(di);
	/* push	si */
	PUSH(si);
	/* push	bp */
	PUSH(bp);
	/* call	ArcTan */
	CALLF(arctan, 0);
	/* pop	bp */
	POP(bp);
	/* pop	si */
	POP(si);
	/* cmp	ax,bp		;aiming pitch <= pitch limit */
	CMP(ax, bp);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel48;}
setpitchlimit:
	// 4643 
	/* SetPitchLimit:	mov	ax,bp */
	ax = bp;
dummylabel48:
	// 4645 
	/* @@:		xchg	ax,si		;aiming pitch * sign(z error) */
	XCHG(ax, si);
	/* cwd */
	CWD;
	/* xor	si,dx */
	XOR(si, dx);
	/* sub	si,dx */
	SUB(si, dx);
	// 0 ;-------------------------
	// 0 ;* sort pitch up wrt Vtrim
	// 0 ;-------------------------
	// 0 ;* if Vtas < Vtrim then
	// 0 ;*    pitch = pitch + arctan(-((Vtas - Vtrim) / 4) / Vtas) (fine pdegs)
	// 0 ;* end
	/* mov	ax,si */
	ax = si;
	/* mov	dx,Vtas */
	dx = vtas;
	/* sub	dx,Vtrim	;Vtas < Vtrim? */
	SUB(dx, vtrim);
	/* jns	SortAAPRate	;no -> */
	if ((short)(dx) >= 0) {goto sortaaprate;}
	/* push	ax		;store pitch */
	PUSH(ax);
	/* neg	dx		;make +ve */
	NEG(dx);
	/* mov	ax,32767	;assume slope >= 1 */
	ax = 32767;
	/* xor	cx,cx */
	XOR(cx, cx);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	cx,1 */
	RCR(cx, 1);
	/* mov	bx,Vtas */
	bx = vtas;
	/* cmp	dx,bx		;slope ok? (note Vtas > 0) */
	CMP(dx, bx);
	/* jae	@F		;no -> */
	if ((dw)(dx) >= (dw)(bx)) {goto dummylabel49;}
	/* mov	ax,cx */
	ax = cx;
	/* shr	dx,1		;/2 for signed binary fraction */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
dummylabel49:
	// 4647 
	/* @@:		call	ArcTan		;ax = arctan(frac) */
	CALLF(arctan, 0);
	/* pop	dx		;restore pitch */
	POP(dx);
	/* add	ax,dx		;slope = pitch + pitch up */
	ADD(ax, dx);
	// 0 ;-----------------
	// 0 ;* sort pitch rate
	// 0 ;-----------------
sortaaprate:
	// 4649 
	/* SortAAPRate:	mov	AimPFine,ax	;store debug value */
	aimpfine = ax;
	/* sub	ax,PFine	;pitch error = aiming pitch - pitch */
	SUB(ax, pfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(error), dx = sign(error)
	/* mov	bx,ax		;bx = abs(error) */
	bx = ax;
	/* mov	cx,dx		;cx = sign(error) */
	cx = dx;
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* mov	bp,AAPitchRate */
	bp = aapitchrate;
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
	// 0 ;dx = delta pitch rate
	/* cmp	dx,bx		;delta pitch rate > error? */
	CMP(dx, bx);
	/* jbe	@F		;no -> */
	if ((dw)(dx) <= (dw)(bx)) {goto dummylabel50;}
	/* mov	dx,bx		;delta pitch rate = error */
	dx = bx;
dummylabel50:
	// 4651 
	/* @@:		xor	dx,cx		;restore sign */
	XOR(dx, cx);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* mov	AADeltaPRate,dx */
	aadeltaprate = dx;
	/* mov	ax,bp */
	ax = bp;
	/* xor	ax,cx		;restore sign */
	XOR(ax, cx);
	/* sub	ax,cx */
	SUB(ax, cx);
	/* mov	AAPitchRate,ax */
	aapitchrate = ax;
	// 0 ;--------------
	// 0 ;* sort g force
	// 0 ;--------------
	/* mov	dx,GCoord */
	dx = gcoord;
	/* mov	AAGForce,dx */
	aagforce = dx;
	/* test	ax,ax		;pushing or pulling? */
	TEST(ax, ax);
	/* jz	AAExit3		;no (g force = GCoord) -> */
	if (!(ax & ax)) {goto aaexit3;}
	/* cwd			;dx = sign(g force) */
	CWD;
	/* mov	ax,2*16		;2g */
	ax = 2*16;
	/* xor	ax,dx		;sort sign(g force) */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	bx,bp		;error > rate? */
	CMP(bx, bp);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(bp)) {goto dummylabel51;}
	/* mov	cx,ax */
	cx = ax;
	/* mov	dx,bx		;frac = error / rate */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* div	bp */
	DIV2(bp);
	/* shr	ax,1		;/2 for binary fraction */
	SHR(ax, 1);
	/* imul	cx		;g * frac */
	IMUL1_2(cx);
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
dummylabel51:
	// 4653 
	/* @@:		add	AAGForce,ax */
	ADD(aagforce, ax);
aaexit3:
	// 4655 
	/* AAExit3:	ret */
	RETN(0);
autoroute:
	// 4765 
	/* mov	al,ARFlag ;*       Track mode cannot be selected if there are no waypoints. */
	al = arflag;
edummylabel13:
	// 4657 
	/* test	al,al		;auto-route enabled? */
	TEST(al, al);
	/* xchg	al,ARLast	;new <-> old */
	XCHG(al, arlast);
	/* jnz	__m2c_macrolocal_56_skip */
	if (!ZF) {goto __m2c_macrolocal_56_skip;}
	/* jmp	ExitAutoRoute */
	goto exitautoroute;
__m2c_macrolocal_56_skip:
	// 4659 
	// 0 ;no ->
	/* xor	al,ARFlag	;just enabled? */
	XOR(al, arflag);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel52;}
	// 0 ;-----------------
	// 0 ;* init auto-route
	// 0 ;-----------------
	/* mov	TrackLocked,0 */
	tracklocked = 0;
	// 0 ;-------------------------------------
	// 0 ;* check if weapon release in progress
	// 0 ;-------------------------------------
dummylabel52:
	// 4661 
	/* @@:		test	ArmLock,1	;weapon release in progress? */
	TEST(armlock, 1);
	/* jz	__m2c_macrolocal_57_skip */
	if (!(armlock & 1)) {goto __m2c_macrolocal_57_skip;}
	/* jmp	ExitAutoRoute */
	goto exitautoroute;
__m2c_macrolocal_57_skip:
	// 4663 
	// 0 ;yes ->
	// 0 ;---------------------
	// 0 ;* satisfied waypoint?
	// 0 ;---------------------
	/* mov	si,WPPtr */
	si = wpptr;
	/* test	WP_ATTR[si],WP_TYPE	;turning or target waypoint? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x1);
	/* jnz	TargetWP		;target -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x1) != 0) {goto targetwp;}
	// 0 ;------------------
	// 0 ;* turning waypoint (turn early to next waypoint to keep on track)
	// 0 ;------------------
	/* call	CalcTurnDist */
	CALL(calcturndist, 0);
	/* cmp	WORD PTR WPRng+2,0	;range > turn dist? */
	CMP(*(dw*)(((db*)&wprng)+2), 0);
	/* jbe	__m2c_macrolocal_58_skip */
	if ((dw)(*(dw*)(((db*)&wprng)+2)) <= (dw)(0)) {goto __m2c_macrolocal_58_skip;}
	/* jmp	WPOk */
	goto wpok;
__m2c_macrolocal_58_skip:
	// 4665 
	// 0 ;yes ->
	/* cmp	WORD PTR WPRng,ax	;range > turn dist? */
	CMP(*(dw*)(&wprng), ax);
	/* jb	__m2c_macrolocal_59_skip */
	if ((dw)(*(dw*)(&wprng)) < (dw)(ax)) {goto __m2c_macrolocal_59_skip;}
	/* jmp	WPOk */
	goto wpok;
__m2c_macrolocal_59_skip:
	// 4667 
	// 0 ;yes ->
	/* jmp	SatisfiedWP */
	goto satisfiedwp;
	// 0 ;-----------------
	// 0 ;* target waypoint (fly over waypoint)
	// 0 ;-----------------
targetwp:
	// 4669 
	/* TargetWP:	test	TrackLocked,1	;track locked? */
	TEST(tracklocked, 1);
	/* jnz	@F		;yes, flying towards waypoint -> */
	if ((tracklocked & 1) != 0) {goto dummylabel53;}
	// 0 ;* within 1/2NM of waypoint?
	/* cmp	WORD PTR WPRng+2,0 */
	CMP(*(dw*)(((db*)&wprng)+2), 0);
	/* jbe	__m2c_macrolocal_60_skip */
	if ((dw)(*(dw*)(((db*)&wprng)+2)) <= (dw)(0)) {goto __m2c_macrolocal_60_skip;}
	/* jmp	WPOk */
	goto wpok;
__m2c_macrolocal_60_skip:
	// 4671 
	// 0 ;no ->
	/* cmp	WORD PTR WPRng,6076/2 */
	CMP(*(dw*)(&wprng), 6076/2);
	/* jae	WPOk			;no -> */
	if ((dw)(*(dw*)(&wprng)) >= (dw)(6076/2)) {goto wpok;}
dummylabel53:
	// 4673 
	/* @@:		mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,128		;error > 90 degs? */
	CMP(ax, 128);
	/* jbe	WPOk		;no -> */
	if ((dw)(ax) <= (dw)(128)) {goto wpok;}
	// 0 ;--------------------
	// 0 ;* waypoint satisfied
	// 0 ;--------------------
	// 0 ;* if last waypoint and not linked back then
	// 0 ;*    if AltMode = ALT_TF then
	// 0 ;*       AutoMode = AUTO_TF
	// 0 ;*    else
	// 0 ;*       AutoMode = AUTO_HOLD
	// 0 ;*    endif
	// 0 ;*    ARFlag = 0
	// 0 ;*    HdgMode = HDG_ACQUIRE
	// 0 ;*    if in ILS beam then
	// 0 ;*       engage approach mode
	// 0 ;*    endif
	// 0 ;* else
	// 0 ;*    select next waypoint
	// 0 ;* endif
satisfiedwp:
	// 4675 
	/* SatisfiedWP:	mov	si,WPPtr */
	si = wpptr;
	/* cmp	si,EndWPPtr	;satisfied last waypoint? */
	CMP(si, endwpptr);
	/* jne	ContRoute	;no -> */
	if ((dw)(si) != (dw)(endwpptr)) {goto controute;}
	/* test	WP_ATTR[si],WP_LINK	;linked back? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x2);
	/* jnz	ContRoute		;yes -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x2) != 0) {goto controute;}
	/* mov	ax,AUTO_TF	;assume terrain following */
	ax = 8;
	/* cmp	AltMode,ALT_TF	;terrain following? */
	CMP(altmode, 6);
	/* je	@F		;yes -> */
	if ((dw)(altmode) == (dw)(6)) {goto dummylabel54;}
	/* mov	ax,AUTO_HOLD */
	ax = 6;
dummylabel54:
	// 4677 
	/* @@:		cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoMode,ax */
	automode = ax;
	/* mov	ARFlag,0	;disengage auto-route */
	arflag = 0;
	/* mov	HdgMode,HDG_ACQUIRE */
	hdgmode = 4;
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	// 0 ;* engage approach mode if in ILS beam
	/* test	ILSActive,1 */
	TEST(ilsactive, 1);
	/* jnz	__m2c_macrolocal_61_skip */
	if ((ilsactive & 1) != 0) {goto __m2c_macrolocal_61_skip;}
	/* jmp	ExitAutoRoute */
	goto exitautoroute;
__m2c_macrolocal_61_skip:
	// 4679 
	/* call	AutoCancel */
	CALL(autocancel, 0);
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoMode,AUTO_APPROACH */
	automode = 2;
	/* mov	AppFlag,1 */
	appflag = 1;
	/* mov	AltMode,ALT_APPROACH */
	altmode = 2;
	/* mov	AAFlag,1 */
	aaflag = 1;
	/* mov	HdgMode,HDG_APPROACH */
	hdgmode = 2;
	/* mov	AHFlag,1 */
	ahflag = 1;
	/* mov	AutoThrot,1 */
	autothrot = 1;
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* jmp	ExitAutoRoute */
	goto exitautoroute;
controute:
	// 4681 
	/* ContRoute:	call	SelectNextWP */
	CALL(selectnextwp, 0);
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* call	SortWPAlt */
	CALL(sortwpalt, 0);
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	// 0 ;-----------------------
	// 0 ;* test for track locked (hdg = brg)
	// 0 ;-----------------------
wpok:
	// 4683 
	/* WPOk:		test	TrackLocked,1	;track already locked? */
	TEST(tracklocked, 1);
	/* jnz	ContInhibit	;yes, continue inhibit test -> */
	if ((tracklocked & 1) != 0) {goto continhibit;}
	/* mov	ax,Hdg */
	ax = hdg;
	/* cmp	ax,WPBrg	;hdg = brg? */
	CMP(ax, wpbrg);
	/* jne	AdjustHdg	;no -> */
	if ((dw)(ax) != (dw)(wpbrg)) {goto adjusthdg;}
	/* mov	TrackLocked,1 */
	tracklocked = 1;
	/* mov	InhibitDelay,INHIBIT_PERIOD */
	inhibitdelay = 3*100;
	// 0 ;--------------------------
	// 0 ;* set heading for waypoint (unless inhibited - inhibit reduces jitter)
	// 0 ;--------------------------
	// 0 ;* if track locked then
	// 0 ;*    update inhibit delay
	// 0 ;*    if waypoint dist > INHIBIT_DIST then
	// 0 ;*       if inhibit delay = 0 then
	// 0 ;*          inhibit delay = INHIBIT_PERIOD
	// 0 ;*          adjust heading
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;*    adjust heading
	// 0 ;* endif
	// 0 ;* update inhibit delay
continhibit:
	// 4685 
	/* ContInhibit:	mov	ax,InhibitDelay */
	ax = inhibitdelay;
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
	/* mov	InhibitDelay,ax */
	inhibitdelay = ax;
	/* mov	bp,ax */
	bp = ax;
	// 0 ;* waypoint dist > INHIBIT_DIST?
	/* cmp	WORD PTR WPRng+2,0 */
	CMP(*(dw*)(((db*)&wprng)+2), 0);
	/* jnz	@F				;yes -> */
	if ((dw)(*(dw*)(((db*)&wprng)+2)) != (dw)(0)) {goto dummylabel55;}
	/* cmp	WORD PTR WPRng,INHIBIT_DIST */
	CMP(*(dw*)(&wprng), 6076);
	/* jbe	ExitAutoRoute			;no -> */
	if ((dw)(*(dw*)(&wprng)) <= (dw)(6076)) {goto exitautoroute;}
dummylabel55:
	// 4687 
	/* @@:		test	bp,bp		;inhibit delay = 0? */
	TEST(bp, bp);
	/* jnz	ExitAutoRoute	;no -> */
	if ((bp & bp) != 0) {goto exitautoroute;}
	/* mov	InhibitDelay,INHIBIT_PERIOD */
	inhibitdelay = 3*100;
adjusthdg:
	// 4689 
	/* AdjustHdg:	mov	ax,WPBrgFine */
	ax = wpbrgfine;
	/* mov	dx,360 */
	dx = 360;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	AutoHdg,dx */
	autohdg = dx;
	/* mov	AutoHdgFine,ax */
	autohdgfine = ax;
exitautoroute:
	// 4691 
	/* ExitAutoRoute:	ret */
	RETN(0);
selectnextwp:
	// 4948 
	/* mov	si,WPPtr ;* kill: assume all */
	si = wpptr;
edummylabel14:
	// 4693 
	/* call	CalcNextWP */
	CALL(calcnextwp, 0);
	/* mov	WPPtr,di */
	wpptr = di;
	// 0 ;* update waypoint range and bearing etc.
	/* call	UpdateWPData */
	CALL(updatewpdata, 0);
	// 0 ;* reset auto-route vars
	/* mov	TrackLocked,0 */
	tracklocked = 0;
	/* ret */
	RETN(0);
calcnextwp:
	// 4968 
	// 0 ;* if current waypoint is floating waypoint then restore previous waypoint
edummylabel15:
	// 4695 
	/* cmp	si,OFFSET FloatWP	;floating waypoint selected? */
	CMP(si, m2c::near_offset_external(floatwp));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel56;}
	/* mov	di,OldWPPtr */
	di = oldwpptr;
	/* jmp	ExitNextWP */
	goto exitnextwp;
	// 0 ;* link back or advance to next waypont?
dummylabel56:
	// 4697 
	/* @@:		test	WP_ATTR[si],WP_LINK	;link back to waypoint? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x2);
	/* jnz	SortLink		;yes -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x2) != 0) {goto sortlink;}
	// 0 ;* advance to next waypoint (if possible)
	/* mov	di,si		;di -> current waypoint */
	di = si;
	/* test	WAY_REC_SIZE+WP_ATTR[di],WP_VALID	;next waypoint vaild? */
	TEST(((waypoint*)raddr(ds,16+di))->wp_attr, 0x80);
	/* jz	ExitNextWP				;no, do not advance -> */
	if (!(((waypoint*)raddr(ds,16+di))->wp_attr & 0x80)) {goto exitnextwp;}
	/* add	di,WAY_REC_SIZE	;di -> next waypoint */
	ADD(di, 16);
	/* jmp	ExitNextWP */
	goto exitnextwp;
	// 0 ;* link back to tagged waypoint
sortlink:
	// 4699 
	/* SortLink:	mov	di,OFFSET WayList	;di -> first waypoint */
	di = m2c::near_offset_external(waylist);
dummylabel57:
	// 4701 
	/* @@:		cmp	di,si			;di -> current waypoint? */
	CMP(di, si);
	/* je	ExitNextWP		;yes, do not advance -> */
	if ((dw)(di) == (dw)(si)) {goto exitnextwp;}
	/* test	WP_ATTR[di],WP_HERE	;link back to here? */
	TEST(((waypoint*)raddr(ds,di))->wp_attr, 0x4);
	/* jnz	ExitNextWP		;yes -> */
	if ((((waypoint*)raddr(ds,di))->wp_attr & 0x4) != 0) {goto exitnextwp;}
	/* add	di,WAY_REC_SIZE		;advance */
	ADD(di, 16);
	/* jmp	@B */
	goto dummylabel57;
exitnextwp:
	// 4703 
	/* ExitNextWP:	ret */
	RETN(0);
advancewp:
	// 5005 
	/* mov	si,WPPtr ;* kill: assume all */
	si = wpptr;
	// 0 ;* if current waypoint is floating waypoint then restore previous waypoint
edummylabel16:
	// 4705 
	/* cmp	si,OFFSET FloatWP	;floating waypoint selected? */
	CMP(si, m2c::near_offset_external(floatwp));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel58;}
	/* mov	si,OldWPPtr */
	si = oldwpptr;
	/* jmp	AdvanceOk */
	goto advanceok;
dummylabel58:
	// 4707 
	/* @@:		add	si,WAY_REC_SIZE		;di -> next waypoint */
	ADD(si, 16);
	/* cmp	si,EndWPPtr		;wrap around? */
	CMP(si, endwpptr);
	/* jbe	AdvanceOk		;no -> */
	if ((dw)(si) <= (dw)(endwpptr)) {goto advanceok;}
	/* mov	si,OFFSET WayList	;di -> first waypoint */
	si = m2c::near_offset_external(waylist);
advanceok:
	// 4709 
	/* AdvanceOk: 	mov	WPPtr,si */
	wpptr = si;
	// 0 ;* update waypoint range and bearing etc.
	/* call	UpdateWPData */
	CALL(updatewpdata, 0);
	// 0 ;* reset auto-route vars
	/* mov	TrackLocked,0 */
	tracklocked = 0;
	/* ret */
	RETF(0);
selecttgtwp:
	// 5035 
	/* test	FloatWP.WP_ATTR,WP_VALID	;valid? */
	TEST(floatwp.wp_attr, 0x80);
edummylabel17:
	// 4711 
	/* jz	ExitSelectWP			;no -> */
	if (ZF) {goto exitselectwp;}
	/* cmp	WPPtr,OFFSET FloatWP	;already selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* je	ExitSelectWP		;yes -> */
	if ((dw)(wpptr) == (dw)(m2c::near_offset_external(floatwp))) {goto exitselectwp;}
	/* mov	ax,WPPtr */
	ax = wpptr;
	/* mov	OldWPPtr,ax */
	oldwpptr = ax;
	/* mov	WPPtr,OFFSET FloatWP */
	wpptr = m2c::near_offset_external(floatwp);
	// 0 ;* update waypoint range and bearing etc.
	/* call	UpdateWPData */
	CALL(updatewpdata, 0);
	// 0 ;* reset auto-route vars
	/* mov	TrackLocked,0 */
	tracklocked = 0;
exitselectwp:
	// 4713 
	/* ExitSelectWP:	ret */
	RETF(0);
canceltgtwp:
	// 5062 
	// 0 ;* always make waypoint invalid
edummylabel18:
	// 4715 
	/* and	FloatWP.WP_ATTR,NOT WP_VALID	;(see note above) */
	AND(floatwp.wp_attr, ~0x80);
	// 0 ;* only update if floating waypoint selected
	/* cmp	WPPtr,OFFSET FloatWP	;target waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	ExitCancelWP		;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto exitcancelwp;}
	// 0 ;* restore previous waypoint
	/* mov	ax,OldWPPtr */
	ax = oldwpptr;
	/* mov	WPPtr,ax */
	wpptr = ax;
	// 0 ;* update waypoint range and bearing etc.
	/* call	UpdateWPData */
	CALL(updatewpdata, 0);
	// 0 ;* reset auto-route vars
	/* mov	TrackLocked,0 */
	tracklocked = 0;
exitcancelwp:
	// 4717 
	/* ExitCancelWP:	ret */
	RETF(0);
updatetgtwp:
	// 5090 
	/* cmp	WPPtr,OFFSET FloatWP	;target waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
edummylabel19:
	// 4719 
	/* jne	ExitUpdateWP		;no -> */
	if (!ZF) {goto exitupdatewp;}
	// 0 ;* update waypoint range and bearing etc.
	/* call	UpdateWPData */
	CALL(updatewpdata, 0);
	// 0 ;* reset auto-route vars
	/* mov	TrackLocked,0 */
	tracklocked = 0;
exitupdatewp:
	// 4721 
	/* ExitUpdateWP:	ret */
	RETF(0);
updatewpdata:
	// 5114 
	/* mov	WPETA,-1		;assume ETA invalid */
	wpeta = -1;
edummylabel20:
	// 4723 
	/* mov	WPTimeEarlyLate,-32768	;assume TEL invalid */
	wptimeearlylate = -32768;
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel59;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* je	__m2c_macrolocal_63_skip */
	if ((dw)(wpptr) == (dw)(m2c::near_offset_external(floatwp))) {goto __m2c_macrolocal_63_skip;}
	/* jmp	UpdateWPExit */
	goto updatewpexit;
__m2c_macrolocal_63_skip:
	// 4725 
	// 0 ;no ->
	// 0 ;------------------------
	// 0 ;* calc range and bearing
	// 0 ;------------------------
dummylabel59:
	// 4727 
	/* @@:		mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,WPPtr */
	di = wpptr;
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	/* mov	WORD PTR WPRng,ax */
	*(dw*)(&wprng) = ax;
	/* mov	WORD PTR WPRng+2,dx */
	*(dw*)(((db*)&wprng)+2) = dx;
	/* mov	WPBrg,bx */
	wpbrg = bx;
	/* mov	WPBrgFine,bp */
	wpbrgfine = bp;
	// 0 ;------------
	// 0 ;* calc range (nautical miles)
	// 0 ;------------
	/* call	CalcNMiles */
	CALLF(calcnmiles, 0);
	/* mov	WPRngNMiles,ax */
	wprngnmiles = ax;
	// 0 ;----------
	// 0 ;* calc ETA (only valid if vtas > 0 and abs(ang diff) <= 45 degs)
	// 0 ;----------
	/* cmp	Vtas,0		;vtas > 0? */
	CMP(vtas, 0);
	/* jne	__m2c_macrolocal_64_skip */
	if ((dw)(vtas) != (dw)(0)) {goto __m2c_macrolocal_64_skip;}
	/* jmp	UpdateWPExit */
	goto updatewpexit;
__m2c_macrolocal_64_skip:
	// 4729 
	// 0 ;no ->
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64		;abs(ang diff) <= 45 degs? */
	CMP(ax, 64);
	/* ja	UpdateWPExit	;no -> */
	if ((dw)(ax) > (dw)(64)) {goto updatewpexit;}
	/* mov	ax,WORD PTR WPRng */
	ax = *(dw*)(&wprng);
	/* mov	dx,WORD PTR WPRng+2 */
	dx = *(dw*)(((db*)&wprng)+2);
	/* mov	bx,Vtas */
	bx = vtas;
	/* call	CalcETA */
	CALLF(calceta, 0);
	/* mov	WPETA,ax */
	wpeta = ax;
	// 0 ;------------------------
	// 0 ;* calc time early / late
	// 0 ;------------------------
	/* mov	si,WPPtr */
	si = wpptr;
	/* test	[si].WP_ATTR,WP_COORD	;co-ordinated waypoint? */
	TEST(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_attr)), 0x20);
	/* jz	UpdateWPExit		;no -> */
	if (!(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_attr)) & 0x20)) {goto updatewpexit;}
	// 0 ;* time early / late = waypoint time - (current time + ETA)
	/* mov	ax,WPETA */
	ax = wpeta;
	/* mov	dx,100		;ETA * 100 secs */
	dx = 100;
	/* mul	dx */
	MUL1_2(dx);
	/* add	ax,WORD PTR FrameElapTime */
	ADD(ax, *(dw*)(&frameelaptime));
	/* adc	dx,WORD PTR FrameElapTime+2 */
	ADC(dx, *(dw*)(((db*)&frameelaptime)+2));
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,[si].WP_TIME */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_time)));
	/* mov	dx,100		;waypoint time * 100 secs */
	dx = 100;
	/* mul	dx */
	MUL1_2(dx);
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* js	@F		;late -> */
	if ((short)(dx) < 0) {goto dummylabel60;}
	// 0 ;* early (limit to +32767)
	/* mov	bp,32767	;assume limit */
	bp = 32767;
	/* cmp	dx,0		;> 65535? */
	CMP(dx, 0);
	/* ja	SetTEL		;yes -> */
	if ((dw)(dx) > (dw)(0)) {goto settel;}
	/* cmp	ax,32767	;> 32767? */
	CMP(ax, 32767);
	/* ja	SetTEL		;no -> */
	if ((dw)(ax) > (dw)(32767)) {goto settel;}
	/* mov	bp,ax */
	bp = ax;
	/* jmp	SetTEL */
	goto settel;
	// 0 ;* late (limit to -32767)
dummylabel60:
	// 4731 
	/* @@:		mov	bp,-32767 */
	bp = -32767;
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,0		;> 65535? */
	CMP(dx, 0);
	/* ja	SetTEL		;yes -> */
	if ((dw)(dx) > (dw)(0)) {goto settel;}
	/* cmp	ax,32767	;> 32767? */
	CMP(ax, 32767);
	/* ja	SetTEL		;yes -> */
	if ((dw)(ax) > (dw)(32767)) {goto settel;}
	/* neg	ax */
	NEG(ax);
	/* mov	bp,ax */
	bp = ax;
settel:
	// 4733 
	/* SetTEL:		mov	WPTimeEarlyLate,bp */
	wptimeearlylate = bp;
updatewpexit:
	// 4735 
	/* UpdateWPExit:	ret */
	RETN(0);
calcturndist:
	// 5217 
	// 0 ;---------------
	// 0 ;* calc ThetaABC = inside angle of vp(A) -> first wp(B) -> second wp(C)
	// 0 ;---------------
	// 0 ;* ThetaAB = bearing of wp(B) from vp(A)
edummylabel21:
	// 4737 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,WPPtr */
	di = wpptr;
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	/* mov	ThetaAB,bx */
	thetaab = bx;
	// 0 ;* ThetaBC = bearing of wp(C) from wp(B)
	/* mov	si,WPPtr */
	si = wpptr;
	/* call	CalcNextWP */
	CALL(calcnextwp, 0);
	/* call	CalcRngBrgWP_WP */
	CALLF(calcrngbrgwp_wp, 0);
	/* mov	ThetaBC,bx */
	thetabc = bx;
	// 0 ;* ThetaABC = abs(256 - abs(ThetaAB - ThetaBC)) (0 .. 511 pdegs)
	/* mov	ax,ThetaAB */
	ax = thetaab;
	/* sub	ax,bx		;ThetaAB - ThetaBC */
	SUB(ax, bx);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(ThetaAB - ThetaBC)
	/* mov	dx,ax */
	dx = ax;
	/* mov	ax,256 */
	ax = 256;
	/* sub	ax,dx		;256 - abs(ThetaAB - ThetaBC) */
	SUB(ax, dx);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(256 - abs(ThetaAB - ThetaBC))
	/* mov	ThetaABC,ax */
	thetaabc = ax;
	// 0 ;-----------------------------
	// 0 ;* calc RTurn = turning radius
	// 0 ;-----------------------------
	// 0 ;* RTurn = min((Vtas^2 / 64) * 588 / 32768, 32767)
	/* mov	ax,Vtas */
	ax = vtas;
	/* cmp	ax,1360 */
	CMP(ax, 1360);
	/* jge	__m2c_macrolocal_68_TestHi */
	if ((short)(ax) >= (short)(1360)) {goto __m2c_macrolocal_68_testhi;}
	/* mov	ax,1360 */
	ax = 1360;
	/* jmp	__m2c_macrolocal_68_TestOk */
	goto __m2c_macrolocal_68_testok;
__m2c_macrolocal_68_testhi:
	// 4739 
	/* __m2c_macrolocal_68_TestHi:		cmp	ax,10880 */
	CMP(ax, 10880);
	/* jle	__m2c_macrolocal_68_TestOk */
	if ((short)(ax) <= (short)(10880)) {goto __m2c_macrolocal_68_testok;}
	/* mov	ax,10880 */
	ax = 10880;
__m2c_macrolocal_68_testok:
	// 4741 
	/* mul	ax */
	MUL1_2(ax);
	/* mov	bx,ax		;bx, cx = Vtas^2 * 64 */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
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
	/* add	ax,bx		;dx, ax = Vtas^2 * 576 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* add	ax,bx		;dx, ax = Vtas^2 * 584 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* add	ax,bx		;dx, ax = Vtas^2 * 588 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* shl	ax,1		;*2/65536 = /32768 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	dx,32767 */
	CMP(dx, 32767);
	/* jbe	@F */
	if ((dw)(dx) <= (dw)(32767)) {goto dummylabel61;}
	/* mov	dx,32767 */
	dx = 32767;
dummylabel61:
	// 4743 
	/* @@:		mov	RTurn,dx */
	rturn = dx;
	// 0 ;-------------------------------
	// 0 ;* calc TDist = turning distance
	// 0 ;-------------------------------
	// 0 ;* if ThetaABC >= 128 pdegs (90 degs) then
	// 0 ;*    theta = (256 - ThetaABC) / 2     		;***** obtuse angle *****
	// 0 ;*    TDist = RTurn * tan(theta / 2)
	// 0 ;* else
	// 0 ;*    theta = ThetaABC / 2			;***** acute angle *****
	// 0 ;*    TDist = RTurn * 32768 / tan(theta / 2)
	// 0 ;* endif
	/* cmp	ThetaABC,128	;< 90 degs? */
	CMP(thetaabc, 128);
	/* jb	@F		;yes -> */
	if ((dw)(thetaabc) < (dw)(128)) {goto dummylabel62;}
	// 0 ;------------------------------
	// 0 ;* ThetaABC >= 90 degs (obtuse)
	// 0 ;------------------------------
	/* mov	ax,256 */
	ax = 256;
	/* sub	ax,ThetaABC */
	SUB(ax, thetaabc);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* call	Tangent		;dx = tan(ax) / 2 (refer to TRIG.ASM) */
	CALLF(tangent, 0);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* mov	ax,RTurn */
	ax = rturn;
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
	/* jmp	SetTDist */
	goto settdist;
	// 0 ;----------------------------
	// 0 ;* ThetaABC < 90 degs (acute)
	// 0 ;----------------------------
dummylabel62:
	// 4745 
	/* @@:		mov	ax,ThetaABC */
	ax = thetaabc;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* call	Tangent		;dx = tan(ax) / 2 (refer to TRIG.ASM) */
	CALLF(tangent, 0);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* mov	bx,dx */
	bx = dx;
	/* mov	dx,RTurn */
	dx = rturn;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;/2 for frac divide */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cmp	bx,dx		;div ok? */
	CMP(bx, dx);
	/* jbe	TDistOv		;no -> */
	if ((dw)(bx) <= (dw)(dx)) {goto tdistov;}
	/* div	bx */
	DIV2(bx);
settdist:
	// 4747 
	/* SetTDist:	mov	TDist,ax */
	tdist = ax;
	/* ret */
	RETN(0);
	// 0 ;--------------------------------
	// 0 ;* if overflow then TDist = 65535
	// 0 ;--------------------------------
tdistov:
	// 4749 
	/* TDistOv:	mov	ax,65535 */
	ax = 65535;
	/* jmp	SetTDist */
	goto settdist;
sortwpalt:
	// 5367 
	/* mov	si,WPPtr ;* note: Call this routine with interrupts disabled. */
	si = wpptr;
	// 0 ;-----------------------------------------
	// 0 ;* treat floating waypoint as special case
	// 0 ;-----------------------------------------
edummylabel22:
	// 4751 
	/* cmp	si,OFFSET FloatWP	;floating waypoint? */
	CMP(si, m2c::near_offset_external(floatwp));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel63;}
	/* cmp	AltMode,ALT_TF		;already terrain following? */
	CMP(altmode, 6);
	/* jne	__m2c_macrolocal_71_skip */
	if ((dw)(altmode) != (dw)(6)) {goto __m2c_macrolocal_71_skip;}
	/* jmp	ExitWPAlt */
	goto exitwpalt;
__m2c_macrolocal_71_skip:
	// 4753 
	// 0 ;yes, do not change ->
	/* cmp	AltMode,ALT_ACQUIRE	;already held? */
	CMP(altmode, 4);
	/* jne	__m2c_macrolocal_72_skip */
	if ((dw)(altmode) != (dw)(4)) {goto __m2c_macrolocal_72_skip;}
	/* jmp	ExitWPAlt */
	goto exitwpalt;
__m2c_macrolocal_72_skip:
	// 4755 
	// 0 ;yes, do not change ->
	// 0 ;* acquire current altitude
	/* mov	TFAuto,0 */
	tfauto = 0;
	/* mov	AltMode,ALT_ACQUIRE */
	altmode = 4;
	/* mov	AAFlag,1 */
	aaflag = 1;
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,10 */
	bx = 10;
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,MIN_AUTO_ALT */
	CMP(ax, 20);
	/* jae	__m2c_macrolocal_73_TestHi */
	if ((dw)(ax) >= (dw)(20)) {goto __m2c_macrolocal_73_testhi;}
	/* mov	ax,MIN_AUTO_ALT */
	ax = 20;
	/* jmp	__m2c_macrolocal_73_TestOk */
	goto __m2c_macrolocal_73_testok;
__m2c_macrolocal_73_testhi:
	// 4757 
	/* __m2c_macrolocal_73_TestHi:		cmp	ax,MAX_AUTO_ALT */
	CMP(ax, 7000);
	/* jbe	__m2c_macrolocal_73_TestOk */
	if ((dw)(ax) <= (dw)(7000)) {goto __m2c_macrolocal_73_testok;}
	/* mov	ax,MAX_AUTO_ALT */
	ax = 7000;
__m2c_macrolocal_73_testok:
	// 4759 
	/* mov	AutoAlt,ax */
	autoalt = ax;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* jmp	ExitWPAlt */
	goto exitwpalt;
	// 0 ;----------------------------------------------
	// 0 ;* acquire waypoint altitude or terrain follow?
	// 0 ;----------------------------------------------
dummylabel63:
	// 4761 
	/* @@:		test	WP_ATTR[si],WP_TF	;terrain follow? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x8);
	/* jnz	@F			;yes -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x8) != 0) {goto dummylabel64;}
	// 0 ;---------------------------
	// 0 ;* acquire waypoint altitude
	// 0 ;---------------------------
	/* mov	TFAuto,0 */
	tfauto = 0;
	/* mov	AltMode,ALT_ACQUIRE */
	altmode = 4;
	/* mov	AAFlag,1 */
	aaflag = 1;
	/* mov	dx,0 */
	dx = 0;
	/* mov	ax,WP_ZFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_zft)));
	/* mov	bx,10 */
	bx = 10;
	/* div	bx */
	DIV2(bx);
	/* cmp	ax,MIN_AUTO_ALT */
	CMP(ax, 20);
	/* jae	__m2c_macrolocal_74_TestHi */
	if ((dw)(ax) >= (dw)(20)) {goto __m2c_macrolocal_74_testhi;}
	/* mov	ax,MIN_AUTO_ALT */
	ax = 20;
	/* jmp	__m2c_macrolocal_74_TestOk */
	goto __m2c_macrolocal_74_testok;
__m2c_macrolocal_74_testhi:
	// 4763 
	/* __m2c_macrolocal_74_TestHi:		cmp	ax,MAX_AUTO_ALT */
	CMP(ax, 7000);
	/* jbe	__m2c_macrolocal_74_TestOk */
	if ((dw)(ax) <= (dw)(7000)) {goto __m2c_macrolocal_74_testok;}
	/* mov	ax,MAX_AUTO_ALT */
	ax = 7000;
__m2c_macrolocal_74_testok:
	// 4765 
	/* mov	AutoAlt,ax */
	autoalt = ax;
	/* mov	AutoAltFine,0 */
	autoaltfine = 0;
	/* jmp	ExitWPAlt */
	goto exitwpalt;
	// 0 ;----------------------------
	// 0 ;* terrain follow to waypoint
	// 0 ;----------------------------
dummylabel64:
	// 4767 
	/* @@:		mov	AAFlag,0 */
	aaflag = 0;
	/* mov	AltMode,ALT_TF */
	altmode = 6;
	/* mov	TFAuto,1 */
	tfauto = 1;
	/* mov	ax,WP_ZFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_zft)));
	/* call	CalcTFRideIndex */
	CALL(calctfrideindex, 0);
exitwpalt:
	// 4769 
	/* ExitWPAlt:	ret */
	RETN(0);
scanairfields:
	// 5454 
	/* mov	di,OFFSET AirfieldList ;* kill: assume all */
	di = m2c::near_offset_external(airfieldlist);
edummylabel23:
	// 4771 
	/* mov	cx,NUM_AIRFIELDS */
	cx = 4;
scanafloop:
	// 4773 
	/* ScanAFLoop:	cmp	AF_XSEC[di],-1	;record in use? */
	CMP(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_xsec)), -1);
	/* je	@F		;no -> */
	if ((dw)(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_xsec))) == (dw)(-1)) {goto dummylabel65;}
	/* push	cx */
	PUSH(cx);
	// 0 ;* calc range and bearing of airfield datum
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* push	di */
	PUSH(di);
	/* call	CalcRngBrgVP_AF */
	CALLF(calcrngbrgvp_af, 0);
	/* pop	di */
	POP(di);
	/* mov	AF_RNG_LO[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_rng_lo))), m2c::getdata(ax));
	/* mov	AF_RNG_HI[di],dx */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_rng_hi))), m2c::getdata(dx));
	/* mov	AF_BRG[di],bx */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_brg))), m2c::getdata(bx));
	// 0 ;* calc range (nautical miles)
	/* call	CalcNMiles */
	CALLF(calcnmiles, 0);
	/* mov	AF_RNG[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_rng))), m2c::getdata(ax));
	// 0 ;* calc ETA
	/* mov	ax,AF_RNG_LO[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_rng_lo)));
	/* mov	dx,AF_RNG_HI[di] */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_rng_hi)));
	/* mov	bx,Vtas */
	bx = vtas;
	/* call	CalcETA */
	CALLF(calceta, 0);
	/* mov	AF_ETA[di],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,di))->af_eta))), m2c::getdata(ax));
	/* pop	cx */
	POP(cx);
dummylabel65:
	// 4775 
	/* @@:		add	di,AF_REC_SIZE */
	ADD(di, 18);
	/* loop	ScanAFLoop */
	LOOP(scanafloop);
	/* ret */
	RETN(0);
updateils:
	// 5493 
	/* mov	ILSActive,0	;assume ILS not active */
	ilsactive = 0;
	// 0 ;* altitude check (zft <= 8,191ft)
edummylabel24:
	// 4777 
	/* cmp	ZftHi,0 */
	CMP(zfthi, 0);
	/* ja	ExitILS */
	if ((dw)(zfthi) > (dw)(0)) {goto exitils;}
	/* cmp	ZftLo,8191 */
	CMP(zftlo, 8191);
	/* ja	ExitILS */
	if ((dw)(zftlo) > (dw)(8191)) {goto exitils;}
	/* mov	si,OFFSET AirfieldList */
	si = m2c::near_offset_external(airfieldlist);
	/* mov	cx,NUM_AIRFIELDS */
	cx = 4;
afloop:
	// 4779 
	/* AFLoop:		push	cx */
	PUSH(cx);
	/* cmp	AF_XSEC[si],-1	;record in use? */
	CMP(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec)), -1);
	/* je	NextAF		;no -> */
	if ((dw)(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec))) == (dw)(-1)) {goto nextaf;}
	// 0 ;* coarse range check
	/* cmp	AF_RNG[si],150	;within 15nm? */
	CMP(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_rng)), 150);
	/* jae	NextAF	      	;no -> */
	if ((dw)(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_rng))) >= (dw)(150)) {goto nextaf;}
	// 0 ;* a/c pointing at airfield?
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,AF_BRG[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_brg)));
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,128	     	;within +/-90 degs? */
	CMP(ax, 128);
	/* jae	NextAF		;no -> */
	if ((dw)(ax) >= (dw)(128)) {goto nextaf;}
	/* mov	di,AF_ILS_PTR[si] */
	di = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ils_ptr)));
	/* mov	al,ILS_N */
	al = 0x8;
	/* call	CheckILS */
	CALL(checkils, 0);
	/* jc	InILSBeam */
	if (CF) {goto inilsbeam;}
	/* mov	al,ILS_S */
	al = 0x4;
	/* call	CheckILS */
	CALL(checkils, 0);
	/* jc	InILSBeam */
	if (CF) {goto inilsbeam;}
	/* mov	al,ILS_E */
	al = 0x2;
	/* call	CheckILS */
	CALL(checkils, 0);
	/* jc	InILSBeam */
	if (CF) {goto inilsbeam;}
	/* mov	al,ILS_W */
	al = 0x1;
	/* call	CheckILS */
	CALL(checkils, 0);
	/* jc	InILSBeam */
	if (CF) {goto inilsbeam;}
nextaf:
	// 4781 
	/* NextAF:		pop	cx */
	POP(cx);
	/* add	si,AF_REC_SIZE */
	ADD(si, 18);
	/* loop	AFLoop */
	LOOP(afloop);
exitils:
	// 4783 
	/* ExitILS:	ret */
	RETN(0);
	// 0 ;* in ILS beam, break out of loop, tidy up stack, return
inilsbeam:
	// 4785 
	/* InILSBeam:    	pop	cx */
	POP(cx);
	/* ret */
	RETN(0);
checkils:
	// 5552 
	/* mov	ILSApproach,al ;*       Xtd, Ytd = touchdown position */
	ilsapproach = al;
edummylabel25:
	// 4787 
	/* mov	ILSAirfieldPtr,si */
	ilsairfieldptr = si;
	// 0 ;* test if ILS is available and working
	/* and	al,ILS_AVAILABLE[di]	;available? */
	AND(al, ((ils*)raddr(ds,di))->ils_available);
	/* and	al,AF_ILS_STATUS[si]	;working? */
	AND(al, ((airfield*)raddr(ds,si))->af_ils_status);
	/* jnz	__m2c_macrolocal_75_skip */
	if (al != 0) {goto __m2c_macrolocal_75_skip;}
	/* jmp	ILSFail */
	goto ilsfail;
__m2c_macrolocal_75_skip:
	// 4789 
	// 0 ;no ->
	// 0 ;* select approach direction
	/* test	al,ILS_N */
	TEST(al, 0x8);
	/* jnz	SortNApproach */
	if ((al & 0x8) != 0) {goto sortnapproach;}
	/* test	al,ILS_S */
	TEST(al, 0x4);
	/* jz	__m2c_macrolocal_76_skip */
	if (!(al & 0x4)) {goto __m2c_macrolocal_76_skip;}
	/* jmp	SortSApproach */
	goto sortsapproach;
__m2c_macrolocal_76_skip:
	// 4791 
	/* test	al,ILS_E */
	TEST(al, 0x2);
	/* jz	__m2c_macrolocal_77_skip */
	if (!(al & 0x2)) {goto __m2c_macrolocal_77_skip;}
	/* jmp	SortEApproach */
	goto sorteapproach;
__m2c_macrolocal_77_skip:
	// 4793 
	/* test	al,ILS_W */
	TEST(al, 0x1);
	/* jz	__m2c_macrolocal_78_skip */
	if (!(al & 0x1)) {goto __m2c_macrolocal_78_skip;}
	/* jmp	SortWApproach */
	goto sortwapproach;
__m2c_macrolocal_78_skip:
	// 4795 
	/* jmp	ILSFail */
	goto ilsfail;
	// 0 ;---------------------------
sortnapproach:
	// 4797 
	// 0 ;---------------------------
	// 0 ;* range = Ytd - Yac
	// 0 ;* error = Xac - Xtd
	// 0 ;* calc range
	/* mov	cx,YSec		;-(ysec * 16384) + yft */
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
	/* mov	bp,Yft */
	bp = yft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	dx,AF_YSEC[si]	;-(ysec * 16384) + yft */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ysec)));
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
	/* mov	bp,ILS_N_TDOWN_Y[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_n_tdown_y)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store range */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* calc localiser error
	/* mov	dx,AF_XSEC[si]	;xsec * 16384 + xft */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec)));
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
	/* mov	bp,ILS_N_TDOWN_X[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_n_tdown_x)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,XSec		;xsec * 16384 + xft */
	cx = xsec;
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
	/* mov	bp,Xft */
	bp = xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore range */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	ILSOk */
	goto ilsok;
	// 0 ;---------------------------
sortsapproach:
	// 4799 
	// 0 ;---------------------------
	// 0 ;* range = Yac - Ytd
	// 0 ;* error = Xtd - Xac
	// 0 ;* calc range
	/* mov	cx,AF_YSEC[si]	;-(ysec * 16384) + yft */
	cx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ysec)));
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
	/* mov	bp,ILS_S_TDOWN_Y[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_s_tdown_y)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	dx,YSec		;-(ysec * 16384) + yft */
	dx = ysec;
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
	/* mov	bp,Yft */
	bp = yft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store range */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* calc localiser error
	/* mov	dx,XSec		;xsec * 16384 + xft */
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
	/* mov	bp,Xft */
	bp = xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,AF_XSEC[si]	;xsec * 16384 + xft */
	cx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec)));
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
	/* mov	bp,ILS_S_TDOWN_X[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_s_tdown_x)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore range */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	ILSOk */
	goto ilsok;
	// 0 ;---------------------------
sorteapproach:
	// 4801 
	// 0 ;---------------------------
	// 0 ;* range = Xtd - Xac
	// 0 ;* error = Ytd - Yac
	// 0 ;* calc range
	/* mov	cx,XSec		;xsec * 16384 + xft */
	cx = xsec;
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
	/* mov	bp,Xft */
	bp = xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	dx,AF_XSEC[si]	;xsec * 16384 + xft */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec)));
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
	/* mov	bp,ILS_E_TDOWN_X[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_e_tdown_x)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store range */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* calc localiser error
	/* mov	dx,YSec		;-(ysec * 16384) + yft */
	dx = ysec;
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
	/* mov	bp,Yft */
	bp = yft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,AF_YSEC[si]	;-(ysec * 16384) + yft */
	cx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ysec)));
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
	/* mov	bp,ILS_E_TDOWN_Y[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_e_tdown_y)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore range */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* jmp	ILSOk */
	goto ilsok;
	// 0 ;---------------------------
sortwapproach:
	// 4803 
	// 0 ;---------------------------
	// 0 ;* range = Xac - Xtd
	// 0 ;* error = Yac - Ytd
	// 0 ;* calc range
	/* mov	cx,AF_XSEC[si]	;xsec * 16384 + xft */
	cx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec)));
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
	/* mov	bp,ILS_W_TDOWN_X[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_w_tdown_x)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	dx,XSec		;xsec * 16384 + xft */
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
	/* mov	bp,Xft */
	bp = xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store range */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* calc localiser error
	/* mov	dx,AF_YSEC[si]	;-(ysec * 16384) + yft */
	dx = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ysec)));
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
	/* mov	bp,ILS_W_TDOWN_Y[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((ils*)raddr(ds,di))->ils_w_tdown_y)));
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,YSec		;-(ysec * 16384) + yft */
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
	/* mov	bp,Yft */
	bp = yft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore range */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;---------------------------
ilsok:
	// 4805 
	// 0 ;---------------------------
	// 0 ;* dx, ax = range
	// 0 ;* cx, bx = localiser error
	/* mov	ILSRangeLo,ax */
	ilsrangelo = ax;
	/* mov	ILSRangeHi,dx */
	ilsrangehi = dx;
	/* mov	ILSErrorLo,bx */
	ilserrorlo = bx;
	/* mov	ILSErrorHi,cx */
	ilserrorhi = cx;
	// 0 ;* test for correct approach direction (range > 0ft) and (range < 65,536ft)
	/* test	dx,dx		;direction and range ok? */
	TEST(dx, dx);
	/* jnz	ILSFail		;no -> */
	if ((dx & dx) != 0) {goto ilsfail;}
	// 0 ;* max error = range / 16
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
	/* mov	ILSMaxError,ax */
	ilsmaxerror = ax;
	/* mov	bp,ax */
	bp = ax;
	// 0 ;* check if localiser error < max error
	/* add	bp,LOCAL_OFFSET	;increase resolution towards touchdown point */
	ADD(bp, 1024/16);
	/* mov	ax,cx		;store error sign */
	ax = cx;
	/* test	cx,cx */
	TEST(cx, cx);
	/* jns	@F */
	if ((short)((cx & cx)) >= 0) {goto dummylabel66;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
dummylabel66:
	// 4807 
	/* @@:		test	cx,cx		;error > 65,535ft? */
	TEST(cx, cx);
	/* jnz	ILSFail		;yes -> */
	if ((cx & cx) != 0) {goto ilsfail;}
	/* cmp	bx,bp		;error < max error? */
	CMP(bx, bp);
	/* jae	ILSFail		;no -> */
	if ((dw)(bx) >= (dw)(bp)) {goto ilsfail;}
	/* cwd			;restore error sign */
	CWD;
	/* xor	bx,dx */
	XOR(bx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* mov	ILSLocalError,bx */
	ilslocalerror = bx;
	// 0 ;* calc localiser position = error * 32768 / max error
	/* mov	dx,bx */
	dx = bx;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp */
	IDIV2(bp);
	/* mov	ILSLocalPos,ax */
	ilslocalpos = ax;
	/* sub	bp,LOCAL_OFFSET	;restore max error */
	SUB(bp, 1024/16);
	// 0 ;* calc glide slope error (error = zft - max error)
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,bp */
	SUB(ax, bp);
	// 0 ;* check if glide slope error < max error
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bp		;error < max error? */
	CMP(ax, bp);
	/* jae	ILSFail		;no -> */
	if ((dw)(ax) >= (dw)(bp)) {goto ilsfail;}
	/* xor	ax,dx		;restore error sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	ILSGlideError,ax */
	ilsglideerror = ax;
	// 0 ;* calc glide slope position = error * 32768 / max error
	/* mov	dx,ax */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bp */
	IDIV2(bp);
	/* mov	ILSGlidePos,ax */
	ilsglidepos = ax;
	// 0 ;* sort ILS display values (range, bearing and ETA)
	/* mov	ax,AF_RNG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_rng)));
	/* mov	ILSRng,ax */
	ilsrng = ax;
	/* mov	ax,AF_BRG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_brg)));
	/* mov	ILSBrg,ax */
	ilsbrg = ax;
	/* mov	ax,AF_ETA[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_eta)));
	/* mov	ILSETA,ax */
	ilseta = ax;
	/* mov	ILSActive,1 */
	ilsactive = 1;
	/* stc		;cf = 1 */
	STC;
	/* ret */
	RETN(0);
ilsfail:
	// 4809 
	/* ILSFail:	clc		;cf = 0 */
	CLC;
	/* ret */
	RETN(0);
autoapproach:
	// 5963 
	/* mov	al,AppFlag */
	al = appflag;
edummylabel26:
	// 4815 
	/* test	al,al		;auto-approach enabled */
	TEST(al, al);
	/* xchg	al,AppLast	;new <-> old */
	XCHG(al, applast);
	/* jz	AppExit1	;no -> */
	if (ZF) {goto appexit1;}
	/* xor	al,AppFlag	;just enabled? */
	XOR(al, appflag);
	/* jz	SkipAppInit	;no -> */
	if (al == 0) {goto skipappinit;}
	// 0 ;* calc approach heading (fine pdegs)
	/* mov	al,ILSApproach */
	al = ilsapproach;
	/* mov	dx,0*128 */
	dx = 0*128;
	/* test	al,ILS_N	;north approach? */
	TEST(al, 0x8);
	/* jnz	@F		;yes -> */
	if ((al & 0x8) != 0) {goto dummylabel67;}
	/* mov	dx,256*128 */
	dx = 256*128;
	/* test	al,ILS_S	;south approach? */
	TEST(al, 0x4);
	/* jnz	@F		;yes -> */
	if ((al & 0x4) != 0) {goto dummylabel67;}
	/* mov	dx,128*128 */
	dx = 128*128;
	/* test	al,ILS_E	;east approach? */
	TEST(al, 0x2);
	/* jnz	@F		;yes -> */
	if ((al & 0x2) != 0) {goto dummylabel67;}
	/* mov	dx,384*128	;west approach */
	dx = 384*128;
dummylabel67:
	// 4817 
	/* @@:		mov	AppHFine,dx */
	apphfine = dx;
skipappinit:
	// 4819 
	/* SkipAppInit:	mov	AppError,0	;clear error */
	apperror = 0;
	// 0 ;--------------------
	// 0 ;* ensure in ILS beam
	// 0 ;--------------------
	/* test	ILSActive,1	;in ILS? */
	TEST(ilsactive, 1);
	/* jz	AppExit2	;no -> */
	if (!(ilsactive & 1)) {goto appexit2;}
	// 0 ;---------------------
	// 0 ;* calc approach speed
	// 0 ;---------------------
	// 0 ;* look up speed wrt configuration (weight = 33,000lbs)
	/* mov	bl,CrntWingPos */
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
	/* mov	bx,ApproachSpeed[bx] */
	bx = *(dw*)(((db*)approachspeed)+bx);
	// 0 ;* if 25 degs sweep then
	// 0 ;*    add 5kts for every 2,048lbs above 33,000lbs
	// 0 ;* else
	// 0 ;*    add 7kts for every 2,048lbs above 33,000lbs
	// 0 ;* endif
	/* mov	ax,Weight */
	ax = weight;
	/* sub	ax,33000 */
	SUB(ax, 33000);
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
	/* mov	cl,11		;/2048 */
	cl = 11;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	dx,ax */
	dx = ax;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* cmp	CrntWingPos,SWEEP_D_25	;25 degs sweep? */
	CMP(crntwingpos, sweep_d_25);
	/* je	@F			;yes -> */
	if ((dw)(crntwingpos) == (dw)(sweep_d_25)) {goto dummylabel68;}
	/* add	ax,dx		;*3 */
	ADD(ax, dx);
dummylabel68:
	// 4821 
	/* @@:		shl	ax,1		;*4 or *6 */
	SHL(ax, 1);
	/* add	ax,dx		;*5 or *7 */
	ADD(ax, dx);
	/* add	ax,bx */
	ADD(ax, bx);
	/* cli			;<<<<< IMPORTANT <<<<< */
	CLI;
	/* mov	AutoVias,ax */
	autovias = ax;
	/* mov	AutoViasFine,0 */
	autoviasfine = 0;
	/* sti			;<<<<< IMPORTANT <<<<< */
	STI;
	/* ret */
	RETN(0);
updateradar:
	// 6046 
	// 0 ;* radar switching logic:-
	// 0 ;*
	// 0 ;* if radar ok then
	// 0 ;*    if select radar off then
	// 0 ;*       radar mode = off
	// 0 ;*    else
	// 0 ;*       if select air radar then
	// 0 ;*          radar mode = air
	// 0 ;*       else
	// 0 ;*          if variant not ADV then
	// 0 ;*             if select ground radar then
	// 0 ;*                radar mode = ground
	// 0 ;*             endif
	// 0 ;*          endif
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* else
	// 0 ;*    radar mode = off
	// 0 ;* endif
edummylabel27:
	// 4823 
	/* test	SSF_Radar,1	;radar damaged? */
	TEST(ssf_radar, 1);
	/* jz	@F		;no -> */
	if (!(ssf_radar & 1)) {goto dummylabel69;}
	/* mov	RadarMode,NUL_RADAR */
	radarmode = 0;
	/* jmp	RadarOk */
	goto radarok;
dummylabel69:
	// 4825 
	/* @@:	mov	al,BYTE PTR KF_RadarOff[K_STATUS] */
	al = *((&kf_radaroff)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;switch radar off?
/* m2c-phantom removed: 	R(al = *((&kf_radaroff)+k_status););	// 6074 mov	al,BYTE PTR KF_RadarOff[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel70;}
	/* mov	RadarMode,NUL_RADAR */
	radarmode = 0;
	/* jmp	RadarOk */
	goto radarok;
dummylabel70:
	// 4827 
	/* @@:	mov	al,BYTE PTR KF_AirRadar[K_STATUS] */
	al = *((&kf_airradar)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;select air radar?
/* m2c-phantom removed: 	R(al = *((&kf_airradar)+k_status););	// 6081 mov	al,BYTE PTR KF_AirRadar[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel71;}
	// 0 ;* set up air to air combat configuration
	/* mov	RadarMode,AIR_RADAR */
	radarmode = 4;
	/* call	SelectRadarMFD */
	CALLF(selectradarmfd, 0);
	/* jmp	RadarOk */
	goto radarok;
dummylabel71:
	// 4829 
	/* @@:		cmp	TornadoType,ADV_TORNADO	;ADV variant? */
	CMP(tornadotype, 2);
	/* je	RadarOk			;yes -> */
	if ((dw)(tornadotype) == (dw)(2)) {goto radarok;}
	/* mov	al,BYTE PTR KF_GndRadar[K_STATUS] */
	al = *((&kf_gndradar)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;select ground radar?
/* m2c-phantom removed: 	R(al = *((&kf_gndradar)+k_status););	// 6094 mov	al,BYTE PTR KF_GndRadar[K_STATUS] */
	/* jz	RadarOk		;no -> */
	if (!(al & al)) {goto radarok;}
	// 0 ;* set up ground attack configuration
	/* mov	RadarMode,GND_RADAR */
	radarmode = 2;
	/* call	SelectRadarMFD */
	CALLF(selectradarmfd, 0);
radarok:
	// 4831 
	/* RadarOk: 	ret */
	RETN(0);
updateappprog:
	// 6115 
	// 0 ;* check if in ILS beam and ILS range 3,000 .. 4,000ft
edummylabel28:
	// 4833 
	/* xor	al,al		;assume not in fan marker beam */
	XOR(al, al);
	/* test	ILSActive,1	;in ILS	beam? */
	TEST(ilsactive, 1);
	/* jz	@F		;no -> */
	if (!(ilsactive & 1)) {goto dummylabel72;}
	/* cmp	ILSRangeHi,0	;range > 65,535ft? */
	CMP(ilsrangehi, 0);
	/* ja	@F		;yes -> */
	if ((dw)(ilsrangehi) > (dw)(0)) {goto dummylabel72;}
	/* cmp	ILSRangeLo,4000	;within upper limit? */
	CMP(ilsrangelo, 4000);
	/* ja	@F		;no -> */
	if ((dw)(ilsrangelo) > (dw)(4000)) {goto dummylabel72;}
	/* cmp	ILSRangeLo,3000	;within lower limit? */
	CMP(ilsrangelo, 3000);
	/* jb	@F		;no -> */
	if ((dw)(ilsrangelo) < (dw)(3000)) {goto dummylabel72;}
	/* mov	al,1		;in fan marker beam */
	al = 1;
dummylabel72:
	// 4835 
	/* @@:		test	al,al		;in fan marker? */
	TEST(al, al);
	/* xchg	al,AppProgFlag	;new <-> old */
	XCHG(al, appprogflag);
	/* jz	ExitAppProg	;no -> */
	if (ZF) {goto exitappprog;}
	/* test	al,al		;just enabled? */
	TEST(al, al);
	/* jnz	@F		;no -> */
	if ((al & al) != 0) {goto dummylabel73;}
	/* mov	AppProgSeq,0 */
	appprogseq = 0;
	/* mov	AppProgTimer,MORSE_DASH */
	appprogtimer = 40;
	/* call	MorseDashSound */
	CALLF(morsedashsound, 0);
	/* jmp	ExitAppProg */
	goto exitappprog;
	// 0 ;* update timer and sequence
dummylabel73:
	// 4837 
	/* @@:		mov	ax,AppProgTimer */
	ax = appprogtimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	SetAPTimer	;still timing -> */
	if (!CF) {goto setaptimer;}
	/* mov	al,AppProgSeq */
	al = appprogseq;
	/* inc	al */
	INC(al);
	/* and	al,11b */
	AND(al, 0x3);
	/* mov	AppProgSeq,al */
	appprogseq = al;
	/* cmp	al,00b		;dash? */
	CMP(al, 0x0);
	/* jne	@F		;no -> */
	if ((db)(al) != (db)(0x0)) {goto dummylabel74;}
	/* call	MorseDashSound */
	CALLF(morsedashsound, 0);
	/* mov	ax,MORSE_DASH */
	ax = 40;
	/* jmp	SetAPTimer */
	goto setaptimer;
dummylabel74:
	// 4839 
	/* @@:		cmp	al,10b		;dot? */
	CMP(al, 0x2);
	/* jne	@F		;no -> */
	if ((db)(al) != (db)(0x2)) {goto dummylabel75;}
	/* call	MorseDotSound */
	CALLF(morsedotsound, 0);
dummylabel75:
	// 4841 
	/* @@:		mov	ax,MORSE_DOT	;dot or pause */
	ax = 10;
setaptimer:
	// 4843 
	/* SetAPTimer:	mov	AppProgTimer,ax */
	appprogtimer = ax;
exitappprog:
	// 4845 
	/* ExitAppProg:	ret */
	RETN(0);
updateairradar:
	// 6166 
	/* mov	NumRadarTracks,0	;assume radar off */
	numradartracks = 0;
edummylabel29:
	// 4847 
	/* mov	AirRadarPtr,OFFSET AirRadarTracks */
	airradarptr = m2c::near_offset_external(airradartracks);
	/* cmp	RadarMode,AIR_RADAR	;air radar on? */
	CMP(radarmode, 4);
	/* je	ContAirRadar		;yes -> */
	if ((dw)(radarmode) == (dw)(4)) {goto contairradar;}
	/* mov	AirTgtPtr,-1 */
	airtgtptr = -1;
	/* jmp	ExitAirRadar		;no -> */
	goto exitairradar;
	// 0 ;----------------------------
	// 0 ;* calc air radar scan centre
	// 0 ;----------------------------
	// 0 ;* copy aircraft datum
contairradar:
	// 4849 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET ARAD_VIEW */
	di = m2c::near_offset_external(arad_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 6183 rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 6184 mov	si,OFFSET M_VIEW */
	// 6185 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* lookup offset wrt radar range
	/* mov	bx,AirRadarRng */
	bx = airradarrng;
	/* mov	bp,AirRadarOffset[bx] */
	bp = *(dw*)(((db*)&airradaroffset)+bx);
	// 0 ;* rotate offset wrt hdg (note: y = offset, x = 0)
	/* mov	bx,ARAD_VIEW.VP_HDG */
	bx = arad_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6196 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6197 						mov	di,CosTable[bx] */
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
	// 0 ;* scale up xr and yr (original offset is /4 scaled)
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	// 0 ;* offset viewpoint
	/* mov	si,OFFSET ARAD_VIEW */
	si = m2c::near_offset_external(arad_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	// 0 ;---------------------------
	// 0 ;* calc scan size and offset
	// 0 ;---------------------------
	/* mov	bx,AirRadarRng */
	bx = airradarrng;
	/* mov	ax,AirRadarScan[bx] */
	ax = *(dw*)(((db*)&airradarscan)+bx);
	/* mov	ScanSize,ax */
	scansize = ax;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* neg	ax */
	NEG(ax);
	/* mov	ScanOffset,ax */
	scanoffset = ax;
	// 0 ;----------------
	// 0 ;* air radar scan
	// 0 ;----------------
	// 0 ;* for y sector = -ScanOffset to ScanOffset
	/* mov	cx,ScanSize */
	cx = scansize;
	/* mov	di,ScanOffset */
	di = scanoffset;
scanyloop:
	// 4851 
	/* ScanYLoop:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;* for x sector = -ScanOffset to ScanOffset
	/* mov	cx,ScanSize */
	cx = scansize;
	/* mov	si,ScanOffset */
	si = scanoffset;
scanxloop:
	// 4853 
	/* ScanXLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* check for occupied sector
	/* mov	ax,ARAD_VIEW.VP_XSEC */
	ax = arad_view.vp_xsec;
	/* add	ax,si		;x sec = vp x sec + x sec offset */
	ADD(ax, si);
	/* mov	dx,ARAD_VIEW.VP_YSEC */
	dx = arad_view.vp_ysec;
	/* add	dx,di		;y sec = vp y sec + y sec offset */
	ADD(dx, di);
	/* call	LocateMobiles */
	CALLF(locatemobiles, 0);
	/* jc	SkipSector	;no mobiles in sector -> */
	if (CF) {goto skipsector;}
	// 0 ;* scan mobiles in sector
scanmobiles:
	// 4855 
	/* ScanMobiles:	cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	SkipSector	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto skipsector;}
	/* cmp	si,OFFSET M_MOBILE	;Tornado? */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* je	SkipMobile		;yes -> */
	if ((dw)(si) == (dw)(m2c::near_offset_external(m_mobile))) {goto skipmobile;}
	/* push	si */
	PUSH(si);
	/* call	TrackMobile */
	CALL(trackmobile, 0);
	/* pop	si */
	POP(si);
skipmobile:
	// 4857 
	/* SkipMobile:	mov	si,[si].MOB_LINK_PTR	;next mobile */
	si = m2c::getdata(*((dw*)((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	ScanMobiles */
	goto scanmobiles;
	// 0 ;* next x sector
skipsector:
	// 4859 
	/* SkipSector:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* inc	si		;x = x + 1 */
	INC(si);
	/* loop	ScanXLoop */
	LOOP(scanxloop);
	// 0 ;* next y sector
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* inc	di		;y = y + 1 */
	INC(di);
	/* loop	ScanYLoop */
	LOOP(scanyloop);
	// 0 ;---------------------------------------------
	// 0 ;* check designated target still radar visible
	// 0 ;---------------------------------------------
	/* cmp	AirTgtPtr,-1	;any target designated? */
	CMP(airtgtptr, -1);
	/* je	TrackOk		;no -> */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto trackok;}
	/* mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* jcxz	LostTrack	;no tracks -> */
	JCXZ(losttrack);
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
	/* mov	ax,AirTgtPtr */
	ax = airtgtptr;
dummylabel76:
	// 4861 
	/* @@:		cmp	ax,[si].ARAD_PTR	;found target? */
	CMP(ax, *((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* je	TrackOk			;yes -> */
	if ((dw)(ax) == (dw)(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)))) {goto trackok;}
	/* add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* loop	@B */
	LOOP(dummylabel76);
losttrack:
	// 4863 
	/* LostTrack:	mov	AirTgtPtr,-1 */
	airtgtptr = -1;
	// 0 ;------------------------
	// 0 ;* check num radar tracks
	// 0 ;------------------------
trackok:
	// 4865 
	/* TrackOk:  	cmp	NumRadarTracks,0	;any tracks? */
	CMP(numradartracks, 0);
	/* jne	__m2c_macrolocal_97_skip */
	if ((dw)(numradartracks) != (dw)(0)) {goto __m2c_macrolocal_97_skip;}
	/* jmp	ExitAirRadar */
	goto exitairradar;
__m2c_macrolocal_97_skip:
	// 4867 
	// 0 ;no ->
	// 0 ;--------------------------
	// 0 ;* check cancel designation
	// 0 ;--------------------------
	/* mov	al,BYTE PTR KF_CancelAirTgt[K_STATUS] */
	al = *((&kf_cancelairtgt)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_cancelairtgt)+k_status););	// 6328 						mov	al,BYTE PTR KF_CancelAirTgt[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel77;}
	/* mov	AirTgtPtr,-1 */
	airtgtptr = -1;
	/* jmp	ExitAirRadar */
	goto exitairradar;
	// 0 ;-------------------------
	// 0 ;* check cycle air targets
	// 0 ;-------------------------
dummylabel77:
	// 4869 
	/* @@:	mov	al,BYTE PTR KF_CycleAirTgt[K_STATUS] */
	al = *((&kf_cycleairtgt)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;cycle air targets?
/* m2c-phantom removed: 	R(al = *((&kf_cycleairtgt)+k_status););	// 6339 mov	al,BYTE PTR KF_CycleAirTgt[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel78;}
	/* cmp	AirTgtPtr,-1	;designated target? */
	CMP(airtgtptr, -1);
	/* je	@F		;no (default to boresight) -> */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto dummylabel78;}
	/* call	CycleTargets */
	CALL(cycletargets, 0);
	/* jmp	AirTgtData */
	goto airtgtdata;
	// 0 ;------------------------------
	// 0 ;* check bore sight designation
	// 0 ;------------------------------
dummylabel78:
	// 4871 
	/* @@:	mov	al,BYTE PTR KF_BoreSight[K_STATUS] */
	al = *((&kf_boresight)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;bore sight designate?
/* m2c-phantom removed: 	R(al = *((&kf_boresight)+k_status););	// 6352 mov	al,BYTE PTR KF_BoreSight[K_STATUS] */
	/* jz	AirTgtData	;no -> */
	if (!(al & al)) {goto airtgtdata;}
	/* call	BoreSight */
	CALL(boresight, 0);
	// 0 ;-------------------------
	// 0 ;* calc target slant range (if valid target)
	// 0 ;-------------------------
airtgtdata:
	// 4873 
	/* AirTgtData:	cmp	AirTgtPtr,-1	;valid target? */
	CMP(airtgtptr, -1);
	/* je	ExitAirRadar	;no -> */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto exitairradar;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,AirTgtPtr */
	di = airtgtptr;
	/* add	di,MOB_REC_SIZE	;di -> target VIEWPOINT data */
	ADD(di, 6);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* mov	WORD PTR AirTgtRange,ax */
	*(dw*)(&airtgtrange) = ax;
	/* mov	WORD PTR AirTgtRange+2,dx */
	*(dw*)(((db*)&airtgtrange)+2) = dx;
	// 0 ;--------------------------------
	// 0 ;* calc air target display values
	// 0 ;--------------------------------
	/* mov	si,AirTgtPtr */
	si = airtgtptr;
	// 0 ;* calc range (nm)
	/* mov	bx,6076 */
	bx = 6076;
	/* div	bx */
	DIV2(bx);
	/* cmp	dx,6076/2	;1/2 bit round up */
	CMP(dx, 6076/2);
	/* cmc */
	CMC;
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	DispAirTgtRng,ax */
	dispairtgtrng = ax;
	// 0 ;* calc alt (1000's ft)
	/* mov	ax,WORD PTR _VP_ZFT_LO[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)));
	/* mov	dx,WORD PTR _VP_ZFT_HI[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)));
	/* mov	bx,1000 */
	bx = 1000;
	/* div	bx */
	DIV2(bx);
	/* cmp	dx,1000/2	;1/2 bit round up */
	CMP(dx, 1000/2);
	/* cmc */
	CMC;
	/* adc	ax,0 */
	ADC(ax, 0);
	/* mov	DispAirTgtAlt,ax */
	dispairtgtalt = ax;
	// 0 ;* calc IAS (kts)
	/* push	si */
	PUSH(si);
	/* call	GetDroneSpeed */
	CALLF(getdronespeed, 0);
	/* pop	si */
	POP(si);
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,WORD PTR _VP_ZFT_LO[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)));
	/* mov	dx,WORD PTR _VP_ZFT_HI[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)));
	/* call	CalcVias */
	CALLF(calcvias, 0);
	/* call	CalcVkts */
	CALLF(calcvkts, 0);
	/* cmp	ax,999		;limit max display value */
	CMP(ax, 999);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(999)) {goto dummylabel79;}
	/* mov	ax,999 */
	ax = 999;
dummylabel79:
	// 4875 
	/* @@:		mov	DispAirTgtVel,ax */
	dispairtgtvel = ax;
	// 0 ;* calc hdg
	/* mov	ax,_VP_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_hdg)));
	/* mov	DispAirTgtHdg,ax */
	dispairtgthdg = ax;
exitairradar:
	// 4877 
	/* ExitAirRadar:	ret */
	RETN(0);
trackmobile:
	// 6418 
	/* cmp	NumRadarTracks,NUM_TRACKS	;any records available? */
	CMP(numradartracks, 40);
edummylabel30:
	// 4879 
	/* jne	__m2c_macrolocal_101_skip */
	if (!ZF) {goto __m2c_macrolocal_101_skip;}
	/* jmp	ExitTrack */
	goto exittrack;
__m2c_macrolocal_101_skip:
	// 4881 
	// 0 ;no ->
	/* mov	di,AirRadarPtr */
	di = airradarptr;
	/* mov	[di].ARAD_PTR,si	;store ptr */
	m2c::setdata(&(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_ptr))), m2c::getdata(si));
	/* add	si,MOB_REC_SIZE		;si -> viewpoint */
	ADD(si, 6);
	// 0 ;--------------------------------------
	// 0 ;* check if mobile is in ground clutter	(therefore ignore trucks / trains)
	// 0 ;--------------------------------------
	/* cmp	WORD PTR [si].VP_ZFT_HI,0	;alt > 65535ft? */
	CMP(*((dw*)raddr(ds,si+vp_zft_hi)), 0);
	/* ja	@F				;yes -> */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_hi))) > (dw)(0)) {goto dummylabel80;}
	/* cmp	WORD PTR [si].VP_ZFT_LO,100	;alt <= 100ft? */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), 100);
	/* ja	__m2c_macrolocal_102_skip */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(100)) {goto __m2c_macrolocal_102_skip;}
	/* jmp	ExitTrack */
	goto exittrack;
__m2c_macrolocal_102_skip:
	// 4883 
	// 0 ;yes ->
	// 0 ;----------------------------------
	// 0 ;* calc range and bearing of mobile
	// 0 ;----------------------------------
dummylabel80:
	// 4885 
	/* @@:		push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	di,OFFSET M_VIEW */
	di = m2c::near_offset_external(m_view);
	/* xchg	si,di */
	XCHG(si, di);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* mov	WORD PTR [di].ARAD_RNG_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ds,di+arad_rng_lo))), m2c::getdata(ax));
	/* mov	WORD PTR [di].ARAD_RNG_HI,dx */
	m2c::setdata(&(*((dw*)raddr(ds,di+arad_rng_hi))), m2c::getdata(dx));
	/* mov	[di].ARAD_BRG,bx */
	m2c::setdata(&(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_brg))), m2c::getdata(bx));
	// 0 ;---------------------------------------
	// 0 ;* check mobile in air radar cone (plan)
	// 0 ;---------------------------------------
	// 0 ;* calc ang diff(hdg, brg)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	// 0 ;* expand pointed end of cone (else close range mobiles always disappear)
	// 0 ;*
	// 0 ;* note: Use a minimum cone angle of 60degs else mobiles disappear before
	// 0 ;*       they reach air radar display edge.
	// 0 ;*
	// 0 ;* if range <= 4000ft then
	// 0 ;*    check abs(ang diff) <= 90degs
	// 0 ;* else
	// 0 ;*    check abs(ang diff) <= 60degs
	// 0 ;* endif
	/* mov	bp,85		;60degs (assume not close range) */
	bp = 85;
	/* cmp	WORD PTR [di].ARAD_RNG_HI,0	;range > 65535? */
	CMP(*((dw*)raddr(ds,di+arad_rng_hi)), 0);
	/* ja	@F				;yes -> */
	if ((dw)(*((dw*)raddr(ds,di+arad_rng_hi))) > (dw)(0)) {goto dummylabel81;}
	/* cmp	WORD PTR [di].ARAD_RNG_LO,4000	;range <= 4000? */
	CMP(*((dw*)raddr(ds,di+arad_rng_lo)), 4000);
	/* ja	@F		  	    	;no -> */
	if ((dw)(*((dw*)raddr(ds,di+arad_rng_lo))) > (dw)(4000)) {goto dummylabel81;}
	/* mov	bp,128		;90degs (close range) */
	bp = 128;
dummylabel81:
	// 4887 
	/* @@:		cmp	ax,bp		;abs(ang diff) <= cone angle? */
	CMP(ax, bp);
	/* jbe	__m2c_macrolocal_103_skip */
	if ((dw)(ax) <= (dw)(bp)) {goto __m2c_macrolocal_103_skip;}
	/* jmp	ExitTrack */
	goto exittrack;
__m2c_macrolocal_103_skip:
	// 4889 
	// 0 ;no ->
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	TmpAngDiff,ax */
	tmpangdiff = ax;
	// 0 ;--------------------------------------------
	// 0 ;* check mobile in air radar cone (elevation)
	// 0 ;--------------------------------------------
	// 0 ;* calc abs(z err)
	/* mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	dx,WORD PTR [si].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* sub	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&m_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&m_view+vp_zft_hi)));
	/* mov	WORD PTR TmpZErr,ax */
	*(dw*)(&tmpzerr) = ax;
	/* mov	WORD PTR TmpZErr+2,dx */
	*(dw*)(((db*)&tmpzerr)+2) = dx;
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel82;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel82:
	// 4891 
	/* @@:		push	ax		;store abs(z err) */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* scale down range and abs(z err) < 32768
	/* mov	bx,WORD PTR [di].ARAD_RNG_LO */
	bx = m2c::getdata(*((dw*)raddr(ds,di+arad_rng_lo)));
	/* mov	cx,WORD PTR [di].ARAD_RNG_HI */
	cx = m2c::getdata(*((dw*)raddr(ds,di+arad_rng_hi)));
	/* xor	bp,bp		;scale count = 0 */
	XOR(bp, bp);
dummylabel83:
	// 4893 
	/* @@:		test	cx,cx		;range > 65535? */
	TEST(cx, cx);
	/* jz	@F		;no -> */
	if (!(cx & cx)) {goto dummylabel84;}
	/* shr	cx,1		;range / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* shr	dx,1		;abs(z err) / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* inc	bp		;inc scale count */
	INC(bp);
	/* jmp	@B */
	goto dummylabel83;
dummylabel84:
	// 4895 
	/* @@:		cmp	bx,32768	;range < 32768? */
	CMP(bx, 32768);
	/* jb	@F		;yes -> */
	if ((dw)(bx) < (dw)(32768)) {goto dummylabel85;}
	/* shr	bx,1		;range / 2 */
	SHR(bx, 1);
	/* shr	dx,1		;abs(z err) / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* inc	bp		;inc scale count */
	INC(bp);
dummylabel85:
	// 4897 
	/* @@:		test	dx,dx		;abs(z err) > 65535? */
	TEST(dx, dx);
	/* jz	@F		;no -> */
	if (!(dx & dx)) {goto dummylabel86;}
	/* shr	bx,1		;range / 2 */
	SHR(bx, 1);
	/* shr	dx,1		;abs(z err) / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* inc	bp		;inc scale count */
	INC(bp);
	/* jmp	@B */
	goto dummylabel85;
dummylabel86:
	// 4899 
	/* @@:		cmp	ax,32768	;abs(z err) < 32768? */
	CMP(ax, 32768);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(32768)) {goto dummylabel87;}
	/* shr	bx,1		;range / 2 */
	SHR(bx, 1);
	/* shr	ax,1		;abs(z err) / 2 */
	SHR(ax, 1);
	/* inc	bp		;inc scale count */
	INC(bp);
	// 0 ;* ax = scaled abs(z err)
	// 0 ;* bx = scaled range
dummylabel87:
	// 4901 
	/* @@:		mov	TmpScaledRng,bx */
	tmpscaledrng = bx;
	/* mov	TmpScaledCnt,bp */
	tmpscaledcnt = bp;
	// 0 ;* expand pointed end of cone (else close range mobiles always disappear)
	/* pop	dx		;restore abs(z err) (unscaled) */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* test	dx,dx		;abs(z err) > 65535ft? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel88;}
	/* cmp	cx,1000		;abs(z err) <= 1000ft? */
	CMP(cx, 1000);
	/* jbe	SkipConeElev	;yes -> */
	if ((dw)(cx) <= (dw)(1000)) {goto skipconeelev;}
	// 0 ;* select abs(z err)
	// 0 ;* case = range
	// 0 ;*    pitch = 45
	// 0 ;* case < range
	// 0 ;*    pitch = arctan(abs(z err) / range)
	// 0 ;* case > range
	// 0 ;*    pitch = 90 - arctan(range / abs(z err))
	// 0 ;* endselect
dummylabel88:
	// 4903 
	/* @@:		cmp	ax,bx		;abs(z err) = range? */
	CMP(ax, bx);
	/* jne	@F		;no -> */
	if ((dw)(ax) != (dw)(bx)) {goto dummylabel89;}
	/* mov	ax,64*128	;45 degs */
	ax = 64*128;
	/* jmp	ContConeElev */
	goto contconeelev;
dummylabel89:
	// 4905 
	/* @@:		ja	@F		;abs(z err) > range -> */
	if ((!CF && !ZF)) {goto dummylabel90;}
	// 0 ;* pitch = arctan(abs(z err) / range)
	/* mov	dx,ax */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;/2 for bin frac result */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
	/* call	FastArcTan */
	CALLF(fastarctan, 0);
	/* jmp	ContConeElev */
	goto contconeelev;
	// 0 ;* pitch = 128 - arctan(range / abs(z err))
dummylabel90:
	// 4907 
	/* @@:		mov	dx,bx */
	dx = bx;
	/* mov	bx,ax */
	bx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;/2 for bin frac result */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
	/* call	FastArcTan */
	CALLF(fastarctan, 0);
	/* mov	dx,128*128 */
	dx = 128*128;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
contconeelev:
	// 4909 
	/* ContConeElev:	cmp	WORD PTR TmpZErr+2,0	;neg pitch? */
	CMP(*(dw*)(((db*)&tmpzerr)+2), 0);
	/* jge	@F			;no -> */
	if ((short)(*(dw*)(((db*)&tmpzerr)+2)) >= (short)(0)) {goto dummylabel91;}
	/* neg	ax */
	NEG(ax);
	// 0 ;* check in cone
dummylabel91:
	// 4911 
	/* @@:		mov	dx,PFine */
	dx = pfine;
	/* add	dx,64*128	;pitch + 45degs */
	ADD(dx, 64*128);
	/* cmp	ax,dx		;in cone? */
	CMP(ax, dx);
	/* jle	__m2c_macrolocal_105_skip */
	if ((short)(ax) <= (short)(dx)) {goto __m2c_macrolocal_105_skip;}
	/* jmp	ExitTrack */
	goto exittrack;
__m2c_macrolocal_105_skip:
	// 4913 
	// 0 ;no ->
	/* sub	dx,128*128	;pitch - 45degs */
	SUB(dx, 128*128);
	/* cmp	ax,dx		;in cone? */
	CMP(ax, dx);
	/* jge	__m2c_macrolocal_106_skip */
	if ((short)(ax) >= (short)(dx)) {goto __m2c_macrolocal_106_skip;}
	/* jmp	ExitTrack */
	goto exittrack;
__m2c_macrolocal_106_skip:
	// 4915 
	// 0 ;no ->
	// 0 ;--------------------
	// 0 ;* radar shadow check
	// 0 ;--------------------
skipconeelev:
	// 4917 
	/* SkipConeElev:	push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	ShadowCheck */
	CALL(shadowcheck, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* jnc	__m2c_macrolocal_107_skip */
	if (!CF) {goto __m2c_macrolocal_107_skip;}
	/* jmp	ExitTrack */
	goto exittrack;
__m2c_macrolocal_107_skip:
	// 4919 
	// 0 ;non-visible (in radar shadow) ->
	// 0 ;------------------
	// 0 ;* calc crt co-ords
	// 0 ;------------------
	// 0 ;* x = range * sin(ang diff)
	// 0 ;* y = range * cos(ang diff)
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	bx,TmpAngDiff */
	bx = tmpangdiff;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6632 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6633 mov	di,CosTable[bx] */
	/* mov	ax,TmpScaledRng */
	ax = tmpscaledrng;
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
	// 0 ;y = range * cos(ang diff)
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,TmpScaledRng */
	ax = tmpscaledrng;
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
	// 0 ;x = range * sin(ang diff)
	/* cwd */
	CWD;
	// 0 ;* scale up x and y
	/* mov	bp,TmpScaledCnt */
	bp = tmpscaledcnt;
	/* test	bp,bp		;scale up? */
	TEST(bp, bp);
	/* jz	XYScaleOk	;no -> */
	if (!(bp & bp)) {goto xyscaleok;}
dummylabel92:
	// 4921 
	/* @@:		shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* dec	bp */
	DEC(bp);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel92;}
	// 0 ;* convert x and y to crt co-ords
xyscaleok:
	// 4923 
	/* XYScaleOK:	pop	di */
	POP(di);
	/* mov	si,AirRadarRng */
	si = airradarrng;
	/* mov	bp,XDivVals[si] */
	bp = *(dw*)(((db*)&xdivvals)+si);
	/* idiv	bp */
	IDIV2(bp);
	/* mov	bp,YDivVals[si] */
	bp = *(dw*)(((db*)&ydivvals)+si);
	/* pop	si */
	POP(si);
	/* cmp	ax,-32		;x in range? */
	CMP(ax, -32);
	/* jl	ExitTrack	;no -> */
	if ((short)(ax) < (short)(-32)) {goto exittrack;}
	/* cmp	ax,31		;x in range? */
	CMP(ax, 31);
	/* jg	ExitTrack	;no -> */
	if ((short)(ax) > (short)(31)) {goto exittrack;}
	/* add	ax,32 */
	ADD(ax, 32);
	/* mov	[di].ARAD_XCRT,ax */
	m2c::setdata(&(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_xcrt))), m2c::getdata(ax));
	/* mov	dx,cx */
	dx = cx;
	/* mov	ax,bx */
	ax = bx;
	/* idiv	bp */
	IDIV2(bp);
	/* cmp	ax,47		;y in range? */
	CMP(ax, 47);
	/* jg	ExitTrack	;no -> */
	if ((short)(ax) > (short)(47)) {goto exittrack;}
	/* mov	dx,47		;flip orientation */
	dx = 47;
	/* sub	dx,ax */
	SUB(dx, ax);
	/* mov	[di].ARAD_YCRT,dx */
	m2c::setdata(&(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_ycrt))), m2c::getdata(dx));
	// 0 ;-----------------
	// 0 ;* next track data
	// 0 ;-----------------
	/* add	AirRadarPtr,ARAD_REC_SIZE */
	ADD(airradarptr, 12);
	/* inc	NumRadarTracks */
	INC(numradartracks);
exittrack:
	// 4925 
	/* ExitTrack:	ret */
	RETN(0);
shadowcheck:
	// 6709 
	// 0 ;-------------------------------
	// 0 ;* quick radar visibility checks
	// 0 ;-------------------------------
	// 0 ;* target always visible if Tornado altitude > 65535ft
edummylabel31:
	// 4927 
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0	;alt > 65535ft? */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_111_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_111_skip;}
	/* jmp	RadarVis */
	goto radarvis;
__m2c_macrolocal_111_skip:
	// 4929 
	// 0 ;yes ->
	// 0 ;* target always visible if target altitude > 65535ft
	/* cmp	WORD PTR [si].VP_ZFT_HI,0	;alt > 65535ft? */
	CMP(*((dw*)raddr(ds,si+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_112_skip */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_112_skip;}
	/* jmp	RadarVis */
	goto radarvis;
__m2c_macrolocal_112_skip:
	// 4931 
	// 0 ;yes ->
	// 0 ;-------------------------
	// 0 ;* copy M_VIEW to TMP_VIEW
	// 0 ;-------------------------
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 6737 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 6738 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 6739 mov	di,OFFSET TMP_VIEW */
	// 6740 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	// 0 ;------------------------------
	// 0 ;* select shadow test wrt range
	// 0 ;------------------------------
	/* cmp	WORD PTR [di].ARAD_RNG_HI,0	;range > 65535ft? */
	CMP(*((dw*)raddr(ds,di+arad_rng_hi)), 0);
	/* jbe	__m2c_macrolocal_114_skip */
	if ((dw)(*((dw*)raddr(ds,di+arad_rng_hi))) <= (dw)(0)) {goto __m2c_macrolocal_114_skip;}
	/* jmp	LongRangeCheck */
	goto longrangecheck;
__m2c_macrolocal_114_skip:
	// 4933 
	// 0 ;yes ->
	/* cmp	WORD PTR [di].ARAD_RNG_LO,8191	;range > 8191ft? */
	CMP(*((dw*)raddr(ds,di+arad_rng_lo)), 8191);
	/* ja	MedRangeCheck			;yes -> */
	if ((dw)(*((dw*)raddr(ds,di+arad_rng_lo))) > (dw)(8191)) {goto medrangecheck;}
	// 0 ;---------------------------
shortrangecheck:
	// 4935 
	// 0 ;short range shadow check
	// 0 ;---------------------------
	// 0 ;* calc Dz = z error / 8
	/* mov	ax,WORD PTR TmpZErr */
	ax = *(dw*)(&tmpzerr);
	/* mov	dx,WORD PTR TmpZErr+2 */
	dx = *(dw*)(((db*)&tmpzerr)+2);
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
	/* mov	WORD PTR TmpDz,ax */
	*(dw*)(&tmpdz) = ax;
	/* mov	WORD PTR TmpDz+2,dx */
	*(dw*)(((db*)&tmpdz)+2) = dx;
	// 0 ;* calc sample dist (Dx / 8, Dy / 8)
	/* mov	ax,WORD PTR FlatDx */
	ax = *(dw*)(&flatdx);
	/* mov	dx,WORD PTR FlatDx+2 */
	dx = *(dw*)(((db*)&flatdx)+2);
	/* mov	bx,WORD PTR FlatDy */
	bx = *(dw*)(&flatdy);
	/* mov	cx,WORD PTR FlatDy+2 */
	cx = *(dw*)(((db*)&flatdy)+2);
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
	/* mov	bp,7		;loop count */
	bp = 7;
	/* jmp	ContShadow */
	goto contshadow;
	// 0 ;---------------------------
medrangecheck:
	// 4937 
	// 0 ;medium range shadow check
	// 0 ;---------------------------
	// 0 ;* calc Dz = z error / 16
	/* mov	ax,WORD PTR TmpZErr */
	ax = *(dw*)(&tmpzerr);
	/* mov	dx,WORD PTR TmpZErr+2 */
	dx = *(dw*)(((db*)&tmpzerr)+2);
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
	/* mov	WORD PTR TmpDz,ax */
	*(dw*)(&tmpdz) = ax;
	/* mov	WORD PTR TmpDz+2,dx */
	*(dw*)(((db*)&tmpdz)+2) = dx;
	// 0 ;* calc sample dist (Dx / 16, Dy / 16)
	/* mov	ax,WORD PTR FlatDx */
	ax = *(dw*)(&flatdx);
	/* mov	dx,WORD PTR FlatDx+2 */
	dx = *(dw*)(((db*)&flatdx)+2);
	/* mov	bx,WORD PTR FlatDy */
	bx = *(dw*)(&flatdy);
	/* mov	cx,WORD PTR FlatDy+2 */
	cx = *(dw*)(((db*)&flatdy)+2);
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
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* mov	bp,15		;loop count */
	bp = 15;
	/* jmp	ContShadow */
	goto contshadow;
	// 0 ;---------------------------
longrangecheck:
	// 4939 
	// 0 ;long range shadow check
	// 0 ;---------------------------
	// 0 ;* calc Dz = z error / 32
	/* mov	ax,WORD PTR TmpZErr */
	ax = *(dw*)(&tmpzerr);
	/* mov	dx,WORD PTR TmpZErr+2 */
	dx = *(dw*)(((db*)&tmpzerr)+2);
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
	/* mov	WORD PTR TmpDz,ax */
	*(dw*)(&tmpdz) = ax;
	/* mov	WORD PTR TmpDz+2,dx */
	*(dw*)(((db*)&tmpdz)+2) = dx;
	// 0 ;* calc sample dist (Dx / 32, Dy / 32)
	/* mov	ax,WORD PTR FlatDx */
	ax = *(dw*)(&flatdx);
	/* mov	dx,WORD PTR FlatDx+2 */
	dx = *(dw*)(((db*)&flatdx)+2);
	/* mov	bx,WORD PTR FlatDy */
	bx = *(dw*)(&flatdy);
	/* mov	cx,WORD PTR FlatDy+2 */
	cx = *(dw*)(((db*)&flatdy)+2);
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
	/* mov	bp,31		;loop count */
	bp = 31;
	// 0 ;-------------------
	// 0 ;* shadow check loop
	// 0 ;-------------------
contshadow:
	// 4941 
	/* ContShadow:	mov	SampleCntr,0 */
	samplecntr = 0;
shadowloop:
	// 4943 
	/* ShadowLoop:	push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	bp */
	PUSH(bp);
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	/* mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* mov	dx,WORD PTR TMP_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&tmp_view+vp_zft_hi));
	/* add	ax,WORD PTR TmpDz */
	ADD(ax, *(dw*)(&tmpdz));
	/* adc	dx,WORD PTR TmpDz+2 */
	ADC(dx, *(dw*)(((db*)&tmpdz)+2));
	/* jns	@F		;above ground -> */
	if ((short)(dx) >= 0) {goto dummylabel93;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel93:
	// 4945 
	/* @@:		mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	// 0 ;* (not expecting zft to exceed 65535, therefore ignore high word)
	/* cmp	ax,256*15	;alt > max gnd ht? */
	CMP(ax, 256*15);
	/* ja	AltOk	 	;yes -> */
	if ((dw)(ax) > (dw)(256*15)) {goto altok;}
	// 0 ;* use fine check on nearer samples (0 .. 15 use fine check)
	/* cmp	SampleCntr,16 	;fine or coarse check? */
	CMP(samplecntr, 16);
	/* jae	@F		;coarse -> */
	if ((dw)(samplecntr) >= (dw)(16)) {goto dummylabel94;}
	/* call	CalcGndHeight	;(fine check) */
	CALLF(calcgndheight, 0);
	/* jmp	CheckAlt */
	goto checkalt;
dummylabel94:
	// 4947 
	/* @@:		call	QCalcGndHeight	;(coarse check) */
	CALLF(qcalcgndheight, 0);
checkalt:
	// 4949 
	/* CheckAlt:	cmp	WORD PTR TMP_VIEW.VP_ZFT_LO,ax	;alt > gnd ht? */
	CMP(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
altok:
	// 4951 
	/* AltOk:		pop	bp */
	POP(bp);
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
	/* inc	SampleCntr	;next test */
	INC(samplecntr);
	/* cmp	SampleCntr,bp 	;loop end? */
	CMP(samplecntr, bp);
	/* jb	ShadowLoop	;no -> */
	if ((dw)(samplecntr) < (dw)(bp)) {goto shadowloop;}
	// 0 ;---------------------------
radarvis:
	// 4953 
	// 0 ;---------------------------
	/* clc			;cf = 0 = visible */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
radarnonvis:
	// 4955 
	// 0 ;---------------------------
	/* stc			;cf = 1 = non-visible */
	STC;
	/* ret */
	RETN(0);
boresight:
	// 6946 
	// 0 ;----------------
	// 0 ;* store viewmode
	// 0 ;----------------
edummylabel32:
	// 4957 
	/* mov	ax,ViewMode */
	ax = viewmode;
	/* mov	bl,ClipWndwYOrg */
	bl = clipwndwyorg;
	/* mov	cx,ClipWndwXOrg */
	cx = clipwndwxorg;
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	// 0 ;--------------
	// 0 ;* set viewmode
	// 0 ;--------------
	/* mov	ax,EXT_VIEWMODE */
	ax = 4;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;----------------------------
	// 0 ;* calc transformation matrix
	// 0 ;----------------------------
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	// 0 ;--------------
	// 0 ;* scan targets
	// 0 ;--------------
	// 0 ;* init bore sight error to worst case
	/* mov	WORD PTR BoreSightError,0ffffh */
	*(dw*)(&boresighterror) = 0x0ffff;
	/* mov	WORD PTR BoreSightError+2,0ffffh */
	*(dw*)(((db*)&boresighterror)+2) = 0x0ffff;
	// 0 ;* init loop vars
	/* mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
targetloop:
	// 4959 
	/* TargetLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	si,[si].ARAD_PTR	;si -> MOBILE + VIEWPOINT */
	si = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	// 0 ;* designate enemy targets only
	/* cmp	_DRONE_SIDE[si],ENEMY */
	CMP(((drone_data*)raddr(ds,(6+18)+si))->drone_side, 2);
	/* jne	NextTarget */
	if ((db)(((drone_data*)raddr(ds,(6+18)+si))->drone_side) != (db)(2)) {goto nexttarget;}
	// 0 ;* calc unclipped CRT co-ords of target
	/* add	si,MOB_REC_SIZE		;si -> VIEWPOINT */
	ADD(si, 6);
	/* call	CalcTgtRelCo */
	CALLF(calctgtrelco, 0);
	/* jc	NextTarget	;error -> */
	if (CF) {goto nexttarget;}
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
	/* jc	NextTarget	;error -> */
	if (CF) {goto nexttarget;}
	// 0 ;* offset wrt screen centre
	/* sub	cx,320/2 */
	SUB(cx, 320/2);
	/* sub	bx,192/2 */
	SUB(bx, 192/2);
	// 0 ;* calc error = sum of squares (x crt * x crt + y crt * y crt)
	/* mov	ax,cx */
	ax = cx;
	/* imul	ax		;x crt * x crt */
	IMUL1_2(ax);
	/* mov	cx,dx */
	cx = dx;
	/* xchg	bx,ax */
	XCHG(bx, ax);
	/* imul	ax		;y crt * y crt */
	IMUL1_2(ax);
	/* add	ax,bx		;sum of squares */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	// 0 ;* if error < previous error then designate target
	/* cmp	dx,WORD PTR BoreSightError+2 */
	CMP(dx, *(dw*)(((db*)&boresighterror)+2));
	/* ja	NextTarget */
	if ((dw)(dx) > (dw)(*(dw*)(((db*)&boresighterror)+2))) {goto nexttarget;}
	/* jb	@F */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&boresighterror)+2))) {goto dummylabel95;}
	/* cmp	ax,WORD PTR BoreSightError */
	CMP(ax, *(dw*)(&boresighterror));
	/* jae	NextTarget */
	if ((dw)(ax) >= (dw)(*(dw*)(&boresighterror))) {goto nexttarget;}
dummylabel95:
	// 4961 
	/* @@:		mov	WORD PTR BoreSightError,ax */
	*(dw*)(&boresighterror) = ax;
	/* mov	WORD PTR BoreSightError+2,dx */
	*(dw*)(((db*)&boresighterror)+2) = dx;
	/* pop	si */
	POP(si);
	/* mov	ax,[si].ARAD_PTR */
	ax = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* mov	AirTgtPtr,ax */
	airtgtptr = ax;
	/* push	si */
	PUSH(si);
nexttarget:
	// 4963 
	/* NextTarget:	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* loop	TargetLoop */
	LOOP(targetloop);
	// 0 ;------------------
	// 0 ;* restore viewmode
	// 0 ;------------------
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
cycletargets:
	// 7049 
	// 0 ;* check > 1 target
edummylabel33:
	// 4965 
	/* cmp	NumRadarTracks,1 */
	CMP(numradartracks, 1);
	/* jbe	ExitCycle */
	if ((dw)(numradartracks) <= (dw)(1)) {goto exitcycle;}
	// 0 ;* calc list end ptr
	/* mov	ax,NumRadarTracks */
	ax = numradartracks;
	/* mov	dx,ARAD_REC_SIZE */
	dx = 12;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	bp,OFFSET AirRadarTracks */
	bp = m2c::near_offset_external(airradartracks);
	/* add	bp,ax */
	ADD(bp, ax);
	// 0 ;* init loop vars
	/* mov	ax,AirTgtPtr */
	ax = airtgtptr;
	/* mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
	// 0 ;* search for current designation
dummylabel96:
	// 4967 
	/* @@:		cmp	ax,[si].ARAD_PTR */
	CMP(ax, *((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* je	@F */
	if ((dw)(ax) == (dw)(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)))) {goto dummylabel97;}
	/* add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* loop	@B */
	LOOP(dummylabel96);
	/* jmp	ExitCycle	;(should never happen) */
	goto exitcycle;
	// 0 ;* found current designation, cycle to next enemy target (with wrap around)
dummylabel97:
	// 4969 
	/* @@:		add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* cmp	si,bp		;end of list? */
	CMP(si, bp);
	/* jb	@F		;no -> */
	if ((dw)(si) < (dw)(bp)) {goto dummylabel98;}
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
dummylabel98:
	// 4971 
	/* @@:		mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* dec	cx */
	DEC(cx);
cycleloop:
	// 4973 
	/* CycleLoop:	mov	di,[si].ARAD_PTR */
	di = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* cmp	_DRONE_SIDE[di],ENEMY */
	CMP(((drone_data*)raddr(ds,(6+18)+di))->drone_side, 2);
	/* je	CycleOk */
	if ((db)(((drone_data*)raddr(ds,(6+18)+di))->drone_side) == (db)(2)) {goto cycleok;}
	/* add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* cmp	si,bp */
	CMP(si, bp);
	/* jb	@F */
	if ((dw)(si) < (dw)(bp)) {goto dummylabel99;}
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
dummylabel99:
	// 4975 
	/* @@:		loop	CycleLoop */
	LOOP(cycleloop);
	/* jmp	ExitCycle */
	goto exitcycle;
cycleok:
	// 4977 
	/* CycleOk:	mov	AirTgtPtr,di */
	airtgtptr = di;
exitcycle:
	// 4979 
	/* ExitCycle:	ret */
	RETN(0);
updaterwr:
	// 7106 
	// 0 ;------------
	// 0 ;* initialize
	// 0 ;------------
edummylabel34:
	// 4981 
	/* mov	ax,NumRWRThreats */
	ax = numrwrthreats;
	/* mov	OldRWRThreats,ax */
	oldrwrthreats = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	NumRWRThreats,ax */
	numrwrthreats = ax;
	/* mov	ActiveSAMCntr,ax */
	activesamcntr = ax;
	/* mov	RWRThreatIndex,ax */
	rwrthreatindex = ax;
	/* mov	RWRThreatFlags,al */
	rwrthreatflags = al;
	// 0 ;-----------------------------------
	// 0 ;* scan for EWR, SAM and AAA threats
	// 0 ;-----------------------------------
	/* call	ScanEWR */
	CALL(scanewr, 0);
	/* call	ScanSAM */
	CALL(scansam, 0);
	/* call	ScanAAA */
	CALL(scanaaa, 0);
	// 0 ;----------------------
	// 0 ;* check if RWR damaged
	// 0 ;----------------------
	/* test	SSF_RWR,1 */
	TEST(ssf_rwr, 1);
	/* jnz	ExitRWR */
	if ((ssf_rwr & 1) != 0) {goto exitrwr;}
	// 0 ;-----------------------------
	// 0 ;* scan for AC and MSL threats
	// 0 ;-----------------------------
	/* call	ScanAC */
	CALL(scanac, 0);
	/* call	ScanMSL */
	CALL(scanmsl, 0);
	// 0 ;-----------------------------
	// 0 ;* sound alert if more threats
	// 0 ;-----------------------------
	/* mov	ax,OldRWRThreats */
	ax = oldrwrthreats;
	/* cmp	ax,NumRWRThreats */
	CMP(ax, numrwrthreats);
	/* jae	ExitRWR */
	if ((dw)(ax) >= (dw)(numrwrthreats)) {goto exitrwr;}
	/* call	RWRAlertSound */
	CALLF(rwralertsound, 0);
exitrwr:
	// 4983 
	/* ExitRWR:	ret */
	RETN(0);
scanewr:
	// 7157 
	// 0 ;--------------------------------------------
	// 0 ;* check space available in RWR threat buffer
	// 0 ;--------------------------------------------
edummylabel35:
	// 4985 
	/* cmp	NumRWRThreats,NUM_RWR_THREATS */
	CMP(numrwrthreats, 16);
	/* jne	__m2c_macrolocal_115_skip */
	if ((dw)(numrwrthreats) != (dw)(16)) {goto __m2c_macrolocal_115_skip;}
	/* jmp	ExitEWR */
	goto exitewr;
__m2c_macrolocal_115_skip:
	// 4987 
	// 0 ;------------------------
	// 0 ;* check if on active map
	// 0 ;------------------------
	/* cmp	ModelMapIndex,-1 */
	CMP(modelmapindex, -1);
	/* jne	__m2c_macrolocal_116_skip */
	if ((dw)(modelmapindex) != (dw)(-1)) {goto __m2c_macrolocal_116_skip;}
	/* jmp	ExitEWR */
	goto exitewr;
__m2c_macrolocal_116_skip:
	// 4989 
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	// 0 ;------------------------------------
	// 0 ;* check if enemy EWR cover in sector (enemy EWR floor > 0)
	// 0 ;------------------------------------
	/* mov	al,EWRFloorLayer1[bp] */
	al = *((&ewrfloorlayer1)+bp);
	/* and	ax,E_EWR_FLOOR */
	AND(ax, 0xf);
	/* jnz	__m2c_macrolocal_117_skip */
	if (ax != 0) {goto __m2c_macrolocal_117_skip;}
	/* jmp	ExitEWR */
	goto exitewr;
__m2c_macrolocal_117_skip:
	// 4991 
	// 0 ;--------------------------
	// 0 ;* check if above EWR floor
	// 0 ;--------------------------
	/* xchg	al,ah		;floor * 256ft */
	XCHG(al, ah);
	/* cmp	ZftHi,0 */
	CMP(zfthi, 0);
	/* ja	@F */
	if ((dw)(zfthi) > (dw)(0)) {goto dummylabel100;}
	/* cmp	ZftLo,ax */
	CMP(zftlo, ax);
	/* ja	@F */
	if ((dw)(zftlo) > (dw)(ax)) {goto dummylabel100;}
	/* jmp	ExitEWR */
	goto exitewr;
	// 0 ;--------------------------
	// 0 ;* sort ground / mobile EWR
	// 0 ;--------------------------
dummylabel100:
	// 4993 
	/* @@:		mov	al,SctrGameLayer1[bp] */
	al = *((&sctrgamelayer1)+bp);
	/* and	al,SECT_EWR_NUM */
	AND(al, 0xf);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;*4 */
	SHL(bx, 1);
	/* add	bx,ax		;*6 */
	ADD(bx, ax);
	/* mov	si,EWRTable[bx].EWR_PTR */
	si = m2c::getdata(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_ptr)));
	/* cmp	EWRTable[bx].EWR_TYPE,EWR_GROUND */
	CMP(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_type)), 0);
	/* jne	SortMobileEWR */
	if ((dw)(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_type))) != (dw)(0)) {goto sortmobileewr;}
	// 0 ;---------------------------
sortgroundewr:
	// 4995 
	// 0 ;---------------------------
	/* mov	ax,SEG SectorDataStart */
	ax = m2c::segment_of_external(sectordatastart);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* check EWR in play
	/* test	[si].GND_ANIM,OBJECT_DEAD */
	TEST(*((db*)((db*)&((gndobj*)raddr(ds,si))->gnd_anim)), 0x80);
	/* jnz	EWRDead */
	if ((*((db*)((db*)&((gndobj*)raddr(ds,si))->gnd_anim)) & 0x80) != 0) {goto ewrdead;}
	// 0 ;* sort EWR viewpoint xft, yft
	/* mov	ch,[si].GND_XGRID */
	ch = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(ds,si))->gnd_xgrid)));
	/* xor	cl,cl */
	XOR(cl, cl);
	/* sub	cx,8192 */
	SUB(cx, 8192);
	/* mov	dh,[si].GND_YGRID */
	dh = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(ds,si))->gnd_ygrid)));
	/* xor	dl,dl */
	XOR(dl, dl);
	/* sub	dx,8192 */
	SUB(dx, 8192);
	/* jmp	EWROk */
	goto ewrok;
	// 0 ;---------------------------
sortmobileewr:
	// 4997 
	// 0 ;---------------------------
	/* mov	ax,SEG MSctrDataStart */
	ax = m2c::segment_of_external(msctrdatastart);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* check EWR in play
	/* test	[si].STAT_ANIM,OBJECT_DEAD */
	TEST(*((db*)((db*)&((statmob*)raddr(ds,si))->stat_anim)), 0x80);
	/* jnz	EWRDead */
	if ((*((db*)((db*)&((statmob*)raddr(ds,si))->stat_anim)) & 0x80) != 0) {goto ewrdead;}
	// 0 ;* sort EWR viewpoint xft, yft
	/* mov	cx,[si].STAT_XFT */
	cx = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_xft)));
	/* mov	dx,[si].STAT_YFT */
	dx = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_yft)));
	/* jmp	EWROk */
	goto ewrok;
	// 0 ;---------------------------
ewrdead:
	// 4999 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* jmp	ExitEWR */
	goto exitewr;
	// 0 ;---------------------------
ewrok:
	// 5001 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	RWR_VIEW.VP_XFT,cx */
	rwr_view.vp_xft = cx;
	/* mov	RWR_VIEW.VP_YFT,dx */
	rwr_view.vp_yft = dx;
	// 0 ;---------------------
	// 0 ;* sort EWR xsec, ysec
	// 0 ;---------------------
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	al,EWRTable[bx].EWR_XSEC */
	al = m2c::getdata(*((db*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_xsec)));
	/* mov	RWR_VIEW.VP_XSEC,ax */
	rwr_view.vp_xsec = ax;
	/* mov	al,EWRTable[bx].EWR_YSEC */
	al = m2c::getdata(*((db*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_ysec)));
	/* mov	RWR_VIEW.VP_YSEC,ax */
	rwr_view.vp_ysec = ax;
	// 0 ;----------------------------
	// 0 ;* calc EWR range and bearing
	// 0 ;----------------------------
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET RWR_VIEW */
	di = m2c::near_offset_external(rwr_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;----------------------------------
	// 0 ;* enter EWR into RWR threat buffer
	// 0 ;----------------------------------
	/* mov	bp,RWRThreatIndex */
	bp = rwrthreatindex;
	/* mov	RWRThreats[bp].RWR_THREAT,THREAT_EWR */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))), m2c::getdata(4));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_lo))), m2c::getdata(ax));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_HI,dx */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_hi))), m2c::getdata(dx));
	// 0 ;* calc angular difference
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	RWRThreats[bp].RWR_DIR,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_dir))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XSEC */
	ax = rwr_view.vp_xsec;
	/* mov	RWRThreats[bp].RWR_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YSEC */
	ax = rwr_view.vp_ysec;
	/* mov	RWRThreats[bp].RWR_YSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XFT */
	ax = rwr_view.vp_xft;
	/* mov	RWRThreats[bp].RWR_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YFT */
	ax = rwr_view.vp_yft;
	/* mov	RWRThreats[bp].RWR_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft))), m2c::getdata(ax));
	/* mov	RWRThreats[bp].RWR_PTR,-1 */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr))), m2c::getdata(-1));
	/* inc	NumRWRThreats */
	INC(numrwrthreats);
	/* add	RWRThreatIndex,RWR_REC_SIZE */
	ADD(rwrthreatindex, sizeof(rwr));
	/* or	RWRThreatFlags,RWR_EWR */
	OR(rwrthreatflags, 0x4);
exitewr:
	// 5003 
	/* ExitEWR:	ret */
	RETN(0);
scansam:
	// 7313 
	// 0 ;---------------
	// 0 ;* y sector scan
	// 0 ;---------------
edummylabel36:
	// 5005 
	/* mov	cx,3 */
	cx = 3;
	/* mov	di,-1 */
	di = -1;
samyloop:
	// 5007 
	/* SAMYLoop:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;---------------
	// 0 ;* x sector scan
	// 0 ;---------------
	/* mov	cx,3 */
	cx = 3;
	/* mov	si,-1 */
	si = -1;
samxloop:
	// 5009 
	/* SAMXLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;-------------
	// 0 ;* scan sector (if on active map)
	// 0 ;-------------
	/* mov	ax,XSec */
	ax = xsec;
	/* mov	bp,YSec */
	bp = ysec;
	/* add	ax,si */
	ADD(ax, si);
	/* add	bp,di */
	ADD(bp, di);
	/* cmp	ax,31 */
	CMP(ax, 31);
	/* jbe	__m2c_macrolocal_119_skip */
	if ((dw)(ax) <= (dw)(31)) {goto __m2c_macrolocal_119_skip;}
	/* jmp	SAMNextSctr */
	goto samnextsctr;
__m2c_macrolocal_119_skip:
	// 5011 
	/* cmp	bp,31 */
	CMP(bp, 31);
	/* jbe	__m2c_macrolocal_120_skip */
	if ((dw)(bp) <= (dw)(31)) {goto __m2c_macrolocal_120_skip;}
	/* jmp	SAMNextSctr */
	goto samnextsctr;
__m2c_macrolocal_120_skip:
	// 5013 
	// 0 ;----------------
	// 0 ;* set xsec, ysec (valid for all radars in sector)
	// 0 ;----------------
	/* mov	RWR_VIEW.VP_XSEC,ax */
	rwr_view.vp_xsec = ax;
	/* mov	RWR_VIEW.VP_YSEC,bp */
	rwr_view.vp_ysec = bp;
	// 0 ;------------------------------
	// 0 ;* map index = ysec * 32 + xsec
	// 0 ;------------------------------
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
	// 0 ;-------------------------------
	// 0 ;* check for enemy SAM in sector
	// 0 ;-------------------------------
	/* test	SctrGameLayer1[bp],SECT_ENEMY */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jnz	__m2c_macrolocal_121_skip */
	if ((*((&sctrgamelayer1)+bp) & 0x80) != 0) {goto __m2c_macrolocal_121_skip;}
	/* jmp	SAMNextSctr */
	goto samnextsctr;
__m2c_macrolocal_121_skip:
	// 5015 
	/* test	SctrGameLayer1[bp],SECT_SAM */
	TEST(*((&sctrgamelayer1)+bp), 0x40);
	/* jnz	__m2c_macrolocal_122_skip */
	if ((*((&sctrgamelayer1)+bp) & 0x40) != 0) {goto __m2c_macrolocal_122_skip;}
	/* jmp	SAMNextSctr */
	goto samnextsctr;
__m2c_macrolocal_122_skip:
	// 5017 
	/* mov	al,MobRadarLayer1[bp] */
	al = *((&mobradarlayer1)+bp);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bp,ax */
	bp = ax;
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	// 0 ;---------------
	// 0 ;* scan SAM list
	// 0 ;---------------
	/* cmp	RadarTable[bp].RAD_SAM_OFFSET,-1 */
	CMP(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_sam_offset)), -1);
	/* jne	__m2c_macrolocal_124_skip */
	if ((dw)(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_sam_offset))) != (dw)(-1)) {goto __m2c_macrolocal_124_skip;}
	/* jmp	SAMNextSctr */
	goto samnextsctr;
__m2c_macrolocal_124_skip:
	// 5019 
	/* mov	bp,RadarTable[bp].RAD_SAM_OFFSET */
	bp = m2c::getdata(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_sam_offset)));
scansamloop:
	// 5021 
	/* ScanSAMLoop:	cmp	RadarLists[bp],-1 	;end of list? */
	CMP(*(dw*)(((db*)&radarlists)+bp), -1);
	/* jne	__m2c_macrolocal_125_skip */
	if ((dw)(*(dw*)(((db*)&radarlists)+bp)) != (dw)(-1)) {goto __m2c_macrolocal_125_skip;}
	/* jmp	SAMNextSctr */
	goto samnextsctr;
__m2c_macrolocal_125_skip:
	// 5023 
	// 0 ;yes ->
	/* mov	dx,SEG MSctrDataStart */
	dx = m2c::segment_of_external(msctrdatastart);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* mov	si,RadarLists[bp] */
	si = *(dw*)(((db*)&radarlists)+bp);
	/* mov	al,[si].STAT_ANIM */
	al = m2c::getdata(*((db*)((db*)&((statmob*)raddr(ds,si))->stat_anim)));
	/* mov	cx,[si].STAT_XFT */
	cx = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_xft)));
	/* mov	bx,[si].STAT_YFT */
	bx = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_yft)));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* test	al,OBJECT_DEAD	;in play? */
	TEST(al, 0x80);
	/* jnz	SkipSAM		;no -> */
	if ((al & 0x80) != 0) {goto skipsam;}
	// 0 ;-------------------
	// 0 ;* enemy SAM located
	// 0 ;-------------------
	/* mov	RWR_VIEW.VP_XFT,cx */
	rwr_view.vp_xft = cx;
	/* mov	RWR_VIEW.VP_YFT,bx */
	rwr_view.vp_yft = bx;
	/* push	si */
	PUSH(si);
	/* push	bp */
	PUSH(bp);
	/* call	RadShadCheck */
	CALL(radshadcheck, 0);
	/* pop	bp */
	POP(bp);
	/* pop	si */
	POP(si);
	/* jc	SkipSAM		;non-visible (in shadow) -> */
	if (CF) {goto skipsam;}
	// 0 ;----------------------------------
	// 0 ;* enter SAM into RWR threat buffer (if space available)
	// 0 ;----------------------------------
	/* cmp	NumRWRThreats,NUM_RWR_THREATS */
	CMP(numrwrthreats, 16);
	/* je	SkipSAM */
	if ((dw)(numrwrthreats) == (dw)(16)) {goto skipsam;}
	/* push	bp */
	PUSH(bp);
	/* mov	bp,RWRThreatIndex */
	bp = rwrthreatindex;
	/* mov	RWRThreats[bp].RWR_THREAT,THREAT_SAM */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))), m2c::getdata(0));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_lo))), m2c::getdata(ax));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_HI,dx */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_hi))), m2c::getdata(dx));
	// 0 ;* calc angular difference
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	RWRThreats[bp].RWR_DIR,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_dir))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XSEC */
	ax = rwr_view.vp_xsec;
	/* mov	RWRThreats[bp].RWR_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YSEC */
	ax = rwr_view.vp_ysec;
	/* mov	RWRThreats[bp].RWR_YSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XFT */
	ax = rwr_view.vp_xft;
	/* mov	RWRThreats[bp].RWR_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YFT */
	ax = rwr_view.vp_yft;
	/* mov	RWRThreats[bp].RWR_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft))), m2c::getdata(ax));
	/* mov	RWRThreats[bp].RWR_PTR,si */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr))), m2c::getdata(si));
	/* inc	NumRWRThreats */
	INC(numrwrthreats);
	/* inc	ActiveSAMCntr */
	INC(activesamcntr);
	/* add	RWRThreatIndex,RWR_REC_SIZE */
	ADD(rwrthreatindex, sizeof(rwr));
	/* or	RWRThreatFlags,RWR_SAM */
	OR(rwrthreatflags, 0x10);
	/* pop	bp */
	POP(bp);
skipsam:
	// 5025 
	/* SkipSAM:	add	bp,2 */
	ADD(bp, 2);
	/* jmp	ScanSAMLoop */
	goto scansamloop;
	// 0 ;-------------
	// 0 ;* next sector
	// 0 ;-------------
samnextsctr:
	// 5027 
	/* SAMNextSctr:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* inc	si		;x = x + 1 */
	INC(si);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_126_skip */
	if (cx == 0) {goto __m2c_macrolocal_126_skip;}
	/* jmp	SAMXLoop */
	goto samxloop;
__m2c_macrolocal_126_skip:
	// 5029 
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* inc	di		;y = y + 1 */
	INC(di);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_127_skip */
	if (cx == 0) {goto __m2c_macrolocal_127_skip;}
	/* jmp	SAMYLoop */
	goto samyloop;
__m2c_macrolocal_127_skip:
	// 5031 
	/* ret */
	RETN(0);
scanaaa:
	// 7483 
	// 0 ;---------------
	// 0 ;* y sector scan
	// 0 ;---------------
edummylabel37:
	// 5033 
	/* mov	cx,3 */
	cx = 3;
	/* mov	di,-1 */
	di = -1;
aaayloop:
	// 5035 
	/* AAAYLoop:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;---------------
	// 0 ;* x sector scan
	// 0 ;---------------
	/* mov	cx,3 */
	cx = 3;
	/* mov	si,-1 */
	si = -1;
aaaxloop:
	// 5037 
	/* AAAXLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;-------------
	// 0 ;* scan sector (if on active map)
	// 0 ;-------------
	/* mov	ax,XSec */
	ax = xsec;
	/* mov	bp,YSec */
	bp = ysec;
	/* add	ax,si */
	ADD(ax, si);
	/* add	bp,di */
	ADD(bp, di);
	/* cmp	ax,31 */
	CMP(ax, 31);
	/* jbe	__m2c_macrolocal_128_skip */
	if ((dw)(ax) <= (dw)(31)) {goto __m2c_macrolocal_128_skip;}
	/* jmp	AAANextSctr */
	goto aaanextsctr;
__m2c_macrolocal_128_skip:
	// 5039 
	/* cmp	bp,31 */
	CMP(bp, 31);
	/* jbe	__m2c_macrolocal_129_skip */
	if ((dw)(bp) <= (dw)(31)) {goto __m2c_macrolocal_129_skip;}
	/* jmp	AAANextSctr */
	goto aaanextsctr;
__m2c_macrolocal_129_skip:
	// 5041 
	// 0 ;----------------
	// 0 ;* set xsec, ysec (valid for all radars in sector)
	// 0 ;----------------
	/* mov	RWR_VIEW.VP_XSEC,ax */
	rwr_view.vp_xsec = ax;
	/* mov	RWR_VIEW.VP_YSEC,bp */
	rwr_view.vp_ysec = bp;
	// 0 ;------------------------------
	// 0 ;* map index = ysec * 32 + xsec
	// 0 ;------------------------------
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
	// 0 ;-------------------------------
	// 0 ;* check for enemy AAA in sector
	// 0 ;-------------------------------
	/* test	SctrGameLayer1[bp],SECT_ENEMY */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jnz	__m2c_macrolocal_130_skip */
	if ((*((&sctrgamelayer1)+bp) & 0x80) != 0) {goto __m2c_macrolocal_130_skip;}
	/* jmp	AAANextSctr */
	goto aaanextsctr;
__m2c_macrolocal_130_skip:
	// 5043 
	/* test	SctrGameLayer1[bp],SECT_AAA */
	TEST(*((&sctrgamelayer1)+bp), 0x20);
	/* jnz	__m2c_macrolocal_131_skip */
	if ((*((&sctrgamelayer1)+bp) & 0x20) != 0) {goto __m2c_macrolocal_131_skip;}
	/* jmp	AAANextSctr */
	goto aaanextsctr;
__m2c_macrolocal_131_skip:
	// 5045 
	/* mov	al,MobRadarLayer1[bp] */
	al = *((&mobradarlayer1)+bp);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bp,ax */
	bp = ax;
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	// 0 ;---------------
	// 0 ;* scan AAA list
	// 0 ;---------------
	/* cmp	RadarTable[bp].RAD_AAA_OFFSET,-1 */
	CMP(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_aaa_offset)), -1);
	/* jne	__m2c_macrolocal_133_skip */
	if ((dw)(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_aaa_offset))) != (dw)(-1)) {goto __m2c_macrolocal_133_skip;}
	/* jmp	AAANextSctr */
	goto aaanextsctr;
__m2c_macrolocal_133_skip:
	// 5047 
	/* mov	bp,RadarTable[bp].RAD_AAA_OFFSET */
	bp = m2c::getdata(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_aaa_offset)));
scanaaaloop:
	// 5049 
	/* ScanAAALoop:	cmp	RadarLists[bp],-1 	;end of list? */
	CMP(*(dw*)(((db*)&radarlists)+bp), -1);
	/* jne	__m2c_macrolocal_134_skip */
	if ((dw)(*(dw*)(((db*)&radarlists)+bp)) != (dw)(-1)) {goto __m2c_macrolocal_134_skip;}
	/* jmp	AAANextSctr */
	goto aaanextsctr;
__m2c_macrolocal_134_skip:
	// 5051 
	// 0 ;yes ->
	/* mov	dx,SEG MSctrDataStart */
	dx = m2c::segment_of_external(msctrdatastart);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* mov	si,RadarLists[bp] */
	si = *(dw*)(((db*)&radarlists)+bp);
	/* mov	al,[si].STAT_ANIM */
	al = m2c::getdata(*((db*)((db*)&((statmob*)raddr(ds,si))->stat_anim)));
	/* mov	cx,[si].STAT_XFT */
	cx = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_xft)));
	/* mov	bx,[si].STAT_YFT */
	bx = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_yft)));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* test	al,OBJECT_DEAD	;in play? */
	TEST(al, 0x80);
	/* jnz	SkipAAA		;no -> */
	if ((al & 0x80) != 0) {goto skipaaa;}
	// 0 ;-------------------
	// 0 ;* enemy AAA located
	// 0 ;-------------------
	/* mov	RWR_VIEW.VP_XFT,cx */
	rwr_view.vp_xft = cx;
	/* mov	RWR_VIEW.VP_YFT,bx */
	rwr_view.vp_yft = bx;
	/* push	si */
	PUSH(si);
	/* push	bp */
	PUSH(bp);
	/* call	RadShadCheck */
	CALL(radshadcheck, 0);
	/* pop	bp */
	POP(bp);
	/* pop	si */
	POP(si);
	/* jc	SkipAAA		;non-visible (in shadow) -> */
	if (CF) {goto skipaaa;}
	// 0 ;----------------------------------
	// 0 ;* enter AAA into RWR threat buffer (if space available)
	// 0 ;----------------------------------
	/* cmp	NumRWRThreats,NUM_RWR_THREATS */
	CMP(numrwrthreats, 16);
	/* je	SkipAAA */
	if ((dw)(numrwrthreats) == (dw)(16)) {goto skipaaa;}
	/* push	bp */
	PUSH(bp);
	/* mov	bp,RWRThreatIndex */
	bp = rwrthreatindex;
	/* mov	RWRThreats[bp].RWR_THREAT,THREAT_AAA */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))), m2c::getdata(2));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_lo))), m2c::getdata(ax));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_HI,dx */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_hi))), m2c::getdata(dx));
	// 0 ;* calc angular difference
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	RWRThreats[bp].RWR_DIR,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_dir))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XSEC */
	ax = rwr_view.vp_xsec;
	/* mov	RWRThreats[bp].RWR_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YSEC */
	ax = rwr_view.vp_ysec;
	/* mov	RWRThreats[bp].RWR_YSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XFT */
	ax = rwr_view.vp_xft;
	/* mov	RWRThreats[bp].RWR_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YFT */
	ax = rwr_view.vp_yft;
	/* mov	RWRThreats[bp].RWR_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft))), m2c::getdata(ax));
	/* mov	RWRThreats[bp].RWR_PTR,si */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr))), m2c::getdata(si));
	/* inc	NumRWRThreats */
	INC(numrwrthreats);
	/* add	RWRThreatIndex,RWR_REC_SIZE */
	ADD(rwrthreatindex, sizeof(rwr));
	/* or	RWRThreatFlags,RWR_AAA */
	OR(rwrthreatflags, 0x8);
	/* pop	bp */
	POP(bp);
skipaaa:
	// 5053 
	/* SkipAAA:	add	bp,2 */
	ADD(bp, 2);
	/* jmp	ScanAAALoop */
	goto scanaaaloop;
	// 0 ;-------------
	// 0 ;* next sector
	// 0 ;-------------
aaanextsctr:
	// 5055 
	/* AAANextSctr:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* inc	si		;x = x + 1 */
	INC(si);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_135_skip */
	if (cx == 0) {goto __m2c_macrolocal_135_skip;}
	/* jmp	AAAXLoop */
	goto aaaxloop;
__m2c_macrolocal_135_skip:
	// 5057 
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* inc	di		;y = y + 1 */
	INC(di);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_136_skip */
	if (cx == 0) {goto __m2c_macrolocal_136_skip;}
	/* jmp	AAAYLoop */
	goto aaayloop;
__m2c_macrolocal_136_skip:
	// 5059 
	/* ret */
	RETN(0);
scanac:
	// 7652 
	// 0 ;--------------------------
	// 0 ;* sort two player opponent
	// 0 ;--------------------------
edummylabel38:
	// 5061 
	/* mov	si,OFFSET OPP_MOBILE */
	si = m2c::near_offset_external(opp_mobile);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel101;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel101;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
	// 0 ;---------------------
	// 0 ;* scan enemy aircraft
	// 0 ;---------------------
dummylabel101:
	// 5063 
	/* @@:		mov	si,OFFSET EAircraft7 */
	si = m2c::near_offset_external(eaircraft7);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel102;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel102;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
dummylabel102:
	// 5065 
	/* @@:		mov	si,OFFSET EAircraft8 */
	si = m2c::near_offset_external(eaircraft8);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel103;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel103;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
dummylabel103:
	// 5067 
	/* @@:		mov	si,OFFSET EAircraft9 */
	si = m2c::near_offset_external(eaircraft9);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel104;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel104;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
dummylabel104:
	// 5069 
	/* @@:		mov	si,OFFSET EAircraft10 */
	si = m2c::near_offset_external(eaircraft10);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel105;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel105;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
dummylabel105:
	// 5071 
	/* @@:		mov	si,OFFSET EAircraft11 */
	si = m2c::near_offset_external(eaircraft11);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel106;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel106;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
dummylabel106:
	// 5073 
	/* @@:		mov	si,OFFSET EAircraft12 */
	si = m2c::near_offset_external(eaircraft12);
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel107;}
	/* call	GetDroneIllum */
	CALLF(getdroneillum, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel107;}
	/* call	AircraftRadar */
	CALL(aircraftradar, 0);
dummylabel107:
	// 5075 
	/* @@:		ret */
	RETN(0);
aircraftradar:
	// 7713 
	// 0 ;-----------------------
	// 0 ;* check space available
	// 0 ;-----------------------
edummylabel39:
	// 5077 
	/* cmp	NumRWRThreats,NUM_RWR_THREATS */
	CMP(numrwrthreats, 16);
	/* je	ExitACRadar */
	if ((dw)(numrwrthreats) == (dw)(16)) {goto exitacradar;}
	// 0 ;------------------------
	// 0 ;* calc range and bearing
	// 0 ;------------------------
	/* push	si */
	PUSH(si);
	/* mov	di,si */
	di = si;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* add	di,MOB_REC_SIZE */
	ADD(di, 6);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* pop	si */
	POP(si);
	// 0 ;---------------------------------------
	// 0 ;* enter aircraft into RWR threat buffer
	// 0 ;---------------------------------------
	/* mov	bp,RWRThreatIndex */
	bp = rwrthreatindex;
	/* mov	RWRThreats[bp].RWR_THREAT,THREAT_AC */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))), m2c::getdata(6));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_lo))), m2c::getdata(ax));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_HI,dx */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_hi))), m2c::getdata(dx));
	// 0 ;* calc angular difference
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	RWRThreats[bp].RWR_DIR,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_dir))), m2c::getdata(ax));
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	RWRThreats[bp].RWR_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec))), m2c::getdata(ax));
	/* mov	ax,[si].VP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* mov	RWRThreats[bp].RWR_YSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec))), m2c::getdata(ax));
	/* mov	ax,[si].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	RWRThreats[bp].RWR_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft))), m2c::getdata(ax));
	/* mov	ax,[si].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	RWRThreats[bp].RWR_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft))), m2c::getdata(ax));
	/* mov	RWRThreats[bp].RWR_PTR,-1 */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr))), m2c::getdata(-1));
	/* inc	NumRWRThreats */
	INC(numrwrthreats);
	/* add	RWRThreatIndex,RWR_REC_SIZE */
	ADD(rwrthreatindex, sizeof(rwr));
	/* or	RWRThreatFlags,RWR_AC */
	OR(rwrthreatflags, 0x2);
exitacradar:
	// 5079 
	/* ExitACRadar:	ret */
	RETN(0);
scanmsl:
	// 7769 
	// 0 ;------------------------
	// 0 ;* init missile scan loop
	// 0 ;------------------------
edummylabel40:
	// 5081 
	/* mov	cx,NUM_WEAPONS */
	cx = 128;
	/* mov	ax,SEG WeaponList */
	ax = m2c::segment_of_external(weaponlist);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	si,OFFSET WeaponList */
	si = m2c::near_offset_external(weaponlist);
	// 0 ;-------------------
	// 0 ;* missile scan loop (loop optimized to reduce segment switching)
	// 0 ;-------------------
	// 0 ;* search for non-null weapon which has Tornado lock
missilescan:
	// 5083 
	/* MissileScan:	cmp	_WPN_TYPE[si],NULL_WEAPON */
	CMP(*(db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type, -1);
	/* je	NextWeapon */
	if ((db)(*(db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type) == (db)(-1)) {goto nextweapon;}
	/* test	_WPN_FLAGS[si],WFLG_TLOCK */
	TEST(*(db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_flags, 0x800);
	/* jnz	MissileLocated */
	if ((*(db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_flags & 0x800) != 0) {goto missilelocated;}
nextweapon:
	// 5085 
	/* NextWeapon:	add	si,WPN_DATA_SIZE */
	ADD(si, 6+18+28);
	/* loop	MissileScan */
	LOOP(missilescan);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* ret */
	RETN(0);
	// 0 ;---------------------------
missilelocated:
	// 5087 
	// 0 ;---------------------------
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* mov	bp,_WPN_FLAGS[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_flags)));
	// 0 ;* copy missile viewpoint into workspace
	/* add	si,MOB_REC_SIZE */
	ADD(si, 6);
	/* mov	di,OFFSET RWR_VIEW */
	di = m2c::near_offset_external(rwr_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 7806 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 7807 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	TmpFlags,bp */
	tmpflags = bp;
	// 0 ;--------------------------------------------
	// 0 ;* check space available in RWR threat buffer
	// 0 ;--------------------------------------------
	/* cmp	NumRWRThreats,NUM_RWR_THREATS */
	CMP(numrwrthreats, 16);
	/* je	SkipMissile */
	if ((dw)(numrwrthreats) == (dw)(16)) {goto skipmissile;}
	// 0 ;------------------------
	// 0 ;* calc range and bearing
	// 0 ;------------------------
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET RWR_VIEW */
	di = m2c::near_offset_external(rwr_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;--------------------------------------
	// 0 ;* enter missile into RWR threat buffer
	// 0 ;--------------------------------------
	/* mov	bp,RWRThreatIndex */
	bp = rwrthreatindex;
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_lo))), m2c::getdata(ax));
	/* mov	WORD PTR RWRThreats[bp].RWR_RNG_HI,dx */
	m2c::setdata(&(*((dw*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp+rwr_rng_hi))), m2c::getdata(dx));
	// 0 ;* calc angular difference
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	RWRThreats[bp].RWR_DIR,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_dir))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XSEC */
	ax = rwr_view.vp_xsec;
	/* mov	RWRThreats[bp].RWR_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YSEC */
	ax = rwr_view.vp_ysec;
	/* mov	RWRThreats[bp].RWR_YSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_XFT */
	ax = rwr_view.vp_xft;
	/* mov	RWRThreats[bp].RWR_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft))), m2c::getdata(ax));
	/* mov	ax,RWR_VIEW.VP_YFT */
	ax = rwr_view.vp_yft;
	/* mov	RWRThreats[bp].RWR_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft))), m2c::getdata(ax));
	/* mov	RWRThreats[bp].RWR_PTR,-1 */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr))), m2c::getdata(-1));
	// 0 ;* sort threat type (radar or IR seeker)
	/* mov	ax,THREAT_RAD_MSL */
	ax = 8;
	/* test	TmpFlags,WFLG_IR_SEEK */
	TEST(tmpflags, 0x100);
	/* jz	@F */
	if (!(tmpflags & 0x100)) {goto dummylabel108;}
	/* mov	ax,THREAT_IR_MSL */
	ax = 10;
dummylabel108:
	// 5089 
	/* @@:		mov	RWRThreats[bp].RWR_THREAT,ax */
	m2c::setdata(&(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))), m2c::getdata(ax));
	/* inc	NumRWRThreats */
	INC(numrwrthreats);
	/* add	RWRThreatIndex,RWR_REC_SIZE */
	ADD(rwrthreatindex, sizeof(rwr));
	/* or	RWRThreatFlags,RWR_MSL */
	OR(rwrthreatflags, 0x1);
skipmissile:
	// 5091 
	/* SkipMissile:	mov	ax,SEG WeaponList */
	ax = m2c::segment_of_external(weaponlist);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* jmp	NextWeapon */
	goto nextweapon;
radshadcheck:
	// 7877 
	// 0 ;---------------------------------
	// 0 ;* calc range and bearing of radar
	// 0 ;---------------------------------
edummylabel41:
	// 5093 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET RWR_VIEW */
	di = m2c::near_offset_external(rwr_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* push	ax		;store range */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	/* push	bx		;store bearing */
	PUSH(bx);
	// 0 ;--------------------------------------
	// 0 ;* always visible if altitude > 65535ft
	// 0 ;--------------------------------------
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* ja	RadVis */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) > (dw)(0)) {goto radvis;}
	// 0 ;-------------------------
	// 0 ;* copy M_VIEW to TMP_VIEW
	// 0 ;-------------------------
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 7902 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 7903 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 7904 mov	di,OFFSET TMP_VIEW */
	// 7905 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;-----------------------------------
	// 0 ;* calc sample dist (Dx / 8, Dy / 8)
	// 0 ;-----------------------------------
	/* mov	ax,WORD PTR FlatDx */
	ax = *(dw*)(&flatdx);
	/* mov	dx,WORD PTR FlatDx+2 */
	dx = *(dw*)(((db*)&flatdx)+2);
	/* mov	bx,WORD PTR FlatDy */
	bx = *(dw*)(&flatdy);
	/* mov	cx,WORD PTR FlatDy+2 */
	cx = *(dw*)(((db*)&flatdy)+2);
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
radshadloop:
	// 5095 
	/* RadShadLoop:	push	ax */
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
	if ((dw)(ax) > (dw)(256*15)) {goto dummylabel109;}
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR TMP_VIEW.VP_ZFT_LO,ax	;alt > gnd ht? */
	CMP(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
dummylabel109:
	// 5097 
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
	/* jbe	RadNonVis    	;alt <= gnd ht -> */
	if ((CF || ZF)) {goto radnonvis;}
	/* dec	bp	    	;next test */
	DEC(bp);
	/* jnz	RadShadLoop */
	if (bp != 0) {goto radshadloop;}
	// 0 ;---------------------------
radvis:
	// 5099 
	// 0 ;---------------------------
	/* pop	bx		;restore bearing */
	POP(bx);
	/* pop	dx		;store range */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* clc			;cf = 0 (visible) */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
radnonvis:
	// 5101 
	// 0 ;---------------------------
	/* pop	bx		;restore bearing */
	POP(bx);
	/* pop	dx		;store range */
	POP(dx);
	/* pop	ax */
	POP(ax);
	/* stc			;cf = 1 (non-visible) */
	STC;
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
                case m2c::k__m2c_macrolocal_101_skip: 	goto __m2c_macrolocal_101_skip;
        case m2c::k__m2c_macrolocal_102_skip: 	goto __m2c_macrolocal_102_skip;
        case m2c::k__m2c_macrolocal_103_skip: 	goto __m2c_macrolocal_103_skip;
        case m2c::k__m2c_macrolocal_105_skip: 	goto __m2c_macrolocal_105_skip;
        case m2c::k__m2c_macrolocal_106_skip: 	goto __m2c_macrolocal_106_skip;
        case m2c::k__m2c_macrolocal_107_skip: 	goto __m2c_macrolocal_107_skip;
        case m2c::k__m2c_macrolocal_111_skip: 	goto __m2c_macrolocal_111_skip;
        case m2c::k__m2c_macrolocal_112_skip: 	goto __m2c_macrolocal_112_skip;
        case m2c::k__m2c_macrolocal_114_skip: 	goto __m2c_macrolocal_114_skip;
        case m2c::k__m2c_macrolocal_115_skip: 	goto __m2c_macrolocal_115_skip;
        case m2c::k__m2c_macrolocal_116_skip: 	goto __m2c_macrolocal_116_skip;
        case m2c::k__m2c_macrolocal_117_skip: 	goto __m2c_macrolocal_117_skip;
        case m2c::k__m2c_macrolocal_119_skip: 	goto __m2c_macrolocal_119_skip;
        case m2c::k__m2c_macrolocal_120_skip: 	goto __m2c_macrolocal_120_skip;
        case m2c::k__m2c_macrolocal_121_skip: 	goto __m2c_macrolocal_121_skip;
        case m2c::k__m2c_macrolocal_122_skip: 	goto __m2c_macrolocal_122_skip;
        case m2c::k__m2c_macrolocal_124_skip: 	goto __m2c_macrolocal_124_skip;
        case m2c::k__m2c_macrolocal_125_skip: 	goto __m2c_macrolocal_125_skip;
        case m2c::k__m2c_macrolocal_126_skip: 	goto __m2c_macrolocal_126_skip;
        case m2c::k__m2c_macrolocal_127_skip: 	goto __m2c_macrolocal_127_skip;
        case m2c::k__m2c_macrolocal_128_skip: 	goto __m2c_macrolocal_128_skip;
        case m2c::k__m2c_macrolocal_129_skip: 	goto __m2c_macrolocal_129_skip;
        case m2c::k__m2c_macrolocal_130_skip: 	goto __m2c_macrolocal_130_skip;
        case m2c::k__m2c_macrolocal_131_skip: 	goto __m2c_macrolocal_131_skip;
        case m2c::k__m2c_macrolocal_133_skip: 	goto __m2c_macrolocal_133_skip;
        case m2c::k__m2c_macrolocal_134_skip: 	goto __m2c_macrolocal_134_skip;
        case m2c::k__m2c_macrolocal_135_skip: 	goto __m2c_macrolocal_135_skip;
        case m2c::k__m2c_macrolocal_136_skip: 	goto __m2c_macrolocal_136_skip;
        case m2c::k__m2c_macrolocal_16_testhi: 	goto __m2c_macrolocal_16_testhi;
        case m2c::k__m2c_macrolocal_16_testok: 	goto __m2c_macrolocal_16_testok;
        case m2c::k__m2c_macrolocal_18_skip: 	goto __m2c_macrolocal_18_skip;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_1_testhi: 	goto __m2c_macrolocal_1_testhi;
        case m2c::k__m2c_macrolocal_1_testok: 	goto __m2c_macrolocal_1_testok;
        case m2c::k__m2c_macrolocal_20_testhi: 	goto __m2c_macrolocal_20_testhi;
        case m2c::k__m2c_macrolocal_20_testok: 	goto __m2c_macrolocal_20_testok;
        case m2c::k__m2c_macrolocal_29_skip: 	goto __m2c_macrolocal_29_skip;
        case m2c::k__m2c_macrolocal_30_skip: 	goto __m2c_macrolocal_30_skip;
        case m2c::k__m2c_macrolocal_31_skip: 	goto __m2c_macrolocal_31_skip;
        case m2c::k__m2c_macrolocal_32_skip: 	goto __m2c_macrolocal_32_skip;
        case m2c::k__m2c_macrolocal_33_skip: 	goto __m2c_macrolocal_33_skip;
        case m2c::k__m2c_macrolocal_34_skip: 	goto __m2c_macrolocal_34_skip;
        case m2c::k__m2c_macrolocal_36_skip: 	goto __m2c_macrolocal_36_skip;
        case m2c::k__m2c_macrolocal_37_skip: 	goto __m2c_macrolocal_37_skip;
        case m2c::k__m2c_macrolocal_38_skip: 	goto __m2c_macrolocal_38_skip;
        case m2c::k__m2c_macrolocal_39_skip: 	goto __m2c_macrolocal_39_skip;
        case m2c::k__m2c_macrolocal_43_skip: 	goto __m2c_macrolocal_43_skip;
        case m2c::k__m2c_macrolocal_46_testhi: 	goto __m2c_macrolocal_46_testhi;
        case m2c::k__m2c_macrolocal_46_testok: 	goto __m2c_macrolocal_46_testok;
        case m2c::k__m2c_macrolocal_49_testhi: 	goto __m2c_macrolocal_49_testhi;
        case m2c::k__m2c_macrolocal_49_testok: 	goto __m2c_macrolocal_49_testok;
        case m2c::k__m2c_macrolocal_56_skip: 	goto __m2c_macrolocal_56_skip;
        case m2c::k__m2c_macrolocal_57_skip: 	goto __m2c_macrolocal_57_skip;
        case m2c::k__m2c_macrolocal_58_skip: 	goto __m2c_macrolocal_58_skip;
        case m2c::k__m2c_macrolocal_59_skip: 	goto __m2c_macrolocal_59_skip;
        case m2c::k__m2c_macrolocal_60_skip: 	goto __m2c_macrolocal_60_skip;
        case m2c::k__m2c_macrolocal_61_skip: 	goto __m2c_macrolocal_61_skip;
        case m2c::k__m2c_macrolocal_63_skip: 	goto __m2c_macrolocal_63_skip;
        case m2c::k__m2c_macrolocal_64_skip: 	goto __m2c_macrolocal_64_skip;
        case m2c::k__m2c_macrolocal_68_testhi: 	goto __m2c_macrolocal_68_testhi;
        case m2c::k__m2c_macrolocal_68_testok: 	goto __m2c_macrolocal_68_testok;
        case m2c::k__m2c_macrolocal_6_mvxy1: 	goto __m2c_macrolocal_6_mvxy1;
        case m2c::k__m2c_macrolocal_6_mvxy2: 	goto __m2c_macrolocal_6_mvxy2;
        case m2c::k__m2c_macrolocal_6_mvxy3: 	goto __m2c_macrolocal_6_mvxy3;
        case m2c::k__m2c_macrolocal_6_mvxy4: 	goto __m2c_macrolocal_6_mvxy4;
        case m2c::k__m2c_macrolocal_71_skip: 	goto __m2c_macrolocal_71_skip;
        case m2c::k__m2c_macrolocal_72_skip: 	goto __m2c_macrolocal_72_skip;
        case m2c::k__m2c_macrolocal_73_testhi: 	goto __m2c_macrolocal_73_testhi;
        case m2c::k__m2c_macrolocal_73_testok: 	goto __m2c_macrolocal_73_testok;
        case m2c::k__m2c_macrolocal_74_testhi: 	goto __m2c_macrolocal_74_testhi;
        case m2c::k__m2c_macrolocal_74_testok: 	goto __m2c_macrolocal_74_testok;
        case m2c::k__m2c_macrolocal_75_skip: 	goto __m2c_macrolocal_75_skip;
        case m2c::k__m2c_macrolocal_76_skip: 	goto __m2c_macrolocal_76_skip;
        case m2c::k__m2c_macrolocal_77_skip: 	goto __m2c_macrolocal_77_skip;
        case m2c::k__m2c_macrolocal_78_skip: 	goto __m2c_macrolocal_78_skip;
        case m2c::k__m2c_macrolocal_97_skip: 	goto __m2c_macrolocal_97_skip;
        case m2c::kaaanextsctr: 	goto aaanextsctr;
        case m2c::kaaaxloop: 	goto aaaxloop;
        case m2c::kaaayloop: 	goto aaayloop;
        case m2c::kaaexit1: 	goto aaexit1;
        case m2c::kaaexit2: 	goto aaexit2;
        case m2c::kaaexit3: 	goto aaexit3;
        case m2c::kadcok: 	goto adcok;
        case m2c::kadjusthdg: 	goto adjusthdg;
        case m2c::kadvanceok: 	goto advanceok;
        case m2c::kadvancewp: 	goto advancewp;
        case m2c::kafloop: 	goto afloop;
        case m2c::kahexit1: 	goto ahexit1;
        case m2c::kahexit2: 	goto ahexit2;
        case m2c::kaircraftradar: 	goto aircraftradar;
        case m2c::kairtgtdata: 	goto airtgtdata;
        case m2c::kaltok: 	goto altok;
        case m2c::kappexit1: 	goto appexit1;
        case m2c::kappexit2: 	goto appexit2;
        case m2c::katexit1: 	goto atexit1;
        case m2c::katexit2: 	goto atexit2;
        case m2c::kautoaltitude: 	goto autoaltitude;
        case m2c::kautoapproach: 	goto autoapproach;
        case m2c::kautocancel: 	goto autocancel;
        case m2c::kautoheading: 	goto autoheading;
        case m2c::kautopilot: 	goto autopilot;
        case m2c::kautoroute: 	goto autoroute;
        case m2c::kautothrotok: 	goto autothrotok;
        case m2c::kautothrottle: 	goto autothrottle;
        case m2c::kboresight: 	goto boresight;
        case m2c::kcalcnextwp: 	goto calcnextwp;
        case m2c::kcalcradalt: 	goto calcradalt;
        case m2c::kcalctfrideindex: 	goto calctfrideindex;
        case m2c::kcalcturndist: 	goto calcturndist;
        case m2c::kcalcvfactor: 	goto calcvfactor;
        case m2c::kcalczerror: 	goto calczerror;
        case m2c::kcanceltgtwp: 	goto canceltgtwp;
        case m2c::kcheckalt: 	goto checkalt;
        case m2c::kcheckils: 	goto checkils;
        case m2c::kchecklaststep: 	goto checklaststep;
        case m2c::kclockok: 	goto clockok;
        case m2c::kcontairradar: 	goto contairradar;
        case m2c::kcontautopilot: 	goto contautopilot;
        case m2c::kcontconeelev: 	goto contconeelev;
        case m2c::kcontheading: 	goto contheading;
        case m2c::kcontinhibit: 	goto continhibit;
        case m2c::kcontroute: 	goto controute;
        case m2c::kcontshadow: 	goto contshadow;
        case m2c::kcontsortslope: 	goto contsortslope;
        case m2c::kcontthrottle: 	goto contthrottle;
        case m2c::kconttrack: 	goto conttrack;
        case m2c::kcycleloop: 	goto cycleloop;
        case m2c::kcycleok: 	goto cycleok;
        case m2c::kcycletargets: 	goto cycletargets;
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
        case m2c::kedummylabel39: 	goto edummylabel39;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel40: 	goto edummylabel40;
        case m2c::kedummylabel41: 	goto edummylabel41;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kendscan: 	goto endscan;
        case m2c::kewrdead: 	goto ewrdead;
        case m2c::kewrok: 	goto ewrok;
        case m2c::kexitacradar: 	goto exitacradar;
        case m2c::kexitairradar: 	goto exitairradar;
        case m2c::kexitappprog: 	goto exitappprog;
        case m2c::kexitautopilot: 	goto exitautopilot;
        case m2c::kexitautoroute: 	goto exitautoroute;
        case m2c::kexitcancelwp: 	goto exitcancelwp;
        case m2c::kexitcycle: 	goto exitcycle;
        case m2c::kexitewr: 	goto exitewr;
        case m2c::kexitils: 	goto exitils;
        case m2c::kexitnextwp: 	goto exitnextwp;
        case m2c::kexitrwr: 	goto exitrwr;
        case m2c::kexitselectwp: 	goto exitselectwp;
        case m2c::kexitthrottle: 	goto exitthrottle;
        case m2c::kexittrack: 	goto exittrack;
        case m2c::kexitupdatewp: 	goto exitupdatewp;
        case m2c::kexitwpalt: 	goto exitwpalt;
        case m2c::kfindfirstloop: 	goto findfirstloop;
        case m2c::kfindnextloop: 	goto findnextloop;
        case m2c::kilsfail: 	goto ilsfail;
        case m2c::kilsok: 	goto ilsok;
        case m2c::kinilsbeam: 	goto inilsbeam;
        case m2c::kinitdownslope: 	goto initdownslope;
        case m2c::kinitslope: 	goto initslope;
        case m2c::klongrangecheck: 	goto longrangecheck;
        case m2c::klosttrack: 	goto losttrack;
        case m2c::kmaxrollangle: 	goto maxrollangle;
        case m2c::kmaxthrottle: 	goto maxthrottle;
        case m2c::kmedrangecheck: 	goto medrangecheck;
        case m2c::kminthrottle: 	goto minthrottle;
        case m2c::kmissilelocated: 	goto missilelocated;
        case m2c::kmissilescan: 	goto missilescan;
        case m2c::kmodcode_0_proc: 	goto modcode_0_proc;
        case m2c::knextaf: 	goto nextaf;
        case m2c::knexttarget: 	goto nexttarget;
        case m2c::knextweapon: 	goto nextweapon;
        case m2c::kradarnonvis: 	goto radarnonvis;
        case m2c::kradarok: 	goto radarok;
        case m2c::kradarvis: 	goto radarvis;
        case m2c::kradnonvis: 	goto radnonvis;
        case m2c::kradshadcheck: 	goto radshadcheck;
        case m2c::kradshadloop: 	goto radshadloop;
        case m2c::kradvis: 	goto radvis;
        case m2c::ksamnextsctr: 	goto samnextsctr;
        case m2c::ksamxloop: 	goto samxloop;
        case m2c::ksamyloop: 	goto samyloop;
        case m2c::ksatisfiedwp: 	goto satisfiedwp;
        case m2c::kscanaaa: 	goto scanaaa;
        case m2c::kscanaaaloop: 	goto scanaaaloop;
        case m2c::kscanac: 	goto scanac;
        case m2c::kscanafloop: 	goto scanafloop;
        case m2c::kscanairfields: 	goto scanairfields;
        case m2c::kscanewr: 	goto scanewr;
        case m2c::kscangndheight: 	goto scangndheight;
        case m2c::kscangndhtloop: 	goto scangndhtloop;
        case m2c::kscanmobiles: 	goto scanmobiles;
        case m2c::kscanmsl: 	goto scanmsl;
        case m2c::kscansam: 	goto scansam;
        case m2c::kscansamloop: 	goto scansamloop;
        case m2c::kscanxloop: 	goto scanxloop;
        case m2c::kscanyloop: 	goto scanyloop;
        case m2c::kselectnextwp: 	goto selectnextwp;
        case m2c::kselecttgtwp: 	goto selecttgtwp;
        case m2c::ksetaimhfine: 	goto setaimhfine;
        case m2c::ksetaptimer: 	goto setaptimer;
        case m2c::ksetpitchlimit: 	goto setpitchlimit;
        case m2c::ksettdist: 	goto settdist;
        case m2c::ksettel: 	goto settel;
        case m2c::kshadowcheck: 	goto shadowcheck;
        case m2c::kshadowloop: 	goto shadowloop;
        case m2c::kshortrangecheck: 	goto shortrangecheck;
        case m2c::kskipaaa: 	goto skipaaa;
        case m2c::kskipappinit: 	goto skipappinit;
        case m2c::kskipapproach: 	goto skipapproach;
        case m2c::kskipcancel: 	goto skipcancel;
        case m2c::kskipconeelev: 	goto skipconeelev;
        case m2c::kskiphold: 	goto skiphold;
        case m2c::kskipmissile: 	goto skipmissile;
        case m2c::kskipmobile: 	goto skipmobile;
        case m2c::kskippullup: 	goto skippullup;
        case m2c::kskippushdown: 	goto skippushdown;
        case m2c::kskipreheat: 	goto skipreheat;
        case m2c::kskipsam: 	goto skipsam;
        case m2c::kskipsector: 	goto skipsector;
        case m2c::kskiptfollow: 	goto skiptfollow;
        case m2c::kskiptrack: 	goto skiptrack;
        case m2c::ksortaaprate: 	goto sortaaprate;
        case m2c::ksortdownslope: 	goto sortdownslope;
        case m2c::ksorteapproach: 	goto sorteapproach;
        case m2c::ksortgroundewr: 	goto sortgroundewr;
        case m2c::ksortlink: 	goto sortlink;
        case m2c::ksortmobileewr: 	goto sortmobileewr;
        case m2c::ksortnapproach: 	goto sortnapproach;
        case m2c::ksortpitchrate: 	goto sortpitchrate;
        case m2c::ksortsapproach: 	goto sortsapproach;
        case m2c::ksortslope: 	goto sortslope;
        case m2c::ksortthrust: 	goto sortthrust;
        case m2c::ksortvtrim: 	goto sortvtrim;
        case m2c::ksortwapproach: 	goto sortwapproach;
        case m2c::ksortwpalt: 	goto sortwpalt;
        case m2c::ktargetloop: 	goto targetloop;
        case m2c::ktargetwp: 	goto targetwp;
        case m2c::ktdistov: 	goto tdistov;
        case m2c::kterrainfollow: 	goto terrainfollow;
        case m2c::ktfabove: 	goto tfabove;
        case m2c::ktfcont: 	goto tfcont;
        case m2c::ktfexit1: 	goto tfexit1;
        case m2c::ktfexit2: 	goto tfexit2;
        case m2c::ktfexit3: 	goto tfexit3;
        case m2c::ktfexit4: 	goto tfexit4;
        case m2c::ktfrideloop: 	goto tfrideloop;
        case m2c::ktgtwpok: 	goto tgtwpok;
        case m2c::kthrottleloop: 	goto throttleloop;
        case m2c::ktogglealtmode: 	goto togglealtmode;
        case m2c::ktrackmobile: 	goto trackmobile;
        case m2c::ktrackok: 	goto trackok;
        case m2c::kupdateairradar: 	goto updateairradar;
        case m2c::kupdateappprog: 	goto updateappprog;
        case m2c::kupdateavionics: 	goto updateavionics;
        case m2c::kupdateclock: 	goto updateclock;
        case m2c::kupdateils: 	goto updateils;
        case m2c::kupdatenavsystem: 	goto updatenavsystem;
        case m2c::kupdateradar: 	goto updateradar;
        case m2c::kupdaterwr: 	goto updaterwr;
        case m2c::kupdatetgtwp: 	goto updatetgtwp;
        case m2c::kupdatewpdata: 	goto updatewpdata;
        case m2c::kupdatewpexit: 	goto updatewpexit;
        case m2c::kwpok: 	goto wpok;
        case m2c::kxyscaleok: 	goto xyscaleok;
        default: return __dispatch_call(__disp, _state);
    };
}


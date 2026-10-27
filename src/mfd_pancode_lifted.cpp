/* THIS IS GENERATED FILE */

        
#include "mfd.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
pancode_0_proc:
	// 2941 
updatenavigmfd:
	// 4369 
	// 0 ;* kill: assume all
	/* mov	si,OFFSET NAVIG_MFD */
	si = m2c::near_offset_external(navig_mfd);
	/* jmp	UpdateMFD */
	goto updatemfd;
updatepilotmfd:
	// 4371 
	/* mov	si,OFFSET PILOT_MFD */
	si = m2c::near_offset_external(pilot_mfd);
updatemfd:
	// 2946 
	// 0 ;-----------------
	// 0 ;* set origin vars
	// 0 ;-----------------
	/* mov	ax,MFD_X_ORG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	XOrg,ax */
	xorg = ax;
	/* mov	al,MFD_Y_ORG[si] */
	al = m2c::getdata(((mfd*)raddr(ds,si))->mfd_y_org);
	/* mov	YOrg,al */
	*(yorg) = al;
	// 0 ;---------------------------------
	// 0 ;* set char sprite clipping window
	// 0 ;---------------------------------
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	CellXMin,ax */
	cellxmin = ax;
	/* add	ax,MFD_WIDTH */
	ADD(ax, 64);
	/* dec	ax */
	DEC(ax);
	/* mov	CellXMax,ax */
	cellxmax = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* mov	CellYMin,ax */
	cellymin = ax;
	/* add	ax,MFD_DEPTH */
	ADD(ax, 48);
	/* dec	ax */
	DEC(ax);
	/* mov	CellYMax,ax */
	cellymax = ax;
	// 0 ;-----------------------
	// 0 ;* test for MFD on / off
	// 0 ;-----------------------
	/* mov	al,BYTE PTR KF_MFDToggle[K_STATUS] */
	al = *((&kf_mfdtoggle)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;toggle MFD on / off?
/* m2c-phantom removed: 	R(al = *((&kf_mfdtoggle)+k_status););	// 2977 mov	al,BYTE PTR KF_MFDToggle[K_STATUS] */
	/* jz	@F	      		;no -> */
	if (!(al & al)) {goto dummylabel1;}
	/* xor	MFD_STATUS[si],1	;toggle */
	XOR(((mfd*)raddr(ds,si))->mfd_status, 1);
/* m2c-phantom removed: 	R(*((&kf_mfdselect)+k_status) = 0;);	// 2981 												mov	BYTE PTR KF_MFDSelect[K_STATUS],0 */
	// 0 ;cancel select request
	/* mov	BYTE PTR KF_MFDSelect[K_STATUS],0 */
	*((&kf_mfdselect)+k_status) = 0;
dummylabel1:
	// 4373 
	/* @@:		test	MFD_STATUS[si],1	;MFD on? */
	TEST(((mfd*)raddr(ds,si))->mfd_status, 1);
	/* jnz	__m2c_macrolocal_59_skip */
	if ((((mfd*)raddr(ds,si))->mfd_status & 1) != 0) {goto __m2c_macrolocal_59_skip;}
	/* jmp	SwitchedOff */
	goto switchedoff;
__m2c_macrolocal_59_skip:
	// 4375 
	// 0 ;no ->
	// 0 ;----------------------
	// 0 ;* test for damaged MFD
	// 0 ;----------------------
	/* mov	bx,MFD_SSF_PTR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_ssf_ptr)));
	/* test	BYTE PTR [bx],1		;damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_60_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_60_skip;}
	/* jmp	Damaged */
	goto damaged;
__m2c_macrolocal_60_skip:
	// 4377 
	// 0 ;yes ->
	// 0 ;--------------------------
	// 0 ;* test for select MFD mode
	// 0 ;--------------------------
	/* mov	bx,MFD_MODE[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_mode)));
	// 0 ;* If moving map selected on Nav's MFD, check for confliction with both TAB
	// 0 ;* displays. Do this test here as the MFD may just have been switched on and
	// 0 ;* a conflict may have occurred.
	/* cmp	si,OFFSET NAVIG_MFD	;Nav's MFD? */
	CMP(si, m2c::near_offset_external(navig_mfd));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(navig_mfd))) {goto dummylabel2;}
	/* cmp	bx,MFD_MAP     	;moving map? */
	CMP(bx, 0);
	/* jne	@F	       	;no -> */
	if ((dw)(bx) != (dw)(0)) {goto dummylabel2;}
	/* call	CheckTABMap	;moving map selected on any TAB display? */
	CALL(checktabmap, 0);
	/* jc	SelectNext	;yes -> */
	if (CF) {goto selectnext;}
	// 0 ;@@:
	// 0 ;mov	al,Key[K_SHIFT]
	// 0 ;and	al,Key[K_D]
dummylabel2:
	// 4379 
	/* mov	al,BYTE PTR KF_Full_MFD[K_STATUS] */
	al = *((&kf_full_mfd)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;Added on 10th April 2018
/* m2c-phantom removed: 	R(al = *((&kf_full_mfd)+k_status););	// 3022 mov	al,BYTE PTR KF_Full_MFD[K_STATUS] */
	/* jz Check_MFDSelect */
	if (!(al & al)) {goto check_mfdselect;}
/* m2c-phantom removed: 	R(*((&kf_full_mfd)+k_status) = 0;);	// 3024 												mov	BYTE PTR KF_Full_MFD[K_STATUS],0 */
	/* mov	BYTE PTR KF_Full_MFD[K_STATUS],0 */
	*((&kf_full_mfd)+k_status) = 0;
	/* cmp bx, MFD_FLIR */
	CMP(bx, 10);
	/* je  Check_MFDSelect */
	if ((dw)(bx) == (dw)(10)) {goto check_mfdselect;}
	/* mov bx,MFD_FLIR */
	bx = 10;
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
check_mfdselect:
	// 4381 
	/* mov	al,BYTE PTR KF_MFDSelect[K_STATUS] */
	al = *((&kf_mfdselect)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_mfdselect)+k_status););	// 3033 				        mov	al,BYTE PTR KF_MFDSelect[K_STATUS] */
	/* jz	SortMode */
	if (!(al & al)) {goto sortmode;}
	/* cmp ShiftDwasPressed,1 */
	CMP(shiftdwaspressed, 1);
	/* je	SortMode */
	if ((dw)(shiftdwaspressed) == (dw)(1)) {goto sortmode;}
selectnext:
	// 4383 
	/* SelectNext:	add	bx,2 */
	ADD(bx, 2);
	/* cmp FullScreen,1 */
	CMP(fullscreen, 1);
	/* je JumpOutToHere */
	if ((dw)(fullscreen) == (dw)(1)) {goto jumpouttohere;}
	/* cmp	bx,MFD_FLIR */
	CMP(bx, 10);
	/* jne JumpOutToHere */
	if ((dw)(bx) != (dw)(10)) {goto jumpouttohere;}
	/* add	bx,2 */
	ADD(bx, 2);
jumpouttohere:
	// 4385 
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;* only select moving map if not selected on TAB displays (Nav only)
selectmap:
	// 4387 
	/* SelectMap:	cmp	si,OFFSET NAVIG_MFD	;Nav's MFD? */
	CMP(si, m2c::near_offset_external(navig_mfd));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(navig_mfd))) {goto dummylabel3;}
	/* call	CheckTABMap	;moving map selected on any TAB display? */
	CALL(checktabmap, 0);
	/* jc	SelectNext	;yes -> */
	if (CF) {goto selectnext;}
dummylabel3:
	// 4389 
	/* @@:		jmp	SelectModeOk */
	goto selectmodeok;
	// 0 ;* only select radar mode if radar is on
selectradar:
	// 4391 
	/* SelectRadar:	cmp	RadarMode,NUL_RADAR	;radar on? */
	CMP(radarmode, 0);
	/* je	SelectNext		;no -> */
	if ((dw)(radarmode) == (dw)(0)) {goto selectnext;}
	/* jmp	SelectModeOk */
	goto selectmodeok;
	// 0 ;* only select AFDS if auto-pilot engaged
selectafds:
	// 4393 
	/* SelectAFDS:	cmp	AutoMode,AUTO_OFF	;auto-pilot engaged? */
	CMP(automode, 0);
	/* jne	@F			;yes -> */
	if ((dw)(automode) != (dw)(0)) {goto dummylabel4;}
	/* test	AutoThrot,1	;auto-throttle engaged? */
	TEST(autothrot, 1);
	/* jz	SelectNext 	;no -> */
	if (!(autothrot & 1)) {goto selectnext;}
dummylabel4:
	// 4395 
	/* @@:		jmp	SelectModeOk */
	goto selectmodeok;
	// 0 ;* if Pilot then only select FLIR if night or foggy
selectflir:
	// 4397 
	// 0 ;       cmp	si,OFFSET PILOT_MFD	;Pilot's MFD?
	// 0 ;		jne	@F			;no ->
	// 0 ;
	// 0 ;
	// 0 ;		cmp	Night,0		;night?
	// 0 ;		jne	@F		;yes ->
	// 0 ;
	// 0 ;		cmp	Fog,0		;foggy?
	// 0 ;		je	SelectNext	;no ->
	// 0 ;
	// 0 ;@@:
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je skippyhere */
	if ((dw)(crewmode) == (dw)(0)) {goto skippyhere;}
	/* cmp	NAVIG_MFD.MFD_MODE,MFD_FLIR_ORI	;kbs */
	CMP(navig_mfd.mfd_mode, 8);
	/* je	SelectNext */
	if ((dw)(navig_mfd.mfd_mode) == (dw)(8)) {goto selectnext;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR */
	CMP(tab1.tab_mode, 6);
	/* je	SelectNext */
	if ((dw)(tab1.tab_mode) == (dw)(6)) {goto selectnext;}
skippyhere:
	// 4399 
	/* jmp	SelectModeOk  ;hack frankie */
	goto selectmodeok;
edummylabel1:
	// 4401 
	/* call LoadExtrnPan  ;hacked on 5/11/2017 - calls the info bar (8 pixels) to cover remaining space at bottom */
	CALL(loadextrnpan, 0);
	/* call UpdateExtrn */
	CALL(updateextrn, 0);
	// 0 ;* loop back to first MFD mode
selectloopback:
	// 4403 
	/* SelectLoopBack:	mov	bx,-2 */
	bx = -2;
	/* jmp	SelectNext */
	goto selectnext;
selectmodeok:
	// 4405 
	/* SelectModeOk:	mov	MFD_MODE[si],bx */
	m2c::setdata(&(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_mode))), m2c::getdata(bx));
	// 0 ;-------------------
	// 0 ;* sort display mode
	// 0 ;-------------------
	// 0 ;* note: If auto-pilot display selected and auto-pilot is disengaged then
	// 0 ;*	 leave display selected (ie. do not revert to moving map). This is
	// 0 ;*       so cancellation or error can be confirmed. The auto-pilot display
	// 0 ;*	 will be removed from cycle next time around.
	// 0 ;*
	// 0 ;*       If radar mode and radar off (or damaged) then revert back to moving
	// 0 ;*       map (if possible). The Nav's MFD has to check for confliction with
	// 0 ;*	 the TAB displays. If there is a confliction then revert to the FLIR
	// 0 ;*	 display. The FLIR display is always available on the Nav's MFD.
sortmode:
	// 4407 
	/* SortMode:	cmp	bx,MFD_RADAR	;radar mode? */
	CMP(bx, 2);
	/* jne	SkipRadarCheck	;no -> */
	if ((dw)(bx) != (dw)(2)) {goto skipradarcheck;}
	/* cmp	RadarMode,NUL_RADAR	;radar on? */
	CMP(radarmode, 0);
	/* jne	SkipRadarCheck		;yes -> */
	if ((dw)(radarmode) != (dw)(0)) {goto skipradarcheck;}
	/* mov	bx,MFD_MAP	;revert to map */
	bx = 0;
	// 0 ;* if Nav's MFD then check for confliction with TAB moving map
	/* cmp	si,OFFSET NAVIG_MFD	;Nav's MFD? */
	CMP(si, m2c::near_offset_external(navig_mfd));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(navig_mfd))) {goto dummylabel5;}
	/* call	CheckTABMap	;moving map selected on any TAB display? */
	CALL(checktabmap, 0);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel5;}
	/* mov	bx,MFD_FLIR	;confliction - revert to FLIR */
	bx = 10;
dummylabel5:
	// 4409 
	/* @@:		mov	MFD_MODE[si],bx */
	m2c::setdata(&(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_mode))), m2c::getdata(bx));
	// 0 ;* sort mouse required flag (do this every frame in case MFD auto-switches)
skipradarcheck:
	// 4411 
	/* SkipRadarCheck:	shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,MFDMouseFlags[bx] */
	al = *((&mfdmouseflags)+bx);
	/* mov	MFD_REQ_MOUSE[si],al */
	m2c::setdata(&(((mfd*)raddr(ds,si))->mfd_req_mouse), m2c::getdata(al));
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* cmp	si,OFFSET NAVIG_MFD	;Nav's MFD? */
	CMP(si, m2c::near_offset_external(navig_mfd));
	/* jne	@F			;no -> */
	if ((dw)(si) != (dw)(m2c::near_offset_external(navig_mfd))) {goto dummylabel6;}
	/* test	al,al		;mouse required? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel6;}
	/* call	StealMouse */
	CALL(stealmouse, 0);
dummylabel6:
	// 4413 
	/* @@:		call	DispSwitch[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&dispswitch)+bx));
	/* ret */
	RETN(0);
	// 0 ;------------------
	// 0 ;* MFD switched off
	// 0 ;------------------
switchedoff:
	// 4415 
	/* SwitchedOff:	call	ClearDisp */
	CALL(cleardisp, 0);
	/* ret */
	RETN(0);
	// 0 ;-------------
	// 0 ;* damaged MFD
	// 0 ;-------------
damaged:
	// 4417 
	/* Damaged:	call	DamagedDisp */
	CALL(damageddisp, 0);
	/* ret */
	RETN(0);
checktabmap:
	// 3156 
	/* push	bx ;* kill: ax, flags (except cf) */
	PUSH(bx);
edummylabel2:
	// 4419 
	/* cmp	TAB1.TAB_MODE,TAB_MAP	;map selected? */
	CMP(tab1.tab_mode, 2);
	/* jne	@F			;no -> */
	if ((dw)(tab1.tab_mode) != (dw)(2)) {goto dummylabel7;}
	/* test	TAB1.TAB_STATUS,1	;display on? */
	TEST(tab1.tab_status, 1);
	/* jz	@F			;no -> */
	if (!(tab1.tab_status & 1)) {goto dummylabel7;}
	/* mov	bx,TAB1.TAB_SSF_PTR */
	bx = tab1.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	PassTABMap		;no -> */
	if (!(*(raddr(ds,bx)) & 1)) {goto passtabmap;}
dummylabel7:
	// 4421 
	/* @@:		cmp	TAB2.TAB_MODE,TAB_MAP	;map selected? */
	CMP(tab2.tab_mode, 2);
	/* jne	FailTABMap		;no -> */
	if ((dw)(tab2.tab_mode) != (dw)(2)) {goto failtabmap;}
	/* test	TAB2.TAB_STATUS,1	;display on? */
	TEST(tab2.tab_status, 1);
	/* jz	FailTABMap		;no -> */
	if (!(tab2.tab_status & 1)) {goto failtabmap;}
	/* mov	bx,TAB2.TAB_SSF_PTR */
	bx = tab2.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	FailTABMap		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto failtabmap;}
passtabmap:
	// 4423 
	/* PassTABMap:	pop	bx */
	POP(bx);
	/* stc			;moving map selected */
	STC;
	/* ret */
	RETN(0);
failtabmap:
	// 4425 
	/* FailTABMap:	pop	bx */
	POP(bx);
	/* clc			;moving map not selected */
	CLC;
	/* ret */
	RETN(0);
stealmouse:
	// 3191 
	/* push	bx ;*       Registers bx and si must be preserved. */
	PUSH(bx);
edummylabel3:
	// 4427 
	/* test	NAVIG_MFD.MFD_HAS_MOUSE,1 ;does MFD already have mouse? */
	TEST(navig_mfd.mfd_has_mouse, 1);
	/* jnz	ExitSteal		  ;yes -> */
	if ((navig_mfd.mfd_has_mouse & 1) != 0) {goto exitsteal;}
	// 0 ;-----------------------------------------
	// 0 ;* attempt to steal from TAB1 (lh) display
	// 0 ;-----------------------------------------
	/* test	TAB1.TAB_HAS_MOUSE,1	;does TAB1 have mouse? */
	TEST(tab1.tab_has_mouse, 1);
	/* jz	@F			;no -> */
	if (!(tab1.tab_has_mouse & 1)) {goto dummylabel8;}
	// 0 ;* mouse available if not required by TAB1, or TAB1 is switched off or damaged
	/* mov	al,TAB1.TAB_STATUS */
	al = tab1.tab_status;
	/* and	al,TAB1.TAB_REQ_MOUSE	;required and on? */
	AND(al, tab1.tab_req_mouse);
	/* mov	bx,TAB1.TAB_SSF_PTR */
	bx = tab1.tab_ssf_ptr;
	/* mov	ah,[bx] */
	ah = m2c::getdata(*(raddr(ds,bx)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah		;required and on and not damaged? */
	AND(al, ah);
	/* jz	ContSteal	;no, steal mouse -> */
	if (al == 0) {goto contsteal;}
	/* jmp	ExitSteal */
	goto exitsteal;
	// 0 ;-----------------------------------------
	// 0 ;* attempt to steal from TAB2 (rh) display
	// 0 ;-----------------------------------------
dummylabel8:
	// 4429 
	/* @@:		test	TAB2.TAB_HAS_MOUSE,1	;does TAB2 have mouse? */
	TEST(tab2.tab_has_mouse, 1);
	/* jz	ContSteal		;no -> */
	if (!(tab2.tab_has_mouse & 1)) {goto contsteal;}
	// 0 ;* mouse available if not required by TAB2, or TAB2 is switched off or damaged
	/* mov	al,TAB2.TAB_STATUS */
	al = tab2.tab_status;
	/* and	al,TAB2.TAB_REQ_MOUSE	;required and on? */
	AND(al, tab2.tab_req_mouse);
	/* mov	bx,TAB2.TAB_SSF_PTR */
	bx = tab2.tab_ssf_ptr;
	/* mov	ah,[bx] */
	ah = m2c::getdata(*(raddr(ds,bx)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah		;required and on and not damaged? */
	AND(al, ah);
	/* jz	ContSteal	;no, steal mouse -> */
	if (al == 0) {goto contsteal;}
	/* jmp	ExitSteal */
	goto exitsteal;
	// 0 ;-------------
	// 0 ;* steal mouse
	// 0 ;-------------
contsteal:
	// 4431 
	/* ContSteal:   	mov	NAVIG_MFD.MFD_HAS_MOUSE,1 */
	navig_mfd.mfd_has_mouse = 1;
	/* mov	TAB1.TAB_HAS_MOUSE,0 */
	tab1.tab_has_mouse = 0;
	/* mov	TAB2.TAB_HAS_MOUSE,0 */
	tab2.tab_has_mouse = 0;
exitsteal:
	// 4433 
	/* ExitSteal:	pop	bx */
	POP(bx);
	/* ret */
	RETN(0);
selectradarmfd:
	// 3245 
	/* mov	si,OFFSET PILOT_MFD	;assume pilot */
	si = m2c::near_offset_external(pilot_mfd);
edummylabel4:
	// 4435 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR */
	CMP(tab2.tab_mode, 6);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(6)) {goto dummylabel9;}
	/* jmp Ouches */
	goto ouches;
dummylabel9:
	// 4437 
	/* mov	si,OFFSET NAVIG_MFD */
	si = m2c::near_offset_external(navig_mfd);
	/* mov	NAVIG_MFD.MFD_X_ORG,0 */
	navig_mfd.mfd_x_org = 0;
	/* mov	NAVIG_MFD.MFD_Y_ORG,0 */
	navig_mfd.mfd_y_org = 0;
	/* mov	[si].MFD_MODE,MFD_RADAR */
	m2c::setdata(&(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_mode))), m2c::getdata(2));
	/* ret */
	RETF(0);
ouches:
	// 4439 
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@f */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel10;}
	/* mov	si,OFFSET NAVIG_MFD */
	si = m2c::near_offset_external(navig_mfd);
	/* mov	NAVIG_MFD.MFD_X_ORG,0 */
	navig_mfd.mfd_x_org = 0;
	/* mov	NAVIG_MFD.MFD_Y_ORG,0 */
	navig_mfd.mfd_y_org = 0;
dummylabel10:
	// 4441 
	/* @@:		mov	[si].MFD_MODE,MFD_RADAR */
	m2c::setdata(&(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_mode))), m2c::getdata(2));
	/* ret */
	RETF(0);
selectautomfd:
	// 3273 
	/* mov	si,OFFSET PILOT_MFD	;assume pilot */
	si = m2c::near_offset_external(pilot_mfd);
edummylabel5:
	// 4443 
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@f */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel11;}
	/* mov	si,OFFSET NAVIG_MFD */
	si = m2c::near_offset_external(navig_mfd);
dummylabel11:
	// 4445 
	/* @@:		mov	[si].MFD_MODE,MFD_AUTO_PILOT */
	m2c::setdata(&(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_mode))), m2c::getdata(4));
	/* ret */
	RETF(0);
mapdisp:
	// 3302 
	// 0 ;-----------------
	// 0 ;* update map zoom
	// 0 ;-----------------
edummylabel6:
	// 4447 
	/* call	UpdateMapZoom */
	CALL(updatemapzoom, 0);
	// 0 ;-------------------
	// 0 ;* update map origin
	// 0 ;-------------------
	/* mov	al,BYTE PTR KF_MapOrigin[K_STATUS] */
	al = *((&kf_maporigin)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;map origin toggle?
/* m2c-phantom removed: 	R(al = *((&kf_maporigin)+k_status););	// 3316 mov	al,BYTE PTR KF_MapOrigin[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel12;}
	/* xor	[si].MFD_MAP_ORG,MAP_ORG_BASE */
	XOR(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_map_org)), map_org_base);
	// 0 ;----------
	// 0 ;* draw map
	// 0 ;----------
dummylabel12:
	// 4449 
	/* @@:		mov	ax,MAP_MFD_DISP */
	ax = map_mfd_disp;
	/* mov	cx,[si].MFD_X_ORG */
	cx = m2c::getdata(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	bl,[si].MFD_Y_ORG */
	bl = m2c::getdata(*((db*)((db*)&((mfd*)raddr(ds,si))->mfd_y_org)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	dx,[si].MFD_MAP_ZOOM */
	dx = m2c::getdata(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom)));
	/* mov	bp,[si].MFD_MAP_ORG */
	bp = m2c::getdata(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_map_org)));
	/* push	si */
	PUSH(si);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	UpdateMovingMap */
	CALLF(updatemovingmap, 0);
	/* pop	si */
	POP(si);
	// 0 ;--------------------------
	// 0 ;* display current waypoint
	// 0 ;--------------------------
	/* mov	cx,CurrentWPX */
	cx = currentwpx;
	/* mov	bx,CurrentWPY */
	bx = currentwpy;
	/* cmp	cx,-1		;valid? */
	CMP(cx, -1);
	/* je	@F		;no -> */
	if ((dw)(cx) == (dw)(-1)) {goto dummylabel13;}
	/* cmp	bx,-1		;valid? */
	CMP(bx, -1);
	/* je	@F		;no -> */
	if ((dw)(bx) == (dw)(-1)) {goto dummylabel13;}
	/* push	si */
	PUSH(si);
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bx,WORD PTR YOrg */
	ADD(bx, *(dw*)(yorg));
	/* mov	si,WPPtr */
	si = wpptr;
	/* mov	dl,[si].WP_ID */
	dl = m2c::getdata(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_id)));
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* call	CharSprite */
	CALLF(charsprite, 0);
	/* pop	si */
	POP(si);
	// 0 ;----------------
	// 0 ;* draw hdg datum (wrt origin)
	// 0 ;----------------
dummylabel13:
	// 4451 
	/* @@:		mov	cx,[si].MFD_X_ORG */
	cx = m2c::getdata(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* add	cx,XC */
	ADD(cx, 64/2);
	/* mov	bl,[si].MFD_Y_ORG */
	bl = m2c::getdata(*((db*)((db*)&((mfd*)raddr(ds,si))->mfd_y_org)));
	/* mov	dx,MFD_DEPTH/2	;assume MAP_ORG_BASE */
	dx = 48/2;
	/* cmp	[si].MFD_MAP_ORG,MAP_ORG_BASE	;base origin? */
	CMP(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_map_org)), map_org_base);
	/* je	@F				;yes -> */
	if ((dw)(*((dw*)((db*)&((mfd*)raddr(ds,si))->mfd_map_org))) == (dw)(map_org_base)) {goto dummylabel14;}
	/* mov	dx,MFD_DEPTH/4 */
	dx = 48/4;
dummylabel14:
	// 4453 
	/* @@:		push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,COL_MAP_SYM */
	al = 0;
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
	/* dec	dx */
	DEC(dx);
	/* jnz	@B */
	if (dx != 0) {goto dummylabel14;}
	/* dec	cx */
	DEC(cx);
	/* sub	bl,2 */
	SUB(bl, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
radardisp:
	// 3394 
	/* cmp	RadarMode,GND_RADAR	;ground mapping radar? */
	CMP(radarmode, 2);
edummylabel7:
	// 4455 
	/* jne	@F			;no, must be air radar -> */
	if (!ZF) {goto dummylabel15;}
	/* call	GndMappingRadar */
	CALL(gndmappingradar, 0);
	/* ret */
	RETN(0);
dummylabel15:
	// 4457 
	/* @@:		call	AirRadar */
	CALL(airradar, 0);
	/* ret */
	RETN(0);
gndmappingradar:
	// 3424 
	// 0 ;-------------------------------------
	// 0 ;* test if within operating conditions
	// 0 ;-------------------------------------
edummylabel8:
	// 4459 
	/* mov	al,1		;assume within operating conditions */
	al = 1;
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto dummylabel16;}
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0	;alt > 65535ft? */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* ja	RadarOk			  	;yes -> */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) > (dw)(0)) {goto radarok;}
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,50	;alt > 50ft? */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 50);
	/* ja	RadarOk			  	;yes -> */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) > (dw)(50)) {goto radarok;}
dummylabel16:
	// 4461 
	/* @@:		xor	al,al */
	XOR(al, al);
radarok:
	// 4463 
	/* RadarOk:	mov	GMROk,al */
	gmrok = al;
	// 0 ;------------------
	// 0 ;* read mouse input
	// 0 ;------------------
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	__m2c_macrolocal_65_skip */
	if ((dw)(disableinput) == (dw)(0)) {goto __m2c_macrolocal_65_skip;}
	/* jmp	ContGMRMap */
	goto contgmrmap;
__m2c_macrolocal_65_skip:
	// 4465 
	// 0 ;yes ->
	/* test QuieterCockpit,1 ;in cockpit */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel17;}
	/* jmp JumpOverHereMann */
	goto jumpoverheremann;
dummylabel17:
	// 4467 
	/* test	[si].MFD_HAS_MOUSE,1	;mouse available? */
	TEST(*((db*)((db*)&((mfd*)raddr(ds,si))->mfd_has_mouse)), 1);
	/* jnz	__m2c_macrolocal_66_skip */
	if ((*((db*)((db*)&((mfd*)raddr(ds,si))->mfd_has_mouse)) & 1) != 0) {goto __m2c_macrolocal_66_skip;}
	/* jmp	ContGMRMap */
	goto contgmrmap;
__m2c_macrolocal_66_skip:
	// 4469 
	// 0 ;no ->
jumpoverheremann:
	// 4471 
	/* call	ReadMouseMotion */
	CALLF(readmousemotion, 0);
	// 0 ;* note: al = 1 = lhs button pressed
	// 0 ;*       ah = 1 = rhs button pressed
	// 0 ;*       cx = XMickeys (-32768 .. 32767)
	// 0 ;*       bx = YMickeys (-32768 .. 32767)
	// 0 ;*       dl = 1 = lhs button just pressed
	// 0 ;*       dh = 1 = rhs button just pressed
	// 0 ;--------------------
	// 0 ;* update radar range
	// 0 ;--------------------
	/* test	Key[K_CTRL],1	;update range? */
	TEST(*((&key)+29), 1);
	/* jz	ContGMRDes	;no -> */
	if (!(*((&key)+29) & 1)) {goto contgmrdes;}
	/* test	dl,dl		;zoom in (decrease range)? */
	TEST(dl, dl);
	/* jnz	GMRDecRange	;yes -> */
	if ((dl & dl) != 0) {goto gmrdecrange;}
	/* test	dh,dh		;zoom out (increase range)? */
	TEST(dh, dh);
	/* jnz	GMRIncRange	;yes -> */
	if ((dh & dh) != 0) {goto gmrincrange;}
	/* jmp	GMRRangeOk */
	goto gmrrangeok;
	// 0 ;* zoom in (decrease range)
gmrdecrange:
	// 4473 
	/* GMRDecRange:	cmp	GMRRange,MAP_ZOOM6	;fully zoomed in? Hacked by Frankie */
	CMP(gmrrange, map_zoom6);
	/* je	GMRRangeOk		;yes -> */
	if ((dw)(gmrrange) == (dw)(map_zoom6)) {goto gmrrangeok;}
	/* add	GMRRange,2	;decrease range */
	ADD(gmrrange, 2);
	/* jmp	GMRRangeOk */
	goto gmrrangeok;
	// 0 ;* zoom out (increase range)
gmrincrange:
	// 4475 
	/* GMRIncRange:   	cmp	GMRRange,MAP_ZOOM1	;fully zoomed out? */
	CMP(gmrrange, map_zoom1);
	/* je	GMRRangeOk 	 	;yes -> */
	if ((dw)(gmrrange) == (dw)(map_zoom1)) {goto gmrrangeok;}
	/* sub	GMRRange,2	;increase range */
	SUB(gmrrange, 2);
	// 0 ;* reset mouse buttons
gmrrangeok:
	// 4477 
	/* GMRRangeOk:	xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	// 0 ;------------------------------------------
	// 0 ;* update target designator cursor position
	// 0 ;------------------------------------------
contgmrdes:
	// 4479 
	/* ContGMRDes:	test	GMROk,1		;radar ok? */
	TEST(gmrok, 1);
	/* jnz	__m2c_macrolocal_67_skip */
	if ((gmrok & 1) != 0) {goto __m2c_macrolocal_67_skip;}
	/* jmp	ContGMRMap */
	goto contgmrmap;
__m2c_macrolocal_67_skip:
	// 4481 
	// 0 ;no, skip designation ->
	/* push	dx		;store button status */
	PUSH(dx);
	/* cmp	cx,-127 */
	CMP(cx, -127);
	/* jge	__m2c_macrolocal_68_TestHi */
	if ((short)(cx) >= (short)(-127)) {goto __m2c_macrolocal_68_testhi;}
	/* mov	cx,-127 */
	cx = -127;
	/* jmp	__m2c_macrolocal_68_TestOk */
	goto __m2c_macrolocal_68_testok;
__m2c_macrolocal_68_testhi:
	// 4483 
	/* __m2c_macrolocal_68_TestHi:		cmp	cx,127 */
	CMP(cx, 127);
	/* jle	__m2c_macrolocal_68_TestOk */
	if ((short)(cx) <= (short)(127)) {goto __m2c_macrolocal_68_testok;}
	/* mov	cx,127 */
	cx = 127;
__m2c_macrolocal_68_testok:
	// 4485 
	// 0 ;limit motion
	/* cmp	bx,-127 */
	CMP(bx, -127);
	/* jge	__m2c_macrolocal_69_TestHi */
	if ((short)(bx) >= (short)(-127)) {goto __m2c_macrolocal_69_testhi;}
	/* mov	bx,-127 */
	bx = -127;
	/* jmp	__m2c_macrolocal_69_TestOk */
	goto __m2c_macrolocal_69_testok;
__m2c_macrolocal_69_testhi:
	// 4487 
	/* __m2c_macrolocal_69_TestHi:		cmp	bx,127 */
	CMP(bx, 127);
	/* jle	__m2c_macrolocal_69_TestOk */
	if ((short)(bx) <= (short)(127)) {goto __m2c_macrolocal_69_testok;}
	/* mov	bx,127 */
	bx = 127;
__m2c_macrolocal_69_testok:
	// 4489 
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* add	cx,CrsrXv */
	ADD(cx, crsrxv);
	/* cmp	cx,0 */
	CMP(cx, 0);
	/* jge	__m2c_macrolocal_70_TestHi */
	if ((short)(cx) >= (short)(0)) {goto __m2c_macrolocal_70_testhi;}
	/* mov	cx,0 */
	cx = 0;
	/* jmp	__m2c_macrolocal_70_TestOk */
	goto __m2c_macrolocal_70_testok;
__m2c_macrolocal_70_testhi:
	// 4491 
	/* __m2c_macrolocal_70_TestHi:		cmp	cx,CRSR_XV_MAX-1 */
	CMP(cx, (64*256)-1);
	/* jle	__m2c_macrolocal_70_TestOk */
	if ((short)(cx) <= (short)((64*256)-1)) {goto __m2c_macrolocal_70_testok;}
	/* mov	cx,CRSR_XV_MAX-1 */
	cx = (64*256)-1;
__m2c_macrolocal_70_testok:
	// 4493 
	/* add	bx,CrsrYv */
	ADD(bx, crsryv);
	/* cmp	bx,0 */
	CMP(bx, 0);
	/* jge	__m2c_macrolocal_71_TestHi */
	if ((short)(bx) >= (short)(0)) {goto __m2c_macrolocal_71_testhi;}
	/* mov	bx,0 */
	bx = 0;
	/* jmp	__m2c_macrolocal_71_TestOk */
	goto __m2c_macrolocal_71_testok;
__m2c_macrolocal_71_testhi:
	// 4495 
	/* __m2c_macrolocal_71_TestHi:		cmp	bx,CRSR_YV_MAX-1 */
	CMP(bx, (48*256)-1);
	/* jle	__m2c_macrolocal_71_TestOk */
	if ((short)(bx) <= (short)((48*256)-1)) {goto __m2c_macrolocal_71_testok;}
	/* mov	bx,CRSR_YV_MAX-1 */
	bx = (48*256)-1;
__m2c_macrolocal_71_testok:
	// 4497 
	// 0 ;* keep cursor from straying under mask
	/* cmp	bx,CRSR_YMIN*256	;y >= min y? */
	CMP(bx, 1*256);
	/* jae	@F			;yes -> */
	if ((dw)(bx) >= (dw)(1*256)) {goto dummylabel18;}
	/* mov	bx,CRSR_YMIN*256 */
	bx = 1*256;
dummylabel18:
	// 4499 
	/* @@:		cmp	bx,(CRSR_YMAX*256)+255	;y <= max y? */
	CMP(bx, (46*256)+255);
	/* jbe	@F  			;yes -> */
	if ((dw)(bx) <= (dw)((46*256)+255)) {goto dummylabel19;}
	/* mov	bx,(CRSR_YMAX*256)+255 */
	bx = (46*256)+255;
dummylabel19:
	// 4501 
	/* @@:		mov	al,bh		;calc x limits index */
	al = bh;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	si,ax */
	si = ax;
	/* mov	ah,CrsrXLimits[si+0]	;x left limit */
	ah = *((&crsrxlimits)+si+0);
	/* xor	al,al */
	XOR(al, al);
	/* cmp	cx,ax		;x >= min x? */
	CMP(cx, ax);
	/* jae	@F		;yes -> */
	if ((dw)(cx) >= (dw)(ax)) {goto dummylabel20;}
	/* mov	cx,ax */
	cx = ax;
dummylabel20:
	// 4503 
	/* @@: 		mov	ah,CrsrXLimits[si+1]	;x right limit */
	ah = *((&crsrxlimits)+si+1);
	/* mov	al,255 */
	al = 255;
	/* cmp	cx,ax */
	CMP(cx, ax);
	/* jbe	@F */
	if ((dw)(cx) <= (dw)(ax)) {goto dummylabel21;}
	/* mov	cx,ax */
	cx = ax;
dummylabel21:
	// 4505 
	/* @@:		mov	CrsrXv,cx */
	crsrxv = cx;
	/* mov	CrsrYv,bx */
	crsryv = bx;
	/* pop	dx		;restore button status */
	POP(dx);
	// 0 ;---------------------------
	// 0 ;* test for cancel designate
	// 0 ;---------------------------
	/* test	dh,dh		;rh mouse button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel22;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* jmp	ContGMRMap */
	goto contgmrmap;
	// 0 ;---------------------------
	// 0 ;* test for target designate
	// 0 ;---------------------------
dummylabel22:
	// 4507 
	/* @@:		test	dl,dl		;lh mouse button just pressed? */
	TEST(dl, dl);
	/* jnz	__m2c_macrolocal_72_skip */
	if ((dl & dl) != 0) {goto __m2c_macrolocal_72_skip;}
	/* jmp	ContGMRMap */
	goto contgmrmap;
__m2c_macrolocal_72_skip:
	// 4509 
	// 0 ;no ->
	// 0 ;* make working copy of aircraft viewpoint
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3598 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 3599 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 3600 mov	di,OFFSET TMP_VIEW */
	// 3601 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* x radar = ((CrsrXv AND 0ff00h) - CRSR_XV_MAX / 2) * 0.8 (aspect ratio correction)
	/* mov	ax,CrsrXv */
	ax = crsrxv;
	/* and	ax,0ff00h	;round to pixel */
	AND(ax, 0x0ff00);
	/* sub	ax,(CRSR_XV_MAX/2) */
	SUB(ax, (64*256)/2);
	/* mov	dx,26214	;aspect ratio correction (x * 0.8) */
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
	/* mov	si,dx */
	si = dx;
	// 0 ;x radar
	// 0 ;* y radar = CRSR_YV_MAX - 1 - (CrsrYv and 0ff00h) - 256 (y adjust)
	// 0 ;*
	// 0 ;* Note: "y adjust" value is required to compensate for display y centre
	// 0 ;*        differences between co-ordinate systems.
	/* mov	di,(CRSR_YV_MAX-1) */
	di = (48*256)-1;
	/* mov	ax,CrsrYv */
	ax = crsryv;
	/* and	ax,0ff00h	;round to pixel */
	AND(ax, 0x0ff00);
	/* sub	di,ax */
	SUB(di, ax);
	/* sub	di,256		;y radar */
	SUB(di, 256);
	// 0 ;* delta yft = (y radar * cos(hdg) - x radar * sin(hdg)) * scale wrt zoom
	/* mov	ax,M_CosH */
	ax = m_cosh;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,M_SinH */
	ax = m_sinh;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	// 0 ;* delta xft = (x radar * cos(hdg) + y radar * sin(hdg)) * scale wrt zoom
	/* mov	ax,M_CosH */
	ax = m_cosh;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bp,ax */
	bp = ax;
	/* mov	si,dx */
	si = dx;
	/* mov	ax,M_SinH */
	ax = m_sinh;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,si */
	ADC(dx, si);
	// 0 ;* sort scaling wrt range
	/* mov	bp,GMRRange	;0 .. 10 */
	bp = gmrrange;
	/* shr	bp,1		;0 .. 5 */
	SHR(bp, 1);
	/* add	bp,13		;13 .. 18 */
	ADD(bp, 13);
dummylabel23:
	// 4511 
	/* @@:		sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* dec	bp */
	DEC(bp);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel23;}
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	// 0 ;* "snap to object" (if on active map and any available)
	/* cmp	TMP_VIEW.VP_XSEC,31	;on active map? */
	CMP(tmp_view.vp_xsec, 31);
	/* ja	ContGMRMap		;no, ignore -> */
	if ((dw)(tmp_view.vp_xsec) > (dw)(31)) {goto contgmrmap;}
	/* cmp	TMP_VIEW.VP_YSEC,31	;on active map? */
	CMP(tmp_view.vp_ysec, 31);
	/* ja	ContGMRMap		;no, ignore -> */
	if ((dw)(tmp_view.vp_ysec) > (dw)(31)) {goto contgmrmap;}
	/* call	SnapStatic */
	CALL(snapstatic, 0);
	/* jc	@F		;snapped -> */
	if (CF) {goto dummylabel24;}
	/* call	SnapMobile */
	CALL(snapmobile, 0);
	// 0 ;* set floating waypoint
dummylabel24:
	// 4513 
	/* @@:		mov	ax,TMP_VIEW.VP_XSEC */
	ax = tmp_view.vp_xsec;
	/* mov	FloatWP.WP_XSEC,ax */
	floatwp.wp_xsec = ax;
	/* mov	ax,TMP_VIEW.VP_YSEC */
	ax = tmp_view.vp_ysec;
	/* mov	FloatWP.WP_YSEC,ax */
	floatwp.wp_ysec = ax;
	/* mov	ax,TMP_VIEW.VP_XFT */
	ax = tmp_view.vp_xft;
	/* mov	FloatWP.WP_XFT,ax */
	floatwp.wp_xft = ax;
	/* mov	ax,TMP_VIEW.VP_YFT */
	ax = tmp_view.vp_yft;
	/* mov	FloatWP.WP_YFT,ax */
	floatwp.wp_yft = ax;
	/* or	FloatWP.WP_ATTR,WP_VALID */
	OR(floatwp.wp_attr, 0x80);
	/* call	UpdateTgtWP		;tell AutoRoute */
	CALLF(updatetgtwp, 0);
	// 0 ;-----------------
	// 0 ;* draw moving map (base origin, modified colours)
	// 0 ;-----------------
	// 0 ;* modify map colours
contgmrmap:
	// 4515 
	/* ContGMRMap:	call	SetGMRPalette */
	CALLF(setgmrpalette, 0);
	// 0 ;* draw map and radar image
	/* mov	ax,MAP_MFD_DISP */
	ax = map_mfd_disp;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,GMROk */
	bh = gmrok;
	/* mov	dx,GMRRange */
	dx = gmrrange;
	/* mov	bp,MAP_ORG_BASE */
	bp = map_org_base;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	UpdateMovingMap */
	CALLF(updatemovingmap, 0);
	// 0 ;* restore map colours
	/* call	FixGMRPalette */
	CALLF(fixgmrpalette, 0);
	// 0 ;----------------------------------------
	// 0 ;* draw flashing floating waypoint cursor (if valid)
	// 0 ;----------------------------------------
	/* mov	cx,FloatWPX */
	cx = floatwpx;
	/* mov	bx,FloatWPY */
	bx = floatwpy;
	/* cmp	cx,-1		;x valid? */
	CMP(cx, -1);
	/* jne	__m2c_macrolocal_75_skip */
	if ((dw)(cx) != (dw)(-1)) {goto __m2c_macrolocal_75_skip;}
	/* jmp	SkipWPCursor */
	goto skipwpcursor;
__m2c_macrolocal_75_skip:
	// 4517 
	// 0 ;no ->
	/* cmp	bx,-1		;y valid? */
	CMP(bx, -1);
	/* jne	__m2c_macrolocal_76_skip */
	if ((dw)(bx) != (dw)(-1)) {goto __m2c_macrolocal_76_skip;}
	/* jmp	SkipWPCursor */
	goto skipwpcursor;
__m2c_macrolocal_76_skip:
	// 4519 
	// 0 ;no ->
	// 0 ;* update flash timer
	/* mov	ax,GMRFlashTimer */
	ax = gmrflashtimer;
	/* sub	ax,LastFrame	;time up? */
	SUB(ax, lastframe);
	/* jnc	FlashOk		;no -> */
	if (!CF) {goto flashok;}
	// 0 ;* toggle colour
	/* mov	al,GMR_FLASH_HI */
	al = 175;
	/* cmp	GMRFlashCol,al */
	CMP(gmrflashcol, al);
	/* jne	@F */
	if ((dw)(gmrflashcol) != (dw)(al)) {goto dummylabel25;}
	/* mov	al,GMR_FLASH_LO */
	al = 165;
dummylabel25:
	// 4521 
	/* @@:		mov	GMRFlashCol,al */
	gmrflashcol = al;
	/* mov	ax,GMR_FLASH_DELAY */
	ax = 20;
flashok:
	// 4523 
	/* FlashOk:  	mov	GMRFlashTimer,ax */
	gmrflashtimer = ax;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_77_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_77_skippixel;}
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_77_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_77_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_77_skippixel:
	// 4525 
	/* __m2c_macrolocal_77_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3752 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_78_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_78_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_78_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_78_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_78_skippixel:
	// 4527 
	/* __m2c_macrolocal_78_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3767 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_79_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_79_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_79_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_79_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_79_skippixel:
	// 4529 
	/* __m2c_macrolocal_79_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3782 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_80_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_80_skippixel;}
	/* add	bl,3 */
	ADD(bl, 3);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_80_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_80_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_80_skippixel:
	// 4531 
	/* __m2c_macrolocal_80_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3797 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_81_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_81_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_81_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_81_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_81_skippixel:
	// 4533 
	/* __m2c_macrolocal_81_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3812 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_82_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_82_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_82_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_82_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_82_skippixel:
	// 4535 
	/* __m2c_macrolocal_82_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3827 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_83_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_83_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_83_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_83_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_83_skippixel:
	// 4537 
	/* __m2c_macrolocal_83_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3842 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_84_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_84_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_84_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_84_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,GMRFlashCol */
	al = gmrflashcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_84_skippixel:
	// 4539 
	/* __m2c_macrolocal_84_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3857 						call	SetPixel */
	// 0 ;------------------------
	// 0 ;* draw designator cursor
	// 0 ;------------------------
skipwpcursor:
	// 4541 
	/* SkipWPCursor:	test	GMROk,1		;radar ok? */
	TEST(gmrok, 1);
	/* jnz	__m2c_macrolocal_85_skip */
	if ((gmrok & 1) != 0) {goto __m2c_macrolocal_85_skip;}
	/* jmp	SkipTgtCursor */
	goto skiptgtcursor;
__m2c_macrolocal_85_skip:
	// 4543 
	// 0 ;no ->
	/* mov	cx,CrsrXv */
	cx = crsrxv;
	/* mov	bx,CrsrYv */
	bx = crsryv;
	/* mov	cl,ch */
	cl = ch;
	/* xor	ch,ch */
	XOR(ch, ch);
	/* mov	bl,bh */
	bl = bh;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_86_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_86_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_86_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_86_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_86_skippixel:
	// 4545 
	/* __m2c_macrolocal_86_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3887 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_87_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_87_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_87_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_87_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_87_skippixel:
	// 4547 
	/* __m2c_macrolocal_87_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3902 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_88_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_88_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_88_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_88_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_88_skippixel:
	// 4549 
	/* __m2c_macrolocal_88_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3917 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_89_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_89_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_89_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_89_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_89_skippixel:
	// 4551 
	/* __m2c_macrolocal_89_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3932 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_90_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_90_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_90_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_90_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_90_skippixel:
	// 4553 
	/* __m2c_macrolocal_90_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3947 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_91_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_91_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_91_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_91_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_91_skippixel:
	// 4555 
	/* __m2c_macrolocal_91_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3962 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_92_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_92_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_92_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_92_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_92_skippixel:
	// 4557 
	/* __m2c_macrolocal_92_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3977 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_93_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_93_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_93_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_93_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_93_skippixel:
	// 4559 
	/* __m2c_macrolocal_93_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 3992 						call	SetPixel */
	// 0 ;----------------------
	// 0 ;* draw radar scan mask
	// 0 ;----------------------
skiptgtcursor:
	// 4561 
	/* SkipTgtCursor:	call	DrawRadarMask */
	CALL(drawradarmask, 0);
	/* ret */
	RETN(0);
snapstatic:
	// 4009 
	// 0 ;-------------------------------------
	// 0 ;* calc map index = x sec + y sec * 32
	// 0 ;-------------------------------------
edummylabel9:
	// 4563 
	/* mov	bp,TMP_VIEW.VP_YSEC */
	bp = tmp_view.vp_ysec;
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
	/* add	bp,TMP_VIEW.VP_XSEC */
	ADD(bp, tmp_view.vp_xsec);
	// 0 ;--------------------------
	// 0 ;* test for occupied sector
	// 0 ;--------------------------
	/* mov	bl,MobileLayer1[bp] */
	bl = *((&mobilelayer1)+bp);
	/* test	bl,bl		;occupied sector? */
	TEST(bl, bl);
	/* jz	FailSnapStatic	;no -> */
	if (!(bl & bl)) {goto failsnapstatic;}
	// 0 ;------------------------------------
	// 0 ;* calc pointer to sector data record
	// 0 ;------------------------------------
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,MobSectorTable[bx] */
	si = *(dw*)(((db*)&mobsectortable)+bx);
	// 0 ;------------------
	// 0 ;* sort search area
	// 0 ;------------------
	/* mov	bx,GMRRange */
	bx = gmrrange;
	/* mov	bp,SnapSearchArea[bx] */
	bp = *(dw*)(((db*)&snapsearcharea)+bx);
	// 0 ;------------------
	// 0 ;* scan object list (search for nearest static within search area)
	// 0 ;------------------
	/* mov	di,65535  	;set previous best to worst case */
	di = 65535;
scanstatloop:
	// 4565 
	/* ScanStatLoop:	mov	ax,MSECDATA1 */
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
	/* je	ScanStatDone	;yes -> */
	if ((db)(dl) == (db)(-1)) {goto scanstatdone;}
	/* test	dh,OBJECT_DEAD	;dead? */
	TEST(dh, 0x80);
	/* jnz	SkipStatic	;yes -> */
	if ((dh & 0x80) != 0) {goto skipstatic;}
	/* mov	ax,TMP_VIEW.VP_XFT */
	ax = tmp_view.vp_xft;
	/* sub	ax,cx */
	SUB(ax, cx);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(delta xft)
	/* mov	dx,TMP_VIEW.VP_YFT */
	dx = tmp_view.vp_yft;
	/* sub	dx,bx */
	SUB(dx, bx);
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel26;}
	/* neg	dx		;abs(delta yft) */
	NEG(dx);
dummylabel26:
	// 4567 
	/* @@:		cmp	ax,dx		;max(delta xft, delta yft) */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel27;}
	/* mov	ax,dx */
	ax = dx;
dummylabel27:
	// 4569 
	/* @@:		cmp	ax,bp		;within search area? */
	CMP(ax, bp);
	/* ja	SkipStatic	;no -> */
	if ((dw)(ax) > (dw)(bp)) {goto skipstatic;}
	/* cmp	ax,di		;nearer than previous object? */
	CMP(ax, di);
	/* jae	SkipStatic	;no -> */
	if ((dw)(ax) >= (dw)(di)) {goto skipstatic;}
	/* mov	SnapX,cx */
	snapx = cx;
	/* mov	SnapY,bx */
	snapy = bx;
	/* mov	di,ax		;new best */
	di = ax;
skipstatic:
	// 4571 
	/* SkipStatic:	add	si,STAT_REC_SIZE */
	ADD(si, 8);
	/* jmp	ScanStatLoop */
	goto scanstatloop;
scanstatdone:
	// 4573 
	/* ScanStatDone:	cmp	di,65535	;snapped ok? */
	CMP(di, 65535);
	/* je	FailSnapStatic	;no -> */
	if ((dw)(di) == (dw)(65535)) {goto failsnapstatic;}
passsnapstatic:
	// 4575 
	/* PassSnapStatic:	mov	cx,SnapX */
	cx = snapx;
	/* mov	bx,SnapY */
	bx = snapy;
	/* mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	/* mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
	/* stc			;cf = 1 */
	STC;
	/* ret */
	RETN(0);
failsnapstatic:
	// 4577 
	/* FailSnapStatic:	clc			;cf = 0 */
	CLC;
	/* ret */
	RETN(0);
snapmobile:
	// 4101 
	// 0 ;--------------------------
	// 0 ;* test for occupied sector
	// 0 ;--------------------------
edummylabel10:
	// 4579 
	/* mov	ax,TMP_VIEW.VP_XSEC */
	ax = tmp_view.vp_xsec;
	/* mov	dx,TMP_VIEW.VP_YSEC */
	dx = tmp_view.vp_ysec;
	/* call	LocateMobiles	;mobiles in sector? */
	CALLF(locatemobiles, 0);
	/* jc	FailSnapMobile	;no -> */
	if (CF) {goto failsnapmobile;}
	// 0 ;------------------
	// 0 ;* sort search area
	// 0 ;------------------
	/* mov	bx,GMRRange */
	bx = gmrrange;
	/* mov	bp,SnapSearchArea[bx] */
	bp = *(dw*)(((db*)&snapsearcharea)+bx);
	// 0 ;------------------
	// 0 ;* scan object list (search for nearest mobile within search area)
	// 0 ;------------------
	/* mov	di,65535 	;set previous best to worst case */
	di = 65535;
scanmobloop:
	// 4581 
	/* ScanMobLoop:	cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	ScanMobDone	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto scanmobdone;}
	/* cmp	si,OFFSET M_MOBILE	;Tornado? */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* je	SkipMobile		;yes -> */
	if ((dw)(si) == (dw)(m2c::near_offset_external(m_mobile))) {goto skipmobile;}
	// 0 ;* only allow mobiles whose zft <= 50ft (still see vehicles on bridges)
	/* cmp	WORD PTR _VP_ZFT_HI[si],0	;alt > 65535ft? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	/* ja	SkipMobile     			;yes -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))) > (dw)(0)) {goto skipmobile;}
	/* cmp	WORD PTR _VP_ZFT_LO[si],50	;alt <= 50ft? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 50);
	/* ja	SkipMobile 	    		;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) > (dw)(50)) {goto skipmobile;}
	/* mov	cx,_VP_XFT[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xft)));
	/* mov	bx,_VP_YFT[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_yft)));
	/* mov	ax,TMP_VIEW.VP_XFT */
	ax = tmp_view.vp_xft;
	/* sub	ax,cx */
	SUB(ax, cx);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(delta xft)
	/* mov	dx,TMP_VIEW.VP_YFT */
	dx = tmp_view.vp_yft;
	/* sub	dx,bx */
	SUB(dx, bx);
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel28;}
	/* neg	dx		;abs(delta yft) */
	NEG(dx);
dummylabel28:
	// 4583 
	/* @@:		cmp	ax,dx		;max(delta xft, delta yft) */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel29;}
	/* mov	ax,dx */
	ax = dx;
dummylabel29:
	// 4585 
	/* @@:		cmp	ax,bp		;within search area? */
	CMP(ax, bp);
	/* ja	SkipMobile	;no -> */
	if ((dw)(ax) > (dw)(bp)) {goto skipmobile;}
	/* cmp	ax,di		;nearer than previous object? */
	CMP(ax, di);
	/* jae	SkipMobile	;no -> */
	if ((dw)(ax) >= (dw)(di)) {goto skipmobile;}
	/* mov	SnapX,cx */
	snapx = cx;
	/* mov	SnapY,bx */
	snapy = bx;
	/* mov	di,ax		;new best */
	di = ax;
skipmobile:
	// 4587 
	/* SkipMobile: 	mov	si,MOB_LINK_PTR[si] */
	si = m2c::getdata(*(dw*)(((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	ScanMobLoop */
	goto scanmobloop;
scanmobdone:
	// 4589 
	/* ScanMobDone:	cmp	di,65535	;snapped ok? */
	CMP(di, 65535);
	/* je	FailSnapMobile	;no -> */
	if ((dw)(di) == (dw)(65535)) {goto failsnapmobile;}
passsnapmobile:
	// 4591 
	/* PassSnapMobile:	mov	cx,SnapX */
	cx = snapx;
	/* mov	bx,SnapY */
	bx = snapy;
	/* mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	/* mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
	/* stc			;cf = 1 */
	STC;
	/* ret */
	RETN(0);
failsnapmobile:
	// 4593 
	/* FailSnapMobile:	clc			;cf = 0 */
	CLC;
	/* ret */
	RETN(0);
drawradarmask:
	// 4175 
	// 0 ;* top lh corner mask
edummylabel11:
	// 4595 
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	dx,ax */
	dx = ax;
	/* add	dx,17 */
	ADD(dx, 17);
	/* mov	PolyX1,ax */
	polyx1 = ax;
	/* mov	PolyX2,dx */
	polyx2 = dx;
	/* mov	PolyX3,ax */
	polyx3 = ax;
	/* mov	PolyX4,ax */
	polyx4 = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* mov	dx,ax */
	dx = ax;
	/* add	dx,17 */
	ADD(dx, 17);
	/* mov	PolyY1,ax */
	polyy1 = ax;
	/* mov	PolyY2,ax */
	polyy2 = ax;
	/* mov	PolyY3,dx */
	polyy3 = dx;
	/* mov	PolyY4,ax */
	polyy4 = ax;
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* mov	si,OFFSET RadarMaskPoly */
	si = m2c::near_offset_external(radarmaskpoly);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* top rh corner mask
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,46 */
	ADD(ax, 46);
	/* add	dx,63 */
	ADD(dx, 63);
	/* mov	PolyX1,ax */
	polyx1 = ax;
	/* mov	PolyX2,dx */
	polyx2 = dx;
	/* mov	PolyX3,dx */
	polyx3 = dx;
	/* mov	PolyX4,ax */
	polyx4 = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* mov	dx,ax */
	dx = ax;
	/* add	dx,17 */
	ADD(dx, 17);
	/* mov	PolyY1,ax */
	polyy1 = ax;
	/* mov	PolyY2,ax */
	polyy2 = ax;
	/* mov	PolyY3,dx */
	polyy3 = dx;
	/* mov	PolyY4,ax */
	polyy4 = ax;
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* mov	si,OFFSET RadarMaskPoly */
	si = m2c::near_offset_external(radarmaskpoly);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* bottom rh corner mask
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,63 */
	ADD(ax, 63);
	/* add	dx,43 */
	ADD(dx, 43);
	/* mov	PolyX1,ax */
	polyx1 = ax;
	/* mov	PolyX2,ax */
	polyx2 = ax;
	/* mov	PolyX3,dx */
	polyx3 = dx;
	/* mov	PolyX4,ax */
	polyx4 = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,27 */
	ADD(ax, 27);
	/* add	dx,47 */
	ADD(dx, 47);
	/* mov	PolyY1,ax */
	polyy1 = ax;
	/* mov	PolyY2,dx */
	polyy2 = dx;
	/* mov	PolyY3,dx */
	polyy3 = dx;
	/* mov	PolyY4,ax */
	polyy4 = ax;
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* mov	si,OFFSET RadarMaskPoly */
	si = m2c::near_offset_external(radarmaskpoly);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* bottom lh corner mask
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	dx,ax */
	dx = ax;
	/* add	dx,20 */
	ADD(dx, 20);
	/* mov	PolyX1,ax */
	polyx1 = ax;
	/* mov	PolyX2,dx */
	polyx2 = dx;
	/* mov	PolyX3,ax */
	polyx3 = ax;
	/* mov	PolyX4,ax */
	polyx4 = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,27 */
	ADD(ax, 27);
	/* add	dx,47 */
	ADD(dx, 47);
	/* mov	PolyY1,ax */
	polyy1 = ax;
	/* mov	PolyY2,dx */
	polyy2 = dx;
	/* mov	PolyY3,dx */
	polyy3 = dx;
	/* mov	PolyY4,ax */
	polyy4 = ax;
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* mov	si,OFFSET RadarMaskPoly */
	si = m2c::near_offset_external(radarmaskpoly);
	/* call	PolyFill */
	CALLF(polyfill, 0);
	// 0 ;* top line
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,18 */
	ADD(cx, 18);
	/* add	dx,45 */
	ADD(dx, 45);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* bottom line
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,21 */
	ADD(cx, 21);
	/* add	dx,42 */
	ADD(dx, 42);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,47 */
	ADD(bl, 47);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* top lh fillet
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,17 */
	ADD(cx, 17);
	/* add	dx,19 */
	ADD(dx, 19);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,16 */
	ADD(cx, 16);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,2 */
	ADD(bl, 2);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,17 */
	ADD(cx, 17);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,2 */
	ADD(bl, 2);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,15 */
	ADD(cx, 15);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,3 */
	ADD(bl, 3);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* top rh fillet
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,44 */
	ADD(cx, 44);
	/* add	dx,46 */
	ADD(dx, 46);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,46 */
	ADD(cx, 46);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,2 */
	ADD(bl, 2);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,47 */
	ADD(cx, 47);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,2 */
	ADD(bl, 2);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,48 */
	ADD(cx, 48);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,3 */
	ADD(bl, 3);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* lh fillet
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,18 */
	ADD(bl, 18);
	/* add	bh,26 */
	ADD(bh, 26);
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,17 */
	ADD(bl, 17);
	/* add	bh,27 */
	ADD(bh, 27);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,1 */
	ADD(cx, 1);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,16 */
	ADD(bl, 16);
	/* add	bh,21 */
	ADD(bh, 21);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,2 */
	ADD(cx, 2);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,15 */
	ADD(bl, 15);
	/* add	bh,17 */
	ADD(bh, 17);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,3 */
	ADD(cx, 3);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,14 */
	ADD(bl, 14);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,4 */
	ADD(cx, 4);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* rh fillet
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,18 */
	ADD(bl, 18);
	/* add	bh,26 */
	ADD(bh, 26);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,63 */
	ADD(cx, 63);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,17 */
	ADD(bl, 17);
	/* add	bh,27 */
	ADD(bh, 27);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,62 */
	ADD(cx, 62);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,16 */
	ADD(bl, 16);
	/* add	bh,21 */
	ADD(bh, 21);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,61 */
	ADD(cx, 61);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,15 */
	ADD(bl, 15);
	/* add	bh,17 */
	ADD(bh, 17);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,60 */
	ADD(cx, 60);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,14 */
	ADD(bl, 14);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,59 */
	ADD(cx, 59);
	/* mov	al,COL_RADAR_MASK */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
airradar:
	// 4434 
	// 0 ;------------------
	// 0 ;* read mouse input
	// 0 ;------------------
edummylabel12:
	// 4597 
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	__m2c_macrolocal_96_skip */
	if ((dw)(disableinput) == (dw)(0)) {goto __m2c_macrolocal_96_skip;}
	/* jmp	ContAirRadar */
	goto contairradar;
__m2c_macrolocal_96_skip:
	// 4599 
	// 0 ;yes ->
	/* test QuieterCockpit,1 ;in cockpit */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel30;}
	/* jmp LompatOverHereMan */
	goto lompatoverhereman;
dummylabel30:
	// 4601 
	/* test	[si].MFD_HAS_MOUSE,1	;mouse available? */
	TEST(*((db*)((db*)&((mfd*)raddr(ds,si))->mfd_has_mouse)), 1);
	/* jnz	__m2c_macrolocal_97_skip */
	if ((*((db*)((db*)&((mfd*)raddr(ds,si))->mfd_has_mouse)) & 1) != 0) {goto __m2c_macrolocal_97_skip;}
	/* jmp	ContAirRadar */
	goto contairradar;
__m2c_macrolocal_97_skip:
	// 4603 
	// 0 ;no ->
lompatoverhereman:
	// 4605 
	/* call	ReadMouseMotion */
	CALLF(readmousemotion, 0);
	// 0 ;* note: al = 1 = lhs button pressed
	// 0 ;*       ah = 1 = rhs button pressed
	// 0 ;*       cx = XMickeys (-32768 .. 32767)
	// 0 ;*       bx = YMickeys (-32768 .. 32767)
	// 0 ;*       dl = 1 = lhs button just pressed
	// 0 ;*       dh = 1 = rhs button just pressed
	// 0 ;--------------------
	// 0 ;* update radar range
	// 0 ;--------------------
	// 0 ;* range allowed wrt variant:-
	// 0 ;*
	// 0 ;* IDS = ARAD_MIN_RANGE .. ARAD_MED_RANGE
	// 0 ;* ECR = ARAD_MIN_RANGE .. ARAD_MED_RANGE
	// 0 ;* ADV = ARAD_MIN_RANGE .. ARAD_MAX_RANGE
	/* test	Key[K_CTRL],1	;update range? */
	TEST(*((&key)+29), 1);
	/* jz	SkipRadRange	;no -> */
	if (!(*((&key)+29) & 1)) {goto skipradrange;}
	/* test	dl,dl		;decrease range? */
	TEST(dl, dl);
	/* jnz	DecRadRange	;yes -> */
	if ((dl & dl) != 0) {goto decradrange;}
	/* test	dh,dh		;increase range? */
	TEST(dh, dh);
	/* jnz	IncRadRange	;yes -> */
	if ((dh & dh) != 0) {goto incradrange;}
	/* jmp	RadRangeOk */
	goto radrangeok;
	// 0 ;* decrease range
decradrange:
	// 4607 
	/* DecRadRange:	cmp	AirRadarRng,ARAD_MIN_RANGE	;min range? */
	CMP(airradarrng, 0);
	/* je	RadRangeOk			;yes -> */
	if ((dw)(airradarrng) == (dw)(0)) {goto radrangeok;}
	/* sub	AirRadarRng,2  	;decrease range */
	SUB(airradarrng, 2);
	/* jmp	RadRangeOk */
	goto radrangeok;
	// 0 ;* increase range
incradrange:
	// 4609 
	/* IncRadRange:   	mov	bp,ARAD_MAX_RANGE	;assume ADV */
	bp = 4;
	/* cmp	TornadoType,ADV_TORNADO	;ADV? */
	CMP(tornadotype, 2);
	/* je	@F			;yes -> */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel31;}
	/* mov	bp,ARAD_MED_RANGE */
	bp = 2;
dummylabel31:
	// 4611 
	/* @@:		cmp	AirRadarRng,bp	;max range (wrt variant)? */
	CMP(airradarrng, bp);
	/* je	RadRangeOk	;yes -> */
	if ((dw)(airradarrng) == (dw)(bp)) {goto radrangeok;}
	/* add	AirRadarRng,2	;increase range */
	ADD(airradarrng, 2);
	// 0 ;* reset mouse buttons
radrangeok:
	// 4613 
	/* RadRangeOk:	xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	// 0 ;------------------------------------------
	// 0 ;* update target designator cursor position
	// 0 ;------------------------------------------
skipradrange:
	// 4615 
	/* SkipRadRange:	push	dx		;store button status */
	PUSH(dx);
	/* cmp	cx,-127 */
	CMP(cx, -127);
	/* jge	__m2c_macrolocal_98_TestHi */
	if ((short)(cx) >= (short)(-127)) {goto __m2c_macrolocal_98_testhi;}
	/* mov	cx,-127 */
	cx = -127;
	/* jmp	__m2c_macrolocal_98_TestOk */
	goto __m2c_macrolocal_98_testok;
__m2c_macrolocal_98_testhi:
	// 4617 
	/* __m2c_macrolocal_98_TestHi:		cmp	cx,127 */
	CMP(cx, 127);
	/* jle	__m2c_macrolocal_98_TestOk */
	if ((short)(cx) <= (short)(127)) {goto __m2c_macrolocal_98_testok;}
	/* mov	cx,127 */
	cx = 127;
__m2c_macrolocal_98_testok:
	// 4619 
	// 0 ;limit motion
	/* cmp	bx,-127 */
	CMP(bx, -127);
	/* jge	__m2c_macrolocal_99_TestHi */
	if ((short)(bx) >= (short)(-127)) {goto __m2c_macrolocal_99_testhi;}
	/* mov	bx,-127 */
	bx = -127;
	/* jmp	__m2c_macrolocal_99_TestOk */
	goto __m2c_macrolocal_99_testok;
__m2c_macrolocal_99_testhi:
	// 4621 
	/* __m2c_macrolocal_99_TestHi:		cmp	bx,127 */
	CMP(bx, 127);
	/* jle	__m2c_macrolocal_99_TestOk */
	if ((short)(bx) <= (short)(127)) {goto __m2c_macrolocal_99_testok;}
	/* mov	bx,127 */
	bx = 127;
__m2c_macrolocal_99_testok:
	// 4623 
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* sal	cx,1 */
	SAL(cx, 1);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* add	cx,CrsrXv */
	ADD(cx, crsrxv);
	/* cmp	cx,0 */
	CMP(cx, 0);
	/* jge	__m2c_macrolocal_100_TestHi */
	if ((short)(cx) >= (short)(0)) {goto __m2c_macrolocal_100_testhi;}
	/* mov	cx,0 */
	cx = 0;
	/* jmp	__m2c_macrolocal_100_TestOk */
	goto __m2c_macrolocal_100_testok;
__m2c_macrolocal_100_testhi:
	// 4625 
	/* __m2c_macrolocal_100_TestHi:		cmp	cx,CRSR_XV_MAX-1 */
	CMP(cx, (64*256)-1);
	/* jle	__m2c_macrolocal_100_TestOk */
	if ((short)(cx) <= (short)((64*256)-1)) {goto __m2c_macrolocal_100_testok;}
	/* mov	cx,CRSR_XV_MAX-1 */
	cx = (64*256)-1;
__m2c_macrolocal_100_testok:
	// 4627 
	/* add	bx,CrsrYv */
	ADD(bx, crsryv);
	/* cmp	bx,0 */
	CMP(bx, 0);
	/* jge	__m2c_macrolocal_101_TestHi */
	if ((short)(bx) >= (short)(0)) {goto __m2c_macrolocal_101_testhi;}
	/* mov	bx,0 */
	bx = 0;
	/* jmp	__m2c_macrolocal_101_TestOk */
	goto __m2c_macrolocal_101_testok;
__m2c_macrolocal_101_testhi:
	// 4629 
	/* __m2c_macrolocal_101_TestHi:		cmp	bx,CRSR_YV_MAX-1 */
	CMP(bx, (48*256)-1);
	/* jle	__m2c_macrolocal_101_TestOk */
	if ((short)(bx) <= (short)((48*256)-1)) {goto __m2c_macrolocal_101_testok;}
	/* mov	bx,CRSR_YV_MAX-1 */
	bx = (48*256)-1;
__m2c_macrolocal_101_testok:
	// 4631 
	// 0 ;* keep cursor from straying under mask
	/* cmp	bx,CRSR_YMIN*256	;y >= min y? */
	CMP(bx, 1*256);
	/* jae	@F			;yes -> */
	if ((dw)(bx) >= (dw)(1*256)) {goto dummylabel32;}
	/* mov	bx,CRSR_YMIN*256 */
	bx = 1*256;
dummylabel32:
	// 4633 
	/* @@:		cmp	bx,(CRSR_YMAX*256)+255	;y <= max y? */
	CMP(bx, (46*256)+255);
	/* jbe	@F  			;yes -> */
	if ((dw)(bx) <= (dw)((46*256)+255)) {goto dummylabel33;}
	/* mov	bx,(CRSR_YMAX*256)+255 */
	bx = (46*256)+255;
dummylabel33:
	// 4635 
	/* @@:		mov	al,bh		;calc x limits index */
	al = bh;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* mov	si,ax */
	si = ax;
	/* mov	ah,CrsrXLimits[si+0]	;x left limit */
	ah = *((&crsrxlimits)+si+0);
	/* xor	al,al */
	XOR(al, al);
	/* cmp	cx,ax		;x >= min x? */
	CMP(cx, ax);
	/* jae	@F		;yes -> */
	if ((dw)(cx) >= (dw)(ax)) {goto dummylabel34;}
	/* mov	cx,ax */
	cx = ax;
dummylabel34:
	// 4637 
	/* @@: 		mov	ah,CrsrXLimits[si+1]	;x right limit */
	ah = *((&crsrxlimits)+si+1);
	/* mov	al,255 */
	al = 255;
	/* cmp	cx,ax */
	CMP(cx, ax);
	/* jbe	@F */
	if ((dw)(cx) <= (dw)(ax)) {goto dummylabel35;}
	/* mov	cx,ax */
	cx = ax;
dummylabel35:
	// 4639 
	/* @@:		mov	CrsrXv,cx */
	crsrxv = cx;
	/* mov	CrsrYv,bx */
	crsryv = bx;
	/* pop	dx		;restore button status */
	POP(dx);
	// 0 ;---------------------------
	// 0 ;* test for cancel designate
	// 0 ;---------------------------
	/* test	dh,dh		;rh mouse button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel36;}
	/* mov	AirTgtPtr,-1	;cancel designation */
	airtgtptr = -1;
	/* jmp	ContAirRadar */
	goto contairradar;
	// 0 ;---------------------------
	// 0 ;* test for target designate
	// 0 ;---------------------------
dummylabel36:
	// 4641 
	/* @@:		test	dl,dl		;lh mouse button just pressed? */
	TEST(dl, dl);
	/* jz	ContAirRadar	;no -> */
	if (!(dl & dl)) {goto contairradar;}
	// 0 ;* search for exact x, y crt match
	/* mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* jcxz	ContAirRadar	;no tracks -> */
	JCXZ(contairradar);
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
	/* mov	bx,CrsrXv */
	bx = crsrxv;
	/* mov	bl,bh */
	bl = bh;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	dx,CrsrYv */
	dx = crsryv;
	/* mov	dl,dh */
	dl = dh;
	/* xor	dh,dh */
	XOR(dh, dh);
airtgtloop1:
	// 4643 
	/* AirTgtLoop1:	mov	di,[si].ARAD_PTR */
	di = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* cmp	_DRONE_SIDE[di],ENEMY	;enemy target? */
	CMP(((drone_data*)raddr(ds,(6+18)+di))->drone_side, 2);
	/* jne	@F			;no -> */
	if ((db)(((drone_data*)raddr(ds,(6+18)+di))->drone_side) != (db)(2)) {goto dummylabel37;}
	/* cmp	bx,[si].ARAD_XCRT	;x crt match? */
	CMP(bx, *((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_xcrt)));
	/* jne	@F			;no -> */
	if ((dw)(bx) != (dw)(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_xcrt)))) {goto dummylabel37;}
	/* cmp	dx,[si].ARAD_YCRT	;y crt match? */
	CMP(dx, *((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ycrt)));
	/* je	SetAirTgt		;yes -> */
	if ((dw)(dx) == (dw)(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ycrt)))) {goto setairtgt;}
dummylabel37:
	// 4645 
	/* @@:		add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* loop	AirTgtLoop1 */
	LOOP(airtgtloop1);
	// 0 ;* extend search (allow �1 pixel error)
	/* mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
airtgtloop2:
	// 4647 
	/* AirTgtLoop2:	mov	di,[si].ARAD_PTR */
	di = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* cmp	_DRONE_SIDE[di],ENEMY	;enemy target? */
	CMP(((drone_data*)raddr(ds,(6+18)+di))->drone_side, 2);
	/* jne	@F			;no -> */
	if ((db)(((drone_data*)raddr(ds,(6+18)+di))->drone_side) != (db)(2)) {goto dummylabel38;}
	/* mov	ax,[si].ARAD_XCRT */
	ax = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_xcrt)));
	/* sub	ax,bx */
	SUB(ax, bx);
	/* cmp	ax,1 		;> 1 pixel error? */
	CMP(ax, 1);
	/* jg	@F   		;yes -> */
	if ((short)(ax) > (short)(1)) {goto dummylabel38;}
	/* cmp	ax,-1		;> 1 pixel error? */
	CMP(ax, -1);
	/* jl	@F		;yes -> */
	if ((short)(ax) < (short)(-1)) {goto dummylabel38;}
	/* mov	ax,[si].ARAD_YCRT */
	ax = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ycrt)));
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cmp	ax,1 		;> 1 pixel error? */
	CMP(ax, 1);
	/* jg	@F   		;yes -> */
	if ((short)(ax) > (short)(1)) {goto dummylabel38;}
	/* cmp	ax,-1		;> 1 pixel error? */
	CMP(ax, -1);
	/* jge	SetAirTgt	;no -> */
	if ((short)(ax) >= (short)(-1)) {goto setairtgt;}
dummylabel38:
	// 4649 
	/* @@:		add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* loop	AirTgtLoop2 */
	LOOP(airtgtloop2);
	/* jmp	ContAirRadar */
	goto contairradar;
setairtgt:
	// 4651 
	/* SetAirTgt:	mov	AirTgtPtr,di */
	airtgtptr = di;
	// 0 ;-----------------------
	// 0 ;* draw radar background
	// 0 ;-----------------------
contairradar:
	// 4653 
	/* ContAirRadar:	call	DrawRadarNoise */
	CALL(drawradarnoise, 0);
	// 0 ;------------------
	// 0 ;* draw range scale
	// 0 ;------------------
	/* mov	si,AirRadarRng */
	si = airradarrng;
	/* mov	bx,AirRadYStart[si] */
	bx = *(dw*)(((db*)&airradystart)+si);
	/* mov	bp,AirRadYCount[si] */
	bp = *(dw*)(((db*)&airradycount)+si);
	/* mov	di,AirRadYStep[si] */
	di = *(dw*)(((db*)&airradystep)+si);
	/* add	bx,WORD PTR YOrg */
	ADD(bx, *(dw*)(yorg));
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,(MFD_WIDTH/2)-1 */
	ADD(cx, (64/2)-1);
	/* mov	dx,cx */
	dx = cx;
	/* inc	dx */
	INC(dx);
dummylabel39:
	// 4655 
	/* @@:		push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	di */
	PUSH(di);
	/* push	bp */
	PUSH(bp);
	/* mov	al,COL_CRT14 */
	al = 173;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,di */
	ADD(bx, di);
	/* dec	bp */
	DEC(bp);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel39;}
	// 0 ;-----------------------
	// 0 ;* plot mobiles on radar
	// 0 ;-----------------------
	/* mov	cx,NumRadarTracks */
	cx = numradartracks;
	/* jcxz	NoTracks	;no tracks -> */
	JCXZ(notracks);
	/* mov	si,OFFSET AirRadarTracks */
	si = m2c::near_offset_external(airradartracks);
	/* mov	di,-1		;assume no target designated */
	di = -1;
	/* mov	TgtCol,COL_CRT16 */
	tgtcol = 175;
plotmobloop:
	// 4657 
	/* PlotMobLoop:	mov	ax,[si].ARAD_PTR */
	ax = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* cmp	ax,AirTgtPtr	;designated target? */
	CMP(ax, airtgtptr);
	/* jne	@F		;no -> */
	if ((dw)(ax) != (dw)(airtgtptr)) {goto dummylabel40;}
	/* mov	di,si */
	di = si;
	/* jmp	PlotNextMob */
	goto plotnextmob;
dummylabel40:
	// 4659 
	/* @@:		push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	cx,[si].ARAD_XCRT */
	cx = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_xcrt)));
	/* mov	bx,[si].ARAD_YCRT */
	bx = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ycrt)));
	/* mov	si,[si].ARAD_PTR */
	si = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,si))->arad_ptr)));
	/* call	DrawMobSymbol */
	CALL(drawmobsymbol, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
plotnextmob:
	// 4661 
	/* PlotNextMob:	add	si,ARAD_REC_SIZE */
	ADD(si, 12);
	/* loop	PlotMobLoop */
	LOOP(plotmobloop);
	// 0 ;* flash designated target (draw last so that it is always visible)
	/* cmp	di,-1		;target designated? */
	CMP(di, -1);
	/* je	NoTracks	;no -> */
	if ((dw)(di) == (dw)(-1)) {goto notracks;}
	/* mov	ax,TgtFlashTimer */
	ax = tgtflashtimer;
	/* sub	ax,LastFrame	;time up? */
	SUB(ax, lastframe);
	/* jnc	TgtFlashOk 	;no -> */
	if (!CF) {goto tgtflashok;}
	/* mov	al,TGT_FLASH_HI */
	al = 175;
	/* cmp	TgtFlashCol,al */
	CMP(tgtflashcol, al);
	/* jne	@F */
	if ((dw)(tgtflashcol) != (dw)(al)) {goto dummylabel41;}
	/* mov	al,TGT_FLASH_LO */
	al = 160;
dummylabel41:
	// 4663 
	/* @@:		mov	TgtFlashCol,al */
	tgtflashcol = al;
	/* mov	ax,TGT_FLASH_DELAY */
	ax = 20;
tgtflashok:
	// 4665 
	/* TgtFlashOk:  	mov	TgtFlashTimer,ax */
	tgtflashtimer = ax;
	/* mov	al,TgtFlashCol */
	al = tgtflashcol;
	/* mov	TgtCol,al */
	tgtcol = al;
	/* mov	cx,[di].ARAD_XCRT */
	cx = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_xcrt)));
	/* mov	bx,[di].ARAD_YCRT */
	bx = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_ycrt)));
	/* mov	si,[di].ARAD_PTR */
	si = m2c::getdata(*((dw*)((db*)&((arad_track*)raddr(ds,di))->arad_ptr)));
	/* call	DrawMobSymbol */
	CALL(drawmobsymbol, 0);
	// 0 ;------------------------
	// 0 ;* draw designator cursor
	// 0 ;------------------------
notracks:
	// 4667 
	/* NoTracks:	mov	cx,CrsrXv */
	cx = crsrxv;
	/* mov	bx,CrsrYv */
	bx = crsryv;
	/* mov	cl,ch */
	cl = ch;
	/* xor	ch,ch */
	XOR(ch, ch);
	/* mov	bl,bh */
	bl = bh;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_102_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_102_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_102_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_102_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_102_skippixel:
	// 4669 
	/* __m2c_macrolocal_102_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4737 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_103_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_103_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_103_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_103_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_103_skippixel:
	// 4671 
	/* __m2c_macrolocal_103_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4752 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_104_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_104_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_104_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_104_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_104_skippixel:
	// 4673 
	/* __m2c_macrolocal_104_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4767 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_105_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_105_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_105_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_105_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_105_skippixel:
	// 4675 
	/* __m2c_macrolocal_105_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4782 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_106_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_106_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_106_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_106_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_106_skippixel:
	// 4677 
	/* __m2c_macrolocal_106_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4797 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_107_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_107_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_107_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_107_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_107_skippixel:
	// 4679 
	/* __m2c_macrolocal_107_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4812 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_108_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_108_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_108_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_108_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_108_skippixel:
	// 4681 
	/* __m2c_macrolocal_108_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4827 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_109_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_109_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_109_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_109_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_109_skippixel:
	// 4683 
	/* __m2c_macrolocal_109_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4842 						call	SetPixel */
	// 0 ;----------------------
	// 0 ;* draw radar scan mask
	// 0 ;----------------------
	/* call	DrawRadarMask */
	CALL(drawradarmask, 0);
	/* ret */
	RETN(0);
drawmobsymbol:
	// 4861 
	/* cmp	_DRONE_SIDE[si],ENEMY	;enemy? */
	CMP(((drone_data*)raddr(ds,(6+18)+si))->drone_side, 2);
edummylabel13:
	// 4685 
	/* jne	__m2c_macrolocal_110_skip */
	if (!ZF) {goto __m2c_macrolocal_110_skip;}
	/* jmp	DrawMobEnemy */
	goto drawmobenemy;
__m2c_macrolocal_110_skip:
	// 4687 
	// 0 ;yes ->
	// 0 ;---------------------------
drawmoballied:
	// 4689 
	// 0 ;---------------------------
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_111_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_111_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_111_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_111_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_111_skippixel:
	// 4691 
	/* __m2c_macrolocal_111_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4886 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_112_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_112_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_112_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_112_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_112_skippixel:
	// 4693 
	/* __m2c_macrolocal_112_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4901 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_113_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_113_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_113_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_113_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_113_skippixel:
	// 4695 
	/* __m2c_macrolocal_113_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4916 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_114_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_114_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_114_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_114_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_114_skippixel:
	// 4697 
	/* __m2c_macrolocal_114_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4931 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_115_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_115_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_115_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_115_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_115_skippixel:
	// 4699 
	/* __m2c_macrolocal_115_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4946 						call	SetPixel */
	/* jmp	ExitMobSymbol */
	goto exitmobsymbol;
	// 0 ;---------------------------
drawmobenemy:
	// 4701 
	// 0 ;---------------------------
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_116_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_116_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_116_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_116_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_116_skippixel:
	// 4703 
	/* __m2c_macrolocal_116_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4967 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_117_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_117_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_117_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_117_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_117_skippixel:
	// 4705 
	/* __m2c_macrolocal_117_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4982 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_118_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_118_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_118_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_118_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_118_skippixel:
	// 4707 
	/* __m2c_macrolocal_118_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4997 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_119_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_119_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_119_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_119_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_119_skippixel:
	// 4709 
	/* __m2c_macrolocal_119_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5012 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_120_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_120_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_120_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_120_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_120_skippixel:
	// 4711 
	/* __m2c_macrolocal_120_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5027 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_121_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_121_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_121_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_121_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_121_skippixel:
	// 4713 
	/* __m2c_macrolocal_121_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5042 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_122_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_122_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_122_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_122_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_122_skippixel:
	// 4715 
	/* __m2c_macrolocal_122_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5057 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,MFD_WIDTH-1	;visible? */
	CMP(cx, 64-1);
	/* ja	__m2c_macrolocal_123_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(64-1)) {goto __m2c_macrolocal_123_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,MFD_DEPTH-1	;visible? */
	CMP(bl, 48-1);
	/* ja	__m2c_macrolocal_123_SkipPixel	;no -> */
	if ((db)(bl) > (db)(48-1)) {goto __m2c_macrolocal_123_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,BYTE PTR YOrg */
	ADD(bl, *(yorg));
	/* mov	al,TgtCol */
	al = tgtcol;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_123_skippixel:
	// 4717 
	/* __m2c_macrolocal_123_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5072 						call	SetPixel */
exitmobsymbol:
	// 4719 
	/* ExitMobSymbol:	ret */
	RETN(0);
autopilotdisp:
	// 5083 
	// 0 ;------------
	// 0 ;* initialize
	// 0 ;------------
edummylabel14:
	// 4721 
	/* mov	al,'-' */
	al = '-';
	/* mov	ah,' ' */
	ah = ' ';
	/* mov	Alt$[0],al */
	*((altdol)+0) = al;
	/* mov	Alt$[1],al */
	*((altdol)+1) = al;
	/* mov	Alt$[2],al */
	*((altdol)+2) = al;
	/* mov	Alt$[3],al */
	*((altdol)+3) = al;
	/* mov	Alt$[4],al */
	*((altdol)+4) = al;
	/* mov	Hdg$[0],ah */
	*((hdgdol)+0) = ah;
	/* mov	Hdg$[1],ah */
	*((hdgdol)+1) = ah;
	/* mov	Hdg$[2],al */
	*((hdgdol)+2) = al;
	/* mov	Hdg$[3],al */
	*((hdgdol)+3) = al;
	/* mov	Hdg$[4],al */
	*((hdgdol)+4) = al;
	/* mov	IAS$[0],ah */
	*((iasdol)+0) = ah;
	/* mov	IAS$[1],ah */
	*((iasdol)+1) = ah;
	/* mov	IAS$[2],al */
	*((iasdol)+2) = al;
	/* mov	IAS$[3],al */
	*((iasdol)+3) = al;
	/* mov	IAS$[4],al */
	*((iasdol)+4) = al;
	// 0 ;--------------------
	// 0 ;* sort auto-throttle
	// 0 ;--------------------
	/* cmp	AutoMode,AUTO_OFF	;off? */
	CMP(automode, 0);
	/* jne	@F			;no -> */
	if ((dw)(automode) != (dw)(0)) {goto dummylabel42;}
	/* test	AutoThrot,1		;manual or auto throttle? */
	TEST(autothrot, 1);
	/* jz	@F			;manual -> */
	if (!(autothrot & 1)) {goto dummylabel42;}
	/* mov	ModePtr,OFFSET AutoThrottle$ */
	modeptr = m2c::near_offset_external(autothrottledol);
	/* mov	AltPtr,OFFSET Manual$ */
	altptr = m2c::near_offset_external(manualdol);
	/* mov	HdgPtr,OFFSET Manual$ */
	hdgptr = m2c::near_offset_external(manualdol);
	/* mov	IASPtr,OFFSET Acquire$ */
	iasptr = m2c::near_offset_external(acquiredol);
	/* mov	ax,AutoVias */
	ax = autovias;
	/* mov	di,OFFSET IAS$ */
	di = m2c::near_offset_external(iasdol);
	/* call	DecWord$ */
	CALLF(decworddol, 0);
	/* jmp	ContAutoDisp */
	goto contautodisp;
dummylabel42:
	// 4723 
	/* @@:		mov	IASPtr,OFFSET Auto$	;assume approach */
	iasptr = m2c::near_offset_external(autodol);
	/* cmp	AutoMode,AUTO_APPROACH	;approach? */
	CMP(automode, 2);
	/* je	SortAutoMode	     	;yes -> */
	if ((dw)(automode) == (dw)(2)) {goto sortautomode;}
	/* mov	IASPtr,OFFSET Manual$	;assume manual */
	iasptr = m2c::near_offset_external(manualdol);
	/* test	AutoThrot,1		;manual or auto throttle? */
	TEST(autothrot, 1);
	/* jz	SortAutoMode		;manual -> */
	if (!(autothrot & 1)) {goto sortautomode;}
	/* mov	IASPtr,OFFSET Acquire$ */
	iasptr = m2c::near_offset_external(acquiredol);
	/* mov	ax,AutoVias */
	ax = autovias;
	/* mov	di,OFFSET IAS$ */
	di = m2c::near_offset_external(iasdol);
	/* call	DecWord$ */
	CALLF(decworddol, 0);
	// 0 ;----------------------
	// 0 ;* sort auto-pilot mode
	// 0 ;----------------------
sortautomode:
	// 4725 
	/* SortAutoMode:	mov	bx,AutoMode */
	bx = automode;
	/* mov	ax,AutoTitle$[bx] */
	ax = *(dw*)(((db*)&autotitledol)+bx);
	/* mov	ModePtr,ax */
	modeptr = ax;
	/* call	SortAlt$ */
	CALL(sortaltdol, 0);
	/* call	SortHdg$ */
	CALL(sorthdgdol, 0);
	// 0 ;--------------------
	// 0 ;* print AFDS display
	// 0 ;--------------------
contautodisp:
	// 4727 
	/* ContAutoDisp:	call	ClearDisp */
	CALL(cleardisp, 0);
	// 0 ;* underline and overline title
	/* mov	bl,MFD_Y_ORG[si] */
	bl = m2c::getdata(((mfd*)raddr(ds,si))->mfd_y_org);
	/* add	bl,2 */
	ADD(bl, 2);
	/* mov	cx,MFD_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,MFD_WIDTH-1 */
	ADD(dx, 64-1);
	/* add	cx,4 */
	ADD(cx, 4);
	/* sub	dx,4 */
	SUB(dx, 4);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* add	bl,8 */
	ADD(bl, 8);
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* print text
	/* mov	si,OFFSET AFDS$ */
	si = m2c::near_offset_external(afdsdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* sort approach "time to go"
	/* cmp	AutoMode,AUTO_APPROACH	;approach? */
	CMP(automode, 2);
	/* jne	SkipApprTTG		;no -> */
	if ((dw)(automode) != (dw)(2)) {goto skipapprttg;}
	/* mov	si,OFFSET TTG$ */
	si = m2c::near_offset_external(ttgdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET TTGInvalid$	;assume invalid */
	si = m2c::near_offset_external(ttginvaliddol);
	/* test	ILSActive,1		;ILS active? */
	TEST(ilsactive, 1);
	/* jz	@F			;no -> */
	if (!(ilsactive & 1)) {goto dummylabel43;}
	/* mov	si,OFFSET TTGApproach$ */
	si = m2c::near_offset_external(ttgapproachdol);
dummylabel43:
	// 4729 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* jmp	ExitAutoDisp */
	goto exitautodisp;
	// 0 ;* sort waypoint ID for track mode (cannot select track mode if no waypoints)
skipapprttg:
	// 4731 
	/* SkipApprTTG: 	cmp	AutoMode,AUTO_TRACK	;track mode? */
	CMP(automode, 4);
	/* je	__m2c_macrolocal_124_skip */
	if ((dw)(automode) == (dw)(4)) {goto __m2c_macrolocal_124_skip;}
	/* jmp	ExitAutoDisp */
	goto exitautodisp;
__m2c_macrolocal_124_skip:
	// 4733 
	// 0 ;no ->
	/* mov	ax,XOrg */
	ax = xorg;
	/* add	ax,13*4 */
	ADD(ax, 13*4);
	/* mov	PrtCl,ax */
	prtcl = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* add	ax,4 */
	ADD(ax, 4);
	/* mov	PrtLn,ax */
	prtln = ax;
	/* mov	si,WPPtr */
	si = wpptr;
	/* mov	al,[si].WP_ID */
	al = m2c::getdata(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_id)));
	/* call	PrintChar */
	CALLF(printchar, 0);
	// 0 ;* sort track "time to go"
	/* mov	si,OFFSET TTG$ */
	si = m2c::near_offset_external(ttgdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET TTGInvalid$	;assume invalid */
	si = m2c::near_offset_external(ttginvaliddol);
	/* cmp	WPETA,-1		;TTG valid? */
	CMP(wpeta, -1);
	/* je	@F			;no -> */
	if ((dw)(wpeta) == (dw)(-1)) {goto dummylabel44;}
	/* mov	si,OFFSET TTGTrack$ */
	si = m2c::near_offset_external(ttgtrackdol);
dummylabel44:
	// 4735 
	/* @@:	    	call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* sort track "time early / late"
	/* mov	si,OFFSET TEL$ */
	si = m2c::near_offset_external(teldol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	ax,WPTimeEarlyLate */
	ax = wptimeearlylate;
	/* cmp	ax,-32768 	;TEL valid? */
	CMP(ax, -32768);
	/* jne	@F		;yes -> */
	if ((dw)(ax) != (dw)(-32768)) {goto dummylabel45;}
	/* mov	si,OFFSET TELInvalid$ */
	si = m2c::near_offset_external(telinvaliddol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp	ExitAutoDisp */
	goto exitautodisp;
dummylabel45:
	// 4737 
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;calc display value
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	bx,100 */
	bx = 100;
	/* div	bx */
	DIV2(bx);
	/* mov	WPTEL,ax */
	wptel = ax;
	/* mov	si,OFFSET TELValid$ */
	si = m2c::near_offset_external(telvaliddol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* cmp	WPTEL,0		;on time (according to display value)? */
	CMP(wptel, 0);
	/* je	ExitAutoDisp	;yes -> */
	if ((dw)(wptel) == (dw)(0)) {goto exitautodisp;}
	/* mov	si,OFFSET Early$	;assume early */
	si = m2c::near_offset_external(earlydol);
	/* cmp	WPTimeEarlyLate,0	;early? */
	CMP(wptimeearlylate, 0);
	/* jge	@F			;yes -> */
	if ((short)(wptimeearlylate) >= (short)(0)) {goto dummylabel46;}
	/* mov	si,OFFSET Late$ */
	si = m2c::near_offset_external(latedol);
dummylabel46:
	// 4739 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
exitautodisp:
	// 4741 
	/* ExitAutoDisp:	ret */
	RETN(0);
sortaltdol:
	// 5244 
	/* mov	bx,AltMode ;* kill: assume all */
	bx = altmode;
edummylabel15:
	// 4743 
__disp=*(dw*)(((db*)&altswitch)+bx);
	/* jmp	AltSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
altmanual:
	// 4745 
	// 0 ;---------------------------
	/* mov	AltPtr,OFFSET Manual$ */
	altptr = m2c::near_offset_external(manualdol);
	/* jmp	ExitAlt$ */
	goto exitaltdol;
	// 0 ;---------------------------
altapproach:
	// 4747 
	// 0 ;---------------------------
	/* mov	AltPtr,OFFSET Auto$ */
	altptr = m2c::near_offset_external(autodol);
	/* jmp	ExitAlt$ */
	goto exitaltdol;
	// 0 ;---------------------------
altacquire:
	// 4749 
	// 0 ;---------------------------
	/* mov	AltPtr,OFFSET Acquire$ */
	altptr = m2c::near_offset_external(acquiredol);
	/* mov	ax,AutoAlt */
	ax = autoalt;
	/* mov	di,OFFSET Alt$	;assume zero */
	di = m2c::near_offset_external(altdol);
	/* test	ax,ax		;zero? */
	TEST(ax, ax);
	/* jz	@F		;yes (avoid printing "00") -> */
	if (!(ax & ax)) {goto dummylabel47;}
	/* mov	BYTE PTR Alt$[4],'0' */
	*((altdol)+4) = '0';
	/* dec	di */
	DEC(di);
dummylabel47:
	// 4751 
	/* @@:		call	DecWord$ */
	CALLF(decworddol, 0);
	/* jmp	ExitAlt$ */
	goto exitaltdol;
	// 0 ;---------------------------
alttf:
	// 4753 
	// 0 ;---------------------------
	/* mov	AltPtr,OFFSET Ride$ */
	altptr = m2c::near_offset_external(ridedol);
	/* mov	ax,TFRideAlt */
	ax = tfridealt;
	/* mov	di,OFFSET Alt$ */
	di = m2c::near_offset_external(altdol);
	/* call	DecWord$ */
	CALLF(decworddol, 0);
exitaltdol:
	// 4755 
	/* ExitAlt$:	ret */
	RETN(0);
sorthdgdol:
	// 5290 
	/* mov	bx,HdgMode ;* kill: assume all */
	bx = hdgmode;
edummylabel16:
	// 4757 
__disp=*(dw*)(((db*)&hdgswitch)+bx);
	/* jmp	HdgSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
hdgmanual:
	// 4759 
	// 0 ;---------------------------
	/* mov	HdgPtr,OFFSET Manual$ */
	hdgptr = m2c::near_offset_external(manualdol);
	/* jmp	ExitHdg$ */
	goto exithdgdol;
	// 0 ;---------------------------
hdgapproach:
	// 4761 
	// 0 ;---------------------------
	/* mov	HdgPtr,OFFSET Auto$ */
	hdgptr = m2c::near_offset_external(autodol);
	/* jmp	ExitHdg$ */
	goto exithdgdol;
	// 0 ;---------------------------
hdgacquire:
	// 4763 
	// 0 ;---------------------------
	/* mov	HdgPtr,OFFSET Acquire$ */
	hdgptr = m2c::near_offset_external(acquiredol);
	/* mov	ax,AutoHdg */
	ax = autohdg;
	/* mov	dx,AutoHdgFine */
	dx = autohdgfine;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* jnz	@F */
	if (ax != 0) {goto dummylabel48;}
	/* mov	ax,360		;display 0 as 360 */
	ax = 360;
dummylabel48:
	// 4765 
	/* @@:		mov	di,OFFSET Hdg$ */
	di = m2c::near_offset_external(hdgdol);
	/* call	DecWord$ */
	CALLF(decworddol, 0);
	/* jmp	ExitHdg$ */
	goto exithdgdol;
	// 0 ;---------------------------
hdgtrack:
	// 4767 
	// 0 ;---------------------------
	/* mov	HdgPtr,OFFSET Auto$ */
	hdgptr = m2c::near_offset_external(autodol);
exithdgdol:
	// 4769 
	/* ExitHdg$:	ret */
	RETN(0);
ilsdisp:
	// 5336 
	/* call	ClearDisp ;* note: Do not use XC and YC co-ords for ILS display. */
	CALL(cleardisp, 0);
	// 0 ;* draw datum dots (localiser)
edummylabel17:
	// 4771 
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2-24 */
	ADD(cx, 64/2-24);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2 */
	ADD(bl, 48/2);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2-12 */
	ADD(cx, 64/2-12);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2 */
	ADD(bl, 48/2);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2 */
	ADD(cx, 64/2);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2 */
	ADD(bl, 48/2);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2+12 */
	ADD(cx, 64/2+12);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2 */
	ADD(bl, 48/2);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2+24 */
	ADD(cx, 64/2+24);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2 */
	ADD(bl, 48/2);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* draw datum dots (glide slope)
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2 */
	ADD(cx, 64/2);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2-20 */
	ADD(bl, 48/2-20);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2 */
	ADD(cx, 64/2);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2-10 */
	ADD(bl, 48/2-10);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2 */
	ADD(cx, 64/2);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2+10 */
	ADD(bl, 48/2+10);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,MFD_WIDTH/2 */
	ADD(cx, 64/2);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,MFD_DEPTH/2+20 */
	ADD(bl, 48/2+20);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* print data
	/* mov	si,OFFSET ILSSetUp$ */
	si = m2c::near_offset_external(ilssetupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET ILSInActive$ */
	si = m2c::near_offset_external(ilsinactivedol);
	/* test	ILSActive,1	;ILS active? */
	TEST(ilsactive, 1);
	/* jz	@F		;no -> */
	if (!(ilsactive & 1)) {goto dummylabel49;}
	/* mov	si,OFFSET ILSActive$ */
	si = m2c::near_offset_external(ilsactivedol);
dummylabel49:
	// 4773 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* test if in ILS beam
	/* test	ILSActive,1	;in ILS beam? */
	TEST(ilsactive, 1);
	/* jz	ILSExit		;no -> */
	if (!(ilsactive & 1)) {goto ilsexit;}
	// 0 ;* draw localiser needle
	/* mov	ax,ILSLocalPos */
	ax = ilslocalpos;
	/* mov	dx,-MFD_WIDTH/2 */
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
	/* add	cx,MFD_WIDTH/2 */
	ADD(cx, 64/2);
	/* cmp	cx,MFD_WIDTH	;off screen? */
	CMP(cx, 64);
	/* jb	@F		;no -> */
	if ((dw)(cx) < (dw)(64)) {goto dummylabel50;}
	/* mov	cx,MFD_WIDTH-1 */
	cx = 64-1;
dummylabel50:
	// 4775 
	/* @@:		add	cx,XOrg */
	ADD(cx, xorg);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,MFD_DEPTH-1 */
	ADD(bh, 48-1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* draw glide slope needle
	/* mov	ax,ILSGlidePos */
	ax = ilsglidepos;
	/* mov	dx,MFD_DEPTH/2 */
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
	/* add	bl,MFD_DEPTH/2 */
	ADD(bl, 48/2);
	/* cmp	bl,MFD_DEPTH	;off screen? */
	CMP(bl, 48);
	/* jb	@F		;no -> */
	if ((db)(bl) < (db)(48)) {goto dummylabel51;}
	/* mov	bl,MFD_DEPTH-1 */
	bl = 48-1;
dummylabel51:
	// 4777 
	/* @@:		add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,MFD_WIDTH-1 */
	ADD(dx, 64-1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
ilsexit:
	// 4779 
	/* ILSExit:	ret */
	RETN(0);
flirdisp:
	// 5459 
	/* cmp	si,OFFSET PILOT_MFD	;Pilot's MFD? */
	CMP(si, m2c::near_offset_external(pilot_mfd));
edummylabel18:
	// 4781 
	/* je	DontGoNavMFD */
	if (ZF) {goto dontgonavmfd;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR	;TAB1 FLIR selected? */
	CMP(tab1.tab_mode, 6);
	/* je	@F */
	if ((dw)(tab1.tab_mode) == (dw)(6)) {goto dummylabel52;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD	;TAB1 TIALD selected? */
	CMP(tab1.tab_mode, 10);
	/* je	@F */
	if ((dw)(tab1.tab_mode) == (dw)(10)) {goto dummylabel52;}
	/* mov	ax,TV1_VIEWMODE	;set viewmode for MFD */
	ax = 6;
	/* jmp Zebra */
	goto zebra;
dummylabel52:
	// 4783 
	/* mov	ax,TV1_VIEWMODE	;set viewmode for MFD */
	ax = 6;
	/* jmp Zebra */
	goto zebra;
dontgonavmfd:
	// 4785 
	// 0 ;no ->
	/* mov	ax,EXT_VIEWMODE	;set viewmode for MFD */
	ax = 4;
	/* cmp IronWork, 1 */
	CMP(ironwork, 1);
	/* jne SkipMovIronWork0 */
	if ((dw)(ironwork) != (dw)(1)) {goto skipmovironwork0;}
	/* mov	IronWork,0 ;hacked by Frankie 30/11/2017 */
	ironwork = 0;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 5482 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 5483 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 5484 mov	di,OFFSET TMP_VIEW */
	// 5485 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,INT_VIEWMODE		;assume pilot view */
	ax = 0;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel53;}
	/* mov	ax,NUL_VIEWMODE		;nav view */
	ax = 0;
dummylabel53:
	// 4787 
	/* @@:		call	SetViewMode */
	CALLF(setviewmode, 0);
	/* cmp	PILOT_MFD.MFD_MODE,MFD_FLIR	;TAB2's FLIR selected? */
	CMP(pilot_mfd.mfd_mode, 10);
	/* jne BypassEScope2 ;yes -> */
	if ((dw)(pilot_mfd.mfd_mode) != (dw)(10)) {goto bypassescope2;}
bypassescope2:
	// 4789 
	/* call LoadExtrnPan */
	CALL(loadextrnpan, 0);
	/* call UpdateExtrn */
	CALL(updateextrn, 0);
	/* call RotateHdg */
	CALL(rotatehdg, 0);
	/* call UpdateHUD2 */
	CALL(updatehud2, 0);
	/* call UpdateRWR */
	CALL(updaterwr, 0);
	/* mov	IronWork,1 */
	ironwork = 1;
	/* ret */
	RETN(0);
skipmovironwork0:
	// 4791 
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 5511 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 5512 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 5513 mov	di,OFFSET TMP_VIEW */
	// 5514 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,INT_VIEWMODE		;assume pilot view */
	ax = 0;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel54;}
	/* mov	ax,NUL_VIEWMODE		;nav view */
	ax = 0;
dummylabel54:
	// 4793 
	/* @@:		call	SetViewMode */
	CALLF(setviewmode, 0);
	/* cmp	PILOT_MFD.MFD_MODE,MFD_FLIR	;TAB2's FLIR selected? */
	CMP(pilot_mfd.mfd_mode, 10);
	/* jne BypassEScope2b ;yes -> */
	if ((dw)(pilot_mfd.mfd_mode) != (dw)(10)) {goto bypassescope2b;}
bypassescope2b:
	// 4795 
	/* call LoadExtrnPan */
	CALL(loadextrnpan, 0);
	/* call UpdateExtrn */
	CALL(updateextrn, 0);
	/* call UpdateHUD2 */
	CALL(updatehud2, 0);
	/* call UpdateRWR */
	CALL(updaterwr, 0);
	/* ret */
	RETN(0);
zebra:
	// 4797 
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 5538 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 5539 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 5540 mov	di,OFFSET TMP_VIEW */
	// 5541 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,INT_VIEWMODE		;assume pilot view */
	ax = 0;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel55;}
	/* mov	ax,NUL_VIEWMODE		;nav view */
	ax = 0;
dummylabel55:
	// 4799 
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
drawirimage:
	// 5564 
	// 0 ;----------------------------
	// 0 ;* store visual configuration
	// 0 ;----------------------------
edummylabel19:
	// 4801 
	/* push	WORD PTR GradEnabled */
	PUSH(*(dw*)(&gradenabled));
	/* push	WORD PTR StarsEnabled */
	PUSH(*(dw*)(&starsenabled));
	/* push	WORD PTR CloudsEnabled */
	PUSH(*(dw*)(&cloudsenabled));
	/* push	WORD PTR HillTextEnabled */
	PUSH(*(dw*)(&hilltextenabled));
	/* push	SecScanCnt1 */
	PUSH(secscancnt1);
	/* push	SecScanOff1 */
	PUSH(secscanoff1);
	/* push	SecScanCnt2 */
	PUSH(secscancnt2);
	/* push	SecScanOff2 */
	PUSH(secscanoff2);
	// 0 ;-----------------------------
	// 0 ;* modify visual configuration
	// 0 ;-----------------------------
	// 0 ;* if night or foggy use IR visual colours
	// 0 ;cmp	Night,1		;night level1?
	// 0 ;je	SkipIRCols	;yes ->
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel56;}
	/* cmp	Fog,0		;foggy */
	CMP(fog, 0);
	/* je	SkipIRCols	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipircols;}
dummylabel56:
	// 4803 
	// 0 ;cmp Night,1
	// 0 ;je SkipIRCols   ;The user had earlier switched NVG on, so do not reset!
	// 0 ;call SetIRPalette ;Safe to reset the NVG to normal colors
	// 0 ;call CheckForNVG
	// 0 ;mov	GradEnabled,0
	// 0 ;mov	StarsEnabled,0
	// 0 ;mov	CloudsEnabled,0
	// 0 ;mov	GradEnabled,1   ;hack by Frankie 30/11/17
	// 0 ;mov	StarsEnabled,0  ;hack by Frankie 30/11/17
	// 0 ;mov	CloudsEnabled,0 ;hack by Frankie 30/11/17
skipircols:
	// 4805 
	/* SkipIRCols:	mov	HillTextEnabled,0 */
	hilltextenabled = 0;
	// 0 ;* sector scan = max(sector scan, 7 * 7)
	/* cmp	SecScanCnt1,7		;sector scan <= 7 * 7 scan? */
	CMP(secscancnt1, 7);
	/* jbe	@F			;yes -> */
	if ((dw)(secscancnt1) <= (dw)(7)) {goto dummylabel57;}
	/* mov	SecScanCnt1,7		;reduce range */
	secscancnt1 = 7;
	/* mov	SecScanOff1,-3 */
	secscanoff1 = -3;
	/* mov	SecScanCnt2,7 */
	secscancnt2 = 7;
	/* mov	SecScanOff2,-3 */
	secscanoff2 = -3;
	// 0 ;----------------
	// 0 ;* draw IR visual
	// 0 ;----------------
dummylabel57:
	// 4807 
	/* @@:		mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	Visual */
	CALLF(visual, 0);
	// 0 ;------------------------------
	// 0 ;* restore visual configuration
	// 0 ;------------------------------
	/* pop	SecScanOff2 */
	POP(secscanoff2);
	/* pop	SecScanCnt2 */
	POP(secscancnt2);
	/* pop	SecScanOff1 */
	POP(secscanoff1);
	/* pop	SecScanCnt1 */
	POP(secscancnt1);
	/* pop	WORD PTR HillTextEnabled */
	POP(*(dw*)(&hilltextenabled));
	/* pop	WORD PTR CloudsEnabled */
	POP(*(dw*)(&cloudsenabled));
	/* pop	WORD PTR StarsEnabled */
	POP(*(dw*)(&starsenabled));
	/* pop	WORD PTR GradEnabled */
	POP(*(dw*)(&gradenabled));
	// 0 ;* if night or foggy restore visual colours
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel58;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipFixCols	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipfixcols;}
dummylabel58:
	// 4809 
	// 0 ;cmp Night,1
	// 0 ;je SkipFixCols   ;The user had earlier switched NVG on, so do not reset!
	// 0 ;call FixIRPalette ;Safe to reset the NVG to normal colors
	// 0 ;call CheckForUNNVG
skipfixcols:
	// 4811 
	/* mov	ax,NUL_VIEWMODE ;does this have any effect? */
	ax = 0;
	/* call	SetViewMode	;does this have any effect? */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
cleardisp:
	// 5650 
	/* push	si ;* kill: assume all (except si) */
	PUSH(si);
edummylabel20:
	// 4813 
	/* mov	al,COL_CRT1 */
	al = 160;
	/* mov	cx,MFD_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	bl,MFD_Y_ORG[si] */
	bl = m2c::getdata(((mfd*)raddr(ds,si))->mfd_y_org);
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,MFD_WIDTH-1 */
	ADD(dx, 64-1);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,MFD_DEPTH-1 */
	ADD(bh, 48-1);
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
damageddisp:
	// 5671 
	/* call	ClearDisp ;* kill: assume all */
	CALL(cleardisp, 0);
edummylabel21:
	// 4815 
	/* mov	cx,24 */
	cx = 24;
damagedloop:
	// 4817 
	/* DamagedLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,03fh */
	AND(al, 0x03f);
	/* cmp	al,MFD_DEPTH */
	CMP(al, 48);
	/* jae	NextDamage */
	if ((db)(al) >= (db)(48)) {goto nextdamage;}
	/* add	al,MFD_Y_ORG[si] */
	ADD(al, ((mfd*)raddr(ds,si))->mfd_y_org);
	/* mov	bl,al */
	bl = al;
	/* mov	cx,MFD_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,MFD_WIDTH-1 */
	ADD(dx, 64-1);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
nextdamage:
	// 4819 
	/* NextDamage:	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* loop	DamagedLoop */
	LOOP(damagedloop);
	/* ret */
	RETN(0);
damageddispmfd:
	// 5701 
	/* call	ClearDisp ;* kill: assume all */
	CALL(cleardisp, 0);
edummylabel22:
	// 4821 
	/* mov	cx,24 */
	cx = 24;
damagedloop2:
	// 4823 
	/* DamagedLoop2:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,03fh */
	AND(al, 0x03f);
	/* cmp	al,MFD_DEPTH */
	CMP(al, 48);
	/* jae	NextDamage2 */
	if ((db)(al) >= (db)(48)) {goto nextdamage2;}
	/* add	al,MFD_Y_ORG[si] */
	ADD(al, ((mfd*)raddr(ds,si))->mfd_y_org);
	/* mov	bl,al */
	bl = al;
	/* mov	cx,MFD_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,MFD_WIDTH-1 */
	ADD(dx, 64-1);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
nextdamage2:
	// 4825 
	/* NextDamage2:	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* loop	DamagedLoop2 */
	LOOP(damagedloop2);
	/* ret */
	RETN(0);
invaliddisp:
	// 5729 
	/* call	ClearDisp ;* kill: assume all (except si) */
	CALL(cleardisp, 0);
edummylabel23:
	// 4827 
	/* mov	bl,MFD_Y_ORG[si] */
	bl = m2c::getdata(((mfd*)raddr(ds,si))->mfd_y_org);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-20 */
	ADD(bl, (48/2-1)-20);
	/* add	bh,YC+20 */
	ADD(bh, (48/2-1)+20);
	/* mov	cx,MFD_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC-20 */
	ADD(cx, (64/2)-20);
	/* add	dx,XC+20 */
	ADD(dx, (64/2)+20);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* mov	bl,MFD_Y_ORG[si] */
	bl = m2c::getdata(((mfd*)raddr(ds,si))->mfd_y_org);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-20 */
	ADD(bl, (48/2-1)-20);
	/* add	bh,YC+20 */
	ADD(bh, (48/2-1)+20);
	/* mov	cx,MFD_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC+20 */
	ADD(cx, (64/2)+20);
	/* add	dx,XC-20 */
	ADD(dx, (64/2)-20);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
updatemapzoom:
	// 5765 
	/* mov	al,BYTE PTR KF_MapZoomIn[K_STATUS] ;* kill: assume all (except si) */
	al = *((&kf_mapzoomin)+k_status);
edummylabel24:
	// 4829 
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_mapzoomin)+k_status););	// 5769 						mov	al,BYTE PTR KF_MapZoomIn[K_STATUS] */
	/* jz	SkipZoomIn */
	if (!(al & al)) {goto skipzoomin;}
	/* cmp	MFD_MAP_ZOOM[si],MAP_ZOOM6	;fully zoomed in? */
	CMP(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom)), map_zoom6);
	/* je	SkipZoomIn			;yes -> */
	if ((dw)(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom))) == (dw)(map_zoom6)) {goto skipzoomin;}
	/* add	MFD_MAP_ZOOM[si],2 */
	ADD(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom)), 2);
	/* jmp	SkipZoomOut */
	goto skipzoomout;
skipzoomin:
	// 4831 
	/* SkipZoomIn:	mov	al,BYTE PTR KF_MapZoomOut[K_STATUS] */
	al = *((&kf_mapzoomout)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_mapzoomout)+k_status););	// 5777 mov	al,BYTE PTR KF_MapZoomOut[K_STATUS] */
	/* jz	SkipZoomOut */
	if (!(al & al)) {goto skipzoomout;}
	/* cmp	MFD_MAP_ZOOM[si],MAP_ZOOM1	;fully zoomed out? */
	CMP(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom)), map_zoom1);
	/* je	SkipZoomOut	 	 	;yes -> */
	if ((dw)(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom))) == (dw)(map_zoom1)) {goto skipzoomout;}
	/* sub	MFD_MAP_ZOOM[si],2 */
	SUB(*(dw*)(((db*)&((mfd*)raddr(ds,si))->mfd_map_zoom)), 2);
skipzoomout:
	// 4833 
	/* SkipZoomOut:	ret */
	RETN(0);
flirdisp_ori:
	// 5816 
	/* mov	ax,TV1_VIEWMODE	;set viewmode for MFD */
	ax = 6;
edummylabel25:
	// 4835 
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 5825 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 5826 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 5827 mov	di,OFFSET TMP_VIEW */
	// 5828 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,INT_VIEWMODE		;assume pilot view */
	ax = 0;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel59;}
	/* mov	ax,NUL_VIEWMODE		;nav view */
	ax = 0;
dummylabel59:
	// 4837 
	/* @@:		call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
rotatehdg:
	// 5847 
	// 0 ;* sort rotate right
edummylabel26:
	// 4839 
	/* mov	al,BYTE PTR KF_TrackAClk[K_STATUS] */
	al = *((&kf_trackaclk)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_trackaclk)+k_status););	// 5853 						mov	al,BYTE PTR KF_TrackAClk[K_STATUS] */
	/* jz	SkipRotateRt */
	if (!(al & al)) {goto skiprotatert;}
	/* mov	ax,32*256	;32 pdeg / sec track (*256 scaling) */
	ax = 32*256;
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
	/* mov	ax,dx */
	ax = dx;
	/* xor	dh,dh		;*256 = *65536 scaling */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	// 0 ;* fast rotate?
	/* test	BYTE PTR KF_FastTrkAClk[K_STATUS],1 */
	TEST(*((&kf_fasttrkaclk)+k_status), 1);
	/* jz	@F */
	if (!(*((&kf_fasttrkaclk)+k_status) & 1)) {goto dummylabel60;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel60:
	// 4841 
	/* @@:		sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
	/* jmp	SkipRotateLt */
	goto skiprotatelt;
	// 0 ;* sort rotate left
skiprotatert:
	// 4843 
	/* SkipRotateRt:	mov	al,BYTE PTR KF_TrackClk[K_STATUS] */
	al = *((&kf_trackclk)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_trackclk)+k_status););	// 5884 mov	al,BYTE PTR KF_TrackClk[K_STATUS] */
	/* jz	SkipRotateLt */
	if (!(al & al)) {goto skiprotatelt;}
	/* mov	ax,32*256	;32 pdeg / sec track (*256 scaling) */
	ax = 32*256;
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
	/* mov	ax,dx */
	ax = dx;
	/* xor	dh,dh		;*256 = *65536 scaling */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	// 0 ;* fast rotate?
	/* test	BYTE PTR KF_FastTrkClk[K_STATUS],1 */
	TEST(*((&kf_fasttrkclk)+k_status), 1);
	/* jz	@F */
	if (!(*((&kf_fasttrkclk)+k_status) & 1)) {goto dummylabel61;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel61:
	// 4845 
	/* @@:		add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
skiprotatelt:
	// 4847 
	/* SkipRotateLt:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_100_testhi: 	goto __m2c_macrolocal_100_testhi;
        case m2c::k__m2c_macrolocal_100_testok: 	goto __m2c_macrolocal_100_testok;
        case m2c::k__m2c_macrolocal_101_testhi: 	goto __m2c_macrolocal_101_testhi;
        case m2c::k__m2c_macrolocal_101_testok: 	goto __m2c_macrolocal_101_testok;
        case m2c::k__m2c_macrolocal_102_skippixel: 	goto __m2c_macrolocal_102_skippixel;
        case m2c::k__m2c_macrolocal_103_skippixel: 	goto __m2c_macrolocal_103_skippixel;
        case m2c::k__m2c_macrolocal_104_skippixel: 	goto __m2c_macrolocal_104_skippixel;
        case m2c::k__m2c_macrolocal_105_skippixel: 	goto __m2c_macrolocal_105_skippixel;
        case m2c::k__m2c_macrolocal_106_skippixel: 	goto __m2c_macrolocal_106_skippixel;
        case m2c::k__m2c_macrolocal_107_skippixel: 	goto __m2c_macrolocal_107_skippixel;
        case m2c::k__m2c_macrolocal_108_skippixel: 	goto __m2c_macrolocal_108_skippixel;
        case m2c::k__m2c_macrolocal_109_skippixel: 	goto __m2c_macrolocal_109_skippixel;
        case m2c::k__m2c_macrolocal_110_skip: 	goto __m2c_macrolocal_110_skip;
        case m2c::k__m2c_macrolocal_111_skippixel: 	goto __m2c_macrolocal_111_skippixel;
        case m2c::k__m2c_macrolocal_112_skippixel: 	goto __m2c_macrolocal_112_skippixel;
        case m2c::k__m2c_macrolocal_113_skippixel: 	goto __m2c_macrolocal_113_skippixel;
        case m2c::k__m2c_macrolocal_114_skippixel: 	goto __m2c_macrolocal_114_skippixel;
        case m2c::k__m2c_macrolocal_115_skippixel: 	goto __m2c_macrolocal_115_skippixel;
        case m2c::k__m2c_macrolocal_116_skippixel: 	goto __m2c_macrolocal_116_skippixel;
        case m2c::k__m2c_macrolocal_117_skippixel: 	goto __m2c_macrolocal_117_skippixel;
        case m2c::k__m2c_macrolocal_118_skippixel: 	goto __m2c_macrolocal_118_skippixel;
        case m2c::k__m2c_macrolocal_119_skippixel: 	goto __m2c_macrolocal_119_skippixel;
        case m2c::k__m2c_macrolocal_120_skippixel: 	goto __m2c_macrolocal_120_skippixel;
        case m2c::k__m2c_macrolocal_121_skippixel: 	goto __m2c_macrolocal_121_skippixel;
        case m2c::k__m2c_macrolocal_122_skippixel: 	goto __m2c_macrolocal_122_skippixel;
        case m2c::k__m2c_macrolocal_123_skippixel: 	goto __m2c_macrolocal_123_skippixel;
        case m2c::k__m2c_macrolocal_124_skip: 	goto __m2c_macrolocal_124_skip;
        case m2c::k__m2c_macrolocal_59_skip: 	goto __m2c_macrolocal_59_skip;
        case m2c::k__m2c_macrolocal_60_skip: 	goto __m2c_macrolocal_60_skip;
        case m2c::k__m2c_macrolocal_65_skip: 	goto __m2c_macrolocal_65_skip;
        case m2c::k__m2c_macrolocal_66_skip: 	goto __m2c_macrolocal_66_skip;
        case m2c::k__m2c_macrolocal_67_skip: 	goto __m2c_macrolocal_67_skip;
        case m2c::k__m2c_macrolocal_68_testhi: 	goto __m2c_macrolocal_68_testhi;
        case m2c::k__m2c_macrolocal_68_testok: 	goto __m2c_macrolocal_68_testok;
        case m2c::k__m2c_macrolocal_69_testhi: 	goto __m2c_macrolocal_69_testhi;
        case m2c::k__m2c_macrolocal_69_testok: 	goto __m2c_macrolocal_69_testok;
        case m2c::k__m2c_macrolocal_70_testhi: 	goto __m2c_macrolocal_70_testhi;
        case m2c::k__m2c_macrolocal_70_testok: 	goto __m2c_macrolocal_70_testok;
        case m2c::k__m2c_macrolocal_71_testhi: 	goto __m2c_macrolocal_71_testhi;
        case m2c::k__m2c_macrolocal_71_testok: 	goto __m2c_macrolocal_71_testok;
        case m2c::k__m2c_macrolocal_72_skip: 	goto __m2c_macrolocal_72_skip;
        case m2c::k__m2c_macrolocal_75_skip: 	goto __m2c_macrolocal_75_skip;
        case m2c::k__m2c_macrolocal_76_skip: 	goto __m2c_macrolocal_76_skip;
        case m2c::k__m2c_macrolocal_77_skippixel: 	goto __m2c_macrolocal_77_skippixel;
        case m2c::k__m2c_macrolocal_78_skippixel: 	goto __m2c_macrolocal_78_skippixel;
        case m2c::k__m2c_macrolocal_79_skippixel: 	goto __m2c_macrolocal_79_skippixel;
        case m2c::k__m2c_macrolocal_80_skippixel: 	goto __m2c_macrolocal_80_skippixel;
        case m2c::k__m2c_macrolocal_81_skippixel: 	goto __m2c_macrolocal_81_skippixel;
        case m2c::k__m2c_macrolocal_82_skippixel: 	goto __m2c_macrolocal_82_skippixel;
        case m2c::k__m2c_macrolocal_83_skippixel: 	goto __m2c_macrolocal_83_skippixel;
        case m2c::k__m2c_macrolocal_84_skippixel: 	goto __m2c_macrolocal_84_skippixel;
        case m2c::k__m2c_macrolocal_85_skip: 	goto __m2c_macrolocal_85_skip;
        case m2c::k__m2c_macrolocal_86_skippixel: 	goto __m2c_macrolocal_86_skippixel;
        case m2c::k__m2c_macrolocal_87_skippixel: 	goto __m2c_macrolocal_87_skippixel;
        case m2c::k__m2c_macrolocal_88_skippixel: 	goto __m2c_macrolocal_88_skippixel;
        case m2c::k__m2c_macrolocal_89_skippixel: 	goto __m2c_macrolocal_89_skippixel;
        case m2c::k__m2c_macrolocal_90_skippixel: 	goto __m2c_macrolocal_90_skippixel;
        case m2c::k__m2c_macrolocal_91_skippixel: 	goto __m2c_macrolocal_91_skippixel;
        case m2c::k__m2c_macrolocal_92_skippixel: 	goto __m2c_macrolocal_92_skippixel;
        case m2c::k__m2c_macrolocal_93_skippixel: 	goto __m2c_macrolocal_93_skippixel;
        case m2c::k__m2c_macrolocal_96_skip: 	goto __m2c_macrolocal_96_skip;
        case m2c::k__m2c_macrolocal_97_skip: 	goto __m2c_macrolocal_97_skip;
        case m2c::k__m2c_macrolocal_98_testhi: 	goto __m2c_macrolocal_98_testhi;
        case m2c::k__m2c_macrolocal_98_testok: 	goto __m2c_macrolocal_98_testok;
        case m2c::k__m2c_macrolocal_99_testhi: 	goto __m2c_macrolocal_99_testhi;
        case m2c::k__m2c_macrolocal_99_testok: 	goto __m2c_macrolocal_99_testok;
        case m2c::kairradar: 	goto airradar;
        case m2c::kairtgtloop1: 	goto airtgtloop1;
        case m2c::kairtgtloop2: 	goto airtgtloop2;
        case m2c::kaltacquire: 	goto altacquire;
        case m2c::kaltapproach: 	goto altapproach;
        case m2c::kaltmanual: 	goto altmanual;
        case m2c::kalttf: 	goto alttf;
        case m2c::kautopilotdisp: 	goto autopilotdisp;
        case m2c::kbypassescope2: 	goto bypassescope2;
        case m2c::kbypassescope2b: 	goto bypassescope2b;
        case m2c::kcheck_mfdselect: 	goto check_mfdselect;
        case m2c::kchecktabmap: 	goto checktabmap;
        case m2c::kcleardisp: 	goto cleardisp;
        case m2c::kcontairradar: 	goto contairradar;
        case m2c::kcontautodisp: 	goto contautodisp;
        case m2c::kcontgmrdes: 	goto contgmrdes;
        case m2c::kcontgmrmap: 	goto contgmrmap;
        case m2c::kcontsteal: 	goto contsteal;
        case m2c::kdamaged: 	goto damaged;
        case m2c::kdamageddisp: 	goto damageddisp;
        case m2c::kdamageddispmfd: 	goto damageddispmfd;
        case m2c::kdamagedloop: 	goto damagedloop;
        case m2c::kdamagedloop2: 	goto damagedloop2;
        case m2c::kdecradrange: 	goto decradrange;
        case m2c::kdontgonavmfd: 	goto dontgonavmfd;
        case m2c::kdrawirimage: 	goto drawirimage;
        case m2c::kdrawmoballied: 	goto drawmoballied;
        case m2c::kdrawmobenemy: 	goto drawmobenemy;
        case m2c::kdrawmobsymbol: 	goto drawmobsymbol;
        case m2c::kdrawradarmask: 	goto drawradarmask;
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
        case m2c::kdummylabel54: 	goto dummylabel54;
        case m2c::kdummylabel55: 	goto dummylabel55;
        case m2c::kdummylabel56: 	goto dummylabel56;
        case m2c::kdummylabel57: 	goto dummylabel57;
        case m2c::kdummylabel58: 	goto dummylabel58;
        case m2c::kdummylabel59: 	goto dummylabel59;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel60: 	goto dummylabel60;
        case m2c::kdummylabel61: 	goto dummylabel61;
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
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitaltdol: 	goto exitaltdol;
        case m2c::kexitautodisp: 	goto exitautodisp;
        case m2c::kexithdgdol: 	goto exithdgdol;
        case m2c::kexitmobsymbol: 	goto exitmobsymbol;
        case m2c::kexitsteal: 	goto exitsteal;
        case m2c::kfailsnapmobile: 	goto failsnapmobile;
        case m2c::kfailsnapstatic: 	goto failsnapstatic;
        case m2c::kfailtabmap: 	goto failtabmap;
        case m2c::kflashok: 	goto flashok;
        case m2c::kflirdisp: 	goto flirdisp;
        case m2c::kflirdisp_ori: 	goto flirdisp_ori;
        case m2c::kgmrdecrange: 	goto gmrdecrange;
        case m2c::kgmrincrange: 	goto gmrincrange;
        case m2c::kgmrrangeok: 	goto gmrrangeok;
        case m2c::kgndmappingradar: 	goto gndmappingradar;
        case m2c::khdgacquire: 	goto hdgacquire;
        case m2c::khdgapproach: 	goto hdgapproach;
        case m2c::khdgmanual: 	goto hdgmanual;
        case m2c::khdgtrack: 	goto hdgtrack;
        case m2c::kilsdisp: 	goto ilsdisp;
        case m2c::kilsexit: 	goto ilsexit;
        case m2c::kincradrange: 	goto incradrange;
        case m2c::kinvaliddisp: 	goto invaliddisp;
        case m2c::kjumpouttohere: 	goto jumpouttohere;
        case m2c::kjumpoverheremann: 	goto jumpoverheremann;
        case m2c::klompatoverhereman: 	goto lompatoverhereman;
        case m2c::kmapdisp: 	goto mapdisp;
        case m2c::knextdamage: 	goto nextdamage;
        case m2c::knextdamage2: 	goto nextdamage2;
        case m2c::knotracks: 	goto notracks;
        case m2c::kouches: 	goto ouches;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kpasssnapmobile: 	goto passsnapmobile;
        case m2c::kpasssnapstatic: 	goto passsnapstatic;
        case m2c::kpasstabmap: 	goto passtabmap;
        case m2c::kplotmobloop: 	goto plotmobloop;
        case m2c::kplotnextmob: 	goto plotnextmob;
        case m2c::kradardisp: 	goto radardisp;
        case m2c::kradarok: 	goto radarok;
        case m2c::kradrangeok: 	goto radrangeok;
        case m2c::krotatehdg: 	goto rotatehdg;
        case m2c::kscanmobdone: 	goto scanmobdone;
        case m2c::kscanmobloop: 	goto scanmobloop;
        case m2c::kscanstatdone: 	goto scanstatdone;
        case m2c::kscanstatloop: 	goto scanstatloop;
        case m2c::kselectafds: 	goto selectafds;
        case m2c::kselectautomfd: 	goto selectautomfd;
        case m2c::kselectflir: 	goto selectflir;
        case m2c::kselectloopback: 	goto selectloopback;
        case m2c::kselectmap: 	goto selectmap;
        case m2c::kselectmodeok: 	goto selectmodeok;
        case m2c::kselectnext: 	goto selectnext;
        case m2c::kselectradar: 	goto selectradar;
        case m2c::kselectradarmfd: 	goto selectradarmfd;
        case m2c::ksetairtgt: 	goto setairtgt;
        case m2c::kskipapprttg: 	goto skipapprttg;
        case m2c::kskipfixcols: 	goto skipfixcols;
        case m2c::kskipircols: 	goto skipircols;
        case m2c::kskipmobile: 	goto skipmobile;
        case m2c::kskipmovironwork0: 	goto skipmovironwork0;
        case m2c::kskippyhere: 	goto skippyhere;
        case m2c::kskipradarcheck: 	goto skipradarcheck;
        case m2c::kskipradrange: 	goto skipradrange;
        case m2c::kskiprotatelt: 	goto skiprotatelt;
        case m2c::kskiprotatert: 	goto skiprotatert;
        case m2c::kskipstatic: 	goto skipstatic;
        case m2c::kskiptgtcursor: 	goto skiptgtcursor;
        case m2c::kskipwpcursor: 	goto skipwpcursor;
        case m2c::kskipzoomin: 	goto skipzoomin;
        case m2c::kskipzoomout: 	goto skipzoomout;
        case m2c::ksnapmobile: 	goto snapmobile;
        case m2c::ksnapstatic: 	goto snapstatic;
        case m2c::ksortaltdol: 	goto sortaltdol;
        case m2c::ksortautomode: 	goto sortautomode;
        case m2c::ksorthdgdol: 	goto sorthdgdol;
        case m2c::ksortmode: 	goto sortmode;
        case m2c::kstealmouse: 	goto stealmouse;
        case m2c::kswitchedoff: 	goto switchedoff;
        case m2c::ktgtflashok: 	goto tgtflashok;
        case m2c::kupdatemapzoom: 	goto updatemapzoom;
        case m2c::kupdatemfd: 	goto updatemfd;
        case m2c::kupdatenavigmfd: 	goto updatenavigmfd;
        case m2c::kupdatepilotmfd: 	goto updatepilotmfd;
        case m2c::kzebra: 	goto zebra;
        default: return __dispatch_call(__disp, _state);
    };
}


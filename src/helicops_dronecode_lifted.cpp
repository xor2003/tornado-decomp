/* THIS IS GENERATED FILE */

        
#include "helicops.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
inithelicops:
	// 1974 
	/* mov	si,OFFSET AHelicopter1 ;* kill: assume all */
	si = m2c::near_offset_external(ahelicopter1);
edummylabel1:
	// 4369 
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET AHelicopter2 */
	si = m2c::near_offset_external(ahelicopter2);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET AHelicopter3 */
	si = m2c::near_offset_external(ahelicopter3);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET AHelicopter4 */
	si = m2c::near_offset_external(ahelicopter4);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET EHelicopter1 */
	si = m2c::near_offset_external(ehelicopter1);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET EHelicopter2 */
	si = m2c::near_offset_external(ehelicopter2);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET EHelicopter3 */
	si = m2c::near_offset_external(ehelicopter3);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* mov	si,OFFSET EHelicopter4 */
	si = m2c::near_offset_external(ehelicopter4);
	/* call	InitOneHeli */
	CALL(initoneheli, 0);
	/* ret */
	RETF(0);
initoneheli:
	// 2001 
	// 0 ;------------------------------
	// 0 ;* test if helicopter is active
	// 0 ;------------------------------
edummylabel2:
	// 4371 
	/* cmp	_HC_SIDE[si],DEAD	;helicopter active? */
	CMP(((helicopter*)raddr(ds,(6+18)+si))->hc_side, 0);
	/* jne	__m2c_macrolocal_1_skip */
	if ((db)(((helicopter*)raddr(ds,(6+18)+si))->hc_side) != (db)(0)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	InitOneExit */
	goto initoneexit;
__m2c_macrolocal_1_skip:
	// 4373 
	// 0 ;no ->
	// 0 ;---------------------------
	// 0 ;* init miscellaneous values
	// 0 ;---------------------------
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	MOB_ANIM[si],al */
	m2c::setdata(&(((mobile*)raddr(ds,si))->mob_anim), m2c::getdata(al));
	/* mov	_VP_PITCH[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))), m2c::getdata(ax));
	/* mov	_VP_ROLL[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_roll))), m2c::getdata(ax));
	/* mov	_HC_EVENT[si],al */
	m2c::setdata(&(((helicopter*)raddr(ds,(6+18)+si))->hc_event), m2c::getdata(al));
	/* mov	_HC_XFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_xfine))), m2c::getdata(ax));
	/* mov	_HC_YFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_yfine))), m2c::getdata(ax));
	/* mov	_HC_ZFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_zfine))), m2c::getdata(ax));
	/* mov	_HC_PFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_pfine))), m2c::getdata(ax));
	/* mov	_HC_RFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_rfine))), m2c::getdata(ax));
	/* mov	_HC_VTAS[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_vtas))), m2c::getdata(ax));
	/* mov	_HC_VTAS_FINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_vtas_fine))), m2c::getdata(ax));
	/* mov	_HC_LIFT_VCTR[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_lift_vctr))), m2c::getdata(ax));
	/* mov	_HC_ACCEL_PFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_accel_pfine))), m2c::getdata(ax));
	// 0 ;--------------------------------------
	// 0 ;* init waypoint ptr to second waypoint
	// 0 ;--------------------------------------
	/* mov	di,si */
	di = si;
	/* add	di,HC_WAYPOINTS+WAY_REC_SIZE	;di -> second waypoint */
	ADD(di, (6+18+38)+16);
	/* mov	_HC_WP_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_wp_ptr))), m2c::getdata(di));
	/* sub	di,WAY_REC_SIZE		;di -> first waypoint */
	SUB(di, 16);
	// 0 ;--------------------------------------
	// 0 ;* sort control mode wrt first waypoint
	// 0 ;--------------------------------------
	/* xchg	si,di			;si -> first waypoint */
	XCHG(si, di);
	/* call	SortControlMode */
	CALL(sortcontrolmode, 0);
	/* xchg	si,di			;si -> compound data block */
	XCHG(si, di);
	/* cmp	dx,CTRL_TAKEOFF		;takeoff? */
	CMP(dx, 2);
	/* je	SetCtrlMode		;yes -> */
	if ((dw)(dx) == (dw)(2)) {goto setctrlmode;}
	// 0 ;----------------
	// 0 ;* start airborne
	// 0 ;----------------
	// 0 ;* speed = waypoint speed
	/* mov	di,si */
	di = si;
	/* add	di,HC_WAYPOINTS		;di -> first waypoint */
	ADD(di, 6+18+38);
	/* mov	ax,WP_SPEED[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_time)));
	/* mov	_HC_VTAS[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_vtas))), m2c::getdata(ax));
setctrlmode:
	// 4375 
	/* SetCtrlMode:	mov	_HC_CTRL_MODE[si],dx */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_ctrl_mode))), m2c::getdata(dx));
	// 0 ;-------------------
	// 0 ;* init heading fine
	// 0 ;-------------------
	/* mov	cl,7		;*128 */
	cl = 7;
	/* mov	ax,_VP_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_hdg)));
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	_HC_HFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_hfine))), m2c::getdata(ax));
	// 0 ;------------------
	// 0 ;* init decoy timer
	// 0 ;------------------
	/* call	RandX		;0.00 .. 2.55 */
	CALLF(randx, 0);
	/* shr	ax,1		;0.00 .. 1.27 */
	SHR(ax, 1);
	/* add	ax,50		;0.50 .. 1.77 */
	ADD(ax, 50);
	/* mov	_HC_DECOY_TIMER[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_decoy_timer))), m2c::getdata(ax));
initoneexit:
	// 4377 
	/* InitOneExit:	ret */
	RETN(0);
updatehelicops:
	// 2083 
	/* mov	si,OFFSET AHelicopter1 ;* kill: assume all */
	si = m2c::near_offset_external(ahelicopter1);
edummylabel3:
	// 4379 
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET AHelicopter2 */
	si = m2c::near_offset_external(ahelicopter2);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET AHelicopter3 */
	si = m2c::near_offset_external(ahelicopter3);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET AHelicopter4 */
	si = m2c::near_offset_external(ahelicopter4);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET EHelicopter1 */
	si = m2c::near_offset_external(ehelicopter1);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET EHelicopter2 */
	si = m2c::near_offset_external(ehelicopter2);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET EHelicopter3 */
	si = m2c::near_offset_external(ehelicopter3);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* mov	si,OFFSET EHelicopter4 */
	si = m2c::near_offset_external(ehelicopter4);
	/* call	UpdateOneHeli */
	CALL(updateoneheli, 0);
	/* ret */
	RETF(0);
updateoneheli:
	// 2110 
	// 0 ;----------------------------
	// 0 ;* test if helicopter is active
	// 0 ;----------------------------
edummylabel4:
	// 4381 
	/* cmp	_HC_SIDE[si],DEAD	;helicopter active? */
	CMP(((helicopter*)raddr(ds,(6+18)+si))->hc_side, 0);
	/* je	UpdateOneExit		;no -> */
	if ((db)(((helicopter*)raddr(ds,(6+18)+si))->hc_side) == (db)(0)) {goto updateoneexit;}
	/* mov	HelicopterPtr,si	;store original data ptr */
	helicopterptr = si;
	// 0 ;-------------------------------------
	// 0 ;* copy helicopter data into workspace
	// 0 ;-------------------------------------
	/* mov	cx,HC_DATA_SIZE */
	cx = 6+18+38;
	/* mov	di,OFFSET HC_Workspace */
	di = m2c::near_offset_external(hc_workspace);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2125 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2127 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2128 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2129 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 0 ;---------------------------
	// 0 ;* sort performance data ptr
	// 0 ;---------------------------
	/* mov	bx,HC_Data.HC_TYPE */
	bx = hc_data.hc_type;
	/* mov	ax,PerfDataPtrs[bx] */
	ax = *(dw*)(((db*)&perfdataptrs)+bx);
	/* mov	PerfDataPtr,ax */
	perfdataptr = ax;
	// 0 ;--------------------------
	// 0 ;* rotate helicopter blades
	// 0 ;--------------------------
	/* mov	al,HC_Mobile.MOB_ANIM */
	al = hc_mobile.mob_anim;
	/* and	al,ROTOR_ALL			;current rotor pos */
	AND(al, 0x3);
	/* add	al,ROTOR_POS2			;rotate one position */
	ADD(al, 0x1);
	/* cmp	al,ROTOR_POS3			;end of rotation? */
	CMP(al, 0x2);
	/* jbe	@F				;no -> */
	if ((db)(al) <= (db)(0x2)) {goto dummylabel1;}
	/* mov	al,ROTOR_POS1			;start of rotation */
	al = 0x0;
dummylabel1:
	// 4383 
	/* @@:		and	HC_Mobile.MOB_ANIM,NOT ROTOR_ALL;clear old rotation */
	AND(hc_mobile.mob_anim, ~0x3);
	/* or	HC_Mobile.MOB_ANIM,al		;set new rotation */
	OR(hc_mobile.mob_anim, al);
	// 0 ;---------------------
	// 0 ;* select control mode
	// 0 ;---------------------
	/* mov	bx,HC_Data.HC_CTRL_MODE */
	bx = hc_data.hc_ctrl_mode;
	/* call	ControlMode[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&controlmode)+bx));
	// 0 ;----------------------------
	// 0 ;* update helicopter position
	// 0 ;----------------------------
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* call	CalcDeltaXYZ */
	CALL(calcdeltaxyz, 0);
	// 0 ;-------------------------------------
	// 0 ;* copy helicopter data from workspace
	// 0 ;-------------------------------------
	// 0 ;* IMPORTANT: Copy helicopter data from workspace back to its original position
	// 0 ;*            before calling UpdateMobile. If the helicopter changes sector the
	// 0 ;*            delete / create mobile routines require the original address of
	// 0 ;*            the data as a reference.
	/* mov	bp,cx		;store delta zft */
	bp = cx;
	/* mov	cx,HC_DATA_SIZE */
	cx = 6+18+38;
	/* mov	si,OFFSET HC_Workspace */
	si = m2c::near_offset_external(hc_workspace);
	/* mov	di,HelicopterPtr */
	di = helicopterptr;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2175 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2177 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 2178 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2179 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	cx,bp		;restore delta zft */
	cx = bp;
	// 0 ;----------------------
	// 0 ;* update mobile object
	// 0 ;----------------------
	/* mov	si,HelicopterPtr */
	si = helicopterptr;
	/* call	UpdateMobile */
	CALLF(updatemobile, 0);
	/* call	GroundCheck */
	CALL(groundcheck, 0);
	// 0 ;------------------------
	// 0 ;* weapon evasion tactics
	// 0 ;------------------------
	/* call	EvasionTactics */
	CALLF(evasiontactics, 0);
updateoneexit:
	// 4385 
	/* UpdateOneExit:	ret */
	RETN(0);
ctrlnull:
	// 2203 
	/* ret ;* kill: nothing */
	RETN(0);
ctrltakeoff:
	// 2214 
	// 0 ;-------------------------------
	// 0 ;* wait for event before takeoff
	// 0 ;-------------------------------
edummylabel5:
	// 4387 
	/* cmp	HC_Data.HC_EVENT_NUM,-1	;wait for event? */
	CMP(hc_data.hc_event_num, -1);
	/* je	SortDelay		;no -> */
	if ((dw)(hc_data.hc_event_num) == (dw)(-1)) {goto sortdelay;}
	/* mov	bl,HC_Data.HC_DRONE_NUM	;fetch drone number */
	bl = hc_data.hc_drone_num;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1			;*2 word index */
	SHL(bx, 1);
	/* mov	di,DronePtrs[bx]	;di -> drone data */
	di = *(dw*)(((db*)&droneptrs)+bx);
	/* mov	al,_DRONE_EVENT[di] */
	al = m2c::getdata(((drone_data*)raddr(ds,(6+18)+di))->drone_event);
	/* cmp	al,HC_Data.HC_EVENT_NUM	;event satisfied? */
	CMP(al, hc_data.hc_event_num);
	/* jae	__m2c_macrolocal_4_skip */
	if ((db)(al) >= (db)(hc_data.hc_event_num)) {goto __m2c_macrolocal_4_skip;}
	/* jmp	ExitTakeoff */
	goto exittakeoff;
__m2c_macrolocal_4_skip:
	// 4389 
	// 0 ;no ->
	/* mov	HC_Data.HC_DRONE_NUM,0	;clear event */
	hc_data.hc_drone_num = 0;
	/* mov	HC_Data.HC_EVENT_NUM,-1 */
	hc_data.hc_event_num = -1;
	/* mov	HC_Data.HC_DELAY,DLY_AFTER_EVENT */
	hc_data.hc_delay = 30*100;
	// 0 ;----------------------
	// 0 ;* delay before takeoff
	// 0 ;----------------------
sortdelay:
	// 4391 
	/* SortDelay:	mov	ax,HC_Data.HC_DELAY */
	ax = hc_data.hc_delay;
	/* test	ax,ax			;delay? */
	TEST(ax, ax);
	/* jz	@F			;no -> */
	if (!(ax & ax)) {goto dummylabel2;}
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
	/* mov	HC_Data.HC_DELAY,ax */
	hc_data.hc_delay = ax;
	/* jmp	ExitTakeoff */
	goto exittakeoff;
	// 0 ;----------------------------
	// 0 ;* pick up takeoff parameters
	// 0 ;----------------------------
dummylabel2:
	// 4393 
	/* @@:		mov	di,PerfDataPtr */
	di = perfdataptr;
	/* mov	di,PERF_TAKEOFF[di] */
	di = m2c::getdata(*(dw*)(((db*)&((perf_data*)raddr(ds,di))->perf_takeoff)));
	// 0 ;-------------------------------------------
	// 0 ;* climb until takeoff altitude is satisfied
	// 0 ;-------------------------------------------
	// 0 ;* if zft < 100ft then
	// 0 ;*    accel zdot to steady state value
	// 0 ;* else
	// 0 ;*    decel zdot to zero
	// 0 ;* endif
	// 0 ;* (note: vtas is effectively zdot)
	/* cmp	WORD PTR HC_View.VP_ZFT_HI,0	;zft > 65,535ft? */
	CMP(*((dw*)((db*)&hc_view+vp_zft_hi)), 0);
	/* ja	DecelZDot			;yes -> */
	if ((dw)(*((dw*)((db*)&hc_view+vp_zft_hi))) > (dw)(0)) {goto decelzdot;}
	/* mov	ax,WORD PTR HC_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&hc_view+vp_zft_lo));
	/* cmp	ax,100 */
	CMP(ax, 100);
	/* jae	DecelZDot */
	if ((dw)(ax) >= (dw)(100)) {goto decelzdot;}
	// 0 ;---------------------------
accelzdot:
	// 4395 
	// 0 ;---------------------------
	/* mov	bp,TO_ZDOT[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((takeoff*)raddr(ds,di))->to_zdot)));
	/* cmp	bp,HC_Data.HC_VTAS	;reached steady state zdot? */
	CMP(bp, hc_data.hc_vtas);
	/* je	ZDotOk			;yes -> */
	if ((dw)(bp) == (dw)(hc_data.hc_vtas)) {goto zdotok;}
	/* mov	ax,bp */
	ax = bp;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	HC_Data.HC_VTAS_FINE,ax */
	ADD(hc_data.hc_vtas_fine, ax);
	/* adc	HC_Data.HC_VTAS,dx */
	ADC(hc_data.hc_vtas, dx);
	/* cmp	HC_Data.HC_VTAS,bp	;reached steady state zdot? */
	CMP(hc_data.hc_vtas, bp);
	/* jb	ZDotOk			;no -> */
	if ((dw)(hc_data.hc_vtas) < (dw)(bp)) {goto zdotok;}
	/* mov	HC_Data.HC_VTAS,bp */
	hc_data.hc_vtas = bp;
	/* mov	HC_Data.HC_VTAS_FINE,0 */
	hc_data.hc_vtas_fine = 0;
	/* jmp	ZDotOk */
	goto zdotok;
	// 0 ;---------------------------
decelzdot:
	// 4397 
	// 0 ;---------------------------
	/* mov	ax,TO_ZDOT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((takeoff*)raddr(ds,di))->to_zdot)));
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* sub	HC_Data.HC_VTAS_FINE,ax */
	SUB(hc_data.hc_vtas_fine, ax);
	/* sbb	HC_Data.HC_VTAS,dx */
	SBB(hc_data.hc_vtas, dx);
	/* jns	ZDotOk		;zdot >= 0 -> */
	if ((short)(hc_data.hc_vtas) >= 0) {goto zdotok;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	HC_Data.HC_VTAS,ax */
	hc_data.hc_vtas = ax;
	/* mov	HC_Data.HC_VTAS_FINE,ax */
	hc_data.hc_vtas_fine = ax;
	// 0 ;-------------------
	// 0 ;* takeoff satisfied
	// 0 ;-------------------
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* call	SortControlMode */
	CALL(sortcontrolmode, 0);
	/* mov	HC_Data.HC_CTRL_MODE,dx */
	hc_data.hc_ctrl_mode = dx;
	/* mov	HC_Data.HC_LIFT_VCTR,0*128	;0degs */
	hc_data.hc_lift_vctr = 0*128;
	/* jmp	ExitTakeoff */
	goto exittakeoff;
zdotok:
	// 4399 
	/* ZDotOk:		mov	HC_Data.HC_LIFT_VCTR,128*128	;90degs */
	hc_data.hc_lift_vctr = 128*128;
exittakeoff:
	// 4401 
	/* ExitTakeoff:	ret */
	RETN(0);
ctrltrack:
	// 2331 
	/* call	AutoRoute ;* kill: assume all */
	CALL(autoroute, 0);
edummylabel6:
	// 4403 
	/* mov	ax,HC_AutoHFine */
	ax = hc_autohfine;
	/* call	AutoHeading */
	CALL(autoheading, 0);
	/* mov	ax,HC_AutoAlt */
	ax = hc_autoalt;
	/* call	AutoAltitude */
	CALL(autoaltitude, 0);
	/* mov	ax,HC_AutoVtas */
	ax = hc_autovtas;
	/* call	AutoThrottle */
	CALL(autothrottle, 0);
	/* ret */
	RETN(0);
ctrlapproach:
	// 2349 
	/* call	AutoRoute ;* kill: assume all */
	CALL(autoroute, 0);
edummylabel7:
	// 4405 
	/* mov	ax,HC_AutoHFine */
	ax = hc_autohfine;
	/* call	AutoHeading */
	CALL(autoheading, 0);
	/* mov	ax,100 */
	ax = 100;
	/* call	AutoAltitude */
	CALL(autoaltitude, 0);
	// 0 ;* if within stopping dist then
	// 0 ;*    aiming vtas = 0kts
	// 0 ;* else
	// 0 ;*    aiming vtas = 50kts
	// 0 ;* endif
	/* mov	ax,680		;assume 50kts */
	ax = 680;
	/* cmp	WORD PTR HC_WPRng+2,0	;range > 65,535ft? */
	CMP(*(dw*)(((db*)&hc_wprng)+2), 0);
	/* ja	@F			;yes -> */
	if ((dw)(*(dw*)(((db*)&hc_wprng)+2)) > (dw)(0)) {goto dummylabel3;}
	/* cmp	WORD PTR HC_WPRng,361	;within stopping dist? */
	CMP(*(dw*)(&hc_wprng), 361);
	/* ja	@F			;no -> */
	if ((dw)(*(dw*)(&hc_wprng)) > (dw)(361)) {goto dummylabel3;}
	/* xor	ax,ax			;decelerate to hover */
	XOR(ax, ax);
dummylabel3:
	// 4407 
	/* @@:		call	AutoThrottle */
	CALL(autothrottle, 0);
	// 0 ;* if hovering then switch to touchdown mode
	/* mov	ax,HC_Data.HC_VTAS */
	ax = hc_data.hc_vtas;
	/* or	ax,HC_Data.HC_VTAS_FINE */
	OR(ax, hc_data.hc_vtas_fine);
	/* jnz	@F */
	if (ax != 0) {goto dummylabel4;}
	/* mov	HC_Data.HC_CTRL_MODE,CTRL_TOUCHDOWN */
	hc_data.hc_ctrl_mode = 8;
dummylabel4:
	// 4409 
	/* @@:		ret */
	RETN(0);
ctrltouchdown:
	// 2384 
	// 0 ;* if zft = 0 then touched down
edummylabel8:
	// 4411 
	/* mov	ax,HC_Data.HC_ZFINE */
	ax = hc_data.hc_zfine;
	/* or	ax,WORD PTR HC_View.VP_ZFT_LO */
	OR(ax, *((dw*)((db*)&hc_view+vp_zft_lo)));
	/* jnz	ContTouchDown */
	if (ax != 0) {goto conttouchdown;}
	// 0 ;* check for restart mission or stop
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* mov	ax,CTRL_NULL	;assume stopping */
	ax = 0;
	/* cmp	WP_ACTION[si],HC_WP_RESTART	;restart? */
	CMP(((waypoint*)raddr(ds,si))->wp_action, 8);
	/* jne	@F				;no -> */
	if ((db)(((waypoint*)raddr(ds,si))->wp_action) != (db)(8)) {goto dummylabel5;}
	// 0 ;------------------------------------------------
	// 0 ;* helicopter landed resupply and restart mission
	// 0 ;------------------------------------------------
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	HC_Data.HC_EVENT,al */
	hc_data.hc_event = al;
	/* mov	HC_Data.HC_DELAY,RESUPPLY_DELAY */
	hc_data.hc_delay = 15*100;
	/* mov	HC_Data.HC_DRONE_NUM,al */
	hc_data.hc_drone_num = al;
	/* mov	HC_Data.HC_EVENT_NUM,-1 */
	hc_data.hc_event_num = -1;
	/* mov	HC_Data.HC_PFINE,ax */
	hc_data.hc_pfine = ax;
	/* mov	HC_Data.HC_RFINE,ax */
	hc_data.hc_rfine = ax;
	/* mov	HC_Data.HC_VTAS,ax */
	hc_data.hc_vtas = ax;
	/* mov	HC_Data.HC_VTAS_FINE,ax */
	hc_data.hc_vtas_fine = ax;
	/* mov	HC_Data.HC_LIFT_VCTR,ax */
	hc_data.hc_lift_vctr = ax;
	/* mov	HC_Data.HC_ACCEL_PFINE,ax */
	hc_data.hc_accel_pfine = ax;
	/* mov	si,HelicopterPtr */
	si = helicopterptr;
	/* add	si,HC_WAYPOINTS+WAY_REC_SIZE	;ptr -> second waypoint */
	ADD(si, (6+18+38)+16);
	/* mov	HC_Data.HC_WP_PTR,si */
	hc_data.hc_wp_ptr = si;
	/* mov	ax,CTRL_TAKEOFF */
	ax = 2;
dummylabel5:
	// 4413 
	/* @@:		mov	HC_Data.HC_CTRL_MODE,ax */
	hc_data.hc_ctrl_mode = ax;
	/* jmp	ExitTouchDown */
	goto exittouchdown;
	// 0 ;* if zft > 10ft then
	// 0 ;*    accel zdot to LAND_ZDOT
	// 0 ;* else
	// 0 ;*    zdot = LAND_ZDOT / 2
	// 0 ;* endif
	// 0 ;* (note: vtas is effectively zdot)
conttouchdown:
	// 4415 
	/* ContTouchDown:	cmp	WORD PTR HC_View.VP_ZFT_HI,0	;zft > 65,535ft? */
	CMP(*((dw*)((db*)&hc_view+vp_zft_hi)), 0);
	/* ja	@F				;yes -> */
	if ((dw)(*((dw*)((db*)&hc_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel6;}
	/* cmp	WORD PTR HC_View.VP_ZFT_LO,10	;zft > 10ft? */
	CMP(*((dw*)((db*)&hc_view+vp_zft_lo)), 10);
	/* jbe	DecelTouchDown			;yes -> */
	if ((dw)(*((dw*)((db*)&hc_view+vp_zft_lo))) <= (dw)(10)) {goto deceltouchdown;}
dummylabel6:
	// 4417 
	/* @@:		cmp	HC_Data.HC_VTAS,LAND_ZDOT	;reached steady state zdot? */
	CMP(hc_data.hc_vtas, 10*8);
	/* je	LandZDotOk	  		;yes -> */
	if ((dw)(hc_data.hc_vtas) == (dw)(10*8)) {goto landzdotok;}
	/* mov	ax,LAND_ZDOT/4	;accel = steady state zdot / 4 */
	ax = (10*8)/4;
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	HC_Data.HC_VTAS_FINE,ax */
	ADD(hc_data.hc_vtas_fine, ax);
	/* adc	HC_Data.HC_VTAS,dx */
	ADC(hc_data.hc_vtas, dx);
	/* cmp	HC_Data.HC_VTAS,LAND_ZDOT	;reached steady state zdot? */
	CMP(hc_data.hc_vtas, 10*8);
	/* jb	LandZDotOk			;no -> */
	if ((dw)(hc_data.hc_vtas) < (dw)(10*8)) {goto landzdotok;}
	/* mov	HC_Data.HC_VTAS,LAND_ZDOT */
	hc_data.hc_vtas = 10*8;
	/* mov	HC_Data.HC_VTAS_FINE,0 */
	hc_data.hc_vtas_fine = 0;
	/* jmp	LandZDotOk */
	goto landzdotok;
	// 0 ;* decelerate just prior to touchdown
deceltouchdown:
	// 4419 
	/* DecelTouchDown:	mov	HC_Data.HC_VTAS,LAND_ZDOT/2 */
	hc_data.hc_vtas = (10*8)/2;
	/* mov	HC_Data.HC_VTAS_FINE,0 */
	hc_data.hc_vtas_fine = 0;
landzdotok:
	// 4421 
	/* LandZDotOk:  	mov	HC_Data.HC_LIFT_VCTR,-128*128	;-90degs */
	hc_data.hc_lift_vctr = -128*128;
exittouchdown:
	// 4423 
	/* ExitTouchDown:	ret */
	RETN(0);
autoroute:
	// 2463 
	// 0 ;---------------------------------
	// 0 ;* assume heading change inhibited (restore previous value)
	// 0 ;---------------------------------
edummylabel9:
	// 4425 
	/* mov	ax,HC_Data.HC_HFINE */
	ax = hc_data.hc_hfine;
	/* mov	HC_AutoHFine,ax */
	hc_autohfine = ax;
	// 0 ;-------------------------------
	// 0 ;* assume speed change inhibited (restore previous value)
	// 0 ;------------------------------
	/* mov	ax,HC_Data.HC_VTAS */
	ax = hc_data.hc_vtas;
	/* mov	HC_AutoVtas,ax */
	hc_autovtas = ax;
	// 0 ;--------------------------------------------
	// 0 ;* calc range and bearing of current waypoint
	// 0 ;--------------------------------------------
	/* mov	si,OFFSET HC_View	;si -> viewpoint */
	si = m2c::near_offset_external(hc_view);
	/* mov	di,HC_Data.HC_WP_PTR	;di -> current waypoint */
	di = hc_data.hc_wp_ptr;
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	/* mov	WORD PTR HC_WPRng+2,dx */
	*(dw*)(((db*)&hc_wprng)+2) = dx;
	/* mov	WORD PTR HC_WPRng,ax */
	*(dw*)(&hc_wprng) = ax;
	/* mov	HC_WPBrg,bx */
	hc_wpbrg = bx;
	/* mov	HC_WPBrgFine,bp */
	hc_wpbrgfine = bp;
	// 0 ;---------------------
	// 0 ;* satisfied waypoint?
	// 0 ;---------------------
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* test	WP_ATTR[si],WP_TYPE	;turning or target waypoint? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x1);
	/* jnz	TargetWP		;target -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x1) != 0) {goto targetwp;}
	// 0 ;------------------
	// 0 ;* turning waypoint (turn early to next waypoint to keep on track)
	// 0 ;------------------
	/* call	CalcTurnDist */
	CALL(calcturndist, 0);
	/* cmp	WORD PTR HC_WPRng+2,0	;range > turn dist? */
	CMP(*(dw*)(((db*)&hc_wprng)+2), 0);
	/* ja	WPOk			;yes -> */
	if ((dw)(*(dw*)(((db*)&hc_wprng)+2)) > (dw)(0)) {goto wpok;}
	/* cmp	WORD PTR HC_WPRng,ax	;range > turn dist? */
	CMP(*(dw*)(&hc_wprng), ax);
	/* jae	WPOk			;yes -> */
	if ((dw)(*(dw*)(&hc_wprng)) >= (dw)(ax)) {goto wpok;}
	/* jmp	SatisfiedWP */
	goto satisfiedwp;
	// 0 ;-----------------
	// 0 ;* target waypoint (fly over waypoint)
	// 0 ;-----------------
targetwp:
	// 4427 
	// 0 ;* within 1/4NM of waypoint?
	// 0 ;* note: This distance is less than the distance used with aircraft autoroute
	// 0 ;*       as helicopters fly at lower speeds.
	/* cmp	WORD PTR HC_WPRng+2,0 */
	CMP(*(dw*)(((db*)&hc_wprng)+2), 0);
	/* ja	WPOk			;no -> */
	if ((dw)(*(dw*)(((db*)&hc_wprng)+2)) > (dw)(0)) {goto wpok;}
	/* cmp	WORD PTR HC_WPRng,6076/4 */
	CMP(*(dw*)(&hc_wprng), 6076/4);
	/* jae	WPOk			;no -> */
	if ((dw)(*(dw*)(&hc_wprng)) >= (dw)(6076/4)) {goto wpok;}
	/* mov	ax,HC_View.VP_HDG */
	ax = hc_view.vp_hdg;
	/* mov	dx,HC_WPBrg */
	dx = hc_wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,128		;error > 90 degs? */
	CMP(ax, 128);
	/* jbe	WPOk		;no -> */
	if ((dw)(ax) <= (dw)(128)) {goto wpok;}
	// 0 ;--------------------
	// 0 ;* waypoint satisfied
	// 0 ;--------------------
	// 0 ;* if approach mode then do not advance to next waypoint
satisfiedwp:
	// 4429 
	/* SatisfiedWP:	cmp	HC_Data.HC_CTRL_MODE,CTRL_APPROACH	;approach mode? */
	CMP(hc_data.hc_ctrl_mode, 6);
	/* je	WPOk					;yes -> */
	if ((dw)(hc_data.hc_ctrl_mode) == (dw)(6)) {goto wpok;}
	/* call	SelectNextWP */
	CALL(selectnextwp, 0);
	// 0 ;* sort waypoint action
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* call	SortControlMode */
	CALL(sortcontrolmode, 0);
	/* mov	HC_Data.HC_CTRL_MODE,dx */
	hc_data.hc_ctrl_mode = dx;
	// 0 ;--------------------------
	// 0 ;* set heading for waypoint (unless too close - reduce jitter)
	// 0 ;--------------------------
	// 0 ;* within 1/8NM of waypoint?
	// 0 ;* note: This distance is less than the distance used with aircraft autoroute
	// 0 ;*       as helicopters fly at lower speeds.
wpok:
	// 4431 
	/* WPOk:		cmp	WORD PTR HC_WPRng+2,0 */
	CMP(*(dw*)(((db*)&hc_wprng)+2), 0);
	/* ja	@F			;no -> */
	if ((dw)(*(dw*)(((db*)&hc_wprng)+2)) > (dw)(0)) {goto dummylabel7;}
	/* cmp	WORD PTR HC_WPRng,6076/8 */
	CMP(*(dw*)(&hc_wprng), 6076/8);
	/* jb	SortWPAlt		;yes -> */
	if ((dw)(*(dw*)(&hc_wprng)) < (dw)(6076/8)) {goto sortwpalt;}
dummylabel7:
	// 4433 
	/* @@:		mov	ax,HC_WPBrgFine */
	ax = hc_wpbrgfine;
	/* mov	HC_AutoHFine,ax */
	hc_autohfine = ax;
	// 0 ;------------------------
	// 0 ;* sort waypoint altitude
	// 0 ;------------------------
	// 0 ;* alt = min(waypoint alt, ceiling)
sortwpalt:
	// 4435 
	/* SortWPAlt:	mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* mov	ax,WP_ZFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_zft)));
	/* mov	di,PerfDataPtr */
	di = perfdataptr;
	/* mov	di,PERF_CRUISE[di] */
	di = m2c::getdata(*(dw*)(((db*)&((perf_data*)raddr(ds,di))->perf_cruise)));
	/* cmp	ax,CRS_CEILING[di]	;alt < ceiling? */
	CMP(ax, *(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_ceiling)));
	/* jbe	SetAutoAlt		;yes -> */
	if ((dw)(ax) <= (dw)(*(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_ceiling)))) {goto setautoalt;}
	/* mov	ax,CRS_CEILING[di]	;limit to ceiling */
	ax = m2c::getdata(*(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_ceiling)));
setautoalt:
	// 4437 
	/* SetAutoAlt:	mov	HC_AutoAlt,ax */
	hc_autoalt = ax;
	// 0 ;-----------------------
	// 0 ;* sort helicopter speed
	// 0 ;-----------------------
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* test	WP_ATTR[si],WP_COORD	;co-ordinate or set speed? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x20);
	/* jnz	@F			;co-ordonate -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x20) != 0) {goto dummylabel8;}
	/* mov	ax,WP_SPEED[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_time)));
	/* jmp	SetSpeed */
	goto setspeed;
	// 0 ;* calc speed required to reach waypoint on time
dummylabel8:
	// 4439 
	/* @@:		mov	ax,WP_TIME[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_time)));
	/* mov	dx,100 */
	dx = 100;
	/* mul	dx */
	MUL1_2(dx);
	// 0 ;* time to go = waypoint time - elapsed time
	/* sub	ax,WORD PTR FrameElapTime */
	SUB(ax, *(dw*)(&frameelaptime));
	/* sbb	dx,WORD PTR FrameElapTime+2 */
	SBB(dx, *(dw*)(((db*)&frameelaptime)+2));
	// 0 ;* if already late then set max speed
	/* js	SetMaxSpeed	;late -> */
	if ((short)(dx) < 0) {goto setmaxspeed;}
	// 0 ;* if within 5 secs then inhibit speed change
	/* cmp	ax,5*100	;inhibit? */
	CMP(ax, 5*100);
	/* jbe	ExitRoute	;yes -> */
	if ((dw)(ax) <= (dw)(5*100)) {goto exitroute;}
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* if within 1,000ft then inhibit speed change
	/* mov	dx,WORD PTR HC_WPRng+2 */
	dx = *(dw*)(((db*)&hc_wprng)+2);
	/* mov	ax,WORD PTR HC_WPRng */
	ax = *(dw*)(&hc_wprng);
	/* cmp	dx,0		;inhibit? */
	CMP(dx, 0);
	/* ja	@F		;no -> */
	if ((dw)(dx) > (dw)(0)) {goto dummylabel9;}
	/* cmp	ax,1000		;inhibit? */
	CMP(ax, 1000);
	/* jbe	ExitRoute 	;yes -> */
	if ((dw)(ax) <= (dw)(1000)) {goto exitroute;}
	// 0 ;* aiming speed = dist * 800 / time (ft/sec * 8)
dummylabel9:
	// 4441 
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
	// 4441 
	/* mov	si,ax */
	si = ax;
	/* mov	di,dx */
	di = dx;
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
	/* add	ax,si		;*32 + *256 = *288 */
	ADD(ax, si);
	/* adc	dx,di */
	ADC(dx, di);
	/* shl	si,1 */
	SHL(si, 1);
	/* rcl	di,1 */
	RCL(di, 1);
	/* add	ax,si		;*32 + *256 +*512 = *800 */
	ADD(ax, si);
	/* adc	dx,di */
	ADC(dx, di);
dummylabel10:
	// 4443 
	/* @@:		jcxz	TimeOK */
	JCXZ(timeok);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	@B */
	goto dummylabel10;
timeok:
	// 4445 
	/* TimeOk:		cmp	bx,dx		;div ok? */
	CMP(bx, dx);
	/* jbe	SetMaxSpeed	;no -> */
	if ((dw)(bx) <= (dw)(dx)) {goto setmaxspeed;}
	/* div	bx */
	DIV2(bx);
setspeed:
	// 4447 
	/* SetSpeed:	mov	HC_AutoVtas,ax */
	hc_autovtas = ax;
exitroute:
	// 4449 
	/* ExitRoute:	ret */
	RETN(0);
setmaxspeed:
	// 4451 
	/* SetMaxSpeed:	mov	ax,32767 */
	ax = 32767;
	/* jmp	SetSpeed */
	goto setspeed;
selectnextwp:
	// 2645 
	/* mov	si,HC_Data.HC_WP_PTR ;* kill: assume all */
	si = hc_data.hc_wp_ptr;
edummylabel10:
	// 4453 
	/* call	CalcNextWP	  	;di -> next waypoint */
	CALL(calcnextwp, 0);
	/* mov	HC_Data.HC_WP_PTR,di */
	hc_data.hc_wp_ptr = di;
	// 0 ;* update waypoint range and bearing
	/* mov	si,OFFSET HC_View	;si -> viewpoint */
	si = m2c::near_offset_external(hc_view);
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	/* mov	WORD PTR HC_WPRng,ax */
	*(dw*)(&hc_wprng) = ax;
	/* mov	WORD PTR HC_WPRng+2,dx */
	*(dw*)(((db*)&hc_wprng)+2) = dx;
	/* mov	HC_WPBrg,bx */
	hc_wpbrg = bx;
	/* mov	HC_WPBrgFine,bp */
	hc_wpbrgfine = bp;
	/* ret */
	RETN(0);
calcnextwp:
	// 2667 
	/* test	WP_ATTR[si],WP_LINK	;link back to waypoint? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x2);
edummylabel11:
	// 4455 
	/* jnz	SortLink		;yes -> */
	if (!ZF) {goto sortlink;}
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
	// 4457 
	/* SortLink:	mov	di,HelicopterPtr */
	di = helicopterptr;
	/* add	di,HC_WAYPOINTS	;di -> first waypoint */
	ADD(di, 6+18+38);
dummylabel11:
	// 4459 
	/* @@:		cmp	di,si		;di -> current waypoint? */
	CMP(di, si);
	/* je	ExitNextWP	;yes, do not advance -> */
	if ((dw)(di) == (dw)(si)) {goto exitnextwp;}
	/* test	WP_ATTR[di],WP_HERE	;link back to here? */
	TEST(((waypoint*)raddr(ds,di))->wp_attr, 0x4);
	/* jnz	ExitNextWP		;yes -> */
	if ((((waypoint*)raddr(ds,di))->wp_attr & 0x4) != 0) {goto exitnextwp;}
	/* add	di,WAY_REC_SIZE	;advance */
	ADD(di, 16);
	/* jmp	@B */
	goto dummylabel11;
exitnextwp:
	// 4461 
	/* ExitNextWP:	ret */
	RETN(0);
calcturndist:
	// 2696 
	// 0 ;---------------
	// 0 ;* calc ThetaABC = inside angle of vp(A) -> first wp(B) -> second wp(C)
	// 0 ;---------------
	// 0 ;* ThetaAB = bearing of wp(B) from vp(A)
edummylabel12:
	// 4463 
	/* mov	si,OFFSET HC_View	;si -> viewpoint */
	si = m2c::near_offset_external(hc_view);
	/* mov	di,HC_Data.HC_WP_PTR	;di -> current waypoint */
	di = hc_data.hc_wp_ptr;
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	/* mov	HC_ThetaAB,bx */
	hc_thetaab = bx;
	// 0 ;* ThetaBC = bearing of wp(C) from wp(B)
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* call	CalcNextWP */
	CALL(calcnextwp, 0);
	/* call	CalcRngBrgWP_WP */
	CALLF(calcrngbrgwp_wp, 0);
	/* mov	HC_ThetaBC,bx */
	hc_thetabc = bx;
	// 0 ;* ThetaABC = abs(256 - abs(ThetaAB - ThetaBC)) (0 .. 511 pdegs)
	/* mov	ax,HC_ThetaAB */
	ax = hc_thetaab;
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
	/* mov	HC_ThetaABC,ax */
	hc_thetaabc = ax;
	// 0 ;-----------------------------
	// 0 ;* calc RTurn = turning radius
	// 0 ;-----------------------------
	// 0 ;* RTurn = min((vtas^2 / 64) * 588 / 32768, 32767)
	/* mov	ax,HC_Data.HC_VTAS */
	ax = hc_data.hc_vtas;
	/* cmp	ax,1360 */
	CMP(ax, 1360);
	/* jge	__m2c_macrolocal_8_TestHi */
	if ((short)(ax) >= (short)(1360)) {goto __m2c_macrolocal_8_testhi;}
	/* mov	ax,1360 */
	ax = 1360;
	/* jmp	__m2c_macrolocal_8_TestOk */
	goto __m2c_macrolocal_8_testok;
__m2c_macrolocal_8_testhi:
	// 4465 
	/* __m2c_macrolocal_8_TestHi:		cmp	ax,10880 */
	CMP(ax, 10880);
	/* jle	__m2c_macrolocal_8_TestOk */
	if ((short)(ax) <= (short)(10880)) {goto __m2c_macrolocal_8_testok;}
	/* mov	ax,10880 */
	ax = 10880;
__m2c_macrolocal_8_testok:
	// 4467 
	/* mul	ax */
	MUL1_2(ax);
	/* mov	bx,ax		;bx, cx = vtas^2 * 64 */
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
	/* add	ax,bx		;dx, ax = vtas^2 * 576 */
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
	/* add	ax,bx		;dx, ax = vtas^2 * 584 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* add	ax,bx		;dx, ax = vtas^2 * 588 */
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
	if ((dw)(dx) <= (dw)(32767)) {goto dummylabel12;}
	/* mov	dx,32767 */
	dx = 32767;
dummylabel12:
	// 4469 
	/* @@:		mov	HC_RTurn,dx */
	hc_rturn = dx;
	// 0 ;-------------------------------
	// 0 ;* calc TDist = turning distance
	// 0 ;-------------------------------
	// 0 ;* if ThetaABC >= 128 pdegs (90 degs) then
	// 0 ;*    theta = (256 - ThetaABC) / 2  		;***** obtuse angle *****
	// 0 ;*    TDist = RTurn * tan(theta / 2)
	// 0 ;* else
	// 0 ;*    theta = ThetaABC / 2			;***** acute angle *****
	// 0 ;*    TDist = RTurn * 32768 / tan(theta / 2)
	// 0 ;* endif
	/* cmp	HC_ThetaABC,128	;< 90 degs? */
	CMP(hc_thetaabc, 128);
	/* jb	@F		;yes -> */
	if ((dw)(hc_thetaabc) < (dw)(128)) {goto dummylabel13;}
	// 0 ;------------------------------
	// 0 ;* ThetaABC >= 90 degs (obtuse)
	// 0 ;------------------------------
	/* mov	ax,256 */
	ax = 256;
	/* sub	ax,HC_ThetaABC */
	SUB(ax, hc_thetaabc);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* call	Tangent		;dx = tan(ax) / 2 (refer to TRIG.ASM) */
	CALLF(tangent, 0);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* mov	ax,HC_RTurn */
	ax = hc_rturn;
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
	/* jmp	ExitTurnDist */
	goto exitturndist;
	// 0 ;----------------------------
	// 0 ;* ThetaABC < 90 degs (acute)
	// 0 ;----------------------------
dummylabel13:
	// 4471 
	/* @@:		mov	ax,HC_ThetaABC */
	ax = hc_thetaabc;
	/* shr	ax,1 */
	SHR(ax, 1);
	/* call	Tangent		;dx = tan(ax) / 2 (refer to TRIG.ASM) */
	CALLF(tangent, 0);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* mov	bx,dx */
	bx = dx;
	/* mov	dx,HC_RTurn */
	dx = hc_rturn;
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
exitturndist:
	// 4473 
	/* ExitTurnDist:	ret */
	RETN(0);
	// 0 ;-----------------------------------
	// 0 ;* if overflow then TDist = 65,535ft
	// 0 ;-----------------------------------
tdistov:
	// 4475 
	/* TDistOv:	mov	ax,65535 */
	ax = 65535;
	/* ret */
	RETN(0);
autoheading:
	// 2846 
	// 0 ;---------------------------
	// 0 ;* pick up cruise parameters
	// 0 ;---------------------------
edummylabel13:
	// 4477 
	/* mov	di,PerfDataPtr */
	di = perfdataptr;
	/* mov	di,PERF_CRUISE[di] */
	di = m2c::getdata(*(dw*)(((db*)&((perf_data*)raddr(ds,di))->perf_cruise)));
	// 0 ;----------------
	// 0 ;* calc hdg error
	// 0 ;----------------
	// 0 ;* hdg error = aiming hdg - current hdg
	/* sub	ax,HC_Data.HC_HFINE */
	SUB(ax, hc_data.hc_hfine);
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
	if ((dw)(dx) >= (dw)(16384)) {goto dummylabel14;}
	/* mov	dx,16384 */
	dx = 16384;
dummylabel14:
	// 4479 
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
	// 0 ;* limit vtas (100 .. 800kts)
	// 0 ;----------------------------
	/* mov	bp,HC_Data.HC_VTAS */
	bp = hc_data.hc_vtas;
	/* cmp	bp,1360 */
	CMP(bp, 1360);
	/* jge	__m2c_macrolocal_13_TestHi */
	if ((short)(bp) >= (short)(1360)) {goto __m2c_macrolocal_13_testhi;}
	/* mov	bp,1360 */
	bp = 1360;
	/* jmp	__m2c_macrolocal_13_TestOk */
	goto __m2c_macrolocal_13_testok;
__m2c_macrolocal_13_testhi:
	// 4481 
	/* __m2c_macrolocal_13_TestHi:		cmp	bp,10880 */
	CMP(bp, 10880);
	/* jle	__m2c_macrolocal_13_TestOk */
	if ((short)(bp) <= (short)(10880)) {goto __m2c_macrolocal_13_testok;}
	/* mov	bp,10880 */
	bp = 10880;
__m2c_macrolocal_13_testok:
	// 4483 
	// 0 ;-------------------
	// 0 ;* calc hdg rate max (wrt vtas)
	// 0 ;-------------------
	// 0 ;* max rate = 47039bh / vtas
	/* mov	dx,00047h */
	dx = 0x00047;
	/* mov	ax,0039bh */
	ax = 0x0039b;
	/* div	bp */
	DIV2(bp);
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
	// 0 ;* roll angle = arctan(hdg err * vtas * 400 / 65536)
	/* push	di */
	PUSH(di);
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
	/* push	bp */
	PUSH(bp);
	/* call	ArcTan2 */
	CALLF(arctan2, 0);
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* jmp	ContHeading */
	goto contheading;
	// 0 ;* set roll angle to max
maxrollangle:
	// 4485 
	/* MaxRollAngle:	mov	ax,AH_MAX_ROLL */
	ax = 85*128;
	/* xor	ax,cx		;restore sign */
	XOR(ax, cx);
	/* sub	ax,cx */
	SUB(ax, cx);
contheading:
	// 4487 
	/* ContHeading:	test	CRS_HEAVY[di],1	;heavy helicopter? */
	TEST(((cruise*)raddr(ds,di))->crs_heavy, 1);
	/* jz	@F		;no -> */
	if (!(((cruise*)raddr(ds,di))->crs_heavy & 1)) {goto dummylabel15;}
	/* sar	ax,1		;aiming roll / 2 */
	SAR(ax, 1);
dummylabel15:
	// 4489 
	/* @@:		sub	ax,HC_Data.HC_RFINE	;roll error */
	SUB(ax, hc_data.hc_rfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(roll error), dx = sign(roll error)
	// 0 ;* roll rate = min(abs(error), AH_ROLL_RATE * DeltaTime / 32768) * sign(error)
	/* mov	bx,ax		;abs(error) */
	bx = ax;
	/* mov	cx,dx		;sign(error) */
	cx = dx;
	/* mov	dx,AH_ROLL_RATE */
	dx = 64*128;
	/* test	CRS_HEAVY[di],1	;heavy helicopter? */
	TEST(((cruise*)raddr(ds,di))->crs_heavy, 1);
	/* jz	@F		;no -> */
	if (!(((cruise*)raddr(ds,di))->crs_heavy & 1)) {goto dummylabel16;}
	/* shr	dx,1		;roll rate / 2 */
	SHR(dx, 1);
dummylabel16:
	// 4491 
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
	/* cmp	dx,bx		;rate > error? */
	CMP(dx, bx);
	/* jbe	@F		;no -> */
	if ((dw)(dx) <= (dw)(bx)) {goto dummylabel17;}
	/* mov	dx,bx */
	dx = bx;
dummylabel17:
	// 4493 
	/* @@:		xor	dx,cx		;restore sign */
	XOR(dx, cx);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* add	HC_Data.HC_RFINE,dx */
	ADD(hc_data.hc_rfine, dx);
	// 0 ;-------------------
	// 0 ;* calc heading rate
	// 0 ;-------------------
	// 0 ;* hdg rate = 520000h / vtas * sin(roll) * DeltaTime
	/* mov	dx,00052h */
	dx = 0x00052;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* div	bp		;520000h / vtas */
	DIV2(bp);
	/* mov	bx,HC_View.VP_ROLL */
	bx = hc_view.vp_roll;
	/* test	CRS_HEAVY[di],1	;heavy helicopter? */
	TEST(((cruise*)raddr(ds,di))->crs_heavy, 1);
	/* jz	@F		;no -> */
	if (!(((cruise*)raddr(ds,di))->crs_heavy & 1)) {goto dummylabel18;}
	/* mov	cl,7		;double roll for desired hdg rate */
	cl = 7;
	/* shl	bx,cl */
	SHL(bx, cl);
	/* sal	bx,1 */
	SAL(bx, 1);
	/* shr	bx,cl */
	SHR(bx, cl);
dummylabel18:
	// 4495 
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	dx,SinTable[bx] */
	dx = *(dw*)(((db*)&sintable)+bx);
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&sintable)+bx););	// 3009 mov	dx,SinTable[bx] */
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
	// 0 ;520000h / vtas * sin(roll)
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
	// 0 ;520000h / vtas * sin(roll) * DeltaTime
	/* add	HC_Data.HC_HFINE,dx */
	ADD(hc_data.hc_hfine, dx);
	/* ret */
	RETN(0);
autoaltitude:
	// 3040 
	// 0 ;-------------------------------------
	// 0 ;* test for terrain following override
	// 0 ;-------------------------------------
edummylabel14:
	// 4497 
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* test	WP_ATTR[si],WP_TF	;terrain follow? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x8);
	/* jnz	__m2c_macrolocal_19_skip */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x8) != 0) {goto __m2c_macrolocal_19_skip;}
	/* jmp	ContAutoAlt */
	goto contautoalt;
__m2c_macrolocal_19_skip:
	// 4499 
	// 0 ;no ->
	// 0 ;* copy viewpoint data to temporary data
	/* mov	si,OFFSET HC_View */
	si = m2c::near_offset_external(hc_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3057 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 3058 						mov	di,OFFSET TMP_VIEW */
	// 3059 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* calc ground height below helicopter
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* push	ax		;store ground height below helicopter */
	PUSH(ax);
	// 0 ;* calc delta xft and delta yft per second (wrt heading)
	/* mov	dx,HC_Data.HC_Vtas	;(*8 scaled) */
	dx = hc_data.hc_vtas;
	/* mov	cl,7		;/128 */
	cl = 7;
	/* mov	ax,HC_Data.HC_HFINE */
	ax = hc_data.hc_hfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* call	CalcDeltaXY */
	CALLF(calcdeltaxy, 0);
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(x), dx = sign(x)
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
	/* mov	cx,ax */
	cx = ax;
	/* mov	ax,bx		;ax = abs(y), dx = sign(y) */
	ax = bx;
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
	/* adc	ax,0		;1/2 bit round up */
	ADC(ax, 0);
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* calc ground height 1 second ahead
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_24_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_24_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_24_mvxy1:
	// 4501 
	/* __m2c_macrolocal_24_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_24_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_24_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_24_mvxy2:
	// 4503 
	/* __m2c_macrolocal_24_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_24_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_24_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_24_mvxy3:
	// 4505 
	/* __m2c_macrolocal_24_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_24_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_24_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_24_mvxy4:
	// 4507 
	/* __m2c_macrolocal_24_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 3124 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 3125 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 3126 dec	TMP_VIEW.VP_XSEC */
queque0008:
	// 4509 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 3127 ??0008:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 3128 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 3129 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 3130 inc	TMP_VIEW.VP_YSEC */
queque000a:
	// 4511 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 3131 ??000A:		mov	TMP_VIEW.VP_YFT,bx */
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	ax		;store ground height 1 second ahead */
	PUSH(ax);
	// 0 ;* calc ground height 2 seconds ahead
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_25_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_25_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_25_mvxy1:
	// 4513 
	/* __m2c_macrolocal_25_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_25_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_25_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_25_mvxy2:
	// 4515 
	/* __m2c_macrolocal_25_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_25_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_25_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_25_mvxy3:
	// 4517 
	/* __m2c_macrolocal_25_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_25_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_25_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 3160 						inc	TMP_VIEW.VP_YSEC */
__m2c_macrolocal_25_mvxy4:
	// 4519 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 3161 												__m2c_macrolocal_25_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 3162 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 3163 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 3164 dec	TMP_VIEW.VP_XSEC */
queque000c:
	// 4521 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 3165 ??000C:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 3166 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 3167 dec	TMP_VIEW.VP_YSEC */
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
queque000e:
	// 4523 
	/* ??000E:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	// 0 ;* select highest point
	/* pop	dx		;restore ground height 1 second ahead */
	POP(dx);
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel19;}
	/* mov	ax,dx */
	ax = dx;
dummylabel19:
	// 4525 
	/* @@:		pop	dx		;restore ground height below helicopter */
	POP(dx);
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel20;}
	/* mov	ax,dx */
	ax = dx;
dummylabel20:
	// 4527 
	/* @@:		mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* add	ax,WP_ZFT[si]	;ground height + TF height */
	ADD(ax, *(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_zft)));
contautoalt:
	// 4529 
	/* ContAutoAlt:	mov	cx,ax		;cx = aiming altitude */
	cx = ax;
	// 0 ;---------------------------
	// 0 ;* pick up cruise parameters
	// 0 ;---------------------------
	/* mov	di,PerfDataPtr */
	di = perfdataptr;
	/* mov	di,PERF_CRUISE[di] */
	di = m2c::getdata(*(dw*)(((db*)&((perf_data*)raddr(ds,di))->perf_cruise)));
	// 0 ;-----------------
	// 0 ;* calc pitch rate (wrt vtas)
	// 0 ;-----------------
	// 0 ;* if not terrain following then
	// 0 ;*    @200kts, pitch rate = 20 pdeg / sec (=2g) (vfac lo = 340 * 8)
	// 0 ;*    @800kts, pitch rate =  4 pdeg / sec (=2g) (vfac hi = 1360 * 8)
	// 0 ;* else
	// 0 ;*    @200kts, pitch rate = 20 pdeg / sec (=2g) (vfac lo = 340 * 8)
	// 0 ;*    @800kts, pitch rate = 10 pdeg / sec (>2g) (vfac hi = 980 * 8)
	// 0 ;* endif
	// 0 ;*
	// 0 ;* pitch rate = 20 * 128 - (bound(vtas, vfac lo, vfac hi) - vfac lo) / 4
	/* mov	dx,1360*8	;assume not terrain following */
	dx = 1360*8;
	/* mov	si,HC_Data.HC_WP_PTR */
	si = hc_data.hc_wp_ptr;
	/* test	WP_ATTR[si],WP_TF	;terrain follow? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x8);
	/* jz	@F			;no -> */
	if (!(((waypoint*)raddr(ds,si))->wp_attr & 0x8)) {goto dummylabel21;}
	/* mov	dx,980*8	;terrain following */
	dx = 980*8;
dummylabel21:
	// 4531 
	/* @@:		mov	ax,HC_Data.HC_VTAS */
	ax = hc_data.hc_vtas;
	/* cmp	ax,340*8 */
	CMP(ax, 340*8);
	/* jge	__m2c_macrolocal_26_TestHi */
	if ((short)(ax) >= (short)(340*8)) {goto __m2c_macrolocal_26_testhi;}
	/* mov	ax,340*8 */
	ax = 340*8;
	/* jmp	__m2c_macrolocal_26_TestOk */
	goto __m2c_macrolocal_26_testok;
__m2c_macrolocal_26_testhi:
	// 4533 
	/* __m2c_macrolocal_26_TestHi:		cmp	ax,dx */
	CMP(ax, dx);
	/* jle	__m2c_macrolocal_26_TestOk */
	if ((short)(ax) <= (short)(dx)) {goto __m2c_macrolocal_26_testok;}
	/* mov	ax,dx */
	ax = dx;
__m2c_macrolocal_26_testok:
	// 4535 
	/* mov	si,ax		;si = bound(vtas, vfac lo, vfac hi) */
	si = ax;
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
	/* mov	bx,bp		;bx = pitch rate */
	bx = bp;
	// 0 ;------------------
	// 0 ;* calc pitch limit (wrt vtas)
	// 0 ;------------------
	// 0 ;* if not CRS_HEAVY then
	// 0 ;*    pitch limit = pitch rate * 2
	// 0 ;* else
	// 0 ;*    pitch limit = pitch rate
	// 0 ;*    pitch rate = pitch rate / 2
	// 0 ;* endif
	/* test	CRS_HEAVY[di],1	;heavy helicopter? */
	TEST(((cruise*)raddr(ds,di))->crs_heavy, 1);
	/* jnz	@F		;yes -> */
	if ((((cruise*)raddr(ds,di))->crs_heavy & 1) != 0) {goto dummylabel22;}
	/* shl	bp,1		;pitch limit = pitch rate * 2 */
	SHL(bp, 1);
	/* jmp	PRateOk */
	goto prateok;
dummylabel22:
	// 4537 
	/* @@:		shr	bx,1		;pitch rate / 2 */
	SHR(bx, 1);
	/* adc	bx,0 */
	ADC(bx, 0);
	// 0 ;-----------------
	// 0 ;* calc dist error (wrt vtas)
	// 0 ;-----------------
	// 0 ;* dist error = bound(vtas, 340 * 8, 1360 * 8) / 8
prateok:
	// 4539 
	/* shr	si,1 */
	SHR(si, 1);
	/* shr	si,1 */
	SHR(si, 1);
	/* shr	si,1 */
	SHR(si, 1);
	/* adc	si,0 */
	ADC(si, 0);
	// 0 ;si = dist error
	// 0 ;--------------
	// 0 ;* calc z error
	// 0 ;--------------
	// 0 ;* z error = aiming z - current z
	/* mov	ax,cx */
	ax = cx;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* sub	ax,WORD PTR HC_View.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&hc_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR HC_View.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&hc_view+vp_zft_hi)));
	/* mov	cx,dx		;cx = sign(z error) */
	cx = dx;
	/* test	dx,dx		;< 0? */
	TEST(dx, dx);
	/* jns	@F		;no -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel23;}
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
dummylabel23:
	// 4541 
	/* @@:		test	dx,dx		;z error > 65,535ft? */
	TEST(dx, dx);
	/* jnz	SetPitchLimit	;yes -> */
	if ((dx & dx) != 0) {goto setpitchlimit;}
	/* cmp	ax,si		;z error < dist error? */
	CMP(ax, si);
	/* jae	SetPitchLimit	;no -> */
	if ((dw)(ax) >= (dw)(si)) {goto setpitchlimit;}
	/* mov	dx,ax		;z error * 32768 */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	si */
	DIV2(si);
	/* push	bx		;pitch rate */
	PUSH(bx);
	/* push	cx		;sign(z error) */
	PUSH(cx);
	/* push	di		;param ptr */
	PUSH(di);
	/* push	bp		;pitch limit */
	PUSH(bp);
	/* call	ArcTan */
	CALLF(arctan, 0);
	/* pop	bp		;pitch limit */
	POP(bp);
	/* pop	di		;param ptr */
	POP(di);
	/* pop	cx		;sign(z error) */
	POP(cx);
	/* pop	bx		;pitch rate */
	POP(bx);
	/* cmp	ax,bp		;aiming pitch <= pitch limit */
	CMP(ax, bp);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel24;}
setpitchlimit:
	// 4543 
	/* SetPitchLimit:	mov	ax,bp */
	ax = bp;
dummylabel24:
	// 4545 
	/* @@:		xchg	ax,cx		;aiming pitch * sign(z error) */
	XCHG(ax, cx);
	/* cwd */
	CWD;
	/* mov	ax,cx */
	ax = cx;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;-----------------
	// 0 ;* sort pitch rate
	// 0 ;-----------------
	/* sub	ax,HC_Data.HC_LIFT_VCTR	;pitch error = aiming pitch - lift vector */
	SUB(ax, hc_data.hc_lift_vctr);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(error), dx = sign(error)
	/* mov	bp,ax		;bp = abs(error) */
	bp = ax;
	/* mov	cx,dx		;cx = sign(error) */
	cx = dx;
	/* mov	ax,DeltaTime */
	ax = deltatime;
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
	/* mov	ax,dx */
	ax = dx;
	// 0 ;delta pitch rate
	/* cmp	ax,bp		;delta pitch rate > error? */
	CMP(ax, bp);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel25;}
	/* mov	ax,bp		;delta pitch rate = error */
	ax = bp;
dummylabel25:
	// 4547 
	/* @@:		xor	ax,cx		;restore sign */
	XOR(ax, cx);
	/* sub	ax,cx */
	SUB(ax, cx);
	/* add	ax,HC_Data.HC_LIFT_VCTR */
	ADD(ax, hc_data.hc_lift_vctr);
	/* mov	HC_Data.HC_LIFT_VCTR,ax */
	hc_data.hc_lift_vctr = ax;
	/* mov	HC_Data.HC_PFINE,ax */
	hc_data.hc_pfine = ax;
	/* ret */
	RETN(0);
autothrottle:
	// 3356 
	// 0 ;---------------------------
	// 0 ;* pick up cruise parameters
	// 0 ;---------------------------
edummylabel15:
	// 4549 
	/* mov	di,PerfDataPtr */
	di = perfdataptr;
	/* mov	di,PERF_CRUISE[di] */
	di = m2c::getdata(*(dw*)(((db*)&((perf_data*)raddr(ds,di))->perf_cruise)));
	// 0 ;---------------------------------
	// 0 ;* limit aiming speed to max speed
	// 0 ;---------------------------------
	/* cmp	ax,CRS_MXSPEED_SL[di]	;aiming speed <= max speed? */
	CMP(ax, *(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_mxspeed_sl)));
	/* jbe	@F			;yes -> */
	if ((dw)(ax) <= (dw)(*(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_mxspeed_sl)))) {goto dummylabel26;}
	/* mov	ax,CRS_MXSPEED_SL[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_mxspeed_sl)));
	// 0 ;----------------------------
	// 0 ;* accelerate to aiming speed
	// 0 ;----------------------------
	// 0 ;* calc speed error
dummylabel26:
	// 4551 
	/* @@:		mov	cx,ax		;cx = aiming speed */
	cx = ax;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sub	bx,HC_Data.HC_VTAS_FINE	;error = aiming speed - current speed */
	SUB(bx, hc_data.hc_vtas_fine);
	/* sbb	cx,HC_Data.HC_VTAS */
	SBB(cx, hc_data.hc_vtas);
	/* js	@F		;decelerate -> */
	if ((short)(cx) < 0) {goto dummylabel27;}
	// 0 ;* accelerating - calc delta max accel (keep result as 32-bit value)
	/* xor	si,si		;accel */
	XOR(si, si);
	/* mov	ax,CRS_ACCEL[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((cruise*)raddr(ds,di))->crs_accel)));
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* jmp	ContAccel */
	goto contaccel;
	// 0 ;* decelerating - calc delta fixed decel (keep result as 32-bit value)
dummylabel27:
	// 4553 
	/* @@:		mov	si,-1		;decel */
	si = -1;
	/* mov	ax,FIXED_DECEL */
	ax = 10*8;
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* cmp	cx,100*8	;error > 100ft/sec? */
	CMP(cx, 100*8);
	/* jbe	ContAccel	;no -> */
	if ((dw)(cx) <= (dw)(100*8)) {goto contaccel;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	// 0 ;* if accel > error then
	// 0 ;*    accel = error
	// 0 ;* endif
contaccel:
	// 4555 
	/* ContAccel:	cmp	dx,cx */
	CMP(dx, cx);
	/* jb	AccelOk */
	if ((dw)(dx) < (dw)(cx)) {goto accelok;}
	/* ja	@F */
	if ((dw)(dx) > (dw)(cx)) {goto dummylabel28;}
	/* cmp	ax,bx */
	CMP(ax, bx);
	/* jbe	AccelOk */
	if ((dw)(ax) <= (dw)(bx)) {goto accelok;}
dummylabel28:
	// 4557 
	/* @@:		mov	dx,cx */
	dx = cx;
	/* mov	ax,bx */
	ax = bx;
accelok:
	// 4559 
	/* AccelOk:	xor	ax,si		;restore sign */
	XOR(ax, si);
	/* xor	dx,si */
	XOR(dx, si);
	/* sub	ax,si */
	SUB(ax, si);
	/* sbb	dx,si */
	SBB(dx, si);
	/* xor	bx,si		;restore sign */
	XOR(bx, si);
	/* xor	cx,si */
	XOR(cx, si);
	/* sub	bx,si */
	SUB(bx, si);
	/* sbb	cx,si */
	SBB(cx, si);
	/* add	HC_Data.HC_VTAS_FINE,ax */
	ADD(hc_data.hc_vtas_fine, ax);
	/* adc	HC_Data.HC_VTAS,dx */
	ADC(hc_data.hc_vtas, dx);
	// 0 ;----------------------
	// 0 ;* sort pitch wrt accel
	// 0 ;----------------------
	// 0 ;* speed error = -speed error (pitch down to accel, pitch up to decel)
	// 0 ;*
	// 0 ;* aiming pitch = min(abs(speed error), 64 * 8) * sign(speed error) * 8 (fine pdegs)
	// 0 ;*
	// 0 ;* aiming pitch = aiming pitch - 4 * 128 (fixed pitch down attitude)
	// 0 ;*
	// 0 ;* @ max accel, pitch = -36pdegs
	// 0 ;* @ max decel, pitch = +28pdegs
	/* mov	ax,cx */
	ax = cx;
	/* neg	ax		;accel = pitch down, decel = pitch up */
	NEG(ax);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(speed error), dx = sign(speed error)
	/* cmp	ax,64*8 */
	CMP(ax, 64*8);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(64*8)) {goto dummylabel29;}
	/* mov	ax,64*8		;limit */
	ax = 64*8;
dummylabel29:
	// 4553 
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	// 4561 
	/* xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* sub	ax,4*128	;fixed pitch down */
	SUB(ax, 4*128);
	// 0 ;* adjust pitch
	/* sub	ax,HC_Data.HC_ACCEL_PFINE	;ax = pitch error */
	SUB(ax, hc_data.hc_accel_pfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(pitch error), dx = sign(pitch error)
	/* mov	bx,ax		;bx = abs(error) */
	bx = ax;
	/* mov	cx,dx		;dx = sign(error) */
	cx = dx;
	/* mov	ax,ACC_PITCH_RATE */
	ax = 32*128;
	/* test	CRS_HEAVY[di],1	;heavy helicopter? */
	TEST(((cruise*)raddr(ds,di))->crs_heavy, 1);
	/* jz	@F		;no -> */
	if (!(((cruise*)raddr(ds,di))->crs_heavy & 1)) {goto dummylabel30;}
	/* shr	ax,1		;pitch rate / 2 */
	SHR(ax, 1);
dummylabel30:
	// 4563 
	/* @@:		mov	dx,DeltaTime */
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
	/* cmp	dx,bx		;rate > error? */
	CMP(dx, bx);
	/* jbe	@F		;no -> */
	if ((dw)(dx) <= (dw)(bx)) {goto dummylabel31;}
	/* mov	dx,bx */
	dx = bx;
dummylabel31:
	// 4565 
	/* @@:		xor	dx,cx		;restore sign */
	XOR(dx, cx);
	/* sub	dx,cx */
	SUB(dx, cx);
	/* add	dx,HC_Data.HC_ACCEL_PFINE */
	ADD(dx, hc_data.hc_accel_pfine);
	/* mov	HC_Data.HC_ACCEL_PFINE,dx */
	hc_data.hc_accel_pfine = dx;
	/* add	HC_Data.HC_PFINE,dx */
	ADD(hc_data.hc_pfine, dx);
	/* ret */
	RETN(0);
calcangles:
	// 3502 
	/* mov	cl,7		;/128 */
	cl = 7;
	// 0 ;---------
	// 0 ;* heading
	// 0 ;---------
edummylabel16:
	// 4567 
	/* mov	ax,HC_Data.HC_HFINE */
	ax = hc_data.hc_hfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	HC_View.VP_HDG,ax */
	hc_view.vp_hdg = ax;
	// 0 ;-------
	// 0 ;* pitch
	// 0 ;-------
	/* mov	ax,HC_Data.HC_PFINE */
	ax = hc_data.hc_pfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	HC_View.VP_PITCH,ax */
	hc_view.vp_pitch = ax;
	// 0 ;------
	// 0 ;* roll
	// 0 ;------
	/* mov	ax,HC_Data.HC_RFINE */
	ax = hc_data.hc_rfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	HC_View.VP_ROLL,ax */
	hc_view.vp_roll = ax;
	/* ret */
	RETN(0);
calcdeltaxyz:
	// 3543 
	/* mov	di,DeltaTime ;* kill: assume all */
	di = deltatime;
	// 0 ;* calc speed * cos(lift)
edummylabel17:
	// 4569 
	/* mov	bx,HC_Data.HC_LIFT_VCTR */
	bx = hc_data.hc_lift_vctr;
	/* mov	cl,7 */
	cl = 7;
	/* shr	bx,cl		;/128 (convert fine pdegs to pdegs) */
	SHR(bx, cl);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	dx,CosTable[bx] */
	dx = *(dw*)(((db*)&costable)+bx);
	// 0 ;dx = cos(lift)
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&costable)+bx););	// 3557 mov	dx,CosTable[bx] */
	/* mov	ax,HC_Data.HC_VTAS */
	ax = hc_data.hc_vtas;
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
	// 0 ;bp = speed * cos(lift)
	// 0 ;------------------------------------------------------
	// 0 ;* delta xft = speed * cos(lift) * sin(hdg) * DeltaTime
	// 0 ;------------------------------------------------------
	/* mov	bx,HC_View.VP_HDG */
	bx = hc_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&sintable)+bx););	// 3574 						mov	ax,SinTable[bx] */
/* m2c-phantom removed: 	R(bx = *(dw*)(((db*)&costable)+bx););	// 3575 						mov	bx,CosTable[bx] */
	// 0 ;ax = sin(hdg), bx = cos(hdg)
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	bx,CosTable[bx] */
	bx = *(dw*)(((db*)&costable)+bx);
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
	// 0 ;speed * cos(lift) * sin(hdg)
	/* imul	di		;speed * cos(lift) * sin(hdg) * DeltaTime */
	IMUL1_2(di);
	// 0 ;* /4 to align dx = delta xft and ax = delta xft fine
	/* test	dx,dx		;delta xft < 0? */
	TEST(dx, dx);
	/* jns	@F		;no -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel32;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;avoid -1 truncation error
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
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
	/* jmp	DxOk */
	goto dxok;
dummylabel32:
	// 4563 
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 4571 
dxok:
	// 4573 
	/* DxOk:		add	HC_Data.HC_XFINE,ax */
	ADD(hc_data.hc_xfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,bp		;ax = speed * cos(lift) */
	ax = bp;
	/* mov	bp,dx		;bp = delta xft */
	bp = dx;
	// 0 ;------------------------------------------------------
	// 0 ;* delta yft = speed * cos(lift) * cos(hdg) * DeltaTime
	// 0 ;------------------------------------------------------
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
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(lift) * cos(hdg)
	/* imul	di		;speed * cos(lift) * cos(hdg) * DeltaTime */
	IMUL1_2(di);
	// 0 ;* /4 to align dx = delta yft and ax = delta yft fine
	/* test	dx,dx		;delta yft < 0? */
	TEST(dx, dx);
	/* jns	@F		;no -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel33;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;avoid -1 truncation error
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
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
	/* jmp	DyOk */
	goto dyok;
dummylabel33:
	// 4567 
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 4575 
dyok:
	// 4577 
	/* DyOk:		add	HC_Data.HC_YFINE,ax */
	ADD(hc_data.hc_yfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bx,dx		;bx = delta yft */
	bx = dx;
	// 0 ;------------------------------------------------
	// 0 ;* delta zft = speed * sin(lift fine) * DeltaTime
	// 0 ;------------------------------------------------
	/* mov	ax,HC_Data.HC_LIFT_VCTR */
	ax = hc_data.hc_lift_vctr;
	/* push	bx		;delta yft */
	PUSH(bx);
	/* push	di		;delta time */
	PUSH(di);
	/* push	bp		;delta xft */
	PUSH(bp);
	/* call	CalcSineFine */
	CALLF(calcsinefine, 0);
	/* pop	bp		;delta xft */
	POP(bp);
	/* pop	di		;delta time */
	POP(di);
	/* pop	bx		;delta yft */
	POP(bx);
	/* mov	dx,HC_Data.HC_VTAS */
	dx = hc_data.hc_vtas;
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
	// 0 ;speed * sin(lift)
	/* imul	di		;speed * sin(lift) * DeltaTime */
	IMUL1_2(di);
	// 0 ;* /4 to align dx = delta zft and ax = delta zft fine
	/* test	dx,dx		;delta zft < 0? */
	TEST(dx, dx);
	/* jns	@F		;no -> */
	if ((short)((dx & dx)) >= 0) {goto dummylabel34;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;avoid -1 truncation error
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
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
	/* jmp	DzOk */
	goto dzok;
dummylabel34:
	// 4571 
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 4579 
dzok:
	// 4581 
	/* DzOk:		add	HC_Data.HC_ZFINE,ax */
	ADD(hc_data.hc_zfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx		;cx = delta zft */
	cx = dx;
	/* mov	ax,bp		;ax = delta xft */
	ax = bp;
	/* ret */
	RETN(0);
groundcheck:
	// 3716 
	/* mov	si,HelicopterPtr ;* kill: assume all */
	si = helicopterptr;
edummylabel18:
	// 4583 
	/* cmp	WORD PTR _VP_ZFT_HI[si],0	;below ground? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	/* jge	@F		       		;no -> */
	if ((short)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))) >= (short)(0)) {goto dummylabel35;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR _VP_ZFT_HI[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))), m2c::getdata(ax));
	/* mov	WORD PTR _VP_ZFT_LO[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))), m2c::getdata(ax));
	/* mov	_HC_ZFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_zfine))), m2c::getdata(ax));
dummylabel35:
	// 4585 
	/* @@:		ret */
	RETN(0);
sortcontrolmode:
	// 3734 
	/* mov	dx,CTRL_APPROACH		;assume approach */
	dx = 6;
edummylabel19:
	// 4587 
	/* test	WP_ATTR[si],WP_ILS		;approach? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x10);
	/* jnz	@F				;yes -> */
	if ((((waypoint*)raddr(ds,si))->wp_attr & 0x10) != 0) {goto dummylabel36;}
	/* mov	dx,CTRL_TAKEOFF			;assume takeoff */
	dx = 2;
	/* cmp	WP_ACTION[si],HC_WP_TAKEOFF	;takeoff? */
	CMP(((waypoint*)raddr(ds,si))->wp_action, 2);
	/* je	@F				;yes -> */
	if ((db)(((waypoint*)raddr(ds,si))->wp_action) == (db)(2)) {goto dummylabel36;}
	/* mov	dx,CTRL_TRACK			;assume airborne */
	dx = 4;
	/* cmp	WP_ACTION[si],HC_WP_AIRBORNE	;airborne? */
	CMP(((waypoint*)raddr(ds,si))->wp_action, 4);
	/* je	@F				;yes -> */
	if ((db)(((waypoint*)raddr(ds,si))->wp_action) == (db)(4)) {goto dummylabel36;}
	/* mov	dx,CTRL_TRACK			;default to track */
	dx = 4;
dummylabel36:
	// 4589 
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
                case m2c::k__m2c_macrolocal_13_testhi: 	goto __m2c_macrolocal_13_testhi;
        case m2c::k__m2c_macrolocal_13_testok: 	goto __m2c_macrolocal_13_testok;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_24_mvxy1: 	goto __m2c_macrolocal_24_mvxy1;
        case m2c::k__m2c_macrolocal_24_mvxy2: 	goto __m2c_macrolocal_24_mvxy2;
        case m2c::k__m2c_macrolocal_24_mvxy3: 	goto __m2c_macrolocal_24_mvxy3;
        case m2c::k__m2c_macrolocal_24_mvxy4: 	goto __m2c_macrolocal_24_mvxy4;
        case m2c::k__m2c_macrolocal_25_mvxy1: 	goto __m2c_macrolocal_25_mvxy1;
        case m2c::k__m2c_macrolocal_25_mvxy2: 	goto __m2c_macrolocal_25_mvxy2;
        case m2c::k__m2c_macrolocal_25_mvxy3: 	goto __m2c_macrolocal_25_mvxy3;
        case m2c::k__m2c_macrolocal_25_mvxy4: 	goto __m2c_macrolocal_25_mvxy4;
        case m2c::k__m2c_macrolocal_26_testhi: 	goto __m2c_macrolocal_26_testhi;
        case m2c::k__m2c_macrolocal_26_testok: 	goto __m2c_macrolocal_26_testok;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_8_testhi: 	goto __m2c_macrolocal_8_testhi;
        case m2c::k__m2c_macrolocal_8_testok: 	goto __m2c_macrolocal_8_testok;
        case m2c::kaccelok: 	goto accelok;
        case m2c::kaccelzdot: 	goto accelzdot;
        case m2c::kautoaltitude: 	goto autoaltitude;
        case m2c::kautoheading: 	goto autoheading;
        case m2c::kautoroute: 	goto autoroute;
        case m2c::kautothrottle: 	goto autothrottle;
        case m2c::kcalcangles: 	goto calcangles;
        case m2c::kcalcdeltaxyz: 	goto calcdeltaxyz;
        case m2c::kcalcnextwp: 	goto calcnextwp;
        case m2c::kcalcturndist: 	goto calcturndist;
        case m2c::kcontaccel: 	goto contaccel;
        case m2c::kcontautoalt: 	goto contautoalt;
        case m2c::kcontheading: 	goto contheading;
        case m2c::kconttouchdown: 	goto conttouchdown;
        case m2c::kctrlapproach: 	goto ctrlapproach;
        case m2c::kctrlnull: 	goto ctrlnull;
        case m2c::kctrltakeoff: 	goto ctrltakeoff;
        case m2c::kctrltouchdown: 	goto ctrltouchdown;
        case m2c::kctrltrack: 	goto ctrltrack;
        case m2c::kdeceltouchdown: 	goto deceltouchdown;
        case m2c::kdecelzdot: 	goto decelzdot;
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
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
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
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitnextwp: 	goto exitnextwp;
        case m2c::kexitroute: 	goto exitroute;
        case m2c::kexittakeoff: 	goto exittakeoff;
        case m2c::kexittouchdown: 	goto exittouchdown;
        case m2c::kexitturndist: 	goto exitturndist;
        case m2c::kgroundcheck: 	goto groundcheck;
        case m2c::kinithelicops: 	goto inithelicops;
        case m2c::kinitoneexit: 	goto initoneexit;
        case m2c::kinitoneheli: 	goto initoneheli;
        case m2c::klandzdotok: 	goto landzdotok;
        case m2c::kmaxrollangle: 	goto maxrollangle;
        case m2c::kprateok: 	goto prateok;
        case m2c::kqueque0008: 	goto queque0008;
        case m2c::kqueque000a: 	goto queque000a;
        case m2c::kqueque000c: 	goto queque000c;
        case m2c::kqueque000e: 	goto queque000e;
        case m2c::ksatisfiedwp: 	goto satisfiedwp;
        case m2c::kselectnextwp: 	goto selectnextwp;
        case m2c::ksetautoalt: 	goto setautoalt;
        case m2c::ksetctrlmode: 	goto setctrlmode;
        case m2c::ksetmaxspeed: 	goto setmaxspeed;
        case m2c::ksetpitchlimit: 	goto setpitchlimit;
        case m2c::ksetspeed: 	goto setspeed;
        case m2c::ksortcontrolmode: 	goto sortcontrolmode;
        case m2c::ksortdelay: 	goto sortdelay;
        case m2c::ksortlink: 	goto sortlink;
        case m2c::ksortwpalt: 	goto sortwpalt;
        case m2c::ktargetwp: 	goto targetwp;
        case m2c::ktdistov: 	goto tdistov;
        case m2c::ktimeok: 	goto timeok;
        case m2c::kupdatehelicops: 	goto updatehelicops;
        case m2c::kupdateoneexit: 	goto updateoneexit;
        case m2c::kupdateoneheli: 	goto updateoneheli;
        case m2c::kwpok: 	goto wpok;
        case m2c::kzdotok: 	goto zdotok;
        default: return __dispatch_call(__disp, _state);
    };
}


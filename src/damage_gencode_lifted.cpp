/* THIS IS GENERATED FILE */

        
#include "damage.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
maxdamage:
	// 1290 
	// 0 ;--------------------------
	// 0 ;* calc random damage level
edummylabel1:
	// 4369 
	/* call	RandX		;0.00 ..  2.55 */
	CALLF(randx, 0);
	/* shl	ax,1		;0.00 ..  5.10 */
	SHL(ax, 1);
	/* add	ax,8*100	;8.00 .. 13.10 */
	ADD(ax, 8*100);
	/* mov	dx,ax */
	dx = ax;
	/* jmp	IntoDamage */
	goto intodamage;
	// 0 ;--------------------------
meddamage:
	// 4371 
	// 0 ;--------------------------
	// 0 ;* calc random damage level
	/* call	RandX		;0.00 .. 2.55 */
	CALLF(randx, 0);
	/* add	ax,1*100	;1.00 .. 3.55 */
	ADD(ax, 1*100);
	/* mov	dx,ax */
	dx = ax;
	/* jmp	IntoDamage */
	goto intodamage;
	// 0 ;--------------------------
mindamage:
	// 4373 
	// 0 ;--------------------------
	/* mov	dx,LastFrame	;damage wrt time */
	dx = lastframe;
	// 0 ;---------------------------
intodamage:
	// 4375 
	// 0 ;---------------------------
	// 0 ;* update timer
	/* mov	ax,DamageTimer */
	ax = damagetimer;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* jnc	@F */
	if (!CF) {goto dummylabel1;}
	// 0 ;* create some damage
	/* call	RandomDamage */
	CALL(randomdamage, 0);
	// 0 ;* reset damage interval
	/* call	RandX		; 0.00 ..  2.55 secs */
	CALLF(randx, 0);
	/* shl	ax,1		; 0.00 ..  5.10 secs */
	SHL(ax, 1);
	/* shl	ax,1		; 0.00 .. 10.10 secs */
	SHL(ax, 1);
	/* add	ax,10*100	;10.00 .. 20.10 secs */
	ADD(ax, 10*100);
dummylabel1:
	// 4377 
	/* @@:		mov	DamageTimer,ax */
	damagetimer = ax;
	/* ret */
	RETF(0);
randomdamage:
	// 1343 
	// 0 ;------------------------------
	// 0 ;* select random item to damage
	// 0 ;------------------------------
edummylabel2:
	// 4379 
	/* call	RandX */
	CALLF(randx, 0);
	/* mov	dx,20 */
	dx = 20;
	/* mul	dx		;0 .. 20 * 255 */
	MUL1_2(dx);
	/* mov	bl,ah		;0 .. 19 */
	bl = ah;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
__disp=*(dw*)(((db*)&damageswitch)+bx);
	/* jmp	DamageSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;jmp DamTAB1
	// 0 ;0---------------------------
damgear:
	// 4381 
	// 0 ;---------------------------
	/* mov	SSF_Gear,1 */
	ssf_gear = 1;
	/* or	RedWarnings2,RED_UC */
	OR(redwarnings2, 0x40);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_1_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_1_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_1_skip:
	// 4383 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1369 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1370 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1371 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1372 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1373 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;1---------------------------
damwheelbrakes:
	// 4385 
	// 0 ;---------------------------
	/* mov	SSF_WheelBrakes,1 */
	ssf_wheelbrakes = 1;
	/* or	AmbWarnings2,AMB_WB */
	OR(ambwarnings2, 0x10);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_2_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_2_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1383 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1384 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1385 				        mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1386 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_2_skip:
	// 4387 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1388 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;2---------------------------
damairbrakes:
	// 4389 
	// 0 ;---------------------------
	/* mov	SSF_AirBrakes,1 */
	ssf_airbrakes = 1;
	/* or	AmbWarnings2,AMB_AB */
	OR(ambwarnings2, 0x20);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_3_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_3_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_3_skip:
	// 4391 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1407 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1408 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1409 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1410 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1411 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;3---------------------------
damengine1:
	// 4393 
	// 0 ;---------------------------
	/* mov	SSF_Engine1,1 */
	ssf_engine1 = 1;
	/* or	RedWarnings2,RED_L_ENG */
	OR(redwarnings2, 0x100);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_4_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_4_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1421 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1422 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1423 				        mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1424 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_4_skip:
	// 4395 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1426 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;4---------------------------
damengine2:
	// 4397 
	// 0 ;---------------------------
	/* mov	SSF_Engine2,1 */
	ssf_engine2 = 1;
	/* or	RedWarnings2,RED_R_ENG */
	OR(redwarnings2, 0x200);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_5_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_5_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_5_skip:
	// 4399 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1445 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1446 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1447 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1448 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1449 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;5---------------------------
damwingsweep:
	// 4401 
	// 0 ;---------------------------
	/* mov	SSF_Sweep,1 */
	ssf_sweep = 1;
	/* or	AmbWarnings2,AMB_SWP */
	OR(ambwarnings2, 0x80);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_6_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_6_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1459 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1460 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1461 				        mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1462 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_6_skip:
	// 4403 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1464 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;6---------------------------
damflaps:
	// 4405 
	// 0 ;---------------------------
	/* mov	SSF_Flaps,1 */
	ssf_flaps = 1;
	/* or	AmbWarnings2,AMB_FLPS */
	OR(ambwarnings2, 0x40);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_7_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_7_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_7_skip:
	// 4407 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1483 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1484 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1485 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1486 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1487 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;7---------------------------
damthrustrvrs:
	// 4409 
	// 0 ;---------------------------
	/* mov	SSF_ThrustRvrs,1 */
	ssf_thrustrvrs = 1;
	/* or	RedWarnings2,RED_REV */
	OR(redwarnings2, 0x10);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_8_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_8_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1497 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1498 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1499 				        mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1500 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_8_skip:
	// 4411 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1502 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;8---------------------------
damspils:
	// 4413 
	// 0 ;---------------------------
	/* mov	SSF_SPILS,1 */
	ssf_spils = 1;
	/* or	RedWarnings2,RED_SPILS */
	OR(redwarnings2, 0x20);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_9_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_9_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_9_skip:
	// 4415 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1521 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1522 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1523 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1524 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1525 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;9---------------------------
damhud:
	// 4417 
	// 0 ;---------------------------
	/* mov	SSF_HUD,1 */
	ssf_hud = 1;
	/* or	AmbWarnings2,AMB_HUD */
	OR(ambwarnings2, 0x100);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_10_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_10_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1535 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1536 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1537 				        mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1538 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_10_skip:
	// 4419 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1540 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;10---------------------------
dampilotmfd:
	// 4421 
	// 0 ;---------------------------
	/* mov	SSF_PilotMFD,1 */
	ssf_pilotmfd = 1;
	/* or	AmbWarnings2,AMB_MFD1 */
	OR(ambwarnings2, 0x200);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_11_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_11_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_11_skip:
	// 4423 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1559 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1560 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1561 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1562 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1563 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;11---------------------------
damnavigmfd:
	// 4425 
	// 0 ;---------------------------
	/* mov	SSF_NavigMFD,1 */
	ssf_navigmfd = 1;
	/* or	AmbWarnings2,AMB_MFD2 */
	OR(ambwarnings2, 0x400);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_12_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_12_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1573 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1574 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1575 				        mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1576 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_12_skip:
	// 4427 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1578 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;12---------------------------
damtab1:
	// 4429 
	// 0 ;---------------------------
	/* mov	SSF_TAB1,1 */
	ssf_tab1 = 1;
	/* or	AmbWarnings2,AMB_L_TAB */
	OR(ambwarnings2, 0x800);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_13_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_13_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_13_skip:
	// 4431 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1597 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1598 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1599 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1600 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1601 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;13---------------------------
damtab2:
	// 4433 
	// 0 ;---------------------------
	/* mov	SSF_TAB2,1 */
	ssf_tab2 = 1;
	/* or	AmbWarnings2,AMB_R_TAB */
	OR(ambwarnings2, 0x1000);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_14_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_14_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1611 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1612 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1613 				        mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1614 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_14_skip:
	// 4435 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1616 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;14---------------------------
damoxygen:
	// 4437 
	// 0 ;---------------------------
	/* mov	SSF_Oxygen,1 */
	ssf_oxygen = 1;
	/* or	RedWarnings2,RED_OXY */
	OR(redwarnings2, 0x1);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_15_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_15_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_15_skip:
	// 4439 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1635 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1636 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1637 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1638 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1639 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;15---------------------------
damradar:
	// 4441 
	// 0 ;---------------------------
	/* mov	SSF_Radar,1 */
	ssf_radar = 1;
	/* or	AmbWarnings2,AMB_RAD */
	OR(ambwarnings2, 0x2000);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_16_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_16_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1649 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1650 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1651 				        mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1652 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_16_skip:
	// 4443 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1654 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;16---------------------------
damecm:
	// 4445 
	// 0 ;---------------------------
	/* test	ECMFitted,1 */
	TEST(ecmfitted, 1);
	/* jz	@F */
	if (!(ecmfitted & 1)) {goto dummylabel2;}
	/* mov	SSF_ECM,1 */
	ssf_ecm = 1;
	/* or	AmbWarnings2,AMB_ECM */
	OR(ambwarnings2, 0x4);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_17_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_17_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_17_skip:
	// 4447 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1675 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1676 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1677 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1678 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1679 mov	ShakeTimer,65535 */
	/* mov	ECMActive,0 */
	ecmactive = 0;
dummylabel2:
	// 4449 
	/* @@:		ret */
	RETN(0);
	// 0 ;17---------------------------
damrwr:
	// 4451 
	// 0 ;---------------------------
	/* mov	SSF_RWR,1 */
	ssf_rwr = 1;
	/* or	AmbWarnings2,AMB_RWR */
	OR(ambwarnings2, 0x4000);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_18_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_18_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_18_skip:
	// 4453 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1695 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1696 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1697 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1698 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1699 mov	ShakeTimer,65535 */
	/* ret */
	RETN(0);
	// 0 ;18---------------------------
damadc:
	// 4455 
	// 0 ;---------------------------
	/* mov	SSF_ADC,1 */
	ssf_adc = 1;
	/* or	AmbWarnings2,AMB_ADC */
	OR(ambwarnings2, 0x2);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_19_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_19_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1709 				        				        mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1710 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 1711 				        mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1712 				        mov	ShakeTimer,65535 */
__m2c_macrolocal_19_skip:
	// 4457 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1714 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* ret */
	RETN(0);
	// 0 ;19---------------------------
damenginefire:
	// 4459 
	// 0 ;---------------------------
	// 0 ;* reduce chance of engine fire
	/* call	RandX */
	CALLF(randx, 0);
	/* cmp	al,128 */
	CMP(al, 128);
	/* jb	SkipFire */
	if ((db)(al) < (db)(128)) {goto skipfire;}
	// 0 ;* random lh eng fire
	/* call	RandX */
	CALLF(randx, 0);
	/* cmp	al,127 */
	CMP(al, 127);
	/* ja	@F */
	if ((db)(al) > (db)(127)) {goto dummylabel3;}
	/* mov	EngFire1,1 */
	engfire1 = 1;
	/* or	RedWarnings2,RED_L_FIRE */
	OR(redwarnings2, 0x2);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_20_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_20_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_20_skip:
	// 4461 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1743 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1744 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1745 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1746 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1747 mov	ShakeTimer,65535 */
	// 0 ;* random rh eng fire
dummylabel3:
	// 4463 
	/* @@:		call	RandX */
	CALLF(randx, 0);
	/* cmp	al,127 */
	CMP(al, 127);
	/* ja	SkipFire */
	if ((db)(al) > (db)(127)) {goto skipfire;}
	/* mov	EngFire2,1 */
	engfire2 = 1;
	/* or	RedWarnings2,RED_R_FIRE */
	OR(redwarnings2, 0x4);
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_21_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_21_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_21_skip:
	// 4465 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 1762 				        cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 1763 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 1764 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 1765 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 1766 mov	ShakeTimer,65535 */
skipfire:
	// 4467 
	/* SkipFire:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_10_skip: 	goto __m2c_macrolocal_10_skip;
        case m2c::k__m2c_macrolocal_11_skip: 	goto __m2c_macrolocal_11_skip;
        case m2c::k__m2c_macrolocal_12_skip: 	goto __m2c_macrolocal_12_skip;
        case m2c::k__m2c_macrolocal_13_skip: 	goto __m2c_macrolocal_13_skip;
        case m2c::k__m2c_macrolocal_14_skip: 	goto __m2c_macrolocal_14_skip;
        case m2c::k__m2c_macrolocal_15_skip: 	goto __m2c_macrolocal_15_skip;
        case m2c::k__m2c_macrolocal_16_skip: 	goto __m2c_macrolocal_16_skip;
        case m2c::k__m2c_macrolocal_17_skip: 	goto __m2c_macrolocal_17_skip;
        case m2c::k__m2c_macrolocal_18_skip: 	goto __m2c_macrolocal_18_skip;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_20_skip: 	goto __m2c_macrolocal_20_skip;
        case m2c::k__m2c_macrolocal_21_skip: 	goto __m2c_macrolocal_21_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kdamadc: 	goto damadc;
        case m2c::kdamairbrakes: 	goto damairbrakes;
        case m2c::kdamecm: 	goto damecm;
        case m2c::kdamengine1: 	goto damengine1;
        case m2c::kdamengine2: 	goto damengine2;
        case m2c::kdamenginefire: 	goto damenginefire;
        case m2c::kdamflaps: 	goto damflaps;
        case m2c::kdamgear: 	goto damgear;
        case m2c::kdamhud: 	goto damhud;
        case m2c::kdamnavigmfd: 	goto damnavigmfd;
        case m2c::kdamoxygen: 	goto damoxygen;
        case m2c::kdampilotmfd: 	goto dampilotmfd;
        case m2c::kdamradar: 	goto damradar;
        case m2c::kdamrwr: 	goto damrwr;
        case m2c::kdamspils: 	goto damspils;
        case m2c::kdamtab1: 	goto damtab1;
        case m2c::kdamtab2: 	goto damtab2;
        case m2c::kdamthrustrvrs: 	goto damthrustrvrs;
        case m2c::kdamwheelbrakes: 	goto damwheelbrakes;
        case m2c::kdamwingsweep: 	goto damwingsweep;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kintodamage: 	goto intodamage;
        case m2c::kmaxdamage: 	goto maxdamage;
        case m2c::kmeddamage: 	goto meddamage;
        case m2c::kmindamage: 	goto mindamage;
        case m2c::krandomdamage: 	goto randomdamage;
        case m2c::kskipfire: 	goto skipfire;
        default: return __dispatch_call(__disp, _state);
    };
}


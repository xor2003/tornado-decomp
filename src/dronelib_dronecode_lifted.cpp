/* THIS IS GENERATED FILE */

        
#include "dronelib.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
getdronespeed:
	// 1803 
	// 0 ;--------------
	// 0 ;* sort Tornado
	// 0 ;--------------
edummylabel1:
	// 4369 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto dummylabel1;}
	/* mov	ax,Vtas */
	ax = vtas;
	/* jmp	ExitDroneSpeed */
	goto exitdronespeed;
	// 0 ;--------------------------
	// 0 ;* sort two player opponent
	// 0 ;--------------------------
dummylabel1:
	// 4371 
	/* @@:		cmp	si,OFFSET OPP_MOBILE */
	CMP(si, m2c::near_offset_external(opp_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(opp_mobile))) {goto dummylabel2;}
	/* mov	ax,OppVtas */
	ax = oppvtas;
	/* jmp	ExitDroneSpeed */
	goto exitdronespeed;
	// 0 ;------------------
	// 0 ;* fetch drone type
	// 0 ;------------------
dummylabel2:
	// 4373 
	/* @@:		mov	ax,_DRONE_TYPE[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)));
	// 0 ;---------------
	// 0 ;* sort aircraft
	// 0 ;---------------
	/* cmp	ax,DRONE_AIRCRAFT */
	CMP(ax, 2);
	/* jne	@F */
	if ((dw)(ax) != (dw)(2)) {goto dummylabel3;}
	/* mov	ax,_AC_VTAS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_vtas)));
	/* jmp	ExitDroneSpeed */
	goto exitdronespeed;
	// 0 ;-----------------
	// 0 ;* sort helicopter
	// 0 ;-----------------
dummylabel3:
	// 4375 
	/* @@:		cmp	ax,DRONE_HELICOPT */
	CMP(ax, 4);
	/* jne	@F */
	if ((dw)(ax) != (dw)(4)) {goto dummylabel4;}
	/* mov	ax,_HC_VTAS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_vtas)));
	/* jmp	ExitDroneSpeed */
	goto exitdronespeed;
	// 0 ;--------------
	// 0 ;* sort default
	// 0 ;--------------
dummylabel4:
	// 4377 
	/* @@:		xor	ax,ax */
	XOR(ax, ax);
exitdronespeed:
	// 4379 
	/* ExitDroneSpeed:	ret */
	RETF(0);
getdronechaff:
	// 1857 
	// 0 ;--------------
	// 0 ;* sort Tornado
	// 0 ;--------------
edummylabel2:
	// 4381 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto dummylabel5;}
	/* test	RelChaff,1 */
	TEST(relchaff, 1);
	/* jnz	SetDroneChaff */
	if ((relchaff & 1) != 0) {goto setdronechaff;}
	/* jmp	ClrDroneChaff */
	goto clrdronechaff;
	// 0 ;--------------------------
	// 0 ;* sort two player opponent
	// 0 ;--------------------------
dummylabel5:
	// 4383 
	/* @@:		cmp	si,OFFSET OPP_MOBILE */
	CMP(si, m2c::near_offset_external(opp_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(opp_mobile))) {goto dummylabel6;}
	/* test	OppFlags1,I_REL_CHAFF */
	TEST(oppflags1, 0x8);
	/* jnz	SetDroneChaff */
	if ((oppflags1 & 0x8) != 0) {goto setdronechaff;}
	/* jmp	ClrDroneChaff */
	goto clrdronechaff;
	// 0 ;------------------
	// 0 ;* fetch drone type
	// 0 ;------------------
dummylabel6:
	// 4385 
	/* @@:		mov	ax,_DRONE_TYPE[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)));
	// 0 ;---------------
	// 0 ;* sort aircraft
	// 0 ;---------------
	/* cmp	ax,DRONE_AIRCRAFT */
	CMP(ax, 2);
	/* jne	@F */
	if ((dw)(ax) != (dw)(2)) {goto dummylabel7;}
	/* test	_AC_FLAGS[si],AFLG_REL_CHAFF */
	TEST(*(dw*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x4);
	/* jnz	SetDroneChaff */
	if ((*(dw*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags & 0x4) != 0) {goto setdronechaff;}
	/* jmp	ClrDroneChaff */
	goto clrdronechaff;
	// 0 ;-----------------
	// 0 ;* sort helicopter
	// 0 ;-----------------
dummylabel7:
	// 4387 
	/* @@:		cmp	ax,DRONE_HELICOPT */
	CMP(ax, 4);
	/* jne	ClrDroneChaff */
	if ((dw)(ax) != (dw)(4)) {goto clrdronechaff;}
	/* test	_HC_FLAGS[si],HFLG_REL_CHAFF */
	TEST(*(dw*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x4);
	/* jnz	SetDroneChaff */
	if ((*(dw*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags & 0x4) != 0) {goto setdronechaff;}
clrdronechaff:
	// 4389 
	/* ClrDroneChaff:	clc			;cf = 0 (no chaff) */
	CLC;
	/* ret */
	RETF(0);
setdronechaff:
	// 4391 
	/* SetDroneChaff:	stc			;cf = 1 (chaff released) */
	STC;
	/* ret */
	RETF(0);
getdroneflare:
	// 1912 
	// 0 ;--------------
	// 0 ;* sort Tornado
	// 0 ;--------------
edummylabel3:
	// 4393 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto dummylabel8;}
	/* test	RelFlare,1 */
	TEST(relflare, 1);
	/* jnz	SetDroneFlare */
	if ((relflare & 1) != 0) {goto setdroneflare;}
	/* jmp	ClrDroneFlare */
	goto clrdroneflare;
	// 0 ;--------------------------
	// 0 ;* sort two player opponent
	// 0 ;--------------------------
dummylabel8:
	// 4395 
	/* @@:		cmp	si,OFFSET OPP_MOBILE */
	CMP(si, m2c::near_offset_external(opp_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(opp_mobile))) {goto dummylabel9;}
	/* test	OppFlags1,I_REL_FLARE */
	TEST(oppflags1, 0x10);
	/* jnz	SetDroneFlare */
	if ((oppflags1 & 0x10) != 0) {goto setdroneflare;}
	/* jmp	ClrDroneFlare */
	goto clrdroneflare;
	// 0 ;------------------
	// 0 ;* fetch drone type
	// 0 ;------------------
dummylabel9:
	// 4397 
	/* @@:		mov	ax,_DRONE_TYPE[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)));
	// 0 ;---------------
	// 0 ;* sort aircraft
	// 0 ;---------------
	/* cmp	ax,DRONE_AIRCRAFT */
	CMP(ax, 2);
	/* jne	@F */
	if ((dw)(ax) != (dw)(2)) {goto dummylabel10;}
	/* test	_AC_FLAGS[si],AFLG_REL_FLARE */
	TEST(*(dw*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x8);
	/* jnz	SetDroneFlare */
	if ((*(dw*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags & 0x8) != 0) {goto setdroneflare;}
	/* jmp	ClrDroneFlare */
	goto clrdroneflare;
	// 0 ;-----------------
	// 0 ;* sort helicopter
	// 0 ;-----------------
dummylabel10:
	// 4399 
	/* @@:		cmp	ax,DRONE_HELICOPT */
	CMP(ax, 4);
	/* jne	ClrDroneFlare */
	if ((dw)(ax) != (dw)(4)) {goto clrdroneflare;}
	/* test	_HC_FLAGS[si],HFLG_REL_FLARE */
	TEST(*(dw*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x8);
	/* jnz	SetDroneFlare */
	if ((*(dw*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags & 0x8) != 0) {goto setdroneflare;}
clrdroneflare:
	// 4401 
	/* ClrDroneFlare:	clc			;cf = 0 (no flare) */
	CLC;
	/* ret */
	RETF(0);
setdroneflare:
	// 4403 
	/* SetDroneFlare:	stc			;cf = 1 (flare released) */
	STC;
	/* ret */
	RETF(0);
getdronealive:
	// 1967 
	// 0 ;--------------
	// 0 ;* sort Tornado
	// 0 ;--------------
edummylabel4:
	// 4405 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto dummylabel11;}
	/* cmp	Destroyed,0 */
	CMP(destroyed, 0);
	/* je	SetDroneAlive */
	if ((dw)(destroyed) == (dw)(0)) {goto setdronealive;}
	/* jmp	ClrDroneAlive */
	goto clrdronealive;
	// 0 ;-----------------------------------------
	// 0 ;* sort all drones and two player opponent
	// 0 ;-----------------------------------------
dummylabel11:
	// 4407 
	/* @@:		cmp	_DRONE_SIDE[si],DEAD */
	CMP(((drone_data*)raddr(ds,(6+18)+si))->drone_side, 0);
	/* jne	SetDroneAlive */
	if ((db)(((drone_data*)raddr(ds,(6+18)+si))->drone_side) != (db)(0)) {goto setdronealive;}
clrdronealive:
	// 4409 
	/* ClrDroneAlive:	clc		;cf = 0 (not in play) */
	CLC;
	/* ret */
	RETF(0);
setdronealive:
	// 4411 
	/* SetDroneAlive:	stc		;cf = 1 (in play) */
	STC;
	/* ret */
	RETF(0);
wpnkilldrone:
	// 1997 
	// 0 ;--------------
	// 0 ;* sort Tornado
	// 0 ;--------------
edummylabel5:
	// 4413 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	SkipPlayerKill */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto skipplayerkill;}
	/* cmp	ShakePriority,SHAKE_DAMAGE	;;higher SHAKE_DAMAGE shake in progress? */
	CMP(shakepriority, 75);
	/* ja	__m2c_macrolocal_1_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(75)) {goto __m2c_macrolocal_1_skip;}
/* m2c-phantom removed: 	R(shakepriority = 75;);	// 2007 												mov	ShakePriority,SHAKE_DAMAGE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 2008 						mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 2009 						mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 2010 						mov	ShakeTimer,50 */
__m2c_macrolocal_1_skip:
	// 4415 
	// 0 ;ori
/* m2c-phantom removed: 	R(CMP(shakepriority, 75));	// 2013 cmp	ShakePriority,SHAKE_DAMAGE	 */
	/* mov	ShakePriority,SHAKE_DAMAGE */
	shakepriority = 75;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
	// 0 ;* check no collisions enabled
	/* test	NoCollisions,1 */
	TEST(nocollisions, 1);
	/* jz	__m2c_macrolocal_2_skip */
	if (!(nocollisions & 1)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	ExitKill */
	goto exitkill;
__m2c_macrolocal_2_skip:
	// 4417 
	// 0 ;* if cannon shell then random chance of kill else sustain damage
	/* cmp	WPN_Weapon.WPN_TYPE,CANNON */
	CMP(wpn_weapon.wpn_type, 12);
	/* jne	ContPlayerKill */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(12)) {goto contplayerkill;}
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel12;}
	// 0 ;* single player
	/* call	RandX */
	CALLF(randx, 0);
	/* cmp	al,(2*256)/100 */
	CMP(al, (2*256)/100);
	/* jbe	ContPlayerKill */
	if ((db)(al) <= (db)((2*256)/100)) {goto contplayerkill;}
	/* call	MedDamage */
	CALLF(meddamage, 0);
	/* jmp	ExitKill */
	goto exitkill;
	// 0 ;* two player
dummylabel12:
	// 4419 
	/* @@:		call	RandX */
	CALLF(randx, 0);
	/* cmp	al,(10*256)/100 */
	CMP(al, (10*256)/100);
	/* jbe	ContPlayerKill */
	if ((db)(al) <= (db)((10*256)/100)) {goto contplayerkill;}
	/* call	MaxDamage */
	CALLF(maxdamage, 0);
	/* jmp	ExitKill */
	goto exitkill;
	// 0 ;* look up die flag wrt weapon type
contplayerkill:
	// 4421 
	// 0 ;mov	bx,WPN_Weapon.WPN_TYPE
	// 0 ;shr	bx,1
	// 0 ;mov	al,TornadoWpnDie[bx]
	// 0 ;DESTROY	al,TOTAL_DAMAGE
	/* mov cx,28 */
	cx = 28;
loopstart:
	// 4423 
	/* call	MaxDamage */
	CALLF(maxdamage, 0);
	/* dec cx          ;Note:  decrementing cx and jumping on result is */
	DEC(cx);
	/* jnz loopstart */
	if (cx != 0) {goto loopstart;}
	/* jmp	ExitKill */
	goto exitkill;
	// 0 ;--------------------------
	// 0 ;* sort two player opponent
	// 0 ;--------------------------
skipplayerkill:
	// 4425 
	/* SkipPlayerKill:	cmp	si,OFFSET OPP_MOBILE */
	CMP(si, m2c::near_offset_external(opp_mobile));
	/* jne	ContDroneKill */
	if ((dw)(si) != (dw)(m2c::near_offset_external(opp_mobile))) {goto contdronekill;}
	// 0 ;* cannon shells do not kill opponent
	/* cmp	WPN_Weapon.WPN_TYPE,CANNON */
	CMP(wpn_weapon.wpn_type, 12);
	/* jne	__m2c_macrolocal_3_skip */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(12)) {goto __m2c_macrolocal_3_skip;}
	/* jmp	ExitKill */
	goto exitkill;
__m2c_macrolocal_3_skip:
	// 4427 
	// 0 ;-----------------
	// 0 ;* sort all drones
	// 0 ;-----------------
	// 0 ;* if cannon shell then random chance of kill
contdronekill:
	// 4429 
	/* ContDroneKill: 	cmp	WPN_Weapon.WPN_TYPE,CANNON */
	CMP(wpn_weapon.wpn_type, 12);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(12)) {goto dummylabel13;}
	/* call	RandX */
	CALLF(randx, 0);
	/* cmp	al,(75*256)/100 */
	CMP(al, (75*256)/100);
	/* ja	__m2c_macrolocal_4_skip */
	if ((db)(al) > (db)((75*256)/100)) {goto __m2c_macrolocal_4_skip;}
	/* jmp	ExitKill */
	goto exitkill;
__m2c_macrolocal_4_skip:
	// 4431 
	// 0 ;* inc kills if Tornado weapon and enemy target
dummylabel13:
	// 4433 
	/* @@:		test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	SkipKillMob */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto skipkillmob;}
	/* mov	bl,[si].MOB_NUM */
	bl = m2c::getdata(*((db*)((db*)&((mobile*)raddr(ds,si))->mob_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* cmp	_DRONE_SIDE[si],ENEMY */
	CMP(((drone_data*)raddr(ds,(6+18)+si))->drone_side, 2);
	/* jne	@F */
	if ((db)(((drone_data*)raddr(ds,(6+18)+si))->drone_side) != (db)(2)) {goto dummylabel14;}
	/* inc	EMobKills[bx] */
	INC(*((&emobkills)+bx));
	/* jmp	SkipKillMob */
	goto skipkillmob;
dummylabel14:
	// 4435 
	/* @@:		inc	AMobKills[bx] */
	INC(*((&amobkills)+bx));
skipkillmob:
	// 4437 
	// 0 ;-------------------------------
	// 0 ;* stop truck convoys and trains
	// 0 ;-------------------------------
	/* cmp	WORD PTR _DRONE_TYPE[si],DRONE_TRUCK */
	CMP(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)), 6);
	/* jne	SkipKillTruck */
	if ((dw)(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type))) != (dw)(6)) {goto skipkilltruck;}
	/* mov	di,OFFSET ATruckConvoy1 */
	di = m2c::near_offset_external(atruckconvoy1);
	/* cmp	si,OFFSET ATruck1_1 */
	CMP(si, m2c::near_offset_external(atruck1_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(atruck1_1))) {goto dummylabel15;}
	/* cmp	si,OFFSET ATruck1_4 */
	CMP(si, m2c::near_offset_external(atruck1_4));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(atruck1_4))) {goto stopconvoy;}
dummylabel15:
	// 4439 
	/* @@:		mov	di,OFFSET ATruckConvoy2 */
	di = m2c::near_offset_external(atruckconvoy2);
	/* cmp	si,OFFSET ATruck2_1 */
	CMP(si, m2c::near_offset_external(atruck2_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(atruck2_1))) {goto dummylabel16;}
	/* cmp	si,OFFSET ATruck2_4 */
	CMP(si, m2c::near_offset_external(atruck2_4));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(atruck2_4))) {goto stopconvoy;}
dummylabel16:
	// 4441 
	/* @@:		mov	di,OFFSET ETruckConvoy1 */
	di = m2c::near_offset_external(etruckconvoy1);
	/* cmp	si,OFFSET ETruck1_1 */
	CMP(si, m2c::near_offset_external(etruck1_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(etruck1_1))) {goto dummylabel17;}
	/* cmp	si,OFFSET ETruck1_4 */
	CMP(si, m2c::near_offset_external(etruck1_4));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(etruck1_4))) {goto stopconvoy;}
dummylabel17:
	// 4443 
	/* @@:		mov	di,OFFSET ETruckConvoy2 */
	di = m2c::near_offset_external(etruckconvoy2);
	/* cmp	si,OFFSET ETruck2_1 */
	CMP(si, m2c::near_offset_external(etruck2_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(etruck2_1))) {goto dummylabel18;}
	/* cmp	si,OFFSET ETruck2_4 */
	CMP(si, m2c::near_offset_external(etruck2_4));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(etruck2_4))) {goto stopconvoy;}
dummylabel18:
	// 4445 
	/* @@:		jmp	SkipKillTrain */
	goto skipkilltrain;
skipkilltruck:
	// 4447 
	/* cmp	WORD PTR _DRONE_TYPE[si],DRONE_TRAIN */
	CMP(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)), 8);
	/* jne	SkipKillTrain */
	if ((dw)(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type))) != (dw)(8)) {goto skipkilltrain;}
	/* mov	di,OFFSET ATrain1 */
	di = m2c::near_offset_external(atrain1);
	/* cmp	si,OFFSET ATrain1_1 */
	CMP(si, m2c::near_offset_external(atrain1_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(atrain1_1))) {goto dummylabel19;}
	/* cmp	si,OFFSET ATrain1_8 */
	CMP(si, m2c::near_offset_external(atrain1_8));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(atrain1_8))) {goto stopconvoy;}
dummylabel19:
	// 4449 
	/* @@:		mov	di,OFFSET ATrain2 */
	di = m2c::near_offset_external(atrain2);
	/* cmp	si,OFFSET ATrain2_1 */
	CMP(si, m2c::near_offset_external(atrain2_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(atrain2_1))) {goto dummylabel20;}
	/* cmp	si,OFFSET ATrain2_8 */
	CMP(si, m2c::near_offset_external(atrain2_8));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(atrain2_8))) {goto stopconvoy;}
dummylabel20:
	// 4451 
	/* @@:		mov	di,OFFSET ETrain1 */
	di = m2c::near_offset_external(etrain1);
	/* cmp	si,OFFSET ETrain1_1 */
	CMP(si, m2c::near_offset_external(etrain1_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(etrain1_1))) {goto dummylabel21;}
	/* cmp	si,OFFSET ETrain1_8 */
	CMP(si, m2c::near_offset_external(etrain1_8));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(etrain1_8))) {goto stopconvoy;}
dummylabel21:
	// 4453 
	/* @@:		mov	di,OFFSET ETrain2 */
	di = m2c::near_offset_external(etrain2);
	/* cmp	si,OFFSET ETrain2_1 */
	CMP(si, m2c::near_offset_external(etrain2_1));
	/* jb	@F */
	if ((dw)(si) < (dw)(m2c::near_offset_external(etrain2_1))) {goto dummylabel22;}
	/* cmp	si,OFFSET ETrain2_8 */
	CMP(si, m2c::near_offset_external(etrain2_8));
	/* jbe	StopConvoy */
	if ((dw)(si) <= (dw)(m2c::near_offset_external(etrain2_8))) {goto stopconvoy;}
dummylabel22:
	// 4455 
	/* @@:		jmp	SkipKillTrain */
	goto skipkilltrain;
stopconvoy:
	// 4457 
	/* StopConvoy:    	mov	[di].CNVY_ACTIVE,0 */
	m2c::setdata(&(*((db*)((db*)&((convoy*)raddr(ds,di))->cnvy_active))), m2c::getdata(0));
	/* mov	[di].CNVY_SPEED,0 */
	m2c::setdata(&(*((dw*)((db*)&((convoy*)raddr(ds,di))->cnvy_speed))), m2c::getdata(0));
	/* mov	[di].CNVY_AIM_SPEED,0 */
	m2c::setdata(&(*((dw*)((db*)&((convoy*)raddr(ds,di))->cnvy_aim_speed))), m2c::getdata(0));
skipkilltrain:
	// 4459 
	// 0 ;------------
	// 0 ;* kill drone
	// 0 ;------------
	/* mov	_DRONE_SIDE[si],DEAD */
	m2c::setdata(&(((drone_data*)raddr(ds,(6+18)+si))->drone_side), m2c::getdata(0));
	/* call	DeleteMobile */
	CALLF(deletemobile, 0);
exitkill:
	// 4461 
	/* ExitKill:	ret */
	RETF(0);
setdronewpnlock:
	// 2166 
	/* mov	si,WPN_Weapon.WPN_MISS_TGT ;* kill: assume all */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	// 0 ;--------------
	// 0 ;* sort Tornado (not applicable)
	// 0 ;--------------
edummylabel6:
	// 4463 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* je	ExitWpnLock */
	if ((dw)(si) == (dw)(m2c::near_offset_external(m_mobile))) {goto exitwpnlock;}
	// 0 ;--------------------------
	// 0 ;* sort two player opponent (not applicable)
	// 0 ;--------------------------
	/* cmp	si,OFFSET OPP_MOBILE */
	CMP(si, m2c::near_offset_external(opp_mobile));
	/* je	ExitWpnLock */
	if ((dw)(si) == (dw)(m2c::near_offset_external(opp_mobile))) {goto exitwpnlock;}
	// 0 ;------------------
	// 0 ;* fetch drone type
	// 0 ;------------------
	/* mov	ax,_DRONE_TYPE[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)));
	// 0 ;---------------
	// 0 ;* sort aircraft
	// 0 ;---------------
	/* cmp	ax,DRONE_AIRCRAFT */
	CMP(ax, 2);
	/* jne	SkipACLock */
	if ((dw)(ax) != (dw)(2)) {goto skipaclock;}
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_IR_SEEK */
	TEST(wpn_weapon.wpn_flags, 0x100);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x100)) {goto dummylabel23;}
	/* or	_AC_FLAGS[si],AFLG_IR_LOCK */
	OR(*(dw*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x1);
	/* jmp	ExitWpnLock */
	goto exitwpnlock;
dummylabel23:
	// 4465 
	/* @@:		or	_AC_FLAGS[si],AFLG_RAD_LOCK */
	OR(*(dw*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x2);
	/* jmp	ExitWpnLock */
	goto exitwpnlock;
	// 0 ;-----------------
	// 0 ;* sort helicopter
	// 0 ;-----------------
skipaclock:
	// 4467 
	/* SkipACLock: 	cmp	ax,DRONE_HELICOPT */
	CMP(ax, 4);
	/* jne	ExitWpnLock */
	if ((dw)(ax) != (dw)(4)) {goto exitwpnlock;}
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_IR_SEEK */
	TEST(wpn_weapon.wpn_flags, 0x100);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x100)) {goto dummylabel24;}
	/* or	_HC_FLAGS[si],HFLG_IR_LOCK */
	OR(*(dw*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x1);
	/* jmp	ExitWpnLock */
	goto exitwpnlock;
dummylabel24:
	// 4469 
	/* @@:		or	_HC_FLAGS[si],HFLG_RAD_LOCK */
	OR(*(dw*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x2);
exitwpnlock:
	// 4471 
	/* ExitWpnLock:	ret */
	RETF(0);
getdroneillum:
	// 2219 
	// 0 ;--------------
	// 0 ;* sort Tornado
	// 0 ;--------------
edummylabel7:
	// 4473 
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* je	ClrDroneIllum */
	if ((dw)(si) == (dw)(m2c::near_offset_external(m_mobile))) {goto clrdroneillum;}
	// 0 ;--------------------------
	// 0 ;* sort two player opponent
	// 0 ;--------------------------
	/* cmp	si,OFFSET OPP_MOBILE */
	CMP(si, m2c::near_offset_external(opp_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(opp_mobile))) {goto dummylabel25;}
	/* test	OppFlags1,I_ILLUM_YOU */
	TEST(oppflags1, 0x80);
	/* jnz	SetDroneIllum */
	if ((oppflags1 & 0x80) != 0) {goto setdroneillum;}
	/* jmp	ClrDroneIllum */
	goto clrdroneillum;
	// 0 ;------------------
	// 0 ;* fetch drone type
	// 0 ;------------------
dummylabel25:
	// 4475 
	/* @@:		mov	ax,_DRONE_TYPE[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((drone_data*)raddr(ds,(6+18)+si))->drone_type)));
	// 0 ;---------------
	// 0 ;* sort aircraft
	// 0 ;---------------
	/* cmp	ax,DRONE_AIRCRAFT */
	CMP(ax, 2);
	/* jne	ClrDroneIllum */
	if ((dw)(ax) != (dw)(2)) {goto clrdroneillum;}
	// 0 ;* check Tornado is opponent
	/* cmp	_AC_OPP_PTR[si],OFFSET M_MOBILE */
	CMP(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_opp_ptr)), m2c::near_offset_external(m_mobile));
	/* jne	ClrDroneIllum */
	if ((dw)(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_opp_ptr))) != (dw)(m2c::near_offset_external(m_mobile))) {goto clrdroneillum;}
	// 0 ;* calc range and brg of Tornado from drone aircraft
	/* push	si */
	PUSH(si);
	/* add	si,MOB_REC_SIZE */
	ADD(si, 6);
	/* mov	di,OFFSET M_VIEW */
	di = m2c::near_offset_external(m_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* pop	si */
	POP(si);
	// 0 ;* check range < 30 miles (ensure radar illum before firing Sky Flash)
	/* cmp	dx,2 */
	CMP(dx, 2);
	/* ja	ClrDroneIllum */
	if ((dw)(dx) > (dw)(2)) {goto clrdroneillum;}
	/* jb	@F */
	if ((dw)(dx) < (dw)(2)) {goto dummylabel26;}
	/* cmp	ax,06ac0h */
	CMP(ax, 0x06ac0);
	/* ja	ClrDroneIllum */
	if ((dw)(ax) > (dw)(0x06ac0)) {goto clrdroneillum;}
	// 0 ;* check abs(ang diff) <= 45 degs
dummylabel26:
	// 4477 
	/* @@:		mov	ax,_VP_HDG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_hdg)));
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64 */
	CMP(ax, 64);
	/* jbe	SetDroneIllum */
	if ((dw)(ax) <= (dw)(64)) {goto setdroneillum;}
clrdroneillum:
	// 4479 
	/* ClrDroneIllum:	clc		;cf = 0 (not illuminated) */
	CLC;
	/* ret */
	RETF(0);
setdroneillum:
	// 4481 
	/* SetDroneIllum:	stc		;cf = 1 (illuminated) */
	STC;
	/* ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::kclrdronealive: 	goto clrdronealive;
        case m2c::kclrdronechaff: 	goto clrdronechaff;
        case m2c::kclrdroneflare: 	goto clrdroneflare;
        case m2c::kclrdroneillum: 	goto clrdroneillum;
        case m2c::kcontdronekill: 	goto contdronekill;
        case m2c::kcontplayerkill: 	goto contplayerkill;
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
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kexitdronespeed: 	goto exitdronespeed;
        case m2c::kexitkill: 	goto exitkill;
        case m2c::kexitwpnlock: 	goto exitwpnlock;
        case m2c::kgetdronealive: 	goto getdronealive;
        case m2c::kgetdronechaff: 	goto getdronechaff;
        case m2c::kgetdroneflare: 	goto getdroneflare;
        case m2c::kgetdroneillum: 	goto getdroneillum;
        case m2c::kgetdronespeed: 	goto getdronespeed;
        case m2c::kloopstart: 	goto loopstart;
        case m2c::ksetdronealive: 	goto setdronealive;
        case m2c::ksetdronechaff: 	goto setdronechaff;
        case m2c::ksetdroneflare: 	goto setdroneflare;
        case m2c::ksetdroneillum: 	goto setdroneillum;
        case m2c::ksetdronewpnlock: 	goto setdronewpnlock;
        case m2c::kskipaclock: 	goto skipaclock;
        case m2c::kskipkillmob: 	goto skipkillmob;
        case m2c::kskipkilltrain: 	goto skipkilltrain;
        case m2c::kskipkilltruck: 	goto skipkilltruck;
        case m2c::kskipplayerkill: 	goto skipplayerkill;
        case m2c::kstopconvoy: 	goto stopconvoy;
        case m2c::kwpnkilldrone: 	goto wpnkilldrone;
        default: return __dispatch_call(__disp, _state);
    };
}


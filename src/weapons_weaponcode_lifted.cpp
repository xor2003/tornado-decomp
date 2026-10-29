/* THIS IS GENERATED FILE */

        
#include "weapons.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initweapons:
	// 3627 
	// 0 ;---------------------
	// 0 ;* init chaff / flares (wrt variant)
	// 0 ;---------------------
edummylabel1:
	// 4369 
	/* cmp	TornadoType,ADV_TORNADO	;ADV? */
	CMP(tornadotype, 2);
	/* je	@F			;yes (internal) -> */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel1;}
	/* cmp	ExtStores[EXT_BOZ100],0	;chaff / flare dispenser fitted? */
	CMP(*(dw*)(((db*)&extstores)+16), 0);
	/* je	SkipBOZ			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+16)) == (dw)(0)) {goto skipboz;}
dummylabel1:
	// 4371 
	/* @@:		mov	ChaffCntr,MAX_CHAFF */
	chaffcntr = 120;
	/* mov	FlareCntr,MAX_FLARES */
	flarecntr = 28;
	// 0 ;----------
	// 0 ;* init ECM (wrt variant)
	// 0 ;----------
skipboz:
	// 4373 
	/* SkipBOZ:	cmp	TornadoType,ADV_TORNADO	;ADV? */
	CMP(tornadotype, 2);
	/* je	@F			;yes (internal) -> */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel2;}
	/* cmp	ExtStores[EXT_SKYSHADOW],0	;ECM fitted? */
	CMP(*(dw*)(((db*)&extstores)+18), 0);
	/* je	SkipSkyShadow			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+18)) == (dw)(0)) {goto skipskyshadow;}
dummylabel2:
	// 4375 
	/* @@:		mov	ECMFitted,1 */
	ecmfitted = 1;
	// 0 ;------------------
	// 0 ;* init package ptr
	// 0 ;------------------
skipskyshadow:
	// 4377 
	/* SkipSkyShadow:	mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
	/* mov	cx,NUM_PACKAGES */
	cx = 3;
dummylabel3:
	// 4379 
	/* @@:		cmp	[si].PACK_WEAP_TYPE,NULL_WEAPON	;null package? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), -1);
	/* jne	PackageOk */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(-1)) {goto packageok;}
	/* add	si,PACK_REC_SIZE */
	ADD(si, 8);
	/* loop	@B */
	LOOP(dummylabel3);
	/* mov	si,-1		;no packages */
	si = -1;
packageok:
	// 4381 
	/* PackageOk:	mov	PackagePtr,si */
	packageptr = si;
	/* ret */
	RETF(0);
calcstoreswt:
	// 3669 
	/* mov	StoresWt,0 ;* kill: assume all */
	storeswt = 0;
edummylabel2:
	// 4383 
	/* mov	ax,ExtStores[EXT_GPB1000] */
	ax = *(dw*)(((db*)&extstores)+0);
	/* mov	dx,ExtWeights[EXT_GPB1000] */
	dx = *(dw*)(((db*)&extweights)+0);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_RET1000] */
	ax = *(dw*)(((db*)&extstores)+2);
	/* mov	dx,ExtWeights[EXT_RET1000] */
	dx = *(dw*)(((db*)&extweights)+2);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_LGB1000] */
	ax = *(dw*)(((db*)&extstores)+4);
	/* mov	dx,ExtWeights[EXT_LGB1000] */
	dx = *(dw*)(((db*)&extweights)+4);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_BL755] */
	ax = *(dw*)(((db*)&extstores)+6);
	/* mov	dx,ExtWeights[EXT_BL755] */
	dx = *(dw*)(((db*)&extweights)+6);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_JP233] */
	ax = *(dw*)(((db*)&extstores)+8);
	/* mov	dx,ExtWeights[EXT_JP233] */
	dx = *(dw*)(((db*)&extweights)+8);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_ALARM] */
	ax = *(dw*)(((db*)&extstores)+10);
	/* mov	dx,ExtWeights[EXT_ALARM] */
	dx = *(dw*)(((db*)&extweights)+10);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_SIDEWINDER] */
	ax = *(dw*)(((db*)&extstores)+12);
	/* mov	dx,ExtWeights[EXT_SIDEWINDER] */
	dx = *(dw*)(((db*)&extweights)+12);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_SKYFLASH] */
	ax = *(dw*)(((db*)&extstores)+14);
	/* mov	dx,ExtWeights[EXT_SKYFLASH] */
	dx = *(dw*)(((db*)&extweights)+14);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_BOZ100] */
	ax = *(dw*)(((db*)&extstores)+16);
	/* mov	dx,ExtWeights[EXT_BOZ100] */
	dx = *(dw*)(((db*)&extweights)+16);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	/* mov	ax,ExtStores[EXT_SKYSHADOW] */
	ax = *(dw*)(((db*)&extstores)+18);
	/* mov	dx,ExtWeights[EXT_SKYSHADOW] */
	dx = *(dw*)(((db*)&extweights)+18);
	/* mul	dx */
	MUL1_2(dx);
	/* add	StoresWt,ax */
	ADD(storeswt, ax);
	// 0 ;* cannons weigh 1/2 pound each (9.17oz)
	/* mov	ax,Cannons */
	ax = cannons;
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne	@F */
	if ((dw)(tornadotype) != (dw)(2)) {goto dummylabel4;}
	/* shr	ax,1		;ADV has single gun */
	SHR(ax, 1);
dummylabel4:
	// 4385 
	/* @@:		add	StoresWt,ax */
	ADD(storeswt, ax);
	/* ret */
	RETF(0);
updateweapons:
	// 3728 
	// 0 ;---------------------------
	// 0 ;* calc shell lethality zone (wrt frame rate)
	// 0 ;---------------------------
	// 0 ;* At 16 frames/sec, a shell kill zone of 32ft seems ok.
	// 0 ;*
	// 0 ;* Increase kill zone wrt frame rate to make the target easier to hit.
	// 0 ;*
	// 0 ;* @ 16 frames/sec DeltaTime = 32768 / 16 = 2048
	// 0 ;*
	// 0 ;* shell kill zone = 32 + max(DeltaTime - 2048, 0) / 128
edummylabel3:
	// 4387 
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* sub	ax,2048 */
	SUB(ax, 2048);
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
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,32 */
	ADC(ax, 32);
	/* mov	ShellKillZone,ax */
	shellkillzone = ax;
	// 0 ;-------------------------
	// 0 ;* init weapon update loop
	// 0 ;-------------------------
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,NUM_WEAPONS */
	cx = 128;
	/* mov	si,OFFSET WeaponList */
	si = m2c::near_offset_external(weaponlist);
	// 0 ;--------------------
	// 0 ;* update weapon loop
	// 0 ;--------------------
updateloop:
	// 4389 
	/* UpdateLoop:	cmp	_WPN_TYPE[si],NULL_WEAPON	;in use? */
	CMP(*(dw*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type, -1);
	/* je	UpdateNext     			;no -> */
	if ((dw)(*(dw*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type) == (dw)(-1)) {goto updatenext;}
	/* mov	ES:WeaponPtr,si */
	weaponptr = si;
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	// 0 ;---------------------------------
	// 0 ;* copy weapon data into workspace
	// 0 ;---------------------------------
	/* mov	di,OFFSET WPN_Workspace */
	di = m2c::near_offset_external(wpn_workspace);
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 3776 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 3778 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 3779 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3780 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* intercept splash / airburst effects
	/* mov	ax,WPN_Weapon.WPN_FLAGS */
	ax = wpn_weapon.wpn_flags;
	/* test	ax,WFLG_SPLASH		;splash? */
	TEST(ax, 0x10);
	/* jnz	ContSplash		;yes -> */
	if ((ax & 0x10) != 0) {goto contsplash;}
	/* test	ax,WFLG_AIRBURST	;airburst? */
	TEST(ax, 0x200);
	/* jnz	ContAirburst		;yes -> */
	if ((ax & 0x200) != 0) {goto contairburst;}
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* call	UpdateOneWeapon[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&updateoneweapon)+bx));
	/* jmp	ContUpdate */
	goto contupdate;
contsplash:
	// 4391 
	/* ContSplash:	call	UpdateSplash */
	CALL(updatesplash, 0);
	/* jmp	ContUpdate */
	goto contupdate;
contairburst:
	// 4393 
	/* ContAirburst:	call	UpdateAirburst */
	CALL(updateairburst, 0);
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
contupdate:
	// 4395 
	/* ContUpdate:	mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 3806 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 3808 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 3809 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3810 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
updatenext:
	// 4397 
	/* UpdateNext:	add	si,WPN_DATA_SIZE */
	ADD(si, 6+18+28);
	/* loop	UpdateLoop */
	LOOP(updateloop);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* ret */
	RETF(0);
updategpb:
	// 3831 
	/* call	BombBallistics ;* kill: assume all */
	CALL(bombballistics, 0);
edummylabel4:
	// 4399 
	/* jnc	ExitGPB		;still falling -> */
	if (!CF) {goto exitgpb;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitgpb:
	// 4401 
	/* ExitGPB:	ret */
	RETN(0);
updateret:
	// 3845 
	/* call	BombBallistics ;* kill: assume all */
	CALL(bombballistics, 0);
edummylabel5:
	// 4403 
	/* jnc	ExitRET		;still falling -> */
	if (!CF) {goto exitret;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitret:
	// 4405 
	/* ExitRET:	ret */
	RETN(0);
updatelgb:
	// 3859 
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_UNGUIDED	;guided? */
	TEST(wpn_weapon.wpn_flags, 0x20);
edummylabel6:
	// 4407 
	/* jnz	UnguidedLGB				;no -> */
	if (!ZF) {goto unguidedlgb;}
	/* call	LGBGuidance */
	CALL(lgbguidance, 0);
	/* jnc	ExitLGB		;still guiding -> */
	if (!CF) {goto exitlgb;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
	/* jmp	ExitLGB */
	goto exitlgb;
	// 0 ;----------------------------
	// 0 ;* LGB used as GPB (unguided)
	// 0 ;----------------------------
unguidedlgb:
	// 4409 
	/* UnguidedLGB:	call	BombBallistics */
	CALL(bombballistics, 0);
	/* jnc	ExitLGB		;still falling -> */
	if (!CF) {goto exitlgb;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitlgb:
	// 4411 
	/* ExitLGB:	ret */
	RETN(0);
updatebl755:
	// 3883 
	// 0 ;* sort BL755 or bomblet
edummylabel7:
	// 4413 
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_BOMBLET	;already bomblet? */
	TEST(wpn_weapon.wpn_flags, 0x40);
	/* jnz	SkipFragment				;yes -> */
	if ((wpn_weapon.wpn_flags & 0x40) != 0) {goto skipfragment;}
	// 0 ;* if just blown off casing then fragment
	/* test	WPN_Mobile.MOB_ANIM,CASING_OFF 	;casing off? */
	TEST(wpn_mobile.mob_anim, 0x2);
	/* jnz	ContFragment		       	;yes -> */
	if ((wpn_mobile.mob_anim & 0x2) != 0) {goto contfragment;}
	// 0 ;* if alt < threshold then start fragmention
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0  	;alt > 65535? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	SkipFragment		       	;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto skipfragment;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,150	;alt > 150? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 150);
	/* ja	SkipFragment		       	;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(150)) {goto skipfragment;}
	// 0 ;* one frame of casing off animation before fragmenting
	/* or	WPN_Mobile.MOB_ANIM,CASING_OFF */
	OR(wpn_mobile.mob_anim, 0x2);
	/* jmp	SkipFragment */
	goto skipfragment;
	// 0 ;* fragment BL755 into bomblets
contfragment:
	// 4415 
	/* ContFragment:	mov	cx,BL755_BOMBLETS-1 */
	cx = 6-1;
dummylabel5:
	// 4417 
	/* @@:		push	cx */
	PUSH(cx);
	/* call	CreateBomblet */
	CALL(createbomblet, 0);
	/* pop	cx */
	POP(cx);
	/* loop	@B */
	LOOP(dummylabel5);
	// 0 ;* convert BL755 into bomblet
	/* mov	WPN_Mobile.MOB_NUM,MOB_BOMBLET */
	wpn_mobile.mob_num = 40;
	/* mov	WPN_Mobile.MOB_ANIM,0 */
	wpn_mobile.mob_anim = 0;
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_BOMBLET */
	OR(wpn_weapon.wpn_flags, 0x40);
skipfragment:
	// 4419 
	/* SkipFragment:	call	BombBallistics */
	CALL(bombballistics, 0);
	/* jnc	ExitBL755	;still falling -> */
	if (!CF) {goto exitbl755;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitbl755:
	// 4421 
	/* ExitBL755:	ret */
	RETN(0);
updatejp233:
	// 3927 
	/* call	BombBallistics ;* kill: assume all */
	CALL(bombballistics, 0);
edummylabel8:
	// 4423 
	/* jnc	ExitJP233	;still falling -> */
	if (!CF) {goto exitjp233;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitjp233:
	// 4425 
	/* ExitJP233:	ret */
	RETN(0);
updatealarm:
	// 3941 
	/* mov	bx,WPN_Weapon.WPN_FLAGS ;* kill: assume all */
	bx = wpn_weapon.wpn_flags;
edummylabel9:
	// 4427 
	/* and	bx,WFLG_ALARM_MODE */
	AND(bx, 0x7);
	/* shl	bx,1 */
	SHL(bx, 1);
__disp=*(dw*)(((db*)&alarmmode)+bx);
	/* jmp	AlarmMode[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
alarmdirect:
	// 4429 
	// 0 ;---------------------------
	// 0 ;* if end of lifetime then switch to zoom
	/* call	CheckAlarmTimer */
	CALL(checkalarmtimer, 0);
	/* jnc	__m2c_macrolocal_4_skip */
	if (!CF) {goto __m2c_macrolocal_4_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_4_skip:
	// 4431 
	// 0 ;* if overshoot target then switch to zoom
	/* mov	ax,CLEARANCE_ALT */
	ax = 200;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* call	AlarmGuidance */
	CALL(alarmguidance, 0);
	/* jnc	__m2c_macrolocal_5_skip */
	if (!CF) {goto __m2c_macrolocal_5_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_5_skip:
	// 4433 
	// 0 ;* if within kill range then switch to kill
	/* cmp	WORD PTR TmpRange+2,0 */
	CMP(*(dw*)(((db*)&tmprange)+2), 0);
	/* ja	@F */
	if ((dw)(*(dw*)(((db*)&tmprange)+2)) > (dw)(0)) {goto dummylabel6;}
	/* cmp	WORD PTR TmpRange,KILL_RANGE */
	CMP(*(dw*)(&tmprange), 4000);
	/* jae	__m2c_macrolocal_6_skip */
	if ((dw)(*(dw*)(&tmprange)) >= (dw)(4000)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	SwitchToKill */
	goto switchtokill;
__m2c_macrolocal_6_skip:
	// 4435 
	// 0 ;* if hit ground then explode
dummylabel6:
	// 4437 
	/* @@:		call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jnc	__m2c_macrolocal_7_skip */
	if (!CF) {goto __m2c_macrolocal_7_skip;}
	/* jmp	AlarmDamage */
	goto alarmdamage;
__m2c_macrolocal_7_skip:
	// 4439 
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmkill:
	// 4441 
	// 0 ;---------------------------
	// 0 ;* if end of lifetime then switch to zoom
	/* call	CheckAlarmTimer */
	CALL(checkalarmtimer, 0);
	/* jnc	__m2c_macrolocal_8_skip */
	if (!CF) {goto __m2c_macrolocal_8_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_8_skip:
	// 4443 
	// 0 ;* if overshoot target then switch to zoom
	/* mov	ax,TARGET_ALT */
	ax = 0;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* call	AlarmGuidance */
	CALL(alarmguidance, 0);
	/* jnc	__m2c_macrolocal_9_skip */
	if (!CF) {goto __m2c_macrolocal_9_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_9_skip:
	// 4445 
	// 0 ;* if hit ground then explode
intokill:
	// 4447 
	/* IntoKill:	call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jnc	__m2c_macrolocal_10_skip */
	if (!CF) {goto __m2c_macrolocal_10_skip;}
	/* jmp	AlarmDamage */
	goto alarmdamage;
__m2c_macrolocal_10_skip:
	// 4449 
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmguide:
	// 4451 
	// 0 ;---------------------------
	// 0 ;* if end of lifetime then switch to zoom
	/* call	CheckAlarmTimer */
	CALL(checkalarmtimer, 0);
	/* jnc	__m2c_macrolocal_11_skip */
	if (!CF) {goto __m2c_macrolocal_11_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_11_skip:
	// 4453 
	// 0 ;* if overshoot target then switch to zoom
	/* mov	ax,CRUISE_ALT */
	ax = 5000;
	/* xor	dx,dx */
	XOR(dx, dx);
	// 0 ;* force missile to reach cruise altitude more quickly (avoid hills)
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel7;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,CRUISE_ALT-1000 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 5000-1000);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(5000-1000)) {goto dummylabel7;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel7:
	// 4455 
	/* @@:		call	AlarmGuidance */
	CALL(alarmguidance, 0);
	/* jnc	__m2c_macrolocal_12_skip */
	if (!CF) {goto __m2c_macrolocal_12_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_12_skip:
	// 4457 
	// 0 ;* if within zoom range then switch to zoom
	/* cmp	WORD PTR TmpRange+2,0 */
	CMP(*(dw*)(((db*)&tmprange)+2), 0);
	/* ja	@F */
	if ((dw)(*(dw*)(((db*)&tmprange)+2)) > (dw)(0)) {goto dummylabel8;}
	/* cmp	WORD PTR TmpRange,ZOOM_RANGE */
	CMP(*(dw*)(&tmprange), 6000);
	/* jae	__m2c_macrolocal_13_skip */
	if ((dw)(*(dw*)(&tmprange)) >= (dw)(6000)) {goto __m2c_macrolocal_13_skip;}
	/* jmp	SwitchToZoom */
	goto switchtozoom;
__m2c_macrolocal_13_skip:
	// 4459 
	// 0 ;* if hit ground then explode
dummylabel8:
	// 4461 
	/* @@:		call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jnc	__m2c_macrolocal_14_skip */
	if (!CF) {goto __m2c_macrolocal_14_skip;}
	/* jmp	AlarmDamage */
	goto alarmdamage;
__m2c_macrolocal_14_skip:
	// 4463 
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmzoom:
	// 4465 
	// 0 ;---------------------------
	// 0 ;* check if zoomed above loiter altitude
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_15_skip */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_15_skip;}
	/* jmp	SwitchToLoiter */
	goto switchtoloiter;
__m2c_macrolocal_15_skip:
	// 4467 
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,LOITER_ALT */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 10000);
	/* jbe	__m2c_macrolocal_16_skip */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) <= (dw)(10000)) {goto __m2c_macrolocal_16_skip;}
	/* jmp	SwitchToLoiter */
	goto switchtoloiter;
__m2c_macrolocal_16_skip:
	// 4469 
	// 0 ;* check if stalled
	/* cmp	WPN_Weapon.WPN_ALM_VEL,ALARM_STL_SPEED */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_alm_vel)), 200*8);
	/* jae	__m2c_macrolocal_17_skip */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_alm_vel))) >= (dw)(200*8)) {goto __m2c_macrolocal_17_skip;}
	/* jmp	SwitchToLoiter */
	goto switchtoloiter;
__m2c_macrolocal_17_skip:
	// 4471 
	// 0 ;* zoom climb
	/* call	AlarmGuideAbove */
	CALL(alarmguideabove, 0);
	// 0 ;* if hit ground then explode
intozoom:
	// 4473 
	/* IntoZoom:	call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jnc	__m2c_macrolocal_18_skip */
	if (!CF) {goto __m2c_macrolocal_18_skip;}
	/* jmp	AlarmDamage */
	goto alarmdamage;
__m2c_macrolocal_18_skip:
	// 4475 
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmfreefall:
	// 4477 
	// 0 ;---------------------------
	// 0 ;* if (alt > release alt) and (alt < loiter alt) then switch to loiter
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel9;}
	/* mov	ax,WORD PTR WPN_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* cmp	ax,RELEASE_ALT */
	CMP(ax, 1000);
	/* jb	@F */
	if ((dw)(ax) < (dw)(1000)) {goto dummylabel9;}
	/* cmp	ax,LOITER_ALT */
	CMP(ax, 10000);
	/* jae	__m2c_macrolocal_19_skip */
	if ((dw)(ax) >= (dw)(10000)) {goto __m2c_macrolocal_19_skip;}
	/* jmp	SwitchToLoiter */
	goto switchtoloiter;
__m2c_macrolocal_19_skip:
	// 4479 
	// 0 ;* free fall
dummylabel9:
	// 4481 
	/* @@:		call	AlarmGuideBelow */
	CALL(alarmguidebelow, 0);
	// 0 ;* if hit ground then explode
intofreefall:
	// 4483 
	/* IntoFreeFall:	call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jnc	__m2c_macrolocal_20_skip */
	if (!CF) {goto __m2c_macrolocal_20_skip;}
	/* jmp	AlarmDamage */
	goto alarmdamage;
__m2c_macrolocal_20_skip:
	// 4485 
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmloiter:
	// 4487 
	// 0 ;---------------------------
	// 0 ;* ensure pitched down to -90 degs
	/* cmp	WPN_Weapon.WPN_PFINE,-128*128 */
	CMP(wpn_weapon.wpn_pfine, -128*128);
	/* jne	ContLoiter */
	if ((dw)(wpn_weapon.wpn_pfine) != (dw)(-128*128)) {goto contloiter;}
	// 0 ;* if alt < release alt then switch to free fall
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel10;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,RELEASE_ALT */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 1000);
	/* jae	__m2c_macrolocal_21_skip */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) >= (dw)(1000)) {goto __m2c_macrolocal_21_skip;}
	/* jmp	SwitchToFree */
	goto switchtofree;
__m2c_macrolocal_21_skip:
	// 4489 
	// 0 ;* stabilise (prevent dive immediately after pitch = -90 for visual effect)
dummylabel10:
	// 4491 
	/* @@:		mov	ax,WPN_Weapon.WPN_ALM_TIMER */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_timer));
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
	/* mov	WPN_Weapon.WPN_ALM_TIMER,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_timer)) = ax;
	/* jnz	ContLoiter */
	if (ax != 0) {goto contloiter;}
	// 0 ;* if radar detected then switch to dive mode
	/* call	AlarmRadarScan */
	CALL(alarmradarscan, 0);
	/* jnc	__m2c_macrolocal_23_skip */
	if (!CF) {goto __m2c_macrolocal_23_skip;}
	/* jmp	SwitchToDive */
	goto switchtodive;
__m2c_macrolocal_23_skip:
	// 4493 
	// 0 ;* spinning parachute effect
contloiter:
	// 4495 
	/* ContLoiter:	mov	ax,14		;10 degs/sec */
	ax = 14;
	// 0 ;* increase spin rate during pitch over (for stabilising effect)
	/* cmp	WPN_Weapon.WPN_PFINE,-128*128 */
	CMP(wpn_weapon.wpn_pfine, -128*128);
	/* je	@F */
	if ((dw)(wpn_weapon.wpn_pfine) == (dw)(-128*128)) {goto dummylabel11;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
dummylabel11:
	// 4497 
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
	/* jnz	@F */
	if (dx != 0) {goto dummylabel12;}
	/* inc	dx		;ensure spinning */
	INC(dx);
dummylabel12:
	// 4499 
	/* @@:		add	dx,WPN_View.VP_ROLL */
	ADD(dx, wpn_view.vp_roll);
	/* and	dx,001ffh */
	AND(dx, 0x001ff);
	/* mov	WPN_View.VP_ROLL,dx */
	wpn_view.vp_roll = dx;
	// 0 ;* loiter
	/* call	AlarmGuideBelow */
	CALL(alarmguidebelow, 0);
	// 0 ;* if hit ground then explode
intoloiter:
	// 4501 
	/* IntoLoiter:	call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jc	AlarmDamage */
	if (CF) {goto alarmdamage;}
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmdive:
	// 4503 
	// 0 ;---------------------------
	// 0 ;* dive towards target
	/* mov	ax,TARGET_ALT */
	ax = 0;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* call	AlarmGuidance */
	CALL(alarmguidance, 0);
	/* jc	SwitchToFree */
	if (CF) {goto switchtofree;}
	// 0 ;* if hit ground then explode
intodive:
	// 4505 
	/* IntoDive:	call	AlarmMovement */
	CALL(alarmmovement, 0);
	/* jc	AlarmDamage */
	if (CF) {goto alarmdamage;}
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;---------------------------
alarmdamage:
	// 4507 
	// 0 ;---------------------------
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitalarm:
	// 4509 
	/* ExitAlarm:	ret */
	RETN(0);
	// 0 ;---------------------------
switchtokill:
	// 4511 
	// 0 ;---------------------------
	// 0 ;* set kill mode
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_ALARM_MODE */
	AND(wpn_weapon.wpn_flags, ~0x7);
	/* or	WPN_Weapon.WPN_FLAGS,ALARM_KILL */
	OR(wpn_weapon.wpn_flags, 1);
	/* jmp	IntoKill */
	goto intokill;
	// 0 ;---------------------------
switchtozoom:
	// 4513 
	// 0 ;---------------------------
	// 0 ;* if above loiter altitude then switch to free fall
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	SwitchToFree */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto switchtofree;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,LOITER_ALT */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 10000);
	/* ja	SwitchToFree */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(10000)) {goto switchtofree;}
	// 0 ;* if stalled then switch to loiter
	/* cmp	WPN_Weapon.WPN_ALM_VEL,ALARM_STL_SPEED */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_alm_vel)), 200*8);
	/* jb	SwitchToLoiter */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_alm_vel))) < (dw)(200*8)) {goto switchtoloiter;}
	// 0 ;* motor off
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	OR(wpn_weapon.wpn_flags, 0x80);
	/* and	WPN_Mobile.MOB_ANIM,NOT FLAME */
	AND(wpn_mobile.mob_anim, ~0x1);
	// 0 ;* fixed deceleration (-187.5ft/sec/sec)
	/* mov	WPN_Weapon.WPN_ALM_ACCEL,-1500 */
	*((dw*)((db*)&wpn_weapon+wpn_alm_accel)) = -1500;
	// 0 ;* set zoom mode
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_ALARM_MODE */
	AND(wpn_weapon.wpn_flags, ~0x7);
	/* or	WPN_Weapon.WPN_FLAGS,ALARM_ZOOM */
	OR(wpn_weapon.wpn_flags, 3);
	/* jmp	IntoZoom */
	goto intozoom;
	// 0 ;---------------------------
switchtofree:
	// 4515 
	// 0 ;---------------------------
	// 0 ;* motor off
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	OR(wpn_weapon.wpn_flags, 0x80);
	/* and	WPN_Mobile.MOB_ANIM,NOT FLAME */
	AND(wpn_mobile.mob_anim, ~0x1);
	// 0 ;* chute closed
	/* and	WPN_Mobile.MOB_ANIM,NOT CHUTE */
	AND(wpn_mobile.mob_anim, ~0x2);
	// 0 ;* fixed acceleration (32ft/sec/sec)
	/* mov	WPN_Weapon.WPN_ALM_ACCEL,32*8 */
	*((dw*)((db*)&wpn_weapon+wpn_alm_accel)) = 32*8;
	// 0 ;* reset roll (for better visual effect after loiter)
	/* mov	WPN_View.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	// 0 ;* set free fall mode
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_ALARM_MODE */
	AND(wpn_weapon.wpn_flags, ~0x7);
	/* or	WPN_Weapon.WPN_FLAGS,ALARM_FREEFALL */
	OR(wpn_weapon.wpn_flags, 4);
	/* jmp	IntoFreeFall */
	goto intofreefall;
	// 0 ;---------------------------
switchtoloiter:
	// 4517 
	// 0 ;---------------------------
	// 0 ;* motor off
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	OR(wpn_weapon.wpn_flags, 0x80);
	/* and	WPN_Mobile.MOB_ANIM,NOT FLAME */
	AND(wpn_mobile.mob_anim, ~0x1);
	// 0 ;* chute open
	/* or	WPN_Mobile.MOB_ANIM,CHUTE */
	OR(wpn_mobile.mob_anim, 0x2);
	// 0 ;* fixed deceleration (-375ft/sec/sec)
	/* mov	WPN_Weapon.WPN_ALM_ACCEL,-3000 */
	*((dw*)((db*)&wpn_weapon+wpn_alm_accel)) = -3000;
	// 0 ;* set stabilisation delay
	/* mov	WPN_Weapon.WPN_ALM_TIMER,3*100 */
	*((dw*)((db*)&wpn_weapon+wpn_alm_timer)) = 3*100;
	// 0 ;* set loiter mode
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_ALARM_MODE */
	AND(wpn_weapon.wpn_flags, ~0x7);
	/* or	WPN_Weapon.WPN_FLAGS,ALARM_LOITER */
	OR(wpn_weapon.wpn_flags, 5);
	/* jmp	IntoLoiter */
	goto intoloiter;
	// 0 ;---------------------------
switchtodive:
	// 4519 
	// 0 ;---------------------------
	// 0 ;* motor off
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	OR(wpn_weapon.wpn_flags, 0x80);
	/* and	WPN_Mobile.MOB_ANIM,NOT FLAME */
	AND(wpn_mobile.mob_anim, ~0x1);
	// 0 ;* chute closed
	/* and	WPN_Mobile.MOB_ANIM,NOT CHUTE */
	AND(wpn_mobile.mob_anim, ~0x2);
	// 0 ;* fixed acceleration (32ft/sec/sec)
	/* mov	WPN_Weapon.WPN_ALM_ACCEL,32*8 */
	*((dw*)((db*)&wpn_weapon+wpn_alm_accel)) = 32*8;
	// 0 ;* reset roll (for better visual effect after loiter)
	/* mov	WPN_View.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	// 0 ;Added this in so that the ALARM fires towards its target with
	// 0 ;a full plume of fire at its back nozzle!
	/* mov	WPN_Mobile.MOB_ANIM,FLAME */
	wpn_mobile.mob_anim = 0x1;
	// 0 ;* if viewing weapon then reset camera bearing (to prevent visual glitch)
	/* mov	ax,WeaponPtr */
	ax = weaponptr;
	/* cmp	ax,ViewWeaponPtr */
	CMP(ax, viewweaponptr);
	/* jne	@F */
	if ((dw)(ax) != (dw)(viewweaponptr)) {goto dummylabel13;}
	/* mov	WpnCamBrg,256 */
	wpncambrg = 256;
	/* mov	WpnCamBrgFine,0 */
	wpncambrgfine = 0;
	// 0 ;* set dive mode
dummylabel13:
	// 4521 
	/* @@:		and	WPN_Weapon.WPN_FLAGS,NOT WFLG_ALARM_MODE */
	AND(wpn_weapon.wpn_flags, ~0x7);
	/* or	WPN_Weapon.WPN_FLAGS,ALARM_DIVE */
	OR(wpn_weapon.wpn_flags, 6);
	/* jmp	IntoDive */
	goto intodive;
updatecannon:
	// 4306 
	// 0 ;---------------------------
	// 0 ;* check for end of lifetime
	// 0 ;---------------------------
edummylabel10:
	// 4523 
	/* mov	ax,WPN_Weapon.WPN_CAN_TIMER */
	ax = *((dw*)((db*)&wpn_weapon+wpn_can_timer));
	/* sub	ax,LastFrame	;time up? */
	SUB(ax, lastframe);
	/* jnc	@F    		;no -> */
	if (!CF) {goto dummylabel14;}
	/* mov	WPN_Weapon.WPN_TYPE,NULL_WEAPON */
	wpn_weapon.wpn_type = -1;
	/* jmp	ExitCannon */
	goto exitcannon;
dummylabel14:
	// 4525 
	/* @@:		mov	WPN_Weapon.WPN_CAN_TIMER,ax */
	*((dw*)((db*)&wpn_weapon+wpn_can_timer)) = ax;
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	/* call	ShellBallistics */
	CALL(shellballistics, 0);
	/* jnc	ExitCannon	;ok -> */
	if (!CF) {goto exitcannon;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitcannon:
	// 4527 
	/* ExitCannon:	ret */
	RETN(0);
updatemissile:
	// 4334 
	// 0 ;---------------------------
	// 0 ;* check for end of lifetime
	// 0 ;---------------------------
edummylabel11:
	// 4529 
	/* mov	ax,WPN_Weapon.WPN_MISS_TIMER */
	ax = *((dw*)((db*)&wpn_weapon+wpn_miss_timer));
	/* sub	ax,LastFrame	;time up? */
	SUB(ax, lastframe);
	/* jc	__m2c_macrolocal_25_skip */
	if (CF) {goto __m2c_macrolocal_25_skip;}
	/* jmp	MissTimerOk */
	goto misstimerok;
__m2c_macrolocal_25_skip:
	// 4531 
	// 0 ;no ->
	// 0 ;* motor burnout or end of lifetime?
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	TEST(wpn_weapon.wpn_flags, 0x80);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x80)) {goto dummylabel15;}
	// 0 ;* end of lifetime (self destruct)
	/* mov	si,-1 */
	si = -1;
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* call	WpnHitTarget */
	CALL(wpnhittarget, 0);
	// 0 ;* lose lock (else explosion shows up on Tornado RWR)
	/* mov	WPN_Weapon.WPN_MISS_TGT,-1 */
	*((dw*)((db*)&wpn_weapon+wpn_miss_tgt)) = -1;
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_TLOCK */
	AND(wpn_weapon.wpn_flags, ~0x800);
	/* jmp	ExitMissile */
	goto exitmissile;
	// 0 ;* motor burnout
dummylabel15:
	// 4533 
	/* @@:		or	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	OR(wpn_weapon.wpn_flags, 0x80);
	/* and	WPN_Mobile.MOB_ANIM,NOT FLAME */
	AND(wpn_mobile.mob_anim, ~0x1);
	/* mov	ax,WORD PTR WPN_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_HI */
	dx = *((dw*)((db*)&wpn_view+vp_zft_hi));
	/* mov	bx,1000 */
	bx = 1000;
	/* div 	bx */
	DIV2(bx);
	/* cmp	ax,36		;valid up to 36000ft */
	CMP(ax, 36);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(36)) {goto dummylabel16;}
	/* mov	ax,36 */
	ax = 36;
dummylabel16:
	// 4535 
	/* @@:		mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;bx = decel time index */
	SHL(bx, 1);
	// 0 ;* sort Sidewinder
	/* cmp	WPN_Weapon.WPN_TYPE,SIDEWINDER */
	CMP(wpn_weapon.wpn_type, 14);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(14)) {goto dummylabel17;}
	/* mov	bx,SideDecelTime[bx] */
	bx = *(dw*)(((db*)&sidedeceltime)+bx);
	/* jmp	ContBurnout */
	goto contburnout;
	// 0 ;* sort Sky Flash
dummylabel17:
	// 4537 
	/* @@:		cmp	WPN_Weapon.WPN_TYPE,SKYFLASH */
	CMP(wpn_weapon.wpn_type, 16);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(16)) {goto dummylabel18;}
	/* mov	bx,SkyDecelTime[bx] */
	bx = *(dw*)(((db*)&skydeceltime)+bx);
	/* jmp	ContBurnout */
	goto contburnout;
	// 0 ;* sort Patriot
dummylabel18:
	// 4539 
	/* @@:		cmp	WPN_Weapon.WPN_TYPE,PATRIOT */
	CMP(wpn_weapon.wpn_type, 18);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(18)) {goto dummylabel19;}
	/* mov	bx,SAMDecelTime[bx] */
	bx = *(dw*)(((db*)&samdeceltime)+bx);
	/* jmp	ContBurnout */
	goto contburnout;
	// 0 ;* sort Gecko
dummylabel19:
	// 4541 
	/* @@:		mov	bx,SAMDecelTime[bx] */
	bx = *(dw*)(((db*)&samdeceltime)+bx);
	// 0 ;* accel[*8] = (1000*8 - vel[*8]) * 100 / decel time[*100]
contburnout:
	// 4543 
	/* ContBurnout:	mov	ax,1000*8 */
	ax = 1000*8;
	/* mov	dx,WPN_Weapon.WPN_MISS_VEL */
	dx = *((dw*)((db*)&wpn_weapon+wpn_miss_vel));
	// 0 ;* ensure accel <= 0
	/* cmp	dx,1000*8 */
	CMP(dx, 1000*8);
	/* jae	@F */
	if ((dw)(dx) >= (dw)(1000*8)) {goto dummylabel20;}
	/* mov	dx,1000*8 */
	dx = 1000*8;
dummylabel20:
	// 4545 
	/* @@:		sub	ax,dx */
	SUB(ax, dx);
	/* mov	dx,100 */
	dx = 100;
	/* imul	dx */
	IMUL1_2(dx);
	/* idiv	bx */
	IDIV2(bx);
	/* mov	WPN_Weapon.WPN_MISS_ACCEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_miss_accel)) = ax;
	/* mov	ax,bx */
	ax = bx;
	// 0 ;* set lifetime counter
misstimerok:
	// 4547 
	/* MissTimerOk:	mov	WPN_Weapon.WPN_MISS_TIMER,ax */
	*((dw*)((db*)&wpn_weapon+wpn_miss_timer)) = ax;
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	/* call	MissileGuidance */
	CALL(missileguidance, 0);
	/* jnc	ExitMissile	;ok -> */
	if (!CF) {goto exitmissile;}
	/* call	GroundDamage */
	CALL(grounddamage, 0);
exitmissile:
	// 4549 
	/* ExitMissile:	ret */
	RETN(0);
updatedecoy:
	// 4428 
	// 0 ;* check for end of lifetime
edummylabel12:
	// 4551 
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* sub	WPN_Weapon.WPN_DECOY_LIFE,ax */
	SUB(*((dw*)((db*)&wpn_weapon+wpn_decoy_life)), ax);
	/* jc	@F */
	if (CF) {goto dummylabel21;}
	// 0 ;* move decoy (check for hit ground)
	/* call	BombBallistics */
	CALL(bombballistics, 0);
	/* jnc	ExitDecoy */
	if (!CF) {goto exitdecoy;}
	// 0 ;* weapon no longer in use
dummylabel21:
	// 4553 
	/* @@:		mov	WPN_Weapon.WPN_TYPE,NULL_WEAPON */
	wpn_weapon.wpn_type = -1;
exitdecoy:
	// 4555 
	/* ExitDecoy:	ret */
	RETN(0);
bombballistics:
	// 4452 
	// 0 ;--------------
	// 0 ;* calc delta z
	// 0 ;--------------
	// 0 ;* delta z = v vel * delta time - 16 * delta time * delta time
	// 0 ;*
	// 0 ;* (s = u * t + 1/2 * a * t * t)
	// 0 ;* v vel * delta time (result as 16 bit whole, 16 bit fraction)
edummylabel13:
	// 4557 
	/* mov	ax,WPN_Weapon.WPN_BOMB_VVEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_bomb_vvel));
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* 16 * delta time * delta time (result as 16 bit whole, 16 bit fraction)
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	ax */
	IMUL1_2(ax);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* mov	dl,dh */
	dl = dh;
	/* xor	dh,dh */
	XOR(dh, dh);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* mov	ax,cx */
	ax = cx;
	/* cwd			;dxcx.bx = delta z */
	CWD;
	/* add	WPN_Weapon.WPN_ZFINE,bx */
	ADD(wpn_weapon.wpn_zfine, bx);
	/* adc	WORD PTR WPN_View.VP_ZFT_LO,cx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	__m2c_macrolocal_26_skip */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto __m2c_macrolocal_26_skip;}
	/* jmp	BombHitGnd */
	goto bombhitgnd;
__m2c_macrolocal_26_skip:
	// 4559 
	// 0 ;hit ground ->
	// 0 ;------------------------
	// 0 ;* calc vertical velocity
	// 0 ;------------------------
	// 0 ;* v vel = v vel - 32 * delta time (v = u + a * t)
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	dl,ah		;*256 */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* sub	WPN_Weapon.WPN_BOMB_VVEL,dx */
	SUB(*((dw*)((db*)&wpn_weapon+wpn_bomb_vvel)), dx);
	// 0 ;--------------------------------
	// 0 ;* calc delta horizontal velocity (dist moved this frame)
	// 0 ;--------------------------------
	// 0 ;* delta h vel = h vel * delta time
	/* mov	ax,WPN_Weapon.WPN_BOMB_HVEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_bomb_hvel));
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
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	// 0 ;* calc sin(hdg) and cos(hdg)
contbombball:
	// 4561 
	/* ContBombBall:	mov	bx,WPN_View.VP_HDG */
	bx = wpn_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 4538 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 4539 mov	di,CosTable[bx] */
	// 0 ;* x = x + delta h vel * sin(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_XFINE,ax */
	ADD(wpn_weapon.wpn_xfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* y = y + delta h vel * cos(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_YFINE,ax */
	ADD(wpn_weapon.wpn_yfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_30_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_30_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_30_mvxy1:
	// 4563 
	/* __m2c_macrolocal_30_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_30_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_30_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_30_mvxy2:
	// 4565 
	/* __m2c_macrolocal_30_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	dx,WPN_View.VP_YFT	;y + dx */
	ADD(dx, wpn_view.vp_yft);
	/* cmp	dx,8192 		;change sector? */
	CMP(dx, 8192);
	/* jl	__m2c_macrolocal_30_MvXY3			;no -> */
	if ((short)(dx) < (short)(8192)) {goto __m2c_macrolocal_30_mvxy3;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_30_mvxy3:
	// 4567 
	/* __m2c_macrolocal_30_MvXY3:		cmp	dx,-8192		;change sector? */
	CMP(dx, -8192);
	/* jge	__m2c_macrolocal_30_MvXY4			;no -> */
	if ((short)(dx) >= (short)(-8192)) {goto __m2c_macrolocal_30_mvxy4;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_30_mvxy4:
	// 4569 
	/* __m2c_macrolocal_30_MvXY4:		mov	WPN_View.VP_YFT,dx */
	wpn_view.vp_yft = dx;
	// 0 ;-----------------------
	// 0 ;* calc bomb pitch angle
	// 0 ;-----------------------
	// 0 ;* note: h vel >= 0
	// 0 ;* select abs(v vel)
	// 0 ;* case = h vel
	// 0 ;*    pitch = 45
	// 0 ;* case < h vel
	// 0 ;*    pitch = arctan(v vel / h vel)
	// 0 ;* case > h vel
	// 0 ;*    pitch = 90 - arctan(h vel / v vel)
	// 0 ;* endselect
	/* mov	ax,WPN_Weapon.WPN_BOMB_VVEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_bomb_vvel));
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(v vel), dx = sign(v vel)
	/* mov	bp,dx		;bp = sign(v vel) */
	bp = dx;
	/* mov	bx,WPN_Weapon.WPN_BOMB_HVEL */
	bx = *((dw*)((db*)&wpn_weapon+wpn_bomb_hvel));
	/* cmp	ax,bx		;abs(v vel) = h vel */
	CMP(ax, bx);
	/* jne	@F */
	if ((dw)(ax) != (dw)(bx)) {goto dummylabel22;}
	/* mov	ax,64		;45 degs */
	ax = 64;
	/* jmp	SetBombPitch */
	goto setbombpitch;
dummylabel22:
	// 4571 
	/* @@:		ja	@F		;abs(v vel) > h vel -> */
	if ((!CF && !ZF)) {goto dummylabel23;}
	// 0 ;* pitch = arctan(abs(v vel) / h vel)
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
	/* mov	cl,7		;convert fine degs to pdegs */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* jmp	SetBombPitch */
	goto setbombpitch;
	// 0 ;* pitch = 128 - arctan(h vel / abs(v vel))
dummylabel23:
	// 4573 
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
	/* mov	cl,7		;convert fine degs to pdegs */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
setbombpitch:
	// 4575 
	/* SetBombPitch:	xor	ax,bp		;restore sign */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* mov	WPN_View.VP_PITCH,ax */
	wpn_view.vp_pitch = ax;
	// 0 ;----------------------
	// 0 ;* check for hit ground
	// 0 ;----------------------
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* or	ax,WORD PTR WPN_View.VP_ZFT_LO */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* or	ax,WORD PTR WPN_View.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jz	BombImpact */
	if (ax == 0) {goto bombimpact;}
	// 0 ;--------------------
	// 0 ;* check for hit hill
	// 0 ;--------------------
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0		;zft > 65535ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel24;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,4095	;zft > 4095ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 4095);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(4095)) {goto dummylabel24;}
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,ax	;hit hill? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* jbe	BombImpact			;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) <= (dw)(ax)) {goto bombimpact;}
dummylabel24:
	// 4577 
	/* @@:		clc			;cf = 0 (still falling) */
	CLC;
	/* ret */
	RETN(0);
bombimpact:
	// 4579 
	/* BombImpact:	stc			;cf = 1 (hit ground / hit hill) */
	STC;
	/* ret */
	RETN(0);
	// 0 ;-----------------
	// 0 ;* bomb hit ground (calc impact point)
	// 0 ;-----------------
	// 0 ;* restore zft
bombhitgnd:
	// 4581 
	/* BombHitGnd:    	sub	WPN_Weapon.WPN_ZFINE,bx */
	SUB(wpn_weapon.wpn_zfine, bx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_LO,cx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_HI,dx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	// 0 ;* frac = zft / abs(delta z)
	// 0 ;*
	// 0 ;* assume delta z < 0
	// 0 ;* assume zft < 65536
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_LO */
	dx = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* shr	dx,1		;/2 for bin frac */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* neg	cx */
	NEG(cx);
	/* div	cx */
	DIV2(cx);
	// 0 ;* delta h vel = h vel * frac * delta time
	/* mov	dx,WPN_Weapon.WPN_BOMB_HVEL */
	dx = *((dw*)((db*)&wpn_weapon+wpn_bomb_hvel));
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
	/* mov	bp,dx */
	bp = dx;
	// 0 ;* zft = 0
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,ax */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,ax */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = ax;
	// 0 ;* v vel = 0
	/* mov	WPN_Weapon.WPN_BOMB_VVEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_bomb_vvel)) = ax;
	/* jmp	ContBombBall */
	goto contbombball;
lgbguidance:
	// 4722 
	// 0 ;--------------
	// 0 ;* calc delta z
	// 0 ;--------------
	// 0 ;* delta z = (vel * sin(pitch) * delta time) + (16 * delta time * delta time)
edummylabel14:
	// 4583 
	/* mov	bx,WPN_View.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;si = sin(pitch), di = cos(pitch)
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 4736 mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 4737 mov	di,CosTable[bx] */
	/* mov	ax,WPN_Weapon.WPN_LGB_VEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_lgb_vel));
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
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* 16 * delta time * delta time (result as 16 bit whole, 16 bit fraction)
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	ax */
	IMUL1_2(ax);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* mov	dl,dh */
	dl = dh;
	/* xor	dh,dh */
	XOR(dh, dh);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* mov	ax,cx */
	ax = cx;
	/* cwd			;dxcx.bx = delta z */
	CWD;
	/* add	WPN_Weapon.WPN_ZFINE,bx */
	ADD(wpn_weapon.wpn_zfine, bx);
	/* adc	WORD PTR WPN_View.VP_ZFT_LO,cx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	CalcLGBVel	;not hit ground -> */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto calclgbvel;}
	// 0 ;----------------
	// 0 ;* LGB hit ground (calc impact point)
	// 0 ;----------------
	// 0 ;* restore zft
	/* sub	WPN_Weapon.WPN_ZFINE,bx */
	SUB(wpn_weapon.wpn_zfine, bx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_LO,cx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_HI,dx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	// 0 ;* frac = zft / abs(delta z)
	// 0 ;*
	// 0 ;* assume delta z < 0
	// 0 ;* assume zft < 65536
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_LO */
	dx = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* shr	dx,1		;/2 for bin frac */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* neg	cx */
	NEG(cx);
	/* div	cx */
	DIV2(cx);
	// 0 ;* delta time * frac
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
	// 0 ;* zft = 0
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	WPN_Weapon.WPN_ZFINE,dx */
	wpn_weapon.wpn_zfine = dx;
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,dx */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = dx;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,dx */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = dx;
	/* jmp	IntoLGBVel */
	goto intolgbvel;
	// 0 ;---------------
	// 0 ;* calc velocity
	// 0 ;---------------
	// 0 ;* vel = max(vel + 32 * -sin(pitch) * delta time, 0)
calclgbvel:
	// 4585 
	/* CalcLGBVel:	mov	ax,DeltaTime */
	ax = deltatime;
intolgbvel:
	// 4587 
	/* IntoLGBVel:	imul	si */
	IMUL1_2(si);
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
	/* mov	ax,dx */
	ax = dx;
	/* neg	ax */
	NEG(ax);
	/* add	ax,WPN_Weapon.WPN_LGB_VEL */
	ADD(ax, *((dw*)((db*)&wpn_weapon+wpn_lgb_vel)));
	/* jns	@F */
	if ((short)(ax) >= 0) {goto dummylabel25;}
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel25:
	// 4589 
	/* @@:		mov	WPN_Weapon.WPN_LGB_VEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_lgb_vel)) = ax;
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	// 0 ;* delta h vel = vel * cos(pitch) * delta time
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
	// 0 ;bp = delta h vel
	// 0 ;* calc sin(hdg) and cos(hdg)
	/* mov	bx,WPN_View.VP_HDG */
	bx = wpn_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 4861 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 4862 						mov	di,CosTable[bx] */
	// 0 ;si = sin(hdg), di = cos(hdg)
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* x = x + delta h vel * sin(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_XFINE,ax */
	ADD(wpn_weapon.wpn_xfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* y = y + delta h vel * cos(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_YFINE,ax */
	ADD(wpn_weapon.wpn_yfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_42_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_42_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_42_mvxy1:
	// 4591 
	/* __m2c_macrolocal_42_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_42_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_42_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_42_mvxy2:
	// 4593 
	/* __m2c_macrolocal_42_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	dx,WPN_View.VP_YFT	;y + dx */
	ADD(dx, wpn_view.vp_yft);
	/* cmp	dx,8192 		;change sector? */
	CMP(dx, 8192);
	/* jl	__m2c_macrolocal_42_MvXY3			;no -> */
	if ((short)(dx) < (short)(8192)) {goto __m2c_macrolocal_42_mvxy3;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_42_mvxy3:
	// 4595 
	/* __m2c_macrolocal_42_MvXY3:		cmp	dx,-8192		;change sector? */
	CMP(dx, -8192);
	/* jge	__m2c_macrolocal_42_MvXY4			;no -> */
	if ((short)(dx) >= (short)(-8192)) {goto __m2c_macrolocal_42_mvxy4;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_42_mvxy4:
	// 4597 
	/* __m2c_macrolocal_42_MvXY4:		mov	WPN_View.VP_YFT,dx */
	wpn_view.vp_yft = dx;
	// 0 ;----------------------
	// 0 ;* check for hit ground
	// 0 ;----------------------
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* or	ax,WORD PTR WPN_View.VP_ZFT_LO */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* or	ax,WORD PTR WPN_View.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jnz	__m2c_macrolocal_43_skip */
	if (ax != 0) {goto __m2c_macrolocal_43_skip;}
	/* jmp	LGBImpact */
	goto lgbimpact;
__m2c_macrolocal_43_skip:
	// 4599 
	// 0 ;--------------------
	// 0 ;* check for hit hill
	// 0 ;--------------------
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0		;zft > 65535ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel26;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,4095	;zft > 4095ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 4095);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(4095)) {goto dummylabel26;}
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,ax	;hit hill? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* ja	__m2c_macrolocal_44_skip */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(ax)) {goto __m2c_macrolocal_44_skip;}
	/* jmp	LGBImpact */
	goto lgbimpact;
__m2c_macrolocal_44_skip:
	// 4601 
	// 0 ;yes ->
	// 0 ;----------------------------------
	// 0 ;* check Tornado target illuminated
	// 0 ;----------------------------------
dummylabel26:
	// 4603 
	/* @@:		test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO	;Tornado weapon? */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F					;no -> */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel27;}
	/* test	LaserActive,1	;target illuminated? */
	TEST(laseractive, 1);
	/* jnz	__m2c_macrolocal_45_skip */
	if ((laseractive & 1) != 0) {goto __m2c_macrolocal_45_skip;}
	/* jmp	NoLaser */
	goto nolaser;
__m2c_macrolocal_45_skip:
	// 4605 
	// 0 ;no ->
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	__m2c_macrolocal_46_skip */
	if ((dw)(fog) == (dw)(0)) {goto __m2c_macrolocal_46_skip;}
	/* jmp	NoLaser */
	goto nolaser;
__m2c_macrolocal_46_skip:
	// 4607 
	// 0 ;yes ->
	/* test	Overcast,1     	;overcast? */
	TEST(overcast, 1);
	/* jz	@F		;no -> */
	if (!(overcast & 1)) {goto dummylabel27;}
	/* mov	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* cmp	dx,WORD PTR CloudBase+2	;zft >= cloud base? */
	CMP(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jbe	__m2c_macrolocal_47_skip */
	if ((dw)(dx) <= (dw)(*(dw*)(((db*)&cloudbase)+2))) {goto __m2c_macrolocal_47_skip;}
	/* jmp	NoLaser */
	goto nolaser;
__m2c_macrolocal_47_skip:
	// 4609 
	// 0 ;yes ->
	/* cmp	ax,WORD PTR CloudBase */
	CMP(ax, *(dw*)(&cloudbase));
	/* jb	__m2c_macrolocal_48_skip */
	if ((dw)(ax) < (dw)(*(dw*)(&cloudbase))) {goto __m2c_macrolocal_48_skip;}
	/* jmp	NoLaser */
	goto nolaser;
__m2c_macrolocal_48_skip:
	// 4611 
	// 0 ;yes ->
	// 0 ;------------------
	// 0 ;* calc ideal pitch
	// 0 ;------------------
dummylabel27:
	// 4613 
	/* @@:		mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,WPN_Weapon.WPN_LGB_TGT */
	di = *((dw*)((db*)&wpn_weapon+wpn_lgb_tgt));
	/* call	CalcRngBrgVP_WP */
	CALLF(calcrngbrgvp_wp, 0);
	// 0 ;* if range > 65535ft then no guidance (too far)
	/* cmp	dx,0		;range > 65535? */
	CMP(dx, 0);
	/* ja	NoLaser		;yes -> */
	if ((dw)(dx) > (dw)(0)) {goto nolaser;}
	// 0 ;* if zft > 65535ft then no guidance (too high)
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0	;zft > 65535? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	NoLaser				;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto nolaser;}
	/* mov	bx,ax		;bx = range */
	bx = ax;
	// 0 ;* select zft
	// 0 ;* case = range
	// 0 ;*    pitch = -45 degs
	// 0 ;* case < range
	// 0 ;*    pitch = -arctan(zft / range)
	// 0 ;* case > range
	// 0 ;*    pitch = -(90 degs - arctan(range / zft))
	// 0 ;* endselect
	/* mov	ax,WORD PTR WPN_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* cmp	ax,bx		;select zft */
	CMP(ax, bx);
	/* jb	CalcLGBPitch1	;case < range -> */
	if ((dw)(ax) < (dw)(bx)) {goto calclgbpitch1;}
	/* ja	CalcLGBPitch2	;case > range -> */
	if ((dw)(ax) > (dw)(bx)) {goto calclgbpitch2;}
	/* mov	ax,-64*128	;ideal pitch = -45 degs */
	ax = -64*128;
	/* jmp	LGBHdgError */
	goto lgbhdgerror;
	// 0 ;* pitch = -arctan(zft / range)
calclgbpitch1:
	// 4615 
	/* CalcLGBPitch1:	mov	dx,ax */
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
	/* neg	ax */
	NEG(ax);
	/* jmp	LGBHdgError */
	goto lgbhdgerror;
	// 0 ;* pitch = -(90 degs - arctan(range / zft))
calclgbpitch2:
	// 4617 
	/* CalcLGBPitch2:	mov	dx,bx */
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
	/* neg	ax */
	NEG(ax);
	// 0 ;* hdg error = angular difference
lgbhdgerror:
	// 4619 
	/* LGBHdgError: 	mov	bx,ax		;store ideal pitch */
	bx = ax;
	/* mov	ax,bp		;brg fine */
	ax = bp;
	/* sub	ax,WPN_Weapon.WPN_HFINE */
	SUB(ax, wpn_weapon.wpn_hfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* xchg	bx,ax		;ax = ideal pitch, bx = abs(hdg error) */
	XCHG(bx, ax);
	/* mov	cx,dx		;cx = sign(hdg error) */
	cx = dx;
	/* jmp	CalcLGBRate */
	goto calclgbrate;
	// 0 ;-------------
	// 0 ;* no guidance (pitch down)
	// 0 ;-------------
nolaser:
	// 4621 
	/* NoLaser:	mov	ax,-128*128	;ideal pitch = -90 degs */
	ax = -128*128;
	/* xor	bx,bx		;abs(hdg error) = 0 */
	XOR(bx, bx);
	/* xor	cx,cx		;sign(hdg error) = +ve */
	XOR(cx, cx);
	// 0 ;-------------------
	// 0 ;* calc angular rate (frame limit)
	// 0 ;-------------------
	// 0 ;* ang rate = delta time * 16 (result required * 128 scaled)
calclgbrate:
	// 4623 
	/* CalcLGBRate:	mov	bp,DeltaTime */
	bp = deltatime;
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* shr	bp,1 */
	SHR(bp, 1);
	/* adc	bp,0 */
	ADC(bp, 0);
	// 0 ;--------------------
	// 0 ;* check for flipover
	// 0 ;--------------------
	// 0 ;* ax = ideal pitch (fine pdegs)
	// 0 ;* bx = abs(hdg error) (fine pdegs)
	// 0 ;* cx = sign(hdg error)
	// 0 ;* bp = ang rate (fine pdegs)
	/* cmp	bx,128*128	;hdg error > 90 degs? */
	CMP(bx, 128*128);
	/* jbe	NoLGBFlip	;no -> */
	if ((dw)(bx) <= (dw)(128*128)) {goto nolgbflip;}
	// 0 ;----------
	// 0 ;* flipover
	// 0 ;----------
	// 0 ;* delta pitch = -180 - pitch - ideal pitch
	/* mov	dx,-256*128 */
	dx = -256*128;
	/* sub	dx,WPN_Weapon.WPN_PFINE */
	SUB(dx, wpn_weapon.wpn_pfine);
	/* sub	dx,ax */
	SUB(dx, ax);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(delta pitch), dx = sign(delta pitch)
	// 0 ;* delta pitch = max(abs(delta pitch), ang rate) * sign(delta pitch)
	/* cmp	ax,bp		;abs(delta pitch) > ang rate? */
	CMP(ax, bp);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel28;}
	/* mov	ax,bp */
	ax = bp;
dummylabel28:
	// 4625 
	/* @@:	  	xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* pitch = pitch + delta pitch
	/* add	ax,WPN_Weapon.WPN_PFINE */
	ADD(ax, wpn_weapon.wpn_pfine);
	/* cmp	ax,-128*128	;pitch < -90 degs? */
	CMP(ax, -128*128);
	/* jge	@F		;no -> */
	if ((short)(ax) >= (short)(-128*128)) {goto dummylabel29;}
	// 0 ;* limit pitch and flip hdg
	/* sub	ax,256*128 	;flip pitch 180 degs */
	SUB(ax, 256*128);
	/* neg	ax	   	;invert sign */
	NEG(ax);
	/* mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	/* sub	WPN_Weapon.WPN_HFINE,256*128	;flip heading 180 degs */
	SUB(wpn_weapon.wpn_hfine, 256*128);
	/* jmp	SortLGBAngles */
	goto sortlgbangles;
dummylabel29:
	// 4627 
	/* @@:		mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	// 0 ;* hdg error = hdg error + 180
	/* xor	bx,cx		;restore sign */
	XOR(bx, cx);
	/* sub	bx,cx */
	SUB(bx, cx);
	/* add	bx,256*128 */
	ADD(bx, 256*128);
	/* mov	ax,bx */
	ax = bx;
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
	/* jmp	SortLGBHdg */
	goto sortlgbhdg;
	// 0 ;-------------
	// 0 ;* no flipover
	// 0 ;-------------
	// 0 ;* delta pitch = ideal pitch - pitch
	// 0 ;*
	// 0 ;* delta pitch = max(abs(delta pitch), ang rate) * sign(delta pitch)
	// 0 ;*
	// 0 ;* pitch = max(pitch + delta pitch, -90 degs)
nolgbflip:
	// 4629 
	/* NoLGBFlip:	push	bx		;store abs(hdg error) */
	PUSH(bx);
	/* push	cx		;store sign(hdg error) */
	PUSH(cx);
	/* mov	bx,WPN_Weapon.WPN_PFINE */
	bx = wpn_weapon.wpn_pfine;
	/* sub	ax,bx		;ideal pitch - pitch */
	SUB(ax, bx);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;abs(delta pitch)
	/* cmp	ax,bp		;abs(delta pitch) > ang rate? */
	CMP(ax, bp);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel30;}
	/* mov	ax,bp */
	ax = bp;
dummylabel30:
	// 4631 
	/* @@:	  	xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* xchg	ax,bx		;ax = pitch, bx = delta pitch */
	XCHG(ax, bx);
	/* add	ax,bx		;pitch + delta pitch */
	ADD(ax, bx);
	/* cmp	ax,-128*128	;< -90 degs? */
	CMP(ax, -128*128);
	/* jge	@F		;no -> */
	if ((short)(ax) >= (short)(-128*128)) {goto dummylabel31;}
	/* mov	ax,-128*128 */
	ax = -128*128;
dummylabel31:
	// 4633 
	/* @@:		mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	/* pop	dx		;store sign(hdg error) */
	POP(dx);
	/* pop	ax		;store abs(hdg error) */
	POP(ax);
	// 0 ;* delta hdg = hdg error
	// 0 ;*
	// 0 ;* delta hdg = max(abs(delta hdg), ang rate) * sign(delta hdg)
	// 0 ;*
	// 0 ;* hdg = hdg + delta hdg
sortlgbhdg:
	// 4635 
	/* SortLGBHdg:	cmp	ax,bp		;abs(delta hdg) > ang rate? */
	CMP(ax, bp);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel32;}
	/* mov	ax,bp */
	ax = bp;
dummylabel32:
	// 4637 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	WPN_Weapon.WPN_HFINE,ax */
	ADD(wpn_weapon.wpn_hfine, ax);
	// 0 ;-----------------------------
	// 0 ;* convert fine pdegs to pdegs
	// 0 ;-----------------------------
sortlgbangles:
	// 4639 
	/* SortLGBAngles:	mov	cl,7		;/128 */
	cl = 7;
	// 0 ;* hdg = hfine / 128
	/* mov	ax,WPN_Weapon.WPN_HFINE */
	ax = wpn_weapon.wpn_hfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	WPN_View.VP_HDG,ax */
	wpn_view.vp_hdg = ax;
	// 0 ;* pitch = pfine / 128
	/* mov	ax,WPN_Weapon.WPN_PFINE */
	ax = wpn_weapon.wpn_pfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	WPN_View.VP_PITCH,ax */
	wpn_view.vp_pitch = ax;
	/* clc			;cf = 0 (still guiding) */
	CLC;
	/* ret */
	RETN(0);
lgbimpact:
	// 4641 
	/* LGBImpact:	stc			;cf = 1 (hit ground / hit hill) */
	STC;
	/* ret */
	RETN(0);
shellballistics:
	// 5188 
	// 0 ;--------------
	// 0 ;* calc delta z
	// 0 ;--------------
	// 0 ;* delta z = v vel * delta time (result as 16 bit whole, 16 bit fraction)
edummylabel15:
	// 4643 
	/* mov	ax,WPN_Weapon.WPN_CAN_VVEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_can_vvel));
	/* mov	dx,DeltaTime */
	dx = deltatime;
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
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,cx */
	ax = cx;
	/* cwd			;dxcx.bx = delta z */
	CWD;
	/* add	WPN_Weapon.WPN_ZFINE,bx */
	ADD(wpn_weapon.wpn_zfine, bx);
	/* adc	WORD PTR WPN_View.VP_ZFT_LO,cx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	__m2c_macrolocal_56_skip */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto __m2c_macrolocal_56_skip;}
	/* jmp	ShellHitGnd */
	goto shellhitgnd;
__m2c_macrolocal_56_skip:
	// 4645 
	// 0 ;hit ground ->
	// 0 ;--------------------------------
	// 0 ;* calc delta horizontal velocity (dist moved this frame)
	// 0 ;--------------------------------
	// 0 ;* delta h vel = h vel * delta time
	/* mov	ax,WPN_Weapon.WPN_CAN_HVEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_can_hvel));
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
	// 0 ;bp = delta h vel
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	// 0 ;* calc sin(hdg) and cos(hdg)
contshellball:
	// 4647 
	/* ContShellBall:	mov	bx,WPN_View.VP_HDG */
	bx = wpn_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 5239 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 5240 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* x = x + delta h vel * sin(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_XFINE,ax */
	ADD(wpn_weapon.wpn_xfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* y = y + delta h vel * cos(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_YFINE,ax */
	ADD(wpn_weapon.wpn_yfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_59_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_59_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_59_mvxy1:
	// 4649 
	/* __m2c_macrolocal_59_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_59_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_59_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_59_mvxy2:
	// 4651 
	/* __m2c_macrolocal_59_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	dx,WPN_View.VP_YFT	;y + dx */
	ADD(dx, wpn_view.vp_yft);
	/* cmp	dx,8192 		;change sector? */
	CMP(dx, 8192);
	/* jl	__m2c_macrolocal_59_MvXY3			;no -> */
	if ((short)(dx) < (short)(8192)) {goto __m2c_macrolocal_59_mvxy3;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_59_mvxy3:
	// 4653 
	/* __m2c_macrolocal_59_MvXY3:		cmp	dx,-8192		;change sector? */
	CMP(dx, -8192);
	/* jge	__m2c_macrolocal_59_MvXY4			;no -> */
	if ((short)(dx) >= (short)(-8192)) {goto __m2c_macrolocal_59_mvxy4;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_59_mvxy4:
	// 4655 
	/* __m2c_macrolocal_59_MvXY4:		mov	WPN_View.VP_YFT,dx */
	wpn_view.vp_yft = dx;
	// 0 ;----------------------
	// 0 ;* check for hit ground
	// 0 ;----------------------
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* or	ax,WORD PTR WPN_View.VP_ZFT_LO */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* or	ax,WORD PTR WPN_View.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jnz	__m2c_macrolocal_60_skip */
	if (ax != 0) {goto __m2c_macrolocal_60_skip;}
	/* jmp	ShellImpact */
	goto shellimpact;
__m2c_macrolocal_60_skip:
	// 4657 
	// 0 ;--------------------
	// 0 ;* check for hit hill
	// 0 ;--------------------
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0		;zft > 65535ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel33;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,4095	;zft > 4095ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 4095);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(4095)) {goto dummylabel33;}
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,ax	;hit hill? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* jbe	ShellImpact			;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) <= (dw)(ax)) {goto shellimpact;}
	// 0 ;----------------------
	// 0 ;* check for hit mobile
	// 0 ;----------------------
	// 0 ;* check for mobiles in sector
dummylabel33:
	// 4659 
	/* @@:		mov	ax,WPN_View.VP_XSEC */
	ax = wpn_view.vp_xsec;
	/* mov	dx,WPN_View.VP_YSEC */
	dx = wpn_view.vp_ysec;
	/* call	LocateMobiles */
	CALLF(locatemobiles, 0);
	/* jc	ShellOk		;no mobiles in sector -> */
	if (CF) {goto shellok;}
	// 0 ;* scan mobiles and collision test
	/* mov	bp,ShellKillZone */
	bp = shellkillzone;
	// 0 ;* check for end of list
scanmobloop:
	// 4661 
	/* ScanMobLoop:	cmp	si,-1 */
	CMP(si, -1);
	/* je	ShellOk */
	if ((dw)(si) == (dw)(-1)) {goto shellok;}
	// 0 ;* check for source of shell (avoid self destruction)
	/* cmp	si,WPN_Weapon.WPN_CAN_SRC */
	CMP(si, *((dw*)((db*)&wpn_weapon+wpn_can_src)));
	/* je	SkipMob */
	if ((dw)(si) == (dw)(*((dw*)((db*)&wpn_weapon+wpn_can_src)))) {goto skipmob;}
	// 0 ;* check abs(delta xft) in collision cube
	/* mov	ax,_VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xft)));
	/* sub	ax,WPN_View.VP_XFT */
	SUB(ax, wpn_view.vp_xft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	SkipMob */
	if ((dw)(ax) > (dw)(bp)) {goto skipmob;}
	// 0 ;* check abs(delta yft) in collision cube
	/* mov	ax,_VP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_yft)));
	/* sub	ax,WPN_View.VP_YFT */
	SUB(ax, wpn_view.vp_yft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	SkipMob */
	if ((dw)(ax) > (dw)(bp)) {goto skipmob;}
	// 0 ;* check abs(delta zft) in collision cube
	/* mov	ax,WORD PTR _VP_ZFT_LO[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)));
	/* mov	dx,WORD PTR _VP_ZFT_HI[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)));
	/* sub	ax,WORD PTR WPN_View.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR WPN_View.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel34;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel34:
	// 4663 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jnz	SkipMob */
	if ((dx & dx) != 0) {goto skipmob;}
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	SkipMob */
	if ((dw)(ax) > (dw)(bp)) {goto skipmob;}
	// 0 ;* hit mobile
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* call	WpnHitTarget */
	CALL(wpnhittarget, 0);
	/* jmp	ShellOk */
	goto shellok;
	// 0 ;* next mobile
skipmob:
	// 4665 
	/* SkipMob: 	mov	si,[si].MOB_LINK_PTR */
	si = m2c::getdata(*((dw*)((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	ScanMobLoop */
	goto scanmobloop;
shellok:
	// 4667 
	/* ShellOk:	clc			;cf = 0 (ok) */
	CLC;
	/* ret */
	RETN(0);
shellimpact:
	// 4669 
	/* ShellImpact:	stc			;cf = 1 (hit ground / hit hill) */
	STC;
	/* ret */
	RETN(0);
	// 0 ;-----------------
	// 0 ;* shell hit ground (calc impact point)
	// 0 ;-----------------
	// 0 ;* restore zft
shellhitgnd:
	// 4671 
	/* ShellHitGnd:   	sub	WPN_Weapon.WPN_ZFINE,bx */
	SUB(wpn_weapon.wpn_zfine, bx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_LO,cx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_HI,dx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	// 0 ;* frac = zft / abs(delta z)
	// 0 ;*
	// 0 ;* assume delta z < 0
	// 0 ;* assume zft < 65536
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_LO */
	dx = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* shr	dx,1		;/2 for bin frac */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* neg	cx */
	NEG(cx);
	/* div	cx */
	DIV2(cx);
	// 0 ;* delta h vel = h vel * frac * delta time
	/* mov	dx,WPN_Weapon.WPN_CAN_HVEL */
	dx = *((dw*)((db*)&wpn_weapon+wpn_can_hvel));
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
	/* mov	bp,dx */
	bp = dx;
	// 0 ;* zft = 0
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,ax */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,ax */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = ax;
	/* jmp	ContShellBall */
	goto contshellball;
checkalarmtimer:
	// 5428 
	// 0 ;--------------
	// 0 ;* update timer
	// 0 ;--------------
edummylabel16:
	// 4673 
	/* mov	ax,WPN_Weapon.WPN_ALM_TIMER */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_timer));
	/* sub	ax,LastFrame	;time up? */
	SUB(ax, lastframe);
	/* jnc	AlarmTimerOk	;no -> */
	if (!CF) {goto alarmtimerok;}
	// 0 ;* motor burnout or end of lifetime?
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	TEST(wpn_weapon.wpn_flags, 0x80);
	/* jnz	AlarmEndLife */
	if ((wpn_weapon.wpn_flags & 0x80) != 0) {goto alarmendlife;}
	// 0 ;---------------
	// 0 ;* motor burnout
	// 0 ;---------------
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	OR(wpn_weapon.wpn_flags, 0x80);
	/* and	WPN_Mobile.MOB_ANIM,NOT FLAME */
	AND(wpn_mobile.mob_anim, ~0x1);
	/* mov	ax,WORD PTR WPN_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_HI */
	dx = *((dw*)((db*)&wpn_view+vp_zft_hi));
	/* mov	bx,1000 */
	bx = 1000;
	/* div 	bx */
	DIV2(bx);
	/* cmp	ax,36		;valid up to 36000ft */
	CMP(ax, 36);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(36)) {goto dummylabel35;}
	/* mov	ax,36 */
	ax = 36;
dummylabel35:
	// 4675 
	/* @@:		mov	bx,ax */
	bx = ax;
	/* shl	bx,1		;bx = decel time index */
	SHL(bx, 1);
	/* mov	bx,AlarmDecelTime[bx] */
	bx = *(dw*)(((db*)&alarmdeceltime)+bx);
	// 0 ;* accel[*8] = (1000*8 - vel[*8]) * 100 / decel time[*100]
	/* mov	ax,1000*8 */
	ax = 1000*8;
	/* mov	dx,WPN_Weapon.WPN_ALM_VEL */
	dx = *((dw*)((db*)&wpn_weapon+wpn_alm_vel));
	// 0 ;* ensure accel <= 0
	/* cmp	dx,1000*8 */
	CMP(dx, 1000*8);
	/* jae	@F */
	if ((dw)(dx) >= (dw)(1000*8)) {goto dummylabel36;}
	/* mov	dx,1000*8 */
	dx = 1000*8;
dummylabel36:
	// 4677 
	/* @@:		sub	ax,dx */
	SUB(ax, dx);
	/* mov	dx,100 */
	dx = 100;
	/* imul	dx */
	IMUL1_2(dx);
	/* idiv	bx */
	IDIV2(bx);
	/* mov	WPN_Weapon.WPN_ALM_ACCEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_accel)) = ax;
	/* mov	ax,bx */
	ax = bx;
	// 0 ;----------------------
	// 0 ;* set lifetime counter
	// 0 ;----------------------
alarmtimerok:
	// 4679 
	/* AlarmTimerOk:	mov	WPN_Weapon.WPN_ALM_TIMER,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_timer)) = ax;
	/* clc			;cf = 0 (ok) */
	CLC;
	/* ret */
	RETN(0);
alarmendlife:
	// 4681 
	/* AlarmEndLife:	mov	WPN_Weapon.WPN_ALM_TIMER,0 */
	*((dw*)((db*)&wpn_weapon+wpn_alm_timer)) = 0;
	/* stc			;cf = 1 (end of lifetime) */
	STC;
	/* ret */
	RETN(0);
alarmguidance:
	// 5493 
	// 0 ;---------------------
	// 0 ;* set aiming altitude
	// 0 ;---------------------
edummylabel17:
	// 4683 
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,dx */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = dx;
	// 0 ;-----------------
	// 0 ;* update velocity
	// 0 ;-----------------
	// 0 ;* vel = vel + accel * DeltaTime
	/* mov	ax,WPN_Weapon.WPN_ALM_ACCEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_accel));
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
	/* cwd */
	CWD;
	/* add	ax,WPN_Weapon.WPN_ALM_VEL */
	ADD(ax, *((dw*)((db*)&wpn_weapon+wpn_alm_vel)));
	/* adc	dx,0		;(assuming velocity always >= 0) */
	ADC(dx, 0);
	/* jns	@F		;vel >= 0 -> */
	if ((short)(dx) >= 0) {goto dummylabel37;}
	// 0 ;* ensure velocity >= 0
	/* mov	ax,ALARM_MIN_SPEED */
	ax = 40*8;
	/* jmp	SetAlarmVel */
	goto setalarmvel;
	// 0 ;* ensure velocity within limits
dummylabel37:
	// 4685 
	/* @@:	cmp	ax,ALARM_MIN_SPEED */
	CMP(ax, 40*8);
	/* jae	__m2c_macrolocal_67_TestHi */
	if ((dw)(ax) >= (dw)(40*8)) {goto __m2c_macrolocal_67_testhi;}
	/* mov	ax,ALARM_MIN_SPEED */
	ax = 40*8;
	/* jmp	__m2c_macrolocal_67_TestOk */
	goto __m2c_macrolocal_67_testok;
__m2c_macrolocal_67_testhi:
	// 4687 
	/* __m2c_macrolocal_67_TestHi:		cmp	ax,32767 */
	CMP(ax, 32767);
	/* jbe	__m2c_macrolocal_67_TestOk */
	if ((dw)(ax) <= (dw)(32767)) {goto __m2c_macrolocal_67_testok;}
	/* mov	ax,32767 */
	ax = 32767;
__m2c_macrolocal_67_testok:
	// 4689 
setalarmvel:
	// 4691 
	/* SetAlarmVel:	mov	WPN_Weapon.WPN_ALM_VEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_vel)) = ax;
	// 0 ;-----------------------
	// 0 ;* make target viewpoint
	// 0 ;-----------------------
	/* mov	ax,WPN_Weapon.WPN_ALM_XSEC */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_xsec));
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	ax,WPN_Weapon.WPN_ALM_YSEC */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_ysec));
	/* mov	TMP_VIEW.VP_YSEC,ax */
	tmp_view.vp_ysec = ax;
	/* mov	ax,WPN_Weapon.WPN_ALM_XFT */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_xft));
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* mov	ax,WPN_Weapon.WPN_ALM_YFT */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_yft));
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	// 0 ;-----------------------------------------
	// 0 ;* calc range (flat) and bearing of target (always calc range)
	// 0 ;-----------------------------------------
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* mov	WORD PTR TmpRange,ax */
	*(dw*)(&tmprange) = ax;
	/* mov	WORD PTR TmpRange+2,dx */
	*(dw*)(((db*)&tmprange)+2) = dx;
	// 0 ;------------------------------------------
	// 0 ;* inhibit guidance until clear of aircraft
	// 0 ;------------------------------------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	TEST(wpn_weapon.wpn_flags, 0x80);
	/* jnz	@F */
	if ((wpn_weapon.wpn_flags & 0x80) != 0) {goto dummylabel38;}
	/* cmp	WPN_Weapon.WPN_ALM_TIMER,ALARM_BURNTIME-150 */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_alm_timer)), (10*100)-150);
	/* jbe	__m2c_macrolocal_68_skip */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_alm_timer))) <= (dw)((10*100)-150)) {goto __m2c_macrolocal_68_skip;}
	/* jmp	AlarmGuideOk */
	goto alarmguideok;
__m2c_macrolocal_68_skip:
	// 4693 
	// 0 ;----------------
	// 0 ;* calc hdg error
	// 0 ;----------------
	// 0 ;* if zero range then
	// 0 ;*    hdg error = zero (cases where aiming point is directly above or below)
	// 0 ;* endif
dummylabel38:
	// 4695 
	/* @@:		or	ax,dx		;zero range? */
	OR(ax, dx);
	/* jz	@F		;yes -> */
	if (ax == 0) {goto dummylabel39;}
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,WPN_Weapon.WPN_HFINE */
	SUB(ax, wpn_weapon.wpn_hfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* if hdg error > 90 degs then overshot target
	/* cmp	ax,128*128 */
	CMP(ax, 128*128);
	/* jbe	__m2c_macrolocal_70_skip */
	if ((dw)(ax) <= (dw)(128*128)) {goto __m2c_macrolocal_70_skip;}
	/* jmp	AlarmGuideOver */
	goto alarmguideover;
__m2c_macrolocal_70_skip:
	// 4697 
dummylabel39:
	// 4699 
	/* @@:		push	ax		;abs(hdg error) */
	PUSH(ax);
	/* push	dx		;sign(hdg error) */
	PUSH(dx);
	// 0 ;------------------
	// 0 ;* calc ideal pitch
	// 0 ;------------------
	/* mov	ax,WORD PTR TmpRange */
	ax = *(dw*)(&tmprange);
	/* mov	dx,WORD PTR TmpRange+2 */
	dx = *(dw*)(((db*)&tmprange)+2);
	// 0 ;* calc delta z (z tgt - z obj)
	/* mov	bx,WORD PTR TMP_VIEW.VP_ZFT_LO */
	bx = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* mov	cx,WORD PTR TMP_VIEW.VP_ZFT_HI */
	cx = *((dw*)((db*)&tmp_view+vp_zft_hi));
	/* sub	bx,WORD PTR WPN_View.VP_ZFT_LO */
	SUB(bx, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* sbb	cx,WORD PTR WPN_View.VP_ZFT_HI */
	SBB(cx, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* push	cx		;store sign(delta z) */
	PUSH(cx);
	// 0 ;* calc abs(delta z)
	/* jns	@F */
	if ((short)(cx) >= 0) {goto dummylabel40;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* scale range and abs(delta z)
dummylabel40:
	// 4701 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jz	@F */
	if (!(dx & dx)) {goto dummylabel41;}
	/* shr	dx,1		;range / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1		;abs(delta z) / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	@B */
	goto dummylabel40;
dummylabel41:
	// 4703 
	/* @@:		test	cx,cx */
	TEST(cx, cx);
	/* jz	@F */
	if (!(cx & cx)) {goto dummylabel42;}
	/* shr	ax,1		;range / 2 */
	SHR(ax, 1);
	/* shr	cx,1		;abs(delta z) / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	@B */
	goto dummylabel41;
	// 0 ;* select abs(delta z)
	// 0 ;* case = range
	// 0 ;*    pitch = 45
	// 0 ;* case < range
	// 0 ;*    pitch = arctan(abs(delta z) / range)
	// 0 ;* case > range
	// 0 ;*    pitch = 90 - arctan(range / abs(delta z))
	// 0 ;* endselect
dummylabel42:
	// 4705 
	/* @@:		cmp	bx,ax		;select abs(delta z) */
	CMP(bx, ax);
	/* jb	AlarmAimPitch1	;case < range -> */
	if ((dw)(bx) < (dw)(ax)) {goto alarmaimpitch1;}
	/* ja	AlarmAimPitch2	;case > range -> */
	if ((dw)(bx) > (dw)(ax)) {goto alarmaimpitch2;}
	/* mov	bp,64*128	;case 45 degs */
	bp = 64*128;
	/* jmp	ContAlarmPitch */
	goto contalarmpitch;
	// 0 ;* pitch = arctan(abs(delta z) / range)
alarmaimpitch1:
	// 4707 
	/* AlarmAimPitch1:	xchg	ax,bx */
	XCHG(ax, bx);
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
	/* mov	bp,ax */
	bp = ax;
	/* jmp	ContAlarmPitch */
	goto contalarmpitch;
	// 0 ;* pitch = 90 - arctan(range / abs(delta z))
alarmaimpitch2:
	// 4709 
	/* AlarmAimPitch2:	mov	dx,ax */
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
	/* mov	bp,128*128 */
	bp = 128*128;
	/* sub	bp,ax */
	SUB(bp, ax);
contalarmpitch:
	// 4711 
	/* ContAlarmPitch:	pop	ax		;restore sign(delta z) */
	POP(ax);
	/* cwd */
	CWD;
	/* mov	ax,bp */
	ax = bp;
	/* xor	ax,dx		;restore sign ideal pitch */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* sub	ax,WPN_Weapon.WPN_PFINE */
	SUB(ax, wpn_weapon.wpn_pfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* push	ax		;store abs(pitch error) */
	PUSH(ax);
	/* push	dx		;store sign(pitch error) */
	PUSH(dx);
	// 0 ;---------------
	// 0 ;* calc max rate
	// 0 ;---------------
	// 0 ;* @ 20g, max rate = (1845 * 20 * 8 * 65536 / 360) / vtas [*8]
	// 0 ;*
	// 0 ;*	  max rate = 3340000h / vtas [*8]
	/* mov	dx,00334h */
	dx = 0x00334;
	/* xor	ax,ax */
	XOR(ax, ax);
	// 0 ;* if motor not burning then halve max rate
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	TEST(wpn_weapon.wpn_flags, 0x80);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x80)) {goto dummylabel43;}
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 0 ;* vtas = max(vel, 1000 * 8) (prevent overflow)
dummylabel43:
	// 4713 
	/* @@:		mov	bx,WPN_Weapon.WPN_ALM_VEL */
	bx = *((dw*)((db*)&wpn_weapon+wpn_alm_vel));
	/* cmp	bx,1000*8 */
	CMP(bx, 1000*8);
	/* jae	@F */
	if ((dw)(bx) >= (dw)(1000*8)) {goto dummylabel44;}
	/* mov	bx,1000*8 */
	bx = 1000*8;
	// 0 ;* halve max rate again
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
dummylabel44:
	// 4715 
	/* @@:		div 	bx */
	DIV2(bx);
	// 0 ;* calc max rate wrt time
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
	// 0 ;bp = max rate wrt time
	// 0 ;-----------------
	// 0 ;* sort pitch rate
	// 0 ;-----------------
	/* pop	dx		;restore sign(pitch error) */
	POP(dx);
	/* pop	ax		;restore abs(pitch error) */
	POP(ax);
	// 0 ;* rate = min(abs(pitch error), max rate wrt time)
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel45;}
	/* mov	ax,bp */
	ax = bp;
dummylabel45:
	// 4717 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	WPN_Weapon.WPN_PFINE,ax */
	ADD(wpn_weapon.wpn_pfine, ax);
	// 0 ;---------------
	// 0 ;* sort hdg rate
	// 0 ;---------------
	/* pop	dx		;restore sign(hdg error) */
	POP(dx);
	/* pop	ax		;restore abs(hdg error) */
	POP(ax);
	// 0 ;* rate = min(abs(hdg error), max rate wrt time)
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel46;}
	/* mov	ax,bp */
	ax = bp;
dummylabel46:
	// 4719 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	WPN_Weapon.WPN_HFINE,ax */
	ADD(wpn_weapon.wpn_hfine, ax);
	// 0 ;-----------------------------
	// 0 ;* convert fine pdegs to pdegs
	// 0 ;-----------------------------
	/* mov	cl,7		;/128 */
	cl = 7;
	// 0 ;* hdg = hfine / 128
	/* mov	ax,WPN_Weapon.WPN_HFINE */
	ax = wpn_weapon.wpn_hfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	WPN_View.VP_HDG,ax */
	wpn_view.vp_hdg = ax;
	// 0 ;* pitch = pfine / 128
	/* mov	ax,WPN_Weapon.WPN_PFINE */
	ax = wpn_weapon.wpn_pfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	WPN_View.VP_PITCH,ax */
	wpn_view.vp_pitch = ax;
alarmguideok:
	// 4721 
	/* AlarmGuideOk:	clc			;cf = 0 (ok) */
	CLC;
	/* ret */
	RETN(0);
alarmguideover:
	// 4723 
	/* AlarmGuideOver:	stc			;cf = 1 (overshot target) */
	STC;
	/* ret */
	RETN(0);
alarmguideabove:
	// 5770 
	// 0 ;-------------------------------------------
	// 0 ;* project aiming point for 60 degs pitch up
	// 0 ;-------------------------------------------
	// 0 ;* make working viewpoint
edummylabel18:
	// 4725 
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 5781 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 5782 						mov	di,OFFSET TMP_VIEW */
	// 5783 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* calc sin(hdg), cos(hdg)
	/* mov	bx,TMP_VIEW.VP_HDG */
	bx = tmp_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 5790 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 5791 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	/* mov	cl,7		;/128 */
	cl = 7;
	// 0 ;* delta y = 256 * cos(hdg)
	/* mov	ax,di */
	ax = di;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* delta x = 256 * sin(hdg)
	/* mov	ax,si */
	ax = si;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* mov	cx,ax */
	cx = ax;
	// 0 ;* move viewpoint
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_80_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_80_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_80_mvxy1:
	// 4727 
	/* __m2c_macrolocal_80_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_80_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_80_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_80_mvxy2:
	// 4729 
	/* __m2c_macrolocal_80_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_80_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_80_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_80_mvxy3:
	// 4731 
	/* __m2c_macrolocal_80_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_80_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_80_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_80_mvxy4:
	// 4733 
	/* __m2c_macrolocal_80_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 5842 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 5843 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 5844 dec	TMP_VIEW.VP_XSEC */
queque002e:
	// 4735 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 5845 ??002E:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 5846 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 5847 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 5848 inc	TMP_VIEW.VP_YSEC */
queque0030:
	// 4737 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 5849 ??0030:		mov	TMP_VIEW.VP_YFT,bx */
	// 0 ;* set aiming point
	/* mov	ax,TMP_VIEW.VP_XSEC */
	ax = tmp_view.vp_xsec;
	/* mov	WPN_Weapon.WPN_ALM_XSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xsec)) = ax;
	/* mov	ax,TMP_VIEW.VP_YSEC */
	ax = tmp_view.vp_ysec;
	/* mov	WPN_Weapon.WPN_ALM_YSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_ysec)) = ax;
	/* mov	ax,TMP_VIEW.VP_XFT */
	ax = tmp_view.vp_xft;
	/* mov	WPN_Weapon.WPN_ALM_XFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xft)) = ax;
	/* mov	ax,TMP_VIEW.VP_YFT */
	ax = tmp_view.vp_yft;
	/* mov	WPN_Weapon.WPN_ALM_YFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_yft)) = ax;
	/* mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* mov	dx,WORD PTR TMP_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&tmp_view+vp_zft_hi));
	/* add	ax,443		;256 * tan(60) */
	ADD(ax, 443);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* call	AlarmGuidance */
	CALL(alarmguidance, 0);
	/* ret */
	RETN(0);
alarmguidebelow:
	// 5877 
	/* mov	ax,WPN_View.VP_XSEC ;* kill: assume all (except cf) */
	ax = wpn_view.vp_xsec;
edummylabel19:
	// 4739 
	/* mov	WPN_Weapon.WPN_ALM_XSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xsec)) = ax;
	/* mov	ax,WPN_View.VP_YSEC */
	ax = wpn_view.vp_ysec;
	/* mov	WPN_Weapon.WPN_ALM_YSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_ysec)) = ax;
	/* mov	ax,WPN_View.VP_XFT */
	ax = wpn_view.vp_xft;
	/* mov	WPN_Weapon.WPN_ALM_XFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xft)) = ax;
	/* mov	ax,WPN_View.VP_YFT */
	ax = wpn_view.vp_yft;
	/* mov	WPN_Weapon.WPN_ALM_YFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_yft)) = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* call	AlarmGuidance */
	CALL(alarmguidance, 0);
	/* ret */
	RETN(0);
alarmmovement:
	// 5900 
	// 0 ;----------------------
	// 0 ;* calc h vel and v vel
	// 0 ;----------------------
	// 0 ;* calc sin(pitch) and cos(pitch)
edummylabel20:
	// 4741 
	/* mov	bx,WPN_View.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 5911 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 5912 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* horizontal velocity = vtas * cos(pitch)
	/* mov	ax,WPN_Weapon.WPN_ALM_VEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_vel));
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
	/* mov	di,dx */
	di = dx;
	// 0 ;di = h vel
	// 0 ;* vertical velocity = vtas * sin(pitch)
	/* mov	ax,WPN_Weapon.WPN_ALM_VEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_alm_vel));
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
	/* mov	si,dx */
	si = dx;
	// 0 ;si = v vel
	// 0 ;--------------
	// 0 ;* calc delta z
	// 0 ;--------------
	// 0 ;* delta z = v vel * delta time (result as 16 bit whole, 16 bit fraction)
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,cx */
	ax = cx;
	/* cwd			;dxcx.bx = delta z */
	CWD;
	/* add	WPN_Weapon.WPN_ZFINE,bx */
	ADD(wpn_weapon.wpn_zfine, bx);
	/* adc	WORD PTR WPN_View.VP_ZFT_LO,cx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	__m2c_macrolocal_84_skip */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto __m2c_macrolocal_84_skip;}
	/* jmp	AlarmHitGnd */
	goto alarmhitgnd;
__m2c_macrolocal_84_skip:
	// 4743 
	// 0 ;hit ground ->
	// 0 ;--------------------------------
	// 0 ;* calc delta horizontal velocity (dist moved this frame)
	// 0 ;--------------------------------
	// 0 ;* delta h vel = h vel * delta time
	/* mov	ax,DeltaTime */
	ax = deltatime;
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
	/* mov	bp,dx */
	bp = dx;
	// 0 ;bp = delta h vel
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	// 0 ;* calc sin(hdg) and cos(hdg)
contalarmmove:
	// 4745 
	/* ContAlarmMove:	mov	bx,WPN_View.VP_HDG */
	bx = wpn_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 5983 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 5984 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* x = x + delta h vel * sin(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_XFINE,ax */
	ADD(wpn_weapon.wpn_xfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* y = y + delta h vel * cos(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_YFINE,ax */
	ADD(wpn_weapon.wpn_yfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_87_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_87_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_87_mvxy1:
	// 4747 
	/* __m2c_macrolocal_87_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_87_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_87_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_87_mvxy2:
	// 4749 
	/* __m2c_macrolocal_87_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	dx,WPN_View.VP_YFT	;y + dx */
	ADD(dx, wpn_view.vp_yft);
	/* cmp	dx,8192 		;change sector? */
	CMP(dx, 8192);
	/* jl	__m2c_macrolocal_87_MvXY3			;no -> */
	if ((short)(dx) < (short)(8192)) {goto __m2c_macrolocal_87_mvxy3;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_87_mvxy3:
	// 4751 
	/* __m2c_macrolocal_87_MvXY3:		cmp	dx,-8192		;change sector? */
	CMP(dx, -8192);
	/* jge	__m2c_macrolocal_87_MvXY4			;no -> */
	if ((short)(dx) >= (short)(-8192)) {goto __m2c_macrolocal_87_mvxy4;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_87_mvxy4:
	// 4753 
	/* __m2c_macrolocal_87_MvXY4:		mov	WPN_View.VP_YFT,dx */
	wpn_view.vp_yft = dx;
	// 0 ;----------------------
	// 0 ;* check for hit ground
	// 0 ;----------------------
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* or	ax,WORD PTR WPN_View.VP_ZFT_LO */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* or	ax,WORD PTR WPN_View.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jz	AlarmImpact */
	if (ax == 0) {goto alarmimpact;}
	// 0 ;--------------------
	// 0 ;* check for hit hill
	// 0 ;--------------------
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0		;zft > 65535ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel47;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,4095	;zft > 4095ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 4095);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(4095)) {goto dummylabel47;}
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,ax	;hit hill? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* jbe	AlarmImpact			;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) <= (dw)(ax)) {goto alarmimpact;}
dummylabel47:
	// 4755 
	/* @@:		clc			;cf = 0 (ok) */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
alarmimpact:
	// 4757 
	// 0 ;---------------------------
	/* stc			;cf = 1 (hit ground / hit hill) */
	STC;
	/* ret */
	RETN(0);
	// 0 ;------------------
	// 0 ;* ALARM hit ground (calc impact point)
	// 0 ;------------------
	// 0 ;* restore zft
alarmhitgnd:
	// 4759 
	// 0 ;SHAKE	SHAKE_DAMAGE,HSHAKE_HI,VSHAKE_HI,50  ;Frankie 6th May 2018
	/* sub	WPN_Weapon.WPN_ZFINE,bx */
	SUB(wpn_weapon.wpn_zfine, bx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_LO,cx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_HI,dx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	// 0 ;* frac = zft / abs(delta z)
	// 0 ;*
	// 0 ;* assume delta z < 0
	// 0 ;* assume zft < 65536
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_LO */
	dx = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* shr	dx,1		;/2 for bin frac */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* neg	cx */
	NEG(cx);
	/* div	cx */
	DIV2(cx);
	// 0 ;* delta h vel = h vel * frac * delta time
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
	// 0 ;* zft = 0
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,ax */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,ax */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = ax;
	/* jmp	ContAlarmMove */
	goto contalarmmove;
alarmradarscan:
	// 6118 
	// 0 ;----------------------------------------
	// 0 ;* check if "no radar" already determined
	// 0 ;----------------------------------------
edummylabel21:
	// 4761 
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_NO_RADAR */
	TEST(wpn_weapon.wpn_flags, 0x400);
	/* jz	__m2c_macrolocal_90_skip */
	if (!(wpn_weapon.wpn_flags & 0x400)) {goto __m2c_macrolocal_90_skip;}
	/* jmp	AlarmRadarFail */
	goto alarmradarfail;
__m2c_macrolocal_90_skip:
	// 4763 
	// 0 ;-----------------------------------
	// 0 ;* check if missile is on active map
	// 0 ;-----------------------------------
	/* cmp	WPN_View.VP_XSEC,31 */
	CMP(wpn_view.vp_xsec, 31);
	/* jbe	__m2c_macrolocal_91_skip */
	if ((dw)(wpn_view.vp_xsec) <= (dw)(31)) {goto __m2c_macrolocal_91_skip;}
	/* jmp	NoRadarTargets */
	goto noradartargets;
__m2c_macrolocal_91_skip:
	// 4765 
	/* cmp	WPN_View.VP_YSEC,31 */
	CMP(wpn_view.vp_ysec, 31);
	/* jbe	__m2c_macrolocal_92_skip */
	if ((dw)(wpn_view.vp_ysec) <= (dw)(31)) {goto __m2c_macrolocal_92_skip;}
	/* jmp	NoRadarTargets */
	goto noradartargets;
__m2c_macrolocal_92_skip:
	// 4767 
	// 0 ;--------------------------------------
	// 0 ;* scan 3*3 sectors for aerial activity
	// 0 ;--------------------------------------
	// 0 ;* y sector scan
	/* mov	cx,3		;scan count */
	cx = 3;
	/* mov	di,-1		;scan offset */
	di = -1;
scanyloop1:
	// 4769 
	/* ScanYLoop1:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;* x sector scan
	/* mov	cx,3		;scan count */
	cx = 3;
	/* mov	si,-1		;scan offset */
	si = -1;
scanxloop1:
	// 4771 
	/* ScanXLoop1:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* scan sector (if on active map)
	/* mov	ax,WPN_View.VP_XSEC */
	ax = wpn_view.vp_xsec;
	/* mov	dx,WPN_View.VP_YSEC */
	dx = wpn_view.vp_ysec;
	/* add	ax,si */
	ADD(ax, si);
	/* add	dx,di */
	ADD(dx, di);
	/* cmp	ax,31 */
	CMP(ax, 31);
	/* ja	ScanNextSctr1 */
	if ((dw)(ax) > (dw)(31)) {goto scannextsctr1;}
	/* cmp	dx,31 */
	CMP(dx, 31);
	/* ja	ScanNextSctr1 */
	if ((dw)(dx) > (dw)(31)) {goto scannextsctr1;}
	/* call	LocateMobiles	;any mobiles in sector? */
	CALLF(locatemobiles, 0);
	/* jc	ScanNextSctr1	;no -> */
	if (CF) {goto scannextsctr1;}
scanmobiles:
	// 4773 
	/* ScanMobiles:	cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* je	ScanNextSctr1	;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto scannextsctr1;}
	// 0 ;* check if mobile alt > 100ft (ignore trucks, trains and parked aircraft)
	/* cmp	WORD PTR _VP_ZFT_HI[si],0 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	/* ja	AerialActivity */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))) > (dw)(0)) {goto aerialactivity;}
	/* cmp	WORD PTR _VP_ZFT_LO[si],100 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 100);
	/* ja	AerialActivity */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) > (dw)(100)) {goto aerialactivity;}
	/* mov	si,[si].MOB_LINK_PTR */
	si = m2c::getdata(*((dw*)((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	ScanMobiles */
	goto scanmobiles;
scannextsctr1:
	// 4775 
	/* ScanNextSctr1:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* inc	si		;x = x + 1 */
	INC(si);
	/* loop	ScanXLoop1 */
	LOOP(scanxloop1);
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* inc	di		;y = y + 1 */
	INC(di);
	/* loop	ScanYLoop1 */
	LOOP(scanyloop1);
	/* jmp	AlarmRadarFail */
	goto alarmradarfail;
	// 0 ;---------------------------
aerialactivity:
	// 4777 
	// 0 ;---------------------------
	// 0 ;* restore stack
	/* pop	ax */
	POP(ax);
	/* pop	ax */
	POP(ax);
	/* pop	ax */
	POP(ax);
	/* pop	ax */
	POP(ax);
	/* pop	ax */
	POP(ax);
	// 0 ;----------------------------
	// 0 ;* scan 3*3 sectors for radar
	// 0 ;----------------------------
	// 0 ;* clear radar found flag
	/* mov	RadarFlag,0 */
	radarflag = 0;
	// 0 ;* set max range to zft (therefore ?5?scan pyramid)
	/* mov	ax,WORD PTR WPN_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_HI */
	dx = *((dw*)((db*)&wpn_view+vp_zft_hi));
	/* mov	WORD PTR RadarRange,ax */
	*(dw*)(&radarrange) = ax;
	/* mov	WORD PTR RadarRange+2,dx */
	*(dw*)(((db*)&radarrange)+2) = dx;
	// 0 ;* y sector scan
	/* mov	cx,3		;scan count */
	cx = 3;
	/* mov	di,-1		;scan offset */
	di = -1;
scanyloop2:
	// 4779 
	/* ScanYLoop2:	push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	// 0 ;* x sector scan
	/* mov	cx,3		;scan count */
	cx = 3;
	/* mov	si,-1		;scan offset */
	si = -1;
scanxloop2:
	// 4781 
	/* ScanXLoop2:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	// 0 ;* scan sector (if on active map)
	/* mov	ax,WPN_View.VP_XSEC */
	ax = wpn_view.vp_xsec;
	/* mov	bp,WPN_View.VP_YSEC */
	bp = wpn_view.vp_ysec;
	/* add	ax,si */
	ADD(ax, si);
	/* add	bp,di */
	ADD(bp, di);
	/* cmp	ax,31 */
	CMP(ax, 31);
	/* jbe	__m2c_macrolocal_93_skip */
	if ((dw)(ax) <= (dw)(31)) {goto __m2c_macrolocal_93_skip;}
	/* jmp	ScanNextSctr2 */
	goto scannextsctr2;
__m2c_macrolocal_93_skip:
	// 4783 
	/* cmp	bp,31 */
	CMP(bp, 31);
	/* jbe	__m2c_macrolocal_94_skip */
	if ((dw)(bp) <= (dw)(31)) {goto __m2c_macrolocal_94_skip;}
	/* jmp	ScanNextSctr2 */
	goto scannextsctr2;
__m2c_macrolocal_94_skip:
	// 4785 
	// 0 ;* set xsec, ysec
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	TMP_VIEW.VP_YSEC,bp */
	tmp_view.vp_ysec = bp;
	// 0 ;* map index = ysec * 32 + xsec
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
	// 0 ;--------------------------------------
	// 0 ;* check for SAM or AAA radar in sector
	// 0 ;--------------------------------------
	/* test	SctrGameLayer1[bp],SECT_SAM+SECT_AAA */
	TEST(*((&sctrgamelayer1)+bp), 0x40+0x20);
	/* jnz	__m2c_macrolocal_95_skip */
	if ((*((&sctrgamelayer1)+bp) & 0x40+0x20) != 0) {goto __m2c_macrolocal_95_skip;}
	/* jmp	ContEWRScan */
	goto contewrscan;
__m2c_macrolocal_95_skip:
	// 4787 
	/* mov	al,MobRadarLayer1[bp] */
	al = *((&mobradarlayer1)+bp);
	/* push	bp		;store map index */
	PUSH(bp);
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	bp,ax */
	bp = ax;
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	// 0 ;-----------------
	// 0 ;* check SAM radar
	// 0 ;-----------------
	/* cmp	RadarTable[bp].RAD_SAM_OFFSET,-1 */
	CMP(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_sam_offset)), -1);
	/* je	SkipSAMScan */
	if ((dw)(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_sam_offset))) == (dw)(-1)) {goto skipsamscan;}
	/* push	bp		;store table index */
	PUSH(bp);
	/* mov	bp,RadarTable[bp].RAD_SAM_OFFSET */
	bp = m2c::getdata(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_sam_offset)));
scansamloop:
	// 4789 
	/* ScanSAMLoop:	cmp	RadarLists[bp],-1 	;end of list? */
	CMP(*(dw*)(((db*)&radarlists)+bp), -1);
	/* je	ExitSAMLoop		;yes -> */
	if ((dw)(*(dw*)(((db*)&radarlists)+bp)) == (dw)(-1)) {goto exitsamloop;}
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
	/* jnz	@F		;no -> */
	if ((al & 0x80) != 0) {goto dummylabel48;}
	/* mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	/* mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
	/* push	bp */
	PUSH(bp);
	/* call	CheckRadarTgt */
	CALL(checkradartgt, 0);
	/* pop	bp */
	POP(bp);
dummylabel48:
	// 4791 
	/* @@:		add	bp,2 */
	ADD(bp, 2);
	/* jmp	ScanSAMLoop */
	goto scansamloop;
exitsamloop:
	// 4793 
	/* ExitSAMLoop: 	pop	bp		;restore table index */
	POP(bp);
	// 0 ;-----------------
	// 0 ;* check AAA radar
	// 0 ;-----------------
skipsamscan:
	// 4795 
	/* SkipSAMScan:	cmp	RadarTable[bp].RAD_AAA_OFFSET,-1 */
	CMP(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_aaa_offset)), -1);
	/* je	SkipAAAScan */
	if ((dw)(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_aaa_offset))) == (dw)(-1)) {goto skipaaascan;}
	/* mov	bp,RadarTable[bp].RAD_AAA_OFFSET */
	bp = m2c::getdata(*((dw*)((db*)&((radars*)raddr(ss,m2c::near_offset_external(radartable)+bp))->rad_aaa_offset)));
scanaaaloop:
	// 4797 
	/* ScanAAALoop:	cmp	RadarLists[bp],-1 	;end of list? */
	CMP(*(dw*)(((db*)&radarlists)+bp), -1);
	/* je	SkipAAAScan		;yes -> */
	if ((dw)(*(dw*)(((db*)&radarlists)+bp)) == (dw)(-1)) {goto skipaaascan;}
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
	/* jnz	@F		;no -> */
	if ((al & 0x80) != 0) {goto dummylabel49;}
	/* mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	/* mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
	/* push	bp */
	PUSH(bp);
	/* call	CheckRadarTgt */
	CALL(checkradartgt, 0);
	/* pop	bp */
	POP(bp);
dummylabel49:
	// 4799 
	/* @@:		add	bp,2 */
	ADD(bp, 2);
	/* jmp	ScanAAALoop */
	goto scanaaaloop;
skipaaascan:
	// 4801 
	/* SkipAAAScan:	pop	bp		;restore map index */
	POP(bp);
	// 0 ;-------------------------------
	// 0 ;* check for EWR radar in sector (only one EWR in sector)
	// 0 ;-------------------------------
contewrscan:
	// 4803 
	/* ContEWRScan: 	test	SctrGameLayer1[bp],SECT_EWR */
	TEST(*((&sctrgamelayer1)+bp), 0x10);
	/* jz	ScanNextSctr2 */
	if (!(*((&sctrgamelayer1)+bp) & 0x10)) {goto scannextsctr2;}
	/* mov	ax,TMP_VIEW.VP_XSEC */
	ax = tmp_view.vp_xsec;
	/* mov	dx,TMP_VIEW.VP_YSEC */
	dx = tmp_view.vp_ysec;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* mov	cx,NUM_EWR*2 */
	cx = 8*2;
scanewrloop:
	// 4805 
	/* ScanEWRLoop:	cmp	EWRTable[bx].EWR_TYPE,-1	;in use? */
	CMP(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_type)), -1);
	/* je	@F				;no -> */
	if ((dw)(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_type))) == (dw)(-1)) {goto dummylabel50;}
	/* cmp	al,EWRTable[bx].EWR_XSEC	;xsec match? */
	CMP(al, *((db*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_xsec)));
	/* jne	@F				;no -> */
	if ((db)(al) != (db)(*((db*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_xsec)))) {goto dummylabel50;}
	/* cmp	dl,EWRTable[bx].EWR_YSEC	;ysec match? */
	CMP(dl, *((db*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_ysec)));
	/* je	EWRFound			;yes -> */
	if ((db)(dl) == (db)(*((db*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_ysec)))) {goto ewrfound;}
dummylabel50:
	// 4807 
	/* @@:		add	bx,EWR_REC_SIZE */
	ADD(bx, sizeof(ewr));
	/* loop	ScanEWRLoop */
	LOOP(scanewrloop);
	/* jmp	ScanNextSctr2 */
	goto scannextsctr2;
	// 0 ;----------------------------
	// 0 ;* located EWR, sort wrt type
	// 0 ;----------------------------
ewrfound:
	// 4809 
	/* EWRFound:	mov	si,EWRTable[bx].EWR_PTR */
	si = m2c::getdata(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_ptr)));
	/* cmp	EWRTable[bx].EWR_TYPE,EWR_GROUND */
	CMP(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_type)), 0);
	/* jne	SortMobileEWR */
	if ((dw)(*((dw*)((db*)&((ewr*)raddr(ds,m2c::near_offset_external(ewrtable)+bx))->ewr_type))) != (dw)(0)) {goto sortmobileewr;}
	// 0 ;---------------------------
sortgroundewr:
	// 4811 
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
	// 4813 
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
	// 4815 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* jmp	ScanNextSctr2 */
	goto scannextsctr2;
	// 0 ;---------------------------
ewrok:
	// 4817 
	// 0 ;---------------------------
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	/* mov	TMP_VIEW.VP_YFT,dx */
	tmp_view.vp_yft = dx;
	/* call	CheckRadarTgt */
	CALL(checkradartgt, 0);
	// 0 ;-------------
	// 0 ;* next sector
	// 0 ;-------------
scannextsctr2:
	// 4819 
	/* ScanNextSctr2:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* inc	si		;x = x + 1 */
	INC(si);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_97_skip */
	if (cx == 0) {goto __m2c_macrolocal_97_skip;}
	/* jmp	ScanXLoop2 */
	goto scanxloop2;
__m2c_macrolocal_97_skip:
	// 4821 
	/* pop	di */
	POP(di);
	/* pop	cx */
	POP(cx);
	/* inc	di		;y = y + 1 */
	INC(di);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_98_skip */
	if (cx == 0) {goto __m2c_macrolocal_98_skip;}
	/* jmp	ScanYLoop2 */
	goto scanyloop2;
__m2c_macrolocal_98_skip:
	// 4823 
	/* test	RadarFlag,1	;target found? */
	TEST(radarflag, 1);
	/* jnz	AlarmRadarPass	;yes -> */
	if ((radarflag & 1) != 0) {goto alarmradarpass;}
	// 0 ;---------------------------
noradartargets:
	// 4825 
	// 0 ;---------------------------
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_NO_RADAR */
	OR(wpn_weapon.wpn_flags, 0x400);
	// 0 ;---------------------------
alarmradarfail:
	// 4827 
	// 0 ;---------------------------
	/* clc			;cf = 0 (no radar detected) */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
alarmradarpass:
	// 4829 
	// 0 ;---------------------------
	/* stc			;cf = 1 (radar detected) */
	STC;
	/* ret */
	RETN(0);
checkradartgt:
	// 6458 
	// 0 ;* calc range and bearing of radar from missile
edummylabel22:
	// 4831 
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;* check if radar is nearer than previous best target
	/* cmp	dx,WORD PTR RadarRange+2 */
	CMP(dx, *(dw*)(((db*)&radarrange)+2));
	/* ja	ExitRadarTgt */
	if ((dw)(dx) > (dw)(*(dw*)(((db*)&radarrange)+2))) {goto exitradartgt;}
	/* jb	@F */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&radarrange)+2))) {goto dummylabel51;}
	/* cmp	ax,WORD PTR RadarRange */
	CMP(ax, *(dw*)(&radarrange));
	/* jae	ExitRadarTgt */
	if ((dw)(ax) >= (dw)(*(dw*)(&radarrange))) {goto exitradartgt;}
	// 0 ;* make new target
dummylabel51:
	// 4833 
	/* @@:		mov	WORD PTR RadarRange,ax */
	*(dw*)(&radarrange) = ax;
	/* mov	WORD PTR RadarRange+2,dx */
	*(dw*)(((db*)&radarrange)+2) = dx;
	/* mov	WPN_View.VP_HDG,bx */
	wpn_view.vp_hdg = bx;
	/* mov	WPN_Weapon.WPN_HFINE,bp */
	wpn_weapon.wpn_hfine = bp;
	/* mov	ax,TMP_VIEW.VP_XSEC */
	ax = tmp_view.vp_xsec;
	/* mov	WPN_Weapon.WPN_ALM_XSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xsec)) = ax;
	/* mov	ax,TMP_VIEW.VP_YSEC */
	ax = tmp_view.vp_ysec;
	/* mov	WPN_Weapon.WPN_ALM_YSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_ysec)) = ax;
	/* mov	ax,TMP_VIEW.VP_XFT */
	ax = tmp_view.vp_xft;
	/* mov	WPN_Weapon.WPN_ALM_XFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xft)) = ax;
	/* mov	ax,TMP_VIEW.VP_YFT */
	ax = tmp_view.vp_yft;
	/* mov	WPN_Weapon.WPN_ALM_YFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_yft)) = ax;
	// 0 ;* set radar found flag
	/* mov	RadarFlag,1 */
	radarflag = 1;
exitradartgt:
	// 4835 
	/* ExitRadarTgt:	ret */
	RETN(0);
missileguidance:
	// 6499 
	// 0 ;-----------------
	// 0 ;* update velocity
	// 0 ;-----------------
	// 0 ;* vel = vel + accel * DeltaTime
edummylabel23:
	// 4837 
	/* mov	ax,WPN_Weapon.WPN_MISS_ACCEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_miss_accel));
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
	/* add	dx,WPN_Weapon.WPN_MISS_VEL */
	ADD(dx, *((dw*)((db*)&wpn_weapon+wpn_miss_vel)));
	// 0 ;* ensure within limits
	/* cmp	dx,32767 */
	CMP(dx, 32767);
	/* jbe	@F */
	if ((dw)(dx) <= (dw)(32767)) {goto dummylabel52;}
	/* mov	dx,32767 */
	dx = 32767;
dummylabel52:
	// 4839 
	/* @@:		mov	WPN_Weapon.WPN_MISS_VEL,dx */
	*((dw*)((db*)&wpn_weapon+wpn_miss_vel)) = dx;
	// 0 ;-------------------
	// 0 ;* check target lock
	// 0 ;-------------------
	/* cmp	WPN_Weapon.WPN_MISS_TGT,-1	;target lock? */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_miss_tgt)), -1);
	/* jne	__m2c_macrolocal_100_skip */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_miss_tgt))) != (dw)(-1)) {goto __m2c_macrolocal_100_skip;}
	/* jmp	MoveMissile */
	goto movemissile;
__m2c_macrolocal_100_skip:
	// 4841 
	// 0 ;no ->
	// 0 ;--------------------------
	// 0 ;* check target still valid
	// 0 ;--------------------------
	/* mov	si,WPN_Weapon.WPN_MISS_TGT */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* call	GetDroneAlive */
	CALLF(getdronealive, 0);
	/* jc	__m2c_macrolocal_101_skip */
	if (CF) {goto __m2c_macrolocal_101_skip;}
	/* jmp	MissLoseLock */
	goto missloselock;
__m2c_macrolocal_101_skip:
	// 4843 
	// 0 ;------------------
	// 0 ;* missile guidance
	// 0 ;------------------
	// 0 ;---------------------------------
	// 0 ;* sort lock wrt IR / radar guided
	// 0 ;---------------------------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_IR_SEEK */
	TEST(wpn_weapon.wpn_flags, 0x100);
	/* jz	SortRadarLock */
	if (!(wpn_weapon.wpn_flags & 0x100)) {goto sortradarlock;}
	// 0 ;* check IR lock still valid
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,WPN_Weapon.WPN_MISS_TGT */
	di = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* add	di,MOB_REC_SIZE */
	ADD(di, 6);
	/* call	CheckIRLock */
	CALL(checkirlock, 0);
	/* jc	__m2c_macrolocal_102_skip */
	if (CF) {goto __m2c_macrolocal_102_skip;}
	/* jmp	MissLoseLock */
	goto missloselock;
__m2c_macrolocal_102_skip:
	// 4845 
	// 0 ;* IR guided - check for flare release
	/* mov	si,WPN_Weapon.WPN_MISS_TGT */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* call	GetDroneFlare */
	CALLF(getdroneflare, 0);
	/* jnc	SkipDecoy */
	if (!CF) {goto skipdecoy;}
	// 0 ;* set random missile distract time
	/* mov	ax,100		;fixed distract time if two player */
	ax = 100;
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel53;}
	/* call	RandX		;0.00 .. 2.55 secs */
	CALLF(randx, 0);
	/* shr	ax,1		;0.00 .. 1.27 secs */
	SHR(ax, 1);
	/* add	ax,50		;0.50 .. 1.77 secs */
	ADD(ax, 50);
dummylabel53:
	// 4847 
	/* @@:		mov	WPN_Weapon.WPN_MISS_DECOY,ax */
	*((dw*)((db*)&wpn_weapon+wpn_miss_decoy)) = ax;
	/* jmp	SkipDecoy */
	goto skipdecoy;
	// 0 ;* radar guided - check for chaff release
sortradarlock:
	// 4849 
	/* SortRadarLock:	mov	si,WPN_Weapon.WPN_MISS_TGT */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* call	GetDroneChaff */
	CALLF(getdronechaff, 0);
	/* jnc	SkipDecoy */
	if (!CF) {goto skipdecoy;}
	// 0 ;* set random missile distract time (less than flare as more chaff available)
	/* mov	ax,75		;fixed distract time if two player */
	ax = 75;
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel54;}
	/* call	RandX		;0.00 .. 2.55 secs */
	CALLF(randx, 0);
	/* shr	ax,1		;0.00 .. 1.27 secs */
	SHR(ax, 1);
	/* shr	ax,1		;0.00 .. 0.63 secs */
	SHR(ax, 1);
	/* add	ax,50		;0.50 .. 1.13 secs */
	ADD(ax, 50);
dummylabel54:
	// 4851 
	/* @@:		mov	WPN_Weapon.WPN_MISS_DECOY,ax */
	*((dw*)((db*)&wpn_weapon+wpn_miss_decoy)) = ax;
	// 0 ;-------------------
	// 0 ;* check decoy timer
	// 0 ;-------------------
skipdecoy:
	// 4853 
	/* SkipDecoy:	cmp	WPN_Weapon.WPN_MISS_DECOY,0 */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_miss_decoy)), 0);
	/* je	MissLockOk */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_miss_decoy))) == (dw)(0)) {goto misslockok;}
	/* mov	ax,WPN_Weapon.WPN_MISS_DECOY */
	ax = *((dw*)((db*)&wpn_weapon+wpn_miss_decoy));
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
	/* mov	WPN_Weapon.WPN_MISS_DECOY,ax */
	*((dw*)((db*)&wpn_weapon+wpn_miss_decoy)) = ax;
	/* jz	__m2c_macrolocal_104_skip */
	if (ax == 0) {goto __m2c_macrolocal_104_skip;}
	/* jmp	MoveMissile */
	goto movemissile;
__m2c_macrolocal_104_skip:
	// 4855 
	// 0 ;----------------------
	// 0 ;* calc intercept point
	// 0 ;----------------------
misslockok:
	// 4857 
	/* MissLockOk:	mov	si,OFFSET WPN_View	;si -> object viewpoint */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,WPN_Weapon.WPN_MISS_TGT */
	di = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* add	di,MOB_REC_SIZE		;di -> target viewpoint */
	ADD(di, 6);
	/* call	CalcSlantRange		;dx, ax = target range */
	CALLF(calcslantrange, 0);
	/* mov	si,WPN_Weapon.WPN_MISS_TGT */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* mov	cx,ax */
	cx = ax;
	/* call	GetDroneSpeed */
	CALLF(getdronespeed, 0);
	/* xchg	cx,ax			;cx = target speed */
	XCHG(cx, ax);
	/* add	si,MOB_REC_SIZE		;si -> target viewpoint */
	ADD(si, 6);
	/* mov	bx,WPN_Weapon.WPN_MISS_VEL	;bx = object speed */
	bx = *((dw*)((db*)&wpn_weapon+wpn_miss_vel));
	/* mov	di,OFFSET TGT_VIEW	;di -> result viewpoint */
	di = m2c::near_offset_external(tgt_view);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	// 0 ;--------------------------------------------------
	// 0 ;* calc range (flat) and bearing of intercept point
	// 0 ;--------------------------------------------------
	/* mov	si,OFFSET WPN_View	;si -> object viewpoint */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TGT_VIEW	;di -> intercept viewpoint */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* mov	WORD PTR TmpRange,ax */
	*(dw*)(&tmprange) = ax;
	/* mov	WORD PTR TmpRange+2,dx */
	*(dw*)(((db*)&tmprange)+2) = dx;
	// 0 ;----------------
	// 0 ;* calc hdg error
	// 0 ;----------------
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,WPN_Weapon.WPN_HFINE */
	SUB(ax, wpn_weapon.wpn_hfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* if hdg error > 90 degs then lose lock
	/* cmp	ax,128*128 */
	CMP(ax, 128*128);
	/* jbe	__m2c_macrolocal_106_skip */
	if ((dw)(ax) <= (dw)(128*128)) {goto __m2c_macrolocal_106_skip;}
	/* jmp	MissLoseLock */
	goto missloselock;
__m2c_macrolocal_106_skip:
	// 4859 
	/* push	ax		;abs(hdg error) */
	PUSH(ax);
	/* push	dx		;sign(hdg error) */
	PUSH(dx);
	// 0 ;------------------
	// 0 ;* calc ideal pitch
	// 0 ;------------------
	/* mov	ax,WORD PTR TmpRange */
	ax = *(dw*)(&tmprange);
	/* mov	dx,WORD PTR TmpRange+2 */
	dx = *(dw*)(((db*)&tmprange)+2);
	// 0 ;* calc delta z (z tgt - z obj)
	/* mov	si,WPN_Weapon.WPN_MISS_TGT */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* mov	bx,WORD PTR _VP_ZFT_LO[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)));
	/* mov	cx,WORD PTR _VP_ZFT_HI[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)));
	/* sub	bx,WORD PTR WPN_View.VP_ZFT_LO */
	SUB(bx, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* sbb	cx,WORD PTR WPN_View.VP_ZFT_HI */
	SBB(cx, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* push	cx		;store sign(delta z) */
	PUSH(cx);
	// 0 ;* calc abs(delta z)
	/* jns	@F */
	if ((short)(cx) >= 0) {goto dummylabel55;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* scale range and abs(delta z)
dummylabel55:
	// 4861 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jz	@F */
	if (!(dx & dx)) {goto dummylabel56;}
	/* shr	dx,1		;range / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1		;abs(delta z) / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	@B */
	goto dummylabel55;
dummylabel56:
	// 4863 
	/* @@:		test	cx,cx */
	TEST(cx, cx);
	/* jz	@F */
	if (!(cx & cx)) {goto dummylabel57;}
	/* shr	ax,1		;range / 2 */
	SHR(ax, 1);
	/* shr	cx,1		;abs(delta z) / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	@B */
	goto dummylabel56;
	// 0 ;* select abs(delta z)
	// 0 ;* case = range
	// 0 ;*    pitch = 45
	// 0 ;* case < range
	// 0 ;*    pitch = arctan(abs(delta z) / range)
	// 0 ;* case > range
	// 0 ;*    pitch = 90 - arctan(range / abs(delta z))
	// 0 ;* endselect
dummylabel57:
	// 4865 
	/* @@:		cmp	bx,ax		;select abs(delta z) */
	CMP(bx, ax);
	/* jb	MissAimPitch1	;case < range -> */
	if ((dw)(bx) < (dw)(ax)) {goto missaimpitch1;}
	/* ja	MissAimPitch2	;case > range -> */
	if ((dw)(bx) > (dw)(ax)) {goto missaimpitch2;}
	/* mov	bp,64*128	;case 45 degs */
	bp = 64*128;
	/* jmp	ContMissPitch */
	goto contmisspitch;
	// 0 ;* pitch = arctan(abs(delta z) / range)
missaimpitch1:
	// 4867 
	/* MissAimPitch1:	xchg	ax,bx */
	XCHG(ax, bx);
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
	/* mov	bp,ax */
	bp = ax;
	/* jmp	ContMissPitch */
	goto contmisspitch;
	// 0 ;* pitch = 90 - arctan(range / abs(delta z))
missaimpitch2:
	// 4869 
	/* MissAimPitch2:	mov	dx,ax */
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
	/* mov	bp,128*128 */
	bp = 128*128;
	/* sub	bp,ax */
	SUB(bp, ax);
contmisspitch:
	// 4871 
	/* ContMissPitch:	pop	ax		;restore sign(delta z) */
	POP(ax);
	/* cwd */
	CWD;
	/* mov	ax,bp */
	ax = bp;
	/* xor	ax,dx		;restore sign ideal pitch */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* sub	ax,WPN_Weapon.WPN_PFINE */
	SUB(ax, wpn_weapon.wpn_pfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	/* push	ax		;store abs(pitch error) */
	PUSH(ax);
	/* push	dx		;store sign(pitch error) */
	PUSH(dx);
	// 0 ;---------------
	// 0 ;* calc max rate
	// 0 ;---------------
	// 0 ;* @ 20g, max rate = (1845 * 20 * 8 * 65536 / 360) / vtas [*8]
	// 0 ;*
	// 0 ;*	  max rate = 3340000h / vtas [*8]
	/* mov	dx,00334h */
	dx = 0x00334;
	/* xor	ax,ax */
	XOR(ax, ax);
	// 0 ;* if motor not burning then halve max rate
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_BURNOUT */
	TEST(wpn_weapon.wpn_flags, 0x80);
	/* jnz	@F */
	if ((wpn_weapon.wpn_flags & 0x80) != 0) {goto dummylabel58;}
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 0 ;* vtas = max(vel, 1000 * 8) (prevent overflow)
dummylabel58:
	// 4873 
	/* @@:		mov	bx,WPN_Weapon.WPN_MISS_VEL */
	bx = *((dw*)((db*)&wpn_weapon+wpn_miss_vel));
	/* cmp	bx,1000*8 */
	CMP(bx, 1000*8);
	/* jae	@F */
	if ((dw)(bx) >= (dw)(1000*8)) {goto dummylabel59;}
	/* mov	bx,1000*8 */
	bx = 1000*8;
dummylabel59:
	// 4875 
	/* @@:		div 	bx */
	DIV2(bx);
	// 0 ;* calc max rate wrt time
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
	// 0 ;bp = max rate wrt time
	// 0 ;-----------------
	// 0 ;* sort pitch rate
	// 0 ;-----------------
	/* pop	dx		;restore sign(pitch error) */
	POP(dx);
	/* pop	ax		;restore abs(pitch error) */
	POP(ax);
	// 0 ;* rate = min(abs(pitch error), max rate wrt time)
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel60;}
	/* mov	ax,bp */
	ax = bp;
dummylabel60:
	// 4877 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	WPN_Weapon.WPN_PFINE,ax */
	ADD(wpn_weapon.wpn_pfine, ax);
	// 0 ;---------------
	// 0 ;* sort hdg rate
	// 0 ;---------------
	/* pop	dx		;restore sign(hdg error) */
	POP(dx);
	/* pop	ax		;restore abs(hdg error) */
	POP(ax);
	// 0 ;* rate = min(abs(hdg error), max rate wrt time)
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel61;}
	/* mov	ax,bp */
	ax = bp;
dummylabel61:
	// 4879 
	/* @@:		xor	ax,dx		;restore sign */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	WPN_Weapon.WPN_HFINE,ax */
	ADD(wpn_weapon.wpn_hfine, ax);
	// 0 ;-----------------------------
	// 0 ;* convert fine pdegs to pdegs
	// 0 ;-----------------------------
	/* mov	cl,7		;/128 */
	cl = 7;
	// 0 ;* hdg = hfine / 128
	/* mov	ax,WPN_Weapon.WPN_HFINE */
	ax = wpn_weapon.wpn_hfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	WPN_View.VP_HDG,ax */
	wpn_view.vp_hdg = ax;
	// 0 ;* pitch = pfine / 128
	/* mov	ax,WPN_Weapon.WPN_PFINE */
	ax = wpn_weapon.wpn_pfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	WPN_View.VP_PITCH,ax */
	wpn_view.vp_pitch = ax;
	/* jmp	MoveMissile */
	goto movemissile;
	// 0 ;---------------------------
missloselock:
	// 4881 
	// 0 ;---------------------------
	/* mov	WPN_Weapon.WPN_MISS_TGT,-1 */
	*((dw*)((db*)&wpn_weapon+wpn_miss_tgt)) = -1;
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_TLOCK */
	AND(wpn_weapon.wpn_flags, ~0x800);
	// 0 ;---------------------------
movemissile:
	// 4883 
	// 0 ;---------------------------
	// 0 ;----------------------
	// 0 ;* calc h vel and v vel
	// 0 ;----------------------
	// 0 ;* calc sin(pitch) and cos(pitch)
	/* mov	bx,WPN_View.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6859 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6860 mov	di,CosTable[bx] */
	// 0 ;* horizontal velocity = vtas * cos(pitch)
	/* mov	ax,WPN_Weapon.WPN_MISS_VEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_miss_vel));
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
	/* mov	di,dx */
	di = dx;
	// 0 ;di = h vel
	// 0 ;* vertical velocity = vtas * sin(pitch)
	/* mov	ax,WPN_Weapon.WPN_MISS_VEL */
	ax = *((dw*)((db*)&wpn_weapon+wpn_miss_vel));
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
	/* mov	si,dx */
	si = dx;
	// 0 ;si = v vel
	// 0 ;--------------
	// 0 ;* calc delta z
	// 0 ;--------------
	// 0 ;* delta z = v vel * delta time (result as 16 bit whole, 16 bit fraction)
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,cx */
	ax = cx;
	/* cwd			;dxcx.bx = delta z */
	CWD;
	/* add	WPN_Weapon.WPN_ZFINE,bx */
	ADD(wpn_weapon.wpn_zfine, bx);
	/* adc	WORD PTR WPN_View.VP_ZFT_LO,cx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	__m2c_macrolocal_115_skip */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto __m2c_macrolocal_115_skip;}
	/* jmp	MissileHitGnd */
	goto missilehitgnd;
__m2c_macrolocal_115_skip:
	// 4885 
	// 0 ;hit ground ->
	// 0 ;--------------------------------
	// 0 ;* calc delta horizontal velocity (dist moved this frame)
	// 0 ;--------------------------------
	// 0 ;* delta h vel = h vel * delta time
	/* mov	ax,DeltaTime */
	ax = deltatime;
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
	/* mov	bp,dx */
	bp = dx;
	// 0 ;bp = delta h vel
	// 0 ;-------------
	// 0 ;* move weapon
	// 0 ;-------------
	// 0 ;* calc sin(hdg) and cos(hdg)
contmissmove:
	// 4887 
	/* ContMissMove:	mov	bx,WPN_View.VP_HDG */
	bx = wpn_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6929 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6930 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* x = x + delta h vel * sin(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_XFINE,ax */
	ADD(wpn_weapon.wpn_xfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* y = y + delta h vel * cos(hdg)
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* add	WPN_Weapon.WPN_YFINE,ax */
	ADD(wpn_weapon.wpn_yfine, ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_118_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_118_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_118_mvxy1:
	// 4889 
	/* __m2c_macrolocal_118_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_118_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_118_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_118_mvxy2:
	// 4891 
	/* __m2c_macrolocal_118_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	dx,WPN_View.VP_YFT	;y + dx */
	ADD(dx, wpn_view.vp_yft);
	/* cmp	dx,8192 		;change sector? */
	CMP(dx, 8192);
	/* jl	__m2c_macrolocal_118_MvXY3			;no -> */
	if ((short)(dx) < (short)(8192)) {goto __m2c_macrolocal_118_mvxy3;}
	/* sub	dx,16384 */
	SUB(dx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_118_mvxy3:
	// 4893 
	/* __m2c_macrolocal_118_MvXY3:		cmp	dx,-8192		;change sector? */
	CMP(dx, -8192);
	/* jge	__m2c_macrolocal_118_MvXY4			;no -> */
	if ((short)(dx) >= (short)(-8192)) {goto __m2c_macrolocal_118_mvxy4;}
	/* add	dx,16384 */
	ADD(dx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_118_mvxy4:
	// 4895 
	/* __m2c_macrolocal_118_MvXY4:		mov	WPN_View.VP_YFT,dx */
	wpn_view.vp_yft = dx;
	// 0 ;----------------------
	// 0 ;* check for hit ground
	// 0 ;----------------------
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* or	ax,WORD PTR WPN_View.VP_ZFT_LO */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* or	ax,WORD PTR WPN_View.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jnz	__m2c_macrolocal_119_skip */
	if (ax != 0) {goto __m2c_macrolocal_119_skip;}
	/* jmp	MissileImpact */
	goto missileimpact;
__m2c_macrolocal_119_skip:
	// 4897 
	// 0 ;--------------------
	// 0 ;* check for hit hill
	// 0 ;--------------------
	/* cmp	WORD PTR WPN_View.VP_ZFT_HI,0		;zft > 65535ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel62;}
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,4095	;zft > 4095ft? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), 4095);
	/* ja	@F					;yes -> */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(4095)) {goto dummylabel62;}
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR WPN_View.VP_ZFT_LO,ax	;hit hill? */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* ja	__m2c_macrolocal_120_skip */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(ax)) {goto __m2c_macrolocal_120_skip;}
	/* jmp	MissileImpact */
	goto missileimpact;
__m2c_macrolocal_120_skip:
	// 4899 
	// 0 ;yes ->
	// 0 ;---------------------
	// 0 ;* check if hit target
	// 0 ;---------------------
	// 0 ;* if target lock valid and weapon not distracted then
	// 0 ;*    if flat range to intercept point < missile vel then (< 4 secs to impact)
	// 0 ;*       if abs(intercept zft - missile zft) < missile vel then (< 4 secs to impact)
	// 0 ;*          calc range and bearing of intercept point
	// 0 ;*          if heading error > 90 degs then (gone through intercept point)
	// 0 ;*             calc slant range of target from intercept point
	// 0 ;*             if range within lethal range then
	// 0 ;*                hit target
	// 0 ;*             endif
	// 0 ;*          endif
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
	// 0 ;* check target lock valid
dummylabel62:
	// 4901 
	/* @@:		cmp	WPN_Weapon.WPN_MISS_TGT,-1 */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_miss_tgt)), -1);
	/* jne	__m2c_macrolocal_121_skip */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_miss_tgt))) != (dw)(-1)) {goto __m2c_macrolocal_121_skip;}
	/* jmp	MissileOk */
	goto missileok;
__m2c_macrolocal_121_skip:
	// 4903 
	// 0 ;* check weapon not distracted (else TmpRange not valid)
	/* cmp	WPN_Weapon.WPN_MISS_DECOY,0 */
	CMP(*((dw*)((db*)&wpn_weapon+wpn_miss_decoy)), 0);
	/* jbe	__m2c_macrolocal_122_skip */
	if ((dw)(*((dw*)((db*)&wpn_weapon+wpn_miss_decoy))) <= (dw)(0)) {goto __m2c_macrolocal_122_skip;}
	/* jmp	MissileOk */
	goto missileok;
__m2c_macrolocal_122_skip:
	// 4905 
	// 0 ;* check intercept point range < 65536ft
	/* cmp	WORD PTR TmpRange+2,0 */
	CMP(*(dw*)(((db*)&tmprange)+2), 0);
	/* ja	MissileOk */
	if ((dw)(*(dw*)(((db*)&tmprange)+2)) > (dw)(0)) {goto missileok;}
	// 0 ; WEAPONS.ASM(4705): warning A6003: conditional jump lengthened : by 3 byte(s)
	// 0 ;* calc dist travelled in 4 seconds
	/* mov	bp,WPN_Weapon.WPN_MISS_VEL */
	bp = *((dw*)((db*)&wpn_weapon+wpn_miss_vel));
	/* shr	bp,1 */
	SHR(bp, 1);
	// 0 ;* check range <= 4 seconds to impact point
	/* cmp	WORD PTR TmpRange,bp */
	CMP(*(dw*)(&tmprange), bp);
	/* ja	MissileOk */
	if ((dw)(*(dw*)(&tmprange)) > (dw)(bp)) {goto missileok;}
	// 0 ;* calc abs(zdiff) = abs(intercept zft - missile zft)
	/* mov	ax,WORD PTR TGT_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tgt_view+vp_zft_lo));
	/* mov	dx,WORD PTR TGT_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&tgt_view+vp_zft_hi));
	/* sub	ax,WORD PTR WPN_View.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&wpn_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR WPN_View.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel63;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* check abs(zdiff) <= 4 seconds to impact point
dummylabel63:
	// 4907 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jnz	MissileOk */
	if ((dx & dx) != 0) {goto missileok;}
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	MissileOk */
	if ((dw)(ax) > (dw)(bp)) {goto missileok;}
	// 0 ;* inform target that missile is locked and close
	/* call	MorseDashSound */
	CALLF(morsedashsound, 0);
	/* call	SetDroneWpnLock */
	CALLF(setdronewpnlock, 0);
	// 0 ;* calc range (flat) and bearing of intercept point
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;* calc abs(hdg error)
	/* mov	ax,bp */
	ax = bp;
	/* sub	ax,WPN_Weapon.WPN_HFINE */
	SUB(ax, wpn_weapon.wpn_hfine);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* if abs(hdg error) > 90 degs then gone through intercept point
	/* cmp	ax,128*128 */
	CMP(ax, 128*128);
	/* jbe	MissileOk */
	if ((dw)(ax) <= (dw)(128*128)) {goto missileok;}
	// 0 ;* calc slant range of target from intercept point
	/* mov	si,OFFSET TGT_VIEW */
	si = m2c::near_offset_external(tgt_view);
	/* mov	di,WPN_Weapon.WPN_MISS_TGT */
	di = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* add	di,MOB_REC_SIZE */
	ADD(di, 6);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	// 0 ;* check if within lethal range
	/* test	dx,dx */
	TEST(dx, dx);
	/* jnz	MissileOk */
	if ((dx & dx) != 0) {goto missileok;}
	/* cmp	ax,100 */
	CMP(ax, 100);
	/* ja	MissileOk */
	if ((dw)(ax) > (dw)(100)) {goto missileok;}
	// 0 ;------------
	// 0 ;* hit target
	// 0 ;------------
	/* mov	si,WPN_Weapon.WPN_MISS_TGT */
	si = *((dw*)((db*)&wpn_weapon+wpn_miss_tgt));
	/* mov	di,OFFSET TGT_VIEW	;explosion at intercept point */
	di = m2c::near_offset_external(tgt_view);
	/* call	WpnHitTarget */
	CALL(wpnhittarget, 0);
	// 0 ;* lose lock (else explosion shows up on Tornado RWR)
	/* mov	WPN_Weapon.WPN_MISS_TGT,-1 */
	*((dw*)((db*)&wpn_weapon+wpn_miss_tgt)) = -1;
	/* and	WPN_Weapon.WPN_FLAGS,NOT WFLG_TLOCK */
	AND(wpn_weapon.wpn_flags, ~0x800);
	// 0 ;---------------------------
missileok:
	// 4909 
	// 0 ;---------------------------
	/* clc			;cf = 0 (ok) */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
missileimpact:
	// 4911 
	// 0 ;---------------------------
	/* stc			;cf = 1 (hit ground / hit hill) */
	STC;
	/* ret */
	RETN(0);
	// 0 ;--------------------
	// 0 ;* missile hit ground (calc impact point)
	// 0 ;--------------------
	// 0 ;* restore zft
missilehitgnd:
	// 4913 
	/* MissileHitGnd: 	sub	WPN_Weapon.WPN_ZFINE,bx */
	SUB(wpn_weapon.wpn_zfine, bx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_LO,cx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_lo)), cx);
	/* sbb	WORD PTR WPN_View.VP_ZFT_HI,dx */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	// 0 ;* frac = zft / abs(delta z)
	// 0 ;*
	// 0 ;* assume delta z < 0
	// 0 ;* assume zft < 65536
	/* mov	dx,WORD PTR WPN_View.VP_ZFT_LO */
	dx = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* mov	ax,WPN_Weapon.WPN_ZFINE */
	ax = wpn_weapon.wpn_zfine;
	/* shr	dx,1		;/2 for bin frac */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* neg	cx */
	NEG(cx);
	/* div	cx */
	DIV2(cx);
	// 0 ;* delta h vel = h vel * frac * delta time
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
	// 0 ;* zft = 0
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,ax */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,ax */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = ax;
	/* jmp	ContMissMove */
	goto contmissmove;
createbomblet:
	// 7177 
	/* call	FindAvailWeapon ;*       bomblets. */
	CALL(findavailweapon, 0);
edummylabel24:
	// 4915 
	/* jc	ExitBomblet	;no weapon available -> */
	if (CF) {goto exitbomblet;}
	// 0 ;--------------------------------------
	// 0 ;* copy datum BL755 data from workspace
	// 0 ;--------------------------------------
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* push	si */
	PUSH(si);
	/* mov	di,si */
	di = si;
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 7191 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 7193 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 7194 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 7195 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	si */
	POP(si);
	// 0 ;-------------------
	// 0 ;* modify parameters
	// 0 ;-------------------
	// 0 ;* note: It is safe to call RandX with ES pointing away from DATA segment.
	/* mov	ES:MOB_NUM[si],MOB_BOMBLET */
	m2c::setdata(&(((mobile*)raddr(es,si))->mob_num), m2c::getdata(40));
	/* mov	ES:MOB_ANIM[si],0 */
	m2c::setdata(&(((mobile*)raddr(es,si))->mob_anim), m2c::getdata(0));
	/* or	ES:_WPN_FLAGS[si],WFLG_BOMBLET */
	OR(*(dw*)&((weapon*)raddr(es,(6+18)+si))->wpn_flags, 0x40);
	// 0 ;* modify hdg (-3 .. +3 pdegs)
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* and	al,003h */
	AND(al, 0x003);
	/* xor	al,ah */
	XOR(al, ah);
	/* sub	al,ah */
	SUB(al, ah);
	/* cbw */
	CBW;
	/* add	ES:_VP_HDG[si],ax */
	ADD(*(dw*)(((db*)&((viewpoint*)raddr(es,(6)+si))->vp_hdg)), ax);
	/* and	ES:_VP_HDG[si],511 */
	AND(*(dw*)&((viewpoint*)raddr(es,(6)+si))->vp_hdg, 511);
	// 0 ;* modify vertical velocity (-16 .. +16 ft/sec)
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* and	al,07fh */
	AND(al, 0x07f);
	/* xor	al,ah */
	XOR(al, ah);
	/* sub	al,ah */
	SUB(al, ah);
	/* cbw */
	CBW;
	/* add	ES:_WPN_BOMB_VVEL[si],ax */
	ADD(*(dw*)(((db*)&((weapon*)raddr(es,(6+18)+si))->wpn_userw2)), ax);
	// 0 ;* modify horizontal velocity (0 .. +128 ft/sec)
	/* call	RandX */
	CALLF(randx, 0);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	ES:_WPN_BOMB_HVEL[si],ax */
	ADD(*(dw*)(((db*)&((weapon*)raddr(es,(6+18)+si))->wpn_userw1)), ax);
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (weapon created) */
	CLC;
exitbomblet:
	// 4917 
	/* ExitBomblet:	ret */
	RETN(0);
grounddamage:
	// 7244 
	// 0 ;----------------------
	// 0 ;* make explosion sound (if in audible range)
	// 0 ;----------------------
	// 0 ;* calc slant range from Tornado to explosion
	// 0 ;*
	// 0 ;* if cannon then
	// 0 ;*    if range <= 5280 then
	// 0 ;*       make explosion sound 3
	// 0 ;*    endif
	// 0 ;* else
	// 0 ;*    inner range = 16383 (approx 3 miles)
	// 0 ;*    outer range = 32767 (approx 6 miles)
	// 0 ;*    select range
	// 0 ;*    case <= inner range
	// 0 ;*       if in cockpit then
	// 0 ;*          make explosion sound 2
	// 0 ;*       else
	// 0 ;*          make explosion sound 1
	// 0 ;*       endif
	// 0 ;*    case <= outer range
	// 0 ;*       if not in cockpit then
	// 0 ;*          make explosion sound 2
	// 0 ;*       endif
	// 0 ;*    endselect
	// 0 ;* endif
edummylabel25:
	// 4919 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* test	dx,dx		;range > 65535? */
	TEST(dx, dx);
	/* jnz	ExploSoundOk	;yes -> */
	if ((dx & dx) != 0) {goto explosoundok;}
	/* cmp	WPN_Weapon.WPN_TYPE,CANNON */
	CMP(wpn_weapon.wpn_type, 12);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(12)) {goto dummylabel64;}
	/* cmp	ax,5280		;within range? */
	CMP(ax, 5280);
	/* ja	ExploSoundOk	;no -> */
	if ((dw)(ax) > (dw)(5280)) {goto explosoundok;}
	/* call	ExploSound3 */
	CALLF(explosound3, 0);
	/* jmp	ExploSoundOk */
	goto explosoundok;
dummylabel64:
	// 4921 
	/* @@:		mov	bx,16383	;inner range */
	bx = 16383;
	/* mov	cx,32767	;outer range */
	cx = 32767;
	/* cmp	ax,cx		;within outer range? */
	CMP(ax, cx);
	/* ja	ExploSoundOk	;no -> */
	if ((dw)(ax) > (dw)(cx)) {goto explosoundok;}
	/* cmp	ax,bx		;within inner range? */
	CMP(ax, bx);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(bx)) {goto dummylabel65;}
	/* test	InCockpit,1	;in cockpit? */
	TEST(incockpit, 1);
	/* jnz	ExploSoundOk	;yes -> */
	if ((incockpit & 1) != 0) {goto explosoundok;}
	/* call	ExploSound2 */
	CALLF(explosound2, 0);
	/* jmp	ExploSoundOk */
	goto explosoundok;
dummylabel65:
	// 4923 
	/* @@:		test	InCockpit,1	;in cockpit? */
	TEST(incockpit, 1);
	/* jz	@F		;no -> */
	if (!(incockpit & 1)) {goto dummylabel66;}
	/* call	ExploSound2 */
	CALLF(explosound2, 0);
	/* jmp	ExploSoundOk */
	goto explosoundok;
dummylabel66:
	// 4925 
	/* @@:		call	ExploSound1 */
	CALLF(explosound1, 0);
explosoundok:
	// 4927 
	// 0 ;---------------------
	// 0 ;* hit ground or hill?
	// 0 ;---------------------
	// 0 ;* if hit hill (zft > 0) then make crater only
	/* mov	ax,WORD PTR WPN_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&wpn_view+vp_zft_lo));
	/* or	ax,WORD PTR WPN_View.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&wpn_view+vp_zft_hi)));
	/* jnz	ContCrater */
	if (ax != 0) {goto contcrater;}
	// 0 ;-------------------
	// 0 ;* weapon hit ground
	// 0 ;-------------------
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	SurfaceCheck */
	CALLF(surfacecheck, 0);
	/* mov	ImpactSurface,ax */
	impactsurface = ax;
	// 0 ;* if Tornado weapon then store impact point
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel67;}
	/* call	StoreImpact */
	CALL(storeimpact, 0);
dummylabel67:
	// 4929 
	/* @@:		call	ProximityKill */
	CALL(proximitykill, 0);
	// 0 ;-------------------------
	// 0 ;* splash if land in water
	// 0 ;-------------------------
	/* mov	dx,ImpactSurface */
	dx = impactsurface;
	/* cmp	dx,SURFACE_RIVER */
	CMP(dx, 12);
	/* je	WeaponSplash */
	if ((dw)(dx) == (dw)(12)) {goto weaponsplash;}
	/* cmp	dx,SURFACE_LAKE */
	CMP(dx, 14);
	/* je	WeaponSplash */
	if ((dw)(dx) == (dw)(14)) {goto weaponsplash;}
	// 0 ;---------------
	// 0 ;* make a crater (wrt weapon)
	// 0 ;---------------
	// 0 ;* make heave if JP233 lands on hard surface
	/* cmp	WPN_Weapon.WPN_TYPE,JP233 */
	CMP(wpn_weapon.wpn_type, 8);
	/* jne	ContCrater */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(8)) {goto contcrater;}
	/* mov	al,CRATER_HEAVE */
	al = 3;
	/* cmp	dx,SURFACE_RUNWAY */
	CMP(dx, 2);
	/* je	ContHeave */
	if ((dw)(dx) == (dw)(2)) {goto contheave;}
	/* cmp	dx,SURFACE_TAXIWAY */
	CMP(dx, 4);
	/* je	ContHeave */
	if ((dw)(dx) == (dw)(4)) {goto contheave;}
	/* cmp	dx,SURFACE_HARD */
	CMP(dx, 6);
	/* je	ContHeave */
	if ((dw)(dx) == (dw)(6)) {goto contheave;}
	/* cmp	dx,SURFACE_ROAD */
	CMP(dx, 8);
	/* je	ContHeave */
	if ((dw)(dx) == (dw)(8)) {goto contheave;}
contcrater:
	// 4931 
	/* ContCrater:	mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* shr	bx,1 */
	SHR(bx, 1);
	/* mov	al,CraterSize[bx] */
	al = *((&cratersize)+bx);
contheave:
	// 4933 
	/* ContHeave:	mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	MakeCrater */
	CALLF(makecrater, 0);
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* mov	bx,CraterSmoke[bx] */
	bx = *(dw*)(((db*)&cratersmoke)+bx);
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	// 0 ;--------------------
	// 0 ;* sort runway damage
	// 0 ;--------------------
	/* cmp	ImpactSurface,SURFACE_RUNWAY */
	CMP(impactsurface, 2);
	/* jne	@F */
	if ((dw)(impactsurface) != (dw)(2)) {goto dummylabel68;}
	/* call	RecordRwyDamage */
	CALL(recordrwydamage, 0);
	// 0 ;-------------------------
	// 0 ;* weapon no longer in use
	// 0 ;-------------------------
dummylabel68:
	// 4935 
	/* @@:		mov	WPN_Weapon.WPN_TYPE,NULL_WEAPON */
	wpn_weapon.wpn_type = -1;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
weaponsplash:
	// 4937 
	// 0 ;---------------------------
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_SPLASH */
	OR(wpn_weapon.wpn_flags, 0x10);
	/* mov	WPN_Mobile.MOB_NUM,MOB_SPLASH */
	wpn_mobile.mob_num = 45;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE1 */
	wpn_mobile.mob_type = 2;
	/* mov	WPN_Mobile.MOB_ANIM,SPLASH1 */
	wpn_mobile.mob_anim = 0x1;
	/* ret */
	RETN(0);
recordrwydamage:
	// 7387 
	/* mov	ax,WPN_View.VP_XSEC ;* kill: assume all */
	ax = wpn_view.vp_xsec;
edummylabel26:
	// 4939 
	/* mov	dx,WPN_View.VP_YSEC */
	dx = wpn_view.vp_ysec;
	/* mov	bx,OFFSET RunwayDamage */
	bx = m2c::near_offset_external(runwaydamage);
	/* mov	cx,NUM_RUNWAYS */
	cx = 8;
rwyloop:
	// 4941 
	/* RwyLoop:	cmp	[bx].RDAM_XSEC,-1	;record in use? */
	CMP(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_xsec)), -1);
	/* je	NewRwy			;no -> */
	if ((dw)(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_xsec))) == (dw)(-1)) {goto newrwy;}
	/* cmp	[bx].RDAM_XSEC,ax	;xsec match? */
	CMP(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_xsec)), ax);
	/* jne	NextRwy			;no -> */
	if ((dw)(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_xsec))) != (dw)(ax)) {goto nextrwy;}
	/* cmp	[bx].RDAM_YSEC,dx	;ysec match? */
	CMP(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_ysec)), dx);
	/* jne	NextRwy			;no -> */
	if ((dw)(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_ysec))) != (dw)(dx)) {goto nextrwy;}
	/* jmp	SameRwy */
	goto samerwy;
newrwy:
	// 4943 
	/* NewRwy:		mov	[bx].RDAM_XSEC,ax */
	m2c::setdata(&(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_xsec))), m2c::getdata(ax));
	/* mov	[bx].RDAM_YSEC,dx */
	m2c::setdata(&(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_ysec))), m2c::getdata(dx));
samerwy:
	// 4945 
	/* SameRwy:	inc	[bx].RDAM_HITS */
	INC(*((dw*)((db*)&((runway_damage*)raddr(ds,bx))->rdam_hits)));
	/* jmp	ExitRwyDamage */
	goto exitrwydamage;
nextrwy:
	// 4947 
	/* NextRwy:	add	bx,RDAM_REC_SIZE */
	ADD(bx, 6);
	/* loop	RwyLoop */
	LOOP(rwyloop);
exitrwydamage:
	// 4949 
	/* ExitRwyDamage:	ret */
	RETN(0);
wpnhittarget:
	// 7421 
	// 0 ;-------------------------
	// 0 ;* check for self destruct (no target to kill)
	// 0 ;-------------------------
edummylabel27:
	// 4951 
	/* cmp	si,-1 */
	CMP(si, -1);
	/* je	@F */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel69;}
	// 0 ;-------------
	// 0 ;* kill target
	// 0 ;-------------
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	WpnKillDrone */
	CALLF(wpnkilldrone, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	// 0 ;-----------------------------------------------------
	// 0 ;* if Tornado is target then just make explosion sound
	// 0 ;-----------------------------------------------------
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* je	WpnHitSound */
	if ((dw)(si) == (dw)(m2c::near_offset_external(m_mobile))) {goto wpnhitsound;}
	// 0 ;---------------------------------
	// 0 ;* calc Tornado range to explosion (sound effect, destroyed, damaged)
	// 0 ;---------------------------------
dummylabel69:
	// 4953 
	/* @@:		mov	si,OFFSET M_VIEW            ;save this line! Try to change M_VIEW to REM_VIEW and to SPEC_VIEW */
	si = m2c::near_offset_external(m_view);
	/* push	di */
	PUSH(di);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* pop	di */
	POP(di);
	/* test	dx,dx		;range < 65536ft? */
	TEST(dx, dx);
	/* jnz	WpnHitSmoke	;no -> */
	if ((dx & dx) != 0) {goto wpnhitsmoke;}
	/* cmp	ax,250		;within damage radius? */
	CMP(ax, 250);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(250)) {goto dummylabel70;}
	/* cmp	ShakePriority,SHAKE_DAMAGE	;;higher SHAKE_DAMAGE shake in progress? */
	CMP(shakepriority, 75);
	/* ja	__m2c_macrolocal_128_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(75)) {goto __m2c_macrolocal_128_skip;}
	/* mov	ShakePriority,SHAKE_DAMAGE */
	shakepriority = 75;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
__m2c_macrolocal_128_skip:
	// 4955 
	// 0 ;ori
/* m2c-phantom removed: 	R(CMP(shakepriority, 75));	// 7464 cmp	ShakePriority,SHAKE_DAMAGE	 */
/* m2c-phantom removed: 	R(shakepriority = 75;);	// 7465 mov	ShakePriority,SHAKE_DAMAGE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 7466 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 7467 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 7468 mov	ShakeTimer,50 */
	/* test	NoCollisions,1	;no collisions enabled? */
	TEST(nocollisions, 1);
	/* jnz	@F		;yes -> */
	if ((nocollisions & 1) != 0) {goto dummylabel70;}
	/* push	ax */
	PUSH(ax);
	/* push	di */
	PUSH(di);
	/* call	MaxDamage */
	CALLF(maxdamage, 0);
	/* pop	di */
	POP(di);
	/* pop	ax */
	POP(ax);
	/* cmp	ax,100		;within lethal radius? */
	CMP(ax, 100);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(100)) {goto dummylabel70;}
	/* push	ax */
	PUSH(ax);
	/* push	di */
	PUSH(di);
	/* mov	al,DIE_AIR_EXPLO */
	al = 20;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	// 0 ;perhaps this code is key
/* m2c-phantom removed: 	J(CALLF(destroytornado,0));	// 7484 call	DestroyTornado */
	/* pop	di */
	POP(di);
	/* pop	ax */
	POP(ax);
dummylabel70:
	// 4957 
	/* @@:		cmp	ax,32767	;within audible range (approx 6 miles)? */
	CMP(ax, 32767);
	/* ja	WpnHitSmoke	;no -> */
	if ((dw)(ax) > (dw)(32767)) {goto wpnhitsmoke;}
	// 0 ;-------------------
	// 0 ;* make sound effect
	// 0 ;-------------------
wpnhitsound:
	// 4959 
	/* WpnHitSound:	push	di */
	PUSH(di);
	/* cmp	ShakePriority,SHAKE_DAMAGE	;;higher SHAKE_DAMAGE shake in progress? */
	CMP(shakepriority, 75);
	/* ja	__m2c_macrolocal_130_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(75)) {goto __m2c_macrolocal_130_skip;}
/* m2c-phantom removed: 	R(shakepriority = 75;);	// 7496 												mov	ShakePriority,SHAKE_DAMAGE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 7497 						mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 7498 						mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 7499 						mov	ShakeTimer,50 */
__m2c_macrolocal_130_skip:
	// 4961 
	// 0 ;added in for extra measure - frankie kam hack (31/12/17)
/* m2c-phantom removed: 	R(CMP(shakepriority, 75));	// 7502 cmp	ShakePriority,SHAKE_DAMAGE	 */
	/* mov	ShakePriority,SHAKE_DAMAGE */
	shakepriority = 75;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
	/* pop	di */
	POP(di);
	// 0 ;-------------------
	// 0 ;* make smoke effect
	// 0 ;-------------------
wpnhitsmoke:
	// 4963 
	/* WpnHitSmoke:	mov	bx,SMOKE_AIR_EXPLO */
	bx = 10;
	/* mov	si,di */
	si = di;
	/* push	di */
	PUSH(di);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	/* pop	di */
	POP(di);
	// 0 ;--------------------------------------
	// 0 ;* convert weapon to airburst animation (at explosion point)
	// 0 ;--------------------------------------
	// 0 ;* if explosion point different to weapon then move weapon to explosion
	/* cmp	di,OFFSET WPN_View */
	CMP(di, m2c::near_offset_external(wpn_view));
	/* je	@F */
	if ((dw)(di) == (dw)(m2c::near_offset_external(wpn_view))) {goto dummylabel71;}
	/* mov	ax,[di].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_xsec)));
	/* mov	WPN_View.VP_XSEC,ax */
	wpn_view.vp_xsec = ax;
	/* mov	ax,[di].VP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_ysec)));
	/* mov	WPN_View.VP_YSEC,ax */
	wpn_view.vp_ysec = ax;
	/* mov	ax,[di].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_xft)));
	/* mov	WPN_View.VP_XFT,ax */
	wpn_view.vp_xft = ax;
	/* mov	ax,[di].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,di))->vp_yft)));
	/* mov	WPN_View.VP_YFT,ax */
	wpn_view.vp_yft = ax;
	/* mov	ax,WORD PTR [di].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_lo)));
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,ax */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = ax;
	/* mov	ax,WORD PTR [di].VP_ZFT_HI */
	ax = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_hi)));
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,ax */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = ax;
dummylabel71:
	// 4965 
	/* @@:		call	CreateAirburst */
	CALL(createairburst, 0);
	/* ret */
	RETN(0);
updatesplash:
	// 7548 
	/* test	WPN_Mobile.MOB_ANIM,SPLASH1	;done stage 2? */
	TEST(wpn_mobile.mob_anim, 0x1);
edummylabel28:
	// 4967 
	/* jz	@F				;yes -> */
	if (ZF) {goto dummylabel72;}
	/* and	WPN_Mobile.MOB_ANIM,NOT SPLASH1 */
	AND(wpn_mobile.mob_anim, ~0x1);
	/* jmp	ExitSplash */
	goto exitsplash;
dummylabel72:
	// 4969 
	/* @@:		mov	WPN_Weapon.WPN_TYPE,NULL_WEAPON */
	wpn_weapon.wpn_type = -1;
exitsplash:
	// 4971 
	/* ExitSplash:	ret */
	RETN(0);
createairburst:
	// 7564 
	// 0 ;* init MOBILE <>
edummylabel29:
	// 4973 
	/* mov	WPN_Mobile.MOB_NUM,MOB_AIRBURST */
	wpn_mobile.mob_num = 26;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE3 */
	wpn_mobile.mob_type = 6;
	/* mov	WPN_Mobile.MOB_ANIM,AIRBURST1 */
	wpn_mobile.mob_anim = 5;
	// 0 ;* init WEAPON <>
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_AIRBURST */
	OR(wpn_weapon.wpn_flags, 0x200);
	/* ret */
	RETN(0);
updateairburst:
	// 7583 
	// 0 ;* next animation stage
edummylabel30:
	// 4975 
	/* sub	WPN_Mobile.MOB_ANIM,1 */
	SUB(wpn_mobile.mob_anim, 1);
	/* jnc	@F */
	if (!CF) {goto dummylabel73;}
	// 0 ;* end of animation
	/* mov	WPN_Weapon.WPN_TYPE,NULL_WEAPON */
	wpn_weapon.wpn_type = -1;
dummylabel73:
	// 4977 
	/* @@:		ret */
	RETN(0);
weaponscontrol:
	// 7604 
	// 0 ;------------
	// 0 ;* initialize
	// 0 ;------------
	// 0 ;* assume cannon not fired
edummylabel31:
	// 4979 
	/* mov	CannonFired,0 */
	cannonfired = 0;
	/* cmp	ShakePriority,SHAKE_CANNON	;;same shake? */
	CMP(shakepriority, 45);
	/* jne	__m2c_macrolocal_131_skip			;;no -> */
	if ((dw)(shakepriority) != (dw)(45)) {goto __m2c_macrolocal_131_skip;}
	/* cli */
	CLI;
	/* mov	ShakePriority,0 */
	shakepriority = 0;
	/* mov	ShakeTimer,0 */
	shaketimer = 0;
	/* sti */
	STI;
__m2c_macrolocal_131_skip:
	// 4981 
	// 0 ;ori
/* m2c-phantom removed: 	R(CMP(shakepriority, 45));	// 7621 cmp	ShakePriority,SHAKE_CANNON	 */
/* m2c-phantom removed: 	R(shakepriority = 0;);	// 7622 mov	ShakePriority,0 */
/* m2c-phantom removed: 	R(shaketimer = 0;);	// 7623 mov	ShakeTimer,0 */
	// 0 ;* assume no IR lock
	/* mov	IRLockFlag,0 */
	irlockflag = 0;
	// 0 ;* assume RWR target not valid
	/* mov	RWRTgtValid,0 */
	rwrtgtvalid = 0;
	// 0 ;* assume no chaff or flare released this frame
	/* mov	RelChaff,0 */
	relchaff = 0;
	/* mov	RelFlare,0 */
	relflare = 0;
	// 0 ;* assume no missile launched this frame
	/* mov	MissileTgtPtr,-1 */
	missiletgtptr = -1;
	// 0 ;--------------------
	// 0 ;* select arming mode
	// 0 ;--------------------
	/* test	ArmLock,1	;release in progress? */
	TEST(armlock, 1);
	/* jz	__m2c_macrolocal_132_skip */
	if (!(armlock & 1)) {goto __m2c_macrolocal_132_skip;}
	/* jmp	LateArmSwitch */
	goto latearmswitch;
__m2c_macrolocal_132_skip:
	// 4983 
	// 0 ;yes ->
	// 0 ;------------
	// 0 ;* arm cancel
	// 0 ;------------
	/* mov	al,BYTE PTR KF_ArmOff[K_STATUS] */
	al = *(db*)(((db*)&kf_armoff)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_armoff)+k_status););	// 7653 						mov	al,BYTE PTR KF_ArmOff[K_STATUS] */
	/* jz	SkipArmOff */
	if (!(al & al)) {goto skiparmoff;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* jmp	SkipArmGnd */
	goto skiparmgnd;
	// 0 ;------------------------
	// 0 ;* arm air-to-air weapons
	// 0 ;------------------------
skiparmoff:
	// 4985 
	/* SkipArmOff:	mov	al,BYTE PTR KF_ArmAir[K_STATUS] */
	al = *(db*)(((db*)&kf_armair)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_armair)+k_status););	// 7663 mov	al,BYTE PTR KF_ArmAir[K_STATUS] */
	/* jz	SkipArmAir */
	if (!(al & al)) {goto skiparmair;}
	/* mov	ax,AirArmMode */
	ax = airarmmode;
	/* mov	ArmMode,ax */
	armmode = ax;
	/* jmp	SkipArmGnd */
	goto skiparmgnd;
	// 0 ;---------------------------
	// 0 ;* arm air-to-ground weapons
	// 0 ;---------------------------
skiparmair:
	// 4987 
	/* SkipArmAir:	mov	al,BYTE PTR KF_ArmGnd[K_STATUS] */
	al = *(db*)(((db*)&kf_armgnd)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_armgnd)+k_status););	// 7674 mov	al,BYTE PTR KF_ArmGnd[K_STATUS] */
	/* jz	SkipArmGnd */
	if (!(al & al)) {goto skiparmgnd;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* cmp	si,-1		;any packages? */
	CMP(si, -1);
	/* je	SkipArmGnd	;no -> */
	if ((dw)(si) == (dw)(-1)) {goto skiparmgnd;}
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* mov	ArmMode,ax */
	armmode = ax;
	// 0 ;------------------------
	// 0 ;* select next air weapon
	// 0 ;------------------------
skiparmgnd:
	// 4989 
	/* SkipArmGnd:	mov	al,BYTE PTR KF_AirWeapon[K_STATUS] */
	al = *(db*)(((db*)&kf_airweapon)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_airweapon)+k_status););	// 7686 mov	al,BYTE PTR KF_AirWeapon[K_STATUS] */
	/* or	al,JoyA_JustFired2 */
	OR(al, joya_justfired2);
	/* jz	@F */
	if (al == 0) {goto dummylabel74;}
	/* call	SelectAirWpn */
	CALL(selectairwpn, 0);
	// 0 ;---------------------
	// 0 ;* select next package
	// 0 ;---------------------
dummylabel74:
	// 4991 
	/* @@:	mov	al,BYTE PTR KF_Package[K_STATUS] */
	al = *(db*)(((db*)&kf_package)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_package)+k_status););	// 7696 mov	al,BYTE PTR KF_Package[K_STATUS] */
	/* jz	SkipPackage */
	if (!(al & al)) {goto skippackage;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* cmp	si,-1		;any packages? */
	CMP(si, -1);
	/* je	SkipPackage	;no -> */
	if ((dw)(si) == (dw)(-1)) {goto skippackage;}
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* cmp	ax,ArmMode	;package armed? */
	CMP(ax, armmode);
	/* je	SkipPackage	;yes -> */
	if ((dw)(ax) == (dw)(armmode)) {goto skippackage;}
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
	// 0 ;-----------------------------
	// 0 ;* select weapon delivery mode
	// 0 ;-----------------------------
skippackage:
	// 4993 
	/* SkipPackage:	mov	al,BYTE PTR KF_WpnMode[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnmode)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnmode)+k_status););	// 7711 mov	al,BYTE PTR KF_WpnMode[K_STATUS] */
	/* jnz	__m2c_macrolocal_139_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_139_skip;}
	/* jmp	LateArmSwitch */
	goto latearmswitch;
__m2c_macrolocal_139_skip:
	// 4995 
	/* mov	si,PackagePtr */
	si = packageptr;
	/* cmp	si,-1		;any packages? */
	CMP(si, -1);
	/* jne	__m2c_macrolocal_140_skip */
	if ((dw)(si) != (dw)(-1)) {goto __m2c_macrolocal_140_skip;}
	/* jmp	LateArmSwitch */
	goto latearmswitch;
__m2c_macrolocal_140_skip:
	// 4997 
	// 0 ;no ->
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* cmp	ax,ArmMode	;package armed? */
	CMP(ax, armmode);
	/* jne	__m2c_macrolocal_141_skip */
	if ((dw)(ax) != (dw)(armmode)) {goto __m2c_macrolocal_141_skip;}
	/* jmp	LateArmSwitch */
	goto latearmswitch;
__m2c_macrolocal_141_skip:
	// 4999 
	// 0 ;yes ->
	// 0 ;* GPB1000 modes (manual / laydown / loft)
	/* cmp	[si].PACK_WEAP_TYPE,GPB1000	;GPB1000? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), 0);
	/* jne	@F				;no -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(0)) {goto dummylabel75;}
	/* mov	ax,ARM_LAYDOWN */
	ax = 4;
	/* cmp	[si].PACK_WEAP_MODE,ARM_MANUAL */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 2);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(2)) {goto setwpnmode;}
	/* mov	ax,ARM_LOFT */
	ax = 6;
	/* cmp	[si].PACK_WEAP_MODE,ARM_LAYDOWN */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 4);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(4)) {goto setwpnmode;}
	/* mov	ax,ARM_MANUAL */
	ax = 2;
	/* jmp	SetWpnMode */
	goto setwpnmode;
	// 0 ;* RET1000 modes (manual / laydown)
dummylabel75:
	// 5001 
	/* @@: 		cmp	[si].PACK_WEAP_TYPE,RET1000	;RET1000? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), 2);
	/* jne	@F				;no -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(2)) {goto dummylabel76;}
	/* mov	ax,ARM_LAYDOWN */
	ax = 4;
	/* cmp	[si].PACK_WEAP_MODE,ARM_MANUAL */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 2);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(2)) {goto setwpnmode;}
	/* mov	ax,ARM_MANUAL */
	ax = 2;
	/* jmp	SetWpnMode */
	goto setwpnmode;
	// 0 ;* LGB1000 modes (manual / laydown / loft / laser guided)
dummylabel76:
	// 5003 
	/* @@:		cmp	[si].PACK_WEAP_TYPE,LGB1000	;LGB1000? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), 4);
	/* jne	@F				;no -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(4)) {goto dummylabel77;}
	/* mov	ax,ARM_LAYDOWN */
	ax = 4;
	/* cmp	[si].PACK_WEAP_MODE,ARM_MANUAL */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 2);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(2)) {goto setwpnmode;}
	/* mov	ax,ARM_LOFT */
	ax = 6;
	/* cmp	[si].PACK_WEAP_MODE,ARM_LAYDOWN */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 4);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(4)) {goto setwpnmode;}
	/* mov	ax,ARM_LGB */
	ax = 8;
	/* cmp	[si].PACK_WEAP_MODE,ARM_LOFT */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 6);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(6)) {goto setwpnmode;}
	/* mov	ax,ARM_MANUAL */
	ax = 2;
	/* jmp	SetWpnMode */
	goto setwpnmode;
	// 0 ;* BL755 modes (manual / laydown)
dummylabel77:
	// 5005 
	/* @@:		cmp	[si].PACK_WEAP_TYPE,BL755	;BL755? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), 6);
	/* jne	@F				;no -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(6)) {goto dummylabel78;}
	/* mov	ax,ARM_LAYDOWN */
	ax = 4;
	/* cmp	[si].PACK_WEAP_MODE,ARM_MANUAL */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 2);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(2)) {goto setwpnmode;}
	/* mov	ax,ARM_MANUAL */
	ax = 2;
	/* jmp	SetWpnMode */
	goto setwpnmode;
	// 0 ;* ALARM modes (direct / indirect)
dummylabel78:
	// 5007 
	/* @@:		cmp	[si].PACK_WEAP_TYPE,ALARM	;ALARM? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), 10);
	/* jne	LateArmSwitch			;no -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(10)) {goto latearmswitch;}
	/* mov	ax,ARM_ALARM_DIR */
	ax = 12;
	/* cmp	[si].PACK_WEAP_MODE,ARM_ALARM_IND */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 14);
	/* je	SetWpnMode */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(14)) {goto setwpnmode;}
	/* mov	ax,ARM_ALARM_IND */
	ax = 14;
setwpnmode:
	// 5009 
	/* SetWpnMode:	mov	[si].PACK_WEAP_MODE,ax */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))), m2c::getdata(ax));
	// 0 ;---------------------------
latearmswitch:
	// 5011 
	// 0 ;update late arming switch animation
	// 0 ;---------------------------
	// 0 ;* if ArmMode = ARM_OFF then
	// 0 ;*    LateArmAnim = max(LateArmAnim - 1, 0)
	// 0 ;* else
	// 0 ;*    LateArmAnim = min(LateArmAnim + 1, 3)
	// 0 ;* endif
	/* mov	al,LateArmAnim */
	al = latearmanim;
	/* cmp	ArmMode,ARM_OFF	;off? */
	CMP(armmode, 0);
	/* jne	@F		;no -> */
	if ((dw)(armmode) != (dw)(0)) {goto dummylabel79;}
	/* test	al,al		;already min? */
	TEST(al, al);
	/* jz	SkipLateArm	;yes -> */
	if (!(al & al)) {goto skiplatearm;}
	/* dec	al */
	DEC(al);
	/* jmp	SetLateArm */
	goto setlatearm;
dummylabel79:
	// 5013 
	/* @@:		cmp	al,3		;already max? */
	CMP(al, 3);
	/* je	SkipLateArm	;yes -> */
	if ((db)(al) == (db)(3)) {goto skiplatearm;}
	/* inc	al */
	INC(al);
setlatearm:
	// 5015 
	/* SetLateArm:	mov	LateArmAnim,al */
	latearmanim = al;
	// 0 ;-----------------------------
	// 0 ;* sort weapon wrt arming mode
	// 0 ;-----------------------------
skiplatearm:
	// 5017 
	/* SkipLateArm:	mov	bx,ArmMode */
	bx = armmode;
__disp=*(dw*)(((db*)&armswitch)+bx);
	/* jmp	ArmSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
armmanual:
	// 5019 
	// 0 ;---------------------------
	// 0 ;* calc throw
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	// 0 ;* calc impact point
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcBombCCIP */
	CALL(calcbombccip, 0);
	// 0 ;* test for weapon release
	/* mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnfire)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnfire)+k_status););	// 7827 						mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	/* or	al,JoyA_JustFired1	;release package? */
	OR(al, joya_justfired1);
	/* jz	SkipManual		;no -> */
	if (al == 0) {goto skipmanual;}
	// 0 ;* release interlock
	/* cmp	M_CosR,0	;aircraft erect? */
	CMP(m_cosr, 0);
	/* jl	SkipManual	;no -> */
	if ((short)(m_cosr) < (short)(0)) {goto skipmanual;}
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipManual	;no -> */
	if (!(airborne1 & 1)) {goto skipmanual;}
	// 0 ;* release package
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	cx,[si].PACK_WEAP_NUM */
	cx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,-1		;target waypoint not applicable */
	di = -1;
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	/* jc	SkipManual	;package not released -> */
	if (CF) {goto skipmanual;}
	// 0 ;* disarm (clear package, update weight, select next package etc.)
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* test	InfiniteWeapons,1	;infinite weapons? */
	TEST(infiniteweapons, 1);
	/* jnz	SkipManual		;yes -> */
	if ((infiniteweapons & 1) != 0) {goto skipmanual;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	bx,ExtStoresIndex[bx] */
	bx = *(dw*)(((db*)&extstoresindex)+bx);
	/* mov	ax,ExtStores[bx] */
	ax = *(dw*)(((db*)&extstores)+bx);
	/* sub	ax,[si].PACK_WEAP_NUM */
	SUB(ax, *((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
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
	/* mov	ExtStores[bx],ax */
	*(dw*)(((db*)&extstores)+bx) = ax;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* mov	[si].PACK_WEAP_NUM,0 */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num))), m2c::getdata(0));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skipmanual:
	// 5021 
	/* SkipManual: 	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armlaydown:
	// 5023 
	// 0 ;---------------------------
	// 0 ;* check target valid
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel80;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* je	@F			;yes -> */
	if ((dw)(wpptr) == (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel80;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* jmp	SkipLaydown */
	goto skiplaydown;
	// 0 ;* make target viewpoint (every frame in case target changes)
dummylabel80:
	// 5025 
	/* @@:		mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TGT_VIEW.VP_XSEC,ax */
	tgt_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TGT_VIEW.VP_YSEC,ax */
	tgt_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TGT_VIEW.VP_XFT,ax */
	tgt_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TGT_VIEW.VP_YFT,ax */
	tgt_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tgt_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tgt_view+vp_zft_hi)) = ax;
	// 0 ;* calc throw
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	// 0 ;* calc impact point
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcBombCCIP */
	CALL(calcbombccip, 0);
	// 0 ;* test for weapon commit
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpncommit)+k_status););	// 7907 												mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	/* mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	al = *(db*)(((db*)&kf_wpncommit)+k_status);
	/* or	al,JoyA_Fire1	;commit package? */
	OR(al, joya_fire1);
	/* jnz	__m2c_macrolocal_145_skip */
	if (al != 0) {goto __m2c_macrolocal_145_skip;}
	/* jmp	SkipLaydown */
	goto skiplaydown;
__m2c_macrolocal_145_skip:
	// 5027 
	// 0 ;no ->
	// 0 ;* release interlock
	/* cmp	M_CosR,0	;aircraft erect? */
	CMP(m_cosr, 0);
	/* jge	__m2c_macrolocal_146_skip */
	if ((short)(m_cosr) >= (short)(0)) {goto __m2c_macrolocal_146_skip;}
	/* jmp	SkipLaydown */
	goto skiplaydown;
__m2c_macrolocal_146_skip:
	// 5029 
	// 0 ;no ->
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jnz	__m2c_macrolocal_147_skip */
	if ((airborne1 & 1) != 0) {goto __m2c_macrolocal_147_skip;}
	/* jmp	SkipLaydown */
	goto skiplaydown;
__m2c_macrolocal_147_skip:
	// 5031 
	// 0 ;no ->
	// 0 ;* check heading in approx direction (avoid spurious release)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64		;diff > 45 degs? */
	CMP(ax, 64);
	/* jbe	__m2c_macrolocal_148_skip */
	if ((dw)(ax) <= (dw)(64)) {goto __m2c_macrolocal_148_skip;}
	/* jmp	SkipLaydown */
	goto skiplaydown;
__m2c_macrolocal_148_skip:
	// 5033 
	// 0 ;yes ->
	// 0 ;* release if (range - throw) <= (vtas * cos(pitch) * delta time) / 16
	/* mov	ax,WORD PTR WPRng */
	ax = *(dw*)(&wprng);
	/* mov	dx,WORD PTR WPRng+2 */
	dx = *(dw*)(((db*)&wprng)+2);
	/* sub	ax,WORD PTR BombThrow */
	SUB(ax, *(dw*)(&bombthrow));
	/* sbb	dx,WORD PTR BombThrow+2 */
	SBB(dx, *(dw*)(((db*)&bombthrow)+2));
	/* js	@F		;< 0, always release -> */
	if ((short)(dx) < 0) {goto dummylabel81;}
	/* jz	__m2c_macrolocal_149_skip */
	if (dx == 0) {goto __m2c_macrolocal_149_skip;}
	/* jmp	SkipLaydown */
	goto skiplaydown;
__m2c_macrolocal_149_skip:
	// 5035 
	// 0 ;too far ->
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,Vtas */
	ax = vtas;
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
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	bp,dx		;solution? */
	CMP(bp, dx);
	/* ja	SkipLaydown	;no -> */
	if ((dw)(bp) > (dw)(dx)) {goto skiplaydown;}
	// 0 ;* release package
dummylabel81:
	// 5037 
	/* @@:		mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	cx,[si].PACK_WEAP_NUM */
	cx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,-1		;target waypoint not applicable */
	di = -1;
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	/* jc	SkipLaydown	;package not released -> */
	if (CF) {goto skiplaydown;}
	// 0 ;* disarm (clear package, update weight, select next package etc.)
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* test	InfiniteWeapons,1	;infinite weapons? */
	TEST(infiniteweapons, 1);
	/* jnz	SkipLaydown		;yes -> */
	if ((infiniteweapons & 1) != 0) {goto skiplaydown;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	bx,ExtStoresIndex[bx] */
	bx = *(dw*)(((db*)&extstoresindex)+bx);
	/* mov	ax,ExtStores[bx] */
	ax = *(dw*)(((db*)&extstores)+bx);
	/* sub	ax,[si].PACK_WEAP_NUM */
	SUB(ax, *((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
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
	/* mov	ExtStores[bx],ax */
	*(dw*)(((db*)&extstores)+bx) = ax;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* mov	[si].PACK_WEAP_NUM,0 */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num))), m2c::getdata(0));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skiplaydown:
	// 5039 
	/* SkipLaydown:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armloft:
	// 5041 
	// 0 ;---------------------------
	// 0 ;* check target valid
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel82;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* je	@F			;yes -> */
	if ((dw)(wpptr) == (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel82;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* jmp	SkipLoft */
	goto skiploft;
	// 0 ;* make target viewpoint (every frame in case target changes)
dummylabel82:
	// 5043 
	/* @@:		mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TGT_VIEW.VP_XSEC,ax */
	tgt_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TGT_VIEW.VP_YSEC,ax */
	tgt_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TGT_VIEW.VP_XFT,ax */
	tgt_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TGT_VIEW.VP_YFT,ax */
	tgt_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tgt_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tgt_view+vp_zft_hi)) = ax;
	// 0 ;* calc throw
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	// 0 ;* if abs(ang diff) > 90 degs then (flying away from target)
	// 0 ;*    clock = -1
	// 0 ;*    ratio = -1
	// 0 ;* endif
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,128		;diff > 90 degs? */
	CMP(ax, 128);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(128)) {goto dummylabel83;}
	/* mov	LoftClock,-1 */
	loftclock = -1;
	/* mov	LoftRatio,-1 */
	loftratio = -1;
	/* jmp	SkipLoft */
	goto skiploft;
	// 0 ;* calc pull up range (pull up range = throw @ 45 degs pitch up)
dummylabel83:
	// 5045 
	/* @@:		mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* push	M_VIEW.VP_PITCH */
	PUSH(m_view.vp_pitch);
	/* push	WORD PTR BombThrow */
	PUSH(*(dw*)(&bombthrow));
	/* push	WORD PTR BombThrow+2 */
	PUSH(*(dw*)(((db*)&bombthrow)+2));
	/* mov	M_VIEW.VP_PITCH,64	;45 degs */
	m_view.vp_pitch = 64;
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	/* pop	WORD PTR BombThrow+2 */
	POP(*(dw*)(((db*)&bombthrow)+2));
	/* pop	WORD PTR BombThrow */
	POP(*(dw*)(&bombthrow));
	/* pop	M_VIEW.VP_PITCH */
	POP(m_view.vp_pitch);
	// 0 ;* if target range >= pull up range then
	// 0 ;*    time to go = (target range - pull up range) / vtas
	// 0 ;*    clock = time to go
	// 0 ;*    ratio = -1
	// 0 ;* else
	// 0 ;*    if range < 65536 then
	// 0 ;*       if throw < range then
	// 0 ;*          ratio = throw * 32768 / range
	// 0 ;*          clock = 32767 - ratio
	// 0 ;*       else
	// 0 ;*          ratio = 32767
	// 0 ;*          clock = 32767
	// 0 ;*	 endif
	// 0 ;*    else
	// 0 ;*       ratio = 32767
	// 0 ;*       clock = 32767
	// 0 ;*    endif
	// 0 ;* endif
	/* mov	bx,WORD PTR WPRng */
	bx = *(dw*)(&wprng);
	/* mov	cx,WORD PTR WPRng+2 */
	cx = *(dw*)(((db*)&wprng)+2);
	/* cmp	cx,dx */
	CMP(cx, dx);
	/* ja	@F	     	;target rng > pull up rng -> */
	if ((dw)(cx) > (dw)(dx)) {goto dummylabel84;}
	/* jb	ContPullUp	;target rng < pull up rng -> */
	if ((dw)(cx) < (dw)(dx)) {goto contpullup;}
	/* cmp	bx,ax */
	CMP(bx, ax);
	/* jb	ContPullUp     	;target rng < pull up rng -> */
	if ((dw)(bx) < (dw)(ax)) {goto contpullup;}
dummylabel84:
	// 5047 
	/* @@:		xchg	ax,bx */
	XCHG(ax, bx);
	/* xchg	dx,cx */
	XCHG(dx, cx);
	/* sub	ax,bx		;target range - pull up range */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* mov	bx,Vtas */
	bx = vtas;
	/* call	CalcETA */
	CALLF(calceta, 0);
	/* cmp	ax,60		;clock limit 60 secs */
	CMP(ax, 60);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(60)) {goto dummylabel85;}
	/* mov	ax,60 */
	ax = 60;
dummylabel85:
	// 5049 
	/* @@:		mov	dx,546		;adjust for clock (0 .. 32767) */
	dx = 546;
	/* imul	dx */
	IMUL1_2(dx);
	/* mov	LoftClock,ax */
	loftclock = ax;
	/* mov	LoftRatio,-1 */
	loftratio = -1;
	/* jmp	LoftCommit */
	goto loftcommit;
contpullup:
	// 5051 
	/* ContPullUp:	mov	LoftRatio,32767	;assume div error */
	loftratio = 32767;
	/* mov	LoftClock,32767 */
	loftclock = 32767;
	/* test	cx,cx		;range < 65536? */
	TEST(cx, cx);
	/* jnz	LoftCommit	;no -> */
	if ((cx & cx) != 0) {goto loftcommit;}
	/* mov	ax,WORD PTR BombThrow */
	ax = *(dw*)(&bombthrow);
	/* mov	dx,WORD PTR BombThrow+2 */
	dx = *(dw*)(((db*)&bombthrow)+2);
	/* test	dx,dx		;throw < 65536? */
	TEST(dx, dx);
	/* jnz	LoftCommit	;no -> */
	if ((dx & dx) != 0) {goto loftcommit;}
	/* cmp	ax,bx		;throw < range? */
	CMP(ax, bx);
	/* jae	LoftCommit	;no -> */
	if ((dw)(ax) >= (dw)(bx)) {goto loftcommit;}
	/* mov	dx,ax		;*32768 for bin frac result */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
	/* mov	LoftRatio,ax */
	loftratio = ax;
	/* mov	dx,32767	;clock = 32767 - ratio */
	dx = 32767;
	/* sub	dx,ax */
	SUB(dx, ax);
	/* mov	LoftClock,dx */
	loftclock = dx;
	// 0 ;* test for weapon commit
loftcommit:
	// 5053 
	/* LoftCommit:	mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	al = *(db*)(((db*)&kf_wpncommit)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpncommit)+k_status););	// 8124 mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	/* or	al,JoyA_Fire1	;commit package? */
	OR(al, joya_fire1);
	/* jnz	__m2c_macrolocal_155_skip */
	if (al != 0) {goto __m2c_macrolocal_155_skip;}
	/* jmp	SkipLoft */
	goto skiploft;
__m2c_macrolocal_155_skip:
	// 5055 
	// 0 ;no ->
	// 0 ;* release interlock
	/* cmp	M_CosR,0	;aircraft erect? */
	CMP(m_cosr, 0);
	/* jge	__m2c_macrolocal_156_skip */
	if ((short)(m_cosr) >= (short)(0)) {goto __m2c_macrolocal_156_skip;}
	/* jmp	SkipLoft */
	goto skiploft;
__m2c_macrolocal_156_skip:
	// 5057 
	// 0 ;no ->
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jnz	__m2c_macrolocal_157_skip */
	if ((airborne1 & 1) != 0) {goto __m2c_macrolocal_157_skip;}
	/* jmp	SkipLoft */
	goto skiploft;
__m2c_macrolocal_157_skip:
	// 5059 
	// 0 ;no ->
	// 0 ;* check heading in approx direction (avoid spurious release)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64		;diff > 45 degs? */
	CMP(ax, 64);
	/* jbe	__m2c_macrolocal_158_skip */
	if ((dw)(ax) <= (dw)(64)) {goto __m2c_macrolocal_158_skip;}
	/* jmp	SkipLoft */
	goto skiploft;
__m2c_macrolocal_158_skip:
	// 5061 
	// 0 ;yes ->
	// 0 ;* release if (range - throw) <= (vtas * cos(pitch) * delta time) / 16
	/* mov	ax,WORD PTR WPRng */
	ax = *(dw*)(&wprng);
	/* mov	dx,WORD PTR WPRng+2 */
	dx = *(dw*)(((db*)&wprng)+2);
	/* sub	ax,WORD PTR BombThrow */
	SUB(ax, *(dw*)(&bombthrow));
	/* sbb	dx,WORD PTR BombThrow+2 */
	SBB(dx, *(dw*)(((db*)&bombthrow)+2));
	/* js	@F		;< 0, always release -> */
	if ((short)(dx) < 0) {goto dummylabel86;}
	/* jz	__m2c_macrolocal_159_skip */
	if (dx == 0) {goto __m2c_macrolocal_159_skip;}
	/* jmp	SkipLoft */
	goto skiploft;
__m2c_macrolocal_159_skip:
	// 5063 
	// 0 ;too far ->
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,Vtas */
	ax = vtas;
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
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	bp,dx		;solution? */
	CMP(bp, dx);
	/* ja	SkipLoft	;no -> */
	if ((dw)(bp) > (dw)(dx)) {goto skiploft;}
	// 0 ;* release package
dummylabel86:
	// 5065 
	/* @@:		mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	cx,[si].PACK_WEAP_NUM */
	cx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,-1		;target waypoint not applicable */
	di = -1;
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	/* jc	SkipLoft	;package not released -> */
	if (CF) {goto skiploft;}
	// 0 ;* disarm (clear package, update weight, select next package etc.)
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* test	InfiniteWeapons,1	;infinite weapons? */
	TEST(infiniteweapons, 1);
	/* jnz	SkipLoft		;yes -> */
	if ((infiniteweapons & 1) != 0) {goto skiploft;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	bx,ExtStoresIndex[bx] */
	bx = *(dw*)(((db*)&extstoresindex)+bx);
	/* mov	ax,ExtStores[bx] */
	ax = *(dw*)(((db*)&extstores)+bx);
	/* sub	ax,[si].PACK_WEAP_NUM */
	SUB(ax, *((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
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
	/* mov	ExtStores[bx],ax */
	*(dw*)(((db*)&extstores)+bx) = ax;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* mov	[si].PACK_WEAP_NUM,0 */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num))), m2c::getdata(0));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skiploft:
	// 5067 
	/* SkipLoft:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armlaserguided:
	// 5069 
	// 0 ;---------------------------
	// 0 ;* test for weapon release
	/* mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnfire)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnfire)+k_status););	// 8226 						mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	/* or	al,JoyA_JustFired1	;release package? */
	OR(al, joya_justfired1);
	/* jz	SkipLaserGuided		;no -> */
	if (al == 0) {goto skiplaserguided;}
	// 0 ;* release interlock
	/* cmp	M_CosR,0	;aircraft erect? */
	CMP(m_cosr, 0);
	/* jl	SkipLaserGuided	;no -> */
	if ((short)(m_cosr) < (short)(0)) {goto skiplaserguided;}
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipLaserGuided	;no -> */
	if (!(airborne1 & 1)) {goto skiplaserguided;}
	// 0 ;* release package
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	cx,1		;release single weapon from package */
	cx = 1;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET FloatWP */
	di = m2c::near_offset_external(floatwp);
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	/* jc	SkipLaserGuided	;package not released -> */
	if (CF) {goto skiplaserguided;}
	// 0 ;* update package (disarm if empty)
	/* test	InfiniteWeapons,1	;infinite weapons? */
	TEST(infiniteweapons, 1);
	/* jnz	SkipLaserGuided		;yes -> */
	if ((infiniteweapons & 1) != 0) {goto skiplaserguided;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	bx,ExtStoresIndex[bx] */
	bx = *(dw*)(((db*)&extstoresindex)+bx);
	/* mov	ax,ExtStores[bx] */
	ax = *(dw*)(((db*)&extstores)+bx);
	/* sub	ax,1 */
	SUB(ax, 1);
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
	/* mov	ExtStores[bx],ax */
	*(dw*)(((db*)&extstores)+bx) = ax;
	/* dec	[si].PACK_WEAP_NUM */
	DEC(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* jnz	SkipLaserGuided */
	if (*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)) != 0) {goto skiplaserguided;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skiplaserguided:
	// 5071 
	/* SkipLaserGuided:jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armjp233:
	// 5073 
	// 0 ;---------------------------
	/* test	ArmLock,1	;release in progress? */
	TEST(armlock, 1);
	/* jz	__m2c_macrolocal_166_skip */
	if (!(armlock & 1)) {goto __m2c_macrolocal_166_skip;}
	/* jmp	ContJP233 */
	goto contjp233;
__m2c_macrolocal_166_skip:
	// 5075 
	// 0 ;yes ->
	// 0 ;* check target valid
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel87;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* je	@F			;yes -> */
	if ((dw)(wpptr) == (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel87;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* jmp	SkipJP233 */
	goto skipjp233;
	// 0 ;* make target viewpoint (every frame in case target changes)
dummylabel87:
	// 5077 
	/* @@:		mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TGT_VIEW.VP_XSEC,ax */
	tgt_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TGT_VIEW.VP_YSEC,ax */
	tgt_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TGT_VIEW.VP_XFT,ax */
	tgt_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TGT_VIEW.VP_YFT,ax */
	tgt_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tgt_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tgt_view+vp_zft_hi)) = ax;
	// 0 ;* calc throw
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	// 0 ;* calc impact point
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	CalcBombCCIP */
	CALL(calcbombccip, 0);
	// 0 ;* test for weapon commit
	/* mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	al = *(db*)(((db*)&kf_wpncommit)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpncommit)+k_status););	// 8313 						mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	/* or	al,JoyA_Fire1	;commit package? */
	OR(al, joya_fire1);
	/* jnz	__m2c_macrolocal_168_skip */
	if (al != 0) {goto __m2c_macrolocal_168_skip;}
	/* jmp	SkipJP233 */
	goto skipjp233;
__m2c_macrolocal_168_skip:
	// 5079 
	// 0 ;no ->
	// 0 ;* release interlock
	/* cmp	M_CosR,0	;aircraft erect? */
	CMP(m_cosr, 0);
	/* jge	__m2c_macrolocal_169_skip */
	if ((short)(m_cosr) >= (short)(0)) {goto __m2c_macrolocal_169_skip;}
	/* jmp	SkipJP233 */
	goto skipjp233;
__m2c_macrolocal_169_skip:
	// 5081 
	// 0 ;no ->
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jnz	__m2c_macrolocal_170_skip */
	if ((airborne1 & 1) != 0) {goto __m2c_macrolocal_170_skip;}
	/* jmp	SkipJP233 */
	goto skipjp233;
__m2c_macrolocal_170_skip:
	// 5083 
	// 0 ;no ->
	// 0 ;* check heading in approx direction (avoid spurious release)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64		;diff > 45 degs? */
	CMP(ax, 64);
	/* jbe	__m2c_macrolocal_171_skip */
	if ((dw)(ax) <= (dw)(64)) {goto __m2c_macrolocal_171_skip;}
	/* jmp	SkipJP233 */
	goto skipjp233;
__m2c_macrolocal_171_skip:
	// 5085 
	// 0 ;yes ->
	// 0 ;* release if (range - throw) <= (vtas * cos(pitch) * delta time) / 16
	/* mov	ax,WORD PTR WPRng */
	ax = *(dw*)(&wprng);
	/* mov	dx,WORD PTR WPRng+2 */
	dx = *(dw*)(((db*)&wprng)+2);
	/* sub	ax,WORD PTR BombThrow */
	SUB(ax, *(dw*)(&bombthrow));
	/* sbb	dx,WORD PTR BombThrow+2 */
	SBB(dx, *(dw*)(((db*)&bombthrow)+2));
	/* js	@F		;< 0, always release -> */
	if ((short)(dx) < 0) {goto dummylabel88;}
	/* jz	__m2c_macrolocal_172_skip */
	if (dx == 0) {goto __m2c_macrolocal_172_skip;}
	/* jmp	SkipJP233 */
	goto skipjp233;
__m2c_macrolocal_172_skip:
	// 5087 
	// 0 ;too far ->
	/* mov	bp,ax */
	bp = ax;
	/* mov	ax,Vtas */
	ax = vtas;
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
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* cmp	bp,dx		;solution? */
	CMP(bp, dx);
	/* jbe	__m2c_macrolocal_176_skip */
	if ((dw)(bp) <= (dw)(dx)) {goto __m2c_macrolocal_176_skip;}
	/* jmp	SkipJP233 */
	goto skipjp233;
__m2c_macrolocal_176_skip:
	// 5089 
	// 0 ;no ->
	// 0 ;* start package release
dummylabel88:
	// 5091 
	/* @@: 		mov	ArmLock,1 */
	armlock = 1;
	/* mov	JP233Timer,JP233_PERIOD */
	jp233timer = 4*100;
	/* cmp	ShakePriority,SHAKE_JP233	;;higher SHAKE_JP233 shake in progress? */
	CMP(shakepriority, 50);
	/* ja	__m2c_macrolocal_177_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(50)) {goto __m2c_macrolocal_177_skip;}
/* m2c-phantom removed: 	R(shakepriority = 50;);	// 8386 												mov	ShakePriority,SHAKE_JP233 */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 8387 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 8388 						mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 4*100;);	// 8389 						mov	ShakeTimer,JP233_PERIOD */
__m2c_macrolocal_177_skip:
	// 5093 
	// 0 ;ori
/* m2c-phantom removed: 	R(CMP(shakepriority, 50));	// 8392 cmp	ShakePriority,SHAKE_JP233	 */
	/* mov	ShakePriority,SHAKE_JP233 */
	shakepriority = 50;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,JP233_PERIOD */
	shaketimer = 4*100;
	/* jmp	SkipJP233 */
	goto skipjp233;
	// 0 ;* continue package release
	// 0 ;* num bomblets this frame = min(JP233_BOMBLETS * delta time, 1)
contjp233:
	// 5095 
	/* ContJP233:	mov	ax,JP233_BOMBLETS */
	ax = 15;
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
	/* mov	cx,dx */
	cx = dx;
	/* test	cx,cx		;any bomblets? */
	TEST(cx, cx);
	/* jnz	@F		;yes -> */
	if ((cx & cx) != 0) {goto dummylabel89;}
	/* inc	cx */
	INC(cx);
dummylabel89:
	// 5097 
	/* @@:		mov	si,PackagePtr */
	si = packageptr;
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,-1		;target waypoint not applicable */
	di = -1;
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	// 0 ;* update timer
	/* mov	ax,JP233Timer */
	ax = jp233timer;
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
	/* mov	JP233Timer,ax */
	jp233timer = ax;
	/* jnz	SkipJP233 	;release still in progress */
	if (ax != 0) {goto skipjp233;}
	// 0 ;* disarm (clear package, update weight, select next package etc.)
	/* mov	ArmLock,0 */
	armlock = 0;
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* test	InfiniteWeapons,1	;infinite weapons? */
	TEST(infiniteweapons, 1);
	/* jnz	SkipJP233		;yes -> */
	if ((infiniteweapons & 1) != 0) {goto skipjp233;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* mov	bx,[si].PACK_WEAP_TYPE */
	bx = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* mov	bx,ExtStoresIndex[bx] */
	bx = *(dw*)(((db*)&extstoresindex)+bx);
	/* mov	ax,ExtStores[bx] */
	ax = *(dw*)(((db*)&extstores)+bx);
	/* sub	ax,[si].PACK_WEAP_NUM */
	SUB(ax, *((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
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
	/* mov	ExtStores[bx],ax */
	*(dw*)(((db*)&extstores)+bx) = ax;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* mov	[si].PACK_WEAP_NUM,0 */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num))), m2c::getdata(0));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skipjp233:
	// 5099 
	/* SkipJP233:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armalarmdir:
	// 5101 
	// 0 ;---------------------------
	// 0 ;* check target valid (take target from RWR)
	/* test	SSF_RWR,1	;damaged? */
	TEST(ssf_rwr, 1);
	/* jz	__m2c_macrolocal_181_skip */
	if (!(ssf_rwr & 1)) {goto __m2c_macrolocal_181_skip;}
	/* jmp	SkipAlarmDir */
	goto skipalarmdir;
__m2c_macrolocal_181_skip:
	// 5103 
	// 0 ;yes ->
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* test	cx,cx */
	TEST(cx, cx);
	/* jnz	__m2c_macrolocal_182_skip */
	if ((cx & cx) != 0) {goto __m2c_macrolocal_182_skip;}
	/* jmp	SkipAlarmDir */
	goto skipalarmdir;
__m2c_macrolocal_182_skip:
	// 5105 
	// 0 ;no threats ->
	// 0 ;* scan RWR threats for threat nearest top dead centre (but within ?5degs)
	/* xor	bp,bp		;index = 0 */
	XOR(bp, bp);
	/* mov	bx,64*128	;worst case 45 degs */
	bx = 64*128;
	/* mov	si,-1		;assume no threats */
	si = -1;
	// 0 ;* ignore aircraft and missile threats
threatloop:
	// 5107 
	/* ThreatLoop:	cmp	RWRThreats[bp].RWR_THREAT,THREAT_AC */
	CMP(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat)), 6);
	/* je	NextThreat */
	if ((dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))) == (dw)(6)) {goto nextthreat;}
	/* cmp	RWRThreats[bp].RWR_THREAT,THREAT_RAD_MSL */
	CMP(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat)), 8);
	/* je	NextThreat */
	if ((dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))) == (dw)(8)) {goto nextthreat;}
	/* cmp	RWRThreats[bp].RWR_THREAT,THREAT_IR_MSL */
	CMP(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat)), 10);
	/* je	NextThreat */
	if ((dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))) == (dw)(10)) {goto nextthreat;}
	// 0 ;* fetch direction and calc abs(error)
	/* mov	ax,RWRThreats[bp].RWR_DIR */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_dir)));
	/* xchg	al,ah		;*256 */
	XCHG(al, ah);
	/* ror	ax,1		;*128 */
	ROR(ax, 1);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check if nearer TDC
	/* cmp	ax,bx */
	CMP(ax, bx);
	/* jae	NextThreat */
	if ((dw)(ax) >= (dw)(bx)) {goto nextthreat;}
	/* mov	bx,ax		;new error */
	bx = ax;
	/* mov	si,bp		;new index */
	si = bp;
nextthreat:
	// 5109 
	/* NextThreat:	add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	ThreatLoop */
	LOOP(threatloop);
	/* cmp	si,-1		;valid target? */
	CMP(si, -1);
	/* jne	__m2c_macrolocal_184_skip */
	if ((dw)(si) != (dw)(-1)) {goto __m2c_macrolocal_184_skip;}
	/* jmp	SkipAlarmDir */
	goto skipalarmdir;
__m2c_macrolocal_184_skip:
	// 5111 
	// 0 ;no ->
	/* mov	RWRTgtValid,1 */
	rwrtgtvalid = 1;
	// 0 ;* make target viewpoint
	/* mov	bp,si */
	bp = si;
	/* mov	ax,RWRThreats[bp].RWR_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec)));
	/* mov	TGT_VIEW.VP_XSEC,ax */
	tgt_view.vp_xsec = ax;
	/* mov	ax,RWRThreats[bp].RWR_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec)));
	/* mov	TGT_VIEW.VP_YSEC,ax */
	tgt_view.vp_ysec = ax;
	/* mov	ax,RWRThreats[bp].RWR_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft)));
	/* mov	TGT_VIEW.VP_XFT,ax */
	tgt_view.vp_xft = ax;
	/* mov	ax,RWRThreats[bp].RWR_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft)));
	/* mov	TGT_VIEW.VP_YFT,ax */
	tgt_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tgt_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tgt_view+vp_zft_hi)) = ax;
	// 0 ;* calc slant range to target
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* mov	WORD PTR GndTgtRange,ax */
	*(dw*)(&gndtgtrange) = ax;
	/* mov	WORD PTR GndTgtRange+2,dx */
	*(dw*)(((db*)&gndtgtrange)+2) = dx;
	// 0 ;* test for launch ALARM
	/* mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnfire)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnfire)+k_status););	// 8530 						mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	/* or	al,JoyA_JustFired1	;launch ALARM? */
	OR(al, joya_justfired1);
	/* jz	SkipAlarmDir		;no -> */
	if (al == 0) {goto skipalarmdir;}
	// 0 ;* launch interlock
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipAlarmDir	;no -> */
	if (!(airborne1 & 1)) {goto skipalarmdir;}
	// 0 ;* launch ALARM
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	dh,0		;direct attack mode */
	dh = 0;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	LaunchAlarm */
	CALL(launchalarm, 0);
	/* jc	SkipAlarmDir	;missile not launched -> */
	if (CF) {goto skipalarmdir;}
	/* call	LaunchSound */
	CALLF(launchsound, 0);
	// 0 ;* update package (disarm if empty)
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipAlarmDir */
	if ((infiniteweapons & 1) != 0) {goto skipalarmdir;}
	/* mov	ax,ExtStores[EXT_ALARM] */
	ax = *(dw*)(((db*)&extstores)+10);
	/* sub	ax,1 */
	SUB(ax, 1);
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
	/* mov	ExtStores[EXT_ALARM],ax */
	*(dw*)(((db*)&extstores)+10) = ax;
	/* mov	si,PackagePtr */
	si = packageptr;
	/* dec	[si].PACK_WEAP_NUM */
	DEC(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* jnz	SkipAlarmDir */
	if (*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)) != 0) {goto skipalarmdir;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skipalarmdir:
	// 5113 
	/* SkipAlarmDir:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armalarmind:
	// 5115 
	// 0 ;---------------------------
	// 0 ;* check target valid
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel90;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* je	@F			;yes -> */
	if ((dw)(wpptr) == (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel90;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* jmp	SkipAlarmInd */
	goto skipalarmind;
	// 0 ;* make target viewpoint (every frame in case target changes)
dummylabel90:
	// 5117 
	/* @@:		mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TGT_VIEW.VP_XSEC,ax */
	tgt_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TGT_VIEW.VP_YSEC,ax */
	tgt_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TGT_VIEW.VP_XFT,ax */
	tgt_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TGT_VIEW.VP_YFT,ax */
	tgt_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tgt_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tgt_view+vp_zft_hi)) = ax;
	// 0 ;* calc slant range to target
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* mov	WORD PTR GndTgtRange,ax */
	*(dw*)(&gndtgtrange) = ax;
	/* mov	WORD PTR GndTgtRange+2,dx */
	*(dw*)(((db*)&gndtgtrange)+2) = dx;
	// 0 ;* test for launch ALARM
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnfire)+k_status););	// 8602 												mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	/* mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnfire)+k_status);
	/* or	al,JoyA_JustFired1	;launch ALARM? */
	OR(al, joya_justfired1);
	/* jz	SkipAlarmInd		;no -> */
	if (al == 0) {goto skipalarmind;}
	// 0 ;* launch interlock
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipAlarmInd	;no -> */
	if (!(airborne1 & 1)) {goto skipalarmind;}
	// 0 ;* check heading in approx direction (avoid spurious release)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	dx,WPBrg */
	dx = wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64		;diff > 45 degs? */
	CMP(ax, 64);
	/* ja	SkipAlarmInd	;yes -> */
	if ((dw)(ax) > (dw)(64)) {goto skipalarmind;}
	// 0 ;* launch ALARM
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	dh,1		;indirect attack mode */
	dh = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	LaunchAlarm */
	CALL(launchalarm, 0);
	/* jc	SkipAlarmInd	;missile not launched -> */
	if (CF) {goto skipalarmind;}
	/* call	LaunchSound */
	CALLF(launchsound, 0);
	// 0 ;* update package (disarm if empty)
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipAlarmInd */
	if ((infiniteweapons & 1) != 0) {goto skipalarmind;}
	/* mov	ax,ExtStores[EXT_ALARM] */
	ax = *(dw*)(((db*)&extstores)+10);
	/* sub	ax,1 */
	SUB(ax, 1);
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
	/* mov	ExtStores[EXT_ALARM],ax */
	*(dw*)(((db*)&extstores)+10) = ax;
	/* mov	si,PackagePtr */
	si = packageptr;
	/* dec	[si].PACK_WEAP_NUM */
	DEC(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* jnz	SkipAlarmInd */
	if (*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)) != 0) {goto skipalarmind;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* call	SelectNextPack */
	CALL(selectnextpack, 0);
skipalarmind:
	// 5119 
	/* SkipAlarmInd:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armcannon:
	// 5121 
	// 0 ;---------------------------
	/* cmp	RadarMode,AIR_RADAR	;air radar on? */
	CMP(radarmode, 4);
	/* je	ContCannon		;yes -> */
	if ((dw)(radarmode) == (dw)(4)) {goto contcannon;}
	// 0 ;* >>>>> air-to-ground cannon <<<<<
	// 0 ;* check target valid (floating waypoint)
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	ContCannon		;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto contcannon;}
	// 0 ;* make target viewpoint (every frame in case target changes)
	/* mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TGT_VIEW.VP_XSEC,ax */
	tgt_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TGT_VIEW.VP_YSEC,ax */
	tgt_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TGT_VIEW.VP_XFT,ax */
	tgt_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TGT_VIEW.VP_YFT,ax */
	tgt_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tgt_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TGT_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tgt_view+vp_zft_hi)) = ax;
	// 0 ;* calc slant range
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TGT_VIEW */
	di = m2c::near_offset_external(tgt_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* mov	WORD PTR GndTgtRange,ax */
	*(dw*)(&gndtgtrange) = ax;
	/* mov	WORD PTR GndTgtRange+2,dx */
	*(dw*)(((db*)&gndtgtrange)+2) = dx;
	// 0 ;* test for fire cannons
contcannon:
	// 5123 
	/* ContCannon:	mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	al = *(db*)(((db*)&kf_wpncommit)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpncommit)+k_status););	// 8682 mov	al,BYTE PTR KF_WpnCommit[K_STATUS] */
	/* or	al,JoyA_Fire1	;fire cannons? */
	OR(al, joya_fire1);
	/* jz	SkipCannon	;no -> */
	if (al == 0) {goto skipcannon;}
	// 0 ;* fire interlock
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipCannon	;no -> */
	if (!(airborne1 & 1)) {goto skipcannon;}
	// 0 ;* fire cannons (assume available else get break in shake and sound effects)
	/* mov	CannonFired,1 */
	cannonfired = 1;
	/* call	CannonSound */
	CALLF(cannonsound, 0);
	/* cmp	ShakePriority,SHAKE_CANNON	;;higher SHAKE_CANNON shake in progress? */
	CMP(shakepriority, 45);
	/* ja	__m2c_macrolocal_190_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(45)) {goto __m2c_macrolocal_190_skip;}
/* m2c-phantom removed: 	R(shakepriority = 45;);	// 8696 												mov	ShakePriority,SHAKE_CANNON */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 8697 						mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 8698 						mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 1*100;);	// 8699 						mov	ShakeTimer,1*100 */
__m2c_macrolocal_190_skip:
	// 5125 
	// 0 ;ori
/* m2c-phantom removed: 	R(CMP(shakepriority, 45));	// 8702 cmp	ShakePriority,SHAKE_CANNON	 */
	/* mov	ShakePriority,SHAKE_CANNON */
	shakepriority = 45;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,1*100 */
	shaketimer = 1*100;
	/* mov	dh,RHS_CANNON */
	dh = 0x1;
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	@F */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel91;}
	/* mov	dh,RHS_CANNON+LHS_CANNON */
	dh = 0x1+0x2;
dummylabel91:
	// 5127 
	/* @@:		mov	ax,Vtas */
	ax = vtas;
	/* mov	dl,1		;Tornado fire */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET M_MOBILE */
	di = m2c::near_offset_external(m_mobile);
	/* call	FireCannon */
	CALL(firecannon, 0);
	/* jc	SkipCannon	;cannon not fired -> */
	if (CF) {goto skipcannon;}
	/* or	Tx.COMMS_FLAGS1,I_FIRE_CANNON */
	OR(tx.comms_flags1, 0x1);
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipCannon */
	if ((infiniteweapons & 1) != 0) {goto skipcannon;}
	// 0 ;* decrement cannons wrt time
	/* mov	ax,DeltaTime */
	ax = deltatime;
	/* mov	dx,CANNON_RATE*2	;result * 65536 */
	dx = 16*2;
	/* imul	dx */
	IMUL1_2(dx);
	/* sub	CannonFine,ax */
	SUB(cannonfine, ax);
	/* sbb	Cannons,dx */
	SBB(cannons, dx);
	/* ja	SkipCannon	;cannons remaining -> */
	if ((!CF && !ZF)) {goto skipcannon;}
	/* mov	Cannons,0 */
	cannons = 0;
	/* mov	CannonFine,0 */
	cannonfine = 0;
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* call	SelectAirWpn */
	CALL(selectairwpn, 0);
skipcannon:
	// 5129 
	/* SkipCannon:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armsidewinder:
	// 5131 
	// 0 ;---------------------------
	// 0 ;* check target valid
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* je	SkipSidewinder */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto skipsidewinder;}
	// 0 ;* check IR lock (IR range approx 8 miles)
	/* cmp	WORD PTR AirTgtRange+2,0 */
	CMP(*(dw*)(((db*)&airtgtrange)+2), 0);
	/* ja	SkipSidewinder */
	if ((dw)(*(dw*)(((db*)&airtgtrange)+2)) > (dw)(0)) {goto skipsidewinder;}
	/* cmp	WORD PTR AirTgtRange,8*5280 */
	CMP(*(dw*)(&airtgtrange), 8*5280);
	/* ja	SkipSidewinder */
	if ((dw)(*(dw*)(&airtgtrange)) > (dw)(8*5280)) {goto skipsidewinder;}
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,AirTgtPtr */
	di = airtgtptr;
	/* add	di,MOB_REC_SIZE		;di -> target VIEWPOINT data */
	ADD(di, 6);
	/* call	CheckIRLock */
	CALL(checkirlock, 0);
	/* jnc	SkipSidewinder		;no lock -> */
	if (!CF) {goto skipsidewinder;}
	/* mov	IRLockFlag,1 */
	irlockflag = 1;
	// 0 ;* test for launch Sidewinder
	/* mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnfire)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnfire)+k_status););	// 8757 						mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	/* or	al,JoyA_JustFired1	;launch Sidewinder? */
	OR(al, joya_justfired1);
	/* jz	SkipSidewinder		;no -> */
	if (al == 0) {goto skipsidewinder;}
	// 0 ;* launch interlock
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipSidewinder	;no -> */
	if (!(airborne1 & 1)) {goto skipsidewinder;}
	// 0 ;* launch Sidewinder
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,SIDEWINDER */
	bx = 14;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,AirTgtPtr */
	di = airtgtptr;
	/* call	LaunchMissile */
	CALL(launchmissile, 0);
	/* jc	SkipSidewinder	;missile not launched -> */
	if (CF) {goto skipsidewinder;}
	/* call	LaunchSound */
	CALLF(launchsound, 0);
	/* or	Tx.COMMS_FLAGS1,I_FIRE_AIM9L */
	OR(tx.comms_flags1, 0x2);
	/* mov	ax,AirTgtPtr */
	ax = airtgtptr;
	/* mov	MissileTgtPtr,ax */
	missiletgtptr = ax;
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel92;}
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipSidewinder */
	if ((infiniteweapons & 1) != 0) {goto skipsidewinder;}
dummylabel92:
	// 5133 
	/* @@:		dec	ExtStores[EXT_SIDEWINDER] */
	DEC(*(dw*)(((db*)&extstores)+12));
	/* jnz	SkipSidewinder	;Sidewinders remaining -> */
	if (*(dw*)(((db*)&extstores)+12) != 0) {goto skipsidewinder;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* call	SelectAirWpn */
	CALL(selectairwpn, 0);
skipsidewinder:
	// 5135 
	/* SkipSidewinder:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armskyflash:
	// 5137 
	// 0 ;---------------------------
	// 0 ;* check target valid
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* je	SkipSkyFlash */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto skipskyflash;}
	// 0 ;* test for launch Sky Flash
	/* mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	al = *(db*)(((db*)&kf_wpnfire)+k_status);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_wpnfire)+k_status););	// 8798 						mov	al,BYTE PTR KF_WpnFire[K_STATUS] */
	/* or	al,JoyA_JustFired1	;launch Sky Flash? */
	OR(al, joya_justfired1);
	/* jz	SkipSkyFlash		;no -> */
	if (al == 0) {goto skipskyflash;}
	// 0 ;* launch interlock
	/* test	Airborne1,1	;aircraft airborne? */
	TEST(airborne1, 1);
	/* jz	SkipSkyFlash	;no -> */
	if (!(airborne1 & 1)) {goto skipskyflash;}
	// 0 ;* launch Sky Flash
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,SKYFLASH */
	bx = 16;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,AirTgtPtr */
	di = airtgtptr;
	/* call	LaunchMissile */
	CALL(launchmissile, 0);
	/* jc	SkipSkyFlash	;missile not launched -> */
	if (CF) {goto skipskyflash;}
	/* call	LaunchSound */
	CALLF(launchsound, 0);
	/* or	Tx.COMMS_FLAGS1,I_FIRE_SKYFLASH */
	OR(tx.comms_flags1, 0x4);
	/* mov	ax,AirTgtPtr */
	ax = airtgtptr;
	/* mov	MissileTgtPtr,ax */
	missiletgtptr = ax;
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel93;}
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipSkyFlash */
	if ((infiniteweapons & 1) != 0) {goto skipskyflash;}
dummylabel93:
	// 5139 
	/* @@:		dec	ExtStores[EXT_SKYFLASH] */
	DEC(*(dw*)(((db*)&extstores)+14));
	/* jnz	SkipSkyFlash	;Sky Flash remaining -> */
	if (*(dw*)(((db*)&extstores)+14) != 0) {goto skipskyflash;}
	/* mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* call	SelectAirWpn */
	CALL(selectairwpn, 0);
skipskyflash:
	// 5141 
	/* SkipSkyFlash:	jmp	ArmOk */
	goto armok;
	// 0 ;---------------------------
armok:
	// 5143 
	// 0 ;---------------------------
	// 0 ;--------------------
	// 0 ;* sort chaff release
	// 0 ;--------------------
	/* mov	al,BYTE PTR KF_Chaff[K_STATUS] */
	al = *(db*)(((db*)&kf_chaff)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_chaff)+k_status););	// 8838 						mov	al,BYTE PTR KF_Chaff[K_STATUS] */
	/* jz	SkipChaff */
	if (!(al & al)) {goto skipchaff;}
	// 0 ;* release interlock
	/* cmp	ChaffCntr,0 */
	CMP(chaffcntr, 0);
	/* je	SkipChaff */
	if ((dw)(chaffcntr) == (dw)(0)) {goto skipchaff;}
	/* test	Airborne1,1 */
	TEST(airborne1, 1);
	/* jz	SkipChaff */
	if (!(airborne1 & 1)) {goto skipchaff;}
	// 0 ;* release chaff
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,CHAFF */
	bx = 22;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	// 0 ;* assume chaff always released (regardless of mobile being created)
	/* call	DecoySound */
	CALLF(decoysound, 0);
	/* mov	RelChaff,1 */
	relchaff = 1;
	/* or	Tx.COMMS_FLAGS1,I_REL_CHAFF */
	OR(tx.comms_flags1, 0x8);
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel94;}
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipChaff */
	if ((infiniteweapons & 1) != 0) {goto skipchaff;}
dummylabel94:
	// 5145 
	/* @@:		dec	ChaffCntr */
	DEC(chaffcntr);
	// 0 ;--------------------
	// 0 ;* sort flare release
	// 0 ;--------------------
skipchaff:
	// 5147 
	/* SkipChaff:	mov	al,BYTE PTR KF_Flare[K_STATUS] */
	al = *(db*)(((db*)&kf_flare)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_flare)+k_status););	// 8869 mov	al,BYTE PTR KF_Flare[K_STATUS] */
	/* jz	SkipFlare */
	if (!(al & al)) {goto skipflare;}
	// 0 ;* release interlock
	/* cmp	FlareCntr,0 */
	CMP(flarecntr, 0);
	/* je	SkipFlare */
	if ((dw)(flarecntr) == (dw)(0)) {goto skipflare;}
	/* test	Airborne1,1 */
	TEST(airborne1, 1);
	/* jz	SkipFlare */
	if (!(airborne1 & 1)) {goto skipflare;}
	// 0 ;* release flare
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	bx,FLARE */
	bx = 24;
	/* mov	dl,1		;Tornado release */
	dl = 1;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	// 0 ;* assume flare always released (regardless of mobile being created)
	/* call	DecoySound */
	CALLF(decoysound, 0);
	/* mov	RelFlare,1 */
	relflare = 1;
	/* or	Tx.COMMS_FLAGS1,I_REL_FLARE */
	OR(tx.comms_flags1, 0x10);
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	@F */
	if ((twoplayer & 1) != 0) {goto dummylabel95;}
	/* test	InfiniteWeapons,1 */
	TEST(infiniteweapons, 1);
	/* jnz	SkipFlare */
	if ((infiniteweapons & 1) != 0) {goto skipflare;}
dummylabel95:
	// 5149 
	/* @@:		dec	FlareCntr */
	DEC(flarecntr);
skipflare:
	// 5151 
	/* SkipFlare:	ret */
	RETF(0);
selectnextpack:
	// 8904 
	/* mov	si,PackagePtr ;* kill: assume all */
	si = packageptr;
edummylabel32:
	// 5153 
	/* cmp	si,-1		;any packages? */
	CMP(si, -1);
	/* je	ExitNextPack	;no -> */
	if ((dw)(si) == (dw)(-1)) {goto exitnextpack;}
	/* mov	di,si		;store starting place */
	di = si;
nextpackloop:
	// 5155 
	/* NextPackLoop:	add	si,PACK_REC_SIZE	;next package */
	ADD(si, 8);
	/* cmp	si,OFFSET Packages+(NUM_PACKAGES*PACK_REC_SIZE)	;wrap around? */
	CMP(si, m2c::near_offset_external(packages)+(3*8));
	/* jb	@F						;no -> */
	if ((dw)(si) < (dw)(m2c::near_offset_external(packages)+(3*8))) {goto dummylabel96;}
	/* mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
dummylabel96:
	// 5157 
	/* @@:		cmp	[si].PACK_WEAP_TYPE,NULL_WEAPON	;null package? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), -1);
	/* jne	@F				;no -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(-1)) {goto dummylabel97;}
	// 0 ;* Note: If back to starting point then the last package must have been
	// 0 ;*       released and there are no more packages left (PackagePtr = -1).
	/* cmp	si,di		;starting point? */
	CMP(si, di);
	/* jne	NextPackLoop	;no -> */
	if ((dw)(si) != (dw)(di)) {goto nextpackloop;}
	/* mov	si,-1 */
	si = -1;
dummylabel97:
	// 5159 
	/* @@:		mov	PackagePtr,si */
	packageptr = si;
exitnextpack:
	// 5161 
	/* ExitNextPack:	ret */
	RETN(0);
selectairwpn:
	// 8933 
	/* mov	ax,AirArmMode ;* kill: assume all */
	ax = airarmmode;
edummylabel33:
	// 5163 
	/* cmp	ax,ARM_OFF	;off? */
	CMP(ax, 0);
	/* jne	__m2c_macrolocal_195_skip */
	if ((dw)(ax) != (dw)(0)) {goto __m2c_macrolocal_195_skip;}
	/* jmp	ExitAirWpn */
	goto exitairwpn;
__m2c_macrolocal_195_skip:
	// 5165 
	// 0 ;yes ->
	// 0 ;* cannon - select Sidewinder then Sky Flash then cannon
	/* cmp	ax,ARM_CANNON */
	CMP(ax, 16);
	/* jne	@F */
	if ((dw)(ax) != (dw)(16)) {goto dummylabel98;}
	/* mov	ax,ARM_SIDEWINDER */
	ax = 18;
	/* cmp	ExtStores[EXT_SIDEWINDER],0 */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* ja	SetAirWpn */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_SKYFLASH */
	ax = 20;
	/* cmp	ExtStores[EXT_SKYFLASH],0 */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* ja	SetAirWpn */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_CANNON */
	ax = 16;
	/* cmp	Cannons,0 */
	CMP(cannons, 0);
	/* ja	SetAirWpn */
	if ((dw)(cannons) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_OFF */
	ax = 0;
	/* jmp	SetAirWpn */
	goto setairwpn;
	// 0 ;* Sidewinder - select Sky Flash then cannon then Sidewinder
dummylabel98:
	// 5167 
	/* @@:		cmp	ax,ARM_SIDEWINDER */
	CMP(ax, 18);
	/* jne	@F */
	if ((dw)(ax) != (dw)(18)) {goto dummylabel99;}
	/* mov	ax,ARM_SKYFLASH */
	ax = 20;
	/* cmp	ExtStores[EXT_SKYFLASH],0 */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* ja	SetAirWpn */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_CANNON */
	ax = 16;
	/* cmp	Cannons,0 */
	CMP(cannons, 0);
	/* ja	SetAirWpn */
	if ((dw)(cannons) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_SIDEWINDER */
	ax = 18;
	/* cmp	ExtStores[EXT_SIDEWINDER],0 */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* ja	SetAirWpn */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_OFF */
	ax = 0;
	/* jmp	SetAirWpn */
	goto setairwpn;
	// 0 ;* Sky Flash - select cannon then Sidewinder then Sky Flash
dummylabel99:
	// 5169 
	/* @@:		cmp	ax,ARM_SKYFLASH */
	CMP(ax, 20);
	/* jne	@F */
	if ((dw)(ax) != (dw)(20)) {goto dummylabel100;}
	/* mov	ax,ARM_CANNON */
	ax = 16;
	/* cmp	Cannons,0 */
	CMP(cannons, 0);
	/* ja	SetAirWpn */
	if ((dw)(cannons) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_SIDEWINDER */
	ax = 18;
	/* cmp	ExtStores[EXT_SIDEWINDER],0 */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* ja	SetAirWpn */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) > (dw)(0)) {goto setairwpn;}
	/* mov	ax,ARM_SKYFLASH */
	ax = 20;
	/* cmp	ExtStores[EXT_SKYFLASH],0 */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* ja	SetAirWpn */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) > (dw)(0)) {goto setairwpn;}
dummylabel100:
	// 5171 
	/* @@:		mov	ax,ARM_OFF */
	ax = 0;
setairwpn:
	// 5173 
	/* SetAirWpn:	mov	AirArmMode,ax */
	airarmmode = ax;
	// 0 ;* if ArmMode = air-to-air mode then update ArmMode
	/* mov	dx,ArmMode */
	dx = armmode;
	/* cmp	dx,ARM_CANNON */
	CMP(dx, 16);
	/* je	@F */
	if ((dw)(dx) == (dw)(16)) {goto dummylabel101;}
	/* cmp	dx,ARM_SIDEWINDER */
	CMP(dx, 18);
	/* je	@F */
	if ((dw)(dx) == (dw)(18)) {goto dummylabel101;}
	/* cmp	dx,ARM_SKYFLASH */
	CMP(dx, 20);
	/* jne	ExitAirWpn */
	if ((dw)(dx) != (dw)(20)) {goto exitairwpn;}
dummylabel101:
	// 5175 
	/* @@:		mov	ArmMode,ax */
	armmode = ax;
exitairwpn:
	// 5177 
	/* ExitAirWpn:	ret */
	RETN(0);
calcthrow:
	// 9007 
	// 0 ;----------------------
	// 0 ;* retard bomb velocity
	// 0 ;----------------------
edummylabel34:
	// 5179 
	/* call	RetardBombVel */
	CALL(retardbombvel, 0);
	// 0 ;------------
	// 0 ;* calc throw
	// 0 ;------------
	// 0 ;* vvel = vel * sin(pitch)
	// 0 ;*
	// 0 ;* if vvel > 0 then
	// 0 ;*    tr = vvel / 32
	// 0 ;*    rh = (vvel * vvel) / 64
	// 0 ;*    zmax = alt + rh
	// 0 ;*    tf = sqrt(zmax / 16)
	// 0 ;*    tt = tr + tf
	// 0 ;* else
	// 0 ;*    impvvel = sqrt(vvel * vvel + 64 * alt)
	// 0 ;*    tt = (impvvel - abs(vvel)) / 32
	// 0 ;* endif
	// 0 ;*
	// 0 ;* hvel = vel * cos(pitch)
	// 0 ;*
	// 0 ;* throw = tt * hvel
	/* mov	bx,[si].VP_PITCH */
	bx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_pitch)));
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&costable)+bx););	// 9038 						mov	dx,CosTable[bx] */
/* m2c-phantom removed: 	R(bx = *(dw*)(((db*)&sintable)+bx););	// 9039 						mov	bx,SinTable[bx] */
	// 0 ;bx = sin(pitch), dx = cos(pitch)
	/* mov	dx,CosTable[bx] */
	dx = *(dw*)(((db*)&costable)+bx);
	/* mov	bx,SinTable[bx] */
	bx = *(dw*)(((db*)&sintable)+bx);
	// 0 ;* hvel[*8] = vel[*8] * cos(pitch)
	/* mov	bp,ax */
	bp = ax;
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
	/* mov	ax,bp */
	ax = bp;
	/* push	dx		;store hvel */
	PUSH(dx);
	// 0 ;* vvel[*8] = vel[*8] * sin(pitch)
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
	/* cmp	ax,0		;pitched up? */
	CMP(ax, 0);
	/* jle	CalcPitchDown	;no -> */
	if ((short)(ax) <= (short)(0)) {goto calcpitchdown;}
	// 0 ;-------------------------
	// 0 ;* calc throw - pitched up
	// 0 ;-------------------------
	// 0 ;* tr[*256] = vvel[*8]
	/* mov	bp,ax */
	bp = ax;
	// 0 ;* rh[*4096] = vvel[*8] * vvel[*8]
	/* imul	ax */
	IMUL1_2(ax);
	// 0 ;* zmax = alt * 4096 + rh[*4096]
	/* mov	bx,WORD PTR [si].VP_ZFT_LO */
	bx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	cx,WORD PTR [si].VP_ZFT_HI */
	cx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* mov	ch,cl		;*256 */
	ch = cl;
	/* mov	cl,bh */
	cl = bh;
	/* mov	bh,bl */
	bh = bl;
	/* xor	bl,bl */
	XOR(bl, bl);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* add	ax,bx */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	// 0 ;* tf[*256] = sqrt(zmax)
	/* call	Sqrt32 */
	CALLF(sqrt32, 0);
	// 0 ;* tt[*256] = tr[*256] + tf[*256]
	/* add	ax,bp */
	ADD(ax, bp);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0ffffh */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* or	ax,dx */
	OR(ax, dx);
	// 0 ;limit to 65535
	/* jmp	ContThrow */
	goto contthrow;
	// 0 ;-------------------------
	// 0 ;* calc throw - pitched down (or level)
	// 0 ;-------------------------
calcpitchdown:
	// 5181 
	/* CalcPitchDown:	neg	ax */
	NEG(ax);
	/* mov	bp,ax		;bp = abs(vvel) */
	bp = ax;
	// 0 ;* impvvel[*8] = sqrt(vvel[*8] * vvel[*8] + 4096 * alt)
	/* imul	ax */
	IMUL1_2(ax);
	/* mov	bx,WORD PTR [si].VP_ZFT_LO */
	bx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	cx,WORD PTR [si].VP_ZFT_HI */
	cx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* mov	ch,cl		;*256 */
	ch = cl;
	/* mov	cl,bh */
	cl = bh;
	/* mov	bh,bl */
	bh = bl;
	/* xor	bl,bl */
	XOR(bl, bl);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* add	ax,bx */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* call	Sqrt32 */
	CALLF(sqrt32, 0);
	// 0 ;* tt[*256] = impvvel[*8] - abs(vvel[*8])
	/* sub	ax,bp */
	SUB(ax, bp);
	// 0 ;* throw = tt[*256] * hvel[*8] / 2048
contthrow:
	// 5183 
	/* ContThrow:	pop	dx		;restore hvel */
	POP(dx);
	/* mul	dx */
	MUL1_2(dx);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* mov	dl,dh */
	dl = dh;
	/* xor	dh,dh */
	XOR(dh, dh);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	// 0 ;* store bomb throw value
	/* mov	WORD PTR BombThrow,ax */
	*(dw*)(&bombthrow) = ax;
	/* mov	WORD PTR BombThrow+2,dx */
	*(dw*)(((db*)&bombthrow)+2) = dx;
	/* ret */
	RETN(0);
retardbombvel:
	// 9165 
	/* mov	dx,RetardFactors[bx] ;* kill: dx, flags */
	dx = *(dw*)(((db*)&retardfactors)+bx);
edummylabel35:
	// 5185 
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
	/* ret */
	RETN(0);
calcbombccip:
	// 9184 
	// 0 ;------------------
	// 0 ;* copy datum point
	// 0 ;------------------
edummylabel36:
	// 5187 
	/* mov	di,OFFSET CCIP_VIEW */
	di = m2c::near_offset_external(ccip_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 9192 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9193 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;----------------------
	// 0 ;* place CCIP on ground
	// 0 ;----------------------
	/* mov	WORD PTR CCIP_VIEW.VP_ZFT_LO,0 */
	*((dw*)((db*)&ccip_view+vp_zft_lo)) = 0;
	/* mov	WORD PTR CCIP_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&ccip_view+vp_zft_hi)) = 0;
	// 0 ;--------------------------
	// 0 ;* scale down throw < 32768
	// 0 ;--------------------------
	/* xor	bp,bp		;scale count = 0 */
	XOR(bp, bp);
dummylabel102:
	// 5189 
	/* @@:		test	dx,dx		;throw > 65535? */
	TEST(dx, dx);
	/* jz	@F		;no -> */
	if (!(dx & dx)) {goto dummylabel103;}
	/* shr	dx,1		;throw / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* inc	bp		;inc scale count */
	INC(bp);
	/* jmp	@B */
	goto dummylabel102;
dummylabel103:
	// 5191 
	/* @@:		cmp	ax,32768	;throw < 32768? */
	CMP(ax, 32768);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(32768)) {goto dummylabel104;}
	/* shr	ax,1		;throw / 2 */
	SHR(ax, 1);
	/* inc	bp		;inc scale count */
	INC(bp);
	// 0 ;------------------------------
	// 0 ;* calc x and y offsets wrt hdg
	// 0 ;------------------------------
dummylabel104:
	// 5193 
	/* @@:		mov	bx,CCIP_VIEW.VP_HDG */
	bx = ccip_view.vp_hdg;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 9223 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 9224 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	/* mov	bx,ax */
	bx = ax;
	// 0 ;* y offset = throw * cos(hdg)
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
	/* cwd */
	CWD;
	/* xchg	ax,bx		;cx, bx = y offset */
	XCHG(ax, bx);
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* x offset = throw * sin(hdg)
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
	/* cwd			;dx, ax = x offset */
	CWD;
	// 0 ;---------------
	// 0 ;* restore scale
	// 0 ;---------------
	/* xchg	cx,bp */
	XCHG(cx, bp);
	/* jcxz	ScaleOk */
	JCXZ(scaleok);
dummylabel105:
	// 5195 
	/* @@:		shl	ax,1		;x offset * 2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1		;y offset * 2 */
	SHL(bx, 1);
	/* rcl	bp,1 */
	RCL(bp, 1);
	/* loop	@B */
	LOOP(dummylabel105);
scaleok:
	// 5197 
	/* ScaleOk:	xchg	cx,bp */
	XCHG(cx, bp);
	/* mov	si,OFFSET CCIP_VIEW */
	si = m2c::near_offset_external(ccip_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	/* ret */
	RETN(0);
releasepackage:
	// 9279 
	/* xor	bp,bp ;* kill: assume all (except cf) */
	XOR(bp, bp);
dummylabel106:
	// 5199 
	/* @@:		push	ax */
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
	/* call	ReleaseWeapon[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&releaseweapon)+bx));
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
	/* jc	@F		;failed to create weapon -> */
	if (CF) {goto dummylabel107;}
	/* inc	bp */
	INC(bp);
	/* loop	@B */
	LOOP(dummylabel106);
dummylabel107:
	// 5201 
	/* @@:		test	bp,bp		;released any weapons? */
	TEST(bp, bp);
	/* jz	@F		;no -> */
	if (!(bp & bp)) {goto dummylabel108;}
	/* clc			;package released */
	CLC;
	/* ret */
	RETN(0);
dummylabel108:
	// 5203 
	/* @@:		stc			;package not released */
	STC;
	/* ret */
	RETN(0);
releasebomb:
	// 9321 
	// 0 ;-------------------------
	// 0 ;* assume weapon available (initialize wrt pass parameters)
	// 0 ;-------------------------
edummylabel37:
	// 5205 
	/* mov	WPN_Weapon.WPN_TYPE,bx */
	wpn_weapon.wpn_type = bx;
	/* mov	WeaponNum,cx */
	weaponnum = cx;
	/* mov	TargetPtr,di */
	targetptr = di;
	/* mov	WPN_Weapon.WPN_FLAGS,0	;init flags */
	wpn_weapon.wpn_flags = 0;
	/* test	dl,dl			;Tornado release? */
	TEST(dl, dl);
	/* jz	@F			;no -> */
	if (!(dl & dl)) {goto dummylabel109;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	OR(wpn_weapon.wpn_flags, 0x8);
dummylabel109:
	// 5207 
	/* @@:		call	RetardBombVel */
	CALL(retardbombvel, 0);
	/* mov	WeaponVel,ax */
	weaponvel = ax;
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 9338 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9339 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------------------
	// 0 ;* check if weapon available
	// 0 ;---------------------------
	/* call	FindAvailWeapon */
	CALL(findavailweapon, 0);
	/* jnc	__m2c_macrolocal_206_skip */
	if (!CF) {goto __m2c_macrolocal_206_skip;}
	/* jmp	ExitRelBomb */
	goto exitrelbomb;
__m2c_macrolocal_206_skip:
	// 5209 
	// 0 ;cf = 1 (weapon not created) ->
	/* mov	WeaponPtr,si */
	weaponptr = si;
	// 0 ;----------------
	// 0 ;* init MOBILE <>
	// 0 ;----------------
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* shr	bx,1			;/2 byte index */
	SHR(bx, 1);
	/* mov	al,ObjectNum[bx] */
	al = *((&objectnum)+bx);
	/* mov	WPN_Mobile.MOB_NUM,al */
	wpn_mobile.mob_num = al;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE2 */
	wpn_mobile.mob_type = 4;
	/* xor	al,al			;init animation */
	XOR(al, al);
	/* cmp	WPN_Weapon.WPN_TYPE,RET1000	;retarded bomb? */
	CMP(wpn_weapon.wpn_type, 2);
	/* jne	@F				;no -> */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(2)) {goto dummylabel110;}
	/* or	al,RETARDED_BOMB */
	OR(al, 0x1);
dummylabel110:
	// 5211 
	/* @@:		mov	WPN_Mobile.MOB_ANIM,al */
	wpn_mobile.mob_anim = al;
	// 0 ;-------------------
	// 0 ;* init VIEWPOINT <>
	// 0 ;-------------------
	// 0 ;* note: Roll is always set to zero, therefore use OTYPE_MOBILE2 mobiles.
	// 0 ;*	 Zero roll is also required for weapon view.
	/* mov	WPN_View.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	// 0 ;--------------
	// 0 ;* sort release
	// 0 ;--------------
	/* cmp	WPN_Weapon.WPN_TYPE,LGB1000	;LGB? */
	CMP(wpn_weapon.wpn_type, 4);
	/* jne	SkipLGBRelease			;no -> */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(4)) {goto skiplgbrelease;}
	// 0 ;-----------------
	// 0 ;* LGB1000 release
	// 0 ;-----------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO	;Tornado release? */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	ContLGBRelease				;no -> */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto contlgbrelease;}
	/* mov	si,PackagePtr */
	si = packageptr;
	/* cmp	[si].PACK_WEAP_MODE,ARM_LGB	;guided? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)), 8);
	/* je	ContLGBRelease			;yes -> */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode))) == (dw)(8)) {goto contlgbrelease;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_UNGUIDED */
	OR(wpn_weapon.wpn_flags, 0x20);
	/* jmp	SkipLGBRelease */
	goto skiplgbrelease;
contlgbrelease:
	// 5213 
	/* ContLGBRelease:	mov	ax,TargetPtr */
	ax = targetptr;
	/* mov	WPN_Weapon.WPN_LGB_TGT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_lgb_tgt)) = ax;
	/* mov	ax,WeaponVel */
	ax = weaponvel;
	/* mov	WPN_Weapon.WPN_LGB_VEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_lgb_vel)) = ax;
	/* jmp	ContRelBomb */
	goto contrelbomb;
	// 0 ;-------------------------------------------
	// 0 ;* GPB1000 / RET1000 / BL755 / JP233 release
	// 0 ;-------------------------------------------
	// 0 ;* random hdg variation to disperse sub-munitions (JP233 only)
skiplgbrelease:
	// 5215 
	/* SkipLGBRelease:	cmp	WPN_Weapon.WPN_TYPE,JP233	;JP233? */
	CMP(wpn_weapon.wpn_type, 8);
	/* jne	@F				;no -> */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(8)) {goto dummylabel111;}
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* and	al,003h		;-3 .. +3 pdegs */
	AND(al, 0x003);
	/* xor	al,ah */
	XOR(al, ah);
	/* sub	al,ah */
	SUB(al, ah);
	/* cbw */
	CBW;
	/* add	WPN_View.VP_HDG,ax */
	ADD(wpn_view.vp_hdg, ax);
	/* and	WPN_View.VP_HDG,511 */
	AND(wpn_view.vp_hdg, 511);
	// 0 ;* calc sin(pitch) and cos(pitch)
dummylabel111:
	// 5217 
	/* @@:		mov	bx,WPN_View.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 9416 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 9417 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* horizontal velocity = vtas * cos(pitch)
	/* mov	ax,WeaponVel */
	ax = weaponvel;
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
	/* mov	bx,dx */
	bx = dx;
	// 0 ;* add random adjustment to horizontal velocity (seperate bombs)
	/* cmp	WPN_Weapon.WPN_TYPE,JP233	;JP233? */
	CMP(wpn_weapon.wpn_type, 8);
	/* je	@F				;yes, always adjust -> */
	if ((dw)(wpn_weapon.wpn_type) == (dw)(8)) {goto dummylabel112;}
	/* cmp	WeaponNum,1	;first bomb? */
	CMP(weaponnum, 1);
	/* je	HVelOk		;yes, keep accurate -> */
	if ((dw)(weaponnum) == (dw)(1)) {goto hvelok;}
dummylabel112:
	// 5219 
	/* @@:		call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* add	bx,ax */
	ADD(bx, ax);
hvelok:
	// 5221 
	/* HVelOk:		mov	WPN_Weapon.WPN_BOMB_HVEL,bx */
	*((dw*)((db*)&wpn_weapon+wpn_bomb_hvel)) = bx;
	// 0 ;* vertical velocity = vtas * sin(pitch)
	/* mov	ax,WeaponVel */
	ax = weaponvel;
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
	/* mov	bx,dx */
	bx = dx;
	// 0 ;* add random adjustment to vertical velocity (seperate bombs)
	/* cmp	WPN_Weapon.WPN_TYPE,JP233	;JP233? */
	CMP(wpn_weapon.wpn_type, 8);
	/* je	@F				;yes, always adjust -> */
	if ((dw)(wpn_weapon.wpn_type) == (dw)(8)) {goto dummylabel113;}
	/* cmp	WeaponNum,1	;first bomb? */
	CMP(weaponnum, 1);
	/* je	VVelOk		;yes, keep accurate -> */
	if ((dw)(weaponnum) == (dw)(1)) {goto vvelok;}
dummylabel113:
	// 5223 
	/* @@:		call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1 */
	SAR(ax, 1);
	/* sar	ax,1 */
	SAR(ax, 1);
	/* add	bx,ax */
	ADD(bx, ax);
vvelok:
	// 5225 
	/* VVelOk:		mov	WPN_Weapon.WPN_BOMB_VVEL,bx */
	*((dw*)((db*)&wpn_weapon+wpn_bomb_vvel)) = bx;
	// 0 ;---------------------------
contrelbomb:
	// 5227 
	// 0 ;---------------------------
	// 0 ;* xfine, yfine, zfine
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_XFINE,ax */
	wpn_weapon.wpn_xfine = ax;
	/* mov	WPN_Weapon.WPN_YFINE,ax */
	wpn_weapon.wpn_yfine = ax;
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	// 0 ;* hfine, pfine
	/* mov	cl,7		;*128 */
	cl = 7;
	/* mov	ax,WPN_View.VP_HDG */
	ax = wpn_view.vp_hdg;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_HFINE,ax */
	wpn_weapon.wpn_hfine = ax;
	/* mov	ax,WPN_View.VP_PITCH */
	ax = wpn_view.vp_pitch;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	// 0 ;* vertical seperation (not JP233)
	/* cmp	WPN_Weapon.WPN_TYPE,JP233	;JP233? */
	CMP(wpn_weapon.wpn_type, 8);
	/* je	@F				;yes -> */
	if ((dw)(wpn_weapon.wpn_type) == (dw)(8)) {goto dummylabel114;}
	/* mov	ax,WeaponNum */
	ax = weaponnum;
	/* dec	ax */
	DEC(ax);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* sub	WORD PTR WPN_View.VP_ZFT_LO,ax */
	SUB(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* sbb	WORD PTR WPN_View.VP_ZFT_HI,0 */
	SBB(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* jns	@F				;above ground -> */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto dummylabel114;}
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,0 */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = 0;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,0 */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = 0;
	// 0 ;-----------------------------------------
	// 0 ;* if Tornado weapon then sort weapon view
	// 0 ;-----------------------------------------
dummylabel114:
	// 5229 
	/* @@:		test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO	;Tornado? */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	SkipView	     			;no -> */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto skipview;}
	// 0 ;* if JP233 release then keep viewpoint with first bomblet
	/* cmp	WPN_Weapon.WPN_TYPE,JP233	;JP233? */
	CMP(wpn_weapon.wpn_type, 8);
	/* jne	@F				;no -> */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(8)) {goto dummylabel115;}
	/* mov	si,ViewWeaponPtr */
	si = viewweaponptr;
	/* cmp	si,-1		;valid? */
	CMP(si, -1);
	/* je	@F		;no -> */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel115;}
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	bx,_WPN_TYPE[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type)));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* cmp	bx,JP233	;already viewing JP233 bomblet? */
	CMP(bx, 8);
	/* je	SkipView	;yes -> */
	if ((dw)(bx) == (dw)(8)) {goto skipview;}
dummylabel115:
	// 5231 
	/* @@:		mov	ax,WeaponPtr */
	ax = weaponptr;
	/* mov	ViewWeaponPtr,ax */
	viewweaponptr = ax;
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
skipview:
	// 5233 
	/* SkipView: 	mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 9528 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 9530 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 9531 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9532 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (weapon created) */
	CLC;
exitrelbomb:
	// 5235 
	/* ExitRelBomb:	ret */
	RETN(0);
launchalarm:
	// 9553 
	// 0 ;-------------------------
	// 0 ;* assume weapon available (initialize wrt pass parameters)
	// 0 ;-------------------------
edummylabel38:
	// 5237 
	/* mov	WPN_Weapon.WPN_TYPE,ALARM */
	wpn_weapon.wpn_type = 10;
	/* mov	WPN_Weapon.WPN_ALM_VEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_vel)) = ax;
	/* mov	TargetPtr,di */
	targetptr = di;
	/* mov	WPN_Weapon.WPN_FLAGS,0	;init flags */
	wpn_weapon.wpn_flags = 0;
	/* test	dl,dl			;Tornado launch? */
	TEST(dl, dl);
	/* jz	@F			;no -> */
	if (!(dl & dl)) {goto dummylabel116;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	OR(wpn_weapon.wpn_flags, 0x8);
dummylabel116:
	// 5239 
	/* @@:		mov	ax,ALARM_DIRECT		;assume direct */
	ax = 0;
	/* test	dh,dh			;direct attack mode? */
	TEST(dh, dh);
	/* jz	@F			;yes -> */
	if (!(dh & dh)) {goto dummylabel117;}
	/* mov	ax,ALARM_GUIDE */
	ax = 2;
	/* or	WPN_Weapon.WPN_FLAGS,ax */
	OR(wpn_weapon.wpn_flags, ax);
dummylabel117:
	// 5241 
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 9573 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9574 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------------------
	// 0 ;* check if weapon available
	// 0 ;---------------------------
	/* call	FindAvailWeapon */
	CALL(findavailweapon, 0);
	/* jnc	__m2c_macrolocal_212_skip */
	if (!CF) {goto __m2c_macrolocal_212_skip;}
	/* jmp	ExitLaunchAlarm */
	goto exitlaunchalarm;
__m2c_macrolocal_212_skip:
	// 5243 
	// 0 ;cf = 1 (weapon not created) ->
	/* mov	WeaponPtr,si */
	weaponptr = si;
	// 0 ;----------------
	// 0 ;* init MOBILE <>
	// 0 ;----------------
	/* mov	WPN_Mobile.MOB_NUM,MOB_ALARM */
	wpn_mobile.mob_num = 39;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE3	;(roll required) */
	wpn_mobile.mob_type = 6;
	/* mov	WPN_Mobile.MOB_ANIM,FLAME */
	wpn_mobile.mob_anim = 0x1;
	// 0 ;-------------------
	// 0 ;* init VIEWPOINT <>
	// 0 ;-------------------
	// 0 ;* if Tornado and in cockpit then adjust viewpoint zft for visual effect
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel118;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel118;}
	/* add	WORD PTR WPN_View.VP_ZFT_LO,ZFT_COCKPIT */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), zft_cockpit);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
dummylabel118:
	// 5245 
	/* @@:		call	CalcPylonPos */
	CALL(calcpylonpos, 0);
	// 0 ;* set roll to zero for initial missile guidance
	/* mov	WPN_View.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	// 0 ;----------------
	// 0 ;* init WEAPON <>
	// 0 ;----------------
	// 0 ;* xfine, yfine, zfine
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_XFINE,ax */
	wpn_weapon.wpn_xfine = ax;
	/* mov	WPN_Weapon.WPN_YFINE,ax */
	wpn_weapon.wpn_yfine = ax;
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	// 0 ;* hfine, pfine
	/* mov	cl,7		;*128 */
	cl = 7;
	/* mov	ax,WPN_View.VP_HDG */
	ax = wpn_view.vp_hdg;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_HFINE,ax */
	wpn_weapon.wpn_hfine = ax;
	/* mov	ax,WPN_View.VP_PITCH */
	ax = wpn_view.vp_pitch;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	/* mov	WPN_Weapon.WPN_ALM_ACCEL,ALARM_ACCEL */
	*((dw*)((db*)&wpn_weapon+wpn_alm_accel)) = 200*8;
	/* mov	WPN_Weapon.WPN_ALM_TIMER,ALARM_BURNTIME */
	*((dw*)((db*)&wpn_weapon+wpn_alm_timer)) = 10*100;
	// 0 ;* sort target position
	/* mov	si,TargetPtr */
	si = targetptr;
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	WPN_Weapon.WPN_ALM_XSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xsec)) = ax;
	/* mov	ax,[si].VP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* mov	WPN_Weapon.WPN_ALM_YSEC,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_ysec)) = ax;
	/* mov	ax,[si].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	WPN_Weapon.WPN_ALM_XFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_xft)) = ax;
	/* mov	ax,[si].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	WPN_Weapon.WPN_ALM_YFT,ax */
	*((dw*)((db*)&wpn_weapon+wpn_alm_yft)) = ax;
	// 0 ;-----------------------------------------
	// 0 ;* if Tornado weapon then sort weapon view
	// 0 ;-----------------------------------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO	;Tornado? */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F		     			;no -> */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel119;}
	/* mov	ax,WeaponPtr */
	ax = weaponptr;
	/* mov	ViewWeaponPtr,ax */
	viewweaponptr = ax;
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
dummylabel119:
	// 5247 
	/* @@:		mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 9658 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 9660 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 9661 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9662 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (weapon created) */
	CLC;
exitlaunchalarm:
	// 5249 
	/* ExitLaunchAlarm:ret */
	RETN(0);
firecannon:
	// 9687 
	// 0 ;-------------------------
	// 0 ;* assume weapon available (initialize wrt pass parameters)
	// 0 ;-------------------------
edummylabel39:
	// 5251 
	/* mov	WPN_Weapon.WPN_CAN_SRC,di */
	*((dw*)((db*)&wpn_weapon+wpn_can_src)) = di;
	/* mov	WPN_Weapon.WPN_FLAGS,0	;init flags */
	wpn_weapon.wpn_flags = 0;
	/* test	dl,dl			;Tornado release? */
	TEST(dl, dl);
	/* jz	@F			;no -> */
	if (!(dl & dl)) {goto dummylabel120;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	OR(wpn_weapon.wpn_flags, 0x8);
dummylabel120:
	// 5253 
	/* @@:		mov	WeaponVel,ax */
	weaponvel = ax;
	/* mov	WPN_Mobile.MOB_ANIM,dh */
	wpn_mobile.mob_anim = dh;
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 9702 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9703 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------------------
	// 0 ;* check if weapon available
	// 0 ;---------------------------
	/* call	FindAvailWeapon */
	CALL(findavailweapon, 0);
	/* jnc	__m2c_macrolocal_215_skip */
	if (!CF) {goto __m2c_macrolocal_215_skip;}
	/* jmp	ExitFireCannon */
	goto exitfirecannon;
__m2c_macrolocal_215_skip:
	// 5255 
	// 0 ;cf = 1 (weapon not created) ->
	/* mov	WeaponPtr,si */
	weaponptr = si;
	// 0 ;----------------
	// 0 ;* init MOBILE <>
	// 0 ;----------------
	/* mov	WPN_Mobile.MOB_NUM,MOB_TRACER */
	wpn_mobile.mob_num = 48;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE3 */
	wpn_mobile.mob_type = 6;
	// 0 ;-------------------
	// 0 ;* init VIEWPOINT <>
	// 0 ;-------------------
	// 0 ;* if Tornado and in cockpit then
	// 0 ;*    adjust viewpoint zft and object animation for visual effect
	// 0 ;* endif
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel121;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel121;}
	/* add	WORD PTR WPN_View.VP_ZFT_LO,ZFT_COCKPIT */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), zft_cockpit);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* mov	al,WPN_Mobile.MOB_ANIM */
	al = wpn_mobile.mob_anim;
	/* shl	al,1 */
	SHL(al, 1);
	/* shl	al,1 */
	SHL(al, 1);
	/* mov	WPN_Mobile.MOB_ANIM,al */
	wpn_mobile.mob_anim = al;
	// 0 ;----------------
	// 0 ;* init WEAPON <>
	// 0 ;----------------
dummylabel121:
	// 5257 
	/* @@:		mov	WPN_Weapon.WPN_TYPE,CANNON */
	wpn_weapon.wpn_type = 12;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_HFINE,ax */
	wpn_weapon.wpn_hfine = ax;
	/* mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	/* mov	WPN_Weapon.WPN_XFINE,ax */
	wpn_weapon.wpn_xfine = ax;
	/* mov	WPN_Weapon.WPN_YFINE,ax */
	wpn_weapon.wpn_yfine = ax;
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	/* mov	WPN_Weapon.WPN_CAN_TIMER,SHELL_LIFETIME */
	*((dw*)((db*)&wpn_weapon+wpn_can_timer)) = 3*100;
	// 0 ;* vel = min(vtas + muzzle velocity, 32767)
	/* mov WeaponVel,0 */
	weaponvel = 0;
	/* mov	bp,WeaponVel */
	bp = weaponvel;
	/* add	bp,MUZZLE_VELOCITY */
	ADD(bp, 3363*8);
	/* cmp	bp,32767 */
	CMP(bp, 32767);
	/* jbe	@F */
	if ((dw)(bp) <= (dw)(32767)) {goto dummylabel122;}
	/* mov	bp,32767 */
	bp = 32767;
	// 0 ;* calc sin(pitch) and cos(pitch)
dummylabel122:
	// 5259 
	/* @@:		mov	bx,WPN_View.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 9766 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 9767 mov	di,CosTable[bx] */
	// 0 ;* horizontal velocity = vtas * cos(pitch)
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
	/* mov	WPN_Weapon.WPN_CAN_HVEL,dx */
	*((dw*)((db*)&wpn_weapon+wpn_can_hvel)) = dx;
	// 0 ;* vertical velocity = vtas * sin(pitch)
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
	/* mov	WPN_Weapon.WPN_CAN_VVEL,dx */
	*((dw*)((db*)&wpn_weapon+wpn_can_vvel)) = dx;
	// 0 ;-----------------------------------------
	// 0 ;* if Tornado weapon then sort weapon view
	// 0 ;-----------------------------------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO	;Tornado? */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F		     			;no -> */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel123;}
	/* mov	ax,WeaponPtr */
	ax = weaponptr;
	/* mov	ViewWeaponPtr,ax */
	viewweaponptr = ax;
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
dummylabel123:
	// 5261 
	/* @@:		mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 9804 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 9806 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 9807 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9808 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (weapon created) */
	CLC;
exitfirecannon:
	// 5263 
	/* ExitFireCannon:	ret */
	RETN(0);
launchmissile:
	// 9828 
	// 0 ;-------------------------
	// 0 ;* assume weapon available (initialize wrt pass parameters)
	// 0 ;-------------------------
edummylabel40:
	// 5265 
	/* mov	WPN_Weapon.WPN_TYPE,bx */
	wpn_weapon.wpn_type = bx;
	/* mov	WPN_Weapon.WPN_MISS_VEL,ax */
	*((dw*)((db*)&wpn_weapon+wpn_miss_vel)) = ax;
	/* mov	WPN_Weapon.WPN_MISS_TGT,di */
	*((dw*)((db*)&wpn_weapon+wpn_miss_tgt)) = di;
	/* mov	WPN_Weapon.WPN_FLAGS,0	;init flags */
	wpn_weapon.wpn_flags = 0;
	/* test	dl,dl			;Tornado launch? */
	TEST(dl, dl);
	/* jz	@F			;no -> */
	if (!(dl & dl)) {goto dummylabel124;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	OR(wpn_weapon.wpn_flags, 0x8);
dummylabel124:
	// 5267 
	/* @@:		cmp	di,OFFSET M_MOBILE	;missile locked onto Tornado? */
	CMP(di, m2c::near_offset_external(m_mobile));
	/* jne	@F			;no -> */
	if ((dw)(di) != (dw)(m2c::near_offset_external(m_mobile))) {goto dummylabel125;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_TLOCK */
	OR(wpn_weapon.wpn_flags, 0x800);
dummylabel125:
	// 5269 
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 9846 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9847 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------------------
	// 0 ;* check if weapon available
	// 0 ;---------------------------
	/* call	FindAvailWeapon */
	CALL(findavailweapon, 0);
	/* jnc	__m2c_macrolocal_221_skip */
	if (!CF) {goto __m2c_macrolocal_221_skip;}
	/* jmp	ExitLaunchMiss */
	goto exitlaunchmiss;
__m2c_macrolocal_221_skip:
	// 5271 
	// 0 ;cf = 1 (weapon not created) ->
	/* mov	WeaponPtr,si */
	weaponptr = si;
	// 0 ;----------------
	// 0 ;* init MOBILE <>
	// 0 ;----------------
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* shr	bx,1			;/2 byte index */
	SHR(bx, 1);
	/* mov	al,ObjectNum[bx] */
	al = *((&objectnum)+bx);
	/* mov	WPN_Mobile.MOB_NUM,al */
	wpn_mobile.mob_num = al;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE2 */
	wpn_mobile.mob_type = 4;
	/* mov	WPN_Mobile.MOB_ANIM,FLAME */
	wpn_mobile.mob_anim = 0x1;
	// 0 ;-------------------
	// 0 ;* init VIEWPOINT <>
	// 0 ;-------------------
	// 0 ;* if Tornado and in cockpit then adjust viewpoint zft for visual effect
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel126;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel126;}
	/* add	WORD PTR WPN_View.VP_ZFT_LO,ZFT_COCKPIT */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), zft_cockpit);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
dummylabel126:
	// 5273 
	/* @@:		call	CalcPylonPos */
	CALL(calcpylonpos, 0);
	// 0 ;* note: Roll is always set to zero, therefore use OTYPE_MOBILE2 mobiles.
	// 0 ;*	 Zero roll is also required for weapon view.
	/* mov	WPN_View.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	// 0 ;----------------
	// 0 ;* init WEAPON <>
	// 0 ;----------------
	// 0 ;* xfine, yfine, zfine
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_XFINE,ax */
	wpn_weapon.wpn_xfine = ax;
	/* mov	WPN_Weapon.WPN_YFINE,ax */
	wpn_weapon.wpn_yfine = ax;
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	// 0 ;* hfine, pfine
	/* mov	cl,7		;*128 */
	cl = 7;
	/* mov	ax,WPN_View.VP_HDG */
	ax = wpn_view.vp_hdg;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_HFINE,ax */
	wpn_weapon.wpn_hfine = ax;
	/* mov	ax,WPN_View.VP_PITCH */
	ax = wpn_view.vp_pitch;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	// 0 ;* sort Sidewinder
	/* cmp	WPN_Weapon.WPN_TYPE,SIDEWINDER */
	CMP(wpn_weapon.wpn_type, 14);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(14)) {goto dummylabel127;}
	/* mov	WPN_Weapon.WPN_MISS_ACCEL,SIDE_ACCEL */
	*((dw*)((db*)&wpn_weapon+wpn_miss_accel)) = 1500*8;
	/* mov	WPN_Weapon.WPN_MISS_TIMER,SIDE_BURNTIME */
	*((dw*)((db*)&wpn_weapon+wpn_miss_timer)) = 2*100;
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_IR_SEEK */
	OR(wpn_weapon.wpn_flags, 0x100);
	/* jmp	SortMissOk */
	goto sortmissok;
	// 0 ;* sort Sky Flash
dummylabel127:
	// 5275 
	/* @@:		cmp	WPN_Weapon.WPN_TYPE,SKYFLASH */
	CMP(wpn_weapon.wpn_type, 16);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(16)) {goto dummylabel128;}
	/* mov	WPN_Weapon.WPN_MISS_ACCEL,SKY_ACCEL */
	*((dw*)((db*)&wpn_weapon+wpn_miss_accel)) = 571*8;
	/* mov	WPN_Weapon.WPN_MISS_TIMER,SKY_BURNTIME */
	*((dw*)((db*)&wpn_weapon+wpn_miss_timer)) = 7*100;
	/* jmp	SortMissOk */
	goto sortmissok;
	// 0 ;* sort Patriot
dummylabel128:
	// 5277 
	/* @@:		cmp	WPN_Weapon.WPN_TYPE,PATRIOT */
	CMP(wpn_weapon.wpn_type, 18);
	/* jne	@F */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(18)) {goto dummylabel129;}
	/* mov	WPN_Weapon.WPN_MISS_ACCEL,SAM_ACCEL */
	*((dw*)((db*)&wpn_weapon+wpn_miss_accel)) = 500*8;
	/* mov	WPN_Weapon.WPN_MISS_TIMER,SAM_BURNTIME */
	*((dw*)((db*)&wpn_weapon+wpn_miss_timer)) = 3*100;
	/* jmp	SortMissOk */
	goto sortmissok;
	// 0 ;* sort Gecko
dummylabel129:
	// 5279 
	/* @@:		mov	WPN_Weapon.WPN_MISS_ACCEL,SAM_ACCEL */
	*((dw*)((db*)&wpn_weapon+wpn_miss_accel)) = 500*8;
	/* mov	WPN_Weapon.WPN_MISS_TIMER,SAM_BURNTIME */
	*((dw*)((db*)&wpn_weapon+wpn_miss_timer)) = 3*100;
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_IR_SEEK */
	OR(wpn_weapon.wpn_flags, 0x100);
	// 0 ;* reset decoy timer (allow time for clearance before enabling guidance)
sortmissok:
	// 5281 
	/* SortMissOk:	mov	WPN_Weapon.WPN_MISS_DECOY,50 */
	*((dw*)((db*)&wpn_weapon+wpn_miss_decoy)) = 50;
	// 0 ;-----------------------------------------
	// 0 ;* if Tornado weapon then sort weapon view
	// 0 ;-----------------------------------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO	;Tornado? */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F		     			;no -> */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel130;}
	/* mov	ax,WeaponPtr */
	ax = weaponptr;
	/* mov	ViewWeaponPtr,ax */
	viewweaponptr = ax;
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
dummylabel130:
	// 5283 
	/* @@:		mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 9952 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 9954 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 9955 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 9956 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (weapon created) */
	CLC;
exitlaunchmiss:
	// 5285 
	/* ExitLaunchMiss:	ret */
	RETN(0);
releasedecoy:
	// 9975 
	// 0 ;-------------------------
	// 0 ;* assume weapon available (initialize wrt pass parameters)
	// 0 ;-------------------------
edummylabel41:
	// 5287 
	/* mov	WPN_Weapon.WPN_TYPE,bx */
	wpn_weapon.wpn_type = bx;
	/* mov	WPN_Weapon.WPN_FLAGS,0	;init flags */
	wpn_weapon.wpn_flags = 0;
	/* test	dl,dl			;Tornado release? */
	TEST(dl, dl);
	/* jz	@F			;no -> */
	if (!(dl & dl)) {goto dummylabel131;}
	/* or	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	OR(wpn_weapon.wpn_flags, 0x8);
	// 0 ;* sort retard velocity and lifetime
dummylabel131:
	// 5289 
	/* @@:		mov	dx,CHAFF_RETARD */
	dx = 16384;
	/* mov	bp,CHAFF_LIFE */
	bp = 5*100;
	/* cmp	bx,CHAFF */
	CMP(bx, 22);
	/* je	@F */
	if ((dw)(bx) == (dw)(22)) {goto dummylabel132;}
	/* mov	dx,FLARE_RETARD */
	dx = 24576;
	/* mov	bp,FLARE_LIFE */
	bp = 5*100;
dummylabel132:
	// 5291 
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
	/* mov	WeaponVel,dx */
	weaponvel = dx;
	/* mov	WPN_Weapon.WPN_DECOY_LIFE,bp */
	*((dw*)((db*)&wpn_weapon+wpn_decoy_life)) = bp;
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 10003 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 10004 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------------------
	// 0 ;* check if weapon available
	// 0 ;---------------------------
	/* call	FindAvailWeapon */
	CALL(findavailweapon, 0);
	/* jnc	__m2c_macrolocal_225_skip */
	if (!CF) {goto __m2c_macrolocal_225_skip;}
	/* jmp	ExitRelDecoy */
	goto exitreldecoy;
__m2c_macrolocal_225_skip:
	// 5293 
	// 0 ;cf = 1 (decoy not created) ->
	/* mov	WeaponPtr,si */
	weaponptr = si;
	// 0 ;----------------
	// 0 ;* init MOBILE <>
	// 0 ;----------------
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* shr	bx,1			;/2 byte index */
	SHR(bx, 1);
	/* mov	al,ObjectNum[bx] */
	al = *((&objectnum)+bx);
	/* mov	WPN_Mobile.MOB_NUM,al */
	wpn_mobile.mob_num = al;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE2 */
	wpn_mobile.mob_type = 4;
	/* mov	WPN_Mobile.MOB_ANIM,0 */
	wpn_mobile.mob_anim = 0;
	// 0 ;-------------------
	// 0 ;* init VIEWPOINT <>
	// 0 ;-------------------
	// 0 ;* if Tornado and in cockpit then adjust viewpoint zft for visual effect
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel133;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel133;}
	/* add	WORD PTR WPN_View.VP_ZFT_LO,ZFT_COCKPIT-4 */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), zft_cockpit-4);
	/* add	WORD PTR WPN_View.VP_XFT,ZFT_COCKPIT */
	ADD(wpn_view.vp_xft, zft_cockpit);
	/* add	WORD PTR WPN_View.VP_YFT,ZFT_COCKPIT */
	ADD(wpn_view.vp_yft, zft_cockpit);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
dummylabel133:
	// 5295 
	/* @@:		call	CalcDecoyPos */
	CALL(calcdecoypos, 0);
	// 0 ;* note: Roll is always set to zero, therefore use OTYPE_MOBILE2 mobiles.
	/* mov	WPN_View.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	// 0 ;----------------
	// 0 ;* init WEAPON <>
	// 0 ;----------------
	// 0 ;* calc sin(pitch) and cos(pitch)
	/* mov	bx,WPN_View.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 10055 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 10056 mov	di,CosTable[bx] */
	// 0 ;* horizontal velocity = vtas * cos(pitch)
	/* mov	ax,WeaponVel */
	ax = weaponvel;
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
	/* mov	WPN_Weapon.WPN_DECOY_HVEL,dx */
	*((dw*)((db*)&wpn_weapon+wpn_decoy_hvel)) = dx;
	// 0 ;* vertical velocity = vtas * sin(pitch)
	/* mov	ax,WeaponVel */
	ax = weaponvel;
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
	/* mov	WPN_Weapon.WPN_DECOY_VVEL,dx */
	*((dw*)((db*)&wpn_weapon+wpn_decoy_vvel)) = dx;
	// 0 ;* xfine, yfine, zfine
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WPN_Weapon.WPN_XFINE,ax */
	wpn_weapon.wpn_xfine = ax;
	/* mov	WPN_Weapon.WPN_YFINE,ax */
	wpn_weapon.wpn_yfine = ax;
	/* mov	WPN_Weapon.WPN_ZFINE,ax */
	wpn_weapon.wpn_zfine = ax;
	// 0 ;* hfine, pfine
	/* mov	cl,7		;*128 */
	cl = 7;
	/* mov	ax,WPN_View.VP_HDG */
	ax = wpn_view.vp_hdg;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_HFINE,ax */
	wpn_weapon.wpn_hfine = ax;
	/* mov	ax,WPN_View.VP_PITCH */
	ax = wpn_view.vp_pitch;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* mov	WPN_Weapon.WPN_PFINE,ax */
	wpn_weapon.wpn_pfine = ax;
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 10100 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 10102 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 10103 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 10104 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (decoy created) */
	CLC;
exitreldecoy:
	// 5297 
	/* ExitRelDecoy:	ret */
	RETN(0);
findavailweapon:
	// 10121 
	/* mov	ax,WPNDATA ;* kill: ax, cx, flags (except cf) */
	ax = seg_offset(wpndata);
edummylabel42:
	// 5299 
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	cx,NUM_WEAPONS */
	cx = 128;
	/* mov	si,OFFSET WeaponList */
	si = m2c::near_offset_external(weaponlist);
findwpnloop:
	// 5301 
	/* FindWpnLoop:	cmp	si,ViewWeaponPtr	;used by view weapon? */
	CMP(si, viewweaponptr);
	/* je	@F			;yes -> */
	if ((dw)(si) == (dw)(viewweaponptr)) {goto dummylabel134;}
	/* cmp	ES:_WPN_TYPE[si],NULL_WEAPON	;unused? */
	CMP(*(dw*)&((weapon*)raddr(es,(6+18)+si))->wpn_type, -1);
	/* je	WeaponAvail	 		;yes -> */
	if ((dw)(*(dw*)&((weapon*)raddr(es,(6+18)+si))->wpn_type) == (dw)(-1)) {goto weaponavail;}
dummylabel134:
	// 5303 
	/* @@:		add	si,WPN_DATA_SIZE */
	ADD(si, 6+18+28);
	/* loop	FindWpnLoop */
	LOOP(findwpnloop);
	/* stc			;cf = 1 (no weapon available) */
	STC;
	/* mov	si,-1 */
	si = -1;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* ret */
	RETN(0);
weaponavail:
	// 5305 
	/* WeaponAvail:	clc			;cf = 0 (weapon available) */
	CLC;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* ret */
	RETN(0);
storeimpact:
	// 10154 
	// 0 ;--------------------------
	// 0 ;* check impact point valid
	// 0 ;--------------------------
	// 0 ;* any room in buffer?
edummylabel43:
	// 5307 
	/* cmp	ImpactPtr,OFFSET ImpactListEnd */
	CMP(impactptr, m2c::near_offset_external(impactlistend));
	/* je	ExitImpact */
	if ((dw)(impactptr) == (dw)(m2c::near_offset_external(impactlistend))) {goto exitimpact;}
	// 0 ;* ignore cannon shells (too many and not useful data)
	/* cmp	WPN_Weapon.WPN_TYPE,CANNON */
	CMP(wpn_weapon.wpn_type, 12);
	/* je	ExitImpact */
	if ((dw)(wpn_weapon.wpn_type) == (dw)(12)) {goto exitimpact;}
	// 0 ;* land on active map?
	/* cmp	WPN_View.VP_XSEC,31 */
	CMP(wpn_view.vp_xsec, 31);
	/* ja	ExitImpact */
	if ((dw)(wpn_view.vp_xsec) > (dw)(31)) {goto exitimpact;}
	/* cmp	WPN_View.VP_YSEC,31 */
	CMP(wpn_view.vp_ysec, 31);
	/* ja	ExitImpact */
	if ((dw)(wpn_view.vp_ysec) > (dw)(31)) {goto exitimpact;}
	// 0 ;--------------------
	// 0 ;* store impact point
	// 0 ;--------------------
	/* mov	di,ImpactPtr */
	di = impactptr;
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	ax,WPN_View.VP_XSEC */
	ax = wpn_view.vp_xsec;
	/* mov	ES:[di].IMP_XSEC,al */
	m2c::setdata(&(*((db*)((db*)&((impact*)raddr(es,di))->imp_xsec))), m2c::getdata(al));
	/* mov	ax,WPN_View.VP_YSEC */
	ax = wpn_view.vp_ysec;
	/* mov	ES:[di].IMP_YSEC,al */
	m2c::setdata(&(*((db*)((db*)&((impact*)raddr(es,di))->imp_ysec))), m2c::getdata(al));
	/* mov	ax,WPN_View.VP_XFT */
	ax = wpn_view.vp_xft;
	/* mov	ES:[di].IMP_XFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((impact*)raddr(es,di))->imp_xft))), m2c::getdata(ax));
	/* mov	ax,WPN_View.VP_YFT */
	ax = wpn_view.vp_yft;
	/* mov	ES:[di].IMP_YFT,ax */
	m2c::setdata(&(*((dw*)((db*)&((impact*)raddr(es,di))->imp_yft))), m2c::getdata(ax));
	/* mov	ax,WPN_Weapon.WPN_TYPE */
	ax = wpn_weapon.wpn_type;
	/* mov	ES:[di].IMP_WEAP_TYPE,al */
	m2c::setdata(&(*((db*)((db*)&((impact*)raddr(es,di))->imp_weap_type))), m2c::getdata(al));
	/* mov	ax,ImpactSurface */
	ax = impactsurface;
	/* mov	ES:[di].IMP_SURF_TYPE,al */
	m2c::setdata(&(*((db*)((db*)&((impact*)raddr(es,di))->imp_surf_type))), m2c::getdata(al));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* update ptr
	/* add	ImpactPtr,IMP_REC_SIZE */
	ADD(impactptr, 8);
exitimpact:
	// 5309 
	/* ExitImpact:	ret */
	RETN(0);
proximitykill:
	// 10210 
	// 0 ;----------------------------------
	// 0 ;* check impact point on active map
	// 0 ;----------------------------------
edummylabel44:
	// 5311 
	/* cmp	WPN_View.VP_XSEC,31 */
	CMP(wpn_view.vp_xsec, 31);
	/* ja	ExitProxKill */
	if ((dw)(wpn_view.vp_xsec) > (dw)(31)) {goto exitproxkill;}
	/* cmp	WPN_View.VP_YSEC,31 */
	CMP(wpn_view.vp_ysec, 31);
	/* ja	ExitProxKill */
	if ((dw)(wpn_view.vp_ysec) > (dw)(31)) {goto exitproxkill;}
	// 0 ;----------------------------------------------
	// 0 ;* copy impact viewpoint to auxillary viewpoint
	// 0 ;----------------------------------------------
	// 0 ;* aux viewpoint used to place explosions and smoke at object position
	/* mov	si,OFFSET WPN_View */
	si = m2c::near_offset_external(wpn_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 10229 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 10230 						mov	di,OFFSET TMP_VIEW */
	// 10231 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* hdg always zero (mobile crater has same orientation as fixed crater)
	/* mov	TMP_VIEW.VP_HDG,0 */
	tmp_view.vp_hdg = 0;
	// 0 ;-----------------
	// 0 ;* destroy objects
	// 0 ;-----------------
	/* call	KillGndObjects */
	CALL(killgndobjects, 0);
	/* call	KillStatMobiles */
	CALL(killstatmobiles, 0);
	/* call	KillMobiles */
	CALL(killmobiles, 0);
	/* call	KillTrees */
	CALL(killtrees, 0);
exitproxkill:
	// 5313 
	/* ExitProxKill:	ret */
	RETN(0);
killgndobjects:
	// 10256 
	// 0 ;----------------------------
	// 0 ;* get ground object list ptr (if occupied sector)
	// 0 ;----------------------------
	// 0 ;* calc map index = x sec + y sec * 32
edummylabel45:
	// 5315 
	/* mov	bp,WPN_View.VP_YSEC */
	bp = wpn_view.vp_ysec;
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
	/* add	bp,WPN_View.VP_XSEC */
	ADD(bp, wpn_view.vp_xsec);
	// 0 ;* test for occupied sector
	/* mov	al,SectorLayer1[bp] */
	al = *((&sectorlayer1)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_231_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_231_skip;}
	/* jmp	KillGndExit */
	goto killgndexit;
__m2c_macrolocal_231_skip:
	// 5317 
	// 0 ;* calc ptr to sector data record
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* add	bx,OFFSET SectorTable */
	ADD(bx, m2c::near_offset_external(sectortable));
	// m2c-dedup: removed duplicate expansion row: R(ADD(bx, m2c::near_offset_external(sectortable)));	// 10286 						add	bx,OFFSET SectorTable
	// 0 ;* get ptr to ground object list
	/* mov	si,[bx].SEC_OBJ_PTR */
	si = m2c::getdata(*((dw*)((db*)&((sectordata*)raddr(ds,bx))->sec_obj_ptr)));
	// 0 ;-------------------------
	// 0 ;* scan ground object list
	// 0 ;-------------------------
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
gndobjloop:
	// 5319 
	// 0 ;---------------------------
	// 0 ;* check for end of list (-1 terminator)
	/* cmp	ES:[si].GND_NUM,-1 */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_num)), -1);
	/* jne	__m2c_macrolocal_233_skip */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_num))) != (db)(-1)) {goto __m2c_macrolocal_233_skip;}
	/* jmp	ExitGndObj */
	goto exitgndobj;
__m2c_macrolocal_233_skip:
	// 5321 
	// 0 ;* check object in play
	/* test	ES:[si].GND_ANIM,OBJECT_DEAD */
	TEST(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_anim)), 0x80);
	/* jz	__m2c_macrolocal_234_skip */
	if (!(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_anim)) & 0x80)) {goto __m2c_macrolocal_234_skip;}
	/* jmp	NextGndObj */
	goto nextgndobj;
__m2c_macrolocal_234_skip:
	// 5323 
	// 0 ;* fetch object damage flags
	/* mov	bl,ES:[si].GND_NUM */
	bl = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	ch,GndDamageFlags[bx] */
	ch = *((&gnddamageflags)+bx);
	// 0 ;* check valid target
	/* test	ch,DAM_INVALID */
	TEST(ch, 0x80);
	/* jz	__m2c_macrolocal_235_skip */
	if (!(ch & 0x80)) {goto __m2c_macrolocal_235_skip;}
	/* jmp	NextGndObj */
	goto nextgndobj;
__m2c_macrolocal_235_skip:
	// 5325 
	// 0 ;* fetch weapon damage radius and effectiveness
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* mov	bp,WeaponRadius[bx] */
	bp = *(dw*)(((db*)&weaponradius)+bx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,WeaponEffect[bx] */
	al = *((&weaponeffect)+bx);
	// 0 ;* check weapon effectiveness >= object hardness
	/* mov	cl,ch */
	cl = ch;
	/* and	cl,DAM_HARD_MASK */
	AND(cl, 0x3);
	/* cmp	al,cl */
	CMP(al, cl);
	/* jae	__m2c_macrolocal_236_skip */
	if ((db)(al) >= (db)(cl)) {goto __m2c_macrolocal_236_skip;}
	/* jmp	NextGndObj */
	goto nextgndobj;
__m2c_macrolocal_236_skip:
	// 5327 
	// 0 ;* adjust damage radius wrt object hardness
	/* shr	bp,cl */
	SHR(bp, cl);
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta xft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* xft = (x grid * 256) - 8192
	/* mov	ah,ES:[si].GND_XGRID */
	ah = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_xgrid)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	// 0 ;* set aux viewpoint xft at object position
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	// 0 ;* calc abs(delta xft)
	/* sub	ax,WPN_View.VP_XFT */
	SUB(ax, wpn_view.vp_xft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta xft) within damage radius
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	NextGndObj */
	if ((dw)(ax) > (dw)(bp)) {goto nextgndobj;}
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta yft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* yft = (y grid * 256) - 8192
	/* mov	ah,ES:[si].GND_YGRID */
	ah = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_ygrid)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	// 0 ;* set aux viewpoint yft at object position
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	// 0 ;* calc abs(delta yft)
	/* sub	ax,WPN_View.VP_YFT */
	SUB(ax, wpn_view.vp_yft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta yft) within damage radius
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	NextGndObj */
	if ((dw)(ax) > (dw)(bp)) {goto nextgndobj;}
	// 0 ;----------------
	// 0 ;* destroy object
	// 0 ;----------------
	// 0 ;* kill object
	/* or	ES:[si].GND_ANIM,OBJECT_DEAD */
	OR(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_anim)), 0x80);
	// 0 ;* inc kills (if Tornado weapon and enemy target)
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	SkipKillGnd */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto skipkillgnd;}
	/* mov	bl,ES:[si].GND_NUM */
	bl = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* test	ES:[si].GND_ANIM,OBJECT_ENEMY */
	TEST(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_anim)), 0x40);
	/* jz	@F */
	if (!(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_anim)) & 0x40)) {goto dummylabel135;}
	/* inc	EGndKills[bx] */
	INC(*((&egndkills)+bx));
	/* jmp	SkipKillGnd */
	goto skipkillgnd;
dummylabel135:
	// 5329 
	/* @@: 		inc	AGndKills[bx] */
	INC(*((&agndkills)+bx));
	// 0 ;* sort object debris
skipkillgnd:
	// 5331 
	/* SkipKillGnd:	mov	bl,ch */
	bl = ch;
	/* and	bl,DAM_DEBRIS_MASK */
	AND(bl, 0x1c);
	/* shr	bl,1 */
	SHR(bl, 1);
	/* shr	bl,1 */
	SHR(bl, 1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	al,DebrisType[bx] */
	al = *((&debristype)+bx);
	/* mov	ES:[si].GND_NUM,al */
	m2c::setdata(&(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_num))), m2c::getdata(al));
	/* and	ES:[si].GND_ANIM,OBJECT_CLEAR */
	AND(*((db*)((db*)&((gndobj*)raddr(es,si))->gnd_anim)), 0xc0);
	// 0 ;* make explosion effect
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,ch */
	al = ch;
	/* push	si */
	PUSH(si);
	/* call	CreateExplosion */
	CALL(createexplosion, 0);
	/* pop	si */
	POP(si);
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
nextgndobj:
	// 5333 
	/* NextGndObj:	add	si,GND_REC_SIZE */
	ADD(si, 4);
	/* jmp	GndObjLoop */
	goto gndobjloop;
exitgndobj:
	// 5335 
	/* ExitGndObj:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
killgndexit:
	// 5337 
	/* KillGndExit:	ret */
	RETN(0);
killstatmobiles:
	// 10442 
	// 0 ;----------------------------
	// 0 ;* get static mobile list ptr (if occupied sector)
	// 0 ;----------------------------
	// 0 ;* calc map index = x sec + y sec * 32
edummylabel46:
	// 5339 
	/* mov	bp,WPN_View.VP_YSEC */
	bp = wpn_view.vp_ysec;
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
	/* add	bp,WPN_View.VP_XSEC */
	ADD(bp, wpn_view.vp_xsec);
	// 0 ;* test for occupied sector
	/* mov	bl,MobileLayer1[bp] */
	bl = *((&mobilelayer1)+bp);
	/* test	bl,bl */
	TEST(bl, bl);
	/* jnz	__m2c_macrolocal_239_skip */
	if ((bl & bl) != 0) {goto __m2c_macrolocal_239_skip;}
	/* jmp	KillStatExit */
	goto killstatexit;
__m2c_macrolocal_239_skip:
	// 5341 
	// 0 ;* get ptr to static mobile list
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	si,MobSectorTable[bx] */
	si = *(dw*)(((db*)&mobsectortable)+bx);
	// 0 ;-------------------------
	// 0 ;* scan static mobile list
	// 0 ;-------------------------
	/* mov	ax,MSECDATA1 */
	ax = seg_offset(msecdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
statmobloop:
	// 5343 
	// 0 ;---------------------------
	// 0 ;* check for end of list (-1 terminator)
	/* cmp	ES:[si].STAT_NUM,-1 */
	CMP(*((db*)((db*)&((statmob*)raddr(es,si))->stat_num)), -1);
	/* jne	__m2c_macrolocal_240_skip */
	if ((db)(*((db*)((db*)&((statmob*)raddr(es,si))->stat_num))) != (db)(-1)) {goto __m2c_macrolocal_240_skip;}
	/* jmp	ExitStatMob */
	goto exitstatmob;
__m2c_macrolocal_240_skip:
	// 5345 
	// 0 ;* check object in play
	/* test	ES:[si].STAT_ANIM,OBJECT_DEAD */
	TEST(*((db*)((db*)&((statmob*)raddr(es,si))->stat_anim)), 0x80);
	/* jz	__m2c_macrolocal_241_skip */
	if (!(*((db*)((db*)&((statmob*)raddr(es,si))->stat_anim)) & 0x80)) {goto __m2c_macrolocal_241_skip;}
	/* jmp	NextStatMob */
	goto nextstatmob;
__m2c_macrolocal_241_skip:
	// 5347 
	// 0 ;* fetch object damage flags
	/* mov	bl,ES:[si].STAT_NUM */
	bl = m2c::getdata(*((db*)((db*)&((statmob*)raddr(es,si))->stat_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	ch,MobDamageFlags[bx] */
	ch = *((&mobdamageflags)+bx);
	// 0 ;* check valid target
	/* test	ch,DAM_INVALID */
	TEST(ch, 0x80);
	/* jz	__m2c_macrolocal_242_skip */
	if (!(ch & 0x80)) {goto __m2c_macrolocal_242_skip;}
	/* jmp	NextStatMob */
	goto nextstatmob;
__m2c_macrolocal_242_skip:
	// 5349 
	// 0 ;* fetch weapon damage radius and effectiveness
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* mov	bp,WeaponRadius[bx] */
	bp = *(dw*)(((db*)&weaponradius)+bx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,WeaponEffect[bx] */
	al = *((&weaponeffect)+bx);
	// 0 ;* check weapon effectiveness >= object hardness
	/* mov	cl,ch */
	cl = ch;
	/* and	cl,DAM_HARD_MASK */
	AND(cl, 0x3);
	/* cmp	al,cl */
	CMP(al, cl);
	/* jae	__m2c_macrolocal_243_skip */
	if ((db)(al) >= (db)(cl)) {goto __m2c_macrolocal_243_skip;}
	/* jmp	NextStatMob */
	goto nextstatmob;
__m2c_macrolocal_243_skip:
	// 5351 
	// 0 ;* adjust damage radius wrt object hardness
	/* shr	bp,cl */
	SHR(bp, cl);
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta xft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* fetch object xft
	/* mov	ax,ES:[si].STAT_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(es,si))->stat_xft)));
	// 0 ;* set aux viewpoint xft at object position
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	// 0 ;* calc abs(delta xft)
	/* sub	ax,WPN_View.VP_XFT */
	SUB(ax, wpn_view.vp_xft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta xft) within damage radius
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	NextStatMob */
	if ((dw)(ax) > (dw)(bp)) {goto nextstatmob;}
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta yft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* fetch object yft
	/* mov	ax,ES:[si].STAT_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((statmob*)raddr(es,si))->stat_yft)));
	// 0 ;* set aux viewpoint yft at object position
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	// 0 ;* calc abs(delta yft)
	/* sub	ax,WPN_View.VP_YFT */
	SUB(ax, wpn_view.vp_yft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta yft) within damage radius
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* ja	NextStatMob */
	if ((dw)(ax) > (dw)(bp)) {goto nextstatmob;}
	// 0 ;----------------
	// 0 ;* destroy object
	// 0 ;----------------
	// 0 ;* kill object
	/* or	ES:[si].STAT_ANIM,OBJECT_DEAD */
	OR(*((db*)((db*)&((statmob*)raddr(es,si))->stat_anim)), 0x80);
	// 0 ;* inc kills (if Tornado weapon and enemy target)
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	SkipKillMob */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto skipkillmob;}
	/* mov	bl,ES:[si].STAT_NUM */
	bl = m2c::getdata(*((db*)((db*)&((statmob*)raddr(es,si))->stat_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* test	ES:[si].STAT_ANIM,OBJECT_ENEMY */
	TEST(*((db*)((db*)&((statmob*)raddr(es,si))->stat_anim)), 0x40);
	/* jz	@F */
	if (!(*((db*)((db*)&((statmob*)raddr(es,si))->stat_anim)) & 0x40)) {goto dummylabel136;}
	/* inc	EMobKills[bx] */
	INC(*((&emobkills)+bx));
	/* jmp	SkipKillMob */
	goto skipkillmob;
dummylabel136:
	// 5353 
	/* @@:		inc	AMobKills[bx] */
	INC(*((&amobkills)+bx));
	// 0 ;* sort object debris
skipkillmob:
	// 5355 
	/* SkipKillMob:	mov	ah,ch */
	ah = ch;
	/* and	ah,DAM_DEBRIS_MASK */
	AND(ah, 0x1c);
	/* mov	al,MOB_CRATER1M */
	al = 36;
	/* cmp	ah,DAM_DEBRIS1 */
	CMP(ah, 0x0);
	/* je	@F */
	if ((db)(ah) == (db)(0x0)) {goto dummylabel137;}
	/* mov	al,MOB_CRATER2M */
	al = 37;
dummylabel137:
	// 5357 
	/* @@:		mov	ES:[si].STAT_NUM,al */
	m2c::setdata(&(*((db*)((db*)&((statmob*)raddr(es,si))->stat_num))), m2c::getdata(al));
	/* and	ES:[si].STAT_ANIM,OBJECT_CLEAR */
	AND(*((db*)((db*)&((statmob*)raddr(es,si))->stat_anim)), 0xc0);
	/* mov	ES:[si].STAT_HDG,0 */
	m2c::setdata(&(*((dw*)((db*)&((statmob*)raddr(es,si))->stat_hdg))), m2c::getdata(0));
	// 0 ;* make explosion effect
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,ch */
	al = ch;
	/* push	si */
	PUSH(si);
	/* call	CreateExplosion */
	CALL(createexplosion, 0);
	/* pop	si */
	POP(si);
	/* mov	ax,MSECDATA1 */
	ax = seg_offset(msecdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
nextstatmob:
	// 5359 
	/* NextStatMob:	add	si,STAT_REC_SIZE */
	ADD(si, 8);
	/* jmp	StatMobLoop */
	goto statmobloop;
exitstatmob:
	// 5361 
	/* ExitStatMob:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
killstatexit:
	// 5363 
	/* KillStatExit:	ret */
	RETN(0);
killmobiles:
	// 10618 
	// 0 ;--------------------------
	// 0 ;* test for occupied sector
	// 0 ;--------------------------
edummylabel47:
	// 5365 
	/* mov	ax,WPN_View.VP_XSEC */
	ax = wpn_view.vp_xsec;
	/* mov	dx,WPN_View.VP_YSEC */
	dx = wpn_view.vp_ysec;
	/* call	LocateMobiles	;mobiles in sector? */
	CALLF(locatemobiles, 0);
	/* jnc	__m2c_macrolocal_246_skip */
	if (!CF) {goto __m2c_macrolocal_246_skip;}
	/* jmp	KillMobExit */
	goto killmobexit;
__m2c_macrolocal_246_skip:
	// 5367 
	// 0 ;no ->
	// 0 ;--------------
	// 0 ;* scan mobiles
	// 0 ;--------------
mobileloop:
	// 5369 
	/* MobileLoop:  	cmp	si,-1		;end of list? */
	CMP(si, -1);
	/* jne	__m2c_macrolocal_247_skip */
	if ((dw)(si) != (dw)(-1)) {goto __m2c_macrolocal_247_skip;}
	/* jmp	KillMobExit */
	goto killmobexit;
__m2c_macrolocal_247_skip:
	// 5371 
	// 0 ;yes ->
	/* push	si */
	PUSH(si);
	// 0 ;* fetch object damage flags
	/* mov	bl,[si].MOB_NUM */
	bl = m2c::getdata(*((db*)((db*)&((mobile*)raddr(ds,si))->mob_num)));
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	ch,MobDamageFlags[bx] */
	ch = *((&mobdamageflags)+bx);
	// 0 ;* check valid target
	/* test	ch,DAM_INVALID */
	TEST(ch, 0x80);
	/* jz	__m2c_macrolocal_248_skip */
	if (!(ch & 0x80)) {goto __m2c_macrolocal_248_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_248_skip:
	// 5373 
	// 0 ;* fetch weapon damage radius and effectiveness
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* mov	bp,WeaponRadius[bx] */
	bp = *(dw*)(((db*)&weaponradius)+bx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,WeaponEffect[bx] */
	al = *((&weaponeffect)+bx);
	// 0 ;* check weapon effectiveness >= object hardness
	/* mov	cl,ch */
	cl = ch;
	/* and	cl,DAM_HARD_MASK */
	AND(cl, 0x3);
	/* cmp	al,cl */
	CMP(al, cl);
	/* jae	__m2c_macrolocal_249_skip */
	if ((db)(al) >= (db)(cl)) {goto __m2c_macrolocal_249_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_249_skip:
	// 5375 
	// 0 ;* adjust damage radius wrt object hardness
	/* shr	bp,cl */
	SHR(bp, cl);
	// 0 ;* sort on ground / airborne
	/* cmp	WORD PTR _VP_ZFT_HI[si],0 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	/* jbe	__m2c_macrolocal_250_skip */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))) <= (dw)(0)) {goto __m2c_macrolocal_250_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_250_skip:
	// 5377 
	/* cmp	WORD PTR _VP_ZFT_LO[si],0 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 0);
	/* ja	SortAirborne */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) > (dw)(0)) {goto sortairborne;}
	// 0 ;---------------
	// 0 ;* ground mobile
	// 0 ;---------------
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta xft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* fetch object xft
	/* mov	ax,_VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xft)));
	// 0 ;* set aux viewpoint xft at object position
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	// 0 ;* calc abs(delta xft)
	/* sub	ax,WPN_View.VP_XFT */
	SUB(ax, wpn_view.vp_xft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta xft) within damage radius
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	__m2c_macrolocal_252_skip */
	if ((dw)(ax) <= (dw)(bp)) {goto __m2c_macrolocal_252_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_252_skip:
	// 5379 
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta yft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* fetch object yft
	/* mov	ax,_VP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_yft)));
	// 0 ;* set aux viewpoint yft at object position
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	// 0 ;* calc abs(delta yft)
	/* sub	ax,WPN_View.VP_YFT */
	SUB(ax, wpn_view.vp_yft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta yft) within damage radius
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	__m2c_macrolocal_254_skip */
	if ((dw)(ax) <= (dw)(bp)) {goto __m2c_macrolocal_254_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_254_skip:
	// 5381 
	// 0 ;----------------
	// 0 ;* destroy object
	// 0 ;----------------
	/* push	cx */
	PUSH(cx);
	/* call	WpnKillDrone */
	CALLF(wpnkilldrone, 0);
	/* pop	ax */
	POP(ax);
	/* call	CreateExplosion */
	CALL(createexplosion, 0);
	/* jmp	NextMobile */
	goto nextmobile;
	// 0 ;-----------------
	// 0 ;* airborne mobile
	// 0 ;-----------------
	// 0 ;* check alt not too high (saves doing slant range check)
sortairborne:
	// 5383 
	/* SortAirborne: 	cmp	WORD PTR _VP_ZFT_LO[si],1000 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 1000);
	/* jbe	__m2c_macrolocal_255_skip */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) <= (dw)(1000)) {goto __m2c_macrolocal_255_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_255_skip:
	// 5385 
	// 0 ;* calc slant range (mobile -> impact point)
	/* push	si */
	PUSH(si);
	/* add	si,MOB_REC_SIZE		;si -> mobile viewpoint */
	ADD(si, 6);
	/* mov	di,OFFSET WPN_View	;di -> impact viewpoint */
	di = m2c::near_offset_external(wpn_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	/* pop	si */
	POP(si);
	// 0 ;* check range not too far
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* jbe	__m2c_macrolocal_256_skip */
	if ((dw)(dx) <= (dw)(0)) {goto __m2c_macrolocal_256_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_256_skip:
	// 5387 
	/* cmp	ax,1414		;1000 * sqrt(2) */
	CMP(ax, 1414);
	/* jbe	__m2c_macrolocal_257_skip */
	if ((dw)(ax) <= (dw)(1414)) {goto __m2c_macrolocal_257_skip;}
	/* jmp	NextMobile */
	goto nextmobile;
__m2c_macrolocal_257_skip:
	// 5389 
	// 0 ;* check if within lethal zone (radius / 2)
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* mov	dx,WeaponHemi[bx] */
	dx = *(dw*)(((db*)&weaponhemi)+bx);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	SkipMobKill */
	if ((dw)(ax) >= (dw)(dx)) {goto skipmobkill;}
	// 0 ;* destroy mobile (if Tornado - shake in case no collisions)
	/* cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	@F */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto dummylabel138;}
	// 0 ;SHAKE	SHAKE_DAMAGE,HSHAKE_HI,VSHAKE_HI,50 ;ori
dummylabel138:
	// 5391 
	/* @@:		push	si */
	PUSH(si);
	/* call	WpnKillDrone */
	CALLF(wpnkilldrone, 0);
	/* pop	si */
	POP(si);
	/* mov	bx,SMOKE_AIR_EXPLO */
	bx = 10;
	/* add	si,MOB_REC_SIZE */
	ADD(si, 6);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	/* jmp	NextMobile */
	goto nextmobile;
	// 0 ;* if Tornado then check if within damage zone
skipmobkill:
	// 5393 
	/* SkipMobKill:	cmp	si,OFFSET M_MOBILE */
	CMP(si, m2c::near_offset_external(m_mobile));
	/* jne	SpecialEffectsBeforeNextMobile */
	if ((dw)(si) != (dw)(m2c::near_offset_external(m_mobile))) {goto specialeffectsbeforenextmobile;}
	// 0 ; WEAPONS.ASM(9034): warning A6003: conditional jump lengthened : by 18 byte(s)
	// 0 ;mov	MusicCard,SND_SBLASTER
	// 0 ;call InstallMusic
	// 0 ;		cmp	ax,WeaponHemi[bx]
	// 0 ;		jae	NextMobile
	// 0 ;* damage Tornado
	// 0 ;		SHAKE	SHAKE_DAMAGE,HSHAKE_HI,VSHAKE_HI,50 ;ori
	// 0 ; If the logic flow reaches here, then the Tonka is out of the DamageHemisphere
	// 0 ; but we still want a little jolt/vibration to with the sound effects of
	// 0 ; the bomb detonating!
	/* mov dx,WeaponHemi[bx]	;Added on 30/6/2018. Now LGBs hit the ground with a jarring shaking effect */
	dx = *(dw*)(((db*)&weaponhemi)+bx);
	/* shr dx,1                ;Added on 30/6/2018. Now LGBs hit the ground with a jarring shaking effect */
	SHR(dx, 1);
	/* cmp	ax,dx               ;Added on 30/6/2018. Now LGBs hit the ground with a jarring shaking effect */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel139;}
	// 0 ;* damage Tornado
	// 0 ;SHAKE	SHAKE_DAMAGE,HSHAKE_HI,VSHAKE_HI,50 ;ori
	/* mov	bx,SMOKE_AIR_EXPLO */
	bx = 10;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	/* test	NoCollisions,1 */
	TEST(nocollisions, 1);
	/* jnz	NextMobile */
	if ((nocollisions & 1) != 0) {goto nextmobile;}
	// 0 ; WEAPONS.ASM(9062): warning A6003: conditional jump lengthened : by 59 byte(s)
	/* call	MaxDamage */
	CALLF(maxdamage, 0);
	/* jmp NextMobile */
	goto nextmobile;
dummylabel139:
	// 5395 
	/* cmp ax, 1320 ;1,320 feet = 1/4 mile */
	CMP(ax, 1320);
	/* jae @F ;--> if the distance of Tornado from the blast is less than a quarter mile then... */
	if ((dw)(ax) >= (dw)(1320)) {goto dummylabel140;}
	/* cmp	ShakePriority,SHAKE_COLLIDE	;;higher SHAKE_COLLIDE shake in progress? */
	CMP(shakepriority, 100);
	/* ja	__m2c_macrolocal_258_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(100)) {goto __m2c_macrolocal_258_skip;}
	/* mov	ShakePriority,SHAKE_COLLIDE */
	shakepriority = 100;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
__m2c_macrolocal_258_skip:
	// 5397 
	// 0 ;... add MAJOR shake/vibration (hack),
/* m2c-phantom removed: 	R(CMP(shakepriority, 100));	// 10828 cmp	ShakePriority,SHAKE_COLLIDE	 */
/* m2c-phantom removed: 	R(shakepriority = 100;);	// 10829 mov	ShakePriority,SHAKE_COLLIDE */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 10830 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 10831 mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 10832 mov	ShakeTimer,50 */
	/* jmp NextMobile */
	goto nextmobile;
dummylabel140:
	// 5399 
	// 0 ; <-- else jump here!
	/* cmp ax, 2640 ;2,640 feet = 1/2 mile */
	CMP(ax, 2640);
	/* jae @F ;--> if the distance of Tornado from the blast is less than a half mile then... */
	if ((dw)(ax) >= (dw)(2640)) {goto dummylabel141;}
	/* cmp	ShakePriority,SHAKE_COLLIDE	;;higher SHAKE_COLLIDE shake in progress? */
	CMP(shakepriority, 100);
	/* ja	__m2c_macrolocal_259_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(100)) {goto __m2c_macrolocal_259_skip;}
	/* mov	ShakePriority,SHAKE_COLLIDE */
	shakepriority = 100;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
__m2c_macrolocal_259_skip:
	// 5401 
	// 0 ;... add MEDIUM shake/vibration (hack),
/* m2c-phantom removed: 	R(CMP(shakepriority, 100));	// 10845 cmp	ShakePriority,SHAKE_COLLIDE	 */
/* m2c-phantom removed: 	R(shakepriority = 100;);	// 10846 mov	ShakePriority,SHAKE_COLLIDE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 10847 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 10848 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 10849 mov	ShakeTimer,50 */
	/* jmp NextMobile */
	goto nextmobile;
dummylabel141:
	// 5403 
	// 0 ; <-- else jump here!
	/* cmp ax, 5280 ;5,280 feet = 1 mile */
	CMP(ax, 5280);
	/* jae NextMobile ;--> if the distance of Tornado from the blast is less than a mile then... */
	if ((dw)(ax) >= (dw)(5280)) {goto nextmobile;}
	/* cmp	ShakePriority,SHAKE_BRAKE	;;higher SHAKE_BRAKE shake in progress? */
	CMP(shakepriority, 240);
	/* ja	__m2c_macrolocal_260_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(240)) {goto __m2c_macrolocal_260_skip;}
/* m2c-phantom removed: 	R(shakepriority = 240;);	// 10856 												mov	ShakePriority,SHAKE_BRAKE */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 10857 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 10858 						mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 10859 						mov	ShakeTimer,65535 */
__m2c_macrolocal_260_skip:
	// 5405 
	// 0 ;add SLIGHT shake/vibration (hack)
/* m2c-phantom removed: 	R(CMP(shakepriority, 240));	// 10862 cmp	ShakePriority,SHAKE_BRAKE	 */
	/* mov	ShakePriority,SHAKE_BRAKE */
	shakepriority = 240;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
	/* jmp NextMobile */
	goto nextmobile;
specialeffectsbeforenextmobile:
	// 5407 
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel142;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel142;}
	/* jmp NextMobile */
	goto nextmobile;
dummylabel142:
	// 5409 
	/* test CockpitViews,1 */
	TEST(cockpitviews, 1);
	/* jnz @F */
	if ((cockpitviews & 1) != 0) {goto dummylabel143;}
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* cmp	GameViewMode,VIEW_DRONE */
	CMP(gameviewmode, 18);
	/* jne @F */
	if ((dw)(gameviewmode) != (dw)(18)) {goto dummylabel143;}
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jnz	@F */
	if ((wpn_weapon.wpn_flags & 0x8) != 0) {goto dummylabel143;}
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* call ExploSound2 */
	CALLF(explosound2, 0);
	/* cmp	ShakePriority,SHAKE_DAMAGE	;;higher SHAKE_DAMAGE shake in progress? */
	CMP(shakepriority, 75);
	/* ja	__m2c_macrolocal_261_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(75)) {goto __m2c_macrolocal_261_skip;}
/* m2c-phantom removed: 	R(shakepriority = 75;);	// 10886 				        				        mov	ShakePriority,SHAKE_DAMAGE */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 10887 				        mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_hi;);	// 10888 				        mov	VShake,VSHAKE_HI */
/* m2c-phantom removed: 	R(shaketimer = 50;);	// 10889 				        mov	ShakeTimer,50 */
__m2c_macrolocal_261_skip:
	// 5411 
/* m2c-phantom removed: 	R(CMP(shakepriority, 75));	// 10891 				        cmp	ShakePriority,SHAKE_DAMAGE	 */
	/* mov	ShakePriority,SHAKE_DAMAGE */
	shakepriority = 75;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_HI */
	vshake = vshake_hi;
	/* mov	ShakeTimer,50 */
	shaketimer = 50;
dummylabel143:
	// 5413 
nextmobile:
	// 5415 
	/* pop	si */
	POP(si);
	/* mov	si,[si].MOB_LINK_PTR */
	si = m2c::getdata(*((dw*)((db*)&((mobile*)raddr(ds,si))->mob_link_ptr)));
	/* jmp	MobileLoop */
	goto mobileloop;
killmobexit:
	// 5417 
	/* KillMobExit:	ret */
	RETN(0);
killtrees:
	// 10921 
	// 0 ;---------------------
	// 0 ;* check trees enabled
	// 0 ;---------------------
edummylabel48:
	// 5419 
	/* test	TreesEnabled,1 */
	TEST(treesenabled, 1);
	/* jz	KillTreesExit */
	if (!(treesenabled & 1)) {goto killtreesexit;}
	// 0 ;----------------
	// 0 ;* calc map index
	// 0 ;----------------
	// 0 ;* map index = x sec + y sec * 32
	/* mov	bp,WPN_View.VP_YSEC */
	bp = wpn_view.vp_ysec;
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
	/* add	bp,WPN_View.VP_XSEC */
	ADD(bp, wpn_view.vp_xsec);
	// 0 ;----------------------------
	// 0 ;* fetch weapon damage radius
	// 0 ;----------------------------
	/* mov	bx,WPN_Weapon.WPN_TYPE */
	bx = wpn_weapon.wpn_type;
	/* mov	di,WeaponRadius[bx] */
	di = *(dw*)(((db*)&weaponradius)+bx);
	// 0 ;--------------------------------------
	// 0 ;* select tree layout wrt xsec and ysec (via map index so values are wrapped)
	// 0 ;--------------------------------------
	/* mov	ax,bp */
	ax = bp;
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* shr	bx,1 */
	SHR(bx, 1);
	/* and	ax,01b		;x */
	AND(ax, 0x1);
	/* and	bx,10b		;y */
	AND(bx, 0x2);
	/* or	bx,ax */
	OR(bx, ax);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	bx,TreeLayouts[bx] */
	bx = *(dw*)(((db*)&treelayouts)+bx);
	// 0 ;------------------
	// 0 ;* scan tree layers
	// 0 ;------------------
	/* mov	al,TreeLayer1[bp] */
	al = *((&treelayer1)+bp);
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* mov	TreeLayer1[bp],al */
	*((&treelayer1)+bp) = al;
	/* mov	al,TreeLayer2[bp] */
	al = *((&treelayer2)+bp);
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* mov	TreeLayer2[bp],al */
	*((&treelayer2)+bp) = al;
	/* mov	al,TreeLayer3[bp] */
	al = *((&treelayer3)+bp);
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* mov	TreeLayer3[bp],al */
	*((&treelayer3)+bp) = al;
	/* mov	al,TreeLayer4[bp] */
	al = *((&treelayer4)+bp);
	/* call	ScanTrees */
	CALL(scantrees, 0);
	/* mov	TreeLayer4[bp],al */
	*((&treelayer4)+bp) = al;
killtreesexit:
	// 5421 
	/* KillTreesExit:	ret */
	RETN(0);
scantrees:
	// 10992 
	/* mov	dl,al		;tree layout */
	dl = al;
edummylabel49:
	// 5423 
	/* mov	dh,11111110b	;kill mask */
	dh = 0xfe;
	/* push	bx		;store tree index */
	PUSH(bx);
	/* push	bp		;store map index */
	PUSH(bp);
	// 0 ;---------------------------
scantreeloop:
	// 5425 
	// 0 ;---------------------------
	/* shr	al,1 */
	SHR(al, 1);
	/* jnc	NextTree */
	if (!CF) {goto nexttree;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	dx */
	PUSH(dx);
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta xft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* xft = (x grid * 256) - 8192
	/* mov	ah,[bx+0]	;xgrid */
	ah = m2c::getdata(*(raddr(ds,bx+0)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	// 0 ;* set aux viewpoint xft at object position
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	// 0 ;* calc abs(delta xft)
	/* sub	ax,WPN_View.VP_XFT */
	SUB(ax, wpn_view.vp_xft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta xft) within damage radius
	/* cmp	ax,di */
	CMP(ax, di);
	/* ja	SkipTree */
	if ((dw)(ax) > (dw)(di)) {goto skiptree;}
	// 0 ;-------------------------------------------
	// 0 ;* check abs(delta yft) within damage radius
	// 0 ;-------------------------------------------
	// 0 ;* yft = (y grid * 256) - 8192
	/* mov	ah,[bx+1]	;ygrid */
	ah = m2c::getdata(*(raddr(ds,bx+1)));
	/* xor	al,al */
	XOR(al, al);
	/* sub	ax,8192 */
	SUB(ax, 8192);
	// 0 ;* set aux viewpoint yft at object position
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	// 0 ;* calc abs(delta yft)
	/* sub	ax,WPN_View.VP_YFT */
	SUB(ax, wpn_view.vp_yft);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;* check abs(delta yft) within damage radius
	/* cmp	ax,di */
	CMP(ax, di);
	/* ja	SkipTree */
	if ((dw)(ax) > (dw)(di)) {goto skiptree;}
	// 0 ;---------------
	// 0 ;* destroy copse
	// 0 ;---------------
	/* pop	dx */
	POP(dx);
	/* and	dl,dh		;clear tree */
	AND(dl, dh);
	/* push	dx */
	PUSH(dx);
	/* mov	al,DAM_EXPLO1 */
	al = 0x0;
	/* push	di */
	PUSH(di);
	/* call	CreateExplosion */
	CALL(createexplosion, 0);
	/* pop	di */
	POP(di);
skiptree:
	// 5427 
	/* SkipTree:	pop	dx */
	POP(dx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
nexttree:
	// 5429 
	/* NextTree:	add	bx,2		;next index */
	ADD(bx, 2);
	/* rol	dh,1		;rotate kill mask */
	ROL(dh, 1);
	/* test	al,al		;any more trees? */
	TEST(al, al);
	/* jnz	ScanTreeLoop	;yes -> */
	if ((al & al) != 0) {goto scantreeloop;}
	/* pop	bp		;restore map index */
	POP(bp);
	/* pop	bx		;restore tree index */
	POP(bx);
	/* add	bx,8*2		;update tree index */
	ADD(bx, 8*2);
	/* mov	al,dl		;updated tree layout */
	al = dl;
	/* ret */
	RETN(0);
createexplosion:
	// 11091 
	// 0 ;-------------
	// 0 ;* sort effect
	// 0 ;-------------
	// 0 ;SHAKE	SHAKE_BRAKE,HSHAKE_HI,VSHAKE_HI,50
edummylabel50:
	// 5431 
	/* and	al,DAM_EXPLO_MASK */
	AND(al, 0xff);
	// 0 ;* DAM_EXPLO1 = burn only
	/* cmp	al,DAM_EXPLO1 */
	CMP(al, 0x0);
	/* jne	__m2c_macrolocal_264_skip */
	if ((db)(al) != (db)(0x0)) {goto __m2c_macrolocal_264_skip;}
	/* jmp	ContBurn */
	goto contburn;
__m2c_macrolocal_264_skip:
	// 5433 
	// 0 ;* DAM_EXPLO2 = crater size 1 * 2
	/* cmp	al,DAM_EXPLO2 */
	CMP(al, 0x20);
	/* jne	@F */
	if ((db)(al) != (db)(0x20)) {goto dummylabel144;}
	/* mov	dl,1		;crater spread dist / 2 */
	dl = 1;
	/* mov	dh,CRATER_SIZE1	;crater size 1 */
	dh = 1;
	/* mov	cx,2		;2 craters */
	cx = 2;
	/* jmp	ExploLoop */
	goto exploloop;
	// 0 ;* DAM_EXPLO3 = crater size 2 * 2
dummylabel144:
	// 5435 
	/* @@:		cmp	al,DAM_EXPLO3 */
	CMP(al, 0x40);
	/* jne	@F */
	if ((db)(al) != (db)(0x40)) {goto dummylabel145;}
	/* mov	dl,0		;crater spread dist / 1 */
	dl = 0;
	/* mov	dh,CRATER_SIZE2	;crater size 2 */
	dh = 2;
	/* mov	cx,2		;2 craters */
	cx = 2;
	/* jmp	ExploLoop */
	goto exploloop;
	// 0 ;* DAM_EXPLO4 = crater size 2 * 4
dummylabel145:
	// 5437 
	/* @@:		mov	dl,0		;crater spread dist / 1 */
	dl = 0;
	/* mov	dh,CRATER_SIZE2	;crater size 2 */
	dh = 2;
	/* mov	cx,4		;4 craters */
	cx = 4;
	// 0 ;--------------
	// 0 ;* make craters
	// 0 ;--------------
exploloop:
	// 5439 
	/* ExploLoop: 	push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	TMP_VIEW.VP_XFT */
	PUSH(tmp_view.vp_xft);
	/* push	TMP_VIEW.VP_YFT */
	PUSH(tmp_view.vp_yft);
	/* mov	cl,dl */
	cl = dl;
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,TMP_VIEW.VP_XFT */
	ADD(ax, tmp_view.vp_xft);
	/* cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	@F */
	if ((short)(ax) <= (short)(8191)) {goto dummylabel146;}
	/* mov	ax,8191 */
	ax = 8191;
dummylabel146:
	// 5441 
	/* @@:		cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	@F */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel147;}
	/* mov	ax,-8192 */
	ax = -8192;
dummylabel147:
	// 5443 
	/* @@:		mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,cl */
	SAR(ax, cl);
	/* add	ax,TMP_VIEW.VP_YFT */
	ADD(ax, tmp_view.vp_yft);
	/* cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	@F */
	if ((short)(ax) <= (short)(8191)) {goto dummylabel148;}
	/* mov	ax,8191 */
	ax = 8191;
dummylabel148:
	// 5445 
	/* @@:		cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	@F */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel149;}
	/* mov	ax,-8192 */
	ax = -8192;
dummylabel149:
	// 5447 
	/* @@:		mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	/* mov	al,dh */
	al = dh;
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	MakeCrater */
	CALLF(makecrater, 0);
	/* pop	TMP_VIEW.VP_YFT */
	POP(tmp_view.vp_yft);
	/* pop	TMP_VIEW.VP_XFT */
	POP(tmp_view.vp_xft);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* loop	ExploLoop */
	LOOP(exploloop);
	// 0 ;------------------
	// 0 ;* make object burn
	// 0 ;------------------
contburn:
	// 5449 
	/* ContBurn:	mov	bx,SMOKE_BURNING */
	bx = 6;
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	// 0 ;SHAKE	SHAKE_BRAKE,HSHAKE_HI,VSHAKE_HI,50
	/* ret */
	RETN(0);
calcpylonpos:
	// 11182 
	/* mov	si,OFFSET WPN_View ;* kill: assume all */
	si = m2c::near_offset_external(wpn_view);
edummylabel51:
	// 5451 
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	// 0 ;-----------------
	// 0 ;* sort wing pylon
	// 0 ;-----------------
	/* cmp	WPN_Weapon.WPN_TYPE,SIDEWINDER */
	CMP(wpn_weapon.wpn_type, 14);
	/* jne	SortBellyPylon */
	if ((dw)(wpn_weapon.wpn_type) != (dw)(14)) {goto sortbellypylon;}
	// 0 ;* sort Tornado launch
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	DroneWingPylon */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dronewingpylon;}
	/* mov	al,CrntWingPos */
	al = crntwingpos;
	// 0 ;* 25 degs sweep
	/* cmp	al,SWEEP_D_25 */
	CMP(al, sweep_d_25);
	/* jne	@F */
	if ((db)(al) != (db)(sweep_d_25)) {goto dummylabel150;}
	/* mov	ax,11		;x offset */
	ax = 11;
	/* mov	bx,1		;y offset */
	bx = 1;
	/* jmp	SortLaunchSide */
	goto sortlaunchside;
	// 0 ;* 45 degs sweep
dummylabel150:
	// 5453 
	/* @@:		cmp	al,SWEEP_D_45 */
	CMP(al, sweep_d_45);
	/* jne	@F */
	if ((db)(al) != (db)(sweep_d_45)) {goto dummylabel151;}
	/* mov	ax,10		;x offset */
	ax = 10;
	/* mov	bx,-1		;y offset */
	bx = -1;
	/* jmp	SortLaunchSide */
	goto sortlaunchside;
	// 0 ;* 67 degs sweep
dummylabel151:
	// 5455 
	/* @@: 		mov	ax,8		;x offset */
	ax = 8;
	/* mov	bx,-2		;y offset */
	bx = -2;
sortlaunchside:
	// 5457 
	/* SortLaunchSide:	mov	dx,LaunchSide	;fetch launch side */
	dx = launchside;
	/* xor	LaunchSide,0ffffh	;switch launch side */
	XOR(launchside, 0x0ffff);
	/* xor	ax,dx	     	;adjust x offset wrt wing */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* adjust y offset if ADV
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne	@F */
	if ((dw)(tornadotype) != (dw)(2)) {goto dummylabel152;}
	/* sub	bx,2 */
	SUB(bx, 2);
	// 0 ;* set z offset (assume not in cockpit)
dummylabel152:
	// 5459 
	/* @@:		mov	cx,6		;z offset */
	cx = 6;
	/* jmp	ContPylonPos */
	goto contpylonpos;
	// 0 ;* sort drone launch
dronewingpylon:
	// 5461 
	/* DroneWingPylon:	call	RandX		;select random wing */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* cwd */
	CWD;
	/* mov	ax,8		;x offset */
	ax = 8;
	/* mov	bx,-2		;y offset */
	bx = -2;
	/* mov	cx,6		;z offset */
	cx = 6;
	/* xor	ax,dx		;adjust x offset wrt wing */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* jmp	ContPylonPos */
	goto contpylonpos;
	// 0 ;---------------------------
sortbellypylon:
	// 5463 
	// 0 ;---------------------------
	/* mov	ax,0		;x offset */
	ax = 0;
	/* mov	bx,0		;y offset */
	bx = 0;
	/* mov	cx,2		;z offset */
	cx = 2;
	// 0 ;---------------------------
contpylonpos:
	// 5465 
	// 0 ;---------------------------
	// 0 ;* if Tornado sort in / out cockpit adjustment
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel153;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel153;}
	/* sub	cx,ZFT_COCKPIT */
	SUB(cx, zft_cockpit);
	// 0 ;* calc 3D offset of pylon position
dummylabel153:
	// 5467 
	/* @@:		call	Calc3DOffset */
	CALLF(calc3doffset, 0);
	/* xchg	ax,cx */
	XCHG(ax, cx);
	/* cwd */
	CWD;
	/* add	WORD PTR WPN_View.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	@F */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto dummylabel154;}
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,0 */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = 0;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,0 */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = 0;
dummylabel154:
	// 5469 
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_265_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_265_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_265_mvxy1:
	// 5471 
	/* __m2c_macrolocal_265_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_265_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_265_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_265_mvxy2:
	// 5473 
	/* __m2c_macrolocal_265_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,WPN_View.VP_YFT	;y + bx */
	ADD(bx, wpn_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_265_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_265_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_265_mvxy3:
	// 5475 
	/* __m2c_macrolocal_265_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_265_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_265_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_265_mvxy4:
	// 5477 
	/* __m2c_macrolocal_265_MvXY4:		mov	WPN_View.VP_YFT,bx */
	wpn_view.vp_yft = bx;
	/* ret */
	RETN(0);
calcdecoypos:
	// 11298 
	/* mov	si,OFFSET WPN_View ;* kill: assume all */
	si = m2c::near_offset_external(wpn_view);
edummylabel52:
	// 5479 
	/* call	CalcTransMatrix */
	CALLF(calctransmatrix, 0);
	// 0 ;-------------------------
	// 0 ;* sort IDS Tornado launch (rh wing tip)
	// 0 ;-------------------------
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	BellyDecoy */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto bellydecoy;}
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	BellyDecoy */
	if ((dw)(tornadotype) == (dw)(2)) {goto bellydecoy;}
	/* mov	al,CrntWingPos */
	al = crntwingpos;
	/* mov	cx,6		;z offset (assume not in cockpit) */
	cx = 6;
	// 0 ;* 25 degs sweep
	/* cmp	al,SWEEP_D_25 */
	CMP(al, sweep_d_25);
	/* jne	@F */
	if ((db)(al) != (db)(sweep_d_25)) {goto dummylabel155;}
	/* mov	ax,19		;x offset */
	ax = 19;
	/* mov	bx,-20		;y offset */
	bx = -20;
	/* jmp	ContDecoyPos */
	goto contdecoypos;
	// 0 ;* 45 degs sweep
dummylabel155:
	// 5481 
	/* @@:		cmp	al,SWEEP_D_45 */
	CMP(al, sweep_d_45);
	/* jne	@F */
	if ((db)(al) != (db)(sweep_d_45)) {goto dummylabel156;}
	/* mov	ax,17		;x offset */
	ax = 17;
	/* mov	bx,-27		;y offset */
	bx = -27;
	/* jmp	ContDecoyPos */
	goto contdecoypos;
	// 0 ;* 67 degs sweep
dummylabel156:
	// 5483 
	/* @@: 		mov	ax,13		;x offset */
	ax = 13;
	/* mov	bx,-32		;y offset */
	bx = -32;
	/* jmp	ContDecoyPos */
	goto contdecoypos;
	// 0 ;---------------------------------
	// 0 ;* sort ADV Tornado / drone launch (belly)
	// 0 ;---------------------------------
bellydecoy:
	// 5485 
	/* BellyDecoy:	mov	ax,0		;x offset */
	ax = 0;
	/* mov	bx,-32		;y offset */
	bx = -32;
	/* mov	cx,2		;z offset */
	cx = 2;
	// 0 ;---------------------------
contdecoypos:
	// 5487 
	// 0 ;---------------------------
	// 0 ;* if Tornado sort in / out cockpit adjustment
	/* test	WPN_Weapon.WPN_FLAGS,WFLG_TORNADO */
	TEST(wpn_weapon.wpn_flags, 0x8);
	/* jz	@F */
	if (!(wpn_weapon.wpn_flags & 0x8)) {goto dummylabel157;}
	/* test	InCockpit,1 */
	TEST(incockpit, 1);
	/* jz	@F */
	if (!(incockpit & 1)) {goto dummylabel157;}
	/* sub	cx,ZFT_COCKPIT */
	SUB(cx, zft_cockpit);
	// 0 ;* calc 3D offset of decoy position
dummylabel157:
	// 5489 
	/* @@:		call	Calc3DOffset */
	CALLF(calc3doffset, 0);
	/* xchg	ax,cx */
	XCHG(ax, cx);
	/* cwd */
	CWD;
	/* add	WORD PTR WPN_View.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* adc	WORD PTR WPN_View.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	@F */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto dummylabel158;}
	/* mov	WORD PTR WPN_View.VP_ZFT_LO,0 */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = 0;
	/* mov	WORD PTR WPN_View.VP_ZFT_HI,0 */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = 0;
dummylabel158:
	// 5491 
	// 0 ;* update xsec, xft
	/* add	cx,WPN_View.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_266_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_266_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_View.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_266_mvxy1:
	// 5493 
	/* __m2c_macrolocal_266_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_266_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_266_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_View.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_266_mvxy2:
	// 5495 
	/* __m2c_macrolocal_266_MvXY2:		mov	WPN_View.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,WPN_View.VP_YFT	;y + bx */
	ADD(bx, wpn_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_266_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_266_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	WPN_View.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_266_mvxy3:
	// 5497 
	/* __m2c_macrolocal_266_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_266_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_266_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	WPN_View.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_266_mvxy4:
	// 5499 
	/* __m2c_macrolocal_266_MvXY4:		mov	WPN_View.VP_YFT,bx */
	wpn_view.vp_yft = bx;
	/* ret */
	RETN(0);
checkirlock:
	// 11392 
	// 0 ;--------------------------------
	// 0 ;* check for zero fuel - gliding?
	// 0 ;--------------------------------
	// 0 ;* no lock if out of fuel
edummylabel53:
	// 5501 
	/* cmp	FuelWt,0	;out of fuel? */
	CMP(fuelwt, 0);
	/* je	NoLock		;yes -> */
	if ((dw)(fuelwt) == (dw)(0)) {goto nolock;}
	// 0 ;---------------
	// 0 ;* check for fog
	// 0 ;---------------
	/* cmp	Fog,0 */
	CMP(fog, 0);
	/* je	@F */
	if ((dw)(fog) == (dw)(0)) {goto dummylabel159;}
	// 0 ;* no lock if object below cloud top
	/* mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	dx,WORD PTR [si].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* sub	ax,WORD PTR CloudTop */
	SUB(ax, *(dw*)(&cloudtop));
	/* sbb	dx,WORD PTR CloudTop+2 */
	SBB(dx, *(dw*)(((db*)&cloudtop)+2));
	/* jb	NoLock */
	if (CF) {goto nolock;}
	// 0 ;* no lock if target below cloud top
	/* mov	ax,WORD PTR [di].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_lo)));
	/* mov	dx,WORD PTR [di].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_hi)));
	/* sub	ax,WORD PTR CloudTop */
	SUB(ax, *(dw*)(&cloudtop));
	/* sbb	dx,WORD PTR CloudTop+2 */
	SBB(dx, *(dw*)(((db*)&cloudtop)+2));
	/* jb	NoLock */
	if (CF) {goto nolock;}
	/* jmp	IRLock */
	goto irlock;
	// 0 ;--------------------
	// 0 ;* check for overcast
	// 0 ;--------------------
dummylabel159:
	// 5503 
	/* @@:		test	Overcast,1 */
	TEST(overcast, 1);
	/* jz	IRLock */
	if (!(overcast & 1)) {goto irlock;}
	// 0 ;* if object is below cloud base then target must also be below for IR lock
	/* mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	dx,WORD PTR [si].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jae	@F */
	if (!CF) {goto dummylabel160;}
	/* mov	ax,WORD PTR [di].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_lo)));
	/* mov	dx,WORD PTR [di].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_hi)));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jae	NoLock */
	if (!CF) {goto nolock;}
	/* jmp	IRLock */
	goto irlock;
	// 0 ;* no lock if object in clouds
dummylabel160:
	// 5505 
	/* @@:		sub	ax,CloudDepth */
	SUB(ax, clouddepth);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* jb	NoLock */
	if (CF) {goto nolock;}
	// 0 ;* if object is above cloud top then target must also be above for IR lock
	/* mov	ax,WORD PTR [di].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_lo)));
	/* mov	dx,WORD PTR [di].VP_ZFT_HI */
	dx = m2c::getdata(*((dw*)raddr(ds,di+vp_zft_hi)));
	/* sub	ax,WORD PTR CloudTop */
	SUB(ax, *(dw*)(&cloudtop));
	/* sbb	dx,WORD PTR CloudTop+2 */
	SBB(dx, *(dw*)(((db*)&cloudtop)+2));
	/* jb	NoLock */
	if (CF) {goto nolock;}
	// 0 ;---------------------------
irlock:
	// 5507 
	// 0 ;---------------------------
	/* stc			;cf = 1 = IR lock */
	STC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
nolock:
	// 5509 
	// 0 ;---------------------------
	/* clc			;cf = 0 = no lock */
	CLC;
	/* ret */
	RETN(0);
aerialexplosion:
	// 11474 
	// 0 ;-------------------------
	// 0 ;* assume weapon available (initialize wrt pass parameters)
	// 0 ;-------------------------
edummylabel54:
	// 5511 
	/* mov	di,OFFSET WPN_View */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 11482 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 11483 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;---------------------------
	// 0 ;* check if weapon available
	// 0 ;---------------------------
	/* call	FindAvailWeapon */
	CALL(findavailweapon, 0);
	/* jc	ExitAerial	;cf = 1 (weapon not created) -> */
	if (CF) {goto exitaerial;}
	/* mov	WeaponPtr,si */
	weaponptr = si;
	// 0 ;----------------------
	// 0 ;* initialize explosion
	// 0 ;----------------------
	// 0 ;* init MOBILE <>
	/* mov	WPN_Mobile.MOB_NUM,MOB_AIRBURST */
	wpn_mobile.mob_num = 26;
	/* mov	WPN_Mobile.MOB_TYPE,OTYPE_MOBILE3 */
	wpn_mobile.mob_type = 6;
	/* mov	WPN_Mobile.MOB_ANIM,AIRBURST1 */
	wpn_mobile.mob_anim = 5;
	// 0 ;* init WEAPON <> (use arbitrary weapon - anything but NULL_WEAPON)
	/* mov	WPN_Weapon.WPN_TYPE,CANNON */
	wpn_weapon.wpn_type = 12;
	/* mov	WPN_Weapon.WPN_FLAGS,WFLG_AIRBURST */
	wpn_weapon.wpn_flags = 0x200;
	// 0 ;---------------------------------
	// 0 ;* copy weapon data from workspace
	// 0 ;---------------------------------
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET WPN_Workspace */
	si = m2c::near_offset_external(wpn_workspace);
	/* mov	di,WeaponPtr */
	di = weaponptr;
	/* mov	cx,WPN_DATA_SIZE */
	cx = 6+18+28;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 11514 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 11516 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 11517 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 11518 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* clc			;cf = 0 (weapon created) */
	CLC;
exitaerial:
	// 5513 
	/* ExitAerial:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_100_skip: 	goto __m2c_macrolocal_100_skip;
        case m2c::k__m2c_macrolocal_101_skip: 	goto __m2c_macrolocal_101_skip;
        case m2c::k__m2c_macrolocal_102_skip: 	goto __m2c_macrolocal_102_skip;
        case m2c::k__m2c_macrolocal_104_skip: 	goto __m2c_macrolocal_104_skip;
        case m2c::k__m2c_macrolocal_106_skip: 	goto __m2c_macrolocal_106_skip;
        case m2c::k__m2c_macrolocal_10_skip: 	goto __m2c_macrolocal_10_skip;
        case m2c::k__m2c_macrolocal_115_skip: 	goto __m2c_macrolocal_115_skip;
        case m2c::k__m2c_macrolocal_118_mvxy1: 	goto __m2c_macrolocal_118_mvxy1;
        case m2c::k__m2c_macrolocal_118_mvxy2: 	goto __m2c_macrolocal_118_mvxy2;
        case m2c::k__m2c_macrolocal_118_mvxy3: 	goto __m2c_macrolocal_118_mvxy3;
        case m2c::k__m2c_macrolocal_118_mvxy4: 	goto __m2c_macrolocal_118_mvxy4;
        case m2c::k__m2c_macrolocal_119_skip: 	goto __m2c_macrolocal_119_skip;
        case m2c::k__m2c_macrolocal_11_skip: 	goto __m2c_macrolocal_11_skip;
        case m2c::k__m2c_macrolocal_120_skip: 	goto __m2c_macrolocal_120_skip;
        case m2c::k__m2c_macrolocal_121_skip: 	goto __m2c_macrolocal_121_skip;
        case m2c::k__m2c_macrolocal_122_skip: 	goto __m2c_macrolocal_122_skip;
        case m2c::k__m2c_macrolocal_128_skip: 	goto __m2c_macrolocal_128_skip;
        case m2c::k__m2c_macrolocal_12_skip: 	goto __m2c_macrolocal_12_skip;
        case m2c::k__m2c_macrolocal_130_skip: 	goto __m2c_macrolocal_130_skip;
        case m2c::k__m2c_macrolocal_131_skip: 	goto __m2c_macrolocal_131_skip;
        case m2c::k__m2c_macrolocal_132_skip: 	goto __m2c_macrolocal_132_skip;
        case m2c::k__m2c_macrolocal_139_skip: 	goto __m2c_macrolocal_139_skip;
        case m2c::k__m2c_macrolocal_13_skip: 	goto __m2c_macrolocal_13_skip;
        case m2c::k__m2c_macrolocal_140_skip: 	goto __m2c_macrolocal_140_skip;
        case m2c::k__m2c_macrolocal_141_skip: 	goto __m2c_macrolocal_141_skip;
        case m2c::k__m2c_macrolocal_145_skip: 	goto __m2c_macrolocal_145_skip;
        case m2c::k__m2c_macrolocal_146_skip: 	goto __m2c_macrolocal_146_skip;
        case m2c::k__m2c_macrolocal_147_skip: 	goto __m2c_macrolocal_147_skip;
        case m2c::k__m2c_macrolocal_148_skip: 	goto __m2c_macrolocal_148_skip;
        case m2c::k__m2c_macrolocal_149_skip: 	goto __m2c_macrolocal_149_skip;
        case m2c::k__m2c_macrolocal_14_skip: 	goto __m2c_macrolocal_14_skip;
        case m2c::k__m2c_macrolocal_155_skip: 	goto __m2c_macrolocal_155_skip;
        case m2c::k__m2c_macrolocal_156_skip: 	goto __m2c_macrolocal_156_skip;
        case m2c::k__m2c_macrolocal_157_skip: 	goto __m2c_macrolocal_157_skip;
        case m2c::k__m2c_macrolocal_158_skip: 	goto __m2c_macrolocal_158_skip;
        case m2c::k__m2c_macrolocal_159_skip: 	goto __m2c_macrolocal_159_skip;
        case m2c::k__m2c_macrolocal_15_skip: 	goto __m2c_macrolocal_15_skip;
        case m2c::k__m2c_macrolocal_166_skip: 	goto __m2c_macrolocal_166_skip;
        case m2c::k__m2c_macrolocal_168_skip: 	goto __m2c_macrolocal_168_skip;
        case m2c::k__m2c_macrolocal_169_skip: 	goto __m2c_macrolocal_169_skip;
        case m2c::k__m2c_macrolocal_16_skip: 	goto __m2c_macrolocal_16_skip;
        case m2c::k__m2c_macrolocal_170_skip: 	goto __m2c_macrolocal_170_skip;
        case m2c::k__m2c_macrolocal_171_skip: 	goto __m2c_macrolocal_171_skip;
        case m2c::k__m2c_macrolocal_172_skip: 	goto __m2c_macrolocal_172_skip;
        case m2c::k__m2c_macrolocal_176_skip: 	goto __m2c_macrolocal_176_skip;
        case m2c::k__m2c_macrolocal_177_skip: 	goto __m2c_macrolocal_177_skip;
        case m2c::k__m2c_macrolocal_17_skip: 	goto __m2c_macrolocal_17_skip;
        case m2c::k__m2c_macrolocal_181_skip: 	goto __m2c_macrolocal_181_skip;
        case m2c::k__m2c_macrolocal_182_skip: 	goto __m2c_macrolocal_182_skip;
        case m2c::k__m2c_macrolocal_184_skip: 	goto __m2c_macrolocal_184_skip;
        case m2c::k__m2c_macrolocal_18_skip: 	goto __m2c_macrolocal_18_skip;
        case m2c::k__m2c_macrolocal_190_skip: 	goto __m2c_macrolocal_190_skip;
        case m2c::k__m2c_macrolocal_195_skip: 	goto __m2c_macrolocal_195_skip;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_206_skip: 	goto __m2c_macrolocal_206_skip;
        case m2c::k__m2c_macrolocal_20_skip: 	goto __m2c_macrolocal_20_skip;
        case m2c::k__m2c_macrolocal_212_skip: 	goto __m2c_macrolocal_212_skip;
        case m2c::k__m2c_macrolocal_215_skip: 	goto __m2c_macrolocal_215_skip;
        case m2c::k__m2c_macrolocal_21_skip: 	goto __m2c_macrolocal_21_skip;
        case m2c::k__m2c_macrolocal_221_skip: 	goto __m2c_macrolocal_221_skip;
        case m2c::k__m2c_macrolocal_225_skip: 	goto __m2c_macrolocal_225_skip;
        case m2c::k__m2c_macrolocal_231_skip: 	goto __m2c_macrolocal_231_skip;
        case m2c::k__m2c_macrolocal_233_skip: 	goto __m2c_macrolocal_233_skip;
        case m2c::k__m2c_macrolocal_234_skip: 	goto __m2c_macrolocal_234_skip;
        case m2c::k__m2c_macrolocal_235_skip: 	goto __m2c_macrolocal_235_skip;
        case m2c::k__m2c_macrolocal_236_skip: 	goto __m2c_macrolocal_236_skip;
        case m2c::k__m2c_macrolocal_239_skip: 	goto __m2c_macrolocal_239_skip;
        case m2c::k__m2c_macrolocal_23_skip: 	goto __m2c_macrolocal_23_skip;
        case m2c::k__m2c_macrolocal_240_skip: 	goto __m2c_macrolocal_240_skip;
        case m2c::k__m2c_macrolocal_241_skip: 	goto __m2c_macrolocal_241_skip;
        case m2c::k__m2c_macrolocal_242_skip: 	goto __m2c_macrolocal_242_skip;
        case m2c::k__m2c_macrolocal_243_skip: 	goto __m2c_macrolocal_243_skip;
        case m2c::k__m2c_macrolocal_246_skip: 	goto __m2c_macrolocal_246_skip;
        case m2c::k__m2c_macrolocal_247_skip: 	goto __m2c_macrolocal_247_skip;
        case m2c::k__m2c_macrolocal_248_skip: 	goto __m2c_macrolocal_248_skip;
        case m2c::k__m2c_macrolocal_249_skip: 	goto __m2c_macrolocal_249_skip;
        case m2c::k__m2c_macrolocal_250_skip: 	goto __m2c_macrolocal_250_skip;
        case m2c::k__m2c_macrolocal_252_skip: 	goto __m2c_macrolocal_252_skip;
        case m2c::k__m2c_macrolocal_254_skip: 	goto __m2c_macrolocal_254_skip;
        case m2c::k__m2c_macrolocal_255_skip: 	goto __m2c_macrolocal_255_skip;
        case m2c::k__m2c_macrolocal_256_skip: 	goto __m2c_macrolocal_256_skip;
        case m2c::k__m2c_macrolocal_257_skip: 	goto __m2c_macrolocal_257_skip;
        case m2c::k__m2c_macrolocal_258_skip: 	goto __m2c_macrolocal_258_skip;
        case m2c::k__m2c_macrolocal_259_skip: 	goto __m2c_macrolocal_259_skip;
        case m2c::k__m2c_macrolocal_25_skip: 	goto __m2c_macrolocal_25_skip;
        case m2c::k__m2c_macrolocal_260_skip: 	goto __m2c_macrolocal_260_skip;
        case m2c::k__m2c_macrolocal_261_skip: 	goto __m2c_macrolocal_261_skip;
        case m2c::k__m2c_macrolocal_264_skip: 	goto __m2c_macrolocal_264_skip;
        case m2c::k__m2c_macrolocal_265_mvxy1: 	goto __m2c_macrolocal_265_mvxy1;
        case m2c::k__m2c_macrolocal_265_mvxy2: 	goto __m2c_macrolocal_265_mvxy2;
        case m2c::k__m2c_macrolocal_265_mvxy3: 	goto __m2c_macrolocal_265_mvxy3;
        case m2c::k__m2c_macrolocal_265_mvxy4: 	goto __m2c_macrolocal_265_mvxy4;
        case m2c::k__m2c_macrolocal_266_mvxy1: 	goto __m2c_macrolocal_266_mvxy1;
        case m2c::k__m2c_macrolocal_266_mvxy2: 	goto __m2c_macrolocal_266_mvxy2;
        case m2c::k__m2c_macrolocal_266_mvxy3: 	goto __m2c_macrolocal_266_mvxy3;
        case m2c::k__m2c_macrolocal_266_mvxy4: 	goto __m2c_macrolocal_266_mvxy4;
        case m2c::k__m2c_macrolocal_26_skip: 	goto __m2c_macrolocal_26_skip;
        case m2c::k__m2c_macrolocal_30_mvxy1: 	goto __m2c_macrolocal_30_mvxy1;
        case m2c::k__m2c_macrolocal_30_mvxy2: 	goto __m2c_macrolocal_30_mvxy2;
        case m2c::k__m2c_macrolocal_30_mvxy3: 	goto __m2c_macrolocal_30_mvxy3;
        case m2c::k__m2c_macrolocal_30_mvxy4: 	goto __m2c_macrolocal_30_mvxy4;
        case m2c::k__m2c_macrolocal_42_mvxy1: 	goto __m2c_macrolocal_42_mvxy1;
        case m2c::k__m2c_macrolocal_42_mvxy2: 	goto __m2c_macrolocal_42_mvxy2;
        case m2c::k__m2c_macrolocal_42_mvxy3: 	goto __m2c_macrolocal_42_mvxy3;
        case m2c::k__m2c_macrolocal_42_mvxy4: 	goto __m2c_macrolocal_42_mvxy4;
        case m2c::k__m2c_macrolocal_43_skip: 	goto __m2c_macrolocal_43_skip;
        case m2c::k__m2c_macrolocal_44_skip: 	goto __m2c_macrolocal_44_skip;
        case m2c::k__m2c_macrolocal_45_skip: 	goto __m2c_macrolocal_45_skip;
        case m2c::k__m2c_macrolocal_46_skip: 	goto __m2c_macrolocal_46_skip;
        case m2c::k__m2c_macrolocal_47_skip: 	goto __m2c_macrolocal_47_skip;
        case m2c::k__m2c_macrolocal_48_skip: 	goto __m2c_macrolocal_48_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_56_skip: 	goto __m2c_macrolocal_56_skip;
        case m2c::k__m2c_macrolocal_59_mvxy1: 	goto __m2c_macrolocal_59_mvxy1;
        case m2c::k__m2c_macrolocal_59_mvxy2: 	goto __m2c_macrolocal_59_mvxy2;
        case m2c::k__m2c_macrolocal_59_mvxy3: 	goto __m2c_macrolocal_59_mvxy3;
        case m2c::k__m2c_macrolocal_59_mvxy4: 	goto __m2c_macrolocal_59_mvxy4;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_60_skip: 	goto __m2c_macrolocal_60_skip;
        case m2c::k__m2c_macrolocal_67_testhi: 	goto __m2c_macrolocal_67_testhi;
        case m2c::k__m2c_macrolocal_67_testok: 	goto __m2c_macrolocal_67_testok;
        case m2c::k__m2c_macrolocal_68_skip: 	goto __m2c_macrolocal_68_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_70_skip: 	goto __m2c_macrolocal_70_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_80_mvxy1: 	goto __m2c_macrolocal_80_mvxy1;
        case m2c::k__m2c_macrolocal_80_mvxy2: 	goto __m2c_macrolocal_80_mvxy2;
        case m2c::k__m2c_macrolocal_80_mvxy3: 	goto __m2c_macrolocal_80_mvxy3;
        case m2c::k__m2c_macrolocal_80_mvxy4: 	goto __m2c_macrolocal_80_mvxy4;
        case m2c::k__m2c_macrolocal_84_skip: 	goto __m2c_macrolocal_84_skip;
        case m2c::k__m2c_macrolocal_87_mvxy1: 	goto __m2c_macrolocal_87_mvxy1;
        case m2c::k__m2c_macrolocal_87_mvxy2: 	goto __m2c_macrolocal_87_mvxy2;
        case m2c::k__m2c_macrolocal_87_mvxy3: 	goto __m2c_macrolocal_87_mvxy3;
        case m2c::k__m2c_macrolocal_87_mvxy4: 	goto __m2c_macrolocal_87_mvxy4;
        case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::k__m2c_macrolocal_90_skip: 	goto __m2c_macrolocal_90_skip;
        case m2c::k__m2c_macrolocal_91_skip: 	goto __m2c_macrolocal_91_skip;
        case m2c::k__m2c_macrolocal_92_skip: 	goto __m2c_macrolocal_92_skip;
        case m2c::k__m2c_macrolocal_93_skip: 	goto __m2c_macrolocal_93_skip;
        case m2c::k__m2c_macrolocal_94_skip: 	goto __m2c_macrolocal_94_skip;
        case m2c::k__m2c_macrolocal_95_skip: 	goto __m2c_macrolocal_95_skip;
        case m2c::k__m2c_macrolocal_97_skip: 	goto __m2c_macrolocal_97_skip;
        case m2c::k__m2c_macrolocal_98_skip: 	goto __m2c_macrolocal_98_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kaerialactivity: 	goto aerialactivity;
        case m2c::kaerialexplosion: 	goto aerialexplosion;
        case m2c::kalarmaimpitch1: 	goto alarmaimpitch1;
        case m2c::kalarmaimpitch2: 	goto alarmaimpitch2;
        case m2c::kalarmdamage: 	goto alarmdamage;
        case m2c::kalarmdirect: 	goto alarmdirect;
        case m2c::kalarmdive: 	goto alarmdive;
        case m2c::kalarmendlife: 	goto alarmendlife;
        case m2c::kalarmfreefall: 	goto alarmfreefall;
        case m2c::kalarmguidance: 	goto alarmguidance;
        case m2c::kalarmguide: 	goto alarmguide;
        case m2c::kalarmguideabove: 	goto alarmguideabove;
        case m2c::kalarmguidebelow: 	goto alarmguidebelow;
        case m2c::kalarmguideok: 	goto alarmguideok;
        case m2c::kalarmguideover: 	goto alarmguideover;
        case m2c::kalarmhitgnd: 	goto alarmhitgnd;
        case m2c::kalarmimpact: 	goto alarmimpact;
        case m2c::kalarmkill: 	goto alarmkill;
        case m2c::kalarmloiter: 	goto alarmloiter;
        case m2c::kalarmmovement: 	goto alarmmovement;
        case m2c::kalarmradarfail: 	goto alarmradarfail;
        case m2c::kalarmradarpass: 	goto alarmradarpass;
        case m2c::kalarmradarscan: 	goto alarmradarscan;
        case m2c::kalarmtimerok: 	goto alarmtimerok;
        case m2c::kalarmzoom: 	goto alarmzoom;
        case m2c::karmalarmdir: 	goto armalarmdir;
        case m2c::karmalarmind: 	goto armalarmind;
        case m2c::karmcannon: 	goto armcannon;
        case m2c::karmjp233: 	goto armjp233;
        case m2c::karmlaserguided: 	goto armlaserguided;
        case m2c::karmlaydown: 	goto armlaydown;
        case m2c::karmloft: 	goto armloft;
        case m2c::karmmanual: 	goto armmanual;
        case m2c::karmok: 	goto armok;
        case m2c::karmsidewinder: 	goto armsidewinder;
        case m2c::karmskyflash: 	goto armskyflash;
        case m2c::kbellydecoy: 	goto bellydecoy;
        case m2c::kbombballistics: 	goto bombballistics;
        case m2c::kbombhitgnd: 	goto bombhitgnd;
        case m2c::kbombimpact: 	goto bombimpact;
        case m2c::kcalcbombccip: 	goto calcbombccip;
        case m2c::kcalcdecoypos: 	goto calcdecoypos;
        case m2c::kcalclgbpitch1: 	goto calclgbpitch1;
        case m2c::kcalclgbpitch2: 	goto calclgbpitch2;
        case m2c::kcalclgbrate: 	goto calclgbrate;
        case m2c::kcalclgbvel: 	goto calclgbvel;
        case m2c::kcalcpitchdown: 	goto calcpitchdown;
        case m2c::kcalcpylonpos: 	goto calcpylonpos;
        case m2c::kcalcstoreswt: 	goto calcstoreswt;
        case m2c::kcalcthrow: 	goto calcthrow;
        case m2c::kcheckalarmtimer: 	goto checkalarmtimer;
        case m2c::kcheckirlock: 	goto checkirlock;
        case m2c::kcheckradartgt: 	goto checkradartgt;
        case m2c::kcontairburst: 	goto contairburst;
        case m2c::kcontalarmmove: 	goto contalarmmove;
        case m2c::kcontalarmpitch: 	goto contalarmpitch;
        case m2c::kcontbombball: 	goto contbombball;
        case m2c::kcontburn: 	goto contburn;
        case m2c::kcontburnout: 	goto contburnout;
        case m2c::kcontcannon: 	goto contcannon;
        case m2c::kcontcrater: 	goto contcrater;
        case m2c::kcontdecoypos: 	goto contdecoypos;
        case m2c::kcontewrscan: 	goto contewrscan;
        case m2c::kcontfragment: 	goto contfragment;
        case m2c::kcontheave: 	goto contheave;
        case m2c::kcontjp233: 	goto contjp233;
        case m2c::kcontlgbrelease: 	goto contlgbrelease;
        case m2c::kcontloiter: 	goto contloiter;
        case m2c::kcontmissmove: 	goto contmissmove;
        case m2c::kcontmisspitch: 	goto contmisspitch;
        case m2c::kcontpullup: 	goto contpullup;
        case m2c::kcontpylonpos: 	goto contpylonpos;
        case m2c::kcontrelbomb: 	goto contrelbomb;
        case m2c::kcontshellball: 	goto contshellball;
        case m2c::kcontsplash: 	goto contsplash;
        case m2c::kcontthrow: 	goto contthrow;
        case m2c::kcontupdate: 	goto contupdate;
        case m2c::kcreateairburst: 	goto createairburst;
        case m2c::kcreatebomblet: 	goto createbomblet;
        case m2c::kcreateexplosion: 	goto createexplosion;
        case m2c::kdronewingpylon: 	goto dronewingpylon;
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
        case m2c::kedummylabel42: 	goto edummylabel42;
        case m2c::kedummylabel43: 	goto edummylabel43;
        case m2c::kedummylabel44: 	goto edummylabel44;
        case m2c::kedummylabel45: 	goto edummylabel45;
        case m2c::kedummylabel46: 	goto edummylabel46;
        case m2c::kedummylabel47: 	goto edummylabel47;
        case m2c::kedummylabel48: 	goto edummylabel48;
        case m2c::kedummylabel49: 	goto edummylabel49;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel50: 	goto edummylabel50;
        case m2c::kedummylabel51: 	goto edummylabel51;
        case m2c::kedummylabel52: 	goto edummylabel52;
        case m2c::kedummylabel53: 	goto edummylabel53;
        case m2c::kedummylabel54: 	goto edummylabel54;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kewrdead: 	goto ewrdead;
        case m2c::kewrfound: 	goto ewrfound;
        case m2c::kewrok: 	goto ewrok;
        case m2c::kexitaerial: 	goto exitaerial;
        case m2c::kexitairwpn: 	goto exitairwpn;
        case m2c::kexitalarm: 	goto exitalarm;
        case m2c::kexitbl755: 	goto exitbl755;
        case m2c::kexitbomblet: 	goto exitbomblet;
        case m2c::kexitcannon: 	goto exitcannon;
        case m2c::kexitdecoy: 	goto exitdecoy;
        case m2c::kexitfirecannon: 	goto exitfirecannon;
        case m2c::kexitgndobj: 	goto exitgndobj;
        case m2c::kexitgpb: 	goto exitgpb;
        case m2c::kexitimpact: 	goto exitimpact;
        case m2c::kexitjp233: 	goto exitjp233;
        case m2c::kexitlaunchalarm: 	goto exitlaunchalarm;
        case m2c::kexitlaunchmiss: 	goto exitlaunchmiss;
        case m2c::kexitlgb: 	goto exitlgb;
        case m2c::kexitmissile: 	goto exitmissile;
        case m2c::kexitnextpack: 	goto exitnextpack;
        case m2c::kexitproxkill: 	goto exitproxkill;
        case m2c::kexitradartgt: 	goto exitradartgt;
        case m2c::kexitrelbomb: 	goto exitrelbomb;
        case m2c::kexitreldecoy: 	goto exitreldecoy;
        case m2c::kexitret: 	goto exitret;
        case m2c::kexitrwydamage: 	goto exitrwydamage;
        case m2c::kexitsamloop: 	goto exitsamloop;
        case m2c::kexitsplash: 	goto exitsplash;
        case m2c::kexitstatmob: 	goto exitstatmob;
        case m2c::kexploloop: 	goto exploloop;
        case m2c::kexplosoundok: 	goto explosoundok;
        case m2c::kfindavailweapon: 	goto findavailweapon;
        case m2c::kfindwpnloop: 	goto findwpnloop;
        case m2c::kfirecannon: 	goto firecannon;
        case m2c::kgndobjloop: 	goto gndobjloop;
        case m2c::kgrounddamage: 	goto grounddamage;
        case m2c::khvelok: 	goto hvelok;
        case m2c::kinitweapons: 	goto initweapons;
        case m2c::kintodive: 	goto intodive;
        case m2c::kintofreefall: 	goto intofreefall;
        case m2c::kintokill: 	goto intokill;
        case m2c::kintolgbvel: 	goto intolgbvel;
        case m2c::kintoloiter: 	goto intoloiter;
        case m2c::kintozoom: 	goto intozoom;
        case m2c::kirlock: 	goto irlock;
        case m2c::kkillgndexit: 	goto killgndexit;
        case m2c::kkillgndobjects: 	goto killgndobjects;
        case m2c::kkillmobexit: 	goto killmobexit;
        case m2c::kkillmobiles: 	goto killmobiles;
        case m2c::kkillstatexit: 	goto killstatexit;
        case m2c::kkillstatmobiles: 	goto killstatmobiles;
        case m2c::kkilltrees: 	goto killtrees;
        case m2c::kkilltreesexit: 	goto killtreesexit;
        case m2c::klatearmswitch: 	goto latearmswitch;
        case m2c::klaunchalarm: 	goto launchalarm;
        case m2c::klaunchmissile: 	goto launchmissile;
        case m2c::klgbguidance: 	goto lgbguidance;
        case m2c::klgbhdgerror: 	goto lgbhdgerror;
        case m2c::klgbimpact: 	goto lgbimpact;
        case m2c::kloftcommit: 	goto loftcommit;
        case m2c::kmissaimpitch1: 	goto missaimpitch1;
        case m2c::kmissaimpitch2: 	goto missaimpitch2;
        case m2c::kmissileguidance: 	goto missileguidance;
        case m2c::kmissilehitgnd: 	goto missilehitgnd;
        case m2c::kmissileimpact: 	goto missileimpact;
        case m2c::kmissileok: 	goto missileok;
        case m2c::kmisslockok: 	goto misslockok;
        case m2c::kmissloselock: 	goto missloselock;
        case m2c::kmisstimerok: 	goto misstimerok;
        case m2c::kmobileloop: 	goto mobileloop;
        case m2c::kmovemissile: 	goto movemissile;
        case m2c::knewrwy: 	goto newrwy;
        case m2c::knextgndobj: 	goto nextgndobj;
        case m2c::knextmobile: 	goto nextmobile;
        case m2c::knextpackloop: 	goto nextpackloop;
        case m2c::knextrwy: 	goto nextrwy;
        case m2c::knextstatmob: 	goto nextstatmob;
        case m2c::knextthreat: 	goto nextthreat;
        case m2c::knexttree: 	goto nexttree;
        case m2c::knolaser: 	goto nolaser;
        case m2c::knolgbflip: 	goto nolgbflip;
        case m2c::knolock: 	goto nolock;
        case m2c::knoradartargets: 	goto noradartargets;
        case m2c::kpackageok: 	goto packageok;
        case m2c::kproximitykill: 	goto proximitykill;
        case m2c::kqueque002e: 	goto queque002e;
        case m2c::kqueque0030: 	goto queque0030;
        case m2c::krecordrwydamage: 	goto recordrwydamage;
        case m2c::kreleasebomb: 	goto releasebomb;
        case m2c::kreleasedecoy: 	goto releasedecoy;
        case m2c::kreleasepackage: 	goto releasepackage;
        case m2c::kretardbombvel: 	goto retardbombvel;
        case m2c::krwyloop: 	goto rwyloop;
        case m2c::ksamerwy: 	goto samerwy;
        case m2c::kscaleok: 	goto scaleok;
        case m2c::kscanaaaloop: 	goto scanaaaloop;
        case m2c::kscanewrloop: 	goto scanewrloop;
        case m2c::kscanmobiles: 	goto scanmobiles;
        case m2c::kscanmobloop: 	goto scanmobloop;
        case m2c::kscannextsctr1: 	goto scannextsctr1;
        case m2c::kscannextsctr2: 	goto scannextsctr2;
        case m2c::kscansamloop: 	goto scansamloop;
        case m2c::kscantreeloop: 	goto scantreeloop;
        case m2c::kscantrees: 	goto scantrees;
        case m2c::kscanxloop1: 	goto scanxloop1;
        case m2c::kscanxloop2: 	goto scanxloop2;
        case m2c::kscanyloop1: 	goto scanyloop1;
        case m2c::kscanyloop2: 	goto scanyloop2;
        case m2c::kselectairwpn: 	goto selectairwpn;
        case m2c::kselectnextpack: 	goto selectnextpack;
        case m2c::ksetairwpn: 	goto setairwpn;
        case m2c::ksetalarmvel: 	goto setalarmvel;
        case m2c::ksetbombpitch: 	goto setbombpitch;
        case m2c::ksetlatearm: 	goto setlatearm;
        case m2c::ksetwpnmode: 	goto setwpnmode;
        case m2c::kshellballistics: 	goto shellballistics;
        case m2c::kshellhitgnd: 	goto shellhitgnd;
        case m2c::kshellimpact: 	goto shellimpact;
        case m2c::kshellok: 	goto shellok;
        case m2c::kskipaaascan: 	goto skipaaascan;
        case m2c::kskipalarmdir: 	goto skipalarmdir;
        case m2c::kskipalarmind: 	goto skipalarmind;
        case m2c::kskiparmair: 	goto skiparmair;
        case m2c::kskiparmgnd: 	goto skiparmgnd;
        case m2c::kskiparmoff: 	goto skiparmoff;
        case m2c::kskipboz: 	goto skipboz;
        case m2c::kskipcannon: 	goto skipcannon;
        case m2c::kskipchaff: 	goto skipchaff;
        case m2c::kskipdecoy: 	goto skipdecoy;
        case m2c::kskipflare: 	goto skipflare;
        case m2c::kskipfragment: 	goto skipfragment;
        case m2c::kskipjp233: 	goto skipjp233;
        case m2c::kskipkillgnd: 	goto skipkillgnd;
        case m2c::kskipkillmob: 	goto skipkillmob;
        case m2c::kskiplaserguided: 	goto skiplaserguided;
        case m2c::kskiplatearm: 	goto skiplatearm;
        case m2c::kskiplaydown: 	goto skiplaydown;
        case m2c::kskiplgbrelease: 	goto skiplgbrelease;
        case m2c::kskiploft: 	goto skiploft;
        case m2c::kskipmanual: 	goto skipmanual;
        case m2c::kskipmob: 	goto skipmob;
        case m2c::kskipmobkill: 	goto skipmobkill;
        case m2c::kskippackage: 	goto skippackage;
        case m2c::kskipsamscan: 	goto skipsamscan;
        case m2c::kskipsidewinder: 	goto skipsidewinder;
        case m2c::kskipskyflash: 	goto skipskyflash;
        case m2c::kskipskyshadow: 	goto skipskyshadow;
        case m2c::kskiptree: 	goto skiptree;
        case m2c::kskipview: 	goto skipview;
        case m2c::ksortairborne: 	goto sortairborne;
        case m2c::ksortbellypylon: 	goto sortbellypylon;
        case m2c::ksortgroundewr: 	goto sortgroundewr;
        case m2c::ksortlaunchside: 	goto sortlaunchside;
        case m2c::ksortlgbangles: 	goto sortlgbangles;
        case m2c::ksortlgbhdg: 	goto sortlgbhdg;
        case m2c::ksortmissok: 	goto sortmissok;
        case m2c::ksortmobileewr: 	goto sortmobileewr;
        case m2c::ksortradarlock: 	goto sortradarlock;
        case m2c::kspecialeffectsbeforenextmobile: 	goto specialeffectsbeforenextmobile;
        case m2c::kstatmobloop: 	goto statmobloop;
        case m2c::kstoreimpact: 	goto storeimpact;
        case m2c::kswitchtodive: 	goto switchtodive;
        case m2c::kswitchtofree: 	goto switchtofree;
        case m2c::kswitchtokill: 	goto switchtokill;
        case m2c::kswitchtoloiter: 	goto switchtoloiter;
        case m2c::kswitchtozoom: 	goto switchtozoom;
        case m2c::kthreatloop: 	goto threatloop;
        case m2c::kunguidedlgb: 	goto unguidedlgb;
        case m2c::kupdateairburst: 	goto updateairburst;
        case m2c::kupdatealarm: 	goto updatealarm;
        case m2c::kupdatebl755: 	goto updatebl755;
        case m2c::kupdatecannon: 	goto updatecannon;
        case m2c::kupdatedecoy: 	goto updatedecoy;
        case m2c::kupdategpb: 	goto updategpb;
        case m2c::kupdatejp233: 	goto updatejp233;
        case m2c::kupdatelgb: 	goto updatelgb;
        case m2c::kupdateloop: 	goto updateloop;
        case m2c::kupdatemissile: 	goto updatemissile;
        case m2c::kupdatenext: 	goto updatenext;
        case m2c::kupdateret: 	goto updateret;
        case m2c::kupdatesplash: 	goto updatesplash;
        case m2c::kupdateweapons: 	goto updateweapons;
        case m2c::kvvelok: 	goto vvelok;
        case m2c::kweaponavail: 	goto weaponavail;
        case m2c::kweaponscontrol: 	goto weaponscontrol;
        case m2c::kweaponsplash: 	goto weaponsplash;
        case m2c::kwpnhitsmoke: 	goto wpnhitsmoke;
        case m2c::kwpnhitsound: 	goto wpnhitsound;
        case m2c::kwpnhittarget: 	goto wpnhittarget;
        default: return __dispatch_call(__disp, _state);
    };
}


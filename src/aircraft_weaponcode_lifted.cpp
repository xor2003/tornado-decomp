/* THIS IS GENERATED FILE */

        
#include "aircraft.h"

                

 static bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
autobomb:
	// 7484 
	// 0 ;-------------------
	// 0 ;* ensure track mode (aircraft may have just switched to another mode)
	// 0 ;-------------------
edummylabel39:
	// 5011 
	/* cmp	AC_Data.AC_CTRL_MODE,CTRL_TRACK */
	CMP(ac_data.ac_ctrl_mode, 4);
	/* jne	ExitBomb */
	if ((dw)(ac_data.ac_ctrl_mode) != (dw)(4)) {goto exitbomb;}
	// 0 ;----------------------------------
	// 0 ;* check if package to be delivered
	// 0 ;----------------------------------
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* cmp	[si].WP_PACKAGE,WPACK_NULL */
	CMP(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), 0);
	/* je	ExitBomb */
	if ((db)(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package))) == (db)(0)) {goto exitbomb;}
	// 0 ;----------------------
	// 0 ;* extract package data
	// 0 ;----------------------
	/* mov	al,[si].WP_PACKAGE */
	al = m2c::getdata(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)));
	// 0 ;* extract weapon type / delivery mode
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,WPACK_MODE_MASK */
	AND(bx, 0xf);
	// 0 ;* extract number of weapons
	/* mov	cx,ax */
	cx = ax;
	/* and	cx,WPACK_NUM_MASK */
	AND(cx, 0xf0);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	/* shr	cx,1 */
	SHR(cx, 1);
	// 0 ;--------------------
	// 0 ;* sort weapon arming
	// 0 ;--------------------
__disp=*(dw*)(((db*)&armswitch)+bx);
	/* jmp	ArmSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
armnull:
	// 5013 
	// 0 ;---------------------------
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armgpb1000:
	// 5015 
	// 0 ;---------------------------
	/* mov	bx,GPB1000 */
	bx = 0;
	/* call	AutoLaydown */
	CALL(autolaydown, 0);
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armret1000:
	// 5017 
	// 0 ;---------------------------
	/* mov	bx,RET1000 */
	bx = 2;
	/* call	AutoLaydown */
	CALL(autolaydown, 0);
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armlgb1000:
	// 5019 
	// 0 ;---------------------------
	/* call	AutoLGB */
	CALL(autolgb, 0);
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armbl755:
	// 5021 
	// 0 ;---------------------------
	/* mov	bx,BL755 */
	bx = 6;
	/* call	AutoLaydown */
	CALL(autolaydown, 0);
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armjp233:
	// 5023 
	// 0 ;---------------------------
	/* call	AutoJP233 */
	CALL(autojp233, 0);
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armalarm:
	// 5025 
	// 0 ;---------------------------
	/* call	AutoAlarm */
	CALL(autoalarm, 0);
	/* jmp	ExitBomb */
	goto exitbomb;
	// 0 ;---------------------------
armagm:
	// 5027 
	// 0 ;---------------------------
	/* call	AutoAGM */
	CALL(autoagm, 0);
exitbomb:
	// 5029 
	/* ExitBomb:	ret */
	RETF(0);
autolaydown:
	// 7581 
	// 0 ;-------------------
	// 0 ;* store pass params
	// 0 ;-------------------
edummylabel40:
	// 5031 
	/* mov	WeaponType,bx */
	weapontype = bx;
	/* mov	WeaponNum,cx */
	weaponnum = cx;
	// 0 ;-------------------
	// 0 ;* release interlock
	// 0 ;-------------------
	// 0 ;* check target ahead (avoid spurious release)
	/* mov	ax,AC_View.VP_HDG */
	ax = ac_view.vp_hdg;
	/* mov	dx,AC_WPBrg */
	dx = ac_wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,14		;?0? */
	CMP(ax, 14);
	/* jbe	__m2c_macrolocal_148_skip */
	if ((dw)(ax) <= (dw)(14)) {goto __m2c_macrolocal_148_skip;}
	/* jmp	ExitLaydown */
	goto exitlaydown;
__m2c_macrolocal_148_skip:
	// 5033 
	// 0 ;-------------------
	// 0 ;* calc weapon throw
	// 0 ;-------------------
	/* mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	bx,WeaponType */
	bx = weapontype;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	// 0 ;-------------------
	// 0 ;* check for release
	// 0 ;-------------------
	// 0 ;* release if (range - throw) <= (vtas * cos(pitch) * delta time) / 16
	/* mov	ax,WORD PTR AC_WPRng */
	ax = *(dw*)(&ac_wprng);
	/* mov	dx,WORD PTR AC_WPRng+2 */
	dx = *(dw*)(((db*)&ac_wprng)+2);
	/* sub	ax,WORD PTR BombThrow */
	SUB(ax, *(dw*)(&bombthrow));
	/* sbb	dx,WORD PTR BombThrow+2 */
	SBB(dx, *(dw*)(((db*)&bombthrow)+2));
	/* js	@F		;< 0, always release -> */
	if ((short)(dx) < 0) {goto dummylabel134;}
	/* jnz	ExitLaydown	;too far -> */
	if (dx != 0) {goto exitlaydown;}
	/* mov	bp,ax */
	bp = ax;
	/* mov	bx,AC_View.VP_PITCH */
	bx = ac_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&costable)+bx););	// 7626 						mov	dx,CosTable[bx] */
	/* mov	dx,CosTable[bx] */
	dx = *(dw*)(((db*)&costable)+bx);
	/* mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
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
	/* ja	ExitLaydown	;no -> */
	if ((dw)(bp) > (dw)(dx)) {goto exitlaydown;}
	// 0 ;-----------------
	// 0 ;* release package
	// 0 ;-----------------
dummylabel134:
	// 5035 
	/* @@:		mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	bx,WeaponType */
	bx = weapontype;
	/* mov	cx,WeaponNum */
	cx = weaponnum;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,-1	  	;target waypoint not applicable */
	di = -1;
	/* xor	dl,dl	  	;drone release */
	XOR(dl, dl);
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	// 0 ;* clear package (assume package released)
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	[si].WP_PACKAGE,WPACK_NULL */
	m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package))), m2c::getdata(0));
	// 0 ;* inhibit aircraft route change until weapons are clear
	/* mov	AC_Data.AC_ARM_LOCK,WPN_CLR_DELAY */
	ac_data.ac_arm_lock = 1*100;
exitlaydown:
	// 5037 
	/* ExitLaydown:	ret */
	RETN(0);
autolgb:
	// 7679 
	// 0 ;-------------------
	// 0 ;* store pass params
	// 0 ;-------------------
edummylabel41:
	// 5039 
	/* mov	WeaponNum,cx */
	weaponnum = cx;
	// 0 ;-------------------------------
	// 0 ;* check for release in progress
	// 0 ;-------------------------------
	/* cmp	AC_Data.AC_ARM_LOCK,0 */
	CMP(ac_data.ac_arm_lock, 0);
	/* ja	ContLGB */
	if ((dw)(ac_data.ac_arm_lock) > (dw)(0)) {goto contlgb;}
	// 0 ;-------------------
	// 0 ;* release interlock
	// 0 ;-------------------
	// 0 ;* check target ahead (avoid spurious release)
	/* mov	ax,AC_View.VP_HDG */
	ax = ac_view.vp_hdg;
	/* mov	dx,AC_WPBrg */
	dx = ac_wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,14		;?0? */
	CMP(ax, 14);
	/* ja	ExitLGB */
	if ((dw)(ax) > (dw)(14)) {goto exitlgb;}
	// 0 ;-------------------
	// 0 ;* check for release
	// 0 ;-------------------
	// 0 ;* release if range <= zft / 2
	/* mov	ax,WORD PTR AC_View.VP_ZFT_LO */
	ax = *((dw*)((db*)&ac_view+vp_zft_lo));
	/* mov	dx,WORD PTR AC_View.VP_ZFT_HI */
	dx = *((dw*)((db*)&ac_view+vp_zft_hi));
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cmp	WORD PTR AC_WPRng+2,dx */
	CMP(*(dw*)(((db*)&ac_wprng)+2), dx);
	/* ja	ExitLGB */
	if ((dw)(*(dw*)(((db*)&ac_wprng)+2)) > (dw)(dx)) {goto exitlgb;}
	/* jb	LGBOk */
	if ((dw)(*(dw*)(((db*)&ac_wprng)+2)) < (dw)(dx)) {goto lgbok;}
	/* cmp	WORD PTR AC_WPRng,ax */
	CMP(*(dw*)(&ac_wprng), ax);
	/* ja	ExitLGB */
	if ((dw)(*(dw*)(&ac_wprng)) > (dw)(ax)) {goto exitlgb;}
	/* jmp	LGBOk */
	goto lgbok;
	// 0 ;--------------------------
	// 0 ;* continue package release
	// 0 ;--------------------------
	// 0 ;* update delivery timer
contlgb:
	// 5041 
	/* ContLGB:    	mov	ax,AC_Data.AC_ARM_LOCK */
	ax = ac_data.ac_arm_lock;
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
	/* mov	AC_Data.AC_ARM_LOCK,ax */
	ac_data.ac_arm_lock = ax;
	/* jnz	ExitLGB */
	if (ax != 0) {goto exitlgb;}
	// 0 ;* release single weapon
lgbok:
	// 5043 
	/* LGBOk:		mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	bx,LGB1000 */
	bx = 4;
	/* mov	cx,1 */
	cx = 1;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,AC_Data.AC_WP_PTR */
	di = ac_data.ac_wp_ptr;
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
	// 0 ;* update package count (assume weapon released)
	/* mov	ax,WeaponNum */
	ax = weaponnum;
	/* dec	ax */
	DEC(ax);
	/* jnz	@F */
	if (ax != 0) {goto dummylabel135;}
	// 0 ;* clear package (last weapon released)
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	[si].WP_PACKAGE,WPACK_NULL */
	m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package))), m2c::getdata(0));
	// 0 ;* inhibit aircraft route change until weapons are clear
	/* mov	AC_Data.AC_ARM_LOCK,WPN_CLR_DELAY */
	ac_data.ac_arm_lock = 1*100;
	/* jmp	ExitLGB */
	goto exitlgb;
	// 0 ;* update number of weapons remaining in package
dummylabel135:
	// 5045 
	/* and	al,WPACK_NUM_MASK */
	AND(al, 0xf0);
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* and	[si].WP_PACKAGE,WPACK_MODE_MASK */
	AND(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), 0xf);
	/* or	[si].WP_PACKAGE,al */
	OR(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), al);
	// 0 ;* inhibit aircraft route change during LGB delivery
	/* mov	AC_Data.AC_ARM_LOCK,LGB_DELAY */
	ac_data.ac_arm_lock = 2*100;
exitlgb:
	// 5047 
	/* ExitLGB:	ret */
	RETN(0);
autojp233:
	// 7777 
	// 0 ;-------------------------------
	// 0 ;* check for release in progress
	// 0 ;-------------------------------
edummylabel42:
	// 5049 
	/* cmp	AC_Data.AC_ARM_LOCK,0 */
	CMP(ac_data.ac_arm_lock, 0);
	/* ja	ContJP233 */
	if ((dw)(ac_data.ac_arm_lock) > (dw)(0)) {goto contjp233;}
	// 0 ;-------------------
	// 0 ;* release interlock
	// 0 ;-------------------
	// 0 ;* check target ahead (avoid spurious release)
	/* mov	ax,AC_View.VP_HDG */
	ax = ac_view.vp_hdg;
	/* mov	dx,AC_WPBrg */
	dx = ac_wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,14		;?0? */
	CMP(ax, 14);
	/* jbe	__m2c_macrolocal_154_skip */
	if ((dw)(ax) <= (dw)(14)) {goto __m2c_macrolocal_154_skip;}
	/* jmp	ExitJP233 */
	goto exitjp233;
__m2c_macrolocal_154_skip:
	// 5051 
	// 0 ;-------------------
	// 0 ;* calc weapon throw
	// 0 ;-------------------
	/* mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	bx,JP233 */
	bx = 8;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* call	CalcThrow */
	CALL(calcthrow, 0);
	// 0 ;-------------------
	// 0 ;* check for release
	// 0 ;-------------------
	// 0 ;* release if (range - throw) <= (vtas * cos(pitch) * delta time) / 16
	/* mov	ax,WORD PTR AC_WPRng */
	ax = *(dw*)(&ac_wprng);
	/* mov	dx,WORD PTR AC_WPRng+2 */
	dx = *(dw*)(((db*)&ac_wprng)+2);
	/* sub	ax,WORD PTR BombThrow */
	SUB(ax, *(dw*)(&bombthrow));
	/* sbb	dx,WORD PTR BombThrow+2 */
	SBB(dx, *(dw*)(((db*)&bombthrow)+2));
	/* js	@F		;< 0, always release -> */
	if ((short)(dx) < 0) {goto dummylabel136;}
	/* jz	__m2c_macrolocal_155_skip */
	if (dx == 0) {goto __m2c_macrolocal_155_skip;}
	/* jmp	ExitJP233 */
	goto exitjp233;
__m2c_macrolocal_155_skip:
	// 5053 
	// 0 ;too far ->
	/* mov	bp,ax */
	bp = ax;
	/* mov	bx,AC_View.VP_PITCH */
	bx = ac_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(dx = *(dw*)(((db*)&costable)+bx););	// 7826 						mov	dx,CosTable[bx] */
	/* mov	dx,CosTable[bx] */
	dx = *(dw*)(((db*)&costable)+bx);
	/* mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
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
	/* ja	ExitJP233	;no -> */
	if ((dw)(bp) > (dw)(dx)) {goto exitjp233;}
	// 0 ;-----------------------
	// 0 ;* start package release
	// 0 ;-----------------------
	// 0 ;* inhibit aircraft route change during JP233 delivery
dummylabel136:
	// 5055 
	/* @@:		mov	AC_Data.AC_ARM_LOCK,JP233_PERIOD */
	ac_data.ac_arm_lock = jp233_period;
	// 0 ;--------------------------
	// 0 ;* continue package release
	// 0 ;--------------------------
	// 0 ;* update delivery timer
contjp233:
	// 5057 
	/* ContJP233:    	mov	ax,AC_Data.AC_ARM_LOCK */
	ax = ac_data.ac_arm_lock;
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
	/* mov	AC_Data.AC_ARM_LOCK,ax */
	ac_data.ac_arm_lock = ax;
	/* jnz	@F */
	if (ax != 0) {goto dummylabel137;}
	// 0 ;* clear package
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	[si].WP_PACKAGE,WPACK_NULL */
	m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package))), m2c::getdata(0));
	// 0 ;* inhibit aircraft route change until weapons are clear
	/* mov	AC_Data.AC_ARM_LOCK,WPN_CLR_DELAY */
	ac_data.ac_arm_lock = 1*100;
	/* jmp	ExitJP233 */
	goto exitjp233;
	// 0 ;* num bomblets this frame = min(JP233_BOMBLETS * delta time, 1)
dummylabel137:
	// 5059 
	/* @@:		mov	ax,JP233_BOMBLETS */
	ax = jp233_bomblets;
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
	if ((cx & cx) != 0) {goto dummylabel138;}
	/* inc	cx */
	INC(cx);
dummylabel138:
	// 5061 
	/* @@:		mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	bx,JP233 */
	bx = 8;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,-1	  	;target waypoint not applicable */
	di = -1;
	/* xor	dl,dl	  	;drone release */
	XOR(dl, dl);
	// 0 ;* release bomblets (assume released ok)
	/* call	ReleasePackage */
	CALL(releasepackage, 0);
exitjp233:
	// 5063 
	/* ExitJP233:	ret */
	RETN(0);
autoalarm:
	// 7912 
	// 0 ;-------------------
	// 0 ;* store pass params
	// 0 ;-------------------
edummylabel43:
	// 5065 
	/* mov	WeaponNum,cx */
	weaponnum = cx;
	// 0 ;-------------------------------
	// 0 ;* check for release in progress
	// 0 ;-------------------------------
	/* cmp	AC_Data.AC_ARM_LOCK,0 */
	CMP(ac_data.ac_arm_lock, 0);
	/* ja	ContAlarm */
	if ((dw)(ac_data.ac_arm_lock) > (dw)(0)) {goto contalarm;}
	// 0 ;-------------------
	// 0 ;* release interlock
	// 0 ;-------------------
	// 0 ;* check target ahead (avoid spurious release)
	/* mov	ax,AC_View.VP_HDG */
	ax = ac_view.vp_hdg;
	/* mov	dx,AC_WPBrg */
	dx = ac_wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,14		;?0? */
	CMP(ax, 14);
	/* jbe	__m2c_macrolocal_162_skip */
	if ((dw)(ax) <= (dw)(14)) {goto __m2c_macrolocal_162_skip;}
	/* jmp	ExitAlarm */
	goto exitalarm;
__m2c_macrolocal_162_skip:
	// 5067 
	// 0 ;-------------------
	// 0 ;* check for release
	// 0 ;-------------------
	// 0 ;* release if range <= 10nm (60760ft)
	/* cmp	WORD PTR AC_WPRng+2,0 */
	CMP(*(dw*)(((db*)&ac_wprng)+2), 0);
	/* jbe	__m2c_macrolocal_163_skip */
	if ((dw)(*(dw*)(((db*)&ac_wprng)+2)) <= (dw)(0)) {goto __m2c_macrolocal_163_skip;}
	/* jmp	ExitAlarm */
	goto exitalarm;
__m2c_macrolocal_163_skip:
	// 5069 
	/* cmp	WORD PTR AC_WPRng,10*6076 */
	CMP(*(dw*)(&ac_wprng), 10*6076);
	/* jbe	__m2c_macrolocal_164_skip */
	if ((dw)(*(dw*)(&ac_wprng)) <= (dw)(10*6076)) {goto __m2c_macrolocal_164_skip;}
	/* jmp	ExitAlarm */
	goto exitalarm;
__m2c_macrolocal_164_skip:
	// 5071 
	/* jmp	AlarmOk */
	goto alarmok;
	// 0 ;--------------------------
	// 0 ;* continue package release
	// 0 ;--------------------------
	// 0 ;* update delivery timer
contalarm:
	// 5073 
	/* ContAlarm:    	mov	ax,AC_Data.AC_ARM_LOCK */
	ax = ac_data.ac_arm_lock;
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
	/* mov	AC_Data.AC_ARM_LOCK,ax */
	ac_data.ac_arm_lock = ax;
	/* jz	__m2c_macrolocal_166_skip */
	if (ax == 0) {goto __m2c_macrolocal_166_skip;}
	/* jmp	ExitAlarm */
	goto exitalarm;
__m2c_macrolocal_166_skip:
	// 5075 
	// 0 ;* sort target viewpoint
alarmok:
	// 5077 
	/* AlarmOk:	mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TMP_VIEW.VP_YSEC,ax */
	tmp_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = ax;
	// 0 ;* add random offset to viewpoint (unless last weapon in package)
	/* cmp	WeaponNum,1 */
	CMP(weaponnum, 1);
	/* je	@F */
	if ((dw)(weaponnum) == (dw)(1)) {goto dummylabel139;}
	/* call	RandX */
	CALLF(randx, 0);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* sar	ax,1		;-8192 .. 8191 */
	SAR(ax, 1);
	/* sar	ax,1		;-8192 .. 8191 */
	SAR(ax, 1);
	/* mov	cx,ax		;x offset */
	cx = ax;
	/* call	RandX */
	CALLF(randx, 0);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* sar	ax,1		;-8192 .. 8191 */
	SAR(ax, 1);
	/* sar	ax,1		;-8192 .. 8191 */
	SAR(ax, 1);
	/* mov	bx,ax		;y offset */
	bx = ax;
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_167_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_167_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_167_mvxy1:
	// 5079 
	/* __m2c_macrolocal_167_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_167_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_167_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_167_mvxy2:
	// 5081 
	/* __m2c_macrolocal_167_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_167_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_167_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_167_mvxy3:
	// 5083 
	/* __m2c_macrolocal_167_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_167_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_167_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_167_mvxy4:
	// 5085 
	/* __m2c_macrolocal_167_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 8021 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 8022 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 8023 dec	TMP_VIEW.VP_XSEC */
queque0032:
	// 5087 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 8024 ??0032:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 8025 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 8026 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 8027 inc	TMP_VIEW.VP_YSEC */
queque0034:
	// 5089 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 8028 ??0034:		mov	TMP_VIEW.VP_YFT,bx */
	// 0 ;* launch single weapon
dummylabel139:
	// 5091 
	/* @@:		mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	dh,1		;indirect mode */
	dh = 1;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* xor	dl,dl	  	;drone release */
	XOR(dl, dl);
	/* call	LaunchAlarm */
	CALL(launchalarm, 0);
	// 0 ;* update package count (assume weapon launched)
	/* mov	ax,WeaponNum */
	ax = weaponnum;
	/* dec	ax */
	DEC(ax);
	/* jnz	@F */
	if (ax != 0) {goto dummylabel140;}
	// 0 ;* clear package (last weapon launched)
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	[si].WP_PACKAGE,WPACK_NULL */
	m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package))), m2c::getdata(0));
	// 0 ;* inhibit aircraft route change until weapons are clear
	/* mov	AC_Data.AC_ARM_LOCK,WPN_CLR_DELAY */
	ac_data.ac_arm_lock = 1*100;
	/* jmp	ExitAlarm */
	goto exitalarm;
	// 0 ;* update number of weapons remaining in package
dummylabel140:
	// 5093 
	/* and	al,WPACK_NUM_MASK */
	AND(al, 0xf0);
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* and	[si].WP_PACKAGE,WPACK_MODE_MASK */
	AND(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), 0xf);
	/* or	[si].WP_PACKAGE,al */
	OR(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), al);
	// 0 ;* inhibit aircraft route change during ALARM delivery
	/* mov	AC_Data.AC_ARM_LOCK,ALARM_DELAY */
	ac_data.ac_arm_lock = 1*100;
exitalarm:
	// 5095 
	/* ExitAlarm:	ret */
	RETN(0);
autoagm:
	// 8081 
	// 0 ;-------------------
	// 0 ;* store pass params
	// 0 ;-------------------
edummylabel44:
	// 5097 
	/* mov	WeaponNum,cx */
	weaponnum = cx;
	// 0 ;-------------------------------
	// 0 ;* check for release in progress
	// 0 ;-------------------------------
	/* cmp	AC_Data.AC_ARM_LOCK,0 */
	CMP(ac_data.ac_arm_lock, 0);
	/* ja	ContAGM */
	if ((dw)(ac_data.ac_arm_lock) > (dw)(0)) {goto contagm;}
	// 0 ;-------------------
	// 0 ;* release interlock
	// 0 ;-------------------
	// 0 ;* check target ahead (avoid spurious release)
	/* mov	ax,AC_View.VP_HDG */
	ax = ac_view.vp_hdg;
	/* mov	dx,AC_WPBrg */
	dx = ac_wpbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,14		;?0? */
	CMP(ax, 14);
	/* jbe	__m2c_macrolocal_168_skip */
	if ((dw)(ax) <= (dw)(14)) {goto __m2c_macrolocal_168_skip;}
	/* jmp	ExitAGM */
	goto exitagm;
__m2c_macrolocal_168_skip:
	// 5099 
	// 0 ;-------------------
	// 0 ;* check for release
	// 0 ;-------------------
	// 0 ;* release if range <= 8nm (48608ft)
	/* cmp	WORD PTR AC_WPRng+2,0 */
	CMP(*(dw*)(((db*)&ac_wprng)+2), 0);
	/* jbe	__m2c_macrolocal_169_skip */
	if ((dw)(*(dw*)(((db*)&ac_wprng)+2)) <= (dw)(0)) {goto __m2c_macrolocal_169_skip;}
	/* jmp	ExitAGM */
	goto exitagm;
__m2c_macrolocal_169_skip:
	// 5101 
	/* cmp	WORD PTR AC_WPRng,8*6076 */
	CMP(*(dw*)(&ac_wprng), 8*6076);
	/* jbe	__m2c_macrolocal_170_skip */
	if ((dw)(*(dw*)(&ac_wprng)) <= (dw)(8*6076)) {goto __m2c_macrolocal_170_skip;}
	/* jmp	ExitAGM */
	goto exitagm;
__m2c_macrolocal_170_skip:
	// 5103 
	/* jmp	AGMOk */
	goto agmok;
	// 0 ;--------------------------
	// 0 ;* continue package release
	// 0 ;--------------------------
	// 0 ;* update delivery timer
contagm:
	// 5105 
	/* ContAGM:    	mov	ax,AC_Data.AC_ARM_LOCK */
	ax = ac_data.ac_arm_lock;
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
	/* mov	AC_Data.AC_ARM_LOCK,ax */
	ac_data.ac_arm_lock = ax;
	/* jz	__m2c_macrolocal_172_skip */
	if (ax == 0) {goto __m2c_macrolocal_172_skip;}
	/* jmp	ExitAGM */
	goto exitagm;
__m2c_macrolocal_172_skip:
	// 5107 
	// 0 ;* sort target viewpoint
agmok:
	// 5109 
	/* AGMOk:		mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	TMP_VIEW.VP_YSEC,ax */
	tmp_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = ax;
	// 0 ;* add random offset to viewpoint (unless last weapon in package)
	/* cmp	WeaponNum,1 */
	CMP(weaponnum, 1);
	/* je	@F */
	if ((dw)(weaponnum) == (dw)(1)) {goto dummylabel141;}
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw			;-128 .. 127 */
	CBW;
	/* mov	cx,ax		;x offset */
	cx = ax;
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw			;-128 .. 127 */
	CBW;
	/* mov	bx,ax		;y offset */
	bx = ax;
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_173_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_173_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_173_mvxy1:
	// 5111 
	/* __m2c_macrolocal_173_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_173_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_173_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_173_mvxy2:
	// 5113 
	/* __m2c_macrolocal_173_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_173_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_173_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_173_mvxy3:
	// 5115 
	/* __m2c_macrolocal_173_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_173_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_173_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_173_mvxy4:
	// 5117 
	/* __m2c_macrolocal_173_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 8186 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 8187 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 8188 dec	TMP_VIEW.VP_XSEC */
queque003a:
	// 5119 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 8189 ??003A:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 8190 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 8191 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 8192 inc	TMP_VIEW.VP_YSEC */
queque003c:
	// 5121 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 8193 ??003C:		mov	TMP_VIEW.VP_YFT,bx */
	// 0 ;* launch single weapon
dummylabel141:
	// 5123 
	/* @@:		mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* mov	dh,0		;direct mode */
	dh = 0;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* xor	dl,dl	  	;drone release */
	XOR(dl, dl);
	/* call	LaunchAlarm */
	CALL(launchalarm, 0);
	// 0 ;* update package count (assume weapon launched)
	/* mov	ax,WeaponNum */
	ax = weaponnum;
	/* dec	ax */
	DEC(ax);
	/* jnz	@F */
	if (ax != 0) {goto dummylabel142;}
	// 0 ;* clear package (last weapon launched)
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* mov	[si].WP_PACKAGE,WPACK_NULL */
	m2c::setdata(&(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package))), m2c::getdata(0));
	// 0 ;* inhibit aircraft route change until weapons are clear
	/* mov	AC_Data.AC_ARM_LOCK,WPN_CLR_DELAY */
	ac_data.ac_arm_lock = 1*100;
	/* jmp	ExitAGM */
	goto exitagm;
	// 0 ;* update number of weapons remaining in package
dummylabel142:
	// 5125 
	/* and	al,WPACK_NUM_MASK */
	AND(al, 0xf0);
	/* mov	si,AC_Data.AC_WP_PTR */
	si = ac_data.ac_wp_ptr;
	/* and	[si].WP_PACKAGE,WPACK_MODE_MASK */
	AND(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), 0xf);
	/* or	[si].WP_PACKAGE,al */
	OR(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_package)), al);
	// 0 ;* inhibit aircraft route change during AGM delivery
	/* mov	AC_Data.AC_ARM_LOCK,AGM_DELAY */
	ac_data.ac_arm_lock = 1*100;
exitagm:
	// 5127 
	/* ExitAGM:	ret */
	RETN(0);
autocannon:
	// 8240 
	/* mov	ax,AC_Data.AC_VTAS ;* kill: assume all (except cf) */
	ax = ac_data.ac_vtas;
edummylabel45:
	// 5129 
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	dh,RHS_CANNON */
	dh = 0x1;
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,OFFSET AC_Mobile */
	di = m2c::near_offset_external(ac_mobile);
	/* call	FireCannon */
	CALL(firecannon, 0);
	/* ret */
	RETF(0);
automissile:
	// 8258 
	// 0 ;* sort Sidewinder / Sky Flash wrt range
edummylabel46:
	// 5131 
	/* mov	bx,SKYFLASH */
	bx = 16;
	/* cmp	WORD PTR SlantRng+2,0 */
	CMP(*(dw*)(((db*)&slantrng)+2), 0);
	/* ja	@F */
	if ((dw)(*(dw*)(((db*)&slantrng)+2)) > (dw)(0)) {goto dummylabel143;}
	/* cmp	WORD PTR SlantRng,20000 */
	CMP(*(dw*)(&slantrng), 20000);
	/* ja	@F */
	if ((dw)(*(dw*)(&slantrng)) > (dw)(20000)) {goto dummylabel143;}
	// 0 ;* check IR lock for Sidewinder
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,AC_Data.AC_OPP_PTR */
	di = ac_data.ac_opp_ptr;
	/* add	di,MOB_REC_SIZE */
	ADD(di, 6);
	/* call	CheckIRLock */
	CALL(checkirlock, 0);
	/* jnc	@F */
	if (!CF) {goto dummylabel143;}
	/* mov	bx,SIDEWINDER */
	bx = 14;
dummylabel143:
	// 5133 
	/* @@:		mov	ax,AC_Data.AC_VTAS */
	ax = ac_data.ac_vtas;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	si,OFFSET AC_View */
	si = m2c::near_offset_external(ac_view);
	/* mov	di,AC_Data.AC_OPP_PTR */
	di = ac_data.ac_opp_ptr;
	/* call	LaunchMissile */
	CALL(launchmissile, 0);
	/* ret */
	RETF(0);
evasiontactics:
	// 8289 
	/* mov	si,AircraftPtr ;* kill: assume all */
	si = aircraftptr;
	// 0 ;---------------------------
	// 0 ;* clear chaff / flare flags
	// 0 ;---------------------------
edummylabel47:
	// 5135 
	/* and	_AC_FLAGS[si],NOT (AFLG_REL_CHAFF+AFLG_REL_FLARE) */
	AND(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, ~(0x4+0x8));
	// 0 ;----------------------
	// 0 ;* test for weapon lock
	// 0 ;----------------------
	/* test	_AC_FLAGS[si],AFLG_IR_LOCK+AFLG_RAD_LOCK */
	TEST(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x1+0x2);
	/* jz	SkipEvasion */
	if (!(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags & 0x1+0x2)) {goto skipevasion;}
	// 0 ;----------------
	// 0 ;* check airborne
	// 0 ;----------------
	/* mov	ax,WORD PTR _VP_ZFT_LO[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)));
	/* or	ax,WORD PTR _VP_ZFT_HI[si] */
	OR(ax, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)));
	/* jz	SkipEvasion */
	if (ax == 0) {goto skipevasion;}
	// 0 ;----------------------------
	// 0 ;* update decoy release timer
	// 0 ;----------------------------
	/* mov	ax,_AC_DECOY_TIMER[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_decoy_timer)));
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	SetDecoyTimer */
	if (!CF) {goto setdecoytimer;}
	// 0 ;---------------
	// 0 ;* release decoy
	// 0 ;---------------
	// 0 ;* release chaff (if required)
	/* test	_AC_FLAGS[si],AFLG_RAD_LOCK */
	TEST(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x2);
	/* jz	@F */
	if (!(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags & 0x2)) {goto dummylabel144;}
	/* push	si */
	PUSH(si);
	/* mov	ax,_AC_VTAS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_vtas)));
	/* mov	bx,CHAFF */
	bx = 22;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* add	si,MOB_REC_SIZE		;si -> viewpoint */
	ADD(si, 6);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	/* pop	si */
	POP(si);
	/* or	_AC_FLAGS[si],AFLG_REL_CHAFF */
	OR(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x4);
	// 0 ;* release flare (if required)
dummylabel144:
	// 5137 
	/* @@:		test	_AC_FLAGS[si],AFLG_IR_LOCK */
	TEST(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x1);
	/* jz	@F */
	if (!(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags & 0x1)) {goto dummylabel145;}
	/* push	si */
	PUSH(si);
	/* mov	ax,_AC_VTAS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_vtas)));
	/* mov	bx,FLARE */
	bx = 24;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* add	si,MOB_REC_SIZE		;si -> viewpoint */
	ADD(si, 6);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	/* pop	si */
	POP(si);
	/* or	_AC_FLAGS[si],AFLG_REL_FLARE */
	OR(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, 0x8);
	// 0 ;* reset decoy release timer
dummylabel145:
	// 5139 
	/* @@:		call	RandX		;0.00 .. 2.55 */
	CALLF(randx, 0);
	/* shr	ax,1		;0.00 .. 1.27 */
	SHR(ax, 1);
	/* add	ax,150		;1.50 .. 2.77 */
	ADD(ax, 150);
setdecoytimer:
	// 5141 
	/* SetDecoyTimer:	mov	_AC_DECOY_TIMER[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_decoy_timer))), m2c::getdata(ax));
	// 0 ;------------------
	// 0 ;* clear lock flags
	// 0 ;------------------
skipevasion:
	// 5143 
	/* SkipEvasion:	and	_AC_FLAGS[si],NOT (AFLG_IR_LOCK+AFLG_RAD_LOCK) */
	AND(*(db*)&((aircraft*)raddr(ds,(6+18)+si))->ac_flags, ~(0x1+0x2));
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
                case m2c::k__m2c_macrolocal_148_skip: 	goto __m2c_macrolocal_148_skip;
        case m2c::k__m2c_macrolocal_154_skip: 	goto __m2c_macrolocal_154_skip;
        case m2c::k__m2c_macrolocal_155_skip: 	goto __m2c_macrolocal_155_skip;
        case m2c::k__m2c_macrolocal_162_skip: 	goto __m2c_macrolocal_162_skip;
        case m2c::k__m2c_macrolocal_163_skip: 	goto __m2c_macrolocal_163_skip;
        case m2c::k__m2c_macrolocal_164_skip: 	goto __m2c_macrolocal_164_skip;
        case m2c::k__m2c_macrolocal_166_skip: 	goto __m2c_macrolocal_166_skip;
        case m2c::k__m2c_macrolocal_167_mvxy1: 	goto __m2c_macrolocal_167_mvxy1;
        case m2c::k__m2c_macrolocal_167_mvxy2: 	goto __m2c_macrolocal_167_mvxy2;
        case m2c::k__m2c_macrolocal_167_mvxy3: 	goto __m2c_macrolocal_167_mvxy3;
        case m2c::k__m2c_macrolocal_167_mvxy4: 	goto __m2c_macrolocal_167_mvxy4;
        case m2c::k__m2c_macrolocal_168_skip: 	goto __m2c_macrolocal_168_skip;
        case m2c::k__m2c_macrolocal_169_skip: 	goto __m2c_macrolocal_169_skip;
        case m2c::k__m2c_macrolocal_170_skip: 	goto __m2c_macrolocal_170_skip;
        case m2c::k__m2c_macrolocal_172_skip: 	goto __m2c_macrolocal_172_skip;
        case m2c::k__m2c_macrolocal_173_mvxy1: 	goto __m2c_macrolocal_173_mvxy1;
        case m2c::k__m2c_macrolocal_173_mvxy2: 	goto __m2c_macrolocal_173_mvxy2;
        case m2c::k__m2c_macrolocal_173_mvxy3: 	goto __m2c_macrolocal_173_mvxy3;
        case m2c::k__m2c_macrolocal_173_mvxy4: 	goto __m2c_macrolocal_173_mvxy4;
        case m2c::kagmok: 	goto agmok;
        case m2c::kalarmok: 	goto alarmok;
        case m2c::karmagm: 	goto armagm;
        case m2c::karmalarm: 	goto armalarm;
        case m2c::karmbl755: 	goto armbl755;
        case m2c::karmgpb1000: 	goto armgpb1000;
        case m2c::karmjp233: 	goto armjp233;
        case m2c::karmlgb1000: 	goto armlgb1000;
        case m2c::karmnull: 	goto armnull;
        case m2c::karmret1000: 	goto armret1000;
        case m2c::kautoagm: 	goto autoagm;
        case m2c::kautoalarm: 	goto autoalarm;
        case m2c::kautobomb: 	goto autobomb;
        case m2c::kautocannon: 	goto autocannon;
        case m2c::kautojp233: 	goto autojp233;
        case m2c::kautolaydown: 	goto autolaydown;
        case m2c::kautolgb: 	goto autolgb;
        case m2c::kautomissile: 	goto automissile;
        case m2c::kcontagm: 	goto contagm;
        case m2c::kcontalarm: 	goto contalarm;
        case m2c::kcontjp233: 	goto contjp233;
        case m2c::kcontlgb: 	goto contlgb;
        case m2c::kdummylabel134: 	goto dummylabel134;
        case m2c::kdummylabel135: 	goto dummylabel135;
        case m2c::kdummylabel136: 	goto dummylabel136;
        case m2c::kdummylabel137: 	goto dummylabel137;
        case m2c::kdummylabel138: 	goto dummylabel138;
        case m2c::kdummylabel139: 	goto dummylabel139;
        case m2c::kdummylabel140: 	goto dummylabel140;
        case m2c::kdummylabel141: 	goto dummylabel141;
        case m2c::kdummylabel142: 	goto dummylabel142;
        case m2c::kdummylabel143: 	goto dummylabel143;
        case m2c::kdummylabel144: 	goto dummylabel144;
        case m2c::kdummylabel145: 	goto dummylabel145;
        case m2c::kedummylabel39: 	goto edummylabel39;
        case m2c::kedummylabel40: 	goto edummylabel40;
        case m2c::kedummylabel41: 	goto edummylabel41;
        case m2c::kedummylabel42: 	goto edummylabel42;
        case m2c::kedummylabel43: 	goto edummylabel43;
        case m2c::kedummylabel44: 	goto edummylabel44;
        case m2c::kedummylabel45: 	goto edummylabel45;
        case m2c::kedummylabel46: 	goto edummylabel46;
        case m2c::kedummylabel47: 	goto edummylabel47;
        case m2c::kevasiontactics: 	goto evasiontactics;
        case m2c::kexitagm: 	goto exitagm;
        case m2c::kexitalarm: 	goto exitalarm;
        case m2c::kexitbomb: 	goto exitbomb;
        case m2c::kexitjp233: 	goto exitjp233;
        case m2c::kexitlaydown: 	goto exitlaydown;
        case m2c::kexitlgb: 	goto exitlgb;
        case m2c::klgbok: 	goto lgbok;
        case m2c::kqueque0032: 	goto queque0032;
        case m2c::kqueque0034: 	goto queque0034;
        case m2c::kqueque003a: 	goto queque003a;
        case m2c::kqueque003c: 	goto queque003c;
        case m2c::ksetdecoytimer: 	goto setdecoytimer;
        case m2c::kskipevasion: 	goto skipevasion;
        default: return __dispatch_call(__disp, _state);
    };
}


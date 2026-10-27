/* THIS IS GENERATED FILE */

        
#include "smoke.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
makesmokeeffect:
	// 842 
	// 0 ;-----------------------
	// 0 ;* copy viewpoint origin
	// 0 ;-----------------------
edummylabel1:
	// 4369 
	/* mov	ax,[si].VP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xsec)));
	/* mov	TMP_SMOKE.SMOKE_XSEC,ax */
	tmp_smoke.smoke_xsec = ax;
	/* mov	ax,[si].VP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_ysec)));
	/* mov	TMP_SMOKE.SMOKE_YSEC,ax */
	tmp_smoke.smoke_ysec = ax;
	/* mov	ax,[si].VP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* mov	TMP_SMOKE.SMOKE_XFT,ax */
	tmp_smoke.smoke_xft = ax;
	/* mov	ax,[si].VP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* mov	TMP_SMOKE.SMOKE_YFT,ax */
	tmp_smoke.smoke_yft = ax;
	/* mov	ax,WORD PTR [si].VP_ZFT_LO */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_lo)));
	/* mov	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,ax */
	*((dw*)((db*)&tmp_smoke+smoke_zft_lo)) = ax;
	/* mov	ax,WORD PTR [si].VP_ZFT_HI */
	ax = m2c::getdata(*((dw*)raddr(ds,si+vp_zft_hi)));
	/* mov	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,ax */
	*((dw*)((db*)&tmp_smoke+smoke_zft_hi)) = ax;
	// 0 ;-------------------
	// 0 ;* init smoke effect
	// 0 ;-------------------
	/* call	InitSmoke[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&initsmoke)+bx));
	/* ret */
	RETF(0);
makesinglesmoke:
	// 875 
	/* mov	ax,SMOKEDATA ;* kill: assume all */
	ax = seg_offset(smokedata);
edummylabel2:
	// 4371 
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	si,OFFSET TMP_SMOKE */
	si = m2c::near_offset_external(tmp_smoke);
	/* mov	di,NextSmokePtr */
	di = nextsmokeptr;
	/* mov	cx,SMOKE_REC_SIZE */
	cx = 26;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 883 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 885 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 886 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 887 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* cmp	di,OFFSET SmokeBufEnd	;end of buffer? */
	CMP(di, m2c::near_offset_external(smokebufend));
	/* jb	@F			;no -> */
	if ((dw)(di) < (dw)(m2c::near_offset_external(smokebufend))) {goto dummylabel1;}
	/* mov	di,OFFSET SmokeBuffer	;wrap around */
	di = m2c::near_offset_external(smokebuffer);
dummylabel1:
	// 4373 
	/* @@:		mov	NextSmokePtr,di */
	nextsmokeptr = di;
	/* ret */
	RETN(0);
viscode_0_proc:
	// 922 
initcrater1:
	// 4375 
	// 0 ;---------------------------
	// 0 ;---------------------------
	/* mov	TMP_SMOKE.SMOKE_SIB_CNTR,0 */
	tmp_smoke.smoke_sib_cntr = 0;
	/* mov	cx,1		;number of additional smokes */
	cx = 1;
	/* jmp	InitGnd1 */
	goto initgnd1;
	// 0 ;---------------------------
initcrater2:
	// 4377 
	// 0 ;---------------------------
	/* mov	TMP_SMOKE.SMOKE_SIB_CNTR,0 */
	tmp_smoke.smoke_sib_cntr = 0;
	/* mov	cx,3		;number of additional smokes */
	cx = 3;
	/* jmp	InitGnd1 */
	goto initgnd1;
	// 0 ;---------------------------
initcrater3:
	// 4379 
	// 0 ;---------------------------
	/* mov	TMP_SMOKE.SMOKE_SIB_CNTR,0 */
	tmp_smoke.smoke_sib_cntr = 0;
	/* mov	cx,7		;number of additional smokes */
	cx = 7;
	/* jmp	InitGnd1 */
	goto initgnd1;
	// 0 ;---------------------------
initburning:
	// 4381 
	// 0 ;---------------------------
	/* mov	TMP_SMOKE.SMOKE_SIB_CNTR,10 */
	tmp_smoke.smoke_sib_cntr = 10;
	/* mov	cx,9		;number of additional smokes */
	cx = 9;
	/* jmp	InitGnd1 */
	goto initgnd1;
	// 0 ;---------------------------
initkickup:
	// 4383 
	// 0 ;---------------------------
	/* mov	TMP_SMOKE.SMOKE_SIB_CNTR,0 */
	tmp_smoke.smoke_sib_cntr = 0;
	/* mov	cx,3		;number of additional smokes */
	cx = 3;
	// 0 ;---------------------------
initairexplo:
	// 4397 
	// 0 ;---------------------------
	// 0 ;---------------------------
	/* mov	cx,15		;number of additional smokes */
	cx = 15;
	/* jmp	InitAir1 */
	goto initair1;
	// 0 ;---------------------------
initairtrail:
	// 4399 
	// 0 ;---------------------------
	/* mov	cx,3		;number of additional smokes */
	cx = 3;
	// 0 ;---------------------------
initgnd1:
	// 956 
	// 0 ;---------------------------
	// 0 ;------------------
	// 0 ;* init first smoke (always at viewpoint datum)
	// 0 ;------------------
	/* mov	TMP_SMOKE.SMOKE_TYPE,STYPE_GND1 */
	tmp_smoke.smoke_type = 2;
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,1 */
	AND(al, 1);
	/* add	al,COL_SMOKE_GREY1 */
	ADD(al, 71);
	/* mov	TMP_SMOKE.SMOKE_COL,al */
	tmp_smoke.smoke_col = al;
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 968 						call	RandX */
	/* mov	TMP_SMOKE.SMOKE_FLAGS,0 */
	tmp_smoke.smoke_flags = 0;
	/* mov	TMP_SMOKE.SMOKE_ZFINE,0 */
	tmp_smoke.smoke_zfine = 0;
	/* mov	TMP_SMOKE.SMOKE_RFT,0 */
	tmp_smoke.smoke_rft = 0;
	/* mov	TMP_SMOKE.SMOKE_TIME,0 */
	tmp_smoke.smoke_time = 0;
	/* call	RandX */
	CALLF(randx, 0);
	/* add	ax,8 ;128 */
	ADD(ax, 8);
	/* mov	TMP_SMOKE.SMOKE_EXP_TIME,ax */
	tmp_smoke.smoke_exp_time = ax;
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* call	MakeSingleSmoke */
	CALL(makesinglesmoke, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	// 0 ;------------------------
	// 0 ;* init additional smokes
	// 0 ;------------------------
	/* jcxz	InitGnd1Exit	;no additional smokes -> */
	JCXZ(initgnd1exit);
addsmokeloop:
	// 4385 
	/* AddSmokeLoop: 	push	cx */
	PUSH(cx);
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,1 */
	AND(al, 1);
	/* add	al,COL_SMOKE_GREY1 */
	ADD(al, 71);
	/* mov	TMP_SMOKE.SMOKE_COL,al */
	tmp_smoke.smoke_col = al;
	/* call	RandX */
	CALLF(randx, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(randx,0));	// 993 call	RandX
	/* add	ax,8;128 */
	ADD(ax, 8);
	/* mov	TMP_SMOKE.SMOKE_EXP_TIME,ax */
	tmp_smoke.smoke_exp_time = ax;
	// 0 ;* offset xft from origin (keep within sector)
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1		;-64ft .. +63ft offset */
	SAR(ax, 1);
	/* add	ax,[si].VP_XFT */
	ADD(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	@F */
	if ((short)(ax) <= (short)(8191)) {goto dummylabel2;}
	/* mov	ax,8191 */
	ax = 8191;
dummylabel2:
	// 4387 
	/* @@:		cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	@F */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel3;}
	/* mov	ax,-8192 */
	ax = -8192;
dummylabel3:
	// 4389 
	/* @@:		mov	TMP_SMOKE.SMOKE_XFT,ax */
	tmp_smoke.smoke_xft = ax;
	// 0 ;* offset yft from origin (keep within sector)
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1		;-64ft .. +63ft offset */
	SAR(ax, 1);
	/* add	ax,[si].VP_YFT */
	ADD(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	@F */
	if ((short)(ax) <= (short)(8191)) {goto dummylabel4;}
	/* mov	ax,8191 */
	ax = 8191;
dummylabel4:
	// 4391 
	/* @@:		cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	@F */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel5;}
	/* mov	ax,-8192 */
	ax = -8192;
dummylabel5:
	// 4393 
	/* @@:		mov	TMP_SMOKE.SMOKE_YFT,ax */
	tmp_smoke.smoke_yft = ax;
	/* push	si */
	PUSH(si);
	/* call	MakeSingleSmoke */
	CALL(makesinglesmoke, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* loop	AddSmokeLoop */
	LOOP(addsmokeloop);
initgnd1exit:
	// 4395 
	/* InitGnd1Exit:	ret */
	RETN(0);
initair1:
	// 1054 
	// 0 ;---------------------------
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* mov	bp,ax		;bp = ground height */
	bp = ax;
	// 0 ;------------------
	// 0 ;* init first smoke (always at viewpoint datum)
	// 0 ;------------------
	/* mov	TMP_SMOKE.SMOKE_TYPE,STYPE_AIR1 */
	tmp_smoke.smoke_type = 4;
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,1 */
	AND(al, 1);
	/* add	al,COL_SMOKE_GREY1 */
	ADD(al, 71);
	/* mov	TMP_SMOKE.SMOKE_COL,al */
	tmp_smoke.smoke_col = al;
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 1072 						call	RandX */
	/* mov	TMP_SMOKE.SMOKE_FLAGS,0 */
	tmp_smoke.smoke_flags = 0;
	/* mov	TMP_SMOKE.SMOKE_ZFINE,0 */
	tmp_smoke.smoke_zfine = 0;
	/* mov	TMP_SMOKE.SMOKE_RFT,0 */
	tmp_smoke.smoke_rft = 0;
	/* mov	TMP_SMOKE.SMOKE_TIME,0 */
	tmp_smoke.smoke_time = 0;
	/* mov	TMP_SMOKE.SMOKE_SIB_CNTR,0 */
	tmp_smoke.smoke_sib_cntr = 0;
	/* call	RandX */
	CALLF(randx, 0);
	/* add	ax,8;128 */
	ADD(ax, 8);
	/* mov	TMP_SMOKE.SMOKE_EXP_TIME,ax */
	tmp_smoke.smoke_exp_time = ax;
	/* call	CheckAirPos */
	CALL(checkairpos, 0);
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	bp */
	PUSH(bp);
	/* call	MakeSingleSmoke */
	CALL(makesinglesmoke, 0);
	/* pop	bp */
	POP(bp);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	// 0 ;------------------------
	// 0 ;* init additional smokes
	// 0 ;------------------------
	/* jcxz	InitAir1Exit	;no additional smokes -> */
	JCXZ(initair1exit);
airsmokeloop:
	// 4401 
	/* AirSmokeLoop: 	push	cx */
	PUSH(cx);
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,1 */
	AND(al, 1);
	/* add	al,COL_SMOKE_GREY1 */
	ADD(al, 71);
	/* mov	TMP_SMOKE.SMOKE_COL,al */
	tmp_smoke.smoke_col = al;
	/* call	RandX */
	CALLF(randx, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(randx,0));	// 1101 call	RandX
	/* add	ax,8;128 */
	ADD(ax, 8);
	/* mov	TMP_SMOKE.SMOKE_EXP_TIME,ax */
	tmp_smoke.smoke_exp_time = ax;
	// 0 ;* offset xft from origin (keep within sector)
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1		;-64ft .. +63ft offset */
	SAR(ax, 1);
	/* add	ax,[si].VP_XFT */
	ADD(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_xft)));
	/* cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	@F */
	if ((short)(ax) <= (short)(8191)) {goto dummylabel6;}
	/* mov	ax,8191 */
	ax = 8191;
dummylabel6:
	// 4403 
	/* @@:		cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	@F */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel7;}
	/* mov	ax,-8192 */
	ax = -8192;
dummylabel7:
	// 4405 
	/* @@:		mov	TMP_SMOKE.SMOKE_XFT,ax */
	tmp_smoke.smoke_xft = ax;
	// 0 ;* offset yft from origin (keep within sector)
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1		;-64ft .. +63ft offset */
	SAR(ax, 1);
	/* add	ax,[si].VP_YFT */
	ADD(ax, *((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_yft)));
	/* cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	@F */
	if ((short)(ax) <= (short)(8191)) {goto dummylabel8;}
	/* mov	ax,8191 */
	ax = 8191;
dummylabel8:
	// 4407 
	/* @@:		cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	@F */
	if ((short)(ax) >= (short)(-8192)) {goto dummylabel9;}
	/* mov	ax,-8192 */
	ax = -8192;
dummylabel9:
	// 4409 
	/* @@:		mov	TMP_SMOKE.SMOKE_YFT,ax */
	tmp_smoke.smoke_yft = ax;
	// 0 ;* offset zft from origin
	/* call	RandX */
	CALLF(randx, 0);
	/* cbw */
	CBW;
	/* sar	ax,1		;-64ft .. +63ft offset */
	SAR(ax, 1);
	/* cwd */
	CWD;
	/* add	ax,WORD PTR [si].VP_ZFT_LO */
	ADD(ax, *((dw*)raddr(ds,si+vp_zft_lo)));
	/* adc	dx,WORD PTR [si].VP_ZFT_HI */
	ADC(dx, *((dw*)raddr(ds,si+vp_zft_hi)));
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel10;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
dummylabel10:
	// 4411 
	/* @@:		mov	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,ax */
	*((dw*)((db*)&tmp_smoke+smoke_zft_lo)) = ax;
	/* mov	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,dx */
	*((dw*)((db*)&tmp_smoke+smoke_zft_hi)) = dx;
	/* call	CheckAirPos */
	CALL(checkairpos, 0);
	/* push	si */
	PUSH(si);
	/* push	bp */
	PUSH(bp);
	/* call	MakeSingleSmoke */
	CALL(makesinglesmoke, 0);
	/* pop	bp */
	POP(bp);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* loop	AirSmokeLoop */
	LOOP(airsmokeloop);
initair1exit:
	// 4413 
	/* InitAir1Exit:	ret */
	RETN(0);
checkairpos:
	// 1162 
	// 0 ;* if zft < 65536 then
	// 0 ;*
	// 0 ;*    zdiff = zft - ground height
	// 0 ;*
	// 0 ;*    if zdiff < 0 then
	// 0 ;*       zft = ground height + 32
	// 0 ;*       expand time = 128
	// 0 ;*    else
	// 0 ;*       if zdiff < expand time / 4 then
	// 0 ;*          expand time = zdiff * 4
	// 0 ;*          if expand time < 128 then
	// 0 ;*             zft = ground height + 32
	// 0 ;*             expand time = 128
	// 0 ;*          endif
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
edummylabel3:
	// 4415 
	/* cmp	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,0 */
	CMP(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)), 0);
	/* ja	ExitAirPos */
	if ((dw)(*((dw*)((db*)&tmp_smoke+smoke_zft_hi))) > (dw)(0)) {goto exitairpos;}
	/* mov	ax,WORD PTR TMP_SMOKE.SMOKE_ZFT_LO */
	ax = *((dw*)((db*)&tmp_smoke+smoke_zft_lo));
	/* sub	ax,bp */
	SUB(ax, bp);
	/* jb	SetMinSize */
	if (CF) {goto setminsize;}
	/* mov	dx,TMP_SMOKE.SMOKE_EXP_TIME */
	dx = tmp_smoke.smoke_exp_time;
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	ExitAirPos */
	if ((dw)(ax) >= (dw)(dx)) {goto exitairpos;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* cmp	ax,8;128 */
	CMP(ax, 8);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(8)) {goto dummylabel11;}
setminsize:
	// 4417 
	/* SetMinSize:	mov	ax,bp */
	ax = bp;
	/* add	ax,8;32 */
	ADD(ax, 8);
	/* mov	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,ax */
	*((dw*)((db*)&tmp_smoke+smoke_zft_lo)) = ax;
	/* mov	ax,8;128 */
	ax = 8;
dummylabel11:
	// 4419 
	/* @@:		mov	TMP_SMOKE.SMOKE_EXP_TIME,ax */
	tmp_smoke.smoke_exp_time = ax;
exitairpos:
	// 4421 
	/* ExitAirPos:	ret */
	RETN(0);
scansmoke:
	// 1216 
	// 0 ;-----------
	// 0 ;* scan loop
	// 0 ;-----------
edummylabel4:
	// 4423 
	/* mov	cx,NUM_SMOKE */
	cx = 128;
	/* mov	si,OFFSET SmokeBuffer */
	si = m2c::near_offset_external(smokebuffer);
	/* mov	ax,SMOKEDATA */
	ax = seg_offset(smokedata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
smokeloop:
	// 4425 
	/* SmokeLoop:	cmp	[si].SMOKE_TYPE,STYPE_NULL	;smoke active? */
	CMP(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_type)), 0);
	/* jne	SortSmoke			;yes -> */
	if ((dw)(*((dw*)((db*)&((smoke*)raddr(ds,si))->smoke_type))) != (dw)(0)) {goto sortsmoke;}
nextsmoke:
	// 4427 
	/* NextSmoke:	add	si,SMOKE_REC_SIZE */
	ADD(si, 26);
	/* loop	SmokeLoop */
	LOOP(smokeloop);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* ret */
	RETN(0);
	// 0 ;-----------------------------------
	// 0 ;* copy smoke data into working copy
	// 0 ;-----------------------------------
sortsmoke:
	// 4429 
	/* SortSmoke: 	push	cx		;store loop count */
	PUSH(cx);
	/* push	si		;store smoke ptr */
	PUSH(si);
	/* mov	di,OFFSET TMP_SMOKE */
	di = m2c::near_offset_external(tmp_smoke);
	/* mov	cx,SMOKE_REC_SIZE */
	cx = 26;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1242 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1244 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1245 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1246 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;--------------
	// 0 ;* update smoke
	// 0 ;--------------
	/* mov	bx,TMP_SMOKE.SMOKE_TYPE */
	bx = tmp_smoke.smoke_type;
	/* call	CtrlSmoke[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&ctrlsmoke)+bx));
	/* jc	@F		;smoke cleared -> */
	if (CF) {goto dummylabel12;}
	// 0 ;------------
	// 0 ;* draw smoke
	// 0 ;------------
	/* mov	si,OFFSET TMP_SMOKE */
	si = m2c::near_offset_external(tmp_smoke);
	/* call	DrawSmoke */
	CALL(drawsmoke, 0);
	// 0 ;-----------------------------------
	// 0 ;* copy smoke data from working copy
	// 0 ;-----------------------------------
dummylabel12:
	// 4431 
	/* @@:		pop	di		;smoke ptr */
	POP(di);
	/* push	di */
	PUSH(di);
	/* mov	cx,SMOKE_REC_SIZE */
	cx = 26;
	/* mov	si,OFFSET TMP_SMOKE */
	si = m2c::near_offset_external(tmp_smoke);
	/* mov	ax,SMOKEDATA */
	ax = seg_offset(smokedata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 1274 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 1276 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 1277 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 1278 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;-------------------------------
	// 0 ;* prepare to re-enter scan loop
	// 0 ;-------------------------------
	/* mov	ax,SMOKEDATA */
	ax = seg_offset(smokedata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* pop	si		;restore smoke ptr */
	POP(si);
	/* pop	cx		;restore loop count */
	POP(cx);
	/* jmp	NextSmoke */
	goto nextsmoke;
ctrlnull:
	// 1299 
	/* stc ;* kill: nothing */
	STC;
edummylabel5:
	// 4433 
	/* ret */
	RETN(0);
ctrlgnd1:
	// 1316 
	// 0 ;--------------
	// 0 ;* update timer
	// 0 ;--------------
edummylabel6:
	// 4435 
	/* mov	ax,TMP_SMOKE.SMOKE_TIME */
	ax = tmp_smoke.smoke_time;
	/* add	ax,LastFrame */
	ADD(ax, lastframe);
	/* mov	TMP_SMOKE.SMOKE_TIME,ax */
	tmp_smoke.smoke_time = ax;
	// 0 ;------------
	// 0 ;* sort phase
	// 0 ;------------
	/* mov	dx,TMP_SMOKE.SMOKE_EXP_TIME */
	dx = tmp_smoke.smoke_exp_time;
	/* cmp	ax,dx		;expand phase? */
	CMP(ax, dx);
	/* jbe	Gnd1Phase1	;yes -> */
	if ((dw)(ax) <= (dw)(dx)) {goto gnd1phase1;}
	/* sub	ax,dx */
	SUB(ax, dx);
	/* shl	dx,1		;contract phase is double expand phase */
	SHL(dx, 1);
	/* cmp	ax,dx	    	;contract phase? */
	CMP(ax, dx);
	/* jbe	Gnd1Phase2	;yes -> */
	if ((dw)(ax) <= (dw)(dx)) {goto gnd1phase2;}
	// 0 ;-------------------
	// 0 ;* end of smoke life
	// 0 ;-------------------
	/* mov	TMP_SMOKE.SMOKE_TYPE,STYPE_NULL */
	tmp_smoke.smoke_type = 0;
	/* stc			;cf = 1 = smoke cleared */
	STC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
gnd1phase1:
	// 4437 
	// 0 ;expand radius
	// 0 ;---------------------------
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	dx,TMP_SMOKE.SMOKE_RFT */
	dx = tmp_smoke.smoke_rft;
	/* mov	TMP_SMOKE.SMOKE_RFT,ax */
	tmp_smoke.smoke_rft = ax;
	// 0 ;* reset base zft
	/* sub	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,dx */
	SUB(*((dw*)((db*)&tmp_smoke+smoke_zft_lo)), dx);
	/* sbb	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,0 */
	SBB(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)), 0);
	// 0 ;* set centre zft wrt radius
	/* add	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp_smoke+smoke_zft_lo)), ax);
	/* adc	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)), 0);
	/* clc			;cf = 0 = smoke ok */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
gnd1phase2:
	// 4439 
	// 0 ;contract radius and drift upwards
	// 0 ;---------------------------
	// 0 ;* reproduce sibling?
	/* test	TMP_SMOKE.SMOKE_FLAGS,SFLG_REPRO	;already reproduced? */
	TEST(tmp_smoke.smoke_flags, 0x1);
	/* jz	__m2c_macrolocal_8_skip */
	if (!(tmp_smoke.smoke_flags & 0x1)) {goto __m2c_macrolocal_8_skip;}
	/* jmp	SkipRepro */
	goto skiprepro;
__m2c_macrolocal_8_skip:
	// 4441 
	// 0 ;yes ->
	/* cmp	TMP_SMOKE.SMOKE_SIB_CNTR,0		;reproduce any more? */
	CMP(tmp_smoke.smoke_sib_cntr, 0);
	/* jne	__m2c_macrolocal_9_skip */
	if ((dw)(tmp_smoke.smoke_sib_cntr) != (dw)(0)) {goto __m2c_macrolocal_9_skip;}
	/* jmp	SkipRepro */
	goto skiprepro;
__m2c_macrolocal_9_skip:
	// 4443 
	// 0 ;no ->
	// 0 ;* reproduce
	/* push	ax */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	/* dec	TMP_SMOKE.SMOKE_SIB_CNTR */
	DEC(tmp_smoke.smoke_sib_cntr);
	/* push	WORD PTR TMP_SMOKE.SMOKE_COL	;(col + flags) */
	PUSH(*((dw*)((db*)&tmp_smoke+smoke_col)));
	/* push	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO */
	PUSH(*((dw*)((db*)&tmp_smoke+smoke_zft_lo)));
	/* push	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI */
	PUSH(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)));
	/* push	TMP_SMOKE.SMOKE_ZFINE */
	PUSH(tmp_smoke.smoke_zfine);
	/* push	TMP_SMOKE.SMOKE_RFT */
	PUSH(tmp_smoke.smoke_rft);
	/* push	TMP_SMOKE.SMOKE_TIME */
	PUSH(tmp_smoke.smoke_time);
	/* push	TMP_SMOKE.SMOKE_EXP_TIME */
	PUSH(tmp_smoke.smoke_exp_time);
	/* mov	ax,TMP_SMOKE.SMOKE_RFT */
	ax = tmp_smoke.smoke_rft;
	/* sub	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,ax	;reset base zft */
	SUB(*((dw*)((db*)&tmp_smoke+smoke_zft_lo)), ax);
	/* sbb	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,0 */
	SBB(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)), 0);
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,1 */
	AND(al, 1);
	/* add	al,COL_SMOKE_GREY1 */
	ADD(al, 71);
	/* mov	TMP_SMOKE.SMOKE_COL,al */
	tmp_smoke.smoke_col = al;
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 1398 						call	RandX */
	/* mov	TMP_SMOKE.SMOKE_FLAGS,0 */
	tmp_smoke.smoke_flags = 0;
	/* mov	TMP_SMOKE.SMOKE_ZFINE,0 */
	tmp_smoke.smoke_zfine = 0;
	/* mov	TMP_SMOKE.SMOKE_RFT,0 */
	tmp_smoke.smoke_rft = 0;
	/* mov	TMP_SMOKE.SMOKE_TIME,0 */
	tmp_smoke.smoke_time = 0;
	/* call	RandX */
	CALLF(randx, 0);
	/* add	ax,8;128 */
	ADD(ax, 8);
	/* mov	TMP_SMOKE.SMOKE_EXP_TIME,ax */
	tmp_smoke.smoke_exp_time = ax;
	/* call	MakeSingleSmoke */
	CALL(makesinglesmoke, 0);
	/* pop	TMP_SMOKE.SMOKE_EXP_TIME */
	POP(tmp_smoke.smoke_exp_time);
	/* pop	TMP_SMOKE.SMOKE_TIME */
	POP(tmp_smoke.smoke_time);
	/* pop	TMP_SMOKE.SMOKE_RFT */
	POP(tmp_smoke.smoke_rft);
	/* pop	TMP_SMOKE.SMOKE_ZFINE */
	POP(tmp_smoke.smoke_zfine);
	/* pop	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI */
	POP(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)));
	/* pop	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO */
	POP(*((dw*)((db*)&tmp_smoke+smoke_zft_lo)));
	/* pop	WORD PTR TMP_SMOKE.SMOKE_COL	;(col + flags) */
	POP(*((dw*)((db*)&tmp_smoke+smoke_col)));
	/* or	TMP_SMOKE.SMOKE_FLAGS,SFLG_REPRO */
	OR(tmp_smoke.smoke_flags, 0x1);
	/* pop	dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
skiprepro:
	// 4445 
	/* SkipRepro:	shr	dx,1 */
	SHR(dx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sub	dx,ax */
	SUB(dx, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* mov	TMP_SMOKE.SMOKE_RFT,dx */
	tmp_smoke.smoke_rft = dx;
	// 0 ;* drift upwards
	/* mov	ax,DeltaTime */
	ax = deltatime;
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
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	TMP_SMOKE.SMOKE_ZFINE,ax */
	ADD(tmp_smoke.smoke_zfine, ax);
	/* add	WORD PTR TMP_SMOKE.SMOKE_ZFT_LO,dx */
	ADD(*((dw*)((db*)&tmp_smoke+smoke_zft_lo)), dx);
	/* adc	WORD PTR TMP_SMOKE.SMOKE_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_smoke+smoke_zft_hi)), 0);
	/* clc			;cf = 0 = smoke ok */
	CLC;
	/* ret */
	RETN(0);
ctrlair1:
	// 1461 
	// 0 ;--------------
	// 0 ;* update timer
	// 0 ;--------------
edummylabel7:
	// 4447 
	/* mov	ax,TMP_SMOKE.SMOKE_TIME */
	ax = tmp_smoke.smoke_time;
	/* add	ax,LastFrame */
	ADD(ax, lastframe);
	/* mov	TMP_SMOKE.SMOKE_TIME,ax */
	tmp_smoke.smoke_time = ax;
	// 0 ;------------
	// 0 ;* sort phase
	// 0 ;------------
	/* mov	dx,TMP_SMOKE.SMOKE_EXP_TIME */
	dx = tmp_smoke.smoke_exp_time;
	/* cmp	ax,dx		;expand phase? */
	CMP(ax, dx);
	/* jbe	Air1Phase1	;yes -> */
	if ((dw)(ax) <= (dw)(dx)) {goto air1phase1;}
	/* sub	ax,dx */
	SUB(ax, dx);
	/* shl	dx,1		;contract phase is double expand phase */
	SHL(dx, 1);
	/* cmp	ax,dx	    	;contract phase? */
	CMP(ax, dx);
	/* jbe	Air1Phase2	;yes -> */
	if ((dw)(ax) <= (dw)(dx)) {goto air1phase2;}
	// 0 ;-------------------
	// 0 ;* end of smoke life
	// 0 ;-------------------
	/* mov	TMP_SMOKE.SMOKE_TYPE,STYPE_NULL */
	tmp_smoke.smoke_type = 0;
	/* stc			;cf = 1 = smoke cleared */
	STC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
air1phase1:
	// 4449 
	// 0 ;expand radius
	// 0 ;---------------------------
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* mov	TMP_SMOKE.SMOKE_RFT,ax */
	tmp_smoke.smoke_rft = ax;
	/* clc			;cf = 0 = smoke ok */
	CLC;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
air1phase2:
	// 4451 
	// 0 ;contract radius
	// 0 ;---------------------------
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* sub	dx,ax */
	SUB(dx, ax);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* shr	dx,1 */
	SHR(dx, 1);
	/* mov	TMP_SMOKE.SMOKE_RFT,dx */
	tmp_smoke.smoke_rft = dx;
	/* clc			;cf = 0 = smoke ok */
	CLC;
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
                case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kaddsmokeloop: 	goto addsmokeloop;
        case m2c::kair1phase1: 	goto air1phase1;
        case m2c::kair1phase2: 	goto air1phase2;
        case m2c::kairsmokeloop: 	goto airsmokeloop;
        case m2c::kcheckairpos: 	goto checkairpos;
        case m2c::kctrlair1: 	goto ctrlair1;
        case m2c::kctrlgnd1: 	goto ctrlgnd1;
        case m2c::kctrlnull: 	goto ctrlnull;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel2: 	goto dummylabel2;
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
        case m2c::kexitairpos: 	goto exitairpos;
        case m2c::kgnd1phase1: 	goto gnd1phase1;
        case m2c::kgnd1phase2: 	goto gnd1phase2;
        case m2c::kinitair1: 	goto initair1;
        case m2c::kinitair1exit: 	goto initair1exit;
        case m2c::kinitairexplo: 	goto initairexplo;
        case m2c::kinitairtrail: 	goto initairtrail;
        case m2c::kinitburning: 	goto initburning;
        case m2c::kinitcrater1: 	goto initcrater1;
        case m2c::kinitcrater2: 	goto initcrater2;
        case m2c::kinitcrater3: 	goto initcrater3;
        case m2c::kinitgnd1: 	goto initgnd1;
        case m2c::kinitgnd1exit: 	goto initgnd1exit;
        case m2c::kinitkickup: 	goto initkickup;
        case m2c::kmakesinglesmoke: 	goto makesinglesmoke;
        case m2c::kmakesmokeeffect: 	goto makesmokeeffect;
        case m2c::knextsmoke: 	goto nextsmoke;
        case m2c::kscansmoke: 	goto scansmoke;
        case m2c::ksetminsize: 	goto setminsize;
        case m2c::kskiprepro: 	goto skiprepro;
        case m2c::ksmokeloop: 	goto smokeloop;
        case m2c::ksortsmoke: 	goto sortsmoke;
        case m2c::kviscode_0_proc: 	goto viscode_0_proc;
        default: return __dispatch_call(__disp, _state);
    };
}


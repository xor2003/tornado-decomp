/* THIS IS GENERATED FILE */

        
#include "navigpan.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updatenavig:
	// 2715 
	/* mov	NAVIG_MFD.MFD_X_ORG,128  ;Awesome! Frankie hack on 27/11/17 */
	navig_mfd.mfd_x_org = 128;
edummylabel1:
	// 4369 
	/* mov	NAVIG_MFD.MFD_Y_ORG,57 */
	navig_mfd.mfd_y_org = 57;
	/* mov	TAB1.TAB_X_ORG,16  ;Awesome! Frankie hack on 27/11/17 */
	tab1.tab_x_org = 16;
	/* mov	TAB1.TAB_Y_ORG,26  ;Awesome! Frankie hack on 27/11/17 */
	tab1.tab_y_org = 26;
	/* mov	TAB2.TAB_X_ORG,208  ;Awesome! Frankie hack on 27/11/17 */
	tab2.tab_x_org = 208;
	/* mov	TAB2.TAB_Y_ORG,26  ;Awesome! Frankie hack on 27/11/17 */
	tab2.tab_y_org = 26;
	// 0 ;Awesome! Frankie hack on 27/11/17
	/* call	InitPanel */
	CALL(initpanel, 0);
	/* call    LoadNavigPan */
	CALL(loadnavigpan, 0);
	/* call	UpdateADI */
	CALL(updateadi, 0);
	/* call	UpdateHSI */
	CALL(updatehsi, 0);
	/* call	UpdateAltimeter */
	CALL(updatealtimeter, 0);
	/* call	UpdateSpeed */
	CALL(updatespeed, 0);
	/* call	UpdateClock */
	CALL(updateclock, 0);
	/* call	SelectActDisp */
	CALL(selectactdisp, 0);
	/* call	DrawNavigPanel */
	CALLF(drawnavigpanel, 0);
	/* call	DrawADIRollBug */
	CALL(drawadirollbug, 0);
	/* call	UpdateTAB1 */
	CALL(updatetab1, 0);
	/* call	UpdateTAB2 */
	CALL(updatetab2, 0);
	/* call    VGA_DrwNavigPan; */
	CALL(vga_drwnavigpan, 0);
	/* call UpdateNavigMFD */
	CALL(updatenavigmfd, 0);
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je SkipDrawADIRollBug */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipdrawadirollbug;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je CheckIfRadAltOk */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto checkifradaltok;}
	/* jmp SkipCheckIfRadAltOk */
	goto skipcheckifradaltok;
checkifradaltok:
	// 4371 
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jge SkipDrawADIRollBug */
	if ((short)(trueradalt) >= (short)(100)) {goto skipdrawadirollbug;}
skipcheckifradaltok:
	// 4373 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel1;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel1;}
	/* call DrawADIRollBug */
	CALL(drawadirollbug, 0);
dummylabel1:
	// 4375 
skipdrawadirollbug:
	// 4377 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel2;}
	// 0 ;call	UpdateNavigMFD
dummylabel2:
	// 4379 
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel3;}
	// 0 ;call	UpdateNavigMFD
dummylabel3:
	// 4381 
	/* mov	si,OFFSET TAB2	;this TAB display */
	si = m2c::near_offset_external(tab2);
	/* mov	di,OFFSET TAB1	;other TAB display */
	di = m2c::near_offset_external(tab1);
	/* test	TAB_STATUS[di],1	;TAB on? */
	TEST(((tab*)raddr(ds,di))->tab_status, 1);
	/* jnz	__m2c_macrolocal_52_skip */
	if ((((tab*)raddr(ds,di))->tab_status & 1) != 0) {goto __m2c_macrolocal_52_skip;}
	/* jmp	GoSwitchedOff */
	goto goswitchedoff;
__m2c_macrolocal_52_skip:
	// 4383 
	// 0 ;call	UpdateTAB2
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* jne @F */
	if ((dw)(tab2.tab_mode) != (dw)(8)) {goto dummylabel4;}
	// 0 ;call	UpdateNavigMFD
dummylabel4:
	// 4385 
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* jne @F */
	if ((dw)(tab2.tab_mode) != (dw)(12)) {goto dummylabel5;}
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jge SkipDrawDeBug */
	if ((short)(trueradalt) >= (short)(100)) {goto skipdrawdebug;}
	/* call DrawADIRollBug */
	CALL(drawadirollbug, 0);
skipdrawdebug:
	// 4387 
	// 0 ;call	UpdateNavigMFD
dummylabel5:
	// 4389 
	/* call	UpdateStores */
	CALL(updatestores, 0);
	/* jmp Neutral */
	goto neutral;
goswitchedoff:
	// 4391 
	// 0 ;call	UpdateTAB2
	/* call	UpdateStores */
	CALL(updatestores, 0);
neutral:
	// 4393 
	/* cmp	ShakeUp,1 */
	CMP(shakeup, 1);
	/* je	__m2c_macrolocal_53_skip */
	if ((dw)(shakeup) == (dw)(1)) {goto __m2c_macrolocal_53_skip;}
	/* jmp	NoShakesNavig */
	goto noshakesnavig;
__m2c_macrolocal_53_skip:
	// 4395 
	/* call	RandX		; 0.00 ..  2.55 secs */
	CALLF(randx, 0);
	/* cmp	ax,(2*256)/100	;2% chance of random shake in cockpit */
	CMP(ax, (2*256)/100);
	/* jbe	NotSkipShakeNav0 */
	if ((dw)(ax) <= (dw)((2*256)/100)) {goto notskipshakenav0;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_54_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_54_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
__m2c_macrolocal_54_skip:
	// 4397 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 2800 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 2801 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 2802 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 2803 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2804 mov	ShakeTimer,5 */
	/* ret */
	RETN(0);
notskipshakenav0:
	// 4399 
	/* call	RandX */
	CALLF(randx, 0);
	/* cmp	ax,(30*256)/100 */
	CMP(ax, (30*256)/100);
	/* jb SkipShakeNav1 */
	if ((dw)(ax) < (dw)((30*256)/100)) {goto skipshakenav1;}
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_55_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_55_skip;}
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2812 												mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 2813 						mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 2814 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2815 						mov	ShakeTimer,5 */
__m2c_macrolocal_55_skip:
	// 4401 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2817 						cmp	ShakePriority,SHAKE_LAND_GOOD	 */
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
	/* ret */
	RETN(0);
skipshakenav1:
	// 4403 
	/* cmp	ax,(50*256)/100 */
	CMP(ax, (50*256)/100);
	/* jb SkipShakeNav2 */
	if ((dw)(ax) < (dw)((50*256)/100)) {goto skipshakenav2;}
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_56_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_56_skip;}
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
__m2c_macrolocal_56_skip:
	// 4405 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2833 				        cmp	ShakePriority,SHAKE_LAND_GOOD	 */
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2834 mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 2835 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 2836 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2837 mov	ShakeTimer,5 */
	/* ret */
	RETN(0);
skipshakenav2:
	// 4407 
	/* cmp	ax,(75*256)/100 */
	CMP(ax, (75*256)/100);
	/* jb SkipShakeNav3 */
	if ((dw)(ax) < (dw)((75*256)/100)) {goto skipshakenav3;}
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_57_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_57_skip;}
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
__m2c_macrolocal_57_skip:
	// 4409 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2849 				        cmp	ShakePriority,SHAKE_LAND_GOOD	 */
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2850 mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 2851 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 2852 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2853 mov	ShakeTimer,5 */
	/* ret */
	RETN(0);
skipshakenav3:
	// 4411 
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_58_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_58_skip;}
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2858 				        				        mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 2859 				        mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 2860 				        mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2861 				        mov	ShakeTimer,5 */
__m2c_macrolocal_58_skip:
	// 4413 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2863 				        cmp	ShakePriority,SHAKE_LAND_GOOD	 */
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
	/* ret */
	RETN(0);
noshakesnavig:
	// 4415 
	/* ret */
	RETN(0);
initpanel:
	// 2880 
	/* call	ClearNavigPanel ;* kill: assume all */
	CALLF(clearnavigpanel, 0);
edummylabel2:
	// 4417 
	/* mov	si,OFFSET SetUp$ */
	si = m2c::near_offset_external(setupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
updateadi:
	// 2895 
	// 0 ;--------------
	// 0 ;* draw horizon
	// 0 ;--------------
	// 0 ;* set visual view mode for artificial horizon
edummylabel3:
	// 4419 
	/* mov	ax,TV5_VIEWMODE */
	ax = 14;
	/* mov	cx,72 */
	cx = 72;
	/* mov	bl,141 */
	bl = 141;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	cx,M_SinR */
	cx = m_sinr;
	/* mov	dx,M_CosR */
	dx = m_cosr;
	/* mov	al,COL_ADI_GND */
	al = 132;
	/* mov	ah,COL_ADI_SKY */
	ah = 131;
	/* call	UserHorizon */
	CALLF(userhorizon, 0);
	// 0 ;* restore view mode
	/* mov	ax,INT_VIEWMODE */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
drawadirollbug:
	// 2926 
	// 2927 XCENTRE		=	84
	// 0 ;* kill: assume all
	// 2928 YCENTRE		=	150
	// 0 ;* index = Roll * (3527 / 32768)
edummylabel4:
	// 4421 
	/* mov	ax,Roll */
	ax = roll;
	/* mov	dx,3527 */
	dx = 3527;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 84;
	/* mov	bl,YCENTRE */
	bl = 150;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* neg	ax			;flip x */
	NEG(ax);
	/* add	cx,ax */
	ADD(cx, ax);
	/* mov	al,DialXY1[si+1]	;y offset */
	al = *((&dialxy1)+si+1);
	/* neg	al			;flip y */
	NEG(al);
	/* add	bl,al */
	ADD(bl, al);
	/* mov	al,COL_BUG */
	al = 134;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
updatehsi:
	// 2961 
	// 0 ;------------------
	// 0 ;* draw heading bug
	// 0 ;------------------
	// 2966 XCENTRE		=	87
	// 2967 YCENTRE		=	184
	// 0 ;* index = Hdg * (4864 / 32768)
edummylabel5:
	// 4423 
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,4864 */
	dx = 4864;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 87;
	/* mov	bl,YCENTRE */
	bl = 184;
	/* mov	al,DialXY3[si+0]	;x offset */
	al = *((&dialxy3)+si+0);
	/* cbw */
	CBW;
	/* add	cx,ax */
	ADD(cx, ax);
	/* add	bl,DialXY3[si+1]	;y offset */
	ADD(bl, *((&dialxy3)+si+1));
	/* mov	al,COL_BUG */
	al = 134;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;-------------------------------------------------
	// 0 ;* calc localiser and glide slope needle positions
	// 0 ;-------------------------------------------------
	/* test	ILSActive,1	;active? */
	TEST(ilsactive, 1);
	/* jz	@F		;no, use previous values -> */
	if (!(ilsactive & 1)) {goto dummylabel6;}
	// 0 ;* localiser
	/* mov	ax,ILSLocalPos */
	ax = ilslocalpos;
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
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* neg	dx */
	NEG(dx);
	/* add	dx,LOCAL_X */
	ADD(dx, 87);
	/* mov	LocalXPos,dx */
	localxpos = dx;
	// 0 ;* glide slope
	/* mov	ax,ILSGlidePos */
	ax = ilsglidepos;
	/* cwd */
	CWD;
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* shl	ax,1		;*4 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,bx		;*6 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* add	dx,GLIDE_Y */
	ADD(dx, 186);
	/* mov	GlideYPos,dl */
	glideypos = dl;
	// 0 ;-----------------------
	// 0 ;* draw localiser needle (use different colours wrt day / night)
	// 0 ;-----------------------
dummylabel6:
	// 4425 
	/* @@:	  	cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel7;}
	/* mov	al,COL_LOCAL1 */
	al = 209;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-4 */
	bl = 184-4;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL2 */
	al = 213;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-3 */
	bl = 184-3;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL3 */
	al = 215;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-2 */
	bl = 184-2;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL4 */
	al = 218;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-1 */
	bl = 184-1;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL5 */
	al = 220;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y */
	bl = 184;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL4 */
	al = 218;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+1 */
	bl = 184+1;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL3 */
	al = 215;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+2 */
	bl = 184+2;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL2 */
	al = 213;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+3 */
	bl = 184+3;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_LOCAL1 */
	al = 209;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+4 */
	bl = 184+4;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* jmp	LocalOk */
	goto localok;
dummylabel7:
	// 4427 
	/* @@:		mov	al,COL_NT_LOCAL1 */
	al = 233;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-4 */
	bl = 184-4;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL2 */
	al = 234;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-3 */
	bl = 184-3;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL3 */
	al = 235;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-2 */
	bl = 184-2;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL4 */
	al = 236;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y-1 */
	bl = 184-1;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL5 */
	al = 255;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y */
	bl = 184;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL4 */
	al = 236;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+1 */
	bl = 184+1;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL3 */
	al = 235;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+2 */
	bl = 184+2;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL2 */
	al = 234;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+3 */
	bl = 184+3;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_LOCAL1 */
	al = 233;
	/* mov	cx,LocalXPos */
	cx = localxpos;
	/* mov	bl,LOCAL_Y+4 */
	bl = 184+4;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;-------------------------
	// 0 ;* draw glide slope needle (use different colours wrt day / night)
	// 0 ;-------------------------
localok:
	// 4429 
	/* LocalOk:	cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel8;}
	/* mov	al,COL_GLIDE1 */
	al = 210;
	/* mov	cx,GLIDE_X-1 */
	cx = 70-1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_GLIDE2 */
	al = 216;
	/* mov	cx,GLIDE_X */
	cx = 70;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_GLIDE3 */
	al = 220;
	/* mov	cx,GLIDE_X+1 */
	cx = 70+1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* jmp	GlideOk */
	goto glideok;
dummylabel8:
	// 4431 
	/* @@:		mov	al,COL_NT_GLIDE1 */
	al = 234;
	/* mov	cx,GLIDE_X-1 */
	cx = 70-1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_GLIDE2 */
	al = 235;
	/* mov	cx,GLIDE_X */
	cx = 70;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_GLIDE3 */
	al = 236;
	/* mov	cx,GLIDE_X+1 */
	cx = 70+1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
glideok:
	// 4433 
	/* GlideOk:	ret */
	RETN(0);
updatealtimeter:
	// 3150 
	// 0 ;---------------------------
	// 0 ;* print barometric altitude (to 100ft resolution)
	// 0 ;---------------------------
edummylabel6:
	// 4435 
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,100 */
	bx = 100;
	/* div	bx */
	DIV2(bx);
	/* mov	TempVal,ax */
	tempval = ax;
	/* mov	si,OFFSET BarAlt$ */
	si = m2c::near_offset_external(baraltdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;------------------------
	// 0 ;* draw 1,000ft indicator
	// 0 ;------------------------
	// 3166 XCENTRE		=	141
	// 3167 YCENTRE		=	25
	// 0 ;* index = altitude mod 1000 * (2097 / 32768)
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,1000 */
	bx = 1000;
	/* div	bx */
	DIV2(bx);
	/* mov	ax,2097 */
	ax = 2097;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 141;
	/* mov	bl,YCENTRE */
	bl = 25;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY2[si+0]	;x offset */
	al = *((&dialxy2)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY2[si+1]	;y offset */
	ADD(bh, *((&dialxy2)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;-------------------------
	// 0 ;* draw 10,000ft indicator
	// 0 ;-------------------------
	// 3196 XCENTRE		=	141
	// 3197 YCENTRE		=	25
	// 0 ;* index = altitude mod 10000 * (183 / 32768)
	/* mov	dx,ZftHi */
	dx = zfthi;
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* mov	bx,10000 */
	bx = 10000;
	/* div	bx */
	DIV2(bx);
	/* mov	ax,183 */
	ax = 183;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 141;
	/* mov	bl,YCENTRE */
	bl = 25;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* neg	ax			;flip x */
	NEG(ax);
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* mov	al,DialXY1[si+1]	;y offset */
	al = *((&dialxy1)+si+1);
	/* neg	al			;flip y */
	NEG(al);
	/* add	bh,al */
	ADD(bh, al);
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updatespeed:
	// 3236 
	// 3237 XCENTRE		=	177
	// 0 ;* kill: assume all
	// 3238 YCENTRE		=	25
	// 0 ;-------------------
	// 0 ;* print mach number
	// 0 ;-------------------
edummylabel7:
	// 4437 
	/* mov	ax,DispMachNum */
	ax = dispmachnum;
	/* aam			;ah = integer, al = fraction */
	AAM;
	// 0 ;* print "d.d"
	/* mov	PrtCl,XCENTRE-5 */
	prtcl = 177-5;
	/* mov	PrtLn,YCENTRE+1 */
	prtln = 25+1;
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
	// 0 ;--------------------
	// 0 ;* airspeed indicator
	// 0 ;--------------------
	// 0 ;* index = min(Vkts, 850) * (2330 / 32768)
	/* mov	ax,Vkts */
	ax = vkts;
	/* cmp	ax,850 		;Vkts <= fsd? */
	CMP(ax, 850);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(850)) {goto dummylabel9;}
	/* mov	ax,850		;limit to fsd */
	ax = 850;
dummylabel9:
	// 4439 
	/* @@:		mov	dx,2330 */
	dx = 2330;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 177;
	/* mov	bl,YCENTRE */
	bl = 25;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY2[si+0]	;x offset */
	al = *((&dialxy2)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY2[si+1]	;y offset */
	ADD(bh, *((&dialxy2)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updateclock:
	// 3295 
	// 3296 XCENTRE		=	37
	// 0 ;* kill: assume all
	// 3297 YCENTRE		=	173
	// 0 ;-----------
	// 0 ;* hour hand
	// 0 ;-----------
edummylabel8:
	// 4441 
	/* mov	al,Clock24.CLK_HRS */
	al = clock24.clk_hrs;
	/* mov	ah,60 */
	ah = 60;
	/* mul	ah */
	MUL1_1(ah);
	/* add	al,Clock24.CLK_MINS */
	ADD(al, clock24.clk_mins);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* cmp	ax,12*60	;after midday? */
	CMP(ax, 12*60);
	/* jb	@F		;no -> */
	if ((dw)(ax) < (dw)(12*60)) {goto dummylabel10;}
	/* sub	ax,12*60	;wrap around */
	SUB(ax, 12*60);
dummylabel10:
	// 4443 
	/* @@:		mov	dx,2367		;2367 = (52 / (12 * 60)) * 32768 */
	dx = 2367;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 37;
	/* mov	bl,YCENTRE */
	bl = 173;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,ClockDial2[si+0]	;x offset */
	al = *((&clockdial2)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,ClockDial2[si+1]	;y offset */
	ADD(bh, *((&clockdial2)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;-------------
	// 0 ;* minute hand
	// 0 ;-------------
	/* mov	al,Clock24.CLK_MINS */
	al = clock24.clk_mins;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	dx,34953	;34953 = (64 / 60) * 32768 */
	dx = 34953;
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
	/* mov	si,dx */
	si = dx;
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 37;
	/* mov	bl,YCENTRE */
	bl = 173;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,ClockDial1[si+0]	;x offset */
	al = *((&clockdial1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,ClockDial1[si+1]	;y offset */
	ADD(bh, *((&clockdial1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;-------------
	// 0 ;* second hand
	// 0 ;-------------
	/* mov	al,Clock24.CLK_SECS */
	al = clock24.clk_secs;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	dx,34953	;34953 = (64 / 60) * 32768 */
	dx = 34953;
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
	/* mov	si,dx */
	si = dx;
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 37;
	/* mov	bl,YCENTRE */
	bl = 173;
	/* mov	al,ClockDial1[si+0]	;x offset */
	al = *((&clockdial1)+si+0);
	/* cbw */
	CBW;
	/* add	cx,ax */
	ADD(cx, ax);
	/* add	bl,ClockDial1[si+1]	;y offset */
	ADD(bl, *((&clockdial1)+si+1));
	// 0 ;* calc tail end co-ords
	/* mov	al,Clock24.CLK_SECS */
	al = clock24.clk_secs;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	dx,8738		;8738 = (16 / 60) * 32768 */
	dx = 8738;
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
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	dx,XCENTRE */
	dx = 37;
	/* mov	bh,YCENTRE */
	bh = 173;
	/* mov	al,ClockDial3[si+0]	;x offset */
	al = *((&clockdial3)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* add	bh,ClockDial3[si+1]	;y offset */
	ADD(bh, *((&clockdial3)+si+1));
	/* mov	al,COL_RED_NEEDLE */
	al = 130;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updatestores:
	// 3402 
	/* mov	di,OFFSET TAB1	;other TAB display */
	di = m2c::near_offset_external(tab1);
edummylabel9:
	// 4445 
	/* mov	si,OFFSET TAB2	;this TAB display */
	si = m2c::near_offset_external(tab2);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ; Handling Damaged Tabs
	// 0 ; Frankie Kam
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	bx,TAB_SSF_PTR[di]   ;Tab1 damaged? */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,di))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1 */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_70_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_70_skip;}
	/* jmp	TVTab1DamagedOrOff */
	goto tvtab1damagedoroff;
__m2c_macrolocal_70_skip:
	// 4447 
	// 0 ;yes
	// 0 ; Check if Tab1 is switched off!
	/* mov	di,OFFSET TAB1	;this TAB display */
	di = m2c::near_offset_external(tab1);
	/* test	TAB_STATUS[di],1	;TAB switched on? */
	TEST(((tab*)raddr(ds,di))->tab_status, 1);
	/* jnz	__m2c_macrolocal_71_skip */
	if ((((tab*)raddr(ds,di))->tab_status & 1) != 0) {goto __m2c_macrolocal_71_skip;}
	/* jmp	TVTab1DamagedOrOff */
	goto tvtab1damagedoroff;
__m2c_macrolocal_71_skip:
	// 4449 
	// 0 ;no, it is OFF! ->
	/* mov	bx,TAB_SSF_PTR[si]  ;;Tab2 damaged? */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1 */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_72_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_72_skip;}
	/* jmp	TVTab2DamagedOrOff */
	goto tvtab2damagedoroff;
__m2c_macrolocal_72_skip:
	// 4451 
	// 0 ;yes
	// 0 ; Check if Tab2 is switched off!
	/* mov	si,OFFSET TAB2	;this TAB display */
	si = m2c::near_offset_external(tab2);
	/* test	TAB_STATUS[si],1	;TAB switched on? */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_73_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_73_skip;}
	/* jmp	TVTab2DamagedOrOff */
	goto tvtab2damagedoroff;
__m2c_macrolocal_73_skip:
	// 4453 
	// 0 ;no, it is OFF! ->
	/* jmp BothTabsUndamagedOrOff */
	goto bothtabsundamagedoroff;
tvtab1damagedoroff:
	// 4455 
	/* mov	bx,TAB_SSF_PTR[si]  ;;Tab2 damaged? */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1 */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_74_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_74_skip;}
	/* jmp	BothTabsDamagedOrOff */
	goto bothtabsdamagedoroff;
__m2c_macrolocal_74_skip:
	// 4457 
	// 0 ;yes
	// 0 ; Check if Tab2 is switched off!
	/* test	TAB_STATUS[si],1	;TAB switched on? */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_75_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_75_skip;}
	/* jmp	BothTabsDamagedOrOff */
	goto bothtabsdamagedoroff;
__m2c_macrolocal_75_skip:
	// 4459 
	// 0 ;no, it is OFF! ->
	// 0 ;Check Tab2 TIALD over the limit?
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* jne SkipCheckM_CosR */
	if ((dw)(tab2.tab_mode) != (dw)(12)) {goto skipcheckm_cosr;}
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	BothTabsDamagedOrOff		;no, so show "X" as invalid display -> */
	if ((short)(m_cosp) < (short)(16384)) {goto bothtabsdamagedoroff;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	BothTabsDamagedOrOff		;no, so show "X" as invalid display -> */
	if ((short)(m_cosr) < (short)(16384)) {goto bothtabsdamagedoroff;}
skipcheckm_cosr:
	// 4461 
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel11;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel11;}
	/* call VGA_DrwNavigPanBrief */
	CALL(vga_drwnavigpanbrief, 0);
	/* call	DrawADIRollBug */
	CALL(drawadirollbug, 0);
	/* call UpdateStores2 ;else, show SMD at the bottom centre! */
	CALL(updatestores2, 0);
	/* ret */
	RETN(0);
dummylabel11:
	// 4463 
	/* call UpdateNavigMFD */
	CALL(updatenavigmfd, 0);
	/* call UpdateStores3 ;Show SMD at the top left */
	CALL(updatestores3, 0);
	/* ret */
	RETN(0);
tvtab2damagedoroff:
	// 4465 
	/* mov	bx,TAB_SSF_PTR[di]   ;Tab1 damaged? */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,di))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1 */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_76_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_76_skip;}
	/* jmp	BothTabsDamagedOrOff */
	goto bothtabsdamagedoroff;
__m2c_macrolocal_76_skip:
	// 4467 
	// 0 ;yes
	// 0 ; Check if Tab1 is switched off!
	/* test	TAB_STATUS[di],1	;TV-Tab2 switched on? */
	TEST(((tab*)raddr(ds,di))->tab_status, 1);
	/* jnz	__m2c_macrolocal_77_skip */
	if ((((tab*)raddr(ds,di))->tab_status & 1) != 0) {goto __m2c_macrolocal_77_skip;}
	/* jmp	BothTabsDamagedOrOff */
	goto bothtabsdamagedoroff;
__m2c_macrolocal_77_skip:
	// 4469 
	// 0 ;no, it is OFF! ->
	// 0 ;Check Tab1 TIALD over the limit?
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* jne SkipCheckM_CosR2 */
	if ((dw)(tab1.tab_mode) != (dw)(12)) {goto skipcheckm_cosr2;}
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	BothTabsDamagedOrOff		;no, so show "X" as invalid display -> */
	if ((short)(m_cosp) < (short)(16384)) {goto bothtabsdamagedoroff;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	BothTabsDamagedOrOff		;no, so show "X" as invalid display -> */
	if ((short)(m_cosr) < (short)(16384)) {goto bothtabsdamagedoroff;}
skipcheckm_cosr2:
	// 4471 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel12;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto dummylabel12;}
	/* call VGA_DrwNavigPanBrief */
	CALL(vga_drwnavigpanbrief, 0);
	/* call	DrawADIRollBug */
	CALL(drawadirollbug, 0);
	/* call UpdateStores2 ;else, show SMD at the bottom centre! */
	CALL(updatestores2, 0);
	/* ret */
	RETN(0);
dummylabel12:
	// 4473 
	/* call UpdateStores3 ;Show SMD at the top left */
	CALL(updatestores3, 0);
	/* ret */
	RETN(0);
bothtabsdamagedoroff:
	// 4475 
	/* call VGA_DrwNavigPanBrief */
	CALL(vga_drwnavigpanbrief, 0);
	/* call	DrawADIRollBug */
	CALL(drawadirollbug, 0);
	/* call UpdateStores2 ;else, show SMD at the bottom centre! */
	CALL(updatestores2, 0);
	/* ret */
	RETN(0);
bothtabsundamagedoroff:
	// 4477 
	// 0 ;---------------
	// 0 ;* clear display
	// 0 ;---------------
	/* mov	cx,SDISP_X_ORG */
	cx = 128;
	/* mov	bl,SDISP_Y_ORG */
	bl = 148;
	/* mov	dx,SDISP_X_ORG+SDISP_WIDTH-1 */
	dx = 128+64-1;
	/* mov	bh,SDISP_Y_ORG+SDISP_DEPTH-1 */
	bh = 148+47-1;
	/* mov	al,COL_CRT1 */
	al = 160;
	// 0 ;If full-Screen TIALD in TV-Tab1 (left) then check if outside TIALD pitch limits
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* jne @F */
	if ((dw)(tab1.tab_mode) != (dw)(12)) {goto dummylabel13;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel13;}
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	GotoUpdateStores2		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto gotoupdatestores2;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	GotoUpdateStores2		;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto gotoupdatestores2;}
	/* jmp MoreChecks */
	goto morechecks;
gotoupdatestores2:
	// 4479 
	/* call DrawADIRollBug */
	CALL(drawadirollbug, 0);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ; Check if Tab1 is switched off!
	// 0 ; Frankie Kam
	/* mov	si,OFFSET TAB1	;this TAB display */
	si = m2c::near_offset_external(tab1);
	/* test	TAB_STATUS[si],1	;TAB switched on? */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_78_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_78_skip;}
	/* jmp	Tab1IsSwitchedOff */
	goto tab1isswitchedoff;
__m2c_macrolocal_78_skip:
	// 4481 
	// 0 ;no, it is OFF! ->
	/* call UpdateStores2 */
	CALL(updatestores2, 0);
	/* ret */
	RETN(0);
tab1isswitchedoff:
	// 4483 
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	Breakthrough		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto breakthrough;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	Breakthrough */
	if ((short)(m_cosr) < (short)(16384)) {goto breakthrough;}
	// 0 ;call UpdateNavigMFD
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je Ozark */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto ozark;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je Ozark */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto ozark;}
breakthrough:
	// 4485 
	/* call UpdateStores2 */
	CALL(updatestores2, 0);
	/* ret */
	RETN(0);
ozark:
	// 4487 
	/* mov	di,OFFSET TAB2	;this TAB display */
	di = m2c::near_offset_external(tab2);
	/* test	TAB_STATUS[di],1	;TAB switched on? */
	TEST(((tab*)raddr(ds,di))->tab_status, 1);
	/* jnz	__m2c_macrolocal_79_skip */
	if ((((tab*)raddr(ds,di))->tab_status & 1) != 0) {goto __m2c_macrolocal_79_skip;}
	/* jmp	Tab1IsSwitchedOffz */
	goto tab1isswitchedoffz;
__m2c_macrolocal_79_skip:
	// 4489 
	// 0 ;no, it is OFF! ->
	/* call UpdateStores3 */
	CALL(updatestores3, 0);
	/* ret */
	RETN(0);
tab1isswitchedoffz:
	// 4491 
	/* call UpdateStores2 */
	CALL(updatestores2, 0);
	/* ret */
	RETN(0);
dummylabel13:
	// 4493 
	// 0 ;If full-Screen TIALD in TV-Tab2 (right) then check if outside TIALD pitch limits
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je MoreChecks */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto morechecks;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je MoreChecks */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto morechecks;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* jne SkipGotoUpdateStores2 */
	if ((dw)(tab2.tab_mode) != (dw)(12)) {goto skipgotoupdatestores2;}
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	GotoUpdateStores2		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto gotoupdatestores2;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	GotoUpdateStores2		;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto gotoupdatestores2;}
	/* jmp MoreChecks */
	goto morechecks;
morechecks:
	// 4495 
	// 0 ;-----------------------
	// 0 ;* test for TAB on / off
	// 0 ;-----------------------
	/* mov	si,OFFSET TAB1	;TV-TAB1 (left) display */
	si = m2c::near_offset_external(tab1);
	/* mov	di,OFFSET TAB2	;TV-TAB2 (right) display */
	di = m2c::near_offset_external(tab2);
	/* test TAB_STATUS[si],1 */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_80_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_80_skip;}
	/* jmp	GotoUpdateStores2 */
	goto gotoupdatestores2;
__m2c_macrolocal_80_skip:
	// 4497 
	// 0 ;yes, still on->
	/* test TAB_STATUS[di],1 */
	TEST(((tab*)raddr(ds,di))->tab_status, 1);
	/* jnz	__m2c_macrolocal_81_skip */
	if ((((tab*)raddr(ds,di))->tab_status & 1) != 0) {goto __m2c_macrolocal_81_skip;}
	/* jmp	CheckIfTVTab1CurrActiveDisp */
	goto checkiftvtab1curractivedisp;
__m2c_macrolocal_81_skip:
	// 4499 
	/* jmp SkipCheckIfTVTab1CurrActiveDisp */
	goto skipcheckiftvtab1curractivedisp;
checkiftvtab1curractivedisp:
	// 4501 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je	SkipGotoUpdateStores2 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipgotoupdatestores2;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je	SkipGotoUpdateStores2 */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipgotoupdatestores2;}
	/* jmp GotoUpdateStores2		;yes, still on-> */
	goto gotoupdatestores2;
skipcheckiftvtab1curractivedisp:
	// 4503 
skipgotoupdatestores2:
	// 4505 
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;minimum alt for TIALD not ok? */
	CMP(trueradalt, 100);
	/* jl CallBlockFill ; --> not ok */
	if ((short)(trueradalt) < (short)(100)) {goto callblockfill;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR on TV-TAB1? */
	CMP(tab1.tab_mode, 8);
	/* je SkipBlockFill */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipblockfill;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD on TV-TAB1? */
	CMP(tab1.tab_mode, 12);
	/* je SkipBlockFill */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipblockfill;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR on TV-TAB2? */
	CMP(tab2.tab_mode, 8);
	/* je SkipBlockFill */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipblockfill;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD on TV-TAB2? */
	CMP(tab2.tab_mode, 12);
	/* je SkipBlockFill */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipblockfill;}
callblockfill:
	// 4507 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR on TV-TAB1? */
	CMP(tab1.tab_mode, 8);
	/* je SkipBlockFill */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipblockfill;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR on TV-TAB2? */
	CMP(tab2.tab_mode, 8);
	/* je SkipBlockFill */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipblockfill;}
	/* call	BlockFill */
	CALLF(blockfill, 0);
skipblockfill:
	// 4509 
	// 0 ;--------------------
	// 0 ;* update blink timer
	// 0 ;--------------------
	/* mov	ax,ArmBlinkTimer */
	ax = armblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel14;}
	/* xor	ArmBlink,1	;toggle blink state */
	XOR(armblink, 1);
	/* mov	ax,ARM_BLINK_TIME */
	ax = 50;
dummylabel14:
	// 4511 
	/* @@:		mov	ArmBlinkTimer,ax */
	armblinktimer = ax;
	// 0 ;-------------------------
	// 0 ;* sort layout wrt variant
	// 0 ;-------------------------
	/* mov	bx,TornadoType */
	bx = tornadotype;
__disp=*(dw*)(((db*)&layoutswitch)+bx);
	/* jmp	LayoutSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
idslayout:
	// 4513 
ecrlayout:
	// 4515 
	// 0 ;---------------------------
	// 0 ;----------------------
	// 0 ;* draw separator lines
	// 0 ;----------------------
	// 0 ;mov	si,OFFSET TAB2	;this TAB display
	// 0 ;mov	di,OFFSET TAB1	;other TAB display
	// 0 ;mov	bx,TAB_SSF_PTR[si]
	// 0 ;test	BYTE PTR [bx],1     ;test for damaged TAB
	// 0 ;_JNZ	ExitActDisp
	// 0 ;mov	ax,TAB_SSF_PTR[di]
	// 0 ;test	BYTE PTR [bx],1		;other TAB display damaged?
	// 0 ;_JNZ	ExitActDisp
	// 0 ;and bx, ax
	// 0 ;jz	ExitActDisp
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;minimum alt for TIALD not ok? */
	CMP(trueradalt, 100);
	/* jl DontSkipHLineDraw ; --> not ok */
	if ((short)(trueradalt) < (short)(100)) {goto dontskiphlinedraw;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab1.tab_mode, 8);
	/* je SkipHLineDraw */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skiphlinedraw;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on left TV-Tab? */
	CMP(tab1.tab_mode, 12);
	/* je SkipHLineDraw */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skiphlinedraw;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on right TV-Tab? */
	CMP(tab2.tab_mode, 8);
	/* je SkipHLineDraw */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skiphlinedraw;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on right TV-Tab? */
	CMP(tab2.tab_mode, 12);
	/* je SkipHLineDraw */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skiphlinedraw;}
dontskiphlinedraw:
	// 4517 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab1.tab_mode, 8);
	/* je SkipHLineDraw */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skiphlinedraw;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab2.tab_mode, 8);
	/* je SkipHLineDraw */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skiphlinedraw;}
	/* mov	cx,128 */
	cx = 128;
	/* mov	dx,191 */
	dx = 191;
	/* mov	bl,167 */
	bl = 167;
	/* mov	al,COL_CRT3 */
	al = 162;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,128 */
	cx = 128;
	/* mov	dx,191 */
	dx = 191;
	/* mov	bl,181 */
	bl = 181;
	/* mov	al,COL_CRT3 */
	al = 162;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
skiphlinedraw:
	// 4519 
	// 0 ;------------------
	// 0 ;* display packages
	// 0 ;------------------
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;minimum alt for TIALD not ok? */
	CMP(trueradalt, 100);
	/* jl DontSkipPrtLn149 ; --> not ok */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipprtln149;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab1? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtLn149 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtln149;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on left TV-Tab1? */
	CMP(tab1.tab_mode, 12);
	/* je SkipPrtLn149 */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipprtln149;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on right TV-Tab2? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtLn149_rightTVTab */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtln149_righttvtab;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on right TV-Tab2? */
	CMP(tab2.tab_mode, 12);
	/* je SkipPrtLn149_rightTVTab */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipprtln149_righttvtab;}
dontskipprtln149:
	// 4521 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab1? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtLn149 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtln149;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab1? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtLn149 */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtln149;}
godoit1:
	// 4523 
	/* mov	PrtLn,149 */
	prtln = 149;
	/* jmp SkipSkipPrtLn149 */
	goto skipskipprtln149;
skipprtln149:
	// 4525 
	/* mov	PrtLn,50 ;50 */
	prtln = 50;
	/* jmp SkipSkipPrtLn149 */
	goto skipskipprtln149;
skipprtln149_righttvtab:
	// 4527 
	// 0 ;mov PrtLn,5
	/* mov PrtLn,50 */
	prtln = 50;
skipskipprtln149:
	// 4529 
	/* mov	cx,NUM_PACKAGES */
	cx = 3;
	/* mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
packageloop:
	// 4531 
	/* PackageLoop:  	cmp	[si].PACK_WEAP_TYPE,NULL_WEAPON	;null package? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), -1);
	/* jne	__m2c_macrolocal_82_skip */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(-1)) {goto __m2c_macrolocal_82_skip;}
	/* jmp	SkipPackage */
	goto skippackage;
__m2c_macrolocal_82_skip:
	// 4533 
	// 0 ;yes ->
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	// 0 ;* blink if current package and armed
	/* cmp	si,PackagePtr	;current package? */
	CMP(si, packageptr);
	/* jne	SkipPackBlink	;no -> */
	if ((dw)(si) != (dw)(packageptr)) {goto skippackblink;}
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* cmp	ax,ArmMode	;armed? */
	CMP(ax, armmode);
	/* jne	SkipPackBlink	;no -> */
	if ((dw)(ax) != (dw)(armmode)) {goto skippackblink;}
	/* test	ArmBlink,1   	;blink on? */
	TEST(armblink, 1);
	/* jnz	__m2c_macrolocal_83_skip */
	if ((armblink & 1) != 0) {goto __m2c_macrolocal_83_skip;}
	/* jmp	NextPackage */
	goto nextpackage;
__m2c_macrolocal_83_skip:
	// 4535 
	// 0 ;no ->
	// 0 ;* hi-lite text if current package
skippackblink:
	// 4537 
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontSkipPrtCl128 */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipprtcl128;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtCl128 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtcl128;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on left TV-Tab? */
	CMP(tab1.tab_mode, 12);
	/* je SkipPrtCl128 */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipprtcl128;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on right TV-Tab? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtCl128 */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtcl128;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on right TV-Tab? */
	CMP(tab2.tab_mode, 12);
	/* je SkipPrtCl128 */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipprtcl128;}
dontskipprtcl128:
	// 4539 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtCl128 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtcl128;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtCl128 */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtcl128;}
	/* mov	PrtCl,128 */
	prtcl = 128;
	/* push	si */
	PUSH(si);
	/* cmp	si,PackagePtr		;current package? */
	CMP(si, packageptr);
	/* mov	si,OFFSET WpnSetUp1$	;assume not */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel15;}
	/* mov	si,OFFSET WpnSetUp2$ */
	si = m2c::near_offset_external(wpnsetup2dol);
	/* jmp SkipSkipPrtCl128 */
	goto skipskipprtcl128;
skipprtcl128:
	// 4541 
	/* mov	PrtCl,1 */
	prtcl = 1;
	/* push	si */
	PUSH(si);
	/* cmp	si,PackagePtr		;current package? */
	CMP(si, packageptr);
	/* mov	si,OFFSET WpnSetUp1_fullscr$	;assume not */
	si = m2c::near_offset_external(wpnsetup1_fullscrdol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel15;}
	/* mov	si,OFFSET WpnSetUp2_fullscr$ */
	si = m2c::near_offset_external(wpnsetup2_fullscrdol);
skipskipprtcl128:
	// 4543 
dummylabel15:
	// 4545 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* pop	si */
	POP(si);
	// 0 ;* print target waypoint identifier
	/* mov	al,[si].PACK_WP_ID */
	al = m2c::getdata(*((db*)((db*)&((package*)raddr(ds,si))->pack_wp_id)));
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontSkipPrintChar */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipprintchar;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrintChar */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprintchar;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on left TV-Tab? */
	CMP(tab1.tab_mode, 12);
	/* je SkipPrintChar */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipprintchar;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on right TV-Tab? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrintChar */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprintchar;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;full-screen TIALD selected on right TV-Tab? */
	CMP(tab2.tab_mode, 12);
	/* je SkipPrintChar */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipprintchar;}
dontskipprintchar:
	// 4547 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrintChar */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprintchar;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;full-screen FLIR selected on left TV-Tab? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrintChar */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprintchar;}
	/* call PrintChar */
	CALLF(printchar, 0);
skipprintchar:
	// 4549 
	/* add	PrtCl,4 */
	ADD(prtcl, 4);
	/* push	si */
	PUSH(si);
	/* mov	si,[si].PACK_WEAP_TYPE */
	si = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* shl	si,1 */
	SHL(si, 1);
	/* shl	si,1 */
	SHL(si, 1);
	/* add	si,OFFSET Weapon$ */
	ADD(si, m2c::near_offset_external(weapondol));
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	al,'x' */
	al = 'x';
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* pop	si */
	POP(si);
	// 0 ;* print number of weapons in package
	/* mov	DecAttr,00010010b	;(unsigned, 2 digits, left justified) */
	decattr = 0x12;
	/* mov	ax,[si].PACK_WEAP_NUM */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* call	PrintDecWord */
	CALLF(printdecword, 0);
	/* mov	DecAttr,00000000b	;(default) */
	decattr = 0x0;
	// 0 ;* print delivery mode (if applicable)
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* mov	si,OFFSET ManBomb$ */
	si = m2c::near_offset_external(manbombdol);
	/* cmp	ax,ARM_MANUAL */
	CMP(ax, 2);
	/* je	@F */
	if ((dw)(ax) == (dw)(2)) {goto dummylabel16;}
	/* mov	si,OFFSET LayBomb$ */
	si = m2c::near_offset_external(laybombdol);
	/* cmp	ax,ARM_LAYDOWN */
	CMP(ax, 4);
	/* je	@F */
	if ((dw)(ax) == (dw)(4)) {goto dummylabel16;}
	/* mov	si,OFFSET LftBomb$ */
	si = m2c::near_offset_external(lftbombdol);
	/* cmp	ax,ARM_LOFT */
	CMP(ax, 6);
	/* je	@F */
	if ((dw)(ax) == (dw)(6)) {goto dummylabel16;}
	/* mov	si,OFFSET LGBBomb$ */
	si = m2c::near_offset_external(lgbbombdol);
	/* cmp	ax,ARM_LGB */
	CMP(ax, 8);
	/* je	@F */
	if ((dw)(ax) == (dw)(8)) {goto dummylabel16;}
	/* mov	si,OFFSET DirAlarm$ */
	si = m2c::near_offset_external(diralarmdol);
	/* cmp	ax,ARM_ALARM_DIR */
	CMP(ax, 12);
	/* je	@F */
	if ((dw)(ax) == (dw)(12)) {goto dummylabel16;}
	/* mov	si,OFFSET IndAlarm$ */
	si = m2c::near_offset_external(indalarmdol);
	/* cmp	ax,ARM_ALARM_IND */
	CMP(ax, 14);
	/* je	@F */
	if ((dw)(ax) == (dw)(14)) {goto dummylabel16;}
	/* jmp	NextPackage */
	goto nextpackage;
dummylabel16:
	// 4551 
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontSkipPrtCl180 */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipprtcl180;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtCl180 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtcl180;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab1.tab_mode, 12);
	/* je SkipPrtCl180 */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipprtcl180;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtCl180 */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtcl180;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab2.tab_mode, 12);
	/* je SkipPrtCl180 */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipprtcl180;}
dontskipprtcl180:
	// 4553 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtCl180 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtcl180;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtCl180 */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtcl180;}
	/* mov	PrtCl,180 */
	prtcl = 180;
	/* jmp AfterSkipPrtCl180 */
	goto afterskipprtcl180;
skipprtcl180:
	// 4555 
	/* mov	PrtCl,51 */
	prtcl = 51;
afterskipprtcl180:
	// 4557 
	/* call	Print$ */
	CALLF(printdol, 0);
nextpackage:
	// 4559 
	/* NextPackage:  	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
skippackage:
	// 4561 
	/* SkipPackage:	add	si,PACK_REC_SIZE */
	ADD(si, 8);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_84_skip */
	if (cx == 0) {goto __m2c_macrolocal_84_skip;}
	/* jmp	PackageLoop */
	goto packageloop;
__m2c_macrolocal_84_skip:
	// 4563 
	// 0 ;----------------------------
	// 0 ;* display air-to-air weapons
	// 0 ;----------------------------
	// 0 ;* cannons
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontSkipPrtLn169_PrtCl140 */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipprtln169_prtcl140;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtLn169_PrtCl140 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtln169_prtcl140;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab1.tab_mode, 12);
	/* je SkipPrtLn169_PrtCl140 */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipprtln169_prtcl140;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtLn169_PrtCl140_RightTVTab */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtln169_prtcl140_righttvtab;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab2.tab_mode, 12);
	/* je SkipPrtLn169_PrtCl140_RightTVTab */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipprtln169_prtcl140_righttvtab;}
dontskipprtln169_prtcl140:
	// 4565 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je SkipPrtLn169_PrtCl140 */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipprtln169_prtcl140;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je SkipPrtLn169_PrtCl140 */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipprtln169_prtcl140;}
	/* mov	PrtLn,169 */
	prtln = 169;
	/* mov	PrtCl,140 */
	prtcl = 140;
	/* jmp SkipSkipPrtLn169_PrtCl140 */
	goto skipskipprtln169_prtcl140;
skipprtln169_prtcl140:
	// 4567 
	/* mov	PrtLn,70 */
	prtln = 70;
	/* mov	PrtCl,10 */
	prtcl = 10;
	/* jmp SkipSkipPrtLn169_PrtCl140 */
	goto skipskipprtln169_prtcl140;
skipprtln169_prtcl140_righttvtab:
	// 4569 
	/* mov	PrtCl,10 */
	prtcl = 10;
	// 0 ;mov	PrtLn,25
	/* mov	PrtLn,70 */
	prtln = 70;
skipskipprtln169_prtcl140:
	// 4571 
	/* cmp	Cannons,0		;any cannons? */
	CMP(cannons, 0);
	/* je	BeforeSkipAirWpn1		;no -> */
	if ((dw)(cannons) == (dw)(0)) {goto beforeskipairwpn1;}
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontSkipBlink */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipblink;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je SkipBlink */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipblink;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab1.tab_mode, 12);
	/* je SkipBlink */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto skipblink;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je SkipBlink */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipblink;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab2.tab_mode, 12);
	/* je SkipBlink */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto skipblink;}
dontskipblink:
	// 4573 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je SkipBlink */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto skipblink;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je SkipBlink */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto skipblink;}
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel17;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel17;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn1		;no -> */
	if (!(armblink & 1)) {goto nextairwpn1;}
dummylabel17:
	// 4575 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel18;}
	/* mov	si,OFFSET WpnSetUp2$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel18:
	// 4577 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp SkipSkipBlink */
	goto skipskipblink;
beforeskipairwpn1:
	// 4579 
	/* jmp SkipAirWpn1 */
	goto skipairwpn1;
skipblink:
	// 4581 
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel19;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel19;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn1		;no -> */
	if (!(armblink & 1)) {goto nextairwpn1;}
dummylabel19:
	// 4583 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1_fullscr$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1_fullscrdol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel20;}
	/* mov	si,OFFSET WpnSetUp2_fullscr$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup2_fullscrdol);
dummylabel20:
	// 4585 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
skipskipblink:
	// 4587 
	// 0 ;* Sidewinders
nextairwpn1:
	// 4589 
	/* NextAirWpn1:	add	PrtLn,6 */
	ADD(prtln, 6);
skipairwpn1:
	// 4591 
	/* SkipAirWpn1:	mov	PrtCl,144 */
	prtcl = 144;
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontGoAirArm */
	if ((short)(trueradalt) < (short)(100)) {goto dontgoairarm;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je AirArm */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto airarm;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab1.tab_mode, 12);
	/* je AirArm */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto airarm;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je AirArm */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto airarm;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab2.tab_mode, 12);
	/* je AirArm */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto airarm;}
dontgoairarm:
	// 4593 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je AirArm */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto airarm;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je AirArm */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto airarm;}
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn2			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn2;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel21;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn2			;no -> */
	if (!(armblink & 1)) {goto skipairwpn2;}
dummylabel21:
	// 4595 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel22;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel22:
	// 4597 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp SkipAirArm */
	goto skipairarm;
airarm:
	// 4599 
	/* AirArm: mov	PrtCl,15 */
	prtcl = 15;
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn2			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn2;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel23;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn2			;no -> */
	if (!(armblink & 1)) {goto skipairwpn2;}
dummylabel23:
	// 4601 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1_fullscr$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1_fullscrdol);
	/* jne	@F */
	if (!ZF) {goto dummylabel24;}
	/* mov	si,OFFSET WpnSetUp2_fullscr$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2_fullscrdol);
dummylabel24:
	// 4603 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
skipairarm:
	// 4605 
	// 0 ;------------------------
	// 0 ;* display chaff / flares
	// 0 ;------------------------
skipairwpn2:
	// 4607 
	// 0 ;mov	PrtLn,183
	// 0 ;mov	PrtCl,144
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT */
	CMP(trueradalt, 100);
	/* jl DontSkipChaffAndFlares */
	if ((short)(trueradalt) < (short)(100)) {goto dontskipchaffandflares;}
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je ShowChaffAndFlares */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto showchaffandflares;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab1.tab_mode, 12);
	/* je ShowChaffAndFlares */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto showchaffandflares;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je ShowChaffAndFlares */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto showchaffandflares;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI	;map selected? */
	CMP(tab2.tab_mode, 12);
	/* je ShowChaffAndFlares */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto showchaffandflares;}
dontskipchaffandflares:
	// 4609 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je ShowChaffAndFlares */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto showchaffandflares;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je ShowChaffAndFlares */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto showchaffandflares;}
	/* cmp	ChaffCntr,0	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel25;}
	/* mov	PrtLn,183 */
	prtln = 183;
	/* mov	PrtCl,144 */
	prtcl = 144;
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
dummylabel25:
	// 4611 
	/* @@:		mov	PrtCl,144 */
	prtcl = 144;
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel26;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel26:
	// 4613 
	/* ret */
	RETN(0);
showchaffandflares:
	// 4615 
	/* cmp	ChaffCntr,0	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel27;}
	/* add PrtLn,7 */
	ADD(prtln, 7);
	/* mov	PrtCl,12 */
	prtcl = 12;
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel27:
	// 4617 
	/* add	PrtLn,6 */
	ADD(prtln, 6);
	/* mov	PrtCl,12 */
	prtcl = 12;
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel28;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel28:
	// 4619 
	/* ret */
	RETN(0);
edummylabel10:
	// 4621 
	/* ret */
	RETN(0);
	// 0 ;---------------------------
advlayout:
	// 4623 
	// 0 ;---------------------------
	// 0 ;---------------------
	// 0 ;* draw seperator line
	// 0 ;---------------------
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel29;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel29;}
	/* mov	cx,128 */
	cx = 128;
	/* mov	dx,191 */
	dx = 191;
	/* mov	bl,175 */
	bl = 175;
	/* mov	al,COL_CRT3 */
	al = 162;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
dummylabel29:
	// 4625 
	// 0 ;----------------------------
	// 0 ;* display air-to-air weapons
	// 0 ;----------------------------
	// 0 ;* cannons
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel30;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel30;}
	/* mov	PrtLn,152 */
	prtln = 152;
	/* mov	PrtCl,140 */
	prtcl = 140;
	/* jmp SkipCannonsADV */
	goto skipcannonsadv;
dummylabel30:
	// 4627 
	/* mov	PrtLn,52+2 */
	prtln = 52+2;
	/* mov	PrtCl,10 */
	prtcl = 10;
skipcannonsadv:
	// 4629 
	/* cmp	Cannons,0		;any cannons? */
	CMP(cannons, 0);
	/* je	SkipAirWpn3		;no -> */
	if ((dw)(cannons) == (dw)(0)) {goto skipairwpn3;}
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel31;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel31;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn3		;no -> */
	if (!(armblink & 1)) {goto nextairwpn3;}
dummylabel31:
	// 4631 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel32;}
	/* mov	si,OFFSET WpnSetUp2$	;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel32:
	// 4633 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sidewinders
nextairwpn3:
	// 4635 
	/* NextAirWpn3:	add	PrtLn,7 */
	ADD(prtln, 7);
skipairwpn3:
	// 4637 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel33;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel33;}
	/* mov	PrtCl,144 */
	prtcl = 144;
	/* jmp SkipPrtCl_10 */
	goto skipprtcl_10;
dummylabel33:
	// 4639 
	/* mov	PrtCl,10 */
	prtcl = 10;
skipprtcl_10:
	// 4641 
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn4			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn4;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel34;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn4			;no -> */
	if (!(armblink & 1)) {goto nextairwpn4;}
dummylabel34:
	// 4643 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel35;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel35:
	// 4645 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sky Flash
nextairwpn4:
	// 4647 
	/* NextAirWpn4:	add	PrtLn,7 */
	ADD(prtln, 7);
skipairwpn4:
	// 4649 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel36;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel36;}
	/* mov	PrtCl,140 */
	prtcl = 140;
	/* jmp SkipToPrtCl10 */
	goto skiptoprtcl10;
dummylabel36:
	// 4651 
	/* mov PrtCl,10 */
	prtcl = 10;
skiptoprtcl10:
	// 4653 
	/* cmp	ExtStores[EXT_SKYFLASH],0	;any Sky Flash? */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* je	SkipAirWpn5			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) == (dw)(0)) {goto skipairwpn5;}
	/* cmp	ArmMode,ARM_SKYFLASH		;armed? */
	CMP(armmode, 20);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(20)) {goto dummylabel37;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn5			;no -> */
	if (!(armblink & 1)) {goto skipairwpn5;}
dummylabel37:
	// 4655 
	/* @@:		cmp	AirArmMode,ARM_SKYFLASH		;current air-to-air weapon? */
	CMP(airarmmode, 20);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel38;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel38:
	// 4657 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET SkyFlash$ */
	si = m2c::near_offset_external(skyflashdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;------------------------
	// 0 ;* display chaff / flares
	// 0 ;------------------------
skipairwpn5:
	// 4659 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel39;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel39;}
	/* mov	PrtLn,180 */
	prtln = 180;
	/* mov	PrtCl,144 */
	prtcl = 144;
	/* jmp SkipCFLines */
	goto skipcflines;
dummylabel39:
	// 4661 
	/* add	PrtLn,9 */
	ADD(prtln, 9);
	/* mov	PrtCl,10 */
	prtcl = 10;
skipcflines:
	// 4663 
	/* cmp	ChaffCntr,0  	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel40;}
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
dummylabel40:
	// 4665 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel41;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI	;map selected? */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel41;}
	/* mov	PrtCl,144 */
	prtcl = 144;
	/* jmp Skippp */
	goto skippp;
dummylabel41:
	// 4667 
	/* add	PrtLn,1 */
	ADD(prtln, 1);
	/* mov	PrtCl,10 */
	prtcl = 10;
skippp:
	// 4669 
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel42;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel42:
	// 4671 
	/* @@:		ret */
	RETN(0);
selectactdisp:
	// 4195 
	/* mov	al,BYTE PTR KF_Full_MFD[K_STATUS] ;* kill: assume all */
	al = *((&kf_full_mfd)+k_status);
edummylabel11:
	// 4673 
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_full_mfd)+k_status););	// 4198 						mov	al,BYTE PTR KF_Full_MFD[K_STATUS] */
	/* jnz	__m2c_macrolocal_86_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_86_skip;}
	/* jmp	PreCheckNext */
	goto prechecknext;
__m2c_macrolocal_86_skip:
	// 4675 
	/* jmp ActionStations */
	goto actionstations;
prechecknext:
	// 4677 
	/* mov ShiftDwasPressed,0 */
	shiftdwaspressed = 0;
	/* jmp CheckNext */
	goto checknext;
actionstations:
	// 4679 
/* m2c-phantom removed: 	R(*((&kf_full_mfd)+k_status) = 0;);	// 4207 												mov	BYTE PTR KF_Full_MFD[K_STATUS],0 */
	/* mov	BYTE PTR KF_Full_MFD[K_STATUS],0 */
	*((&kf_full_mfd)+k_status) = 0;
	/* mov ShiftDwasPressed,1 */
	shiftdwaspressed = 1;
	/* cmp NAVIG_MFD.MFD_MODE,MFD_MAP */
	CMP(navig_mfd.mfd_mode, 0);
	/* jne @F */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(0)) {goto dummylabel43;}
	/* mov MFD_Counter,MFD_MAP */
	mfd_counter = 0;
	/* jmp comeouttohereMan */
	goto comeouttohereman;
dummylabel43:
	// 4681 
	/* cmp NAVIG_MFD.MFD_MODE,MFD_RADAR */
	CMP(navig_mfd.mfd_mode, 2);
	/* jne @F */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(2)) {goto dummylabel44;}
	/* mov MFD_Counter,MFD_RADAR */
	mfd_counter = 2;
	/* jmp comeouttohereMan */
	goto comeouttohereman;
dummylabel44:
	// 4683 
	/* cmp NAVIG_MFD.MFD_MODE,MFD_AUTO_PILOT */
	CMP(navig_mfd.mfd_mode, 4);
	/* jne @F */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(4)) {goto dummylabel45;}
	/* mov MFD_Counter,MFD_AUTO_PILOT */
	mfd_counter = 4;
	/* jmp comeouttohereMan */
	goto comeouttohereman;
dummylabel45:
	// 4685 
	/* cmp NAVIG_MFD.MFD_MODE,MFD_ILS */
	CMP(navig_mfd.mfd_mode, 6);
	/* jne @F */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(6)) {goto dummylabel46;}
	/* mov MFD_Counter,MFD_ILS */
	mfd_counter = 6;
	/* jmp comeouttohereMan */
	goto comeouttohereman;
dummylabel46:
	// 4687 
	/* cmp NAVIG_MFD.MFD_MODE,MFD_FLIR_ORI */
	CMP(navig_mfd.mfd_mode, 8);
	/* jne @F */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(8)) {goto dummylabel47;}
dummylabel47:
	// 4689 
	/* mov MFD_Counter,MFD_FLIR_ORI */
	mfd_counter = 8;
comeouttohereman:
	// 4691 
	/* add CounterThird,1 */
	ADD(counterthird, 1);
	/* cmp CounterThird,3 */
	CMP(counterthird, 3);
	/* jge BackToNavigPanel */
	if ((short)(counterthird) >= (short)(3)) {goto backtonavigpanel;}
	/* xor	ToggleFullScreen,1	;alternate between full screen FLIR and TIALD */
	XOR(togglefullscreen, 1);
	/* jz tab2tialdori */
	if (togglefullscreen == 0) {goto tab2tialdori;}
	/* jmp afterafter */
	goto afterafter;
tab2tialdori:
	// 4693 
	// 0 ;----------------------------------
	// 0 ;* test for TAB1 switched on or not
	// 0 ;----------------------------------
	/* test TAB1.TAB_STATUS,1 */
	TEST(tab1.tab_status, 1);
	/* jz	@F   ;no -> */
	if (!(tab1.tab_status & 1)) {goto dummylabel48;}
	// 0 ;-----------------------
	// 0 ;* test for damaged TAB1
	// 0 ;-----------------------
	/* mov	bx,TAB1.TAB_SSF_PTR */
	bx = tab1.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	@F		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto dummylabel48;}
	/* cmp TAB2.TAB_MODE,TAB_TIALD_ORI  ;Is TV-Tab2 already showing the small TV-Tab-sized TIALD view? */
	CMP(tab2.tab_mode, 12);
	/* je @F       ;yes -> Do NOT view full-screen TIALD view in TAB1! We can't have 2 simulataneous TV-TAB views! */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel48;}
	/* mov TAB1.TAB_MODE,TAB_TIALD_ORI */
	tab1.tab_mode = 12;
	/* jmp CheckNext */
	goto checknext;
dummylabel48:
	// 4695 
	/* jmp testoforTAB2 */
	goto testofortab2;
afterafter:
	// 4697 
	/* mov	di,OFFSET TAB1	;other TAB display */
	di = m2c::near_offset_external(tab1);
	/* mov	si,OFFSET TAB2	;this TAB display */
	si = m2c::near_offset_external(tab2);
	// 0 ;----------------------------------
	// 0 ;* test for TAB1 switched on or not
	// 0 ;----------------------------------
	/* test TAB1.TAB_STATUS,1 */
	TEST(tab1.tab_status, 1);
	/* jz	@F   ;no -> */
	if (!(tab1.tab_status & 1)) {goto dummylabel49;}
	// 0 ;----------------------
	// 0 ;* test for damaged TAB1
	// 0 ;----------------------
	/* mov	bx,TAB1.TAB_SSF_PTR */
	bx = tab1.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	@F		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto dummylabel49;}
	/* mov TAB1.TAB_MODE,TAB_FLIR_ORI */
	tab1.tab_mode = 8;
	/* jmp CheckNext */
	goto checknext;
dummylabel49:
	// 4699 
	// 0 ;----------------------------------
	// 0 ;* test for TAB2 switched on or not
	// 0 ;----------------------------------
	/* test	TAB2.TAB_STATUS,1 ;TAB2 on? */
	TEST(tab2.tab_status, 1);
	/* jz	@F   ;no -> */
	if (!(tab2.tab_status & 1)) {goto dummylabel50;}
	// 0 ;-----------------------
	// 0 ;* test for damaged TAB2
	// 0 ;-----------------------
	/* mov	bx,TAB2.TAB_SSF_PTR */
	bx = tab2.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_88_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_88_skip;}
	/* jmp	@F */
	goto dummylabel50;
__m2c_macrolocal_88_skip:
	// 4701 
	// 0 ;yes ->
	/* mov TAB2.TAB_MODE,TAB_FLIR_ORI */
	tab2.tab_mode = 8;
	/* jmp CheckNext */
	goto checknext;
dummylabel50:
	// 4703 
backtonavigpanel:
	// 4705 
	/* mov CounterThird,0 */
	counterthird = 0;
	// 0 ;----------------------------------
	// 0 ;* test for TAB1 switched on or not
	// 0 ;----------------------------------
	/* test TAB1.TAB_STATUS,1 */
	TEST(tab1.tab_status, 1);
	/* jz	@F   ;no -> */
	if (!(tab1.tab_status & 1)) {goto dummylabel51;}
	// 0 ;----------------------
	// 0 ;* test for damaged TAB1
	// 0 ;----------------------
	/* mov	bx,TAB1.TAB_SSF_PTR */
	bx = tab1.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	@F		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto dummylabel51;}
	/* cmp TAB2.TAB_MODE,TAB_TIALD  ;Is TV-Tab2 already showing the small TV-Tab-sized TIALD view? */
	CMP(tab2.tab_mode, 10);
	/* je @F       ;yes -> Do NOT view full-screen TIALD view in TAB1! We can't have 2 simulataneous TV-TAB views! */
	if ((dw)(tab2.tab_mode) == (dw)(10)) {goto dummylabel51;}
	/* mov TAB1.TAB_MODE,TAB_TIALD ;Force the entire Navigators Panel (Cockpit) to be shown in entirety. */
	tab1.tab_mode = 10;
	/* jmp cmpMFD_Counter10 */
	goto cmpmfd_counter10;
dummylabel51:
	// 4707 
	// 0 ;----------------------------------
	// 0 ;* test for TAB2 switched on or not
	// 0 ;----------------------------------
	/* test TAB2.TAB_STATUS,1 */
	TEST(tab2.tab_status, 1);
	/* jz	@F   ;no -> */
	if (!(tab2.tab_status & 1)) {goto dummylabel52;}
	// 0 ;-----------------------
	// 0 ;* test for damaged TAB2
	// 0 ;-----------------------
	/* mov	bx,TAB2.TAB_SSF_PTR */
	bx = tab2.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	@F		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto dummylabel52;}
	/* cmp TAB1.TAB_MODE,TAB_TIALD  ;Is TV-Tab1 already showing the small TV-Tab-sized TIALD view? */
	CMP(tab1.tab_mode, 10);
	/* je @F   ;yes -> Do NOT view full-screen TIALD view in TAB2! We can't have 2 simulataneous TV-TAB views! */
	if ((dw)(tab1.tab_mode) == (dw)(10)) {goto dummylabel52;}
	/* mov TAB2.TAB_MODE,TAB_TIALD ;Force the entire Navigators Panel (Cockpit) to be shown in entirety. */
	tab2.tab_mode = 10;
dummylabel52:
	// 4709 
cmpmfd_counter10:
	// 4711 
	/* cmp MFD_Counter,10 */
	CMP(mfd_counter, 10);
	/* jge ResetToZero */
	if ((short)(mfd_counter) >= (short)(10)) {goto resettozero;}
	/* cmp MFD_Counter, 2 */
	CMP(mfd_counter, 2);
	/* je @F */
	if ((dw)(mfd_counter) == (dw)(2)) {goto dummylabel53;}
	/* jmp BypassResetToZero */
	goto bypassresettozero;
dummylabel53:
	// 4713 
	/* cmp RadarMode,NUL_RADAR */
	CMP(radarmode, 0);
	/* je @F */
	if ((dw)(radarmode) == (dw)(0)) {goto dummylabel54;}
	/* jmp BypassResetToZero */
	goto bypassresettozero;
dummylabel54:
	// 4715 
	/* jmp Rubix */
	goto rubix;
resettozero:
	// 4717 
	/* mov MFD_Counter, 0 */
	mfd_counter = 0;
bypassresettozero:
	// 4719 
rubix:
	// 4721 
	/* mov ax, MFD_Counter */
	ax = mfd_counter;
	/* mov NAVIG_MFD.MFD_MODE,ax */
	navig_mfd.mfd_mode = ax;
	/* jmp CheckNext */
	goto checknext;
	// 0 ;----------------------------------
	// 0 ;* test for TAB2 switched on or not
	// 0 ;----------------------------------
testofortab2:
	// 4723 
	/* test TAB2.TAB_STATUS,1 */
	TEST(tab2.tab_status, 1);
	/* jz	@F   ;no -> */
	if (!(tab2.tab_status & 1)) {goto dummylabel55;}
	// 0 ;-----------------------
	// 0 ;* test for damaged TAB2
	// 0 ;-----------------------
	/* mov	bx,TAB2.TAB_SSF_PTR */
	bx = tab2.tab_ssf_ptr;
	/* test	BYTE PTR [bx],1		;display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	@F		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto dummylabel55;}
	/* cmp TAB1.TAB_MODE,TAB_TIALD_ORI  ;Is TV-Tab1 already showing the small TV-Tab-sized TIALD view? */
	CMP(tab1.tab_mode, 12);
	/* je @F       ;yes -> Do NOT view full-screen TIALD view in TAB2! We can't have 2 simulataneous TV-TAB views! */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto dummylabel55;}
	/* mov TAB2.TAB_MODE,TAB_TIALD_ORI */
	tab2.tab_mode = 12;
	/* jmp CheckNext */
	goto checknext;
dummylabel55:
	// 4725 
checknext:
	// 4727 
	/* mov	al,BYTE PTR KF_DispSelect[K_STATUS] */
	al = *(db*)(((db*)&kf_dispselect)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;select active display?
/* m2c-phantom removed: 	R(al = *(db*)(((db*)&kf_dispselect)+k_status););	// 4380 mov	al,BYTE PTR KF_DispSelect[K_STATUS] */
	/* jnz	__m2c_macrolocal_90_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_90_skip;}
	/* jmp	ExitActDisp */
	goto exitactdisp;
__m2c_macrolocal_90_skip:
	// 4729 
	// 0 ;no ->
	// 0 ;---------------------------------------
	// 0 ;* which display is currently has mouse?
	// 0 ;---------------------------------------
	/* test	TAB1.TAB_HAS_MOUSE,1	;does TAB1 have mouse? */
	TEST(tab1.tab_has_mouse, 1);
	/* jnz	SortTAB1		;yes -> */
	if ((tab1.tab_has_mouse & 1) != 0) {goto sorttab1;}
	/* test	TAB2.TAB_HAS_MOUSE,1	;does TAB2 have mouse? */
	TEST(tab2.tab_has_mouse, 1);
	/* jz	__m2c_macrolocal_91_skip */
	if (!(tab2.tab_has_mouse & 1)) {goto __m2c_macrolocal_91_skip;}
	/* jmp	SortTAB2 */
	goto sorttab2;
__m2c_macrolocal_91_skip:
	// 4731 
	// 0 ;yes ->
	// 0 ;---------------------------------------
	// 0 ;* MFD has mouse, pass to TAB2 then TAB1
	// 0 ;---------------------------------------
	// 0 ;* does TAB2 want mouse?
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
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel56;}
	/* mov	NAVIG_MFD.MFD_HAS_MOUSE,0 */
	navig_mfd.mfd_has_mouse = 0;
	/* mov	TAB2.TAB_HAS_MOUSE,1 */
	tab2.tab_has_mouse = 1;
	/* jmp	ExitActDisp */
	goto exitactdisp;
	// 0 ;* does TAB1 want mouse?
dummylabel56:
	// 4733 
	/* @@:		mov	al,TAB1.TAB_STATUS */
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
	/* jnz	__m2c_macrolocal_92_skip */
	if (al != 0) {goto __m2c_macrolocal_92_skip;}
	/* jmp	ExitActDisp */
	goto exitactdisp;
__m2c_macrolocal_92_skip:
	// 4735 
	// 0 ;no ->
	/* mov	NAVIG_MFD.MFD_HAS_MOUSE,0 */
	navig_mfd.mfd_has_mouse = 0;
	/* mov	TAB1.TAB_HAS_MOUSE,1 */
	tab1.tab_has_mouse = 1;
	/* jmp	ExitActDisp */
	goto exitactdisp;
	// 0 ;---------------------------------------
	// 0 ;* TAB1 has mouse, pass to MFD then TAB2
	// 0 ;---------------------------------------
	// 0 ;* does MFD want mouse?
sorttab1:
	// 4737 
	/* mov	al,NAVIG_MFD.MFD_STATUS */
	al = navig_mfd.mfd_status;
	/* and	al,NAVIG_MFD.MFD_REQ_MOUSE	;required and on? */
	AND(al, navig_mfd.mfd_req_mouse);
	/* mov	bx,NAVIG_MFD.MFD_SSF_PTR */
	bx = navig_mfd.mfd_ssf_ptr;
	/* mov	ah,[bx] */
	ah = m2c::getdata(*(raddr(ds,bx)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah		;required and on and not damaged? */
	AND(al, ah);
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel57;}
	/* mov	TAB1.TAB_HAS_MOUSE,0 */
	tab1.tab_has_mouse = 0;
	/* mov	NAVIG_MFD.MFD_HAS_MOUSE,1 */
	navig_mfd.mfd_has_mouse = 1;
	/* jmp	ExitActDisp */
	goto exitactdisp;
	// 0 ;* does TAB2 want mouse?
dummylabel57:
	// 4739 
	/* @@:		mov	al,TAB2.TAB_STATUS */
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
	/* jz	ExitActDisp	;no -> */
	if (al == 0) {goto exitactdisp;}
	/* mov	TAB1.TAB_HAS_MOUSE,0 */
	tab1.tab_has_mouse = 0;
	/* mov	TAB2.TAB_HAS_MOUSE,1 */
	tab2.tab_has_mouse = 1;
	/* jmp	ExitActDisp */
	goto exitactdisp;
	// 0 ;---------------------------------------
	// 0 ;* TAB2 has mouse, pass to TAB1 then MFD
	// 0 ;---------------------------------------
	// 0 ;* does TAB1 want mouse?
sorttab2:
	// 4741 
	/* SortTAB2:	mov	al,TAB1.TAB_STATUS */
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
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel58;}
	/* mov	TAB2.TAB_HAS_MOUSE,0 */
	tab2.tab_has_mouse = 0;
	/* mov	TAB1.TAB_HAS_MOUSE,1 */
	tab1.tab_has_mouse = 1;
	/* jmp	ExitActDisp */
	goto exitactdisp;
	// 0 ;* does MFD want mouse?
dummylabel58:
	// 4743 
	/* @@:		mov	al,NAVIG_MFD.MFD_STATUS */
	al = navig_mfd.mfd_status;
	/* and	al,NAVIG_MFD.MFD_REQ_MOUSE	;required and on? */
	AND(al, navig_mfd.mfd_req_mouse);
	/* mov	bx,NAVIG_MFD.MFD_SSF_PTR */
	bx = navig_mfd.mfd_ssf_ptr;
	/* mov	ah,[bx] */
	ah = m2c::getdata(*(raddr(ds,bx)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah		;required and on and not damaged? */
	AND(al, ah);
	/* jz	ExitActDisp	;no -> */
	if (al == 0) {goto exitactdisp;}
	/* mov	TAB2.TAB_HAS_MOUSE,0 */
	tab2.tab_has_mouse = 0;
	/* mov	NAVIG_MFD.MFD_HAS_MOUSE,1 */
	navig_mfd.mfd_has_mouse = 1;
exitactdisp:
	// 4745 
	/* ret */
	RETN(0);
updateadi2:
	// 4486 
	// 0 ;--------------
	// 0 ;* draw horizon
	// 0 ;--------------
	// 0 ;* set visual view mode for artificial horizon
edummylabel12:
	// 4747 
	/* mov	ax,TV5_VIEWMODE */
	ax = 14;
	/* mov	cx,0 ;72 hack Frankie */
	cx = 0;
	/* mov	bl,174;141 hack Frankie */
	bl = 174;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	cx,M_SinR */
	cx = m_sinr;
	/* mov	dx,M_CosR */
	dx = m_cosr;
	/* mov	al,COL_ADI_GND */
	al = 132;
	/* mov	ah,COL_ADI_SKY */
	ah = 131;
	/* call	UserHorizon */
	CALLF(userhorizon, 0);
	// 0 ;* restore view mode
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jz GoOverHereMann3 */
	if (!(quietercockpit & 1)) {goto gooverheremann3;}
	/* mov	ax,INT_VIEWMODE */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
gooverheremann3:
	// 4749 
	/* mov	ax,EXT_VIEWMODE */
	ax = 4;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
updatestores2:
	// 4525 
	// 0 ;---------------
	// 0 ;* clear display
	// 0 ;---------------
edummylabel13:
	// 4751 
	/* mov	cx,SDISP_X_ORG */
	cx = 128;
	/* mov	bl,SDISP_Y_ORG */
	bl = 148;
	/* mov	dx,SDISP_X_ORG+SDISP_WIDTH-1 */
	dx = 128+64-1;
	/* mov	bh,SDISP_Y_ORG+SDISP_DEPTH-1 */
	bh = 148+47-1;
	/* mov	al,COL_CRT1 */
	al = 160;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;--------------------
	// 0 ;* update blink timer
	// 0 ;--------------------
	/* mov	ax,ArmBlinkTimer */
	ax = armblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel59;}
	/* xor	ArmBlink,1	;toggle blink state */
	XOR(armblink, 1);
	/* mov	ax,ARM_BLINK_TIME */
	ax = 50;
dummylabel59:
	// 4753 
	/* @@:		mov	ArmBlinkTimer,ax */
	armblinktimer = ax;
	// 0 ;-------------------------
	// 0 ;* sort layout wrt variant
	// 0 ;-------------------------
	/* mov	bx,TornadoType */
	bx = tornadotype;
__disp=*(dw*)(((db*)&layoutswitch2)+bx);
	/* jmp	LayoutSwitch2[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
idslayout2:
	// 4755 
ecrlayout2:
	// 4757 
	// 0 ;---------------------------
	// 0 ;----------------------
	// 0 ;* draw seperator lines
	// 0 ;----------------------
	/* mov	cx,128 */
	cx = 128;
	/* mov	dx,191 */
	dx = 191;
	/* mov	bl,167 */
	bl = 167;
	/* mov	al,COL_CRT3 */
	al = 162;
	// 0 ;mov	al,COL_HUD
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,128 */
	cx = 128;
	/* mov	dx,191 */
	dx = 191;
	/* mov	bl,181 */
	bl = 181;
	/* mov	al,COL_CRT3 */
	al = 162;
	// 0 ;mov	al,COL_HUD
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;------------------
	// 0 ;* display packages
	// 0 ;------------------
	/* mov	PrtLn,149 */
	prtln = 149;
	/* mov	cx,NUM_PACKAGES */
	cx = 3;
	/* mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
packageloop2:
	// 4759 
	/* PackageLoop2:  	cmp	[si].PACK_WEAP_TYPE,NULL_WEAPON	;null package? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), -1);
	/* jne	__m2c_macrolocal_93_skip */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(-1)) {goto __m2c_macrolocal_93_skip;}
	/* jmp	SkipPackage2 */
	goto skippackage2;
__m2c_macrolocal_93_skip:
	// 4761 
	// 0 ;yes ->
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	// 0 ;* blink if current package and armed
	/* cmp	si,PackagePtr	;current package? */
	CMP(si, packageptr);
	/* jne	SkipPackBlink2	;no -> */
	if ((dw)(si) != (dw)(packageptr)) {goto skippackblink2;}
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* cmp	ax,ArmMode	;armed? */
	CMP(ax, armmode);
	/* jne	SkipPackBlink2	;no -> */
	if ((dw)(ax) != (dw)(armmode)) {goto skippackblink2;}
	/* test	ArmBlink,1   	;blink on? */
	TEST(armblink, 1);
	/* jnz	__m2c_macrolocal_94_skip */
	if ((armblink & 1) != 0) {goto __m2c_macrolocal_94_skip;}
	/* jmp	NextPackage2 */
	goto nextpackage2;
__m2c_macrolocal_94_skip:
	// 4763 
	// 0 ;no ->
	// 0 ;* hi-lite text if current package
skippackblink2:
	// 4765 
	/* SkipPackBlink2:	mov	PrtCl,128 */
	prtcl = 128;
	/* push	si */
	PUSH(si);
	/* cmp	si,PackagePtr		;current package? */
	CMP(si, packageptr);
	/* mov	si,OFFSET WpnSetUp1$	;assume not */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel60;}
	/* mov	si,OFFSET WpnSetUp2$ */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel60:
	// 4767 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* pop	si */
	POP(si);
	// 0 ;* print target waypoint identifier
	/* mov	al,[si].PACK_WP_ID */
	al = m2c::getdata(*((db*)((db*)&((package*)raddr(ds,si))->pack_wp_id)));
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* add	PrtCl,4 */
	ADD(prtcl, 4);
	// 0 ;* print weapon type
	/* push	si */
	PUSH(si);
	/* mov	si,[si].PACK_WEAP_TYPE */
	si = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* shl	si,1 */
	SHL(si, 1);
	/* shl	si,1 */
	SHL(si, 1);
	/* add	si,OFFSET Weapon$ */
	ADD(si, m2c::near_offset_external(weapondol));
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	al,'x' */
	al = 'x';
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* pop	si */
	POP(si);
	// 0 ;* print number of weapons in package
	/* mov	DecAttr,00010010b	;(unsigned, 2 digits, left justified) */
	decattr = 0x12;
	/* mov	ax,[si].PACK_WEAP_NUM */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* call	PrintDecWord */
	CALLF(printdecword, 0);
	/* mov	DecAttr,00000000b	;(default) */
	decattr = 0x0;
	// 0 ;* print delivery mode (if applicable)
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* mov	si,OFFSET ManBomb$ */
	si = m2c::near_offset_external(manbombdol);
	/* cmp	ax,ARM_MANUAL */
	CMP(ax, 2);
	/* je	@F */
	if ((dw)(ax) == (dw)(2)) {goto dummylabel61;}
	/* mov	si,OFFSET LayBomb$ */
	si = m2c::near_offset_external(laybombdol);
	/* cmp	ax,ARM_LAYDOWN */
	CMP(ax, 4);
	/* je	@F */
	if ((dw)(ax) == (dw)(4)) {goto dummylabel61;}
	/* mov	si,OFFSET LftBomb$ */
	si = m2c::near_offset_external(lftbombdol);
	/* cmp	ax,ARM_LOFT */
	CMP(ax, 6);
	/* je	@F */
	if ((dw)(ax) == (dw)(6)) {goto dummylabel61;}
	/* mov	si,OFFSET LGBBomb$ */
	si = m2c::near_offset_external(lgbbombdol);
	/* cmp	ax,ARM_LGB */
	CMP(ax, 8);
	/* je	@F */
	if ((dw)(ax) == (dw)(8)) {goto dummylabel61;}
	/* mov	si,OFFSET DirAlarm$ */
	si = m2c::near_offset_external(diralarmdol);
	/* cmp	ax,ARM_ALARM_DIR */
	CMP(ax, 12);
	/* je	@F */
	if ((dw)(ax) == (dw)(12)) {goto dummylabel61;}
	/* mov	si,OFFSET IndAlarm$ */
	si = m2c::near_offset_external(indalarmdol);
	/* cmp	ax,ARM_ALARM_IND */
	CMP(ax, 14);
	/* je	@F */
	if ((dw)(ax) == (dw)(14)) {goto dummylabel61;}
	/* jmp	NextPackage2 */
	goto nextpackage2;
dummylabel61:
	// 4769 
	/* @@:		mov	PrtCl,180 */
	prtcl = 180;
	/* call	Print$ */
	CALLF(printdol, 0);
nextpackage2:
	// 4771 
	/* NextPackage2:  	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
skippackage2:
	// 4773 
	/* SkipPackage2:	add	si,PACK_REC_SIZE */
	ADD(si, 8);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_95_skip */
	if (cx == 0) {goto __m2c_macrolocal_95_skip;}
	/* jmp	PackageLoop2 */
	goto packageloop2;
__m2c_macrolocal_95_skip:
	// 4775 
	// 0 ;----------------------------
	// 0 ;* display air-to-air weapons
	// 0 ;----------------------------
	// 0 ;* cannons
	/* mov	PrtLn,169 */
	prtln = 169;
	/* mov	PrtCl,140 */
	prtcl = 140;
	/* cmp	Cannons,0		;any cannons? */
	CMP(cannons, 0);
	/* je	SkipAirWpn1b		;no -> */
	if ((dw)(cannons) == (dw)(0)) {goto skipairwpn1b;}
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel62;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel62;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn1b		;no -> */
	if (!(armblink & 1)) {goto nextairwpn1b;}
dummylabel62:
	// 4777 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel63;}
	/* mov	si,OFFSET WpnSetUp2$	;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel63:
	// 4779 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sidewinders
nextairwpn1b:
	// 4781 
	/* NextAirWpn1b:	add	PrtLn,6 */
	ADD(prtln, 6);
skipairwpn1b:
	// 4783 
	/* SkipAirWpn1b:	mov	PrtCl,144 */
	prtcl = 144;
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn2b			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn2b;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel64;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn2b			;no -> */
	if (!(armblink & 1)) {goto skipairwpn2b;}
dummylabel64:
	// 4785 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel65;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel65:
	// 4787 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;------------------------
	// 0 ;* display chaff / flares
	// 0 ;------------------------
skipairwpn2b:
	// 4789 
	/* SkipAirWpn2b:	mov	PrtLn,183 */
	prtln = 183;
	/* mov	PrtCl,144 ;144 */
	prtcl = 144;
	/* cmp	ChaffCntr,0	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel66;}
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
dummylabel66:
	// 4791 
	/* @@:		mov	PrtCl,144 */
	prtcl = 144;
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel67;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel67:
	// 4793 
	/* @@:		ret */
	RETN(0);
	// 0 ;---------------------------
advlayout2:
	// 4795 
	// 0 ;---------------------------
	// 0 ;---------------------
	// 0 ;* draw seperator line
	// 0 ;---------------------
	// 0 ;mov	cx,128
	// 0 ;mov	dx,191
	// 0 ;mov	bl,175
	// 0 ;mov	al,COL_CRT3
	// 0 ;mov	al,COL_HUD
	// 0 ;call	HLineDraw
	// 0 ;----------------------------
	// 0 ;* display air-to-air weapons
	// 0 ;----------------------------
	// 0 ;* cannons
	/* mov	PrtLn,152 */
	prtln = 152;
	/* mov	PrtCl,140 */
	prtcl = 140;
	/* cmp	Cannons,0		;any cannons? */
	CMP(cannons, 0);
	/* je	SkipAirWpn3b		;no -> */
	if ((dw)(cannons) == (dw)(0)) {goto skipairwpn3b;}
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel68;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel68;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn3b		;no -> */
	if (!(armblink & 1)) {goto nextairwpn3b;}
dummylabel68:
	// 4797 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel69;}
	/* mov	si,OFFSET WpnSetUp2$	;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel69:
	// 4799 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sidewinders
nextairwpn3b:
	// 4801 
	/* NextAirWpn3b:	add	PrtLn,7 */
	ADD(prtln, 7);
skipairwpn3b:
	// 4803 
	/* SkipAirWpn3b:	mov	PrtCl,144 */
	prtcl = 144;
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn4b			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn4b;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel70;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn4b			;no -> */
	if (!(armblink & 1)) {goto nextairwpn4b;}
dummylabel70:
	// 4805 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel71;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel71:
	// 4807 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sky Flash
nextairwpn4b:
	// 4809 
	/* NextAirWpn4b:	add	PrtLn,7 */
	ADD(prtln, 7);
skipairwpn4b:
	// 4811 
	/* SkipAirWpn4b:	mov	PrtCl,140 */
	prtcl = 140;
	/* cmp	ExtStores[EXT_SKYFLASH],0	;any Sky Flash? */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* je	SkipAirWpn5b			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) == (dw)(0)) {goto skipairwpn5b;}
	/* cmp	ArmMode,ARM_SKYFLASH		;armed? */
	CMP(armmode, 20);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(20)) {goto dummylabel72;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn5b			;no -> */
	if (!(armblink & 1)) {goto skipairwpn5b;}
dummylabel72:
	// 4813 
	/* @@:		cmp	AirArmMode,ARM_SKYFLASH		;current air-to-air weapon? */
	CMP(airarmmode, 20);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel73;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel73:
	// 4815 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET SkyFlash$ */
	si = m2c::near_offset_external(skyflashdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;------------------------
	// 0 ;* display chaff / flares
	// 0 ;------------------------
skipairwpn5b:
	// 4817 
	/* SkipAirWpn5b:	add	PrtLn,7 */
	ADD(prtln, 7);
	/* mov	PrtCl,12 */
	prtcl = 12;
	/* cmp	ChaffCntr,0  	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel74;}
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
dummylabel74:
	// 4819 
	/* @@:		mov	PrtCl,12 */
	prtcl = 12;
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel75;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel75:
	// 4821 
	/* @@:		ret */
	RETN(0);
updatestores3:
	// 4826 
	// 0 ;---------------
	// 0 ;* clear display
	// 0 ;---------------
edummylabel14:
	// 4823 
	/* mov	cx,SDISP_X_ORG */
	cx = 128;
	/* mov	bl,SDISP_Y_ORG */
	bl = 148;
	/* mov	dx,SDISP_X_ORG+SDISP_WIDTH-1 */
	dx = 128+64-1;
	/* mov	bh,SDISP_Y_ORG+SDISP_DEPTH-1 */
	bh = 148+47-1;
	// 0 ;mov	al,COL_CRT1
	// 0 ;call	BlockFill
	// 0 ;--------------------
	// 0 ;* update blink timer
	// 0 ;--------------------
	/* mov	ax,ArmBlinkTimer */
	ax = armblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel76;}
	/* xor	ArmBlink,1	;toggle blink state */
	XOR(armblink, 1);
	/* mov	ax,ARM_BLINK_TIME */
	ax = 50;
dummylabel76:
	// 4825 
	/* @@:		mov	ArmBlinkTimer,ax */
	armblinktimer = ax;
	// 0 ;-------------------------
	// 0 ;* sort layout wrt variant
	// 0 ;-------------------------
	/* mov	bx,TornadoType */
	bx = tornadotype;
__disp=*(dw*)(((db*)&layoutswitch3)+bx);
	/* jmp	LayoutSwitch3[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
idslayout3:
	// 4827 
ecrlayout3:
	// 4829 
	// 0 ;---------------------------
	// 0 ;------------------
	// 0 ;* display packages
	// 0 ;------------------
	/* mov	PrtLn,50; */
	prtln = 50;
	/* mov	cx,NUM_PACKAGES */
	cx = 3;
	/* mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
packageloop3:
	// 4831 
	/* PackageLoop3:  	cmp	[si].PACK_WEAP_TYPE,NULL_WEAPON	;null package? */
	CMP(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)), -1);
	/* jne	__m2c_macrolocal_96_skip */
	if ((dw)(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))) != (dw)(-1)) {goto __m2c_macrolocal_96_skip;}
	/* jmp	SkipPackage3 */
	goto skippackage3;
__m2c_macrolocal_96_skip:
	// 4833 
	// 0 ;yes ->
	/* push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	// 0 ;* blink if current package and armed
	/* cmp	si,PackagePtr	;current package? */
	CMP(si, packageptr);
	/* jne	SkipPackBlink3	;no -> */
	if ((dw)(si) != (dw)(packageptr)) {goto skippackblink3;}
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* cmp	ax,ArmMode	;armed? */
	CMP(ax, armmode);
	/* jne	SkipPackBlink3	;no -> */
	if ((dw)(ax) != (dw)(armmode)) {goto skippackblink3;}
	/* test	ArmBlink,1   	;blink on? */
	TEST(armblink, 1);
	/* jnz	__m2c_macrolocal_97_skip */
	if ((armblink & 1) != 0) {goto __m2c_macrolocal_97_skip;}
	/* jmp	NextPackage3 */
	goto nextpackage3;
__m2c_macrolocal_97_skip:
	// 4835 
	// 0 ;no ->
	// 0 ;* hi-lite text if current package
skippackblink3:
	// 4837 
	/* SkipPackBlink3:	mov	PrtCl,1 */
	prtcl = 1;
	/* push	si */
	PUSH(si);
	/* cmp	si,PackagePtr		;current package? */
	CMP(si, packageptr);
	/* mov	si,OFFSET WpnSetUp1$	;assume not */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel77;}
	/* mov	si,OFFSET WpnSetUp2$ */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel77:
	// 4839 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* pop	si */
	POP(si);
	// 0 ;* print target waypoint identifier
	/* mov	al,[si].PACK_WP_ID */
	al = m2c::getdata(*((db*)((db*)&((package*)raddr(ds,si))->pack_wp_id)));
	// 0 ;call	PrintChar
	/* add	PrtCl,4 */
	ADD(prtcl, 4);
	// 0 ;* print weapon type
	/* push	si */
	PUSH(si);
	/* mov	si,[si].PACK_WEAP_TYPE */
	si = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type)));
	/* shl	si,1 */
	SHL(si, 1);
	/* shl	si,1 */
	SHL(si, 1);
	/* add	si,OFFSET Weapon$ */
	ADD(si, m2c::near_offset_external(weapondol));
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	al,'x' */
	al = 'x';
	/* call	PrintChar */
	CALLF(printchar, 0);
	/* pop	si */
	POP(si);
	// 0 ;* print number of weapons in package
	/* mov	DecAttr,00010010b	;(unsigned, 2 digits, left justified) */
	decattr = 0x12;
	/* mov	ax,[si].PACK_WEAP_NUM */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_num)));
	/* call	PrintDecWord */
	CALLF(printdecword, 0);
	/* mov	DecAttr,00000000b	;(default) */
	decattr = 0x0;
	// 0 ;* print delivery mode (if applicable)
	/* mov	ax,[si].PACK_WEAP_MODE */
	ax = m2c::getdata(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_mode)));
	/* mov	si,OFFSET ManBomb$ */
	si = m2c::near_offset_external(manbombdol);
	/* cmp	ax,ARM_MANUAL */
	CMP(ax, 2);
	/* je	@F */
	if ((dw)(ax) == (dw)(2)) {goto dummylabel78;}
	/* mov	si,OFFSET LayBomb$ */
	si = m2c::near_offset_external(laybombdol);
	/* cmp	ax,ARM_LAYDOWN */
	CMP(ax, 4);
	/* je	@F */
	if ((dw)(ax) == (dw)(4)) {goto dummylabel78;}
	/* mov	si,OFFSET LftBomb$ */
	si = m2c::near_offset_external(lftbombdol);
	/* cmp	ax,ARM_LOFT */
	CMP(ax, 6);
	/* je	@F */
	if ((dw)(ax) == (dw)(6)) {goto dummylabel78;}
	/* mov	si,OFFSET LGBBomb$ */
	si = m2c::near_offset_external(lgbbombdol);
	/* cmp	ax,ARM_LGB */
	CMP(ax, 8);
	/* je	@F */
	if ((dw)(ax) == (dw)(8)) {goto dummylabel78;}
	/* mov	si,OFFSET DirAlarm$ */
	si = m2c::near_offset_external(diralarmdol);
	/* cmp	ax,ARM_ALARM_DIR */
	CMP(ax, 12);
	/* je	@F */
	if ((dw)(ax) == (dw)(12)) {goto dummylabel78;}
	/* mov	si,OFFSET IndAlarm$ */
	si = m2c::near_offset_external(indalarmdol);
	/* cmp	ax,ARM_ALARM_IND */
	CMP(ax, 14);
	/* je	@F */
	if ((dw)(ax) == (dw)(14)) {goto dummylabel78;}
	/* jmp	NextPackage2 */
	goto nextpackage2;
dummylabel78:
	// 4841 
	/* @@:		mov	PrtCl,51 */
	prtcl = 51;
	/* call	Print$ */
	CALLF(printdol, 0);
nextpackage3:
	// 4843 
	/* NextPackage3:  	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
skippackage3:
	// 4845 
	/* SkipPackage3:	add	si,PACK_REC_SIZE */
	ADD(si, 8);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_98_skip */
	if (cx == 0) {goto __m2c_macrolocal_98_skip;}
	/* jmp	PackageLoop3 */
	goto packageloop3;
__m2c_macrolocal_98_skip:
	// 4847 
	// 0 ;----------------------------
	// 0 ;* display air-to-air weapons
	// 0 ;----------------------------
	// 0 ;* cannons
	/* mov	PrtLn,70 */
	prtln = 70;
	/* mov	PrtCl,10 */
	prtcl = 10;
	/* cmp	Cannons,0		;any cannons? */
	CMP(cannons, 0);
	/* je	SkipAirWpn1c		;no -> */
	if ((dw)(cannons) == (dw)(0)) {goto skipairwpn1c;}
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel79;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel79;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn1c		;no -> */
	if (!(armblink & 1)) {goto nextairwpn1c;}
dummylabel79:
	// 4849 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel80;}
	/* mov	si,OFFSET WpnSetUp2$	;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel80:
	// 4851 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sidewinders
nextairwpn1c:
	// 4853 
	/* NextAirWpn1c:	add	PrtLn,6 */
	ADD(prtln, 6);
skipairwpn1c:
	// 4855 
	/* SkipAirWpn1c:	mov	PrtCl,12 ;144 */
	prtcl = 12;
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn2c			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn2c;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel81;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn2c			;no -> */
	if (!(armblink & 1)) {goto skipairwpn2c;}
dummylabel81:
	// 4857 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel82;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel82:
	// 4859 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;------------------------
	// 0 ;* display chaff / flares
	// 0 ;------------------------
skipairwpn2c:
	// 4861 
	/* SkipAirWpn2c:	add	PrtLn,7 */
	ADD(prtln, 7);
	/* mov	PrtCl,12 ;144 */
	prtcl = 12;
	/* cmp	ChaffCntr,0	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel83;}
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* add	PrtLn,6 */
	ADD(prtln, 6);
dummylabel83:
	// 4863 
	/* @@:		mov	PrtCl,12 */
	prtcl = 12;
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel84;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel84:
	// 4865 
	/* @@:		ret */
	RETN(0);
	// 0 ;---------------------------
advlayout3:
	// 4867 
	// 0 ;---------------------------
	// 0 ;---------------------
	// 0 ;* draw seperator line
	// 0 ;---------------------
	// 0 ;mov	cx,128
	// 0 ;mov	dx,191
	// 0 ;mov	bl,175
	// 0 ;mov	al,COL_CRT3
	// 0 ;call	HLineDraw
	// 0 ;----------------------------
	// 0 ;* display air-to-air weapons
	// 0 ;----------------------------
	// 0 ;* cannons
	/* mov	PrtLn,52+2 */
	prtln = 52+2;
	/* mov	PrtCl,10 */
	prtcl = 10;
	/* cmp	Cannons,0		;any cannons? */
	CMP(cannons, 0);
	/* je	SkipAirWpn3c		;no -> */
	if ((dw)(cannons) == (dw)(0)) {goto skipairwpn3c;}
	// 0 ;* do not blink when counting down
	/* test	CannonFired,1		;counting down? */
	TEST(cannonfired, 1);
	/* jnz	@F			;yes -> */
	if ((cannonfired & 1) != 0) {goto dummylabel85;}
	/* cmp	ArmMode,ARM_CANNON	;armed? */
	CMP(armmode, 16);
	/* jne	@F			;no -> */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel85;}
	/* test	ArmBlink,1		;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn3c		;no -> */
	if (!(armblink & 1)) {goto nextairwpn3c;}
dummylabel85:
	// 4869 
	/* @@:		cmp	AirArmMode,ARM_CANNON	;current air-to-air weapon? */
	CMP(airarmmode, 16);
	/* mov	si,OFFSET WpnSetUp1$	;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F			;no -> */
	if (!ZF) {goto dummylabel86;}
	/* mov	si,OFFSET WpnSetUp2$	;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel86:
	// 4871 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Cannon$ */
	si = m2c::near_offset_external(cannondol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sidewinders
nextairwpn3c:
	// 4873 
	/* NextAirWpn3c:	add	PrtLn,7 */
	ADD(prtln, 7);
skipairwpn3c:
	// 4875 
	/* SkipAirWpn3c:	mov	PrtCl,10 */
	prtcl = 10;
	/* cmp	ExtStores[EXT_SIDEWINDER],0	;any Sidewinders? */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* je	SkipAirWpn4c			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) == (dw)(0)) {goto skipairwpn4c;}
	/* cmp	ArmMode,ARM_SIDEWINDER		;armed? */
	CMP(armmode, 18);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel87;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	NextAirWpn4c			;no -> */
	if (!(armblink & 1)) {goto nextairwpn4c;}
dummylabel87:
	// 4877 
	/* @@:		cmp	AirArmMode,ARM_SIDEWINDER	;current air-to-air weapon? */
	CMP(airarmmode, 18);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel88;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel88:
	// 4879 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET Sidewinder$ */
	si = m2c::near_offset_external(sidewinderdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* Sky Flash
nextairwpn4c:
	// 4881 
	/* NextAirWpn4c:	add	PrtLn,7 */
	ADD(prtln, 7);
skipairwpn4c:
	// 4883 
	/* SkipAirWpn4c:	mov	PrtCl,10 */
	prtcl = 10;
	/* cmp	ExtStores[EXT_SKYFLASH],0	;any Sky Flash? */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* je	SkipAirWpn5c			;no -> */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) == (dw)(0)) {goto skipairwpn5c;}
	/* cmp	ArmMode,ARM_SKYFLASH		;armed? */
	CMP(armmode, 20);
	/* jne	@F				;no -> */
	if ((dw)(armmode) != (dw)(20)) {goto dummylabel89;}
	/* test	ArmBlink,1			;blink on? */
	TEST(armblink, 1);
	/* jz	SkipAirWpn5c			;no -> */
	if (!(armblink & 1)) {goto skipairwpn5c;}
dummylabel89:
	// 4885 
	/* @@:		cmp	AirArmMode,ARM_SKYFLASH		;current air-to-air weapon? */
	CMP(airarmmode, 20);
	/* mov	si,OFFSET WpnSetUp1$		;assume not (normal) */
	si = m2c::near_offset_external(wpnsetup1dol);
	/* jne	@F */
	if (!ZF) {goto dummylabel90;}
	/* mov	si,OFFSET WpnSetUp2$		;(hi-lite) */
	si = m2c::near_offset_external(wpnsetup2dol);
dummylabel90:
	// 4887 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET SkyFlash$ */
	si = m2c::near_offset_external(skyflashdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;------------------------
	// 0 ;* display chaff / flares
	// 0 ;------------------------
skipairwpn5c:
	// 4889 
	/* SkipAirWpn5c:	add	PrtLn,9 */
	ADD(prtln, 9);
	/* mov	PrtCl,10 */
	prtcl = 10;
	/* cmp	ChaffCntr,0  	;any chaff? */
	CMP(chaffcntr, 0);
	/* je	@F		;no -> */
	if ((dw)(chaffcntr) == (dw)(0)) {goto dummylabel91;}
	/* mov	si,OFFSET Chaff$ */
	si = m2c::near_offset_external(chaffdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* add	PrtLn,7 */
	ADD(prtln, 7);
dummylabel91:
	// 4891 
	/* @@:		mov	PrtCl,10 */
	prtcl = 10;
	/* cmp	FlareCntr,0	;any flares? */
	CMP(flarecntr, 0);
	/* je	@F		;no -> */
	if ((dw)(flarecntr) == (dw)(0)) {goto dummylabel92;}
	/* mov	si,OFFSET Flare$ */
	si = m2c::near_offset_external(flaredol);
	/* call	Print$ */
	CALLF(printdol, 0);
dummylabel92:
	// 4893 
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
                case m2c::k__m2c_macrolocal_52_skip: 	goto __m2c_macrolocal_52_skip;
        case m2c::k__m2c_macrolocal_53_skip: 	goto __m2c_macrolocal_53_skip;
        case m2c::k__m2c_macrolocal_54_skip: 	goto __m2c_macrolocal_54_skip;
        case m2c::k__m2c_macrolocal_55_skip: 	goto __m2c_macrolocal_55_skip;
        case m2c::k__m2c_macrolocal_56_skip: 	goto __m2c_macrolocal_56_skip;
        case m2c::k__m2c_macrolocal_57_skip: 	goto __m2c_macrolocal_57_skip;
        case m2c::k__m2c_macrolocal_58_skip: 	goto __m2c_macrolocal_58_skip;
        case m2c::k__m2c_macrolocal_70_skip: 	goto __m2c_macrolocal_70_skip;
        case m2c::k__m2c_macrolocal_71_skip: 	goto __m2c_macrolocal_71_skip;
        case m2c::k__m2c_macrolocal_72_skip: 	goto __m2c_macrolocal_72_skip;
        case m2c::k__m2c_macrolocal_73_skip: 	goto __m2c_macrolocal_73_skip;
        case m2c::k__m2c_macrolocal_74_skip: 	goto __m2c_macrolocal_74_skip;
        case m2c::k__m2c_macrolocal_75_skip: 	goto __m2c_macrolocal_75_skip;
        case m2c::k__m2c_macrolocal_76_skip: 	goto __m2c_macrolocal_76_skip;
        case m2c::k__m2c_macrolocal_77_skip: 	goto __m2c_macrolocal_77_skip;
        case m2c::k__m2c_macrolocal_78_skip: 	goto __m2c_macrolocal_78_skip;
        case m2c::k__m2c_macrolocal_79_skip: 	goto __m2c_macrolocal_79_skip;
        case m2c::k__m2c_macrolocal_80_skip: 	goto __m2c_macrolocal_80_skip;
        case m2c::k__m2c_macrolocal_81_skip: 	goto __m2c_macrolocal_81_skip;
        case m2c::k__m2c_macrolocal_82_skip: 	goto __m2c_macrolocal_82_skip;
        case m2c::k__m2c_macrolocal_83_skip: 	goto __m2c_macrolocal_83_skip;
        case m2c::k__m2c_macrolocal_84_skip: 	goto __m2c_macrolocal_84_skip;
        case m2c::k__m2c_macrolocal_86_skip: 	goto __m2c_macrolocal_86_skip;
        case m2c::k__m2c_macrolocal_88_skip: 	goto __m2c_macrolocal_88_skip;
        case m2c::k__m2c_macrolocal_90_skip: 	goto __m2c_macrolocal_90_skip;
        case m2c::k__m2c_macrolocal_91_skip: 	goto __m2c_macrolocal_91_skip;
        case m2c::k__m2c_macrolocal_92_skip: 	goto __m2c_macrolocal_92_skip;
        case m2c::k__m2c_macrolocal_93_skip: 	goto __m2c_macrolocal_93_skip;
        case m2c::k__m2c_macrolocal_94_skip: 	goto __m2c_macrolocal_94_skip;
        case m2c::k__m2c_macrolocal_95_skip: 	goto __m2c_macrolocal_95_skip;
        case m2c::k__m2c_macrolocal_96_skip: 	goto __m2c_macrolocal_96_skip;
        case m2c::k__m2c_macrolocal_97_skip: 	goto __m2c_macrolocal_97_skip;
        case m2c::k__m2c_macrolocal_98_skip: 	goto __m2c_macrolocal_98_skip;
        case m2c::kactionstations: 	goto actionstations;
        case m2c::kadvlayout: 	goto advlayout;
        case m2c::kadvlayout2: 	goto advlayout2;
        case m2c::kadvlayout3: 	goto advlayout3;
        case m2c::kafterafter: 	goto afterafter;
        case m2c::kafterskipprtcl180: 	goto afterskipprtcl180;
        case m2c::kairarm: 	goto airarm;
        case m2c::kbacktonavigpanel: 	goto backtonavigpanel;
        case m2c::kbeforeskipairwpn1: 	goto beforeskipairwpn1;
        case m2c::kbothtabsdamagedoroff: 	goto bothtabsdamagedoroff;
        case m2c::kbothtabsundamagedoroff: 	goto bothtabsundamagedoroff;
        case m2c::kbreakthrough: 	goto breakthrough;
        case m2c::kbypassresettozero: 	goto bypassresettozero;
        case m2c::kcallblockfill: 	goto callblockfill;
        case m2c::kcheckifradaltok: 	goto checkifradaltok;
        case m2c::kcheckiftvtab1curractivedisp: 	goto checkiftvtab1curractivedisp;
        case m2c::kchecknext: 	goto checknext;
        case m2c::kcmpmfd_counter10: 	goto cmpmfd_counter10;
        case m2c::kcomeouttohereman: 	goto comeouttohereman;
        case m2c::kdontgoairarm: 	goto dontgoairarm;
        case m2c::kdontskipblink: 	goto dontskipblink;
        case m2c::kdontskipchaffandflares: 	goto dontskipchaffandflares;
        case m2c::kdontskiphlinedraw: 	goto dontskiphlinedraw;
        case m2c::kdontskipprintchar: 	goto dontskipprintchar;
        case m2c::kdontskipprtcl128: 	goto dontskipprtcl128;
        case m2c::kdontskipprtcl180: 	goto dontskipprtcl180;
        case m2c::kdontskipprtln149: 	goto dontskipprtln149;
        case m2c::kdontskipprtln169_prtcl140: 	goto dontskipprtln169_prtcl140;
        case m2c::kdrawadirollbug: 	goto drawadirollbug;
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
        case m2c::kecrlayout: 	goto ecrlayout;
        case m2c::kecrlayout2: 	goto ecrlayout2;
        case m2c::kecrlayout3: 	goto ecrlayout3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitactdisp: 	goto exitactdisp;
        case m2c::kglideok: 	goto glideok;
        case m2c::kgodoit1: 	goto godoit1;
        case m2c::kgooverheremann3: 	goto gooverheremann3;
        case m2c::kgoswitchedoff: 	goto goswitchedoff;
        case m2c::kgotoupdatestores2: 	goto gotoupdatestores2;
        case m2c::kidslayout: 	goto idslayout;
        case m2c::kidslayout2: 	goto idslayout2;
        case m2c::kidslayout3: 	goto idslayout3;
        case m2c::kinitpanel: 	goto initpanel;
        case m2c::klocalok: 	goto localok;
        case m2c::kmorechecks: 	goto morechecks;
        case m2c::kneutral: 	goto neutral;
        case m2c::knextairwpn1: 	goto nextairwpn1;
        case m2c::knextairwpn1b: 	goto nextairwpn1b;
        case m2c::knextairwpn1c: 	goto nextairwpn1c;
        case m2c::knextairwpn3: 	goto nextairwpn3;
        case m2c::knextairwpn3b: 	goto nextairwpn3b;
        case m2c::knextairwpn3c: 	goto nextairwpn3c;
        case m2c::knextairwpn4: 	goto nextairwpn4;
        case m2c::knextairwpn4b: 	goto nextairwpn4b;
        case m2c::knextairwpn4c: 	goto nextairwpn4c;
        case m2c::knextpackage: 	goto nextpackage;
        case m2c::knextpackage2: 	goto nextpackage2;
        case m2c::knextpackage3: 	goto nextpackage3;
        case m2c::knoshakesnavig: 	goto noshakesnavig;
        case m2c::knotskipshakenav0: 	goto notskipshakenav0;
        case m2c::kozark: 	goto ozark;
        case m2c::kpackageloop: 	goto packageloop;
        case m2c::kpackageloop2: 	goto packageloop2;
        case m2c::kpackageloop3: 	goto packageloop3;
        case m2c::kprechecknext: 	goto prechecknext;
        case m2c::kresettozero: 	goto resettozero;
        case m2c::krubix: 	goto rubix;
        case m2c::kselectactdisp: 	goto selectactdisp;
        case m2c::kshowchaffandflares: 	goto showchaffandflares;
        case m2c::kskipairarm: 	goto skipairarm;
        case m2c::kskipairwpn1: 	goto skipairwpn1;
        case m2c::kskipairwpn1b: 	goto skipairwpn1b;
        case m2c::kskipairwpn1c: 	goto skipairwpn1c;
        case m2c::kskipairwpn2: 	goto skipairwpn2;
        case m2c::kskipairwpn2b: 	goto skipairwpn2b;
        case m2c::kskipairwpn2c: 	goto skipairwpn2c;
        case m2c::kskipairwpn3: 	goto skipairwpn3;
        case m2c::kskipairwpn3b: 	goto skipairwpn3b;
        case m2c::kskipairwpn3c: 	goto skipairwpn3c;
        case m2c::kskipairwpn4: 	goto skipairwpn4;
        case m2c::kskipairwpn4b: 	goto skipairwpn4b;
        case m2c::kskipairwpn4c: 	goto skipairwpn4c;
        case m2c::kskipairwpn5: 	goto skipairwpn5;
        case m2c::kskipairwpn5b: 	goto skipairwpn5b;
        case m2c::kskipairwpn5c: 	goto skipairwpn5c;
        case m2c::kskipblink: 	goto skipblink;
        case m2c::kskipblockfill: 	goto skipblockfill;
        case m2c::kskipcannonsadv: 	goto skipcannonsadv;
        case m2c::kskipcflines: 	goto skipcflines;
        case m2c::kskipcheckifradaltok: 	goto skipcheckifradaltok;
        case m2c::kskipcheckiftvtab1curractivedisp: 	goto skipcheckiftvtab1curractivedisp;
        case m2c::kskipcheckm_cosr: 	goto skipcheckm_cosr;
        case m2c::kskipcheckm_cosr2: 	goto skipcheckm_cosr2;
        case m2c::kskipdrawadirollbug: 	goto skipdrawadirollbug;
        case m2c::kskipdrawdebug: 	goto skipdrawdebug;
        case m2c::kskipgotoupdatestores2: 	goto skipgotoupdatestores2;
        case m2c::kskiphlinedraw: 	goto skiphlinedraw;
        case m2c::kskippackage: 	goto skippackage;
        case m2c::kskippackage2: 	goto skippackage2;
        case m2c::kskippackage3: 	goto skippackage3;
        case m2c::kskippackblink: 	goto skippackblink;
        case m2c::kskippackblink2: 	goto skippackblink2;
        case m2c::kskippackblink3: 	goto skippackblink3;
        case m2c::kskippp: 	goto skippp;
        case m2c::kskipprintchar: 	goto skipprintchar;
        case m2c::kskipprtcl128: 	goto skipprtcl128;
        case m2c::kskipprtcl180: 	goto skipprtcl180;
        case m2c::kskipprtcl_10: 	goto skipprtcl_10;
        case m2c::kskipprtln149: 	goto skipprtln149;
        case m2c::kskipprtln149_righttvtab: 	goto skipprtln149_righttvtab;
        case m2c::kskipprtln169_prtcl140: 	goto skipprtln169_prtcl140;
        case m2c::kskipprtln169_prtcl140_righttvtab: 	goto skipprtln169_prtcl140_righttvtab;
        case m2c::kskipshakenav1: 	goto skipshakenav1;
        case m2c::kskipshakenav2: 	goto skipshakenav2;
        case m2c::kskipshakenav3: 	goto skipshakenav3;
        case m2c::kskipskipblink: 	goto skipskipblink;
        case m2c::kskipskipprtcl128: 	goto skipskipprtcl128;
        case m2c::kskipskipprtln149: 	goto skipskipprtln149;
        case m2c::kskipskipprtln169_prtcl140: 	goto skipskipprtln169_prtcl140;
        case m2c::kskiptoprtcl10: 	goto skiptoprtcl10;
        case m2c::ksorttab1: 	goto sorttab1;
        case m2c::ksorttab2: 	goto sorttab2;
        case m2c::ktab1isswitchedoff: 	goto tab1isswitchedoff;
        case m2c::ktab1isswitchedoffz: 	goto tab1isswitchedoffz;
        case m2c::ktab2tialdori: 	goto tab2tialdori;
        case m2c::ktestofortab2: 	goto testofortab2;
        case m2c::ktvtab1damagedoroff: 	goto tvtab1damagedoroff;
        case m2c::ktvtab2damagedoroff: 	goto tvtab2damagedoroff;
        case m2c::kupdateadi: 	goto updateadi;
        case m2c::kupdateadi2: 	goto updateadi2;
        case m2c::kupdatealtimeter: 	goto updatealtimeter;
        case m2c::kupdateclock: 	goto updateclock;
        case m2c::kupdatehsi: 	goto updatehsi;
        case m2c::kupdatenavig: 	goto updatenavig;
        case m2c::kupdatespeed: 	goto updatespeed;
        case m2c::kupdatestores: 	goto updatestores;
        case m2c::kupdatestores2: 	goto updatestores2;
        case m2c::kupdatestores3: 	goto updatestores3;
        default: return __dispatch_call(__disp, _state);
    };
}


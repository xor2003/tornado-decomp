/* THIS IS GENERATED FILE */

        
#include "pilotpan.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updatepilot:
	// 2772 
	// 0 ;mov	IronWork,1
	// 0 ;call CheckForUNNVG
	// 0 ;call CheckForNVG
edummylabel1:
	// 4369 
	/* call	UpdateHUD */
	CALL(updatehud, 0);
	/* call	InitPanel */
	CALL(initpanel, 0);
	/* call    LoadPilotPan */
	CALL(loadpilotpan, 0);
	/* call	UpdateEngRPM */
	CALL(updateengrpm, 0);
	/* call	UpdateEngTemp */
	CALL(updateengtemp, 0);
	/* call	UpdateFuel */
	CALL(updatefuel, 0);
	/* call	UpdateADI */
	CALL(updateadi, 0);
	/* call	UpdateHSI */
	CALL(updatehsi, 0);
	/* call	UpdateGMeter */
	CALL(updategmeter, 0);
	/* call	UpdateCompass */
	CALL(updatecompass, 0);
	/* call	UpdateCtrlSFace */
	CALL(updatectrlsface, 0);
	/* call	UpdateAltimeter */
	CALL(updatealtimeter, 0);
	/* call	UpdateVSI */
	CALL(updatevsi, 0);
	/* call	UpdateSpeed */
	CALL(updatespeed, 0);
	/* call	UpdateRadAlt */
	CALL(updateradalt, 0);
	/* call	UpdateEScope */
	CALL(updateescope, 0);
	/* call	UpdateOxyDolly */
	CALL(updateoxydolly, 0);
	/* call	DrawPilotPanel */
	CALLF(drawpilotpanel, 0);
	/* call	DrawADIRollBug */
	CALL(drawadirollbug, 0);
	/* call	UpdateRWR */
	CALL(updaterwr, 0);
	/* call	UpdatePilotMFD */
	CALL(updatepilotmfd, 0);
	/* cmp	ShakeUp,1 */
	CMP(shakeup, 1);
	/* je	__m2c_macrolocal_22_skip */
	if ((dw)(shakeup) == (dw)(1)) {goto __m2c_macrolocal_22_skip;}
	/* jmp	NoShakes */
	goto noshakes;
__m2c_macrolocal_22_skip:
	// 4371 
	/* call	RandX		; 0.00 ..  2.55 secs */
	CALLF(randx, 0);
	/* cmp	ax,(2*256)/100	;2% chance of random shake in cockpit */
	CMP(ax, (2*256)/100);
	/* jbe	NotSkipShakeCockpit0 */
	if ((dw)(ax) <= (dw)((2*256)/100)) {goto notskipshakecockpit0;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_23_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_23_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
__m2c_macrolocal_23_skip:
	// 4373 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 2811 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 2812 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 2813 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 2814 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2815 mov	ShakeTimer,5 */
	/* ret */
	RETN(0);
notskipshakecockpit0:
	// 4375 
	/* call	RandX */
	CALLF(randx, 0);
	/* cmp	ax,(30*256)/100 */
	CMP(ax, (30*256)/100);
	/* jb SkipShakeCockpit1 */
	if ((dw)(ax) < (dw)((30*256)/100)) {goto skipshakecockpit1;}
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_24_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_24_skip;}
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2823 												mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 2824 						mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 2825 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2826 						mov	ShakeTimer,5 */
__m2c_macrolocal_24_skip:
	// 4377 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2828 						cmp	ShakePriority,SHAKE_LAND_GOOD	 */
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
skipshakecockpit1:
	// 4379 
	/* cmp	ax,(50*256)/100 */
	CMP(ax, (50*256)/100);
	/* jb SkipShakeCockpit2 */
	if ((dw)(ax) < (dw)((50*256)/100)) {goto skipshakecockpit2;}
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_25_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_25_skip;}
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
__m2c_macrolocal_25_skip:
	// 4381 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2844 						cmp	ShakePriority,SHAKE_LAND_GOOD	 */
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2845 mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 2846 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 2847 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2848 mov	ShakeTimer,5 */
	/* ret */
	RETN(0);
skipshakecockpit2:
	// 4383 
	/* cmp	ax,(75*256)/100 */
	CMP(ax, (75*256)/100);
	/* jb SkipShakeCockpit3 */
	if ((dw)(ax) < (dw)((75*256)/100)) {goto skipshakecockpit3;}
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_26_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_26_skip;}
	/* mov	ShakePriority,SHAKE_LAND_GOOD */
	shakepriority = 10;
	/* mov	HShake,HSHAKE_OFF */
	hshake = hshake_off;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,5 */
	shaketimer = 5;
__m2c_macrolocal_26_skip:
	// 4385 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2860 				        cmp	ShakePriority,SHAKE_LAND_GOOD	 */
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2861 mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_off;);	// 2862 mov	HShake,HSHAKE_OFF */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 2863 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2864 mov	ShakeTimer,5 */
	/* ret */
	RETN(0);
skipshakecockpit3:
	// 4387 
	/* cmp	ShakePriority,SHAKE_LAND_GOOD	;;higher SHAKE_LAND_GOOD shake in progress? */
	CMP(shakepriority, 10);
	/* ja	__m2c_macrolocal_27_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(10)) {goto __m2c_macrolocal_27_skip;}
/* m2c-phantom removed: 	R(shakepriority = 10;);	// 2869 				        				        mov	ShakePriority,SHAKE_LAND_GOOD */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 2870 				        mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 2871 				        mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 5;);	// 2872 				        mov	ShakeTimer,5 */
__m2c_macrolocal_27_skip:
	// 4389 
/* m2c-phantom removed: 	R(CMP(shakepriority, 10));	// 2874 				        cmp	ShakePriority,SHAKE_LAND_GOOD	 */
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
noshakes:
	// 4391 
	/* ret */
	RETN(0);
initpanel:
	// 2891 
	/* call	ClearPilotPanel ;* kill: assume all */
	CALLF(clearpilotpanel, 0);
edummylabel2:
	// 4393 
	/* mov	si,OFFSET SetUp$ */
	si = m2c::near_offset_external(setupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
updateengrpm:
	// 2906 
	// 0 ;----------------------------
	// 0 ;* print lh and rh engine rpm
	// 0 ;----------------------------
edummylabel3:
	// 4395 
	/* mov	si,OFFSET Rpm$ */
	si = m2c::near_offset_external(rpmdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;-------------------
	// 0 ;* lhs rpm indicator
	// 0 ;-------------------
	// 2917 XCENTRE		=	221
	// 2918 YCENTRE		=	152
	// 0 ;* index = Rpm1 * (45 / 32768) + 7
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* mov	dx,45 */
	dx = 45;
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
	/* add	si,7 */
	ADD(si, 7);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 221;
	/* mov	bl,YCENTRE */
	bl = 152;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;-------------------
	// 0 ;* rhs rpm indicator
	// 0 ;-------------------
	// 2945 XCENTRE		=	253
	// 2946 YCENTRE		=	152
	// 0 ;* index = Rpm2 * (45 / 32768) + 7
	/* mov	ax,Rpm2 */
	ax = rpm2;
	/* mov	dx,45 */
	dx = 45;
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
	/* add	si,7 */
	ADD(si, 7);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 253;
	/* mov	bl,YCENTRE */
	bl = 152;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updateengtemp:
	// 2980 
	// 0 ;-------------------------
	// 0 ;* engine 1 temp indicator
	// 0 ;-------------------------
	// 2985 XCENTRE		=	221
	// 2986 YCENTRE		=	180
	// 0 ;* index = Temp1 * (82 / 32768) + 8
edummylabel4:
	// 4397 
	/* mov	ax,Temp1 */
	ax = temp1;
	/* mov	dx,82 */
	dx = 82;
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
	/* add	si,8 */
	ADD(si, 8);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 221;
	/* mov	bl,YCENTRE */
	bl = 180;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;-------------------------
	// 0 ;* engine 2 temp indicator
	// 0 ;-------------------------
	// 3013 XCENTRE		=	253
	// 3014 YCENTRE		=	180
	// 0 ;* index = Temp2 * (82 / 32768) + 8
	/* mov	ax,Temp2 */
	ax = temp2;
	/* mov	dx,82 */
	dx = 82;
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
	/* add	si,8 */
	ADD(si, 8);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 253;
	/* mov	bl,YCENTRE */
	bl = 180;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updatefuel:
	// 3049 
	// 0 ;---------------------
	// 0 ;* fuel flow indicator
	// 0 ;---------------------
	// 3054 XCENTRE		=	285
	// 3055 YCENTRE		=	152
	// 0 ;* index = (FuelFlow1 + FuelFlow2) / 2 * (89 / 32768) + 5
edummylabel5:
	// 4399 
	/* mov	ax,FuelFlow1 */
	ax = fuelflow1;
	/* add	ax,FuelFlow2 */
	ADD(ax, fuelflow2);
	/* shr	ax,1 		;/2 */
	SHR(ax, 1);
	/* mov	dx,89 */
	dx = 89;
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
	/* add	si,5 */
	ADD(si, 5);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 285;
	/* mov	bl,YCENTRE */
	bl = 152;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;-----------------------
	// 0 ;* fuel weight indicator
	// 0 ;-----------------------
	// 3084 XCENTRE		=	285
	// 3085 YCENTRE		=	180
	// 0 ;* index = FuelWt * (61 / 32768) + 5
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* mov	dx,61 */
	dx = 61;
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
	/* add	si,5 */
	ADD(si, 5);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 285;
	/* mov	bl,YCENTRE */
	bl = 180;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updateadi:
	// 3119 
	// 0 ;--------------
	// 0 ;* draw horizon
	// 0 ;--------------
	// 0 ;* set visual view mode for artificial horizon
edummylabel6:
	// 4401 
	/* mov	ax,TV5_VIEWMODE */
	ax = 14;
	/* mov	cx,80 */
	cx = 80;
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
	// 0 ;------------
	// 0 ;* draw bezel
	// 0 ;------------
	// 0 ;* //MOD// 12.06.1992 - ADI bezel now drawn in DrawPilotPanel.
	// 0 ;---------------
	// 0 ;* draw roll bug
	// 0 ;---------------
	// 0 ;* //MOD// 12.06.1992 - ADI roll bug now drawn in DrawADIRollBug.
	/* ret */
	RETN(0);
drawadirollbug:
	// 3162 
	// 3163 XCENTRE		=	92
	// 0 ;* kill: assume all
	// 3164 YCENTRE		=	150
	// 0 ;* index = Roll * (3527 / 32768)
edummylabel7:
	// 4403 
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
	cx = 92;
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
	// 3197 
	// 0 ;------------------
	// 0 ;* draw heading bug
	// 0 ;------------------
	// 3202 XCENTRE		=	95
	// 3203 YCENTRE		=	184
	// 0 ;* index = Hdg * (4864 / 32768)
edummylabel8:
	// 4405 
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
	cx = 95;
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
	if (!(ilsactive & 1)) {goto dummylabel1;}
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
	ADD(dx, 95);
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
dummylabel1:
	// 4407 
	/* @@:	  	cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel2;}
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
dummylabel2:
	// 4409 
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
	// 4411 
	/* LocalOk:	cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel3;}
	/* mov	al,COL_GLIDE1 */
	al = 210;
	/* mov	cx,GLIDE_X-1 */
	cx = 78-1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_GLIDE2 */
	al = 216;
	/* mov	cx,GLIDE_X */
	cx = 78;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_GLIDE3 */
	al = 220;
	/* mov	cx,GLIDE_X+1 */
	cx = 78+1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* jmp	GlideOk */
	goto glideok;
dummylabel3:
	// 4413 
	/* @@:		mov	al,COL_NT_GLIDE1 */
	al = 234;
	/* mov	cx,GLIDE_X-1 */
	cx = 78-1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_GLIDE2 */
	al = 235;
	/* mov	cx,GLIDE_X */
	cx = 78;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_NT_GLIDE3 */
	al = 236;
	/* mov	cx,GLIDE_X+1 */
	cx = 78+1;
	/* mov	bl,GlideYPos */
	bl = glideypos;
	/* call	SetPixel */
	CALLF(setpixel, 0);
glideok:
	// 4415 
	/* GlideOk:	ret */
	RETN(0);
updategmeter:
	// 3385 
	// 3386 XCENTRE		=	285
	// 0 ;* kill: assume all
	// 3387 YCENTRE		=	125
	// 0 ;* g = DispGForce - 16
	// 0 ;* if g >= 0 then
	// 0 ;*    index = g / 4 + 14
	// 0 ;* else
	// 0 ;*    index = -g / 4 + 14 (flip y)
	// 0 ;* end
edummylabel9:
	// 4417 
	/* mov	cx,XCENTRE */
	cx = 285;
	/* mov	bl,YCENTRE */
	bl = 125;
	/* mov	si,DispGForce */
	si = dispgforce;
	/* sub	si,16 */
	SUB(si, 16);
	/* js	@F		;g < 0 -> */
	if ((short)(si) < 0) {goto dummylabel4;}
	/* shr	si,1		;/2 */
	SHR(si, 1);
	/* and	si,0fffeh	;/4 (*2 index) */
	AND(si, 0x0fffe);
	/* add	si,14*2 */
	ADD(si, 14*2);
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* jmp	ContGMeter */
	goto contgmeter;
dummylabel4:
	// 4419 
	/* @@:		neg	si */
	NEG(si);
	/* shr	si,1		;/2 */
	SHR(si, 1);
	/* and	si,0fffeh	;/4 (*2 index) */
	AND(si, 0x0fffe);
	/* add	si,14*2 */
	ADD(si, 14*2);
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
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
contgmeter:
	// 4421 
	/* ContGMeter:	mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updatecompass:
	// 3434 
	/* mov	si,OFFSET Compass$ ;* kill: assume all */
	si = m2c::near_offset_external(compassdol);
edummylabel10:
	// 4423 
	/* call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
updatectrlsface:
	// 3450 
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
edummylabel11:
	// 4425 
	/* je	StandardLoc			;yes, pilot -> */
	if (ZF) {goto standardloc;}
	// 0 ;--------------------------
	// 0 ;* flaps position indicator
	// 0 ;--------------------------
	/* mov	si,OFFSET TAB1	;this TAB display */
	si = m2c::near_offset_external(tab1);
	/* mov	di,OFFSET TAB2	;other TAB display */
	di = m2c::near_offset_external(tab2);
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je CustomLocationFlapsSlats */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto customlocationflapsslats;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je CheckPitchLimitOrTabDamaged */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto checkpitchlimitortabdamaged;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je CustomLocationFlapsSlats */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto customlocationflapsslats;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je CheckPitchLimitOrTabDamaged */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto checkpitchlimitortabdamaged;}
	/* cmp	CrewMode,CREW_NAVIG */
	CMP(crewmode, 2);
	/* jne StandardLoc */
	if ((dw)(crewmode) != (dw)(2)) {goto standardloc;}
	/* ret */
	RETN(0);
checkpitchlimitortabdamaged:
	// 4427 
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;minimum alt for TIALD not ok? */
	CMP(trueradalt, 100);
	/* jl RausOut ;no -> */
	if ((short)(trueradalt) < (short)(100)) {goto rausout;}
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	RausOut ;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto rausout;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	RausOut ;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto rausout;}
	/* mov	bx,TAB_SSF_PTR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1 */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_38_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_38_skip;}
	/* jmp	RausOut */
	goto rausout;
__m2c_macrolocal_38_skip:
	// 4429 
	/* mov	bx,TAB_SSF_PTR[di] */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,di))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1		;other TAB display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	RausOut */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto rausout;}
	/* jmp CustomLocationFlapsSlats */
	goto customlocationflapsslats;
rausout:
	// 4431 
	/* RausOut: ret */
	RETN(0);
standardloc:
	// 4433 
	/* StandardLoc: jmp StandardLocation */
	goto standardlocation;
customlocationflapsslats:
	// 4435 
	// 3489 XCENTRE		=	11-5
	// 3490 YCENTRE		=	170-15
	// 0 ;* index = CrntFlapVal * (382 / 32768) = 0 .. 7
	/* mov	ax,CrntFlapVal */
	ax = crntflapval;
	/* mov	dx,382 */
	dx = 382;
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
	cx = 11-5;
	/* mov	bl,YCENTRE */
	bl = 170-15;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,FlapsXY[si+0]	;x offset */
	al = *((flapsxy)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,FlapsXY[si+1]	;y offset */
	ADD(bh, *((flapsxy)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;--------------------------
	// 0 ;* slats position indicator
	// 0 ;--------------------------
	// 3516 XCENTRE		=	22-5
	// 3517 YCENTRE		=	170-15
	// 0 ;* index = CrntFlapPos = 0 .. 3
	/* mov	al,CrntFlapPos */
	al = crntflappos;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 22-5;
	/* mov	bl,YCENTRE */
	bl = 170-15;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,SlatsXY[si+0]	;x offset */
	al = *((slatsxy)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,SlatsXY[si+1]	;y offset */
	ADD(bh, *((slatsxy)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;--------------------------
	// 0 ;* wings position indicator
	// 0 ;--------------------------
	// 3538 XCENTRE		=	26-5
	// 3539 YCENTRE		=	178-15
	// 0 ;* index = CrntWingVal * (5d15 / 32768)
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* mov	dx,515 */
	dx = 515;
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
	cx = 26-5;
	/* mov	bl,YCENTRE */
	bl = 178-15;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,WingsXY[si+0]	;x offset */
	al = *((wingsxy)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,WingsXY[si+1]	;y offset */
	ADD(bh, *((wingsxy)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;---------------------
	// 0 ;* airbrakes indicator
	// 0 ;---------------------
	// 3565 XCENTRE		=	11-5
	// 3566 YCENTRE		=	180-15
	/* mov	cx,XCENTRE */
	cx = 11-5;
	/* mov	bl,YCENTRE */
	bl = 180-15;
	/* mov	dx,XCENTRE-3	;assume airbrakes in */
	dx = (11-5)-3;
	/* mov	bh,YCENTRE+4 */
	bh = (180-15)+4;
	/* test	AirBrakes,1	;airbrakes in? */
	TEST(airbrakes, 1);
	/* jz	@F		;yes -> */
	if (!(airbrakes & 1)) {goto dummylabel5;}
	/* mov	dx,XCENTRE-5	;airbrakes out */
	dx = (11-5)-5;
	/* mov	bh,YCENTRE+2 */
	bh = (180-15)+2;
dummylabel5:
	// 4437 
	/* @@:		mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
standardlocation:
	// 4439 
	// 3579 XCENTRE		=	11
	// 3580 YCENTRE		=	170
	// 0 ;* index = CrntFlapVal * (382 / 32768) = 0 .. 7
	/* mov	ax,CrntFlapVal */
	ax = crntflapval;
	/* mov	dx,382 */
	dx = 382;
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
	cx = 11;
	/* mov	bl,YCENTRE */
	bl = 170;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,FlapsXY[si+0]	;x offset */
	al = *((flapsxy)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,FlapsXY[si+1]	;y offset */
	ADD(bh, *((flapsxy)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;--------------------------
	// 0 ;* slats position indicator
	// 0 ;--------------------------
	// 3606 XCENTRE		=	22
	// 3607 YCENTRE		=	170
	// 0 ;* index = CrntFlapPos = 0 .. 3
	/* mov	al,CrntFlapPos */
	al = crntflappos;
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	si,ax */
	si = ax;
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 22;
	/* mov	bl,YCENTRE */
	bl = 170;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,SlatsXY[si+0]	;x offset */
	al = *((slatsxy)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,SlatsXY[si+1]	;y offset */
	ADD(bh, *((slatsxy)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;--------------------------
	// 0 ;* wings position indicator
	// 0 ;--------------------------
	// 3628 XCENTRE		=	26
	// 3629 YCENTRE		=	178
	// 0 ;* index = CrntWingVal * (5d15 / 32768)
	/* mov	ax,CrntWingVal */
	ax = crntwingval;
	/* mov	dx,515 */
	dx = 515;
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
	cx = 26;
	/* mov	bl,YCENTRE */
	bl = 178;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,WingsXY[si+0]	;x offset */
	al = *((wingsxy)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,WingsXY[si+1]	;y offset */
	ADD(bh, *((wingsxy)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	// 0 ;---------------------
	// 0 ;* airbrakes indicator
	// 0 ;---------------------
	// 3655 XCENTRE		=	11
	// 3656 YCENTRE		=	180
	/* mov	cx,XCENTRE */
	cx = 11;
	/* mov	bl,YCENTRE */
	bl = 180;
	/* mov	dx,XCENTRE-3	;assume airbrakes in */
	dx = 11-3;
	/* mov	bh,YCENTRE+4 */
	bh = 180+4;
	/* test	AirBrakes,1	;airbrakes in? */
	TEST(airbrakes, 1);
	/* jz	@F		;yes -> */
	if (!(airbrakes & 1)) {goto dummylabel6;}
	/* mov	dx,XCENTRE-5	;airbrakes out */
	dx = 11-5;
	/* mov	bh,YCENTRE+2 */
	bh = 180+2;
dummylabel6:
	// 4441 
	/* @@:		mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updatealtimeter:
	// 3678 
	// 0 ;---------------------------
	// 0 ;* print barometric altitude (to 100ft resolution)
	// 0 ;---------------------------
edummylabel12:
	// 4443 
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
	// 3694 XCENTRE		=	53
	// 3695 YCENTRE		=	185
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
	cx = 53;
	/* mov	bl,YCENTRE */
	bl = 185;
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
	// 3724 XCENTRE		=	53
	// 3725 YCENTRE		=	185
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
	cx = 53;
	/* mov	bl,YCENTRE */
	bl = 185;
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
updatevsi:
	// 3763 
	// 3764 XCENTRE		=	19
	// 0 ;* kill: assume all
	// 3765 YCENTRE		=	153
	// 0 ;* index = DispVSI * (1311 / 32768) + 14
edummylabel13:
	// 4445 
	/* mov	ax,DispVSI */
	ax = dispvsi;
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(vsi)
	/* mov	bp,dx		;bp = sign(vsi) */
	bp = dx;
	/* cmp	ax,675		;> meter fsd? */
	CMP(ax, 675);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(675)) {goto dummylabel7;}
	/* mov	ax,675		;limit to fsd */
	ax = 675;
dummylabel7:
	// 4447 
	/* @@:		mov	dx,1311 */
	dx = 1311;
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
	/* add	si,14 */
	ADD(si, 14);
	/* shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 19;
	/* mov	bl,YCENTRE */
	bl = 153;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* mov	al,DialXY1[si+1]	;y offset */
	al = *((&dialxy1)+si+1);
	/* cbw */
	CBW;
	/* xor	ax,bp		;flip y if -vsi */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* add	bh,al */
	ADD(bh, al);
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updatespeed:
	// 3811 
	// 3812 XCENTRE		=	53
	// 0 ;* kill: assume all
	// 3813 YCENTRE		=	155
	// 0 ;-------------------
	// 0 ;* print mach number
	// 0 ;-------------------
edummylabel14:
	// 4449 
	/* mov	ax,DispMachNum */
	ax = dispmachnum;
	/* aam			;ah = integer, al = fraction */
	AAM;
	// 0 ;* print "d.d"
	/* mov	PrtCl,XCENTRE-5 */
	prtcl = 53-5;
	/* mov	PrtLn,YCENTRE+1 */
	prtln = 155+1;
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
	if ((dw)(ax) <= (dw)(850)) {goto dummylabel8;}
	/* mov	ax,850		;limit to fsd */
	ax = 850;
dummylabel8:
	// 4451 
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
	cx = 53;
	/* mov	bl,YCENTRE */
	bl = 155;
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
updateradalt:
	// 3870 
	// 3871 XCENTRE		=	49
	// 0 ;* kill: assume all
	// 3872 YCENTRE		=	127
	// 0 ;* if DispRadAlt < 1000 then
	// 0 ;*    index = DispRadAlt * (983 / 32768) + 5
	// 0 ;* else
	// 0 ;*    index = (DispRadAlt - 1000) * (131 / 32768) + 35
	// 0 ;* end
edummylabel15:
	// 4453 
	/* mov	ax,DispRadAlt	;limit to 5,000ft */
	ax = dispradalt;
	/* cmp	ax,5000 */
	CMP(ax, 5000);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(5000)) {goto dummylabel9;}
	/* mov	ax,5000 */
	ax = 5000;
dummylabel9:
	// 4455 
	/* @@:		cmp	ax,1000		;<= 1,000ft? */
	CMP(ax, 1000);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(1000)) {goto dummylabel10;}
	// 0 ;* radar alt <= 1,000ft
	/* mov	dx,983 */
	dx = 983;
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
	/* add	si,5 */
	ADD(si, 5);
	/* jmp	RadAltOk */
	goto radaltok;
	// 0 ;* radar alt > 1,000ft
dummylabel10:
	// 4457 
	/* @@:		sub	ax,1000		;DispRadAlt - 1000 */
	SUB(ax, 1000);
	/* mov	dx,131 */
	dx = 131;
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
	/* add	si,35 */
	ADD(si, 35);
radaltok:
	// 4459 
	/* RadAltOk:	shl	si,1		;*2 index */
	SHL(si, 1);
	/* mov	cx,XCENTRE */
	cx = 49;
	/* mov	bl,YCENTRE */
	bl = 127;
	/* mov	dx,cx */
	dx = cx;
	/* mov	al,DialXY1[si+0]	;x offset */
	al = *((&dialxy1)+si+0);
	/* cbw */
	CBW;
	/* add	dx,ax */
	ADD(dx, ax);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,DialXY1[si+1]	;y offset */
	ADD(bh, *((&dialxy1)+si+1));
	/* mov	al,COL_NEEDLE */
	al = 128;
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* ret */
	RETN(0);
updateescope:
	// 3928 
	// 0 ;* kill: assume all
	// 0 ;* check IDS / ECR
edummylabel16:
	// 4461 
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne	__m2c_macrolocal_50_skip */
	if ((dw)(tornadotype) != (dw)(2)) {goto __m2c_macrolocal_50_skip;}
	/* jmp	ExitEScope */
	goto exitescope;
__m2c_macrolocal_50_skip:
	// 4463 
	// 0 ;* clear display
	/* mov	cx,ESCOPE_X */
	cx = 72;
	/* mov	bl,ESCOPE_Y */
	bl = 111;
	/* mov	dx,ESCOPE_X+ESCOPE_WIDTH-1 */
	dx = 72+32-1;
	/* mov	bh,ESCOPE_Y+ESCOPE_DEPTH-1 */
	bh = 111+20-1;
	/* mov	al,COL_CRT1 */
	al = 160;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;* check alt < 5,000ft
	/* cmp	ZftHi,0		;alt < 65,535ft? */
	CMP(zfthi, 0);
	/* ja	@F		;no -> */
	if ((dw)(zfthi) > (dw)(0)) {goto dummylabel11;}
	/* cmp	ZftLo,5000	;alt < 5,000ft? */
	CMP(zftlo, 5000);
	/* jb	AltOk		;yes -> */
	if ((dw)(zftlo) < (dw)(5000)) {goto altok;}
dummylabel11:
	// 4465 
	/* @@:		jmp	EtchDatum */
	goto etchdatum;
altok:
	// 4467 
	/* AltOk:	     	xor	bx,bx		;index */
	XOR(bx, bx);
	/* mov	cx,32		;number of ground height samples */
	cx = 32;
gndhtloop:
	// 4469 
	/* GndHtLoop:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	// 0 ;* draw ground height trace
	// 0 ;* x pos = -cx (32 .. 1) + ESCOPE_X + ESCOPE_WIDTH
	/* neg	cx */
	NEG(cx);
	/* add	cx,ESCOPE_X+ESCOPE_WIDTH */
	ADD(cx, 72+32);
	// 0 ;* y pos = (alt - ground height) / 64 + ESCOPE_Y + ESCOPE_DATUM + 1
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,GndHtData[bx] */
	SUB(ax, *(dw*)(((db*)&gndhtdata)+bx));
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
	/* add	ax,ESCOPE_Y+ESCOPE_DATUM+1 */
	ADD(ax, 111+6+1);
	/* cmp	ax,ESCOPE_Y	;trace above display? */
	CMP(ax, 111);
	/* jge	@F		;no -> */
	if ((short)(ax) >= (short)(111)) {goto dummylabel12;}
	/* mov	bl,ESCOPE_Y-1	;set y for full noise */
	bl = 111-1;
	/* jmp	DrawNoise */
	goto drawnoise;
dummylabel12:
	// 4471 
	/* @@:		cmp	ax,ESCOPE_Y+ESCOPE_DEPTH-1	;trace below display? */
	CMP(ax, 111+20-1);
	/* jg	SkipTrace			;yes -> */
	if ((short)(ax) > (short)(111+20-1)) {goto skiptrace;}
	/* mov	bl,al */
	bl = al;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw noise under trace (if any)
drawnoise:
	// 4473 
	/* DrawNoise:	mov	bh,ESCOPE_Y+ESCOPE_DEPTH-1 */
	bh = 111+20-1;
	/* cmp	bl,bh		;any noise? */
	CMP(bl, bh);
	/* je	SkipTrace	;no -> */
	if ((db)(bl) == (db)(bh)) {goto skiptrace;}
	/* inc	bl		;y = y + 1 */
	INC(bl);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
skiptrace:
	// 4475 
	/* SkipTrace: 	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next index */
	ADD(bx, 2);
	/* loop	GndHtLoop */
	LOOP(gndhtloop);
	// 0 ;* etch aircraft datum
etchdatum:
	// 4477 
	/* EtchDatum:	mov	al,COL_CRT16 */
	al = 175;
	/* mov	cx,ESCOPE_X */
	cx = 72;
	/* mov	bl,ESCOPE_Y+ESCOPE_DATUM */
	bl = 111+6;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* mov	cx,ESCOPE_X+1 */
	cx = 72+1;
	/* mov	bl,ESCOPE_Y+ESCOPE_DATUM */
	bl = 111+6;
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitescope:
	// 4479 
	/* ExitEScope:	ret */
	RETN(0);
updateescope2:
	// 4023 
	// 0 ;0, 72
	// 0 ;* check IDS / ECR
edummylabel17:
	// 4481 
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* jne	__m2c_macrolocal_52_skip */
	if ((dw)(tornadotype) != (dw)(2)) {goto __m2c_macrolocal_52_skip;}
	/* jmp	ExitEScope2 */
	goto exitescope2;
__m2c_macrolocal_52_skip:
	// 4483 
	// 0 ;* clear display
	/* mov	cx,ESCOPE_X_2 */
	cx = 283;
	/* mov	bl,ESCOPE_Y_2 */
	bl = 172;
	/* mov	dx,ESCOPE_X_2+ESCOPE_WIDTH_2-1 */
	dx = 283+32-1;
	/* mov	bh,ESCOPE_Y_2+ESCOPE_DEPTH_2-1 */
	bh = 172+20-1;
	/* mov	al,COL_CRT1 */
	al = 160;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;* check alt < 5,000ft
	/* cmp	ZftHi,0		;alt < 65,535ft? */
	CMP(zfthi, 0);
	/* ja	@F		;no -> */
	if ((dw)(zfthi) > (dw)(0)) {goto dummylabel13;}
	/* cmp	ZftLo,5000	;alt < 5,000ft? */
	CMP(zftlo, 5000);
	/* jb	AltOk2		;yes -> */
	if ((dw)(zftlo) < (dw)(5000)) {goto altok2;}
dummylabel13:
	// 4485 
	/* @@:		jmp	EtchDatum2 */
	goto etchdatum2;
altok2:
	// 4487 
	/* AltOk2:	     	xor	bx,bx		;index */
	XOR(bx, bx);
	/* mov	cx,32		;number of ground height samples */
	cx = 32;
gndhtloop2:
	// 4489 
	/* GndHtLoop2:	push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	// 0 ;* draw ground height trace
	// 0 ;* x pos = -cx (32 .. 1) + ESCOPE_X + ESCOPE_WIDTH
	/* neg	cx */
	NEG(cx);
	/* add	cx,ESCOPE_X_2+ESCOPE_WIDTH_2 */
	ADD(cx, 283+32);
	// 0 ;* y pos = (alt - ground height) / 64 + ESCOPE_Y + ESCOPE_DATUM + 1
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* sub	ax,GndHtData[bx] */
	SUB(ax, *(dw*)(((db*)&gndhtdata)+bx));
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
	/* add	ax,ESCOPE_Y_2+ESCOPE_DATUM_2+1 */
	ADD(ax, 172+6+1);
	/* cmp	ax,ESCOPE_Y_2	;trace above display? */
	CMP(ax, 172);
	/* jge	@F		;no -> */
	if ((short)(ax) >= (short)(172)) {goto dummylabel14;}
	/* mov	bl,ESCOPE_Y_2-1	;set y for full noise */
	bl = 172-1;
	/* jmp	DrawNoise2 */
	goto drawnoise2;
dummylabel14:
	// 4491 
	/* @@:		cmp	ax,ESCOPE_Y_2+ESCOPE_DEPTH_2-1	;trace below display? */
	CMP(ax, 172+20-1);
	/* jg	SkipTrace2			;yes -> */
	if ((short)(ax) > (short)(172+20-1)) {goto skiptrace2;}
	/* mov	bl,al */
	bl = al;
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* draw noise under trace (if any)
drawnoise2:
	// 4493 
	/* DrawNoise2:	mov	bh,ESCOPE_Y_2+ESCOPE_DEPTH_2-1 */
	bh = 172+20-1;
	/* cmp	bl,bh		;any noise? */
	CMP(bl, bh);
	/* je	SkipTrace2	;no -> */
	if ((db)(bl) == (db)(bh)) {goto skiptrace2;}
	/* inc	bl		;y = y + 1 */
	INC(bl);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
skiptrace2:
	// 4495 
	/* SkipTrace2: 	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bx,2		;next index */
	ADD(bx, 2);
	/* loop	GndHtLoop2 */
	LOOP(gndhtloop2);
	// 0 ;* etch aircraft datum
etchdatum2:
	// 4497 
	/* EtchDatum2:	mov	al,COL_CRT16 */
	al = 175;
	/* mov	cx,ESCOPE_X_2 */
	cx = 283;
	/* mov	bl,ESCOPE_Y_2+ESCOPE_DATUM_2 */
	bl = 172+6;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* mov	cx,ESCOPE_X_2+1 */
	cx = 283+1;
	/* mov	bl,ESCOPE_Y_2+ESCOPE_DATUM_2 */
	bl = 172+6;
	/* call	SetPixel */
	CALLF(setpixel, 0);
exitescope2:
	// 4499 
	/* ExitEScope2:	ret */
	RETN(0);
updateoxydolly:
	// 4124 
	/* test	SSF_Oxygen,1	;oxygen system working? */
	TEST(ssf_oxygen, 1);
edummylabel18:
	// 4501 
	/* jnz	ExitOxyDolly	;no -> */
	if (!ZF) {goto exitoxydolly;}
	/* mov	ax,OxyDollyTimer */
	ax = oxydollytimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel15;}
	/* xor	OxyDollyPos,1 */
	XOR(oxydollypos, 1);
	/* mov	ax,OXY_TIME */
	ax = 200;
dummylabel15:
	// 4503 
	/* @@:		mov	OxyDollyTimer,ax */
	oxydollytimer = ax;
exitoxydolly:
	// 4505 
	/* ExitOxyDolly:	ret */
	RETN(0);
updaterwr:
	// 4159 
	// 0 ;----------------------
	// 0 ;* check if RWR damaged
	// 0 ;----------------------
edummylabel19:
	// 4507 
	/* test	SSF_RWR,1 */
	TEST(ssf_rwr, 1);
	/* jnz	RWRExit */
	if ((ssf_rwr & 1) != 0) {goto rwrexit;}
	// 0 ;-----------------------------------
	// 0 ;* draw low priority threat symobols
	// 0 ;-----------------------------------
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* jcxz	RWRExit */
	JCXZ(rwrexit);
	/* mov	bp,OFFSET RWRThreats */
	bp = m2c::near_offset_external(rwrthreats);
rwrloop1:
	// 4509 
	/* RWRLoop1:	mov	si,[bp].RWR_THREAT */
	si = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_threat)));
	/* cmp	RWRLoSymbol[si],-1 */
	CMP(*(dw*)(((db*)&rwrlosymbol)+si), -1);
	/* je	@F */
	if ((dw)(*(dw*)(((db*)&rwrlosymbol)+si)) == (dw)(-1)) {goto dummylabel16;}
	/* push	cx */
	PUSH(cx);
	/* push	bp */
	PUSH(bp);
	/* mov	bp,[bp].RWR_DIR */
	bp = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_dir)));
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* adc	bp,0 */
	ADC(bp, 0);
	// 0 ;0 .. 64
	/* shl	bp,1		;0 .. 128 step 2 */
	SHL(bp, 1);
	/* mov	cx,RWR_CIRCLE_X */
	cx = 236;
	/* mov	bl,RWR_CIRCLE_Y */
	bl = 121;
	/* mov	al,RWRCircle[bp+0]	;x offset */
	al = *((&rwrcircle)+bp+0);
	/* cbw */
	CBW;
	/* add	cx,ax */
	ADD(cx, ax);
	/* add	bl,RWRCircle[bp+1]	;y offset */
	ADD(bl, *((&rwrcircle)+bp+1));
	/* call	RWRLoSymbol[si] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&rwrlosymbol)+si));
	/* pop	bp */
	POP(bp);
	/* pop	cx */
	POP(cx);
dummylabel16:
	// 4511 
	/* @@:		add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	RWRLoop1 */
	LOOP(rwrloop1);
	// 0 ;------------------------------------
	// 0 ;* draw high priority threat symobols
	// 0 ;------------------------------------
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* mov	bp,OFFSET RWRThreats */
	bp = m2c::near_offset_external(rwrthreats);
rwrloop2:
	// 4513 
	/* RWRLoop2:	mov	si,[bp].RWR_THREAT */
	si = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_threat)));
	/* cmp	RWRHiSymbol[si],-1 */
	CMP(*(dw*)(((db*)&rwrhisymbol)+si), -1);
	/* je	@F */
	if ((dw)(*(dw*)(((db*)&rwrhisymbol)+si)) == (dw)(-1)) {goto dummylabel17;}
	/* push	cx */
	PUSH(cx);
	/* push	bp */
	PUSH(bp);
	/* mov	bp,[bp].RWR_DIR */
	bp = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_dir)));
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* adc	bp,0 */
	ADC(bp, 0);
	// 0 ;0 .. 64
	/* shl	bp,1		;0 .. 128 step 2 */
	SHL(bp, 1);
	/* mov	cx,RWR_CIRCLE_X */
	cx = 236;
	/* mov	bl,RWR_CIRCLE_Y */
	bl = 121;
	/* mov	al,RWRCircle[bp+0]	;x offset */
	al = *((&rwrcircle)+bp+0);
	/* cbw */
	CBW;
	/* add	cx,ax */
	ADD(cx, ax);
	/* add	bl,RWRCircle[bp+1]	;y offset */
	ADD(bl, *((&rwrcircle)+bp+1));
	/* call	RWRHiSymbol[si] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&rwrhisymbol)+si));
	/* pop	bp */
	POP(bp);
	/* pop	cx */
	POP(cx);
dummylabel17:
	// 4515 
	/* @@:		add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	RWRLoop2 */
	LOOP(rwrloop2);
rwrexit:
	// 4517 
	/* RWRExit:	ret */
	RETN(0);
updaterwr2:
	// 4243 
	// 0 ;----------------------
	// 0 ;* check if RWR damaged
	// 0 ;----------------------
edummylabel20:
	// 4519 
	/* test	SSF_RWR,1 */
	TEST(ssf_rwr, 1);
	/* jnz	RWRExit2 */
	if ((ssf_rwr & 1) != 0) {goto rwrexit2;}
	// 0 ;-----------------------------------
	// 0 ;* draw low priority threat symobols
	// 0 ;-----------------------------------
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* jcxz	RWRExit2 */
	JCXZ(rwrexit2);
	/* mov	bp,OFFSET RWRThreats */
	bp = m2c::near_offset_external(rwrthreats);
rwrloop12:
	// 4521 
	/* RWRLoop12:	mov	si,[bp].RWR_THREAT */
	si = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_threat)));
	/* cmp	RWRLoSymbol[si],-1 */
	CMP(*(dw*)(((db*)&rwrlosymbol)+si), -1);
	/* je	@F */
	if ((dw)(*(dw*)(((db*)&rwrlosymbol)+si)) == (dw)(-1)) {goto dummylabel18;}
	/* push	cx */
	PUSH(cx);
	/* push	bp */
	PUSH(bp);
	/* mov	bp,[bp].RWR_DIR */
	bp = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_dir)));
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* adc	bp,0 */
	ADC(bp, 0);
	// 0 ;0 .. 64
	/* shl	bp,1		;0 .. 128 step 2 */
	SHL(bp, 1);
	/* mov	cx,RWR_CIRCLE_X */
	cx = 236;
	/* mov	bl,RWR_CIRCLE_Y2 */
	bl = 80;
	/* mov	al,RWRCircle[bp+0]	;x offset */
	al = *((&rwrcircle)+bp+0);
	/* cbw */
	CBW;
	/* add	cx,ax */
	ADD(cx, ax);
	/* add	bl,RWRCircle[bp+1]	;y offset */
	ADD(bl, *((&rwrcircle)+bp+1));
	/* call	RWRLoSymbol[si] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&rwrlosymbol)+si));
	/* pop	bp */
	POP(bp);
	/* pop	cx */
	POP(cx);
dummylabel18:
	// 4523 
	/* @@:		add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	RWRLoop12 */
	LOOP(rwrloop12);
	// 0 ;------------------------------------
	// 0 ;* draw high priority threat symobols
	// 0 ;------------------------------------
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* mov	bp,OFFSET RWRThreats */
	bp = m2c::near_offset_external(rwrthreats);
rwrloop22:
	// 4525 
	/* RWRLoop22:	mov	si,[bp].RWR_THREAT */
	si = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_threat)));
	/* cmp	RWRHiSymbol[si],-1 */
	CMP(*(dw*)(((db*)&rwrhisymbol)+si), -1);
	/* je	@F */
	if ((dw)(*(dw*)(((db*)&rwrhisymbol)+si)) == (dw)(-1)) {goto dummylabel19;}
	/* push	cx */
	PUSH(cx);
	/* push	bp */
	PUSH(bp);
	/* mov	bp,[bp].RWR_DIR */
	bp = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,bp))->rwr_dir)));
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* shr	bp,1		;0 .. 63 */
	SHR(bp, 1);
	/* adc	bp,0 */
	ADC(bp, 0);
	// 0 ;0 .. 64
	/* shl	bp,1		;0 .. 128 step 2 */
	SHL(bp, 1);
	/* mov	cx,RWR_CIRCLE_X */
	cx = 236;
	/* mov	bl,RWR_CIRCLE_Y2 */
	bl = 80;
	/* mov	al,RWRCircle[bp+0]	;x offset */
	al = *((&rwrcircle)+bp+0);
	/* cbw */
	CBW;
	/* add	cx,ax */
	ADD(cx, ax);
	/* add	bl,RWRCircle[bp+1]	;y offset */
	ADD(bl, *((&rwrcircle)+bp+1));
	/* call	RWRHiSymbol[si] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&rwrhisymbol)+si));
	/* pop	bp */
	POP(bp);
	/* pop	cx */
	POP(cx);
dummylabel19:
	// 4527 
	/* @@:		add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	RWRLoop22 */
	LOOP(rwrloop22);
rwrexit2:
	// 4529 
	/* RWRExit2:	ret */
	RETN(0);
samsymbol:
	// 4325 
	/* push	bx ;* kill: assume all */
	PUSH(bx);
edummylabel21:
	// 4531 
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4335 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4344 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4353 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4362 						call	SetPixel */
	/* ret */
	RETN(0);
aaasymbol:
	// 4374 
	/* push	bx ;* kill: assume all */
	PUSH(bx);
edummylabel22:
	// 4533 
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4384 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4393 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4402 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4411 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4420 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4429 						call	SetPixel */
	/* ret */
	RETN(0);
ewrsymbol:
	// 4441 
	/* push	bx ;* kill: assume all */
	PUSH(bx);
edummylabel23:
	// 4535 
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4451 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4460 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4469 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4478 						call	SetPixel */
	/* ret */
	RETN(0);
acsymbol:
	// 4490 
	/* push	bx ;* kill: assume all */
	PUSH(bx);
edummylabel24:
	// 4537 
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4500 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4509 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4518 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4527 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4536 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4545 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4554 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_CRT16 */
	al = 175;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4563 						call	SetPixel */
	/* ret */
	RETN(0);
mslsymbol1:
	// 4575 
	/* push	bx ;* kill: assume all */
	PUSH(bx);
edummylabel25:
	// 4539 
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_RAD_MISS */
	al = 158;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4585 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_RAD_MISS */
	al = 158;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4594 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_RAD_MISS */
	al = 158;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4603 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_RAD_MISS */
	al = 158;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4612 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_RAD_MISS */
	al = 158;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4621 						call	SetPixel */
	/* ret */
	RETN(0);
mslsymbol2:
	// 4633 
	/* push	bx ;* kill: assume all */
	PUSH(bx);
edummylabel26:
	// 4541 
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,-1 */
	ADD(bl, -1);
	/* mov	al,COL_IR_MISS */
	al = 159;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4643 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_IR_MISS */
	al = 159;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4652 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_IR_MISS */
	al = 159;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4661 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* add	bl,0 */
	ADD(bl, 0);
	/* mov	al,COL_IR_MISS */
	al = 159;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4670 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* add	bl,1 */
	ADD(bl, 1);
	/* mov	al,COL_IR_MISS */
	al = 159;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4679 						call	SetPixel */
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
                case m2c::k__m2c_macrolocal_22_skip: 	goto __m2c_macrolocal_22_skip;
        case m2c::k__m2c_macrolocal_23_skip: 	goto __m2c_macrolocal_23_skip;
        case m2c::k__m2c_macrolocal_24_skip: 	goto __m2c_macrolocal_24_skip;
        case m2c::k__m2c_macrolocal_25_skip: 	goto __m2c_macrolocal_25_skip;
        case m2c::k__m2c_macrolocal_26_skip: 	goto __m2c_macrolocal_26_skip;
        case m2c::k__m2c_macrolocal_27_skip: 	goto __m2c_macrolocal_27_skip;
        case m2c::k__m2c_macrolocal_38_skip: 	goto __m2c_macrolocal_38_skip;
        case m2c::k__m2c_macrolocal_50_skip: 	goto __m2c_macrolocal_50_skip;
        case m2c::k__m2c_macrolocal_52_skip: 	goto __m2c_macrolocal_52_skip;
        case m2c::kaaasymbol: 	goto aaasymbol;
        case m2c::kacsymbol: 	goto acsymbol;
        case m2c::kaltok: 	goto altok;
        case m2c::kaltok2: 	goto altok2;
        case m2c::kcheckpitchlimitortabdamaged: 	goto checkpitchlimitortabdamaged;
        case m2c::kcontgmeter: 	goto contgmeter;
        case m2c::kcustomlocationflapsslats: 	goto customlocationflapsslats;
        case m2c::kdrawadirollbug: 	goto drawadirollbug;
        case m2c::kdrawnoise: 	goto drawnoise;
        case m2c::kdrawnoise2: 	goto drawnoise2;
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
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
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
        case m2c::ketchdatum: 	goto etchdatum;
        case m2c::ketchdatum2: 	goto etchdatum2;
        case m2c::kewrsymbol: 	goto ewrsymbol;
        case m2c::kexitescope: 	goto exitescope;
        case m2c::kexitescope2: 	goto exitescope2;
        case m2c::kexitoxydolly: 	goto exitoxydolly;
        case m2c::kglideok: 	goto glideok;
        case m2c::kgndhtloop: 	goto gndhtloop;
        case m2c::kgndhtloop2: 	goto gndhtloop2;
        case m2c::kinitpanel: 	goto initpanel;
        case m2c::klocalok: 	goto localok;
        case m2c::kmslsymbol1: 	goto mslsymbol1;
        case m2c::kmslsymbol2: 	goto mslsymbol2;
        case m2c::knoshakes: 	goto noshakes;
        case m2c::knotskipshakecockpit0: 	goto notskipshakecockpit0;
        case m2c::kradaltok: 	goto radaltok;
        case m2c::krausout: 	goto rausout;
        case m2c::krwrexit: 	goto rwrexit;
        case m2c::krwrexit2: 	goto rwrexit2;
        case m2c::krwrloop1: 	goto rwrloop1;
        case m2c::krwrloop12: 	goto rwrloop12;
        case m2c::krwrloop2: 	goto rwrloop2;
        case m2c::krwrloop22: 	goto rwrloop22;
        case m2c::ksamsymbol: 	goto samsymbol;
        case m2c::kskipshakecockpit1: 	goto skipshakecockpit1;
        case m2c::kskipshakecockpit2: 	goto skipshakecockpit2;
        case m2c::kskipshakecockpit3: 	goto skipshakecockpit3;
        case m2c::kskiptrace: 	goto skiptrace;
        case m2c::kskiptrace2: 	goto skiptrace2;
        case m2c::kstandardloc: 	goto standardloc;
        case m2c::kstandardlocation: 	goto standardlocation;
        case m2c::kupdateadi: 	goto updateadi;
        case m2c::kupdatealtimeter: 	goto updatealtimeter;
        case m2c::kupdatecompass: 	goto updatecompass;
        case m2c::kupdatectrlsface: 	goto updatectrlsface;
        case m2c::kupdateengrpm: 	goto updateengrpm;
        case m2c::kupdateengtemp: 	goto updateengtemp;
        case m2c::kupdateescope: 	goto updateescope;
        case m2c::kupdateescope2: 	goto updateescope2;
        case m2c::kupdatefuel: 	goto updatefuel;
        case m2c::kupdategmeter: 	goto updategmeter;
        case m2c::kupdatehsi: 	goto updatehsi;
        case m2c::kupdateoxydolly: 	goto updateoxydolly;
        case m2c::kupdatepilot: 	goto updatepilot;
        case m2c::kupdateradalt: 	goto updateradalt;
        case m2c::kupdaterwr: 	goto updaterwr;
        case m2c::kupdaterwr2: 	goto updaterwr2;
        case m2c::kupdatespeed: 	goto updatespeed;
        case m2c::kupdatevsi: 	goto updatevsi;
        default: return __dispatch_call(__disp, _state);
    };
}


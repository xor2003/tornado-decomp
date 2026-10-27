/* THIS IS GENERATED FILE */

        
#include "horizon.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
userhorizon:
	// 1058 
	/* push	V_SinR ;* kill: assume all */
	PUSH(v_sinr);
edummylabel1:
	// 4369 
	/* push	V_CosR */
	PUSH(v_cosr);
	/* push	V_VIEW.VP_PITCH */
	PUSH(v_view.vp_pitch);
	/* push	V_VIEW.VP_ROLL */
	PUSH(v_view.vp_roll);
	/* push	GndSkyCols */
	PUSH(gndskycols);
	/* push	WORD PTR GradEnabled */
	PUSH(*(dw*)(gradenabled));
	/* mov	GndSkyCols,ax */
	gndskycols = ax;
	/* mov	V_SinR,cx */
	v_sinr = cx;
	/* mov	V_CosR,dx */
	v_cosr = dx;
	/* mov	ax,VP_ROLL[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_roll)));
	/* mov	V_VIEW.VP_ROLL,ax */
	v_view.vp_roll = ax;
	/* mov	ax,VP_PITCH[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,si))->vp_pitch)));
	/* mov	V_VIEW.VP_PITCH,ax */
	v_view.vp_pitch = ax;
	/* mov	GradEnabled,0 */
	*(gradenabled) = 0;
	/* call	IntoHorizon */
	CALL(_group1, m2c::kintohorizon);
	/* pop	WORD PTR GradEnabled */
	POP(*(dw*)(gradenabled));
	/* pop	GndSkyCols */
	POP(gndskycols);
	/* pop	V_VIEW.VP_ROLL */
	POP(v_view.vp_roll);
	/* pop	V_VIEW.VP_PITCH */
	POP(v_view.vp_pitch);
	/* pop	V_CosR */
	POP(v_cosr);
	/* pop	V_SinR */
	POP(v_sinr);
	/* ret */
	RETF(0);
drawhorizon:
	// 1094 
	// 0 ;* reset fade level and range
edummylabel2:
	// 4371 
	/* mov	FadeLevel1,0 */
	fadelevel1 = 0;
	/* mov	FadeStart1,FOG_COL_START */
	fadestart1 = 8;
	/* mov	FadeCount1,FOG_COL_COUNT */
	fadecount1 = 104;
	// 0 ;* sort overcast sky (wrt CloudMode)
	/* test	Overcast,1	;overcast? */
	TEST(*(overcast), 1);
	/* jnz	__m2c_macrolocal_1_skip */
	if ((*(overcast) & 1) != 0) {goto __m2c_macrolocal_1_skip;}
	/* jmp	PolyCloudFade */
	goto polycloudfade;
__m2c_macrolocal_1_skip:
	// 4373 
	// 0 ;no ->
	/* mov	bx,CloudMode */
	bx = cloudmode;
__disp=*(dw*)(((db*)&skyswitch)+bx);
	/* jmp	SkySwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
belowclouds:
	// 4375 
	// 0 ;---------------------------
	/* mov	si,OFFSET VGA_GND1 */
	si = m2c::near_offset_external(vga_gnd1);
	/* call	SortRGBGnd */
	CALL(sortrgbgnd, 0);
	/* mov	si,OFFSET VGA_SKY2 */
	si = m2c::near_offset_external(vga_sky2);
	/* call	SortRGBSky */
	CALL(sortrgbsky, 0);
	// 0 ;* if (cloud base - zft) < 512ft then fade to grey cloud
	// 0 ;*
	// 0 ;* fade level = not((cloud base - zft) / 4) and 07fh
	/* mov	ax,WORD PTR CloudBase */
	ax = *(dw*)(&cloudbase);
	/* mov	dx,WORD PTR CloudBase+2 */
	dx = *(dw*)(((db*)&cloudbase)+2);
	/* sub	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&v_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&v_view+vp_zft_hi)));
	/* test	dx,dx		;(cloud base - zft) < 65536? */
	TEST(dx, dx);
	/* jnz	SortFog		;no -> */
	if ((dx & dx) != 0) {goto sortfog;}
	/* cmp	ax,512		;(cloud base - zft) < 512? */
	CMP(ax, 512);
	/* jae	SortFog		;no -> */
	if ((dw)(ax) >= (dw)(512)) {goto sortfog;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* not	al		;127 .. 0 */
	al = ~al;
	/* and	al,07fh */
	AND(al, 0x07f);
	// 0 ;* if Fog = 1 then FadeLevel1 = FadeLevel1 / 2 + 64 (64 .. 127)
	/* cmp	Fog,1		;light fog? */
	CMP(*(fog), 1);
	/* jne	@F		;no -> */
	if ((dw)(*(fog)) != (dw)(1)) {goto dummylabel1;}
	/* shr	al,1		;/2 */
	SHR(al, 1);
	/* add	al,64 */
	ADD(al, 64);
	/* jmp	FadeOk */
	goto fadeok;
	// 0 ;* if Fog = 2 then FadeLevel1 = FadeLevel1 / 4 + 96 (96 .. 127)
dummylabel1:
	// 4377 
	/* @@:		cmp	Fog,2		;pea souper? */
	CMP(*(fog), 2);
	/* jne	FadeOk		;no -> */
	if ((dw)(*(fog)) != (dw)(2)) {goto fadeok;}
	/* shr	al,1		;/2 */
	SHR(al, 1);
	/* shr	al,1		;/4 */
	SHR(al, 1);
	/* add	al,96 */
	ADD(al, 96);
fadeok:
	// 4379 
	/* FadeOk:		mov	FadeLevel1,al */
	fadelevel1 = al;
	/* mov	al,R_GREY_CLOUD */
	al = r_grey_cloud;
	/* mov	FadeRCol1,al */
	fadercol1 = al;
	/* mov	al,G_GREY_CLOUD */
	al = g_grey_cloud;
	/* mov	FadeGCol1,al */
	fadegcol1 = al;
	/* mov	al,B_GREY_CLOUD */
	al = b_grey_cloud;
	/* mov	FadeBCol1,al */
	fadebcol1 = al;
	/* jmp	SortSkyCol */
	goto sortskycol;
	// 0 ;* sort fog
sortfog:
	// 4381 
	/* SortFog:	cmp	Fog,0		;foggy? */
	CMP(*(fog), 0);
	/* je	SkipFog		;no -> */
	if ((dw)(*(fog)) == (dw)(0)) {goto skipfog;}
	/* mov	al,64		;assume light fog */
	al = 64;
	/* cmp	Fog,1		;light fog? */
	CMP(*(fog), 1);
	/* je	@F		;yes -> */
	if ((dw)(*(fog)) == (dw)(1)) {goto dummylabel2;}
	/* mov	al,96		;pea souper */
	al = 96;
dummylabel2:
	// 4383 
	/* @@:		mov	FadeLevel1,al */
	fadelevel1 = al;
	/* mov	al,R_GREY_CLOUD */
	al = r_grey_cloud;
	/* mov	FadeRCol1,al */
	fadercol1 = al;
	/* mov	al,G_GREY_CLOUD */
	al = g_grey_cloud;
	/* mov	FadeGCol1,al */
	fadegcol1 = al;
	/* mov	al,B_GREY_CLOUD */
	al = b_grey_cloud;
	/* mov	FadeBCol1,al */
	fadebcol1 = al;
skipfog:
	// 4385 
	/* SkipFog:	jmp	SortSkyCol */
	goto sortskycol;
	// 0 ;---------------------------
inclouds:
	// 4387 
	// 0 ;---------------------------
	/* mov	si,OFFSET VGA_SKY2 */
	si = m2c::near_offset_external(vga_sky2);
	/* call	SortRGBSky */
	CALL(sortrgbsky, 0);
	/* mov	al,COL_SKY16 */
	al = 111;
	/* mov	cx,ClipWndwXOrg */
	cx = clipwndwxorg;
	/* mov	bl,ClipWndwYOrg */
	bl = clipwndwyorg;
	/* mov	dx,ClipWndwXMax */
	dx = clipwndwxmax;
	/* mov	bh,ClipWndwYMax */
	bh = clipwndwymax;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;* if (cloud base + cloud depth - zft) < 256ft then fade to white cloud
	// 0 ;*
	// 0 ;* fade level = not((cloud base + cloud depth - zft) / 2) and 07fh
	/* mov	ax,WORD PTR CloudBase */
	ax = *(dw*)(&cloudbase);
	/* mov	dx,WORD PTR CloudBase+2 */
	dx = *(dw*)(((db*)&cloudbase)+2);
	/* add	ax,CloudDepth */
	ADD(ax, clouddepth);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* sub	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	SUB(ax, *((dw*)((db*)&v_view+vp_zft_lo)));
	/* sbb	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	SBB(dx, *((dw*)((db*)&v_view+vp_zft_hi)));
	/* test	dx,dx		;(cloud base + depth - zft) < 65536? */
	TEST(dx, dx);
	/* jnz	@F		;no -> */
	if ((dx & dx) != 0) {goto dummylabel3;}
	/* cmp	ax,256		;(cloud base + depth - zft) < 256? */
	CMP(ax, 256);
	/* jae	@F		;no -> */
	if ((dw)(ax) >= (dw)(256)) {goto dummylabel3;}
	/* shr	ax,1		;/2 */
	SHR(ax, 1);
	/* not	al		;127 .. 0 */
	al = ~al;
	/* and	al,07fh */
	AND(al, 0x07f);
	/* mov	FadeLevel1,al */
	fadelevel1 = al;
	/* mov	al,R_WHITE_CLOUD */
	al = r_white_cloud;
	/* mov	FadeRCol1,al */
	fadercol1 = al;
	/* mov	al,G_WHITE_CLOUD */
	al = g_white_cloud;
	/* mov	FadeGCol1,al */
	fadegcol1 = al;
	/* mov	al,B_WHITE_CLOUD */
	al = b_white_cloud;
	/* mov	FadeBCol1,al */
	fadebcol1 = al;
dummylabel3:
	// 4389 
	/* @@:		jmp	DrawHrznExit */
	goto drawhrznexit;
	// 0 ;---------------------------
aboveclouds:
	// 4391 
	// 0 ;---------------------------
	/* mov	si,OFFSET VGA_GND2 */
	si = m2c::near_offset_external(vga_gnd2);
	/* call	SortRGBGnd */
	CALL(sortrgbgnd, 0);
	/* mov	si,OFFSET VGA_SKY1 */
	si = m2c::near_offset_external(vga_sky1);
	/* call	SortRGBSky */
	CALL(sortrgbsky, 0);
	// 0 ;* if (zft - cloud base - cloud depth) < 512ft then fade to white cloud
	// 0 ;*
	// 0 ;* fade level = not((zft - cloud base - cloud depth) / 4) and 07fh
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* mov	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&v_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* sub	ax,CloudDepth */
	SUB(ax, clouddepth);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* test	dx,dx		;(zft - cloud base - depth) < 65536? */
	TEST(dx, dx);
	/* jz	__m2c_macrolocal_2_skip */
	if (!(dx & dx)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	SortSkyCol */
	goto sortskycol;
__m2c_macrolocal_2_skip:
	// 4393 
	// 0 ;no ->
	/* cmp	ax,512		;(zft - cloud base - depth) < 512? */
	CMP(ax, 512);
	/* jb	__m2c_macrolocal_3_skip */
	if ((dw)(ax) < (dw)(512)) {goto __m2c_macrolocal_3_skip;}
	/* jmp	SortSkyCol */
	goto sortskycol;
__m2c_macrolocal_3_skip:
	// 4395 
	// 0 ;no ->
	/* shr	ax,1 */
	SHR(ax, 1);
	/* shr	ax,1 */
	SHR(ax, 1);
	/* not	al		;127 .. 0 */
	al = ~al;
	/* and	al,07fh */
	AND(al, 0x07f);
	/* mov	FadeLevel1,al */
	fadelevel1 = al;
	/* mov	al,R_WHITE_CLOUD */
	al = r_white_cloud;
	/* mov	FadeRCol1,al */
	fadercol1 = al;
	/* mov	al,G_WHITE_CLOUD */
	al = g_white_cloud;
	/* mov	FadeGCol1,al */
	fadegcol1 = al;
	/* mov	al,B_WHITE_CLOUD */
	al = b_white_cloud;
	/* mov	FadeBCol1,al */
	fadebcol1 = al;
	/* jmp	SortSkyCol */
	goto sortskycol;
	// 0 ;---------------------------
polycloudfade:
	// 4397 
	// 0 ;individual polygon cloud fade
	// 0 ;---------------------------
	/* test	CloudsEnabled,1 */
	TEST(cloudsenabled, 1);
	/* jnz	__m2c_macrolocal_4_skip */
	if ((cloudsenabled & 1) != 0) {goto __m2c_macrolocal_4_skip;}
	/* jmp	SortSkyCol */
	goto sortskycol;
__m2c_macrolocal_4_skip:
	// 4399 
	// 0 ;no polygon clouds ->
	// 0 ;* if abs(zft - cloud base) <= 511 then
	// 0 ;*    if directly above / below polygon cloud then
	// 0 ;*       fade palette
	// 0 ;*    endif
	// 0 ;* endif
	/* mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* mov	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&v_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel4;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel4:
	// 4401 
	/* @@:		test	dx,dx		;< 65536? */
	TEST(dx, dx);
	/* jnz	@F		;no -> */
	if ((dx & dx) != 0) {goto dummylabel5;}
	/* cmp	ax,511		;<= 511? */
	CMP(ax, 511);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(511)) {goto dummylabel5;}
	/* mov	si,OFFSET V_VIEW */
	si = m2c::near_offset_external(v_view);
	/* push	ax */
	PUSH(ax);
	/* call	CloudCheck1 */
	CALLF(cloudcheck1, 0);
	/* pop	ax */
	POP(ax);
	/* jc	ContPolyFade */
	if (CF) {goto contpolyfade;}
	// 0 ;* (note: If cloud base test fails try cloud top in case depth is shallow.)
	// 0 ;* if abs(zft - cloud base - cloud depth) <= 511 then
	// 0 ;*    if directly above / below polygon cloud then
	// 0 ;*       fade palette
	// 0 ;*    endif
	// 0 ;* endif
dummylabel5:
	// 4403 
	/* @@:		mov	ax,WORD PTR V_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&v_view+vp_zft_lo));
	/* mov	dx,WORD PTR V_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&v_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* sub	ax,CloudDepth */
	SUB(ax, clouddepth);
	/* sbb	dx,0 */
	SBB(dx, 0);
	/* jns	@F */
	if ((short)(dx) >= 0) {goto dummylabel6;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel6:
	// 4405 
	/* @@:		test	dx,dx		;< 65536? */
	TEST(dx, dx);
	/* jnz	SortSkyCol	;no -> */
	if ((dx & dx) != 0) {goto sortskycol;}
	/* cmp	ax,511		;<= 511? */
	CMP(ax, 511);
	/* ja	SortSkyCol	;yes -> */
	if ((dw)(ax) > (dw)(511)) {goto sortskycol;}
	/* mov	si,OFFSET V_VIEW */
	si = m2c::near_offset_external(v_view);
	/* push	ax */
	PUSH(ax);
	/* call	CloudCheck2 */
	CALLF(cloudcheck2, 0);
	/* pop	ax */
	POP(ax);
	/* jnc	SortSkyCol */
	if (!CF) {goto sortskycol;}
contpolyfade:
	// 4407 
	/* ContPolyFade:	mov	dx,511		;increase fade nearer cloud */
	dx = 511;
	/* sub	dx,ax */
	SUB(dx, ax);
	/* shr	dx,1		;0 .. 255 */
	SHR(dx, 1);
	/* shr	dx,1		;0 .. 127 */
	SHR(dx, 1);
	/* mov	FadeLevel1,dl */
	fadelevel1 = dl;
	/* mov	al,R_WHITE_CLOUD */
	al = r_white_cloud;
	/* mov	FadeRCol1,al */
	fadercol1 = al;
	/* mov	al,G_WHITE_CLOUD */
	al = g_white_cloud;
	/* mov	FadeGCol1,al */
	fadegcol1 = al;
	/* mov	al,B_WHITE_CLOUD */
	al = b_white_cloud;
	/* mov	FadeBCol1,al */
	fadebcol1 = al;
	// 0 ;* sort sky col wrt graduations enabled
sortskycol:
	// 4409 
	/* SortSkyCol:	test	GradEnabled,1	;enabled? */
	TEST(*(gradenabled), 1);
	/* mov	al,COL_SKY16	;assume so */
	al = 111;
	/* jnz	@F		;yes -> */
	if ((*(gradenabled) & 1) != 0) {goto dummylabel7;}
	/* mov	al,COL_SKY12 */
	al = 107;
dummylabel7:
	// 4411 
	/* @@:		mov	SkyCol,al */
	skycol = al;
	/* mov	GndCol,COL_GND1	;set ground col */
	gndcol = 75;
	// 0 ;* modify pitch wrt altitude (pitch up to force ground visual to the horizon)
	// 0 ;*
	// 0 ;* pitch up (p degs) = z scaled / 8192 = 0 .. 3
	/* mov	ax,ZScaled */
	ax = zscaled;
	/* rol	ax,1 */
	ROL(ax, 1);
	/* rol	ax,1 */
	ROL(ax, 1);
	/* rol	ax,1 */
	ROL(ax, 1);
	/* and	ax,0011b	;z scaled / 8192 = 0 .. 3 */
	AND(ax, 0x3);
	/* add	ax,V_VIEW.VP_PITCH */
	ADD(ax, v_view.vp_pitch);
	/* and	ax,001ffh	;wrap around */
	AND(ax, 0x001ff);
	// 0 ;---------------------------
intohorizon:
	// 4413 
	// 0 ;<<<<< entry from UserHorizon <<<<<
	// 0 ;---------------------------
	/* mov	NewPitch,ax */
	newpitch = ax;
	// 0 ;* determine if draw horizon, only ground or only sky
	/* mov	GradVisible,0	;assume graduations not visible */
	*(gradvisible) = 0;
	/* cmp	ax,90		;pitch <= max tangent value? */
	CMP(ax, 90);
	/* jbe	SortHorizon	;yes -> */
	if ((dw)(ax) <= (dw)(90)) {goto sorthorizon;}
	/* cmp	ax,422		;pitch >= max tangent value? */
	CMP(ax, 422);
	/* jae	SortHorizon	;yes -> */
	if ((dw)(ax) >= (dw)(422)) {goto sorthorizon;}
hrznnonvisible:
	// 4415 
	/* HrznNonVisible:	mov	ax,NewPitch */
	ax = newpitch;
	/* cmp	ax,256		;only sky? */
	CMP(ax, 256);
	/* mov	al,SkyCol	;assume so */
	al = skycol;
	/* jb	OnlySky		;yes -> */
	if (CF) {goto onlysky;}
	// 0 ;* draw ground / sky only
onlygnd:
	// 4417 
	/* OnlyGnd:	mov	al,GndCol */
	al = gndcol;
onlysky:
	// 4419 
	/* OnlySky:	mov	cx,ClipWndwXOrg */
	cx = clipwndwxorg;
	/* mov	bl,ClipWndwYOrg */
	bl = clipwndwyorg;
	/* mov	dx,ClipWndwXMax */
	dx = clipwndwxmax;
	/* mov	bh,ClipWndwYMax */
	bh = clipwndwymax;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* jmp	DrawGradHrzn */
	goto drawgradhrzn;
	// 0 ;* calc end points for horizon line wrt pitch and roll (2D rotation):-
	// 0 ;*
	// 0 ;* Xe1 = (cosr * XEYE) - (sinr * ZEYE * tan(pitch))
	// 0 ;* Ye1 = YEYE
	// 0 ;* Ze1 = (sinr * XEYE) + (cosr * ZEYE * tan(pitch))
	// 0 ;*
	// 0 ;* Xe2 = (cosr * -XEYE) - (sinr * ZEYE * tan(pitch))
	// 0 ;* Ye2 = YEYE
	// 0 ;* Ze2 = (sinr * -XEYE) + (cosr * ZEYE * tan(pitch))
sorthorizon:
	// 4421 
	/* SortHorizon:	mov	GradVisible,1	;graduations visible */
	*(gradvisible) = 1;
	/* call	Tangent		;dx = tan(pitch) */
	CALLF(tangent, 0);
	/* mov	ax,ZEYE */
	ax = -2048;
	/* imul	dx		;dx, ax = ZEYE * tan(pitch) */
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
	// 0 ;bp = ZEYE * tan(pitch)
	/* mov	ax,V_SinR */
	ax = v_sinr;
	/* mov	bx,ax */
	bx = ax;
	/* imul	bp		;dx, ax = sinr * ZEYE * tan(pitch) */
	IMUL1_2(bp);
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
	// 0 ;si = sinr * ZEYE * tan(pitch)
	/* mov	ax,XEYE */
	ax = 4096;
	/* imul	bx   		;dx, ax = sinr * XEYE */
	IMUL1_2(bx);
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
	// 0 ;bx = sinr * XEYE
	/* mov	ax,V_CosR */
	ax = v_cosr;
	/* mov	cx,ax */
	cx = ax;
	/* imul	bp		;dx, ax = cosr * ZEYE * tan(pitch) */
	IMUL1_2(bp);
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
	// 0 ;di = cosr * ZEYE * tan(pitch)
	/* mov	ax,XEYE */
	ax = 4096;
	/* imul	cx		;dx, ax = cosr * XEYE */
	IMUL1_2(cx);
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
	// 0 ;cx = cosr * XEYE
	/* mov	ax,cx */
	ax = cx;
	/* sub	ax,si		;(cosr * XEYE) - (sinr * ZEYE * tan(pitch)) */
	SUB(ax, si);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Xe[4],ax	;preserve for grad hozn */
	*(dw*)(((db*)&xe)+4) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,di		;(sinr * XEYE) + (cosr * ZEYE * tan(pitch)) */
	ADD(ax, di);
	/* mov	Ze[0],ax */
	*(dw*)(((db*)&ze)+0) = ax;
	/* mov	Ze[4],ax	;preserve for grad hozn */
	*(dw*)(((db*)&ze)+4) = ax;
	/* mov	ax,cx */
	ax = cx;
	/* neg	ax		;-(cosr * XEYE) = (cosr * -XEYE) */
	NEG(ax);
	/* sub	ax,si		;(cosr * -XEYE) - (sinr * ZEYE * tan(pitch)) */
	SUB(ax, si);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	Xe[6],ax	;preserve for grad hozn */
	*(dw*)(((db*)&xe)+6) = ax;
	/* mov	ax,bx */
	ax = bx;
	/* neg	ax		;-(sinr * XEYE) = (sinr * -XEYE) */
	NEG(ax);
	/* add	ax,di		;(sinr * -XEYE) + (cosr * ZEYE * tan(pitch)) */
	ADD(ax, di);
	/* mov	Ze[2],ax */
	*(dw*)(((db*)&ze)+2) = ax;
	/* mov	Ze[6],ax	;preserve for grad hozn */
	*(dw*)(((db*)&ze)+6) = ax;
	/* mov	ax,YEYE */
	ax = 1024;
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* call	HorizonClip  	;clip horizon line and test visibility */
	CALL(horizonclip, 0);
	/* jnc	HrznVisible	;visible -> */
	if (!CF) {goto hrznvisible;}
	/* jmp	HrznNonVisible */
	goto hrznnonvisible;
hrznvisible:
	// 4423 
	/* HrznVisible:	mov	ax,GndSkyCols */
	ax = gndskycols;
	/* mov	bx,ax		;lhs / rhs cols */
	bx = ax;
	/* mov	cx,ax		;top / bottom cols */
	cx = ax;
	// 0 ;* sort lhs / rhs colours wrt roll (for horizon line fill)
	/* mov	ax,V_VIEW.VP_ROLL */
	ax = v_view.vp_roll;
	/* cmp	ax,256		;roll >= 180? */
	CMP(ax, 256);
	/* jae	SortTopBotCols	;yes -> */
	if ((dw)(ax) >= (dw)(256)) {goto sorttopbotcols;}
	/* xchg	bl,bh		;swap lhs / rhs cols */
	XCHG(bl, bh);
	// 0 ;* sort top / bottom colours wrt roll (for solid top / bottom fill)
sorttopbotcols:
	// 4425 
	/* SortTopBotCols:	sub	ax,128 		;roll 90 degs */
	SUB(ax, 128);
	/* and	ax,001ffh	;roll 0 .. 511 p degs */
	AND(ax, 0x001ff);
	/* cmp	ax,256		;inverted? */
	CMP(ax, 256);
	/* jb	SetHrznCols	;no -> */
	if ((dw)(ax) < (dw)(256)) {goto sethrzncols;}
	/* xchg	cl,ch		;swap top / bottom cols */
	XCHG(cl, ch);
sethrzncols:
	// 4427 
	/* SetHrznCols:	mov	LhsRhsCols,bx */
	lhsrhscols = bx;
	/* mov	TopBotCols,cx */
	topbotcols = cx;
	// 0 ;* if y1 > y2 then swap co-ords
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* cmp	bl,bh		;y1 <= y2? */
	CMP(bl, bh);
	/* jbe	NoSwap		;yes -> */
	if ((db)(bl) <= (db)(bh)) {goto noswap;}
	/* xchg	bl,bh */
	XCHG(bl, bh);
	/* xchg	cx,dx */
	XCHG(cx, dx);
noswap:
	// 4429 
	/* NoSwap:		mov	Hx1,cx		;store crt co-ords */
	hx1 = cx;
	/* mov	Hy1,bl */
	*(hy1) = bl;
	/* mov	Hx2,dx */
	hx2 = dx;
	/* mov	Hy2,bh */
	*(hy2) = bh;
	// 0 ;---------------------------------
	// 0 ;* fill solid top section (if any)
	// 0 ;---------------------------------
	/* cmp	bl,ClipWndwYOrg	;y1 > y origin? */
	CMP(bl, clipwndwyorg);
	/* je	FillMiddle	;no -> */
	if ((db)(bl) == (db)(clipwndwyorg)) {goto fillmiddle;}
	/* mov	bh,bl */
	bh = bl;
	/* dec	bh */
	DEC(bh);
	/* mov	bl,ClipWndwYOrg */
	bl = clipwndwyorg;
	/* mov	cx,ClipWndwXOrg */
	cx = clipwndwxorg;
	/* mov	dx,ClipWndwXMax */
	dx = clipwndwxmax;
	/* mov	al,TopCol */
	al = topcol;
	if (getenv("M2C_HRZDBG")) {static unsigned _t=0; if(++_t<20) fprintf(stderr,"TOPFILL #%u bl(y2top)=%d bh=%d yorg=%d xorg=%d xmax=%d topcol=%d ycrt0=%d ycrt2=%d\n",_t,(int)bl,(int)bh,(int)clipwndwyorg,(int)clipwndwxorg,(int)clipwndwxmax,(int)topcol,(int)(*((&ycrt)+0)),(int)(*((&ycrt)+2)));}
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;------------------------------
	// 0 ;* fill middle section (if any)
	// 0 ;------------------------------
fillmiddle:
	// 4431 
	/* FillMiddle:	mov	ax,WORD PTR Hy1 */
	ax = *(dw*)(hy1);
	/* mov	bx,WORD PTR Hy2 */
	bx = *(dw*)(hy2);
	/* cmp	ax,bx		;y1 = y2? */
	CMP(ax, bx);
	/* jne	ContMidFill	;no -> */
	if ((dw)(ax) != (dw)(bx)) {goto contmidfill;}
	// 0 ;* flat horizon line, but does it extend across the entire clip window?
	/* mov	cx,Hx1 */
	cx = hx1;
	/* mov	dx,Hx2 */
	dx = hx2;
	/* cmp	cx,dx		;x1 < x2 */
	CMP(cx, dx);
	/* jbe	NoXSwap		;yes -> */
	if ((dw)(cx) <= (dw)(dx)) {goto noxswap;}
	/* xchg	cx,dx */
	XCHG(cx, dx);
noxswap:
	// 4433 
	/* NoXSwap:	cmp	cx,ClipWndwXOrg	;x1 on lhs? */
	CMP(cx, clipwndwxorg);
	/* jne	SetLhX		;no -> */
	if ((dw)(cx) != (dw)(clipwndwxorg)) {goto setlhx;}
	/* cmp	dx,ClipWndwXMax	;x2 on rhs? */
	CMP(dx, clipwndwxmax);
	/* je	FlatHorizon	;yes -> */
	if ((dw)(dx) == (dw)(clipwndwxmax)) {goto flathorizon;}
setrhx:
	// 4435 
	/* SetRhX:		mov	ax,dx */
	ax = dx;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	LhsX[bx],ax	;store rh x value */
	*(dw*)(((db*)&lhsx)+bx) = ax;
	/* jmp	ContHrznFill */
	goto conthrznfill;
setlhx:
	// 4437 
	/* SetLhX:       	mov	ax,cx */
	ax = cx;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	LhsX[bx],ax	;store lh x value */
	*(dw*)(((db*)&lhsx)+bx) = ax;
	/* jmp	ContHrznFill */
	goto conthrznfill;
contmidfill:
	// 4439 
	/* ContMidFill:	shl	ax,1		;y1 * 2 */
	SHL(ax, 1);
	/* mov	di,OFFSET Lhsx	;di -> LhsX[] */
	di = m2c::near_offset_external(lhsx);
	/* add	di,ax		;di -> LhsX[y1 * 2] */
	ADD(di, ax);
	/* mov	ax,Hx2 */
	ax = hx2;
	/* mov	si,ax		;si = x2 */
	si = ax;
	/* sub	ax,Hx1		;Dx = Hx2 - Hx1 */
	SUB(ax, hx1);
	/* cwd */
	CWD;
	/* xor	ax,dx		;1s comp */
	XOR(ax, dx);
	/* sub	ax,dx		;2s comp */
	SUB(ax, dx);
	// 0 ;ax = abs(Dx), dx = sign(Dx)
	/* mov	bx,dx		;bx = sign(Dx) (00000h or 0ffffh) */
	bx = dx;
	/* mov	dx,ax		;dx = abs(Dx) */
	dx = ax;
	/* mov	ax,WORD PTR Hy2 */
	ax = *(dw*)(hy2);
	/* sub	ax,WORD PTR Hy1	;Dy = Hy2 - Hy1 (always +ve) */
	SUB(ax, *(dw*)(hy1));
	/* mov	bp,ax		;bp = abs(Dy) */
	bp = ax;
	/* mov	ax,Hx1		;ax = x1 */
	ax = hx1;
	/* cmp	bp,dx		;cf = 1 if Dx > Dy */
	CMP(bp, dx);
	/* rcl	bx,1		;b1 = sign(Dx), b0 = (Dx > Dy) */
	RCL(bx, 1);
	/* and	bx,11b		;clear unwanted bits */
	AND(bx, 0x3);
	/* shl	bx,1		;*2 index */
	SHL(bx, 1);
	/* call	Octant[bx]	;call the octant */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&octant)+bx));
conthrznfill:
	// 4441 
	/* ContHrznFill:	mov	bl,Hy1 */
	bl = *(hy1);
	/* mov	bh,Hy2 */
	bh = *(hy2);
	/* mov	cx,ClipWndwXOrg */
	cx = clipwndwxorg;
	/* mov	dx,ClipWndwXMax */
	dx = clipwndwxmax;
	/* mov	ax,LhsRhsCols */
	ax = lhsrhscols;
	/* call	HorizonFill */
	CALLF(horizonfill, 0);
	// 0 ;------------------------------------
	// 0 ;* fill solid bottom section (if any)
	// 0 ;------------------------------------
	/* mov	bl,Hy2 */
	bl = *(hy2);
	/* cmp	bl,ClipWndwYMax	;y2 < y max? */
	CMP(bl, clipwndwymax);
	/* je	DrawGradHrzn	;no -> */
	if ((db)(bl) == (db)(clipwndwymax)) {goto drawgradhrzn;}
	/* inc	bl */
	INC(bl);
flathorizon:
	// 4443 
	/* FlatHorizon:	mov	bh,ClipWndwYMax */
	bh = clipwndwymax;
	/* mov	cx,ClipWndwXOrg */
	cx = clipwndwxorg;
	/* mov	dx,ClipWndwXMax */
	dx = clipwndwxmax;
	/* mov	al,BotCol */
	al = botcol;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;------------------------
	// 0 ;* draw graduated horizon
	// 0 ;------------------------
drawgradhrzn:
	// 4445 
	/* DrawGradHrzn:	mov	al,GradEnabled */
	al = *(gradenabled);
	/* test	al,GradVisible	;grad horizon enabled and visible? */
	TEST(al, *(gradvisible));
	/* jnz	__m2c_macrolocal_13_skip */
	if ((al & *(gradvisible)) != 0) {goto __m2c_macrolocal_13_skip;}
	/* jmp	DrawHrznExit */
	goto drawhrznexit;
__m2c_macrolocal_13_skip:
	// 4447 
	// 0 ;no ->
	// 0 ;* ignore grad horizon under some conditions (visual effect is not pleasing)
	// 0 ;*
	// 0 ;* if overcast then
	// 0 ;*    if below clouds then
	// 0 ;*       select night
	// 0 ;*       case 0
	// 0 ;*          draw grad horizon
	// 0 ;*       case 1
	// 0 ;*          if fog <= 1 then
	// 0 ;*             draw grad horizon
	// 0 ;*          endif
	// 0 ;*       case 2
	// 0 ;*          if fog = 0 then
	// 0 ;*             draw grad horizon
	// 0 ;*          endif
	// 0 ;*       case else
	// 0 ;*       endselect
	// 0 ;*    else
	// 0 ;*       draw grad horizon
	// 0 ;*    endif
	// 0 ;* else
	// 0 ;*    draw grad horizon
	// 0 ;* endif
	/* test	Overcast,1	;overcast sky? */
	TEST(*(overcast), 1);
	/* jz	ContGradHrzn	;no -> */
	if (!(*(overcast) & 1)) {goto contgradhrzn;}
	/* cmp	CloudMode,CLOUD_MODE1	;below clouds? */
	CMP(cloudmode, cloud_mode1);
	/* jne	ContGradHrzn		;no -> */
	if ((dw)(cloudmode) != (dw)(cloud_mode1)) {goto contgradhrzn;}
	/* mov	al,Night */
	al = *(night);
	/* test	al,al		;night? */
	TEST(al, al);
	/* jz	ContGradHrzn	;no -> */
	if (!(al & al)) {goto contgradhrzn;}
	/* cmp	al,1		;night 1? */
	CMP(al, 1);
	/* jne	@F		;no -> */
	if ((db)(al) != (db)(1)) {goto dummylabel8;}
	/* cmp	Fog,1		;clear or light fog? */
	CMP(*(fog), 1);
	/* jbe	ContGradHrzn	;yes -> */
	if ((dw)(*(fog)) <= (dw)(1)) {goto contgradhrzn;}
	/* jmp	DrawHrznExit */
	goto drawhrznexit;
dummylabel8:
	// 4449 
	/* @@:		cmp	al,2		;night 2? */
	CMP(al, 2);
	/* je	__m2c_macrolocal_14_skip */
	if ((db)(al) == (db)(2)) {goto __m2c_macrolocal_14_skip;}
	/* jmp	DrawHrznExit */
	goto drawhrznexit;
__m2c_macrolocal_14_skip:
	// 4451 
	// 0 ;no ->
	/* cmp	Fog,0		;clear? */
	CMP(*(fog), 0);
	/* je	__m2c_macrolocal_15_skip */
	if ((dw)(*(fog)) == (dw)(0)) {goto __m2c_macrolocal_15_skip;}
	/* jmp	DrawHrznExit */
	goto drawhrznexit;
__m2c_macrolocal_15_skip:
	// 4453 
	// 0 ;no ->
	// 0 ;* translate horizon line
	// 0 ;*
	// 0 ;* x tranlate (xt) = 0, z translate (zt) = ZT
	// 0 ;*
	// 0 ;* x offset = (cosr * xt) - (sinr * zt) = -(sinr * ZT)
	// 0 ;* z offset = (sinr * xt) + (cosr * zt) = cosr * ZT
	// 0 ;* calc x eye's
contgradhrzn:
	// 4455 
	/* ContGradHrzn:	mov	ax,V_SinR */
	ax = v_sinr;
	/* mov	dx,ZT */
	dx = 256;
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
	// 0 ;dx = sinr * ZT
	/* neg	dx		;dx = -(sinr * ZT) */
	NEG(dx);
	/* xor	ax,ax		;clear fraction */
	XOR(ax, ax);
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
	/* mov	cx,Xe[4]	;rh x eye */
	cx = *(dw*)(((db*)&xe)+4);
	/* xor	bx,bx		;clear fraction */
	XOR(bx, bx);
	/* mov	di,Xe[6]	;lh x eye */
	di = *(dw*)(((db*)&xe)+6);
	/* xor	si,si		;clear fraction */
	XOR(si, si);
	// 1647 INDEX		=	0
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+0+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+0+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1661 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(0+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(0+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1675 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(4+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(4+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1689 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(8+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(8+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1703 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(12+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(12+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1717 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(16+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(16+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1731 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(20+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(20+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1745 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(24+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(24+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1759 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(28+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(28+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1773 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(32+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(32+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1787 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(36+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(36+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1801 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(40+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(40+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1815 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(44+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(44+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1829 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(48+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(48+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1843 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(52+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(52+4)+2) = di;
	/* add	bx,ax		;update rh x eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh x eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1857 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(56+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(56+4)+2) = di;
	// 1864 INDEX		=	INDEX+4
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	/* mov	Xe[INDEX+0],cx	;store rh x eye */
	*(dw*)(((db*)&xe)+(60+4)+0) = cx;
	/* mov	Xe[INDEX+2],di	;store lh x eye */
	*(dw*)(((db*)&xe)+(60+4)+2) = di;
	// 0 ;* calc z eye's
	/* mov	ax,V_CosR */
	ax = v_cosr;
	/* mov	dx,ZT */
	dx = 256;
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
	// 0 ;dx = cosr * ZT
	/* xor	ax,ax		;clear fraction */
	XOR(ax, ax);
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
	/* mov	cx,Ze[4]	;rh z eye */
	cx = *(dw*)(((db*)&ze)+4);
	/* xor	bx,bx		;clear fraction */
	XOR(bx, bx);
	/* mov	di,Ze[6]	;lh z eye */
	di = *(dw*)(((db*)&ze)+6);
	/* xor	si,si		;clear fraction */
	XOR(si, si);
	// 1922 INDEX		=	0
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+0+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+0+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1936 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(0+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(0+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1950 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(4+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(4+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1964 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(8+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(8+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1978 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(12+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(12+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 1992 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(16+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(16+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2006 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(20+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(20+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2020 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(24+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(24+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2034 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(28+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(28+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2048 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(32+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(32+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2062 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(36+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(36+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2076 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(40+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(40+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2090 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(44+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(44+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2104 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(48+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(48+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2118 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(52+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(52+4)+2) = di;
	/* add	bx,ax		;update rh z eye */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* add	si,ax		;update lh z eye */
	ADD(si, ax);
	/* adc	di,dx */
	ADC(di, dx);
	// 2132 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(56+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(56+4)+2) = di;
	// 2139 INDEX		=	INDEX+4
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	/* mov	Ze[INDEX+0],cx	;store rh z eye */
	*(dw*)(((db*)&ze)+(60+4)+0) = cx;
	/* mov	Ze[INDEX+2],di	;store lh z eye */
	*(dw*)(((db*)&ze)+(60+4)+2) = di;
	// 0 ;* calc y eye's
	/* mov	ax,YEYE */
	ax = 1024;
	/* mov	cx,16*2 */
	cx = 16*2;
	/* mov	di,OFFSET Ye */
	di = m2c::near_offset_external(ye);
	// 2178 rep	stosw
	/* rep	stosw */
	REP STOSW;
	// 0 ;* test if graduated horizon is visible
	/* mov	si,62 */
	si = 62;
	/* call	CalcOutCodes */
	CALL(calcoutcodes, 0);
	/* jc	DrawHrznExit	;non-visible -> */
	if (CF) {goto drawhrznexit;}
	// 0 ;* draw graduations
	/* mov	GradPoly[0],0 */
	*((gradpoly)+0) = 0;
	/* mov	GradPoly[1],2 */
	*((gradpoly)+1) = 2;
	/* mov	GradPoly[2],6 */
	*((gradpoly)+2) = 6;
	/* mov	GradPoly[3],4 */
	*((gradpoly)+3) = 4;
	/* mov	Col1,COL_SKY1 */
	col1 = 96;
	/* mov	cx,15		;num graduations */
	cx = 15;
gradloop:
	// 4457 
	/* GradLoop:	push	cx */
	PUSH(cx);
	/* mov	si,OFFSET GradPoly */
	si = m2c::near_offset_external(gradpoly);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel9;}
	/* mov	al,Col1 */
	al = col1;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
dummylabel9:
	// 4459 
	/* @@:		mov	al,GradPoly[2]	;next graduation */
	al = *((gradpoly)+2);
	/* mov	GradPoly[1],al */
	*((gradpoly)+1) = al;
	/* add	al,4 */
	ADD(al, 4);
	/* mov	GradPoly[2],al */
	*((gradpoly)+2) = al;
	/* mov	al,GradPoly[3]	;next graduation */
	al = *((gradpoly)+3);
	/* mov	GradPoly[0],al */
	*((gradpoly)+0) = al;
	/* add	al,4 */
	ADD(al, 4);
	/* mov	GradPoly[3],al */
	*((gradpoly)+3) = al;
	/* inc	Col1 */
	INC(col1);
	/* pop	cx */
	POP(cx);
	/* loop	GradLoop */
	LOOP(gradloop);
	// 0 ;* draw "anti-aliasing" ground line (also helps sky breakthrough at low altitudes)
	/* mov	GradPoly[0],0 */
	*((gradpoly)+0) = 0;
	/* mov	GradPoly[1],2 */
	*((gradpoly)+1) = 2;
	/* mov	GradPoly[2],-1 */
	*((gradpoly)+2) = -1;
	/* mov	si,OFFSET GradPoly */
	si = m2c::near_offset_external(gradpoly);
	/* mov	di,OFFSET CrtBuffer */
	di = m2c::near_offset_external(crtbuffer);
	/* call	PolyClip */
	CALL(polyclip, 0);
	/* jc	DrawHrznExit	;non-visible -> */
	if (CF) {goto drawhrznexit;}
	/* mov	al,COL_GND2 */
	al = 76;
	/* mov	si,OFFSET CrtBuffer */
	si = m2c::near_offset_external(crtbuffer);
	/* call	PolyFill */
	CALLF(polyfill, 0);
drawhrznexit:
	// 4461 
	/* DrawHrznExit:	ret */
	RETN(0);
sortrgbgnd:
	// 2233 
	/* cmp	si,GndRGBPtr	;ground cols ok? */
	CMP(si, gndrgbptr);
edummylabel3:
	// 4463 
	/* je	@F		;yes -> */
	if (ZF) {goto dummylabel10;}
	/* mov	GndRGBPtr,si */
	gndrgbptr = si;
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET VGA_GND */
	di = m2c::near_offset_external(vga_gnd);
	/* mov	cx,2*3 */
	cx = 2*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2246 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2248 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
/* m2c-phantom removed: 	R(ax = m2c::segment_of_external(vga_rgb_data););	// 2251 						mov	ax,SEG VGA_RGB_Data */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(vga_gnd););	// 2252 mov	di,OFFSET VGA_GND */
	// 2253 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2254 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	SetPaletteFlag,1 */
	setpaletteflag = 1;
dummylabel10:
	// 4465 
	/* @@:		ret */
	RETN(0);
sortrgbsky:
	// 2266 
	/* cmp	si,SkyRGBPtr	;sky cols ok? */
	CMP(si, skyrgbptr);
edummylabel4:
	// 4467 
	/* je	@F		;yes -> */
	if (ZF) {goto dummylabel11;}
	/* mov	SkyRGBPtr,si */
	skyrgbptr = si;
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG VGA_RGB_Data */
	ax = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET VGA_SKY */
	di = m2c::near_offset_external(vga_sky);
	/* mov	cx,16*3 */
	cx = 16*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 2279 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 2281 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
/* m2c-phantom removed: 	R(ax = m2c::segment_of_external(vga_rgb_data););	// 2284 						mov	ax,SEG VGA_RGB_Data */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(vga_sky););	// 2285 mov	di,OFFSET VGA_SKY */
	// 2286 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 2287 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	SetPaletteFlag,1 */
	setpaletteflag = 1;
dummylabel11:
	// 4469 
	/* @@:		ret */
	RETN(0);
octant1:
	// 2307 
	/* mov	cx,bp		;count = Dy */
	cx = bp;
edummylabel5:
	// 4471 
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* jmp	IntoOct1 */
	goto intooct1;
oct1lp:
	// 4473 
	/* Oct1Lp:		inc	ax		;x = x + 1 */
	INC(ax);
intooct1:
	// 4475 
	/* IntoOct1:	sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	Oct1Lp		;if error > 1 then no y change -> */
	if ((!CF && !ZF)) {goto oct1lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* loop	Oct1Lp		;count = count - 1, count > 0 -> */
	LOOP(oct1lp);
	/* mov	ax,si		;fetch last point */
	ax = si;
	/* stosw			;store last point */
	{ STOSW; }
	/* ret */
	RETN(0);
octant2:
	// 2327 
	/* mov	cx,dx		;count = Dx */
	cx = dx;
edummylabel6:
	// 4477 
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	Oct2LpB		;vertical line -> */
	JCXZ(oct2lpb);
oct2lpa:
	// 4479 
	/* Oct2LpA:	stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	Oct2LpA		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct2lpa;}
	/* add	bx,bp		;error = error + Dy */
	ADD(bx, bp);
	/* inc	ax		;x = x + 1 */
	INC(ax);
	/* loop	Oct2LpA		;count = count - 1, count > 0 -> */
	LOOP(oct2lpa);
oct2lpb:
	// 4481 
	/* Oct2LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 2343 rep 	stosw
	/* rep 	stosw */
	REP STOSW;
	/* ret */
	RETN(0);
octant7:
	// 2350 
	/* mov	cx,dx		;count = Dx */
	cx = dx;
edummylabel7:
	// 4483 
	/* mov	bx,bp */
	bx = bp;
	/* shr	bx,1		;error = Dy / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* mov	si,bp */
	si = bp;
	/* inc	si		;y count = Dy + 1 */
	INC(si);
	/* jcxz	Oct7LpB		;vertical line -> */
	JCXZ(oct7lpb);
oct7lpa:
	// 4485 
	/* Oct7LpA:	stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* dec	si		;y count = y count - 1 */
	DEC(si);
	/* sub	bx,dx		;error = error - Dx */
	SUB(bx, dx);
	/* ja	Oct7LpA		;if error > 0 then no x change -> */
	if ((!CF && !ZF)) {goto oct7lpa;}
	/* add	bx,bp		;error = error - Dy */
	ADD(bx, bp);
	/* dec	ax		;x = x - 1 */
	DEC(ax);
	/* loop	Oct7LpA		;count = count - 1, count > 0 -> */
	LOOP(oct7lpa);
oct7lpb:
	// 4487 
	/* Oct7LpB:	mov	cx,si		;loop count for remaining y */
	cx = si;
	// 2366 rep	stosw
	/* rep	stosw */
	REP STOSW;
	/* ret */
	RETN(0);
octant8:
	// 2373 
	/* mov	cx,bp		;count = Dy */
	cx = bp;
edummylabel8:
	// 4489 
	/* mov	bx,dx */
	bx = dx;
	/* shr	bx,1		;error = Dx / 2 */
	SHR(bx, 1);
	/* adc	bx,0		;1/2 bit round up */
	ADC(bx, 0);
	/* jmp	IntoOct8 */
	goto intooct8;
oct8lp:
	// 4491 
	/* Oct8Lp:		dec	ax		;x = x - 1 */
	DEC(ax);
intooct8:
	// 4493 
	/* IntoOct8:	sub	bx,bp		;error = error - Dy */
	SUB(bx, bp);
	/* ja	Oct8Lp		;if error > 1 then no y change -> */
	if ((!CF && !ZF)) {goto oct8lp;}
	/* add	bx,dx		;error = error + Dx */
	ADD(bx, dx);
	/* stosw			;store x, y = y + 1 */
	{ STOSW; }
	/* loop	Oct8Lp		;count = count - 1, count > 0 -> */
	LOOP(oct8lp);
	/* mov	ax,si		;fetch last point */
	ax = si;
	/* stosw			;store last point */
	{ STOSW; }
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
                case m2c::k__m2c_macrolocal_13_skip: 	goto __m2c_macrolocal_13_skip;
        case m2c::k__m2c_macrolocal_14_skip: 	goto __m2c_macrolocal_14_skip;
        case m2c::k__m2c_macrolocal_15_skip: 	goto __m2c_macrolocal_15_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::kaboveclouds: 	goto aboveclouds;
        case m2c::kbelowclouds: 	goto belowclouds;
        case m2c::kcontgradhrzn: 	goto contgradhrzn;
        case m2c::kconthrznfill: 	goto conthrznfill;
        case m2c::kcontmidfill: 	goto contmidfill;
        case m2c::kcontpolyfade: 	goto contpolyfade;
        case m2c::kdrawgradhrzn: 	goto drawgradhrzn;
        case m2c::kdrawhorizon: 	goto drawhorizon;
        case m2c::kdrawhrznexit: 	goto drawhrznexit;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
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
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kfadeok: 	goto fadeok;
        case m2c::kfillmiddle: 	goto fillmiddle;
        case m2c::kflathorizon: 	goto flathorizon;
        case m2c::kgradloop: 	goto gradloop;
        case m2c::khrznnonvisible: 	goto hrznnonvisible;
        case m2c::khrznvisible: 	goto hrznvisible;
        case m2c::kinclouds: 	goto inclouds;
        case m2c::kintohorizon: 	goto intohorizon;
        case m2c::kintooct1: 	goto intooct1;
        case m2c::kintooct8: 	goto intooct8;
        case m2c::knoswap: 	goto noswap;
        case m2c::knoxswap: 	goto noxswap;
        case m2c::koct1lp: 	goto oct1lp;
        case m2c::koct2lpa: 	goto oct2lpa;
        case m2c::koct2lpb: 	goto oct2lpb;
        case m2c::koct7lpa: 	goto oct7lpa;
        case m2c::koct7lpb: 	goto oct7lpb;
        case m2c::koct8lp: 	goto oct8lp;
        case m2c::koctant1: 	goto octant1;
        case m2c::koctant2: 	goto octant2;
        case m2c::koctant7: 	goto octant7;
        case m2c::koctant8: 	goto octant8;
        case m2c::konlygnd: 	goto onlygnd;
        case m2c::konlysky: 	goto onlysky;
        case m2c::kpolycloudfade: 	goto polycloudfade;
        case m2c::ksethrzncols: 	goto sethrzncols;
        case m2c::ksetlhx: 	goto setlhx;
        case m2c::ksetrhx: 	goto setrhx;
        case m2c::kskipfog: 	goto skipfog;
        case m2c::ksortfog: 	goto sortfog;
        case m2c::ksorthorizon: 	goto sorthorizon;
        case m2c::ksortrgbgnd: 	goto sortrgbgnd;
        case m2c::ksortrgbsky: 	goto sortrgbsky;
        case m2c::ksortskycol: 	goto sortskycol;
        case m2c::ksorttopbotcols: 	goto sorttopbotcols;
        case m2c::kuserhorizon: 	goto userhorizon;
        default: return __dispatch_call(__disp, _state);
    };
}


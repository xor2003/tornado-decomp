/* THIS IS GENERATED FILE */

        
#include "views.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
pancode_0_proc:
	// 2639 
chggameviewmode:
	// 4369 
	// 0 ;* kill: assume all
	/* cmp	ax,GameViewMode	;game view mode already set? */
	CMP(ax, gameviewmode);
	/* jne	SetGameViewMode	;no -> */
	if ((dw)(ax) != (dw)(gameviewmode)) {goto setgameviewmode;}
	/* stc			;change unsuccessful */
	STC;
	/* retf			;<<<<< MUST BE FAR <<<<< */
	RETF(0);
setgameviewmode:
	// 2644 
	/* mov	bx,ax */
	bx = ax;
edummylabel1:
	// 4371 
	/* xchg	ax,GameViewMode */
	XCHG(ax, gameviewmode);
	/* push	ax		;store previous view mode */
	PUSH(ax);
	/* mov	ax,CrewSwitch[bx] */
	ax = *(dw*)(((db*)&crewswitch)+bx);
	/* mov	CrewMode,ax */
	crewmode = ax;
	/* mov	ax,ViewSwitch[bx] */
	ax = *(dw*)(((db*)&viewswitch)+bx);
	/* push	bx */
	PUSH(bx);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* pop	bx */
	POP(bx);
	/* mov	ax,RotateSwitch[bx] */
	ax = *(dw*)(((db*)&rotateswitch)+bx);
	/* mov	ViewRotateMode,ax */
	viewrotatemode = ax;
	/* mov	ax,PanelSwitch[bx] */
	ax = *(dw*)(((db*)&panelswitch)+bx);
	/* push	bx */
	PUSH(bx);
	/* call	SetPanelMode */
	CALLF(setpanelmode, 0);
	/* pop	bx */
	POP(bx);
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,CockpitFlags[bx] */
	al = *((&cockpitflags)+bx);
	/* mov	InCockpit,al */
	incockpit = al;
	/* mov	al,QuieterCockpitFlags[bx] */
	al = *((&quietercockpitflags)+bx);
	/* mov	QuieterCockpit,al */
	quietercockpit = al;
	// 0 ;mov	al,MutedCockpitFlags[bx]
	// 0 ;mov	MutedCockpit,al
	/* mov	al,EarShotFlags[bx] */
	al = *((&earshotflags)+bx);
	/* mov	EarShot,al */
	earshot = al;
	/* test	al,al		;within earshot? */
	TEST(al, al);
	/* jnz	@F		;yes -> */
	if ((al & al) != 0) {goto dummylabel1;}
	/* call	SuspendSound */
	CALLF(suspendsound, 0);
	/* jmp	SoundOk */
	goto soundok;
dummylabel1:
	// 4373 
	/* @@:		call	ResumeSound */
	CALLF(resumesound, 0);
soundok:
	// 4375 
	/* SoundOk:	pop	ax		;restore previous view mode */
	POP(ax);
	/* clc			;change successful */
	CLC;
	/* ret */
	RETF(0);
updategameview:
	// 2687 
	// 0 ;----------------------------
	// 0 ;* check for fixed view modes
	// 0 ;----------------------------
	// 0 ;* Input is disabled for these modes so it is not possible to switch out of
	// 0 ;* them. However, check for them here in case just switched and key flags
	// 0 ;* are still active from last scan.
edummylabel2:
	// 4377 
	/* mov	ax,GameViewMode */
	ax = gameviewmode;
	/* cmp	ax,VIEW_DEMO		;demo? */
	CMP(ax, 28);
	/* jne	__m2c_macrolocal_1_skip */
	if ((dw)(ax) != (dw)(28)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	UpdateView */
	goto updateview;
__m2c_macrolocal_1_skip:
	// 4379 
	// 0 ;yes ->
	/* cmp	ax,VIEW_DESTROYED	;destroyed? */
	CMP(ax, 30);
	/* jne	__m2c_macrolocal_2_skip */
	if ((dw)(ax) != (dw)(30)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	UpdateView */
	goto updateview;
__m2c_macrolocal_2_skip:
	// 4381 
	// 0 ;yes ->
	// 0 ;---------------------------------------
	// 0 ;* check if still glancing left or right (cannot change view whilst glancing)
	// 0 ;---------------------------------------
	/* test	GlanceFlag,1	;glancing? */
	TEST(*(glanceflag), 1);
	/* jz	CheckChange	;no -> */
	if (!(*(glanceflag) & 1)) {goto checkchange;}
	/* mov	si,GlanceKeyPtr */
	si = glancekeyptr;
	/* test	BYTE PTR [si],1	;glance key still held? */
	TEST(*(raddr(ds,si)), 1);
	/* jz	@F		;no -> */
	if (!(*(raddr(ds,si)) & 1)) {goto dummylabel2;}
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;* restore previous view mode
dummylabel2:
	// 4383 
	/* @@:		mov	GlanceFlag,0 */
	*(glanceflag) = 0;
	/* mov	ax,PrevViewMode */
	ax = prevviewmode;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	// 0 ;----------------------------
	// 0 ;* check if view mode changed
	// 0 ;----------------------------
	// 0 ;--------------------
	// 0 ;* pilot's panel view
	// 0 ;--------------------
checkchange:
	// 4385 
	/* CheckChange:	cmp	TM_CoolieVal,COOLIE_UP */
	CMP(tm_coolieval, coolie_up);
	/* je	@F */
	if ((dw)(tm_coolieval) == (dw)(coolie_up)) {goto dummylabel3;}
	/* mov	al,BYTE PTR KF_PilotView[K_STATUS] */
	al = *((&kf_pilotview)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_pilotview)+k_status););	// 2735 						mov	al,BYTE PTR KF_PilotView[K_STATUS] */
	/* jz	SkipPilot */
	if (!(al & al)) {goto skippilot;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,1
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	// 0 ;mov M_VIEW.VP_PITCH,20	;Frankie hack
dummylabel3:
	// 4387 
	/* @@:		mov	ax,VIEW_PILOT */
	ax = 0;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jnc	@F		;change successful -> */
	if (!CF) {goto dummylabel4;}
	// 0 ;* must have been VIEW_PILOT already, switch to VIEW_LOOKUP
	/* mov	ax,VIEW_LOOKUP */
	ax = 26;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
dummylabel4:
	// 4389 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;------------------------
	// 0 ;* navigator's panel view
	// 0 ;------------------------
skippilot:
	// 4391 
	/* SkipPilot:	cmp	TM_CoolieVal,COOLIE_DN */
	CMP(tm_coolieval, coolie_dn);
	/* je	@F */
	if ((dw)(tm_coolieval) == (dw)(coolie_dn)) {goto dummylabel5;}
	/* mov	al,BYTE PTR KF_NavigView[K_STATUS] */
	al = *((&kf_navigview)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigview)+k_status););	// 2760 						mov	al,BYTE PTR KF_NavigView[K_STATUS] */
	/* jz	SkipNavig */
	if (!(al & al)) {goto skipnavig;}
	// 0 ;mov InCockpit,1
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
dummylabel5:
	// 4393 
	/* @@:		mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov	ax,VIEW_NAVIG */
	ax = 6;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;-------------------------------------------
	// 0 ;* left view (fixed), sort pilot / navigator
	// 0 ;-------------------------------------------
skipnavig:
	// 4395 
	/* SkipNavig:	cmp	TM_CoolieVal,COOLIE_LT */
	CMP(tm_coolieval, coolie_lt);
	/* je	@F */
	if ((dw)(tm_coolieval) == (dw)(coolie_lt)) {goto dummylabel6;}
	/* mov	al,BYTE PTR KF_LViewFix[K_STATUS] */
	al = *((&kf_lviewfix)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_lviewfix)+k_status););	// 2779 						mov	al,BYTE PTR KF_LViewFix[K_STATUS] */
	/* jz	SkipLFix */
	if (!(al & al)) {goto skiplfix;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
dummylabel6:
	// 4397 
	/* @@:		mov	ax,VIEW_LPILOT		;assume pilot */
	ax = 2;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel7;}
	/* mov	ax,VIEW_LNAVIG */
	ax = 8;
dummylabel7:
	// 4399 
	/* @@:		call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;--------------------------------------------
	// 0 ;* right view (fixed), sort pilot / navigator
	// 0 ;--------------------------------------------
skiplfix:
	// 4401 
	/* SkipLFix:	cmp	TM_CoolieVal,COOLIE_RT */
	CMP(tm_coolieval, coolie_rt);
	/* je	@F */
	if ((dw)(tm_coolieval) == (dw)(coolie_rt)) {goto dummylabel8;}
	/* mov	al,BYTE PTR KF_RViewFix[K_STATUS] */
	al = *((&kf_rviewfix)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_rviewfix)+k_status););	// 2799 						mov	al,BYTE PTR KF_RViewFix[K_STATUS] */
	/* jz	SkipRFix */
	if (!(al & al)) {goto skiprfix;}
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
dummylabel8:
	// 4403 
	/* @@:		mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov	ax,VIEW_RPILOT		;assume pilot */
	ax = 4;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel9;}
	/* mov	ax,VIEW_RNAVIG */
	ax = 10;
dummylabel9:
	// 4405 
	/* @@:		call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;--------------------------------------------
	// 0 ;* left view (glance), sort pilot / navigator
	// 0 ;--------------------------------------------
skiprfix:
	// 4407 
	/* SkipRFix:	mov	al,BYTE PTR KF_LViewGlance[K_STATUS] */
	al = *((&kf_lviewglance)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_lviewglance)+k_status););	// 2816 mov	al,BYTE PTR KF_LViewGlance[K_STATUS] */
	/* jz	SkipLGlance */
	if (!(al & al)) {goto skiplglance;}
	/* mov SplitScreenBigMapIsOn,1 */
	splitscreenbigmapison = 1;
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	/* test	InCockpit,1	;in cockpit? */
	TEST(incockpit, 1);
	/* jz	SkipLGlance	;no -> */
	if (!(incockpit & 1)) {goto skiplglance;}
	/* mov	ax,VIEW_LPILOT		;assume pilot */
	ax = 2;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel10;}
	/* mov	ax,VIEW_LNAVIG */
	ax = 8;
dummylabel10:
	// 4409 
	/* @@:		call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jc	SkipLGlance	;mode already set -> */
	if (CF) {goto skiplglance;}
	/* mov	PrevViewMode,ax */
	prevviewmode = ax;
	/* mov	GlanceFlag,1 */
	*(glanceflag) = 1;
	/* mov	GlanceKeyPtr,OFFSET KF_LViewGlance[K_STATUS] */
	glancekeyptr = m2c::near_offset_external(kf_lviewglance)+k_status;
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;---------------------------------------------
	// 0 ;* right view (glance), sort pilot / navigator
	// 0 ;---------------------------------------------
skiplglance:
	// 4411 
	/* SkipLGlance:	mov	al,BYTE PTR KF_RViewGlance[K_STATUS] */
	al = *((&kf_rviewglance)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_rviewglance)+k_status););	// 2839 mov	al,BYTE PTR KF_RViewGlance[K_STATUS] */
	/* jz	SkipRGlance */
	if (!(al & al)) {goto skiprglance;}
	/* mov SplitScreenBigMapIsOn,1 */
	splitscreenbigmapison = 1;
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	/* test	InCockpit,1	;in cockpit? */
	TEST(incockpit, 1);
	/* jz	SkipRGlance	;no -> */
	if (!(incockpit & 1)) {goto skiprglance;}
	/* mov	ax,VIEW_RPILOT		;assume pilot */
	ax = 4;
	/* cmp	CrewMode,CREW_PILOT	;pilot? */
	CMP(crewmode, 0);
	/* je	@F			;yes -> */
	if ((dw)(crewmode) == (dw)(0)) {goto dummylabel11;}
	/* mov	ax,VIEW_RNAVIG */
	ax = 10;
dummylabel11:
	// 4413 
	/* @@:		call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jc	SkipRGlance	;mode already set -> */
	if (CF) {goto skiprglance;}
	/* mov	PrevViewMode,ax */
	prevviewmode = ax;
	/* mov	GlanceFlag,1 */
	*(glanceflag) = 1;
	/* mov	GlanceKeyPtr,OFFSET KF_RViewGlance[K_STATUS] */
	glancekeyptr = m2c::near_offset_external(kf_rviewglance)+k_status;
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;----------------------
	// 0 ;* tracking camera view
	// 0 ;----------------------
skiprglance:
	// 4415 
	/* mov ah, Key[K_ALT] */
	ah = *((&key)+56);
	/* and ah, Key[K_F1] */
	AND(ah, *((&key)+59));
	// 0 ;KTEST  KF_TrackingCam
	/* jz	SkipKF_TrackingCamUp */
	if (ah == 0) {goto skipkf_trackingcamup;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
intotracking:
	// 4417 
	/* IntoTracking:	mov	ax,VIEW_TRACKING */
	ax = 12;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jnc	@F		;change successful -> */
	if (!CF) {goto dummylabel12;}
	// 0 ;neg	TrkCamAlt	;toggle above / below
	/* add TrkCamAlt,2 */
	ADD(trkcamalt, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TrackingCamUp[K_STATE] */
	XCHG(al, *((&kf_trackingcamup)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TrackingCamUp[K_LOCK] */
	XCHG(ah, *((&kf_trackingcamup)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TrackingCamUp[K_STATUS],al */
	*((&kf_trackingcamup)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_trackingcamup)+k_state)));	// 2883 				                xchg	al,BYTE PTR KF_TrackingCamUp[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_trackingcamup)+k_lock)));	// 2884 xchg	ah,BYTE PTR KF_TrackingCamUp[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_trackingcamup)+k_status) = al;);	// 2885 mov	BYTE PTR KF_TrackingCamUp[K_STATUS],al */
dummylabel12:
	// 4419 
	/* @@:		jmp	UpdateView */
	goto updateview;
skipkf_trackingcamup:
	// 4421 
	// 0 ;KTEST	KF_TrackingCamUp
	/* mov	al,BYTE PTR KF_TrackingCam[K_STATUS] */
	al = *((&kf_trackingcam)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_trackingcam)+k_status););	// 2892 						mov	al,BYTE PTR KF_TrackingCam[K_STATUS] */
	/* jz	SkipTrackingZRK_and_ZSU */
	if (!(al & al)) {goto skiptrackingzrk_and_zsu;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	// 0 ;mov InCockpit,0
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_TRACKING */
	ax = 12;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jnc	@F		;change successful -> */
	if (!CF) {goto dummylabel13;}
	// 0 ;neg	TrkCamAlt	;toggle above / below
	/* sub TrkCamAlt,2 */
	SUB(trkcamalt, 2);
	// 0 ;KBOUNCE KF_TrackingCamUp
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_TrackingCam[K_STATE] */
	XCHG(al, *((&kf_trackingcam)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_TrackingCam[K_LOCK] */
	XCHG(ah, *((&kf_trackingcam)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_TrackingCam[K_STATUS],al */
	*((&kf_trackingcam)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_trackingcam)+k_state)));	// 2915 				                xchg	al,BYTE PTR KF_TrackingCam[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_trackingcam)+k_lock)));	// 2916 xchg	ah,BYTE PTR KF_TrackingCam[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_trackingcam)+k_status) = al;);	// 2917 mov	BYTE PTR KF_TrackingCam[K_STATUS],al */
dummylabel13:
	// 4423 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;-------------------------------------------------------------
	// 0 ;* ZRK and ZSU tracking camera view (Cloned from Tracking View
	// 0 ;-------------------------------------------------------------
skiptrackingzrk_and_zsu:
	// 4425 
	// 0 ;mov ah, Key[K_CTRL]
	// 0 ;and ah, Key[K_SHIFT]
	/* mov	al,BYTE PTR KF_ArmorCtrlShift[K_STATUS] */
	al = *((&kf_armorctrlshift)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_armorctrlshift)+k_status););	// 2929 				        mov	al,BYTE PTR KF_ArmorCtrlShift[K_STATUS] */
	/* jz	SkipKF_TrackingCamUp2 */
	if (!(al & al)) {goto skipkf_trackingcamup2;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,0
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_ZRK_AAA */
	ax = 40;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jnc	@F		;change successful -> */
	if (!CF) {goto dummylabel14;}
	// 0 ;neg	TrkCamAlt	;toggle above / below
	/* add TrkCamAlt2,2 ;originally was sub */
	ADD(trkcamalt2, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmorCtrlShift[K_STATE] */
	XCHG(al, *((&kf_armorctrlshift)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmorCtrlShift[K_LOCK] */
	XCHG(ah, *((&kf_armorctrlshift)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmorCtrlShift[K_STATUS],al */
	*((&kf_armorctrlshift)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_armorctrlshift)+k_state)));	// 2952 						xchg	al,BYTE PTR KF_ArmorCtrlShift[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_armorctrlshift)+k_lock)));	// 2953 xchg	ah,BYTE PTR KF_ArmorCtrlShift[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_armorctrlshift)+k_status) = al;);	// 2954 mov	BYTE PTR KF_ArmorCtrlShift[K_STATUS],al */
dummylabel14:
	// 4427 
	/* @@:		jmp	UpdateView */
	goto updateview;
skipkf_trackingcamup2:
	// 4429 
	// 0 ;KTEST	KF_TrackingCam
	// 0 ;KTEST KF_ChangeArmor
	// 0 ;mov ah, Key[K_CTRL]
	// 0 ;and ah, Key[K_ALT]
	/* mov	al,BYTE PTR KF_ArmorCtrlAlt[K_STATUS] */
	al = *((&kf_armorctrlalt)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_armorctrlalt)+k_status););	// 2963 						mov	al,BYTE PTR KF_ArmorCtrlAlt[K_STATUS] */
	/* jz	SkipTracking */
	if (!(al & al)) {goto skiptracking;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;IntoTracking:	mov	ax,VIEW_ZRK_AAA
	/* mov	ax,VIEW_ZRK_AAA */
	ax = 40;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jnc	@F		;change successful -> */
	if (!CF) {goto dummylabel15;}
	// 0 ;neg	TrkCamAlt	;toggle above / below
	/* sub TrkCamAlt2,2  ;originally was add */
	SUB(trkcamalt2, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ArmorCtrlAlt[K_STATE] */
	XCHG(al, *((&kf_armorctrlalt)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ArmorCtrlAlt[K_LOCK] */
	XCHG(ah, *((&kf_armorctrlalt)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ArmorCtrlAlt[K_STATUS],al */
	*((&kf_armorctrlalt)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_armorctrlalt)+k_state)));	// 2985 						xchg	al,BYTE PTR KF_ArmorCtrlAlt[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_armorctrlalt)+k_lock)));	// 2986 xchg	ah,BYTE PTR KF_ArmorCtrlAlt[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_armorctrlalt)+k_status) = al;);	// 2987 mov	BYTE PTR KF_ArmorCtrlAlt[K_STATUS],al */
dummylabel15:
	// 4431 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;-----------------------
	// 0 ;* satellite camera view
	// 0 ;-----------------------
skiptracking:
	// 4433 
	/* SkipTracking:	mov	al,BYTE PTR KF_SatelliteCam[K_STATUS] */
	al = *((&kf_satellitecam)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_satellitecam)+k_status););	// 2996 mov	al,BYTE PTR KF_SatelliteCam[K_STATUS] */
	/* jz	SkipSatellite */
	if (!(al & al)) {goto skipsatellite;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,1 */
	currentviewischecksix = 1;
	// 0 ;mov InCockpit,0
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_SATELLITE */
	ax = 14;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jnc	@F		;change successful -> */
	if (!CF) {goto dummylabel16;}
	// 0 ;* must have been VIEW_SATELLITE already so toggle topside / underside
	/* xor	SatCamSide,0ffffh */
	XOR(satcamside, 0x0ffff);
dummylabel16:
	// 4435 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;---------------
	// 0 ;* map view mode
	// 0 ;---------------
skipsatellite:
	// 4437 
	/* mov	al,BYTE PTR KF_MapView[K_STATUS] */
	al = *((&kf_mapview)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_mapview)+k_status););	// 3017 						mov	al,BYTE PTR KF_MapView[K_STATUS] */
	/* jz	SkipMapView */
	if (!(al & al)) {goto skipmapview;}
	// 0 ;mov AllowSplitScreenBigMap,1
	// 0 ;jmp check3
	/* cmp EScopeToggle,10 */
	CMP(escopetoggle, 10);
	/* jbe check1 */
	if ((dw)(escopetoggle) <= (dw)(10)) {goto check1;}
	/* jmp nope */
	goto nope;
check1:
	// 4439 
	/* cmp EScopeToggle,0 */
	CMP(escopetoggle, 0);
	/* jg check3 */
	if ((short)(escopetoggle) > (short)(0)) {goto check3;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* jmp nope */
	goto nope;
check3:
	// 4441 
	/* mov SplitScreenBigMapIsOn,1 */
	splitscreenbigmapison = 1;
nope:
	// 4443 
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	/* mov	ax,VIEW_MAP */
	ax = 16;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;-----------------
	// 0 ;* drone view mode
	// 0 ;-----------------
skipmapview:
	// 4445 
	/* mov	al,BYTE PTR KF_DroneSide[K_STATUS] */
	al = *((&kf_droneside)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;allied / enemy toggle?
/* m2c-phantom removed: 	R(al = *((&kf_droneside)+k_status););	// 3046 mov	al,BYTE PTR KF_DroneSide[K_STATUS] */
	/* jz	SkipDroneSide	;no -> */
	if (!(al & al)) {goto skipdroneside;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,0
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	// 0 ;* if GameViewMode = VIEW_DRONE then
	// 0 ;*    tmp = DroneMode xor A_E_TOGGLE
	// 0 ;*    if CurrentDroneOk(tmp) then
	// 0 ;*       DroneMode = tmp
	// 0 ;*    else
	// 0 ;*       if SelectNextDrone(tmp) = drone available then
	// 0 ;*          DroneMode = tmp
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
	/* cmp	GameViewMode,VIEW_DRONE	;drone view mode? */
	CMP(gameviewmode, 18);
	/* jne	FailDroneSide		;no -> */
	if ((dw)(gameviewmode) != (dw)(18)) {goto faildroneside;}
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* xor	bx,A_E_TOGGLE */
	XOR(bx, 0x2);
	/* call	CurrentDroneOk */
	CALL(currentdroneok, 0);
	/* jnc	@F		;current drone ok -> */
	if (!CF) {goto dummylabel17;}
	/* call	SelectNextDrone */
	CALL(selectnextdrone, 0);
	/* jc	FailDroneSide	;no drone available -> */
	if (CF) {goto faildroneside;}
dummylabel17:
	// 4447 
	/* @@:		mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
faildroneside:
	// 4449 
	/* FailDroneSide:	jmp	UpdateView */
	goto updateview;
skipdroneside:
	// 4451 
	/* SkipDroneSide:	mov	al,BYTE PTR KF_DroneType[K_STATUS] */
	al = *((&kf_dronetype)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;air / ground toggle?
/* m2c-phantom removed: 	R(al = *((&kf_dronetype)+k_status););	// 3078 mov	al,BYTE PTR KF_DroneType[K_STATUS] */
	/* jz	SkipDroneType	;no -> */
	if (!(al & al)) {goto skipdronetype;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,0
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	// 0 ;* if GameViewMode = VIEW_DRONE then
	// 0 ;*    tmp = DroneMode xor AIR_GND_TOGGLE
	// 0 ;*    if CurrentDroneOk(tmp) then
	// 0 ;*       DroneMode = tmp
	// 0 ;*    else
	// 0 ;*       if SelectNextDrone(tmp) = drone available then
	// 0 ;*          DroneMode = tmp
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
	/* cmp	GameViewMode,VIEW_DRONE	;drone view mode? */
	CMP(gameviewmode, 18);
	/* jne	FailDroneType		;no -> */
	if ((dw)(gameviewmode) != (dw)(18)) {goto faildronetype;}
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* xor	bx,AIR_GND_TOGGLE */
	XOR(bx, 0x4);
	/* call	CurrentDroneOk */
	CALL(currentdroneok, 0);
	/* jnc	@F		;current drone ok -> */
	if (!CF) {goto dummylabel18;}
	/* call	SelectNextDrone */
	CALL(selectnextdrone, 0);
	/* jc	FailDroneType	;no drone available -> */
	if (CF) {goto faildronetype;}
dummylabel18:
	// 4453 
	/* @@:		mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
faildronetype:
	// 4455 
	/* FailDroneType:	jmp	UpdateView */
	goto updateview;
skipdronetype:
	// 4457 
	/* mov	al,BYTE PTR KF_DroneView[K_STATUS] */
	al = *((&kf_droneview)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;drone view / next drone?
/* m2c-phantom removed: 	R(al = *((&kf_droneview)+k_status););	// 3112 mov	al,BYTE PTR KF_DroneView[K_STATUS] */
	/* jz	SkipDroneView	;no -> */
	if (!(al & al)) {goto skipdroneview;}
	// 0 ; VIEWS.ASM(1213): warning A6003: conditional jump lengthened : by 6 byte(s)
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;* ignore drone view if two player
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jnz	SkipDroneView */
	if ((twoplayer & 1) != 0) {goto skipdroneview;}
	// 0 ;* if GameViewMode = VIEW_DRONE then
	// 0 ;*    tmp = DroneMode
	// 0 ;*    if select next drone then
	// 0 ;*       if SelectNextDrone(tmp) = drone available then
	// 0 ;*          DroneMode = tmp
	// 0 ;*       endif
	// 0 ;*    else
	// 0 ;*       if SelectPrevDrone(tmp) = drone available then
	// 0 ;*          DroneMode = tmp
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* else
	// 0 ;*    if SelectAnyDrone(DroneMode) = drone available then
	// 0 ;*       GameViewMode = VIEW_DRONE
	// 0 ;*    endif
	// 0 ;* endif
	/* cmp	GameViewMode,VIEW_DRONE	;drone view mode? */
	CMP(gameviewmode, 18);
	/* jne	IntoDroneView		;no -> */
	if ((dw)(gameviewmode) != (dw)(18)) {goto intodroneview;}
	/* mov	al,BYTE PTR KF_DronePrev[K_STATUS] */
	al = *((&kf_droneprev)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;next or previous?
/* m2c-phantom removed: 	R(al = *((&kf_droneprev)+k_status););	// 3145 mov	al,BYTE PTR KF_DronePrev[K_STATUS] */
	/* jnz	@F		;previous -> */
	if ((al & al) != 0) {goto dummylabel19;}
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	// 0 ;mov InCockpit,0
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* call	SelectNextDrone */
	CALL(selectnextdrone, 0);
	/* jc	FailDroneView  	;no drone available -> */
	if (CF) {goto faildroneview;}
	/* mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
	/* jmp	UpdateView */
	goto updateview;
dummylabel19:
	// 4459 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_DronePrev[K_STATE] */
	XCHG(al, *((&kf_droneprev)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_DronePrev[K_LOCK] */
	XCHG(ah, *((&kf_droneprev)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_DronePrev[K_STATUS],al */
	*((&kf_droneprev)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_droneprev)+k_state)));	// 3167 xchg	al,BYTE PTR KF_DronePrev[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_droneprev)+k_lock)));	// 3168 xchg	ah,BYTE PTR KF_DronePrev[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_droneprev)+k_status) = al;);	// 3169 mov	BYTE PTR KF_DronePrev[K_STATUS],al */
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* call	SelectPrevDrone */
	CALL(selectprevdrone, 0);
	/* jc	FailDroneView  	;no drone available -> */
	if (CF) {goto faildroneview;}
	/* mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
	/* jmp	UpdateView */
	goto updateview;
intodroneview:
	// 4461 
	/* IntoDroneView:	call	SelectAnyDrone */
	CALL(selectanydrone, 0);
	/* jc	FailDroneView	;no drone available -> */
	if (CF) {goto faildroneview;}
	/* mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
	/* mov	ax,VIEW_DRONE */
	ax = 18;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
faildroneview:
	// 4463 
	/* FailDroneView:	jmp	UpdateView */
	goto updateview;
	// 0 ;----------------
	// 0 ;* spectator view
	// 0 ;----------------
skipdroneview:
	// 4465 
	/* mov	al,BYTE PTR KF_Spectator[K_STATUS] */
	al = *((&kf_spectator)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_spectator)+k_status););	// 3190 				        mov	al,BYTE PTR KF_Spectator[K_STATUS] */
	/* jz	SkipSpectator */
	if (!(al & al)) {goto skipspectator;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	// 0 ;mov InCockpit,0
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;KBOUNCE KF_Spectator
	// 0 ;* set spectator view, if already spectating then catch up with Tornado
	/* mov	ax,VIEW_SPECTATOR */
	ax = 20;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jc	CatchTornado */
	if (CF) {goto catchtornado;}
	// 0 ;jmp CatchTornado
	// 0 ;* if restore spectator view then check SPEC_VIEW is valid
	/* mov	al,BYTE PTR KF_RestoreSpec[K_STATUS] */
	al = *((&kf_restorespec)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_restorespec)+k_status););	// 3209 						mov	al,BYTE PTR KF_RestoreSpec[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel20;}
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* test	SpecValid,1 */
	TEST(specvalid, 1);
	/* jz	@F */
	if (!(specvalid & 1)) {goto dummylabel20;}
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;* if ViewPtr <> -1 (viewpoint valid) then
	// 0 ;*    SPEC_VIEW = V_VIEW
	// 0 ;* else
	// 0 ;*    SPEC_VIEW = M_VIEW
	// 0 ;* endif
dummylabel20:
	// 4467 
	/* @@:		mov	si,OFFSET V_VIEW	;assume viewpoint valid V_VIEW */
	si = m2c::near_offset_external(v_view);
	/* cmp	ViewPtr,-1		;viewpoint valid? */
	CMP(viewptr, -1);
	/* jne	@F			;yes -> */
	if ((dw)(viewptr) != (dw)(-1)) {goto dummylabel21;}
catchtornado:
	// 4469 
	/* CatchTornado:	mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
dummylabel21:
	// 4471 
	/* mov	di,OFFSET SPEC_VIEW */
	di = m2c::near_offset_external(spec_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3228 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3229 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	SPEC_VIEW.VP_ROLL,0	;keep horizon level - hack */
	spec_view.vp_roll = 0;
	// 0 ;* ensure zft never zero
	/* mov	ax,WORD PTR SPEC_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&spec_view+vp_zft_lo));
	/* or	ax,WORD PTR SPEC_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&spec_view+vp_zft_hi)));
	/* jnz	@F */
	if (ax != 0) {goto dummylabel22;}
	/* mov	WORD PTR SPEC_VIEW.VP_ZFT_LO,1 */
	*((dw*)((db*)&spec_view+vp_zft_lo)) = 1;
	// 0 ;* set SPEC_VIEW valid flag
dummylabel22:
	// 4473 
	/* @@:		mov	SpecValid,1 */
	specvalid = 1;
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;-------------
	// 0 ;* remote view
	// 0 ;-------------
skipspectator:
	// 4475 
	/* SkipSpectator:	mov	al,BYTE PTR KF_RemoteView[K_STATUS] */
	al = *((&kf_remoteview)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_remoteview)+k_status););	// 3247 mov	al,BYTE PTR KF_RemoteView[K_STATUS] */
	/* jz	SkipRemote */
	if (!(al & al)) {goto skipremote;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	// 0 ;mov InCockpit,0
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_REMOTE */
	ax = 22;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	// 0 ;* drop viewpoint anchor
	/* mov	si,OFFSET V_VIEW     ;hack change M_VIEW to V_VIEW - flyby view */
	si = m2c::near_offset_external(v_view);
	/* mov	di,OFFSET REM_VIEW */
	di = m2c::near_offset_external(rem_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3262 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3263 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;mov	REM_VIEW.VP_ROLL,0	;keep horizon level - comment off
	// 0 ;* ensure zft never zero
	/* mov	ax,WORD PTR REM_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&rem_view+vp_zft_lo));
	/* or	ax,WORD PTR REM_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&rem_view+vp_zft_hi)));
	/* jnz	@F */
	if (ax != 0) {goto dummylabel23;}
	/* mov	WORD PTR REM_VIEW.VP_ZFT_LO,1 */
	*((dw*)((db*)&rem_view+vp_zft_lo)) = 1;
dummylabel23:
	// 4477 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;--------------------------------
	// 0 ;* ZRK ROMB (SAM, SA-8) to Tornado view
	// 0 ;--------------------------------
skipremote:
	// 4479 
	/* SkipRemote:	mov	al,BYTE PTR KF_SAMLauncherToTornado[K_STATUS] */
	al = *((&kf_samlaunchertotornado)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_samlaunchertotornado)+k_status););	// 3281 mov	al,BYTE PTR KF_SAMLauncherToTornado[K_STATUS] */
	/* jz	SkipSAMLauncherToTornado1 */
	if (!(al & al)) {goto skipsamlaunchertotornado1;}
	// 0 ; VIEWS.ASM(1389): warning A6003: conditional jump lengthened : by 198 byte(s)
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,0
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_ZRK ;VIEW_ZRK */
	ax = 34;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* mov bx, 32 ; Pitch of 32 */
	bx = 32;
	/* mov	SAM_VIEW.VP_PITCH,bx */
	sam_view.vp_pitch = bx;
	/* mov	si,OFFSET SAM_VIEW */
	si = m2c::near_offset_external(sam_view);
	/* mov	di,OFFSET REM_VIEW */
	di = m2c::near_offset_external(rem_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3297 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3298 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	REM_VIEW.VP_PITCH,bx */
	rem_view.vp_pitch = bx;
	// 0 ;mov	REM_VIEW.VP_ROLL,0	;keep horizon level - comment off
	// 0 ;call	AdjustZoom
	// 0 ;* ensure zft never zero
	// 0 ;mov	cx,SatCamDist
	// 0 ;mov	bx,SatCamDistFine
	// 0 ;call	AdjustZoom
	/* mov	WORD PTR REM_VIEW.VP_PITCH,bx */
	rem_view.vp_pitch = bx;
	/* mov	WORD PTR REM_VIEW.VP_ZFT_LO,0 ;50 */
	*((dw*)((db*)&rem_view+vp_zft_lo)) = 0;
	// 0 ;add	WORD PTR REM_View.VP_ZFT_LO,ZFT_COCKPIT-2
	// 0 ;adc	WORD PTR REM_View.VP_ZFT_HI,0
	// 0 ;add	WORD PTR REM_View.VP_ZFT_LO,SAM_GOPHER
	// 0 ;add	WORD PTR REM_View.VP_XFT,SAM_GOPHER
	// 0 ;add	WORD PTR REM_View.VP_YFT,SAM_BUFFER
	// 0 ;adc	WORD PTR REM_View.VP_ZFT_HI,0
	/* mov ax,0 */
	ax = 0;
	/* add	WORD PTR REM_View.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&rem_view+vp_zft_lo)), ax);
	// 0 ;add	WORD PTR REM_View.VP_XFT,10;SAM_GOPHER
	// 0 ;mov ax,25
	// 0 ;add	WORD PTR REM_View.VP_XFT,ax;SAM_BUFFER
	/* adc	WORD PTR REM_View.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&rem_view+vp_zft_hi)), 0);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;; ??? ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	al,BYTE PTR KF_ZoomOut[K_STATUS] */
	al = *((&kf_zoomout)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_zoomout)+k_status););	// 3330 						mov	al,BYTE PTR KF_ZoomOut[K_STATUS] */
	/* jz SkipZRK1 */
	if (!(al & al)) {goto skipzrk1;}
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* sub ZRKrombCamDist, 2 */
	SUB(zrkrombcamdist, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ZoomOut[K_STATE] */
	XCHG(al, *((&kf_zoomout)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ZoomOut[K_LOCK] */
	XCHG(ah, *((&kf_zoomout)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_ZoomOut[K_STATUS],al */
	*((&kf_zoomout)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_zoomout)+k_state)));	// 3346 						xchg	al,BYTE PTR KF_ZoomOut[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_zoomout)+k_lock)));	// 3347 xchg	ah,BYTE PTR KF_ZoomOut[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_zoomout)+k_status) = al;);	// 3348 mov	BYTE PTR KF_ZoomOut[K_STATUS],al */
	/* jmp SkipZRK2 */
	goto skipzrk2;
skipzrk1:
	// 4481 
	/* mov	al,BYTE PTR KF_ZoomIn[K_STATUS] */
	al = *((&kf_zoomin)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_zoomin)+k_status););	// 3353 						mov	al,BYTE PTR KF_ZoomIn[K_STATUS] */
	/* jz SkipZRK2 */
	if (!(al & al)) {goto skipzrk2;}
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* add ZRKrombCamDist, 2 */
	ADD(zrkrombcamdist, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_ZoomIn[K_STATE] */
	XCHG(al, *((&kf_zoomin)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_ZoomIn[K_LOCK] */
	XCHG(ah, *((&kf_zoomin)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_zoomin)+k_status) = al;);	// 3368 						mov	BYTE PTR KF_ZoomIn[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_zoomin)+k_state)));	// 3369 						xchg	al,BYTE PTR KF_ZoomIn[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_zoomin)+k_lock)));	// 3370 xchg	ah,BYTE PTR KF_ZoomIn[K_LOCK] */
	/* mov	BYTE PTR KF_ZoomIn[K_STATUS],al */
	*((&kf_zoomin)+k_status) = al;
skipzrk2:
	// 4483 
	/* mov ax, ZRKrombCamDist ;Where 128 is actually TrkCamDist */
	ax = zrkrombcamdist;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;mov	ax,80 ;Where 128 is actually TrkCamDist
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,REM_VIEW.VP_XFT	;x + cx */
	ADD(cx, rem_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_36_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_36_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	REM_VIEW.VP_XSEC */
	INC(rem_view.vp_xsec);
__m2c_macrolocal_36_mvxy1:
	// 4485 
	/* __m2c_macrolocal_36_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_36_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_36_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	REM_VIEW.VP_XSEC */
	DEC(rem_view.vp_xsec);
__m2c_macrolocal_36_mvxy2:
	// 4487 
	/* __m2c_macrolocal_36_MvXY2:		mov	REM_VIEW.VP_XFT,cx */
	rem_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,REM_VIEW.VP_YFT	;y + bx */
	ADD(bx, rem_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_36_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_36_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	REM_VIEW.VP_YSEC */
	DEC(rem_view.vp_ysec);
__m2c_macrolocal_36_mvxy3:
	// 4489 
	/* __m2c_macrolocal_36_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_36_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_36_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	REM_VIEW.VP_YSEC */
	INC(rem_view.vp_ysec);
__m2c_macrolocal_36_mvxy4:
	// 4491 
	/* __m2c_macrolocal_36_MvXY4:		mov	REM_VIEW.VP_YFT,bx */
	rem_view.vp_yft = bx;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	ViewPtr,OFFSET REM_VIEW */
	viewptr = m2c::near_offset_external(rem_view);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	ax,WORD PTR REM_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&rem_view+vp_zft_lo));
	/* or	ax,WORD PTR REM_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&rem_view+vp_zft_hi)));
	// 0 ;mov	ax,WORD PTR REM_VIEW.VP_ZFT_LO
	// 0 ;or	ax,WORD PTR REM_VIEW.VP_ZFT_HI
	/* jnz	@F */
	if (ax != 0) {goto dummylabel24;}
	// 0 ;mov	WORD PTR M_VIEW.VP_ZFT_LO,1
	// 0 ;mov	WORD PTR REM_VIEW.VP_ZFT_LO,1
	// 0 ;mov REM_VIEW.VP_PITCH,100
	// 0 ;mov M_VIEW.VP_PITCH,100
dummylabel24:
	// 4493 
	/* mov ax, 32 */
	ax = 32;
	/* mov	REM_VIEW.VP_PITCH, ax */
	rem_view.vp_pitch = ax;
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;-----------------------------------------
	// 0 ;* ZSU-23-4 Shilka to Tornado View (First)
	// 0 ;-----------------------------------------
skipsamlaunchertotornado1:
	// 4495 
	/* mov	al,BYTE PTR KF_AAAToTornadoView1[K_STATUS] */
	al = *((&kf_aaatotornadoview1)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_aaatotornadoview1)+k_status););	// 3461 				        mov	al,BYTE PTR KF_AAAToTornadoView1[K_STATUS] */
	/* jz	SkipAAAToTornado2 */
	if (!(al & al)) {goto skipaaatotornado2;}
	// 0 ; VIEWS.ASM(1513): warning A6003: conditional jump lengthened : by 120 byte(s)
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,0
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_ZSU1;VIEW_ZSU1 */
	ax = 36;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* mov bx, 50 ;32 */
	bx = 50;
	/* mov	AAA_VIEW1.VP_PITCH,bx ;100 */
	aaa_view1.vp_pitch = bx;
	/* mov	si,OFFSET AAA_VIEW1 */
	si = m2c::near_offset_external(aaa_view1);
	/* mov	di,OFFSET REM_VIEW */
	di = m2c::near_offset_external(rem_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3477 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3478 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	REM_VIEW.VP_PITCH,bx ;100 */
	rem_view.vp_pitch = bx;
	// 0 ;mov	REM_VIEW.VP_ROLL,0	;keep horizon level - comment off
	// 0 ;call	AdjustZoom
	// 0 ;* ensure zft never zero
	// 0 ;mov	cx,SatCamDist
	// 0 ;mov	bx,SatCamDistFine
	// 0 ;call	AdjustZoom
	/* mov	WORD PTR REM_VIEW.VP_PITCH,bx;30 */
	rem_view.vp_pitch = bx;
	/* mov	WORD PTR REM_VIEW.VP_ZFT_LO,0 ;50 */
	*((dw*)((db*)&rem_view+vp_zft_lo)) = 0;
	// 0 ;add	WORD PTR REM_View.VP_ZFT_LO,ZFT_COCKPIT-2
	// 0 ;adc	WORD PTR REM_View.VP_ZFT_HI,0
	// 0 ;add	WORD PTR REM_View.VP_ZFT_LO,SAM_GOPHER
	// 0 ;add	WORD PTR REM_View.VP_XFT,SAM_GOPHER
	// 0 ;add	WORD PTR REM_View.VP_YFT,SAM_BUFFER
	// 0 ;adc	WORD PTR REM_View.VP_ZFT_HI,0
	/* mov ax,0 */
	ax = 0;
	/* add	WORD PTR REM_View.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&rem_view+vp_zft_lo)), ax);
	// 0 ;add	WORD PTR REM_View.VP_XFT,10;SAM_GOPHER
	// 0 ;mov ax,25
	// 0 ;add	WORD PTR REM_View.VP_XFT,ax;SAM_BUFFER
	/* adc	WORD PTR REM_View.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&rem_view+vp_zft_hi)), 0);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;; ??? ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,80 ;Where 128 is actually TrkCamDist */
	ax = 80;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,REM_VIEW.VP_XFT	;x + cx */
	ADD(cx, rem_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_41_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_41_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	REM_VIEW.VP_XSEC */
	INC(rem_view.vp_xsec);
__m2c_macrolocal_41_mvxy1:
	// 4497 
	/* __m2c_macrolocal_41_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_41_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_41_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	REM_VIEW.VP_XSEC */
	DEC(rem_view.vp_xsec);
__m2c_macrolocal_41_mvxy2:
	// 4499 
	/* __m2c_macrolocal_41_MvXY2:		mov	REM_VIEW.VP_XFT,cx */
	rem_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,REM_VIEW.VP_YFT	;y + bx */
	ADD(bx, rem_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_41_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_41_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	REM_VIEW.VP_YSEC */
	DEC(rem_view.vp_ysec);
__m2c_macrolocal_41_mvxy3:
	// 4501 
	/* __m2c_macrolocal_41_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_41_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_41_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	REM_VIEW.VP_YSEC */
	INC(rem_view.vp_ysec);
__m2c_macrolocal_41_mvxy4:
	// 4503 
	/* __m2c_macrolocal_41_MvXY4:		mov	REM_VIEW.VP_YFT,bx */
	rem_view.vp_yft = bx;
	/* mov	ViewPtr,OFFSET REM_VIEW */
	viewptr = m2c::near_offset_external(rem_view);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	ax,WORD PTR REM_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&rem_view+vp_zft_lo));
	/* or	ax,WORD PTR REM_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&rem_view+vp_zft_hi)));
	// 0 ;mov	ax,WORD PTR REM_VIEW.VP_ZFT_LO
	// 0 ;or	ax,WORD PTR REM_VIEW.VP_ZFT_HI
	/* jnz	@F */
	if (ax != 0) {goto dummylabel25;}
	// 0 ;mov	WORD PTR M_VIEW.VP_ZFT_LO,1
	// 0 ;mov	WORD PTR REM_VIEW.VP_ZFT_LO,1
	/* mov REM_VIEW.VP_PITCH,50	;30 */
	rem_view.vp_pitch = 50;
	/* mov M_VIEW.VP_PITCH,50    ;30 */
	m_view.vp_pitch = 50;
dummylabel25:
	// 4505 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;------------------------------------------
	// 0 ;* ZSU-23-4 Shilka to Tornado View (Second)
	// 0 ;------------------------------------------
skipaaatotornado2:
	// 4507 
	/* mov	al,BYTE PTR KF_AAAToTornadoView2[K_STATUS] */
	al = *((&kf_aaatotornadoview2)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_aaatotornadoview2)+k_status););	// 3588 				        mov	al,BYTE PTR KF_AAAToTornadoView2[K_STATUS] */
	/* jz	SkipToLookDown */
	if (!(al & al)) {goto skiptolookdown;}
	// 0 ; VIEWS.ASM(1613): warning A6003: conditional jump lengthened : by 123 byte(s)
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	// 0 ;mov InCockpit,0
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,VIEW_ZSU2;VIEW_ZSU2 */
	ax = 38;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* mov	AAA_VIEW2.VP_PITCH,50 ;30 */
	aaa_view2.vp_pitch = 50;
	/* mov	si,OFFSET AAA_VIEW2 */
	si = m2c::near_offset_external(aaa_view2);
	/* mov	di,OFFSET AAA_VIEW2 */
	di = m2c::near_offset_external(aaa_view2);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3602 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(aaa_view2););	// 3603 						mov	di,OFFSET AAA_VIEW2 */
	// 3604 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	AAA_VIEW2.VP_PITCH,50 ;30 */
	aaa_view2.vp_pitch = 50;
	// 0 ;mov	REM_VIEW.VP_ROLL,0	;keep horizon level - comment off
	// 0 ;call	AdjustZoom
	// 0 ;* ensure zft never zero
	// 0 ;mov	cx,SatCamDist
	// 0 ;mov	bx,SatCamDistFine
	// 0 ;call	AdjustZoom
	/* mov	WORD PTR AAA_VIEW2.VP_PITCH,50 ;30 */
	aaa_view2.vp_pitch = 50;
	/* mov	WORD PTR AAA_VIEW2.VP_ZFT_LO,0 ;50 */
	*((dw*)((db*)&aaa_view2+vp_zft_lo)) = 0;
	// 0 ;add	WORD PTR REM_View.VP_ZFT_LO,ZFT_COCKPIT-2
	// 0 ;adc	WORD PTR REM_View.VP_ZFT_HI,0
	// 0 ;add	WORD PTR REM_View.VP_ZFT_LO,SAM_GOPHER
	// 0 ;add	WORD PTR REM_View.VP_XFT,SAM_GOPHER
	// 0 ;add	WORD PTR REM_View.VP_YFT,SAM_BUFFER
	// 0 ;adc	WORD PTR REM_View.VP_ZFT_HI,0
	/* mov ax,0 ;height of ZSU */
	ax = 0;
	/* add	WORD PTR AAA_VIEW2.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&aaa_view2+vp_zft_lo)), ax);
	// 0 ;add	WORD PTR REM_View.VP_XFT,10;SAM_GOPHER
	// 0 ;mov ax,25
	// 0 ;add	WORD PTR REM_View.VP_XFT,ax;SAM_BUFFER
	/* adc	WORD PTR AAA_VIEW2.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&aaa_view2+vp_zft_hi)), 0);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;; ??? ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,100 ;Where 128 is actually TrkCamDist */
	ax = 100;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,AAA_VIEW2.VP_XFT	;x + cx */
	ADD(cx, aaa_view2.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_46_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_46_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	AAA_VIEW2.VP_XSEC */
	INC(aaa_view2.vp_xsec);
__m2c_macrolocal_46_mvxy1:
	// 4509 
	/* __m2c_macrolocal_46_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_46_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_46_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	AAA_VIEW2.VP_XSEC */
	DEC(aaa_view2.vp_xsec);
__m2c_macrolocal_46_mvxy2:
	// 4511 
	/* __m2c_macrolocal_46_MvXY2:		mov	AAA_VIEW2.VP_XFT,cx */
	aaa_view2.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,AAA_VIEW2.VP_YFT	;y + bx */
	ADD(bx, aaa_view2.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_46_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_46_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	AAA_VIEW2.VP_YSEC */
	DEC(aaa_view2.vp_ysec);
__m2c_macrolocal_46_mvxy3:
	// 4513 
	/* __m2c_macrolocal_46_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_46_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_46_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	AAA_VIEW2.VP_YSEC */
	INC(aaa_view2.vp_ysec);
__m2c_macrolocal_46_mvxy4:
	// 4515 
	/* __m2c_macrolocal_46_MvXY4:		mov	AAA_VIEW2.VP_YFT,bx */
	aaa_view2.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, aaa_view2.vp_xft));	// 3694 						add	cx,AAA_VIEW2.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(aaa_view2.vp_xsec));	// 3695 inc	AAA_VIEW2.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(aaa_view2.vp_xsec));	// 3696 dec	AAA_VIEW2.VP_XSEC */
queque000b:
	// 4517 
/* m2c-phantom removed: 	R(aaa_view2.vp_xft = cx;);	// 3697 ??000B:		mov	AAA_VIEW2.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, aaa_view2.vp_yft));	// 3698 add	bx,AAA_VIEW2.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(aaa_view2.vp_ysec));	// 3699 dec	AAA_VIEW2.VP_YSEC */
/* m2c-phantom removed: 	R(INC(aaa_view2.vp_ysec));	// 3700 inc	AAA_VIEW2.VP_YSEC */
queque000d:
	// 4519 
/* m2c-phantom removed: 	R(aaa_view2.vp_yft = bx;);	// 3701 ??000D:		mov	AAA_VIEW2.VP_YFT,bx */
	/* mov	ViewPtr,OFFSET AAA_VIEW2 */
	viewptr = m2c::near_offset_external(aaa_view2);
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	ax,WORD PTR AAA_VIEW2.VP_ZFT_LO */
	ax = *((dw*)((db*)&aaa_view2+vp_zft_lo));
	/* or	ax,WORD PTR AAA_VIEW2.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&aaa_view2+vp_zft_hi)));
	// 0 ;mov	ax,WORD PTR REM_VIEW.VP_ZFT_LO
	// 0 ;or	ax,WORD PTR REM_VIEW.VP_ZFT_HI
	/* jnz	@F */
	if (ax != 0) {goto dummylabel26;}
	// 0 ;mov	WORD PTR M_VIEW.VP_ZFT_LO,1
	// 0 ;mov	WORD PTR REM_VIEW.VP_ZFT_LO,1
	/* mov AAA_VIEW2.VP_PITCH,50	;30 */
	aaa_view2.vp_pitch = 50;
	/* mov M_VIEW.VP_PITCH,50      ;30 */
	m_view.vp_pitch = 50;
dummylabel26:
	// 4521 
	/* @@:		jmp	UpdateView */
	goto updateview;
	// 0 ;----------------
	// 0 ;* look down view
	// 0 ;----------------
skiptolookdown:
	// 4523 
	/* SkipToLookDown:	mov	al,BYTE PTR KF_LookDown[K_STATUS] */
	al = *((&kf_lookdown)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_lookdown)+k_status););	// 3722 mov	al,BYTE PTR KF_LookDown[K_STATUS] */
	/* jz	SkipLookDown */
	if (!(al & al)) {goto skiplookdown;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	// 0 ;mov InCockpit,1
	/* mov CockpitViews,1 */
	cockpitviews = 1;
	/* mov InWeaponView,0 */
	inweaponview = 0;
	/* mov	ax,VIEW_LOOKDOWN */
	ax = 24;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jmp	UpdateView */
	goto updateview;
	// 0 ;-------------
	// 0 ;* weapon view
	// 0 ;-------------
skiplookdown:
	// 4525 
	/* SkipLookDown:	mov	al,BYTE PTR KF_ViewWeapon[K_STATUS] */
	al = *((&kf_viewweapon)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_viewweapon)+k_status););	// 3738 mov	al,BYTE PTR KF_ViewWeapon[K_STATUS] */
	/* jz	UpdateView */
	if (!(al & al)) {goto updateview;}
	/* mov SplitScreenBigMapIsOn,0 */
	splitscreenbigmapison = 0;
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* mov HorizonValue6, 30 */
	horizonvalue6 = 30;
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	// 0 ;mov InWeaponView,1  ;This line is compiled gives a bizarre
	// 0 ;graphic if Tonka is on runaway and you hit the V key!
	// 0 ;mov InWeaponView,0   ;So let's see what happens if we set
	// 0 ;InWeaponView to 0
	/* mov	WpnCamBrg,300 ;256-->300 */
	wpncambrg = 300;
	/* cmp	ViewWeaponPtr,-1	;weapon available? */
	CMP(viewweaponptr, -1);
	/* je	UpdateView		;no -> */
	if ((dw)(viewweaponptr) == (dw)(-1)) {goto updateview;}
	/* mov	ax,VIEW_WEAPON */
	ax = 32;
	/* call	ChgGameViewMode */
	CALL(_group1, m2c::kchggameviewmode);
	/* jc	UpdateView		;already weapon view -> */
	if (CF) {goto updateview;}
	// 0 ;* ensure correct view if current weapon expired
	/* mov	si,ViewWeaponPtr   ;SAM_VIEW?? */
	si = viewweaponptr;
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	bx,_WPN_TYPE[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type)));
	/* add	si,MOB_REC_SIZE		;si -> viewpoint data */
	ADD(si, 6);
	/* mov	di,OFFSET WPN_VIEW */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3764 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 3765 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;mov	WPN_VIEW.VP_ROLL,0	;keep horizon level - hack
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* cmp	bx,NULL_WEAPON */
	CMP(bx, -1);
	/* jne	UpdateView */
	if ((dw)(bx) != (dw)(-1)) {goto updateview;}
	/* cmp	WORD PTR WPN_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel27;}
	/* mov	si,OFFSET WPN_VIEW */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* cmp	WORD PTR WPN_VIEW.VP_ZFT_LO,ax */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(ax)) {goto dummylabel27;}
	/* mov	al,1		;overhead */
	al = 1;
	/* jmp	SetExpView */
	goto setexpview;
dummylabel27:
	// 4527 
	/* @@:		xor	al,al		;normal */
	XOR(al, al);
setexpview:
	// 4529 
	/* SetExpView:	mov	WpnExpView,al */
	wpnexpview = al;
	// 0 ;------------------
	// 0 ;* update game view
	// 0 ;------------------
updateview:
	// 4531 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 3789 rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 3790 mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 3791 mov	di,OFFSET TMP_VIEW */
	// 3792 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* cmp	ShakeUp,1 */
	CMP(shakeup, 1);
	/* je	__m2c_macrolocal_51_skip */
	if ((dw)(shakeup) == (dw)(1)) {goto __m2c_macrolocal_51_skip;}
	/* jmp	exitdamagestatus */
	goto exitdamagestatus;
__m2c_macrolocal_51_skip:
	// 4533 
	// 0 ;Damage Ascertain - results in SHAKE of various degrees! kbs
	/* cmp SSF_HUD,1 */
	CMP(ssf_hud, 1);
	/* jne	@F */
	if ((dw)(ssf_hud) != (dw)(1)) {goto dummylabel28;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_52_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_52_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_52_skip:
	// 4535 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3808 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3809 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3810 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3811 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3812 mov	ShakeTimer,65535 */
dummylabel28:
	// 4537 
	/* cmp SSF_PilotMFD,1 */
	CMP(ssf_pilotmfd, 1);
	/* jne	@F */
	if ((dw)(ssf_pilotmfd) != (dw)(1)) {goto dummylabel29;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_53_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_53_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3818 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3819 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3820 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3821 						mov	ShakeTimer,65535 */
__m2c_macrolocal_53_skip:
	// 4539 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3823 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel29:
	// 4541 
	/* cmp SSF_NavigMFD,1 */
	CMP(ssf_navigmfd, 1);
	/* jne	@F */
	if ((dw)(ssf_navigmfd) != (dw)(1)) {goto dummylabel30;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_54_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_54_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_54_skip:
	// 4543 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3838 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3839 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3840 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3841 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3842 mov	ShakeTimer,65535 */
dummylabel30:
	// 4545 
	/* cmp SSF_TAB1,1 */
	CMP(ssf_tab1, 1);
	/* jne	@F */
	if ((dw)(ssf_tab1) != (dw)(1)) {goto dummylabel31;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_55_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_55_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3848 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3849 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3850 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3851 						mov	ShakeTimer,65535 */
__m2c_macrolocal_55_skip:
	// 4547 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3853 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel31:
	// 4549 
	/* cmp SSF_TAB2,1 */
	CMP(ssf_tab2, 1);
	/* jne	@F */
	if ((dw)(ssf_tab2) != (dw)(1)) {goto dummylabel32;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_56_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_56_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_56_skip:
	// 4551 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3868 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3869 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3870 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3871 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3872 mov	ShakeTimer,65535 */
dummylabel32:
	// 4553 
	/* cmp SSF_CommsRx,1 */
	CMP(ssf_commsrx, 1);
	/* jne	@F */
	if ((dw)(ssf_commsrx) != (dw)(1)) {goto dummylabel33;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_57_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_57_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3878 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3879 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3880 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3881 						mov	ShakeTimer,65535 */
__m2c_macrolocal_57_skip:
	// 4555 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3883 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel33:
	// 4557 
	/* cmp SSF_Oxygen,1 */
	CMP(ssf_oxygen, 1);
	/* jne	@F */
	if ((dw)(ssf_oxygen) != (dw)(1)) {goto dummylabel34;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_58_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_58_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_58_skip:
	// 4559 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3898 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3899 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3900 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3901 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3902 mov	ShakeTimer,65535 */
dummylabel34:
	// 4561 
	/* cmp SSF_Radar,1 */
	CMP(ssf_radar, 1);
	/* jne	@F */
	if ((dw)(ssf_radar) != (dw)(1)) {goto dummylabel35;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_59_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_59_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3908 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3909 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3910 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3911 						mov	ShakeTimer,65535 */
__m2c_macrolocal_59_skip:
	// 4563 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3913 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel35:
	// 4565 
	/* cmp SSF_ECM,1 */
	CMP(ssf_ecm, 1);
	/* jne	@F */
	if ((dw)(ssf_ecm) != (dw)(1)) {goto dummylabel36;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_60_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_60_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_60_skip:
	// 4567 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3928 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3929 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3930 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3931 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3932 mov	ShakeTimer,65535 */
dummylabel36:
	// 4569 
	/* cmp SSF_RWR,1 */
	CMP(ssf_rwr, 1);
	/* jne	@F */
	if ((dw)(ssf_rwr) != (dw)(1)) {goto dummylabel37;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_61_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_61_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3938 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3939 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3940 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3941 						mov	ShakeTimer,65535 */
__m2c_macrolocal_61_skip:
	// 4571 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3943 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel37:
	// 4573 
	/* cmp SSF_ADC,1 */
	CMP(ssf_adc, 1);
	/* jne	@F */
	if ((dw)(ssf_adc) != (dw)(1)) {goto dummylabel38;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_62_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_62_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_62_skip:
	// 4575 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3958 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3959 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3960 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3961 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3962 mov	ShakeTimer,65535 */
dummylabel38:
	// 4577 
	/* cmp SSF_RWR,1 */
	CMP(ssf_rwr, 1);
	/* jne	@F */
	if ((dw)(ssf_rwr) != (dw)(1)) {goto dummylabel39;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_63_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_63_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3968 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3969 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 3970 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3971 						mov	ShakeTimer,65535 */
__m2c_macrolocal_63_skip:
	// 4579 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3973 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel39:
	// 4581 
	/* cmp SSF_SPILS,1 */
	CMP(ssf_spils, 1);
	/* jne	@F */
	if ((dw)(ssf_spils) != (dw)(1)) {goto dummylabel40;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_64_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_64_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_HI */
	hshake = hshake_hi;
	/* mov	VShake,VSHAKE_LO */
	vshake = vshake_lo;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_64_skip:
	// 4583 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 3988 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3989 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_hi;);	// 3990 mov	HShake,HSHAKE_HI */
/* m2c-phantom removed: 	R(vshake = vshake_lo;);	// 3991 mov	VShake,VSHAKE_LO */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 3992 mov	ShakeTimer,65535 */
dummylabel40:
	// 4585 
	/* cmp SSF_Gear,1 */
	CMP(ssf_gear, 1);
	/* jne	@F */
	if ((dw)(ssf_gear) != (dw)(1)) {goto dummylabel41;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_65_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_65_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 3998 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 3999 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 4000 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 4001 						mov	ShakeTimer,65535 */
__m2c_macrolocal_65_skip:
	// 4587 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 4003 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel41:
	// 4589 
	/* cmp SSF_Flaps,1 */
	CMP(ssf_flaps, 1);
	/* jne	@F */
	if ((dw)(ssf_flaps) != (dw)(1)) {goto dummylabel42;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_66_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_66_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_66_skip:
	// 4591 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 4018 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 4019 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 4020 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 4021 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 4022 mov	ShakeTimer,65535 */
dummylabel42:
	// 4593 
	/* cmp SSF_Sweep,1 */
	CMP(ssf_sweep, 1);
	/* jne	@F */
	if ((dw)(ssf_sweep) != (dw)(1)) {goto dummylabel43;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_67_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_67_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 4028 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 4029 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 4030 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 4031 						mov	ShakeTimer,65535 */
__m2c_macrolocal_67_skip:
	// 4595 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 4033 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel43:
	// 4597 
	/* cmp SSF_Engine1,1 */
	CMP(ssf_engine1, 1);
	/* jne	@F */
	if ((dw)(ssf_engine1) != (dw)(1)) {goto dummylabel44;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_68_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_68_skip;}
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
__m2c_macrolocal_68_skip:
	// 4599 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 4048 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 4049 mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 4050 mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 4051 mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 4052 mov	ShakeTimer,65535 */
dummylabel44:
	// 4601 
	/* cmp SSF_Engine2,1 */
	CMP(ssf_engine2, 1);
	/* jne	@F */
	if ((dw)(ssf_engine2) != (dw)(1)) {goto dummylabel45;}
	/* cmp	ShakePriority,SHAKE_NOSE_DOWN	;;higher SHAKE_NOSE_DOWN shake in progress? */
	CMP(shakepriority, 5);
	/* ja	__m2c_macrolocal_69_skip			;;yes -> */
	if ((dw)(shakepriority) > (dw)(5)) {goto __m2c_macrolocal_69_skip;}
/* m2c-phantom removed: 	R(shakepriority = 5;);	// 4058 												mov	ShakePriority,SHAKE_NOSE_DOWN */
/* m2c-phantom removed: 	R(hshake = hshake_lo;);	// 4059 						mov	HShake,HSHAKE_LO */
/* m2c-phantom removed: 	R(vshake = vshake_off;);	// 4060 						mov	VShake,VSHAKE_OFF */
/* m2c-phantom removed: 	R(shaketimer = 65535;);	// 4061 						mov	ShakeTimer,65535 */
__m2c_macrolocal_69_skip:
	// 4603 
/* m2c-phantom removed: 	R(CMP(shakepriority, 5));	// 4063 						cmp	ShakePriority,SHAKE_NOSE_DOWN	 */
	/* mov	ShakePriority,SHAKE_NOSE_DOWN */
	shakepriority = 5;
	/* mov	HShake,HSHAKE_LO */
	hshake = hshake_lo;
	/* mov	VShake,VSHAKE_OFF */
	vshake = vshake_off;
	/* mov	ShakeTimer,65535 */
	shaketimer = 65535;
dummylabel45:
	// 4605 
skipshakeup:
	// 4607 
	/* mov	al,SSF_Engine1	;both engines failed? */
	al = ssf_engine1;
	/* and	al,SSF_Engine2 */
	AND(al, ssf_engine2);
	/* jnz	bothenginesdead		;yes -> */
	if (al != 0) {goto bothenginesdead;}
	// 0 ;mov	al,SSF_Engine1	;one engine has failed?
	// 0 ;or	al,SSF_Engine2
	// 0 ;jz	exitdamagestatus		;no ->
	// 0 ;SHAKE	SHAKE_NOSE_DOWN,HSHAKE_HI,VSHAKE_LO,65535;
	/* jz	exitdamagestatus */
	if (al == 0) {goto exitdamagestatus;}
bothenginesdead:
	// 4609 
	// 0 ;SHAKE	SHAKE_NOSE_DOWN,HSHAKE_OFF,VSHAKE_OFF,1;
exitdamagestatus:
	// 4611 
	/* mov	bx,GameViewMode */
	bx = gameviewmode;
__disp=*(dw*)(((db*)&updateswitch)+bx);
	/* jmp	UpdateSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
updatepilot:
	// 4613 
	// 0 ;---------------------------
	/* mov	ax,ZFT_COCKPIT */
	ax = 8;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatelpilot:
	// 4615 
updatelnavig:
	// 4617 
	// 0 ;---------------------------
	/* mov	ax,ZFT_COCKPIT */
	ax = 8;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;----------------------4-----
updaterpilot:
	// 4619 
updaternavig:
	// 4621 
	// 0 ;---------------------------
	/* mov	ax,ZFT_COCKPIT */
	ax = 8;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatenavig:
	// 4623 
	// 0 ;---------------------------
	/* mov	ViewPtr,-1 */
	viewptr = -1;
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatetracking:
	// 4625 
	// 0 ;---------------------------
	/* mov	al,BYTE PTR KF_ResetTrkCam[K_STATUS] */
	al = *((&kf_resettrkcam)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;reset view position?
/* m2c-phantom removed: 	R(al = *((&kf_resettrkcam)+k_status););	// 4126 mov	al,BYTE PTR KF_ResetTrkCam[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel46;}
	/* mov CockpitViews,0 */
	cockpitviews = 0;
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;Below are the original settings
	// 0 ;mov	TrkCamDist,64
	// 0 ;mov	TrkCamDistFine,0
	// 0 ;mov	TrkCamBrg,256
	// 0 ;mov	TrkCamBrgFine,0
	// 0 ;mov	TrkCamAlt,16
	// 0 ;mov	PitchFlip,0
	// 0 ;Modified settings, 25th April 2018
	/* mov TrkCamDist,62  ;formerly 60-->64-->98 */
	trkcamdist = 62;
	/* mov TrkCamDistFine,0 */
	trkcamdistfine = 0;
	/* mov TrkCamBrg,270  ;formerly 270--> */
	trkcambrg = 270;
	/* mov	TrkCamBrgFine,0 */
	trkcambrgfine = 0;
	/* mov	TrkCamAlt,38 */
	trkcamalt = 38;
	/* mov	PitchFlip,0 */
	pitchflip = 0;
	/* mov	TMP_VIEW.VP_PITCH,-10 */
	tmp_view.vp_pitch = -10;
	// 0 ;* adjust zoom
dummylabel46:
	// 4627 
	/* @@:		mov	cx,TrkCamDist */
	cx = trkcamdist;
	/* mov	bx,TrkCamDistFine */
	bx = trkcamdistfine;
	/* call	AdjustZoom ;UpdateTracking */
	CALL(adjustzoom, 0);
	/* mov	TrkCamDist,cx */
	trkcamdist = cx;
	/* mov	TrkCamDistFine,bx */
	trkcamdistfine = bx;
	// 0 ;* adjust track
	/* mov	cx,TrkCamBrg */
	cx = trkcambrg;
	/* mov	bx,TrkCamBrgFine */
	bx = trkcambrgfine;
	/* call	AdjustTrack  ;UpdateTracking */
	CALL(adjusttrack, 0);
	/* mov	TrkCamBrg,cx */
	trkcambrg = cx;
	/* mov	TrkCamBrgFine,bx */
	trkcambrgfine = bx;
	// 0 ; Adjust yaw ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	al,BYTE PTR KF_Yaw[K_STATUS] */
	al = *((&kf_yaw)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_yaw)+k_status););	// 4166 mov	al,BYTE PTR KF_Yaw[K_STATUS] */
	/* jz SkipAlex7 */
	if (!(al & al)) {goto skipalex7;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* cmp YawValue,-180 ;haha! */
	CMP(yawvalue, -180);
	/* jle FixToMinus180a */
	if ((short)(yawvalue) <= (short)(-180)) {goto fixtominus180a;}
	/* sub YawValue, 4 */
	SUB(yawvalue, 4);
	/* jmp @F */
	goto dummylabel47;
fixtominus180a:
	// 4629 
	/* mov YawValue,-180 */
	yawvalue = -180;
	/* jmp @F */
	goto dummylabel47;
dummylabel47:
	// 4631 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Yaw[K_STATE] */
	XCHG(al, *((&kf_yaw)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
	XCHG(ah, *((&kf_yaw)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Yaw[K_STATUS],al */
	*((&kf_yaw)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_yaw)+k_state)));	// 4188 						xchg	al,BYTE PTR KF_Yaw[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_yaw)+k_lock)));	// 4189 xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_yaw)+k_status) = al;);	// 4190 mov	BYTE PTR KF_Yaw[K_STATUS],al */
	/* jmp SkipAlex8 */
	goto skipalex8;
skipalex7:
	// 4633 
	/* mov	al,BYTE PTR KF_GndText[K_STATUS] */
	al = *((&kf_gndtext)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_gndtext)+k_status););	// 4196 mov	al,BYTE PTR KF_GndText[K_STATUS] */
	/* jz SkipAlex8 */
	if (!(al & al)) {goto skipalex8;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* cmp YawValue,180 */
	CMP(yawvalue, 180);
	/* jae FixToPositive180a */
	if ((dw)(yawvalue) >= (dw)(180)) {goto fixtopositive180a;}
	/* add YawValue,4 */
	ADD(yawvalue, 4);
	/* jmp @F */
	goto dummylabel48;
fixtopositive180a:
	// 4635 
	/* cmp YawValue,0 */
	CMP(yawvalue, 0);
	/* jle AddTwoToYawValue */
	if ((short)(yawvalue) <= (short)(0)) {goto addtwotoyawvalue;}
	/* mov YawValue,180 */
	yawvalue = 180;
	/* jmp @F */
	goto dummylabel48;
addtwotoyawvalue:
	// 4637 
	/* add YawValue,4 */
	ADD(yawvalue, 4);
dummylabel48:
	// 4639 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_GndText[K_STATE] */
	XCHG(al, *((&kf_gndtext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	XCHG(ah, *((&kf_gndtext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_gndtext)+k_status) = al;);	// 4221 						mov	BYTE PTR KF_GndText[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_gndtext)+k_state)));	// 4222 						xchg	al,BYTE PTR KF_GndText[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_gndtext)+k_lock)));	// 4223 xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	/* mov	BYTE PTR KF_GndText[K_STATUS],al */
	*((&kf_gndtext)+k_status) = al;
skipalex8:
	// 4641 
	/* mov bx, YawValue */
	bx = yawvalue;
	// 0 ;* adjust zft
	/* mov	ax,TrkCamAlt */
	ax = trkcamalt;
	/* cwd */
	CWD;
	/* add	WORD PTR TMP_VIEW.VP_YFT,bx ;hack 26th May2018 */
	ADD(tmp_view.vp_yft, bx);
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), dx);
	/* js	@F		;zft < 0 -> */
	if ((short)(*((dw*)((db*)&tmp_view+vp_zft_hi))) < 0) {goto dummylabel49;}
	/* mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* or	ax,WORD PTR TMP_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&tmp_view+vp_zft_hi)));
	/* jnz	ZftOk		;zft > 0 -> */
	if (ax != 0) {goto zftok;}
dummylabel49:
	// 4643 
	/* @@:		mov	WORD PTR TMP_VIEW.VP_ZFT_LO,1 */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = 1;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = 0;
	// 0 ;* adjust heading, pitch and roll
zftok:
	// 4645 
	/* ZftOk:		mov	dx,TrkCamBrg */
	dx = trkcambrg;
	/* mov	ax,TrkCamBrgFine */
	ax = trkcambrgfine;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,PitchFlip */
	ax = pitchflip;
	/* and	ax,256			;0 or 180 degs (wrt pitch flip) */
	AND(ax, 256);
	/* add	ax,TMP_VIEW.VP_HDG	;+ aircraft heading */
	ADD(ax, tmp_view.vp_hdg);
	/* add	ax,dx			;+ camera bearing */
	ADD(ax, dx);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,256			;+ 180 degs */
	ADD(ax, 256);
	/* and	ax,511			;0 .. 511 pdegs */
	AND(ax, 511);
	/* mov	TMP_VIEW.VP_HDG,ax */
	tmp_view.vp_hdg = ax;
	// 0 ;cmp TornadoType,IDS_TORNADO	;ADV variant?
	// 0 ;jne @F
	// 0 ;IDS variant
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 4263 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipAlex1 */
	if (!(al & al)) {goto skipalex1;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* sub HorizonValue, 2 */
	SUB(horizonvalue, 2);
	/* add TrkCamAlt,2 */
	ADD(trkcamalt, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 4279 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 4280 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 4281 mov	BYTE PTR KF_Minimise[K_STATUS],al */
	/* jmp SkipAlex2 */
	goto skipalex2;
skipalex1:
	// 4647 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 4287 mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipAlex2 */
	if (!(al & al)) {goto skipalex2;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* add HorizonValue, 2 */
	ADD(horizonvalue, 2);
	/* sub TrkCamAlt,2 */
	SUB(trkcamalt, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 4303 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 4304 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 4305 mov	BYTE PTR KF_Range[K_STATUS],al */
skipalex2:
	// 4649 
	/* mov bx, HorizonValue */
	bx = horizonvalue;
	/* mov	TMP_VIEW.VP_PITCH, bx ;hack from -10 */
	tmp_view.vp_pitch = bx;
	// 0 ;Mod by Frankie Kam on 21st April 2018
	// 0 ;User pressed Alt+P to toggle on/off horizon pitching
	// 0 ;when in F1 Tracking View mode?
	/* mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	al = *((&kf_togglepitchcam)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_togglepitchcam)+k_status););	// 4314 						mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	/* jz	@F		;no -> do nothing! */
	if (!(al & al)) {goto dummylabel50;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* xor PitchToggle,1 ;Toggle this value from 0 to 1 */
	XOR(pitchtoggle, 1);
	// 0 ;Clear the P (Pause) key. If this line is not executed,
	// 0 ;the game will pause!
	/* mov	BYTE PTR KF_Pause[K_STATUS],0 */
	*((&kf_pause)+k_status) = 0;
/* m2c-phantom removed: 	R(*((&kf_pause)+k_status) = 0;);	// 4321 						mov	BYTE PTR KF_Pause[K_STATUS],0 */
	// 0 ;Clear this Control+P key!
/* m2c-phantom removed: 	R(*((&kf_togglepitchcam)+k_status) = 0;);	// 4323 												mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	*((&kf_togglepitchcam)+k_status) = 0;
dummylabel50:
	// 4651 
	// 0 ;Check for 0 or 1
	/* cmp	PitchToggle,1 */
	CMP(pitchtoggle, 1);
	/* jne @F       ;-->Set the TMP_VIEW.VP_ROLL variable to 0 */
	if ((dw)(pitchtoggle) != (dw)(1)) {goto dummylabel51;}
	/* jmp SkipRoll ;-->Do nothing if PitchToggle equals to 1 */
	goto skiproll;
dummylabel51:
	// 4653 
	/* mov TMP_VIEW.VP_ROLL,0 */
	tmp_view.vp_roll = 0;
skiproll:
	// 4655 
	// 0 ;do nothing
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,TrkCamDist */
	ax = trkcamdist;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_85_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_85_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_85_mvxy1:
	// 4657 
	/* __m2c_macrolocal_85_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_85_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_85_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_85_mvxy2:
	// 4659 
	/* __m2c_macrolocal_85_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_85_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_85_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_85_mvxy3:
	// 4661 
	/* __m2c_macrolocal_85_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_85_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_85_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_85_mvxy4:
	// 4663 
	/* __m2c_macrolocal_85_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 4397 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 4398 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 4399 dec	TMP_VIEW.VP_XSEC */
queque0022:
	// 4665 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 4400 ??0022:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 4401 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 4402 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 4403 inc	TMP_VIEW.VP_YSEC */
queque0024:
	// 4667 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 4404 ??0024:		mov	TMP_VIEW.VP_YFT,bx */
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatezrk_aaa:
	// 4669 
	// 0 ;---------------------------
	/* mov	al,BYTE PTR KF_ResetTrkCam[K_STATUS] */
	al = *((&kf_resettrkcam)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;reset view position?
/* m2c-phantom removed: 	R(al = *((&kf_resettrkcam)+k_status););	// 4415 mov	al,BYTE PTR KF_ResetTrkCam[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel52;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;Below are the original settings
	// 0 ;mov	TrkCamDist,64
	// 0 ;mov	TrkCamDistFine,0
	// 0 ;mov	TrkCamBrg,256
	// 0 ;mov	TrkCamBrgFine,0
	// 0 ;mov	TrkCamAlt,16
	// 0 ;mov	PitchFlip,0
	// 0 ;Modified settings, 25th April 2018
	/* mov TrkCamDist,64  ;formerly 64 */
	trkcamdist = 64;
	/* mov TrkCamDistFine,0 */
	trkcamdistfine = 0;
	/* mov TrkCamBrg,300  ;formerly 270 */
	trkcambrg = 300;
	/* mov	TrkCamBrgFine,0 */
	trkcambrgfine = 0;
	/* mov	TrkCamAlt2,38 */
	trkcamalt2 = 38;
	/* mov	PitchFlip,0 */
	pitchflip = 0;
	/* mov	TMP2_VIEW.VP_PITCH,-10 */
	tmp2_view.vp_pitch = -10;
	// 0 ;* adjust zoom
dummylabel52:
	// 4671 
	/* @@:		mov	cx,TrkCamDist */
	cx = trkcamdist;
	/* mov	bx,TrkCamDistFine */
	bx = trkcamdistfine;
	/* call	AdjustZoom  ;UpdateZRK_AAA */
	CALL(adjustzoom, 0);
	/* mov	TrkCamDist,cx */
	trkcamdist = cx;
	/* mov	TrkCamDistFine,bx */
	trkcamdistfine = bx;
	// 0 ;* adjust track
	/* mov	cx,TrkCamBrg */
	cx = trkcambrg;
	/* mov	bx,TrkCamBrgFine */
	bx = trkcambrgfine;
	/* call	AdjustTrack   ;UpdateZRK_AAA */
	CALL(adjusttrack, 0);
	/* mov	TrkCamBrg,cx */
	trkcambrg = cx;
	/* mov	TrkCamBrgFine,bx */
	trkcambrgfine = bx;
	// 0 ; Adjust yaw ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	al,BYTE PTR KF_Yaw[K_STATUS] */
	al = *((&kf_yaw)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateZRK_AAA
/* m2c-phantom removed: 	R(al = *((&kf_yaw)+k_status););	// 4454 mov	al,BYTE PTR KF_Yaw[K_STATUS] */
	/* jz SkipAlex7b */
	if (!(al & al)) {goto skipalex7b;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* cmp YawValue,-180 ;haha! */
	CMP(yawvalue, -180);
	/* jle FixToMinus180ab */
	if ((short)(yawvalue) <= (short)(-180)) {goto fixtominus180ab;}
	/* sub YawValue_ZRK_AAA, 4 */
	SUB(yawvalue_zrk_aaa, 4);
	/* jmp @F */
	goto dummylabel53;
fixtominus180ab:
	// 4673 
	/* mov YawValue_ZRK_AAA,-180 */
	yawvalue_zrk_aaa = -180;
	/* jmp @F */
	goto dummylabel53;
dummylabel53:
	// 4675 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Yaw[K_STATE] */
	XCHG(al, *((&kf_yaw)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
	XCHG(ah, *((&kf_yaw)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Yaw[K_STATUS],al */
	*((&kf_yaw)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_yaw)+k_state)));	// 4476 						xchg	al,BYTE PTR KF_Yaw[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_yaw)+k_lock)));	// 4477 xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_yaw)+k_status) = al;);	// 4478 mov	BYTE PTR KF_Yaw[K_STATUS],al */
	/* jmp SkipAlex8b */
	goto skipalex8b;
skipalex7b:
	// 4677 
	/* mov	al,BYTE PTR KF_GndText[K_STATUS] */
	al = *((&kf_gndtext)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateZRK_AAA
/* m2c-phantom removed: 	R(al = *((&kf_gndtext)+k_status););	// 4484 mov	al,BYTE PTR KF_GndText[K_STATUS] */
	/* jz SkipAlex8b */
	if (!(al & al)) {goto skipalex8b;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* cmp YawValue_ZRK_AAA,180 */
	CMP(yawvalue_zrk_aaa, 180);
	/* jae FixToPositive180ab */
	if ((dw)(yawvalue_zrk_aaa) >= (dw)(180)) {goto fixtopositive180ab;}
	/* add YawValue_ZRK_AAA,4 */
	ADD(yawvalue_zrk_aaa, 4);
	/* jmp @F */
	goto dummylabel54;
fixtopositive180ab:
	// 4679 
	/* cmp YawValue_ZRK_AAA,0 */
	CMP(yawvalue_zrk_aaa, 0);
	/* jle AddTwoToYawValueb */
	if ((short)(yawvalue_zrk_aaa) <= (short)(0)) {goto addtwotoyawvalueb;}
	/* mov YawValue_ZRK_AAA,180 */
	yawvalue_zrk_aaa = 180;
	/* jmp @F */
	goto dummylabel54;
addtwotoyawvalueb:
	// 4681 
	/* add YawValue_ZRK_AAA,4 */
	ADD(yawvalue_zrk_aaa, 4);
dummylabel54:
	// 4683 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_GndText[K_STATE] */
	XCHG(al, *((&kf_gndtext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	XCHG(ah, *((&kf_gndtext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_GndText[K_STATUS],al */
	*((&kf_gndtext)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_gndtext)+k_state)));	// 4510 						xchg	al,BYTE PTR KF_GndText[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_gndtext)+k_lock)));	// 4511 xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_gndtext)+k_status) = al;);	// 4512 mov	BYTE PTR KF_GndText[K_STATUS],al */
skipalex8b:
	// 4685 
	/* mov bx, YawValue_ZRK_AAA */
	bx = yawvalue_zrk_aaa;
	// 0 ;* adjust zft
	// 0 ;mov	si,OFFSET SAM_VIEW
	// 0 ;mov	si,OFFSET AAA_VIEW2
	// 0 ;mov ah, Key[K_ALT]
	// 0 ;and ah, Key[K_SHIFT]
	/* mov	al,BYTE PTR KF_ChangeArmor[K_STATUS] */
	al = *((&kf_changearmor)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_changearmor)+k_status););	// 4525 						mov	al,BYTE PTR KF_ChangeArmor[K_STATUS] */
	/* jz @F */
	if (!(al & al)) {goto dummylabel55;}
	// 0 ;KBOUNCE KF_ChangeArmor
	/* mov CurrentViewIsCheckSix,0 */
	currentviewischecksix = 0;
	/* xor	ToggleZRK_ZSU,1	;alternate between ZRK-Romb and ZSU-23-4 */
	XOR(togglezrk_zsu, 1);
	/* jz Skipppper1b */
	if (togglezrk_zsu == 0) {goto skipppper1b;}
	/* mov	si,OFFSET AAA_VIEW1 */
	si = m2c::near_offset_external(aaa_view1);
	/* mov	di,OFFSET AAA_or_SAM_value */
	di = m2c::near_offset_external(aaa_or_sam_value);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4534 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(aaa_view1););	// 4535 						mov	si,OFFSET AAA_VIEW1 */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(aaa_or_sam_value););	// 4536 mov	di,OFFSET AAA_or_SAM_value */
	// 4537 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* jmp @F */
	goto dummylabel55;
skipppper1b:
	// 4687 
	/* mov	si,OFFSET SAM_VIEW */
	si = m2c::near_offset_external(sam_view);
	/* mov	di,OFFSET AAA_or_SAM_value */
	di = m2c::near_offset_external(aaa_or_sam_value);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4543 				        rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(sam_view););	// 4544 				        mov	si,OFFSET SAM_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(aaa_or_sam_value););	// 4545 mov	di,OFFSET AAA_or_SAM_value */
	// 4546 rep	movsw
	/* rep	movsw */
	REP MOVSW;
dummylabel55:
	// 4689 
/* m2c-phantom removed: 	R(*((&kf_changearmor)+k_status) = 0;);	// 4548 				        				        mov	BYTE PTR KF_ChangeArmor[K_STATUS],0 */
	/* mov	BYTE PTR KF_ChangeArmor[K_STATUS],0 */
	*((&kf_changearmor)+k_status) = 0;
	// 0 ;KBOUNCE KF_ChangeArmor
	/* mov	si,OFFSET AAA_or_SAM_value */
	si = m2c::near_offset_external(aaa_or_sam_value);
	/* mov	di,OFFSET TMP2_VIEW */
	di = m2c::near_offset_external(tmp2_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4554 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp2_view););	// 4555 						mov	di,OFFSET TMP2_VIEW */
	// 4556 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,TrkCamAlt2 */
	ax = trkcamalt2;
	/* cwd */
	CWD;
	/* add	WORD PTR TMP2_VIEW.VP_YFT,bx ;hack 26th May2018 */
	ADD(tmp2_view.vp_yft, bx);
	/* add	WORD PTR TMP2_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp2_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP2_VIEW.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&tmp2_view+vp_zft_hi)), dx);
	/* js	@F		;zft < 0 -> */
	if ((short)(*((dw*)((db*)&tmp2_view+vp_zft_hi))) < 0) {goto dummylabel56;}
	/* mov	ax,WORD PTR TMP2_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp2_view+vp_zft_lo));
	/* or	ax,WORD PTR TMP2_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&tmp2_view+vp_zft_hi)));
	/* jnz	ZftOkb		;zft > 0 -> */
	if (ax != 0) {goto zftokb;}
dummylabel56:
	// 4691 
	/* @@:		mov	WORD PTR TMP2_VIEW.VP_ZFT_LO,1 */
	*((dw*)((db*)&tmp2_view+vp_zft_lo)) = 1;
	/* mov	WORD PTR TMP2_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&tmp2_view+vp_zft_hi)) = 0;
	// 0 ;* adjust heading, pitch and roll
zftokb:
	// 4693 
	/* ZftOkb:		mov	dx,TrkCamBrg */
	dx = trkcambrg;
	/* mov	ax,TrkCamBrgFine */
	ax = trkcambrgfine;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,PitchFlip */
	ax = pitchflip;
	/* and	ax,256			;0 or 180 degs (wrt pitch flip) */
	AND(ax, 256);
	/* add	ax,TMP2_VIEW.VP_HDG	;+ aircraft heading */
	ADD(ax, tmp2_view.vp_hdg);
	/* add	ax,dx			;+ camera bearing */
	ADD(ax, dx);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,256			;+ 180 degs */
	ADD(ax, 256);
	/* and	ax,511			;0 .. 511 pdegs */
	AND(ax, 511);
	/* mov	TMP2_VIEW.VP_HDG,ax */
	tmp2_view.vp_hdg = ax;
	// 0 ;cmp TornadoType,IDS_TORNADO	;ADV variant?
	// 0 ;jne @F
	// 0 ;IDS variant
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateZRK_AAA
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 4589 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipAlex1b */
	if (!(al & al)) {goto skipalex1b;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* sub HorizonValue_ZRK_AAA, 2 */
	SUB(horizonvalue_zrk_aaa, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 4604 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 4605 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 4606 mov	BYTE PTR KF_Minimise[K_STATUS],al */
	/* jmp SkipAlex2b */
	goto skipalex2b;
skipalex1b:
	// 4695 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateZRK_AAA
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 4612 mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipAlex2b */
	if (!(al & al)) {goto skipalex2b;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* add HorizonValue_ZRK_AAA, 2 */
	ADD(horizonvalue_zrk_aaa, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 4627 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 4628 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 4629 mov	BYTE PTR KF_Range[K_STATUS],al */
skipalex2b:
	// 4697 
	/* mov bx, HorizonValue_ZRK_AAA */
	bx = horizonvalue_zrk_aaa;
	/* mov	TMP2_VIEW.VP_PITCH, bx ;hack from -10 */
	tmp2_view.vp_pitch = bx;
	// 0 ;Mod by Frankie Kam on 21st April 2018
	// 0 ;User pressed Control+P to toggle on/off horizon pitching
	// 0 ;when in F1 Tracking View mode?
	/* mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	al = *((&kf_togglepitchcam)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_togglepitchcam)+k_status););	// 4638 						mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	/* jz	@F		;no -> do nothing! */
	if (!(al & al)) {goto dummylabel57;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* xor PitchToggle,1 ;Toggle this value from 0 to 1 */
	XOR(pitchtoggle, 1);
	// 0 ;Clear the P (Pause) key. If this line is not executed,
	// 0 ;the game will pause!
	/* mov	BYTE PTR KF_Pause[K_STATUS],0 */
	*((&kf_pause)+k_status) = 0;
/* m2c-phantom removed: 	R(*((&kf_pause)+k_status) = 0;);	// 4645 						mov	BYTE PTR KF_Pause[K_STATUS],0 */
	// 0 ;Clear this Control+P key!
/* m2c-phantom removed: 	R(*((&kf_togglepitchcam)+k_status) = 0;);	// 4647 												mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	*((&kf_togglepitchcam)+k_status) = 0;
dummylabel57:
	// 4699 
	// 0 ;Check for 0 or 1
	/* cmp	PitchToggle,1 */
	CMP(pitchtoggle, 1);
	/* jne @F       ;-->Set the TMP_VIEW.VP_ROLL variable to 0 */
	if ((dw)(pitchtoggle) != (dw)(1)) {goto dummylabel58;}
	/* jmp SkipRoll2 ;-->Do nothing if PitchToggle equals to 1 */
	goto skiproll2;
dummylabel58:
	// 4701 
	/* mov TMP2_VIEW.VP_ROLL,0 */
	tmp2_view.vp_roll = 0;
skiproll2:
	// 4703 
	// 0 ;do nothing
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,TrkCamDist */
	ax = trkcamdist;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,TMP2_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp2_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_106_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_106_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP2_VIEW.VP_XSEC */
	INC(tmp2_view.vp_xsec);
__m2c_macrolocal_106_mvxy1:
	// 4705 
	/* __m2c_macrolocal_106_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_106_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_106_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP2_VIEW.VP_XSEC */
	DEC(tmp2_view.vp_xsec);
__m2c_macrolocal_106_mvxy2:
	// 4707 
	/* __m2c_macrolocal_106_MvXY2:		mov	TMP2_VIEW.VP_XFT,cx */
	tmp2_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP2_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp2_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_106_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_106_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP2_VIEW.VP_YSEC */
	DEC(tmp2_view.vp_ysec);
__m2c_macrolocal_106_mvxy3:
	// 4709 
	/* __m2c_macrolocal_106_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_106_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_106_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP2_VIEW.VP_YSEC */
	INC(tmp2_view.vp_ysec);
__m2c_macrolocal_106_mvxy4:
	// 4711 
	/* __m2c_macrolocal_106_MvXY4:		mov	TMP2_VIEW.VP_YFT,bx */
	tmp2_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp2_view.vp_xft));	// 4721 						add	cx,TMP2_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp2_view.vp_xsec));	// 4722 inc	TMP2_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp2_view.vp_xsec));	// 4723 dec	TMP2_VIEW.VP_XSEC */
queque0026:
	// 4713 
/* m2c-phantom removed: 	R(tmp2_view.vp_xft = cx;);	// 4724 ??0026:		mov	TMP2_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp2_view.vp_yft));	// 4725 add	bx,TMP2_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp2_view.vp_ysec));	// 4726 dec	TMP2_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp2_view.vp_ysec));	// 4727 inc	TMP2_VIEW.VP_YSEC */
queque0028:
	// 4715 
/* m2c-phantom removed: 	R(tmp2_view.vp_yft = bx;);	// 4728 ??0028:		mov	TMP2_VIEW.VP_YFT,bx */
	/* mov	ViewPtr,OFFSET TMP2_VIEW */
	viewptr = m2c::near_offset_external(tmp2_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatesatellite:
	// 4717 
	// 0 ;---------------------------
	/* mov	al,BYTE PTR KF_ResetSatCam[K_STATUS] */
	al = *((&kf_resetsatcam)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;reset view position?
/* m2c-phantom removed: 	R(al = *((&kf_resetsatcam)+k_status););	// 4738 mov	al,BYTE PTR KF_ResetSatCam[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel59;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	SatCamDist,32 ;Previously was 64 */
	satcamdist = 32;
	/* mov	SatCamDistFine,0 */
	satcamdistfine = 0;
	/* mov PitchFlip,0 */
	pitchflip = 0;
	/* mov SatCamSide,270 */
	satcamside = 270;
	// 0 ;* adjust heading, pitch and roll
dummylabel59:
	// 4719 
	/* @@:     mov dx,SatCamSide */
	dx = satcamside;
	/* and dx,0 */
	AND(dx, 0);
	/* mov ax, PitchFlip */
	ax = pitchflip;
	/* and ax,0 */
	AND(ax, 0);
	/* add ax,dx */
	ADD(ax, dx);
	/* add ax,TMP_VIEW.VP_HDG */
	ADD(ax, tmp_view.vp_hdg);
	/* and ax,511 */
	AND(ax, 511);
	/* mov TMP_VIEW.VP_HDG,ax */
	tmp_view.vp_hdg = ax;
	/* mov ax,270 */
	ax = 270;
	/* sub ax,dx */
	SUB(ax, dx);
	/* mov TMP_VIEW.VP_PITCH,90 */
	tmp_view.vp_pitch = 90;
	/* mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	al = *((&kf_togglepitchcam)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_togglepitchcam)+k_status););	// 4760 						mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	/* jz	@F		;no -> do nothing! */
	if (!(al & al)) {goto dummylabel60;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* xor PitchToggle,1 ;Toggle this value from 0 to 1 */
	XOR(pitchtoggle, 1);
	// 0 ;Clear the P (Pause) key. If this line is not executed, the game will pause!
	/* mov	BYTE PTR KF_Pause[K_STATUS],0 */
	*((&kf_pause)+k_status) = 0;
/* m2c-phantom removed: 	R(*((&kf_pause)+k_status) = 0;);	// 4767 						mov	BYTE PTR KF_Pause[K_STATUS],0 */
/* m2c-phantom removed: 	R(*((&kf_togglepitchcam)+k_status) = 0;);	// 4768 												mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	// 0 ;Clear this Control+P key!
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	*((&kf_togglepitchcam)+k_status) = 0;
dummylabel60:
	// 4721 
	/* cmp	PitchToggle,1 */
	CMP(pitchtoggle, 1);
	/* jne @F       ;-->Set the TMP_VIEW.VP_ROLL variable to 0 */
	if ((dw)(pitchtoggle) != (dw)(1)) {goto dummylabel61;}
	/* jmp SkipRoll3 ;-->Do nothing if PitchToggle equals to 1 */
	goto skiproll3;
dummylabel61:
	// 4723 
	/* mov TMP_VIEW.VP_ROLL,0  ;Don't roll the horizon! */
	tmp_view.vp_roll = 0;
skiproll3:
	// 4725 
	// 0 ;do nothing
	// 0 ;* adjust position wrt camera distance
	/* mov	cx,SatCamDist */
	cx = satcamdist;
	/* mov	bx,SatCamDistFine */
	bx = satcamdistfine;
	/* call	AdjustZoom */
	CALL(adjustzoom, 0);
	/* mov	SatCamDist,cx */
	satcamdist = cx;
	/* mov	SatCamDistFine,bx */
	satcamdistfine = bx;
	/* mov	ax,cx */
	ax = cx;
	/* mov	dx,SatCamSide */
	dx = satcamside;
	/* xor	ax,dx */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* cwd */
	CWD;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax  ;<--- 0 nice!!! Latest  ax */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), dx);
	/* js	@F		;zft < 0 -> */
	if ((short)(*((dw*)((db*)&tmp_view+vp_zft_hi))) < 0) {goto dummylabel62;}
	/* mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* or	ax,WORD PTR TMP_VIEW.VP_ZFT_HI */
	OR(ax, *((dw*)((db*)&tmp_view+vp_zft_hi)));
	/* jnz	SatCamZftOk	;zft > 0 -> */
	if (ax != 0) {goto satcamzftok;}
dummylabel62:
	// 4727 
	/* @@:		mov	WORD PTR TMP_VIEW.VP_ZFT_LO,1 */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = 1;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = 0;
satcamzftok:
	// 4729 
	/* SatCamZftOk:	mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 4804 mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipAlexis1 */
	if (!(al & al)) {goto skipalexis1;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* sub HorizonValue3, 2 */
	SUB(horizonvalue3, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 4818 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 4819 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 4820 mov	BYTE PTR KF_Range[K_STATUS],al */
	/* jmp SkipAlexis2 */
	goto skipalexis2;
skipalexis1:
	// 4731 
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 4826 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipAlexis2 */
	if (!(al & al)) {goto skipalexis2;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* add HorizonValue3, 2 */
	ADD(horizonvalue3, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 4839 						mov	BYTE PTR KF_Minimise[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 4840 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 4841 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
skipalexis2:
	// 4733 
	/* mov bx, HorizonValue3 */
	bx = horizonvalue3;
	/* mov	TMP_VIEW.VP_PITCH, bx ;hack from -10 */
	tmp_view.vp_pitch = bx;
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatemap:
	// 4735 
	// 0 ;---------------------------
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	MapView */
	CALLF(mapview, 0);
	/* mov	ViewPtr,-1 */
	viewptr = -1;
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatedrone:
	// 4737 
	// 0 ;---------------------------
	// 0 ;* tmp = DroneMode
	// 0 ;*
	// 0 ;* if SelectAnyDrone(tmp) = drone available then
	// 0 ;*    DroneMode = tmp
	// 0 ;* else
	// 0 ;*    default to tracking mode
	// 0 ;* endif
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* call	SelectAnyDrone */
	CALL(selectanydrone, 0);
	/* jnc	__m2c_macrolocal_115_skip */
	if (!CF) {goto __m2c_macrolocal_115_skip;}
	/* jmp	IntoTracking */
	goto intotracking;
__m2c_macrolocal_115_skip:
	// 4739 
	// 0 ;no drones available ->
	/* mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
	/* mov	si,[si]		;si -> compound mobile data block */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	// 0 ;* calc min dist wrt object size (min dist = max(object size * 2, 64))
	/* mov	al,[si].MOB_NUM */
	al = m2c::getdata(*((db*)((db*)&((mobile*)raddr(ds,si))->mob_num)));
	/* push	bx */
	PUSH(bx);
	/* push	si */
	PUSH(si);
	/* call	CalcMobMaxDim */
	CALLF(calcmobmaxdim, 0);
	/* pop	si */
	POP(si);
	/* pop	bx */
	POP(bx);
	/* shl	ax,1		;min dist = size * 2 */
	SHL(ax, 1);
	/* cmp	ax,98		;min dist >= 64ft?  Previously was 64. */
	CMP(ax, 98);
	/* jae	@F		;yes -> */
	if ((dw)(ax) >= (dw)(98)) {goto dummylabel63;}
	/* mov	ax,98  ;Prev was 64 */
	ax = 98;
dummylabel63:
	// 4741 
	/* @@:		mov	bp,ax */
	bp = ax;
	/* add	si,MOB_REC_SIZE	;si -> VIEWPOINT data */
	ADD(si, 6);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4893 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 4894 						mov	di,OFFSET TMP_VIEW */
	// 4895 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	si,bx		;si = drone mode */
	si = bx;
	// 0 ;* adjust zoom
	/* mov	cx,DrnCamDist[si] */
	cx = *(dw*)(((db*)&drncamdist)+si);
	/* mov	bx,DrnCamDistFine[si] */
	bx = *(dw*)(((db*)&drncamdistfine)+si);
	/* call	AdjustZoom */
	CALL(adjustzoom, 0);
	/* cmp	cx,bp		;dist >= min dist? */
	CMP(cx, bp);
	/* jae	@F		;yes -> */
	if ((dw)(cx) >= (dw)(bp)) {goto dummylabel64;}
	/* mov	cx,bp */
	cx = bp;
	/* xor	bx,bx */
	XOR(bx, bx);
dummylabel64:
	// 4743 
	/* @@:		mov	DrnCamDist[si],cx */
	*(dw*)(((db*)&drncamdist)+si) = cx;
	/* mov	DrnCamDistFine[si],bx */
	*(dw*)(((db*)&drncamdistfine)+si) = bx;
	// 0 ;* adjust track
	/* mov	cx,DrnCamBrg[si] */
	cx = *(dw*)(((db*)&drncambrg)+si);
	/* mov	bx,DrnCamBrgFine[si] */
	bx = *(dw*)(((db*)&drncambrgfine)+si);
	/* call	AdjustTrack  ;UpdateDrone */
	CALL(adjusttrack, 0);
	/* mov	DrnCamBrg[si],cx */
	*(dw*)(((db*)&drncambrg)+si) = cx;
	/* mov	DrnCamBrgFine[si],bx */
	*(dw*)(((db*)&drncambrgfine)+si) = bx;
	// 0 ; Adjust yaw ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	al,BYTE PTR KF_Yaw[K_STATUS] */
	al = *((&kf_yaw)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_yaw)+k_status););	// 4919 						mov	al,BYTE PTR KF_Yaw[K_STATUS] */
	/* jz SkipCandy9 */
	if (!(al & al)) {goto skipcandy9;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* cmp YawValue2,-180 ;haha! */
	CMP(yawvalue2, -180);
	/* jle FixToMinus180b */
	if ((short)(yawvalue2) <= (short)(-180)) {goto fixtominus180b;}
	/* sub YawValue2, 4 */
	SUB(yawvalue2, 4);
	/* jmp @F */
	goto dummylabel65;
fixtominus180b:
	// 4745 
	/* mov YawValue2,-180 */
	yawvalue2 = -180;
	/* jmp @F */
	goto dummylabel65;
dummylabel65:
	// 4747 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Yaw[K_STATE] */
	XCHG(al, *((&kf_yaw)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
	XCHG(ah, *((&kf_yaw)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Yaw[K_STATUS],al */
	*((&kf_yaw)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_yaw)+k_state)));	// 4941 						xchg	al,BYTE PTR KF_Yaw[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_yaw)+k_lock)));	// 4942 xchg	ah,BYTE PTR KF_Yaw[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_yaw)+k_status) = al;);	// 4943 mov	BYTE PTR KF_Yaw[K_STATUS],al */
	/* jmp SkipCandy8 */
	goto skipcandy8;
skipcandy9:
	// 4749 
	/* mov	al,BYTE PTR KF_GndText[K_STATUS] */
	al = *((&kf_gndtext)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;K_2
/* m2c-phantom removed: 	R(al = *((&kf_gndtext)+k_status););	// 4949 mov	al,BYTE PTR KF_GndText[K_STATUS] */
	/* jz SkipCandy8 */
	if (!(al & al)) {goto skipcandy8;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* cmp YawValue2,180 */
	CMP(yawvalue2, 180);
	/* jae FixToPositive180b */
	if ((dw)(yawvalue2) >= (dw)(180)) {goto fixtopositive180b;}
	/* add YawValue2,4 */
	ADD(yawvalue2, 4);
	/* jmp @F */
	goto dummylabel66;
fixtopositive180b:
	// 4751 
	/* cmp YawValue2,0 */
	CMP(yawvalue2, 0);
	/* jle AddTwoToYawValue2 */
	if ((short)(yawvalue2) <= (short)(0)) {goto addtwotoyawvalue2;}
	/* mov YawValue2,180 */
	yawvalue2 = 180;
	/* jmp @F */
	goto dummylabel66;
addtwotoyawvalue2:
	// 4753 
	/* add YawValue2,4 */
	ADD(yawvalue2, 4);
dummylabel66:
	// 4755 
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_GndText[K_STATE] */
	XCHG(al, *((&kf_gndtext)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	XCHG(ah, *((&kf_gndtext)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_gndtext)+k_status) = al;);	// 4974 						mov	BYTE PTR KF_GndText[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_gndtext)+k_state)));	// 4975 						xchg	al,BYTE PTR KF_GndText[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_gndtext)+k_lock)));	// 4976 xchg	ah,BYTE PTR KF_GndText[K_LOCK] */
	/* mov	BYTE PTR KF_GndText[K_STATUS],al */
	*((&kf_gndtext)+k_status) = al;
skipcandy8:
	// 4757 
	/* mov ax, YawValue2 */
	ax = yawvalue2;
	/* add	WORD PTR TMP_VIEW.VP_YFT,ax ;hack 26th May2018 */
	ADD(tmp_view.vp_yft, ax);
	// 0 ;* adjust zft (zft = max(zft + 16, 32))
	/* mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&tmp_view+vp_zft_lo));
	/* mov	dx,WORD PTR TMP_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&tmp_view+vp_zft_hi));
	/* add	ax,16 */
	ADD(ax, 16);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* jnz	@F		;zft > 65,535ft -> */
	if (dx != 0) {goto dummylabel67;}
	/* cmp	ax,32 */
	CMP(ax, 32);
	/* jae	@F   		;zft >= 32ft -> */
	if ((dw)(ax) >= (dw)(32)) {goto dummylabel67;}
	/* mov	ax,32 */
	ax = 32;
dummylabel67:
	// 4759 
	// 0 ; Added code by Frankie Kam on 25th May 2018
	// 0 ; Nice visual cinematic effects with the keys 1 and 0
	// 0 ;
	/* add	ax,HorizonValue2  ;amazing at last! sub */
	ADD(ax, horizonvalue2);
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,dx */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = dx;
	// 0 ;* adjust heading, pitch and roll
	/* mov	dx,DrnCamBrg[si] */
	dx = *(dw*)(((db*)&drncambrg)+si);
	/* mov	ax,DrnCamBrgFine[si] */
	ax = *(dw*)(((db*)&drncambrgfine)+si);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,TMP_VIEW.VP_HDG	;drone heading */
	ax = tmp_view.vp_hdg;
	/* add	ax,dx			;+ camera bearing */
	ADD(ax, dx);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,256			;+ 180 degs */
	ADD(ax, 256);
	/* and	ax,511			;0 .. 511 pdegs */
	AND(ax, 511);
	/* mov	TMP_VIEW.VP_HDG,ax */
	tmp_view.vp_hdg = ax;
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 5014 						mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipAlex5 */
	if (!(al & al)) {goto skipalex5;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* add HorizonValue2, 2 */
	ADD(horizonvalue2, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 5028 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 5029 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 5030 mov	BYTE PTR KF_Minimise[K_STATUS],al */
	/* jmp SkipAlex6 */
	goto skipalex6;
skipalex5:
	// 4761 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 5035 						mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipAlex6 */
	if (!(al & al)) {goto skipalex6;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* sub HorizonValue2, 2 */
	SUB(horizonvalue2, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 5049 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 5050 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 5051 mov	BYTE PTR KF_Range[K_STATUS],al */
skipalex6:
	// 4763 
	/* mov bx, HorizonValue2 */
	bx = horizonvalue2;
	/* mov	TMP_VIEW.VP_PITCH,bx ;hack from 0 to -10 to adjustable! This is it! Motherload! */
	tmp_view.vp_pitch = bx;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;Mod by Frankie Kam on 21st April 2018
	// 0 ;User pressed Control+P to toggle on/off horizon pitching
	// 0 ;when in F1 Tracking View mode?
	/* mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	al = *((&kf_togglepitchcam)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_togglepitchcam)+k_status););	// 5063 						mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	/* jz	@F		;no -> do nothing! */
	if (!(al & al)) {goto dummylabel68;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* xor PitchToggle,1 ;Toggle this value from 0 to 1 */
	XOR(pitchtoggle, 1);
	// 0 ;Clear the P (Pause) key. If this line is not executed,
	// 0 ;the game will pause!
	/* mov	BYTE PTR KF_Pause[K_STATUS],0 */
	*((&kf_pause)+k_status) = 0;
/* m2c-phantom removed: 	R(*((&kf_pause)+k_status) = 0;);	// 5070 						mov	BYTE PTR KF_Pause[K_STATUS],0 */
	// 0 ;Clear this Control+P key!
/* m2c-phantom removed: 	R(*((&kf_togglepitchcam)+k_status) = 0;);	// 5072 												mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	*((&kf_togglepitchcam)+k_status) = 0;
dummylabel68:
	// 4765 
	// 0 ;Check for 0 or 1
	/* cmp	PitchToggle,1 */
	CMP(pitchtoggle, 1);
	/* jne @F       ;-->Set the TMP_VIEW.VP_ROLL variable to 0 */
	if ((dw)(pitchtoggle) != (dw)(1)) {goto dummylabel69;}
	/* jmp SkipRoll4 ;-->Do nothing if PitchToggle equals to 1 */
	goto skiproll4;
dummylabel69:
	// 4767 
	/* mov TMP_VIEW.VP_ROLL,0 */
	tmp_view.vp_roll = 0;
skiproll4:
	// 4769 
	// 0 ;do nothing
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;mov	TMP_VIEW.VP_ROLL,0   ;hack from 0 to neg zero
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,DrnCamDist[si] */
	ax = *(dw*)(((db*)&drncamdist)+si);
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_131_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_131_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_131_mvxy1:
	// 4771 
	/* __m2c_macrolocal_131_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_131_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_131_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_131_mvxy2:
	// 4773 
	/* __m2c_macrolocal_131_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_131_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_131_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_131_mvxy3:
	// 4775 
	/* __m2c_macrolocal_131_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_131_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_131_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_131_mvxy4:
	// 4777 
	/* __m2c_macrolocal_131_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 5152 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 5153 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 5154 dec	TMP_VIEW.VP_XSEC */
queque002b:
	// 4779 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 5155 ??002B:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 5156 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 5157 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 5158 inc	TMP_VIEW.VP_YSEC */
queque002d:
	// 4781 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 5159 ??002D:		mov	TMP_VIEW.VP_YFT,bx */
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatespectator:
	// 4783 
	// 0 ;---------------------------
	/* mov	cx,SPEC_VIEW.VP_HDG */
	cx = spec_view.vp_hdg;
	/* mov	bx,SpecCamHdgFine */
	bx = speccamhdgfine;
	/* call	RotateHdg */
	CALL(rotatehdg, 0);
	/* mov	SPEC_VIEW.VP_HDG,cx */
	spec_view.vp_hdg = cx;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 5176 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipGarry1 */
	if (!(al & al)) {goto skipgarry1;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* sub HorizonValue5, 2 */
	SUB(horizonvalue5, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 5190 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 5191 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 5192 mov	BYTE PTR KF_Minimise[K_STATUS],al */
	/* jmp SkipGarry2 */
	goto skipgarry2;
skipgarry1:
	// 4785 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 5198 mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipGarry2 */
	if (!(al & al)) {goto skipgarry2;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* add HorizonValue5, 2 */
	ADD(horizonvalue5, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 5211 						mov	BYTE PTR KF_Range[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 5212 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 5213 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
skipgarry2:
	// 4787 
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov bx, horizonValue5 */
	bx = horizonvalue5;
	/* mov	SPEC_VIEW.VP_PITCH,bx */
	spec_view.vp_pitch = bx;
	/* mov	SpecCamHdgFine,bx */
	speccamhdgfine = bx;
	/* mov	ViewPtr,OFFSET SPEC_VIEW */
	viewptr = m2c::near_offset_external(spec_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updateremote:
	// 4789 
	// 0 ;---------------------------
	// 0 ;* calc range and bearing of Tornado from viewpoint
	/* mov	si,OFFSET REM_VIEW */
	si = m2c::near_offset_external(rem_view);
	/* mov	di,OFFSET M_VIEW */
	di = m2c::near_offset_external(m_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;* if range = 0 then do not update heading or pitch
	/* mov	bp,ax */
	bp = ax;
	/* or	bp,dx		;range = 0? */
	OR(bp, dx);
	/* jnz	__m2c_macrolocal_136_skip */
	if (bp != 0) {goto __m2c_macrolocal_136_skip;}
	/* jmp	RemoteOk */
	goto remoteok;
__m2c_macrolocal_136_skip:
	// 4791 
	// 0 ;yes ->
	// 0 ;* calc max heading change wrt time
	/* push	ax */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* (if spinning reduce rate to prevent heading flip glitch)
	/* mov	ax,256		;assume not spinning (180 degs / sec) */
	ax = 256;
	/* test	SpinFlag,1	;spinning? */
	TEST(spinflag, 1);
	/* jz	@F		;no -> */
	if (!(spinflag & 1)) {goto dummylabel70;}
	/* mov	ax,64		;(45 degs / sec) */
	ax = 64;
dummylabel70:
	// 4793 
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
	/* mov	bp,dx */
	bp = dx;
	/* mov	ax,REM_VIEW.VP_HDG */
	ax = rem_view.vp_hdg;
	/* mov	dx,bx */
	dx = bx;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,bp		;abs(hdg diff) > max rate? */
	CMP(ax, bp);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(bp)) {goto dummylabel71;}
	/* mov	ax,bp */
	ax = bp;
dummylabel71:
	// 4795 
	/* @@:		xor	ax,dx		;restore sign(hdg diff) */
	XOR(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	/* add	ax,REM_VIEW.VP_HDG */
	ADD(ax, rem_view.vp_hdg);
	/* and	ax,511 */
	AND(ax, 511);
	/* mov	REM_VIEW.VP_HDG,ax */
	rem_view.vp_hdg = ax;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 5272 mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipJake1 */
	if (!(al & al)) {goto skipjake1;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* sub HorizonValue, 2 */
	SUB(horizonvalue, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 5287 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 5288 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 5289 mov	BYTE PTR KF_Minimise[K_STATUS],al */
	/* jmp SkipJake2 */
	goto skipjake2;
skipjake1:
	// 4797 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;UpdateTracking
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 5295 mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipJake2 */
	if (!(al & al)) {goto skipjake2;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	// 0 ;mov	TMP_VIEW.VP_PITCH,-10 ;hack from -10
	/* add HorizonValue, 2 */
	ADD(horizonvalue, 2);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 5309 						mov	BYTE PTR KF_Range[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 5310 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 5311 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
skipjake2:
	// 4799 
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov bx, horizonValue */
	bx = horizonvalue;
	/* mov	REM_VIEW.VP_PITCH,bx */
	rem_view.vp_pitch = bx;
	/* pop	dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;* z diff = Tornado zft - viewpoint zft
	/* xor	bp,bp		;assume sign(z diff) = 0 */
	XOR(bp, bp);
	/* mov	bx,WORD PTR M_VIEW.VP_ZFT_LO */
	bx = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	cx,WORD PTR M_VIEW.VP_ZFT_HI */
	cx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* sub	bx,WORD PTR REM_VIEW.VP_ZFT_LO */
	SUB(bx, *((dw*)((db*)&rem_view+vp_zft_lo)));
	/* sbb	cx,WORD PTR REM_VIEW.VP_ZFT_HI */
	SBB(cx, *((dw*)((db*)&rem_view+vp_zft_hi)));
	/* jns	ScaleRange	;z diff >= 0 -> */
	if ((short)(cx) >= 0) {goto scalerange;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	bp,-1		;sign(z diff) = -1 */
	bp = -1;
	// 0 ;* ensure both range and z diff < 32,767
	// 0 ;* while (range > 32,767)
	// 0 ;*    range = range / 2
	// 0 ;*    z diff = z diff / 2
	// 0 ;* endwhile
scalerange:
	// 4801 
	/* ScaleRange:	test	dx,dx		;range > 65,535? */
	TEST(dx, dx);
	/* jnz	@F		;yes -> */
	if ((dx & dx) != 0) {goto dummylabel72;}
	/* cmp	ax,32767	;range > 32,767? */
	CMP(ax, 32767);
	/* jbe	ScaleZDiff	;no -> */
	if ((dw)(ax) <= (dw)(32767)) {goto scalezdiff;}
dummylabel72:
	// 4803 
	/* @@:		shr	dx,1		;range = range / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1		;z diff = z diff / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	ScaleRange */
	goto scalerange;
	// 0 ;* while (z diff > 32,767)
	// 0 ;*    range = range / 2
	// 0 ;*    z diff = z diff / 2
	// 0 ;* endwhile
scalezdiff:
	// 4805 
	/* ScaleZDiff:	test	cx,cx		;z diff > 65,535? */
	TEST(cx, cx);
	/* jnz	@F		;yes -> */
	if ((cx & cx) != 0) {goto dummylabel73;}
	/* cmp	bx,32767	;z diff > 32,767? */
	CMP(bx, 32767);
	/* jbe	ScaleOk		;no -> */
	if ((dw)(bx) <= (dw)(32767)) {goto scaleok;}
dummylabel73:
	// 4807 
	/* @@:		shr	dx,1		;range = range / 2 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* shr	cx,1		;z diff = z diff / 2 */
	SHR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* jmp	ScaleZDiff */
	goto scalezdiff;
	// 0 ;* ax = range
	// 0 ;* bx = z diff
scaleok:
	// 4809 
	/* ScaleOk:	cmp	ax,bx		;range = z diff? */
	CMP(ax, bx);
	/* jne	@F		;no -> */
	if ((dw)(ax) != (dw)(bx)) {goto dummylabel74;}
	/* mov	ax,64		;pitch = 45 degs */
	ax = 64;
	/* jmp	SetRemotePitch */
	goto setremotepitch;
dummylabel74:
	// 4811 
	/* @@:		jb	@F		;range < z diff -> */
	if (CF) {goto dummylabel75;}
	// 0 ;* pitch = arctan(z diff * 32768 / range)
	/* mov	dx,bx */
	dx = bx;
	/* mov	bx,ax */
	bx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;z diff * 32768 (result is fraction) */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx		;z diff * 32768 / range */
	DIV2(bx);
	/* push	bp */
	PUSH(bp);
	/* call	ArcTan		;arctan(z diff * 32768 / range) */
	CALLF(arctan, 0);
	/* pop	bp */
	POP(bp);
	/* mov	cl,7		;convert fine pdegs to pdegs */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;(works ok as 0 .. 45 degs only)
	/* jmp	SetRemotePitch */
	goto setremotepitch;
	// 0 ;* pitch = 128 - arctan(range * 32768 / z diff)
dummylabel75:
	// 4813 
	/* @@:		mov	dx,ax */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;range * 32768 (result is fraction) */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx		;range * 32768 / z diff */
	DIV2(bx);
	/* push	bp */
	PUSH(bp);
	/* call	ArcTan		;arctan(range * 32768 / z diff) */
	CALLF(arctan, 0);
	/* pop	bp */
	POP(bp);
	/* mov	cl,7		;convert fine pdegs to pdegs */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;(works ok as 0 .. 45 degs only)
	/* mov	dx,128 */
	dx = 128;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* sub	ax,dx		;128 - arctan(range * 32768 / z diff) */
	SUB(ax, dx);
setremotepitch:
	// 4815 
	/* SetRemotePitch:	xor	ax,bp		;restore sign(z diff) */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* and	ax,001ffh	;0 .. 511 pdegs */
	AND(ax, 0x001ff);
	/* mov bx, HorizonValue */
	bx = horizonvalue;
	/* mov	REM_VIEW.VP_PITCH,bx ;hack from ax */
	rem_view.vp_pitch = bx;
remoteok:
	// 4817 
	/* RemoteOk:	mov	ViewPtr,OFFSET REM_VIEW */
	viewptr = m2c::near_offset_external(rem_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatelookdown:
	// 4819 
	// 0 ;---------------------------
	/* mov	ViewPtr,-1 */
	viewptr = -1;
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatelookup:
	// 4821 
	// 0 ;---------------------------
	/* mov	ax,ZFT_COCKPIT */
	ax = 8;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), ax);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0  ;from 0 to -30 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	// 0 ;mov    TMP_VIEW.VP_PITCH, -160  ;-45 front look, too low kbs
	/* mov    TMP_VIEW.VP_PITCH, -30  ;-45 front look, too low kbs */
	tmp_view.vp_pitch = -30;
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* call LoadExtrnPan  ;hacked on 6/11/2017 - calls the info bar (8 pixels) to cover remaining space at bottom */
	CALL(loadextrnpan, 0);
	/* call UpdateExtrn   ;hacked on 6/11/2017 - calls the info bar (8 pixels) to cover remaining space at bottom */
	CALL(updateextrn, 0);
	// 0 ;=== zoom =====
	/* mov	cx,DrnCamDist[si] */
	cx = *(dw*)(((db*)&drncamdist)+si);
	/* mov	bx,DrnCamDistFine[si] */
	bx = *(dw*)(((db*)&drncamdistfine)+si);
	/* call	AdjustZoom */
	CALL(adjustzoom, 0);
	/* cmp	cx,bp		;dist >= min dist? */
	CMP(cx, bp);
	/* jae	@F		;yes -> */
	if ((dw)(cx) >= (dw)(bp)) {goto dummylabel76;}
	/* mov	cx,bp */
	cx = bp;
	/* xor	bx,bx */
	XOR(bx, bx);
dummylabel76:
	// 4823 
	/* @@:		mov	DrnCamDist[si],cx */
	*(dw*)(((db*)&drncamdist)+si) = cx;
	/* mov	DrnCamDistFine[si],bx */
	*(dw*)(((db*)&drncamdistfine)+si) = bx;
	// 0 ;=== zoom =====
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;=====================================================
	// 0 ;mov	dx,SatCamSide
	// 0 ;and	dx,256			;0 or 180 degs (wrt side)
	// 0 ;mov	ax,PitchFlip
	// 0 ;and	ax,256			;0 or 180 degs (wrt pitch flip)
	// 0 ;add	ax,dx			;adjust wrt side
	// 0 ;add	ax,TMP_VIEW.VP_HDG	;+ aircraft heading
	// 0 ;and	ax,511			;0 .. 511 pdegs
	// 0 ;mov	TMP_VIEW.VP_HDG,ax  ;hacked from ax to 123
	// 0 ;mov	ax,384	     		;assume topside  from 384 to 0 to 180 to 270
	// 0 ;sub	ax,dx	     		;adjust wrt side
	// 0 ;mov	TMP_VIEW.VP_PITCH,-115  ;-110 is nice
	// 0 ;mov	TMP_VIEW.VP_ROLL,0
	// 0 ;mov	cx,SatCamDist
	// 0 ;mov	bx,SatCamDistFine
	// 0 ;call	AdjustZoom
	// 0 ;mov	SatCamDist,cx
	// 0 ;mov	SatCamDistFine,bx
	// 0 ;mov	ax,cx
	// 0 ;mov	dx,SatCamSide
	// 0 ;xor	ax,dx
	// 0 ;sub	ax,dx
	// 0 ;cwd
	// 0 ;add	WORD PTR TMP_VIEW.VP_ZFT_LO,ax
	// 0 ;adc	WORD PTR TMP_VIEW.VP_ZFT_HI,dx
	// 0 ;js	@F		;zft < 0 ->
	// 0 ;mov	ax,WORD PTR TMP_VIEW.VP_ZFT_LO
	// 0 ;or	ax,WORD PTR TMP_VIEW.VP_ZFT_HI
	// 0 ;jnz	SatCamZftOk2	;zft > 0 ->
	// 0 ;@@:		mov	WORD PTR TMP_VIEW.VP_ZFT_LO,1
	// 0 ;mov	WORD PTR TMP_VIEW.VP_ZFT_HI,0
	// 0 ;SatCamZftOk2:	mov	ViewPtr,OFFSET TMP_VIEW
	// 0 ;call LoadExtrnPan  ;hacked on 6/11/2017 - calls the info bar (8 pixels) to cover remaining space at bottom
	// 0 ;call UpdateExtrn
	// 0 ;jmp	UpdateViewExit
	// 0 ;---------------------------
updatedemo:
	// 4825 
	// 0 ;---------------------------
	/* call	DemoView */
	CALL(demoview, 0);
	/* mov	ViewPtr,OFFSET DEMO_VIEW */
	viewptr = m2c::near_offset_external(demo_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updatedestroyed:
	// 4827 
	// 0 ;---------------------------
	/* call	DestroyView */
	CALL(destroyview, 0);
	/* mov	ViewPtr,OFFSET TMP_VIEW */
	viewptr = m2c::near_offset_external(tmp_view);
	/* jmp	UpdateViewExit */
	goto updateviewexit;
	// 0 ;---------------------------
updateweapon:
	// 4829 
	// 0 ;---------------------------
	/* call	WeaponView */
	CALL(weaponview, 0);
	/* mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	al = *((&kf_minimise)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_minimise)+k_status););	// 5511 						mov	al,BYTE PTR KF_Minimise[K_STATUS] */
	/* jz SkipFrankie1 */
	if (!(al & al)) {goto skipfrankie1;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* sub HorizonValue6, 5 */
	SUB(horizonvalue6, 5);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Minimise[K_STATE] */
	XCHG(al, *((&kf_minimise)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
	XCHG(ah, *((&kf_minimise)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Minimise[K_STATUS],al */
	*((&kf_minimise)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_minimise)+k_state)));	// 5525 						xchg	al,BYTE PTR KF_Minimise[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_minimise)+k_lock)));	// 5526 xchg	ah,BYTE PTR KF_Minimise[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_minimise)+k_status) = al;);	// 5527 mov	BYTE PTR KF_Minimise[K_STATUS],al */
	/* jmp SkipFrankie2 */
	goto skipfrankie2;
skipfrankie1:
	// 4831 
	/* mov	al,BYTE PTR KF_Range[K_STATUS] */
	al = *((&kf_range)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_range)+k_status););	// 5532 						mov	al,BYTE PTR KF_Range[K_STATUS] */
	/* jz SkipFrankie2 */
	if (!(al & al)) {goto skipfrankie2;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* add HorizonValue6, 5 */
	ADD(horizonvalue6, 5);
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Range[K_STATE] */
	XCHG(al, *((&kf_range)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	XCHG(ah, *((&kf_range)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
/* m2c-phantom removed: 	R(*((&kf_range)+k_status) = al;);	// 5545 						mov	BYTE PTR KF_Range[K_STATUS],al */
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_range)+k_state)));	// 5546 						xchg	al,BYTE PTR KF_Range[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_range)+k_lock)));	// 5547 xchg	ah,BYTE PTR KF_Range[K_LOCK] */
	/* mov	BYTE PTR KF_Range[K_STATUS],al */
	*((&kf_range)+k_status) = al;
skipfrankie2:
	// 4833 
	/* mov bx, horizonValue6 */
	bx = horizonvalue6;
	/* mov WPN_VIEW.VP_PITCH,bx */
	wpn_view.vp_pitch = bx;
	/* mov	ViewPtr,OFFSET WPN_VIEW */
	viewptr = m2c::near_offset_external(wpn_view);
	// 0 ;----------------------------
	// 0 ;* keep viewpoint above hills
	// 0 ;----------------------------
updateviewexit:
	// 4835 
	/* UpdateViewExit:	mov	si,ViewPtr */
	si = viewptr;
	/* cmp	si,-1				;visual enabled? */
	CMP(si, -1);
	/* je	SkipHillTest			;no -> */
	if ((dw)(si) == (dw)(-1)) {goto skiphilltest;}
	/* cmp	WORD PTR [si].VP_ZFT_HI,0	;zft > 65535ft? */
	CMP(*((dw*)raddr(ds,si+vp_zft_hi)), 0);
	/* ja	SkipHillTest			;yes -> */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_hi))) > (dw)(0)) {goto skiphilltest;}
	/* cmp	WORD PTR [si].VP_ZFT_LO,4095	;zft > 4095ft */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), 4095);
	/* ja	SkipHillTest			;yes -> */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(4095)) {goto skiphilltest;}
	/* push	si */
	PUSH(si);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* pop	si */
	POP(si);
	/* cmp	WORD PTR [si].VP_ZFT_LO,ax	;vp above hills? */
	CMP(*((dw*)raddr(ds,si+vp_zft_lo)), ax);
	/* ja	SkipHillTest			;yes -> */
	if ((dw)(*((dw*)raddr(ds,si+vp_zft_lo))) > (dw)(ax)) {goto skiphilltest;}
	/* add	ax,4				;hill height + 4 */
	ADD(ax, 4);
	/* mov	WORD PTR [si].VP_ZFT_LO,ax */
	m2c::setdata(&(*((dw*)raddr(ds,si+vp_zft_lo))), m2c::getdata(ax));
	// 0 ;call AdjustTrack ;hack ;UpdateViewExit - is this really necessary?
skiphilltest:
	// 4837 
	/* SkipHillTest:	ret */
	RETN(0);
adjustzoom:
	// 5582 
	// 0 ;--------------
	// 0 ;* sort zoom in
	// 0 ;--------------
edummylabel3:
	// 4839 
	/* mov	al,BYTE PTR KF_ZoomIn[K_STATUS] */
	al = *((&kf_zoomin)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;zoom in?
/* m2c-phantom removed: 	R(al = *((&kf_zoomin)+k_status););	// 5591 mov	al,BYTE PTR KF_ZoomIn[K_STATUS] */
	/* jz	SkipZoomIn	;no -> */
	if (!(al & al)) {goto skipzoomin;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,64*256	;64 ft / sec zoom (*256 scaling) */
	ax = 64*256;
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
	// 0 ;* fast zoom?
	/* test	BYTE PTR KF_FastZoomIn[K_STATUS],1 */
	TEST(*((&kf_fastzoomin)+k_status), 1);
	/* jz	@F		;slow -> */
	if (!(*((&kf_fastzoomin)+k_status) & 1)) {goto dummylabel77;}
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
dummylabel77:
	// 4841 
	/* @@:		sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* js	SetMinZoom	;< 0, set min zoom dist -> */
	if ((short)(cx) < 0) {goto setminzoom;}
	/* cmp	cx,MIN_ZOOM 	;< min zoom dist? */
	CMP(cx, 40);
	/* jae	ZoomOk		;no -> */
	if ((dw)(cx) >= (dw)(40)) {goto zoomok;}
setminzoom:
	// 4843 
	/* SetMinZoom:	mov	cx,MIN_ZOOM */
	cx = 40;
	/* mov	bx,0 */
	bx = 0;
	/* jmp	ZoomOk */
	goto zoomok;
	// 0 ;---------------
	// 0 ;* sort zoom out
	// 0 ;---------------
skipzoomin:
	// 4845 
	/* SkipZoomIn:	mov	al,BYTE PTR KF_ZoomOut[K_STATUS] */
	al = *((&kf_zoomout)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;zoom out?
/* m2c-phantom removed: 	R(al = *((&kf_zoomout)+k_status););	// 5631 mov	al,BYTE PTR KF_ZoomOut[K_STATUS] */
	/* jz	ZoomOk		;no -> */
	if (!(al & al)) {goto zoomok;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,64*256	;64 ft / sec zoom (*256 scaling) */
	ax = 64*256;
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
	// 0 ;* fast zoom?
	/* test	BYTE PTR KF_FastZoomOut[K_STATUS],1 */
	TEST(*((&kf_fastzoomout)+k_status), 1);
	/* jz	@F		;slow -> */
	if (!(*((&kf_fastzoomout)+k_status) & 1)) {goto dummylabel78;}
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
dummylabel78:
	// 4847 
	/* @@:		add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* cmp	cx,MAX_ZOOM 	;> max zoom dist? */
	CMP(cx, 2047);
	/* jbe	ZoomOk		;no -> */
	if ((dw)(cx) <= (dw)(2047)) {goto zoomok;}
	/* mov	cx,MAX_ZOOM */
	cx = 2047;
	/* mov	bx,0ffffh */
	bx = 0x0ffff;
zoomok:
	// 4849 
	/* ZoomOk:		ret */
	RETN(0);
adjusttrack:
	// 5672 
	// 0 ;* sort clockwise track
edummylabel4:
	// 4851 
	/* mov	al,BYTE PTR KF_TrackClk[K_STATUS] */
	al = *((&kf_trackclk)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;track clockwise?
/* m2c-phantom removed: 	R(al = *((&kf_trackclk)+k_status););	// 5679 mov	al,BYTE PTR KF_TrackClk[K_STATUS] */
	/* jz	SkipTrackClk	;no -> */
	if (!(al & al)) {goto skiptrackclk;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
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
	// 0 ;* fast track clockwise?
	/* test	BYTE PTR KF_FastTrkClk[K_STATUS],1 */
	TEST(*((&kf_fasttrkclk)+k_status), 1);
	/* jz	@F		;slow -> */
	if (!(*((&kf_fasttrkclk)+k_status) & 1)) {goto dummylabel79;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel79:
	// 4853 
	/* @@:		sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
	/* jmp	SkipTrackAClk */
	goto skiptrackaclk;
	// 0 ;* sort anti-clockwise track
skiptrackclk:
	// 4855 
	/* SkipTrackClk:	mov	al,BYTE PTR KF_TrackAClk[K_STATUS] */
	al = *((&kf_trackaclk)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;track anti-clockwise?  ;AdjustTrack
/* m2c-phantom removed: 	R(al = *((&kf_trackaclk)+k_status););	// 5712 mov	al,BYTE PTR KF_TrackAClk[K_STATUS] */
	/* jz	SkipTrackAClk	;no -> */
	if (!(al & al)) {goto skiptrackaclk;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
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
	// 0 ;* fast track anti-clockwise?
	/* test	BYTE PTR KF_FastTrkAClk[K_STATUS],1 */
	TEST(*((&kf_fasttrkaclk)+k_status), 1);
	/* jz	@F		;slow -> */
	if (!(*((&kf_fasttrkaclk)+k_status) & 1)) {goto dummylabel80;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel80:
	// 4857 
	/* @@:		add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
skiptrackaclk:
	// 4859 
	/* SkipTrackAClk:	ret */
	RETN(0);
rotatehdg:
	// 5749 
	// 0 ;* sort rotate right
edummylabel5:
	// 4861 
	/* mov	al,BYTE PTR KF_TrackAClk[K_STATUS] */
	al = *((&kf_trackaclk)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;RotateHdg
/* m2c-phantom removed: 	R(al = *((&kf_trackaclk)+k_status););	// 5756 mov	al,BYTE PTR KF_TrackAClk[K_STATUS] */
	/* jz	SkipRotateRt */
	if (!(al & al)) {goto skiprotatert;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
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
	if (!(*((&kf_fasttrkaclk)+k_status) & 1)) {goto dummylabel81;}
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel81:
	// 4863 
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
	// 4865 
	/* SkipRotateRt:	mov	al,BYTE PTR KF_TrackClk[K_STATUS] */
	al = *((&kf_trackclk)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_trackclk)+k_status););	// 5788 mov	al,BYTE PTR KF_TrackClk[K_STATUS] */
	/* jz	SkipRotateLt */
	if (!(al & al)) {goto skiprotatelt;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
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
	if (!(*((&kf_fasttrkclk)+k_status) & 1)) {goto dummylabel82;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
dummylabel82:
	// 4867 
	/* @@:		add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
skiprotatelt:
	// 4869 
	/* SkipRotateLt:	ret */
	RETN(0);
selectnextdrone:
	// 5827 
	/* mov	si,DroneCrntPtrs[bx] ;* kill: di, bp, flags (except cf) */
	si = *(dw*)(((db*)&dronecrntptrs)+bx);
edummylabel6:
	// 4871 
	/* mov	bp,si			;store starting place */
	bp = si;
nextdroneloop:
	// 4873 
	/* NextDroneLoop:	cmp	si,DroneListEnds[bx]	;end of list? */
	CMP(si, *(dw*)(((db*)&dronelistends)+bx));
	/* je	@F			;yes -> */
	if ((dw)(si) == (dw)(*(dw*)(((db*)&dronelistends)+bx))) {goto dummylabel83;}
	/* add	si,2			;si -> next drone */
	ADD(si, 2);
	/* jmp	NextPtrOk */
	goto nextptrok;
dummylabel83:
	// 4875 
	/* @@:		mov	si,DroneListPtrs[bx]	;si -> first drone */
	si = *(dw*)(((db*)&dronelistptrs)+bx);
nextptrok:
	// 4877 
	/* NextPtrOk:	mov	di,[si]			;di -> compound mobile data block */
	di = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* cmp	_DRONE_SIDE[di],DEAD	;drone valid? */
	CMP(((drone_data*)raddr(ds,(6+18)+di))->drone_side, 0);
	/* jne	@F			;yes -> */
	if ((db)(((drone_data*)raddr(ds,(6+18)+di))->drone_side) != (db)(0)) {goto dummylabel84;}
	/* cmp	si,bp			;back to starting place? */
	CMP(si, bp);
	/* jne	NextDroneLoop		;no -> */
	if ((dw)(si) != (dw)(bp)) {goto nextdroneloop;}
	/* stc				;cf = 1 = no drone available */
	STC;
	/* ret */
	RETN(0);
dummylabel84:
	// 4879 
	/* @@:		clc				;cf = 0 = drone selected */
	CLC;
	/* ret */
	RETN(0);
selectprevdrone:
	// 5855 
	/* mov	si,DroneCrntPtrs[bx] ;* kill: di, bp, flags (except cf) */
	si = *(dw*)(((db*)&dronecrntptrs)+bx);
edummylabel7:
	// 4881 
	/* mov	bp,si			;store starting place */
	bp = si;
prevdroneloop:
	// 4883 
	/* PrevDroneLoop:	cmp	si,DroneListPtrs[bx]	;start of list? */
	CMP(si, *(dw*)(((db*)&dronelistptrs)+bx));
	/* je	@F			;yes -> */
	if ((dw)(si) == (dw)(*(dw*)(((db*)&dronelistptrs)+bx))) {goto dummylabel85;}
	/* sub	si,2			;si -> prev drone */
	SUB(si, 2);
	/* jmp	PrevPtrOk */
	goto prevptrok;
dummylabel85:
	// 4885 
	/* @@:		mov	si,DroneListEnds[bx]	;si -> last drone */
	si = *(dw*)(((db*)&dronelistends)+bx);
prevptrok:
	// 4887 
	/* PrevPtrOk:	mov	di,[si]			;di -> compound mobile data block */
	di = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* cmp	_DRONE_SIDE[di],DEAD	;drone valid? */
	CMP(((drone_data*)raddr(ds,(6+18)+di))->drone_side, 0);
	/* jne	@F			;yes -> */
	if ((db)(((drone_data*)raddr(ds,(6+18)+di))->drone_side) != (db)(0)) {goto dummylabel86;}
	/* cmp	si,bp			;back to starting place? */
	CMP(si, bp);
	/* jne	PrevDroneLoop		;no -> */
	if ((dw)(si) != (dw)(bp)) {goto prevdroneloop;}
	/* stc				;cf = 1 = no drone available */
	STC;
	/* ret */
	RETN(0);
dummylabel86:
	// 4889 
	/* @@:		clc				;cf = 0 = drone selected */
	CLC;
	/* ret */
	RETN(0);
currentdroneok:
	// 5883 
	/* mov	si,DroneCrntPtrs[bx] ;* kill: di, flags (except cf) */
	si = *(dw*)(((db*)&dronecrntptrs)+bx);
edummylabel8:
	// 4891 
	/* mov	di,[si]		;di -> compound mobile data block */
	di = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* cmp	_DRONE_SIDE[di],DEAD	;drone valid? */
	CMP(((drone_data*)raddr(ds,(6+18)+di))->drone_side, 0);
	/* je	@F			;no -> */
	if ((db)(((drone_data*)raddr(ds,(6+18)+di))->drone_side) == (db)(0)) {goto dummylabel87;}
	/* clc			;cf = 0 = drone valid */
	CLC;
	/* ret */
	RETN(0);
dummylabel87:
	// 4893 
	/* @@:		stc			;cf = 1 = drone invalid */
	STC;
	/* ret */
	RETN(0);
selectanydrone:
	// 5904 
	// 0 ;* tmp = DroneMode
	// 0 ;* cnt = 4
	// 0 ;* found drone = false
	// 0 ;*
	// 0 ;* loop
	// 0 ;*    if CurrentDroneOk(tmp) then
	// 0 ;*       found drone = true
	// 0 ;*    else
	// 0 ;*       if SelectNextDrone(tmp) = drone available then
	// 0 ;*          found drone = true
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* exit if cnt = 1 or found drone
	// 0 ;*    cnt = cnt - 1
	// 0 ;*    tmp = (tmp + 2) and 0110b
	// 0 ;* endloop
edummylabel9:
	// 4895 
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* mov	cx,4 */
	cx = 4;
anydroneloop:
	// 4897 
	/* AnyDroneLoop:	call	CurrentDroneOk */
	CALL(currentdroneok, 0);
	/* jnc	@F		;current drone ok -> */
	if (!CF) {goto dummylabel88;}
	/* call	SelectNextDrone */
	CALL(selectnextdrone, 0);
	/* jnc	@F		;drone available -> */
	if (!CF) {goto dummylabel88;}
	/* add	bx,2		;next mode */
	ADD(bx, 2);
	/* and	bx,0110b	;wrap around */
	AND(bx, 0x6);
	/* loop	AnyDroneLoop */
	LOOP(anydroneloop);
	/* stc		;cf = 1 = no drone available */
	STC;
dummylabel88:
	// 4899 
	/* @@:		ret */
	RETN(0);
selectrnddrone:
	// 5945 
	// 0 ;* select random category
edummylabel10:
	// 4901 
	/* call	RandX */
	CALLF(randx, 0);
	/* mov	bx,A_AIR_MODE	;40% chance */
	bx = 0x0;
	/* cmp	ax,(40*256)/100 */
	CMP(ax, (40*256)/100);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)((40*256)/100)) {goto dummylabel89;}
	/* mov	bx,E_AIR_MODE	;40% chance */
	bx = 0x2;
	/* cmp	ax,(80*256)/100 */
	CMP(ax, (80*256)/100);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)((80*256)/100)) {goto dummylabel89;}
	/* mov	bx,A_GND_MODE	;10% chance */
	bx = 0x4;
	/* cmp	ax,(90*256)/100 */
	CMP(ax, (90*256)/100);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)((90*256)/100)) {goto dummylabel89;}
	/* mov	bx,E_GND_MODE	;10% chance */
	bx = 0x6;
	// 0 ;* select random starting place within category
dummylabel89:
	// 4903 
	/* @@:		call	RandX */
	CALLF(randx, 0);
	/* mov	cx,ax */
	cx = ax;
	/* and	cx,63 */
	AND(cx, 63);
	/* inc	cx		;1 .. 64 */
	INC(cx);
	/* mov	si,DroneListPtrs[bx]	;start of list */
	si = *(dw*)(((db*)&dronelistptrs)+bx);
rndloop:
	// 4905 
	/* RndLoop:	cmp	si,DroneListEnds[bx]	;end of list? */
	CMP(si, *(dw*)(((db*)&dronelistends)+bx));
	/* je	@F			;yes -> */
	if ((dw)(si) == (dw)(*(dw*)(((db*)&dronelistends)+bx))) {goto dummylabel90;}
	/* add	si,2 */
	ADD(si, 2);
	/* jmp	ContRndLoop */
	goto contrndloop;
dummylabel90:
	// 4907 
	/* @@:		mov	si,DroneListPtrs[bx]	;start of list */
	si = *(dw*)(((db*)&dronelistptrs)+bx);
contrndloop:
	// 4909 
	/* ContRndLoop:	loop	RndLoop */
	LOOP(rndloop);
	/* mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
	/* call	SelectAnyDrone */
	CALL(selectanydrone, 0);
	/* mov	DroneCrntPtrs[bx],si */
	*(dw*)(((db*)&dronecrntptrs)+bx) = si;
	/* mov	DroneMode,bx */
	dronemode = bx;
	/* ret */
	RETN(0);
demoview:
	// 5987 
	// 0 ;------------------------------------
	// 0 ;* check current drone is still valid
	// 0 ;------------------------------------
edummylabel11:
	// 4911 
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* call	CurrentDroneOk	;current drone still valid? */
	CALL(currentdroneok, 0);
	/* jc	@F		;no -> */
	if (CF) {goto dummylabel91;}
	// 0 ;--------------
	// 0 ;* update timer
	// 0 ;--------------
	/* mov	ax,DroneTimer */
	ax = dronetimer;
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
	/* mov	DroneTimer,ax */
	dronetimer = ax;
	/* jnz	ContDemo	;still viewing this drone -> */
	if (ax != 0) {goto contdemo;}
	// 0 ;-----------------------------
	// 0 ;* select a new drone (if any)
	// 0 ;-----------------------------
dummylabel91:
	// 4913 
	/* @@:		call	SelectRndDrone	;any drone available? */
	CALL(selectrnddrone, 0);
	/* jnc	@F		;yes -> */
	if (!CF) {goto dummylabel92;}
	// 0 ;* if no drones left then quit
	/* mov	DieFlag,DIE_QUIT */
	dieflag = 1;
	/* jmp	ExitDemo */
	goto exitdemo;
	// 0 ;* if aircraft then
	// 0 ;*    DroneTimer = DRONE_AIR_TIME
	// 0 ;* else
	// 0 ;*    DroneTimer = DRONE_GND_TIME
	// 0 ;* endif
dummylabel92:
	// 4915 
	// 0 ;mov	ax,DRONE_AIR_TIME	;assume aircraft
	/* mov	ax,DRONE_GND_TIME	;assume aircraft */
	ax = 5*100;
	/* test	DroneMode,AIR_GND_TOGGLE	;aircraft? */
	TEST(dronemode, 0x4);
	/* jz	@F				;yes -> */
	if (!(dronemode & 0x4)) {goto dummylabel93;}
	// 0 ;mov	ax,DRONE_GND_TIME
	/* mov	ax,DRONE_AIR_TIME */
	ax = 10*100;
dummylabel93:
	// 4917 
	/* @@:		mov	DroneTimer,ax */
	dronetimer = ax;
	// 0 ;* select random camera angle
	/* call	RandX */
	CALLF(randx, 0);
	/* and	ax,3		;0 .. 3 */
	AND(ax, 3);
	/* shl	ax,1		;0 .. 6 step 2 */
	SHL(ax, 1);
	/* mov	CameraAngle,ax */
	cameraangle = ax;
	// 0 ;* select random camera bearing
	/* call	RandX */
	CALLF(randx, 0);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* and	ax,001c0h */
	AND(ax, 0x001c0);
	/* mov	RndCamBrg,ax */
	rndcambrg = ax;
	// 0 ;-------------------
	// 0 ;* sort camera angle
	// 0 ;-------------------
contdemo:
	// 4919 
	/* ContDemo:    	mov	bx,DroneMode */
	bx = dronemode;
	/* mov	si,DroneCrntPtrs[bx] */
	si = *(dw*)(((db*)&dronecrntptrs)+bx);
	/* mov	si,[si]		;si -> compound mobile data block */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* add	si,MOB_REC_SIZE	;si -> VIEWPOINT data */
	ADD(si, 6);
	/* mov	di,OFFSET DEMO_VIEW */
	di = m2c::near_offset_external(demo_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 6055 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 6056 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	si,bx		;si = drone mode */
	si = bx;
	/* mov	bx,CameraAngle */
	bx = cameraangle;
__disp=*(dw*)(((db*)&cameraswitch)+bx);
	/* jmp	CameraSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
camrotateclk:
	// 4921 
	// 0 ;---------------------------
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
	/* mov	cx,DrnCamBrg[si] */
	cx = *(dw*)(((db*)&drncambrg)+si);
	/* mov	bx,DrnCamBrgFine[si] */
	bx = *(dw*)(((db*)&drncambrgfine)+si);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
	/* jmp	SetCameraBrg */
	goto setcamerabrg;
	// 0 ;---------------------------
camrotateaclk:
	// 4923 
	// 0 ;---------------------------
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
	/* mov	cx,DrnCamBrg[si] */
	cx = *(dw*)(((db*)&drncambrg)+si);
	/* mov	bx,DrnCamBrgFine[si] */
	bx = *(dw*)(((db*)&drncambrgfine)+si);
	/* add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
	/* jmp	SetCameraBrg */
	goto setcamerabrg;
	// 0 ;---------------------------
camrandom:
	// 4925 
	// 0 ;---------------------------
	/* mov	cx,RndCamBrg */
	cx = rndcambrg;
	/* xor	bx,bx */
	XOR(bx, bx);
	// 0 ;---------------------------
setcamerabrg:
	// 4927 
	// 0 ;---------------------------
	/* mov	DrnCamBrg[si],cx */
	*(dw*)(((db*)&drncambrg)+si) = cx;
	/* mov	DrnCamBrgFine[si],bx */
	*(dw*)(((db*)&drncambrgfine)+si) = bx;
	// 0 ;* set camera dist
	/* push	si */
	PUSH(si);
	/* mov	bx,DroneMode */
	bx = dronemode;
	/* mov	si,DroneCrntPtrs[bx] */
	si = *(dw*)(((db*)&dronecrntptrs)+bx);
	/* mov	si,[si]		;si -> compound mobile data block */
	si = m2c::getdata(*(dw*)(raddr(ds,si)));
	/* mov	al,MOB_NUM[si] */
	al = m2c::getdata(((mobile*)raddr(ds,si))->mob_num);
	/* call	CalcMobMaxDim */
	CALLF(calcmobmaxdim, 0);
	/* pop	si */
	POP(si);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* cmp	ax,64		;dist = max(dist, 64) */
	CMP(ax, 64);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(64)) {goto dummylabel94;}
	/* mov	ax,64 */
	ax = 64;
dummylabel94:
	// 4929 
	/* @@:		mov	DrnCamDist[si],ax */
	*(dw*)(((db*)&drncamdist)+si) = ax;
	/* mov	DrnCamDistFine[si],0 */
	*(dw*)(((db*)&drncamdistfine)+si) = 0;
	// 0 ;* adjust zft (zft = max(zft + 16, 32))
	/* mov	ax,WORD PTR DEMO_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&demo_view+vp_zft_lo));
	/* mov	dx,WORD PTR DEMO_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&demo_view+vp_zft_hi));
	/* add	ax,16 */
	ADD(ax, 16);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* jnz	@F		;zft > 65,535ft -> */
	if (dx != 0) {goto dummylabel95;}
	/* cmp	ax,32 */
	CMP(ax, 32);
	/* jae	@F   		;zft >= 32ft -> */
	if ((dw)(ax) >= (dw)(32)) {goto dummylabel95;}
	/* mov	ax,32 */
	ax = 32;
dummylabel95:
	// 4931 
	/* @@:		mov	WORD PTR DEMO_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&demo_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR DEMO_VIEW.VP_ZFT_HI,dx */
	*((dw*)((db*)&demo_view+vp_zft_hi)) = dx;
	// 0 ;* adjust heading, pitch and roll
	/* mov	dx,DrnCamBrg[si] */
	dx = *(dw*)(((db*)&drncambrg)+si);
	/* mov	ax,DrnCamBrgFine[si] */
	ax = *(dw*)(((db*)&drncambrgfine)+si);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,DEMO_VIEW.VP_HDG	;drone heading */
	ax = demo_view.vp_hdg;
	/* add	ax,dx			;+ camera bearing */
	ADD(ax, dx);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,256			;+ 180 degs */
	ADD(ax, 256);
	/* and	ax,511			;0 .. 511 pdegs */
	AND(ax, 511);
	/* mov	DEMO_VIEW.VP_HDG,ax */
	demo_view.vp_hdg = ax;
	/* mov	DEMO_VIEW.VP_PITCH,-10 ;hack from 0 */
	demo_view.vp_pitch = -10;
	// 0 ;mov	DEMO_VIEW.VP_ROLL,0   ;hack from 0 to neg zero
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,DrnCamDist[si] */
	ax = *(dw*)(((db*)&drncamdist)+si);
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,DEMO_VIEW.VP_XFT	;x + cx */
	ADD(cx, demo_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_168_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_168_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	DEMO_VIEW.VP_XSEC */
	INC(demo_view.vp_xsec);
__m2c_macrolocal_168_mvxy1:
	// 4933 
	/* __m2c_macrolocal_168_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_168_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_168_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	DEMO_VIEW.VP_XSEC */
	DEC(demo_view.vp_xsec);
__m2c_macrolocal_168_mvxy2:
	// 4935 
	/* __m2c_macrolocal_168_MvXY2:		mov	DEMO_VIEW.VP_XFT,cx */
	demo_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,DEMO_VIEW.VP_YFT	;y + bx */
	ADD(bx, demo_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_168_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_168_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	DEMO_VIEW.VP_YSEC */
	DEC(demo_view.vp_ysec);
__m2c_macrolocal_168_mvxy3:
	// 4937 
	/* __m2c_macrolocal_168_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_168_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_168_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	DEMO_VIEW.VP_YSEC */
	INC(demo_view.vp_ysec);
__m2c_macrolocal_168_mvxy4:
	// 4939 
	/* __m2c_macrolocal_168_MvXY4:		mov	DEMO_VIEW.VP_YFT,bx */
	demo_view.vp_yft = bx;
exitdemo:
	// 4941 
	/* ExitDemo:	ret */
	RETN(0);
destroyview:
	// 6231 
	// 0 ;--------------
	// 0 ;* update timer
	// 0 ;--------------
edummylabel12:
	// 4943 
	/* mov	ax,DestroyTimer */
	ax = destroytimer;
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
	/* mov	DestroyTimer,ax */
	destroytimer = ax;
	/* jnz	@F		;continue -> */
	if (ax != 0) {goto dummylabel96;}
	/* mov	al,TmpDieFlag	;end of game */
	al = tmpdieflag;
	/* mov	DieFlag,al */
	dieflag = al;
	// 0 ;------------------------------
	// 0 ;* rotate camera around Tornado
	// 0 ;------------------------------
dummylabel96:
	// 4945 
	/* @@:		mov	ax,64*256	;64 pdeg / sec track (*256 scaling) */
	ax = 64*256;
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
	/* mov	cx,TrkCamBrg */
	cx = trkcambrg;
	/* mov	bx,TrkCamBrgFine */
	bx = trkcambrgfine;
	/* add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* and	cx,511 */
	AND(cx, 511);
	/* mov	TrkCamBrg,cx */
	trkcambrg = cx;
	/* mov	TrkCamBrgFine,bx */
	trkcambrgfine = bx;
	// 0 ;* set camera dist
	/* mov	TrkCamDist,64 */
	trkcamdist = 64;
	/* mov	TrkCamDistFine,0 */
	trkcamdistfine = 0;
	// 0 ;* adjust zft
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,16 */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 16);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	// 0 ;* adjust heading, pitch and roll
	/* mov	dx,TrkCamBrg */
	dx = trkcambrg;
	/* mov	ax,TrkCamBrgFine */
	ax = trkcambrgfine;
	/* shl	ax,1 */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,PitchFlip */
	ax = pitchflip;
	/* and	ax,256			;0 or 180 degs (wrt pitch flip) */
	AND(ax, 256);
	/* add	ax,TMP_VIEW.VP_HDG	;+ aircraft heading */
	ADD(ax, tmp_view.vp_hdg);
	/* add	ax,dx			;+ camera bearing */
	ADD(ax, dx);
	/* mov	dx,ax */
	dx = ax;
	/* add	ax,256			;+ 180 degs */
	ADD(ax, 256);
	/* and	ax,511			;0 .. 511 pdegs */
	AND(ax, 511);
	/* mov	TMP_VIEW.VP_HDG,ax */
	tmp_view.vp_hdg = ax;
	/* mov	TMP_VIEW.VP_PITCH,30 ;hack from -10; 0 */
	tmp_view.vp_pitch = 30;
	// 0 ;mov	TMP_VIEW.VP_ROLL,0   ;hack from 0 to neg zero
	// 0 ;* adjust position wrt camera bearing and distance
	/* mov	ax,TrkCamDist */
	ax = trkcamdist;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* and	ax,511		;0 .. 511 pdegs */
	AND(ax, 511);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* sal	dx,1 */
	SAL(dx, 1);
	/* call	CalcDeltaXY	;cx = delta x, bx = delta y */
	CALLF(calcdeltaxy, 0);
	// 0 ;* /32 scaling using abs(value) for 1/2 bit round up (for improved accuracy)
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
	// 0 ;* update xsec, xft
	/* add	cx,TMP_VIEW.VP_XFT	;x + cx */
	ADD(cx, tmp_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_174_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_174_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	TMP_VIEW.VP_XSEC */
	INC(tmp_view.vp_xsec);
__m2c_macrolocal_174_mvxy1:
	// 4947 
	/* __m2c_macrolocal_174_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_174_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_174_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	TMP_VIEW.VP_XSEC */
	DEC(tmp_view.vp_xsec);
__m2c_macrolocal_174_mvxy2:
	// 4949 
	/* __m2c_macrolocal_174_MvXY2:		mov	TMP_VIEW.VP_XFT,cx */
	tmp_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,TMP_VIEW.VP_YFT	;y + bx */
	ADD(bx, tmp_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_174_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_174_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	TMP_VIEW.VP_YSEC */
	DEC(tmp_view.vp_ysec);
__m2c_macrolocal_174_mvxy3:
	// 4951 
	/* __m2c_macrolocal_174_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_174_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_174_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	TMP_VIEW.VP_YSEC */
	INC(tmp_view.vp_ysec);
__m2c_macrolocal_174_mvxy4:
	// 4953 
	/* __m2c_macrolocal_174_MvXY4:		mov	TMP_VIEW.VP_YFT,bx */
	tmp_view.vp_yft = bx;
/* m2c-phantom removed: 	R(ADD(cx, tmp_view.vp_xft));	// 6358 						add	cx,TMP_VIEW.VP_XFT	;x + xadd */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_xsec));	// 6359 inc	TMP_VIEW.VP_XSEC */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_xsec));	// 6360 dec	TMP_VIEW.VP_XSEC */
queque0034:
	// 4955 
/* m2c-phantom removed: 	R(tmp_view.vp_xft = cx;);	// 6361 ??0034:		mov	TMP_VIEW.VP_XFT,cx */
/* m2c-phantom removed: 	R(ADD(bx, tmp_view.vp_yft));	// 6362 add	bx,TMP_VIEW.VP_YFT	;y + yadd */
/* m2c-phantom removed: 	R(DEC(tmp_view.vp_ysec));	// 6363 dec	TMP_VIEW.VP_YSEC */
/* m2c-phantom removed: 	R(INC(tmp_view.vp_ysec));	// 6364 inc	TMP_VIEW.VP_YSEC */
queque0036:
	// 4957 
/* m2c-phantom removed: 	R(tmp_view.vp_yft = bx;);	// 6365 ??0036:		mov	TMP_VIEW.VP_YFT,bx */
	/* ret */
	RETN(0);
weaponview:
	// 6376 
	// 0 ;---------------------
	// 0 ;* reset view position
	// 0 ;---------------------
edummylabel13:
	// 4959 
	/* mov	al,BYTE PTR KF_ResetWpnCam[K_STATUS] */
	al = *((&kf_resetwpncam)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;reset view position?
/* m2c-phantom removed: 	R(al = *((&kf_resetwpncam)+k_status););	// 6385 mov	al,BYTE PTR KF_ResetWpnCam[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel97;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	WpnCamDist,WPN_DIST_MIN */
	wpncamdist = 32*256;
	/* mov	WpnCamBrg,300;256-->300 */
	wpncambrg = 300;
	/* mov	WpnCamBrgFine,0 */
	wpncambrgfine = 0;
	// 0 ;-----------------------
	// 0 ;* copy weapon viewpoint (always valid see ViewWeaponPtr note above)
	// 0 ;-----------------------
dummylabel97:
	// 4961 
	/* @@:		mov	si,ViewWeaponPtr */
	si = viewweaponptr;
	/* mov	ax,WPNDATA */
	ax = seg_offset(wpndata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	bx,_WPN_TYPE[si]	;bx = weapon type */
	bx = m2c::getdata(*(dw*)(((db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_type)));
	/* mov	dx,_WPN_FLAGS[si]	;dx = weapon flags */
	dx = m2c::getdata(*(dw*)(((db*)&((weapon*)raddr(ds,(6+18)+si))->wpn_flags)));
	/* add	si,MOB_REC_SIZE		;si -> viewpoint data */
	ADD(si, 6);
	/* mov	di,OFFSET WPN_VIEW */
	di = m2c::near_offset_external(wpn_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 6404 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 6405 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* always reset roll
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;Mod by Frankie Kam on 21st April 2018
	// 0 ;User pressed Alt+P to toggle on/off horizon pitching
	// 0 ;when in F1 Tracking View mode?
	/* mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	al = *((&kf_togglepitchcam)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;kkk
/* m2c-phantom removed: 	R(al = *((&kf_togglepitchcam)+k_status););	// 6417 mov	al,BYTE PTR KF_TogglePitchCam[K_STATUS] */
	/* jz	@F		;no -> do nothing! */
	if (!(al & al)) {goto dummylabel98;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* xor PitchToggleWeapon,1 ;Toggle this value from 0 to 1 */
	XOR(pitchtoggleweapon, 1);
	// 0 ;Clear the P (Pause) key. If this line is not executed,
	// 0 ;the game will pause!
	/* mov	BYTE PTR KF_Pause[K_STATUS],0 */
	*((&kf_pause)+k_status) = 0;
/* m2c-phantom removed: 	R(*((&kf_pause)+k_status) = 0;);	// 6424 						mov	BYTE PTR KF_Pause[K_STATUS],0 */
	// 0 ;Clear this Control+P key!
/* m2c-phantom removed: 	R(*((&kf_togglepitchcam)+k_status) = 0;);	// 6426 												mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	/* mov	BYTE PTR KF_TogglePitchCam[K_STATUS],0 */
	*((&kf_togglepitchcam)+k_status) = 0;
dummylabel98:
	// 4963 
	// 0 ;Check for 0 or 1
	/* cmp	PitchToggleWeapon,0 */
	CMP(pitchtoggleweapon, 0);
	/* jne @F       ;-->Set the TMP_VIEW.VP_ROLL variable to 0 */
	if ((dw)(pitchtoggleweapon) != (dw)(0)) {goto dummylabel99;}
	/* jmp SkipRoll5 ;-->Do nothing if PitchToggle equals to 1 */
	goto skiproll5;
dummylabel99:
	// 4965 
	/* mov WPN_VIEW.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
skiproll5:
	// 4967 
	// 0 ;do nothing
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;mov	WPN_VIEW.VP_ROLL,1 ;hack
	// 0 ;------------------
	// 0 ;* select view mode (wrt weapon)
	// 0 ;------------------
	// 0 ;* if NULL_WEAPON then sort expired weapon view
	/* cmp	bx,NULL_WEAPON	;null weapon? */
	CMP(bx, -1);
	/* jne	@F		;no -> */
	if ((dw)(bx) != (dw)(-1)) {goto dummylabel100;}
	/* cmp	WpnExpView,1	;overhead? */
	CMP(wpnexpview, 1);
	/* je	OverheadView	;yes -> */
	if ((dw)(wpnexpview) == (dw)(1)) {goto overheadview;}
	/* jmp	NormalView */
	goto normalview;
dummylabel100:
	// 4969 
__disp=*(dw*)(((db*)&weaponswitch)+bx);
	/* @@:		jmp	WeaponSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
bombview:
	// 4971 
	// 0 ;---------------------------
	/* mov	WpnExpView,1	;overhead view when weapon expired */
	wpnexpview = 1;
	// 0 ;* always show bomb splash as overhead view
	/* test	dx,WFLG_SPLASH	;splash? */
	TEST(dx, 0x10);
	/* jnz	OverheadView	;yes -> */
	if ((dx & 0x10) != 0) {goto overheadview;}
	// 0 ;* Calc altitude to switch to overhead view:-
	// 0 ;*
	// 0 ;* Only consider overhead view if bomb is pitched down.
	// 0 ;*
	// 0 ;*    switch alt = -SWITCH_THRESH * sin(pitch)
	// 0 ;*
	// 0 ;* This prevents low level launched weapons (ie. retarded bombs) from
	// 0 ;* switching to the overhead view too early.
	// 0 ;hack - from 500 to 600
	// 0 ;OVERHEAD_ALT >= SWITCH_THRESH  ;hack - from 500 to 600
	/* mov	bx,WPN_VIEW.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* cmp	bx,128		;pitched down? */
	CMP(bx, 128);
	/* jbe	NormalView	;no -> */
	if ((dw)(bx) <= (dw)(128)) {goto normalview;}
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&sintable)+bx););	// 6477 						mov	ax,SinTable[bx] */
	// 0 ;sin(pitch)
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	dx,-SWITCH_THRESH */
	dx = -1;
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
	// 0 ;-SWITCH_THRESH * sin(pitch)
	/* cmp	WORD PTR WPN_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_hi)), 0);
	/* ja	NormalView */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_hi))) > (dw)(0)) {goto normalview;}
	/* cmp	WORD PTR WPN_VIEW.VP_ZFT_LO,dx */
	CMP(*((dw*)((db*)&wpn_view+vp_zft_lo)), dx);
	/* ja	NormalView */
	if ((dw)(*((dw*)((db*)&wpn_view+vp_zft_lo))) > (dw)(dx)) {goto normalview;}
	// 0 ;---------------------------
overheadview:
	// 4973 
	// 0 ;---------------------------
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;                Original
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* mov	si,OFFSET WPN_VIEW */
	si = m2c::near_offset_external(wpn_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,OVERHEAD_ALT */
	ADD(ax, 1);
	/* mov	WORD PTR WPN_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR WPN_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = 0;
	// 0 ;mov	WPN_VIEW.VP_PITCH,-110
	/* mov	WPN_VIEW.VP_PITCH,-110 ;384 */
	wpn_view.vp_pitch = -110;
	// 0 ;pitch down -90 ;hack from 384 to -110
	/* call AdjustWpnZoom  ;hack */
	CALL(adjustwpnzoom, 0);
	/* call AdjustWpnTrack ;hack */
	CALL(adjustwpntrack, 0);
	/* jmp	ExitWeapon */
	goto exitweapon;
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	// 0 ;		mov	si,OFFSET WPN_VIEW
	// 0 ;		call	CalcGndHeight
	// 0 ;
	// 0 ;		;add	ax,OVERHEAD_ALT
	// 0 ;		add	ax,50
	// 0 ;
	// 0 ;		mov	WpnCamDist,4096
	// 0 ;
	// 0 ;		mov	WORD PTR WPN_VIEW.VP_ZFT_LO,ax
	// 0 ;		mov	WORD PTR WPN_VIEW.VP_ZFT_HI,0
	// 0 ;
	// 0 ;		mov	WPN_VIEW.VP_PITCH,384	;pitch down -90
	// 0 ;
	// 0 ;		KTEST KF_Minimise
	// 0 ;		jz SkipAlex3
	// 0 ;		mov InWeaponView,1
	// 0 ;		sub HorizonBombValue, 5
	// 0 ;		KBOUNCE KF_Minimise
	// 0 ;		jmp SkipAlex4
	// 0 ;SkipAlex3:
	// 0 ;		KTEST KF_Range
	// 0 ;		jz SkipAlex4
	// 0 ;		mov InWeaponView,1
	// 0 ;		add HorizonBombValue, 5
	// 0 ;		KBOUNCE KF_Range
	// 0 ;SkipAlex4:
	// 0 ;        mov bx, HorizonBombValue
	// 0 ;        mov	WPN_VIEW.VP_PITCH,bx
	// 0 ;		call AdjustWpnZoom  ;hack
	// 0 ;		call AdjustWpnTrack ;hack
	// 0 ;
	// 0 ;		jmp	ExitWeapon
	// 0 ;
	// 0 ;---------------------------
alarmview:
	// 4975 
	// 0 ;---------------------------
	/* mov	WpnExpView,1	;overhead view when weapon expired */
	wpnexpview = 1;
	// 0 ;* switch to lookdown if freefall or dive
	/* and	dx,WFLG_ALARM_MODE */
	AND(dx, 0x7);
	/* cmp	dx,ALARM_FREEFALL */
	CMP(dx, 4);
	/* je	NormalView */
	if ((dw)(dx) == (dw)(4)) {goto normalview;}
	/* cmp	dx,ALARM_DIVE */
	CMP(dx, 6);
	/* je	NormalView */
	if ((dw)(dx) == (dw)(6)) {goto normalview;}
	// 0 ;mov	WPN_VIEW.VP_PITCH,-10 ;hack from 0
	/* mov	WPN_VIEW.VP_PITCH,0 */
	wpn_view.vp_pitch = 0;
	/* mov	WPN_VIEW.VP_ROLL,0 */
	wpn_view.vp_roll = 0;
	/* jmp	NormalView */
	goto normalview;
	// 0 ;---------------------------
missileview:
	// 4977 
	// 0 ;---------------------------
	/* mov	WpnExpView,0	;normal view when weapon expired */
	wpnexpview = 0;
	// 0 ;---------------------------
normalview:
	// 4979 
	// 0 ;---------------------------
	/* call	AdjustWpnZoom */
	CALL(adjustwpnzoom, 0);
	/* call	AdjustWpnTrack */
	CALL(adjustwpntrack, 0);
exitweapon:
	// 4981 
	/* ExitWeapon:	ret */
	RETN(0);
adjustwpnzoom:
	// 6583 
	// 0 ;--------------
	// 0 ;* sort zoom in
	// 0 ;--------------
edummylabel14:
	// 4983 
	/* mov	al,BYTE PTR KF_ZoomIn[K_STATUS] */
	al = *((&kf_zoomin)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;zoom in?
/* m2c-phantom removed: 	R(al = *((&kf_zoomin)+k_status););	// 6592 mov	al,BYTE PTR KF_ZoomIn[K_STATUS] */
	/* jz	SkipWpnZoomIn	;no -> */
	if (!(al & al)) {goto skipwpnzoomin;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,32*256	;32ft/sec zoom rate (*256 scaling) */
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
	/* test	BYTE PTR KF_FastZoomIn[K_STATUS],1	;fast zoom? */
	TEST(*((&kf_fastzoomin)+k_status), 1);
	/* jz	@F					;no -> */
	if (!(*((&kf_fastzoomin)+k_status) & 1)) {goto dummylabel101;}
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
dummylabel101:
	// 4985 
	/* @@:		mov	ax,WpnCamDist */
	ax = wpncamdist;
	/* sub	ax,dx */
	SUB(ax, dx);
	/* jc	@F */
	if (CF) {goto dummylabel102;}
	/* cmp	ax,WPN_DIST_MIN ;zoom < min zoom dist? */
	CMP(ax, 32*256);
	/* jae	WpnZoomOk 	;no -> */
	if ((dw)(ax) >= (dw)(32*256)) {goto wpnzoomok;}
dummylabel102:
	// 4987 
	/* @@:		mov	ax,WPN_DIST_MIN */
	ax = 32*256;
	/* jmp	WpnZoomOk */
	goto wpnzoomok;
	// 0 ;---------------
	// 0 ;* sort zoom out
	// 0 ;---------------
skipwpnzoomin:
	// 4989 
	/* SkipWpnZoomIn:	mov	al,BYTE PTR KF_ZoomOut[K_STATUS] */
	al = *((&kf_zoomout)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;zoom out?
/* m2c-phantom removed: 	R(al = *((&kf_zoomout)+k_status););	// 6621 mov	al,BYTE PTR KF_ZoomOut[K_STATUS] */
	/* jz	SkipWpnZoomOut 	;no -> */
	if (!(al & al)) {goto skipwpnzoomout;}
	/* mov InWeaponView,1 */
	inweaponview = 1;
	/* mov	ax,32*256	;32ft/sec zoom rate (*256 scaling) */
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
	/* test	BYTE PTR KF_FastZoomOut[K_STATUS],1	;fast zoom? */
	TEST(*((&kf_fastzoomout)+k_status), 1);
	/* jz	@F					;no -> */
	if (!(*((&kf_fastzoomout)+k_status) & 1)) {goto dummylabel103;}
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
dummylabel103:
	// 4991 
	/* @@:		mov	ax,WpnCamDist */
	ax = wpncamdist;
	/* add	ax,dx */
	ADD(ax, dx);
	/* jc	@F */
	if (CF) {goto dummylabel104;}
	/* cmp	ax,WPN_DIST_MAX ;zoom > max zoom dist? */
	CMP(ax, 120*256);
	/* jbe	WpnZoomOk 	;no -> */
	if ((dw)(ax) <= (dw)(120*256)) {goto wpnzoomok;}
dummylabel104:
	// 4993 
	/* @@:		mov	ax,WPN_DIST_MAX */
	ax = 120*256;
wpnzoomok:
	// 4995 
	/* WpnZoomOk: 	mov	WpnCamDist,ax */
	wpncamdist = ax;
skipwpnzoomout:
	// 4997 
	/* SkipWpnZoomOut:	ret */
	RETN(0);
adjustwpntrack:
	// 6657 
	// 0 ;* dist = WpnCamDist * cos(pitch)
	// 0 ;*
	// 0 ;* delta x = dist * sin((hdg + brg) and 511)
	// 0 ;* delta y = dist * cos((hdg + brg) and 511)
	// 0 ;* delta z = -WpnCamDist * sin(pitch)
edummylabel15:
	// 4999 
	/* mov	bx,WPN_VIEW.VP_PITCH */
	bx = wpn_view.vp_pitch;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6668 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6669 						mov	di,CosTable[bx] */
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	/* mov	ax,WpnCamDist */
	ax = wpncamdist;
	/* neg	ax */
	NEG(ax);
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	dl,1		;/256 */
	SHL(dl, 1);
	/* adc	dh,0 */
	ADC(dh, 0);
	/* mov	al,dh */
	al = dh;
	/* cbw			;ax = delta z */
	CBW;
	/* cwd			;dx, ax = delta z */
	CWD;
	/* add	WORD PTR WPN_VIEW.VP_ZFT_LO,ax */
	ADD(*((dw*)((db*)&wpn_view+vp_zft_lo)), ax);
	/* adc	WORD PTR WPN_VIEW.VP_ZFT_HI,dx */
	ADC(*((dw*)((db*)&wpn_view+vp_zft_hi)), dx);
	/* jns	@F	;above ground -> */
	if ((short)(*((dw*)((db*)&wpn_view+vp_zft_hi))) >= 0) {goto dummylabel105;}
	/* mov	WORD PTR WPN_VIEW.VP_ZFT_LO,1 */
	*((dw*)((db*)&wpn_view+vp_zft_lo)) = 1;
	/* mov	WORD PTR WPN_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&wpn_view+vp_zft_hi)) = 0;
dummylabel105:
	// 5001 
	/* @@:		mov	ax,WpnCamDist */
	ax = wpncamdist;
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
	// 0 ;bp = dist
	// 0 ;* adjust weapon camera tracking
	/* mov	cx,WpnCamBrg */
	cx = wpncambrg;
	/* mov	bx,WpnCamBrgFine */
	bx = wpncambrgfine;
	/* call	AdjustTrack  ;UpdateViewExit */
	CALL(adjusttrack, 0);
	/* mov	WpnCamBrg,cx */
	wpncambrg = cx;
	/* mov	WpnCamBrgFine,bx */
	wpncambrgfine = bx;
	/* shl	bx,1 */
	SHL(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	bx,WPN_VIEW.VP_HDG */
	bx = wpn_view.vp_hdg;
	/* add	bx,cx		;hdg + brg */
	ADD(bx, cx);
	/* mov	cx,bx */
	cx = bx;
	/* add	cx,256		;hdg + brg + 180 */
	ADD(cx, 256);
	/* and	cx,511		;(hdg + brg + 180) and 511 */
	AND(cx, 511);
	/* mov	WPN_VIEW.VP_HDG,cx */
	wpn_view.vp_hdg = cx;
	/* and	bx,511		;(hdg + brg) and 511 */
	AND(bx, 511);
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6716 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6717 mov	di,CosTable[bx] */
	/* mov	ax,bp */
	ax = bp;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	dl,1		;/256 */
	SHL(dl, 1);
	/* adc	dh,0 */
	ADC(dh, 0);
	/* mov	al,dh */
	al = dh;
	/* cbw */
	CBW;
	/* mov	cx,ax		;cx = delta x */
	cx = ax;
	/* mov	ax,bp */
	ax = bp;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	dl,1		;/256 */
	SHL(dl, 1);
	/* adc	dh,0 */
	ADC(dh, 0);
	/* mov	al,dh */
	al = dh;
	/* cbw */
	CBW;
	/* mov	bx,ax		;bx = delta y */
	bx = ax;
	// 0 ;* update xsec, xft
	/* add	cx,WPN_VIEW.VP_XFT	;x + cx */
	ADD(cx, wpn_view.vp_xft);
	/* cmp	cx,8192		;change sector? */
	CMP(cx, 8192);
	/* jl	__m2c_macrolocal_190_MvXY1			;no -> */
	if ((short)(cx) < (short)(8192)) {goto __m2c_macrolocal_190_mvxy1;}
	/* sub	cx,16384 */
	SUB(cx, 16384);
	/* inc	WPN_VIEW.VP_XSEC */
	INC(wpn_view.vp_xsec);
__m2c_macrolocal_190_mvxy1:
	// 5003 
	/* __m2c_macrolocal_190_MvXY1:		cmp	cx,-8192		;change sector? */
	CMP(cx, -8192);
	/* jge	__m2c_macrolocal_190_MvXY2			;no -> */
	if ((short)(cx) >= (short)(-8192)) {goto __m2c_macrolocal_190_mvxy2;}
	/* add	cx,16384 */
	ADD(cx, 16384);
	/* dec	WPN_VIEW.VP_XSEC */
	DEC(wpn_view.vp_xsec);
__m2c_macrolocal_190_mvxy2:
	// 5005 
	/* __m2c_macrolocal_190_MvXY2:		mov	WPN_VIEW.VP_XFT,cx */
	wpn_view.vp_xft = cx;
	// 0 ;* update ysec, yft
	/* add	bx,WPN_VIEW.VP_YFT	;y + bx */
	ADD(bx, wpn_view.vp_yft);
	/* cmp	bx,8192 		;change sector? */
	CMP(bx, 8192);
	/* jl	__m2c_macrolocal_190_MvXY3			;no -> */
	if ((short)(bx) < (short)(8192)) {goto __m2c_macrolocal_190_mvxy3;}
	/* sub	bx,16384 */
	SUB(bx, 16384);
	/* dec	WPN_VIEW.VP_YSEC */
	DEC(wpn_view.vp_ysec);
__m2c_macrolocal_190_mvxy3:
	// 5007 
	/* __m2c_macrolocal_190_MvXY3:		cmp	bx,-8192		;change sector? */
	CMP(bx, -8192);
	/* jge	__m2c_macrolocal_190_MvXY4			;no -> */
	if ((short)(bx) >= (short)(-8192)) {goto __m2c_macrolocal_190_mvxy4;}
	/* add	bx,16384 */
	ADD(bx, 16384);
	/* inc	WPN_VIEW.VP_YSEC */
	INC(wpn_view.vp_ysec);
__m2c_macrolocal_190_mvxy4:
	// 5009 
	/* __m2c_macrolocal_190_MvXY4:		mov	WPN_VIEW.VP_YFT,bx */
	wpn_view.vp_yft = bx;
	/* ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
                    eip = (dd)__disp & 0xffff;
            switch (__disp) {
                case m2c::k__m2c_macrolocal_106_mvxy1: 	goto __m2c_macrolocal_106_mvxy1;
        case m2c::k__m2c_macrolocal_106_mvxy2: 	goto __m2c_macrolocal_106_mvxy2;
        case m2c::k__m2c_macrolocal_106_mvxy3: 	goto __m2c_macrolocal_106_mvxy3;
        case m2c::k__m2c_macrolocal_106_mvxy4: 	goto __m2c_macrolocal_106_mvxy4;
        case m2c::k__m2c_macrolocal_115_skip: 	goto __m2c_macrolocal_115_skip;
        case m2c::k__m2c_macrolocal_131_mvxy1: 	goto __m2c_macrolocal_131_mvxy1;
        case m2c::k__m2c_macrolocal_131_mvxy2: 	goto __m2c_macrolocal_131_mvxy2;
        case m2c::k__m2c_macrolocal_131_mvxy3: 	goto __m2c_macrolocal_131_mvxy3;
        case m2c::k__m2c_macrolocal_131_mvxy4: 	goto __m2c_macrolocal_131_mvxy4;
        case m2c::k__m2c_macrolocal_136_skip: 	goto __m2c_macrolocal_136_skip;
        case m2c::k__m2c_macrolocal_168_mvxy1: 	goto __m2c_macrolocal_168_mvxy1;
        case m2c::k__m2c_macrolocal_168_mvxy2: 	goto __m2c_macrolocal_168_mvxy2;
        case m2c::k__m2c_macrolocal_168_mvxy3: 	goto __m2c_macrolocal_168_mvxy3;
        case m2c::k__m2c_macrolocal_168_mvxy4: 	goto __m2c_macrolocal_168_mvxy4;
        case m2c::k__m2c_macrolocal_174_mvxy1: 	goto __m2c_macrolocal_174_mvxy1;
        case m2c::k__m2c_macrolocal_174_mvxy2: 	goto __m2c_macrolocal_174_mvxy2;
        case m2c::k__m2c_macrolocal_174_mvxy3: 	goto __m2c_macrolocal_174_mvxy3;
        case m2c::k__m2c_macrolocal_174_mvxy4: 	goto __m2c_macrolocal_174_mvxy4;
        case m2c::k__m2c_macrolocal_190_mvxy1: 	goto __m2c_macrolocal_190_mvxy1;
        case m2c::k__m2c_macrolocal_190_mvxy2: 	goto __m2c_macrolocal_190_mvxy2;
        case m2c::k__m2c_macrolocal_190_mvxy3: 	goto __m2c_macrolocal_190_mvxy3;
        case m2c::k__m2c_macrolocal_190_mvxy4: 	goto __m2c_macrolocal_190_mvxy4;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_36_mvxy1: 	goto __m2c_macrolocal_36_mvxy1;
        case m2c::k__m2c_macrolocal_36_mvxy2: 	goto __m2c_macrolocal_36_mvxy2;
        case m2c::k__m2c_macrolocal_36_mvxy3: 	goto __m2c_macrolocal_36_mvxy3;
        case m2c::k__m2c_macrolocal_36_mvxy4: 	goto __m2c_macrolocal_36_mvxy4;
        case m2c::k__m2c_macrolocal_41_mvxy1: 	goto __m2c_macrolocal_41_mvxy1;
        case m2c::k__m2c_macrolocal_41_mvxy2: 	goto __m2c_macrolocal_41_mvxy2;
        case m2c::k__m2c_macrolocal_41_mvxy3: 	goto __m2c_macrolocal_41_mvxy3;
        case m2c::k__m2c_macrolocal_41_mvxy4: 	goto __m2c_macrolocal_41_mvxy4;
        case m2c::k__m2c_macrolocal_46_mvxy1: 	goto __m2c_macrolocal_46_mvxy1;
        case m2c::k__m2c_macrolocal_46_mvxy2: 	goto __m2c_macrolocal_46_mvxy2;
        case m2c::k__m2c_macrolocal_46_mvxy3: 	goto __m2c_macrolocal_46_mvxy3;
        case m2c::k__m2c_macrolocal_46_mvxy4: 	goto __m2c_macrolocal_46_mvxy4;
        case m2c::k__m2c_macrolocal_51_skip: 	goto __m2c_macrolocal_51_skip;
        case m2c::k__m2c_macrolocal_52_skip: 	goto __m2c_macrolocal_52_skip;
        case m2c::k__m2c_macrolocal_53_skip: 	goto __m2c_macrolocal_53_skip;
        case m2c::k__m2c_macrolocal_54_skip: 	goto __m2c_macrolocal_54_skip;
        case m2c::k__m2c_macrolocal_55_skip: 	goto __m2c_macrolocal_55_skip;
        case m2c::k__m2c_macrolocal_56_skip: 	goto __m2c_macrolocal_56_skip;
        case m2c::k__m2c_macrolocal_57_skip: 	goto __m2c_macrolocal_57_skip;
        case m2c::k__m2c_macrolocal_58_skip: 	goto __m2c_macrolocal_58_skip;
        case m2c::k__m2c_macrolocal_59_skip: 	goto __m2c_macrolocal_59_skip;
        case m2c::k__m2c_macrolocal_60_skip: 	goto __m2c_macrolocal_60_skip;
        case m2c::k__m2c_macrolocal_61_skip: 	goto __m2c_macrolocal_61_skip;
        case m2c::k__m2c_macrolocal_62_skip: 	goto __m2c_macrolocal_62_skip;
        case m2c::k__m2c_macrolocal_63_skip: 	goto __m2c_macrolocal_63_skip;
        case m2c::k__m2c_macrolocal_64_skip: 	goto __m2c_macrolocal_64_skip;
        case m2c::k__m2c_macrolocal_65_skip: 	goto __m2c_macrolocal_65_skip;
        case m2c::k__m2c_macrolocal_66_skip: 	goto __m2c_macrolocal_66_skip;
        case m2c::k__m2c_macrolocal_67_skip: 	goto __m2c_macrolocal_67_skip;
        case m2c::k__m2c_macrolocal_68_skip: 	goto __m2c_macrolocal_68_skip;
        case m2c::k__m2c_macrolocal_69_skip: 	goto __m2c_macrolocal_69_skip;
        case m2c::k__m2c_macrolocal_85_mvxy1: 	goto __m2c_macrolocal_85_mvxy1;
        case m2c::k__m2c_macrolocal_85_mvxy2: 	goto __m2c_macrolocal_85_mvxy2;
        case m2c::k__m2c_macrolocal_85_mvxy3: 	goto __m2c_macrolocal_85_mvxy3;
        case m2c::k__m2c_macrolocal_85_mvxy4: 	goto __m2c_macrolocal_85_mvxy4;
        case m2c::kaddtwotoyawvalue: 	goto addtwotoyawvalue;
        case m2c::kaddtwotoyawvalue2: 	goto addtwotoyawvalue2;
        case m2c::kaddtwotoyawvalueb: 	goto addtwotoyawvalueb;
        case m2c::kadjusttrack: 	goto adjusttrack;
        case m2c::kadjustwpntrack: 	goto adjustwpntrack;
        case m2c::kadjustwpnzoom: 	goto adjustwpnzoom;
        case m2c::kadjustzoom: 	goto adjustzoom;
        case m2c::kalarmview: 	goto alarmview;
        case m2c::kanydroneloop: 	goto anydroneloop;
        case m2c::kbombview: 	goto bombview;
        case m2c::kbothenginesdead: 	goto bothenginesdead;
        case m2c::kcamrandom: 	goto camrandom;
        case m2c::kcamrotateaclk: 	goto camrotateaclk;
        case m2c::kcamrotateclk: 	goto camrotateclk;
        case m2c::kcatchtornado: 	goto catchtornado;
        case m2c::kcheck1: 	goto check1;
        case m2c::kcheck3: 	goto check3;
        case m2c::kcheckchange: 	goto checkchange;
        case m2c::kchggameviewmode: 	goto chggameviewmode;
        case m2c::kcontdemo: 	goto contdemo;
        case m2c::kcontrndloop: 	goto contrndloop;
        case m2c::kcurrentdroneok: 	goto currentdroneok;
        case m2c::kdemoview: 	goto demoview;
        case m2c::kdestroyview: 	goto destroyview;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel100: 	goto dummylabel100;
        case m2c::kdummylabel101: 	goto dummylabel101;
        case m2c::kdummylabel102: 	goto dummylabel102;
        case m2c::kdummylabel103: 	goto dummylabel103;
        case m2c::kdummylabel104: 	goto dummylabel104;
        case m2c::kdummylabel105: 	goto dummylabel105;
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
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitdamagestatus: 	goto exitdamagestatus;
        case m2c::kexitdemo: 	goto exitdemo;
        case m2c::kexitweapon: 	goto exitweapon;
        case m2c::kfaildroneside: 	goto faildroneside;
        case m2c::kfaildronetype: 	goto faildronetype;
        case m2c::kfaildroneview: 	goto faildroneview;
        case m2c::kfixtominus180a: 	goto fixtominus180a;
        case m2c::kfixtominus180ab: 	goto fixtominus180ab;
        case m2c::kfixtominus180b: 	goto fixtominus180b;
        case m2c::kfixtopositive180a: 	goto fixtopositive180a;
        case m2c::kfixtopositive180ab: 	goto fixtopositive180ab;
        case m2c::kfixtopositive180b: 	goto fixtopositive180b;
        case m2c::kintodroneview: 	goto intodroneview;
        case m2c::kintotracking: 	goto intotracking;
        case m2c::kmissileview: 	goto missileview;
        case m2c::knextdroneloop: 	goto nextdroneloop;
        case m2c::knextptrok: 	goto nextptrok;
        case m2c::knope: 	goto nope;
        case m2c::knormalview: 	goto normalview;
        case m2c::koverheadview: 	goto overheadview;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kprevdroneloop: 	goto prevdroneloop;
        case m2c::kprevptrok: 	goto prevptrok;
        case m2c::kqueque000b: 	goto queque000b;
        case m2c::kqueque000d: 	goto queque000d;
        case m2c::kqueque0022: 	goto queque0022;
        case m2c::kqueque0024: 	goto queque0024;
        case m2c::kqueque0026: 	goto queque0026;
        case m2c::kqueque0028: 	goto queque0028;
        case m2c::kqueque002b: 	goto queque002b;
        case m2c::kqueque002d: 	goto queque002d;
        case m2c::kqueque0034: 	goto queque0034;
        case m2c::kqueque0036: 	goto queque0036;
        case m2c::kremoteok: 	goto remoteok;
        case m2c::krndloop: 	goto rndloop;
        case m2c::krotatehdg: 	goto rotatehdg;
        case m2c::ksatcamzftok: 	goto satcamzftok;
        case m2c::kscaleok: 	goto scaleok;
        case m2c::kscalerange: 	goto scalerange;
        case m2c::kscalezdiff: 	goto scalezdiff;
        case m2c::kselectanydrone: 	goto selectanydrone;
        case m2c::kselectnextdrone: 	goto selectnextdrone;
        case m2c::kselectprevdrone: 	goto selectprevdrone;
        case m2c::kselectrnddrone: 	goto selectrnddrone;
        case m2c::ksetcamerabrg: 	goto setcamerabrg;
        case m2c::ksetexpview: 	goto setexpview;
        case m2c::ksetgameviewmode: 	goto setgameviewmode;
        case m2c::ksetminzoom: 	goto setminzoom;
        case m2c::ksetremotepitch: 	goto setremotepitch;
        case m2c::kskipaaatotornado2: 	goto skipaaatotornado2;
        case m2c::kskipalex1: 	goto skipalex1;
        case m2c::kskipalex1b: 	goto skipalex1b;
        case m2c::kskipalex2: 	goto skipalex2;
        case m2c::kskipalex2b: 	goto skipalex2b;
        case m2c::kskipalex5: 	goto skipalex5;
        case m2c::kskipalex6: 	goto skipalex6;
        case m2c::kskipalex7: 	goto skipalex7;
        case m2c::kskipalex7b: 	goto skipalex7b;
        case m2c::kskipalex8: 	goto skipalex8;
        case m2c::kskipalex8b: 	goto skipalex8b;
        case m2c::kskipalexis1: 	goto skipalexis1;
        case m2c::kskipalexis2: 	goto skipalexis2;
        case m2c::kskipcandy8: 	goto skipcandy8;
        case m2c::kskipcandy9: 	goto skipcandy9;
        case m2c::kskipdroneside: 	goto skipdroneside;
        case m2c::kskipdronetype: 	goto skipdronetype;
        case m2c::kskipdroneview: 	goto skipdroneview;
        case m2c::kskipfrankie1: 	goto skipfrankie1;
        case m2c::kskipfrankie2: 	goto skipfrankie2;
        case m2c::kskipgarry1: 	goto skipgarry1;
        case m2c::kskipgarry2: 	goto skipgarry2;
        case m2c::kskiphilltest: 	goto skiphilltest;
        case m2c::kskipjake1: 	goto skipjake1;
        case m2c::kskipjake2: 	goto skipjake2;
        case m2c::kskipkf_trackingcamup: 	goto skipkf_trackingcamup;
        case m2c::kskipkf_trackingcamup2: 	goto skipkf_trackingcamup2;
        case m2c::kskiplfix: 	goto skiplfix;
        case m2c::kskiplglance: 	goto skiplglance;
        case m2c::kskiplookdown: 	goto skiplookdown;
        case m2c::kskipmapview: 	goto skipmapview;
        case m2c::kskipnavig: 	goto skipnavig;
        case m2c::kskippilot: 	goto skippilot;
        case m2c::kskipppper1b: 	goto skipppper1b;
        case m2c::kskipremote: 	goto skipremote;
        case m2c::kskiprfix: 	goto skiprfix;
        case m2c::kskiprglance: 	goto skiprglance;
        case m2c::kskiproll: 	goto skiproll;
        case m2c::kskiproll2: 	goto skiproll2;
        case m2c::kskiproll3: 	goto skiproll3;
        case m2c::kskiproll4: 	goto skiproll4;
        case m2c::kskiproll5: 	goto skiproll5;
        case m2c::kskiprotatelt: 	goto skiprotatelt;
        case m2c::kskiprotatert: 	goto skiprotatert;
        case m2c::kskipsamlaunchertotornado1: 	goto skipsamlaunchertotornado1;
        case m2c::kskipsatellite: 	goto skipsatellite;
        case m2c::kskipshakeup: 	goto skipshakeup;
        case m2c::kskipspectator: 	goto skipspectator;
        case m2c::kskiptolookdown: 	goto skiptolookdown;
        case m2c::kskiptrackaclk: 	goto skiptrackaclk;
        case m2c::kskiptrackclk: 	goto skiptrackclk;
        case m2c::kskiptracking: 	goto skiptracking;
        case m2c::kskiptrackingzrk_and_zsu: 	goto skiptrackingzrk_and_zsu;
        case m2c::kskipwpnzoomin: 	goto skipwpnzoomin;
        case m2c::kskipwpnzoomout: 	goto skipwpnzoomout;
        case m2c::kskipzoomin: 	goto skipzoomin;
        case m2c::kskipzrk1: 	goto skipzrk1;
        case m2c::kskipzrk2: 	goto skipzrk2;
        case m2c::ksoundok: 	goto soundok;
        case m2c::kupdatedemo: 	goto updatedemo;
        case m2c::kupdatedestroyed: 	goto updatedestroyed;
        case m2c::kupdatedrone: 	goto updatedrone;
        case m2c::kupdategameview: 	goto updategameview;
        case m2c::kupdatelnavig: 	goto updatelnavig;
        case m2c::kupdatelookdown: 	goto updatelookdown;
        case m2c::kupdatelookup: 	goto updatelookup;
        case m2c::kupdatelpilot: 	goto updatelpilot;
        case m2c::kupdatemap: 	goto updatemap;
        case m2c::kupdatenavig: 	goto updatenavig;
        case m2c::kupdatepilot: 	goto updatepilot;
        case m2c::kupdateremote: 	goto updateremote;
        case m2c::kupdaternavig: 	goto updaternavig;
        case m2c::kupdaterpilot: 	goto updaterpilot;
        case m2c::kupdatesatellite: 	goto updatesatellite;
        case m2c::kupdatespectator: 	goto updatespectator;
        case m2c::kupdatetracking: 	goto updatetracking;
        case m2c::kupdateview: 	goto updateview;
        case m2c::kupdateviewexit: 	goto updateviewexit;
        case m2c::kupdateweapon: 	goto updateweapon;
        case m2c::kupdatezrk_aaa: 	goto updatezrk_aaa;
        case m2c::kweaponview: 	goto weaponview;
        case m2c::kwpnzoomok: 	goto wpnzoomok;
        case m2c::kzftok: 	goto zftok;
        case m2c::kzftokb: 	goto zftokb;
        case m2c::kzoomok: 	goto zoomok;
        default: return __dispatch_call(__disp, _state);
    };
}


/* THIS IS GENERATED FILE */

        
#include "preview.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
objectpreview:
	// 2731 
	/* call	InitPreview ;* kill: assume all */
	CALL(initpreview, 0);
edummylabel1:
	// 4369 
	/* cmp	DieFlag,0	;error? */
	CMP(dieflag, 0);
	/* jne	PreviewExit	;yes -> */
	if ((dw)(dieflag) != (dw)(0)) {goto previewexit;}
previewloop:
	// 4371 
	/* PreviewLoop:	call	Show3DModel */
	CALL(show3dmodel, 0);
	/* call	CheckTimeout */
	CALLF(checktimeout, 0);
	/* cmp	DieFlag,0	;continue? */
	CMP(dieflag, 0);
	/* jne	PreviewExit	;no -> */
	if ((dw)(dieflag) != (dw)(0)) {goto previewexit;}
	/* call	ShowPicture */
	CALL(showpicture, 0);
	/* call	CheckTimeout */
	CALLF(checktimeout, 0);
	/* cmp	DieFlag,0	;continue? */
	CMP(dieflag, 0);
	/* jne	PreviewExit	;no -> */
	if ((dw)(dieflag) != (dw)(0)) {goto previewexit;}
	// 0 ;* advance if auto-run
	/* cmp	PreviewMode,2	;auto-run? */
	CMP(previewmode, 2);
	/* jne	@F		;no -> */
	if ((dw)(previewmode) != (dw)(2)) {goto dummylabel1;}
	/* call	NextModelPtr */
	CALL(nextmodelptr, 0);
dummylabel1:
	// 4373 
	/* @@:		jmp	PreviewLoop */
	goto previewloop;
previewexit:
	// 4375 
	/* PreviewExit:	ret */
	RETF(0);
initpreview:
	// 2761 
	// 0 ;------------------------------
	// 0 ;* install user timer interrupt
	// 0 ;------------------------------
edummylabel2:
	// 4377 
	/* mov	ax,OFFSET PreviewIntr100 */
	ax = m2c::kpreviewintr100;
	/* mov	dx,SEG PreviewIntr100 */
	dx = seg_offset(previewintr100);
	/* call	InstallUser100 */
	CALLF(installuser100, 0);
	// 0 ;---------------
	// 0 ;* load graphics
	// 0 ;---------------
	/* push	es */
	PUSH(es);
	/* mov	dx,OFFSET GraphicsFile */
	dx = offset(data,graphicsfile);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di		;es:di -> start of WorkScreen */
	XOR(di, di);
	/* mov	cx,320*200 */
	cx = 320*200;
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	es */
	POP(es);
	/* jnc	@F		;ok -> */
	if (!CF) {goto dummylabel2;}
	/* mov	DieFlag,SYS_ERR_LD_PREV */
	dieflag = 239;
	/* jmp	InitExit */
	goto initexit;
	// 0 ;------------------------------
	// 0 ;* store graphics in VGA page 2
	// 0 ;------------------------------
dummylabel2:
	// 4379 
	/* @@:		mov	dx,VGA_PAGE_2 */
	dx = 0x0a800;
	/* call	StoreWorkScreen */
	CALLF(storeworkscreen, 0);
	// 0 ;-------------------------------------------
	// 0 ;* interleave panel graphics into VGA page 3
	// 0 ;-------------------------------------------
	/* push	es */
	PUSH(es);
	/* mov	ax,VGA_PAGE_3 */
	ax = 0x0ac00;
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di */
	XOR(di, di);
	/* mov	cx,320*40 */
	cx = 320*40;
	/* call	InterleaveData */
	CALLF(interleavedata, 0);
	/* pop	es */
	POP(es);
	// 0 ;------------------
	// 0 ;* initialize mouse
	// 0 ;------------------
	/* mov	MouseXMin,MOUSE_X_MIN */
	mousexmin = 0;
	/* mov	MouseXMax,MOUSE_X_MAX */
	mousexmax = 639;
	/* mov	MouseYMin,MOUSE_Y_MIN */
	mouseymin = 0;
	/* mov	MouseYMax,MOUSE_Y_MAX */
	mouseymax = 399;
	/* call	SetMouseLimits */
	CALLF(setmouselimits, 0);
	/* mov	cx,MOUSE_X_START */
	cx = 320;
	/* mov	bx,MOUSE_Y_START */
	bx = 300;
	/* call	SetMousePos */
	CALLF(setmousepos, 0);
	// 0 ;--------------
	// 0 ;* reset timers (because of time taken to initialize (load files etc.))
	// 0 ;--------------
	/* xor	ax,ax */
	XOR(ax, ax);
	/* cli */
	CLI;
	/* mov	Frames,ax */
	frames = ax;
	/* mov	WORD PTR ElapsedTime,ax */
	*(dw*)(&elapsedtime) = ax;
	/* mov	WORD PTR ElapsedTime+2,ax */
	*(dw*)(((db*)&elapsedtime)+2) = ax;
	/* sti */
	STI;
initexit:
	// 4381 
	/* InitExit:	ret */
	RETN(0);
showpicture:
	// 2833 
	// 0 ;---------------
	// 0 ;* sort filename
	// 0 ;---------------
edummylabel3:
	// 4383 
	/* mov	si,ModelPtr */
	si = modelptr;
	/* mov	ax,PREVDATA */
	ax = seg_offset(prevdata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* add	si,MOD_FILENAME */
	ADD(si, mod_filename);
	/* mov	di,OFFSET PicFileName */
	di = offset(data,picfilename);
	/* mov	cx,8 */
	cx = 8;
	// 2844 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;---------------
	// 0 ;* cycle picture (if more than one available)
	// 0 ;---------------
	/* mov	si,ModelPtr */
	si = modelptr;
	/* mov	ah,NUM_GR4_PICS	;assume GR4 */
	ah = '3';
	/* mov	bx,GR4_MODIFIER */
	bx = 4;
	/* cmp	si,OFFSET GR4Model */
	CMP(si, offset(prevdata,gr4model));
	/* je	@F */
	if ((dw)(si) == (dw)(offset(prevdata,gr4model))) {goto dummylabel3;}
	/* mov	ah,NUM_F3_PICS	;assume F3 */
	ah = '5';
	/* mov	bx,F3_MODIFIER */
	bx = 3;
	/* cmp	si,OFFSET F3Model */
	CMP(si, offset(prevdata,f3model));
	/* je	@F */
	if ((dw)(si) == (dw)(offset(prevdata,f3model))) {goto dummylabel3;}
	/* jmp	SkipCycle */
	goto skipcycle;
dummylabel3:
	// 4385 
	/* @@:   		mov	dx,PREVDATA */
	dx = seg_offset(prevdata);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	/* mov	al,[si][bx].MOD_FILENAME */
	al = m2c::getdata(*((db*)((db*)&((model*)raddr(ds,si+bx))->mod_filename)));
	/* inc	al */
	INC(al);
	/* cmp	al,ah */
	CMP(al, ah);
	/* jbe	@F */
	if ((db)(al) <= (db)(ah)) {goto dummylabel4;}
	/* mov	al,'1' */
	al = '1';
dummylabel4:
	// 4387 
	/* @@:		mov	[si][bx].MOD_FILENAME,al */
	m2c::setdata(&(*((db*)((db*)&((model*)raddr(ds,si+bx))->mod_filename))), m2c::getdata(al));
	/* mov	dx,DATA */
	dx = seg_offset(data);
	/* mov	ds,dx */
	m2c::set_segment_register(ds, dx);
	// 0 ;--------------
	// 0 ;* load picture
	// 0 ;--------------
skipcycle:
	// 4389 
	/* SkipCycle:	mov	cx,10*100	;assume auto-run */
	cx = 10*100;
	/* cmp	PreviewMode,2	;auto-run? */
	CMP(previewmode, 2);
	/* je	@F		;yes -> */
	if ((dw)(previewmode) == (dw)(2)) {goto dummylabel5;}
	/* mov	cx,10*60*100 */
	cx = 10*60*100;
dummylabel5:
	// 4391 
	/* @@:		mov	dx,OFFSET PicFile */
	dx = offset(data,picfile);
	/* mov	al,1		;rapid fades */
	al = 1;
	/* call	LoadPicture */
	CALLF(loadpicture, 0);
	/* ret */
	RETN(0);
show3dmodel:
	// 2892 
	// 0 ;------------
	// 0 ;* initialize
	// 0 ;------------
edummylabel4:
	// 4393 
	/* mov	Show3DTimer,10*100 */
	show3dtimer = 10*100;
	/* mov	Exit3DFlag,0 */
	exit3dflag = 0;
	/* mov	FadeInFlag,1 */
	fadeinflag = 1;
	/* mov	Frames,0 */
	frames = 0;
	/* mov	LastFrame,0 */
	lastframe = 0;
	// 0 ;* clear and fade screen
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	InstantFadeOut */
	CALLF(instantfadeout, 0);
	// 0 ;* retrieve graphics data
	/* mov	dx,VGA_PAGE_2 */
	dx = 0x0a800;
	/* call	RetrieveData */
	CALLF(retrievedata, 0);
	// 0 ;* set viewmode
	/* mov	ax,ALT_VIEWMODE */
	ax = 2;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;* set up model and viewpoint
	/* call	SetUpModel */
	CALL(setupmodel, 0);
	// 0 ;---------------------------
modelloop:
	// 4395 
	// 0 ;---------------------------
	// 0 ;-------------------
	// 0 ;* update auto-timer
	// 0 ;-------------------
	/* call	UpdateTimer */
	CALL(updatetimer, 0);
	// 0 ;------------
	// 0 ;* check keys
	// 0 ;------------
	/* call	CheckKeys */
	CALL(checkkeys, 0);
	// 0 ;------------------
	// 0 ;* sort mouse input
	// 0 ;------------------
	/* call	SortMouseInput */
	CALL(sortmouseinput, 0);
	// 0 ;------------------
	// 0 ;* clear background
	// 0 ;------------------
	/* mov	al,COL_BLACK */
	al = 0;
	/* mov	cx,0 */
	cx = 0;
	/* mov	bl,0 */
	bl = 0;
	/* mov	dx,319 */
	dx = 319;
	/* mov	bh,159 */
	bh = 159;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	// 0 ;--------------------
	// 0 ;* draw control panel
	// 0 ;--------------------
	/* call	DrawPreviewPan */
	CALLF(drawpreviewpan, 0);
	/* call	DrawGadgets */
	CALL(drawgadgets, 0);
	// 0 ;-----------------
	// 0 ;* rotate 3D model
	// 0 ;-----------------
	/* test	Paused,1	;paused? */
	TEST(paused, 1);
	/* jnz	@F		;yes, do not rotate hdg -> */
	if ((paused & 1) != 0) {goto dummylabel6;}
	// 0 ;* rotate hdg (4 secs / revolution)
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* mov	dx,109		;65536 / (4 * 100) */
	dx = 109;
	/* mul	dx */
	MUL1_2(dx);
	/* add	HFine,ax */
	ADD(hfine, ax);
	// 0 ;* calc hdg, pitch and roll from fine values
dummylabel6:
	// 4397 
	/* @@:		mov	cl,7		;/128 */
	cl = 7;
	/* mov	ax,HFine */
	ax = hfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	P_VIEW.VP_HDG,ax */
	p_view.vp_hdg = ax;
	/* mov	ax,PFine */
	ax = pfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	P_VIEW.VP_PITCH,ax */
	p_view.vp_pitch = ax;
	/* mov	ax,RFine */
	ax = rfine;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* mov	P_VIEW.VP_ROLL,ax */
	p_view.vp_roll = ax;
	// 0 ;--------------------------
	// 0 ;* rotate helicopter blades
	// 0 ;--------------------------
	/* cmp	Category,HEL_MODEL	;helicopter? */
	CMP(category, 2);
	/* jne	SkipBlades		;no -> */
	if ((dw)(category) != (dw)(2)) {goto skipblades;}
	/* mov	al,P_MOBILE.MOB_ANIM */
	al = p_mobile.mob_anim;
	/* and	al,ROTOR_ALL			;current rotor pos */
	AND(al, 0x3);
	/* add	al,ROTOR_POS2			;rotate one position */
	ADD(al, 0x1);
	/* cmp	al,ROTOR_POS3			;end of rotation? */
	CMP(al, 0x2);
	/* jbe	@F				;no -> */
	if ((db)(al) <= (db)(0x2)) {goto dummylabel7;}
	/* mov	al,ROTOR_POS1			;start of rotation */
	al = 0x0;
dummylabel7:
	// 4399 
	/* @@:		and	P_MOBILE.MOB_ANIM,NOT ROTOR_ALL	;clear old rotation */
	AND(p_mobile.mob_anim, ~0x3);
	/* or	P_MOBILE.MOB_ANIM,al		;set new rotation */
	OR(p_mobile.mob_anim, al);
	// 0 ;---------------
	// 0 ;* draw 3D model
	// 0 ;---------------
skipblades:
	// 4401 
	/* SkipBlades:	mov	si,OFFSET VP */
	si = offset(data,vp);
	/* mov	di,OFFSET P_MOBILE */
	di = offset(data,p_mobile);
	/* call	MobileVisual */
	CALLF(mobilevisual, 0);
	// 0 ;--------------------
	// 0 ;* draw mouse pointer
	// 0 ;--------------------
	/* call	DrawMousePtr */
	CALL(drawmouseptr, 0);
	// 0 ;-----------------
	// 0 ;* download screen
	// 0 ;-----------------
	/* call	DownLoad */
	CALLF(download, 0);
	/* test	FadeInFlag,1	;fade in? */
	TEST(fadeinflag, 1);
	/* jz	@F		;no -> */
	if (!(fadeinflag & 1)) {goto dummylabel8;}
	/* call	QFadeIn */
	CALLF(qfadein, 0);
	/* mov	FadeInFlag,0 */
	fadeinflag = 0;
	/* mov	Frames,0 */
	frames = 0;
	/* mov	LastFrame,0 */
	lastframe = 0;
	// 0 ;------------
	// 0 ;* take photo
	// 0 ;------------
	// 0 ;----------------
	// 0 ;* check for exit
	// 0 ;----------------
	/* cmp	DieFlag,0	;quit? */
	CMP(dieflag, 0);
	/* jne	@F		;yes -> */
	if ((dw)(dieflag) != (dw)(0)) {goto dummylabel8;}
	/* test	Exit3DFlag,1	;exit? */
	TEST(exit3dflag, 1);
	/* jnz	@F		;yes -> */
	if ((exit3dflag & 1) != 0) {goto dummylabel8;}
	/* jmp	ModelLoop */
	goto modelloop;
dummylabel8:
	// 4403 
	/* @@:		call	QFadeOut */
	CALLF(qfadeout, 0);
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	InstantFadeIn	;clear fade */
	CALLF(instantfadein, 0);
	/* ret */
	RETN(0);
setupmodel:
	// 3051 
	// 0 ;* in case switching from air model to gnd model store pitch and roll
edummylabel5:
	// 4405 
	/* cmp	Category,GND_MODEL */
	CMP(category, 4);
	/* je	SkipStore */
	if ((dw)(category) == (dw)(4)) {goto skipstore;}
	/* mov	ax,PFine */
	ax = pfine;
	/* mov	PrevPFine,ax */
	prevpfine = ax;
	/* mov	ax,RFine */
	ax = rfine;
	/* mov	PrevRFine,ax */
	prevrfine = ax;
	/* jmp	SkipRestore */
	goto skiprestore;
	// 0 ;* in case switching from gnd model to air model restore pitch and roll
skipstore:
	// 4407 
	/* SkipStore:	mov	ax,PrevPFine */
	ax = prevpfine;
	/* mov	PFine,ax */
	pfine = ax;
	/* mov	ax,PrevRFine */
	ax = prevrfine;
	/* mov	RFine,ax */
	rfine = ax;
skiprestore:
	// 4409 
	/* SkipRestore:	mov	si,ModelPtr */
	si = modelptr;
	// 0 ;* fetch and set model parameters
	/* mov	ax,PREVDATA */
	ax = seg_offset(prevdata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,ES:[si].MOD_NUM */
	al = m2c::getdata(*((db*)((db*)&((model*)raddr(es,si))->mod_num)));
	/* mov	P_MOBILE.MOB_NUM,al */
	p_mobile.mob_num = al;
	/* mov	al,ES:[si].MOD_ANIM */
	al = m2c::getdata(*((db*)((db*)&((model*)raddr(es,si))->mod_anim)));
	/* mov	P_MOBILE.MOB_ANIM,al */
	p_mobile.mob_anim = al;
	/* mov	ax,ES:[si].MOD_CAT */
	ax = m2c::getdata(*((dw*)((db*)&((model*)raddr(es,si))->mod_cat)));
	/* mov	Category,ax */
	category = ax;
	/* mov	ax,ES:[si].MOD_DIST */
	ax = m2c::getdata(*((dw*)((db*)&((model*)raddr(es,si))->mod_dist)));
	/* mov	VP.VP_YFT,ax */
	vp.vp_yft = ax;
	/* mov	ax,ES:[si].MOD_DISP */
	ax = m2c::getdata(*((dw*)((db*)&((model*)raddr(es,si))->mod_disp)));
	/* mov	WORD PTR VP.VP_ZFT_LO,ax */
	*((dw*)((db*)&vp+vp_zft_lo)) = ax;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;* set viewpoint pitch wrt category
	/* mov	VP.VP_PITCH,0		;assume air model */
	vp.vp_pitch = 0;
	/* cmp	Category,GND_MODEL	;gnd model? */
	CMP(category, 4);
	/* jne	@F			;no -> */
	if ((dw)(category) != (dw)(4)) {goto dummylabel9;}
	/* mov	VP.VP_PITCH,512-38	;-26.5degs */
	vp.vp_pitch = 512-38;
	/* mov	PFine,0 */
	pfine = 0;
	/* mov	RFine,0 */
	rfine = 0;
	// 0 ;* create new panel wrt model
dummylabel9:
	// 4411 
	/* @@: 		call	MakePreviewPan */
	CALL(makepreviewpan, 0);
	/* ret */
	RETN(0);
updatetimer:
	// 3106 
	/* cmp	PreviewMode,2	;auto-run? */
	CMP(previewmode, 2);
edummylabel6:
	// 4413 
	/* jne	ExitTimer	;no -> */
	if (!ZF) {goto exittimer;}
	/* mov	ax,Show3DTimer */
	ax = show3dtimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel10;}
	/* or	Exit3DFlag,1 */
	OR(exit3dflag, 1);
	/* xor	ax,ax */
	XOR(ax, ax);
dummylabel10:
	// 4415 
	/* @@:		mov	Show3DTimer,ax */
	show3dtimer = ax;
exittimer:
	// 4417 
	/* ExitTimer:	ret */
	RETN(0);
checkkeys:
	// 3126 
	// 0 ;* quit preview mode?
edummylabel7:
	// 4419 
	/* mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_Q]	;quit? */
	AND(al, *((&key)+16));
	/* jz	@F		;no -> */
	if (al == 0) {goto dummylabel11;}
	/* mov	DieFlag,DIE_QUIT */
	dieflag = 1;
	// 0 ;* switch to picture?
dummylabel11:
	// 4421 
	/* @@:		mov	al,Key[K_SPACE] */
	al = *((&key)+57);
	/* or	al,Key[K_ENTER] */
	OR(al, *((&key)+28));
	/* or	al,Key[K_ESC] */
	OR(al, *((&key)+1));
	/* or	Exit3DFlag,al */
	OR(exit3dflag, al);
	/* ret */
	RETN(0);
sortmouseinput:
	// 3149 
	// 0 ;------------
	// 0 ;* read mouse
	// 0 ;------------
edummylabel8:
	// 4423 
	/* mov	GadgetPtr,-1	;assume no active gadget */
	gadgetptr = -1;
	/* call	ReadMouse */
	CALLF(readmouse, 0);
	// 0 ;* al = 1 = lhs button pressed
	// 0 ;* ah = 1 = rhs button pressed
	// 0 ;* cx = MouseX
	// 0 ;* bx = MouseY
	// 0 ;* dl = 1 = lhs button just pressed
	// 0 ;* dh = 1 = rhs button just pressed
	// 0 ;---------------
	// 0 ;* sort auto-run (exit if mouse button pressed)
	// 0 ;---------------
	/* cmp	PreviewMode,2	;auto-run? */
	CMP(previewmode, 2);
	/* jne	@F		;no -> */
	if ((dw)(previewmode) != (dw)(2)) {goto dummylabel12;}
	/* or	al,ah		;mouse button pressed? */
	OR(al, ah);
	/* or	Exit3DFlag,al */
	OR(exit3dflag, al);
	/* jmp	ExitMouseInput */
	goto exitmouseinput;
	// 0 ;------------------------
	// 0 ;* calc mouse crt co-ords
	// 0 ;------------------------
dummylabel12:
	// 4425 
	/* @@:		shr	cx,1 */
	SHR(cx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* cmp	cx,X_MAX */
	CMP(cx, 319);
	/* jle	@F */
	if ((short)(cx) <= (short)(319)) {goto dummylabel13;}
	/* mov	cx,X_MAX */
	cx = 319;
dummylabel13:
	// 4427 
	/* @@:	    	shr	bx,1 */
	SHR(bx, 1);
	/* adc	bx,0 */
	ADC(bx, 0);
	/* cmp	bx,Y_MAX */
	CMP(bx, 199);
	/* jle	@F */
	if ((short)(bx) <= (short)(199)) {goto dummylabel14;}
	/* mov	bx,Y_MAX */
	bx = 199;
dummylabel14:
	// 4429 
	/* @@:		mov	MouseXCrt,cx */
	mousexcrt = cx;
	/* mov	MouseYCrt,bx */
	mouseycrt = bx;
	// 0 ;------------------------
	// 0 ;* check for button click
	// 0 ;------------------------
	/* or	al,ah		;any mouse button clicked? */
	OR(al, ah);
	/* jz	ExitMouseInput	;no -> */
	if (al == 0) {goto exitmouseinput;}
	// 0 ;--------------
	// 0 ;* scan gadgets
	// 0 ;--------------
	/* mov	si,OFFSET GadgetList */
	si = offset(data,gadgetlist);
	/* mov	cx,NUM_GADGETS */
	cx = 9;
gadgetscanloop:
	// 4431 
	/* GadgetScanLoop:	mov	ax,MouseXCrt */
	ax = mousexcrt;
	/* sub	ax,[si].GAD_XPOS */
	SUB(ax, *((dw*)((db*)&((gadget*)raddr(ds,si))->gad_xpos)));
	/* jb	@F			;miss -> */
	if (CF) {goto dummylabel15;}
	/* cmp	ax,[si].GAD_WIDTH */
	CMP(ax, *((dw*)((db*)&((gadget*)raddr(ds,si))->gad_width)));
	/* jae	@F			;miss -> */
	if ((dw)(ax) >= (dw)(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_width)))) {goto dummylabel15;}
	/* mov	ax,MouseYCrt */
	ax = mouseycrt;
	/* sub	ax,[si].GAD_YPOS */
	SUB(ax, *((dw*)((db*)&((gadget*)raddr(ds,si))->gad_ypos)));
	/* jb	@F			;miss -> */
	if (CF) {goto dummylabel15;}
	/* cmp	ax,[si].GAD_DEPTH */
	CMP(ax, *((dw*)((db*)&((gadget*)raddr(ds,si))->gad_depth)));
	/* jb	HitGadget		;hit -> */
	if ((dw)(ax) < (dw)(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_depth)))) {goto hitgadget;}
dummylabel15:
	// 4433 
	/* @@:		add	si,GAD_REC_SIZE		;next gadget */
	ADD(si, 12);
	/* loop	GadgetScanLoop */
	LOOP(gadgetscanloop);
	/* jmp	ExitMouseInput */
	goto exitmouseinput;
hitgadget:
	// 4435 
	/* HitGadget:	mov	GadgetPtr,si */
	gadgetptr = si;
	// 0 ;------------
	// 0 ;* sort event
	// 0 ;------------
	/* call	[si].GAD_EVENT */
	CALL(__dispatch_call_ext, *((dw*)((db*)&((gadget*)raddr(ds,si))->gad_event)));
exitmouseinput:
	// 4437 
	/* ExitMouseInput:	ret */
	RETN(0);
drawmouseptr:
	// 3230 
	/* cmp	PreviewMode,2	;auto-run? */
	CMP(previewmode, 2);
edummylabel9:
	// 4439 
	/* jne	__m2c_macrolocal_6_skip */
	if (!ZF) {goto __m2c_macrolocal_6_skip;}
	/* jmp	ExitMousePtr */
	goto exitmouseptr;
__m2c_macrolocal_6_skip:
	// 4441 
	// 0 ;yes ->
	// 0 ;--------------------
	// 0 ;* draw mouse pointer
	// 0 ;--------------------
	// 0 ;*              � (a)
	// 0 ;*              �
	// 0 ;*      (c) ���� ���� (d)
	// 0 ;*              �
	// 0 ;*              � (b)
	// 0 ;-----------------
	// 0 ;* draw stroke (a)
	// 0 ;-----------------
	/* mov	cx,MouseXCrt */
	cx = mousexcrt;
	/* mov	bx,MouseYCrt */
	bx = mouseycrt;
	/* sub	bx,2 */
	SUB(bx, 2);
	/* cmp	bx,Y_MIN */
	CMP(bx, 0);
	/* jl	SkipA */
	if ((short)(bx) < (short)(0)) {goto skipa;}
	/* mov	ax,bx */
	ax = bx;
	/* sub	ax,2 */
	SUB(ax, 2);
	/* cmp	ax,Y_MIN */
	CMP(ax, 0);
	/* jge	@F */
	if ((short)(ax) >= (short)(0)) {goto dummylabel16;}
	/* mov	ax,Y_MIN */
	ax = 0;
dummylabel16:
	// 4443 
	/* @@:		mov	bh,al */
	bh = al;
	/* mov	al,COL_MOUSE_PTR */
	al = 194;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;-----------------
	// 0 ;* draw stroke (b)
	// 0 ;-----------------
skipa:
	// 4445 
	/* SkipA:		mov	cx,MouseXCrt */
	cx = mousexcrt;
	/* mov	bx,MouseYCrt */
	bx = mouseycrt;
	/* add	bx,2 */
	ADD(bx, 2);
	/* cmp	bx,Y_MAX */
	CMP(bx, 199);
	/* jg	SkipB */
	if ((short)(bx) > (short)(199)) {goto skipb;}
	/* mov	ax,bx */
	ax = bx;
	/* add	ax,2 */
	ADD(ax, 2);
	/* cmp	ax,Y_MAX */
	CMP(ax, 199);
	/* jle	@F */
	if ((short)(ax) <= (short)(199)) {goto dummylabel17;}
	/* mov	ax,Y_MAX */
	ax = 199;
dummylabel17:
	// 4447 
	/* @@:		mov	bh,al */
	bh = al;
	/* mov	al,COL_MOUSE_PTR */
	al = 194;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;-----------------
	// 0 ;* draw stroke (c)
	// 0 ;-----------------
skipb:
	// 4449 
	/* SkipB:		mov	cx,MouseXCrt */
	cx = mousexcrt;
	/* mov	bx,MouseYCrt */
	bx = mouseycrt;
	/* sub	cx,2 */
	SUB(cx, 2);
	/* cmp	cx,X_MIN */
	CMP(cx, 0);
	/* jl	SkipC */
	if ((short)(cx) < (short)(0)) {goto skipc;}
	/* mov	dx,cx */
	dx = cx;
	/* sub	dx,2 */
	SUB(dx, 2);
	/* cmp	dx,X_MIN */
	CMP(dx, 0);
	/* jge	@F */
	if ((short)(dx) >= (short)(0)) {goto dummylabel18;}
	/* mov	dx,X_MIN */
	dx = 0;
dummylabel18:
	// 4451 
	/* @@:		mov	al,COL_MOUSE_PTR */
	al = 194;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;-----------------
	// 0 ;* draw stroke (d)
	// 0 ;-----------------
skipc:
	// 4453 
	/* SkipC:		mov	cx,MouseXCrt */
	cx = mousexcrt;
	/* mov	bx,MouseYCrt */
	bx = mouseycrt;
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,X_MAX */
	CMP(cx, 319);
	/* jg	ExitMousePtr */
	if ((short)(cx) > (short)(319)) {goto exitmouseptr;}
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,2 */
	ADD(dx, 2);
	/* cmp	dx,X_MAX */
	CMP(dx, 319);
	/* jle	@F */
	if ((short)(dx) <= (short)(319)) {goto dummylabel19;}
	/* mov	dx,X_MAX */
	dx = 319;
dummylabel19:
	// 4455 
	/* @@:		mov	al,COL_MOUSE_PTR */
	al = 194;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
exitmouseptr:
	// 4457 
	/* ExitMousePtr: 	ret */
	RETN(0);
nullevent:
	// 3324 
	/* ret ;* kill: nothing */
	RETN(0);
ejectevent:
	// 3337 
	/* mov	DieFlag,DIE_QUIT ;* kill: nothing */
	dieflag = 1;
edummylabel10:
	// 4459 
	/* ret */
	RETN(0);
pictureevent:
	// 3351 
	/* or	Exit3DFlag,1 ;* kill: nothing */
	OR(exit3dflag, 1);
edummylabel11:
	// 4461 
	/* ret */
	RETN(0);
reverseevent:
	// 3365 
	/* or	dl,dh		;just pressed? */
	OR(dl, dh);
edummylabel12:
	// 4463 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel20;}
	/* mov	AutoTimer,AUTO_DELAY */
	autotimer = 100;
	/* jmp	ContReverse */
	goto contreverse;
dummylabel20:
	// 4465 
	/* @@:		mov	ax,LastFrame */
	ax = lastframe;
	/* sub	AutoTimer,ax */
	SUB(autotimer, ax);
	/* jnc	@F */
	if (!CF) {goto dummylabel21;}
	/* mov	AutoTimer,AUTO_RATE */
	autotimer = 33;
contreverse:
	// 4467 
	/* ContReverse:	call	PrevModelPtr */
	CALL(prevmodelptr, 0);
	/* call	SetUpModel */
	CALL(setupmodel, 0);
dummylabel21:
	// 4469 
	/* @@:		ret */
	RETN(0);
forwardevent:
	// 3388 
	/* or	dl,dh		;just pressed? */
	OR(dl, dh);
edummylabel13:
	// 4471 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel22;}
	/* mov	AutoTimer,AUTO_DELAY */
	autotimer = 100;
	/* jmp	ContForward */
	goto contforward;
dummylabel22:
	// 4473 
	/* @@:		mov	ax,LastFrame */
	ax = lastframe;
	/* sub	AutoTimer,ax */
	SUB(autotimer, ax);
	/* jnc	@F */
	if (!CF) {goto dummylabel23;}
	/* mov	AutoTimer,AUTO_RATE */
	autotimer = 33;
contforward:
	// 4475 
	/* ContForward:	call	NextModelPtr */
	CALL(nextmodelptr, 0);
	/* call	SetUpModel */
	CALL(setupmodel, 0);
dummylabel23:
	// 4477 
	/* @@:		ret */
	RETN(0);
pauseplayevent:
	// 3411 
	/* test	PausePlayXchg,1	;exchange in progress? */
	TEST(pauseplayxchg, 1);
edummylabel14:
	// 4479 
	/* jnz	@F		;yes -> */
	if (!ZF) {goto dummylabel24;}
	/* xor	Paused,1	;toggle pause / play */
	XOR(paused, 1);
	/* mov	PausePlayXchg,1	;exchange gadgets */
	pauseplayxchg = 1;
	/* call	MakePreviewPan */
	CALL(makepreviewpan, 0);
dummylabel24:
	// 4481 
	/* @@:		ret */
	RETN(0);
pitchupevent:
	// 3429 
	/* cmp	Category,GND_MODEL ;* kill: nothing */
	CMP(category, 4);
edummylabel15:
	// 4483 
	/* je	SkipPitchUp */
	if (ZF) {goto skippitchup;}
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* mov	cl,7 */
	cl = 7;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* add	ax,PFine */
	ADD(ax, pfine);
	/* cmp	ax,64*128	;45degs max pitch up */
	CMP(ax, 64*128);
	/* jle	@F */
	if ((short)(ax) <= (short)(64*128)) {goto dummylabel25;}
	/* mov	ax,64*128 */
	ax = 64*128;
dummylabel25:
	// 4485 
	/* @@:		mov	PFine,ax */
	pfine = ax;
	/* ret */
	RETN(0);
skippitchup:
	// 4487 
	/* SkipPitchUp:	mov	GadgetPtr,-1	;deselect gadget */
	gadgetptr = -1;
	/* ret */
	RETN(0);
pitchdnevent:
	// 3454 
	/* cmp	Category,GND_MODEL ;* kill: nothing */
	CMP(category, 4);
edummylabel16:
	// 4489 
	/* je	SkipPitchDn */
	if (ZF) {goto skippitchdn;}
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* mov	cl,7 */
	cl = 7;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* neg	ax */
	NEG(ax);
	/* add	ax,PFine */
	ADD(ax, pfine);
	/* cmp	ax,-64*128	;-45degs max pitch down */
	CMP(ax, -64*128);
	/* jge	@F */
	if ((short)(ax) >= (short)(-64*128)) {goto dummylabel26;}
	/* mov	ax,-64*128 */
	ax = -64*128;
dummylabel26:
	// 4491 
	/* @@:		mov	PFine,ax */
	pfine = ax;
	/* ret */
	RETN(0);
skippitchdn:
	// 4493 
	/* SkipPitchDn:	mov	GadgetPtr,-1	;deselect gadget */
	gadgetptr = -1;
	/* ret */
	RETN(0);
bankrevent:
	// 3480 
	/* cmp	Category,GND_MODEL ;* kill: nothing */
	CMP(category, 4);
edummylabel17:
	// 4495 
	/* je	SkipBankR */
	if (ZF) {goto skipbankr;}
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* mov	cl,7 */
	cl = 7;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* add	ax,RFine */
	ADD(ax, rfine);
	/* cmp	ax,64*128	;45 degs max bank right */
	CMP(ax, 64*128);
	/* jle	@F */
	if ((short)(ax) <= (short)(64*128)) {goto dummylabel27;}
	/* mov	ax,64*128 */
	ax = 64*128;
dummylabel27:
	// 4497 
	/* @@:		mov	RFine,ax */
	rfine = ax;
	/* ret */
	RETN(0);
skipbankr:
	// 4499 
	/* SkipBankR:	mov	GadgetPtr,-1	;deselect gadget */
	gadgetptr = -1;
	/* ret */
	RETN(0);
banklevent:
	// 3505 
	/* cmp	Category,GND_MODEL ;* kill: nothing */
	CMP(category, 4);
edummylabel18:
	// 4501 
	/* je	SkipBankL */
	if (ZF) {goto skipbankl;}
	/* mov	ax,LastFrame */
	ax = lastframe;
	/* mov	cl,7 */
	cl = 7;
	/* shl	ax,cl */
	SHL(ax, cl);
	/* neg	ax */
	NEG(ax);
	/* add	ax,RFine */
	ADD(ax, rfine);
	/* cmp	ax,-64*128	;-45degs max bank left */
	CMP(ax, -64*128);
	/* jge	@F */
	if ((short)(ax) >= (short)(-64*128)) {goto dummylabel28;}
	/* mov	ax,-64*128 */
	ax = -64*128;
dummylabel28:
	// 4503 
	/* @@:		mov	RFine,ax */
	rfine = ax;
	/* ret */
	RETN(0);
skipbankl:
	// 4505 
	/* SkipBankL:	mov	GadgetPtr,-1	;deselect gadget */
	gadgetptr = -1;
	/* ret */
	RETN(0);
nextmodelptr:
	// 3529 
	/* mov	si,ModelPtr ;* kill: flags */
	si = modelptr;
edummylabel19:
	// 4507 
	/* add	si,MOD_REC_SIZE */
	ADD(si, 28);
	/* cmp	si,OFFSET ModelListEnd	;wrap around? */
	CMP(si, offset(prevdata,modellistend));
	/* jb	@F	   		;no -> */
	if ((dw)(si) < (dw)(offset(prevdata,modellistend))) {goto dummylabel29;}
	/* mov	si,OFFSET ModelList */
	si = offset(prevdata,modellist);
dummylabel29:
	// 4509 
	/* @@:		mov	ModelPtr,si */
	modelptr = si;
	/* ret */
	RETN(0);
prevmodelptr:
	// 3546 
	/* mov	si,ModelPtr ;* kill: flags */
	si = modelptr;
edummylabel20:
	// 4511 
	/* cmp	si,OFFSET ModelList	;wrap around? */
	CMP(si, offset(prevdata,modellist));
	/* ja	@F	   		;no -> */
	if ((dw)(si) > (dw)(offset(prevdata,modellist))) {goto dummylabel30;}
	/* mov	si,OFFSET ModelListEnd */
	si = offset(prevdata,modellistend);
dummylabel30:
	// 4513 
	/* @@:		sub	si,MOD_REC_SIZE */
	SUB(si, 28);
	/* mov	ModelPtr,si */
	modelptr = si;
	/* ret */
	RETN(0);
drawgadgets:
	// 3563 
	// 0 ;----------------------------
	// 0 ;* sort pause / play exchange
	// 0 ;----------------------------
edummylabel21:
	// 4515 
	/* test	PausePlayXchg,1	;exchange gadgets? */
	TEST(pauseplayxchg, 1);
	/* jz	SkipXchg	;no -> */
	if (!(pauseplayxchg & 1)) {goto skipxchg;}
	// 0 ;* only exchange if pause / play gadget inactive
	/* cmp	GadgetPtr,OFFSET PausePlayGadget */
	CMP(gadgetptr, offset(data,pauseplaygadget));
	/* je	SkipXchg */
	if ((dw)(gadgetptr) == (dw)(offset(data,pauseplaygadget))) {goto skipxchg;}
	/* mov	si,173*320+80	;assume switch to pause gadget */
	si = 173*320+80;
	/* test	Paused,1	;paused? */
	TEST(paused, 1);
	/* jz	@F		;no -> */
	if (!(paused & 1)) {goto dummylabel31;}
	/* mov	si,173*320+112	;play gadget */
	si = 173*320+112;
dummylabel31:
	// 4517 
	/* @@:		mov	PausePlayGadget.GAD_SPTR,si */
	pauseplaygadget.gad_sptr = si;
	/* mov	PausePlayXchg,0	;exchanged */
	pauseplayxchg = 0;
	// 0 ;--------------------
	// 0 ;* draw active gadget (if any)
	// 0 ;--------------------
skipxchg:
	// 4519 
	/* SkipXchg:	mov	si,GadgetPtr */
	si = gadgetptr;
	/* cmp	si,-1		;null ptr? */
	CMP(si, -1);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel32;}
	/* mov	cx,[si].GAD_XPOS */
	cx = m2c::getdata(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_xpos)));
	/* mov	bx,[si].GAD_YPOS */
	bx = m2c::getdata(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_ypos)));
	/* mov	dx,[si].GAD_WIDTH */
	dx = m2c::getdata(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_width)));
	/* mov	bp,[si].GAD_DEPTH */
	bp = m2c::getdata(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_depth)));
	/* mov	si,[si].GAD_SPTR */
	si = m2c::getdata(*((dw*)((db*)&((gadget*)raddr(ds,si))->gad_sptr)));
	/* call	DrawSprite */
	CALL(drawsprite, 0);
dummylabel32:
	// 4521 
	/* @@:		ret */
	RETN(0);
makepreviewpan:
	// 3607 
	/* push	WorkScrPtr ;*       printing the text each frame (as the DrawSprite routine is slow). */
	PUSH(workscrptr);
edummylabel22:
	// 4523 
	/* mov	WorkScrPtr,VGA_PAGE_3 */
	workscrptr = 0x0ac00;
	// 0 ;--------------------
	// 0 ;* copy default panel
	// 0 ;--------------------
	/* call	CopyPreviewPan */
	CALLF(copypreviewpan, 0);
	// 0 ;-----------------------------------------------
	// 0 ;* blank out roll / pitch gadget if ground model
	// 0 ;-----------------------------------------------
	/* cmp	Category,GND_MODEL */
	CMP(category, 4);
	/* jne	@F */
	if ((dw)(category) != (dw)(4)) {goto dummylabel33;}
	/* mov	cx,47 */
	cx = 47;
	/* mov	bx,168 */
	bx = 168;
	/* mov	dx,31 */
	dx = 31;
	/* mov	bp,24 */
	bp = 24;
	/* mov	si,173*320+192 */
	si = 173*320+192;
	/* call	DrawSprite */
	CALL(drawsprite, 0);
	// 0 ;----------------------------
	// 0 ;* draw play gadget if paused
	// 0 ;----------------------------
dummylabel33:
	// 4525 
	/* @@:		test	Paused,1 */
	TEST(paused, 1);
	/* jz	@F */
	if (!(paused & 1)) {goto dummylabel34;}
	/* mov	cx,18 */
	cx = 18;
	/* mov	bx,181 */
	bx = 181;
	/* mov	dx,12 */
	dx = 12;
	/* mov	bp,11 */
	bp = 11;
	/* mov	si,173*320+96 */
	si = 173*320+96;
	/* call	DrawSprite */
	CALL(drawsprite, 0);
	// 0 ;-------------------------
	// 0 ;* print title / sub-title
	// 0 ;-------------------------
dummylabel34:
	// 4527 
	/* @@: 		call	PrintTitle$ */
	CALL(printtitledol, 0);
	/* call	PrintSubTitle$ */
	CALL(printsubtitledol, 0);
	/* pop	WorkScrPtr */
	POP(workscrptr);
	/* ret */
	RETN(0);
printtitledol:
	// 3660 
	// 0 ;-------------------------
	// 0 ;* pickup string x, y, ptr
	// 0 ;-------------------------
edummylabel23:
	// 4529 
	/* mov	si,ModelPtr */
	si = modelptr;
	/* mov	ax,PREVDATA */
	ax = seg_offset(prevdata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,[si].MOD_TTL_X */
	cx = m2c::getdata(*((dw*)((db*)&((model*)raddr(ds,si))->mod_ttl_x)));
	/* mov	bx,[si].MOD_TTL_Y */
	bx = m2c::getdata(*((dw*)((db*)&((model*)raddr(ds,si))->mod_ttl_y)));
	/* mov	si,[si].MOD_TTL_PTR */
	si = m2c::getdata(*((dw*)((db*)&((model*)raddr(ds,si))->mod_ttl_ptr)));
	// 0 ;------------------------
	// 0 ;* check for null pointer
	// 0 ;------------------------
	/* cmp	si,-1		;null pointer? */
	CMP(si, -1);
	/* jne	__m2c_macrolocal_7_skip */
	if ((dw)(si) != (dw)(-1)) {goto __m2c_macrolocal_7_skip;}
	/* jmp	ExitTitle$ */
	goto exittitledol;
__m2c_macrolocal_7_skip:
	// 4531 
	// 0 ;yes ->
	// 0 ;------------------
	// 0 ;* scan string loop
	// 0 ;------------------
titleloop:
	// 4533 
	/* TitleLoop:	lodsb			;fetch char */
	{ LODSB; }
	/* mov	ah,[si]		;fetch next char */
	ah = m2c::getdata(*(raddr(ds,si)));
	/* test	al,al		;end of string? */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_8_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_8_skip;}
	/* jmp	ExitTitle$ */
	goto exittitledol;
__m2c_macrolocal_8_skip:
	// 4535 
	// 0 ;yes ->
	/* push	si		;store string ptr */
	PUSH(si);
	// 0 ;------------
	// 0 ;* sort space
	// 0 ;------------
	/* cmp	al,' '		;space? */
	CMP(al, ' ');
	/* jne	@F		;no -> */
	if ((db)(al) != (db)(' ')) {goto dummylabel35;}
	/* mov	dx,TITLE_SPACE	;width */
	dx = 17+1;
	/* mov	si,-1		;sprite source ptr (-1 = non-printable) */
	si = -1;
	/* jmp	ContTitle */
	goto conttitle;
	// 0 ;-------------
	// 0 ;* sort hyphen
	// 0 ;-------------
dummylabel35:
	// 4537 
	/* @@:		cmp	al,'-'		;hyphen? */
	CMP(al, '-');
	/* jne	@F		;no -> */
	if ((db)(al) != (db)('-')) {goto dummylabel36;}
	/* mov	dx,TITLE_HYPHEN	;width */
	dx = 9+1;
	/* mov	si,97*320+240	;sprite source ptr */
	si = 97*320+240;
	/* jmp	ContTitle */
	goto conttitle;
	// 0 ;-----------------
	// 0 ;* sort '0' .. '9'
	// 0 ;-----------------
dummylabel36:
	// 4539 
	/* @@:		cmp	al,'0'		;'0' .. '9'? */
	CMP(al, '0');
	/* jb	@F		;no -> */
	if ((db)(al) < (db)('0')) {goto dummylabel37;}
	/* cmp	al,'9'		;'0' .. '9'? */
	CMP(al, '9');
	/* ja	@F		;no -> */
	if ((db)(al) > (db)('9')) {goto dummylabel37;}
	// 0 ;* look up char width
	/* mov	di,ax */
	di = ax;
	/* and	di,000ffh */
	AND(di, 0x000ff);
	/* sub	di,'0' */
	SUB(di, '0');
	/* mov	dl,TitleWidth09[di]	;dx = char width */
	dl = *((&titlewidth09)+di);
	/* xor	dh,dh */
	XOR(dh, dh);
	// 0 ;* for chars '0' .. '9' ptr = (97 * 320) + (char - '0') * 24
	/* mov	si,ax		;store this char / next char */
	si = ax;
	/* sub	al,'0' */
	SUB(al, '0');
	/* mov	ah,24 */
	ah = 24;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,97*320 */
	ADD(ax, 97*320);
	/* xchg	ax,si		;ax = chars / si = ptr */
	XCHG(ax, si);
	/* jmp	ContTitle */
	goto conttitle;
	// 0 ;-----------------
	// 0 ;* sort 'A' .. 'Z'
	// 0 ;-----------------
dummylabel37:
	// 4541 
	/* @@:		cmp	al,'A'		;'A' .. 'Z'? */
	CMP(al, 'A');
	/* jb	SkipTitleChar	;no, invalid char -> */
	if ((db)(al) < (db)('A')) {goto skiptitlechar;}
	/* cmp	al,'Z'		;'A' .. 'Z'? */
	CMP(al, 'Z');
	/* ja	SkipTitleChar	;no, invalid char -> */
	if ((db)(al) > (db)('Z')) {goto skiptitlechar;}
	// 0 ;* look up char width
	/* mov	di,ax */
	di = ax;
	/* and	di,000ffh */
	AND(di, 0x000ff);
	/* sub	di,'A' */
	SUB(di, 'A');
	/* mov	dl,TitleWidthAZ[di]	;dx = char width */
	dl = *((&titlewidthaz)+di);
	/* xor	dh,dh */
	XOR(dh, dh);
	// 0 ;* calc sprite source ptr
	/* mov	si,ax		;store this char / next char */
	si = ax;
	/* cmp	al,'M'		;'A' .. 'M'? */
	CMP(al, 'M');
	/* ja	@F		;no -> */
	if ((db)(al) > (db)('M')) {goto dummylabel38;}
	// 0 ;* for chars 'A' .. 'M' ptr = (51 * 320) + (char - 'A') * 24
	/* sub	al,'A' */
	SUB(al, 'A');
	/* mov	ah,24 */
	ah = 24;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,51*320 */
	ADD(ax, 51*320);
	/* xchg	ax,si		;ax = chars / si = ptr */
	XCHG(ax, si);
	/* jmp	ContTitle */
	goto conttitle;
	// 0 ;* for chars 'N' .. 'Z' ptr = (74 * 320) + (char - 'N') * 24
dummylabel38:
	// 4543 
	/* @@:		sub	al,'N' */
	SUB(al, 'N');
	/* mov	ah,24 */
	ah = 24;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,74*320 */
	ADD(ax, 74*320);
	/* xchg	ax,si		;ax = chars / si = ptr */
	XCHG(ax, si);
	// 0 ;---------------------------
conttitle:
	// 4545 
	// 0 ;---------------------------
	/* xor	bp,bp			;assume zero kern adjustment */
	XOR(bp, bp);
	/* mov	di,OFFSET TitleKern */
	di = offset(prevdata,titlekern);
titlekernlp:
	// 4547 
	/* TitleKernLp:	cmp	[di].KERN_THIS_CHAR,-1	;end of list? */
	CMP(*((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char)), -1);
	/* je	TitleKernOk		;yes -> */
	if ((db)(*((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char))) == (db)(-1)) {goto titlekernok;}
	/* cmp	al,[di].KERN_THIS_CHAR	;this char match? */
	CMP(al, *((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char)));
	/* jne	@F			;no -> */
	if ((db)(al) != (db)(*((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char)))) {goto dummylabel39;}
	/* cmp	ah,[di].KERN_NEXT_CHAR	;next char match? */
	CMP(ah, *((db*)((db*)&((kern*)raddr(ds,di))->kern_next_char)));
	/* jne	@F			;no -> */
	if ((db)(ah) != (db)(*((db*)((db*)&((kern*)raddr(ds,di))->kern_next_char)))) {goto dummylabel39;}
	/* push	ax */
	PUSH(ax);
	/* mov	al,[di].KERN_X_ADJUST */
	al = m2c::getdata(*((db*)((db*)&((kern*)raddr(ds,di))->kern_x_adjust)));
	/* cbw */
	CBW;
	/* mov	bp,ax */
	bp = ax;
	/* pop	ax */
	POP(ax);
	/* jmp	TitleKernOk */
	goto titlekernok;
dummylabel39:
	// 4549 
	/* @@:		add	di,KERN_REC_SIZE */
	ADD(di, 3);
	/* jmp	TitleKernLp */
	goto titlekernlp;
	// 0 ;-------------
	// 0 ;* draw sprite
	// 0 ;-------------
titlekernok:
	// 4551 
	/* TitleKernOk:	cmp	si,-1		;non-printable character? */
	CMP(si, -1);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel40;}
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	bp */
	PUSH(bp);
	/* mov	bp,22		;depth */
	bp = 22;
	/* call	DrawSprite */
	CALL(drawsprite, 0);
	/* pop	bp */
	POP(bp);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	ax,PREVDATA */
	ax = seg_offset(prevdata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
dummylabel40:
	// 4553 
	/* @@:		add	cx,dx		;char width */
	ADD(cx, dx);
	/* add	cx,bp		;kern adjustment */
	ADD(cx, bp);
	/* inc	cx		;pixel gap */
	INC(cx);
skiptitlechar:
	// 4555 
	/* SkipTitleChar:	pop	si		;restore string ptr */
	POP(si);
	/* jmp	TitleLoop */
	goto titleloop;
	// 0 ;---------
	// 0 ;* tidy up
	// 0 ;---------
exittitledol:
	// 4557 
	/* ExitTitle$:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* ret */
	RETN(0);
printsubtitledol:
	// 3838 
	// 0 ;-------------------------
	// 0 ;* pickup string x, y, ptr
	// 0 ;-------------------------
edummylabel24:
	// 4559 
	/* mov	si,ModelPtr */
	si = modelptr;
	/* mov	ax,PREVDATA */
	ax = seg_offset(prevdata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,[si].MOD_SUB_TTL_X */
	cx = m2c::getdata(*((dw*)((db*)&((model*)raddr(ds,si))->mod_sub_ttl_x)));
	/* mov	bx,[si].MOD_SUB_TTL_Y */
	bx = m2c::getdata(*((dw*)((db*)&((model*)raddr(ds,si))->mod_sub_ttl_y)));
	/* mov	si,[si].MOD_SUB_TTL_PTR */
	si = m2c::getdata(*((dw*)((db*)&((model*)raddr(ds,si))->mod_sub_ttl_ptr)));
	// 0 ;------------------------
	// 0 ;* check for null pointer
	// 0 ;------------------------
	/* cmp	si,-1		;null pointer? */
	CMP(si, -1);
	/* jne	__m2c_macrolocal_9_skip */
	if ((dw)(si) != (dw)(-1)) {goto __m2c_macrolocal_9_skip;}
	/* jmp	ExitSubTitle$ */
	goto exitsubtitledol;
__m2c_macrolocal_9_skip:
	// 4561 
	// 0 ;yes ->
	// 0 ;------------------
	// 0 ;* scan string loop
	// 0 ;------------------
subtitleloop:
	// 4563 
	/* SubTitleLoop:	lodsb			;fetch char */
	{ LODSB; }
	/* mov	ah,[si]		;fetch next char */
	ah = m2c::getdata(*(raddr(ds,si)));
	/* test	al,al		;end of string? */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_10_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_10_skip;}
	/* jmp	ExitSubTitle$ */
	goto exitsubtitledol;
__m2c_macrolocal_10_skip:
	// 4565 
	// 0 ;yes ->
	/* push	si		;store string ptr */
	PUSH(si);
	// 0 ;------------
	// 0 ;* sort space
	// 0 ;------------
	/* cmp	al,' '		;space? */
	CMP(al, ' ');
	/* jne	@F		;no -> */
	if ((db)(al) != (db)(' ')) {goto dummylabel41;}
	/* mov	dx,SUB_TTL_SPACE	;width */
	dx = 12+1;
	/* mov	si,-1		;sprite source ptr (-1 = non-printable) */
	si = -1;
	/* jmp	ContSubTitle */
	goto contsubtitle;
	// 0 ;-------------
	// 0 ;* sort hyphen
	// 0 ;-------------
dummylabel41:
	// 4567 
	/* @@:		cmp	al,'-'		;hyphen? */
	CMP(al, '-');
	/* jne	@F		;no -> */
	if ((db)(al) != (db)('-')) {goto dummylabel42;}
	/* mov	dx,SUB_TTL_HYPHEN	;width */
	dx = 4+1;
	/* mov	si,154*320+240	;sprite source ptr */
	si = 154*320+240;
	/* jmp	ContSubTitle */
	goto contsubtitle;
	// 0 ;-----------------
	// 0 ;* sort '0' .. '9'
	// 0 ;-----------------
dummylabel42:
	// 4569 
	/* @@:		cmp	al,'0'		;'0' .. '9'? */
	CMP(al, '0');
	/* jb	@F		;no -> */
	if ((db)(al) < (db)('0')) {goto dummylabel43;}
	/* cmp	al,'9'		;'0' .. '9'? */
	CMP(al, '9');
	/* ja	@F		;no -> */
	if ((db)(al) > (db)('9')) {goto dummylabel43;}
	// 0 ;* look up char width
	/* mov	di,ax */
	di = ax;
	/* and	di,000ffh */
	AND(di, 0x000ff);
	/* sub	di,'0' */
	SUB(di, '0');
	/* mov	dl,STitleWidth09[di]	;dx = char width */
	dl = *((&stitlewidth09)+di);
	/* xor	dh,dh */
	XOR(dh, dh);
	// 0 ;* for chars '0' .. '9' ptr = (154 * 320) + (char - '0') * 24
	/* mov	si,ax		;store this char / next char */
	si = ax;
	/* sub	al,'0' */
	SUB(al, '0');
	/* mov	ah,24 */
	ah = 24;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,154*320 */
	ADD(ax, 154*320);
	/* xchg	ax,si		;ax = chars / si = ptr */
	XCHG(ax, si);
	/* jmp	ContSubTitle */
	goto contsubtitle;
	// 0 ;-----------------
	// 0 ;* sort 'A' .. 'Z'
	// 0 ;-----------------
dummylabel43:
	// 4571 
	/* @@:		cmp	al,'A'		;'A' .. 'Z'? */
	CMP(al, 'A');
	/* jb	SkipSTitleChar	;no, invalid char -> */
	if ((db)(al) < (db)('A')) {goto skipstitlechar;}
	/* cmp	al,'Z'		;'A' .. 'Z'? */
	CMP(al, 'Z');
	/* ja	SkipSTitleChar	;no, invalid char -> */
	if ((db)(al) > (db)('Z')) {goto skipstitlechar;}
	// 0 ;* look up char width
	/* mov	di,ax */
	di = ax;
	/* and	di,000ffh */
	AND(di, 0x000ff);
	/* sub	di,'A' */
	SUB(di, 'A');
	/* mov	dl,STitleWidthAZ[di]	;dx = char width */
	dl = *((&stitlewidthaz)+di);
	/* xor	dh,dh */
	XOR(dh, dh);
	// 0 ;* calc sprite source ptr
	/* mov	si,ax		;store this char / next char */
	si = ax;
	/* cmp	al,'M'		;'A' .. 'M'? */
	CMP(al, 'M');
	/* ja	@F		;no -> */
	if ((db)(al) > (db)('M')) {goto dummylabel44;}
	// 0 ;* for chars 'A' .. 'M' ptr = (120 * 320) + (char - 'A') * 24
	/* sub	al,'A' */
	SUB(al, 'A');
	/* mov	ah,24 */
	ah = 24;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,120*320 */
	ADD(ax, 120*320);
	/* xchg	ax,si		;ax = chars / si = ptr */
	XCHG(ax, si);
	/* jmp	ContSubTitle */
	goto contsubtitle;
	// 0 ;* for chars 'N' .. 'Z' ptr = (137 * 320) + (char - 'N') * 24
dummylabel44:
	// 4573 
	/* @@:		sub	al,'N' */
	SUB(al, 'N');
	/* mov	ah,24 */
	ah = 24;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,137*320 */
	ADD(ax, 137*320);
	/* xchg	ax,si		;ax = chars / si = ptr */
	XCHG(ax, si);
	// 0 ;---------------------------
contsubtitle:
	// 4575 
	// 0 ;---------------------------
	/* xor	bp,bp			;assume zero kern adjustment */
	XOR(bp, bp);
	/* mov	di,OFFSET SubTitleKern */
	di = offset(prevdata,subtitlekern);
stitlekernlp:
	// 4577 
	/* STitleKernLp:	cmp	[di].KERN_THIS_CHAR,-1	;end of list? */
	CMP(*((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char)), -1);
	/* je	STitleKernOk		;yes -> */
	if ((db)(*((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char))) == (db)(-1)) {goto stitlekernok;}
	/* cmp	al,[di].KERN_THIS_CHAR	;this char match? */
	CMP(al, *((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char)));
	/* jne	@F			;no -> */
	if ((db)(al) != (db)(*((db*)((db*)&((kern*)raddr(ds,di))->kern_this_char)))) {goto dummylabel45;}
	/* cmp	ah,[di].KERN_NEXT_CHAR	;next char match? */
	CMP(ah, *((db*)((db*)&((kern*)raddr(ds,di))->kern_next_char)));
	/* jne	@F			;no -> */
	if ((db)(ah) != (db)(*((db*)((db*)&((kern*)raddr(ds,di))->kern_next_char)))) {goto dummylabel45;}
	/* push	ax */
	PUSH(ax);
	/* mov	al,[di].KERN_X_ADJUST */
	al = m2c::getdata(*((db*)((db*)&((kern*)raddr(ds,di))->kern_x_adjust)));
	/* cbw */
	CBW;
	/* mov	bp,ax */
	bp = ax;
	/* pop	ax */
	POP(ax);
	/* jmp	STitleKernOk */
	goto stitlekernok;
dummylabel45:
	// 4579 
	/* @@:		add	di,KERN_REC_SIZE */
	ADD(di, 3);
	/* jmp	STitleKernLp */
	goto stitlekernlp;
	// 0 ;-------------
	// 0 ;* draw sprite
	// 0 ;-------------
stitlekernok:
	// 4581 
	/* STitleKernOk:	cmp	si,-1		;non-printable character? */
	CMP(si, -1);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel46;}
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	bp */
	PUSH(bp);
	/* mov	bp,16		;depth */
	bp = 16;
	/* call	DrawSprite */
	CALL(drawsprite, 0);
	/* pop	bp */
	POP(bp);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	ax,PREVDATA */
	ax = seg_offset(prevdata);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
dummylabel46:
	// 4583 
	/* @@:		add	cx,dx		;char width */
	ADD(cx, dx);
	/* add	cx,bp		;kern adjustment */
	ADD(cx, bp);
	/* inc	cx		;pixel gap */
	INC(cx);
skipstitlechar:
	// 4585 
	/* SkipSTitleChar:	pop	si		;restore string ptr */
	POP(si);
	/* jmp	SubTitleLoop */
	goto subtitleloop;
	// 0 ;---------
	// 0 ;* tidy up
	// 0 ;---------
exitsubtitledol:
	// 4587 
	/* ExitSubTitle$:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* ret */
	RETN(0);
drawsprite:
	// 4016 
	// 0 ;---------------------------
spriteyloop:
	// 4589 
	// 0 ;---------------------------
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	bp */
	PUSH(bp);
	// 0 ;---------------------------
spritexloop:
	// 4591 
	// 0 ;---------------------------
	/* mov	di,SEG WorkScreen */
	di = m2c::segment_of_external(workscreen);
	/* mov	ds,di */
	m2c::set_segment_register(ds, di);
	/* lodsb			;fetch pixel */
	{ LODSB; }
	/* mov	di,DATA */
	di = seg_offset(data);
	/* mov	ds,di */
	m2c::set_segment_register(ds, di);
	/* test	al,al		;transparent? */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel47;}
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
dummylabel47:
	// 4593 
	/* @@:		inc	cx		;x = x + 1 */
	INC(cx);
	/* dec	dx */
	DEC(dx);
	/* jnz	SpriteXLoop */
	if (dx != 0) {goto spritexloop;}
	/* pop	bp */
	POP(bp);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* inc	bx		;y = y + 1 */
	INC(bx);
	/* add	si,320 */
	ADD(si, 320);
	/* dec	bp */
	DEC(bp);
	/* jnz	SpriteYLoop */
	if (bp != 0) {goto spriteyloop;}
	/* ret */
	RETN(0);
previewintr100:
	// 4068 
	// 0 ;--------------------
	// 0 ;* update theme music
	// 0 ;--------------------
edummylabel25:
	// 4595 
	/* xor	Timer50,1	;toggle 50Hz */
	XOR(timer50, 1);
	/* jz	@F		;skip -> */
	if (timer50 == 0) {goto dummylabel48;}
	/* call	RefreshMusic */
	CALLF(refreshmusic, 0);
dummylabel48:
	// 4597 
	/* @@:		ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_10_skip: 	goto __m2c_macrolocal_10_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kbanklevent: 	goto banklevent;
        case m2c::kbankrevent: 	goto bankrevent;
        case m2c::kcheckkeys: 	goto checkkeys;
        case m2c::kcontforward: 	goto contforward;
        case m2c::kcontreverse: 	goto contreverse;
        case m2c::kcontsubtitle: 	goto contsubtitle;
        case m2c::kconttitle: 	goto conttitle;
        case m2c::kdrawgadgets: 	goto drawgadgets;
        case m2c::kdrawmouseptr: 	goto drawmouseptr;
        case m2c::kdrawsprite: 	goto drawsprite;
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
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kejectevent: 	goto ejectevent;
        case m2c::kexitmouseinput: 	goto exitmouseinput;
        case m2c::kexitmouseptr: 	goto exitmouseptr;
        case m2c::kexitsubtitledol: 	goto exitsubtitledol;
        case m2c::kexittimer: 	goto exittimer;
        case m2c::kexittitledol: 	goto exittitledol;
        case m2c::kforwardevent: 	goto forwardevent;
        case m2c::kgadgetscanloop: 	goto gadgetscanloop;
        case m2c::khitgadget: 	goto hitgadget;
        case m2c::kinitexit: 	goto initexit;
        case m2c::kinitpreview: 	goto initpreview;
        case m2c::kmakepreviewpan: 	goto makepreviewpan;
        case m2c::kmodelloop: 	goto modelloop;
        case m2c::knextmodelptr: 	goto nextmodelptr;
        case m2c::knullevent: 	goto nullevent;
        case m2c::kobjectpreview: 	goto objectpreview;
        case m2c::kpauseplayevent: 	goto pauseplayevent;
        case m2c::kpictureevent: 	goto pictureevent;
        case m2c::kpitchdnevent: 	goto pitchdnevent;
        case m2c::kpitchupevent: 	goto pitchupevent;
        case m2c::kpreviewexit: 	goto previewexit;
        case m2c::kpreviewintr100: 	goto previewintr100;
        case m2c::kpreviewloop: 	goto previewloop;
        case m2c::kprevmodelptr: 	goto prevmodelptr;
        case m2c::kprintsubtitledol: 	goto printsubtitledol;
        case m2c::kprinttitledol: 	goto printtitledol;
        case m2c::kreverseevent: 	goto reverseevent;
        case m2c::ksetupmodel: 	goto setupmodel;
        case m2c::kshow3dmodel: 	goto show3dmodel;
        case m2c::kshowpicture: 	goto showpicture;
        case m2c::kskipa: 	goto skipa;
        case m2c::kskipb: 	goto skipb;
        case m2c::kskipbankl: 	goto skipbankl;
        case m2c::kskipbankr: 	goto skipbankr;
        case m2c::kskipblades: 	goto skipblades;
        case m2c::kskipc: 	goto skipc;
        case m2c::kskipcycle: 	goto skipcycle;
        case m2c::kskippitchdn: 	goto skippitchdn;
        case m2c::kskippitchup: 	goto skippitchup;
        case m2c::kskiprestore: 	goto skiprestore;
        case m2c::kskipstitlechar: 	goto skipstitlechar;
        case m2c::kskipstore: 	goto skipstore;
        case m2c::kskiptitlechar: 	goto skiptitlechar;
        case m2c::kskipxchg: 	goto skipxchg;
        case m2c::ksortmouseinput: 	goto sortmouseinput;
        case m2c::kspritexloop: 	goto spritexloop;
        case m2c::kspriteyloop: 	goto spriteyloop;
        case m2c::kstitlekernlp: 	goto stitlekernlp;
        case m2c::kstitlekernok: 	goto stitlekernok;
        case m2c::ksubtitleloop: 	goto subtitleloop;
        case m2c::ktitlekernlp: 	goto titlekernlp;
        case m2c::ktitlekernok: 	goto titlekernok;
        case m2c::ktitleloop: 	goto titleloop;
        case m2c::kupdatetimer: 	goto updatetimer;
        default: return __dispatch_call(__disp, _state);
    };
}


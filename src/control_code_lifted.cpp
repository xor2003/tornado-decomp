/* THIS IS GENERATED FILE */

        
#include "control.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
control:
	// 2222 
	// 0 ;---------------------------------
	// 0 ;* mouse essential - ensure fitted
	// 0 ;---------------------------------
edummylabel1:
	// 4369 
	/* test	MouseFlag,1	;mouse fitted? */
	TEST(mouseflag, 1);
	/* jnz	@F		;yes -> */
	if ((mouseflag & 1) != 0) {goto dummylabel1;}
	/* mov	DieFlag,SYS_ERR_MOUSE */
	dieflag = 255;
	/* jmp	ControlExit	;no -> */
	goto controlexit;
	// 0 ;------------------------
	// 0 ;* set maximum frame rate
	// 0 ;------------------------
	// 0 ;* The timer interrupt is 100Hz. There is not enough resolution to handle
	// 0 ;* frame rates above 20 frames / second. Also the keyboard scan interrupt
	// 0 ;* is set to 20Hz and must be more frequent than the frame rate.
dummylabel1:
	// 4371 
	/* @@:		mov	MaxFrameRate,6	;6/100th = 17 frames / second (can go as low as 3/100) */
	maxframerate = 6;
	// 0 ;----------------------
	// 0 ;* command line options
	// 0 ;----------------------
	/* call	SortCmndLine */
	CALL(sortcmndline, 0);
	// 0 ;-----------------------------
	// 0 ;* load game play and map data
	// 0 ;-----------------------------
	/* test	DataExchange,1	;exchange data? */
	TEST(dataexchange, 1);
	/* jz	@F		;no -> */
	if (!(dataexchange & 1)) {goto dummylabel2;}
	/* call	LoadGameData */
	CALL(loadgamedata, 0);
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	ControlExit */
	goto controlexit;
__m2c_macrolocal_1_skip:
	// 4373 
	// 0 ;disk error ->
	/* call	LoadMapData */
	CALL(loadmapdata, 0);
	/* jnc	__m2c_macrolocal_2_skip */
	if (!CF) {goto __m2c_macrolocal_2_skip;}
	/* jmp	ControlExit */
	goto controlexit;
__m2c_macrolocal_2_skip:
	// 4375 
	// 0 ;disk error ->
	// 0 ;-------------------------
	// 0 ;* fade out loading screen
	// 0 ;-------------------------
dummylabel2:
	// 4377 
	/* @@:		test	FadeOutFlag,1	;fade out loading screen? */
	TEST(fadeoutflag, 1);
	/* jz	@F		;no -> */
	if (!(fadeoutflag & 1)) {goto dummylabel3;}
	/* call	FadeLoadScreen */
	CALL(fadeloadscreen, 0);
	// 0 ;---------------------------------------------------
	// 0 ;* init graphics mode / init random number generator
	// 0 ;---------------------------------------------------
dummylabel3:
	// 4379 
	/* @@:		mov	ax,VGA */
	ax = vga;
	/* call	QuickSetUp */
	CALLF(quicksetup, 0);
	// 0 ;--------------------
	// 0 ;* show title picture
	// 0 ;--------------------
	// 0 ;----------------------
	// 0 ;* show DI logo picture
	// 0 ;----------------------
	// 0 ;---------------
	// 0 ;* set up visual
	// 0 ;---------------
	// 0 ;* if two player then fix random number seed (keep clouds the same)
	/* push	SeedLo */
	PUSH(seedlo);
	/* push	SeedHi */
	PUSH(seedhi);
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jz	@F */
	if (!(twoplayer & 1)) {goto dummylabel4;}
	/* mov	SeedLo,12431 */
	seedlo = 12431;
	/* mov	SeedHi,8765 */
	seedhi = 8765;
dummylabel4:
	// 4381 
	/* @@:		call	ConfigureVisual */
	CALLF(configurevisual, 0);
	/* pop	SeedHi */
	POP(seedhi);
	/* pop	SeedLo */
	POP(seedlo);
	/* jnc	@F		;palette RGB data loaded ok -> */
	if (!CF) {goto dummylabel5;}
	/* mov	DieFlag,SYS_ERR_RGB */
	dieflag = 253;
	/* jmp	ControlExit */
	goto controlexit;
dummylabel5:
	// 4383 
	/* @@:		test	DataExchange,1	;exchange data? */
	TEST(dataexchange, 1);
	/* jnz	@F		;yes -> */
	if ((dataexchange & 1) != 0) {goto dummylabel6;}
	/* call	SwitchOnLights */
	CALLF(switchonlights, 0);
	// 0 ;--------------------------
	// 0 ;* test for "map test" mode
	// 0 ;--------------------------
dummylabel6:
	// 4385 
	/* @@:		test	MapTestMode,1	;map test enabled? */
	TEST(maptestmode, 1);
	/* jz	@F		;no -> */
	if (!(maptestmode & 1)) {goto dummylabel7;}
	/* call	MapTest */
	CALL(maptest, 0);
	/* jmp	ControlExit */
	goto controlexit;
	// 0 ;---------------
	// 0 ;* resize memory
	// 0 ;---------------
dummylabel7:
	// 4387 
	/* @@:		call	ResizeMemory */
	CALL(resizememory, 0);
	/* jnc	__m2c_macrolocal_3_skip */
	if (!CF) {goto __m2c_macrolocal_3_skip;}
	/* jmp	ControlExit */
	goto controlexit;
__m2c_macrolocal_3_skip:
	// 4389 
	// 0 ;-------------------
	// 0 ;* load sound driver
	// 0 ;-------------------
	/* call	InstallSound */
	CALLF(installsound, 0);
	/* jnc	__m2c_macrolocal_4_skip */
	if (!CF) {goto __m2c_macrolocal_4_skip;}
	/* jmp	ControlExit */
	goto controlexit;
__m2c_macrolocal_4_skip:
	// 4391 
	// 0 ;-------------------
	// 0 ;* load music driver
	// 0 ;-------------------
	/* call	InstallMusic */
	CALLF(installmusic, 0);
	/* jnc	__m2c_macrolocal_5_skip */
	if (!CF) {goto __m2c_macrolocal_5_skip;}
	/* jmp	ControlExit */
	goto controlexit;
__m2c_macrolocal_5_skip:
	// 4393 
	// 0 ;-------------------------
	// 0 ;* test for "explore" mode
	// 0 ;-------------------------
	/* test	ExploreMode,1	;map explore mode? */
	TEST(exploremode, 1);
	/* jz	@F		;no -> */
	if (!(exploremode & 1)) {goto dummylabel8;}
	/* call	MapExplore */
	CALLF(mapexplore, 0);
	/* call	FadeOut */
	CALLF(fadeout, 0);
	/* jmp	SaveData */
	goto savedata;
	// 0 ;-------------------------
	// 0 ;* test for "preview" mode
	// 0 ;-------------------------
dummylabel8:
	// 4395 
	/* @@:		cmp	PreviewMode,0	;preview mode? */
	CMP(previewmode, 0);
	/* je	@F		;no -> */
	if ((dw)(previewmode) == (dw)(0)) {goto dummylabel9;}
	/* call	ObjectPreview */
	CALLF(objectpreview, 0);
	/* jmp	SaveData */
	goto savedata;
	// 0 ;-----------------
	// 0 ;* init panel data
	// 0 ;-----------------
dummylabel9:
	// 4397 
	/* @@:		cmp	DemoMode,0	;demo mode? */
	CMP(demomode, 0);
	/* jne	@F		;yes, panels not required -> */
	if ((dw)(demomode) != (dw)(0)) {goto dummylabel10;}
	/* call	InitPanels */
	CALLF(initpanels, 0);
	/* jnc	@F		;panel data loaded ok -> */
	if (!CF) {goto dummylabel10;}
	/* mov	DieFlag,SYS_ERR_PANELS */
	dieflag = 254;
	/* jmp	ControlExit */
	goto controlexit;
	// 0 ;-------------------------------
	// 0 ;* install user timer interrupts
	// 0 ;-------------------------------
dummylabel10:
	// 4399 
	/* @@:		mov	ax,OFFSET GameIntr20 */
	ax = m2c::kglobal_gameintr20;
	/* mov	dx,SEG GameIntr20 */
	dx = seg_offset(gameintr20);
	/* call	InstallUser20 */
	CALLF(installuser20, 0);
	/* mov	ax,OFFSET GameIntr100 */
	ax = m2c::kglobal_gameintr100;
	/* mov	dx,SEG GameIntr100 */
	dx = seg_offset(gameintr100);
	/* call	InstallUser100 */
	CALLF(installuser100, 0);
	// 0 ;-----------------
	// 0 ;* initialize game
	// 0 ;-----------------
	/* call	InitGame */
	CALL(initgame, 0);
	// 0 ;------------------------
	// 0 ;* sort startup view mode
	// 0 ;------------------------
	/* mov	ax,VIEW_PILOT	;assume not demo */
	ax = 0;
	/* cmp	DemoMode,0	;demo mode? */
	CMP(demomode, 0);
	/* je	@F		;no -> */
	if ((dw)(demomode) == (dw)(0)) {goto dummylabel11;}
	/* call	InitDemo */
	CALL(initdemo, 0);
dummylabel11:
	// 4401 
	/* @@:		call	SetGameViewMode */
	CALLF(setgameviewmode, 0);
	// 0 ;----------------------------
	// 0 ;* test for "two player" mode
	// 0 ;----------------------------
	/* test	TwoPlayer,1	;two player? */
	TEST(twoplayer, 1);
	/* jz	__m2c_macrolocal_6_skip */
	if (!(twoplayer & 1)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	TwoPlyrControl */
	goto twoplyrcontrol;
__m2c_macrolocal_6_skip:
	// 4403 
	// 0 ;yes ->
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
	// 0 ;------------------
	// 0 ;* initialize model
	// 0 ;------------------
	/* call	InitModel */
	CALLF(initmodel, 0);
	// 0 ;--------------
	// 0 ;* control loop
	// 0 ;--------------
controlloop:
	// 4405 
	// 0 ;-------
	// 0 ;* model
	// 0 ;-------
	/* call	Model */
	CALLF(model, 0);
	// 0 ;----------
	// 0 ;* gameplay
	// 0 ;----------
	/* call	UpdatePlanes */
	CALLF(updateplanes, 0);
	/* call	UpdateHelicops */
	CALLF(updatehelicops, 0);
	/* call	UpdateConvoys */
	CALLF(updateconvoys, 0);
	/* call	UpdateAAA */
	CALLF(updateaaa, 0);
	/* call	UpdateSAM */
	CALLF(updatesam, 0);
	/* call	UpdateWeapons */
	CALLF(updateweapons, 0);
	/* call	UpdateGLOC */
	CALLF(updategloc, 0);
	// 0 ;----------------------------
	// 0 ;* avionics / weapons systems
	// 0 ;----------------------------
	/* call	UpdateAvionics */
	CALLF(updateavionics, 0);
	/* call	WeaponsControl */
	CALLF(weaponscontrol, 0);
	// 0 ;--------
	// 0 ;* visual
	// 0 ;--------
	/* call	UserOptions */
	CALLF(useroptions, 0);
	/* call	UpdateGameView */
	CALLF(updategameview, 0);
	/* mov	si,ViewPtr */
	si = viewptr;
	/* cmp	si,-1		;visual disabled? */
	CMP(si, -1);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel12;}
	/* call	Visual */
	CALLF(visual, 0);
	// 0 ;-------
	// 0 ;* panel
	// 0 ;-------
dummylabel12:
	// 4407 
	/* @@:		call	UpdatePanel */
	CALLF(updatepanel, 0);
	// 0 ;---------------
	// 0 ;* sound effects
	// 0 ;---------------
	/* call	UpdateSound */
	CALLF(updatesound, 0);
	// 0 ;-----------------
	// 0 ;* download screen
	// 0 ;-----------------
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	SortPause */
	CALL(sortpause, 0);
	// 0 ;----------------------
	// 0 ;* test for end of game
	// 0 ;----------------------
	/* call	CheckTimeout */
	CALLF(checktimeout, 0);
	/* cmp	DieFlag,0	;end of game condition? */
	CMP(dieflag, 0);
	/* jne	__m2c_macrolocal_7_skip */
	if ((dw)(dieflag) != (dw)(0)) {goto __m2c_macrolocal_7_skip;}
	/* jmp	ControlLoop */
	goto controlloop;
__m2c_macrolocal_7_skip:
	// 4409 
	// 0 ;no ->
	/* call	NormaliseSound */
	CALLF(normalisesound, 0);
	/* call	NormaliseMusic */
	CALLF(normalisemusic, 0);
	/* call	FadeOut */
	CALLF(fadeout, 0);
	// 0 ;-----------------------------
	// 0 ;* same game play and map data
	// 0 ;-----------------------------
savedata:
	// 4411 
	/* SaveData:	test	DataExchange,1	;exchange data? */
	TEST(dataexchange, 1);
	/* jz	ControlExit	;no -> */
	if (!(dataexchange & 1)) {goto controlexit;}
	/* call	SaveGameData */
	CALL(savegamedata, 0);
	/* jc	ControlExit	;disk error -> */
	if (CF) {goto controlexit;}
	/* call	SaveMapData */
	CALL(savemapdata, 0);
	/* jc	ControlExit	;disk error -> */
	if (CF) {goto controlexit;}
	// 0 ;---------------------------
controlexit:
	// 4413 
	// 0 ;---------------------------
	/* call	NormaliseSound */
	CALLF(normalisesound, 0);
	/* call	NormaliseMusic */
	CALLF(normalisemusic, 0);
	/* mov	al,DieFlag */
	al = dieflag;
	/* mov	ReturnCode,al */
	returncode = al;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
twoplyrcontrol:
	// 4415 
	// 0 ;---------------------------
	/* call	InitTwoPlayer */
	CALLF(inittwoplayer, 0);
	// 0 ;------------
	// 0 ;* init comms
	// 0 ;------------
	/* mov	al,CommsDevice */
	al = commsdevice;
	/* mov	ah,BaudRate */
	ah = baudrate;
	/* call	InitComms */
	CALLF(initcomms, 0);
	// 0 ;------------------
	// 0 ;* comms start sync
	// 0 ;------------------
	/* mov	al,-2 */
	al = -2;
	/* mov	ah,1		;Ctrl Q enabled */
	ah = 1;
	/* mov	cx,30*100 */
	cx = 30*100;
	/* call	SyncComms */
	CALLF(synccomms, 0);
	/* jnc	@F		;sync received -> */
	if (!CF) {goto dummylabel13;}
	/* mov	DieFlag,SYS_ERR_SYNC_TO */
	dieflag = 235;
	/* jmp	ControlExit */
	goto controlexit;
	// 0 ;-----------------------
	// 0 ;* transmit Tornado data
	// 0 ;-----------------------
dummylabel13:
	// 4417 
	/* @@:		call	TxTornadoData */
	CALLF(txtornadodata, 0);
	// 0 ;-----------------------
	// 0 ;* receive opponent data
	// 0 ;-----------------------
	/* call	RxOpponentData */
	CALLF(rxopponentdata, 0);
	// 0 ;---------
	// 0 ;* re-sync
	// 0 ;---------
	/* mov	al,-3 */
	al = -3;
	/* xor	ah,ah		;Ctrl Q disabled */
	XOR(ah, ah);
	/* mov	cx,2*100 */
	cx = 2*100;
	/* call	SyncComms */
	CALLF(synccomms, 0);
	// 0 ;--------------
	// 0 ;* reset timers (because of time taken to initialize / sync up)
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
	// 0 ;------------------
	// 0 ;* initialize model
	// 0 ;------------------
	/* call	InitModel */
	CALLF(initmodel, 0);
	// 0 ;-------------------------
	// 0 ;* two player control loop
	// 0 ;-------------------------
twoplayerloop:
	// 4419 
	// 0 ;-------
	// 0 ;* model
	// 0 ;-------
	/* call	Model */
	CALLF(model, 0);
	// 0 ;-----------
	// 0 ;* loop sync (sync after joystick has been read)
	// 0 ;-----------
	/* call	ClearComms */
	CALLF(clearcomms, 0);
	/* mov	al,-4 */
	al = -4;
	/* xor	ah,ah		;Ctrl Q disabled */
	XOR(ah, ah);
	/* mov	cx,2*100 */
	cx = 2*100;
	/* call	SyncComms */
	CALLF(synccomms, 0);
	// 0 ;----------
	// 0 ;* gameplay
	// 0 ;----------
	/* call	UpdateWeapons */
	CALLF(updateweapons, 0);
	/* call	UpdateGLOC */
	CALLF(updategloc, 0);
	// 0 ;----------------------------
	// 0 ;* avionics / weapons systems
	// 0 ;----------------------------
	/* call	UpdateAvionics */
	CALLF(updateavionics, 0);
	/* call	WeaponsControl */
	CALLF(weaponscontrol, 0);
	// 0 ;-----------------------
	// 0 ;* transmit Tornado data
	// 0 ;-----------------------
	/* call	TxTornadoData */
	CALLF(txtornadodata, 0);
	// 0 ;--------
	// 0 ;* visual
	// 0 ;--------
	/* call	UserOptions */
	CALLF(useroptions, 0);
	/* call	UpdateGameView */
	CALLF(updategameview, 0);
	/* mov	si,ViewPtr */
	si = viewptr;
	/* cmp	si,-1		;visual disabled? */
	CMP(si, -1);
	/* je	@F		;yes -> */
	if ((dw)(si) == (dw)(-1)) {goto dummylabel14;}
	// 0 ;* visual enabled - receive opponent data in UserVisual
	/* mov	RxFlag,1 */
	rxflag = 1;
	/* call	Visual */
	CALLF(visual, 0);
	/* mov	RxFlag,0 */
	rxflag = 0;
	/* jmp	RxDataOk */
	goto rxdataok;
	// 0 ;* visual disabled - receive opponent data here
dummylabel14:
	// 4421 
	/* @@:		call	RxOpponentData */
	CALLF(rxopponentdata, 0);
	// 0 ;-------
	// 0 ;* panel
	// 0 ;-------
rxdataok:
	// 4423 
	/* RxDataOk:	call	UpdatePanel */
	CALLF(updatepanel, 0);
	// 0 ;---------------
	// 0 ;* sound effects
	// 0 ;---------------
	/* call	UpdateSound */
	CALLF(updatesound, 0);
	// 0 ;-----------------
	// 0 ;* download screen
	// 0 ;-----------------
	/* call	DownLoad */
	CALLF(download, 0);
	// 0 ;----------------------
	// 0 ;* test for end of game
	// 0 ;----------------------
	/* call	CheckTimeout */
	CALLF(checktimeout, 0);
	/* cmp	DieFlag,0	;end of game condition? */
	CMP(dieflag, 0);
	/* jne	__m2c_macrolocal_8_skip */
	if ((dw)(dieflag) != (dw)(0)) {goto __m2c_macrolocal_8_skip;}
	/* jmp	TwoPlayerLoop */
	goto twoplayerloop;
__m2c_macrolocal_8_skip:
	// 4425 
	// 0 ;no ->
	/* mov	al,TxGameEnd	;sent or received game end flag? */
	al = txgameend;
	/* or	al,RxGameEnd */
	OR(al, rxgameend);
	/* jnz	__m2c_macrolocal_9_skip */
	if (al != 0) {goto __m2c_macrolocal_9_skip;}
	/* jmp	TwoPlayerLoop */
	goto twoplayerloop;
__m2c_macrolocal_9_skip:
	// 4427 
	// 0 ;no ->
	/* call	StopComms */
	CALLF(stopcomms, 0);
	/* call	NormaliseSound */
	CALLF(normalisesound, 0);
	/* call	NormaliseMusic */
	CALLF(normalisemusic, 0);
	/* call	FadeOut */
	CALLF(fadeout, 0);
	/* jmp	SaveData */
	goto savedata;
sortcmndline:
	// 2658 
	/* mov	cx,ARGC ;* kill: assume all */
	cx = argc;
edummylabel2:
	// 4429 
	/* test	cx,cx */
	TEST(cx, cx);
	/* jnz	__m2c_macrolocal_10_skip */
	if ((cx & cx) != 0) {goto __m2c_macrolocal_10_skip;}
	/* jmp	ExitCmndLine */
	goto exitcmndline;
__m2c_macrolocal_10_skip:
	// 4431 
	/* xor	bx,bx */
	XOR(bx, bx);
argloop:
	// 4433 
	/* ArgLoop:	mov	si,ARGV[bx] */
	si = *(dw*)(((db*)&argv)+bx);
	/* mov	ah,[si+0]	;ah = 1st character */
	ah = m2c::getdata(*(raddr(ds,si+0)));
	/* mov	al,[si+1]	;al = 2nd character */
	al = m2c::getdata(*(raddr(ds,si+1)));
	// 0 ;* convert 1st character to uppercase
	/* cmp	ah,'a' */
	CMP(ah, 'a');
	/* jb	@F */
	if ((db)(ah) < (db)('a')) {goto dummylabel15;}
	/* cmp	ah,'z' */
	CMP(ah, 'z');
	/* ja	@F */
	if ((db)(ah) > (db)('z')) {goto dummylabel15;}
	/* sub	ah,'a'-'A' */
	SUB(ah, 'a'-'A');
	// 0 ;* convert 2nd character to uppercase
dummylabel15:
	// 4435 
	/* @@:		cmp	al,'a' */
	CMP(al, 'a');
	/* jb	@F */
	if ((db)(al) < (db)('a')) {goto dummylabel16;}
	/* cmp	al,'z' */
	CMP(al, 'z');
	/* ja	@F */
	if ((db)(al) > (db)('z')) {goto dummylabel16;}
	/* sub	al,'a'-'A' */
	SUB(al, 'a'-'A');
	// 0 ;* check for valid options
dummylabel16:
	// 4437 
	/* @@:		cmp	ax,'AB' ;damage to airbrakes */
	CMP(ax, 'AB');
	/* jne	__m2c_macrolocal_11_skip */
	if ((dw)(ax) != (dw)('AB')) {goto __m2c_macrolocal_11_skip;}
	/* jmp	SetAirBrakesDamaged */
	goto setairbrakesdamaged;
__m2c_macrolocal_11_skip:
	// 4439 
	// 0 ;yes ->
	/* cmp	ax,'AD' ;damage to ? */
	CMP(ax, 'AD');
	/* jne	__m2c_macrolocal_12_skip */
	if ((dw)(ax) != (dw)('AD')) {goto __m2c_macrolocal_12_skip;}
	/* jmp	SetADCDamaged */
	goto setadcdamaged;
__m2c_macrolocal_12_skip:
	// 4441 
	// 0 ;yes ->
	/* cmp	ax,'AH'		;set heading (for start airborne)? */
	CMP(ax, 'AH');
	/* jne	__m2c_macrolocal_13_skip */
	if ((dw)(ax) != (dw)('AH')) {goto __m2c_macrolocal_13_skip;}
	/* jmp	SetHeading */
	goto setheading;
__m2c_macrolocal_13_skip:
	// 4443 
	// 0 ;yes ->
	/* cmp	ax,'AV'		;set airspeed (for start airborne)? */
	CMP(ax, 'AV');
	/* jne	__m2c_macrolocal_14_skip */
	if ((dw)(ax) != (dw)('AV')) {goto __m2c_macrolocal_14_skip;}
	/* jmp	SetAirspeed */
	goto setairspeed;
__m2c_macrolocal_14_skip:
	// 4445 
	// 0 ;yes ->
	/* cmp	ax,'AX'		;set x sector (for start airborne)? */
	CMP(ax, 'AX');
	/* jne	__m2c_macrolocal_15_skip */
	if ((dw)(ax) != (dw)('AX')) {goto __m2c_macrolocal_15_skip;}
	/* jmp	SetXSector */
	goto setxsector;
__m2c_macrolocal_15_skip:
	// 4447 
	// 0 ;yes ->
	/* cmp	ax,'AY'		;set y sector (for start airborne)? */
	CMP(ax, 'AY');
	/* jne	__m2c_macrolocal_16_skip */
	if ((dw)(ax) != (dw)('AY')) {goto __m2c_macrolocal_16_skip;}
	/* jmp	SetYSector */
	goto setysector;
__m2c_macrolocal_16_skip:
	// 4449 
	// 0 ;yes ->
	/* cmp	ax,'AZ'		;set altitude (for start airborne)? */
	CMP(ax, 'AZ');
	/* jne	__m2c_macrolocal_17_skip */
	if ((dw)(ax) != (dw)('AZ')) {goto __m2c_macrolocal_17_skip;}
	/* jmp	SetAltitude */
	goto setaltitude;
__m2c_macrolocal_17_skip:
	// 4451 
	// 0 ;yes ->
	/* cmp	ah,'A'		;start airborne? */
	CMP(ah, 'A');
	/* jne	__m2c_macrolocal_18_skip */
	if ((db)(ah) != (db)('A')) {goto __m2c_macrolocal_18_skip;}
	/* jmp	SetAirborne */
	goto setairborne;
__m2c_macrolocal_18_skip:
	// 4453 
	// 0 ;yes ->
	/* cmp	ah,'B'		;Baud rate? */
	CMP(ah, 'B');
	/* jne	__m2c_macrolocal_19_skip */
	if ((db)(ah) != (db)('B')) {goto __m2c_macrolocal_19_skip;}
	/* jmp	SetBaudRate */
	goto setbaudrate;
__m2c_macrolocal_19_skip:
	// 4455 
	// 0 ;yes ->
	/* cmp	ax,'CH'		;CH FlightStick Pro? "" */
	CMP(ax, 'CH');
	/* jne	__m2c_macrolocal_20_skip */
	if ((dw)(ax) != (dw)('CH')) {goto __m2c_macrolocal_20_skip;}
	/* jmp	SetFlightStick */
	goto setflightstick;
__m2c_macrolocal_20_skip:
	// 4457 
	// 0 ;yes ->
	/* cmp	ah,'C'		;cockpit lighting? */
	CMP(ah, 'C');
	/* jne	__m2c_macrolocal_21_skip */
	if ((db)(ah) != (db)('C')) {goto __m2c_macrolocal_21_skip;}
	/* jmp	SetLighting */
	goto setlighting;
__m2c_macrolocal_21_skip:
	// 4459 
	// 0 ;yes ->
	/* cmp	ax,'DX'		;exchange data? "" */
	CMP(ax, 'DX');
	/* jne	__m2c_macrolocal_22_skip */
	if ((dw)(ax) != (dw)('DX')) {goto __m2c_macrolocal_22_skip;}
	/* jmp	SetDataExchange */
	goto setdataexchange;
__m2c_macrolocal_22_skip:
	// 4461 
	// 0 ;yes ->
	/* cmp	ax,'D1'		;drone cycling demo mode? */
	CMP(ax, 'D1');
	/* jne	__m2c_macrolocal_23_skip */
	if ((dw)(ax) != (dw)('D1')) {goto __m2c_macrolocal_23_skip;}
	/* jmp	SetDemoMode1 */
	goto setdemomode1;
__m2c_macrolocal_23_skip:
	// 4463 
	// 0 ;yes ->
	/* cmp	ax,'D2'		;flying demo mode? */
	CMP(ax, 'D2');
	/* jne	__m2c_macrolocal_24_skip */
	if ((dw)(ax) != (dw)('D2')) {goto __m2c_macrolocal_24_skip;}
	/* jmp	SetDemoMode2 */
	goto setdemomode2;
__m2c_macrolocal_24_skip:
	// 4465 
	// 0 ;yes ->
	/* cmp	ax,'E1'		;Engine One is out! */
	CMP(ax, 'E1');
	/* jne	__m2c_macrolocal_25_skip */
	if ((dw)(ax) != (dw)('E1')) {goto __m2c_macrolocal_25_skip;}
	/* jmp	SetEngine1Damaged */
	goto setengine1damaged;
__m2c_macrolocal_25_skip:
	// 4467 
	// 0 ;yes ->
	/* cmp	ax,'E2'		;flying demo mode? */
	CMP(ax, 'E2');
	/* jne	__m2c_macrolocal_26_skip */
	if ((dw)(ax) != (dw)('E2')) {goto __m2c_macrolocal_26_skip;}
	/* jmp	SetEngine2Damaged */
	goto setengine2damaged;
__m2c_macrolocal_26_skip:
	// 4469 
	// 0 ;yes ->
	/* cmp	ax,'EC'		;ECM damaged? */
	CMP(ax, 'EC');
	/* jne	__m2c_macrolocal_27_skip */
	if ((dw)(ax) != (dw)('EC')) {goto __m2c_macrolocal_27_skip;}
	/* jmp	SetECMDamaged */
	goto setecmdamaged;
__m2c_macrolocal_27_skip:
	// 4471 
	// 0 ;yes ->
	/* cmp	ah,'E'		;explore mode? */
	CMP(ah, 'E');
	/* jne	__m2c_macrolocal_28_skip */
	if ((db)(ah) != (db)('E')) {goto __m2c_macrolocal_28_skip;}
	/* jmp	SetExploreMode */
	goto setexploremode;
__m2c_macrolocal_28_skip:
	// 4473 
	// 0 ;yes ->
	/* cmp	ax,'FS'		;Allow full screen FLIR and TIALD? */
	CMP(ax, 'FS');
	/* jne	__m2c_macrolocal_29_skip */
	if ((dw)(ax) != (dw)('FS')) {goto __m2c_macrolocal_29_skip;}
	/* jmp	FullScreenFLIRandTIALD */
	goto fullscreenflirandtiald;
__m2c_macrolocal_29_skip:
	// 4475 
	// 0 ;yes ->
	/* cmp	ax,'FL'		;flaps damaged? */
	CMP(ax, 'FL');
	/* jne	__m2c_macrolocal_30_skip */
	if ((dw)(ax) != (dw)('FL')) {goto __m2c_macrolocal_30_skip;}
	/* jmp	SetFlapsDamaged */
	goto setflapsdamaged;
__m2c_macrolocal_30_skip:
	// 4477 
	// 0 ;yes ->
	/* cmp	ax,'FO'		;fade out loading screen? */
	CMP(ax, 'FO');
	/* jne	__m2c_macrolocal_31_skip */
	if ((dw)(ax) != (dw)('FO')) {goto __m2c_macrolocal_31_skip;}
	/* jmp	SetFadeOut */
	goto setfadeout;
__m2c_macrolocal_31_skip:
	// 4479 
	// 0 ;yes ->
	/* cmp	ax,'FR'		;set maximum frame rate? */
	CMP(ax, 'FR');
	/* jne	__m2c_macrolocal_32_skip */
	if ((dw)(ax) != (dw)('FR')) {goto __m2c_macrolocal_32_skip;}
	/* jmp	SetFrameRate */
	goto setframerate;
__m2c_macrolocal_32_skip:
	// 4481 
	// 0 ;yes ->
	/* cmp	ah,'F'		;fog? */
	CMP(ah, 'F');
	/* jne	__m2c_macrolocal_33_skip */
	if ((db)(ah) != (db)('F')) {goto __m2c_macrolocal_33_skip;}
	/* jmp	SetFog */
	goto setfog;
__m2c_macrolocal_33_skip:
	// 4483 
	// 0 ;yes ->
	/* cmp	ax,'GR'		;gear damaged? */
	CMP(ax, 'GR');
	/* jne	__m2c_macrolocal_34_skip */
	if ((dw)(ax) != (dw)('GR')) {goto __m2c_macrolocal_34_skip;}
	/* jmp	SetGearDamaged */
	goto setgeardamaged;
__m2c_macrolocal_34_skip:
	// 4485 
	// 0 ;yes ->
	/* cmp	ax,'GT'		;global timeout? */
	CMP(ax, 'GT');
	/* jne	__m2c_macrolocal_35_skip */
	if ((dw)(ax) != (dw)('GT')) {goto __m2c_macrolocal_35_skip;}
	/* jmp	SetTimeout */
	goto settimeout;
__m2c_macrolocal_35_skip:
	// 4487 
	// 0 ;yes ->
	/* cmp	ax,'HD'		;HUD? */
	CMP(ax, 'HD');
	/* jne	__m2c_macrolocal_36_skip */
	if ((dw)(ax) != (dw)('HD')) {goto __m2c_macrolocal_36_skip;}
	/* jmp	SetHUDDamaged */
	goto sethuddamaged;
__m2c_macrolocal_36_skip:
	// 4489 
	// 0 ;yes ->
	/* cmp	ax,'IF'		;infinite fuel? */
	CMP(ax, 'IF');
	/* jne	__m2c_macrolocal_37_skip */
	if ((dw)(ax) != (dw)('IF')) {goto __m2c_macrolocal_37_skip;}
	/* jmp	SetInfiniteFuel */
	goto setinfinitefuel;
__m2c_macrolocal_37_skip:
	// 4491 
	// 0 ;yes ->
	/* cmp	ax,'IG'		;infinite g-force? */
	CMP(ax, 'IG');
	/* jne	__m2c_macrolocal_38_skip */
	if ((dw)(ax) != (dw)('IG')) {goto __m2c_macrolocal_38_skip;}
	/* jmp	SetInfiniteG */
	goto setinfiniteg;
__m2c_macrolocal_38_skip:
	// 4493 
	// 0 ;yes ->
	/* cmp	ax,'IW'		;infinite weapons? */
	CMP(ax, 'IW');
	/* jne	__m2c_macrolocal_39_skip */
	if ((dw)(ax) != (dw)('IW')) {goto __m2c_macrolocal_39_skip;}
	/* jmp	SetInfiniteWpns */
	goto setinfinitewpns;
__m2c_macrolocal_39_skip:
	// 4495 
	// 0 ;yes ->
	/* cmp	ax,'MA'		;AdLib card? */
	CMP(ax, 'MA');
	/* jne	__m2c_macrolocal_40_skip */
	if ((dw)(ax) != (dw)('MA')) {goto __m2c_macrolocal_40_skip;}
	/* jmp	SetAdLibMusic */
	goto setadlibmusic;
__m2c_macrolocal_40_skip:
	// 4497 
	// 0 ;yes ->
	/* cmp	ax,'MB'		;SoundBlaster card? */
	CMP(ax, 'MB');
	/* jne	__m2c_macrolocal_41_skip */
	if ((dw)(ax) != (dw)('MB')) {goto __m2c_macrolocal_41_skip;}
	/* jmp	SetBlasterMusic */
	goto setblastermusic;
__m2c_macrolocal_41_skip:
	// 4499 
	// 0 ;yes ->
	/* cmp	ax,'MN'		;no sound card? */
	CMP(ax, 'MN');
	/* jne	__m2c_macrolocal_42_skip */
	if ((dw)(ax) != (dw)('MN')) {goto __m2c_macrolocal_42_skip;}
	/* jmp	SetNoMusic */
	goto setnomusic;
__m2c_macrolocal_42_skip:
	// 4501 
	// 0 ;yes ->
	/* cmp	ax,'MR'		;Roland LAPC1 card? */
	CMP(ax, 'MR');
	/* jne	__m2c_macrolocal_43_skip */
	if ((dw)(ax) != (dw)('MR')) {goto __m2c_macrolocal_43_skip;}
	/* jmp	SetRolandMusic */
	goto setrolandmusic;
__m2c_macrolocal_43_skip:
	// 4503 
	// 0 ;yes ->
	/* cmp	ax,'MS'		;internal speaker? */
	CMP(ax, 'MS');
	/* jne	__m2c_macrolocal_44_skip */
	if ((dw)(ax) != (dw)('MS')) {goto __m2c_macrolocal_44_skip;}
	/* jmp	SetSpeakerMusic */
	goto setspeakermusic;
__m2c_macrolocal_44_skip:
	// 4505 
	// 0 ;yes ->
	/* cmp	ax,'MT'		;map test? */
	CMP(ax, 'MT');
	/* jne	__m2c_macrolocal_45_skip */
	if ((dw)(ax) != (dw)('MT')) {goto __m2c_macrolocal_45_skip;}
	/* jmp	SetMapTestMode */
	goto setmaptestmode;
__m2c_macrolocal_45_skip:
	// 4507 
	// 0 ;yes ->
	/* cmp	ax,'NC'		;no collisions? */
	CMP(ax, 'NC');
	/* jne	__m2c_macrolocal_46_skip */
	if ((dw)(ax) != (dw)('NC')) {goto __m2c_macrolocal_46_skip;}
	/* jmp	SetNoCollisions */
	goto setnocollisions;
__m2c_macrolocal_46_skip:
	// 4509 
	// 0 ;yes ->
	/* cmp	ax,'NM'		;No Navigator's MFD */
	CMP(ax, 'NM');
	/* jne	__m2c_macrolocal_47_skip */
	if ((dw)(ax) != (dw)('NM')) {goto __m2c_macrolocal_47_skip;}
	/* jmp	SetNavigMFDDamaged */
	goto setnavigmfddamaged;
__m2c_macrolocal_47_skip:
	// 4511 
	// 0 ;yes ->
	/* cmp	ah,'N'		;night? */
	CMP(ah, 'N');
	/* jne	__m2c_macrolocal_48_skip */
	if ((db)(ah) != (db)('N')) {goto __m2c_macrolocal_48_skip;}
	/* jmp	SetNight */
	goto setnight;
__m2c_macrolocal_48_skip:
	// 4513 
	// 0 ;yes ->
	/* cmp	ah,'O'		;overcast? */
	CMP(ah, 'O');
	/* jne	__m2c_macrolocal_49_skip */
	if ((db)(ah) != (db)('O')) {goto __m2c_macrolocal_49_skip;}
	/* jmp	SetOvercast */
	goto setovercast;
__m2c_macrolocal_49_skip:
	// 4515 
	// 0 ;yes ->
	/* cmp	ax,'PA'		;auto-run preview mode? */
	CMP(ax, 'PA');
	/* jne	__m2c_macrolocal_50_skip */
	if ((dw)(ax) != (dw)('PA')) {goto __m2c_macrolocal_50_skip;}
	/* jmp	SetPreviewAuto */
	goto setpreviewauto;
__m2c_macrolocal_50_skip:
	// 4517 
	// 0 ;yes ->
	/* cmp	ax,'PM'		;Pilot's MFD Damaged. */
	CMP(ax, 'PM');
	/* jne	__m2c_macrolocal_51_skip */
	if ((dw)(ax) != (dw)('PM')) {goto __m2c_macrolocal_51_skip;}
	/* jmp	SetPilotMFDdamaged */
	goto setpilotmfddamaged;
__m2c_macrolocal_51_skip:
	// 4519 
	// 0 ;yes ->
	/* cmp	ah,'P'		;preview mode? */
	CMP(ah, 'P');
	/* jne	__m2c_macrolocal_52_skip */
	if ((db)(ah) != (db)('P')) {goto __m2c_macrolocal_52_skip;}
	/* jmp	SetPreviewMode */
	goto setpreviewmode;
__m2c_macrolocal_52_skip:
	// 4521 
	// 0 ;yes ->
	/* cmp	ax,'QS'		;quick start? */
	CMP(ax, 'QS');
	/* jne	__m2c_macrolocal_53_skip */
	if ((dw)(ax) != (dw)('QS')) {goto __m2c_macrolocal_53_skip;}
	/* jmp	SetQuickStart */
	goto setquickstart;
__m2c_macrolocal_53_skip:
	// 4523 
	// 0 ;yes ->
	/* cmp	ax,'RD'		;radar damaged? */
	CMP(ax, 'RD');
	/* jne	__m2c_macrolocal_54_skip */
	if ((dw)(ax) != (dw)('RD')) {goto __m2c_macrolocal_54_skip;}
	/* jmp	SetRadarDamaged */
	goto setradardamaged;
__m2c_macrolocal_54_skip:
	// 4525 
	// 0 ;yes ->
	/* cmp	ax,'RT'		;radar test enabled? */
	CMP(ax, 'RT');
	/* jne	__m2c_macrolocal_55_skip */
	if ((dw)(ax) != (dw)('RT')) {goto __m2c_macrolocal_55_skip;}
	/* jmp	SetRadarTest */
	goto setradartest;
__m2c_macrolocal_55_skip:
	// 4527 
	// 0 ;yes ->
	/* cmp	ax,'RW'		;RWR gone? */
	CMP(ax, 'RW');
	/* jne	__m2c_macrolocal_56_skip */
	if ((dw)(ax) != (dw)('RW')) {goto __m2c_macrolocal_56_skip;}
	/* jmp	SetRWRDamaged */
	goto setrwrdamaged;
__m2c_macrolocal_56_skip:
	// 4529 
	// 0 ;yes ->
	/* cmp	ax,'SA'		;AdLib card? */
	CMP(ax, 'SA');
	/* jne	__m2c_macrolocal_57_skip */
	if ((dw)(ax) != (dw)('SA')) {goto __m2c_macrolocal_57_skip;}
	/* jmp	SetAdLib */
	goto setadlib;
__m2c_macrolocal_57_skip:
	// 4531 
	// 0 ;yes ->
	/* cmp	ax,'SB'		;SoundBlaster card? */
	CMP(ax, 'SB');
	/* jne	__m2c_macrolocal_58_skip */
	if ((dw)(ax) != (dw)('SB')) {goto __m2c_macrolocal_58_skip;}
	/* jmp	SetSoundBlaster */
	goto setsoundblaster;
__m2c_macrolocal_58_skip:
	// 4533 
	// 0 ;yes ->
	/* cmp	ax,'SH'		;Allow shake effects? */
	CMP(ax, 'SH');
	/* jne	__m2c_macrolocal_59_skip */
	if ((dw)(ax) != (dw)('SH')) {goto __m2c_macrolocal_59_skip;}
	/* jmp	SetShake */
	goto setshake;
__m2c_macrolocal_59_skip:
	// 4535 
	// 0 ;yes ->
	/* cmp	ax,'SN'		;no sound card? */
	CMP(ax, 'SN');
	/* jne	__m2c_macrolocal_60_skip */
	if ((dw)(ax) != (dw)('SN')) {goto __m2c_macrolocal_60_skip;}
	/* jmp	SetNoSound */
	goto setnosound;
__m2c_macrolocal_60_skip:
	// 4537 
	// 0 ;yes ->
	/* cmp	ax,'SP'		;What is SP? damaged? */
	CMP(ax, 'SP');
	/* jne	__m2c_macrolocal_61_skip */
	if ((dw)(ax) != (dw)('SP')) {goto __m2c_macrolocal_61_skip;}
	/* jmp	SetSPDamaged */
	goto setspdamaged;
__m2c_macrolocal_61_skip:
	// 4539 
	// 0 ;yes ->
	/* cmp	ax,'SR'		;Roland LAPC1 card? */
	CMP(ax, 'SR');
	/* jne	__m2c_macrolocal_62_skip */
	if ((dw)(ax) != (dw)('SR')) {goto __m2c_macrolocal_62_skip;}
	/* jmp	SetRoland */
	goto setroland;
__m2c_macrolocal_62_skip:
	// 4541 
	// 0 ;yes ->
	/* cmp	ax,'SS'		;internal speaker? */
	CMP(ax, 'SS');
	/* jne	__m2c_macrolocal_63_skip */
	if ((dw)(ax) != (dw)('SS')) {goto __m2c_macrolocal_63_skip;}
	/* jmp	SetSpeaker */
	goto setspeaker;
__m2c_macrolocal_63_skip:
	// 4543 
	// 0 ;yes ->
	/* cmp	ax,'SW'		;Sweep damaged? */
	CMP(ax, 'SW');
	/* jne	__m2c_macrolocal_64_skip */
	if ((dw)(ax) != (dw)('SW')) {goto __m2c_macrolocal_64_skip;}
	/* jmp	SetSweepDamaged */
	goto setsweepdamaged;
__m2c_macrolocal_64_skip:
	// 4545 
	// 0 ;yes ->
	/* cmp	ax,'T1'		;two player, com1? */
	CMP(ax, 'T1');
	/* jne	__m2c_macrolocal_65_skip */
	if ((dw)(ax) != (dw)('T1')) {goto __m2c_macrolocal_65_skip;}
	/* jmp	SetCom1 */
	goto setcom1;
__m2c_macrolocal_65_skip:
	// 4547 
	// 0 ;yes ->
	/* cmp	ax,'T2'		;two player, com2? */
	CMP(ax, 'T2');
	/* jne	__m2c_macrolocal_66_skip */
	if ((dw)(ax) != (dw)('T2')) {goto __m2c_macrolocal_66_skip;}
	/* jmp	SetCom2 */
	goto setcom2;
__m2c_macrolocal_66_skip:
	// 4549 
	// 0 ;yes ->
	/* cmp	ax,'TO'		    ;TV-Tab1 damaged? */
	CMP(ax, 'TO');
	/* jne	__m2c_macrolocal_67_skip */
	if ((dw)(ax) != (dw)('TO')) {goto __m2c_macrolocal_67_skip;}
	/* jmp	SetTab1Damaged */
	goto settab1damaged;
__m2c_macrolocal_67_skip:
	// 4551 
	// 0 ;yes ->
	/* cmp	ax,'TR'		    ;Thrust reversers? */
	CMP(ax, 'TR');
	/* jne	__m2c_macrolocal_68_skip */
	if ((dw)(ax) != (dw)('TR')) {goto __m2c_macrolocal_68_skip;}
	/* jmp	SetThrustRevsDamaged */
	goto setthrustrevsdamaged;
__m2c_macrolocal_68_skip:
	// 4553 
	// 0 ;yes ->
	/* cmp	ax,'TT'		    ;TV-Tab2 damaged? */
	CMP(ax, 'TT');
	/* jne	__m2c_macrolocal_69_skip */
	if ((dw)(ax) != (dw)('TT')) {goto __m2c_macrolocal_69_skip;}
	/* jmp	SetTab2Damaged */
	goto settab2damaged;
__m2c_macrolocal_69_skip:
	// 4555 
	// 0 ;yes ->
	/* cmp	ax,'TM'		;ThrustMaster? */
	CMP(ax, 'TM');
	/* jne	__m2c_macrolocal_70_skip */
	if ((dw)(ax) != (dw)('TM')) {goto __m2c_macrolocal_70_skip;}
	/* jmp	SetThrustMaster */
	goto setthrustmaster;
__m2c_macrolocal_70_skip:
	// 4557 
	// 0 ;yes ->
	/* cmp	ah,'V'		;set variant? */
	CMP(ah, 'V');
	/* jne	__m2c_macrolocal_71_skip */
	if ((db)(ah) != (db)('V')) {goto __m2c_macrolocal_71_skip;}
	/* jmp	SetVariant */
	goto setvariant;
__m2c_macrolocal_71_skip:
	// 4559 
	// 0 ;yes ->
	/* cmp	ax,'WB'		;WheelBrake? */
	CMP(ax, 'WB');
	/* jne	__m2c_macrolocal_72_skip */
	if ((dw)(ax) != (dw)('WB')) {goto __m2c_macrolocal_72_skip;}
	/* jmp	SetWBDamaged */
	goto setwbdamaged;
__m2c_macrolocal_72_skip:
	// 4561 
	// 0 ;yes ->
	/* cmp	ah,'W'		;set fixed weight? */
	CMP(ah, 'W');
	/* jne	__m2c_macrolocal_73_skip */
	if ((db)(ah) != (db)('W')) {goto __m2c_macrolocal_73_skip;}
	/* jmp	SetWeight */
	goto setweight;
__m2c_macrolocal_73_skip:
	// 4563 
	// 0 ;yes ->
	/* cmp	ax,'XW'		;set crosswinds? */
	CMP(ax, 'XW');
	/* jne	__m2c_macrolocal_74_skip */
	if ((dw)(ax) != (dw)('XW')) {goto __m2c_macrolocal_74_skip;}
	/* jmp	SetXWinds */
	goto setxwinds;
__m2c_macrolocal_74_skip:
	// 4565 
	// 0 ;yes ->
	// 0 ;----------------
nextarg:
	// 4567 
	/* NextArg:	add	bx,2 */
	ADD(bx, 2);
	/* dec	cx */
	DEC(cx);
	/* jz	__m2c_macrolocal_75_skip */
	if (cx == 0) {goto __m2c_macrolocal_75_skip;}
	/* jmp	ArgLoop */
	goto argloop;
__m2c_macrolocal_75_skip:
	// 4569 
exitcmndline:
	// 4571 
	/* ExitCmndLine:	ret */
	RETN(0);
	// 0 ;---------------------------
setheading:
	// 4573 
	// 0 ;---------------------------
	// 0 ;* format expected: "/ah180" (range = 0 .. 360)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* limit max
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	SetMaxHdg */
	if ((dw)(dx) > (dw)(0)) {goto setmaxhdg;}
	/* cmp	ax,360 */
	CMP(ax, 360);
	/* ja	SetMaxHdg */
	if ((dw)(ax) > (dw)(360)) {goto setmaxhdg;}
	// 0 ;* convert degs to pdegs
hdgok:
	// 4575 
	/* HdgOk:		mov	dx,46603	;512 / 360 * 32768 = 46603 */
	dx = 46603;
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
	/* and	dx,511		;0 .. 511 */
	AND(dx, 511);
	/* mov	M_VIEW.VP_HDG,dx */
	m_view.vp_hdg = dx;
	/* jmp	NextArg */
	goto nextarg;
setmaxhdg:
	// 4577 
	/* SetMaxHdg:	mov	ax,360 */
	ax = 360;
	/* jmp	HdgOk */
	goto hdgok;
	// 0 ;---------------------------
setairbrakesdamaged:
	// 4579 
	// 0 ;---------------------------
	/* mov	SSF_AirBrakes,1 */
	ssf_airbrakes = 1;
	/* or	AmbWarnings2,AMB_AB */
	OR(ambwarnings2, 0x20);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setadcdamaged:
	// 4581 
	// 0 ;---------------------------
	/* mov	SSF_ADC,1 */
	ssf_adc = 1;
	/* or	AmbWarnings2,AMB_ADC */
	OR(ambwarnings2, 0x2);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setairspeed:
	// 4583 
	// 0 ;---------------------------
	// 0 ;* format expected: "/av450" (range = 200 .. 800)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* limit max
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	SetMaxSpeed */
	if ((dw)(dx) > (dw)(0)) {goto setmaxspeed;}
	/* cmp	ax,800 */
	CMP(ax, 800);
	/* ja	SetMaxSpeed */
	if ((dw)(ax) > (dw)(800)) {goto setmaxspeed;}
	// 0 ;* limit min
	/* cmp	ax,200 */
	CMP(ax, 200);
	/* jb	SetMinSpeed */
	if ((dw)(ax) < (dw)(200)) {goto setminspeed;}
speedok:
	// 4585 
	/* SpeedOk:	mov	StartAirspeed,ax */
	startairspeed = ax;
	/* jmp	NextArg */
	goto nextarg;
setmaxspeed:
	// 4587 
	/* SetMaxSpeed:	mov	ax,800 */
	ax = 800;
	/* jmp	SpeedOk */
	goto speedok;
setminspeed:
	// 4589 
	/* SetMinSpeed:	mov	ax,200 */
	ax = 200;
	/* jmp	SpeedOk */
	goto speedok;
	// 0 ;---------------------------
setxsector:
	// 4591 
	// 0 ;---------------------------
	// 0 ;* format expected: "/ax10" (range = 0 .. 31)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* and	ax,31		;0 .. 31 */
	AND(ax, 31);
	/* mov	M_VIEW.VP_XSEC,ax */
	m_view.vp_xsec = ax;
	/* mov	M_VIEW.VP_XFT,0 */
	m_view.vp_xft = 0;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setysector:
	// 4593 
	// 0 ;---------------------------
	// 0 ;* format expected: "/ay10" (range = 0 .. 31)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* and	ax,31		;0 .. 31 */
	AND(ax, 31);
	/* mov	M_VIEW.VP_YSEC,ax */
	m_view.vp_ysec = ax;
	/* mov	M_VIEW.VP_YFT,0 */
	m_view.vp_yft = 0;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setaltitude:
	// 4595 
	// 0 ;---------------------------
	// 0 ;* format expected: "/az5000" (range = 1 .. 99999)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* limit min
	/* mov	bp,ax */
	bp = ax;
	/* or	bp,dx		;zero? */
	OR(bp, dx);
	/* jnz	@F		;no -> */
	if (bp != 0) {goto dummylabel17;}
	/* mov	ax,1 */
	ax = 1;
	// 0 ;* set altitude
dummylabel17:
	// 4597 
	/* @@:		mov	WORD PTR M_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&m_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR M_VIEW.VP_ZFT_HI,dx */
	*((dw*)((db*)&m_view+vp_zft_hi)) = dx;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setairborne:
	// 4599 
	// 0 ;---------------------------
	// 0 ;* start airborne / alt = 5000ft / ias = 450kts
	/* mov	StartAirborne,1 */
	startairborne = 1;
	/* mov	WORD PTR M_VIEW.VP_ZFT_LO,5000 */
	*((dw*)((db*)&m_view+vp_zft_lo)) = 5000;
	/* mov	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&m_view+vp_zft_hi)) = 0;
	/* mov	StartAirspeed,450 */
	startairspeed = 450;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setbaudrate:
	// 4601 
	// 0 ;---------------------------
	// 0 ;* format expected: "/b96" (range = 12 .. 1152)
	/* inc	si		;si -> number */
	INC(si);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	dl,BAUD1200 */
	dl = baud1200;
	/* cmp	ax,12 */
	CMP(ax, 12);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(12)) {goto dummylabel18;}
	/* mov	dl,BAUD2400 */
	dl = baud2400;
	/* cmp	ax,24 */
	CMP(ax, 24);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(24)) {goto dummylabel18;}
	/* mov	dl,BAUD4800 */
	dl = baud4800;
	/* cmp	ax,48 */
	CMP(ax, 48);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(48)) {goto dummylabel18;}
	/* mov	dl,BAUD9600 */
	dl = baud9600;
	/* cmp	ax,96 */
	CMP(ax, 96);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(96)) {goto dummylabel18;}
	/* mov	dl,BAUD14400 */
	dl = baud14400;
	/* cmp	ax,144 */
	CMP(ax, 144);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(144)) {goto dummylabel18;}
	/* mov	dl,BAUD19200 */
	dl = baud19200;
	/* cmp	ax,192 */
	CMP(ax, 192);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(192)) {goto dummylabel18;}
	/* mov	dl,BAUD38400 */
	dl = baud38400;
	/* cmp	ax,384 */
	CMP(ax, 384);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(384)) {goto dummylabel18;}
	/* mov	dl,BAUD57600 */
	dl = baud57600;
	/* cmp	ax,576 */
	CMP(ax, 576);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(576)) {goto dummylabel18;}
	/* mov	dl,BAUD115200 */
	dl = baud115200;
dummylabel18:
	// 4603 
	/* @@:		mov	BaudRate,dl */
	baudrate = dl;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setflightstick:
	// 4605 
	// 0 ;---------------------------
	/* mov	CHStick,1 */
	chstick = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setlighting:
	// 4607 
	// 0 ;---------------------------
	// 0 ;* format expected: "/cg" = green lighting
	// 0 ;*                  "/cr" = red lighting
	/* mov	ah,0		;assume red */
	ah = 0;
	/* cmp	al,'R'		;red lighting? */
	CMP(al, 'R');
	/* je	@F		;yes -> */
	if ((db)(al) == (db)('R')) {goto dummylabel19;}
	/* mov	ah,1		;green */
	ah = 1;
dummylabel19:
	// 4609 
	/* @@:		mov	PanelLight,ah */
	panellight = ah;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setdataexchange:
	// 4611 
	// 0 ;---------------------------
	/* mov	DataExchange,1 */
	dataexchange = 1;
	/* mov	FadeOutFlag,1 */
	fadeoutflag = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setdemomode1:
	// 4613 
	// 0 ;---------------------------
	/* mov	DemoMode,1 */
	demomode = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setdemomode2:
	// 4615 
	// 0 ;---------------------------
	/* mov	DemoMode,2 */
	demomode = 2;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setecmdamaged:
	// 4617 
	// 0 ;---------------------------
	/* mov	SSF_ECM,1 */
	ssf_ecm = 1;
	/* or	AmbWarnings2,AMB_ECM */
	OR(ambwarnings2, 0x4);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setengine1damaged:
	// 4619 
	// 0 ;---------------------------
	/* mov	SSF_Engine1,1 */
	ssf_engine1 = 1;
	/* or	RedWarnings2,RED_L_ENG */
	OR(redwarnings2, 0x100);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setengine2damaged:
	// 4621 
	// 0 ;---------------------------
	/* mov	SSF_Engine2,1 */
	ssf_engine2 = 1;
	/* or	RedWarnings2,RED_R_ENG */
	OR(redwarnings2, 0x200);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setexploremode:
	// 4623 
	// 0 ;---------------------------
	/* mov	ExploreMode,1 */
	exploremode = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setflapsdamaged:
	// 4625 
	// 0 ;---------------------------
	/* mov	SSF_Flaps,1 */
	ssf_flaps = 1;
	/* or	AmbWarnings2,AMB_FLPS */
	OR(ambwarnings2, 0x40);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setfadeout:
	// 4627 
	// 0 ;---------------------------
	/* mov	FadeOutFlag,1 */
	fadeoutflag = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setframerate:
	// 4629 
	// 0 ;---------------------------
	// 0 ;* format expected: "/fr4" (range = 1 .. 16)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* limit max
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	SetMaxFrames */
	if ((dw)(dx) > (dw)(0)) {goto setmaxframes;}
	/* cmp	ax,16 */
	CMP(ax, 16);
	/* ja	SetMaxFrames */
	if ((dw)(ax) > (dw)(16)) {goto setmaxframes;}
	// 0 ;* limit min
	/* cmp	ax,1 */
	CMP(ax, 1);
	/* jb	SetMinFrames */
	if ((dw)(ax) < (dw)(1)) {goto setminframes;}
	// 0 ;* max frame rate = 100 / frames per sec
framesok:
	// 4631 
	/* FramesOk:	mov	bx,ax */
	bx = ax;
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	ax,100 */
	ax = 100;
	/* div	bx */
	DIV2(bx);
	/* mov	MaxFrameRate,ax */
	maxframerate = ax;
	/* jmp	NextArg */
	goto nextarg;
setmaxframes:
	// 4633 
	/* SetMaxFrames:	mov	ax,16 */
	ax = 16;
	/* jmp	FramesOk */
	goto framesok;
setminframes:
	// 4635 
	/* SetMinFrames:	mov	ax,1 */
	ax = 1;
	/* jmp	FramesOk */
	goto framesok;
	// 0 ;---------------------------
setfog:
	// 4637 
	// 0 ;---------------------------
	// 0 ;* format expected: "/f1" = light fog
	// 0 ;*                  "/f2" = heavy fog
	/* cmp	al,'1'		;light fog? */
	CMP(al, '1');
	/* je	@F		;yes -> */
	if ((db)(al) == (db)('1')) {goto dummylabel20;}
	/* cmp	al,'2'		;heavy fog? */
	CMP(al, '2');
	/* je	@F */
	if ((db)(al) == (db)('2')) {goto dummylabel20;}
	/* mov	al,'1'		;default to light fog */
	al = '1';
dummylabel20:
	// 4639 
	/* @@:		sub	al,'0' */
	SUB(al, '0');
	/* mov	Fog,al */
	fog = al;
	/* mov	Overcast,1	;always overcast if foggy */
	overcast = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setgeardamaged:
	// 4641 
	// 0 ;---------------------------
	/* mov	SSF_Gear,1 */
	ssf_gear = 1;
	/* or	RedWarnings2,RED_UC */
	OR(redwarnings2, 0x40);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
settimeout:
	// 4643 
	// 0 ;---------------------------
	// 0 ;* format expected: "/gt300" (range = 0 .. 99999)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	// 0 ;* convert to secs * 100
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
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
	/* add	bx,ax		;*36 */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,bx		;*100 */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* mov	WORD PTR TimeLimit,ax */
	*(dw*)(&timelimit) = ax;
	/* mov	WORD PTR TimeLimit+2,dx */
	*(dw*)(((db*)&timelimit)+2) = dx;
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* mov	GlobalTimeout,1 */
	globaltimeout = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
sethuddamaged:
	// 4645 
	// 0 ;---------------------------
	/* mov	SSF_HUD,1 */
	ssf_hud = 1;
	/* or	AmbWarnings2,AMB_HUD */
	OR(ambwarnings2, 0x100);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setinfinitefuel:
	// 4647 
	// 0 ;---------------------------
	/* mov	InfiniteFuel,1 */
	infinitefuel = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setinfiniteg:
	// 4649 
	// 0 ;---------------------------
	/* mov	InfiniteGForce,1 */
	infinitegforce = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setinfinitewpns:
	// 4651 
	// 0 ;---------------------------
	/* mov	InfiniteWeapons,1 */
	infiniteweapons = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setadlibmusic:
	// 4653 
	// 0 ;---------------------------
	/* mov	MusicCard,SND_ADLIB */
	musiccard = 6;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setblastermusic:
	// 4655 
	// 0 ;---------------------------
	/* mov	MusicCard,SND_SBLASTER */
	musiccard = 4;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setnomusic:
	// 4657 
	// 0 ;---------------------------
	/* mov	MusicCard,SND_NULL */
	musiccard = 0;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setrolandmusic:
	// 4659 
	// 0 ;---------------------------
	/* mov	MusicCard,SND_ROLAND */
	musiccard = 8;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setspeakermusic:
	// 4661 
	// 0 ;---------------------------
	/* mov	MusicCard,SND_SPEAKER */
	musiccard = 2;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setmaptestmode:
	// 4663 
	// 0 ;---------------------------
	/* mov	MapTestMode,1 */
	maptestmode = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setnocollisions:
	// 4665 
	// 0 ;---------------------------
	/* mov	NoCollisions,1 */
	nocollisions = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setnavigmfddamaged:
	// 4667 
	// 0 ;---------------------------
	/* mov	SSF_NavigMFD,1 */
	ssf_navigmfd = 1;
	/* or	AmbWarnings2,AMB_MFD2 */
	OR(ambwarnings2, 0x400);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setnight:
	// 4669 
	// 0 ;---------------------------
	// 0 ;* format expected: "/n1" = night 1 (dusk)
	// 0 ;*                  "/n2" = night 2
	// 0 ;*                  "/n3" = night 3
	// 0 ;*                  "/n4" = night 4 (midnight)
	/* cmp	al,'1'		;night 1? */
	CMP(al, '1');
	/* je	@F		;yes -> */
	if ((db)(al) == (db)('1')) {goto dummylabel21;}
	/* cmp	al,'2'		;night 2? */
	CMP(al, '2');
	/* je	@F		;yes -> */
	if ((db)(al) == (db)('2')) {goto dummylabel21;}
	/* cmp	al,'3'		;night 3? */
	CMP(al, '3');
	/* je	@F		;yes -> */
	if ((db)(al) == (db)('3')) {goto dummylabel21;}
	/* cmp	al,'4'		;night 4? */
	CMP(al, '4');
	/* je	@F		;yes -> */
	if ((db)(al) == (db)('4')) {goto dummylabel21;}
	/* mov	al,'1'		;default to dusk */
	al = '1';
dummylabel21:
	// 4671 
	/* @@:		sub	al,'0' */
	SUB(al, '0');
	/* mov	Night,al */
	night = al;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setovercast:
	// 4673 
	// 0 ;---------------------------
	/* mov	Overcast,1 */
	overcast = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setpreviewauto:
	// 4675 
	// 0 ;---------------------------
	/* mov	PreviewMode,2 */
	previewmode = 2;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setpilotmfddamaged:
	// 4677 
	// 0 ;---------------------------
	/* mov	SSF_PilotMFD,1 */
	ssf_pilotmfd = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setpreviewmode:
	// 4679 
	// 0 ;---------------------------
	/* mov	PreviewMode,1 */
	previewmode = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setquickstart:
	// 4681 
	// 0 ;---------------------------
	// 0 ;* "/qs" is same as "/a /if /ig /iw /nc /w"
	/* mov	StartAirborne,1 */
	startairborne = 1;
	/* mov	WORD PTR M_VIEW.VP_ZFT_LO,5000 */
	*((dw*)((db*)&m_view+vp_zft_lo)) = 5000;
	/* mov	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&m_view+vp_zft_hi)) = 0;
	/* mov	StartAirspeed,450 */
	startairspeed = 450;
	/* mov	InfiniteFuel,1 */
	infinitefuel = 1;
	/* mov	InfiniteGForce,0 */
	infinitegforce = 0;
	/* mov	InfiniteWeapons,1 */
	infiniteweapons = 1;
	/* mov	NoCollisions,1 */
	nocollisions = 1;
	/* mov	FixedWeight,33000 */
	fixedweight = 33000;
	/* mov	DebugWeight,1 */
	debugweight = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setradardamaged:
	// 4683 
	// 0 ;---------------------------
	/* mov	SSF_Radar,1 */
	ssf_radar = 1;
	/* or	AmbWarnings2,AMB_RAD */
	OR(ambwarnings2, 0x2000);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setradartest:
	// 4685 
	// 0 ;---------------------------
	/* mov	RadarTest,1 */
	radartest = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setrwrdamaged:
	// 4687 
	// 0 ;---------------------------
	/* mov	SSF_RWR,1 */
	ssf_rwr = 1;
	/* or	AmbWarnings2,AMB_RWR */
	OR(ambwarnings2, 0x4000);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setadlib:
	// 4689 
	// 0 ;---------------------------
	/* mov	SoundCard,SND_ADLIB */
	soundcard = 6;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setsoundblaster:
	// 4691 
	// 0 ;---------------------------
	/* mov	SoundCard,SND_SBLASTER */
	soundcard = 4;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
fullscreenflirandtiald:
	// 4693 
	// 0 ;---------------------------
	/* mov	FullScreen,1 */
	fullscreen = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setshake:
	// 4695 
	// 0 ;---------------------------
	/* mov	ShakeUp,SHAKE_OPT_ON */
	shakeup = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setnosound:
	// 4697 
	// 0 ;---------------------------
	/* mov	SoundCard,SND_NULL */
	soundcard = 0;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setspdamaged:
	// 4699 
	// 0 ;---------------------------
	/* mov	SSF_SPILS,1 */
	ssf_spils = 1;
	/* or	RedWarnings2,RED_SPILS */
	OR(redwarnings2, 0x20);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setroland:
	// 4701 
	// 0 ;---------------------------
	/* mov	SoundCard,SND_ROLAND */
	soundcard = 8;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setspeaker:
	// 4703 
	// 0 ;---------------------------
	/* mov	SoundCard,SND_SPEAKER */
	soundcard = 2;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setsweepdamaged:
	// 4705 
	// 0 ;---------------------------
	/* mov	SSF_Sweep,1 */
	ssf_sweep = 1;
	/* or	AmbWarnings2,AMB_SWP */
	OR(ambwarnings2, 0x80);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setcom1:
	// 4707 
	// 0 ;---------------------------
	/* mov	TwoPlayer,1 */
	twoplayer = 1;
	/* mov	CommsDevice,COM1 */
	commsdevice = com1;
	/* mov	BaudRate,BAUD9600 */
	baudrate = baud9600;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
settab1damaged:
	// 4709 
	// 0 ;---------------------------
	/* mov	SSF_TAB1,1 */
	ssf_tab1 = 1;
	/* or	AmbWarnings2,AMB_L_TAB */
	OR(ambwarnings2, 0x800);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setthrustrevsdamaged:
	// 4711 
	// 0 ;---------------------------
	/* mov	SSF_ThrustRvrs,1 */
	ssf_thrustrvrs = 1;
	/* or	RedWarnings2,RED_REV */
	OR(redwarnings2, 0x10);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
settab2damaged:
	// 4713 
	// 0 ;---------------------------
	/* mov	SSF_TAB2,1 */
	ssf_tab2 = 1;
	/* or	AmbWarnings2,AMB_R_TAB */
	OR(ambwarnings2, 0x1000);
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setcom2:
	// 4715 
	// 0 ;---------------------------
	/* mov	TwoPlayer,1 */
	twoplayer = 1;
	/* mov	CommsDevice,COM2 */
	commsdevice = com2;
	/* mov	BaudRate,BAUD9600 */
	baudrate = baud9600;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setthrustmaster:
	// 4717 
	// 0 ;---------------------------
	/* mov	ThrustMaster,1 */
	thrustmaster = 1;
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setwbdamaged:
	// 4719 
	// 0 ;---------------------------
	/* mov	SSF_WheelBrakes,1 */
	ssf_wheelbrakes = 1;
	/* or	AmbWarnings2,AMB_WB */
	OR(ambwarnings2, 0x10);
	// 0 ;mov	SSF_Oxygen,1
	// 0 ;or	RedWarnings2,RED_OXY
	/* jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setvariant:
	// 4721 
	// 0 ;---------------------------
	/* mov	dx,ADV_TORNADO */
	dx = 2;
	/* cmp	al,'A' */
	CMP(al, 'A');
	/* je	@F */
	if ((db)(al) == (db)('A')) {goto dummylabel22;}
	/* mov	dx,ECR_TORNADO */
	dx = 4;
	/* cmp	al,'E' */
	CMP(al, 'E');
	/* je	@F */
	if ((db)(al) == (db)('E')) {goto dummylabel22;}
	/* mov	dx,IDS_TORNADO */
	dx = 0;
dummylabel22:
	// 4723 
	/* @@:		mov	TornadoType,dx */
	tornadotype = dx;
	// 0 ;* sort ADV stores
	/* cmp	dx,ADV_TORNADO */
	CMP(dx, 2);
	/* jne	StoresOk */
	if ((dw)(dx) != (dw)(2)) {goto storesok;}
	// 0 ;* clear IDS only stores
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	ExtStores[EXT_GPB1000],ax */
	*(dw*)(((db*)&extstores)+0) = ax;
	/* mov	ExtStores[EXT_RET1000],ax */
	*(dw*)(((db*)&extstores)+2) = ax;
	/* mov	ExtStores[EXT_LGB1000],ax */
	*(dw*)(((db*)&extstores)+4) = ax;
	/* mov	ExtStores[EXT_BL755],ax */
	*(dw*)(((db*)&extstores)+6) = ax;
	/* mov	ExtStores[EXT_JP233],ax */
	*(dw*)(((db*)&extstores)+8) = ax;
	/* mov	ExtStores[EXT_ALARM],ax */
	*(dw*)(((db*)&extstores)+10) = ax;
	/* mov	ExtStores[EXT_BOZ100],ax */
	*(dw*)(((db*)&extstores)+16) = ax;
	/* mov	ExtStores[EXT_SKYSHADOW],ax */
	*(dw*)(((db*)&extstores)+18) = ax;
	/* push	cx */
	PUSH(cx);
	/* mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
	/* mov	cx,NUM_PACKAGES */
	cx = 3;
dummylabel23:
	// 4725 
	/* @@:		mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* add	si,PACK_REC_SIZE */
	ADD(si, 8);
	/* loop	@B */
	LOOP(dummylabel23);
	/* mov	PackagePtr,-1 */
	packageptr = -1;
	/* pop	cx */
	POP(cx);
	// 0 ;* ensure Sky Flash loaded
	/* cmp	ExtStores[EXT_SKYFLASH],0 */
	CMP(*(dw*)(((db*)&extstores)+14), 0);
	/* ja	StoresOk */
	if ((dw)(*(dw*)(((db*)&extstores)+14)) > (dw)(0)) {goto storesok;}
	/* mov	ExtStores[EXT_SKYFLASH],4 */
	*(dw*)(((db*)&extstores)+14) = 4;
storesok:
	// 4727 
	/* StoresOk:	jmp	NextArg */
	goto nextarg;
	// 0 ;---------------------------
setweight:
	// 4729 
	// 0 ;---------------------------
	// 0 ;* format expected: "/w45000" (range = 33000 .. 60000)
	/* inc	si		;si -> number */
	INC(si);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	// 0 ;* limit max
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	SetMaxWeight */
	if ((dw)(dx) > (dw)(0)) {goto setmaxweight;}
	/* cmp	ax,60000 */
	CMP(ax, 60000);
	/* ja	SetMaxWeight */
	if ((dw)(ax) > (dw)(60000)) {goto setmaxweight;}
	// 0 ;* limit min
	/* cmp	ax,33000 */
	CMP(ax, 33000);
	/* jb	SetMinWeight */
	if ((dw)(ax) < (dw)(33000)) {goto setminweight;}
weightok:
	// 4731 
	/* WeightOk:	mov	FixedWeight,ax */
	fixedweight = ax;
	/* mov	DebugWeight,1 */
	debugweight = 1;
	/* jmp	NextArg */
	goto nextarg;
setmaxweight:
	// 4733 
	/* SetMaxWeight:	mov	ax,60000 */
	ax = 60000;
	/* jmp	WeightOk */
	goto weightok;
setminweight:
	// 4735 
	/* SetMinWeight:	mov	ax,33000 */
	ax = 33000;
	/* jmp	WeightOk */
	goto weightok;
	// 0 ;---------------------------
setxwinds:
	// 4737 
	// 0 ;---------------------------
	// 0 ;* format expected: "/xw20" (range = 5 .. 75)
	/* add	si,2		;si -> number */
	ADD(si, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	ConvNum$ */
	CALLF(convnumdol, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* cmp	ax,75 */
	CMP(ax, 75);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(75)) {goto dummylabel24;}
	/* mov	ax,75 */
	ax = 75;
dummylabel24:
	// 4739 
	/* @@:		cmp	ax,5 */
	CMP(ax, 5);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(5)) {goto dummylabel25;}
	/* mov	ax,5 */
	ax = 5;
	// 0 ;* convert knots to ft/sec
dummylabel25:
	// 4741 
	/* @@:		mov	dx,3482		;3482 = 1.7 * 8 * 256 */
	dx = 3482;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* mov	XWindVmax,ax */
	xwindvmax = ax;
	// 0 ;* set headwind
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	XWindDir,ax */
	xwinddir = ax;
	/* jmp	NextArg */
	goto nextarg;
sortpause:
	// 3748 
	/* mov	al,BYTE PTR KF_Pause[K_STATUS] ;* kill: assume all */
	al = *((&kf_pause)+k_status);
edummylabel3:
	// 4743 
	/* test	al,al */
	TEST(al, al);
	// 0 ;key pressed?
/* m2c-phantom removed: 	R(al = *((&kf_pause)+k_status););	// 3753 mov	al,BYTE PTR KF_Pause[K_STATUS] */
	/* jnz	__m2c_macrolocal_78_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_78_skip;}
	/* jmp	ExitPause */
	goto exitpause;
__m2c_macrolocal_78_skip:
	// 4745 
	// 0 ;no ->
	/* mov	Paused,1 */
	paused = 1;
	/* call	SuspendSound */
	CALLF(suspendsound, 0);
	/* call	SuspendMusic */
	CALLF(suspendmusic, 0);
	// 0 ;* store timers / counters
	/* cli */
	CLI;
	/* push	Ticker */
	PUSH(ticker);
	/* push	Frames */
	PUSH(frames);
	/* push	CountDown */
	PUSH(countdown);
	/* push	WORD PTR ElapsedTime */
	PUSH(*(dw*)(&elapsedtime));
	/* push	WORD PTR ElapsedTime+2 */
	PUSH(*(dw*)(((db*)&elapsedtime)+2));
	/* sti */
	STI;
	/* call	FadeDown */
	CALLF(fadedown, 0);
	/* mov	Frames,0 */
	frames = 0;
pauseloop:
	// 4747 
	/* PauseLoop:	mov	ax,Frames */
	ax = frames;
	/* cmp	ax,MaxFrameRate */
	CMP(ax, maxframerate);
	/* jb	PauseLoop */
	if ((dw)(ax) < (dw)(maxframerate)) {goto pauseloop;}
	/* mov	Frames,0 */
	frames = 0;
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Quit[K_STATE] */
	XCHG(al, *((&kf_quit)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Quit[K_LOCK] */
	XCHG(ah, *((&kf_quit)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Quit[K_STATUS],al */
	*((&kf_quit)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_quit)+k_state)));	// 3787 						xchg	al,BYTE PTR KF_Quit[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_quit)+k_lock)));	// 3788 xchg	ah,BYTE PTR KF_Quit[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_quit)+k_status) = al;);	// 3789 mov	BYTE PTR KF_Quit[K_STATUS],al */
	// 0 ;* status = (lock = 0 and state = 1)
	// 0 ;* lock   = state
	// 0 ;* state  = 0
	/* xor	al,al */
	XOR(al, al);
	/* xchg	al,BYTE PTR KF_Pause[K_STATE] */
	XCHG(al, *((&kf_pause)+k_state));
	/* mov	ah,al */
	ah = al;
	/* xchg	ah,BYTE PTR KF_Pause[K_LOCK] */
	XCHG(ah, *((&kf_pause)+k_lock));
	/* not	ah */
	ah = ~ah;
	/* and	al,ah */
	AND(al, ah);
	/* mov	BYTE PTR KF_Pause[K_STATUS],al */
	*((&kf_pause)+k_status) = al;
/* m2c-phantom removed: 	R(XCHG(al, *((&kf_pause)+k_state)));	// 3800 						xchg	al,BYTE PTR KF_Pause[K_STATE] */
/* m2c-phantom removed: 	R(XCHG(ah, *((&kf_pause)+k_lock)));	// 3801 xchg	ah,BYTE PTR KF_Pause[K_LOCK] */
/* m2c-phantom removed: 	R(*((&kf_pause)+k_status) = al;);	// 3802 mov	BYTE PTR KF_Pause[K_STATUS],al */
	/* mov	al,BYTE PTR KF_Quit[K_STATUS] */
	al = *((&kf_quit)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_quit)+k_status););	// 3806 						mov	al,BYTE PTR KF_Quit[K_STATUS] */
	/* jz	SkipQuit */
	if (!(al & al)) {goto skipquit;}
	// 0 ;* if TmpDieFlag <> 0 then
	// 0 ;*    DieFlag = TmpDieFlag
	// 0 ;* else
	// 0 ;*    DieFlag = DIE_QUIT
	// 0 ;* endif
	/* mov	al,TmpDieFlag */
	al = tmpdieflag;
	/* test	al,al */
	TEST(al, al);
	/* jnz	@F */
	if ((al & al) != 0) {goto dummylabel26;}
	/* mov	al,DIE_QUIT */
	al = 1;
dummylabel26:
	// 4749 
	/* @@:		mov	DieFlag,al */
	dieflag = al;
	/* jmp	PauseDone */
	goto pausedone;
skipquit:
	// 4751 
	/* SkipQuit:	mov	al,BYTE PTR KF_Pause[K_STATUS] */
	al = *((&kf_pause)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_pause)+k_status););	// 3822 mov	al,BYTE PTR KF_Pause[K_STATUS] */
	/* jz	PauseLoop */
	if (!(al & al)) {goto pauseloop;}
pausedone:
	// 4753 
	// 0 ;call VisualInfo
	/* call	FadeUp */
	CALLF(fadeup, 0);
	// 0 ;* restore timers / counters
	/* cli */
	CLI;
	/* pop	WORD PTR ElapsedTime+2 */
	POP(*(dw*)(((db*)&elapsedtime)+2));
	/* pop	WORD PTR ElapsedTime */
	POP(*(dw*)(&elapsedtime));
	/* pop	CountDown */
	POP(countdown);
	/* pop	Frames */
	POP(frames);
	/* pop	Ticker */
	POP(ticker);
	/* sti */
	STI;
	/* call	ResumeSound */
	CALLF(resumesound, 0);
	/* call	ResumeMusic */
	CALLF(resumemusic, 0);
	/* mov	Paused,0 */
	paused = 0;
exitpause:
	// 4755 
	/* ExitPause:	ret */
	RETN(0);
initdemo:
	// 3850 
	/* cmp	DemoMode,1	;cycling demo? */
	CMP(demomode, 1);
edummylabel4:
	// 4757 
	/* jne	InitFlyingDemo	;no -> */
	if (!ZF) {goto initflyingdemo;}
	// 0 ;---------------------------
initcyclingdemo:
	// 4759 
	// 0 ;init drone cycling demo mode
	// 0 ;---------------------------
	// 0 ;mov	DisableInput,DIP_DEMO
	/* mov	InfiniteFuel,1 */
	infinitefuel = 1;
	/* mov	NoCollisions,1 */
	nocollisions = 1;
	/* mov	NoFire,1 */
	nofire = 1;
	/* mov	ax,VIEW_DEMO */
	ax = 28;
	/* ret */
	RETN(0);
	// 0 ;---------------------------
initflyingdemo:
	// 4761 
	// 0 ;init flying demo mode
	// 0 ;---------------------------
	// 0 ;* note: Assume that the waypoint route is "continuous" (see MAINDATA.ASM),
	// 0 ;*       and that there are at least 3 waypoints.
	// 0 ;mov	DisableInput,DIP_DEMO
	/* mov	StartAirborne,1 */
	startairborne = 1;
	/* mov	InfiniteFuel,1 */
	infinitefuel = 1;
	/* mov	AutoTrack,1 */
	autotrack = 1;
	/* mov	NoCollisions,1 */
	nocollisions = 1;
	/* mov	NoFire,1 */
	nofire = 1;
	/* mov	TrkCamBrg,256+16 */
	trkcambrg = 256+16;
	// 0 ;* delete Tornado mobile
	/* mov	si,OFFSET M_MOBILE */
	si = m2c::near_offset_external(m_mobile);
	/* call	DeleteMobile */
	CALLF(deletemobile, 0);
	// 0 ;* start at current waypoint
	/* mov	si,WPPtr */
	si = wpptr;
	/* mov	ax,[si].WP_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xsec)));
	/* mov	M_VIEW.VP_XSEC,ax */
	m_view.vp_xsec = ax;
	/* mov	ax,[si].WP_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_ysec)));
	/* mov	M_VIEW.VP_YSEC,ax */
	m_view.vp_ysec = ax;
	/* mov	ax,[si].WP_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* mov	M_VIEW.VP_XFT,ax */
	m_view.vp_xft = ax;
	/* mov	ax,[si].WP_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* mov	M_VIEW.VP_YFT,ax */
	m_view.vp_yft = ax;
	/* mov	ax,[si].WP_ZFT */
	ax = m2c::getdata(*((dw*)((db*)&((waypoint*)raddr(ds,si))->wp_zft)));
	/* mov	WORD PTR M_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&m_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&m_view+vp_zft_hi)) = 0;
	// 0 ;* convert vtas (ft/sec * 8) to vias
	/* mov	ax,[si].WP_SPEED */
	ax = m2c::getdata(*((dw*)raddr(ds,si+wp_speed)));
	/* xor	dh,dh		;*256 */
	XOR(dh, dh);
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* mov	bx,3482		;1.7 * 8 * 256 = 3482 */
	bx = 3482;
	/* div	bx */
	DIV2(bx);
	/* mov	StartAirspeed,ax */
	startairspeed = ax;
	// 0 ;* hdg = brg to next waypoint
	/* call	AdvanceWP */
	CALLF(advancewp, 0);
	/* mov	ax,WPBrg */
	ax = wpbrg;
	/* mov	M_VIEW.VP_HDG,ax */
	m_view.vp_hdg = ax;
	/* mov	M_VIEW.VP_PITCH,0 */
	m_view.vp_pitch = 0;
	/* mov	M_VIEW.VP_ROLL,0 */
	m_view.vp_roll = 0;
	// 0 ;* create Tornado mobile
	/* mov	si,OFFSET M_MOBILE */
	si = m2c::near_offset_external(m_mobile);
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	/* mov	ax,VIEW_TRACKING */
	ax = 12;
	/* ret */
	RETN(0);
maptest:
	// 3934 
	/* mov	ax,EXT_VIEWMODE ;*	    32 * 32 * 16 * 16 / 10 / 60 / 60 = 7.3 hours */
	ax = 4;
edummylabel5:
	// 4763 
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;* for xsec = 0 to 31
	// 0 ;*    for xft = -8192 to 7168 step 1024
	// 0 ;*       for y sec = 31 to 0
	// 0 ;*          for yft = -8192 to 7168 step 1024
	// 0 ;*             draw visual
	// 0 ;*          next yft
	// 0 ;*       next ysec
	// 0 ;*    next xft
	// 0 ;* next xsec
	/* mov	TEST_VIEW.VP_XSEC,0 */
	test_view.vp_xsec = 0;
nextxsec:
	// 4765 
	/* NextXSec:	mov	TEST_VIEW.VP_XFT,-8192 */
	test_view.vp_xft = -8192;
nextxft:
	// 4767 
	/* NextXft:	mov	TEST_VIEW.VP_YSEC,31 */
	test_view.vp_ysec = 31;
nextysec:
	// 4769 
	/* NextYSec:	mov	TEST_VIEW.VP_YFT,-8192 */
	test_view.vp_yft = -8192;
nextyft:
	// 4771 
	/* NextYft:	mov	si,OFFSET TEST_VIEW */
	si = m2c::near_offset_external(test_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,250 */
	ADD(ax, 250);
	/* mov	WORD PTR TEST_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&test_view+vp_zft_lo)) = ax;
	/* mov	si,OFFSET TEST_VIEW */
	si = m2c::near_offset_external(test_view);
	/* call	Visual */
	CALLF(visual, 0);
	/* call	VisualInfo */
	CALLF(visualinfo, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* mov	al,Key[K_CTRL]		;CTRL-Q quits map test */
	al = *((&key)+29);
	/* and	al,Key[K_Q] */
	AND(al, *((&key)+16));
	/* jnz	QuitMapTest		;quit -> */
	if (al != 0) {goto quitmaptest;}
	/* add	TEST_VIEW.VP_YFT,1024 */
	ADD(test_view.vp_yft, 1024);
	/* cmp	TEST_VIEW.VP_YFT,8191 */
	CMP(test_view.vp_yft, 8191);
	/* jle	NextYft */
	if ((short)(test_view.vp_yft) <= (short)(8191)) {goto nextyft;}
	/* sub	TEST_VIEW.VP_YSEC,1 */
	SUB(test_view.vp_ysec, 1);
	/* cmp	TEST_VIEW.VP_YSEC,0 */
	CMP(test_view.vp_ysec, 0);
	/* jge	NextYSec */
	if ((short)(test_view.vp_ysec) >= (short)(0)) {goto nextysec;}
	/* add	TEST_VIEW.VP_XFT,1024 */
	ADD(test_view.vp_xft, 1024);
	/* cmp	TEST_VIEW.VP_XFT,8191 */
	CMP(test_view.vp_xft, 8191);
	/* jle	NextXft */
	if ((short)(test_view.vp_xft) <= (short)(8191)) {goto nextxft;}
	/* add	TEST_VIEW.VP_XSEC,1 */
	ADD(test_view.vp_xsec, 1);
	/* cmp	TEST_VIEW.VP_XSEC,31 */
	CMP(test_view.vp_xsec, 31);
	/* jle	NextXSec */
	if ((short)(test_view.vp_xsec) <= (short)(31)) {goto nextxsec;}
	/* mov	DieFlag,SYS_ERR_MAP_OK */
	dieflag = 245;
	/* ret */
	RETN(0);
quitmaptest:
	// 4773 
	/* QuitMapTest:	mov	DieFlag,DIE_QUIT */
	dieflag = 1;
	/* ret */
	RETN(0);
resizememory:
	// 3989 
	// 0 ;* calc program size in paragraphs (16 byte units)
	// 0 ;*
	// 0 ;* size = SEG PROG_END - PSP + OFFSET PROG_END / 16 + 1
edummylabel6:
	// 4775 
	/* mov	bx,SEG PROG_END */
	bx = m2c::segment_of_external(prog_end);
	/* sub	bx,PSP */
	SUB(bx, psp);
	/* mov	ax,OFFSET PROG_END */
	ax = m2c::near_offset_external(prog_end);
	/* mov	cl,4 */
	cl = 4;
	/* shr	ax,cl		;/16 */
	SHR(ax, cl);
	/* inc	ax */
	INC(ax);
	/* add	bx,ax */
	ADD(bx, ax);
	// 0 ;* resize memory block
	/* push	es */
	PUSH(es);
	/* mov	es,PSP */
	m2c::set_segment_register(es, psp);
	/* mov	ah,04ah */
	ah = 0x04a;
	/* int	021h */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* jnc	@F		;no error -> */
	if (!CF) {goto dummylabel27;}
	/* mov	DieFlag,SYS_ERR_RESIZE */
	dieflag = 244;
dummylabel27:
	// 4777 
	/* @@:		ret */
	RETN(0);
fadeloadscreen:
	// 4020 
	// 0 ;------------------------------------
	// 0 ;* save palette data into work screen
	// 0 ;------------------------------------
edummylabel7:
	// 4779 
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	si,SEG VGA_RGB_Data */
	si = m2c::segment_of_external(vga_rgb_data);
	/* mov	ds,si */
	m2c::set_segment_register(ds, si);
	/* mov	si,OFFSET VGA_RGB_Data */
	si = m2c::near_offset_external(vga_rgb_data);
	/* mov	di,SEG WorkScreen */
	di = m2c::segment_of_external(workscreen);
	/* mov	es,di */
	m2c::set_segment_register(es, di);
	/* mov	di,OFFSET WorkScreen */
	di = m2c::near_offset_external(workscreen);
	/* mov	cx,256*3	;256 * RGB */
	cx = 256*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 4035 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 4037 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 4038 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 4039 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 0 ;-------------------------
	// 0 ;* read current DAC values
	// 0 ;-------------------------
	/* mov	di,SEG VGA_RGB_Data */
	di = m2c::segment_of_external(vga_rgb_data);
	/* mov	es,di */
	m2c::set_segment_register(es, di);
	/* mov	di,OFFSET VGA_RGB_Data */
	di = m2c::near_offset_external(vga_rgb_data);
	/* xor	al,al		;start col 0 */
	XOR(al, al);
	/* mov	cx,256		;read all RGB values */
	cx = 256;
	/* call	ReadDACBlock */
	CALLF(readdacblock, 0);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	// 0 ;-------------------------
	// 0 ;* fade out loading screen
	// 0 ;-------------------------
	/* call	FadeOut */
	CALLF(fadeout, 0);
	// 0 ;------------------------------------
	// 0 ;* load palette data from work screen
	// 0 ;------------------------------------
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* mov	si,SEG WorkScreen */
	si = m2c::segment_of_external(workscreen);
	/* mov	ds,si */
	m2c::set_segment_register(ds, si);
	/* mov	si,OFFSET WorkScreen */
	si = m2c::near_offset_external(workscreen);
	/* mov	di,SEG VGA_RGB_Data */
	di = m2c::segment_of_external(vga_rgb_data);
	/* mov	es,di */
	m2c::set_segment_register(es, di);
	/* mov	di,OFFSET VGA_RGB_Data */
	di = m2c::near_offset_external(vga_rgb_data);
	/* mov	cx,256*3	;256 * RGB */
	cx = 256*3;
	/* shr	cx,1		;calc number of words to move */
	SHR(cx, 1);
	// 4071 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* rcl	cx,1		;remaining byte (if any) */
	RCL(cx, 1);
	// 4073 						rep	movsb
	/* rep	movsb */
	REP MOVSB;
	// 4074 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 4075 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETN(0);
checktimeout:
	// 4090 
	/* test	GlobalTimeout,1 ;* kill: assume all */
	TEST(globaltimeout, 1);
edummylabel8:
	// 4781 
	/* jz	SkipTimeout */
	if (ZF) {goto skiptimeout;}
	/* cli */
	CLI;
	/* mov	ax,WORD PTR ElapsedTime */
	ax = *(dw*)(&elapsedtime);
	/* mov	dx,WORD PTR ElapsedTime+2 */
	dx = *(dw*)(((db*)&elapsedtime)+2);
	/* sti */
	STI;
	/* cmp	dx,WORD PTR TimeLimit+2 */
	CMP(dx, *(dw*)(((db*)&timelimit)+2));
	/* jb	SkipTimeout */
	if ((dw)(dx) < (dw)(*(dw*)(((db*)&timelimit)+2))) {goto skiptimeout;}
	/* ja	@F */
	if ((dw)(dx) > (dw)(*(dw*)(((db*)&timelimit)+2))) {goto dummylabel28;}
	/* cmp	ax,WORD PTR TimeLimit */
	CMP(ax, *(dw*)(&timelimit));
	/* jb	SkipTimeout */
	if ((dw)(ax) < (dw)(*(dw*)(&timelimit))) {goto skiptimeout;}
dummylabel28:
	// 4783 
	/* @@:		mov	DieFlag,SYS_ERR_TIMEOUT */
	dieflag = 236;
skiptimeout:
	// 4785 
	/* SkipTimeout:	ret */
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
        case m2c::k__m2c_macrolocal_22_skip: 	goto __m2c_macrolocal_22_skip;
        case m2c::k__m2c_macrolocal_23_skip: 	goto __m2c_macrolocal_23_skip;
        case m2c::k__m2c_macrolocal_24_skip: 	goto __m2c_macrolocal_24_skip;
        case m2c::k__m2c_macrolocal_25_skip: 	goto __m2c_macrolocal_25_skip;
        case m2c::k__m2c_macrolocal_26_skip: 	goto __m2c_macrolocal_26_skip;
        case m2c::k__m2c_macrolocal_27_skip: 	goto __m2c_macrolocal_27_skip;
        case m2c::k__m2c_macrolocal_28_skip: 	goto __m2c_macrolocal_28_skip;
        case m2c::k__m2c_macrolocal_29_skip: 	goto __m2c_macrolocal_29_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_30_skip: 	goto __m2c_macrolocal_30_skip;
        case m2c::k__m2c_macrolocal_31_skip: 	goto __m2c_macrolocal_31_skip;
        case m2c::k__m2c_macrolocal_32_skip: 	goto __m2c_macrolocal_32_skip;
        case m2c::k__m2c_macrolocal_33_skip: 	goto __m2c_macrolocal_33_skip;
        case m2c::k__m2c_macrolocal_34_skip: 	goto __m2c_macrolocal_34_skip;
        case m2c::k__m2c_macrolocal_35_skip: 	goto __m2c_macrolocal_35_skip;
        case m2c::k__m2c_macrolocal_36_skip: 	goto __m2c_macrolocal_36_skip;
        case m2c::k__m2c_macrolocal_37_skip: 	goto __m2c_macrolocal_37_skip;
        case m2c::k__m2c_macrolocal_38_skip: 	goto __m2c_macrolocal_38_skip;
        case m2c::k__m2c_macrolocal_39_skip: 	goto __m2c_macrolocal_39_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_40_skip: 	goto __m2c_macrolocal_40_skip;
        case m2c::k__m2c_macrolocal_41_skip: 	goto __m2c_macrolocal_41_skip;
        case m2c::k__m2c_macrolocal_42_skip: 	goto __m2c_macrolocal_42_skip;
        case m2c::k__m2c_macrolocal_43_skip: 	goto __m2c_macrolocal_43_skip;
        case m2c::k__m2c_macrolocal_44_skip: 	goto __m2c_macrolocal_44_skip;
        case m2c::k__m2c_macrolocal_45_skip: 	goto __m2c_macrolocal_45_skip;
        case m2c::k__m2c_macrolocal_46_skip: 	goto __m2c_macrolocal_46_skip;
        case m2c::k__m2c_macrolocal_47_skip: 	goto __m2c_macrolocal_47_skip;
        case m2c::k__m2c_macrolocal_48_skip: 	goto __m2c_macrolocal_48_skip;
        case m2c::k__m2c_macrolocal_49_skip: 	goto __m2c_macrolocal_49_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_50_skip: 	goto __m2c_macrolocal_50_skip;
        case m2c::k__m2c_macrolocal_51_skip: 	goto __m2c_macrolocal_51_skip;
        case m2c::k__m2c_macrolocal_52_skip: 	goto __m2c_macrolocal_52_skip;
        case m2c::k__m2c_macrolocal_53_skip: 	goto __m2c_macrolocal_53_skip;
        case m2c::k__m2c_macrolocal_54_skip: 	goto __m2c_macrolocal_54_skip;
        case m2c::k__m2c_macrolocal_55_skip: 	goto __m2c_macrolocal_55_skip;
        case m2c::k__m2c_macrolocal_56_skip: 	goto __m2c_macrolocal_56_skip;
        case m2c::k__m2c_macrolocal_57_skip: 	goto __m2c_macrolocal_57_skip;
        case m2c::k__m2c_macrolocal_58_skip: 	goto __m2c_macrolocal_58_skip;
        case m2c::k__m2c_macrolocal_59_skip: 	goto __m2c_macrolocal_59_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
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
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_70_skip: 	goto __m2c_macrolocal_70_skip;
        case m2c::k__m2c_macrolocal_71_skip: 	goto __m2c_macrolocal_71_skip;
        case m2c::k__m2c_macrolocal_72_skip: 	goto __m2c_macrolocal_72_skip;
        case m2c::k__m2c_macrolocal_73_skip: 	goto __m2c_macrolocal_73_skip;
        case m2c::k__m2c_macrolocal_74_skip: 	goto __m2c_macrolocal_74_skip;
        case m2c::k__m2c_macrolocal_75_skip: 	goto __m2c_macrolocal_75_skip;
        case m2c::k__m2c_macrolocal_78_skip: 	goto __m2c_macrolocal_78_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kargloop: 	goto argloop;
        case m2c::kchecktimeout: 	goto checktimeout;
        case m2c::kcontrol: 	goto control;
        case m2c::kcontrolexit: 	goto controlexit;
        case m2c::kcontrolloop: 	goto controlloop;
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
        case m2c::kexitcmndline: 	goto exitcmndline;
        case m2c::kexitpause: 	goto exitpause;
        case m2c::kfadeloadscreen: 	goto fadeloadscreen;
        case m2c::kframesok: 	goto framesok;
        case m2c::kfullscreenflirandtiald: 	goto fullscreenflirandtiald;
        case m2c::khdgok: 	goto hdgok;
        case m2c::kinitcyclingdemo: 	goto initcyclingdemo;
        case m2c::kinitdemo: 	goto initdemo;
        case m2c::kinitflyingdemo: 	goto initflyingdemo;
        case m2c::kmaptest: 	goto maptest;
        case m2c::knextarg: 	goto nextarg;
        case m2c::knextxft: 	goto nextxft;
        case m2c::knextxsec: 	goto nextxsec;
        case m2c::knextyft: 	goto nextyft;
        case m2c::knextysec: 	goto nextysec;
        case m2c::kpausedone: 	goto pausedone;
        case m2c::kpauseloop: 	goto pauseloop;
        case m2c::kquitmaptest: 	goto quitmaptest;
        case m2c::kresizememory: 	goto resizememory;
        case m2c::krxdataok: 	goto rxdataok;
        case m2c::ksavedata: 	goto savedata;
        case m2c::ksetadcdamaged: 	goto setadcdamaged;
        case m2c::ksetadlib: 	goto setadlib;
        case m2c::ksetadlibmusic: 	goto setadlibmusic;
        case m2c::ksetairborne: 	goto setairborne;
        case m2c::ksetairbrakesdamaged: 	goto setairbrakesdamaged;
        case m2c::ksetairspeed: 	goto setairspeed;
        case m2c::ksetaltitude: 	goto setaltitude;
        case m2c::ksetbaudrate: 	goto setbaudrate;
        case m2c::ksetblastermusic: 	goto setblastermusic;
        case m2c::ksetcom1: 	goto setcom1;
        case m2c::ksetcom2: 	goto setcom2;
        case m2c::ksetdataexchange: 	goto setdataexchange;
        case m2c::ksetdemomode1: 	goto setdemomode1;
        case m2c::ksetdemomode2: 	goto setdemomode2;
        case m2c::ksetecmdamaged: 	goto setecmdamaged;
        case m2c::ksetengine1damaged: 	goto setengine1damaged;
        case m2c::ksetengine2damaged: 	goto setengine2damaged;
        case m2c::ksetexploremode: 	goto setexploremode;
        case m2c::ksetfadeout: 	goto setfadeout;
        case m2c::ksetflapsdamaged: 	goto setflapsdamaged;
        case m2c::ksetflightstick: 	goto setflightstick;
        case m2c::ksetfog: 	goto setfog;
        case m2c::ksetframerate: 	goto setframerate;
        case m2c::ksetgeardamaged: 	goto setgeardamaged;
        case m2c::ksetheading: 	goto setheading;
        case m2c::ksethuddamaged: 	goto sethuddamaged;
        case m2c::ksetinfinitefuel: 	goto setinfinitefuel;
        case m2c::ksetinfiniteg: 	goto setinfiniteg;
        case m2c::ksetinfinitewpns: 	goto setinfinitewpns;
        case m2c::ksetlighting: 	goto setlighting;
        case m2c::ksetmaptestmode: 	goto setmaptestmode;
        case m2c::ksetmaxframes: 	goto setmaxframes;
        case m2c::ksetmaxhdg: 	goto setmaxhdg;
        case m2c::ksetmaxspeed: 	goto setmaxspeed;
        case m2c::ksetmaxweight: 	goto setmaxweight;
        case m2c::ksetminframes: 	goto setminframes;
        case m2c::ksetminspeed: 	goto setminspeed;
        case m2c::ksetminweight: 	goto setminweight;
        case m2c::ksetnavigmfddamaged: 	goto setnavigmfddamaged;
        case m2c::ksetnight: 	goto setnight;
        case m2c::ksetnocollisions: 	goto setnocollisions;
        case m2c::ksetnomusic: 	goto setnomusic;
        case m2c::ksetnosound: 	goto setnosound;
        case m2c::ksetovercast: 	goto setovercast;
        case m2c::ksetpilotmfddamaged: 	goto setpilotmfddamaged;
        case m2c::ksetpreviewauto: 	goto setpreviewauto;
        case m2c::ksetpreviewmode: 	goto setpreviewmode;
        case m2c::ksetquickstart: 	goto setquickstart;
        case m2c::ksetradardamaged: 	goto setradardamaged;
        case m2c::ksetradartest: 	goto setradartest;
        case m2c::ksetroland: 	goto setroland;
        case m2c::ksetrolandmusic: 	goto setrolandmusic;
        case m2c::ksetrwrdamaged: 	goto setrwrdamaged;
        case m2c::ksetshake: 	goto setshake;
        case m2c::ksetsoundblaster: 	goto setsoundblaster;
        case m2c::ksetspdamaged: 	goto setspdamaged;
        case m2c::ksetspeaker: 	goto setspeaker;
        case m2c::ksetspeakermusic: 	goto setspeakermusic;
        case m2c::ksetsweepdamaged: 	goto setsweepdamaged;
        case m2c::ksettab1damaged: 	goto settab1damaged;
        case m2c::ksettab2damaged: 	goto settab2damaged;
        case m2c::ksetthrustmaster: 	goto setthrustmaster;
        case m2c::ksetthrustrevsdamaged: 	goto setthrustrevsdamaged;
        case m2c::ksettimeout: 	goto settimeout;
        case m2c::ksetvariant: 	goto setvariant;
        case m2c::ksetwbdamaged: 	goto setwbdamaged;
        case m2c::ksetweight: 	goto setweight;
        case m2c::ksetxsector: 	goto setxsector;
        case m2c::ksetxwinds: 	goto setxwinds;
        case m2c::ksetysector: 	goto setysector;
        case m2c::kskipquit: 	goto skipquit;
        case m2c::kskiptimeout: 	goto skiptimeout;
        case m2c::ksortcmndline: 	goto sortcmndline;
        case m2c::ksortpause: 	goto sortpause;
        case m2c::kspeedok: 	goto speedok;
        case m2c::kstoresok: 	goto storesok;
        case m2c::ktwoplayerloop: 	goto twoplayerloop;
        case m2c::ktwoplyrcontrol: 	goto twoplyrcontrol;
        case m2c::kweightok: 	goto weightok;
        default: return __dispatch_call(__disp, _state);
    };
}


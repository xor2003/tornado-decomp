/* THIS IS GENERATED FILE */

        
#include "tab.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
pancode_0_proc:
	// 3159 
	/* mov	si,OFFSET SetUp$ ;============================================================================ */
	si = m2c::near_offset_external(setupdol);
edummylabel1:
	// 4369 
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* UpdateTAB
	// 0 ;* UpdateTAB1 - update lhs TAB display
	// 0 ;* UpdateTAB2 - update rhs TAB display
	// 0 ;*
	// 0 ;* pass: nothing
	// 0 ;* ret : nothing
	// 0 ;* kill: assume all
updatetab1:
	// 4371 
	/* mov	si,OFFSET TAB1	;this TAB display */
	si = m2c::near_offset_external(tab1);
	/* mov	di,OFFSET TAB2	;other TAB display */
	di = m2c::near_offset_external(tab2);
	// 0 ;* update key flags
	/* mov	al,KF_TAB1Select */
	al = kf_tab1select;
	/* mov	TAB_SELECT[si],al */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_select), m2c::getdata(al));
	/* mov	al,KF_TAB1Toggle */
	al = kf_tab1toggle;
	/* mov	TAB_TOGGLE[si],al */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_toggle), m2c::getdata(al));
	// 0 ;DontDoAnything:
	/* jmp	UpdateTAB */
	goto updatetab;
updatetab2:
	// 4373 
	/* mov	si,OFFSET TAB2	;this TAB display */
	si = m2c::near_offset_external(tab2);
	/* mov	di,OFFSET TAB1	;other TAB display */
	di = m2c::near_offset_external(tab1);
	// 0 ;* update key flags
	/* mov	al,KF_TAB2Select */
	al = kf_tab2select;
	/* mov	TAB_SELECT[si],al */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_select), m2c::getdata(al));
	/* mov	al,KF_TAB2Toggle */
	al = kf_tab2toggle;
	/* mov	TAB_TOGGLE[si],al */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_toggle), m2c::getdata(al));
	/* jmp	UpdateTAB */
	goto updatetab;
	// 0 ;@@:
updatetab:
	// 3191 
	// 0 ;-----------------
	// 0 ;* set origin vars
	// 0 ;-----------------
edummylabel2:
	// 4375 
	/* mov	ax,TAB_X_ORG[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	XOrg,ax */
	xorg = ax;
	/* mov	al,TAB_Y_ORG[si] */
	al = m2c::getdata(((tab*)raddr(ds,si))->tab_y_org);
	/* mov	YOrg,al */
	*(yorg) = al;
	// 0 ;---------------------------------
	// 0 ;* set char sprite clipping window
	// 0 ;---------------------------------
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	CellXMin,ax */
	cellxmin = ax;
	/* add	ax,TAB_WIDTH */
	ADD(ax, 96);
	/* dec	ax */
	DEC(ax);
	/* mov	CellXMax,ax */
	cellxmax = ax;
	/* mov	ax,WORD PTR YOrg */
	ax = *(dw*)(yorg);
	/* mov	CellYMin,ax */
	cellymin = ax;
	/* add	ax,TAB_DEPTH */
	ADD(ax, 72);
	/* dec	ax */
	DEC(ax);
	/* mov	CellYMax,ax */
	cellymax = ax;
	// 0 ;-----------------------
	// 0 ;* test for TAB on / off
	// 0 ;-----------------------
	/* test	TAB_TOGGLE[si],1	;toggle TAB on / off */
	TEST(((tab*)raddr(ds,si))->tab_toggle, 1);
	/* jz	@F			;no -> */
	if (!(((tab*)raddr(ds,si))->tab_toggle & 1)) {goto dummylabel1;}
	/* xor	TAB_STATUS[si],1	;toggle */
	XOR(((tab*)raddr(ds,si))->tab_status, 1);
	/* mov	TAB_SELECT[si],0	;cancel select request */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_select), m2c::getdata(0));
dummylabel1:
	// 4377 
	/* @@:		test	TAB_STATUS[si],1	;TAB on? */
	TEST(((tab*)raddr(ds,si))->tab_status, 1);
	/* jnz	__m2c_macrolocal_88_skip */
	if ((((tab*)raddr(ds,si))->tab_status & 1) != 0) {goto __m2c_macrolocal_88_skip;}
	/* jmp	SwitchedOff */
	goto switchedoff;
__m2c_macrolocal_88_skip:
	// 4379 
	// 0 ;no ->
	// 0 ;----------------------
	// 0 ;* test for damaged TAB
	// 0 ;----------------------
	/* mov	bx,TAB_SSF_PTR[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1 */
	TEST(*(raddr(ds,bx)), 1);
	/* jz	__m2c_macrolocal_89_skip */
	if (!(*(raddr(ds,bx)) & 1)) {goto __m2c_macrolocal_89_skip;}
	/* jmp	Damaged */
	goto damaged;
__m2c_macrolocal_89_skip:
	// 4381 
	// 0 ;---------------------------------------------------------------------------
	// 0 ;* test for mode confliction with other TAB display (ie. when just turned on)
	// 0 ;---------------------------------------------------------------------------
	/* mov	bp,-1			;assume off or damaged */
	bp = -1;
	/* test	TAB_STATUS[di],1	;other TAB display on? */
	TEST(((tab*)raddr(ds,di))->tab_status, 1);
	/* jz	@F			;no, mode not valid -> */
	if (!(((tab*)raddr(ds,di))->tab_status & 1)) {goto dummylabel2;}
	/* mov	bx,TAB_SSF_PTR[di] */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,di))->tab_ssf_ptr)));
	/* test	BYTE PTR [bx],1		;other TAB display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	@F			;yes, mode not valid -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto dummylabel2;}
	/* mov	bp,TAB_MODE[di] */
	bp = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,di))->tab_mode)));
	/* cmp	bp,TAB_MODE[si]		;same mode? */
	CMP(bp, *(dw*)(((db*)&((tab*)raddr(ds,si))->tab_mode)));
	/* jne	@F			;no -> */
	if ((dw)(bp) != (dw)(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_mode)))) {goto dummylabel2;}
	/* mov	TAB_SELECT[si],1	;set select request */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_select), m2c::getdata(1));
	/* jmp	ContSelect */
	goto contselect;
	// 0 ;* check for confliction with MFD display (moving map is mutually exclusive)
dummylabel2:
	// 4383 
	/* @@:		cmp	[si].TAB_MODE,TAB_MAP	;moving map selected? */
	CMP(*((dw*)((db*)&((tab*)raddr(ds,si))->tab_mode)), 2);
	/* jne	ContSelect		;no -> */
	if ((dw)(*((dw*)((db*)&((tab*)raddr(ds,si))->tab_mode))) != (dw)(2)) {goto contselect;}
	/* cmp	NAVIG_MFD.MFD_MODE,MFD_MAP	;moving map selected? */
	CMP(navig_mfd.mfd_mode, 0);
	/* jne	ContSelect			;no -> */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(0)) {goto contselect;}
	/* test	NAVIG_MFD.MFD_STATUS,1	;Nav's MFD on? */
	TEST(navig_mfd.mfd_status, 1);
	/* jz	ContSelect		;no -> */
	if (!(navig_mfd.mfd_status & 1)) {goto contselect;}
	/* mov	bx,NAVIG_MFD.MFD_SSF_PTR */
	bx = navig_mfd.mfd_ssf_ptr;
	/* test	BYTE PTR [bx],1		;Nav's display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* jnz	ContSelect		;yes -> */
	if ((*(raddr(ds,bx)) & 1) != 0) {goto contselect;}
	/* mov	[si].TAB_SELECT,1	;set select request */
	m2c::setdata(&(*((db*)((db*)&((tab*)raddr(ds,si))->tab_select))), m2c::getdata(1));
	// 0 ;--------------------------
	// 0 ;* test for select TAB mode
	// 0 ;--------------------------
contselect:
	// 4385 
	/* ContSelect:	mov	bx,TAB_MODE[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_mode)));
	/* test	TAB_SELECT[si],1	;select mode? */
	TEST(((tab*)raddr(ds,si))->tab_select, 1);
	/* jz	SortMode		;no -> */
	if (!(((tab*)raddr(ds,si))->tab_select & 1)) {goto sortmode;}
	// 0 ; TAB.ASM(818): warning A6003: conditional jump lengthened : by 29 byte(s)
selectnext:
	// 4387 
	/* add	bx,2 */
	ADD(bx, 2);
	/* cmp	bx,bp		;same mode as other TAB display? */
	CMP(bx, bp);
	/* je	SelectNext	;yes, skip same mode -> */
	if ((dw)(bx) == (dw)(bp)) {goto selectnext;}
	// 0 ;-------------------------------------------------------------------------------------------------------
	// 0 ; This section was written by Frankie Kam on 17 December 2017
	// 0 ; This switch-case like construct is to avoid the Tab1 and Tab2 from showing up in these combinations:
	// 0 ; TAB1               TAB2
	// 0 ; ====               ====
	// 0 ; FLIR               FLIR full-screen
	// 0 ; FLIR full-screen   FLIR
	// 0 ; TIALD              TIALD full-screen
	// 0 ; TIALD full-screen  TIALD
	// 0 ;
	// 0 ; Refer to Line 353 (reproduced below)
	// 0 ;
	// 0 ; SelectSwitch	DW	SelectModeOk	;TAB_PLN
	// 0 ;		DW	SelectMap	  ;TAB_MAP
	// 0 ;		DW	SelectModeOk  ;TAB_REF
	// 0 ;		DW	SelectModeOk  ;TAB_FLIR  (original)
	// 0 ;		DW	SelectTIALD	  ;TAB_TIALD (original)
	// 0 ;		DW	SelectModeOk  ;TAB_FLIR  (full-screen)
	// 0 ;		DW	SelectTIALD	  ;TAB_TIALD (full-screen)
	// 0 ;		DW	SelectRadar	  ;TAB_RADAR
	// 0 ;		DW	SelectLoopBack;TAB_LOOPBACK
	// 0 ;---------------------------------------------------------------------------------------------------------
	/* cmp bx,TAB_FLIR_ORI ;10 */
	CMP(bx, 8);
	/* jne NextCondition3 */
	if ((dw)(bx) != (dw)(8)) {goto nextcondition3;}
	/* cmp bp,TAB_FLIR ;6 */
	CMP(bp, 6);
	/* je	SelectNext */
	if ((dw)(bp) == (dw)(6)) {goto selectnext;}
nextcondition3:
	// 4389 
	/* cmp bx,TAB_FLIR ;6 */
	CMP(bx, 6);
	/* jne NextCondition4 */
	if ((dw)(bx) != (dw)(6)) {goto nextcondition4;}
	/* cmp bp,TAB_FLIR_ORI ;10 */
	CMP(bp, 8);
	/* je	SelectNext */
	if ((dw)(bp) == (dw)(8)) {goto selectnext;}
nextcondition4:
	// 4391 
	/* cmp bx,TAB_TIALD ;8 */
	CMP(bx, 10);
	/* jne NextCondition5 */
	if ((dw)(bx) != (dw)(10)) {goto nextcondition5;}
	/* cmp bp,TAB_TIALD_ORI;12 */
	CMP(bp, 12);
	/* je	SelectNext */
	if ((dw)(bp) == (dw)(12)) {goto selectnext;}
nextcondition5:
	// 4393 
	/* cmp bx,TAB_TIALD_ORI ;12 */
	CMP(bx, 12);
	/* jne GoAheadSelect */
	if ((dw)(bx) != (dw)(12)) {goto goaheadselect;}
	/* cmp bp,TAB_TIALD ;8 */
	CMP(bp, 10);
	/* je	SelectNext */
	if ((dw)(bp) == (dw)(10)) {goto selectnext;}
goaheadselect:
	// 4395 
	// 0 ;Show full-screen FLIR and TIALDS only if the /fs flag is used. For example, C:\>TORNADO /fs
	/* cmp FullScreen,1 */
	CMP(fullscreen, 1);
	/* jne	__m2c_macrolocal_90_skip */
	if ((dw)(fullscreen) != (dw)(1)) {goto __m2c_macrolocal_90_skip;}
	/* jmp	GetOutHere */
	goto getouthere;
__m2c_macrolocal_90_skip:
	// 4397 
	/* cmp bx,TAB_FLIR_ORI ;6 */
	CMP(bx, 8);
	/* jne CheckTab */
	if ((dw)(bx) != (dw)(8)) {goto checktab;}
	/* add bx, 4 */
	ADD(bx, 4);
	/* jmp GetOutHere */
	goto getouthere;
checktab:
	// 4399 
	/* cmp bx,TAB_TIALD_ORI ;6 */
	CMP(bx, 12);
	/* jne CheckTab2 */
	if ((dw)(bx) != (dw)(12)) {goto checktab2;}
	/* add bx, 2 */
	ADD(bx, 2);
	/* jmp GetOutHere */
	goto getouthere;
checktab2:
	// 4401 
	/* cmp bp,TAB_FLIR_ORI ;6 */
	CMP(bp, 8);
	/* jne CheckTab3 */
	if ((dw)(bp) != (dw)(8)) {goto checktab3;}
	/* add bp, 4 */
	ADD(bp, 4);
checktab3:
	// 4403 
	/* cmp bp,TAB_TIALD_ORI ;6 */
	CMP(bp, 12);
	/* jne GetOutHere */
	if ((dw)(bp) != (dw)(12)) {goto getouthere;}
	/* add bp, 2 */
	ADD(bp, 2);
getouthere:
	// 4405 
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;* only select TAB_MAP if moving map not displayed on Nav's MFD
selectmap:
	// 4407 
	/* SelectMap:	cmp	NAVIG_MFD.MFD_MODE,MFD_MAP	;moving map selected? */
	CMP(navig_mfd.mfd_mode, 0);
	/* jne	@F				;no -> */
	if ((dw)(navig_mfd.mfd_mode) != (dw)(0)) {goto dummylabel3;}
	/* test	NAVIG_MFD.MFD_STATUS,1	;Nav's MFD on? */
	TEST(navig_mfd.mfd_status, 1);
	/* jz	@F			;no -> */
	if (!(navig_mfd.mfd_status & 1)) {goto dummylabel3;}
	/* push	bx */
	PUSH(bx);
	/* mov	bx,NAVIG_MFD.MFD_SSF_PTR */
	bx = navig_mfd.mfd_ssf_ptr;
	/* test	BYTE PTR [bx],1		;Nav's display damaged? */
	TEST(*(raddr(ds,bx)), 1);
	/* pop	bx */
	POP(bx);
	/* jz	SelectNext		;no -> */
	if (ZF) {goto selectnext;}
dummylabel3:
	// 4409 
	/* @@:		jmp	SelectModeOk */
	goto selectmodeok;
	// 0 ;* do not select TAB_TIALD if ADV (IDS / ECR only)
selecttiald:
	// 4411 
	/* cmp	TornadoType,ADV_TORNADO */
	CMP(tornadotype, 2);
	/* je	SelectNext */
	if ((dw)(tornadotype) == (dw)(2)) {goto selectnext;}
	// 0 ; TAB.ASM(912): warning A6003: conditional jump lengthened : by 2 byte(s)
	/* jmp	SelectModeOk */
	goto selectmodeok;
	// 0 ;* only select TAB_RADAR if radar test enabled
selectradar:
	// 4413 
	/* SelectRadar:	test	RadarTest,1 */
	TEST(radartest, 1);
	/* jz	SelectNext */
	if (!(radartest & 1)) {goto selectnext;}
	// 0 ; TAB.ASM(919): warning A6003: conditional jump lengthened : by 14 byte(s)
	/* jmp	SelectModeOk */
	goto selectmodeok;
	// 0 ;* loop back to first TAB mode
selectloopback:
	// 4415 
	/* SelectLoopBack:	mov	bx,-2 */
	bx = -2;
	/* jmp	SelectNext */
	goto selectnext;
selectmodeok:
	// 4417 
	/* SelectModeOk:	mov	TAB_MODE[si],bx */
	m2c::setdata(&(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_mode))), m2c::getdata(bx));
	// 0 ;-------------------
	// 0 ;* sort display mode
	// 0 ;-------------------
	// 0 ;* sort mouse required flag (do this every frame in case TAB auto-switches)
sortmode:
	// 4419 
	/* SortMode:	shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,TABMouseFlags[bx] */
	al = *((&tabmouseflags)+bx);
	/* mov	TAB_REQ_MOUSE[si],al */
	m2c::setdata(&(((tab*)raddr(ds,si))->tab_req_mouse), m2c::getdata(al));
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* test	al,al		;mouse required? */
	TEST(al, al);
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel4;}
	/* call	StealMouse */
	CALL(stealmouse, 0);
dummylabel4:
	// 4421 
	/* @@:		mov	TABPtr,si */
	tabptr = si;
	/* call	DispSwitch[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&dispswitch)+bx));
	/* ret */
	RETN(0);
	// 0 ;------------------
	// 0 ;* TAB switched off
	// 0 ;------------------
switchedoff:
	// 4423 
	/* SwitchedOff:	call	ClearDisp */
	CALL(cleardisp, 0);
	/* ret */
	RETN(0);
	// 0 ;-------------
	// 0 ;* damaged TAB
	// 0 ;-------------
damaged:
	// 4425 
	/* Damaged:	call	DamagedDisp */
	CALL(damageddisp, 0);
	/* ret */
	RETN(0);
stealmouse:
	// 3412 
	/* push	bx ;* note: Registers bx, si and di must be preserved. */
	PUSH(bx);
edummylabel3:
	// 4427 
	/* test	TAB_HAS_MOUSE.[si],1	;does TAB already have mouse? */
	TEST(*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)), 1);
	/* jnz	ExitSteal		;yes -> */
	if ((*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)) & 1) != 0) {goto exitsteal;}
	// 0 ;-----------------------------------------
	// 0 ;* attempt to steal from other TAB display
	// 0 ;-----------------------------------------
	/* test	TAB_HAS_MOUSE.[di],1	;does other TAB have mouse? */
	TEST(*((db*)((db*)&((tab*)raddr(ds,di))->tab_has_mouse)), 1);
	/* jz	@F			;no -> */
	if (!(*((db*)((db*)&((tab*)raddr(ds,di))->tab_has_mouse)) & 1)) {goto dummylabel5;}
	// 0 ;* mouse available if not required by other TAB, or other TAB is switched off or damaged
	/* mov	al,TAB_STATUS.[di] */
	al = m2c::getdata(*((db*)((db*)&((tab*)raddr(ds,di))->tab_status)));
	/* and	al,TAB_REQ_MOUSE.[di]	;required and on? */
	AND(al, *((db*)((db*)&((tab*)raddr(ds,di))->tab_req_mouse)));
	/* mov	bx,TAB_SSF_PTR.[di] */
	bx = m2c::getdata(*((dw*)((db*)&((tab*)raddr(ds,di))->tab_ssf_ptr)));
	/* mov	ah,[bx] */
	ah = m2c::getdata(*(raddr(ds,bx)));
	/* not	ah	    	;0ffh = ok, 0feh = damaged */
	ah = ~ah;
	/* and	al,ah		;required and on and not damaged? */
	AND(al, ah);
	/* jz	ContSteal	;no, steal mouse -> */
	if (al == 0) {goto contsteal;}
	/* jmp	ExitSteal */
	goto exitsteal;
	// 0 ;-----------------------------------------------
	// 0 ;* attempt to steal from Navigator's MFD display
	// 0 ;-----------------------------------------------
dummylabel5:
	// 4429 
	/* @@:		test	NAVIG_MFD.MFD_HAS_MOUSE,1	;does Nav's MFD have mouse? */
	TEST(navig_mfd.mfd_has_mouse, 1);
	/* jz	ContSteal  			;no (error, steal anyway) -> */
	if (!(navig_mfd.mfd_has_mouse & 1)) {goto contsteal;}
	// 0 ;* mouse available if not required by Nav's MFD, or Nav's MFD is switched off or damaged
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
	/* jz	ContSteal	;no, steal mouse -> */
	if (al == 0) {goto contsteal;}
	/* jmp	ExitSteal */
	goto exitsteal;
	// 0 ;-------------
	// 0 ;* steal mouse
	// 0 ;-------------
contsteal:
	// 4431 
	/* ContSteal:   	mov	TAB_HAS_MOUSE.[si],1 */
	m2c::setdata(&(*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse))), m2c::getdata(1));
	/* mov	TAB_HAS_MOUSE.[di],0 */
	m2c::setdata(&(*((db*)((db*)&((tab*)raddr(ds,di))->tab_has_mouse))), m2c::getdata(0));
	/* mov	NAVIG_MFD.MFD_HAS_MOUSE,0 */
	navig_mfd.mfd_has_mouse = 0;
exitsteal:
	// 4433 
	/* ExitSteal:	pop	bx */
	POP(bx);
	/* ret */
	RETN(0);
routeplandisp:
	// 3479 
	// 0 ;		test	QuieterCockpit,1	;in cockpit?
	// 0 ;		jnz @F ;->yes
	// 0 ;		jmp GoOverHereMann2
	// 0 ;@@:
edummylabel4:
	// 4435 
	/* call	ClearDisp */
	CALL(cleardisp, 0);
	// 0 ;-----------------
	// 0 ;* sort plan scale
	// 0 ;-----------------
	// 0 ;* assume Tornado off map or < 2 waypoints (set limits to display entire map)
	/* mov	al,0		;x min */
	al = 0;
	/* mov	ah,31		;x max */
	ah = 31;
	/* mov	dl,0		;y min */
	dl = 0;
	/* mov	dh,31		;y max */
	dh = 31;
	/* mov	cx,WayTotal */
	cx = waytotal;
	/* cmp	cx,2 */
	CMP(cx, 2);
	/* jb	ContPLNScale	;< 2 waypoints -> */
	if ((dw)(cx) < (dw)(2)) {goto contplnscale;}
	// 0 ;* if Tornado on active map then
	// 0 ;*    select scale considering Tornado position and floating waypoint
	// 0 ;* else
	// 0 ;*    select scale to display entire map
	// 0 ;* endif
	/* cmp	M_VIEW.VP_XSEC,31	;xsec on map? */
	CMP(m_view.vp_xsec, 31);
	/* ja	ContPLNScale	   	;no -> */
	if ((dw)(m_view.vp_xsec) > (dw)(31)) {goto contplnscale;}
	/* cmp	M_VIEW.VP_YSEC,31	;ysec on map? */
	CMP(m_view.vp_ysec, 31);
	/* ja	ContPLNScale	   	;no -> */
	if ((dw)(m_view.vp_ysec) > (dw)(31)) {goto contplnscale;}
	/* mov	al,BYTE PTR M_VIEW.VP_XSEC */
	al = m_view.vp_xsec;
	/* mov	ah,al */
	ah = al;
	/* mov	dl,BYTE PTR M_VIEW.VP_YSEC */
	dl = m_view.vp_ysec;
	/* mov	dh,dl */
	dh = dl;
	/* test	FloatWP.WP_ATTR,WP_VALID	;floating waypoint valid? */
	TEST(floatwp.wp_attr, 0x80);
	/* jz	StartScan			;no -> */
	if (!(floatwp.wp_attr & 0x80)) {goto startscan;}
	/* cmp	FloatWP.WP_XSEC,31	;xsec on map? */
	CMP(floatwp.wp_xsec, 31);
	/* ja	StartScan	   	;no -> */
	if ((dw)(floatwp.wp_xsec) > (dw)(31)) {goto startscan;}
	/* cmp	FloatWP.WP_YSEC,31	;ysec on map? */
	CMP(floatwp.wp_ysec, 31);
	/* ja	StartScan	   	;no -> */
	if ((dw)(floatwp.wp_ysec) > (dw)(31)) {goto startscan;}
	// 0 ;* x min = min(x min, xsec)
	/* cmp	al,BYTE PTR FloatWP.WP_XSEC */
	CMP(al, floatwp.wp_xsec);
	/* jbe	@F */
	if ((db)(al) <= (db)(floatwp.wp_xsec)) {goto dummylabel6;}
	/* mov	al,BYTE PTR FloatWP.WP_XSEC */
	al = floatwp.wp_xsec;
	// 0 ;* x max = max(x max, xsec)
dummylabel6:
	// 4437 
	/* @@:		cmp	ah,BYTE PTR FloatWP.WP_XSEC */
	CMP(ah, floatwp.wp_xsec);
	/* jae	@F */
	if ((db)(ah) >= (db)(floatwp.wp_xsec)) {goto dummylabel7;}
	/* mov	ah,BYTE PTR FloatWP.WP_XSEC */
	ah = floatwp.wp_xsec;
	// 0 ;* y min = min(y min, ysec)
dummylabel7:
	// 4439 
	/* @@:		cmp	dl,BYTE PTR FloatWP.WP_YSEC */
	CMP(dl, floatwp.wp_ysec);
	/* jbe	@F */
	if ((db)(dl) <= (db)(floatwp.wp_ysec)) {goto dummylabel8;}
	/* mov	dl,BYTE PTR FloatWP.WP_YSEC */
	dl = floatwp.wp_ysec;
	// 0 ;* y max = max(y max, ysec)
dummylabel8:
	// 4441 
	/* @@:		cmp	dh,BYTE PTR FloatWP.WP_YSEC */
	CMP(dh, floatwp.wp_ysec);
	/* jae	StartScan */
	if ((db)(dh) >= (db)(floatwp.wp_ysec)) {goto startscan;}
	/* mov	dh,BYTE PTR FloatWP.WP_YSEC */
	dh = floatwp.wp_ysec;
startscan:
	// 4443 
	/* StartScan:	mov	si,OFFSET WayList */
	si = m2c::near_offset_external(waylist);
	// 0 ;* x min = min(x min, xsec)
scanwploop:
	// 4445 
	/* ScanWPLoop:	cmp	al,BYTE PTR WP_XSEC[si] */
	CMP(al, *(db*)&((waypoint*)raddr(ds,si))->wp_xsec);
	/* jbe	@F */
	if ((db)(al) <= (db)(*(db*)&((waypoint*)raddr(ds,si))->wp_xsec)) {goto dummylabel9;}
	/* mov	al,BYTE PTR WP_XSEC[si] */
	al = m2c::getdata(*(db*)&((waypoint*)raddr(ds,si))->wp_xsec);
	// 0 ;* x max = max(x max, xsec)
dummylabel9:
	// 4447 
	/* @@:		cmp	ah,BYTE PTR WP_XSEC[si] */
	CMP(ah, *(db*)&((waypoint*)raddr(ds,si))->wp_xsec);
	/* jae	@F */
	if ((db)(ah) >= (db)(*(db*)&((waypoint*)raddr(ds,si))->wp_xsec)) {goto dummylabel10;}
	/* mov	ah,BYTE PTR WP_XSEC[si] */
	ah = m2c::getdata(*(db*)&((waypoint*)raddr(ds,si))->wp_xsec);
	// 0 ;* y min = min(y min, ysec)
dummylabel10:
	// 4449 
	/* @@:		cmp	dl,BYTE PTR WP_YSEC[si] */
	CMP(dl, *(db*)&((waypoint*)raddr(ds,si))->wp_ysec);
	/* jbe	@F */
	if ((db)(dl) <= (db)(*(db*)&((waypoint*)raddr(ds,si))->wp_ysec)) {goto dummylabel11;}
	/* mov	dl,BYTE PTR WP_YSEC[si] */
	dl = m2c::getdata(*(db*)&((waypoint*)raddr(ds,si))->wp_ysec);
	// 0 ;* y max = max(y max, ysec)
dummylabel11:
	// 4451 
	/* @@:		cmp	dh,BYTE PTR WP_YSEC[si] */
	CMP(dh, *(db*)&((waypoint*)raddr(ds,si))->wp_ysec);
	/* jae	@F */
	if ((db)(dh) >= (db)(*(db*)&((waypoint*)raddr(ds,si))->wp_ysec)) {goto dummylabel12;}
	/* mov	dh,BYTE PTR WP_YSEC[si] */
	dh = m2c::getdata(*(db*)&((waypoint*)raddr(ds,si))->wp_ysec);
dummylabel12:
	// 4453 
	/* @@:		add	si,WAY_REC_SIZE	;next waypoint */
	ADD(si, 16);
	/* loop	ScanWPLoop */
	LOOP(scanwploop);
	// 0 ;* calc Dx, Dy
contplnscale:
	// 4455 
	/* ContPLNScale:	sub	ah,al		;Dx = x max - x min */
	SUB(ah, al);
	/* sub	dh,dl		;Dy = y max - y min */
	SUB(dh, dl);
	// 0 ;* calc max(Dx, Dy)
	/* mov	cl,ah		;assume Dx >= Dy */
	cl = ah;
	/* cmp	ah,dh		;Dx >= Dy? */
	CMP(ah, dh);
	/* jae	@F		;yes -> */
	if ((db)(ah) >= (db)(dh)) {goto dummylabel13;}
	/* mov	cl,dh */
	cl = dh;
dummylabel13:
	// 4457 
	/* @@:		mov	bx,PLN_SCALE3	;assume PLN_SCALE3 */
	bx = 4;
	/* cmp	cl,9		;inside 9 * 9 sectors? */
	CMP(cl, 9);
	/* jb	@F		;yes -> */
	if ((db)(cl) < (db)(9)) {goto dummylabel14;}
	/* mov	bx,PLN_SCALE2	;assume PLN_SCALE2 */
	bx = 2;
	/* cmp	cl,17		;inside 17 * 17 sectors? */
	CMP(cl, 17);
	/* jb	@F		;yes -> */
	if ((db)(cl) < (db)(17)) {goto dummylabel14;}
	/* mov	bx,PLN_SCALE1	;default PLN_SCALE1 */
	bx = 0;
dummylabel14:
	// 4459 
	/* @@:		mov	PLNScale,bx */
	plnscale = bx;
	// 0 ;---------------------
	// 0 ;* calc centre offsets (place 0,0 of middle sector at viewport centre)
	// 0 ;---------------------
	// 0 ;* x centre = (x min + Dx / 2) * 256 + 128
	/* shr	ah,1		;Dx / 2 */
	SHR(ah, 1);
	/* adc	ah,al		;(x min + Dx / 2) * 256 (+ 1/2 bit) */
	ADC(ah, al);
	/* mov	al,128		;(x min + Dx / 2) * 256 + 128 */
	al = 128;
	/* mov	PLNXCentre,ax */
	plnxcentre = ax;
	// 0 ;* y centre = (31 - (y min + Dy / 2)) * 256 + 128
	/* shr	dh,1		;Dy / 2 */
	SHR(dh, 1);
	/* adc	dl,dh		;Dy / 2 + y min (+ 1/2 bit) */
	ADC(dl, dh);
	/* mov	dh,31 */
	dh = 31;
	/* sub	dh,dl		;(31 - (y min + Dy / 2)) * 256 */
	SUB(dh, dl);
	/* mov	dl,128		;(31 - (y min + Dy / 2)) * 256 + 128 */
	dl = 128;
	/* mov	PLNYCentre,dx */
	plnycentre = dx;
	// 0 ;---------------
	// 0 ;* init viewport
	// 0 ;---------------
	/* mov	ax,XOrg */
	ax = xorg;
	/* mov	VP.V_X_ORG,ax */
	vp.v_x_org = ax;
	/* mov	al,YOrg */
	al = *(yorg);
	/* mov	BYTE PTR VP.V_Y_ORG,al */
	vp.v_y_org = al;
	/* mov	VP.V_WIDTH,TAB_WIDTH */
	vp.v_width = 96;
	/* mov	VP.V_DEPTH,TAB_DEPTH */
	vp.v_depth = 72;
	/* mov	bx,PLNScale */
	bx = plnscale;
	/* mov	al,PLNScaleTable[bx+0] */
	al = *((plnscaletable)+bx+0);
	/* mov	VP.V_SCALE_UP,al */
	vp.v_scale_up = al;
	/* mov	al,PLNScaleTable[bx+1] */
	al = *((plnscaletable)+bx+1);
	/* mov	VP.V_SCALE_DN,al */
	vp.v_scale_dn = al;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	si,OFFSET VP */
	si = m2c::near_offset_external(vp);
	/* call	VSetViewport */
	CALLF(vsetviewport, 0);
	// 0 ;-----------
	// 0 ;* draw grid
	// 0 ;-----------
	// 0 ;* draw vertical lines every 4 sectors (through sector centre)
	// 0 ;*
	// 0 ;* offset = -(PLNXCentre and 00300h)
	// 0 ;*
	// 0 ;* x = -(5k + offset)
	// 0 ;*
	// 0 ;* for vline = 1 to 11
	// 0 ;*    Xe[0] = x
	// 0 ;*    Ye[0] = +8k
	// 0 ;*    Xe[2] = x
	// 0 ;*    Ye[2] = -8k
	// 0 ;*    clip and draw line
	// 0 ;*    x += 1k
	// 0 ;* next vline
	// 0 ;		test	QuieterCockpit,1	;in cockpit?
	// 0 ;		jnz @F ;->yes
	// 0 ;		jmp GoOverHereMann3
	// 0 ;@@:
	/* mov	ax,PLNXCentre */
	ax = plnxcentre;
	/* and	ax,00300h */
	AND(ax, 0x00300);
	/* add	ax,5120 */
	ADD(ax, 5120);
	/* neg	ax */
	NEG(ax);
	/* mov	cx,11 */
	cx = 11;
xgridloop:
	// 4461 
	/* XGridLoop:	push	ax */
	PUSH(ax);
	/* push	cx */
	PUSH(cx);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	Ye[0],+8192 */
	*(dw*)(((db*)&ye)+0) = 8192;
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	Ye[2],-8192 */
	*(dw*)(((db*)&ye)+2) = -8192;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel15;}
	/* mov	al,COL_CRT2 */
	al = 161;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel15:
	// 4463 
	/* @@:		pop	cx */
	POP(cx);
	/* pop	ax */
	POP(ax);
	/* add	ax,1024 */
	ADD(ax, 1024);
	/* loop	XGridLoop */
	LOOP(xgridloop);
	// 0 ;* draw horizontal lines every 4 sectors (through sector centre)
	// 0 ;*
	// 0 ;* offset = -(PLNYCentre and 00300h)
	// 0 ;*
	// 0 ;* y = -(5k + offset)
	// 0 ;*
	// 0 ;* for hline = 1 to 11
	// 0 ;*    Xe[0] = -8k
	// 0 ;*    Ye[0] = y
	// 0 ;*    Xe[2] = +8k
	// 0 ;*    Ye[2] = y
	// 0 ;*    clip and draw line
	// 0 ;* next x
	/* mov	ax,PLNYCentre */
	ax = plnycentre;
	/* and	ax,00300h */
	AND(ax, 0x00300);
	/* add	ax,5120 */
	ADD(ax, 5120);
	/* neg	ax */
	NEG(ax);
	/* mov	cx,11 */
	cx = 11;
ygridloop:
	// 4465 
	/* YGridLoop:	push	ax */
	PUSH(ax);
	/* push	cx */
	PUSH(cx);
	/* mov	Xe[0],-8192 */
	*(dw*)(((db*)&xe)+0) = -8192;
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	Xe[2],+8192 */
	*(dw*)(((db*)&xe)+2) = 8192;
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel16;}
	/* mov	al,COL_CRT2 */
	al = 161;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel16:
	// 4467 
	/* @@:		pop	cx */
	POP(cx);
	/* pop	ax */
	POP(ax);
	/* add	ax,1024 */
	ADD(ax, 1024);
	/* loop	YGridLoop */
	LOOP(ygridloop);
	// 0 ;GoOverHereMann3:
	// 0 ;-----------------
	// 0 ;* draw route legs (if visible)
	// 0 ;-----------------
	/* mov	cx,WayTotal */
	cx = waytotal;
	/* test	cx,cx */
	TEST(cx, cx);
	/* jnz	__m2c_macrolocal_91_skip */
	if ((cx & cx) != 0) {goto __m2c_macrolocal_91_skip;}
	/* jmp	DrawFloatWP */
	goto drawfloatwp;
__m2c_macrolocal_91_skip:
	// 4469 
	// 0 ;no waypoints ->
	/* dec	cx		;num legs */
	DEC(cx);
	/* jz	DrawWPMarkers	;single waypoint -> */
	if (cx == 0) {goto drawwpmarkers;}
	/* mov	si,OFFSET WayList */
	si = m2c::near_offset_external(waylist);
	/* mov	di,OFFSET WayList+WAY_REC_SIZE */
	di = m2c::near_offset_external(waylist)+16;
dummylabel17:
	// 4471 
	/* @@:		push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* call	DrawLeg */
	CALL(drawleg, 0);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,WAY_REC_SIZE */
	ADD(si, 16);
	/* add	di,WAY_REC_SIZE */
	ADD(di, 16);
	/* loop	@B */
	LOOP(dummylabel17);
	// 0 ;* check for "linked" route leg and draw if exists
	/* mov	cx,WayTotal	;WayTotal >= 2 */
	cx = waytotal;
	/* mov	si,-1		;null ptr */
	si = -1;
	/* mov	di,-1		;null ptr */
	di = -1;
	/* mov	bx,OFFSET WayList */
	bx = m2c::near_offset_external(waylist);
linkloop:
	// 4473 
	/* LinkLoop:	test	WP_ATTR[bx],WP_LINK	;link back? */
	TEST(((waypoint*)raddr(ds,bx))->wp_attr, 0x2);
	/* jz	@F			;no -> */
	if (!(((waypoint*)raddr(ds,bx))->wp_attr & 0x2)) {goto dummylabel18;}
	/* mov	si,bx */
	si = bx;
dummylabel18:
	// 4475 
	/* @@:		test	WP_ATTR[bx],WP_HERE	;link back to here? */
	TEST(((waypoint*)raddr(ds,bx))->wp_attr, 0x4);
	/* jz	@F			;no -> */
	if (!(((waypoint*)raddr(ds,bx))->wp_attr & 0x4)) {goto dummylabel19;}
	/* mov	di,bx */
	di = bx;
dummylabel19:
	// 4477 
	/* @@:		add	bx,WAY_REC_SIZE	;next waypoint */
	ADD(bx, 16);
	/* loop	LinkLoop */
	LOOP(linkloop);
	/* cmp	si,-1		;link ptr valid? */
	CMP(si, -1);
	/* je	DrawWPMarkers	;no -> */
	if ((dw)(si) == (dw)(-1)) {goto drawwpmarkers;}
	/* cmp	di,-1		;here ptr valid? */
	CMP(di, -1);
	/* je	DrawWPMarkers	;no -> */
	if ((dw)(di) == (dw)(-1)) {goto drawwpmarkers;}
	/* call	DrawLeg */
	CALL(drawleg, 0);
	// 0 ;-----------------------
	// 0 ;* draw waypoint markers (if visible)
	// 0 ;-----------------------
drawwpmarkers:
	// 4479 
	/* DrawWPMarkers:	mov	cx,WayTotal */
	cx = waytotal;
	/* mov	si,OFFSET WayList */
	si = m2c::near_offset_external(waylist);
	/* mov	di,-1		;assume no current marker */
	di = -1;
wpmarkerloop:
	// 4481 
	/* WPMarkerLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* mov	cl,6		;/64 */
	cl = 6;
	/* mov	ax,WP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,BYTE PTR WP_XSEC[si] */
	ah = m2c::getdata(*(db*)&((waypoint*)raddr(ds,si))->wp_xsec);
	/* sub	ax,PLNXCentre */
	SUB(ax, plnxcentre);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,WP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,31 */
	ah = 31;
	/* sub	ah,BYTE PTR WP_YSEC[si] */
	SUB(ah, *(db*)&((waypoint*)raddr(ds,si))->wp_ysec);
	/* sub	ax,PLNYCentre */
	SUB(ax, plnycentre);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* push	si */
	PUSH(si);
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* pop	si */
	POP(si);
	/* jc	SkipWPMarker	;non-visible -> */
	if (CF) {goto skipwpmarker;}
	/* cmp	si,WPPtr	;current waypoint? */
	CMP(si, wpptr);
	/* jne	@F		;no -> */
	if ((dw)(si) != (dw)(wpptr)) {goto dummylabel20;}
	// 0 ;* store current waypoint marker data, and draw last (to prevent overwriting)
	/* pop	di */
	POP(di);
	/* mov	di,si */
	di = si;
	/* push	di */
	PUSH(di);
	/* mov	TmpX,cx */
	tmpx = cx;
	/* mov	TmpY,bx */
	tmpy = bx;
	/* jmp	SkipWPMarker */
	goto skipwpmarker;
dummylabel20:
	// 4483 
	/* @@:		mov	al,COL_CRT10 */
	al = 169;
	/* mov	dl,WP_ID[si] */
	dl = m2c::getdata(((waypoint*)raddr(ds,si))->wp_id);
	/* call	CharSprite */
	CALLF(charsprite, 0);
skipwpmarker:
	// 4485 
	/* SkipWPMarker:	pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,WAY_REC_SIZE	;next waypoint */
	ADD(si, 16);
	/* loop	WPMarkerLoop */
	LOOP(wpmarkerloop);
	// 0 ;* draw current waypoint marker (if any)
	/* cmp	di,-1		;any current waypoint marker? */
	CMP(di, -1);
	/* je	DrawFloatWP	;no -> */
	if ((dw)(di) == (dw)(-1)) {goto drawfloatwp;}
	/* mov	cx,TmpX */
	cx = tmpx;
	/* mov	bx,TmpY */
	bx = tmpy;
	/* mov	al,COL_CRT16 */
	al = 175;
	/* mov	dl,WP_ID[di] */
	dl = m2c::getdata(((waypoint*)raddr(ds,di))->wp_id);
	/* call	CharSprite */
	CALLF(charsprite, 0);
	// 0 ;------------------------
	// 0 ;* mark floating waypoint (if valid)
	// 0 ;------------------------
drawfloatwp:
	// 4487 
	/* DrawFloatWP:	test	FloatWP.WP_ATTR,WP_VALID	;floating waypoint valid? */
	TEST(floatwp.wp_attr, 0x80);
	/* jz	DrawPosMarker			;no -> */
	if (!(floatwp.wp_attr & 0x80)) {goto drawposmarker;}
	/* cmp	FloatWP.WP_XSEC,31	;xsec on map? */
	CMP(floatwp.wp_xsec, 31);
	/* ja	DrawPosMarker	   	;no -> */
	if ((dw)(floatwp.wp_xsec) > (dw)(31)) {goto drawposmarker;}
	/* cmp	FloatWP.WP_YSEC,31	;ysec on map? */
	CMP(floatwp.wp_ysec, 31);
	/* ja	DrawPosMarker	   	;no -> */
	if ((dw)(floatwp.wp_ysec) > (dw)(31)) {goto drawposmarker;}
	/* mov	cl,6		;/64 */
	cl = 6;
	/* mov	ax,FloatWP.WP_XFT */
	ax = floatwp.wp_xft;
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,BYTE PTR FloatWP.WP_XSEC */
	ah = floatwp.wp_xsec;
	/* sub	ax,PLNXCentre */
	SUB(ax, plnxcentre);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,FloatWP.WP_YFT */
	ax = floatwp.wp_yft;
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,31 */
	ah = 31;
	/* sub	ah,BYTE PTR FloatWP.WP_YSEC */
	SUB(ah, floatwp.wp_ysec);
	/* sub	ax,PLNYCentre */
	SUB(ax, plnycentre);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	DrawPosMarker	;non-visible -> */
	if (CF) {goto drawposmarker;}
	/* mov	al,COL_CRT10	;assume not selected */
	al = 169;
	/* cmp	WPPtr,OFFSET FloatWP	;selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	@F			;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto dummylabel21;}
	/* mov	al,COL_CRT16 */
	al = 175;
dummylabel21:
	// 4489 
	/* @@:		mov	dl,FloatWP.WP_ID */
	dl = floatwp.wp_id;
	/* call	CharSprite */
	CALLF(charsprite, 0);
	// 0 ;----------------------
	// 0 ;* mark current postion
	// 0 ;----------------------
	// 0 ;* check if on map or nearly on map (cannot display if too far off map)
drawposmarker:
	// 4491 
	/* DrawPosMarker:	cmp	M_VIEW.VP_XSEC,32+4 */
	CMP(m_view.vp_xsec, 32+4);
	/* jg	@F */
	if ((short)(m_view.vp_xsec) > (short)(32+4)) {goto dummylabel22;}
	/* cmp	M_VIEW.VP_XSEC,-4 */
	CMP(m_view.vp_xsec, -4);
	/* jl	@F */
	if ((short)(m_view.vp_xsec) < (short)(-4)) {goto dummylabel22;}
	/* cmp	M_VIEW.VP_YSEC,32+4 */
	CMP(m_view.vp_ysec, 32+4);
	/* jg	@F */
	if ((short)(m_view.vp_ysec) > (short)(32+4)) {goto dummylabel22;}
	/* cmp	M_VIEW.VP_YSEC,-4 */
	CMP(m_view.vp_ysec, -4);
	/* jl	@F */
	if ((short)(m_view.vp_ysec) < (short)(-4)) {goto dummylabel22;}
	/* mov	cl,6		;/64 */
	cl = 6;
	/* mov	ax,M_VIEW.VP_XFT */
	ax = m_view.vp_xft;
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,BYTE PTR M_VIEW.VP_XSEC */
	ah = m_view.vp_xsec;
	/* sub	ax,PLNXCentre */
	SUB(ax, plnxcentre);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,M_VIEW.VP_YFT */
	ax = m_view.vp_yft;
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,31 */
	ah = 31;
	/* sub	ah,BYTE PTR M_VIEW.VP_YSEC */
	SUB(ah, m_view.vp_ysec);
	/* sub	ax,PLNYCentre */
	SUB(ax, plnycentre);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* call	VDotClip */
	CALLF(vdotclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel22;}
	/* mov	al,COL_CRT16 */
	al = 175;
	/* mov	si,OFFSET CRTRing1 */
	si = m2c::near_offset_external(crtring1);
	/* call	CellSprite */
	CALLF(cellsprite, 0);
	// 0 ;-----------------------------
	// 0 ;* display waypoint statistics
	// 0 ;-----------------------------
dummylabel22:
	// 4493 
	/* @@:		mov	si,OFFSET WPSetUp$ */
	si = m2c::near_offset_external(wpsetupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* cmp	WayTotal,0	;any waypoints? */
	CMP(waytotal, 0);
	/* ja	@F		;yes -> */
	if ((dw)(waytotal) > (dw)(0)) {goto dummylabel23;}
	/* cmp	WPPtr,OFFSET FloatWP	;floating waypoint selected? */
	CMP(wpptr, m2c::near_offset_external(floatwp));
	/* jne	WPInvalid1		;no -> */
	if ((dw)(wpptr) != (dw)(m2c::near_offset_external(floatwp))) {goto wpinvalid1;}
dummylabel23:
	// 4495 
	/* @@:		mov	si,OFFSET WPRng$ */
	si = m2c::near_offset_external(wprngdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET WPBrg$ */
	si = m2c::near_offset_external(wpbrgdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* cmp	WPETA,-1	;ETA valid? */
	CMP(wpeta, -1);
	/* je	WPInvalid2	;no -> */
	if ((dw)(wpeta) == (dw)(-1)) {goto wpinvalid2;}
	/* mov	si,OFFSET WPETA$ */
	si = m2c::near_offset_external(wpetadol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* jmp	RoutePlanExit */
	goto routeplanexit;
wpinvalid1:
	// 4497 
	/* WPInvalid1:	mov	si,OFFSET WPRngInvalid$ */
	si = m2c::near_offset_external(wprnginvaliddol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET WPBrgInvalid$ */
	si = m2c::near_offset_external(wpbrginvaliddol);
	/* call	Print$ */
	CALLF(printdol, 0);
wpinvalid2:
	// 4499 
	/* WPInvalid2: 	mov	si,OFFSET WPETAInvalid$ */
	si = m2c::near_offset_external(wpetainvaliddol);
	/* call	Print$ */
	CALLF(printdol, 0);
routeplanexit:
	// 4501 
	/* RoutePlanExit:	ret */
	RETN(0);
drawleg:
	// 3901 
	/* mov	cl,6		;/64 */
	cl = 6;
edummylabel5:
	// 4503 
	/* mov	ax,WP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_xft)));
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,BYTE PTR WP_XSEC[si] */
	ah = m2c::getdata(*(db*)&((waypoint*)raddr(ds,si))->wp_xsec);
	/* sub	ax,PLNXCentre */
	SUB(ax, plnxcentre);
	/* mov	Xe[0],ax */
	*(dw*)(((db*)&xe)+0) = ax;
	/* mov	ax,WP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,si))->wp_yft)));
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,31 */
	ah = 31;
	/* sub	ah,BYTE PTR WP_YSEC[si] */
	SUB(ah, *(db*)&((waypoint*)raddr(ds,si))->wp_ysec);
	/* sub	ax,PLNYCentre */
	SUB(ax, plnycentre);
	/* mov	Ye[0],ax */
	*(dw*)(((db*)&ye)+0) = ax;
	/* mov	ax,WP_XFT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_xft)));
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,BYTE PTR WP_XSEC[di] */
	ah = m2c::getdata(*(db*)&((waypoint*)raddr(ds,di))->wp_xsec);
	/* sub	ax,PLNXCentre */
	SUB(ax, plnxcentre);
	/* mov	Xe[2],ax */
	*(dw*)(((db*)&xe)+2) = ax;
	/* mov	ax,WP_YFT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((waypoint*)raddr(ds,di))->wp_yft)));
	/* add	ax,8192		;0 .. 16383 */
	ADD(ax, 8192);
	/* shr	ax,cl		;0 .. 255 */
	SHR(ax, cl);
	/* mov	ah,31 */
	ah = 31;
	/* sub	ah,BYTE PTR WP_YSEC[di] */
	SUB(ah, *(db*)&((waypoint*)raddr(ds,di))->wp_ysec);
	/* sub	ax,PLNYCentre */
	SUB(ax, plnycentre);
	/* mov	Ye[2],ax */
	*(dw*)(((db*)&ye)+2) = ax;
	/* call	VQuickLineClip */
	CALLF(vquicklineclip, 0);
	/* jc	@F		;non-visible -> */
	if (CF) {goto dummylabel24;}
	/* mov	al,COL_CRT5 */
	al = 164;
	/* mov	cx,XCrt[0] */
	cx = *(dw*)(((db*)&xcrt)+0);
	/* mov	bl,YCrt[0] */
	bl = *((&ycrt)+0);
	/* mov	dx,XCrt[2] */
	dx = *(dw*)(((db*)&xcrt)+2);
	/* mov	bh,YCrt[2] */
	bh = *((&ycrt)+2);
	/* call	LineDraw */
	CALLF(linedraw, 0);
dummylabel24:
	// 4505 
	/* @@:		ret */
	RETN(0);
mapdisp:
	// 3947 
	// 0 ;-----------------
	// 0 ;* update map zoom
	// 0 ;-----------------
edummylabel6:
	// 4507 
	/* mov	al,BYTE PTR KF_MapZoomIn[K_STATUS] */
	al = *((&kf_mapzoomin)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_mapzoomin)+k_status););	// 3955 						mov	al,BYTE PTR KF_MapZoomIn[K_STATUS] */
	/* jz	SkipZoomIn */
	if (!(al & al)) {goto skipzoomin;}
	/* cmp	MapZoom,MAP_ZOOM6	;fully zoomed in? */
	CMP(mapzoom, map_zoom6);
	/* je	SkipZoomIn		;yes -> */
	if ((dw)(mapzoom) == (dw)(map_zoom6)) {goto skipzoomin;}
	/* add	MapZoom,2 */
	ADD(mapzoom, 2);
	/* jmp	SkipZoomOut */
	goto skipzoomout;
skipzoomin:
	// 4509 
	/* SkipZoomIn:	mov	al,BYTE PTR KF_MapZoomOut[K_STATUS] */
	al = *((&kf_mapzoomout)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_mapzoomout)+k_status););	// 3963 mov	al,BYTE PTR KF_MapZoomOut[K_STATUS] */
	/* jz	SkipZoomOut */
	if (!(al & al)) {goto skipzoomout;}
	/* cmp	MapZoom,MAP_ZOOM1	;fully zoomed out? */
	CMP(mapzoom, map_zoom1);
	/* je	SkipZoomOut		;yes -> */
	if ((dw)(mapzoom) == (dw)(map_zoom1)) {goto skipzoomout;}
	/* sub	MapZoom,2 */
	SUB(mapzoom, 2);
	// 0 ;-------------------
	// 0 ;* update map origin
	// 0 ;-------------------
skipzoomout:
	// 4511 
	/* SkipZoomOut:	mov	al,BYTE PTR KF_MapOrigin[K_STATUS] */
	al = *((&kf_maporigin)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_maporigin)+k_status););	// 3974 mov	al,BYTE PTR KF_MapOrigin[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel25;}
	/* xor	MapOrigin,MAP_ORG_BASE */
	XOR(maporigin, map_org_base);
	// 0 ;----------
	// 0 ;* draw map
	// 0 ;----------
dummylabel25:
	// 4513 
	/* @@:		mov	ax,MAP_TAB_DISP */
	ax = map_tab_disp;
	/* cmp	CrewMode,CREW_NAVIG */
	CMP(crewmode, 2);
	/* jne @F */
	if ((dw)(crewmode) != (dw)(2)) {goto dummylabel26;}
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* jmp Conthere */
	goto conthere;
dummylabel26:
	// 4515 
	/* mov	cx,0 */
	cx = 0;
	/* mov	bl,0 */
	bl = 0;
conthere:
	// 4517 
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	dx,MapZoom */
	dx = mapzoom;
	/* mov	bp,MapOrigin */
	bp = maporigin;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* call	UpdateMovingMap */
	CALLF(updatemovingmap, 0);
	// 0 ;--------------------------
	// 0 ;* display current waypoint
	// 0 ;--------------------------
	/* mov	cx,CurrentWPX */
	cx = currentwpx;
	/* mov	bx,CurrentWPY */
	bx = currentwpy;
	/* cmp	cx,-1		;valid? */
	CMP(cx, -1);
	/* je	@F		;no -> */
	if ((dw)(cx) == (dw)(-1)) {goto dummylabel27;}
	/* cmp	bx,-1		;valid? */
	CMP(bx, -1);
	/* je	@F		;no -> */
	if ((dw)(bx) == (dw)(-1)) {goto dummylabel27;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bx,WORD PTR YOrg */
	ADD(bx, *(dw*)(yorg));
	/* mov	si,WPPtr */
	si = wpptr;
	/* mov	dl,[si].WP_ID */
	dl = m2c::getdata(*((db*)((db*)&((waypoint*)raddr(ds,si))->wp_id)));
	// 0 ;mov	al,COL_MAP_SYM
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je setcolourhudd1 */
	if ((dw)(nvg_set) == (dw)(1)) {goto setcolourhudd1;}
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* jmp zxs1 */
	goto zxs1;
setcolourhudd1:
	// 4519 
	/* mov	al,COL_HUD */
	al = 133;
zxs1:
	// 4521 
	/* call	CharSprite */
	CALLF(charsprite, 0);
	// 0 ;----------------
	// 0 ;* draw hdg datum (wrt origin)
	// 0 ;----------------
dummylabel27:
	// 4523 
	/* cmp	CrewMode,CREW_NAVIG */
	CMP(crewmode, 2);
	/* jne @F */
	if ((dw)(crewmode) != (dw)(2)) {goto dummylabel28;}
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC */
	ADD(cx, 96/2);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* jmp Conthere2 */
	goto conthere2;
dummylabel28:
	// 4525 
	/* mov	cx,0 */
	cx = 0;
	/* add	cx,XC */
	ADD(cx, 96/2);
	/* mov	bl,0 */
	bl = 0;
conthere2:
	// 4527 
	/* mov	dx,TAB_DEPTH/2	;assume MAP_ORG_BASE */
	dx = 72/2;
	/* cmp	MapOrigin,MAP_ORG_BASE	;base origin? */
	CMP(maporigin, map_org_base);
	/* je	@F			;yes -> */
	if ((dw)(maporigin) == (dw)(map_org_base)) {goto dummylabel29;}
	/* mov	dx,TAB_DEPTH/4 */
	dx = 72/4;
dummylabel29:
	// 4529 
	/* @@:		push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	// 0 ;mov	al,COL_MAP_SYM
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je setcolourhudd2 */
	if ((dw)(nvg_set) == (dw)(1)) {goto setcolourhudd2;}
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* jmp zxs2 */
	goto zxs2;
setcolourhudd2:
	// 4531 
	/* mov	al,COL_HUD */
	al = 133;
zxs2:
	// 4533 
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	bl,2 */
	ADD(bl, 2);
	/* dec	dx */
	DEC(dx);
	/* jnz	@B */
	if (dx != 0) {goto dummylabel29;}
	/* dec	cx */
	DEC(cx);
	/* sub	bl,2 */
	SUB(bl, 2);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	// 0 ;mov	al,COL_MAP_SYM
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je setcolourhudd3 */
	if ((dw)(nvg_set) == (dw)(1)) {goto setcolourhudd3;}
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* jmp zxs3 */
	goto zxs3;
setcolourhudd3:
	// 4535 
	/* mov	al,COL_HUD */
	al = 133;
zxs3:
	// 4537 
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* add	cx,2 */
	ADD(cx, 2);
	// 0 ;mov	al,COL_MAP_SYM
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je setcolourhudd4 */
	if ((dw)(nvg_set) == (dw)(1)) {goto setcolourhudd4;}
	/* mov	al,COL_MAP_SYM */
	al = 0;
	/* jmp zxs4 */
	goto zxs4;
setcolourhudd4:
	// 4539 
	/* mov	al,COL_HUD */
	al = 133;
zxs4:
	// 4541 
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
refdisp:
	// 4119 
	/* mov	RefDesignated,0	;assume no designation made */
	*(refdesignated) = 0;
	// 0 ;------------------
	// 0 ;* read mouse input
	// 0 ;------------------
edummylabel7:
	// 4543 
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* je	__m2c_macrolocal_95_skip */
	if ((dw)(disableinput) == (dw)(0)) {goto __m2c_macrolocal_95_skip;}
	/* jmp	DrawRefMap */
	goto drawrefmap;
__m2c_macrolocal_95_skip:
	// 4545 
	// 0 ;yes ->
	/* test	QuieterCockpit,1	;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz @F ;->yes */
	if ((quietercockpit & 1) != 0) {goto dummylabel30;}
	/* jmp GoOverHereMann */
	goto gooverheremann;
dummylabel30:
	// 4547 
	/* test	[si].TAB_HAS_MOUSE,1	;mouse available? */
	TEST(*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)), 1);
	/* jnz	__m2c_macrolocal_96_skip */
	if ((*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)) & 1) != 0) {goto __m2c_macrolocal_96_skip;}
	/* jmp	DrawRefMap */
	goto drawrefmap;
__m2c_macrolocal_96_skip:
	// 4549 
	// 0 ;no ->
gooverheremann:
	// 4551 
	/* call	ReadMouseMotion */
	CALLF(readmousemotion, 0);
	// 0 ;* note: al = 1 = lhs button pressed
	// 0 ;*       ah = 1 = rhs button pressed
	// 0 ;*       cx = XMickeys (-32768 .. 32767)
	// 0 ;*       bx = YMickeys (-32768 .. 32767)
	// 0 ;*       dl = 1 = lhs button just pressed
	// 0 ;*       dh = 1 = rhs button just pressed
	// 0 ;----------------------
	// 0 ;* sort locate aircraft
	// 0 ;----------------------
	/* test	Key[K_ALT],dl	;locate aircraft? */
	TEST(*((&key)+56), dl);
	/* jz	@F		;no -> */
	if (!(*((&key)+56) & dl)) {goto dummylabel31;}
	// 0 ;* locate aircraft
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET REF_VIEW */
	di = m2c::near_offset_external(ref_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 4160 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 4161 						mov	si,OFFSET M_VIEW */
	// 4162 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;* reset mouse buttons
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* jmp	ContRefSlew */
	goto contrefslew;
	// 0 ;--------------------
	// 0 ;* sort locate target
	// 0 ;--------------------
dummylabel31:
	// 4553 
	/* @@:		test	Key[K_ALT],dh	;locate target? */
	TEST(*((&key)+56), dh);
	/* jz	@F		;no -> */
	if (!(*((&key)+56) & dh)) {goto dummylabel32;}
	// 0 ;* locate target (if valid)
	/* test	FloatWP.WP_ATTR,WP_VALID	;valid? */
	TEST(floatwp.wp_attr, 0x80);
	/* jz	@F				;no -> */
	if (!(floatwp.wp_attr & 0x80)) {goto dummylabel32;}
	/* mov	ax,FloatWP.WP_XSEC */
	ax = floatwp.wp_xsec;
	/* mov	REF_VIEW.VP_XSEC,ax */
	ref_view.vp_xsec = ax;
	/* mov	ax,FloatWP.WP_YSEC */
	ax = floatwp.wp_ysec;
	/* mov	REF_VIEW.VP_YSEC,ax */
	ref_view.vp_ysec = ax;
	/* mov	ax,FloatWP.WP_XFT */
	ax = floatwp.wp_xft;
	/* mov	REF_VIEW.VP_XFT,ax */
	ref_view.vp_xft = ax;
	/* mov	ax,FloatWP.WP_YFT */
	ax = floatwp.wp_yft;
	/* mov	REF_VIEW.VP_YFT,ax */
	ref_view.vp_yft = ax;
	// 0 ;* reset mouse buttons
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* jmp	ContRefSlew */
	goto contrefslew;
	// 0 ;-----------
	// 0 ;* sort zoom
	// 0 ;-----------
dummylabel32:
	// 4555 
	/* @@:		test	Key[K_CTRL],1	;update zoom? */
	TEST(*((&key)+29), 1);
	/* jz	ContRefSlew	;no -> */
	if (!(*((&key)+29) & 1)) {goto contrefslew;}
	/* test	dl,dl		;zoom in? */
	TEST(dl, dl);
	/* jnz	RefZoomIn	;yes -> */
	if ((dl & dl) != 0) {goto refzoomin;}
	/* test	dh,dh		;zoom out? */
	TEST(dh, dh);
	/* jnz	RefZoomOut	;yes -> */
	if ((dh & dh) != 0) {goto refzoomout;}
	/* jmp	RefZoomOk */
	goto refzoomok;
	// 0 ;* zoom in
refzoomin:
	// 4557 
	/* RefZoomIn:	cmp	RefZoom,MAP_ZOOM6	;fully zoomed in? */
	CMP(refzoom, map_zoom6);
	/* je	RefZoomOk		;yes -> */
	if ((dw)(refzoom) == (dw)(map_zoom6)) {goto refzoomok;}
	/* add	RefZoom,2 */
	ADD(refzoom, 2);
	/* jmp	RefZoomOk */
	goto refzoomok;
	// 0 ;* zoom out
refzoomout:
	// 4559 
	/* RefZoomOut:   	cmp	RefZoom,MAP_ZOOM1	;fully zoomed out? */
	CMP(refzoom, map_zoom1);
	/* je	RefZoomOk 	 	;yes -> */
	if ((dw)(refzoom) == (dw)(map_zoom1)) {goto refzoomok;}
	/* sub	RefZoom,2 */
	SUB(refzoom, 2);
	// 0 ;* reset mouse buttons
refzoomok:
	// 4561 
	/* RefZoomOk:	xor	ax,ax */
	XOR(ax, ax);
	/* xor	dx,dx */
	XOR(dx, dx);
	// 0 ;----------
	// 0 ;* slew map
	// 0 ;----------
	// 0 ;* @ MAP_ZOOM1 move 512ft / mickey
	// 0 ;* @ MAP_ZOOM2 move 256ft / mickey
	// 0 ;* @ MAP_ZOOM3 move 128ft / mickey
	// 0 ;* @ MAP_ZOOM4 move  64ft / mickey
	// 0 ;* @ MAP_ZOOM5 move  32ft / mickey
	// 0 ;* @ MAP_ZOOM6 move  16ft / mickey
contrefslew:
	// 4563 
	/* ContRefSlew:	push	dx		;store button status */
	PUSH(dx);
	/* mov	si,XMickeys */
	si = xmickeys;
	/* cmp	si,-255 */
	CMP(si, -255);
	/* jge	__m2c_macrolocal_98_TestHi */
	if ((short)(si) >= (short)(-255)) {goto __m2c_macrolocal_98_testhi;}
	/* mov	si,-255 */
	si = -255;
	/* jmp	__m2c_macrolocal_98_TestOk */
	goto __m2c_macrolocal_98_testok;
__m2c_macrolocal_98_testhi:
	// 4565 
	/* __m2c_macrolocal_98_TestHi:		cmp	si,255 */
	CMP(si, 255);
	/* jle	__m2c_macrolocal_98_TestOk */
	if ((short)(si) <= (short)(255)) {goto __m2c_macrolocal_98_testok;}
	/* mov	si,255 */
	si = 255;
__m2c_macrolocal_98_testok:
	// 4567 
	/* mov	di,YMickeys */
	di = ymickeys;
	/* cmp	di,-255 */
	CMP(di, -255);
	/* jge	__m2c_macrolocal_99_TestHi */
	if ((short)(di) >= (short)(-255)) {goto __m2c_macrolocal_99_testhi;}
	/* mov	di,-255 */
	di = -255;
	/* jmp	__m2c_macrolocal_99_TestOk */
	goto __m2c_macrolocal_99_testok;
__m2c_macrolocal_99_testhi:
	// 4569 
	/* __m2c_macrolocal_99_TestHi:		cmp	di,255 */
	CMP(di, 255);
	/* jle	__m2c_macrolocal_99_TestOk */
	if ((short)(di) <= (short)(255)) {goto __m2c_macrolocal_99_testok;}
	/* mov	di,255 */
	di = 255;
__m2c_macrolocal_99_testok:
	// 4571 
	/* neg	di */
	NEG(di);
	// 0 ;* yr = -YMickeys * cos(hdg) - XMickeys * sin(hdg)
	/* mov	ax,M_CosH */
	ax = m_cosh;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,M_SinH */
	ax = m_sinh;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* shl	bx,1		;1/2 bit round up */
	SHL(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* xr = XMickeys * cos(hdg) + YMickeys * sin(hdg)
	/* mov	ax,M_CosH */
	ax = m_cosh;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bp,ax */
	bp = ax;
	/* mov	si,dx */
	si = dx;
	/* mov	ax,M_SinH */
	ax = m_sinh;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,si */
	ADC(dx, si);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	// 0 ;* scale up (wrt zoom)
	/* mov	bp,18 */
	bp = 18;
	/* sub	bp,RefZoom		;18 .. 8 step 2 */
	SUB(bp, refzoom);
	/* shr	bp,1			; 9 .. 4 */
	SHR(bp, 1);
dummylabel33:
	// 4573 
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* rcl	cx,1 */
	RCL(cx, 1);
	/* dec	bp */
	DEC(bp);
	/* jnz	@B */
	if (bp != 0) {goto dummylabel33;}
	/* mov	si,OFFSET REF_VIEW */
	si = m2c::near_offset_external(ref_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	// 0 ;* keep viewpoint on active map
	/* cmp	REF_VIEW.VP_XSEC,0 */
	CMP(ref_view.vp_xsec, 0);
	/* jge	@F */
	if ((short)(ref_view.vp_xsec) >= (short)(0)) {goto dummylabel34;}
	/* mov	REF_VIEW.VP_XSEC,0 */
	ref_view.vp_xsec = 0;
	/* mov	REF_VIEW.VP_XFT,-8192 */
	ref_view.vp_xft = -8192;
dummylabel34:
	// 4575 
	/* @@:		cmp	REF_VIEW.VP_XSEC,31 */
	CMP(ref_view.vp_xsec, 31);
	/* jle	@F */
	if ((short)(ref_view.vp_xsec) <= (short)(31)) {goto dummylabel35;}
	/* mov	REF_VIEW.VP_XSEC,31 */
	ref_view.vp_xsec = 31;
	/* mov	REF_VIEW.VP_XFT,8191 */
	ref_view.vp_xft = 8191;
dummylabel35:
	// 4577 
	/* @@:		cmp	REF_VIEW.VP_YSEC,0 */
	CMP(ref_view.vp_ysec, 0);
	/* jge	@F */
	if ((short)(ref_view.vp_ysec) >= (short)(0)) {goto dummylabel36;}
	/* mov	REF_VIEW.VP_YSEC,0 */
	ref_view.vp_ysec = 0;
	/* mov	REF_VIEW.VP_YFT,8191 */
	ref_view.vp_yft = 8191;
dummylabel36:
	// 4579 
	/* @@:		cmp	REF_VIEW.VP_YSEC,31 */
	CMP(ref_view.vp_ysec, 31);
	/* jle	@F */
	if ((short)(ref_view.vp_ysec) <= (short)(31)) {goto dummylabel37;}
	/* mov	REF_VIEW.VP_YSEC,31 */
	ref_view.vp_ysec = 31;
	/* mov	REF_VIEW.VP_YFT,-8192 */
	ref_view.vp_yft = -8192;
dummylabel37:
	// 4581 
	/* @@:		pop	dx		;restore button status */
	POP(dx);
	// 0 ;---------------------------
	// 0 ;* test for cancel designate
	// 0 ;---------------------------
	/* test	dh,dh		;rh mouse button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel38;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* jmp	DrawRefMap */
	goto drawrefmap;
	// 0 ;---------------------------
	// 0 ;* test for target designate
	// 0 ;---------------------------
dummylabel38:
	// 4583 
	/* @@:		test	dl,dl		;lh mouse button just pressed? */
	TEST(dl, dl);
	/* jz	DrawRefMap	;no -> */
	if (!(dl & dl)) {goto drawrefmap;}
	/* mov	RefDesignated,1 */
	*(refdesignated) = 1;
	/* call	SnapGndObject */
	CALL(snapgndobject, 0);
	// 0 ;* update floating waypoint
	/* mov	ax,REF_VIEW.VP_XSEC */
	ax = ref_view.vp_xsec;
	/* mov	FloatWP.WP_XSEC,ax */
	floatwp.wp_xsec = ax;
	/* mov	ax,REF_VIEW.VP_YSEC */
	ax = ref_view.vp_ysec;
	/* mov	FloatWP.WP_YSEC,ax */
	floatwp.wp_ysec = ax;
	/* mov	ax,REF_VIEW.VP_XFT */
	ax = ref_view.vp_xft;
	/* mov	FloatWP.WP_XFT,ax */
	floatwp.wp_xft = ax;
	/* mov	ax,REF_VIEW.VP_YFT */
	ax = ref_view.vp_yft;
	/* mov	FloatWP.WP_YFT,ax */
	floatwp.wp_yft = ax;
	/* or	FloatWP.WP_ATTR,WP_VALID */
	OR(floatwp.wp_attr, 0x80);
	/* call	UpdateTgtWP		;tell AutoRoute */
	CALLF(updatetgtwp, 0);
	// 0 ;----------
	// 0 ;* draw map
	// 0 ;----------
drawrefmap:
	// 4585 
	/* mov	ax,M_VIEW.VP_HDG	;update hdg */
	ax = m_view.vp_hdg;
	/* mov	REF_VIEW.VP_HDG,ax */
	ref_view.vp_hdg = ax;
	/* mov	ax,MAP_TAB_DISP */
	ax = map_tab_disp;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* mov	dx,RefZoom */
	dx = refzoom;
	/* mov	bp,MAP_ORG_CENTRE */
	bp = map_org_centre;
	/* mov	si,OFFSET REF_VIEW */
	si = m2c::near_offset_external(ref_view);
	/* call	UpdateMovingMap */
	CALLF(updatemovingmap, 0);
	// 0 ;-------------------------------
	// 0 ;* draw floating waypoint symbol (if valid and visible)
	// 0 ;-------------------------------
	/* mov	cx,FloatWPX */
	cx = floatwpx;
	/* mov	bx,FloatWPY */
	bx = floatwpy;
	/* cmp	cx,-1		;x valid? */
	CMP(cx, -1);
	/* jne	__m2c_macrolocal_100_skip */
	if ((dw)(cx) != (dw)(-1)) {goto __m2c_macrolocal_100_skip;}
	/* jmp	SkipWPSymbol */
	goto skipwpsymbol;
__m2c_macrolocal_100_skip:
	// 4587 
	// 0 ;no ->
	/* cmp	bx,-1		;y valid? */
	CMP(bx, -1);
	/* jne	__m2c_macrolocal_101_skip */
	if ((dw)(bx) != (dw)(-1)) {goto __m2c_macrolocal_101_skip;}
	/* jmp	SkipWPSymbol */
	goto skipwpsymbol;
__m2c_macrolocal_101_skip:
	// 4589 
	// 0 ;no ->
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je putcolorhud1 */
	if ((dw)(nvg_set) == (dw)(1)) {goto putcolorhud1;}
	// 0 ; TAB.ASM(2176): warning A6003: conditional jump lengthened : by 296 byte(s)
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_102_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_102_skippixel;}
	/* add	bl,-4 */
	ADD(bl, -4);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_102_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_102_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_102_skippixel:
	// 4591 
	/* __m2c_macrolocal_102_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4395 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_103_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_103_skippixel;}
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_103_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_103_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_103_skippixel:
	// 4593 
	/* __m2c_macrolocal_103_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4410 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_104_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_104_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_104_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_104_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_104_skippixel:
	// 4595 
	/* __m2c_macrolocal_104_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4425 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_105_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_105_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_105_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_105_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_105_skippixel:
	// 4597 
	/* __m2c_macrolocal_105_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4440 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_106_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_106_skippixel;}
	/* add	bl,3 */
	ADD(bl, 3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_106_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_106_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_106_skippixel:
	// 4599 
	/* __m2c_macrolocal_106_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4455 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_107_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_107_skippixel;}
	/* add	bl,4 */
	ADD(bl, 4);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_107_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_107_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_107_skippixel:
	// 4601 
	/* __m2c_macrolocal_107_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4470 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-4 */
	ADD(cx, -4);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_108_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_108_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_108_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_108_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_108_skippixel:
	// 4603 
	/* __m2c_macrolocal_108_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4485 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_109_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_109_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_109_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_109_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_109_skippixel:
	// 4605 
	/* __m2c_macrolocal_109_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4500 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_110_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_110_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_110_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_110_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_110_skippixel:
	// 4607 
	/* __m2c_macrolocal_110_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4515 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_111_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_111_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_111_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_111_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_111_skippixel:
	// 4609 
	/* __m2c_macrolocal_111_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4530 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_112_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_112_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_112_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_112_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_112_skippixel:
	// 4611 
	/* __m2c_macrolocal_112_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4545 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,4 */
	ADD(cx, 4);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_113_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_113_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_113_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_113_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_113_skippixel:
	// 4613 
	/* __m2c_macrolocal_113_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4560 						call	SetPixel */
	/* jmp getout1 */
	goto getout1;
putcolorhud1:
	// 4615 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_114_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_114_skippixel;}
	/* add	bl,-4 */
	ADD(bl, -4);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_114_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_114_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_114_skippixel:
	// 4617 
	/* __m2c_macrolocal_114_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4577 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_115_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_115_skippixel;}
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_115_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_115_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_115_skippixel:
	// 4619 
	/* __m2c_macrolocal_115_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4592 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_116_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_116_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_116_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_116_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_116_skippixel:
	// 4621 
	/* __m2c_macrolocal_116_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4607 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_117_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_117_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_117_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_117_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_117_skippixel:
	// 4623 
	/* __m2c_macrolocal_117_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4622 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_118_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_118_skippixel;}
	/* add	bl,3 */
	ADD(bl, 3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_118_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_118_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_118_skippixel:
	// 4625 
	/* __m2c_macrolocal_118_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4637 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_119_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_119_skippixel;}
	/* add	bl,4 */
	ADD(bl, 4);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_119_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_119_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_119_skippixel:
	// 4627 
	/* __m2c_macrolocal_119_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4652 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-4 */
	ADD(cx, -4);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_120_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_120_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_120_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_120_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_120_skippixel:
	// 4629 
	/* __m2c_macrolocal_120_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4667 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_121_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_121_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_121_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_121_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_121_skippixel:
	// 4631 
	/* __m2c_macrolocal_121_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4682 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_122_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_122_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_122_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_122_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_122_skippixel:
	// 4633 
	/* __m2c_macrolocal_122_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4697 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_123_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_123_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_123_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_123_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_123_skippixel:
	// 4635 
	/* __m2c_macrolocal_123_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4712 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_124_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_124_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_124_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_124_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_124_skippixel:
	// 4637 
	/* __m2c_macrolocal_124_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4727 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,4 */
	ADD(cx, 4);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_125_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_125_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_125_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_125_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_125_skippixel:
	// 4639 
	/* __m2c_macrolocal_125_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4742 						call	SetPixel */
getout1:
	// 4641 
	// 0 ;----------------------------
	// 0 ;* draw aircraft datum symbol (if visible)
	// 0 ;----------------------------
skipwpsymbol:
	// 4643 
	/* mov	cx,ACDatumX */
	cx = acdatumx;
	/* mov	bx,ACDatumY */
	bx = acdatumy;
	/* cmp	cx,-1		;x valid? */
	CMP(cx, -1);
	/* jne	__m2c_macrolocal_126_skip */
	if ((dw)(cx) != (dw)(-1)) {goto __m2c_macrolocal_126_skip;}
	/* jmp	SkipACSymbol */
	goto skipacsymbol;
__m2c_macrolocal_126_skip:
	// 4645 
	// 0 ;no ->
	/* cmp	bx,-1		;y valid? */
	CMP(bx, -1);
	/* jne	__m2c_macrolocal_127_skip */
	if ((dw)(bx) != (dw)(-1)) {goto __m2c_macrolocal_127_skip;}
	/* jmp	SkipACSymbol */
	goto skipacsymbol;
__m2c_macrolocal_127_skip:
	// 4647 
	// 0 ;no ->
	// 0 ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je putcolorhud2 */
	if ((dw)(nvg_set) == (dw)(1)) {goto putcolorhud2;}
	// 0 ; TAB.ASM(2219): warning A6003: conditional jump lengthened : by 401 byte(s)
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_128_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_128_skippixel;}
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_128_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_128_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_128_skippixel:
	// 4649 
	/* __m2c_macrolocal_128_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4779 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_129_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_129_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_129_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_129_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_129_skippixel:
	// 4651 
	/* __m2c_macrolocal_129_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4794 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_130_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_130_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_130_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_130_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_130_skippixel:
	// 4653 
	/* __m2c_macrolocal_130_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4809 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_131_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_131_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_131_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_131_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_131_skippixel:
	// 4655 
	/* __m2c_macrolocal_131_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4824 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_132_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_132_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_132_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_132_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_132_skippixel:
	// 4657 
	/* __m2c_macrolocal_132_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4839 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_133_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_133_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_133_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_133_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_133_skippixel:
	// 4659 
	/* __m2c_macrolocal_133_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4854 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_134_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_134_skippixel;}
	/* add	bl,3 */
	ADD(bl, 3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_134_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_134_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_134_skippixel:
	// 4661 
	/* __m2c_macrolocal_134_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4869 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_135_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_135_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_135_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_135_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_135_skippixel:
	// 4663 
	/* __m2c_macrolocal_135_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4885 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_136_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_136_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_136_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_136_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_136_skippixel:
	// 4665 
	/* __m2c_macrolocal_136_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4900 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_137_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_137_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_137_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_137_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_137_skippixel:
	// 4667 
	/* __m2c_macrolocal_137_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4915 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_138_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_138_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_138_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_138_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_138_skippixel:
	// 4669 
	/* __m2c_macrolocal_138_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4930 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_139_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_139_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_139_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_139_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_139_skippixel:
	// 4671 
	/* __m2c_macrolocal_139_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4945 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_140_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_140_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_140_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_140_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_140_skippixel:
	// 4673 
	/* __m2c_macrolocal_140_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4960 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_141_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_141_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_141_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_141_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_141_skippixel:
	// 4675 
	/* __m2c_macrolocal_141_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4976 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_142_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_142_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_142_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_142_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_142_skippixel:
	// 4677 
	/* __m2c_macrolocal_142_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 4991 						call	SetPixel */
	/* jmp getout2 */
	goto getout2;
putcolorhud2:
	// 4679 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_143_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_143_skippixel;}
	/* add	bl,-3 */
	ADD(bl, -3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_143_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_143_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_143_skippixel:
	// 4681 
	/* __m2c_macrolocal_143_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5008 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_144_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_144_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_144_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_144_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_144_skippixel:
	// 4683 
	/* __m2c_macrolocal_144_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5023 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_145_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_145_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_145_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_145_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_145_skippixel:
	// 4685 
	/* __m2c_macrolocal_145_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5038 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_146_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_146_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_146_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_146_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_146_skippixel:
	// 4687 
	/* __m2c_macrolocal_146_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5053 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_147_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_147_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_147_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_147_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_147_skippixel:
	// 4689 
	/* __m2c_macrolocal_147_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5068 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_148_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_148_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_148_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_148_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_148_skippixel:
	// 4691 
	/* __m2c_macrolocal_148_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5083 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_149_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_149_skippixel;}
	/* add	bl,3 */
	ADD(bl, 3);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_149_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_149_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_149_skippixel:
	// 4693 
	/* __m2c_macrolocal_149_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5098 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-3 */
	ADD(cx, -3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_150_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_150_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_150_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_150_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_150_skippixel:
	// 4695 
	/* __m2c_macrolocal_150_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5114 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_151_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_151_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_151_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_151_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_151_skippixel:
	// 4697 
	/* __m2c_macrolocal_151_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5129 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_152_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_152_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_152_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_152_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_152_skippixel:
	// 4699 
	/* __m2c_macrolocal_152_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5144 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_153_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_153_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_153_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_153_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_153_skippixel:
	// 4701 
	/* __m2c_macrolocal_153_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5159 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_154_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_154_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_154_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_154_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_154_skippixel:
	// 4703 
	/* __m2c_macrolocal_154_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5174 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,3 */
	ADD(cx, 3);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_155_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_155_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_155_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_155_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_155_skippixel:
	// 4705 
	/* __m2c_macrolocal_155_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5189 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_156_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_156_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_156_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_156_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_156_skippixel:
	// 4707 
	/* __m2c_macrolocal_156_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5205 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_157_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_157_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_157_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_157_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_157_skippixel:
	// 4709 
	/* __m2c_macrolocal_157_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5220 						call	SetPixel */
getout2:
	// 4711 
	// 0 ;;;;;;;;;;;;;;;;;;;;
	// 0 ;------------------------
	// 0 ;* draw designator symbol
	// 0 ;------------------------
	// 0 ;* if just designated, adjust designator pos to match target waypoint pos
skipacsymbol:
	// 4713 
	/* test	RefDesignated,1	;just designated? */
	TEST(*(refdesignated), 1);
	/* jz	@F		;no -> */
	if (!(*(refdesignated) & 1)) {goto dummylabel39;}
	/* mov	cx,FloatWPX */
	cx = floatwpx;
	/* mov	bx,FloatWPY */
	bx = floatwpy;
	/* mov	RefDesX,cx */
	refdesx = cx;
	/* mov	RefDesY,bx */
	refdesy = bx;
dummylabel39:
	// 4715 
	/* @@:		mov	cx,RefDesX */
	cx = refdesx;
	/* mov	bx,RefDesY */
	bx = refdesy;
	// 0 ;ret
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je putcolorhud3 */
	if ((dw)(nvg_set) == (dw)(1)) {goto putcolorhud3;}
	// 0 ; TAB.ASM(2280): warning A6003: conditional jump lengthened : by 156 byte(s)
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_158_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_158_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_158_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_158_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_158_skippixel:
	// 4717 
	/* __m2c_macrolocal_158_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5256 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_159_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_159_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_159_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_159_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_159_skippixel:
	// 4719 
	/* __m2c_macrolocal_159_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5271 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_160_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_160_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_160_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_160_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_160_skippixel:
	// 4721 
	/* __m2c_macrolocal_160_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5286 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_161_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_161_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_161_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_161_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_161_skippixel:
	// 4723 
	/* __m2c_macrolocal_161_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5301 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_162_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_162_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_162_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_162_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_162_skippixel:
	// 4725 
	/* __m2c_macrolocal_162_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5316 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_163_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_163_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_163_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_163_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_163_skippixel:
	// 4727 
	/* __m2c_macrolocal_163_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5331 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_164_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_164_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_164_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_164_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_164_skippixel:
	// 4729 
	/* __m2c_macrolocal_164_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5346 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_165_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_165_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_165_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_165_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_REF_SYM */
	al = 0;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_165_skippixel:
	// 4731 
	/* __m2c_macrolocal_165_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5361 						call	SetPixel */
	/* jmp getout3 */
	goto getout3;
putcolorhud3:
	// 4733 
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_166_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_166_skippixel;}
	/* add	bl,-2 */
	ADD(bl, -2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_166_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_166_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_166_skippixel:
	// 4735 
	/* __m2c_macrolocal_166_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5378 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_167_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_167_skippixel;}
	/* add	bl,-1 */
	ADD(bl, -1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_167_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_167_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_167_skippixel:
	// 4737 
	/* __m2c_macrolocal_167_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5393 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_168_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_168_skippixel;}
	/* add	bl,1 */
	ADD(bl, 1);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_168_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_168_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_168_skippixel:
	// 4739 
	/* __m2c_macrolocal_168_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5408 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,0 */
	ADD(cx, 0);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_169_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_169_skippixel;}
	/* add	bl,2 */
	ADD(bl, 2);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_169_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_169_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_169_skippixel:
	// 4741 
	/* __m2c_macrolocal_169_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5423 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-2 */
	ADD(cx, -2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_170_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_170_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_170_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_170_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_170_skippixel:
	// 4743 
	/* __m2c_macrolocal_170_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5438 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,-1 */
	ADD(cx, -1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_171_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_171_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_171_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_171_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_171_skippixel:
	// 4745 
	/* __m2c_macrolocal_171_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5453 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,1 */
	ADD(cx, 1);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_172_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_172_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_172_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_172_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_172_skippixel:
	// 4747 
	/* __m2c_macrolocal_172_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5468 						call	SetPixel */
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* add	cx,2 */
	ADD(cx, 2);
	/* cmp	cx,TAB_WIDTH-1	;visible? */
	CMP(cx, 96-1);
	/* ja	__m2c_macrolocal_173_SkipPixel	;no -> */
	if ((dw)(cx) > (dw)(96-1)) {goto __m2c_macrolocal_173_skippixel;}
	/* add	bl,0 */
	ADD(bl, 0);
	/* cmp	bl,TAB_DEPTH-1	;visible? */
	CMP(bl, 72-1);
	/* ja	__m2c_macrolocal_173_SkipPixel	;no -> */
	if ((db)(bl) > (db)(72-1)) {goto __m2c_macrolocal_173_skippixel;}
	/* add	cx,XOrg */
	ADD(cx, xorg);
	/* add	bl,YOrg */
	ADD(bl, *(yorg));
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
__m2c_macrolocal_173_skippixel:
	// 4749 
	/* __m2c_macrolocal_173_SkipPixel:	pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
/* m2c-phantom removed: 	J(CALLF(setpixel,0));	// 5483 						call	SetPixel */
getout3:
	// 4751 
	// 0 ;------------------------------------------------------
	// 0 ;* display map datum range, bearing etc. (from Tornado)
	// 0 ;------------------------------------------------------
	// 0 ;ret
	// 0 ;* calc range and bearing
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET REF_VIEW */
	di = m2c::near_offset_external(ref_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	/* mov	WORD PTR RefRng,ax */
	*(dw*)(&refrng) = ax;
	/* mov	WORD PTR RefRng+2,dx */
	*(dw*)(((db*)&refrng)+2) = dx;
	/* mov	RefBrg,bx */
	refbrg = bx;
	// 0 ;* calc range (nautical miles)
	/* call	CalcNMiles */
	CALLF(calcnmiles, 0);
	/* mov	RefRngNMiles,ax */
	refrngnmiles = ax;
	// 0 ;* calc ETA (only valid if vtas > 0 and abs(ang diff) <= 45 degs)
	/* mov	RefETA,-1	;assume invalid */
	refeta = -1;
	/* cmp	Vtas,0		;vtas > 0? */
	CMP(vtas, 0);
	/* je	@F		;no -> */
	if ((dw)(vtas) == (dw)(0)) {goto dummylabel40;}
	/* mov	ax,Hdg */
	ax = hdg;
	/* mov	dx,RefBrg */
	dx = refbrg;
	/* call	CalcAngDiff */
	CALLF(calcangdiff, 0);
	/* cmp	ax,64		;abs(ang diff) <= 45 degs? */
	CMP(ax, 64);
	/* ja	@F		;no -> */
	if ((dw)(ax) > (dw)(64)) {goto dummylabel40;}
	/* mov	ax,WORD PTR RefRng */
	ax = *(dw*)(&refrng);
	/* mov	dx,WORD PTR RefRng+2 */
	dx = *(dw*)(((db*)&refrng)+2);
	/* mov	bx,Vtas */
	bx = vtas;
	/* call	CalcETA */
	CALLF(calceta, 0);
	/* mov	RefETA,ax */
	refeta = ax;
dummylabel40:
	// 4753 
	// 0 ;ret <-- interesting
	/* cmp NVG_set,1 */
	CMP(nvg_set, 1);
	/* je putcolorhud4 */
	if ((dw)(nvg_set) == (dw)(1)) {goto putcolorhud4;}
	/* mov	si,OFFSET RefMap$ */
	si = m2c::near_offset_external(refmapdol);
	/* jmp getout4 */
	goto getout4;
putcolorhud4:
	// 4755 
	/* mov	si,OFFSET RefMap_COL_HUD$ */
	si = m2c::near_offset_external(refmap_col_huddol);
getout4:
	// 4757 
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;ret-no good
	/* mov	si,OFFSET RefETA$	;assume ETA valid */
	si = m2c::near_offset_external(refetadol);
	/* cmp	RefETA,-1		;valid? */
	CMP(refeta, -1);
	/* jne	@F			;yes -> */
	if ((dw)(refeta) != (dw)(-1)) {goto dummylabel41;}
	/* mov	si,OFFSEt RefETAInvalid$ */
	si = m2c::near_offset_external(refetainvaliddol);
dummylabel41:
	// 4759 
	/* @@:		call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETN(0);
snapgndobject:
	// 5542 
	// 0 ;-------------------------------------
	// 0 ;* calc map index = x sec + y sec * 32
	// 0 ;-------------------------------------
edummylabel8:
	// 4761 
	/* mov	bp,REF_VIEW.VP_YSEC */
	bp = ref_view.vp_ysec;
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
	/* add	bp,REF_VIEW.VP_XSEC */
	ADD(bp, ref_view.vp_xsec);
	// 0 ;--------------------------
	// 0 ;* test for occupied sector
	// 0 ;--------------------------
	/* mov	al,SectorLayer1[bp] */
	al = *((&sectorlayer1)+bp);
	/* test	al,al		;occupied sector? */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_174_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_174_skip;}
	/* jmp	FailSnapGnd */
	goto failsnapgnd;
__m2c_macrolocal_174_skip:
	// 4763 
	// 0 ;no ->
	// 0 ;------------------------------------
	// 0 ;* calc pointer to sector data record
	// 0 ;------------------------------------
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
	// m2c-dedup: removed duplicate expansion row: R(ADD(bx, m2c::near_offset_external(sectortable)));	// 5575 						add	bx,OFFSET SectorTable
	/* mov	si,[bx].SEC_OBJ_PTR	;si -> ground object list */
	si = m2c::getdata(*((dw*)((db*)&((sectordata*)raddr(ds,bx))->sec_obj_ptr)));
	// 0 ;----------------------
	// 0 ;* calc nearest sub-div
	// 0 ;----------------------
	/* mov	ax,REF_VIEW.VP_XFT */
	ax = ref_view.vp_xft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* shl	al,1 */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* mov	dl,ah		;x grid (0 .. 64) */
	dl = ah;
	/* mov	ax,REF_VIEW.VP_YFT */
	ax = ref_view.vp_yft;
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* shl	al,1 */
	SHL(al, 1);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* mov	dh,ah		;y grid (0 .. 64) */
	dh = ah;
	// 0 ;------------------
	// 0 ;* scan object list (search for ground object at sub-div)
	// 0 ;------------------
	// 0 ;* note: The object status (alive / dead) is not checked as this information
	// 0 ;*       is not available to the map database.
scanobjloop:
	// 4765 
	/* ScanObjLoop:	mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch object number
	/* mov	bl,al */
	bl = al;
	/* inc	si		;skip animation flags */
	INC(si);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch x grid
	/* mov	cl,al */
	cl = al;
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;fetch y grid
	/* mov	ch,al */
	ch = al;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* cmp	bl,-1		;end of list? */
	CMP(bl, -1);
	/* je	FailSnapGnd	;yes -> */
	if ((db)(bl) == (db)(-1)) {goto failsnapgnd;}
	/* cmp	cx,dx		;grid match? */
	CMP(cx, dx);
	/* jne	ScanObjLoop	;no -> */
	if ((dw)(cx) != (dw)(dx)) {goto scanobjloop;}
	// 0 ;* exclude trees (assume GND_COPSEA .. GND_COPSED are contiguous)
	/* cmp	bl,GND_COPSEA	;tree? */
	CMP(bl, 13);
	/* jb	@F		;no -> */
	if ((db)(bl) < (db)(13)) {goto dummylabel42;}
	/* cmp	bl,GND_COPSED	;tree? */
	CMP(bl, 16);
	/* jbe	FailSnapGnd	;yes -> */
	if ((db)(bl) <= (db)(16)) {goto failsnapgnd;}
	// 0 ;* convert x grid, y grid to xft, yft
dummylabel42:
	// 4767 
	/* @@:		xor	al,al */
	XOR(al, al);
	/* mov	ah,dl */
	ah = dl;
	/* sub	ah,32 */
	SUB(ah, 32);
	/* cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	__m2c_macrolocal_181_TestHi */
	if ((short)(ax) >= (short)(-8192)) {goto __m2c_macrolocal_181_testhi;}
	/* mov	ax,-8192 */
	ax = -8192;
	/* jmp	__m2c_macrolocal_181_TestOk */
	goto __m2c_macrolocal_181_testok;
__m2c_macrolocal_181_testhi:
	// 4769 
	/* __m2c_macrolocal_181_TestHi:		cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	__m2c_macrolocal_181_TestOk */
	if ((short)(ax) <= (short)(8191)) {goto __m2c_macrolocal_181_testok;}
	/* mov	ax,8191 */
	ax = 8191;
__m2c_macrolocal_181_testok:
	// 4771 
	// 0 ;(in case sub-div = 64)
	/* mov	REF_VIEW.VP_XFT,ax */
	ref_view.vp_xft = ax;
	/* mov	ah,dh */
	ah = dh;
	/* sub	ah,32 */
	SUB(ah, 32);
	/* cmp	ax,-8192 */
	CMP(ax, -8192);
	/* jge	__m2c_macrolocal_182_TestHi */
	if ((short)(ax) >= (short)(-8192)) {goto __m2c_macrolocal_182_testhi;}
	/* mov	ax,-8192 */
	ax = -8192;
	/* jmp	__m2c_macrolocal_182_TestOk */
	goto __m2c_macrolocal_182_testok;
__m2c_macrolocal_182_testhi:
	// 4773 
	/* __m2c_macrolocal_182_TestHi:		cmp	ax,8191 */
	CMP(ax, 8191);
	/* jle	__m2c_macrolocal_182_TestOk */
	if ((short)(ax) <= (short)(8191)) {goto __m2c_macrolocal_182_testok;}
	/* mov	ax,8191 */
	ax = 8191;
__m2c_macrolocal_182_testok:
	// 4775 
	// 0 ;(in case sub-div = 64)
	/* mov	REF_VIEW.VP_YFT,ax */
	ref_view.vp_yft = ax;
	/* stc			;cf = 1 */
	STC;
	/* ret */
	RETN(0);
failsnapgnd:
	// 4777 
	/* FailSnapGnd:	clc			;cf = 0 */
	CLC;
	/* ret */
	RETN(0);
flirdisp:
	// 5669 
	/* mov InCockpit,1 ;* kill: assume all */
	incockpit = 1;
	// 0 ;Mod 43 by Frankie Kam on 18/3/2018
edummylabel9:
	// 4779 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 5674 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel43;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 5676 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* sub bx, 2 ;Pointer skips to previous TAB display, i.e., TIALD normal-sized view */
	SUB(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel10:
	// 4781 
	/* ret */
	RETN(0);
dummylabel43:
	// 4783 
	/* mov	TAB1.TAB_X_ORG,0  ;Awesome! Frankie hack on 27/11/17 */
	tab1.tab_x_org = 0;
	/* mov	TAB1.TAB_Y_ORG,0 */
	tab1.tab_y_org = 0;
	/* mov	TAB2.TAB_X_ORG,220 */
	tab2.tab_x_org = 220;
	/* mov	TAB2.TAB_Y_ORG,0 */
	tab2.tab_y_org = 0;
	/* mov	NAVIG_MFD.MFD_X_ORG,0 */
	navig_mfd.mfd_x_org = 0;
	/* mov	NAVIG_MFD.MFD_Y_ORG,0 */
	navig_mfd.mfd_y_org = 0;
	/* mov	ax,EXT_VIEWMODE */
	ax = 4;
	// 0 ;mov	ax,TV3_VIEWMODE
	/* mov	IronWork,0 ;hacked by Frankie 30/11/2017 */
	ironwork = 0;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 5697 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 5698 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 5699 mov	di,OFFSET TMP_VIEW */
	// 5700 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,NUL_VIEWMODE	;set viewmode for navig view */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* call LoadExtrnPan  ;added on 6/11/2017 */
	CALL(loadextrnpan, 0);
	/* call UpdateExtrn   ;added on 6/11/2017 */
	CALL(updateextrn, 0);
	/* cmp	TAB2.TAB_MODE,TAB_FLIR	;TAB2's FLIR selected? */
	CMP(tab2.tab_mode, 6);
	/* je BypassEScope2 ;yes -> */
	if ((dw)(tab2.tab_mode) == (dw)(6)) {goto bypassescope2;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
	/* call UpdateRWR */
	CALL(updaterwr, 0);
	/* call UpdateADI2 */
	CALL(updateadi2, 0);
bypassescope2:
	// 4785 
	/* call UpdateHUD2 */
	CALL(updatehud2, 0);
	/* call UpdateCtrlSFace */
	CALL(updatectrlsface, 0);
	/* mov	IronWork,1 */
	ironwork = 1;
	/* ret */
	RETN(0);
validatetiald:
	// 5736 
	/* test	TIALDActive,1		;TIALD updated? */
	TEST(tialdactive, 1);
edummylabel11:
	// 4787 
	/* jnz	ValidateExit		;yes -> */
	if (!ZF) {goto validateexit;}
	/* cmp	TDMode,TIALD_ADJ_LOCK	;adjust lock? */
	CMP(tdmode, 6);
	/* je	CancelTIALD		;yes -> */
	if ((dw)(tdmode) == (dw)(6)) {goto canceltiald;}
	/* cmp	TDMode,TIALD_TGT_LOCK	;target lock? */
	CMP(tdmode, 8);
	/* jne	InitTIALD		;no -> */
	if ((dw)(tdmode) != (dw)(8)) {goto inittiald;}
	/* call	TargetMoved		;target ok? */
	CALL(targetmoved, 0);
	/* jc	InitTIALD		;no -> */
	if (CF) {goto inittiald;}
	/* call	CalcScanSize */
	CALL(calcscansize, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1		;within scan limits? */
	TEST(tddrag, 1);
	/* jz	ValidateExit		;yes -> */
	if (!(tddrag & 1)) {goto validateexit;}
canceltiald:
	// 4789 
	/* CancelTIALD:	call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
inittiald:
	// 4791 
	/* InitTIALD:	mov	TDMode,TIALD_INIT */
	tdmode = 0;
	/* mov	LaserActive,0 */
	laseractive = 0;
validateexit:
	// 4793 
	/* ValidateExit:	mov	TIALDActive,0 */
	tialdactive = 0;
	/* ret */
	RETF(0);
tialddisp:
	// 5781 
	// 0 ;Mod 43 by Frankie Kam on 18/3/2018
edummylabel12:
	// 4795 
	/* mov InCockpit,1 */
	incockpit = 1;
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 5786 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel44;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 5788 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* sub bx, 2 ;Pointer skips to previous TAB display, i.e., TIALD normal-sized view0 */
	SUB(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel13:
	// 4797 
	/* ret */
	RETN(0);
dummylabel44:
	// 4799 
	// 0 ;----------------------------
	// 0 ;* check operating conditions
	// 0 ;----------------------------
	// 0 ;Bingo
	// 0 ;cmp	TAB2.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je @F
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto dummylabel45;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto dummylabel45;}
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jae	TIALDOk				;no -> */
	if ((dw)(trueradalt) >= (dw)(100)) {goto tialdok;}
dummylabel45:
	// 4801 
	/* @@:		mov	TDMode,TIALD_INIT */
	tdmode = 0;
	/* call InvalidDisp */
	CALL(invaliddisp, 0);
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel46;}
	/* call VGA_DrwNavigPanBrief */
	CALL(vga_drwnavigpanbrief, 0);
dummylabel46:
	// 4803 
	/* cmp	TAB1.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab1.tab_mode, 8);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(8)) {goto dummylabel47;}
	/* cmp	TAB1.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab1.tab_mode, 12);
	/* je @F */
	if ((dw)(tab1.tab_mode) == (dw)(12)) {goto dummylabel47;}
	/* cmp	TAB2.TAB_MODE,TAB_FLIR_ORI */
	CMP(tab2.tab_mode, 8);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(8)) {goto dummylabel47;}
	/* cmp	TAB2.TAB_MODE,TAB_TIALD_ORI */
	CMP(tab2.tab_mode, 12);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(12)) {goto dummylabel47;}
	/* call DrawADIRollBug */
	CALL(drawadirollbug, 0);
dummylabel47:
	// 4805 
	/* jmp	TIALDExit */
	goto tialdexit;
	// 0 ;---------------
	// 0 ;* init viewmode
	// 0 ;---------------
tialdok:
	// 4807 
	/* call LoadExtrnPan   ;added on 17/11/17 */
	CALL(loadextrnpan, 0);
	/* call UpdateExtrn    ;added on 17/11/17 */
	CALL(updateextrn, 0);
	/* mov	TAB1.TAB_X_ORG,0  ;Awesome! Frankie hack on 27/11/17 */
	tab1.tab_x_org = 0;
	/* mov	TAB1.TAB_Y_ORG,0 */
	tab1.tab_y_org = 0;
	/* mov	TAB2.TAB_X_ORG,220 */
	tab2.tab_x_org = 220;
	/* mov	TAB2.TAB_Y_ORG,0 */
	tab2.tab_y_org = 0;
	/* mov	NAVIG_MFD.MFD_X_ORG,0 */
	navig_mfd.mfd_x_org = 0;
	/* mov	NAVIG_MFD.MFD_Y_ORG,0 */
	navig_mfd.mfd_y_org = 0;
	/* mov	ax,EXT_VIEWMODE */
	ax = 4;
	// 0 ;mov	ax,TV3_VIEWMODE
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;----------------------------
	// 0 ;* store visual configuration
	// 0 ;----------------------------
	/* push	WORD PTR GradEnabled */
	PUSH(*(dw*)(&gradenabled));
	/* push	WORD PTR StarsEnabled */
	PUSH(*(dw*)(&starsenabled));
	/* push	WORD PTR CloudsEnabled */
	PUSH(*(dw*)(&cloudsenabled));
	/* push	WORD PTR HillTextEnabled */
	PUSH(*(dw*)(&hilltextenabled));
	/* push	SecScanCnt1 */
	PUSH(secscancnt1);
	/* push	SecScanOff1 */
	PUSH(secscanoff1);
	/* push	SecScanCnt2 */
	PUSH(secscancnt2);
	/* push	SecScanOff2 */
	PUSH(secscanoff2);
	// 0 ;-----------------------------
	// 0 ;* modify visual configuration
	// 0 ;-----------------------------
	// 0 ;* if night or foggy use IR visual colours
	/* cmp	Night,1		;Dusk (still light enough to see)? */
	CMP(night, 1);
	/* je	SkipIRCols	;no -> */
	if ((dw)(night) == (dw)(1)) {goto skipircols;}
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel48;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipIRCols	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipircols;}
dummylabel48:
	// 4809 
	// 0 ;call CheckForNVG
	// 0 ;call	SetIRPalette
	// 0 ;mov	StarsEnabled,0
skipircols:
	// 4811 
	/* SkipIRCols:	mov	GradEnabled,0 */
	gradenabled = 0;
	/* mov	CloudsEnabled,0 */
	cloudsenabled = 0;
	/* mov	HillTextEnabled,0 */
	hilltextenabled = 0;
	/* mov	SecScanCnt1,5		;minimize range */
	secscancnt1 = 5;
	/* mov	SecScanOff1,-2 */
	secscanoff1 = -2;
	/* mov	SecScanCnt2,5 */
	secscancnt2 = 5;
	/* mov	SecScanOff2,-2 */
	secscanoff2 = -2;
	// 0 ;----------------------
	// 0 ;* calc TIALD scan size
	// 0 ;----------------------
	/* call	CalcScanSize */
	CALL(calcscansize, 0);
	// 0 ;-----------------
	// 0 ;* clear drag flag
	// 0 ;-----------------
	/* mov	TDDrag,0 */
	tddrag = 0;
	// 0 ;------------------
	// 0 ;* read mouse input
	// 0 ;------------------
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* jne	@F		;yes -> */
	if ((dw)(disableinput) != (dw)(0)) {goto dummylabel49;}
	/* mov	si,TABPtr */
	si = tabptr;
	/* test	[si].TAB_HAS_MOUSE,1	;mouse available? */
	TEST(*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)), 1);
	/* jnz	ReadTIALDMouse		;yes -> */
	if ((*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)) & 1) != 0) {goto readtialdmouse;}
	// 0 ;* null input from mouse
dummylabel49:
	// 4813 
	/* @@:		xor	ax,ax */
	XOR(ax, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	XMickeys,cx */
	xmickeys = cx;
	/* mov	YMickeys,bx */
	ymickeys = bx;
	/* mov	TDZoomKey,0 */
	tdzoomkey = 0;
	/* jmp	SortTDMode */
	goto sorttdmode;
readtialdmouse:
	// 4815 
	/* ReadTIALDMouse:	mov	al,Key[K_CTRL]	;update zoom override flag */
	al = *((&key)+29);
	/* mov	TDZoomKey,al */
	tdzoomkey = al;
	/* call	ReadMouseMotion */
	CALLF(readmousemotion, 0);
	// 0 ;* note: al = 1 = lhs button pressed
	// 0 ;*       ah = 1 = rhs button pressed
	// 0 ;*       cx = XMickeys (-32768 .. 32767)
	// 0 ;*       bx = YMickeys (-32768 .. 32767)
	// 0 ;*       dl = 1 = lhs button just pressed
	// 0 ;*       dh = 1 = rhs button just pressed
	// 0 ;-------------
	// 0 ;* select mode
	// 0 ;-------------
sorttdmode:
	// 4817 
	/* SortTDMode:	mov	bx,TDMode */
	bx = tdmode;
__disp=*(dw*)(((db*)&tdswitch)+bx);
	/* jmp	TDSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
tialdinit:
	// 4819 
	// 0 ;---------------------------
	// 0 ;* init mode ensures start up into search mode regardless of mouse input
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch */
	goto intosearch;
	// 0 ;---------------------------
tialdsearch:
	// 4821 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel50;}
	/* push	dx */
	PUSH(dx);
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* switch to adjust lock mode?
dummylabel50:
	// 4823 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel51;}
	/* call	SetTarget */
	CALL(settarget, 0);
	/* jc	@F		;target invalid -> */
	if (CF) {goto dummylabel51;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock */
	goto intoadjustlock;
	// 0 ;* switch to zoom mode?
dummylabel51:
	// 4825 
	/* @@:		test	TDZoomKey,1	;CTRL key pressed? */
	TEST(tdzoomkey, 1);
	/* jz	IntoSearch	;no -> */
	if (!(tdzoomkey & 1)) {goto intosearch;}
	/* mov	TDMode,TIALD_ZOOM */
	tdmode = 4;
	/* jmp	IntoZoom */
	goto intozoom;
	// 0 ;* search within viewing window
intosearch:
	// 4827 
	/* IntoSearch:	call	SetDatum */
	CALL(setdatum, 0);
	/* call	AdjustXYOffsets */
	CALL(adjustxyoffsets, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
	/* jmp	ContVisual */
	goto contvisual;
	// 0 ;---------------------------
tialdzoom:
	// 4829 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel52;}
	/* push	dx */
	PUSH(dx);
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* switch to adjust lock mode?
dummylabel52:
	// 4831 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel53;}
	/* call	SetTarget */
	CALL(settarget, 0);
	/* jc	@F		;target invalid -> */
	if (CF) {goto dummylabel53;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock */
	goto intoadjustlock;
	// 0 ;* switch to search mode?
dummylabel53:
	// 4833 
	/* @@:		test	TDZoomKey,1	;CTRL key released? */
	TEST(tdzoomkey, 1);
	/* jnz	IntoZoom	;no -> */
	if ((tdzoomkey & 1) != 0) {goto intozoom;}
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch */
	goto intosearch;
	// 0 ;* adjust zoom
intozoom:
	// 4835 
	/* IntoZoom:	call	AdjustZoom */
	CALL(adjustzoom, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;drag point? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel54;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
dummylabel54:
	// 4837 
	/* @@:		jmp	ContVisual */
	goto contvisual;
	// 0 ;---------------------------
tialdadjustlock:
	// 4839 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel55;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch */
	goto intosearch;
	// 0 ;* switch to target lock mode?
dummylabel55:
	// 4841 
	/* @@:		test	al,al		;lh button released? */
	TEST(al, al);
	/* jnz	IntoAdjustLock	;no -> */
	if ((al & al) != 0) {goto intoadjustlock;}
	/* mov	TDMode,TIALD_TGT_LOCK */
	tdmode = 8;
	/* jmp	IntoTargetLock */
	goto intotargetlock;
intoadjustlock:
	// 4843 
	/* IntoAdjustLock:	call	AdjustLock */
	CALL(adjustlock, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;drag point? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel56;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
dummylabel56:
	// 4845 
	/* @@:		call	SetTarget */
	CALL(settarget, 0);
	/* jnc	ContVisual	;target valid -> */
	if (!CF) {goto contvisual;}
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch */
	goto intosearch;
	// 0 ;---------------------------
tialdtargetlock:
	// 4847 
	// 0 ;---------------------------
	// 0 ;* has target moved (or cancelled) externally?
	/* call	TargetMoved	;moved (or cancelled)? */
	CALL(targetmoved, 0);
	/* jc	CancelLock	;yes -> */
	if (CF) {goto cancellock;}
	// 0 ;* cancel target designation (switch to search mode)?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel57;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
cancellock:
	// 4849 
	/* CancelLock:	call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch */
	goto intosearch;
	// 0 ;* return to adjust lock mode?
dummylabel57:
	// 4851 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel58;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock */
	goto intoadjustlock;
	// 0 ;* adjust zoom?
dummylabel58:
	// 4853 
	/* @@:	 	test	TDZoomKey,1	;CTRL key pressed? */
	TEST(tdzoomkey, 1);
	/* jz	IntoTargetLock	;no -> */
	if (!(tdzoomkey & 1)) {goto intotargetlock;}
	/* call	AdjustZoom */
	CALL(adjustzoom, 0);
intotargetlock:
	// 4855 
	/* IntoTargetLock:	call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;within scan limits? */
	TEST(tddrag, 1);
	/* jz	ContVisual	;yes -> */
	if (!(tddrag & 1)) {goto contvisual;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch */
	goto intosearch;
	// 0 ;---------------------------
contvisual:
	// 4857 
	// 0 ;---------------------------
	// 0 ;* vp alt = max(TDScanSize * TDZoom / 256, gnd ht + MIN_OP_RAD_ALT)
	/* mov	ax,TDScanSize */
	ax = tdscansize;
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	dh,al		;store 1/2 bit */
	dh = al;
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* shl	dh,1		;expose 1/2 bit */
	SHL(dh, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* push	ax */
	PUSH(ax);
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,MIN_OP_RAD_ALT */
	ADD(ax, 100);
	/* pop	bx */
	POP(bx);
	/* cmp	bx,ax		;vp alt >= gnd ht + MIN_OP_RAD_ALT? */
	CMP(bx, ax);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(ax)) {goto dummylabel59;}
	/* mov	bx,ax */
	bx = ax;
dummylabel59:
	// 4859 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	// 0 ;* if overcast then
	// 0 ;*    if ac alt >= cloudbase then
	// 0 ;*       if vp alt < cloudbase then
	// 0 ;*          vp alt = cloudbase
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
	/* test	Overcast,1	;overcast? */
	TEST(overcast, 1);
	/* jz	SetVPAlt	;no -> */
	if (!(overcast & 1)) {goto setvpalt;}
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jb	SetVPAlt	;ac alt < cloudbase -> */
	if (CF) {goto setvpalt;}
	/* mov	ax,bx */
	ax = bx;
	/* mov	dx,cx */
	dx = cx;
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jae	SetVPAlt	;vp alt > cloudbase -> */
	if (!CF) {goto setvpalt;}
	/* mov	bx,WORD PTR CloudBase */
	bx = *(dw*)(&cloudbase);
	/* mov	cx,WORD PTR CloudBase+2 */
	cx = *(dw*)(((db*)&cloudbase)+2);
setvpalt:
	// 4861 
	/* SetVPAlt:	mov	WORD PTR TIALD_VIEW.VP_ZFT_HI,cx */
	*((dw*)((db*)&tiald_view+vp_zft_hi)) = cx;
	/* mov	WORD PTR TIALD_VIEW.VP_ZFT_LO,bx */
	*((dw*)((db*)&tiald_view+vp_zft_lo)) = bx;
	// 0 ;-------------------
	// 0 ;* draw TIALD visual
	// 0 ;-------------------
	// 0 ;* keep TIALD hdg in line with aircraft hdg (even if zoom or lock)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	TIALD_VIEW.VP_HDG,ax */
	tiald_view.vp_hdg = ax;
	// 0 ;* pitched down, no roll
	// 0 ;mov	TIALD_VIEW.VP_PITCH,384
	/* mov	TIALD_VIEW.VP_PITCH,400 ;390    ;hacked to 394 by Frankie on 24/11/2017; 388 seems best */
	tiald_view.vp_pitch = 400;
	// 0 ;mov	TIALD_VIEW.VP_ROLL,0   ;hacked by Frankie on 24/11/2017
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	Visual */
	CALLF(visual, 0);
	// 0 ;----------------
	// 0 ;* draw symbology
	// 0 ;----------------
	// 0 ;* update blink timer
	/* mov	ax,TDBlinkTimer */
	ax = tdblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* mov	TDBlinkTimer,ax */
	tdblinktimer = ax;
	/* jnc	@F */
	if (!CF) {goto dummylabel60;}
	/* mov	TDBlinkTimer,TD_BLINK_RATE */
	tdblinktimer = 10;
	/* xor	TDBlink,1	;toggle blink flag */
	XOR(tdblink, 1);
	// 0 ;* if "dragging" then switch cross off for blink period
	/* mov	TDCross,1	;assume cross on */
	tdcross = 1;
	/* jnz	@F		;0 .. 1 (leading edge) -> */
	if (tdblink != 0) {goto dummylabel60;}
	/* test	TDDrag,1	;dragging? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel60;}
	/* mov	TDCross,0	;cross off */
	tdcross = 0;
	// 0 ;* draw symbology wrt mode
dummylabel60:
	// 4863 
	/* @@:		mov	bx,TDMode */
	bx = tdmode;
__disp=*(dw*)(((db*)&tdsymbolswitch)+bx);
	/* jmp	TDSymbolSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
tdsymzoom:
	// 4865 
	// 0 ;---------------------------
	/* call	DrawLaserSymbol */
	CALL(drawlasersymbol, 0);
	/* jmp	TDSymOk */
	goto tdsymok;
	// 0 ;---------------------------
tdsymadjustlock:
	// 4867 
	// 0 ;---------------------------
	/* call	DrawLaserSymbol */
	CALL(drawlasersymbol, 0);
	// 0 ;* blink track symbol
	/* test	TDBLink,1 */
	TEST(tdblink, 1);
	/* jz	@F */
	if (!(tdblink & 1)) {goto dummylabel61;}
	/* call	DrawTrackSymbol */
	CALL(drawtracksymbol, 0);
dummylabel61:
	// 4869 
	/* @@:		jmp	TDSymOk */
	goto tdsymok;
	// 0 ;---------------------------
tdsymtargetlock:
	// 4871 
	// 0 ;---------------------------
	// 0 ;* blink laser symbol
	/* test	TDBLink,1 */
	TEST(tdblink, 1);
	/* jz	@F */
	if (!(tdblink & 1)) {goto dummylabel62;}
	/* call	DrawLaserSymbol */
	CALL(drawlasersymbol, 0);
dummylabel62:
	// 4873 
	/* @@:		call	DrawTrackSymbol */
	CALL(drawtracksymbol, 0);
	// 0 ;---------------------------
tdsymok:
	// 4875 
	// 0 ;---------------------------
	/* call	DrawCrossSymbol */
	CALL(drawcrosssymbol, 0);
	// 0 ;------------------------------
	// 0 ;* restore visual configuration
	// 0 ;------------------------------
	/* pop	SecScanOff2 */
	POP(secscanoff2);
	/* pop	SecScanCnt2 */
	POP(secscancnt2);
	/* pop	SecScanOff1 */
	POP(secscanoff1);
	/* pop	SecScanCnt1 */
	POP(secscancnt1);
	/* pop	WORD PTR HillTextEnabled */
	POP(*(dw*)(&hilltextenabled));
	/* pop	WORD PTR CloudsEnabled */
	POP(*(dw*)(&cloudsenabled));
	/* pop	WORD PTR StarsEnabled */
	POP(*(dw*)(&starsenabled));
	/* pop	WORD PTR GradEnabled */
	POP(*(dw*)(&gradenabled));
	// 0 ;* if night or foggy restore visual colours
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel63;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipFixCols	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipfixcols;}
dummylabel63:
	// 4877 
	// 0 ;call CheckForNVG
	// 0 ;call	FixIRPalette
	// 0 ;------------------
	// 0 ;* restore viewmode
	// 0 ;------------------
skipfixcols:
	// 4879 
	/* SkipFixCols:	mov	ax,NUL_VIEWMODE */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;--------------------
	// 0 ;* update TIALD flags
	// 0 ;--------------------
tialdexit:
	// 4881 
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jl BypassEScope_and_ADI */
	if ((short)(trueradalt) < (short)(100)) {goto bypassescope_and_adi;}
	/* mov	al,1		;assume active */
	al = 1;
	/* cmp	TDMode,TIALD_ADJ_LOCK */
	CMP(tdmode, 6);
	/* je	@F */
	if ((dw)(tdmode) == (dw)(6)) {goto dummylabel64;}
	/* cmp	TDMode,TIALD_TGT_LOCK */
	CMP(tdmode, 8);
	/* je	@F */
	if ((dw)(tdmode) == (dw)(8)) {goto dummylabel64;}
	/* xor	al,al		;inactive */
	XOR(al, al);
dummylabel64:
	// 4883 
	/* @@:		mov	LaserActive,al */
	laseractive = al;
	/* mov	TIALDActive,1 */
	tialdactive = 1;
	/* cmp	TAB2.TAB_MODE,TAB_TIALD	;TAB2's TIALD display selected? */
	CMP(tab2.tab_mode, 10);
	/* je BypassEScope ;yes -> */
	if ((dw)(tab2.tab_mode) == (dw)(10)) {goto bypassescope;}
	// 0 ;cmp	TAB2.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je @F
	// 0 ;Don't show the EScope and ADI gauges if TIALD is broken because past the pitch threshold of +/-60degs!
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	BypassEScope_and_ADI		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto bypassescope_and_adi;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	BypassEScope_and_ADI */
	if ((short)(m_cosr) < (short)(16384)) {goto bypassescope_and_adi;}
	/* call UpdateEScope2 */
	CALL(updateescope2, 0);
bypassescope:
	// 4885 
	// 0 ;ExitTIALDOk:
	/* call UpdateADI2  ;display attitude direction indicator */
	CALL(updateadi2, 0);
bypassescope_and_adi:
	// 4887 
	/* call UpdateCtrlSFace */
	CALL(updatectrlsface, 0);
	/* ret */
	RETN(0);
calcscansize:
	// 6247 
	// 0 ;* scan size = ubound(alt, 1, 23170)
edummylabel14:
	// 4889 
	/* mov	ax,23170	;assume alt > 65,535ft */
	ax = 23170;
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* ja	@F */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) > (dw)(0)) {goto dummylabel65;}
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* cmp	ax,1 */
	CMP(ax, 1);
	/* jae	__m2c_macrolocal_189_TestHi */
	if ((dw)(ax) >= (dw)(1)) {goto __m2c_macrolocal_189_testhi;}
	/* mov	ax,1 */
	ax = 1;
	/* jmp	__m2c_macrolocal_189_TestOk */
	goto __m2c_macrolocal_189_testok;
__m2c_macrolocal_189_testhi:
	// 4891 
	/* __m2c_macrolocal_189_TestHi:		cmp	ax,23170 */
	CMP(ax, 23170);
	/* jbe	__m2c_macrolocal_189_TestOk */
	if ((dw)(ax) <= (dw)(23170)) {goto __m2c_macrolocal_189_testok;}
	/* mov	ax,23170 */
	ax = 23170;
__m2c_macrolocal_189_testok:
	// 4893 
dummylabel65:
	// 4895 
	/* @@:		mov	TDScanSize,ax */
	tdscansize = ax;
	/* ret */
	RETN(0);
drawcrosssymbol:
	// 6274 
	// 0 ;* blink cross if "dragging"
edummylabel15:
	// 4897 
	/* test	TDCross,1 */
	TEST(tdcross, 1);
	/* jnz	__m2c_macrolocal_190_skip */
	if ((tdcross & 1) != 0) {goto __m2c_macrolocal_190_skip;}
	/* jmp	SkipCross */
	goto skipcross;
__m2c_macrolocal_190_skip:
	// 4899 
	// 0 ;* HLineDraw - draw horizontal line between two points
	// 0 ;*
	// 0 ;* pass: al = logical colour
	// 0 ;*       bl = y1
	// 0 ;*       cx = x1
	// 0 ;*       dx = x2
	// 0 ;* ret : nothing
	// 0 ;Top left horizontal
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-40 */
	ADD(bl, ((192/2-1)+25)-40);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD-53 ;-60 */
	ADD(cx, (320/2)-53);
	/* add	dx,XC_TIALD-49 */
	ADD(dx, (320/2)-49);
	/* mov	al,COL_HUD ;darker grey than COL_GREY1 */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;Top right horizontal
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-40 */
	ADD(bl, ((192/2-1)+25)-40);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD+53 */
	ADD(cx, (320/2)+53);
	/* add	dx,XC_TIALD+49 */
	ADD(dx, (320/2)+49);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* VLineDraw - draw vertical line between two points
	// 0 ;*
	// 0 ;* pass: al = logical colour
	// 0 ;*       bl = y1
	// 0 ;*       bh = y2
	// 0 ;*       cx = x1
	// 0 ;Top left vertical
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD-39 */
	ADD(bl, ((192/2-1)+25)-39);
	/* add	bh,YC_TIALD-35 */
	ADD(bh, ((192/2-1)+25)-35);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-53 */
	ADD(cx, (320/2)-53);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;Top right vertical
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD-39 */
	ADD(bl, ((192/2-1)+25)-39);
	/* add	bh,YC_TIALD-35 */
	ADD(bh, ((192/2-1)+25)-35);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+53 */
	ADD(cx, (320/2)+53);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;* HLineDraw - draw horizontal line between two points
	// 0 ;*
	// 0 ;* pass: al = logical colour
	// 0 ;*       bl = y1
	// 0 ;*       cx = x1
	// 0 ;*       dx = x2
	// 0 ;* ret : nothing
	// 0 ;Bottom left horizontal
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+40 */
	ADD(bl, ((192/2-1)+25)+40);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD-53 */
	ADD(cx, (320/2)-53);
	/* add	dx,XC_TIALD-49 */
	ADD(dx, (320/2)-49);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;Bottom right horizontal
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+40 */
	ADD(bl, ((192/2-1)+25)+40);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD+53 */
	ADD(cx, (320/2)+53);
	/* add	dx,XC_TIALD+49 */
	ADD(dx, (320/2)+49);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* VLineDraw - draw vertical line between two points
	// 0 ;*
	// 0 ;* pass: al = logical colour
	// 0 ;*       bl = y1
	// 0 ;*       bh = y2
	// 0 ;*       cx = x1
	// 0 ;Bottom left vertical
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD+35 */
	ADD(bl, ((192/2-1)+25)+35);
	/* add	bh,YC_TIALD+39 */
	ADD(bh, ((192/2-1)+25)+39);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-53 */
	ADD(cx, (320/2)-53);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;Bottom right vertical
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD+35 */
	ADD(bl, ((192/2-1)+25)+35);
	/* add	bh,YC_TIALD+39 */
	ADD(bh, ((192/2-1)+25)+39);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+53 */
	ADD(cx, (320/2)+53);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	// 0 ;------------------------------
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD */
	ADD(bl, (192/2-1)+25);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD-4 */
	ADD(cx, (320/2)-4);
	/* add	dx,XC_TIALD-2 */
	ADD(dx, (320/2)-2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD */
	ADD(bl, (192/2-1)+25);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD+2 */
	ADD(cx, (320/2)+2);
	/* add	dx,XC_TIALD+4 */
	ADD(dx, (320/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	// 0 ;* VLineDraw - draw vertical line between two points
	// 0 ;*
	// 0 ;* pass: al = logical colour
	// 0 ;*       bl = y1
	// 0 ;*       bh = y2
	// 0 ;*       cx = x1
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD-4 */
	ADD(bl, ((192/2-1)+25)-4);
	/* add	bh,YC_TIALD-2 */
	ADD(bh, ((192/2-1)+25)-2);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD */
	ADD(cx, 320/2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD+2 */
	ADD(bl, ((192/2-1)+25)+2);
	/* add	bh,YC_TIALD+4 */
	ADD(bh, ((192/2-1)+25)+4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD */
	ADD(cx, 320/2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* cmp	TDYOffset,0	;laser ahead of aircraft? */
	CMP(tdyoffset, 0);
	/* jge	__m2c_macrolocal_191_skip */
	if ((short)(tdyoffset) >= (short)(0)) {goto __m2c_macrolocal_191_skip;}
	/* jmp	SkipCross */
	goto skipcross;
__m2c_macrolocal_191_skip:
	// 4901 
	// 0 ;no ->
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-3 */
	ADD(bl, ((192/2-1)+25)-3);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-5 ;-4 */
	ADD(cx, (320/2)-5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-4 */
	ADD(bl, ((192/2-1)+25)-4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-5 ;-4 */
	ADD(cx, (320/2)-5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-4 */
	ADD(bl, ((192/2-1)+25)-4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-4  ;-3 */
	ADD(cx, (320/2)-4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-4 */
	ADD(bl, ((192/2-1)+25)-4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+4 ;+3 */
	ADD(cx, (320/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-4 */
	ADD(bl, ((192/2-1)+25)-4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+5 ;+4 */
	ADD(cx, (320/2)+5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-3 */
	ADD(bl, ((192/2-1)+25)-3);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+5 ;+4 */
	ADD(cx, (320/2)+5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+3 */
	ADD(bl, ((192/2-1)+25)+3);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+5 ;+4 */
	ADD(cx, (320/2)+5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+4 */
	ADD(bl, ((192/2-1)+25)+4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+5 ;+4 */
	ADD(cx, (320/2)+5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+4 */
	ADD(bl, ((192/2-1)+25)+4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+4 ;+3 */
	ADD(cx, (320/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+4 */
	ADD(bl, ((192/2-1)+25)+4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-4 ;-3 */
	ADD(cx, (320/2)-4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+4 */
	ADD(bl, ((192/2-1)+25)+4);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-5 ;-4 */
	ADD(cx, (320/2)-5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+3 */
	ADD(bl, ((192/2-1)+25)+3);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-5 ;-4 */
	ADD(cx, (320/2)-5);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skipcross:
	// 4903 
	/* SkipCross:	ret */
	RETN(0);
drawlasersymbol:
	// 6521 
	/* mov	bl,YOrg_TIALD ;* kill: assume all */
	bl = *(yorg_tiald);
edummylabel16:
	// 4905 
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD-2 */
	ADD(bl, ((192/2-1)+25)-2);
	/* add	bh,YC_TIALD+1 */
	ADD(bh, ((192/2-1)+25)+1);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD+6 */
	ADD(cx, (320/2)+6);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD+2 */
	ADD(bl, ((192/2-1)+25)+2);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD+6 */
	ADD(cx, (320/2)+6);
	/* add	dx,XC_TIALD+8 */
	ADD(dx, (320/2)+8);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* ret */
	RETN(0);
drawtracksymbol:
	// 6548 
	/* mov	bl,YOrg_TIALD ;* kill: assume all */
	bl = *(yorg_tiald);
edummylabel17:
	// 4907 
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC_TIALD-1 */
	ADD(bl, ((192/2-1)+25)-1);
	/* add	bh,YC_TIALD+2 */
	ADD(bh, ((192/2-1)+25)+2);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* add	cx,XC_TIALD-7 */
	ADD(cx, (320/2)-7);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg_TIALD */
	bl = *(yorg_tiald);
	/* add	bl,YC_TIALD-2 */
	ADD(bl, ((192/2-1)+25)-2);
	/* mov	cx,XOrg_TIALD */
	cx = xorg_tiald;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC_TIALD-8 */
	ADD(cx, (320/2)-8);
	/* add	dx,XC_TIALD-6 */
	ADD(dx, (320/2)-6);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* ret */
	RETN(0);
setdatum:
	// 6575 
	/* mov	si,OFFSET M_VIEW ;* kill: assume all */
	si = m2c::near_offset_external(m_view);
edummylabel18:
	// 4909 
	/* mov	di,OFFSET TIALD_VIEW */
	di = m2c::near_offset_external(tiald_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 6580 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 6581 						mov	si,OFFSET M_VIEW */
	// 6582 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* ret */
	RETN(0);
settarget:
	// 6595 
	/* cmp	TIALD_VIEW.VP_XSEC,31	;on active map? */
	CMP(tiald_view.vp_xsec, 31);
edummylabel19:
	// 4911 
	/* ja	@F			;no, ignore -> */
	if ((!CF && !ZF)) {goto dummylabel66;}
	/* cmp	TIALD_VIEW.VP_YSEC,31	;on active map? */
	CMP(tiald_view.vp_ysec, 31);
	/* ja	@F			;no, ignore -> */
	if ((dw)(tiald_view.vp_ysec) > (dw)(31)) {goto dummylabel66;}
	/* mov	ax,TIALD_VIEW.VP_XSEC */
	ax = tiald_view.vp_xsec;
	/* mov	FloatWP.WP_XSEC,ax */
	floatwp.wp_xsec = ax;
	/* mov	ax,TIALD_VIEW.VP_YSEC */
	ax = tiald_view.vp_ysec;
	/* mov	FloatWP.WP_YSEC,ax */
	floatwp.wp_ysec = ax;
	/* mov	ax,TIALD_VIEW.VP_XFT */
	ax = tiald_view.vp_xft;
	/* mov	FloatWP.WP_XFT,ax */
	floatwp.wp_xft = ax;
	/* mov	ax,TIALD_VIEW.VP_YFT */
	ax = tiald_view.vp_yft;
	/* mov	FloatWP.WP_YFT,ax */
	floatwp.wp_yft = ax;
	/* or	FloatWP.WP_ATTR,WP_VALID */
	OR(floatwp.wp_attr, 0x80);
	/* call	UpdateTgtWP    	;tell AutoRoute */
	CALLF(updatetgtwp, 0);
	/* clc			;cf = 0 (target valid) */
	CLC;
	/* ret */
	RETN(0);
dummylabel66:
	// 4913 
	/* @@:		stc			;cf = 1 (target invalid) */
	STC;
	/* ret */
	RETN(0);
targetmoved:
	// 6625 
	/* test	FloatWP.WP_ATTR,WP_VALID	;waypoint valid? */
	TEST(floatwp.wp_attr, 0x80);
edummylabel20:
	// 4915 
	/* jz	@F				;no -> */
	if (ZF) {goto dummylabel67;}
	/* mov	ax,FloatWP.WP_XSEC */
	ax = floatwp.wp_xsec;
	/* cmp	ax,TIALD_VIEW.VP_XSEC */
	CMP(ax, tiald_view.vp_xsec);
	/* jne	@F			;moved -> */
	if ((dw)(ax) != (dw)(tiald_view.vp_xsec)) {goto dummylabel67;}
	/* mov	ax,FloatWP.WP_YSEC */
	ax = floatwp.wp_ysec;
	/* cmp	ax,TIALD_VIEW.VP_YSEC */
	CMP(ax, tiald_view.vp_ysec);
	/* jne	@F			;moved -> */
	if ((dw)(ax) != (dw)(tiald_view.vp_ysec)) {goto dummylabel67;}
	/* mov	ax,FloatWP.WP_XFT */
	ax = floatwp.wp_xft;
	/* cmp	ax,TIALD_VIEW.VP_XFT */
	CMP(ax, tiald_view.vp_xft);
	/* jne	@F			;moved -> */
	if ((dw)(ax) != (dw)(tiald_view.vp_xft)) {goto dummylabel67;}
	/* mov	ax,FloatWP.WP_YFT */
	ax = floatwp.wp_yft;
	/* cmp	ax,TIALD_VIEW.VP_YFT */
	CMP(ax, tiald_view.vp_yft);
	/* jne	@F			;moved -> */
	if ((dw)(ax) != (dw)(tiald_view.vp_yft)) {goto dummylabel67;}
	/* clc */
	CLC;
	/* ret */
	RETN(0);
dummylabel67:
	// 4917 
	/* @@:		stc			;cf = 1 (target moved) */
	STC;
	/* ret */
	RETN(0);
adjustxyoffsets:
	// 6654 
	/* mov	bp,TDScanSize ;* kill: assume all */
	bp = tdscansize;
	// 0 ;* x motion = sbound(XMickeys, -255, 255) * TDZoom / 2
	// 0 ;*
	// 0 ;* x offset = TDXOffset + TDScanSize * x motion / 32768
	// 0 ;*
	// 0 ;* TDXOffset = sbound(x offset, -TDScanSize, TDScanSize)
	// 0 ;* calc x motion
edummylabel21:
	// 4919 
	/* mov	ax,XMickeys */
	ax = xmickeys;
	/* cmp	ax,-255 */
	CMP(ax, -255);
	/* jge	__m2c_macrolocal_193_TestHi */
	if ((short)(ax) >= (short)(-255)) {goto __m2c_macrolocal_193_testhi;}
	/* mov	ax,-255 */
	ax = -255;
	/* jmp	__m2c_macrolocal_193_TestOk */
	goto __m2c_macrolocal_193_testok;
__m2c_macrolocal_193_testhi:
	// 4921 
	/* __m2c_macrolocal_193_TestHi:		cmp	ax,255 */
	CMP(ax, 255);
	/* jle	__m2c_macrolocal_193_TestOk */
	if ((short)(ax) <= (short)(255)) {goto __m2c_macrolocal_193_testok;}
	/* mov	ax,255 */
	ax = 255;
__m2c_macrolocal_193_testok:
	// 4923 
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* imul	dx */
	IMUL1_2(dx);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;* calc x offset (use 32-bit maths)
	/* imul	bp */
	IMUL1_2(bp);
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
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,TDXOffset */
	ax = tdxoffset;
	/* cwd */
	CWD;
	/* add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	bx,dx		;abs(offset) */
	XOR(bx, dx);
	/* xor	cx,dx */
	XOR(cx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* cmp	cx,0		;offset > 65,535? */
	CMP(cx, 0);
	/* ja	@F		;yes -> */
	if ((dw)(cx) > (dw)(0)) {goto dummylabel68;}
	/* cmp	bx,bp		;offset > scan size? */
	CMP(bx, bp);
	/* jbe	XOk		;no -> */
	if ((dw)(bx) <= (dw)(bp)) {goto xok;}
dummylabel68:
	// 4925 
	/* @@:		mov	bx,bp		;limit */
	bx = bp;
xok:
	// 4927 
	/* XOk:		xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* mov	TDXOffset,bx */
	tdxoffset = bx;
	// 0 ;* y motion = sbound(-YMickeys, -255, 255) * TDZoom / 2
	// 0 ;*
	// 0 ;* y offset = TDYOffset + TDScanSize * y motion / 32768
	// 0 ;*
	// 0 ;* TDYOffset = sbound(y offset, -TDScanSize, TDScanSize)
	// 0 ;* calc y motion
	/* mov	ax,YMickeys */
	ax = ymickeys;
	/* neg	ax		;reverse sense */
	NEG(ax);
	/* cmp	ax,-255 */
	CMP(ax, -255);
	/* jge	__m2c_macrolocal_195_TestHi */
	if ((short)(ax) >= (short)(-255)) {goto __m2c_macrolocal_195_testhi;}
	/* mov	ax,-255 */
	ax = -255;
	/* jmp	__m2c_macrolocal_195_TestOk */
	goto __m2c_macrolocal_195_testok;
__m2c_macrolocal_195_testhi:
	// 4929 
	/* __m2c_macrolocal_195_TestHi:		cmp	ax,255 */
	CMP(ax, 255);
	/* jle	__m2c_macrolocal_195_TestOk */
	if ((short)(ax) <= (short)(255)) {goto __m2c_macrolocal_195_testok;}
	/* mov	ax,255 */
	ax = 255;
__m2c_macrolocal_195_testok:
	// 4931 
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* imul	dx */
	IMUL1_2(dx);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;* calc y offset (use 32-bit maths)
	/* imul	bp */
	IMUL1_2(bp);
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
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,TDYOffset */
	ax = tdyoffset;
	/* cwd */
	CWD;
	/* add	bx,ax */
	ADD(bx, ax);
	/* adc	cx,dx */
	ADC(cx, dx);
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* xor	bx,dx		;abs(offset) */
	XOR(bx, dx);
	/* xor	cx,dx */
	XOR(cx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* cmp	cx,0		;offset > 65,535? */
	CMP(cx, 0);
	/* ja	@F		;yes -> */
	if ((dw)(cx) > (dw)(0)) {goto dummylabel69;}
	/* cmp	bx,bp		;offset > scan size? */
	CMP(bx, bp);
	/* jbe	YOk		;no -> */
	if ((dw)(bx) <= (dw)(bp)) {goto yok;}
dummylabel69:
	// 4933 
	/* @@:		mov	bx,bp		;limit */
	bx = bp;
yok:
	// 4935 
	/* YOk:		xor	bx,dx		;restore sign */
	XOR(bx, dx);
	/* sub	bx,dx */
	SUB(bx, dx);
	/* mov	TDYOffset,bx */
	tdyoffset = bx;
	/* ret */
	RETN(0);
rotatexyoffsets:
	// 6771 
	// 0 ;--------------------------------
	// 0 ;* rotate x and y offsets wrt hdg
	// 0 ;--------------------------------
edummylabel22:
	// 4937 
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6781 						mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6782 						mov	di,CosTable[bx] */
	// 0 ;si = sin(hdg), di = cos(hdg)
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* yr = y * cos(hdg) - x * sin(hdg)
	/* mov	ax,TDYOffset */
	ax = tdyoffset;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,TDXOffset */
	ax = tdxoffset;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* shl	bx,1		;1/2 bit round up */
	SHL(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	ax,cx */
	ax = cx;
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	// 0 ;* xr = x * cos(hdg) + y * sin(hdg)
	/* mov	ax,TDXOffset */
	ax = tdxoffset;
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* mov	bp,ax */
	bp = ax;
	/* mov	di,dx */
	di = dx;
	/* mov	ax,TDYOffset */
	ax = tdyoffset;
	/* imul	si */
	IMUL1_2(si);
	/* shl	ax,1		;adjust after fractional multiply */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,di */
	ADC(dx, di);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
	/* ret */
	RETN(0);
recalcxyoffsets:
	// 6839 
	/* mov	TDDrag,0	;assume point within scan limits */
	tddrag = 0;
	// 0 ;* x1 = xsec * 16384 + xft + 8192
edummylabel23:
	// 4939 
	/* mov	cx,M_VIEW.VP_XSEC	;xsec * 65536 */
	cx = m_view.vp_xsec;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* mov	bp,M_VIEW.VP_XFT */
	bp = m_view.vp_xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* x2 = xsec * 16384 + xft + 8192
	/* mov	dx,TIALD_VIEW.VP_XSEC	;xsec * 65536 */
	dx = tiald_view.vp_xsec;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* mov	bp,TIALD_VIEW.VP_XFT */
	bp = tiald_view.vp_xft;
	/* add	bp,8192 */
	ADD(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* Dx = x2 - x1
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* push	ax		;store Dx */
	PUSH(ax);
	/* push	dx */
	PUSH(dx);
	// 0 ;* y1 = -(ysec * 16384) + yft - 8192
	/* mov	dx,M_VIEW.VP_YSEC	;ysec * 65536 */
	dx = m_view.vp_ysec;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	bp,M_VIEW.VP_YFT */
	bp = m_view.vp_yft;
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	ax,bp */
	ADD(ax, bp);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* y2 = -(ysec * 16384) + yft - 8192
	/* mov	cx,TIALD_VIEW.VP_YSEC	;ysec * 65536 */
	cx = tiald_view.vp_ysec;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* sar	cx,1 */
	SAR(cx, 1);
	/* rcr	bx,1 */
	RCR(bx, 1);
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
	/* mov	bp,TIALD_VIEW.VP_YFT */
	bp = tiald_view.vp_yft;
	/* sub	bp,8192 */
	SUB(bp, 8192);
	/* add	bx,bp */
	ADD(bx, bp);
	/* adc	cx,0 */
	ADC(cx, 0);
	// 0 ;* Dy = y2 - y1
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* pop	dx		;restore Dx */
	POP(dx);
	/* pop	ax */
	POP(ax);
	// 0 ;-----------------------
	// 0 ;* keep offsets in range
	// 0 ;-----------------------
	// 0 ;* Dx = sbound(Dx,-32767,32767)
	// 0 ;* Dy = sbound(Dy,-32767,32767)
	/* mov	si,dx		;store sign(Dx) */
	si = dx;
	/* mov	di,cx		;store sign(Dy) */
	di = cx;
	/* test	dx,dx */
	TEST(dx, dx);
	/* jns	@F */
	if ((short)((dx & dx)) >= 0) {goto dummylabel70;}
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel70:
	// 4941 
	/* @@:		cmp	dx,0		;Dx > 65535? */
	CMP(dx, 0);
	/* ja	LimitDx		;yes -> */
	if ((dw)(dx) > (dw)(0)) {goto limitdx;}
	/* cmp	ax,32767	;Dx > 32767? */
	CMP(ax, 32767);
	/* jbe	@F		;no -> */
	if ((dw)(ax) <= (dw)(32767)) {goto dummylabel71;}
limitdx:
	// 4943 
	/* LimitDx:	mov	ax,32767 */
	ax = 32767;
	/* mov	TDDrag,1 */
	tddrag = 1;
dummylabel71:
	// 4945 
	/* @@:		test	si,si */
	TEST(si, si);
	/* jns	@F */
	if ((short)((si & si)) >= 0) {goto dummylabel72;}
	/* neg	ax		;restore sign */
	NEG(ax);
dummylabel72:
	// 4947 
	/* @@:		test	cx,cx */
	TEST(cx, cx);
	/* jns	@F */
	if ((short)((cx & cx)) >= 0) {goto dummylabel73;}
	/* not	bx */
	bx = ~bx;
	/* not	cx */
	cx = ~cx;
	/* add	bx,1 */
	ADD(bx, 1);
	/* adc	cx,0 */
	ADC(cx, 0);
dummylabel73:
	// 4949 
	/* @@:		cmp	cx,0		;Dy > 65535? */
	CMP(cx, 0);
	/* ja	LimitDy		;yes -> */
	if ((dw)(cx) > (dw)(0)) {goto limitdy;}
	/* cmp	bx,32767	;Dy > 32767? */
	CMP(bx, 32767);
	/* jbe	@F		;no -> */
	if ((dw)(bx) <= (dw)(32767)) {goto dummylabel74;}
limitdy:
	// 4951 
	/* LimitDy:	mov	bx,32767 */
	bx = 32767;
	/* mov	TDDrag,1 */
	tddrag = 1;
dummylabel74:
	// 4953 
	/* @@:		test	di,di */
	TEST(di, di);
	/* jns	@F */
	if ((short)((di & di)) >= 0) {goto dummylabel75;}
	/* neg	bx		;restore sign */
	NEG(bx);
dummylabel75:
	// 4955 
	/* @@:		mov	TmpX,ax */
	tmpx = ax;
	/* mov	TmpY,bx */
	tmpy = bx;
	// 0 ;-----------------------------------------
	// 0 ;* rotate north orientated offsets wrt hdg
	// 0 ;-----------------------------------------
	// 0 ;* if hdg <= 256pdegs then
	// 0 ;*    hdg = (-hdg and 511) (counter clockwise)
	// 0 ;* else
	// 0 ;*    hdg = 512 - hdg (clockwise)
	// 0 ;* endif
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* cmp	ax,256 */
	CMP(ax, 256);
	/* ja	@F */
	if ((dw)(ax) > (dw)(256)) {goto dummylabel76;}
	/* neg	ax */
	NEG(ax);
	/* and	ax,511 */
	AND(ax, 511);
	/* jmp	HdgOk */
	goto hdgok;
dummylabel76:
	// 4957 
	/* @@:		mov	ax,512 */
	ax = 512;
	/* sub	ax,M_VIEW.VP_HDG */
	SUB(ax, m_view.vp_hdg);
hdgok:
	// 4959 
	/* mov	bx,ax */
	bx = ax;
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(si = *(dw*)(((db*)&sintable)+bx););	// 6974 mov	si,SinTable[bx] */
/* m2c-phantom removed: 	R(di = *(dw*)(((db*)&costable)+bx););	// 6975 mov	di,CosTable[bx] */
	// 0 ;si = sin(hdg), di = cos(hdg)
	/* mov	si,SinTable[bx] */
	si = *(dw*)(((db*)&sintable)+bx);
	/* mov	di,CosTable[bx] */
	di = *(dw*)(((db*)&costable)+bx);
	// 0 ;* xr = x * cos(hdg) + y * sin(hdg)
	/* mov	ax,TmpX */
	ax = tmpx;
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
	/* mov	ax,TmpY */
	ax = tmpy;
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
	/* cwd */
	CWD;
	/* xchg	bx,ax */
	XCHG(bx, ax);
	/* mov	cx,dx */
	cx = dx;
	/* cwd */
	CWD;
	/* add	ax,bx */
	ADD(ax, bx);
	/* adc	dx,cx */
	ADC(dx, cx);
	/* mov	bp,0		;assume +ve */
	bp = 0;
	/* jns	@F   		;+ve */
	if ((short)(dx) >= 0) {goto dummylabel77;}
	/* mov	bp,-1 */
	bp = -1;
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel77:
	// 4961 
	/* @@:		cmp	dx,0		;xr > 65535? */
	CMP(dx, 0);
	/* ja	LimitXr		;yes -> */
	if ((dw)(dx) > (dw)(0)) {goto limitxr;}
	/* cmp	ax,TDScanSize	;within scan limits? */
	CMP(ax, tdscansize);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(tdscansize)) {goto dummylabel78;}
limitxr:
	// 4963 
	/* LimitXr:	mov	ax,TDScanSize */
	ax = tdscansize;
	/* mov	TDDrag,1 */
	tddrag = 1;
dummylabel78:
	// 4965 
	/* @@: 		xor	ax,bp		;restore sign */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	TDXOffset,ax */
	tdxoffset = ax;
	// 0 ;* yr = y * cos(hdg) - x * sin(hdg)
	/* mov	ax,TmpY */
	ax = tmpy;
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
	/* mov	ax,TmpX */
	ax = tmpx;
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
	/* cwd */
	CWD;
	/* xchg	bx,ax */
	XCHG(bx, ax);
	/* mov	cx,dx */
	cx = dx;
	/* cwd */
	CWD;
	/* sub	ax,bx */
	SUB(ax, bx);
	/* sbb	dx,cx */
	SBB(dx, cx);
	/* mov	bp,0		;assume +ve */
	bp = 0;
	/* jns	@F   		;+ve */
	if ((short)(dx) >= 0) {goto dummylabel79;}
	/* mov	bp,-1 */
	bp = -1;
	/* not	ax */
	ax = ~ax;
	/* not	dx */
	dx = ~dx;
	/* add	ax,1 */
	ADD(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
dummylabel79:
	// 4967 
	/* @@:		cmp	dx,0		;yr > 65535? */
	CMP(dx, 0);
	/* ja	LimitYr		;yes -> */
	if ((dw)(dx) > (dw)(0)) {goto limityr;}
	/* cmp	ax,TDScanSize	;within scan limits? */
	CMP(ax, tdscansize);
	/* jbe	@F		;yes -> */
	if ((dw)(ax) <= (dw)(tdscansize)) {goto dummylabel80;}
limityr:
	// 4969 
	/* LimitYr:	mov	ax,TDScanSize */
	ax = tdscansize;
	/* mov	TDDrag,1 */
	tddrag = 1;
dummylabel80:
	// 4971 
	/* @@: 		xor	ax,bp		;restore sign */
	XOR(ax, bp);
	/* sub	ax,bp */
	SUB(ax, bp);
	/* mov	TDYOffset,ax */
	tdyoffset = ax;
	/* ret */
	RETN(0);
adjustzoom:
	// 7065 
	// 0 ;* y motion = sbound(YMickeys, -255, 255)
	// 0 ;*
	// 0 ;* TDZoom = sbound(TDZoom + y motion, 1, 255)
edummylabel24:
	// 4973 
	/* mov	dx,YMickeys */
	dx = ymickeys;
	/* cmp	dx,-255 */
	CMP(dx, -255);
	/* jge	__m2c_macrolocal_209_TestHi */
	if ((short)(dx) >= (short)(-255)) {goto __m2c_macrolocal_209_testhi;}
	/* mov	dx,-255 */
	dx = -255;
	/* jmp	__m2c_macrolocal_209_TestOk */
	goto __m2c_macrolocal_209_testok;
__m2c_macrolocal_209_testhi:
	// 4975 
	/* __m2c_macrolocal_209_TestHi:		cmp	dx,255 */
	CMP(dx, 255);
	/* jle	__m2c_macrolocal_209_TestOk */
	if ((short)(dx) <= (short)(255)) {goto __m2c_macrolocal_209_testok;}
	/* mov	dx,255 */
	dx = 255;
__m2c_macrolocal_209_testok:
	// 4977 
	/* mov	ax,TDZoom */
	ax = tdzoom;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,1 */
	CMP(ax, 1);
	/* jge	__m2c_macrolocal_210_TestHi */
	if ((short)(ax) >= (short)(1)) {goto __m2c_macrolocal_210_testhi;}
	/* mov	ax,1 */
	ax = 1;
	/* jmp	__m2c_macrolocal_210_TestOk */
	goto __m2c_macrolocal_210_testok;
__m2c_macrolocal_210_testhi:
	// 4979 
	/* __m2c_macrolocal_210_TestHi:		cmp	ax,255 */
	CMP(ax, 255);
	/* jle	__m2c_macrolocal_210_TestOk */
	if ((short)(ax) <= (short)(255)) {goto __m2c_macrolocal_210_testok;}
	/* mov	ax,255 */
	ax = 255;
__m2c_macrolocal_210_testok:
	// 4981 
	/* mov	TDZoom,ax */
	tdzoom = ax;
	/* ret */
	RETN(0);
adjustlock:
	// 7103 
	/* mov	bp,TDScanSize ;*       use RotateXYOffsets. */
	bp = tdscansize;
	// 0 ;* x motion = sbound(XMickeys, -255, 255) * TDZoom / 2
	// 0 ;*
	// 0 ;* x offset = TDScanSize * x motion / 32768
	// 0 ;* calc x motion
edummylabel25:
	// 4983 
	/* mov	ax,XMickeys */
	ax = xmickeys;
	/* cmp	ax,-255 */
	CMP(ax, -255);
	/* jge	__m2c_macrolocal_211_TestHi */
	if ((short)(ax) >= (short)(-255)) {goto __m2c_macrolocal_211_testhi;}
	/* mov	ax,-255 */
	ax = -255;
	/* jmp	__m2c_macrolocal_211_TestOk */
	goto __m2c_macrolocal_211_testok;
__m2c_macrolocal_211_testhi:
	// 4985 
	/* __m2c_macrolocal_211_TestHi:		cmp	ax,255 */
	CMP(ax, 255);
	/* jle	__m2c_macrolocal_211_TestOk */
	if ((short)(ax) <= (short)(255)) {goto __m2c_macrolocal_211_testok;}
	/* mov	ax,255 */
	ax = 255;
__m2c_macrolocal_211_testok:
	// 4987 
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* imul	dx */
	IMUL1_2(dx);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;* calc x offset
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	TDXOffset,dx */
	tdxoffset = dx;
	// 0 ;* y motion = sbound(-YMickeys, -255, 255) * TDZoom / 2
	// 0 ;*
	// 0 ;* y offset = TDScanSize * y motion / 32768
	// 0 ;* calc y motion
	/* mov	ax,YMickeys */
	ax = ymickeys;
	/* neg	ax		;reverse sense */
	NEG(ax);
	/* cmp	ax,-255 */
	CMP(ax, -255);
	/* jge	__m2c_macrolocal_213_TestHi */
	if ((short)(ax) >= (short)(-255)) {goto __m2c_macrolocal_213_testhi;}
	/* mov	ax,-255 */
	ax = -255;
	/* jmp	__m2c_macrolocal_213_TestOk */
	goto __m2c_macrolocal_213_testok;
__m2c_macrolocal_213_testhi:
	// 4989 
	/* __m2c_macrolocal_213_TestHi:		cmp	ax,255 */
	CMP(ax, 255);
	/* jle	__m2c_macrolocal_213_TestOk */
	if ((short)(ax) <= (short)(255)) {goto __m2c_macrolocal_213_testok;}
	/* mov	ax,255 */
	ax = 255;
__m2c_macrolocal_213_testok:
	// 4991 
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* imul	dx */
	IMUL1_2(dx);
	/* sar	dx,1 */
	SAR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	// 0 ;* calc y offset
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	TDYOffset,dx */
	tdyoffset = dx;
	// 0 ;* move lock
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
	/* ret */
	RETN(0);
radardisp:
	// 7175 
	/* test	FloatWP.WP_ATTR,WP_VALID	;waypoint valid? */
	TEST(floatwp.wp_attr, 0x80);
edummylabel26:
	// 4993 
	/* jz	@F				;no -> */
	if (ZF) {goto dummylabel81;}
	// 0 ;* init viewmode (for TAB display)
	/* mov	ax,TV3_VIEWMODE */
	ax = 10;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;* init viewpoint (from waypoint)
	/* mov	ax,FloatWP.WP_XSEC */
	ax = floatwp.wp_xsec;
	/* mov	TMP_VIEW.VP_XSEC,ax */
	tmp_view.vp_xsec = ax;
	/* mov	ax,FloatWP.WP_YSEC */
	ax = floatwp.wp_ysec;
	/* mov	TMP_VIEW.VP_YSEC,ax */
	tmp_view.vp_ysec = ax;
	/* mov	ax,FloatWP.WP_XFT */
	ax = floatwp.wp_xft;
	/* mov	TMP_VIEW.VP_XFT,ax */
	tmp_view.vp_xft = ax;
	/* mov	ax,FloatWP.WP_YFT */
	ax = floatwp.wp_yft;
	/* mov	TMP_VIEW.VP_YFT,ax */
	tmp_view.vp_yft = ax;
	/* mov	si,OFFSET TMP_VIEW */
	si = m2c::near_offset_external(tmp_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,50 */
	ADD(ax, 50);
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&tmp_view+vp_zft_lo)) = ax;
	/* mov	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	*((dw*)((db*)&tmp_view+vp_zft_hi)) = 0;
	/* mov	TMP_VIEW.VP_HDG,0 */
	tmp_view.vp_hdg = 0;
	/* mov	TMP_VIEW.VP_PITCH,384 */
	tmp_view.vp_pitch = 384;
	/* mov	TMP_VIEW.VP_ROLL,0 */
	tmp_view.vp_roll = 0;
	// 0 ;* draw visual (plan view of target)
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	// 0 ;* restore viewmode (for navig view)
	/* mov	ax,NUL_VIEWMODE */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
	// 0 ;* floating waypoint invalid
dummylabel81:
	// 4995 
	/* @@:		call	InvalidDisp */
	CALL(invaliddisp, 0);
	/* ret */
	RETN(0);
cleardisp:
	// 7223 
	/* push	si ;* kill: assume all (except si) */
	PUSH(si);
edummylabel27:
	// 4997 
	/* mov	al,COL_CRT1 */
	al = 160;
	/* mov	cx,TAB_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	bl,TAB_Y_ORG[si] */
	bl = m2c::getdata(((tab*)raddr(ds,si))->tab_y_org);
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,TAB_WIDTH-1 */
	ADD(dx, 96-1);
	/* mov	bh,bl */
	bh = bl;
	/* add	bh,TAB_DEPTH-1 */
	ADD(bh, 72-1);
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
damageddisp:
	// 7244 
	/* call	ClearDisp ;* kill: assume all */
	CALL(cleardisp, 0);
edummylabel28:
	// 4999 
	/* mov	cx,36 */
	cx = 36;
damagedloop:
	// 5001 
	/* DamagedLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* call	RandX */
	CALLF(randx, 0);
	/* and	al,07fh */
	AND(al, 0x07f);
	/* cmp	al,TAB_DEPTH */
	CMP(al, 72);
	/* jae	NextDamage */
	if ((db)(al) >= (db)(72)) {goto nextdamage;}
	/* add	al,TAB_Y_ORG[si] */
	ADD(al, ((tab*)raddr(ds,si))->tab_y_org);
	/* mov	bl,al */
	bl = al;
	/* mov	cx,TAB_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	dx,TAB_WIDTH-1 */
	ADD(dx, 96-1);
	/* mov	al,COL_CRT6 */
	al = 165;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
nextdamage:
	// 5003 
	/* NextDamage:	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* loop	DamagedLoop */
	LOOP(damagedloop);
	/* ret */
	RETN(0);
invaliddisp:
	// 7273 
	/* call	ClearDisp ;* kill: assume all (except si) */
	CALL(cleardisp, 0);
edummylabel29:
	// 5005 
	/* mov	bl,TAB_Y_ORG[si] */
	bl = m2c::getdata(((tab*)raddr(ds,si))->tab_y_org);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-25 */
	ADD(bl, ((72/2-1)+8)-25);
	/* add	bh,YC+25 */
	ADD(bh, ((72/2-1)+8)+25);
	/* mov	cx,TAB_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC-25 */
	ADD(cx, (96/2)-25);
	/* add	dx,XC+25 */
	ADD(dx, (96/2)+25);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* mov	bl,TAB_Y_ORG[si] */
	bl = m2c::getdata(((tab*)raddr(ds,si))->tab_y_org);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-25 */
	ADD(bl, ((72/2-1)+8)-25);
	/* add	bh,YC+25 */
	ADD(bh, ((72/2-1)+8)+25);
	/* mov	cx,TAB_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC+25 */
	ADD(cx, (96/2)+25);
	/* add	dx,XC-25 */
	ADD(dx, (96/2)-25);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
flirdisp_ori:
	// 7588 
	/* mov InCockpit,1 ;* kill: assume all */
	incockpit = 1;
edummylabel30:
	// 5007 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 7592 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel82;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 7594 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* cmp TAB2.TAB_MODE,TAB_TIALD */
	CMP(tab2.tab_mode, 10);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(10)) {goto dummylabel82;}
	/* add bx, 2 ;Pointer skips to previous TAB display, i.e., TIALD normal-sized view */
	ADD(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel31:
	// 5009 
	/* ret */
	RETN(0);
dummylabel82:
	// 5011 
	/* mov	ax,TV3_VIEWMODE	;set viewmode for TAB */
	ax = 10;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 7610 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 7611 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 7612 mov	di,OFFSET TMP_VIEW */
	// 7613 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,NUL_VIEWMODE	;set viewmode for navig view */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
flirdisp_ori2:
	// 7629 
	/* mov InCockpit,1 ;* kill: assume all */
	incockpit = 1;
edummylabel32:
	// 5013 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 7633 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel83;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 7635 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* cmp TAB2.TAB_MODE,TAB_TIALD */
	CMP(tab2.tab_mode, 10);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(10)) {goto dummylabel83;}
	/* add bx, 2 ;Pointer skips to previous TAB display, i.e., TIALD normal-sized view */
	ADD(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel33:
	// 5015 
	/* ret */
	RETN(0);
dummylabel83:
	// 5017 
	/* mov	ax,TV3_VIEWMODE	;set viewmode for TAB */
	ax = 10;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 7651 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 7652 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 7653 mov	di,OFFSET TMP_VIEW */
	// 7654 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;mov	TMP_VIEW.VP_ROLL,0 ;Added by Frankie Kam on 30/7/2018 to inhibit roll
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,32	;add zft displacement ; 8 */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 32);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,EXT_VIEWMODE	;set viewmode for navig view */
	ax = 4;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* ret */
	RETN(0);
flirdisp_ori3:
	// 7671 
	/* mov InCockpit,1 ;* kill: assume all */
	incockpit = 1;
edummylabel34:
	// 5019 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 7675 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel84;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 7677 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* cmp TAB2.TAB_MODE,TAB_TIALD */
	CMP(tab2.tab_mode, 10);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(10)) {goto dummylabel84;}
	/* add bx, 2 ;Pointer skips to previous TAB display, i.e., TIALD normal-sized view */
	ADD(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel35:
	// 5021 
	/* ret */
	RETN(0);
dummylabel84:
	// 5023 
	/* mov	ax,INT_VIEWMODE	;set viewmode for TAB */
	ax = 0;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 7693 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 7694 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 7695 mov	di,OFFSET TMP_VIEW */
	// 7696 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;mov	TMP_VIEW.VP_ROLL,0 ;Added by Frankie Kam on 30/7/2018 to inhibit roll
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,40	;add zft displacement ; 8 ;190 */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 40);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,NUL_VIEWMODE	;set viewmode for navig view EXT_VIEWMODE */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;HUD Damaged?
	/* cmp SSF_HUD,1 */
	CMP(ssf_hud, 1);
	/* je	@F */
	if ((dw)(ssf_hud) == (dw)(1)) {goto dummylabel85;}
	/* call UpdateHUD */
	CALL(updatehud, 0);
dummylabel85:
	// 5025 
	/* ret */
	RETN(0);
flirdisp_ori4:
	// 7719 
	/* mov InCockpit,1 ;* kill: assume all */
	incockpit = 1;
edummylabel36:
	// 5027 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 7723 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel86;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 7725 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* cmp TAB2.TAB_MODE,TAB_TIALD */
	CMP(tab2.tab_mode, 10);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(10)) {goto dummylabel86;}
	/* add bx, 2 ;Pointer skips to previous TAB display, i.e., TIALD normal-sized view */
	ADD(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel37:
	// 5029 
	/* ret */
	RETN(0);
dummylabel86:
	// 5031 
	/* mov	ax,EXT_VIEWMODE	;set viewmode for TAB */
	ax = 4;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET TMP_VIEW */
	di = m2c::near_offset_external(tmp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 7741 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 7742 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(tmp_view););	// 7743 mov	di,OFFSET TMP_VIEW */
	// 7744 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;mov	TMP_VIEW.VP_ROLL,0 ;Added by Frankie Kam on 30/7/2018 to inhibit roll
	/* add	WORD PTR TMP_VIEW.VP_ZFT_LO,8	;add zft displacement ; 8 */
	ADD(*((dw*)((db*)&tmp_view+vp_zft_lo)), 8);
	/* adc	WORD PTR TMP_VIEW.VP_ZFT_HI,0 */
	ADC(*((dw*)((db*)&tmp_view+vp_zft_hi)), 0);
	/* call	DrawIRImage */
	CALL(drawirimage, 0);
	/* mov	ax,EXT_VIEWMODE	;set viewmode for navig view */
	ax = 4;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;HUD Damaged?
	/* cmp SSF_HUD,1 */
	CMP(ssf_hud, 1);
	/* je	@F */
	if ((dw)(ssf_hud) == (dw)(1)) {goto dummylabel87;}
	/* call UpdateHUD2 */
	CALL(updatehud2, 0);
dummylabel87:
	// 5033 
	// 0 ;call DrawStandby2
	// 0 ;mov	si,OFFSET Cannon2$
	// 0 ;call	Print$
	/* ret */
	RETN(0);
tialddisp_ori:
	// 7790 
	/* mov InCockpit,1 ;*	 It is not possible to designate outside of the active map area. */
	incockpit = 1;
edummylabel38:
	// 5035 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 7794 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel88;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 7796 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* cmp TAB2.TAB_MODE,TAB_FLIR */
	CMP(tab2.tab_mode, 6);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(6)) {goto dummylabel88;}
	/* add bx, 2 ;Pointer skips to next TAB display, i.e., TIALD full-sized view */
	ADD(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel39:
	// 5037 
	/* ret */
	RETN(0);
dummylabel88:
	// 5039 
	// 0 ;----------------------------
	// 0 ;* check operating conditions
	// 0 ;----------------------------
	// 0 ;cmp	TAB2.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je @F
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto dummylabel89;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto dummylabel89;}
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jae	TIALDOk_Ori				;no -> */
	if ((dw)(trueradalt) >= (dw)(100)) {goto tialdok_ori;}
dummylabel89:
	// 5041 
	/* @@:		mov	TDMode,TIALD_INIT */
	tdmode = 0;
	/* call	InvalidDisp_Ori */
	CALL(invaliddisp_ori, 0);
	/* jmp	TIALDExit_Ori */
	goto tialdexit_ori;
	// 0 ;---------------
	// 0 ;* init viewmode
	// 0 ;---------------
tialdok_ori:
	// 5043 
	/* TIALDOk_Ori:	mov	ax,TV3_VIEWMODE */
	ax = 10;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;----------------------------
	// 0 ;* store visual configuration
	// 0 ;----------------------------
	/* push	WORD PTR GradEnabled */
	PUSH(*(dw*)(&gradenabled));
	/* push	WORD PTR StarsEnabled */
	PUSH(*(dw*)(&starsenabled));
	/* push	WORD PTR CloudsEnabled */
	PUSH(*(dw*)(&cloudsenabled));
	/* push	WORD PTR HillTextEnabled */
	PUSH(*(dw*)(&hilltextenabled));
	/* push	SecScanCnt1 */
	PUSH(secscancnt1);
	/* push	SecScanOff1 */
	PUSH(secscanoff1);
	/* push	SecScanCnt2 */
	PUSH(secscancnt2);
	/* push	SecScanOff2 */
	PUSH(secscanoff2);
	// 0 ;-----------------------------
	// 0 ;* modify visual configuration
	// 0 ;-----------------------------
	// 0 ;* if night or foggy use IR visual colours
	/* cmp	Night,1		;Dusk (still light enough to see)? */
	CMP(night, 1);
	/* je	SkipIRCols_Ori	;no -> */
	if ((dw)(night) == (dw)(1)) {goto skipircols_ori;}
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel90;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipIRCols_Ori	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipircols_ori;}
dummylabel90:
	// 5045 
	// 0 ;call CheckForNVG
	// 0 ;call	SetIRPalette
	// 0 ;mov	StarsEnabled,0
skipircols_ori:
	// 5047 
	/* SkipIRCols_Ori:	mov	GradEnabled,0 */
	gradenabled = 0;
	/* mov	CloudsEnabled,0 */
	cloudsenabled = 0;
	/* mov	HillTextEnabled,0 */
	hilltextenabled = 0;
	/* mov	SecScanCnt1,5		;minimize range */
	secscancnt1 = 5;
	/* mov	SecScanOff1,-2 */
	secscanoff1 = -2;
	/* mov	SecScanCnt2,5 */
	secscancnt2 = 5;
	/* mov	SecScanOff2,-2 */
	secscanoff2 = -2;
	// 0 ;----------------------
	// 0 ;* calc TIALD scan size
	// 0 ;----------------------
	/* call	CalcScanSize */
	CALL(calcscansize, 0);
	// 0 ;-----------------
	// 0 ;* clear drag flag
	// 0 ;-----------------
	/* mov	TDDrag,0 */
	tddrag = 0;
	// 0 ;------------------
	// 0 ;* read mouse input
	// 0 ;------------------
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* jne	@F		;yes -> */
	if ((dw)(disableinput) != (dw)(0)) {goto dummylabel91;}
	/* mov	si,TABPtr */
	si = tabptr;
	/* test	[si].TAB_HAS_MOUSE,1	;mouse available? */
	TEST(*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)), 1);
	/* jnz	ReadTIALDMouse_Ori		;yes -> */
	if ((*((db*)((db*)&((tab*)raddr(ds,si))->tab_has_mouse)) & 1) != 0) {goto readtialdmouse_ori;}
	// 0 ;* null input from mouse
dummylabel91:
	// 5049 
	/* @@:		xor	ax,ax */
	XOR(ax, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	XMickeys,cx */
	xmickeys = cx;
	/* mov	YMickeys,bx */
	ymickeys = bx;
	/* mov	TDZoomKey,0 */
	tdzoomkey = 0;
	/* jmp	SortTDMode_Ori */
	goto sorttdmode_ori;
readtialdmouse_ori:
	// 5051 
	/* ReadTIALDMouse_Ori:	mov	al,Key[K_CTRL]	;update zoom override flag */
	al = *((&key)+29);
	/* mov	TDZoomKey,al */
	tdzoomkey = al;
	/* call	ReadMouseMotion */
	CALLF(readmousemotion, 0);
	// 0 ;* note: al = 1 = lhs button pressed
	// 0 ;*       ah = 1 = rhs button pressed
	// 0 ;*       cx = XMickeys (-32768 .. 32767)
	// 0 ;*       bx = YMickeys (-32768 .. 32767)
	// 0 ;*       dl = 1 = lhs button just pressed
	// 0 ;*       dh = 1 = rhs button just pressed
	// 0 ;-------------
	// 0 ;* select mode
	// 0 ;-------------
sorttdmode_ori:
	// 5053 
	/* SortTDMode_Ori:	mov	bx,TDMode */
	bx = tdmode;
__disp=*(dw*)(((db*)&tdswitch_ori)+bx);
	/* jmp	TDSwitch_Ori[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
tialdinit_ori:
	// 5055 
	// 0 ;---------------------------
	// 0 ;* init mode ensures start up into search mode regardless of mouse input
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori */
	goto intosearch_ori;
	// 0 ;---------------------------
tialdsearch_ori:
	// 5057 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel92;}
	/* push	dx */
	PUSH(dx);
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* switch to adjust lock mode?
dummylabel92:
	// 5059 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel93;}
	/* call	SetTarget */
	CALL(settarget, 0);
	/* jc	@F		;target invalid -> */
	if (CF) {goto dummylabel93;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock_Ori */
	goto intoadjustlock_ori;
	// 0 ;* switch to zoom mode?
dummylabel93:
	// 5061 
	/* @@:		test	TDZoomKey,1	;CTRL key pressed? */
	TEST(tdzoomkey, 1);
	/* jz	IntoSearch_Ori	;no -> */
	if (!(tdzoomkey & 1)) {goto intosearch_ori;}
	/* mov	TDMode,TIALD_ZOOM */
	tdmode = 4;
	/* jmp	IntoZoom_Ori */
	goto intozoom_ori;
	// 0 ;* search within viewing window
intosearch_ori:
	// 5063 
	/* IntoSearch_Ori:	call	SetDatum */
	CALL(setdatum, 0);
	/* call	AdjustXYOffsets */
	CALL(adjustxyoffsets, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
	/* jmp	ContVisual_Ori */
	goto contvisual_ori;
	// 0 ;---------------------------
tialdzoom_ori:
	// 5065 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel94;}
	/* push	dx */
	PUSH(dx);
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* switch to adjust lock mode?
dummylabel94:
	// 5067 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel95;}
	/* call	SetTarget */
	CALL(settarget, 0);
	/* jc	@F		;target invalid -> */
	if (CF) {goto dummylabel95;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock_Ori */
	goto intoadjustlock_ori;
	// 0 ;* switch to search mode?
dummylabel95:
	// 5069 
	/* @@:		test	TDZoomKey,1	;CTRL key released? */
	TEST(tdzoomkey, 1);
	/* jnz	IntoZoom_Ori	;no -> */
	if ((tdzoomkey & 1) != 0) {goto intozoom_ori;}
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori */
	goto intosearch_ori;
	// 0 ;* adjust zoom
intozoom_ori:
	// 5071 
	/* IntoZoom_Ori:	call	AdjustZoom */
	CALL(adjustzoom, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;drag point? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel96;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
dummylabel96:
	// 5073 
	/* @@:		jmp	ContVisual_Ori */
	goto contvisual_ori;
	// 0 ;---------------------------
tialdadjustlock_ori:
	// 5075 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel97;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori */
	goto intosearch_ori;
	// 0 ;* switch to target lock mode?
dummylabel97:
	// 5077 
	/* @@:		test	al,al		;lh button released? */
	TEST(al, al);
	/* jnz	IntoAdjustLock_Ori	;no -> */
	if ((al & al) != 0) {goto intoadjustlock_ori;}
	/* mov	TDMode,TIALD_TGT_LOCK */
	tdmode = 8;
	/* jmp	IntoTargetLock_Ori */
	goto intotargetlock_ori;
intoadjustlock_ori:
	// 5079 
	/* IntoAdjustLock_Ori:	call	AdjustLock */
	CALL(adjustlock, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;drag point? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel98;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
dummylabel98:
	// 5081 
	/* @@:		call	SetTarget */
	CALL(settarget, 0);
	/* jnc	ContVisual_Ori	;target valid -> */
	if (!CF) {goto contvisual_ori;}
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori */
	goto intosearch_ori;
	// 0 ;---------------------------
tialdtargetlock_ori:
	// 5083 
	// 0 ;---------------------------
	// 0 ;* has target moved (or cancelled) externally?
	/* call	TargetMoved	;moved (or cancelled)? */
	CALL(targetmoved, 0);
	/* jc	CancelLock_Ori	;yes -> */
	if (CF) {goto cancellock_ori;}
	// 0 ;* cancel target designation (switch to search mode)?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel99;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
cancellock_ori:
	// 5085 
	/* CancelLock_Ori:	call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori */
	goto intosearch_ori;
	// 0 ;* return to adjust lock mode?
dummylabel99:
	// 5087 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel100;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock_Ori */
	goto intoadjustlock_ori;
	// 0 ;* adjust zoom?
dummylabel100:
	// 5089 
	/* @@:	 	test	TDZoomKey,1	;CTRL key pressed? */
	TEST(tdzoomkey, 1);
	/* jz	IntoTargetLock_Ori	;no -> */
	if (!(tdzoomkey & 1)) {goto intotargetlock_ori;}
	/* call	AdjustZoom */
	CALL(adjustzoom, 0);
intotargetlock_ori:
	// 5091 
	/* IntoTargetLock_Ori:	call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;within scan limits? */
	TEST(tddrag, 1);
	/* jz	ContVisual_Ori	;yes -> */
	if (!(tddrag & 1)) {goto contvisual_ori;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori */
	goto intosearch_ori;
	// 0 ;---------------------------
contvisual_ori:
	// 5093 
	// 0 ;---------------------------
	// 0 ;* vp alt = max(TDScanSize * TDZoom / 256, gnd ht + MIN_OP_RAD_ALT)
	/* mov	ax,TDScanSize */
	ax = tdscansize;
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	dh,al		;store 1/2 bit */
	dh = al;
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* shl	dh,1		;expose 1/2 bit */
	SHL(dh, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* push	ax */
	PUSH(ax);
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,MIN_OP_RAD_ALT */
	ADD(ax, 100);
	/* pop	bx */
	POP(bx);
	/* cmp	bx,ax		;vp alt >= gnd ht + MIN_OP_RAD_ALT? */
	CMP(bx, ax);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(ax)) {goto dummylabel101;}
	/* mov	bx,ax */
	bx = ax;
dummylabel101:
	// 5095 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	// 0 ;* if overcast then
	// 0 ;*    if ac alt >= cloudbase then
	// 0 ;*       if vp alt < cloudbase then
	// 0 ;*          vp alt = cloudbase
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
	/* test	Overcast,1	;overcast? */
	TEST(overcast, 1);
	/* jz	SetVPAlt_Ori	;no -> */
	if (!(overcast & 1)) {goto setvpalt_ori;}
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jb	SetVPAlt_Ori	;ac alt < cloudbase -> */
	if (CF) {goto setvpalt_ori;}
	/* mov	ax,bx */
	ax = bx;
	/* mov	dx,cx */
	dx = cx;
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jae	SetVPAlt_Ori	;vp alt > cloudbase -> */
	if (!CF) {goto setvpalt_ori;}
	/* mov	bx,WORD PTR CloudBase */
	bx = *(dw*)(&cloudbase);
	/* mov	cx,WORD PTR CloudBase+2 */
	cx = *(dw*)(((db*)&cloudbase)+2);
setvpalt_ori:
	// 5097 
	/* SetVPAlt_Ori:	mov	WORD PTR TIALD_VIEW.VP_ZFT_HI,cx */
	*((dw*)((db*)&tiald_view+vp_zft_hi)) = cx;
	/* mov	WORD PTR TIALD_VIEW.VP_ZFT_LO,bx */
	*((dw*)((db*)&tiald_view+vp_zft_lo)) = bx;
	// 0 ;-------------------
	// 0 ;* draw TIALD visual
	// 0 ;-------------------
	// 0 ;* keep TIALD hdg in line with aircraft hdg (even if zoom or lock)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	TIALD_VIEW.VP_HDG,ax */
	tiald_view.vp_hdg = ax;
	// 0 ;* pitched down, no roll
	/* mov	TIALD_VIEW.VP_PITCH,400 ;384           ;hacked by Frankie on 8th July 2018 */
	tiald_view.vp_pitch = 400;
	// 0 ;mov	TIALD_VIEW.VP_ROLL,0               ;hacked by Frankie on 8th July 2018
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	Visual */
	CALLF(visual, 0);
	// 0 ;----------------
	// 0 ;* draw symbology
	// 0 ;----------------
	// 0 ;* update blink timer
	/* mov	ax,TDBlinkTimer */
	ax = tdblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* mov	TDBlinkTimer,ax */
	tdblinktimer = ax;
	/* jnc	@F */
	if (!CF) {goto dummylabel102;}
	/* mov	TDBlinkTimer,TD_BLINK_RATE */
	tdblinktimer = 10;
	/* xor	TDBlink,1	;toggle blink flag */
	XOR(tdblink, 1);
	// 0 ;* if "dragging" then switch cross off for blink period
	/* mov	TDCross,1	;assume cross on */
	tdcross = 1;
	/* jnz	@F		;0 .. 1 (leading edge) -> */
	if (tdblink != 0) {goto dummylabel102;}
	/* test	TDDrag,1	;dragging? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel102;}
	/* mov	TDCross,0	;cross off */
	tdcross = 0;
	// 0 ;* draw symbology wrt mode
dummylabel102:
	// 5099 
	/* @@:		mov	bx,TDMode */
	bx = tdmode;
__disp=*(dw*)(((db*)&tdsymbolswitch_ori)+bx);
	/* jmp	TDSymbolSwitch_Ori[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
tdsymzoom_ori:
	// 5101 
	// 0 ;---------------------------
	/* call	DrawLaserSymbol_Ori */
	CALL(drawlasersymbol_ori, 0);
	/* jmp	TDSymOk_Ori */
	goto tdsymok_ori;
	// 0 ;---------------------------
tdsymadjustlock_ori:
	// 5103 
	// 0 ;---------------------------
	/* call	DrawLaserSymbol_Ori */
	CALL(drawlasersymbol_ori, 0);
	// 0 ;* blink track symbol
	/* test	TDBLink,1 */
	TEST(tdblink, 1);
	/* jz	@F */
	if (!(tdblink & 1)) {goto dummylabel103;}
	/* call	DrawTrackSymbol_Ori */
	CALL(drawtracksymbol_ori, 0);
dummylabel103:
	// 5105 
	/* @@:		jmp	TDSymOk_Ori */
	goto tdsymok_ori;
	// 0 ;---------------------------
tdsymtargetlock_ori:
	// 5107 
	// 0 ;---------------------------
	// 0 ;* blink laser symbol
	/* test	TDBLink,1 */
	TEST(tdblink, 1);
	/* jz	@F */
	if (!(tdblink & 1)) {goto dummylabel104;}
	/* call	DrawLaserSymbol_Ori */
	CALL(drawlasersymbol_ori, 0);
dummylabel104:
	// 5109 
	/* @@:		call	DrawTrackSymbol_Ori */
	CALL(drawtracksymbol_ori, 0);
	// 0 ;---------------------------
tdsymok_ori:
	// 5111 
	// 0 ;---------------------------
	/* call	DrawCrossSymbol_Ori */
	CALL(drawcrosssymbol_ori, 0);
	// 0 ;------------------------------
	// 0 ;* restore visual configuration
	// 0 ;------------------------------
	/* pop	SecScanOff2 */
	POP(secscanoff2);
	/* pop	SecScanCnt2 */
	POP(secscancnt2);
	/* pop	SecScanOff1 */
	POP(secscanoff1);
	/* pop	SecScanCnt1 */
	POP(secscancnt1);
	/* pop	WORD PTR HillTextEnabled */
	POP(*(dw*)(&hilltextenabled));
	/* pop	WORD PTR CloudsEnabled */
	POP(*(dw*)(&cloudsenabled));
	/* pop	WORD PTR StarsEnabled */
	POP(*(dw*)(&starsenabled));
	/* pop	WORD PTR GradEnabled */
	POP(*(dw*)(&gradenabled));
	// 0 ;* if night or foggy restore visual colours
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel105;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipFixCols_Ori	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipfixcols_ori;}
dummylabel105:
	// 5113 
	// 0 ;call CheckForNVG
	// 0 ;call	FixIRPalette
	// 0 ;------------------
	// 0 ;* restore viewmode
	// 0 ;------------------
skipfixcols_ori:
	// 5115 
	/* SkipFixCols_Ori:	mov	ax,NUL_VIEWMODE */
	ax = 0;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;--------------------
	// 0 ;* update TIALD flags
	// 0 ;--------------------
tialdexit_ori:
	// 5117 
	/* TIALDExit_Ori:	mov	al,1		;assume active */
	al = 1;
	/* cmp	TDMode,TIALD_ADJ_LOCK */
	CMP(tdmode, 6);
	/* je	@F */
	if ((dw)(tdmode) == (dw)(6)) {goto dummylabel106;}
	/* cmp	TDMode,TIALD_TGT_LOCK */
	CMP(tdmode, 8);
	/* je	@F */
	if ((dw)(tdmode) == (dw)(8)) {goto dummylabel106;}
	/* xor	al,al		;inactive */
	XOR(al, al);
dummylabel106:
	// 5119 
	/* @@:		mov	LaserActive,al */
	laseractive = al;
	/* mov	TIALDActive,1 */
	tialdactive = 1;
	/* ret */
	RETN(0);
tialddisp_ori2:
	// 8202 
	/* mov InCockpit,1 */
	incockpit = 1;
edummylabel40:
	// 5121 
	/* mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	al = *((&kf_navigviewwithctrl)+k_status);
	/* test	al,al */
	TEST(al, al);
/* m2c-phantom removed: 	R(al = *((&kf_navigviewwithctrl)+k_status););	// 8206 						mov	al,BYTE PTR KF_NavigViewWithCtrl[K_STATUS] */
	/* jz	@F */
	if (!(al & al)) {goto dummylabel107;}
/* m2c-phantom removed: 	R(*((&kf_navigviewwithctrl)+k_status) = 0;);	// 8208 												mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	/* mov	BYTE PTR KF_NavigViewWithCtrl[K_STATUS],0 */
	*((&kf_navigviewwithctrl)+k_status) = 0;
	/* cmp TAB2.TAB_MODE,TAB_FLIR */
	CMP(tab2.tab_mode, 6);
	/* je @F */
	if ((dw)(tab2.tab_mode) == (dw)(6)) {goto dummylabel107;}
	/* add bx, 2 ;Pointer skips to next TAB display, i.e., TIALD full-sized view */
	ADD(bx, 2);
__disp=*(dw*)(((db*)&selectswitch)+bx);
	/* jmp	SelectSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
edummylabel41:
	// 5123 
	/* ret */
	RETN(0);
dummylabel107:
	// 5125 
	// 0 ;----------------------------
	// 0 ;* check operating conditions
	// 0 ;----------------------------
	// 0 ;cmp	TAB2.TAB_MODE,TAB_FLIR_ORI
	// 0 ;je @F
	/* cmp	M_CosP,16384	;pitch in limits (+/-60degs)? */
	CMP(m_cosp, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosp) < (short)(16384)) {goto dummylabel108;}
	/* cmp	M_CosR,16384	;roll in limits (+/-60degs)? */
	CMP(m_cosr, 16384);
	/* jl	@F		;no -> */
	if ((short)(m_cosr) < (short)(16384)) {goto dummylabel108;}
	/* cmp	TrueRadAlt,MIN_OP_RAD_ALT	;rad alt ok? */
	CMP(trueradalt, 100);
	/* jae	TIALDOk_Ori2				;no -> */
	if ((dw)(trueradalt) >= (dw)(100)) {goto tialdok_ori2;}
dummylabel108:
	// 5127 
	/* @@:		mov	TDMode,TIALD_INIT */
	tdmode = 0;
	/* call	InvalidDisp_Ori */
	CALL(invaliddisp_ori, 0);
	/* jmp	TIALDExit_Ori2 */
	goto tialdexit_ori2;
	// 0 ;---------------
	// 0 ;* init viewmode
	// 0 ;---------------
tialdok_ori2:
	// 5129 
	/* TIALDOk_Ori2:	mov	ax,TV3_VIEWMODE */
	ax = 10;
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;----------------------------
	// 0 ;* store visual configuration
	// 0 ;----------------------------
	/* push	WORD PTR GradEnabled */
	PUSH(*(dw*)(&gradenabled));
	/* push	WORD PTR StarsEnabled */
	PUSH(*(dw*)(&starsenabled));
	/* push	WORD PTR CloudsEnabled */
	PUSH(*(dw*)(&cloudsenabled));
	/* push	WORD PTR HillTextEnabled */
	PUSH(*(dw*)(&hilltextenabled));
	/* push	SecScanCnt1 */
	PUSH(secscancnt1);
	/* push	SecScanOff1 */
	PUSH(secscanoff1);
	/* push	SecScanCnt2 */
	PUSH(secscancnt2);
	/* push	SecScanOff2 */
	PUSH(secscanoff2);
	// 0 ;-----------------------------
	// 0 ;* modify visual configuration
	// 0 ;-----------------------------
	// 0 ;* if night or foggy use IR visual colours
	/* cmp	Night,1		;Dusk (still light enough to see)? */
	CMP(night, 1);
	/* je	SkipIRCols_Ori2	;no -> */
	if ((dw)(night) == (dw)(1)) {goto skipircols_ori2;}
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel109;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipIRCols_Ori2	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipircols_ori2;}
dummylabel109:
	// 5131 
	// 0 ;call CheckForNVG
	// 0 ;call	SetIRPalette
	// 0 ;mov	StarsEnabled,0
skipircols_ori2:
	// 5133 
	/* SkipIRCols_Ori2:	mov	GradEnabled,0 */
	gradenabled = 0;
	/* mov	CloudsEnabled,0 */
	cloudsenabled = 0;
	/* mov	HillTextEnabled,0 */
	hilltextenabled = 0;
	/* mov	SecScanCnt1,5		;minimize range */
	secscancnt1 = 5;
	/* mov	SecScanOff1,-2 */
	secscanoff1 = -2;
	/* mov	SecScanCnt2,5 */
	secscancnt2 = 5;
	/* mov	SecScanOff2,-2 */
	secscanoff2 = -2;
	// 0 ;----------------------
	// 0 ;* calc TIALD scan size
	// 0 ;----------------------
	/* call	CalcScanSize */
	CALL(calcscansize, 0);
	// 0 ;-----------------
	// 0 ;* clear drag flag
	// 0 ;-----------------
	/* mov	TDDrag,0 */
	tddrag = 0;
	// 0 ;------------------
	// 0 ;* read mouse input
	// 0 ;------------------
	/* cmp	DisableInput,0	;input disabled? */
	CMP(disableinput, 0);
	/* jne	@F		;yes -> */
	if ((dw)(disableinput) != (dw)(0)) {goto dummylabel110;}
	/* mov	si,TABPtr */
	si = tabptr;
	// 0 ;test	[si].TAB_HAS_MOUSE,1	;mouse available?
	// 0 ;jnz	ReadTIALDMouse_Ori2		;yes ->
	/* jmp ReadTIALDMouse_Ori2		;yes -> */
	goto readtialdmouse_ori2;
	// 0 ;* null input from mouse
dummylabel110:
	// 5135 
	/* @@:		xor	ax,ax */
	XOR(ax, ax);
	/* xor	bx,bx */
	XOR(bx, bx);
	/* xor	cx,cx */
	XOR(cx, cx);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	XMickeys,cx */
	xmickeys = cx;
	/* mov	YMickeys,bx */
	ymickeys = bx;
	/* mov	TDZoomKey,0 */
	tdzoomkey = 0;
	/* jmp	SortTDMode_Ori2 */
	goto sorttdmode_ori2;
readtialdmouse_ori2:
	// 5137 
	/* ReadTIALDMouse_Ori2:	mov	al,Key[K_CTRL]	;update zoom override flag */
	al = *((&key)+29);
	/* mov	TDZoomKey,al */
	tdzoomkey = al;
	/* call	ReadMouseMotion */
	CALLF(readmousemotion, 0);
	// 0 ;* note: al = 1 = lhs button pressed
	// 0 ;*       ah = 1 = rhs button pressed
	// 0 ;*       cx = XMickeys (-32768 .. 32767)
	// 0 ;*       bx = YMickeys (-32768 .. 32767)
	// 0 ;*       dl = 1 = lhs button just pressed
	// 0 ;*       dh = 1 = rhs button just pressed
	// 0 ;-------------
	// 0 ;* select mode
	// 0 ;-------------
sorttdmode_ori2:
	// 5139 
	/* SortTDMode_Ori2:	mov	bx,TDMode */
	bx = tdmode;
__disp=*(dw*)(((db*)&tdswitch_ori2)+bx);
	/* jmp	TDSwitch_Ori2[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
tialdinit_ori2:
	// 5141 
	// 0 ;---------------------------
	// 0 ;* init mode ensures start up into search mode regardless of mouse input
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori2 */
	goto intosearch_ori2;
	// 0 ;---------------------------
tialdsearch_ori2:
	// 5143 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel111;}
	/* push	dx */
	PUSH(dx);
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* switch to adjust lock mode?
dummylabel111:
	// 5145 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel112;}
	/* call	SetTarget */
	CALL(settarget, 0);
	/* jc	@F		;target invalid -> */
	if (CF) {goto dummylabel112;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock_Ori2 */
	goto intoadjustlock_ori2;
	// 0 ;* switch to zoom mode?
dummylabel112:
	// 5147 
	/* @@:		test	TDZoomKey,1	;CTRL key pressed? */
	TEST(tdzoomkey, 1);
	/* jz	IntoSearch_Ori2	;no -> */
	if (!(tdzoomkey & 1)) {goto intosearch_ori2;}
	/* mov	TDMode,TIALD_ZOOM */
	tdmode = 4;
	/* jmp	IntoZoom_Ori2 */
	goto intozoom_ori2;
	// 0 ;* search within viewing window
intosearch_ori2:
	// 5149 
	/* IntoSearch_Ori2:	call	SetDatum */
	CALL(setdatum, 0);
	/* call	AdjustXYOffsets */
	CALL(adjustxyoffsets, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
	/* jmp	ContVisual_Ori2 */
	goto contvisual_ori2;
	// 0 ;---------------------------
tialdzoom_ori2:
	// 5151 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel113;}
	/* push	dx */
	PUSH(dx);
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;* switch to adjust lock mode?
dummylabel113:
	// 5153 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel114;}
	/* call	SetTarget */
	CALL(settarget, 0);
	/* jc	@F		;target invalid -> */
	if (CF) {goto dummylabel114;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock_Ori2 */
	goto intoadjustlock_ori2;
	// 0 ;* switch to search mode?
dummylabel114:
	// 5155 
	/* @@:		test	TDZoomKey,1	;CTRL key released? */
	TEST(tdzoomkey, 1);
	/* jnz	IntoZoom_Ori2	;no -> */
	if ((tdzoomkey & 1) != 0) {goto intozoom_ori2;}
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori2 */
	goto intosearch_ori2;
	// 0 ;* adjust zoom
intozoom_ori2:
	// 5157 
	/* IntoZoom_Ori2:	call	AdjustZoom */
	CALL(adjustzoom, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;drag point? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel115;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
dummylabel115:
	// 5159 
	/* @@:		jmp	ContVisual_Ori2 */
	goto contvisual_ori2;
	// 0 ;---------------------------
tialdadjustlock_ori2:
	// 5161 
	// 0 ;---------------------------
	// 0 ;* cancel lock?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel116;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori2 */
	goto intosearch_ori2;
	// 0 ;* switch to target lock mode?
dummylabel116:
	// 5163 
	/* @@:		test	al,al		;lh button released? */
	TEST(al, al);
	/* jnz	IntoAdjustLock_Ori2	;no -> */
	if ((al & al) != 0) {goto intoadjustlock_ori2;}
	/* mov	TDMode,TIALD_TGT_LOCK */
	tdmode = 8;
	/* jmp	IntoTargetLock_Ori2 */
	goto intotargetlock_ori2;
intoadjustlock_ori2:
	// 5165 
	/* IntoAdjustLock_Ori2:	call	AdjustLock */
	CALL(adjustlock, 0);
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;drag point? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel117;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* call	RotateXYOffsets */
	CALL(rotatexyoffsets, 0);
dummylabel117:
	// 5167 
	/* @@:		call	SetTarget */
	CALL(settarget, 0);
	/* jnc	ContVisual_Ori2	;target valid -> */
	if (!CF) {goto contvisual_ori2;}
	/* call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori2 */
	goto intosearch_ori2;
	// 0 ;---------------------------
tialdtargetlock_ori2:
	// 5169 
	// 0 ;---------------------------
	// 0 ;* has target moved (or cancelled) externally?
	/* call	TargetMoved	;moved (or cancelled)? */
	CALL(targetmoved, 0);
	/* jc	CancelLock_Ori2	;yes -> */
	if (CF) {goto cancellock_ori2;}
	// 0 ;* cancel target designation (switch to search mode)?
	/* test	dh,dh		;rh button just pressed? */
	TEST(dh, dh);
	/* jz	@F		;no -> */
	if (!(dh & dh)) {goto dummylabel118;}
	/* call	CancelTgtWP */
	CALLF(canceltgtwp, 0);
cancellock_ori2:
	// 5171 
	/* CancelLock_Ori2:	call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori2 */
	goto intosearch_ori2;
	// 0 ;* return to adjust lock mode?
dummylabel118:
	// 5173 
	/* @@:		test	dl,dl		;lh button just pressed? */
	TEST(dl, dl);
	/* jz	@F		;no -> */
	if (!(dl & dl)) {goto dummylabel119;}
	/* mov	TDMode,TIALD_ADJ_LOCK */
	tdmode = 6;
	/* jmp	IntoAdjustLock_Ori2 */
	goto intoadjustlock_ori2;
	// 0 ;* adjust zoom?
dummylabel119:
	// 5175 
	/* @@:	 	test	TDZoomKey,1	;CTRL key pressed? */
	TEST(tdzoomkey, 1);
	/* jz	IntoTargetLock_Ori2	;no -> */
	if (!(tdzoomkey & 1)) {goto intotargetlock_ori2;}
	/* call	AdjustZoom */
	CALL(adjustzoom, 0);
intotargetlock_ori2:
	// 5177 
	/* IntoTargetLock_Ori2:	call	RecalcXYOffsets */
	CALL(recalcxyoffsets, 0);
	/* test	TDDrag,1	;within scan limits? */
	TEST(tddrag, 1);
	/* jz	ContVisual_Ori2	;yes -> */
	if (!(tddrag & 1)) {goto contvisual_ori2;}
	/* call	SetDatum */
	CALL(setdatum, 0);
	/* mov	TDMode,TIALD_SEARCH */
	tdmode = 2;
	/* jmp	IntoSearch_Ori2 */
	goto intosearch_ori2;
	// 0 ;---------------------------
contvisual_ori2:
	// 5179 
	// 0 ;---------------------------
	// 0 ;* vp alt = max(TDScanSize * TDZoom / 256, gnd ht + MIN_OP_RAD_ALT)
	/* mov	ax,TDScanSize */
	ax = tdscansize;
	/* mov	dx,TDZoom */
	dx = tdzoom;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	dh,al		;store 1/2 bit */
	dh = al;
	/* mov	al,ah		;/256 */
	al = ah;
	/* mov	ah,dl */
	ah = dl;
	/* shl	dh,1		;expose 1/2 bit */
	SHL(dh, 1);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* push	ax */
	PUSH(ax);
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	CalcGndHeight */
	CALLF(calcgndheight, 0);
	/* add	ax,MIN_OP_RAD_ALT */
	ADD(ax, 100);
	/* pop	bx */
	POP(bx);
	/* cmp	bx,ax		;vp alt >= gnd ht + MIN_OP_RAD_ALT? */
	CMP(bx, ax);
	/* jae	@F		;yes -> */
	if ((dw)(bx) >= (dw)(ax)) {goto dummylabel120;}
	/* mov	bx,ax */
	bx = ax;
dummylabel120:
	// 5181 
	/* @@:		xor	cx,cx */
	XOR(cx, cx);
	// 0 ;* if overcast then
	// 0 ;*    if ac alt >= cloudbase then
	// 0 ;*       if vp alt < cloudbase then
	// 0 ;*          vp alt = cloudbase
	// 0 ;*       endif
	// 0 ;*    endif
	// 0 ;* endif
	/* test	Overcast,1	;overcast? */
	TEST(overcast, 1);
	/* jz	SetVPAlt_Ori2	;no -> */
	if (!(overcast & 1)) {goto setvpalt_ori2;}
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jb	SetVPAlt_Ori2	;ac alt < cloudbase -> */
	if (CF) {goto setvpalt_ori2;}
	/* mov	ax,bx */
	ax = bx;
	/* mov	dx,cx */
	dx = cx;
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jae	SetVPAlt_Ori2	;vp alt > cloudbase -> */
	if (!CF) {goto setvpalt_ori2;}
	/* mov	bx,WORD PTR CloudBase */
	bx = *(dw*)(&cloudbase);
	/* mov	cx,WORD PTR CloudBase+2 */
	cx = *(dw*)(((db*)&cloudbase)+2);
setvpalt_ori2:
	// 5183 
	/* SetVPAlt_Ori2:	mov	WORD PTR TIALD_VIEW.VP_ZFT_HI,cx */
	*((dw*)((db*)&tiald_view+vp_zft_hi)) = cx;
	/* mov	WORD PTR TIALD_VIEW.VP_ZFT_LO,bx */
	*((dw*)((db*)&tiald_view+vp_zft_lo)) = bx;
	// 0 ;-------------------
	// 0 ;* draw TIALD visual
	// 0 ;-------------------
	// 0 ;* keep TIALD hdg in line with aircraft hdg (even if zoom or lock)
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	TIALD_VIEW.VP_HDG,ax */
	tiald_view.vp_hdg = ax;
	// 0 ;* pitched down, no roll
	/* mov	TIALD_VIEW.VP_PITCH,400 ;384           ;hacked by Frankie on 8th July 2018 */
	tiald_view.vp_pitch = 400;
	// 0 ;mov	TIALD_VIEW.VP_ROLL,0               ;hacked by Frankie on 8th July 2018
	/* mov	si,OFFSET TIALD_VIEW */
	si = m2c::near_offset_external(tiald_view);
	/* call	Visual */
	CALLF(visual, 0);
	// 0 ;----------------
	// 0 ;* draw symbology
	// 0 ;----------------
	// 0 ;* update blink timer
	/* mov	ax,TDBlinkTimer */
	ax = tdblinktimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* mov	TDBlinkTimer,ax */
	tdblinktimer = ax;
	/* jnc	@F */
	if (!CF) {goto dummylabel121;}
	/* mov	TDBlinkTimer,TD_BLINK_RATE */
	tdblinktimer = 10;
	/* xor	TDBlink,1	;toggle blink flag */
	XOR(tdblink, 1);
	// 0 ;* if "dragging" then switch cross off for blink period
	/* mov	TDCross,1	;assume cross on */
	tdcross = 1;
	/* jnz	@F		;0 .. 1 (leading edge) -> */
	if (tdblink != 0) {goto dummylabel121;}
	/* test	TDDrag,1	;dragging? */
	TEST(tddrag, 1);
	/* jz	@F		;no -> */
	if (!(tddrag & 1)) {goto dummylabel121;}
	/* mov	TDCross,0	;cross off */
	tdcross = 0;
	// 0 ;* draw symbology wrt mode
dummylabel121:
	// 5185 
	/* @@:		mov	bx,TDMode */
	bx = tdmode;
__disp=*(dw*)(((db*)&tdsymbolswitch_ori2)+bx);
	/* jmp	TDSymbolSwitch_Ori2[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
tdsymzoom_ori2:
	// 5187 
	// 0 ;---------------------------
	/* call	DrawLaserSymbol_Ori */
	CALL(drawlasersymbol_ori, 0);
	/* jmp	TDSymOk_Ori2 */
	goto tdsymok_ori2;
	// 0 ;---------------------------
tdsymadjustlock_ori2:
	// 5189 
	// 0 ;---------------------------
	/* call	DrawLaserSymbol_Ori */
	CALL(drawlasersymbol_ori, 0);
	// 0 ;* blink track symbol
	/* test	TDBLink,1 */
	TEST(tdblink, 1);
	/* jz	@F */
	if (!(tdblink & 1)) {goto dummylabel122;}
	/* call	DrawTrackSymbol_Ori */
	CALL(drawtracksymbol_ori, 0);
dummylabel122:
	// 5191 
	/* @@:		jmp	TDSymOk_Ori2 */
	goto tdsymok_ori2;
	// 0 ;---------------------------
tdsymtargetlock_ori2:
	// 5193 
	// 0 ;---------------------------
	// 0 ;* blink laser symbol
	/* test	TDBLink,1 */
	TEST(tdblink, 1);
	/* jz	@F */
	if (!(tdblink & 1)) {goto dummylabel123;}
	/* call	DrawLaserSymbol_Ori */
	CALL(drawlasersymbol_ori, 0);
dummylabel123:
	// 5195 
	/* @@:		call	DrawTrackSymbol_Ori */
	CALL(drawtracksymbol_ori, 0);
	// 0 ;---------------------------
tdsymok_ori2:
	// 5197 
	// 0 ;---------------------------
	/* call	DrawCrossSymbol_Ori */
	CALL(drawcrosssymbol_ori, 0);
	// 0 ;------------------------------
	// 0 ;* restore visual configuration
	// 0 ;------------------------------
	/* pop	SecScanOff2 */
	POP(secscanoff2);
	/* pop	SecScanCnt2 */
	POP(secscancnt2);
	/* pop	SecScanOff1 */
	POP(secscanoff1);
	/* pop	SecScanCnt1 */
	POP(secscancnt1);
	/* pop	WORD PTR HillTextEnabled */
	POP(*(dw*)(&hilltextenabled));
	/* pop	WORD PTR CloudsEnabled */
	POP(*(dw*)(&cloudsenabled));
	/* pop	WORD PTR StarsEnabled */
	POP(*(dw*)(&starsenabled));
	/* pop	WORD PTR GradEnabled */
	POP(*(dw*)(&gradenabled));
	// 0 ;* if night or foggy restore visual colours
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel124;}
	/* cmp	Fog,0		;foggy? */
	CMP(fog, 0);
	/* je	SkipFixCols_Ori2	;no -> */
	if ((dw)(fog) == (dw)(0)) {goto skipfixcols_ori2;}
dummylabel124:
	// 5199 
	// 0 ;call CheckForNVG
	// 0 ;call	FixIRPalette
	// 0 ;------------------
	// 0 ;* restore viewmode
	// 0 ;------------------
skipfixcols_ori2:
	// 5201 
	// 0 ;mov	ax,NUL_VIEWMODE
	/* mov	ax,EXT_VIEWMODE */
	ax = 4;
	/* call	SetViewMode */
	CALLF(setviewmode, 0);
	// 0 ;--------------------
	// 0 ;* update TIALD flags
	// 0 ;--------------------
tialdexit_ori2:
	// 5203 
	/* TIALDExit_Ori2:	mov	al,1		;assume active */
	al = 1;
	/* cmp	TDMode,TIALD_ADJ_LOCK */
	CMP(tdmode, 6);
	/* je	@F */
	if ((dw)(tdmode) == (dw)(6)) {goto dummylabel125;}
	/* cmp	TDMode,TIALD_TGT_LOCK */
	CMP(tdmode, 8);
	/* je	@F */
	if ((dw)(tdmode) == (dw)(8)) {goto dummylabel125;}
	/* xor	al,al		;inactive */
	XOR(al, al);
dummylabel125:
	// 5205 
	/* @@:		mov	LaserActive,al */
	laseractive = al;
	/* mov	TIALDActive,1 */
	tialdactive = 1;
	/* ret */
	RETN(0);
drawcrosssymbol_ori:
	// 8623 
	// 0 ;* blink cross if "dragging"
edummylabel42:
	// 5207 
	/* test	TDCross,1 */
	TEST(tdcross, 1);
	/* jnz	__m2c_macrolocal_233_skip */
	if ((tdcross & 1) != 0) {goto __m2c_macrolocal_233_skip;}
	/* jmp	SkipCross */
	goto skipcross;
__m2c_macrolocal_233_skip:
	// 5209 
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC */
	ADD(bl, (72/2-1)+8);
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC-4 */
	ADD(cx, (96/2)-4);
	/* add	dx,XC-2 */
	ADD(dx, (96/2)-2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC */
	ADD(bl, (72/2-1)+8);
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC+2 */
	ADD(cx, (96/2)+2);
	/* add	dx,XC+4 */
	ADD(dx, (96/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-4 */
	ADD(bl, ((72/2-1)+8)-4);
	/* add	bh,YC-2 */
	ADD(bh, ((72/2-1)+8)-2);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC */
	ADD(cx, 96/2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC+2 */
	ADD(bl, ((72/2-1)+8)+2);
	/* add	bh,YC+4 */
	ADD(bh, ((72/2-1)+8)+4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC */
	ADD(cx, 96/2);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* cmp	TDYOffset,0	;laser ahead of aircraft? */
	CMP(tdyoffset, 0);
	/* jge	__m2c_macrolocal_234_skip */
	if ((short)(tdyoffset) >= (short)(0)) {goto __m2c_macrolocal_234_skip;}
	/* jmp	SkipCross */
	goto skipcross;
__m2c_macrolocal_234_skip:
	// 5211 
	// 0 ;no ->
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-3 */
	ADD(bl, ((72/2-1)+8)-3);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-4 */
	ADD(cx, (96/2)-4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-4 */
	ADD(bl, ((72/2-1)+8)-4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-4 */
	ADD(cx, (96/2)-4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-4 */
	ADD(bl, ((72/2-1)+8)-4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-3 */
	ADD(cx, (96/2)-3);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-4 */
	ADD(bl, ((72/2-1)+8)-4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+3 */
	ADD(cx, (96/2)+3);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-4 */
	ADD(bl, ((72/2-1)+8)-4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+4 */
	ADD(cx, (96/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-3 */
	ADD(bl, ((72/2-1)+8)-3);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+4 */
	ADD(cx, (96/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+3 */
	ADD(bl, ((72/2-1)+8)+3);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+4 */
	ADD(cx, (96/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+4 */
	ADD(bl, ((72/2-1)+8)+4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+4 */
	ADD(cx, (96/2)+4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+4 */
	ADD(bl, ((72/2-1)+8)+4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+3 */
	ADD(cx, (96/2)+3);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+4 */
	ADD(bl, ((72/2-1)+8)+4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-3 */
	ADD(cx, (96/2)-3);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+4 */
	ADD(bl, ((72/2-1)+8)+4);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-4 */
	ADD(cx, (96/2)-4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+3 */
	ADD(bl, ((72/2-1)+8)+3);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-4 */
	ADD(cx, (96/2)-4);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	SetPixel */
	CALLF(setpixel, 0);
skipcross_ori:
	// 5213 
	/* SkipCross_Ori:	ret */
	RETN(0);
drawlasersymbol_ori:
	// 8749 
	/* mov	bl,YOrg ;* kill: assume all */
	bl = *(yorg);
edummylabel43:
	// 5215 
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-2  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bl, ((72/2-1)+8)-2);
	/* add	bh,YC+1  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bh, ((72/2-1)+8)+1);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC+6    ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(cx, (96/2)+6);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC+2 */
	ADD(bl, ((72/2-1)+8)+2);
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC+6 */
	ADD(cx, (96/2)+6);
	/* add	dx,XC+8 */
	ADD(dx, (96/2)+8);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* ret */
	RETN(0);
drawtracksymbol_ori:
	// 8776 
	/* mov	bl,YOrg ;* kill: assume all */
	bl = *(yorg);
edummylabel44:
	// 5217 
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-1  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bl, ((72/2-1)+8)-1);
	/* add	bh,YC+2  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bh, ((72/2-1)+8)+2);
	/* mov	cx,XOrg */
	cx = xorg;
	/* add	cx,XC-7 */
	ADD(cx, (96/2)-7);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	bl,YOrg */
	bl = *(yorg);
	/* add	bl,YC-2  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bl, ((72/2-1)+8)-2);
	/* mov	cx,XOrg */
	cx = xorg;
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC-8 */
	ADD(cx, (96/2)-8);
	/* add	dx,XC-6 */
	ADD(dx, (96/2)-6);
	/* mov	al,COL_HUD */
	al = 133;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* ret */
	RETN(0);
invaliddisp_ori:
	// 8803 
	/* call	ClearDisp ;* kill: assume all (except si) */
	CALL(cleardisp, 0);
edummylabel45:
	// 5219 
	/* mov	bl,TAB_Y_ORG[si] */
	bl = m2c::getdata(((tab*)raddr(ds,si))->tab_y_org);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-25  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bl, ((72/2-1)+8)-25);
	/* add	bh,YC+25  ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bh, ((72/2-1)+8)+25);
	/* mov	cx,TAB_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC-25 */
	ADD(cx, (96/2)-25);
	/* add	dx,XC+25 */
	ADD(dx, (96/2)+25);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* mov	bl,TAB_Y_ORG[si] */
	bl = m2c::getdata(((tab*)raddr(ds,si))->tab_y_org);
	/* mov	bh,bl */
	bh = bl;
	/* add	bl,YC-25   ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bl, ((72/2-1)+8)-25);
	/* add	bh,YC+25   ;Add 4 to YC by Frankie on 8th July 2018 */
	ADD(bh, ((72/2-1)+8)+25);
	/* mov	cx,TAB_X_ORG[si] */
	cx = m2c::getdata(*(dw*)(((db*)&((tab*)raddr(ds,si))->tab_x_org)));
	/* mov	dx,cx */
	dx = cx;
	/* add	cx,XC+25 */
	ADD(cx, (96/2)+25);
	/* add	dx,XC-25 */
	ADD(dx, (96/2)-25);
	/* mov	al,COL_CRT8 */
	al = 167;
	/* push	si */
	PUSH(si);
	/* call	LineDraw */
	CALLF(linedraw, 0);
	/* pop	si */
	POP(si);
	/* ret */
	RETN(0);
drawstandby:
	// 8831 
	// 0 ;mov	si,OFFSET SetUp$
	// 0 ;call	Print$
edummylabel46:
	// 5221 
	/* mov	si,OFFSET SetUp$ */
	si = m2c::near_offset_external(setupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* centre dot
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-48 */
	bl = 96-48;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* up stroke
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-48-17 */
	bl = 96-48-17;
	/* mov	bh,HUD_Y_ORG-48-6 */
	bh = 96-48-6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-48-18 */
	bl = 96-48-18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-48-14 */
	bl = 96-48-14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG-48-10 */
	bl = 96-48-10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_ORG-48-9 */
	bl = 96-48-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_ORG-48-9 */
	bl = 96-48-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_ORG-48-8 */
	bl = 96-48-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_ORG-48-8 */
	bl = 96-48-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-48-5 */
	bl = 96-48-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_ORG-48-4 */
	bl = 96-48-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_ORG-48-4 */
	bl = 96-48-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* down stroke
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-48+17 */
	bl = 96-48+17;
	/* mov	bh,HUD_Y_ORG-48+6 */
	bh = 96-48+6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-48+18 */
	bl = 96-48+18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-48+14 */
	bl = 96-48+14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG-48+10 */
	bl = 96-48+10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_ORG-48+9 */
	bl = 96-48+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_ORG-48+9 */
	bl = 96-48+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_ORG-48+8 */
	bl = 96-48+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_ORG-48+8 */
	bl = 96-48+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-48+5 */
	bl = 96-48+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_ORG-48+4 */
	bl = 96-48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_ORG-48+4 */
	bl = 96-48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* left stroke
	/* mov	cx,HUD_X_ORG-21 */
	cx = 160-21;
	/* mov	dx,HUD_X_ORG-7 */
	dx = 160-7;
	/* mov	bl,HUD_Y_ORG-48 */
	bl = 96-48;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-22 */
	cx = 160-22;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	bh,HUD_Y_ORG-48+2 */
	bh = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-17 */
	cx = 160-17;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	bh,HUD_Y_ORG-48+2 */
	bh = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-12 */
	cx = 160-12;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	bh,HUD_Y_ORG-48+2 */
	bh = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_ORG-48-4 */
	bl = 96-48-4;
	/* mov	bh,HUD_Y_ORG-48-3 */
	bh = 96-48-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_ORG-48+3 */
	bl = 96-48+3;
	/* mov	bh,HUD_Y_ORG-48+4 */
	bh = 96-48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG-48-5 */
	bl = 96-48-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG-48+5 */
	bl = 96-48+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	bl,HUD_Y_ORG-48-1 */
	bl = 96-48-1;
	/* mov	bh,HUD_Y_ORG-48+1 */
	bh = 96-48+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_ORG-48+2 */
	bl = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* right stroke
	/* mov	cx,HUD_X_ORG+21 */
	cx = 160+21;
	/* mov	dx,HUD_X_ORG+7 */
	dx = 160+7;
	/* mov	bl,HUD_Y_ORG-48 */
	bl = 96-48;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+22 */
	cx = 160+22;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	bh,HUD_Y_ORG-48+2 */
	bh = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+17 */
	cx = 160+17;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	bh,HUD_Y_ORG-48+2 */
	bh = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+12 */
	cx = 160+12;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	bh,HUD_Y_ORG-48+2 */
	bh = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_ORG-48-4 */
	bl = 96-48-4;
	/* mov	bh,HUD_Y_ORG-48-3 */
	bh = 96-48-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_ORG-48+3 */
	bl = 96-48+3;
	/* mov	bh,HUD_Y_ORG-48+4 */
	bh = 96-48+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG-48-5 */
	bl = 96-48-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG-48+5 */
	bl = 96-48+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+6 */
	cx = 160+6;
	/* mov	bl,HUD_Y_ORG-48-1 */
	bl = 96-48-1;
	/* mov	bh,HUD_Y_ORG-48+1 */
	bh = 96-48+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_ORG-48-2 */
	bl = 96-48-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_ORG-48+2 */
	bl = 96-48+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* ret */
	RETN(0);
drawstandby2:
	// 9057 
	// 0 ;mov	si,OFFSET SetUp$
	// 0 ;call	Print$
edummylabel47:
	// 5223 
	/* mov	si,OFFSET SetUp$ */
	si = m2c::near_offset_external(setupdol);
	/* call	Print$ */
	CALLF(printdol, 0);
	// 0 ;* centre dot
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-0 */
	bl = 96-0;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* up stroke
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-0-17 */
	bl = 96-0-17;
	/* mov	bh,HUD_Y_ORG-0-6 */
	bh = 96-0-6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-0-18 */
	bl = 96-0-18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-0-14 */
	bl = 96-0-14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG-0-10 */
	bl = 96-0-10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_ORG-0-9 */
	bl = 96-0-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_ORG-0-9 */
	bl = 96-0-9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_ORG-0-8 */
	bl = 96-0-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_ORG-0-8 */
	bl = 96-0-8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-0-5 */
	bl = 96-0-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_ORG-0-4 */
	bl = 96-0-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_ORG-0-4 */
	bl = 96-0-4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* down stroke
	/* mov	cx,HUD_X_ORG */
	cx = 160;
	/* mov	bl,HUD_Y_ORG-0+17 */
	bl = 96-0+17;
	/* mov	bh,HUD_Y_ORG-0+6 */
	bh = 96-0+6;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-0+18 */
	bl = 96-0+18;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-0+14 */
	bl = 96-0+14;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	dx,HUD_X_ORG+3 */
	dx = 160+3;
	/* mov	bl,HUD_Y_ORG-0+10 */
	bl = 96-0+10;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	dx,HUD_X_ORG-4 */
	dx = 160-4;
	/* mov	bl,HUD_Y_ORG-0+9 */
	bl = 96-0+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+4 */
	cx = 160+4;
	/* mov	dx,HUD_X_ORG+6 */
	dx = 160+6;
	/* mov	bl,HUD_Y_ORG-0+9 */
	bl = 96-0+9;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-7 */
	cx = 160-7;
	/* mov	bl,HUD_Y_ORG-0+8 */
	bl = 96-0+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+7 */
	cx = 160+7;
	/* mov	bl,HUD_Y_ORG-0+8 */
	bl = 96-0+8;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-2 */
	cx = 160-2;
	/* mov	dx,HUD_X_ORG+2 */
	dx = 160+2;
	/* mov	bl,HUD_Y_ORG-0+5 */
	bl = 96-0+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-3 */
	cx = 160-3;
	/* mov	bl,HUD_Y_ORG-0+4 */
	bl = 96-0+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+3 */
	cx = 160+3;
	/* mov	bl,HUD_Y_ORG-0+4 */
	bl = 96-0+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* left stroke
	/* mov	cx,HUD_X_ORG-21 */
	cx = 160-21;
	/* mov	dx,HUD_X_ORG-7 */
	dx = 160-7;
	/* mov	bl,HUD_Y_ORG-0 */
	bl = 96-0;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG-22 */
	cx = 160-22;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	bh,HUD_Y_ORG-0+2 */
	bh = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-17 */
	cx = 160-17;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	bh,HUD_Y_ORG-0+2 */
	bh = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-12 */
	cx = 160-12;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	bh,HUD_Y_ORG-0+2 */
	bh = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_ORG-0-4 */
	bl = 96-0-4;
	/* mov	bh,HUD_Y_ORG-0-3 */
	bh = 96-0-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-11 */
	cx = 160-11;
	/* mov	bl,HUD_Y_ORG-0+3 */
	bl = 96-0+3;
	/* mov	bh,HUD_Y_ORG-0+4 */
	bh = 96-0+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG-0-5 */
	bl = 96-0-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-10 */
	cx = 160-10;
	/* mov	bl,HUD_Y_ORG-0+5 */
	bl = 96-0+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-6 */
	cx = 160-6;
	/* mov	bl,HUD_Y_ORG-0-1 */
	bl = 96-0-1;
	/* mov	bh,HUD_Y_ORG-0+1 */
	bh = 96-0+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG-5 */
	cx = 160-5;
	/* mov	bl,HUD_Y_ORG-0+2 */
	bl = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	// 0 ;* right stroke
	/* mov	cx,HUD_X_ORG+21 */
	cx = 160+21;
	/* mov	dx,HUD_X_ORG+7 */
	dx = 160+7;
	/* mov	bl,HUD_Y_ORG-0 */
	bl = 96-0;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	HLineDraw */
	CALLF(hlinedraw, 0);
	/* mov	cx,HUD_X_ORG+22 */
	cx = 160+22;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	bh,HUD_Y_ORG-0+2 */
	bh = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+17 */
	cx = 160+17;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	bh,HUD_Y_ORG-0+2 */
	bh = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+12 */
	cx = 160+12;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	bh,HUD_Y_ORG-0+2 */
	bh = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_ORG-0-4 */
	bl = 96-0-4;
	/* mov	bh,HUD_Y_ORG-0-3 */
	bh = 96-0-3;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+11 */
	cx = 160+11;
	/* mov	bl,HUD_Y_ORG-0+3 */
	bl = 96-0+3;
	/* mov	bh,HUD_Y_ORG-0+4 */
	bh = 96-0+4;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG-0-5 */
	bl = 96-0-5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+10 */
	cx = 160+10;
	/* mov	bl,HUD_Y_ORG-0+5 */
	bl = 96-0+5;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+6 */
	cx = 160+6;
	/* mov	bl,HUD_Y_ORG-0-1 */
	bl = 96-0-1;
	/* mov	bh,HUD_Y_ORG-0+1 */
	bh = 96-0+1;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	VLineDraw */
	CALLF(vlinedraw, 0);
	/* mov	cx,HUD_X_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_ORG-0-2 */
	bl = 96-0-2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
	/* mov	cx,HUD_X_ORG+5 */
	cx = 160+5;
	/* mov	bl,HUD_Y_ORG-0+2 */
	bl = 96-0+2;
	/* mov	al,COL_SIGHT */
	al = 141;
	/* call	SetPixel */
	CALLF(setpixel, 0);
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
                case m2c::k__m2c_macrolocal_100_skip: 	goto __m2c_macrolocal_100_skip;
        case m2c::k__m2c_macrolocal_101_skip: 	goto __m2c_macrolocal_101_skip;
        case m2c::k__m2c_macrolocal_102_skippixel: 	goto __m2c_macrolocal_102_skippixel;
        case m2c::k__m2c_macrolocal_103_skippixel: 	goto __m2c_macrolocal_103_skippixel;
        case m2c::k__m2c_macrolocal_104_skippixel: 	goto __m2c_macrolocal_104_skippixel;
        case m2c::k__m2c_macrolocal_105_skippixel: 	goto __m2c_macrolocal_105_skippixel;
        case m2c::k__m2c_macrolocal_106_skippixel: 	goto __m2c_macrolocal_106_skippixel;
        case m2c::k__m2c_macrolocal_107_skippixel: 	goto __m2c_macrolocal_107_skippixel;
        case m2c::k__m2c_macrolocal_108_skippixel: 	goto __m2c_macrolocal_108_skippixel;
        case m2c::k__m2c_macrolocal_109_skippixel: 	goto __m2c_macrolocal_109_skippixel;
        case m2c::k__m2c_macrolocal_110_skippixel: 	goto __m2c_macrolocal_110_skippixel;
        case m2c::k__m2c_macrolocal_111_skippixel: 	goto __m2c_macrolocal_111_skippixel;
        case m2c::k__m2c_macrolocal_112_skippixel: 	goto __m2c_macrolocal_112_skippixel;
        case m2c::k__m2c_macrolocal_113_skippixel: 	goto __m2c_macrolocal_113_skippixel;
        case m2c::k__m2c_macrolocal_114_skippixel: 	goto __m2c_macrolocal_114_skippixel;
        case m2c::k__m2c_macrolocal_115_skippixel: 	goto __m2c_macrolocal_115_skippixel;
        case m2c::k__m2c_macrolocal_116_skippixel: 	goto __m2c_macrolocal_116_skippixel;
        case m2c::k__m2c_macrolocal_117_skippixel: 	goto __m2c_macrolocal_117_skippixel;
        case m2c::k__m2c_macrolocal_118_skippixel: 	goto __m2c_macrolocal_118_skippixel;
        case m2c::k__m2c_macrolocal_119_skippixel: 	goto __m2c_macrolocal_119_skippixel;
        case m2c::k__m2c_macrolocal_120_skippixel: 	goto __m2c_macrolocal_120_skippixel;
        case m2c::k__m2c_macrolocal_121_skippixel: 	goto __m2c_macrolocal_121_skippixel;
        case m2c::k__m2c_macrolocal_122_skippixel: 	goto __m2c_macrolocal_122_skippixel;
        case m2c::k__m2c_macrolocal_123_skippixel: 	goto __m2c_macrolocal_123_skippixel;
        case m2c::k__m2c_macrolocal_124_skippixel: 	goto __m2c_macrolocal_124_skippixel;
        case m2c::k__m2c_macrolocal_125_skippixel: 	goto __m2c_macrolocal_125_skippixel;
        case m2c::k__m2c_macrolocal_126_skip: 	goto __m2c_macrolocal_126_skip;
        case m2c::k__m2c_macrolocal_127_skip: 	goto __m2c_macrolocal_127_skip;
        case m2c::k__m2c_macrolocal_128_skippixel: 	goto __m2c_macrolocal_128_skippixel;
        case m2c::k__m2c_macrolocal_129_skippixel: 	goto __m2c_macrolocal_129_skippixel;
        case m2c::k__m2c_macrolocal_130_skippixel: 	goto __m2c_macrolocal_130_skippixel;
        case m2c::k__m2c_macrolocal_131_skippixel: 	goto __m2c_macrolocal_131_skippixel;
        case m2c::k__m2c_macrolocal_132_skippixel: 	goto __m2c_macrolocal_132_skippixel;
        case m2c::k__m2c_macrolocal_133_skippixel: 	goto __m2c_macrolocal_133_skippixel;
        case m2c::k__m2c_macrolocal_134_skippixel: 	goto __m2c_macrolocal_134_skippixel;
        case m2c::k__m2c_macrolocal_135_skippixel: 	goto __m2c_macrolocal_135_skippixel;
        case m2c::k__m2c_macrolocal_136_skippixel: 	goto __m2c_macrolocal_136_skippixel;
        case m2c::k__m2c_macrolocal_137_skippixel: 	goto __m2c_macrolocal_137_skippixel;
        case m2c::k__m2c_macrolocal_138_skippixel: 	goto __m2c_macrolocal_138_skippixel;
        case m2c::k__m2c_macrolocal_139_skippixel: 	goto __m2c_macrolocal_139_skippixel;
        case m2c::k__m2c_macrolocal_140_skippixel: 	goto __m2c_macrolocal_140_skippixel;
        case m2c::k__m2c_macrolocal_141_skippixel: 	goto __m2c_macrolocal_141_skippixel;
        case m2c::k__m2c_macrolocal_142_skippixel: 	goto __m2c_macrolocal_142_skippixel;
        case m2c::k__m2c_macrolocal_143_skippixel: 	goto __m2c_macrolocal_143_skippixel;
        case m2c::k__m2c_macrolocal_144_skippixel: 	goto __m2c_macrolocal_144_skippixel;
        case m2c::k__m2c_macrolocal_145_skippixel: 	goto __m2c_macrolocal_145_skippixel;
        case m2c::k__m2c_macrolocal_146_skippixel: 	goto __m2c_macrolocal_146_skippixel;
        case m2c::k__m2c_macrolocal_147_skippixel: 	goto __m2c_macrolocal_147_skippixel;
        case m2c::k__m2c_macrolocal_148_skippixel: 	goto __m2c_macrolocal_148_skippixel;
        case m2c::k__m2c_macrolocal_149_skippixel: 	goto __m2c_macrolocal_149_skippixel;
        case m2c::k__m2c_macrolocal_150_skippixel: 	goto __m2c_macrolocal_150_skippixel;
        case m2c::k__m2c_macrolocal_151_skippixel: 	goto __m2c_macrolocal_151_skippixel;
        case m2c::k__m2c_macrolocal_152_skippixel: 	goto __m2c_macrolocal_152_skippixel;
        case m2c::k__m2c_macrolocal_153_skippixel: 	goto __m2c_macrolocal_153_skippixel;
        case m2c::k__m2c_macrolocal_154_skippixel: 	goto __m2c_macrolocal_154_skippixel;
        case m2c::k__m2c_macrolocal_155_skippixel: 	goto __m2c_macrolocal_155_skippixel;
        case m2c::k__m2c_macrolocal_156_skippixel: 	goto __m2c_macrolocal_156_skippixel;
        case m2c::k__m2c_macrolocal_157_skippixel: 	goto __m2c_macrolocal_157_skippixel;
        case m2c::k__m2c_macrolocal_158_skippixel: 	goto __m2c_macrolocal_158_skippixel;
        case m2c::k__m2c_macrolocal_159_skippixel: 	goto __m2c_macrolocal_159_skippixel;
        case m2c::k__m2c_macrolocal_160_skippixel: 	goto __m2c_macrolocal_160_skippixel;
        case m2c::k__m2c_macrolocal_161_skippixel: 	goto __m2c_macrolocal_161_skippixel;
        case m2c::k__m2c_macrolocal_162_skippixel: 	goto __m2c_macrolocal_162_skippixel;
        case m2c::k__m2c_macrolocal_163_skippixel: 	goto __m2c_macrolocal_163_skippixel;
        case m2c::k__m2c_macrolocal_164_skippixel: 	goto __m2c_macrolocal_164_skippixel;
        case m2c::k__m2c_macrolocal_165_skippixel: 	goto __m2c_macrolocal_165_skippixel;
        case m2c::k__m2c_macrolocal_166_skippixel: 	goto __m2c_macrolocal_166_skippixel;
        case m2c::k__m2c_macrolocal_167_skippixel: 	goto __m2c_macrolocal_167_skippixel;
        case m2c::k__m2c_macrolocal_168_skippixel: 	goto __m2c_macrolocal_168_skippixel;
        case m2c::k__m2c_macrolocal_169_skippixel: 	goto __m2c_macrolocal_169_skippixel;
        case m2c::k__m2c_macrolocal_170_skippixel: 	goto __m2c_macrolocal_170_skippixel;
        case m2c::k__m2c_macrolocal_171_skippixel: 	goto __m2c_macrolocal_171_skippixel;
        case m2c::k__m2c_macrolocal_172_skippixel: 	goto __m2c_macrolocal_172_skippixel;
        case m2c::k__m2c_macrolocal_173_skippixel: 	goto __m2c_macrolocal_173_skippixel;
        case m2c::k__m2c_macrolocal_174_skip: 	goto __m2c_macrolocal_174_skip;
        case m2c::k__m2c_macrolocal_181_testhi: 	goto __m2c_macrolocal_181_testhi;
        case m2c::k__m2c_macrolocal_181_testok: 	goto __m2c_macrolocal_181_testok;
        case m2c::k__m2c_macrolocal_182_testhi: 	goto __m2c_macrolocal_182_testhi;
        case m2c::k__m2c_macrolocal_182_testok: 	goto __m2c_macrolocal_182_testok;
        case m2c::k__m2c_macrolocal_189_testhi: 	goto __m2c_macrolocal_189_testhi;
        case m2c::k__m2c_macrolocal_189_testok: 	goto __m2c_macrolocal_189_testok;
        case m2c::k__m2c_macrolocal_190_skip: 	goto __m2c_macrolocal_190_skip;
        case m2c::k__m2c_macrolocal_191_skip: 	goto __m2c_macrolocal_191_skip;
        case m2c::k__m2c_macrolocal_193_testhi: 	goto __m2c_macrolocal_193_testhi;
        case m2c::k__m2c_macrolocal_193_testok: 	goto __m2c_macrolocal_193_testok;
        case m2c::k__m2c_macrolocal_195_testhi: 	goto __m2c_macrolocal_195_testhi;
        case m2c::k__m2c_macrolocal_195_testok: 	goto __m2c_macrolocal_195_testok;
        case m2c::k__m2c_macrolocal_209_testhi: 	goto __m2c_macrolocal_209_testhi;
        case m2c::k__m2c_macrolocal_209_testok: 	goto __m2c_macrolocal_209_testok;
        case m2c::k__m2c_macrolocal_210_testhi: 	goto __m2c_macrolocal_210_testhi;
        case m2c::k__m2c_macrolocal_210_testok: 	goto __m2c_macrolocal_210_testok;
        case m2c::k__m2c_macrolocal_211_testhi: 	goto __m2c_macrolocal_211_testhi;
        case m2c::k__m2c_macrolocal_211_testok: 	goto __m2c_macrolocal_211_testok;
        case m2c::k__m2c_macrolocal_213_testhi: 	goto __m2c_macrolocal_213_testhi;
        case m2c::k__m2c_macrolocal_213_testok: 	goto __m2c_macrolocal_213_testok;
        case m2c::k__m2c_macrolocal_233_skip: 	goto __m2c_macrolocal_233_skip;
        case m2c::k__m2c_macrolocal_234_skip: 	goto __m2c_macrolocal_234_skip;
        case m2c::k__m2c_macrolocal_88_skip: 	goto __m2c_macrolocal_88_skip;
        case m2c::k__m2c_macrolocal_89_skip: 	goto __m2c_macrolocal_89_skip;
        case m2c::k__m2c_macrolocal_90_skip: 	goto __m2c_macrolocal_90_skip;
        case m2c::k__m2c_macrolocal_91_skip: 	goto __m2c_macrolocal_91_skip;
        case m2c::k__m2c_macrolocal_95_skip: 	goto __m2c_macrolocal_95_skip;
        case m2c::k__m2c_macrolocal_96_skip: 	goto __m2c_macrolocal_96_skip;
        case m2c::k__m2c_macrolocal_98_testhi: 	goto __m2c_macrolocal_98_testhi;
        case m2c::k__m2c_macrolocal_98_testok: 	goto __m2c_macrolocal_98_testok;
        case m2c::k__m2c_macrolocal_99_testhi: 	goto __m2c_macrolocal_99_testhi;
        case m2c::k__m2c_macrolocal_99_testok: 	goto __m2c_macrolocal_99_testok;
        case m2c::kadjustlock: 	goto adjustlock;
        case m2c::kadjustxyoffsets: 	goto adjustxyoffsets;
        case m2c::kadjustzoom: 	goto adjustzoom;
        case m2c::kbypassescope: 	goto bypassescope;
        case m2c::kbypassescope2: 	goto bypassescope2;
        case m2c::kbypassescope_and_adi: 	goto bypassescope_and_adi;
        case m2c::kcalcscansize: 	goto calcscansize;
        case m2c::kcancellock: 	goto cancellock;
        case m2c::kcancellock_ori: 	goto cancellock_ori;
        case m2c::kcancellock_ori2: 	goto cancellock_ori2;
        case m2c::kcanceltiald: 	goto canceltiald;
        case m2c::kchecktab: 	goto checktab;
        case m2c::kchecktab2: 	goto checktab2;
        case m2c::kchecktab3: 	goto checktab3;
        case m2c::kcleardisp: 	goto cleardisp;
        case m2c::kconthere: 	goto conthere;
        case m2c::kconthere2: 	goto conthere2;
        case m2c::kcontplnscale: 	goto contplnscale;
        case m2c::kcontrefslew: 	goto contrefslew;
        case m2c::kcontselect: 	goto contselect;
        case m2c::kcontsteal: 	goto contsteal;
        case m2c::kcontvisual: 	goto contvisual;
        case m2c::kcontvisual_ori: 	goto contvisual_ori;
        case m2c::kcontvisual_ori2: 	goto contvisual_ori2;
        case m2c::kdamaged: 	goto damaged;
        case m2c::kdamageddisp: 	goto damageddisp;
        case m2c::kdamagedloop: 	goto damagedloop;
        case m2c::kdrawcrosssymbol: 	goto drawcrosssymbol;
        case m2c::kdrawcrosssymbol_ori: 	goto drawcrosssymbol_ori;
        case m2c::kdrawfloatwp: 	goto drawfloatwp;
        case m2c::kdrawlasersymbol: 	goto drawlasersymbol;
        case m2c::kdrawlasersymbol_ori: 	goto drawlasersymbol_ori;
        case m2c::kdrawleg: 	goto drawleg;
        case m2c::kdrawposmarker: 	goto drawposmarker;
        case m2c::kdrawrefmap: 	goto drawrefmap;
        case m2c::kdrawstandby: 	goto drawstandby;
        case m2c::kdrawstandby2: 	goto drawstandby2;
        case m2c::kdrawtracksymbol: 	goto drawtracksymbol;
        case m2c::kdrawtracksymbol_ori: 	goto drawtracksymbol_ori;
        case m2c::kdrawwpmarkers: 	goto drawwpmarkers;
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
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kexitsteal: 	goto exitsteal;
        case m2c::kfailsnapgnd: 	goto failsnapgnd;
        case m2c::kflirdisp: 	goto flirdisp;
        case m2c::kflirdisp_ori: 	goto flirdisp_ori;
        case m2c::kflirdisp_ori2: 	goto flirdisp_ori2;
        case m2c::kflirdisp_ori3: 	goto flirdisp_ori3;
        case m2c::kflirdisp_ori4: 	goto flirdisp_ori4;
        case m2c::kgetout1: 	goto getout1;
        case m2c::kgetout2: 	goto getout2;
        case m2c::kgetout3: 	goto getout3;
        case m2c::kgetout4: 	goto getout4;
        case m2c::kgetouthere: 	goto getouthere;
        case m2c::kgoaheadselect: 	goto goaheadselect;
        case m2c::kgooverheremann: 	goto gooverheremann;
        case m2c::khdgok: 	goto hdgok;
        case m2c::kinittiald: 	goto inittiald;
        case m2c::kintoadjustlock: 	goto intoadjustlock;
        case m2c::kintoadjustlock_ori: 	goto intoadjustlock_ori;
        case m2c::kintoadjustlock_ori2: 	goto intoadjustlock_ori2;
        case m2c::kintosearch: 	goto intosearch;
        case m2c::kintosearch_ori: 	goto intosearch_ori;
        case m2c::kintosearch_ori2: 	goto intosearch_ori2;
        case m2c::kintotargetlock: 	goto intotargetlock;
        case m2c::kintotargetlock_ori: 	goto intotargetlock_ori;
        case m2c::kintotargetlock_ori2: 	goto intotargetlock_ori2;
        case m2c::kintozoom: 	goto intozoom;
        case m2c::kintozoom_ori: 	goto intozoom_ori;
        case m2c::kintozoom_ori2: 	goto intozoom_ori2;
        case m2c::kinvaliddisp: 	goto invaliddisp;
        case m2c::kinvaliddisp_ori: 	goto invaliddisp_ori;
        case m2c::klimitdx: 	goto limitdx;
        case m2c::klimitdy: 	goto limitdy;
        case m2c::klimitxr: 	goto limitxr;
        case m2c::klimityr: 	goto limityr;
        case m2c::klinkloop: 	goto linkloop;
        case m2c::kmapdisp: 	goto mapdisp;
        case m2c::knextcondition3: 	goto nextcondition3;
        case m2c::knextcondition4: 	goto nextcondition4;
        case m2c::knextcondition5: 	goto nextcondition5;
        case m2c::knextdamage: 	goto nextdamage;
        case m2c::kpancode_0_proc: 	goto pancode_0_proc;
        case m2c::kputcolorhud1: 	goto putcolorhud1;
        case m2c::kputcolorhud2: 	goto putcolorhud2;
        case m2c::kputcolorhud3: 	goto putcolorhud3;
        case m2c::kputcolorhud4: 	goto putcolorhud4;
        case m2c::kradardisp: 	goto radardisp;
        case m2c::kreadtialdmouse: 	goto readtialdmouse;
        case m2c::kreadtialdmouse_ori: 	goto readtialdmouse_ori;
        case m2c::kreadtialdmouse_ori2: 	goto readtialdmouse_ori2;
        case m2c::krecalcxyoffsets: 	goto recalcxyoffsets;
        case m2c::krefdisp: 	goto refdisp;
        case m2c::krefzoomin: 	goto refzoomin;
        case m2c::krefzoomok: 	goto refzoomok;
        case m2c::krefzoomout: 	goto refzoomout;
        case m2c::krotatexyoffsets: 	goto rotatexyoffsets;
        case m2c::krouteplandisp: 	goto routeplandisp;
        case m2c::krouteplanexit: 	goto routeplanexit;
        case m2c::kscanobjloop: 	goto scanobjloop;
        case m2c::kscanwploop: 	goto scanwploop;
        case m2c::kselectloopback: 	goto selectloopback;
        case m2c::kselectmap: 	goto selectmap;
        case m2c::kselectmodeok: 	goto selectmodeok;
        case m2c::kselectnext: 	goto selectnext;
        case m2c::kselectradar: 	goto selectradar;
        case m2c::kselecttiald: 	goto selecttiald;
        case m2c::ksetcolourhudd1: 	goto setcolourhudd1;
        case m2c::ksetcolourhudd2: 	goto setcolourhudd2;
        case m2c::ksetcolourhudd3: 	goto setcolourhudd3;
        case m2c::ksetcolourhudd4: 	goto setcolourhudd4;
        case m2c::ksetdatum: 	goto setdatum;
        case m2c::ksettarget: 	goto settarget;
        case m2c::ksetvpalt: 	goto setvpalt;
        case m2c::ksetvpalt_ori: 	goto setvpalt_ori;
        case m2c::ksetvpalt_ori2: 	goto setvpalt_ori2;
        case m2c::kskipacsymbol: 	goto skipacsymbol;
        case m2c::kskipcross: 	goto skipcross;
        case m2c::kskipcross_ori: 	goto skipcross_ori;
        case m2c::kskipfixcols: 	goto skipfixcols;
        case m2c::kskipfixcols_ori: 	goto skipfixcols_ori;
        case m2c::kskipfixcols_ori2: 	goto skipfixcols_ori2;
        case m2c::kskipircols: 	goto skipircols;
        case m2c::kskipircols_ori: 	goto skipircols_ori;
        case m2c::kskipircols_ori2: 	goto skipircols_ori2;
        case m2c::kskipwpmarker: 	goto skipwpmarker;
        case m2c::kskipwpsymbol: 	goto skipwpsymbol;
        case m2c::kskipzoomin: 	goto skipzoomin;
        case m2c::kskipzoomout: 	goto skipzoomout;
        case m2c::ksnapgndobject: 	goto snapgndobject;
        case m2c::ksortmode: 	goto sortmode;
        case m2c::ksorttdmode: 	goto sorttdmode;
        case m2c::ksorttdmode_ori: 	goto sorttdmode_ori;
        case m2c::ksorttdmode_ori2: 	goto sorttdmode_ori2;
        case m2c::kstartscan: 	goto startscan;
        case m2c::kstealmouse: 	goto stealmouse;
        case m2c::kswitchedoff: 	goto switchedoff;
        case m2c::ktargetmoved: 	goto targetmoved;
        case m2c::ktdsymadjustlock: 	goto tdsymadjustlock;
        case m2c::ktdsymadjustlock_ori: 	goto tdsymadjustlock_ori;
        case m2c::ktdsymadjustlock_ori2: 	goto tdsymadjustlock_ori2;
        case m2c::ktdsymok: 	goto tdsymok;
        case m2c::ktdsymok_ori: 	goto tdsymok_ori;
        case m2c::ktdsymok_ori2: 	goto tdsymok_ori2;
        case m2c::ktdsymtargetlock: 	goto tdsymtargetlock;
        case m2c::ktdsymtargetlock_ori: 	goto tdsymtargetlock_ori;
        case m2c::ktdsymtargetlock_ori2: 	goto tdsymtargetlock_ori2;
        case m2c::ktdsymzoom: 	goto tdsymzoom;
        case m2c::ktdsymzoom_ori: 	goto tdsymzoom_ori;
        case m2c::ktdsymzoom_ori2: 	goto tdsymzoom_ori2;
        case m2c::ktialdadjustlock: 	goto tialdadjustlock;
        case m2c::ktialdadjustlock_ori: 	goto tialdadjustlock_ori;
        case m2c::ktialdadjustlock_ori2: 	goto tialdadjustlock_ori2;
        case m2c::ktialddisp: 	goto tialddisp;
        case m2c::ktialddisp_ori: 	goto tialddisp_ori;
        case m2c::ktialddisp_ori2: 	goto tialddisp_ori2;
        case m2c::ktialdexit: 	goto tialdexit;
        case m2c::ktialdexit_ori: 	goto tialdexit_ori;
        case m2c::ktialdexit_ori2: 	goto tialdexit_ori2;
        case m2c::ktialdinit: 	goto tialdinit;
        case m2c::ktialdinit_ori: 	goto tialdinit_ori;
        case m2c::ktialdinit_ori2: 	goto tialdinit_ori2;
        case m2c::ktialdok: 	goto tialdok;
        case m2c::ktialdok_ori: 	goto tialdok_ori;
        case m2c::ktialdok_ori2: 	goto tialdok_ori2;
        case m2c::ktialdsearch: 	goto tialdsearch;
        case m2c::ktialdsearch_ori: 	goto tialdsearch_ori;
        case m2c::ktialdsearch_ori2: 	goto tialdsearch_ori2;
        case m2c::ktialdtargetlock: 	goto tialdtargetlock;
        case m2c::ktialdtargetlock_ori: 	goto tialdtargetlock_ori;
        case m2c::ktialdtargetlock_ori2: 	goto tialdtargetlock_ori2;
        case m2c::ktialdzoom: 	goto tialdzoom;
        case m2c::ktialdzoom_ori: 	goto tialdzoom_ori;
        case m2c::ktialdzoom_ori2: 	goto tialdzoom_ori2;
        case m2c::kupdatetab: 	goto updatetab;
        case m2c::kupdatetab1: 	goto updatetab1;
        case m2c::kupdatetab2: 	goto updatetab2;
        case m2c::kvalidateexit: 	goto validateexit;
        case m2c::kvalidatetiald: 	goto validatetiald;
        case m2c::kwpinvalid1: 	goto wpinvalid1;
        case m2c::kwpinvalid2: 	goto wpinvalid2;
        case m2c::kwpmarkerloop: 	goto wpmarkerloop;
        case m2c::kxgridloop: 	goto xgridloop;
        case m2c::kxok: 	goto xok;
        case m2c::kygridloop: 	goto ygridloop;
        case m2c::kyok: 	goto yok;
        case m2c::kzxs1: 	goto zxs1;
        case m2c::kzxs2: 	goto zxs2;
        case m2c::kzxs3: 	goto zxs3;
        case m2c::kzxs4: 	goto zxs4;
        default: return __dispatch_call(__disp, _state);
    };
}


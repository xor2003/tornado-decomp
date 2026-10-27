/* THIS IS GENERATED FILE */

        
#include "initgame.h"

                

 __attribute__((weak)) bool initgame(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    initgame:
    _begin:
	// 0 ;--------------
	// 0 ;* init weapons
	// 0 ;--------------
edummylabel1:
	// 4369 
	/* call	InitWeapons */
	CALLF(initweapons, 0);
	// 0 ;--------------------
	// 0 ;* init waypoint data
	// 0 ;--------------------
	// 0 ;* count number of valid waypoints
	/* mov	si,OFFSET WayList */
	si = m2c::near_offset_external(waylist);
	/* xor	ax,ax		;counter = 0 */
	XOR(ax, ax);
dummylabel1:
	// 4371 
	/* @@:		test	WP_ATTR[si],WP_VALID	;waypoint in use? */
	TEST(((waypoint*)raddr(ds,si))->wp_attr, 0x80);
	/* jz	SetWayTotal		;no -> */
	if (!(((waypoint*)raddr(ds,si))->wp_attr & 0x80)) {goto setwaytotal;}
	/* inc	ax		;counter += 1 */
	INC(ax);
	/* add	si,WAY_REC_SIZE */
	ADD(si, 16);
	/* jmp	@B */
	goto dummylabel1;
setwaytotal:
	// 4373 
	/* SetWayTotal:	mov	WayTotal,ax */
	waytotal = ax;
	// 0 ;* if StartWaypoint < WayTotal then
	// 0 ;*    WPPtr = OFFSET WayList + StartWaypoint * WAY_REC_SIZE
	// 0 ;* else
	// 0 ;*    WPPtr = OFFSET WayList
	// 0 ;* endif
	/* mov	si,OFFSET WayList */
	si = m2c::near_offset_external(waylist);
	/* mov	ax,StartWaypoint */
	ax = startwaypoint;
	/* cmp	ax,WayTotal */
	CMP(ax, waytotal);
	/* jnb	@F */
	if ((dw)(ax) >= (dw)(waytotal)) {goto dummylabel2;}
	/* mov	dx,WAY_REC_SIZE */
	dx = 16;
	/* mul	dx */
	MUL1_2(dx);
	/* add	si,ax */
	ADD(si, ax);
dummylabel2:
	// 4375 
	/* @@:		mov	WPPtr,si */
	wpptr = si;
	// 0 ;* EndWPPtr = OFFSET WayList + max(WayTotal - 1, 0) * WAY_REC_SIZE
	/* mov	ax,WayTotal */
	ax = waytotal;
	/* test	ax,ax */
	TEST(ax, ax);
	/* jz	@F */
	if (!(ax & ax)) {goto dummylabel3;}
	/* dec	ax */
	DEC(ax);
	/* mov	dx,WAY_REC_SIZE */
	dx = 16;
	/* mul	dx */
	MUL1_2(dx);
dummylabel3:
	// 4377 
	/* @@:		add	ax,OFFSET WayList */
	ADD(ax, m2c::near_offset_external(waylist));
	/* mov	EndWPPtr,ax */
	endwpptr = ax;
	// 0 ;--------------------
	// 0 ;* init airfield data
	// 0 ;--------------------
	/* mov	cx,NUM_AIRFIELDS */
	cx = 4;
	/* mov	si,OFFSET AirfieldList */
	si = m2c::near_offset_external(airfieldlist);
initafloop:
	// 4379 
	/* InitAFLoop:	mov	bp,AF_XSEC[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_xsec)));
	/* cmp	bp,-1		;record in use? */
	CMP(bp, -1);
	/* je	InitNextAF	;no -> */
	if ((dw)(bp) == (dw)(-1)) {goto initnextaf;}
	// 0 ;* fetch special sector number (AIRFIELD_1 .. AIRFIELD_N)
	/* mov	ax,AF_YSEC[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ysec)));
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* shl	ax,1 */
	SHL(ax, 1);
	/* add	bp,ax		;map index = xsec + ysec * 32 */
	ADD(bp, ax);
	/* mov	al,SpecialLayer1[bp]	;special number */
	al = *((&speciallayer1)+bp);
	// 0 ;* ILS ptr = OFFSET ILSData + (special number - AIRFIELD_1) * ILS_REC_SIZE
	/* sub	al,AIRFIELD_1 */
	SUB(al, airfield_1);
	/* mov	ah,ILS_REC_SIZE */
	ah = 22;
	/* mul	ah */
	MUL1_1(ah);
	/* add	ax,OFFSET ILSData */
	ADD(ax, m2c::near_offset_external(ilsdata));
	/* mov	AF_ILS_PTR[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_ils_ptr))), m2c::getdata(ax));
	// 0 ;* clear vars
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	AF_RNG[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_rng))), m2c::getdata(ax));
	/* mov	AF_BRG[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_brg))), m2c::getdata(ax));
	/* mov	AF_ETA[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_eta))), m2c::getdata(ax));
	/* mov	AF_RNG_LO[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_rng_lo))), m2c::getdata(ax));
	/* mov	AF_RNG_HI[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((airfield*)raddr(ds,si))->af_rng_hi))), m2c::getdata(ax));
initnextaf:
	// 4381 
	/* InitNextAF:	add	si,AF_REC_SIZE */
	ADD(si, 18);
	/* loop	InitAFLoop */
	LOOP(initafloop);
	// 0 ;------------
	// 0 ;* init clock (read real-time clock if clock not set by mission planning)
	// 0 ;------------
	/* cmp	Clock24.CLK_HRS,-1	;clock set? */
	CMP(clock24.clk_hrs, -1);
	/* jne	SkipClock		;yes -> */
	if ((dw)(clock24.clk_hrs) != (dw)(-1)) {goto skipclock;}
	/* xor	al,al		;assume real-time clock defective */
	XOR(al, al);
	/* mov	Clock24.CLK_HRS,al */
	clock24.clk_hrs = al;
	/* mov	Clock24.CLK_MINS,al */
	clock24.clk_mins = al;
	/* mov	Clock24.CLK_SECS,al */
	clock24.clk_secs = al;
	/* mov	Clock24.CLK_100THS,al */
	clock24.clk_100ths = al;
	/* mov	ah,002h		;get real-time clock time */
	ah = 0x002;
	/* int	01ah		;time of day service */
	_INT(0x01a);
	/* jc	SkipClock	;defective -> */
	if (CF) {goto skipclock;}
	// 0 ;* ch = hours   (00 .. 23 BCD)
	// 0 ;* cl = minutes (00 .. 59 BCD)
	// 0 ;* dh = seconds (00 .. 59 BCD)
	/* mov	al,ch */
	al = ch;
	/* mov	ah,ch */
	ah = ch;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	Clock24.CLK_HRS,al */
	clock24.clk_hrs = al;
	/* mov	al,cl */
	al = cl;
	/* mov	ah,cl */
	ah = cl;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	Clock24.CLK_MINS,al */
	clock24.clk_mins = al;
	/* mov	al,dh */
	al = dh;
	/* mov	ah,dh */
	ah = dh;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	Clock24.CLK_SECS,al */
	clock24.clk_secs = al;
	// 0 ;--------------------
	// 0 ;* init reference map
	// 0 ;--------------------
skipclock:
	// 4383 
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET REF_VIEW */
	di = m2c::near_offset_external(ref_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 1831 rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 1832 mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(ref_view););	// 1833 mov	di,OFFSET REF_VIEW */
	// 1834 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 0 ;--------------
	// 0 ;* sort variant
	// 0 ;--------------
	/* mov	al,MOB_TORNADO1		;assume IDS / ECR variants */
	al = 9;
	/* cmp	TornadoType,ADV_TORNADO	;ADV variant? */
	CMP(tornadotype, 2);
	/* jne	@F			;no -> */
	if ((dw)(tornadotype) != (dw)(2)) {goto dummylabel4;}
	/* mov	al,MOB_TORNADV1 */
	al = 25;
dummylabel4:
	// 4385 
	/* @@:		mov	M_MOBILE.MOB_NUM,al */
	m_mobile.mob_num = al;
	// 0 ;-----------------------
	// 0 ;* create Tornado mobile
	// 0 ;-----------------------
	/* mov	si,OFFSET M_MOBILE */
	si = m2c::near_offset_external(m_mobile);
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	// 0 ;---------------------------
	// 0 ;* check for two player mode
	// 0 ;---------------------------
	/* test	TwoPlayer,1 */
	TEST(twoplayer, 1);
	/* jz	@F */
	if (!(twoplayer & 1)) {goto dummylabel5;}
	// 0 ;* create opponent
	/* mov	si,OFFSET OPP_MOBILE */
	si = m2c::near_offset_external(opp_mobile);
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	/* jmp	InitGameExit */
	goto initgameexit;
	// 0 ;----------------------
	// 0 ;* create drone mobiles
	// 0 ;----------------------
dummylabel5:
	// 4387 
	/* @@:		xor	bx,bx */
	XOR(bx, bx);
	/* mov	cx,NUM_DRONES */
	cx = 90;
createdronelp:
	// 4389 
	/* CreateDroneLp:	mov	si,DronePtrs[bx] */
	si = *(dw*)(((db*)&droneptrs)+bx);
	/* cmp	_DRONE_SIDE[si],DEAD	;active? */
	CMP(((drone_data*)raddr(ds,(6+18)+si))->drone_side, 0);
	/* je	@F			;no -> */
	if ((db)(((drone_data*)raddr(ds,(6+18)+si))->drone_side) == (db)(0)) {goto dummylabel6;}
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
dummylabel6:
	// 4391 
	/* @@:		add	bx,2 */
	ADD(bx, 2);
	/* loop	CreateDroneLp */
	LOOP(createdronelp);
	// 0 ;-----------------------------
	// 0 ;* init aircraft / helicopters
	// 0 ;-----------------------------
	/* call	InitPlanes */
	CALLF(initplanes, 0);
	/* call	InitHelicops */
	CALLF(inithelicops, 0);
	// 0 ;----------------------------
	// 0 ;* init truck / train convoys
	// 0 ;----------------------------
	/* call	InitConvoys */
	CALLF(initconvoys, 0);
initgameexit:
	// 4393 
	/* InitGameExit:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcreatedronelp: 	goto createdronelp;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kinitafloop: 	goto initafloop;
        case m2c::kinitgame: 	goto initgame;
        case m2c::kinitgameexit: 	goto initgameexit;
        case m2c::kinitnextaf: 	goto initnextaf;
        case m2c::ksetwaytotal: 	goto setwaytotal;
        case m2c::kskipclock: 	goto skipclock;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


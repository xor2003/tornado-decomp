/* THIS IS GENERATED FILE */

        
#include "twoplyr.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
inittwoplayer:
	// 1862 
	/* test	InfiniteWeapons,1 ;* kill: assume all */
	TEST(infiniteweapons, 1);
edummylabel1:
	// 4369 
	/* jz	@F */
	if (ZF) {goto dummylabel1;}
	/* mov	ExtStores[EXT_SIDEWINDER],10 */
	*(dw*)(((db*)&extstores)+12) = 10;
	/* mov	ExtStores[EXT_SKYFLASH],10 */
	*(dw*)(((db*)&extstores)+14) = 10;
dummylabel1:
	// 4371 
	/* @@:		ret */
	RETF(0);
txtornadodata:
	// 1877 
	// 0 ;----------------------------------
	// 0 ;* prepare Tornado data to transmit
	// 0 ;----------------------------------
	// 0 ;---------------------
	// 0 ;* miscellaneous flags (some set previously in program loop)
	// 0 ;---------------------
	// 0 ;* emitting radar?
edummylabel2:
	// 4373 
	/* cmp	RadarMode,NUL_RADAR */
	CMP(radarmode, 0);
	/* je	@F */
	if ((dw)(radarmode) == (dw)(0)) {goto dummylabel2;}
	/* or	Tx.COMMS_FLAGS1,I_EMIT_RADAR */
	OR(tx.comms_flags1, 0x20);
	// 0 ;* emitting ECM?
dummylabel2:
	// 4375 
	/* @@:		test	ECMActive,1 */
	TEST(ecmactive, 1);
	/* jz	@F */
	if (!(ecmactive & 1)) {goto dummylabel3;}
	/* or	Tx.COMMS_FLAGS1,I_EMIT_ECM */
	OR(tx.comms_flags1, 0x40);
	// 0 ;* opponent radar visible?
dummylabel3:
	// 4377 
	/* @@:		cmp	NumRadarTracks,0 */
	CMP(numradartracks, 0);
	/* je	@F */
	if ((dw)(numradartracks) == (dw)(0)) {goto dummylabel4;}
	/* or	Tx.COMMS_FLAGS1,I_ILLUM_YOU */
	OR(tx.comms_flags1, 0x80);
	// 0 ;* any weapons remaining?
dummylabel4:
	// 4379 
	/* @@:		cmp	AirArmMode,ARM_OFF */
	CMP(airarmmode, 0);
	/* jne	@F */
	if ((dw)(airarmmode) != (dw)(0)) {goto dummylabel5;}
	/* or	Tx.COMMS_FLAGS3,I_NO_WEAPONS */
	OR(tx.comms_flags3, 0x1);
	// 0 ;* killed?
dummylabel5:
	// 4381 
	/* @@:		cmp	DieFlag,0 */
	CMP(dieflag, 0);
	/* je	@F */
	if ((dw)(dieflag) == (dw)(0)) {goto dummylabel6;}
	/* or	Tx.COMMS_FLAGS3,I_KILLED */
	OR(tx.comms_flags3, 0x2);
dummylabel6:
	// 4383 
	/* @@:		cmp	Destroyed,0 */
	CMP(destroyed, 0);
	/* je	@F */
	if ((dw)(destroyed) == (dw)(0)) {goto dummylabel7;}
	/* or	Tx.COMMS_FLAGS3,I_KILLED */
	OR(tx.comms_flags3, 0x2);
	// 0 ;* opponent killed?
dummylabel7:
	// 4385 
	/* @@:		cmp	OPP_DRONE.DRONE_SIDE,DEAD */
	CMP(opp_drone.drone_side, 0);
	/* jne	@F */
	if ((dw)(opp_drone.drone_side) != (dw)(0)) {goto dummylabel8;}
	/* or	Tx.COMMS_FLAGS3,I_KILLED_YOU */
	OR(tx.comms_flags3, 0x10);
	/* mov	DieFlag,DIE_2_PLYR_WIN */
	dieflag = 23;
	// 0 ;* ejected?
dummylabel8:
	// 4387 
	/* @@:		test	Ejected,1 */
	TEST(ejected, 1);
	/* jz	@F */
	if (!(ejected & 1)) {goto dummylabel9;}
	/* or	Tx.COMMS_FLAGS3,I_EJECTED */
	OR(tx.comms_flags3, 0x4);
	// 0 ;* quit?
dummylabel9:
	// 4389 
	/* @@:		cmp	DieFlag,DIE_QUIT */
	CMP(dieflag, 1);
	/* jne	@F */
	if ((dw)(dieflag) != (dw)(1)) {goto dummylabel10;}
	/* or	Tx.COMMS_FLAGS3,I_QUIT */
	OR(tx.comms_flags3, 0x8);
	// 0 ;* sent game end flag?
dummylabel10:
	// 4391 
	/* @@:		cmp	Tx.COMMS_FLAGS3,0 */
	CMP(tx.comms_flags3, 0);
	/* je	@F */
	if ((dw)(tx.comms_flags3) == (dw)(0)) {goto dummylabel11;}
	/* mov	TxGameEnd,1 */
	txgameend = 1;
	// 0 ;----------------------
	// 0 ;* mobile object number
	// 0 ;----------------------
dummylabel11:
	// 4393 
	/* @@:		mov	al,M_MOBILE.MOB_NUM */
	al = m_mobile.mob_num;
	/* mov	Tx.COMMS_MOB_NUM,al */
	tx.comms_mob_num = al;
	// 0 ;-------------------------
	// 0 ;* mobile object animation
	// 0 ;-------------------------
	/* mov	al,M_MOBILE.MOB_ANIM */
	al = m_mobile.mob_anim;
	/* mov	Tx.COMMS_MOB_ANIM,al */
	tx.comms_mob_anim = al;
	// 0 ;------------------
	// 0 ;* mobile viewpoint
	// 0 ;------------------
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* mov	Tx.COMMS_XSEC,ax */
	tx.comms_xsec = ax;
	/* mov	ax,M_VIEW.VP_YSEC */
	ax = m_view.vp_ysec;
	/* mov	Tx.COMMS_YSEC,ax */
	tx.comms_ysec = ax;
	/* mov	ax,M_VIEW.VP_XFT */
	ax = m_view.vp_xft;
	/* mov	Tx.COMMS_XFT,ax */
	tx.comms_xft = ax;
	/* mov	ax,M_VIEW.VP_YFT */
	ax = m_view.vp_yft;
	/* mov	Tx.COMMS_YFT,ax */
	tx.comms_yft = ax;
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	WORD PTR Tx.COMMS_ZFT_LO,ax */
	*((dw*)((db*)&tx+comms_zft_lo)) = ax;
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_HI */
	ax = *((dw*)((db*)&m_view+vp_zft_hi));
	/* mov	WORD PTR Tx.COMMS_ZFT_HI,ax */
	*((dw*)((db*)&tx+comms_zft_hi)) = ax;
	/* mov	ax,M_VIEW.VP_HDG */
	ax = m_view.vp_hdg;
	/* mov	Tx.COMMS_HDG,ax */
	tx.comms_hdg = ax;
	/* mov	ax,M_VIEW.VP_PITCH */
	ax = m_view.vp_pitch;
	/* mov	Tx.COMMS_PITCH,ax */
	tx.comms_pitch = ax;
	/* mov	ax,M_VIEW.VP_ROLL */
	ax = m_view.vp_roll;
	/* mov	Tx.COMMS_ROLL,ax */
	tx.comms_roll = ax;
	// 0 ;------
	// 0 ;* vtas
	// 0 ;------
	/* mov	ax,Vtas */
	ax = vtas;
	/* mov	Tx.COMMS_VTAS,ax */
	tx.comms_vtas = ax;
	// 0 ;---------------------
	// 0 ;* calc 7-bit checksum
	// 0 ;---------------------
	/* mov	cx,COMMS_REC_SIZE-1 */
	cx = 26-1;
	/* mov	si,OFFSET Tx+1 */
	si = m2c::near_offset_external(tx)+1;
	/* xor	ah,ah */
	XOR(ah, ah);
dummylabel12:
	// 4395 
	/* @@:		lodsb */
	{ LODSB; }
	/* add	ah,al */
	ADD(ah, al);
	/* loop	@B */
	LOOP(dummylabel12);
	/* and	ah,07fh */
	AND(ah, 0x07f);
	/* mov	Tx.COMMS_CHECKSUM,ah */
	tx.comms_checksum = ah;
	// 0 ;-----------------------
	// 0 ;* transmit Tornado data
	// 0 ;-----------------------
	/* mov	cx,COMMS_REC_SIZE */
	cx = 26;
	/* mov	si,OFFSET Tx */
	si = m2c::near_offset_external(tx);
	/* call	SendPacket */
	CALLF(sendpacket, 0);
	// 0 ;-------------
	// 0 ;* clear flags
	// 0 ;-------------
	/* mov	Tx.COMMS_FLAGS1,0 */
	tx.comms_flags1 = 0;
	/* mov	Tx.COMMS_FLAGS2,0 */
	tx.comms_flags2 = 0;
	/* mov	Tx.COMMS_FLAGS3,0 */
	tx.comms_flags3 = 0;
	/* ret */
	RETF(0);
rxopponentdata:
	// 2012 
	// 0 ;-----------------------
	// 0 ;* receive opponent data
	// 0 ;-----------------------
edummylabel3:
	// 4397 
	/* mov	cx,COMMS_REC_SIZE-1 */
	cx = 26-1;
	/* mov	di,OFFSET Rx */
	di = m2c::near_offset_external(rx);
	/* mov	CountDown,2*100 */
	countdown = 2*100;
	// 0 ;* wait for first +ve data byte (start of data packet)
rxloop1:
	// 4399 
	/* RxLoop1:	cmp	CountDown,0 */
	CMP(countdown, 0);
	/* jne	__m2c_macrolocal_1_skip */
	if ((dw)(countdown) != (dw)(0)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	RxTimeout */
	goto rxtimeout;
__m2c_macrolocal_1_skip:
	// 4401 
	/* call	ReadData */
	CALLF(readdata, 0);
	/* jc	RxLoop1 */
	if (CF) {goto rxloop1;}
	/* test	al,al */
	TEST(al, al);
	/* js	RxLoop1 */
	if ((signed char)((al & al)) < 0) {goto rxloop1;}
	/* stosb */
	{ STOSB; }
	// 0 ;* read rest of packet
rxloop2:
	// 4403 
	/* RxLoop2:	mov	CountDown,25 */
	countdown = 25;
dummylabel13:
	// 4405 
	/* @@:		cmp	CountDown,0 */
	CMP(countdown, 0);
	/* jne	__m2c_macrolocal_2_skip */
	if ((dw)(countdown) != (dw)(0)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	RxTimeout */
	goto rxtimeout;
__m2c_macrolocal_2_skip:
	// 4407 
	/* call	ReadData */
	CALLF(readdata, 0);
	/* jc	@B */
	if (CF) {goto dummylabel13;}
	/* stosb */
	{ STOSB; }
	/* loop	RxLoop2 */
	LOOP(rxloop2);
	// 0 ;-----------------------
	// 0 ;* process opponent data
	// 0 ;-----------------------
	// 0 ;------------------
	// 0 ;* check data valid
	// 0 ;------------------
	/* mov	cx,COMMS_REC_SIZE-1 */
	cx = 26-1;
	/* mov	si,OFFSET Rx+1 */
	si = m2c::near_offset_external(rx)+1;
	/* xor	ah,ah */
	XOR(ah, ah);
dummylabel14:
	// 4409 
	/* @@:		lodsb */
	{ LODSB; }
	/* add	ah,al */
	ADD(ah, al);
	/* loop	@B */
	LOOP(dummylabel14);
	/* and	ah,07fh */
	AND(ah, 0x07f);
	/* cmp	ah,Rx.COMMS_CHECKSUM */
	CMP(ah, rx.comms_checksum);
	/* je	__m2c_macrolocal_3_skip */
	if ((db)(ah) == (db)(rx.comms_checksum)) {goto __m2c_macrolocal_3_skip;}
	/* jmp	RxInvalid */
	goto rxinvalid;
__m2c_macrolocal_3_skip:
	// 4411 
	// 0 ;-----------------
	// 0 ;* delete opponent
	// 0 ;-----------------
	/* mov	si,OFFSET OPP_MOBILE */
	si = m2c::near_offset_external(opp_mobile);
	/* call	DeleteMobile */
	CALLF(deletemobile, 0);
	// 0 ;---------------------
	// 0 ;* miscellaneous flags
	// 0 ;---------------------
	/* mov	al,Rx.COMMS_FLAGS1 */
	al = rx.comms_flags1;
	/* mov	OppFlags1,al */
	oppflags1 = al;
	/* mov	al,Rx.COMMS_FLAGS2 */
	al = rx.comms_flags2;
	/* mov	OppFlags2,al */
	oppflags2 = al;
	/* mov	al,Rx.COMMS_FLAGS3 */
	al = rx.comms_flags3;
	/* mov	OppFlags3,al */
	oppflags3 = al;
	// 0 ;----------------------
	// 0 ;* mobile object number
	// 0 ;----------------------
	/* mov	al,Rx.COMMS_MOB_NUM */
	al = rx.comms_mob_num;
	/* mov	OPP_MOBILE.MOB_NUM,al */
	opp_mobile.mob_num = al;
	// 0 ;-------------------------
	// 0 ;* mobile object animation
	// 0 ;-------------------------
	/* mov	al,Rx.COMMS_MOB_ANIM */
	al = rx.comms_mob_anim;
	/* mov	OPP_MOBILE.MOB_ANIM,al */
	opp_mobile.mob_anim = al;
	// 0 ;------------------
	// 0 ;* mobile viewpoint
	// 0 ;------------------
	/* mov	ax,Rx.COMMS_XSEC */
	ax = rx.comms_xsec;
	/* mov	OPP_VIEW.VP_XSEC,ax */
	opp_view.vp_xsec = ax;
	/* mov	ax,Rx.COMMS_YSEC */
	ax = rx.comms_ysec;
	/* mov	OPP_VIEW.VP_YSEC,ax */
	opp_view.vp_ysec = ax;
	/* mov	ax,Rx.COMMS_XFT */
	ax = rx.comms_xft;
	/* mov	OPP_VIEW.VP_XFT,ax */
	opp_view.vp_xft = ax;
	/* mov	ax,Rx.COMMS_YFT */
	ax = rx.comms_yft;
	/* mov	OPP_VIEW.VP_YFT,ax */
	opp_view.vp_yft = ax;
	/* mov	ax,WORD PTR Rx.COMMS_ZFT_LO */
	ax = *((dw*)((db*)&rx+comms_zft_lo));
	/* mov	WORD PTR OPP_VIEW.VP_ZFT_LO,ax */
	*((dw*)((db*)&opp_view+vp_zft_lo)) = ax;
	/* mov	ax,WORD PTR Rx.COMMS_ZFT_HI */
	ax = *((dw*)((db*)&rx+comms_zft_hi));
	/* mov	WORD PTR OPP_VIEW.VP_ZFT_HI,ax */
	*((dw*)((db*)&opp_view+vp_zft_hi)) = ax;
	/* mov	ax,Rx.COMMS_HDG */
	ax = rx.comms_hdg;
	/* mov	OPP_VIEW.VP_HDG,ax */
	opp_view.vp_hdg = ax;
	/* mov	ax,Rx.COMMS_PITCH */
	ax = rx.comms_pitch;
	/* mov	OPP_VIEW.VP_PITCH,ax */
	opp_view.vp_pitch = ax;
	/* mov	ax,Rx.COMMS_ROLL */
	ax = rx.comms_roll;
	/* mov	OPP_VIEW.VP_ROLL,ax */
	opp_view.vp_roll = ax;
	// 0 ;------
	// 0 ;* vtas
	// 0 ;------
	/* mov	ax,Rx.COMMS_VTAS */
	ax = rx.comms_vtas;
	/* mov	OppVtas,ax */
	oppvtas = ax;
	// 0 ;-----------------
	// 0 ;* create opponent
	// 0 ;-----------------
	/* mov	si,OFFSET OPP_MOBILE */
	si = m2c::near_offset_external(opp_mobile);
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	// 0 ;---------------
	// 0 ;* process flags
	// 0 ;---------------
	// 0 ;* fire cannon
	/* test	OppFlags1,I_FIRE_CANNON */
	TEST(oppflags1, 0x1);
	/* jz	@F */
	if (!(oppflags1 & 0x1)) {goto dummylabel15;}
	/* call	OppFireCannon */
	CALLF(oppfirecannon, 0);
	// 0 ;* fire Sidewinder
dummylabel15:
	// 4413 
	/* @@:		test	OppFlags1,I_FIRE_AIM9L */
	TEST(oppflags1, 0x2);
	/* jz	@F */
	if (!(oppflags1 & 0x2)) {goto dummylabel16;}
	/* mov	bx,SIDEWINDER */
	bx = 14;
	/* call	OppFireMissile */
	CALLF(oppfiremissile, 0);
	// 0 ;* fire Sky Flash
dummylabel16:
	// 4415 
	/* @@:		test	OppFlags1,I_FIRE_SKYFLASH */
	TEST(oppflags1, 0x4);
	/* jz	@F */
	if (!(oppflags1 & 0x4)) {goto dummylabel17;}
	/* mov	bx,SKYFLASH */
	bx = 16;
	/* call	OppFireMissile */
	CALLF(oppfiremissile, 0);
	// 0 ;* release chaff
dummylabel17:
	// 4417 
	/* @@:		test	OppFlags1,I_REL_CHAFF */
	TEST(oppflags1, 0x8);
	/* jz	@F */
	if (!(oppflags1 & 0x8)) {goto dummylabel18;}
	/* mov	bx,CHAFF */
	bx = 22;
	/* call	OppRelDecoy */
	CALLF(oppreldecoy, 0);
	// 0 ;* release flare
dummylabel18:
	// 4419 
	/* @@:		test	OppFlags1,I_REL_FLARE */
	TEST(oppflags1, 0x10);
	/* jz	@F */
	if (!(oppflags1 & 0x10)) {goto dummylabel19;}
	/* mov	bx,FLARE */
	bx = 24;
	/* call	OppRelDecoy */
	CALLF(oppreldecoy, 0);
	// 0 ;* check for stalemate
dummylabel19:
	// 4421 
	/* @@:		test	OppFlags3,I_NO_WEAPONS */
	TEST(oppflags3, 0x1);
	/* jz	@F */
	if (!(oppflags3 & 0x1)) {goto dummylabel20;}
	/* cmp	AirArmMode,ARM_OFF */
	CMP(airarmmode, 0);
	/* jne	@F */
	if ((dw)(airarmmode) != (dw)(0)) {goto dummylabel20;}
	/* mov	DieFlag,DIE_2_PLYR_DRAW */
	dieflag = 24;
	// 0 ;* check for opponent killed / ejected / quit
dummylabel20:
	// 4423 
	/* @@:		test	OppFlags3,I_KILLED+I_EJECTED+I_QUIT */
	TEST(oppflags3, 0x2+0x4+0x8);
	/* jz	@F */
	if (!(oppflags3 & 0x2+0x4+0x8)) {goto dummylabel21;}
	/* mov	DieFlag,DIE_2_PLYR_WIN */
	dieflag = 23;
	// 0 ;* check for opponent killed Tornado
dummylabel21:
	// 4425 
	/* @@:		test	OppFlags3,I_KILLED_YOU */
	TEST(oppflags3, 0x10);
	/* jz	@F */
	if (!(oppflags3 & 0x10)) {goto dummylabel22;}
	/* mov	al,DIE_2_PLYR_LOSE */
	al = 25;
	/* mov	ah,TOTAL_DAMAGE */
	ah = 3;
	/* call	DestroyTornado */
	CALLF(destroytornado, 0);
	// m2c-dedup: removed duplicate expansion row: J(CALLF(destroytornado,0));	// 2176 						call	DestroyTornado
	// 0 ;* received game end flag
dummylabel22:
	// 4427 
	/* @@:		cmp	OppFlags3,0 */
	CMP(oppflags3, 0);
	/* je	@F */
	if ((dw)(oppflags3) == (dw)(0)) {goto dummylabel23;}
	/* mov	RxGameEnd,1 */
	rxgameend = 1;
dummylabel23:
	// 4429 
	/* @@:		jmp	RxOppExit */
	goto rxoppexit;
	// 0 ;---------------------------
rxinvalid:
	// 4431 
	// 0 ;---------------------------
	// 0 ;---------------------------
rxtimeout:
	// 4433 
	// 0 ;---------------------------
	// 0 ;* keep position data and speed as before, but reset all flags
	/* mov	OppFlags1,0 */
	oppflags1 = 0;
	/* mov	OppFlags2,0 */
	oppflags2 = 0;
	/* mov	OppFlags3,0 */
	oppflags3 = 0;
rxoppexit:
	// 4435 
	/* RxOppExit:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
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
        case m2c::kinittwoplayer: 	goto inittwoplayer;
        case m2c::krxinvalid: 	goto rxinvalid;
        case m2c::krxloop1: 	goto rxloop1;
        case m2c::krxloop2: 	goto rxloop2;
        case m2c::krxoppexit: 	goto rxoppexit;
        case m2c::krxopponentdata: 	goto rxopponentdata;
        case m2c::krxtimeout: 	goto rxtimeout;
        case m2c::ktxtornadodata: 	goto txtornadodata;
        default: return __dispatch_call(__disp, _state);
    };
}


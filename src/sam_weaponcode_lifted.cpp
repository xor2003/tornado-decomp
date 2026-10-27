/* THIS IS GENERATED FILE */

        
#include "sam.h"

                

 __attribute__((weak)) bool updatesam(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    updatesam:
    _begin:
	// 0 ;------------------------------
	// 0 ;* check SAM illuminated on RWR
	// 0 ;------------------------------
edummylabel1:
	// 4369 
	/* test	RWRThreatFlags,RWR_SAM */
	TEST(rwrthreatflags, 0x10);
	/* jnz	__m2c_macrolocal_1_skip */
	if ((rwrthreatflags & 0x10) != 0) {goto __m2c_macrolocal_1_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;--------------------------------
	// 0 ;* check for hostile fire inhibit
	// 0 ;--------------------------------
	/* test	NoFire,1 */
	TEST(nofire, 1);
	/* jz	__m2c_macrolocal_2_skip */
	if (!(nofire & 1)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_2_skip:
	// 4373 
	// 0 ;---------------
	// 0 ;* check for fog (IR guidance not suitable)
	// 0 ;---------------
	/* cmp	Fog,0 */
	CMP(fog, 0);
	/* je	__m2c_macrolocal_3_skip */
	if ((dw)(fog) == (dw)(0)) {goto __m2c_macrolocal_3_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_3_skip:
	// 4375 
	// 0 ;---------------------------------------------
	// 0 ;* if overcast, check Tornado below cloud base
	// 0 ;---------------------------------------------
	/* test	Overcast,1 */
	TEST(overcast, 1);
	/* jz	@F */
	if (!(overcast & 1)) {goto dummylabel1;}
	/* mov	ax,WORD PTR M_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&m_view+vp_zft_lo));
	/* mov	dx,WORD PTR M_VIEW.VP_ZFT_HI */
	dx = *((dw*)((db*)&m_view+vp_zft_hi));
	/* sub	ax,WORD PTR CloudBase */
	SUB(ax, *(dw*)(&cloudbase));
	/* sbb	dx,WORD PTR CloudBase+2 */
	SBB(dx, *(dw*)(((db*)&cloudbase)+2));
	/* jb	__m2c_macrolocal_4_skip */
	if (CF) {goto __m2c_macrolocal_4_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_4_skip:
	// 4377 
	// 0 ;----------------------------------
	// 0 ;* check if Tornado in range of SAM
	// 0 ;----------------------------------
	// 0 ;* check Tornado below SAM ceiling
dummylabel1:
	// 4379 
	/* @@:		cmp	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_5_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_5_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_5_skip:
	// 4381 
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,SAM_CEILING */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 16000);
	/* jbe	__m2c_macrolocal_6_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) <= (dw)(16000)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_6_skip:
	// 4383 
	// 0 ;* check Tornado above SAM floor
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,SAM_FLOOR */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 100);
	/* jae	__m2c_macrolocal_7_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) >= (dw)(100)) {goto __m2c_macrolocal_7_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_7_skip:
	// 4385 
	// 0 ;-----------------------------------
	// 0 ;* check Tornado not in close combat
	// 0 ;-----------------------------------
	// 0 ;* check valid opponent
	/* cmp	TornadoOppPtr,-1 */
	CMP(tornadooppptr, -1);
	/* je	@F */
	if ((dw)(tornadooppptr) == (dw)(-1)) {goto dummylabel2;}
	// 0 ;* check same sector
	/* mov	si,TornadoOppPtr */
	si = tornadooppptr;
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* cmp	ax,_VP_XSEC[si] */
	CMP(ax, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* jne	@F */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)))) {goto dummylabel2;}
	/* mov	ax,M_VIEW.VP_YSEC */
	ax = m_view.vp_ysec;
	/* cmp	ax,_VP_YSEC[si] */
	CMP(ax, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* jne	@F */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)))) {goto dummylabel2;}
	/* jmp	SAMExit */
	goto samexit;
dummylabel2:
	// 4387 
	// 0 ;-----------------------------------
	// 0 ;* update timer and check for launch
	// 0 ;-----------------------------------
	/* mov	ax,SAMTimer */
	ax = samtimer;
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
	/* mov	SAMTimer,ax */
	samtimer = ax;
	/* jz	__m2c_macrolocal_9_skip */
	if (ax == 0) {goto __m2c_macrolocal_9_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_9_skip:
	// 4389 
	// 0 ;----------------------------
	// 0 ;* launch SAM against Tornado
	// 0 ;----------------------------
	// 0 ;* select random site from those available
	// 0 ;*
	// 0 ;* site num = 0 .. n = ActiveSAMCntr * rnd / 256 (do not round up)
	// 0 ;*
	// 0 ;* (assume that ActiveSAMCntr > 0 and ActiveSAMCntr < 256)
	/* call	RandX */
	CALLF(randx, 0);
	/* mov	dx,ActiveSAMCntr */
	dx = activesamcntr;
	/* mul	dx */
	MUL1_2(dx);
	/* mov	al,ah		;/256 */
	al = ah;
	/* xor	ah,ah */
	XOR(ah, ah);
	// 0 ;* search for site
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* test	cx,cx */
	TEST(cx, cx);
	/* jnz	__m2c_macrolocal_10_skip */
	if ((cx & cx) != 0) {goto __m2c_macrolocal_10_skip;}
	/* jmp	SAMExit */
	goto samexit;
__m2c_macrolocal_10_skip:
	// 4391 
	// 0 ;launch fail ->
	/* xor	bp,bp */
	XOR(bp, bp);
samscanloop:
	// 4393 
	/* SAMScanLoop:	cmp	RWRThreats[bp].RWR_THREAT,THREAT_SAM */
	CMP(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat)), 0);
	/* jne	@F */
	if ((dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))) != (dw)(0)) {goto dummylabel3;}
	/* test	ax,ax		;found site? */
	TEST(ax, ax);
	/* jz	SAMLocated	;yes -> */
	if (!(ax & ax)) {goto samlocated;}
	/* dec	ax */
	DEC(ax);
dummylabel3:
	// 4395 
	/* @@:		add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	SAMScanLoop */
	LOOP(samscanloop);
	/* jmp	SAMExit	    	;launch fail -> */
	goto samexit;
	// 0 ;-----------------------------------------------------
	// 0 ;* SAM located, set source position and launch missile
	// 0 ;-----------------------------------------------------
samlocated:
	// 4397 
	/* SAMLocated:	mov	ax,RWRThreats[bp].RWR_XSEC */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec)));
	/* mov	SAM_VIEW.VP_XSEC,ax */
	sam_view.vp_xsec = ax;
	/* mov	ax,RWRThreats[bp].RWR_YSEC */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec)));
	/* mov	SAM_VIEW.VP_YSEC,ax */
	sam_view.vp_ysec = ax;
	/* mov	ax,RWRThreats[bp].RWR_XFT */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft)));
	/* mov	SAM_VIEW.VP_XFT,ax */
	sam_view.vp_xft = ax;
	/* mov	ax,RWRThreats[bp].RWR_YFT */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft)));
	/* mov	SAM_VIEW.VP_YFT,ax */
	sam_view.vp_yft = ax;
	/* push	RWRThreats[bp].RWR_PTR	;store STAT_MOB <> ptr */
	PUSH(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr)));
	// 0 ;* calc slant range (source -> Tornado)
	/* mov	si,OFFSET SAM_VIEW */
	si = m2c::near_offset_external(sam_view);
	/* mov	di,OFFSET M_VIEW */
	di = m2c::near_offset_external(m_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	// 0 ;* calc intercept point
	/* mov	bx,SAM_MAX_SPEED */
	bx = sam_max_speed;
	/* mov	cx,Vtas */
	cx = vtas;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET AIM_VIEW */
	di = m2c::near_offset_external(aim_view);
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	// 0 ;* calc flat range and bearing (source -> intercept point)
	/* mov	si,OFFSET SAM_VIEW */
	si = m2c::near_offset_external(sam_view);
	/* mov	di,OFFSET AIM_VIEW */
	di = m2c::near_offset_external(aim_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;* set launch hdg and pitch
	/* mov	SAM_VIEW.VP_HDG,bx */
	sam_view.vp_hdg = bx;
	// 0 ;* note: The missile launch pitch angle is always set to 45?(as opposed to
	// 0 ;*       calculating the launch angle). This improves the visual effect and
	// 0 ;*       deliberately degrades the missile performance (especially at close
	// 0 ;*       range).
	/* mov	SAM_VIEW.VP_PITCH,64 */
	sam_view.vp_pitch = 64;
	// 0 ;* rotate object
	/* pop	si		;restore STAT_MOB <> ptr */
	POP(si);
	/* mov	ax,SEG MSctrDataStart */
	ax = m2c::segment_of_external(msctrdatastart);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	[si].STAT_HDG,bx */
	m2c::setdata(&(*((dw*)((db*)&((statmob*)raddr(ds,si))->stat_hdg))), m2c::getdata(bx));
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;* launch missile
	/* mov	ax,SAM_MIN_SPEED */
	ax = sam_min_speed;
	/* mov	bx,GECKO */
	bx = 20;
	/* xor	dl,dl		;drone launch */
	XOR(dl, dl);
	/* mov	si,OFFSET SAM_VIEW */
	si = m2c::near_offset_external(sam_view);
	/* mov	di,OFFSET M_MOBILE */
	di = m2c::near_offset_external(m_mobile);
	/* call	LaunchMissile */
	CALL(launchmissile, 0);
	/* test InCockpit,1 */
	TEST(incockpit, 1);
	/* jnz @F */
	if ((incockpit & 1) != 0) {goto dummylabel4;}
	/* call    LaunchSound */
	CALLF(launchsound, 0);
dummylabel4:
	// 4399 
	/* jc	SAMExit	    	;launch fail -> */
	if (CF) {goto samexit;}
	// 0 ;* create some smoke
	/* mov	bx,SMOKE_CRATER2 */
	bx = 2;
	/* mov	si,OFFSET SAM_VIEW */
	si = m2c::near_offset_external(sam_view);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	// 0 ;* reset timer
	/* call	RandX		; 0.00 ..  2.55 */
	CALLF(randx, 0);
	/* shl	ax,1		; 0.00 ..  5.12 */
	SHL(ax, 1);
	/* shl	ax,1		; 0.00 .. 10.24 */
	SHL(ax, 1);
	/* add	ax,5*100	; 5.00 .. 15.24 */
	ADD(ax, 5*100);
	// 0 ;* reduce SAM activity if Tornado emitting ECM
	/* test	ECMActive,1 */
	TEST(ecmactive, 1);
	/* jz	@F */
	if (!(ecmactive & 1)) {goto dummylabel5;}
	/* add	ax,5*100	;10.00 .. 20.24 */
	ADD(ax, 5*100);
dummylabel5:
	// 4401 
	/* @@:		mov	SAMTimer,ax */
	samtimer = ax;
samexit:
	// 4403 
	/* SAMExit: 	ret */
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
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::ksamexit: 	goto samexit;
        case m2c::ksamlocated: 	goto samlocated;
        case m2c::ksamscanloop: 	goto samscanloop;
        case m2c::kupdatesam: 	goto updatesam;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


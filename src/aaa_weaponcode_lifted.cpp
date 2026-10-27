/* THIS IS GENERATED FILE */

        
#include "aaa.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
updateaaa:
	// 1764 
	// 0 ;--------------------------------
	// 0 ;* check for hostile fire inhibit
	// 0 ;--------------------------------
edummylabel1:
	// 4369 
	/* test	NoFire,1 */
	TEST(nofire, 1);
	/* jz	__m2c_macrolocal_1_skip */
	if (!(nofire & 1)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	AAAExit */
	goto aaaexit;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;-----------------------------------
	// 0 ;* check Tornado not in close combat
	// 0 ;-----------------------------------
	// 0 ;* check valid opponent
	/* cmp	TornadoOppPtr,-1 */
	CMP(tornadooppptr, -1);
	/* je	@F */
	if ((dw)(tornadooppptr) == (dw)(-1)) {goto dummylabel1;}
	// 0 ;* check same sector
	/* mov	si,TornadoOppPtr */
	si = tornadooppptr;
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* cmp	ax,_VP_XSEC[si] */
	CMP(ax, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	/* jne	@F */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)))) {goto dummylabel1;}
	/* mov	ax,M_VIEW.VP_YSEC */
	ax = m_view.vp_ysec;
	/* cmp	ax,_VP_YSEC[si] */
	CMP(ax, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* jne	@F */
	if ((dw)(ax) != (dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)))) {goto dummylabel1;}
	/* jmp	AAAExit */
	goto aaaexit;
dummylabel1:
	// 4373 
	// 0 ;---------------------------
aaasource1:
	// 4375 
	// 0 ;update AAA source 1
	// 0 ;---------------------------
	// 0 ;* check if AAA source active
	/* test	AAAMode1,1 */
	TEST(aaamode1, 1);
	/* jz	AAAPassive1 */
	if (!(aaamode1 & 1)) {goto aaapassive1;}
	// 0 ;---------------------------
aaaactive1:
	// 4377 
	// 0 ;update active AAA source
	// 0 ;---------------------------
	/* mov	si,OFFSET AAA_VIEW1 */
	si = m2c::near_offset_external(aaa_view1);
	/* mov	di,AAAPtr1 */
	di = aaaptr1;
	/* call	AAAFire */
	CALL(aaafire, 0);
	/* mov	ax,AAATimer1 */
	ax = aaatimer1;
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
	/* jnz	@F		;burst in progress -> */
	if (ax != 0) {goto dummylabel2;}
	// 0 ;* switch to passive mode (set random passive period)
	/* mov	AAAMode1,0	;passive mode */
	aaamode1 = 0;
	/* call	RandX		;0.00 .. 2.55 secs */
	CALLF(randx, 0);
	/* add	ax,2*100	;2.00 .. 4.55 secs */
	ADD(ax, 2*100);
	// 0 ;* reduce AAA activity if Tornado emitting ECM
	/* test	ECMActive,1 */
	TEST(ecmactive, 1);
	/* jz	__m2c_macrolocal_3_skip */
	if (!(ecmactive & 1)) {goto __m2c_macrolocal_3_skip;}
	/* add	ax,2*100	;4.00 .. 6.55 secs */
	ADD(ax, 2*100);
__m2c_macrolocal_3_skip:
	// 4379 
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 1826 						call	RandX		;0.00 .. 2.55 secs */
/* m2c-phantom removed: 	R(TEST(ecmactive, 1));	// 1827 test	ECMActive,1 */
dummylabel2:
	// 4381 
	/* @@:		mov	AAATimer1,ax */
	aaatimer1 = ax;
	/* jmp	AAASource2 */
	goto aaasource2;
	// 0 ;---------------------------
aaapassive1:
	// 4383 
	// 0 ;update passive AAA source
	// 0 ;---------------------------
	// 0 ;* check AAA illuminated on RWR
	/* test	RWRThreatFlags,RWR_AAA */
	TEST(rwrthreatflags, 0x8);
	/* jnz	__m2c_macrolocal_4_skip */
	if ((rwrthreatflags & 0x8) != 0) {goto __m2c_macrolocal_4_skip;}
	/* jmp	AAASource2 */
	goto aaasource2;
__m2c_macrolocal_4_skip:
	// 4385 
	// 0 ;* check Tornado below AAA ceiling
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_5_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_5_skip;}
	/* jmp	AAASource2 */
	goto aaasource2;
__m2c_macrolocal_5_skip:
	// 4387 
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,AAA_CEILING */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 12000);
	/* jbe	__m2c_macrolocal_6_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) <= (dw)(12000)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	AAASource2 */
	goto aaasource2;
__m2c_macrolocal_6_skip:
	// 4389 
	// 0 ;* check Tornado above AAA floor
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,AAA_FLOOR */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 100);
	/* jae	__m2c_macrolocal_7_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) >= (dw)(100)) {goto __m2c_macrolocal_7_skip;}
	/* jmp	AAASource2 */
	goto aaasource2;
__m2c_macrolocal_7_skip:
	// 4391 
	// 0 ;* update timer
	/* mov	ax,AAATimer1 */
	ax = aaatimer1;
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
	/* mov	AAATimer1,ax */
	aaatimer1 = ax;
	/* jz	__m2c_macrolocal_9_skip */
	if (ax == 0) {goto __m2c_macrolocal_9_skip;}
	/* jmp	AAASource2 */
	goto aaasource2;
__m2c_macrolocal_9_skip:
	// 4393 
	// 0 ;still passive ->
	// 0 ;* check Tornado on active map
	/* cmp	ModelMapIndex,-1 */
	CMP(modelmapindex, -1);
	/* je	AAASkip1 */
	if ((dw)(modelmapindex) == (dw)(-1)) {goto aaaskip1;}
	// 0 ;* check enemy AAA in sector
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],SECT_ENEMY */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz	AAASkip1 */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto aaaskip1;}
	/* test	SctrGameLayer1[bp],SECT_AAA */
	TEST(*((&sctrgamelayer1)+bp), 0x20);
	/* jz	AAASkip1 */
	if (!(*((&sctrgamelayer1)+bp) & 0x20)) {goto aaaskip1;}
	// 0 ;* scan RWR for AAA
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* jcxz	AAASkip1 */
	JCXZ(aaaskip1);
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* mov	dx,M_VIEW.VP_YSEC */
	dx = m_view.vp_ysec;
	/* xor	bp,bp */
	XOR(bp, bp);
aaascanloop1:
	// 4395 
	/* AAAScanLoop1:	cmp	RWRThreats[bp].RWR_THREAT,THREAT_AAA */
	CMP(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat)), 2);
	/* jne	AAANext1 */
	if ((dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))) != (dw)(2)) {goto aaanext1;}
	// 0 ;* check same sector as Tornado
	/* cmp	ax,RWRThreats[bp].RWR_XSEC */
	CMP(ax, *((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec)));
	/* jne	AAANext1 */
	if ((dw)(ax) != (dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec)))) {goto aaanext1;}
	/* cmp	dx,RWRThreats[bp].RWR_YSEC */
	CMP(dx, *((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec)));
	/* jne	AAANext1 */
	if ((dw)(dx) != (dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec)))) {goto aaanext1;}
	// 0 ;* fetch xft, yft
	/* mov	si,RWRThreats[bp].RWR_XFT */
	si = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft)));
	/* mov	di,RWRThreats[bp].RWR_YFT */
	di = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft)));
	// 0 ;* if AAA source 2 is active then check not same source
	/* test	AAAMode2,1 */
	TEST(aaamode2, 1);
	/* jz	AAALocated1 */
	if (!(aaamode2 & 1)) {goto aaalocated1;}
	/* cmp	ax,AAA_VIEW2.VP_XSEC */
	CMP(ax, aaa_view2.vp_xsec);
	/* jne	AAALocated1 */
	if ((dw)(ax) != (dw)(aaa_view2.vp_xsec)) {goto aaalocated1;}
	/* cmp	dx,AAA_VIEW2.VP_YSEC */
	CMP(dx, aaa_view2.vp_ysec);
	/* jne	AAALocated1 */
	if ((dw)(dx) != (dw)(aaa_view2.vp_ysec)) {goto aaalocated1;}
	/* cmp	si,AAA_VIEW2.VP_XFT */
	CMP(si, aaa_view2.vp_xft);
	/* jne	AAALocated1 */
	if ((dw)(si) != (dw)(aaa_view2.vp_xft)) {goto aaalocated1;}
	/* cmp	di,AAA_VIEW2.VP_YFT */
	CMP(di, aaa_view2.vp_yft);
	/* jne	AAALocated1 */
	if ((dw)(di) != (dw)(aaa_view2.vp_yft)) {goto aaalocated1;}
	// 0 ;* next threat
aaanext1:
	// 4397 
	/* AAANext1:	add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	AAAScanLoop1 */
	LOOP(aaascanloop1);
	// 0 ;* AAA not located, remain passive
aaaskip1:
	// 4399 
	/* AAASkip1:	call	RandX		;0.00 .. 2.55 secs */
	CALLF(randx, 0);
	/* add	ax,2*100	;2.00 .. 4.55 secs */
	ADD(ax, 2*100);
	// 0 ;* reduce AAA activity if Tornado emitting ECM
	/* test	ECMActive,1 */
	TEST(ecmactive, 1);
	/* jz	__m2c_macrolocal_10_skip */
	if (!(ecmactive & 1)) {goto __m2c_macrolocal_10_skip;}
	/* add	ax,2*100	;4.00 .. 6.55 secs */
	ADD(ax, 2*100);
__m2c_macrolocal_10_skip:
	// 4401 
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 1926 call	RandX		;0.00 .. 2.55 secs */
/* m2c-phantom removed: 	R(TEST(ecmactive, 1));	// 1927 test	ECMActive,1 */
	/* mov	AAATimer1,ax */
	aaatimer1 = ax;
	/* jmp	AAASource2 */
	goto aaasource2;
	// 0 ;* AAA located, set source position and switch to active
aaalocated1:
	// 4403 
	/* AAALocated1:	mov	AAA_VIEW1.VP_XSEC,ax */
	aaa_view1.vp_xsec = ax;
	/* mov	AAA_VIEW1.VP_YSEC,dx */
	aaa_view1.vp_ysec = dx;
	/* mov	AAA_VIEW1.VP_XFT,si */
	aaa_view1.vp_xft = si;
	/* mov	AAA_VIEW1.VP_YFT,di */
	aaa_view1.vp_yft = di;
	/* mov	ax,RWRThreats[bp].RWR_PTR */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr)));
	/* mov	AAAPtr1,ax */
	aaaptr1 = ax;
	/* mov	AAAMode1,1 */
	aaamode1 = 1;
	/* mov	AAATimer1,AAA_BURST_LEN */
	aaatimer1 = 2*100;
	// 0 ;* create some smoke
	/* mov	bx,SMOKE_CRATER2 */
	bx = 2;
	/* mov	si,OFFSET AAA_VIEW1 */
	si = m2c::near_offset_external(aaa_view1);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
	// 0 ;---------------------------
aaasource2:
	// 4405 
	// 0 ;update AAA source 2
	// 0 ;---------------------------
	// 0 ;* check if AAA source active
	/* test	AAAMode2,1 */
	TEST(aaamode2, 1);
	/* jz	AAAPassive2 */
	if (!(aaamode2 & 1)) {goto aaapassive2;}
	// 0 ;---------------------------
aaaactive2:
	// 4407 
	// 0 ;update active AAA source
	// 0 ;---------------------------
	/* mov	si,OFFSET AAA_VIEW2 */
	si = m2c::near_offset_external(aaa_view2);
	/* mov	di,AAAPtr2 */
	di = aaaptr2;
	/* call	AAAFire */
	CALL(aaafire, 0);
	/* mov	ax,AAATimer2 */
	ax = aaatimer2;
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
	/* jnz	@F		;burst in progress -> */
	if (ax != 0) {goto dummylabel3;}
	// 0 ;* switch to passive mode (set random passive period)
	/* mov	AAAMode2,0	;passive mode */
	aaamode2 = 0;
	/* call	RandX		;0.00 .. 2.55 secs */
	CALLF(randx, 0);
	/* add	ax,2*100	;2.00 .. 4.55 secs */
	ADD(ax, 2*100);
	// 0 ;* reduce AAA activity if Tornado emitting ECM
	/* test	ECMActive,1 */
	TEST(ecmactive, 1);
	/* jz	__m2c_macrolocal_12_skip */
	if (!(ecmactive & 1)) {goto __m2c_macrolocal_12_skip;}
	/* add	ax,2*100	;4.00 .. 6.55 secs */
	ADD(ax, 2*100);
__m2c_macrolocal_12_skip:
	// 4409 
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 1979 						call	RandX		;0.00 .. 2.55 secs */
/* m2c-phantom removed: 	R(TEST(ecmactive, 1));	// 1980 test	ECMActive,1 */
dummylabel3:
	// 4411 
	/* @@:		mov	AAATimer2,ax */
	aaatimer2 = ax;
	/* jmp	AAAExit */
	goto aaaexit;
	// 0 ;---------------------------
aaapassive2:
	// 4413 
	// 0 ;update passive AAA source
	// 0 ;---------------------------
	// 0 ;* check AAA illuminated on RWR
	/* test	RWRThreatFlags,RWR_AAA */
	TEST(rwrthreatflags, 0x8);
	/* jnz	__m2c_macrolocal_13_skip */
	if ((rwrthreatflags & 0x8) != 0) {goto __m2c_macrolocal_13_skip;}
	/* jmp	AAAExit */
	goto aaaexit;
__m2c_macrolocal_13_skip:
	// 4415 
	// 0 ;* check Tornado below AAA ceiling
	/* cmp	WORD PTR M_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&m_view+vp_zft_hi)), 0);
	/* jbe	__m2c_macrolocal_14_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_hi))) <= (dw)(0)) {goto __m2c_macrolocal_14_skip;}
	/* jmp	AAAExit */
	goto aaaexit;
__m2c_macrolocal_14_skip:
	// 4417 
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,AAA_CEILING */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 12000);
	/* jbe	__m2c_macrolocal_15_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) <= (dw)(12000)) {goto __m2c_macrolocal_15_skip;}
	/* jmp	AAAExit */
	goto aaaexit;
__m2c_macrolocal_15_skip:
	// 4419 
	// 0 ;* check Tornado above AAA floor
	/* cmp	WORD PTR M_VIEW.VP_ZFT_LO,AAA_FLOOR */
	CMP(*((dw*)((db*)&m_view+vp_zft_lo)), 100);
	/* jae	__m2c_macrolocal_16_skip */
	if ((dw)(*((dw*)((db*)&m_view+vp_zft_lo))) >= (dw)(100)) {goto __m2c_macrolocal_16_skip;}
	/* jmp	AAAExit */
	goto aaaexit;
__m2c_macrolocal_16_skip:
	// 4421 
	// 0 ;* update timer
	/* mov	ax,AAATimer2 */
	ax = aaatimer2;
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
	/* mov	AAATimer2,ax */
	aaatimer2 = ax;
	/* jz	__m2c_macrolocal_18_skip */
	if (ax == 0) {goto __m2c_macrolocal_18_skip;}
	/* jmp	AAAExit */
	goto aaaexit;
__m2c_macrolocal_18_skip:
	// 4423 
	// 0 ;still passive ->
	// 0 ;* check Tornado on active map
	/* cmp	ModelMapIndex,-1 */
	CMP(modelmapindex, -1);
	/* je	AAASkip2 */
	if ((dw)(modelmapindex) == (dw)(-1)) {goto aaaskip2;}
	// 0 ;* check enemy AAA in sector
	/* mov	bp,ModelMapIndex */
	bp = modelmapindex;
	/* test	SctrGameLayer1[bp],SECT_ENEMY */
	TEST(*((&sctrgamelayer1)+bp), 0x80);
	/* jz	AAASkip2 */
	if (!(*((&sctrgamelayer1)+bp) & 0x80)) {goto aaaskip2;}
	/* test	SctrGameLayer1[bp],SECT_AAA */
	TEST(*((&sctrgamelayer1)+bp), 0x20);
	/* jz	AAASkip2 */
	if (!(*((&sctrgamelayer1)+bp) & 0x20)) {goto aaaskip2;}
	// 0 ;* scan RWR for AAA
	/* mov	cx,NumRWRThreats */
	cx = numrwrthreats;
	/* jcxz	AAASkip2 */
	JCXZ(aaaskip2);
	/* mov	ax,M_VIEW.VP_XSEC */
	ax = m_view.vp_xsec;
	/* mov	dx,M_VIEW.VP_YSEC */
	dx = m_view.vp_ysec;
	/* xor	bp,bp */
	XOR(bp, bp);
aaascanloop2:
	// 4425 
	/* AAAScanLoop2:	cmp	RWRThreats[bp].RWR_THREAT,THREAT_AAA */
	CMP(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat)), 2);
	/* jne	AAANext2 */
	if ((dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_threat))) != (dw)(2)) {goto aaanext2;}
	// 0 ;* check same sector as Tornado
	/* cmp	ax,RWRThreats[bp].RWR_XSEC */
	CMP(ax, *((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec)));
	/* jne	AAANext2 */
	if ((dw)(ax) != (dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xsec)))) {goto aaanext2;}
	/* cmp	dx,RWRThreats[bp].RWR_YSEC */
	CMP(dx, *((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec)));
	/* jne	AAANext2 */
	if ((dw)(dx) != (dw)(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ysec)))) {goto aaanext2;}
	// 0 ;* fetch xft, yft
	/* mov	si,RWRThreats[bp].RWR_XFT */
	si = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_xft)));
	/* mov	di,RWRThreats[bp].RWR_YFT */
	di = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_yft)));
	// 0 ;* if AAA source 1 is active then check not same source
	/* test	AAAMode1,1 */
	TEST(aaamode1, 1);
	/* jz	AAALocated2 */
	if (!(aaamode1 & 1)) {goto aaalocated2;}
	/* cmp	ax,AAA_VIEW1.VP_XSEC */
	CMP(ax, aaa_view1.vp_xsec);
	/* jne	AAALocated2 */
	if ((dw)(ax) != (dw)(aaa_view1.vp_xsec)) {goto aaalocated2;}
	/* cmp	dx,AAA_VIEW1.VP_YSEC */
	CMP(dx, aaa_view1.vp_ysec);
	/* jne	AAALocated2 */
	if ((dw)(dx) != (dw)(aaa_view1.vp_ysec)) {goto aaalocated2;}
	/* cmp	si,AAA_VIEW1.VP_XFT */
	CMP(si, aaa_view1.vp_xft);
	/* jne	AAALocated2 */
	if ((dw)(si) != (dw)(aaa_view1.vp_xft)) {goto aaalocated2;}
	/* cmp	di,AAA_VIEW1.VP_YFT */
	CMP(di, aaa_view1.vp_yft);
	/* jne	AAALocated2 */
	if ((dw)(di) != (dw)(aaa_view1.vp_yft)) {goto aaalocated2;}
	// 0 ;* next threat
aaanext2:
	// 4427 
	/* AAANext2:	add	bp,RWR_REC_SIZE */
	ADD(bp, sizeof(rwr));
	/* loop	AAAScanLoop2 */
	LOOP(aaascanloop2);
	// 0 ;* AAA not located, remain passive
aaaskip2:
	// 4429 
	/* AAASkip2:	call	RandX		;0.00 .. 2.55 secs */
	CALLF(randx, 0);
	/* add	ax,2*100	;2.00 .. 4.55 secs */
	ADD(ax, 2*100);
	// 0 ;* reduce AAA activity if Tornado emitting ECM
	/* test	ECMActive,1 */
	TEST(ecmactive, 1);
	/* jz	__m2c_macrolocal_19_skip */
	if (!(ecmactive & 1)) {goto __m2c_macrolocal_19_skip;}
	/* add	ax,2*100	;4.00 .. 6.55 secs */
	ADD(ax, 2*100);
__m2c_macrolocal_19_skip:
	// 4431 
/* m2c-phantom removed: 	J(CALLF(randx,0));	// 2079 call	RandX		;0.00 .. 2.55 secs */
/* m2c-phantom removed: 	R(TEST(ecmactive, 1));	// 2080 test	ECMActive,1 */
	/* mov	AAATimer2,ax */
	aaatimer2 = ax;
	/* jmp	AAAExit */
	goto aaaexit;
	// 0 ;* AAA located, set source position and switch to active
aaalocated2:
	// 4433 
	/* AAALocated2:	mov	AAA_VIEW2.VP_XSEC,ax */
	aaa_view2.vp_xsec = ax;
	/* mov	AAA_VIEW2.VP_YSEC,dx */
	aaa_view2.vp_ysec = dx;
	/* mov	AAA_VIEW2.VP_XFT,si */
	aaa_view2.vp_xft = si;
	/* mov	AAA_VIEW2.VP_YFT,di */
	aaa_view2.vp_yft = di;
	/* mov	ax,RWRThreats[bp].RWR_PTR */
	ax = m2c::getdata(*((dw*)((db*)&((rwr*)raddr(ss,m2c::near_offset_external(rwrthreats)+bp))->rwr_ptr)));
	/* mov	AAAPtr2,ax */
	aaaptr2 = ax;
	/* mov	AAAMode2,1 */
	aaamode2 = 1;
	/* mov	AAATimer2,AAA_BURST_LEN */
	aaatimer2 = 2*100;
	// 0 ;* create some smoke
	/* mov	bx,SMOKE_CRATER2 */
	bx = 2;
	/* mov	si,OFFSET AAA_VIEW2 */
	si = m2c::near_offset_external(aaa_view2);
	/* call	MakeSmokeEffect */
	CALLF(makesmokeeffect, 0);
aaaexit:
	// 4435 
	/* AAAExit: 	ret */
	RETF(0);
aaafire:
	// 2109 
	/* mov	SourcePtr,si ;* kill: assume all */
	sourceptr = si;
edummylabel2:
	// 4437 
	/* mov	MobilePtr,di */
	mobileptr = di;
	// 0 ;------------------
	// 0 ;* calc slant range (source -> Tornado)
	// 0 ;------------------
	/* mov	di,OFFSET M_VIEW */
	di = m2c::near_offset_external(m_view);
	/* call	CalcSlantRange */
	CALLF(calcslantrange, 0);
	// 0 ;----------------------
	// 0 ;* calc intercept point
	// 0 ;----------------------
	/* mov	bx,MUZZLE_VELOCITY */
	bx = muzzle_velocity;
	/* mov	cx,Vtas */
	cx = vtas;
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET AIM_VIEW */
	di = m2c::near_offset_external(aim_view);
	/* call	CalcIntercept */
	CALLF(calcintercept, 0);
	// 0 ;-----------------------------
	// 0 ;* calc flat range and bearing (source -> intercept point)
	// 0 ;-----------------------------
	/* mov	si,SourcePtr */
	si = sourceptr;
	/* mov	di,OFFSET AIM_VIEW */
	di = m2c::near_offset_external(aim_view);
	/* call	CalcRngBrgVP_VP */
	CALLF(calcrngbrgvp_vp, 0);
	// 0 ;-------------------------------------------
	// 0 ;* calc hdg and pitch angles to aiming point
	// 0 ;-------------------------------------------
	/* mov	si,SourcePtr */
	si = sourceptr;
	// 0 ;* hdg = brg
	/* mov	[si].VP_HDG,bx */
	m2c::setdata(&(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_hdg))), m2c::getdata(bx));
	// 0 ;* rotate object
	/* mov	di,MobilePtr */
	di = mobileptr;
	/* mov	bp,SEG MSctrDataStart */
	bp = m2c::segment_of_external(msctrdatastart);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
	/* mov	[di].STAT_HDG,bx */
	m2c::setdata(&(*((dw*)((db*)&((statmob*)raddr(ds,di))->stat_hdg))), m2c::getdata(bx));
	/* mov	bp,DATA */
	bp = seg_offset(data);
	/* mov	ds,bp */
	m2c::set_segment_register(ds, bp);
	// 0 ;* calc pitch
	// 0 ;*
	// 0 ;* select zft
	// 0 ;* case = range
	// 0 ;*    pitch = 45�
	// 0 ;* case < range
	// 0 ;*    pitch = arctan(zft / range)
	// 0 ;* case > range
	// 0 ;*    pitch = 90� - arctan(range / zft)
	// 0 ;* endselect
	// 0 ;* if range > 65535ft then no fire (too far)
	/* cmp	dx,0 */
	CMP(dx, 0);
	/* ja	AAAFireExit */
	if ((dw)(dx) > (dw)(0)) {goto aaafireexit;}
	// 0 ;* if zft > 65535ft then no fire (too high)
	/* cmp	WORD PTR AIM_VIEW.VP_ZFT_HI,0 */
	CMP(*((dw*)((db*)&aim_view+vp_zft_hi)), 0);
	/* ja	AAAFireExit */
	if ((dw)(*((dw*)((db*)&aim_view+vp_zft_hi))) > (dw)(0)) {goto aaafireexit;}
	/* mov	bx,ax		;bx = range */
	bx = ax;
	/* mov	ax,WORD PTR AIM_VIEW.VP_ZFT_LO */
	ax = *((dw*)((db*)&aim_view+vp_zft_lo));
	/* cmp	ax,bx		;select zft */
	CMP(ax, bx);
	/* jb	CalcAAAPitch1	;case < range -> */
	if ((dw)(ax) < (dw)(bx)) {goto calcaaapitch1;}
	/* ja	CalcAAAPitch2	;case > range -> */
	if ((dw)(ax) > (dw)(bx)) {goto calcaaapitch2;}
	/* mov	ax,64		;ideal pitch = 45� */
	ax = 64;
	/* jmp	SetAAAPitch */
	goto setaaapitch;
	// 0 ;* pitch = arctan(zft / range)
calcaaapitch1:
	// 4439 
	/* CalcAAAPitch1:	mov	dx,ax */
	dx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;/2 for bin frac result */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
	/* call	FastArcTan */
	CALLF(fastarctan, 0);
	// 0 ;* convert fine degs to pdegs
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
	/* jmp	SetAAAPitch */
	goto setaaapitch;
	// 0 ;* pitch = 90� - arctan(range / zft)
calcaaapitch2:
	// 4441 
	/* CalcAAAPitch2:	mov	dx,bx */
	dx = bx;
	/* mov	bx,ax */
	bx = ax;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* shr	dx,1		;/2 for bin frac result */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* div	bx */
	DIV2(bx);
	/* call	FastArcTan */
	CALLF(fastarctan, 0);
	/* mov	dx,128*128 */
	dx = 128*128;
	/* xchg	ax,dx */
	XCHG(ax, dx);
	/* sub	ax,dx */
	SUB(ax, dx);
	// 0 ;* convert fine degs to pdegs
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl */
	SHR(ax, cl);
	/* adc	ax,0 */
	ADC(ax, 0);
	/* and	ax,001ffh */
	AND(ax, 0x001ff);
setaaapitch:
	// 4443 
	/* SetAAAPitch:	mov	[si].VP_PITCH,ax */
	m2c::setdata(&(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_pitch))), m2c::getdata(ax));
	// 0 ;-------------
	// 0 ;* fire cannon
	// 0 ;-------------
	/* xor	ax,ax		;static */
	XOR(ax, ax);
	/* xor	dl,dl		;drone fire */
	XOR(dl, dl);
	/* mov	dh,LHS_CANNON+RHS_CANNON */
	dh = 0x2+0x1;
	/* mov	di,-1		;not mobile */
	di = -1;
	/* call	FireCannon */
	CALL(firecannon, 0);
	// 0 ;test CockpitViews,1
	// 0 ;jnz	@F
	// 0 ;test InWeaponView,1
	// 0 ;jz	@F
	// 0 ;call    ExploSound2
	// 0 ;call CannonSound
	// 0 ;@@:
aaafireexit:
	// 4445 
	/* AAAFireExit:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_10_skip: 	goto __m2c_macrolocal_10_skip;
        case m2c::k__m2c_macrolocal_12_skip: 	goto __m2c_macrolocal_12_skip;
        case m2c::k__m2c_macrolocal_13_skip: 	goto __m2c_macrolocal_13_skip;
        case m2c::k__m2c_macrolocal_14_skip: 	goto __m2c_macrolocal_14_skip;
        case m2c::k__m2c_macrolocal_15_skip: 	goto __m2c_macrolocal_15_skip;
        case m2c::k__m2c_macrolocal_16_skip: 	goto __m2c_macrolocal_16_skip;
        case m2c::k__m2c_macrolocal_18_skip: 	goto __m2c_macrolocal_18_skip;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kaaaactive1: 	goto aaaactive1;
        case m2c::kaaaactive2: 	goto aaaactive2;
        case m2c::kaaaexit: 	goto aaaexit;
        case m2c::kaaafire: 	goto aaafire;
        case m2c::kaaafireexit: 	goto aaafireexit;
        case m2c::kaaalocated1: 	goto aaalocated1;
        case m2c::kaaalocated2: 	goto aaalocated2;
        case m2c::kaaanext1: 	goto aaanext1;
        case m2c::kaaanext2: 	goto aaanext2;
        case m2c::kaaapassive1: 	goto aaapassive1;
        case m2c::kaaapassive2: 	goto aaapassive2;
        case m2c::kaaascanloop1: 	goto aaascanloop1;
        case m2c::kaaascanloop2: 	goto aaascanloop2;
        case m2c::kaaaskip1: 	goto aaaskip1;
        case m2c::kaaaskip2: 	goto aaaskip2;
        case m2c::kaaasource1: 	goto aaasource1;
        case m2c::kaaasource2: 	goto aaasource2;
        case m2c::kcalcaaapitch1: 	goto calcaaapitch1;
        case m2c::kcalcaaapitch2: 	goto calcaaapitch2;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::ksetaaapitch: 	goto setaaapitch;
        case m2c::kupdateaaa: 	goto updateaaa;
        default: return __dispatch_call(__disp, _state);
    };
}


/* THIS IS GENERATED FILE */

        
#include "gloc.h"

                

 __attribute__((weak)) bool updategloc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    updategloc:
    _begin:
	// 0 ;* if Curtains then sort blackout and die
edummylabel1:
	// 4369 
	/* test	Curtains,1 */
	TEST(*(curtains), 1);
	/* jz	__m2c_macrolocal_1_skip */
	if (!(*(curtains) & 1)) {goto __m2c_macrolocal_1_skip;}
	/* jmp	ContCurtains */
	goto contcurtains;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;* if GLOCTimer <> 0 then sort GLOC
	/* cmp	GLOCTimer,0 */
	CMP(gloctimer, 0);
	/* je	__m2c_macrolocal_2_skip */
	if ((dw)(gloctimer) == (dw)(0)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	ContGLOC */
	goto contgloc;
__m2c_macrolocal_2_skip:
	// 4373 
	// 0 ;* if BlkTimer timer <> 0 then sort blackout
	/* cmp	BlkTimer,0 */
	CMP(blktimer, 0);
	/* jne	ContBlackout */
	if ((dw)(blktimer) != (dw)(0)) {goto contblackout;}
	// 0 ;* if RedTimer <> 0 then sort redout
	/* cmp	RedTimer,0 */
	CMP(redtimer, 0);
	/* je	__m2c_macrolocal_3_skip */
	if ((dw)(redtimer) == (dw)(0)) {goto __m2c_macrolocal_3_skip;}
	/* jmp	ContRedout */
	goto contredout;
__m2c_macrolocal_3_skip:
	// 4375 
	// 0 ;* if infinite g-force then no blackouts or redouts
	/* test	InfiniteGForce,1 */
	TEST(infinitegforce, 1);
	/* jnz	@F */
	if ((infinitegforce & 1) != 0) {goto dummylabel1;}
	// 0 ;* if GForce >= BLKOUT_G_LEVEL then sort blackout
	/* cmp	GForce,BLKOUT_G_LEVEL */
	CMP(gforce, 6*16);
	/* jge	ContBlackout */
	if ((short)(gforce) >= (short)(6*16)) {goto contblackout;}
	// 0 ;* if GForce <= REDOUT_G_LEVEL then sort redout
	/* cmp	GForce,REDOUT_G_LEVEL */
	CMP(gforce, -2*16);
	/* jle	ContRedout */
	if ((short)(gforce) <= (short)(-2*16)) {goto contredout;}
dummylabel1:
	// 4377 
	/* @@:		jmp	ContHypoxia */
	goto conthypoxia;
	// 0 ;---------------------------
contblackout:
	// 4379 
	// 0 ;---------------------------
	// 0 ;* if ElePosn <= -8192 then
	// 0 ;*    BlkTimer = max(BlkTimer - LastFrame * 2, 0) ;pushing - rapid recovery
	// 0 ;* else
	// 0 ;*    if g force < BLKOUT_G_LEVEL
	// 0 ;*       BlkTimer = max(BlkTimer - LastFrame, 0)  ;recovery
	// 0 ;*    else
	// 0 ;*       BlkTimer = min(BlkTimer + LastFrame, BLKOUT_TIME)
	// 0 ;*    endif
	// 0 ;* endif
	/* mov	dx,LastFrame */
	dx = lastframe;
	/* cmp	ElePosn,-8192 */
	CMP(eleposn, -8192);
	/* jg	@F */
	if ((short)(eleposn) > (short)(-8192)) {goto dummylabel2;}
	/* mov	ax,BlkTimer */
	ax = blktimer;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* sub	ax,dx */
	SUB(ax, dx);
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
	/* jmp	BlkOk */
	goto blkok;
dummylabel2:
	// 4381 
	/* @@:		cmp	GForce,BLKOUT_G_LEVEL */
	CMP(gforce, 6*16);
	/* jge	@F */
	if ((short)(gforce) >= (short)(6*16)) {goto dummylabel3;}
	/* mov	ax,BlkTimer */
	ax = blktimer;
	/* sub	ax,dx */
	SUB(ax, dx);
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
	/* jmp	BlkOk */
	goto blkok;
dummylabel3:
	// 4383 
	/* @@:		mov	ax,BlkTimer */
	ax = blktimer;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,BLKOUT_TIME */
	CMP(ax, 30*100);
	/* jbe	BlkOk */
	if ((dw)(ax) <= (dw)(30*100)) {goto blkok;}
	/* mov	ax,BLKOUT_TIME */
	ax = 30*100;
	/* mov	GLOCTimer,GLOC_PERIOD	;blackout */
	gloctimer = 5*100;
blkok:
	// 4385 
	/* BlkOk:		mov	BlkTimer,ax */
	blktimer = ax;
	// 0 ;* FadeLevel2 = min(BlkTimer - (BLKOUT_TIME-127), 0)
	/* sub	ax,BLKOUT_TIME-127 */
	SUB(ax, (30*100)-127);
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
	// 0 ;0 .. 127
	/* mov	FadeLevel2,al */
	fadelevel2 = al;
	// 0 ;* set blackout fade RGB values
	/* test	al,al		;level = 0? */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel4;}
	// 0 ;* only set if fade level > 0 (prevents palette glitch on slow machines)
	/* mov	FadeRCol2,0	;red */
	fadercol2 = 0;
	/* mov	FadeGCol2,0	;green */
	fadegcol2 = 0;
	/* mov	FadeBCol2,0	;blue */
	fadebcol2 = 0;
	/* mov	FadeStart2,0 */
	fadestart2 = 0;
	/* mov	FadeCount2,256 */
	fadecount2 = 256;
dummylabel4:
	// 4387 
	/* @@:		jmp	ContHypoxia */
	goto conthypoxia;
	// 0 ;---------------------------
contredout:
	// 4389 
	// 0 ;---------------------------
	// 0 ;* if ElePosn >= 8192 then
	// 0 ;*    RedTimer = max(RedTimer - LastFrame * 2, 0) ;pulling - rapid recovery
	// 0 ;* else
	// 0 ;*    if g force > REDOUT_G_LEVEL
	// 0 ;*       RedTimer = max(RedTimer - LastFrame, 0)  ;recovery
	// 0 ;*    else
	// 0 ;*       RedTimer = min(RedTimer + LastFrame, REDOUT_TIME)
	// 0 ;*    endif
	// 0 ;* endif
	/* mov	dx,LastFrame */
	dx = lastframe;
	/* cmp	ElePosn,8192 */
	CMP(eleposn, 8192);
	/* jl	@F */
	if ((short)(eleposn) < (short)(8192)) {goto dummylabel5;}
	/* mov	ax,RedTimer */
	ax = redtimer;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* sub	ax,dx */
	SUB(ax, dx);
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
	/* jmp	RedOk */
	goto redok;
dummylabel5:
	// 4391 
	/* @@:		cmp	GForce,REDOUT_G_LEVEL */
	CMP(gforce, -2*16);
	/* jle	@F */
	if ((short)(gforce) <= (short)(-2*16)) {goto dummylabel6;}
	/* mov	ax,RedTimer */
	ax = redtimer;
	/* sub	ax,dx */
	SUB(ax, dx);
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
	/* jmp	RedOk */
	goto redok;
dummylabel6:
	// 4393 
	/* @@:		mov	ax,RedTimer */
	ax = redtimer;
	/* add	ax,dx */
	ADD(ax, dx);
	/* cmp	ax,REDOUT_TIME */
	CMP(ax, 30*100);
	/* jbe	RedOk */
	if ((dw)(ax) <= (dw)(30*100)) {goto redok;}
	/* mov	ax,REDOUT_TIME */
	ax = 30*100;
	/* mov	GLOCTimer,GLOC_PERIOD	;redout */
	gloctimer = 5*100;
redok:
	// 4395 
	/* RedOk:		mov	RedTimer,ax */
	redtimer = ax;
	// 0 ;* FadeLevel2 = min(RedTimer - (REDOUT_TIME-127), 0)
	/* sub	ax,REDOUT_TIME-127 */
	SUB(ax, (30*100)-127);
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
	// 0 ;0 .. 127
	/* mov	FadeLevel2,al */
	fadelevel2 = al;
	// 0 ;* set redout fade RGB values
	/* test	al,al		;level = 0? */
	TEST(al, al);
	/* jz	@F		;yes -> */
	if (!(al & al)) {goto dummylabel7;}
	// 0 ;* only set if fade level > 0 (prevents palette glitch on slow machines)
	/* mov	FadeRCol2,63	;red */
	fadercol2 = 63;
	/* mov	FadeGCol2,0	;green */
	fadegcol2 = 0;
	/* mov	FadeBCol2,0	;blue */
	fadebcol2 = 0;
	/* mov	FadeStart2,0 */
	fadestart2 = 0;
	/* mov	FadeCount2,256 */
	fadecount2 = 256;
dummylabel7:
	// 4397 
	/* @@:		jmp	ContHypoxia */
	goto conthypoxia;
	// 0 ;---------------------------
contgloc:
	// 4399 
	// 0 ;---------------------------
	/* mov	ax,GLOCTimer */
	ax = gloctimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jbe	@F		;recover -> */
	if ((CF || ZF)) {goto dummylabel8;}
	/* mov	GLOCTimer,ax */
	gloctimer = ax;
	/* or	DisableInput,DIP_GLOC */
	OR(disableinput, 0x1);
	/* jmp	ContHypoxia */
	goto conthypoxia;
dummylabel8:
	// 4401 
	/* @@:		mov	GLOCTimer,0 */
	gloctimer = 0;
	/* and	DisableInput,NOT DIP_GLOC */
	AND(disableinput, ~0x1);
	// 0 ;---------------------------
conthypoxia:
	// 4403 
	// 0 ;---------------------------
	// 0 ;* if oxygen failure and alt > 8,000ft then blackout and die after time (wrt alt)
	// 0 ;*
	// 0 ;* @8,000ft, survive time = 10mins
	// 0 ;* @56,000ft, survive time = 2mins
	// 0 ;*
	// 0 ;* survive time = 56000 - ubound(alt, 8000, 56000) + 12000 = 12000 .. 60000
	// 0 ;*							   = 2mins .. 10mins
	// 0 ;*
	// 0 ;* if oxygen failure then
	// 0 ;*    if alt > 8000ft then
	// 0 ;*       OxyTimer = min(OxyTimer + LastFrame, 65535)
	// 0 ;*       if OxyTimer > survive time then
	// 0 ;*          blackout and die
	// 0 ;*       endif
	// 0 ;*    else
	// 0 ;*       OxyTimer = max(OxyTimer - LastFrame * 4, 0)	;rapid recovery
	// 0 ;*    endif
	// 0 ;* endif
	/* test	SSF_Oxygen,1	;oxygen system failure? */
	TEST(ssf_oxygen, 1);
	/* jnz	__m2c_macrolocal_10_skip */
	if ((ssf_oxygen & 1) != 0) {goto __m2c_macrolocal_10_skip;}
	/* jmp	ExitGLOC */
	goto exitgloc;
__m2c_macrolocal_10_skip:
	// 4405 
	// 0 ;no ->
	/* mov	ax,56000	;assume alt > 65,535ft */
	ax = 56000;
	/* cmp	ZftHi,0		;alt > 65,535ft? */
	CMP(zfthi, 0);
	/* ja	ContOxyFail	;yes -> */
	if ((dw)(zfthi) > (dw)(0)) {goto contoxyfail;}
	/* mov	ax,ZftLo */
	ax = zftlo;
	/* cmp	ax,8000		;alt > 8,000ft? */
	CMP(ax, 8000);
	/* ja    	@F		;yes -> */
	if ((dw)(ax) > (dw)(8000)) {goto dummylabel9;}
	// 0 ;* rapid recovery
	/* mov	ax,OxyTimer */
	ax = oxytimer;
	/* mov	dx,LastFrame */
	dx = lastframe;
	/* shl	dx,1 */
	SHL(dx, 1);
	/* shl	dx,1 */
	SHL(dx, 1);
	/* sub	ax,dx */
	SUB(ax, dx);
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
	/* mov	OxyTimer,ax */
	oxytimer = ax;
	/* jmp	ExitGLOC */
	goto exitgloc;
	// 0 ;* calc survive time
dummylabel9:
	// 4407 
	/* @@:		cmp	ax,56000	;limit to 56,000ft */
	CMP(ax, 56000);
	/* jbe	ContOxyFail */
	if ((dw)(ax) <= (dw)(56000)) {goto contoxyfail;}
	/* mov	ax,56000 */
	ax = 56000;
contoxyfail:
	// 4409 
	/* ContOxyFail:  	mov	bp,56000 */
	bp = 56000;
	/* sub	bp,ax */
	SUB(bp, ax);
	/* add	bp,12000	;bp = survive time */
	ADD(bp, 12000);
	/* mov	ax,OxyTimer */
	ax = oxytimer;
	/* add	ax,LastFrame */
	ADD(ax, lastframe);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0ffffh */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* or	ax,dx */
	OR(ax, dx);
	/* mov	OxyTimer,ax */
	oxytimer = ax;
	// 0 ;* if OxyTimer > survive time then blackout and die
	/* cmp	ax,bp */
	CMP(ax, bp);
	/* jbe	ExitGLOC */
	if ((dw)(ax) <= (dw)(bp)) {goto exitgloc;}
	/* mov	Curtains,1 */
	*(curtains) = 1;
	/* or	DisableInput,DIP_HYPOXIA */
	OR(disableinput, 0x2);
	// 0 ;* set blackout fade RGB values
	/* mov	FadeRCol2,0	;red */
	fadercol2 = 0;
	/* mov	FadeGCol2,0	;green */
	fadegcol2 = 0;
	/* mov	FadeBCol2,0	;blue */
	fadebcol2 = 0;
	/* mov	FadeStart2,0 */
	fadestart2 = 0;
	/* mov	FadeCount2,256 */
	fadecount2 = 256;
	// 0 ;---------------------------
contcurtains:
	// 4411 
	// 0 ;---------------------------
	/* mov	ax,CurtainsTimer */
	ax = curtainstimer;
	/* add	ax,LastFrame */
	ADD(ax, lastframe);
	/* mov	CurtainsTimer,ax */
	curtainstimer = ax;
	/* cmp	ax,127		;set fade level 0 .. 127 */
	CMP(ax, 127);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(127)) {goto dummylabel10;}
	/* mov	ax,127 */
	ax = 127;
	/* mov	DieFlag,DIE_HYPOXIA */
	dieflag = 2;
dummylabel10:
	// 4413 
	/* @@:		mov	FadeLevel2,al */
	fadelevel2 = al;
exitgloc:
	// 4415 
	/* ExitGLOC:	ret */
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
        case m2c::kblkok: 	goto blkok;
        case m2c::kcontblackout: 	goto contblackout;
        case m2c::kcontcurtains: 	goto contcurtains;
        case m2c::kcontgloc: 	goto contgloc;
        case m2c::kconthypoxia: 	goto conthypoxia;
        case m2c::kcontoxyfail: 	goto contoxyfail;
        case m2c::kcontredout: 	goto contredout;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitgloc: 	goto exitgloc;
        case m2c::kredok: 	goto redok;
        case m2c::kupdategloc: 	goto updategloc;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


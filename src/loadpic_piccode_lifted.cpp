/* THIS IS GENERATED FILE */

        
#include "loadpic.h"

                

 __attribute__((weak)) bool loadpicture(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    loadpicture:
    _begin:
	/* mov	FadeFlag,al ;* kill: assume all (except cf) */
	fadeflag = al;
	// 0 ;-----------------------
	// 0 ;* clear screen to black
	// 0 ;-----------------------
edummylabel1:
	// 4369 
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	InstantFadeOut */
	CALLF(instantfadeout, 0);
	/* pop	dx */
	POP(dx);
	// 0 ;------------------------------
	// 0 ;* load and unpack picture file
	// 0 ;------------------------------
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET WorkScreen */
	di = m2c::near_offset_external(workscreen);
	/* mov	cx,64000 */
	cx = 64000;
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	es */
	POP(es);
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	LoadError */
	goto loaderror;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;cf = 1 = load error ->
	/* call	UnpackDeltaPic */
	CALLF(unpackdeltapic, 0);
	// 0 ;---------------
	// 0 ;* swap palettes (load picture palette, save regular palette)
	// 0 ;---------------
	/* push	es */
	PUSH(es);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET WorkScreen */
	di = m2c::near_offset_external(workscreen);
	/* call	SwapPalettes */
	CALLF(swappalettes, 0);
	/* pop	es */
	POP(es);
	// 0 ;-----------------
	// 0 ;* fade in picture
	// 0 ;-----------------
	/* test	FadeFlag,1	;rapid fade? */
	TEST(fadeflag, 1);
	/* jnz	@F		;yes -> */
	if ((fadeflag & 1) != 0) {goto dummylabel1;}
	/* call	FadeIn */
	CALLF(fadein, 0);
	/* jmp	FadeInOk */
	goto fadeinok;
dummylabel1:
	// 4373 
	/* @@:		call	QFadeIn */
	CALLF(qfadein, 0);
	// 0 ;------------------------------
	// 0 ;* wait for response or timeout
	// 0 ;------------------------------
fadeinok:
	// 4375 
	/* FadeInOk:	pop	cx */
	POP(cx);
	/* mov	CountDown,cx	;set timeout */
	countdown = cx;
waitloop:
	// 4377 
	/* WaitLoop:	mov	al,Key[K_CTRL] */
	al = *((&key)+29);
	/* and	al,Key[K_Q]	;quit? */
	AND(al, *((&key)+16));
	/* jnz	SortQuit	;yes -> */
	if (al != 0) {goto sortquit;}
	/* mov	al,Key[K_SPACE] */
	al = *((&key)+57);
	/* or	al,Key[K_ENTER] */
	OR(al, *((&key)+28));
	/* or	al,Key[K_ESC]	;continue key pressed? */
	OR(al, *((&key)+1));
	/* jnz	WaitNoMore	;yes -> */
	if (al != 0) {goto waitnomore;}
	/* call	ReadMouse */
	CALLF(readmouse, 0);
	/* or	al,ah		;mouse button pressed? */
	OR(al, ah);
	/* jnz	WaitNoMore	;yes -> */
	if (al != 0) {goto waitnomore;}
	/* cmp	CountDown,0	;timeout? */
	CMP(countdown, 0);
	/* jne	WaitLoop	;no -> */
	if ((dw)(countdown) != (dw)(0)) {goto waitloop;}
	/* jmp	WaitNoMore */
	goto waitnomore;
sortquit:
	// 4379 
	/* SortQuit:	mov	DieFlag,DIE_QUIT */
	dieflag = 1;
	// 0 ;------------------
	// 0 ;* fade out picture
	// 0 ;------------------
waitnomore:
	// 4381 
	/* WaitNoMore:	test	FadeFlag,1	;rapid fade? */
	TEST(fadeflag, 1);
	/* jnz	@F		;yes -> */
	if ((fadeflag & 1) != 0) {goto dummylabel2;}
	/* call	FadeOut */
	CALLF(fadeout, 0);
	/* jmp	FadeOutOk */
	goto fadeoutok;
dummylabel2:
	// 4383 
	/* @@:		call	QFadeOut */
	CALLF(qfadeout, 0);
	// 0 ;---------------
	// 0 ;* swap palettes (load regular palette, save picture palette)
	// 0 ;---------------
fadeoutok:
	// 4385 
	/* FadeOutOk:   	push	es */
	PUSH(es);
	/* mov	ax,SEG WorkScreen */
	ax = m2c::segment_of_external(workscreen);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET WorkScreen */
	di = m2c::near_offset_external(workscreen);
	/* call	SwapPalettes */
	CALLF(swappalettes, 0);
	/* pop	es */
	POP(es);
	/* mov	al,COL_BLACK */
	al = 0;
	/* call	Cls */
	CALLF(cls, 0);
	/* call	DownLoad */
	CALLF(download, 0);
	/* call	InstantFadeIn	;clear fade */
	CALLF(instantfadein, 0);
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
loaderror:
	// 4387 
	/* LoadError:	pop	cx		;clean up stack */
	POP(cx);
	/* mov	DieFlag,SYS_ERR_LD_PIC */
	dieflag = 240;
	/* ret */
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
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kfadeinok: 	goto fadeinok;
        case m2c::kfadeoutok: 	goto fadeoutok;
        case m2c::kloaderror: 	goto loaderror;
        case m2c::kloadpicture: 	goto loadpicture;
        case m2c::ksortquit: 	goto sortquit;
        case m2c::kwaitloop: 	goto waitloop;
        case m2c::kwaitnomore: 	goto waitnomore;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


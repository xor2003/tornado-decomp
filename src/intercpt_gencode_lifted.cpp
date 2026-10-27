/* THIS IS GENERATED FILE */

        
#include "intercpt.h"

                

 __attribute__((weak)) bool calcintercept(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    calcintercept:
    _begin:
	// 0 ;-------------------------------------------
	// 0 ;* copy target viewpoint to result viewpoint
	// 0 ;-------------------------------------------
edummylabel1:
	// 4369 
	/* push	cx */
	PUSH(cx);
	/* push	di */
	PUSH(di);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 630 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	// 631 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* pop	si		;si -> result viewpoint */
	POP(si);
	/* pop	cx */
	POP(cx);
	// 0 ;-----------------------------------------------
	// 0 ;* calc target move distance (tmod) (wrt object)
	// 0 ;-----------------------------------------------
	// 0 ;* tmod = range * (target speed / object speed)
	// 0 ;* scale range <= 32767
	/* xor	bp,bp */
	XOR(bp, bp);
dummylabel1:
	// 4371 
	/* @@:		test	dx,dx */
	TEST(dx, dx);
	/* jz	@F */
	if (!(dx & dx)) {goto dummylabel2;}
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* inc	bp */
	INC(bp);
	/* jmp	@B */
	goto dummylabel1;
dummylabel2:
	// 4373 
	/* @@:		cmp	ax,32767 */
	CMP(ax, 32767);
	/* jbe	@F */
	if ((dw)(ax) <= (dw)(32767)) {goto dummylabel3;}
	/* shr	ax,1 */
	SHR(ax, 1);
	/* inc	bp */
	INC(bp);
dummylabel3:
	// 4375 
	/* @@:		imul	cx */
	IMUL1_2(cx);
	// 0 ;* guard against overflow
	/* shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* cmp	bx,dx		;overflow? */
	CMP(bx, dx);
	/* ja	__m2c_macrolocal_2_skip */
	if ((dw)(bx) > (dw)(dx)) {goto __m2c_macrolocal_2_skip;}
	/* jmp	ExitIntercept */
	goto exitintercept;
__m2c_macrolocal_2_skip:
	// 4377 
	// 0 ;yes (result vp = target vp) ->
	/* shr	dx,1 */
	SHR(dx, 1);
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* idiv	bx */
	IDIV2(bx);
	/* mov	di,ax		;di = tmod */
	di = ax;
	// 0 ;-----------------------------------
	// 0 ;* calc unit vector of target motion
	// 0 ;-----------------------------------
	// 0 ;* unit vector target x = cos(target pitch) * sin(target hdg)
	// 0 ;*
	// 0 ;* unit vector target y = cos(target pitch) * cos(target hdg)
	// 0 ;*
	// 0 ;* unit vector target z = sin(target pitch)
	/* mov	bx,[si].VP_PITCH */
	bx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_pitch)));
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	cx,CosTable[bx] */
	cx = *(dw*)(((db*)&costable)+bx);
	/* mov	bx,SinTable[bx] */
	bx = *(dw*)(((db*)&sintable)+bx);
	// 0 ;bx = sin(pitch), cx = cos(pitch)
/* m2c-phantom removed: 	R(cx = *(dw*)(((db*)&costable)+bx););	// 684 mov	cx,CosTable[bx] */
/* m2c-phantom removed: 	R(bx = *(dw*)(((db*)&sintable)+bx););	// 685 mov	bx,SinTable[bx] */
	/* mov	UnitVctrTgtZ,bx */
	unitvctrtgtz = bx;
	/* mov	bx,[si].VP_HDG */
	bx = m2c::getdata(*((dw*)((db*)&((viewpoint*)raddr(ds,si))->vp_hdg)));
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&sintable)+bx););	// 691 						mov	ax,SinTable[bx] */
/* m2c-phantom removed: 	R(bx = *(dw*)(((db*)&costable)+bx););	// 692 						mov	bx,CosTable[bx] */
	// 0 ;ax = sin(hdg), bx = cos(hdg)
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	bx,CosTable[bx] */
	bx = *(dw*)(((db*)&costable)+bx);
	/* imul	cx */
	IMUL1_2(cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	UnitVctrTgtX,dx */
	unitvctrtgtx = dx;
	/* mov	ax,bx */
	ax = bx;
	/* imul	cx */
	IMUL1_2(cx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	UnitVctrTgtY,dx */
	unitvctrtgty = dx;
	// 0 ;-----------------------------------------------------
	// 0 ;* project target motion vector to the intercept point
	// 0 ;-----------------------------------------------------
	// 0 ;* target z = target z + UnitVctrTgtZ * tmod
	/* mov	ax,UnitVctrTgtZ */
	ax = unitvctrtgtz;
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
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* mov	cx,bp */
	cx = bp;
	/* jcxz	SkipZScale */
	JCXZ(skipzscale);
dummylabel4:
	// 4379 
	/* @@:		shl	ax,1 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* loop	@B */
	LOOP(dummylabel4);
skipzscale:
	// 4381 
	/* SkipZScale:	add	WORD PTR [si].VP_ZFT_LO,ax */
	ADD(*((dw*)raddr(ds,si+vp_zft_lo)), ax);
	/* adc	WORD PTR [si].VP_ZFT_HI,dx */
	ADC(*((dw*)raddr(ds,si+vp_zft_hi)), dx);
	/* jns	@F		;above ground -> */
	if ((short)(*((dw*)raddr(ds,si+vp_zft_hi))) >= 0) {goto dummylabel5;}
	/* mov	WORD PTR [si].VP_ZFT_LO,0 */
	m2c::setdata(&(*((dw*)raddr(ds,si+vp_zft_lo))), m2c::getdata(0));
	/* mov	WORD PTR [si].VP_ZFT_HI,0 */
	m2c::setdata(&(*((dw*)raddr(ds,si+vp_zft_hi))), m2c::getdata(0));
	// 0 ;* target x = target x + UnitVctrTgtX * tmod
	// 0 ;* target y = target y + UnitVctrTgtY * tmod
dummylabel5:
	// 4383 
	/* @@:		mov	ax,UnitVctrTgtY */
	ax = unitvctrtgty;
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
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* mov	bx,ax */
	bx = ax;
	/* mov	cx,dx */
	cx = dx;
	/* mov	ax,UnitVctrTgtX */
	ax = unitvctrtgtx;
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
	/* mov	ax,dx */
	ax = dx;
	/* cwd */
	CWD;
	/* test	bp,bp */
	TEST(bp, bp);
	/* jz	SkipXYScale */
	if (!(bp & bp)) {goto skipxyscale;}
dummylabel6:
	// 4385 
	/* @@:		shl	ax,1 */
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
	if (bp != 0) {goto dummylabel6;}
skipxyscale:
	// 4387 
	/* SkipXYScale:	call	MoveViewpoint */
	CALLF(moveviewpoint, 0);
exitintercept:
	// 4389 
	/* ExitIntercept:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::kcalcintercept: 	goto calcintercept;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitintercept: 	goto exitintercept;
        case m2c::kskipxyscale: 	goto skipxyscale;
        case m2c::kskipzscale: 	goto skipzscale;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


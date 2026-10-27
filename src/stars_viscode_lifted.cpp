/* THIS IS GENERATED FILE */

        
#include "stars.h"

                

 __attribute__((weak)) bool drawstars(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    drawstars:
    _begin:
	/* cmp	Night,0		;night? */
	CMP(night, 0);
edummylabel1:
	// 4369 
	/* je	ExitStars	;no -> */
	if (ZF) {goto exitstars;}
	/* test	StarsEnabled,1	;stars visible? */
	TEST(*(starsenabled), 1);
	/* jz	ExitStars	;no -> */
	if (!(*(starsenabled) & 1)) {goto exitstars;}
	/* mov	si,OFFSET StarMap */
	si = m2c::near_offset_external(starmap);
	/* mov	cx,NUM_STARS */
	cx = 400;
starloop:
	// 4371 
	/* StarLoop:	push	cx */
	PUSH(cx);
	/* push	si */
	PUSH(si);
	/* push	es */
	PUSH(es);
	/* mov	ax,STARDATA */
	ax = seg_offset(stardata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	bh,bh */
	XOR(bh, bh);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;xgrid
	/* mov	bl,al */
	bl = al;
	/* mov	cx,XGX[bx]	;XGX */
	cx = *(dw*)(((db*)&xgx)+bx);
	/* mov	dx,YGX[bx]	;YGX */
	dx = *(dw*)(((db*)&ygx)+bx);
	/* mov	bp,ZGX[bx]	;ZGX */
	bp = *(dw*)(((db*)&zgx)+bx);
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;ygrid
	/* mov	bl,al */
	bl = al;
	/* add	cx,XGY[bx]	;XGX + XGY */
	ADD(cx, *(dw*)(((db*)&xgy)+bx));
	/* add	dx,YGY[bx]	;YGX + YGY */
	ADD(dx, *(dw*)(((db*)&ygy)+bx));
	/* add	bp,ZGY[bx]	;ZGX + ZGY */
	ADD(bp, *(dw*)(((db*)&zgy)+bx));
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;zgrid
	/* mov	bl,al */
	bl = al;
	/* add	cx,XGZ[bx]	;XGX + XGY + XGZ */
	ADD(cx, *(dw*)(((db*)&xgz)+bx));
	/* add	dx,YGZ[bx]	;YGX + YGY + YGZ */
	ADD(dx, *(dw*)(((db*)&ygz)+bx));
	/* add	bp,ZGZ[bx]	;ZGX + ZGY + ZGZ */
	ADD(bp, *(dw*)(((db*)&zgz)+bx));
	/* mov	Xe[0],cx */
	*(dw*)(((db*)&xe)+0) = cx;
	/* mov	Ye[0],dx */
	*(dw*)(((db*)&ye)+0) = dx;
	/* mov	Ze[0],bp */
	*(dw*)(((db*)&ze)+0) = bp;
	// 0 ;extra-segment override
	/* lodsb */
	LODS(*(raddr(es,si)),si,1);
	// 0 ;colour
	/* pop	es */
	POP(es);
	// 0 ;* do not draw darkest stars in night mode 1
	/* cmp	al,COL_NT_GREY4	;dark star? */
	CMP(al, 12);
	/* jne	@F		;no -> */
	if ((db)(al) != (db)(12)) {goto dummylabel1;}
	/* cmp	Night,1		;night mode 1? */
	CMP(night, 1);
	/* je	SkipStar	;yes -> */
	if ((dw)(night) == (dw)(1)) {goto skipstar;}
dummylabel1:
	// 4373 
	/* @@:		push	ax */
	PUSH(ax);
	/* call	DotClip */
	CALL(dotclip, 0);
	/* pop	ax */
	POP(ax);
	/* jc	SkipStar	;non-visible -> */
	if (CF) {goto skipstar;}
	/* call	SetPixel */
	CALLF(setpixel, 0);
skipstar:
	// 4375 
	/* SkipStar:  	pop	si */
	POP(si);
	/* pop	cx */
	POP(cx);
	/* add	si,4 */
	ADD(si, 4);
	/* loop	StarLoop */
	LOOP(starloop);
exitstars:
	// 4377 
	/* ExitStars:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kdrawstars: 	goto drawstars;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitstars: 	goto exitstars;
        case m2c::kskipstar: 	goto skipstar;
        case m2c::kstarloop: 	goto starloop;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


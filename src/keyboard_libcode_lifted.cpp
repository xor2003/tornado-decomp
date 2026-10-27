/* THIS IS GENERATED FILE */

        
#include "keyboard.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installkbd:
	// 221 
	/* push	ds ;* kill: assume all (DOS routine used) */
	PUSH(ds);
edummylabel1:
	// 4369 
	/* push	es */
	PUSH(es);
	/* mov	ah,035h		;DOS Get Interrupt Vector function */
	ah = 0x035;
	/* mov	al,009h		;keyboard interrupt */
	al = 0x009;
	/* int	021h  		;DOS */
	_INT(0x021);
	/* mov	DOSVctrSeg,es */
	dosvctrseg = es;
	/* mov	DOSVctrOff,bx */
	dosvctroff = bx;
	/* mov	dx,OFFSET KbdIntr */
	dx = m2c::kglobal_kbdintr;
	/* mov	ax,SEG KbdIntr */
	ax = seg_offset(kbdintr);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,009h		;keyboard interrupt */
	al = 0x009;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
restorekbd:
	// 248 
	/* push	ds ;* kill: assume all (DOS routine used) */
	PUSH(ds);
edummylabel2:
	// 4371 
	/* push	es */
	PUSH(es);
	/* mov	dx,DOSVctrOff */
	dx = dosvctroff;
	/* mov	ax,DOSVctrSeg */
	ax = dosvctrseg;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,009h		;keyboard interrupt */
	al = 0x009;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
kbdintr:
	// 280 
	/* push 	ax ;* the interrupt controller (8259A) that the interrupt has been serviced. */
	PUSH(ax);
edummylabel3:
	// 4373 
	/* push 	bx */
	PUSH(bx);
	/* push 	ds */
	PUSH(ds);
	/* mov 	ax,SEG Key */
	ax = m2c::segment_of_external(key);
	/* mov 	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* in	al,060h		;al = kbd scan code from PPI port A */
	IN(al, 0x060);
	/* mov	bl,al */
	bl = al;
	/* in 	al,061h		;al = current state of PPI port B */
	IN(al, 0x061);
	/* or 	al,080h		;set keyboard acknowledge signal */
	OR(al, 0x080);
	/* out 	061h,al		;send keyboard acknowledge signal */
	OUT(0x061, al);
	/* and	al,07fh		;reset keyboard acknowledge signal */
	AND(al, 0x07f);
	/* out 	061h,al		;restore original PPI port B state */
	OUT(0x061, al);
	/* xor	al,al */
	XOR(al, al);
	/* xor 	bh,bh */
	XOR(bh, bh);
	/* shl	bl,1		;cf = 0 = key pressed */
	SHL(bl, 1);
	/* cmc			;cf = 1 = key pressed */
	CMC;
	/* rcl	al,1		;al = 1 = key pressed */
	RCL(al, 1);
	/* shr	bl,1		;restore bl (bit 7 = 0) */
	SHR(bl, 1);
	/* mov 	Key[bx],al */
	*((key)+bx) = al;
	// 0 ;* map shift keys together
	/* cmp	bx,K_SHIFT1	;shift key 1 pressed? */
	CMP(bx, 42);
	/* je	FixShiftKey2	;yes -> */
	if ((dw)(bx) == (dw)(42)) {goto fixshiftkey2;}
	/* cmp	bx,K_SHIFT2	;shift key 2 pressed? */
	CMP(bx, 54);
	/* je	FixShiftKey1	;yes -> */
	if ((dw)(bx) == (dw)(54)) {goto fixshiftkey1;}
	// 0 ;* map "+" keys together
	/* cmp	bx,K_PLUS	;QWERTY "+" key pressed? */
	CMP(bx, 13);
	/* je	FixPlusKey2	;yes -> */
	if ((dw)(bx) == (dw)(13)) {goto fixpluskey2;}
	/* cmp	bx,K_PAD_PLUS	;numeric key pad "+" key pressed? */
	CMP(bx, 78);
	/* je	FixPlusKey1	;yes -> */
	if ((dw)(bx) == (dw)(78)) {goto fixpluskey1;}
	// 0 ;* map "-" keys together
	/* cmp	bx,K_MINUS	;QWERTY "-" key pressed? */
	CMP(bx, 12);
	/* je	FixMinusKey2	;yes -> */
	if ((dw)(bx) == (dw)(12)) {goto fixminuskey2;}
	/* cmp	bx,K_PAD_MINUS	;numeric key pad "-" key pressed? */
	CMP(bx, 74);
	/* je	FixMinusKey1	;yes -> */
	if ((dw)(bx) == (dw)(74)) {goto fixminuskey1;}
keysfixed:
	// 4375 
	/* KeysFixed:	mov 	al,020h	    	;send EOI to 8259 command register */
	al = 0x020;
	/* out 	020h,al */
	OUT(0x020, al);
	/* pop 	ds */
	POP(ds);
	/* pop 	bx */
	POP(bx);
	/* pop 	ax */
	POP(ax);
	/* iret */
	J(IRET);
fixshiftkey2:
	// 4377 
	/* FixShiftKey2:	mov	Key[K_SHIFT2],al */
	*((key)+54) = al;
	/* jmp	KeysFixed */
	goto keysfixed;
fixshiftkey1:
	// 4379 
	/* FixShiftKey1:	mov	Key[K_SHIFT1],al */
	*((key)+42) = al;
	/* jmp	KeysFixed */
	goto keysfixed;
fixpluskey2:
	// 4381 
	/* FixPlusKey2:	mov	Key[K_PAD_PLUS],al */
	*((key)+78) = al;
	/* jmp	KeysFixed */
	goto keysfixed;
fixpluskey1:
	// 4383 
	/* FixPlusKey1:	mov	Key[K_PLUS],al */
	*((key)+13) = al;
	/* jmp	KeysFixed */
	goto keysfixed;
fixminuskey2:
	// 4385 
	/* FixMinusKey2:	mov	Key[K_PAD_MINUS],al */
	*((key)+74) = al;
	/* jmp	KeysFixed */
	goto keysfixed;
fixminuskey1:
	// 4387 
	/* FixMinusKey1:	mov	Key[K_MINUS],al */
	*((key)+12) = al;
	/* jmp	KeysFixed */
	goto keysfixed;
rettodos:
	// 4389 
	/* RetToDOS:	mov	ax,sp */
	ax = sp;
	/* xchg	ax,SPTemp */
	XCHG(ax, sptemp);
	/* mov	sp,ax */
	sp = ax;
	/* mov	ax,ss */
	ax = ss;
	/* xchg	ax,SSTemp */
	XCHG(ax, sstemp);
	/* mov	ss,ax */
	m2c::set_segment_register(ss, ax);
	/* sti */
	STI;
	/* jmp	FAR PTR AbortToDOS */
	J(return aborttodos(0, _state));
clearkeybuffer:
	// 354 
	/* xor	al,al ;* kill: al, cx, di, flags */
	XOR(al, al);
edummylabel4:
	// 4391 
	/* mov	cx,SIZE Key */
	cx = 128;
	/* mov	di,OFFSET Key */
	di = m2c::near_offset_external(key);
	// 358 rep	stosb
	/* rep	stosb */
	REP STOSB;
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
                case m2c::kclearkeybuffer: 	goto clearkeybuffer;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kfixminuskey1: 	goto fixminuskey1;
        case m2c::kfixminuskey2: 	goto fixminuskey2;
        case m2c::kfixpluskey1: 	goto fixpluskey1;
        case m2c::kfixpluskey2: 	goto fixpluskey2;
        case m2c::kfixshiftkey1: 	goto fixshiftkey1;
        case m2c::kfixshiftkey2: 	goto fixshiftkey2;
        case m2c::kinstallkbd: 	goto installkbd;
        case m2c::kkbdintr: 	goto kbdintr;
        case m2c::kkeysfixed: 	goto keysfixed;
        case m2c::krestorekbd: 	goto restorekbd;
        case m2c::krettodos: 	goto rettodos;
        default: return __dispatch_call(__disp, _state);
    };
}


/* THIS IS GENERATED FILE */

        
#include "overflow.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installoverflow:
	// 48 
	/* push	ds ;* kill: assume all (DOS routine used) */
	PUSH(ds);
edummylabel1:
	// 4369 
	/* push	es */
	PUSH(es);
	/* mov	ah,035h		;DOS Get Interrupt Vector function */
	ah = 0x035;
	/* mov	al,000h		;overflow interrupt */
	al = 0x000;
	/* int	021h  		;DOS */
	_INT(0x021);
	/* mov	DOSVctrSeg,es */
	dosvctrseg = es;
	/* mov	DOSVctrOff,bx */
	dosvctroff = bx;
	/* mov	dx,OFFSET OverflowIntr */
	dx = m2c::kglobal_overflowintr;
	/* mov	ax,SEG OverflowIntr */
	ax = seg_offset(overflowintr);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,000h		;overflow interrupt */
	al = 0x000;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
restoreoverflow:
	// 75 
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
	/* mov	al,000h		;overflow interrupt */
	al = 0x000;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
overflowintr:
	// 96 
	/* push 	ax ;* kill: nothing */
	PUSH(ax);
edummylabel3:
	// 4373 
	/* mov 	ax,DATA */
	ax = seg_offset(data);
	/* mov 	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	al,3		;80 * 25 Alpha mode */
	al = 3;
	/* mov	ah,0 */
	ah = 0;
	/* int	010h */
	_INT(0x010);
	/* mov	OverflowFlag,1	;Oh my God! How could it happen? */
	*(overflowflag) = 1;
	// 0 ;* print ax, bx, cx, dx, si, di, bp
	/* pop	ax */
	POP(ax);
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,bx */
	ax = bx;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,cx */
	ax = cx;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,dx */
	ax = dx;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,si */
	ax = si;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,di */
	ax = di;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,bp */
	ax = bp;
	/* call	PrintWord */
	CALL(printword, 0);
	/* call	NewLine */
	CALL(newline, 0);
	// 0 ;* print cs, ds, es, ss, sp
	/* mov	ax,cs */
	ax = cs;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,ds */
	ax = ds;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,es */
	ax = es;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,ss */
	ax = ss;
	/* call	PrintWord */
	CALL(printword, 0);
	/* mov	ax,sp */
	ax = sp;
	/* call	PrintWord */
	CALL(printword, 0);
	/* call	NewLine */
	CALL(newline, 0);
	// 0 ;* print return address ip, cs, flags
	/* pop	ax */
	POP(ax);
	/* call	PrintWord */
	CALL(printword, 0);
	/* pop	ax */
	POP(ax);
	/* call	PrintWord */
	CALL(printword, 0);
	/* pop	ax */
	POP(ax);
	/* call	PrintWord */
	CALL(printword, 0);
	/* call	NewLine */
	CALL(newline, 0);
	/* mov	ax,SPTemp */
	ax = sptemp;
	/* mov	sp,ax */
	sp = ax;
	/* mov	ax,SSTemp */
	ax = sstemp;
	/* mov	ss,ax */
	m2c::set_segment_register(ss, ax);
	/* sti */
	STI;
	/* jmp	FAR PTR AbortToDOS */
	J(return aborttodos(0, _state));
printword:
	// 158 
	/* push	bx ;* kill: flags */
	PUSH(bx);
edummylabel4:
	// 4375 
	/* push	dx */
	PUSH(dx);
	/* mov	bx,OFFSET HexChars */
	bx = m2c::near_offset_external(hexchars);
	/* push	ax */
	PUSH(ax);
	/* mov	al,ah */
	al = ah;
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* xlat */
	XLAT;
	/* mov	dl,al */
	dl = al;
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* mov	al,ah */
	al = ah;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* xlat */
	XLAT;
	/* mov	dl,al */
	dl = al;
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* shr	al,1 */
	SHR(al, 1);
	/* xlat */
	XLAT;
	/* mov	dl,al */
	dl = al;
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* push	ax */
	PUSH(ax);
	/* and	al,00fh */
	AND(al, 0x00f);
	/* xlat */
	XLAT;
	/* mov	dl,al */
	dl = al;
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* mov	dl,' ' */
	dl = ' ';
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* pop	dx */
	POP(dx);
	/* pop	bx */
	POP(bx);
	/* ret */
	RETN(0);
newline:
	// 213 
	/* push	ax ;* kill: flags */
	PUSH(ax);
edummylabel5:
	// 4377 
	/* push	dx */
	PUSH(dx);
	/* mov	dl,CR */
	dl = 13;
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* mov	dl,LF */
	dl = 10;
	/* mov	ah,2 */
	ah = 2;
	/* int	021h */
	_INT(0x021);
	/* pop	ax */
	POP(ax);
	/* pop	dx */
	POP(dx);
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
                case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kinstalloverflow: 	goto installoverflow;
        case m2c::knewline: 	goto newline;
        case m2c::koverflowintr: 	goto overflowintr;
        case m2c::kprintword: 	goto printword;
        case m2c::krestoreoverflow: 	goto restoreoverflow;
        default: return __dispatch_call(__disp, _state);
    };
}


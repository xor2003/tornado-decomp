/* THIS IS GENERATED FILE */

        
#include "critical.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installcriterr:
	// 56 
	/* push	ds ;* kill: assume all (DOS routine used) */
	PUSH(ds);
edummylabel1:
	// 4369 
	/* push	es */
	PUSH(es);
	/* mov	ah,035h		;DOS Get Interrupt Vector function */
	ah = 0x035;
	/* mov	al,024h		;critical error interrupt */
	al = 0x024;
	/* int	021h  		;DOS */
	_INT(0x021);
	/* mov	DOSVctrSeg,es */
	dosvctrseg = es;
	/* mov	DOSVctrOff,bx */
	dosvctroff = bx;
	/* mov	dx,OFFSET CritErrIntr */
	dx = m2c::kglobal_criterrintr;
	/* mov	ax,SEG CritErrIntr */
	ax = seg_offset(criterrintr);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,024h		;critical error interrupt */
	al = 0x024;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
restorecriterr:
	// 83 
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
	/* mov	al,024h		;critical error interrupt */
	al = 0x024;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
criterrintr:
	// 106 
	/* push 	ax ;* kill: nothing */
	PUSH(ax);
edummylabel3:
	// 4373 
	/* push 	ds */
	PUSH(ds);
	/* mov 	ax,SEG CritErrFlag */
	ax = m2c::segment_of_external(criterrflag);
	/* mov 	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	CritErrFlag,1 */
	*(criterrflag) = 1;
	/* mov	CritErrCode,di */
	criterrcode = di;
	/* pop 	ds */
	POP(ds);
	/* pop 	ax */
	POP(ax);
	/* mov	al,0		;ignore error */
	al = 0;
	/* iret */
	J(IRET);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcriterrintr: 	goto criterrintr;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kinstallcriterr: 	goto installcriterr;
        case m2c::krestorecriterr: 	goto restorecriterr;
        default: return __dispatch_call(__disp, _state);
    };
}


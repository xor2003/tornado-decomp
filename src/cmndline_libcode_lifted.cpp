/* THIS IS GENERATED FILE */

        
#include "cmndline.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
parsecmndline:
	// 51 
	// 0 ;* copy DOS command line before it is destroyed
edummylabel1:
	// 4369 
	/* push	ds */
	PUSH(ds);
	/* mov	ax,PSP */
	ax = psp;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	cx,128 */
	cx = 128;
	/* mov	si,128		;DOS command line is at PSP+128 */
	si = 128;
	/* mov	di,OFFSET CommandLine */
	di = m2c::near_offset_external(commandline);
	// 61 rep	movsb
	/* rep	movsb */
	REP MOVSB;
	/* pop	ds */
	POP(ds);
	// 0 ;* initialize variables
	/* mov	ARGC,0 */
	argc = 0;
	/* xor	bx,bx */
	XOR(bx, bx);
	/* mov	si,OFFSET CommandLine */
	si = m2c::near_offset_external(commandline);
	// 0 ;* determine command line length
	/* lodsb */
	{ LODSB; }
	/* mov	cl,al */
	cl = al;
	/* and	cx,0007fh	;cx = command line length = 0 .. 127 */
	AND(cx, 0x0007f);
	/* jcxz	CmndLineExit	;null command line -> */
	JCXZ(cmndlineexit);
	// 0 ;* scan command line for an argument
argsearch:
	// 4371 
	/* ArgSearch:	mov	al,[si] */
	al = m2c::getdata(*(raddr(ds,si)));
	/* call	CheckSeperator	;non-seperator character? */
	CALL(checkseperator, 0);
	/* jnc	FoundArg	;yes, found start of argument -> */
	if (!CF) {goto foundarg;}
	/* inc	si */
	INC(si);
	/* loop	ArgSearch */
	LOOP(argsearch);
	/* jmp	CmndLineExit	;end of command line encountered -> */
	goto cmndlineexit;
	// 0 ;* update ARGC and ARGV[]
foundarg:
	// 4373 
	/* FoundArg:	cmp	ARGC,MAX_ARGS	;room for another argument? */
	CMP(argc, 32);
	/* je	CmndLineExit	;no -> */
	if ((dw)(argc) == (dw)(32)) {goto cmndlineexit;}
	/* inc	ARGC		;update ARGC */
	INC(argc);
	/* mov	ARGV[bx],si	;store arg pointer in ARGV[] */
	*(dw*)(((db*)argv)+bx) = si;
	/* add	bx,2 */
	ADD(bx, 2);
	/* inc	si */
	INC(si);
	/* loop	SepSearch */
	LOOP(sepsearch);
	/* jmp	TruncateArg	;end of command line, truncate arg -> */
	goto truncatearg;
	// 0 ;* scan command line for a seperator
sepsearch:
	// 4375 
	/* SepSearch:	mov	al,[si] */
	al = m2c::getdata(*(raddr(ds,si)));
	/* call	CheckSeperator	;seperator character? */
	CALL(checkseperator, 0);
	/* jc	FoundSep	;yes -> */
	if (CF) {goto foundsep;}
	/* inc	si */
	INC(si);
	/* loop	SepSearch */
	LOOP(sepsearch);
	/* jmp	TruncateArg	;end of command line, truncate arg -> */
	goto truncatearg;
	// 0 ;* replace seperator with ASCIIZ
foundsep:
	// 4377 
	/* FoundSep:	mov	[si],BYTE PTR ASCIIZ */
	m2c::setdata(&(*(raddr(ds,si))), m2c::getdata(*(raddr(ds,0))));
	/* inc	si */
	INC(si);
	/* loop	ArgSearch */
	LOOP(argsearch);
	/* jmp	CmndLineExit	;end of command line encountered -> */
	goto cmndlineexit;
	// 0 ;* end of command line encountered whilst scanning arg, therefore truncate arg
truncatearg:
	// 4379 
	/* TruncateArg:	mov	[si],BYTE PTR ASCIIZ */
	m2c::setdata(&(*(raddr(ds,si))), m2c::getdata(*(raddr(ds,0))));
cmndlineexit:
	// 4381 
	/* CmndLineExit:	ret */
	RETF(0);
checkseperator:
	// 120 
	/* cmp	al,' '		;space? */
	CMP(al, ' ');
edummylabel2:
	// 4383 
	/* je	Seperator */
	if (ZF) {goto seperator;}
	/* cmp	al,','		;comma? */
	CMP(al, ',');
	/* je	Seperator */
	if ((db)(al) == (db)(',')) {goto seperator;}
	/* cmp	al,'/'		;slash? */
	CMP(al, '/');
	/* je	Seperator */
	if ((db)(al) == (db)('/')) {goto seperator;}
	/* cmp	al,'-'		;minus? */
	CMP(al, '-');
	/* je	Seperator */
	if ((db)(al) == (db)('-')) {goto seperator;}
nonseperator:
	// 4385 
	/* NonSeperator:	clc			;cf = 0 */
	CLC;
	/* ret */
	RETN(0);
seperator:
	// 4387 
	/* Seperator:	stc			;cf = 1 */
	STC;
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
                case m2c::kargsearch: 	goto argsearch;
        case m2c::kcheckseperator: 	goto checkseperator;
        case m2c::kcmndlineexit: 	goto cmndlineexit;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kfoundarg: 	goto foundarg;
        case m2c::kfoundsep: 	goto foundsep;
        case m2c::knonseperator: 	goto nonseperator;
        case m2c::kparsecmndline: 	goto parsecmndline;
        case m2c::kseperator: 	goto seperator;
        case m2c::ksepsearch: 	goto sepsearch;
        case m2c::ktruncatearg: 	goto truncatearg;
        default: return __dispatch_call(__disp, _state);
    };
}


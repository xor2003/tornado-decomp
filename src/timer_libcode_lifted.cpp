/* THIS IS GENERATED FILE */

        
#include "timer.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installtimer:
	// 257 
	/* push	ds ;* kill: assume all (DOS routine used) */
	PUSH(ds);
edummylabel1:
	// 4369 
	/* push	es */
	PUSH(es);
	/* mov	ah,035h		;DOS Get Interrupt Vector function */
	ah = 0x035;
	/* mov	al,008h		;timer interrupt */
	al = 0x008;
	/* int	021h  		;DOS */
	_INT(0x021);
	/* mov	DOSVctrSeg,es */
	dosvctrseg = es;
	/* mov	DOSVctrOff,bx */
	dosvctroff = bx;
	/* mov	CS:DOSTimerSeg,es */
	dostimerseg = es;
	/* mov	CS:DOSTimerOff,bx */
	dostimeroff = bx;
	/* mov	dx,OFFSET TimerIntr */
	dx = m2c::kglobal_timerintr;
	/* mov	ax,SEG TimerIntr */
	ax = seg_offset(timerintr);
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,008h		;timer interrupt */
	al = 0x008;
	/* int	021h		;DOS */
	_INT(0x021);
	// 0 ;* set frequency AFTER redirecting intr vector
	/* cli */
	CLI;
	/* mov	al,036h		;tell 8253 command reg we want to set */
	al = 0x036;
	/* out	043h,al		;channel 0 frequency */
	OUT(0x043, al);
	/* mov	al,LOW T_100Hz */
	al = 11932 & 0xff;
	/* out	040h,al */
	OUT(0x040, al);
	/* mov	al,HIGH T_100Hz */
	al = (11932 >> 8) & 0xff;
	/* out	040h,al */
	OUT(0x040, al);
	/* sti */
	STI;
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
restoretimer:
	// 296 
	/* push	ds ;* kill: assume all (DOS routine used) */
	PUSH(ds);
edummylabel2:
	// 4371 
	/* push	es */
	PUSH(es);
	// 0 ;* set frequency BEFORE redirecting intr vector
	/* cli */
	CLI;
	/* mov	al,036h		;tell 8253 command reg we want to set */
	al = 0x036;
	/* out	043h,al		;channel 0 frequency */
	OUT(0x043, al);
	/* mov	al,LOW T_18Hz */
	al = 65535 & 0xff;
	/* out	040h,al */
	OUT(0x040, al);
	/* mov	al,HIGH T_18Hz */
	al = (65535 >> 8) & 0xff;
	/* out	040h,al */
	OUT(0x040, al);
	/* sti */
	STI;
	/* mov	dx,DOSVctrOff */
	dx = dosvctroff;
	/* mov	ax,DOSVctrSeg */
	ax = dosvctrseg;
	/* mov	ds,ax */
	m2c::set_segment_register(ds, ax);
	/* mov	ah,025h		;DOS Set Interrupt Vector function */
	ah = 0x025;
	/* mov	al,008h		;timer interrupt */
	al = 0x008;
	/* int	021h		;DOS */
	_INT(0x021);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* ret */
	RETF(0);
timerintr:
	// 327
	/* push 	ax		;(see pop lists below) */
	PUSH(ax);
edummylabel3:
	// 4373 
	/* push 	ds */
	PUSH(ds);
	/* mov 	ax,DATA */
	ax = seg_offset(data);
	/* mov 	ds,ax */
	m2c::set_segment_register(ds, ax);
	// 0 ;---------------------
	// 0 ; mod for PS/2 systems
	// 0 ;---------------------
	/* in	al,061h		;read PPI port B */
	IN(al, 0x061);
	/* or	al,080h */
	OR(al, 0x080);
	/* out	061h,al		;IRQ 0 reset */
	OUT(0x061, al);
	// 0 ;--------------------------
	// 0 ;* update timers / counters
	// 0 ;--------------------------
	/* inc	Ticker */
	INC(ticker);
	/* inc	Frames */
	INC(frames);
	/* mov	ax,CountDown	;count down to zero */
	ax = countdown;
	/* cmp	ax,1 */
	CMP(ax, 1);
	/* cmc			;cf = 1 only if ax > 0 */
	CMC;
	/* sbb	ax,0 */
	SBB(ax, 0);
	/* mov	CountDown,ax */
	countdown = ax;
	/* add	WORD PTR ElapsedTime,1 */
	ADD(*(dw*)(&elapsedtime), 1);
	/* adc	WORD PTR ElapsedTime+2,0 */
	ADC(*(dw*)(((db*)&elapsedtime)+2), 0);
	// 0 ;------------------------------------------------------
	// 0 ;* test for user 100Hz routine, if present then call it
	// 0 ;------------------------------------------------------
	/* test	UserVctr100Flag,1 */
	TEST(*(uservctr100flag), 1);
	/* jz	NoUser100 */
	if (!(*(uservctr100flag) & 1)) {goto nouser100;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* push	bp */
	PUSH(bp);
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* call	UserVctr100 */
	CALLF(__dispatch_call_ext, uservctr100);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;-----------------------------------------------------
	// 0 ;* test for user 20Hz routine, if present then call it
	// 0 ;-----------------------------------------------------
nouser100:
	// 4375 
	/* NoUser100:	inc	IntrCntr */
	INC(*(intrcntr));
	/* cmp	IntrCntr,5 	;5th interrupt (20Hz)? */
	CMP(*(intrcntr), 5);
	/* jb	NoUser20	;no -> */
	if ((dw)(*(intrcntr)) < (dw)(5)) {goto nouser20;}
	/* mov	IntrCntr,0 */
	*(intrcntr) = 0;
	/* test	UserVctr20Flag,1 */
	TEST(*(uservctr20flag), 1);
	/* jz	NoUser20 */
	if (!(*(uservctr20flag) & 1)) {goto nouser20;}
	/* push	ax */
	PUSH(ax);
	/* push	bx */
	PUSH(bx);
	/* push	cx */
	PUSH(cx);
	/* push	dx */
	PUSH(dx);
	/* push	si */
	PUSH(si);
	/* push	di */
	PUSH(di);
	/* push	bp */
	PUSH(bp);
	/* push	ds */
	PUSH(ds);
	/* push	es */
	PUSH(es);
	/* call	UserVctr20 */
	CALLF(__dispatch_call_ext, uservctr20);
	/* pop	es */
	POP(es);
	/* pop	ds */
	POP(ds);
	/* pop	bp */
	POP(bp);
	/* pop	di */
	POP(di);
	/* pop	si */
	POP(si);
	/* pop	dx */
	POP(dx);
	/* pop	cx */
	POP(cx);
	/* pop	bx */
	POP(bx);
	/* pop	ax */
	POP(ax);
	// 0 ;----------------------------------
	// 0 ;* test for return via DOS (18.2Hz)
	// 0 ;----------------------------------
nouser20:
	// 4377 
	/* NoUser20:	add	DOSTimer,T_100Hz */
	ADD(dostimer, 11932);
	/* jc	RetViaDOSIntr */
	if (CF) {goto retviadosintr;}
	/* mov 	al,020h	    	;send EOI to 8259 command register */
	al = 0x020;
	/* out 	020h,al */
	OUT(0x020, al);
	/* pop 	ds		;(see push list above) */
	POP(ds);
	/* pop 	ax */
	POP(ax);
	/* iret */
	J(IRET);
retviadosintr:
	// 4379 
	/* RetViaDOSIntr:	pop	ds		;(see push list above) */
	POP(ds);
	/* pop	ax */
	POP(ax);
	/* jmp DWORD PTR CS:DOSTimerOff chains to the saved previous int8 vector
	   (the BIOS TIM_INT handler). In real DOS that routine bumps the BIOS
	   tick counter at 0040:006C, sends EOI to the 8259 and IRETs. The host
	   already performs that BIOS housekeeping (tick bump + int1c) on its own
	   cadence, and the saved CS-relative far pointer cannot be modeled as a
	   dispatchable target -- so just do the handler's tail here: EOI + IRET
	   (which pops the synthesized 0:0 frame and unwinds back to C++). */
	/* send EOI to 8259 command register */
	al = 0x020;
	OUT(0x020, al);
	J(IRET);
installuser20:
	// 433 
	/* cli	 ;* kill: nothing */
	CLI;
edummylabel4:
	// 4381 
	/* mov	WORD PTR UserVctr20,ax */
	*(dw*)(&uservctr20) = ax;
	/* mov	WORD PTR UserVctr20+2,dx */
	*(dw*)(((db*)&uservctr20)+2) = dx;
	/* mov	UserVctr20Flag,1 */
	*(uservctr20flag) = 1;
	/* sti */
	STI;
	/* ret */
	RETF(0);
restoreuser20:
	// 449 
	/* cli	 ;* kill: nothing */
	CLI;
edummylabel5:
	// 4383 
	/* mov	UserVctr20Flag,0 */
	*(uservctr20flag) = 0;
	/* sti */
	STI;
	/* ret */
	RETF(0);
installuser100:
	// 465 
	/* cli	 ;* kill: nothing */
	CLI;
edummylabel6:
	// 4385 
	/* mov	WORD PTR UserVctr100,ax */
	*(dw*)(&uservctr100) = ax;
	/* mov	WORD PTR UserVctr100+2,dx */
	*(dw*)(((db*)&uservctr100)+2) = dx;
	/* mov	UserVctr100Flag,1 */
	*(uservctr100flag) = 1;
	/* sti */
	STI;
	/* ret */
	RETF(0);
restoreuser100:
	// 481 
	/* cli	 ;* kill: nothing */
	CLI;
edummylabel7:
	// 4387 
	/* mov	UserVctr100Flag,0 */
	*(uservctr100flag) = 0;
	/* sti */
	STI;
	/* ret */
	RETF(0);
settimedate:
	// 507 
	// 0 ;----------------------------------------------
	// 0 ;* get real-time clock date and set system date
	// 0 ;----------------------------------------------
edummylabel8:
	// 4389 
	/* mov	ah,004h		;get real-time clock date */
	ah = 0x004;
	/* int	01ah		;time of day service */
	_INT(0x01a);
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	ExitTimeDate */
	goto exittimedate;
__m2c_macrolocal_1_skip:
	// 4391 
	// 0 ;defective ->
	// 0 ;* ch = century (19 .. 20 BCD)
	// 0 ;* cl = year    (00 .. 99 BCD)
	// 0 ;* dh = month   (01 .. 12 BCD)
	// 0 ;* dl = day     (01 .. 31 BCD)
	/* mov	al,ch */
	al = ch;
	/* mov	ah,ch */
	ah = ch;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	ch,al */
	ch = al;
	/* mov	al,cl */
	al = cl;
	/* mov	ah,cl */
	ah = cl;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	cl,al */
	cl = al;
	/* mov	al,dh */
	al = dh;
	/* mov	ah,dh */
	ah = dh;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	dh,al */
	dh = al;
	/* mov	al,dl */
	al = dl;
	/* mov	ah,dl */
	ah = dl;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	dl,al */
	dl = al;
	/* mov	al,100 */
	al = 100;
	/* mul	ch */
	MUL1_1(ch);
	/* add	al,cl */
	ADD(al, cl);
	/* adc	ah,0 */
	ADC(ah, 0);
	/* mov	cx,ax */
	cx = ax;
	// 0 ;* cx = year (1980 .. 2099)
	// 0 ;* dh = month   (1 .. 12)
	// 0 ;* dl = day     (1 .. 31)
	/* mov	ah,02bh		;set date */
	ah = 0x02b;
	/* int	021h		;DOS function */
	_INT(0x021);
	// 0 ;----------------------------------------------
	// 0 ;* get real-time clock time and set system time
	// 0 ;----------------------------------------------
	/* mov	ah,002h		;get real-time clock time */
	ah = 0x002;
	/* int	01ah		;time of day service */
	_INT(0x01a);
	/* jc	ExitTimeDate	;defective -> */
	if (CF) {goto exittimedate;}
	// 0 ;* ch = hours   (00 .. 23 BCD)
	// 0 ;* cl = minutes (00 .. 59 BCD)
	// 0 ;* dh = seconds (00 .. 59 BCD)
	/* mov	al,ch */
	al = ch;
	/* mov	ah,ch */
	ah = ch;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	ch,al */
	ch = al;
	/* mov	al,cl */
	al = cl;
	/* mov	ah,cl */
	ah = cl;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	cl,al */
	cl = al;
	/* mov	al,dh */
	al = dh;
	/* mov	ah,dh */
	ah = dh;
	/* and	al,00fh */
	AND(al, 0x00f);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* shr	ah,1 */
	SHR(ah, 1);
	/* aad */
	AAD;
	/* mov	dh,al */
	dh = al;
	// 0 ;* Note: The BIOS routine does not return 1/100ths sec value, which is required
	// 0 ;*	 by the DOS routine to set the time. Set this to 0.5 secs so that the
	// 0 ;*	 maximum error is 0.5 secs.
	/* mov	dl,50 */
	dl = 50;
	// 0 ;* ch = hours    (0 .. 23)
	// 0 ;* cl = minutes  (0 .. 59)
	// 0 ;* dh = seconds  (0 .. 59)
	// 0 ;* dl = 1/100ths (0 .. 99)
	/* mov	ah,02dh		;set time */
	ah = 0x02d;
	/* int	021h		;DOS function */
	_INT(0x021);
exittimedate:
	// 4393 
	/* ExitTimeDate:	ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            {
                const dd _dseg = (dd)__disp >> 16;
                /* seg:off target within this module's own code segment (or a
                   bare offset) is a local label -> dispatch on off alone; a
                   different segment is external and keeps full seg:off. */
                if (_dseg == 0 || _dseg == (dd)cs) { __disp &= 0xffff; }
                eip = (dd)__disp & 0xffff;
            }
            switch (__disp) {
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kexittimedate: 	goto exittimedate;
        case m2c::kinstalltimer: 	goto installtimer;
        case m2c::kinstalluser100: 	goto installuser100;
        case m2c::kinstalluser20: 	goto installuser20;
        case m2c::knouser100: 	goto nouser100;
        case m2c::knouser20: 	goto nouser20;
        case m2c::krestoretimer: 	goto restoretimer;
        case m2c::krestoreuser100: 	goto restoreuser100;
        case m2c::krestoreuser20: 	goto restoreuser20;
        case m2c::kretviadosintr: 	goto retviadosintr;
        case m2c::ksettimedate: 	goto settimedate;
        case m2c::ktimerintr: 	goto timerintr;
        default: return __dispatch_call(__disp, _state);
    };
}


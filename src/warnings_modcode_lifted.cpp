/* THIS IS GENERATED FILE */

        
#include "warnings.h"

                

 __attribute__((weak)) bool checkfailures(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    checkfailures:
    _begin:
	// 0 ;--------------------------
	// 0 ;* cancel attention getters (if requested)
	// 0 ;--------------------------
edummylabel1:
	// 4369 
	/* mov	al,BYTE PTR KF_CancelAttn[K_STATUS] */
	al = *((&kf_cancelattn)+k_status);
	/* test	al,al */
	TEST(al, al);
	// 0 ;cancel attention getters?
/* m2c-phantom removed: 	R(al = *((&kf_cancelattn)+k_status););	// 1380 mov	al,BYTE PTR KF_CancelAttn[K_STATUS] */
	/* jz	@F		;no -> */
	if (!(al & al)) {goto dummylabel1;}
	// 0 ;* merge new failures with acknowledged failures
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xchg	ax,RedWarnings2 */
	XCHG(ax, redwarnings2);
	/* and	ax,RED_CANCEL	;cancel non-permanent warnings */
	AND(ax, ~(0x8));
	/* or	RedWarnings1,ax */
	OR(redwarnings1, ax);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* xchg	ax,AmbWarnings2 */
	XCHG(ax, ambwarnings2);
	/* and	ax,AMB_CANCEL	;cancel non-permanent warnings */
	AND(ax, ~(0x1+0x8));
	/* or	AmbWarnings1,ax */
	OR(ambwarnings1, ax);
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Attention,al		;clear lamps */
	attention = al;
	/* mov	PrevRedWarn2,ax */
	prevredwarn2 = ax;
	/* mov	PrevAmbWarn2,ax */
	prevambwarn2 = ax;
	/* mov	AttnTimer,FLASH_DELAY	;reset delay */
	attntimer = 50;
	/* call	KillAttnSound */
	CALLF(killattnsound, 0);
	/* jmp	ExitFailures */
	goto exitfailures;
	// 0 ;---------------------------------
	// 0 ;* update attention flag and timer
	// 0 ;---------------------------------
dummylabel1:
	// 4371 
	/* @@: 		mov	ax,RedWarnings1 */
	ax = redwarnings1;
	/* not	ax		;ignore existing failures */
	ax = ~ax;
	/* and	ax,RedWarnings2 */
	AND(ax, redwarnings2);
	/* mov	dx,AmbWarnings1 */
	dx = ambwarnings1;
	/* not	dx		;ignore existing failures */
	dx = ~dx;
	/* and	dx,AmbWarnings2 */
	AND(dx, ambwarnings2);
	/* or	ax,dx		;any flashing warnings? */
	OR(ax, dx);
	/* jz	ContFailures	;no -> */
	if (ax == 0) {goto contfailures;}
	/* mov	ax,RedWarnings2 */
	ax = redwarnings2;
	/* cmp	ax,PrevRedWarn2	;new red warning? */
	CMP(ax, prevredwarn2);
	/* jne	@F		;yes -> */
	if ((dw)(ax) != (dw)(prevredwarn2)) {goto dummylabel2;}
	/* mov	ax,AmbWarnings2 */
	ax = ambwarnings2;
	/* cmp	ax,PrevAmbWarn2	;new amb warning? */
	CMP(ax, prevambwarn2);
	/* je	SkipSound	;no -> */
	if ((dw)(ax) == (dw)(prevambwarn2)) {goto skipsound;}
dummylabel2:
	// 4373 
	/* test CockpitViews,0 */
	TEST(cockpitviews, 0);
	/* jnz	@F */
	if ((cockpitviews & 0) != 0) {goto dummylabel3;}
	/* call	AttentionSound */
	CALLF(attentionsound, 0);
dummylabel3:
	// 4375 
skipsound:
	// 4377 
	/* SkipSound:	mov	ax,AttnTimer	;update timer */
	ax = attntimer;
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	@F */
	if (!CF) {goto dummylabel4;}
	/* xor	Attention,1	;toggle attention on / off */
	XOR(attention, 1);
	/* mov	ax,FLASH_DELAY */
	ax = 50;
dummylabel4:
	// 4379 
	/* @@:		mov	AttnTimer,ax */
	attntimer = ax;
	// 0 ;* update previous warning flags
contfailures:
	// 4381 
	/* ContFailures:	mov	ax,RedWarnings2 */
	ax = redwarnings2;
	/* mov	PrevRedWarn2,ax */
	prevredwarn2 = ax;
	/* mov	ax,AmbWarnings2 */
	ax = ambwarnings2;
	/* mov	PrevAmbWarn2,ax */
	prevambwarn2 = ax;
exitfailures:
	// 4383 
	/* ExitFailures:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kcheckfailures: 	goto checkfailures;
        case m2c::kcontfailures: 	goto contfailures;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitfailures: 	goto exitfailures;
        case m2c::kskipsound: 	goto skipsound;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


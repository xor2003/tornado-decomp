/* THIS IS GENERATED FILE */

        
#include "helicops.h"

                

 __attribute__((weak)) bool evasiontactics(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    evasiontactics:
    _begin:
	/* mov	si,HelicopterPtr ;* kill: assume all */
	si = helicopterptr;
	// 0 ;---------------------------
	// 0 ;* clear chaff / flare flags
	// 0 ;---------------------------
edummylabel20:
	// 4591 
	/* and	_HC_FLAGS[si],NOT (HFLG_REL_CHAFF+HFLG_REL_FLARE) */
	AND(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, ~(0x4+0x8));
	// 0 ;----------------------
	// 0 ;* test for weapon lock
	// 0 ;----------------------
	/* test	_HC_FLAGS[si],HFLG_IR_LOCK+HFLG_RAD_LOCK */
	TEST(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x1+0x2);
	/* jz	SkipEvasion */
	if (!(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags & 0x1+0x2)) {goto skipevasion;}
	// 0 ;----------------
	// 0 ;* check airborne
	// 0 ;----------------
	/* mov	ax,WORD PTR _VP_ZFT_LO[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)));
	/* or	ax,WORD PTR _VP_ZFT_HI[si] */
	OR(ax, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)));
	/* jz	SkipEvasion */
	if (ax == 0) {goto skipevasion;}
	// 0 ;----------------------------
	// 0 ;* update decoy release timer
	// 0 ;----------------------------
	/* mov	ax,_HC_DECOY_TIMER[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_decoy_timer)));
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
	/* jnc	SetDecoyTimer */
	if (!CF) {goto setdecoytimer;}
	// 0 ;---------------
	// 0 ;* release decoy
	// 0 ;---------------
	// 0 ;* release chaff (if required)
	/* test	_HC_FLAGS[si],HFLG_RAD_LOCK */
	TEST(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x2);
	/* jz	@F */
	if (!(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags & 0x2)) {goto dummylabel37;}
	/* push	si */
	PUSH(si);
	/* mov	ax,_HC_VTAS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_vtas)));
	/* mov	bx,CHAFF */
	bx = 22;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* add	si,MOB_REC_SIZE		;si -> viewpoint */
	ADD(si, 6);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	/* pop	si */
	POP(si);
	/* or	_HC_FLAGS[si],HFLG_REL_CHAFF */
	OR(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x4);
	// 0 ;* release flare (if required)
dummylabel37:
	// 4593 
	/* @@:		test	_HC_FLAGS[si],HFLG_IR_LOCK */
	TEST(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x1);
	/* jz	@F */
	if (!(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags & 0x1)) {goto dummylabel38;}
	/* push	si */
	PUSH(si);
	/* mov	ax,_HC_VTAS[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_vtas)));
	/* mov	bx,FLARE */
	bx = 24;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* add	si,MOB_REC_SIZE		;si -> viewpoint */
	ADD(si, 6);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	/* pop	si */
	POP(si);
	/* or	_HC_FLAGS[si],HFLG_REL_FLARE */
	OR(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, 0x8);
	// 0 ;* reset decoy release timer
dummylabel38:
	// 4595 
	/* @@:		call	RandX		;0.00 .. 2.55 */
	CALLF(randx, 0);
	/* shr	ax,1		;0.00 .. 1.27 */
	SHR(ax, 1);
	/* add	ax,50		;0.50 .. 1.77 */
	ADD(ax, 50);
setdecoytimer:
	// 4597 
	/* SetDecoyTimer:	mov	_HC_DECOY_TIMER[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_decoy_timer))), m2c::getdata(ax));
	// 0 ;------------------
	// 0 ;* clear lock flags
	// 0 ;------------------
skipevasion:
	// 4599 
	/* SkipEvasion:	and	_HC_FLAGS[si],NOT (HFLG_IR_LOCK+HFLG_RAD_LOCK) */
	AND(*(db*)&((helicopter*)raddr(ds,(6+18)+si))->hc_flags, ~(0x1+0x2));
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
                case m2c::kdummylabel37: 	goto dummylabel37;
        case m2c::kdummylabel38: 	goto dummylabel38;
        case m2c::kedummylabel20: 	goto edummylabel20;
        case m2c::kevasiontactics: 	goto evasiontactics;
        case m2c::ksetdecoytimer: 	goto setdecoytimer;
        case m2c::kskipevasion: 	goto skipevasion;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


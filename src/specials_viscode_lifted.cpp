/* THIS IS GENERATED FILE */

        
#include "specials.h"

                

 __attribute__((weak)) bool drawspecials(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    drawspecials:
    _begin:
	/* mov	bp,MapIndex ;* kill: assume all */
	bp = mapindex;
edummylabel1:
	// 4369 
	/* mov	al,SpecialLayer1[bp] */
	al = *((&speciallayer1)+bp);
	/* test	al,al		;null? */
	TEST(al, al);
	/* jz	ExitSpecials	;yes -> */
	if (!(al & al)) {goto exitspecials;}
	// 0 ;----------------
	// 0 ;* draw airfields
	// 0 ;----------------
	/* cmp	al,AIRFIELD_N	;airfield? */
	CMP(al, 8);
	/* ja	@F		;no -> */
	if ((db)(al) > (db)(8)) {goto dummylabel1;}
	/* call	DrawAirfield */
	CALL(drawairfield, 0);
	/* jmp	ExitSpecials */
	goto exitspecials;
	// 0 ;------------
	// 0 ;* draw towns
	// 0 ;------------
dummylabel1:
	// 4371 
	/* @@:		cmp	al,TOWN_N	;town? */
	CMP(al, 28);
	/* ja	ExitSpecials	;no -> */
	if ((db)(al) > (db)(28)) {goto exitspecials;}
	/* call	DrawTown */
	CALL(drawtown, 0);
exitspecials:
	// 4373 
	/* ExitSpecials:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kdrawspecials: 	goto drawspecials;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kexitspecials: 	goto exitspecials;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


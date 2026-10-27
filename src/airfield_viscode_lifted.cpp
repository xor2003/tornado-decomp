/* THIS IS GENERATED FILE */

        
#include "airfield.h"

                

 __attribute__((weak)) bool drawairfield(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    drawairfield:
    _begin:
	/* mov	bl,al ;* kill: assume all */
	bl = al;
edummylabel1:
	// 4369 
	/* sub	bl,AIRFIELD_1 */
	SUB(bl, airfield_1);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1	;*2 */
	SHL(bx, 1);
	/* shl	bx,1	;*4 */
	SHL(bx, 1);
	// 0 ;* draw taxiways first (give runway lights higher priority than taxiway lights)
	/* mov	si,AirfieldTable[bx+2] */
	si = *(dw*)(((db*)&airfieldtable)+bx+2);
	/* push	bx */
	PUSH(bx);
	/* call	DrawTaxiways */
	CALL(drawtaxiways, 0);
	/* pop	bx */
	POP(bx);
	/* mov	si,AirfieldTable[bx] */
	si = *(dw*)(((db*)&airfieldtable)+bx);
	/* call	DrawRunways */
	CALL(drawrunways, 0);
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
                case m2c::kdrawairfield: 	goto drawairfield;
        case m2c::kedummylabel1: 	goto edummylabel1;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


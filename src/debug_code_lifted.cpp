/* THIS IS GENERATED FILE */

        
#include "debug.h"

                

 __attribute__((weak)) bool printdebuginfo(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    printdebuginfo:
    _begin:
	/* mov	si,OFFSET Debug2$ ;* kill: assume all */
	si = m2c::near_offset_external(debug2dol);
edummylabel1:
	// 4369 
	/* call	Print$ */
	CALLF(printdol, 0);
	/* mov	si,OFFSET InfoDI$ */
	si = m2c::near_offset_external(infodidol);
	/* call	Print$ */
	CALLF(printdol, 0);
	/* ret */
	RETF(0);
	// 0 ;----------------------------------
	// 0 ;* print two player tx / rx buffers
	// 0 ;----------------------------------
edummylabel2:
	// 4371 
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
                case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kprintdebuginfo: 	goto printdebuginfo;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


/* THIS IS GENERATED FILE */

        
#include "mathfunc.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;frame rate adjust value
	// 0 ;* delta table (look up delta time wrt frame rate)
	// 0 ;  0/100th
	// 0 ;  1/100th
	// 0 ;  2/100th
	// 0 ;  3/100th
	// 0 ;  4/100th
	// 0 ;  5/100th
	// 0 ;  6/100th
	// 0 ;  7/100th
	// 0 ;  8/100th
	// 0 ;  9/100th
	// 0 ; 10/100th
	// 0 ; 11/100th
	// 0 ; 12/100th
	// 0 ; 13/100th
	// 0 ; 14/100th
	// 0 ; 15/100th
	// 0 ; 16/100th
	// 0 ; 17/100th
	// 0 ; 18/100th
	// 0 ; 19/100th
	// 0 ; 20/100th
	// 0 ; 21/100th
	// 0 ; 22/100th
	// 0 ; 23/100th
	// 0 ; 24/100th
	// 0 ; 25/100th
	// 0 ; 26/100th
	// 0 ; 27/100th
	// 0 ; 28/100th
	// 0 ; 29/100th
	// 0 ; 30/100th
	// 0 ; 31/100th
	// 0 ; 32/100th
	// 0 ; 33/100th
	// 0 ; 34/100th
	// 0 ; 35/100th
	// 0 ; 36/100th
	// 0 ; 37/100th
	// 0 ; 38/100th
	// 0 ; 39/100th
	// 0 ; 40/100th
	// 0 ; 41/100th
	// 0 ; 42/100th
	// 0 ; 43/100th
	// 0 ; 44/100th
	// 0 ; 45/100th
	// 0 ; 46/100th
	// 0 ; 47/100th
	// 0 ; 48/100th
	// 0 ; 49/100th
	// 0 ; 50/100th
	// 0 ; 51/100th
	// 0 ; 52/100th
	// 0 ; 53/100th
	// 0 ; 54/100th
	// 0 ; 55/100th
	// 0 ; 56/100th
	// 0 ; 57/100th
	// 0 ; 58/100th
	// 0 ; 59/100th
	// 0 ; 60/100th
	// 0 ; 61/100th
	// 0 ; 62/100th
	// 0 ; 63/100th
	// 0 ; 64/100th
	// 0 ; 65/100th
	// 0 ; 66/100th
	// 0 ; 67/100th
	// 0 ; 68/100th
	// 0 ; 69/100th
	// 0 ; 70/100th
	// 0 ; 71/100th
	// 0 ; 72/100th
	// 0 ; 73/100th
	// 0 ; 74/100th
	// 0 ; 75/100th
	// 0 ; 76/100th
	// 0 ; 77/100th
	// 0 ; 78/100th
	// 0 ; 79/100th
	// 0 ; 80/100th
	// 0 ; 81/100th
	// 0 ; 82/100th
	// 0 ; 83/100th
	// 0 ; 84/100th
	// 0 ; 85/100th
	// 0 ; 86/100th
	// 0 ; 87/100th
	// 0 ; 88/100th
	// 0 ; 89/100th
	// 0 ; 90/100th
	// 0 ; 91/100th
	// 0 ; 92/100th
	// 0 ; 93/100th
	// 0 ; 94/100th
	// 0 ; 95/100th
	// 0 ; 96/100th
	// 0 ; 97/100th
	// 0 ; 98/100th
	// 0 ; 99/100th
	// 0 ;100/100th

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kmainproc: 	goto mainproc;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


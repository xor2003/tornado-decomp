/* THIS IS GENERATED FILE */

        
#include "tan_stub.h"

                

 static bool gcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    gcode_0_proc:
    _begin:
tan_vmode:
	// 4369 
	// 0 ;============================================================================
tan_dload:
	// 4371 
tan_setpx:
	// 4373 
tan_line:
	// 4375 
tan_vline:
	// 4377 
tan_hline:
	// 4379 
tan_pfill:
	// 4381 
tan_mfill:
	// 4383 
tan_sfill:
	// 4385 
tan_prtc1:
	// 4387 
tan_prtc2:
	// 4389 
tan_prtc3:
	// 4391 
tan_ssprite:
	// 4393 
tan_msprite:
	// 4395 
tan_bsprite:
	// 4397 
tan_qsprite:
	// 4399 
tan_initss:
	// 4401 
tan_initms:
	// 4403 
tan_bfill:
	// 4405 
tan_savemouse:
	// 4407 
tan_loadmouse:
	// 4409 
tan_savescreen:
	// 4411 
tan_loadscreen:
	// 4413 
tan_uncomppic:
	// 4415 
tan_hfill:
	// 4417 
	/* retf */
	RETF(0);
tan_calcaddr:
	// 4419 
seperatedata:
	// 4421 
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
                case m2c::kgcode_0_proc: 	goto gcode_0_proc;
        case m2c::kseperatedata: 	goto seperatedata;
        case m2c::ktan_bfill: 	goto tan_bfill;
        case m2c::ktan_bsprite: 	goto tan_bsprite;
        case m2c::ktan_calcaddr: 	goto tan_calcaddr;
        case m2c::ktan_dload: 	goto tan_dload;
        case m2c::ktan_hfill: 	goto tan_hfill;
        case m2c::ktan_hline: 	goto tan_hline;
        case m2c::ktan_initms: 	goto tan_initms;
        case m2c::ktan_initss: 	goto tan_initss;
        case m2c::ktan_line: 	goto tan_line;
        case m2c::ktan_loadmouse: 	goto tan_loadmouse;
        case m2c::ktan_loadscreen: 	goto tan_loadscreen;
        case m2c::ktan_mfill: 	goto tan_mfill;
        case m2c::ktan_msprite: 	goto tan_msprite;
        case m2c::ktan_pfill: 	goto tan_pfill;
        case m2c::ktan_prtc1: 	goto tan_prtc1;
        case m2c::ktan_prtc2: 	goto tan_prtc2;
        case m2c::ktan_prtc3: 	goto tan_prtc3;
        case m2c::ktan_qsprite: 	goto tan_qsprite;
        case m2c::ktan_savemouse: 	goto tan_savemouse;
        case m2c::ktan_savescreen: 	goto tan_savescreen;
        case m2c::ktan_setpx: 	goto tan_setpx;
        case m2c::ktan_sfill: 	goto tan_sfill;
        case m2c::ktan_ssprite: 	goto tan_ssprite;
        case m2c::ktan_uncomppic: 	goto tan_uncomppic;
        case m2c::ktan_vline: 	goto tan_vline;
        case m2c::ktan_vmode: 	goto tan_vmode;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


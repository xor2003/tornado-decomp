/* THIS IS GENERATED FILE */

        
#include "com_clip.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;-----------------
	// 0 ;* clipping window
	// 0 ;-----------------
	// 0 ;* clip window origin (default (0, 0), but TV?_VIEWMODEs require variable origin)
	// 0 ;x origin of clip window
	// 0 ;y origin of clip window
	// 0 ;* clip window x max, y max
	// 0 ;x max = x org + width - 1
	// 0 ;y max = y org + depth - 1
	// 0 ;* clipping window width, depth (wrt view mode)
	// 0 ;* clipping window width, depth table
	// 0 ;INT_VIEWMODE
	// 0 ;ALT_VIEWMODE
	// 0 ;EXT_VIEWMODE
	// 0 ;TV1_VIEWMODE
	// 0 ;TV2_VIEWMODE
	// 0 ;TV3_VIEWMODE
	// 0 ;TV4_VIEWMODE
	// 0 ;TV5_VIEWMODE
	// 0 ;* variable clipping window origin flag (wrt view mode), 1 = variable origin
	// 0 ;INT_VIEWMODE
	// 0 ;ALT_VIEWMODE
	// 0 ;EXT_VIEWMODE
	// 0 ;* indirection pointers for clip routines
	// 0 ;INT_VIEWMODE
	// 0 ;ALT_VIEWMODE
	// 0 ;EXT_VIEWMODE
	// 0 ;TV1_VIEWMODE
	// 0 ;TV2_VIEWMODE
	// 0 ;TV3_VIEWMODE
	// 0 ;TV4_VIEWMODE
	// 0 ;TV5_VIEWMODE
	// 0 ;INT_VIEWMODE
	// 0 ;ALT_VIEWMODE
	// 0 ;EXT_VIEWMODE
	// 0 ;TV1_VIEWMODE
	// 0 ;TV2_VIEWMODE
	// 0 ;TV3_VIEWMODE
	// 0 ;TV4_VIEWMODE
	// 0 ;TV5_VIEWMODE
	// 0 ;INT_VIEWMODE
	// 0 ;ALT_VIEWMODE
	// 0 ;EXT_VIEWMODE
	// 0 ;TV1_VIEWMODE
	// 0 ;TV2_VIEWMODE
	// 0 ;TV3_VIEWMODE
	// 0 ;TV4_VIEWMODE
	// 0 ;TV5_VIEWMODE
	// 0 ;------------------
	// 0 ;* object draw mode
	// 0 ;------------------
	// 446 DRAW_OBJECT	EQU	0		;no clipping required
	// 0 ;no clipping required
	// 447 CLIP_OBJECT	EQU	2		;clipping required
	// 0 ;clipping required
	// 448 SKIP_OBJECT	EQU	4		;object not visible
	// 0 ;object not visible
	// 0 ;DRAW_OBJECT
	// 0 ;CLIP_OBJECT
	// 0 ;SKIP_OBJECT
	// 0 ;DRAW_OBJECT
	// 0 ;CLIP_OBJECT
	// 0 ;SKIP_OBJECT
	// 0 ;DRAW_OBJECT
	// 0 ;CLIP_OBJECT
	// 0 ;SKIP_OBJECT
	// 0 ;DRAW_OBJECT
	// 0 ;CLIP_OBJECT
	// 0 ;SKIP_OBJECT
	// 0 ;-----------
	// 0 ;* poly clip
	// 0 ;-----------
	// 476 XA		EQU	0
	// 477 YA		EQU	2
	// 478 ZA		EQU	4
	// 479 XB		EQU	-8
	// 480 YB		EQU	-6
	// 481 ZB		EQU	-4
	// 482 XC		EQU	0
	// 483 YC		EQU	2
	// 484 ZC		EQU	4
	// 0 ;-----------
	// 0 ;* line clip
	// 0 ;-----------
	// 0 ;---------------
	// 0 ;* miscellaneous
	// 0 ;---------------

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


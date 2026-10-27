/* THIS IS GENERATED FILE */

        
#include "visdebug.h"

                

 __attribute__((weak)) bool visualinfo(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    visualinfo:
    _begin:
	// 0 ;* calc remaining space in object buffer
	// 0 ;mov	ax,OFFSET ObjectBufEnd
	// 0 ;sub	ax,ObjectBufPtr
	// 0 ;xor	dx,dx
	// 0 ;mov	bx,OBJ_REC_SIZE
	// 0 ;div	bx
	// 0 ;mov	ObjBufSpace,ax
	// 0 ;* find surface type
	// 0 ;mov	si,OFFSET V_VIEW
	// 0 ;call	SurfaceCheck
	// 0 ;mov	SurfaceType,ax
	// 0 ;* collision test
	// 0 ;mov	si,OFFSET V_VIEW
	// 0 ;call	GroundCollision
	// 0 ;mov	GndObjectHit,al
	// 0 ;mov	si,OFFSET V_VIEW
	// 0 ;call	StaticCollision
	// 0 ;mov	StatObjectHit,al
	// 0 ;mov	si,OFFSET V_VIEW
	// 0 ;call	TreeCollision
	// 0 ;mov	TreeObjectHit,al
	// 0 ;* display information
	// 0 ;		mov	si,OFFSET Info$
	// 0 ;		call	Print$
edummylabel1:
	// 4369 
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
        case m2c::kvisualinfo: 	goto visualinfo;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


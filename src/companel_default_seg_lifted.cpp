/* THIS IS GENERATED FILE */

        
#include "companel.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 0 ;------------------
	// 0 ;* panel file names (VGA filenames only)
	// 0 ;------------------
	// 0 ;--------------------------
	// 0 ;* initialize panels switch (wrt ScreenMode)
	// 0 ;--------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;-------------------
	// 0 ;* load panel switch (wrt ScreenMode)
	// 0 ;-------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;--------------------------
	// 0 ;* clear pilot panel switch (wrt ScreenMode)
	// 0 ;--------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;--------------------------
	// 0 ;* clear navig panel switch (wrt ScreenMode)
	// 0 ;--------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;---------------------------------
	// 0 ;* draw pilot panel sprites switch (wrt ScreenMode)
	// 0 ;---------------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;---------------------------------
	// 0 ;* draw navig panel sprites switch (wrt ScreenMode)
	// 0 ;---------------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;----------------------------
	// 0 ;* draw ironwork panel switch (wrt ScreenMode)
	// 0 ;----------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;--------------------------
	// 0 ;* draw HUD brackets switch (wrt ScreenMode)
	// 0 ;--------------------------
	// 0 ;VGA
	// 0 ;HEM
	// 0 ;CGA
	// 0 ;EGA
	// 0 ;TAN
	// 0 ;TEM
	// 0 ;V16
	// 0 ;------------------
	// 0 ;* panel load count (wrt ScreenMode)
	// 0 ;------------------
	// 0 ;* EGA / V16 / VGA (flip screens) must load panel twice, count = 2
	// 0 ;* HGC / CGA / TAN (copy screens) only load panel once, count = 1
	// 0 ;panel load count
	// 0 ;VGA
	// 0 ;---------------------
	// 0 ;* update panel switch (wrt PanelMode)
	// 0 ;---------------------
	// 0 ;PILOTPAN
	// 0 ;PSIDEPAN
	// 0 ;NAVIGPAN
	// 0 ;NSIDEPAN
	// 0 ;EXTRNPAN
	// 0 ;LOOKDOWN
	// 0 ;LOOKUP
	// 0 ;MAPPAN

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


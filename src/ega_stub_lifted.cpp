/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "ega_stub.h"

	
 __attribute__((weak)) bool allocatespace(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kallocatespace, _state);}

 __attribute__((weak)) bool createegadata(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcreateegadata, _state);}

 static bool createegamask(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcreateegamask, _state);}

 __attribute__((weak)) bool ega_bfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_bfill, _state);}

 __attribute__((weak)) bool ega_bsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_bsprite, _state);}

 __attribute__((weak)) bool ega_calcaddr(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_calcaddr, _state);}

 __attribute__((weak)) bool ega_dload(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_dload, _state);}

 __attribute__((weak)) bool ega_hfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_hfill, _state);}

 __attribute__((weak)) bool ega_hline(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_hline, _state);}

 __attribute__((weak)) bool ega_initms(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_initms, _state);}

 __attribute__((weak)) bool ega_initqs(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_initqs, _state);}

 __attribute__((weak)) bool ega_initss(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_initss, _state);}

 __attribute__((weak)) bool ega_line(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_line, _state);}

 __attribute__((weak)) bool ega_loadmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_loadmouse, _state);}

 __attribute__((weak)) bool ega_loadscreen(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_loadscreen, _state);}

 __attribute__((weak)) bool ega_mfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_mfill, _state);}

 __attribute__((weak)) bool ega_msprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_msprite, _state);}

 __attribute__((weak)) bool ega_pfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_pfill, _state);}

 __attribute__((weak)) bool ega_prtc1(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_prtc1, _state);}

 __attribute__((weak)) bool ega_prtc2(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_prtc2, _state);}

 __attribute__((weak)) bool ega_prtc3(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_prtc3, _state);}

 __attribute__((weak)) bool ega_qsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_qsprite, _state);}

 __attribute__((weak)) bool ega_savemouse(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_savemouse, _state);}

 __attribute__((weak)) bool ega_savescreen(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_savescreen, _state);}

 __attribute__((weak)) bool ega_setpx(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_setpx, _state);}

 __attribute__((weak)) bool ega_sfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_sfill, _state);}

 __attribute__((weak)) bool ega_ssprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_ssprite, _state);}

 __attribute__((weak)) bool ega_uncomppic(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_uncomppic, _state);}

 __attribute__((weak)) bool ega_vline(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_vline, _state);}

 __attribute__((weak)) bool ega_vmode(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kega_vmode, _state);}

 __attribute__((weak)) bool moveegadata(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kmoveegadata, _state);}

	
	#include "ega_stub_default_seg_lifted.cpp"
#include "ega_stub_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kallocatespace: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcreateegadata: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcreateegamask: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_bfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_bsprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_calcaddr: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_dload: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_hfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_hline: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_initms: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_initqs: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_initss: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_line: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_loadmouse: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_loadscreen: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_mfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_msprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_pfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_prtc1: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_prtc2: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_prtc3: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_qsprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_savemouse: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_savescreen: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_setpx: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_sfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_ssprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_uncomppic: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_vline: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kega_vmode: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kgcode_0_proc: 	if (!gcode_0_proc(0, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmoveegadata: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to call to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort(); }
     };
     return true;
}

  static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state){
     // Indirect targets must be claimed by the local switch first: in
     // listing mode a bare offset is cs-relative and para:off keys live
     // only in the local table, while aggregate-space keys fall through
     // the switch's default to m2c::dispatch_external_code anyway.
     // Resolving through the aggregate dispatcher first aliases a packed
     // seg:off key's offset word against unrelated global-offset entries.
     return __dispatch_call(__disp, _state);
}


        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
         #define MYCOPY(x) {m2c::set_type(x);m2c::mycopy((db*)&x,(db*)&tmp999,sizeof(tmp999),#x);}
        #else
         #define MYCOPY(x) memcpy(&x,&tmp999,sizeof(tmp999));
        #endif

         namespace m2c {
          void Initializer_ega_stub()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_ega_stub(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

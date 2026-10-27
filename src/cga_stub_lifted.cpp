/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "cga_stub.h"

	
 __attribute__((weak)) bool cga_bfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_bfill, _state);}

 __attribute__((weak)) bool cga_bsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_bsprite, _state);}

 __attribute__((weak)) bool cga_calcaddr(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_calcaddr, _state);}

 __attribute__((weak)) bool cga_dload(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_dload, _state);}

 __attribute__((weak)) bool cga_hfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_hfill, _state);}

 __attribute__((weak)) bool cga_hline(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_hline, _state);}

 __attribute__((weak)) bool cga_initms(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_initms, _state);}

 __attribute__((weak)) bool cga_initss(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_initss, _state);}

 __attribute__((weak)) bool cga_line(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_line, _state);}

 __attribute__((weak)) bool cga_loadmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_loadmouse, _state);}

 __attribute__((weak)) bool cga_loadscreen(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_loadscreen, _state);}

 __attribute__((weak)) bool cga_mfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_mfill, _state);}

 __attribute__((weak)) bool cga_msprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_msprite, _state);}

 __attribute__((weak)) bool cga_pfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_pfill, _state);}

 __attribute__((weak)) bool cga_prtc1(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_prtc1, _state);}

 __attribute__((weak)) bool cga_prtc2(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_prtc2, _state);}

 __attribute__((weak)) bool cga_prtc3(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_prtc3, _state);}

 __attribute__((weak)) bool cga_qsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_qsprite, _state);}

 __attribute__((weak)) bool cga_savemouse(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_savemouse, _state);}

 __attribute__((weak)) bool cga_savescreen(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_savescreen, _state);}

 __attribute__((weak)) bool cga_setpx(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_setpx, _state);}

 __attribute__((weak)) bool cga_sfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_sfill, _state);}

 __attribute__((weak)) bool cga_ssprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_ssprite, _state);}

 __attribute__((weak)) bool cga_uncomppic(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_uncomppic, _state);}

 __attribute__((weak)) bool cga_vline(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_vline, _state);}

 __attribute__((weak)) bool cga_vmode(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kcga_vmode, _state);}

	
	#include "cga_stub_default_seg_lifted.cpp"
#include "cga_stub_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcga_bfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_bsprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_calcaddr: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_dload: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_hfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_hline: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_initms: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_initss: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_line: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_loadmouse: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_loadscreen: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_mfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_msprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_pfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_prtc1: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_prtc2: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_prtc3: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_qsprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_savemouse: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_savescreen: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_setpx: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_sfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_ssprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_uncomppic: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_vline: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kcga_vmode: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kgcode_0_proc: 	if (!gcode_0_proc(0, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
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
          void Initializer_cga_stub()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_cga_stub(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

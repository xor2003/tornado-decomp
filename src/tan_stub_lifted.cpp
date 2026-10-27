/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "tan_stub.h"

	
 __attribute__((weak)) bool seperatedata(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kseperatedata, _state);}

 __attribute__((weak)) bool tan_bfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_bfill, _state);}

 __attribute__((weak)) bool tan_bsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_bsprite, _state);}

 __attribute__((weak)) bool tan_calcaddr(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_calcaddr, _state);}

 __attribute__((weak)) bool tan_dload(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_dload, _state);}

 __attribute__((weak)) bool tan_hfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_hfill, _state);}

 __attribute__((weak)) bool tan_hline(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_hline, _state);}

 __attribute__((weak)) bool tan_initms(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_initms, _state);}

 __attribute__((weak)) bool tan_initss(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_initss, _state);}

 __attribute__((weak)) bool tan_line(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_line, _state);}

 __attribute__((weak)) bool tan_loadmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_loadmouse, _state);}

 __attribute__((weak)) bool tan_loadscreen(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_loadscreen, _state);}

 __attribute__((weak)) bool tan_mfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_mfill, _state);}

 __attribute__((weak)) bool tan_msprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_msprite, _state);}

 __attribute__((weak)) bool tan_pfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_pfill, _state);}

 __attribute__((weak)) bool tan_prtc1(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_prtc1, _state);}

 __attribute__((weak)) bool tan_prtc2(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_prtc2, _state);}

 __attribute__((weak)) bool tan_prtc3(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_prtc3, _state);}

 __attribute__((weak)) bool tan_qsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_qsprite, _state);}

 __attribute__((weak)) bool tan_savemouse(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_savemouse, _state);}

 __attribute__((weak)) bool tan_savescreen(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_savescreen, _state);}

 __attribute__((weak)) bool tan_setpx(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_setpx, _state);}

 __attribute__((weak)) bool tan_sfill(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_sfill, _state);}

 __attribute__((weak)) bool tan_ssprite(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_ssprite, _state);}

 __attribute__((weak)) bool tan_uncomppic(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_uncomppic, _state);}

 __attribute__((weak)) bool tan_vline(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_vline, _state);}

 __attribute__((weak)) bool tan_vmode(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktan_vmode, _state);}

	
	#include "tan_stub_default_seg_lifted.cpp"
#include "tan_stub_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kgcode_0_proc: 	if (!gcode_0_proc(0, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kseperatedata: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_bfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_bsprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_calcaddr: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_dload: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_hfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_hline: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_initms: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_initss: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_line: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_loadmouse: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_loadscreen: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_mfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_msprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_pfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_prtc1: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_prtc2: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_prtc3: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_qsprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_savemouse: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_savescreen: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_setpx: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_sfill: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_ssprite: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_uncomppic: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_vline: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktan_vmode: 	if (!gcode_0_proc(__disp, _state)) return false; break;
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
          void Initializer_tan_stub()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_tan_stub(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

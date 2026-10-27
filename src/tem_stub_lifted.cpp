/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "tem_stub.h"

	
 __attribute__((weak)) bool convtantoega(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::kconvtantoega, _state);}

 __attribute__((weak)) bool setupegatable(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ksetupegatable, _state);}

 __attribute__((weak)) bool tem_dload(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktem_dload, _state);}

 __attribute__((weak)) bool tem_vmode(m2c::_offsets _i, struct m2c::_STATE* _state){return gcode_0_proc(_i ? _i : m2c::ktem_vmode, _state);}

	
	#include "tem_stub_default_seg_lifted.cpp"
#include "tem_stub_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kconvtantoega: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::kgcode_0_proc: 	if (!gcode_0_proc(0, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::ksetupegatable: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktem_dload: 	if (!gcode_0_proc(__disp, _state)) return false; break;
        case m2c::ktem_vmode: 	if (!gcode_0_proc(__disp, _state)) return false; break;
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
          void Initializer_tem_stub()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_tem_stub(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

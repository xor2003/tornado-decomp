/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "jettison.h"

	
 __attribute__((weak)) bool jetall(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjetall, _state);}

 __attribute__((weak)) bool jetextstores(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjetextstores, _state);}

 __attribute__((weak)) bool jetexttanks(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjetexttanks, _state);}

 __attribute__((weak)) bool jettison3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjettison3, _state);}

 static bool armok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmok, _state);}

 static bool jettison1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjettison1, _state);}

 static bool jettison2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjettison2, _state);}

	
	#include "jettison_default_seg_lifted.cpp"
#include "jettison_modcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::karmok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjetall: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjetextstores: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjetexttanks: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjettison1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjettison2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjettison3: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_jettison()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_jettison(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

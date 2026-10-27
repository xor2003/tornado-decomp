/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "random_m2c.h"

	
 __attribute__((weak)) bool fastrandx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfastrandx, _state);}

 __attribute__((weak)) bool randx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krandx, _state);}

 __attribute__((weak)) bool reseed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreseed, _state);}

 static bool seedok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseedok, _state);}

 static bool zerobit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit1, _state);}

 static bool zerobit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit2, _state);}

 static bool zerobit3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit3, _state);}

 static bool zerobit4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit4, _state);}

 static bool zerobit5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit5, _state);}

 static bool zerobit6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit6, _state);}

 static bool zerobit7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit7, _state);}

 static bool zerobit8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzerobit8, _state);}

	
	#include "random_default_seg_lifted.cpp"
#include "random_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfastrandx: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::krandx: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreseed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseedok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzerobit8: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_random()
          {
              {dw tmp999=12431;MYCOPY(seedlo)}
    {dw tmp999=8765;MYCOPY(seedhi)}
    {db tmp999[2]={0};MYCOPY(rndindex)}
    {db tmp999[256]={0};MYCOPY(rndtable)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_random(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

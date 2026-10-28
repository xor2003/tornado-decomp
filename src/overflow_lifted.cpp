/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "overflow.h"

	
 __attribute__((weak)) bool installoverflow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstalloverflow, _state);}

 __attribute__((weak)) bool newline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knewline, _state);}

 __attribute__((weak)) bool overflowintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koverflowintr, _state);}

 __attribute__((weak)) bool printword(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintword, _state);}

 __attribute__((weak)) bool restoreoverflow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krestoreoverflow, _state);}

	
	#include "overflow_default_seg_lifted.cpp"
#include "overflow_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_aborttodos
        case m2c::kaborttodos: 	if (!aborttodos(0, _state)) return false; break;
#endif
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstalloverflow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knewline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koverflowintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintword: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krestoreoverflow: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_overflow()
          {
              sstemp = 0;
    sptemp = 0;
    {db tmp999[2]={0};memcpy(&overflowflag,&tmp999,sizeof tmp999);}
    dosvctrseg = 0;
    dosvctroff = 0;
    {char tmp999[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};memcpy(&hexchars,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_overflow(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

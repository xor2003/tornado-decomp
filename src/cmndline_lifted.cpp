/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "cmndline.h"

	
 __attribute__((weak)) bool checkseperator(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckseperator, _state);}

 __attribute__((weak)) bool parsecmndline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kparsecmndline, _state);}

 static bool argsearch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kargsearch, _state);}

 static bool cmndlineexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcmndlineexit, _state);}

 static bool foundarg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfoundarg, _state);}

 static bool foundsep(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfoundsep, _state);}

 static bool nonseperator(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knonseperator, _state);}

 static bool seperator(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseperator, _state);}

 static bool sepsearch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksepsearch, _state);}

 static bool truncatearg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktruncatearg, _state);}

	
	#include "cmndline_default_seg_lifted.cpp"
#include "cmndline_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kargsearch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckseperator: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcmndlineexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfoundarg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfoundsep: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knonseperator: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kparsecmndline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseperator: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksepsearch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktruncatearg: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_cmndline()
          {
              {dw tmp999=0;MYCOPY(psp)}
    {db tmp999[130]={0};MYCOPY(dummy63bae953_data_2_27)}
    {dw tmp999=0;MYCOPY(argc)}
    {dw tmp999[32]={0};MYCOPY(argv)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_cmndline(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "keyboard.h"

	
 __attribute__((weak)) bool clearkeybuffer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearkeybuffer, _state);}

 __attribute__((weak)) bool installkbd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallkbd, _state);}

 __attribute__((weak)) bool kbdintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkbdintr, _state);}

 __attribute__((weak)) bool restorekbd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krestorekbd, _state);}

 static bool fixminuskey1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixminuskey1, _state);}

 static bool fixminuskey2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixminuskey2, _state);}

 static bool fixpluskey1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixpluskey1, _state);}

 static bool fixpluskey2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixpluskey2, _state);}

 static bool fixshiftkey1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixshiftkey1, _state);}

 static bool fixshiftkey2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixshiftkey2, _state);}

 static bool keysfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkeysfixed, _state);}

 static bool rettodos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krettodos, _state);}

	
	#include "keyboard_default_seg_lifted.cpp"
#include "keyboard_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_aborttodos
        case m2c::kaborttodos: 	if (!aborttodos(0, _state)) return false; break;
#endif
        case m2c::kclearkeybuffer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixminuskey1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixminuskey2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixpluskey1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixpluskey2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixshiftkey1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixshiftkey2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallkbd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkbdintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkeysfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::krestorekbd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krettodos: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_keyboard()
          {
              {db tmp999[128]={0};memcpy(&key,&tmp999,sizeof tmp999);}
    dosvctrseg = 0;
    dosvctroff = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_keyboard(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

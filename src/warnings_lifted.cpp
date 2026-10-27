/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "warnings.h"

	
 static bool contfailures(m2c::_offsets _i, struct m2c::_STATE* _state){return checkfailures(_i ? _i : m2c::kcontfailures, _state);}

 static bool exitfailures(m2c::_offsets _i, struct m2c::_STATE* _state){return checkfailures(_i ? _i : m2c::kexitfailures, _state);}

 static bool skipsound(m2c::_offsets _i, struct m2c::_STATE* _state){return checkfailures(_i ? _i : m2c::kskipsound, _state);}

	
	#include "warnings_default_seg_lifted.cpp"
#include "warnings_modcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_attentionsound
        case m2c::kattentionsound: 	if (!attentionsound(0, _state)) return false; break;
#endif
        case m2c::kcheckfailures: 	if (!checkfailures(0, _state)) return false; break;
        case m2c::kcontfailures: 	if (!checkfailures(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!checkfailures(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!checkfailures(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!checkfailures(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!checkfailures(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!checkfailures(__disp, _state)) return false; break;
        case m2c::kexitfailures: 	if (!checkfailures(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_killattnsound
        case m2c::kkillattnsound: 	if (!killattnsound(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kskipsound: 	if (!checkfailures(__disp, _state)) return false; break;
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
          void Initializer_warnings()
          {
              {db tmp999=0;MYCOPY(attention)}
    {dw tmp999=0;MYCOPY(prevredwarn2)}
    {dw tmp999=0;MYCOPY(prevambwarn2)}
    {dw tmp999=flash_delay;MYCOPY(attntimer)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_warnings(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "celldata.h"

	
	
	#include "celldata_default_seg_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
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
          void Initializer_celldata()
          {
              {db tmp999=0;MYCOPY(crtring1)}
    {db tmp999=24;MYCOPY(dummy6ad5fe5c_data_2_22)}
    {db tmp999=36;MYCOPY(dummy6ad5fe5c_data_3_23)}
    {db tmp999=36;MYCOPY(dummy6ad5fe5c_data_4_24)}
    {db tmp999=24;MYCOPY(dummy6ad5fe5c_data_5_25)}
    {db tmp999=16;MYCOPY(crtcursor1)}
    {db tmp999=16;MYCOPY(dummy6ad5fe5c_data_9_29)}
    {db tmp999=214;MYCOPY(dummy6ad5fe5c_data_b_31)}
    {db tmp999=16;MYCOPY(dummy6ad5fe5c_data_d_33)}
    {db tmp999=16;MYCOPY(dummy6ad5fe5c_data_e_34)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_celldata(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

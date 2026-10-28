/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "charsets.h"

	
	
	#include "charsets_default_seg_lifted.cpp"

	
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
          void Initializer_charsets()
          {
              {db tmp999[32]={0,0,0,0,0,68,68,68,0,68,170,170,0,0,0,68,238,68,238,68,68,238,68,238,68,170,34,68,136,170,68,170};memcpy(&dummy6128b95f_data_0_57,&tmp999,sizeof tmp999);}
    {db tmp999[32]={68,170,102,34,68,0,0,0,34,68,68,68,34,68,34,34,34,68,0,170,68,170,0,0,68,238,68,0,0,0,0,34};memcpy(&dummy6128b95f_data_20_89,&tmp999,sizeof tmp999);}
    {db tmp999[32]={68,0,0,238,0,0,0,0,0,0,68,34,34,68,136,136,238,170,170,170,238,68,204,68,68,238,238,34,238,136,238,238};memcpy(&dummy6128b95f_data_40_121,&tmp999,sizeof tmp999);}
    {db tmp999[32]={34,238,34,238,136,136,170,238,34,238,136,204,34,204,238,136,238,170,238,238,34,34,34,34,238,170,238,170,238,238,170,238};memcpy(&dummy6128b95f_data_60_153,&tmp999,sizeof tmp999);}
    {db tmp999[32]={34,238,0,68,0,68,0,0,34,0,34,68,34,68,136,68,34,0,238,0,238,0,136,68,34,68,136,238,34,68,0,68};memcpy(&dummy6128b95f_data_80_185,&tmp999,sizeof tmp999);}
    {db tmp999[32]={238,170,170,136,238,238,170,238,170,170,204,170,204,170,204,238,136,136,136,238,204,170,170,170,204,238,136,204,136,238,238,136};memcpy(&dummy6128b95f_data_a0_217,&tmp999,sizeof tmp999);}
    {db tmp999[32]={204,136,136,238,136,170,170,238,170,170,238,170,170,238,68,68,68,238,238,68,68,68,204,170,170,204,170,170,136,136,136,136};memcpy(&dummy6128b95f_data_c0_249,&tmp999,sizeof tmp999);}
    {db tmp999[32]={238,170,238,238,170,170,238,170,170,170,170,238,170,170,170,238,238,170,238,136,136,238,170,170,170,204,238,170,204,170,170,238};memcpy(&dummy6128b95f_data_e0_281,&tmp999,sizeof tmp999);}
    {db tmp999[32]={136,238,34,238,238,68,68,68,68,170,170,170,170,238,170,170,170,170,68,170,170,238,238,170,170,170,68,170,170,170,170,238};memcpy(&dummy6128b95f_data_100_313,&tmp999,sizeof tmp999);}
    {db tmp999[32]={68,68,238,34,68,136,238,238,136,136,136,238,136,136,68,34,34,238,34,34,34,238,68,170,0,0,0,0,0,0,0,238};memcpy(&dummy6128b95f_data_120_345,&tmp999,sizeof tmp999);}
    {db tmp999[32]={102,136,204,136,238,0,102,170,170,238,136,204,170,170,204,0,102,136,136,102,34,102,170,170,102,0,68,170,204,102,0,102};memcpy(&dummy6128b95f_data_140_377,&tmp999,sizeof tmp999);}
    {db tmp999[32]={136,204,136,0,68,170,102,204,136,204,170,170,170,68,0,68,68,68,34,0,34,34,68,136,136,170,204,170,68,68,68,68};memcpy(&dummy6128b95f_data_160_409,&tmp999,sizeof tmp999);}
    {db tmp999[32]={34,0,170,238,170,170,0,68,170,170,170,0,68,170,170,68,0,204,170,204,136,0,102,170,102,34,0,102,136,136,136,0};memcpy(&dummy6128b95f_data_180_441,&tmp999,sizeof tmp999);}
    {db tmp999[32]={102,136,102,238,136,204,136,136,102,0,170,170,170,102,0,170,170,170,68,0,170,170,238,170,0,0,170,68,170,0,170,170};memcpy(&dummy6128b95f_data_1a0_473,&tmp999,sizeof tmp999);}
    {db tmp999[32]={102,204,0,238,34,68,238,34,68,204,68,34,68,68,0,68,68,136,68,102,68,136,68,170,68,0,0,238,238,238,238,238};memcpy(&dummy6128b95f_data_1c0_505,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_charsets(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

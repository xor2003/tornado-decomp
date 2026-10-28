/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "objflags.h"

	
	
	#include "objflags_default_seg_lifted.cpp"

	
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
          void Initializer_objflags()
          {
              {db tmp999[32]={dam_invalid,dam_hard4+dam_debris1+dam_explo2,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard3+dam_debris3+dam_explo4,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard2+dam_debris1+dam_explo2,dam_hard3+dam_debris2+dam_explo3,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1};memcpy(&dummybd8f85b4_data_0_1182,&tmp999,sizeof tmp999);}
    {db tmp999[32]={dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard2+dam_debris2+dam_explo3,dam_hard1+dam_debris2+dam_explo4,dam_hard2+dam_debris3+dam_explo4,dam_hard3+dam_debris1+dam_explo2,dam_invalid,dam_invalid,dam_invalid,dam_hard2+dam_debris1+dam_explo1,dam_hard2+dam_debris1+dam_explo1,dam_hard2+dam_debris1+dam_explo1,dam_hard2+dam_debris1+dam_explo1,dam_hard2+dam_debris1+dam_explo1,dam_hard4+dam_debris2+dam_explo4,dam_hard1+dam_debris2+dam_explo3,dam_hard1+dam_debris2+dam_explo3,dam_hard3+dam_debris2+dam_explo3,dam_hard3+dam_debris2+dam_explo3,dam_hard2+dam_debris3+dam_explo3,dam_hard2+dam_debris3+dam_explo3,dam_hard2+dam_debris2+dam_explo3,dam_hard3+dam_debris3+dam_explo4,dam_hard3+dam_debris3+dam_explo4,dam_hard3+dam_debris3+dam_explo4};memcpy(&dummybd8f85b4_data_20_1214,&tmp999,sizeof tmp999);}
    {db tmp999[32]={dam_hard3+dam_debris1+dam_explo2,dam_hard1+dam_debris2+dam_explo4,dam_hard3+dam_debris1+dam_explo1,dam_hard3+dam_debris1+dam_explo1,dam_hard3+dam_debris5+dam_explo1,dam_hard3+dam_debris4+dam_explo1,dam_hard3+dam_debris5+dam_explo1,dam_hard3+dam_debris4+dam_explo1,dam_hard3+dam_debris7+dam_explo1,dam_hard3+dam_debris6+dam_explo1,dam_hard3+dam_debris7+dam_explo1,dam_hard3+dam_debris6+dam_explo1,dam_hard2+dam_debris3+dam_explo4,dam_hard3+dam_debris2+dam_explo4,dam_hard2+dam_debris2+dam_explo3,dam_hard2+dam_debris2+dam_explo3,dam_hard2+dam_debris3+dam_explo4,dam_hard2+dam_debris1+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard3+dam_debris8+dam_explo1,dam_hard1+dam_debris2+dam_explo3,dam_hard3+dam_debris2+dam_explo4,dam_hard1+dam_debris2+dam_explo3,dam_hard1+dam_debris2+dam_explo3,dam_hard1+dam_debris2+dam_explo3,dam_hard1+dam_debris2+dam_explo3};memcpy(&dummybd8f85b4_data_40_1246,&tmp999,sizeof tmp999);}
    {db tmp999[32]={dam_hard3+dam_debris1+dam_explo1,dam_hard3+dam_debris1+dam_explo1,dam_hard3+dam_debris1+dam_explo1,dam_hard3+dam_debris1+dam_explo1,dam_invalid,dam_invalid,dam_invalid,dam_invalid,dam_invalid,dam_invalid,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard2+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1,dam_hard1+dam_debris2+dam_explo1};memcpy(&dummybd8f85b4_data_60_1278,&tmp999,sizeof tmp999);}
    dummybd8f85b4_data_80_1317 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_81_1318 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_82_1319 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_83_1320 = dam_invalid;
    dummybd8f85b4_data_84_1321 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_85_1322 = dam_invalid;
    dummybd8f85b4_data_86_1323 = dam_hard2+dam_debris2+dam_explo1;
    dummybd8f85b4_data_87_1324 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_88_1325 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_89_1326 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_8a_1327 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_8b_1328 = dam_hard1+dam_debris2+dam_explo1;
    dummybd8f85b4_data_8c_1329 = dam_invalid;
    dummybd8f85b4_data_8d_1330 = dam_invalid;
    dummybd8f85b4_data_8e_1331 = dam_invalid;
    dummybd8f85b4_data_8f_1332 = dam_invalid;
    dummybd8f85b4_data_90_1333 = dam_invalid;
    dummybd8f85b4_data_91_1334 = dam_invalid;
    dummybd8f85b4_data_92_1335 = dam_invalid;
    dummybd8f85b4_data_93_1336 = dam_invalid;
    dummybd8f85b4_data_94_1337 = dam_invalid;
    dummybd8f85b4_data_95_1338 = dam_invalid;
    dummybd8f85b4_data_96_1339 = dam_invalid;
    dummybd8f85b4_data_97_1340 = dam_invalid;
    dummybd8f85b4_data_98_1341 = dam_invalid;
    dummybd8f85b4_data_99_1342 = dam_invalid;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_objflags(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

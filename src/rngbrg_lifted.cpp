/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "rngbrg.h"

	
 __attribute__((weak)) bool calcangdiff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcangdiff, _state);}

 __attribute__((weak)) bool calceta(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalceta, _state);}

 __attribute__((weak)) bool calcnmiles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnmiles, _state);}

 __attribute__((weak)) bool calcrngbrg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcrngbrg, _state);}

 __attribute__((weak)) bool calcrngbrgvp_af(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcrngbrgvp_af, _state);}

 __attribute__((weak)) bool calcrngbrgvp_vp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcrngbrgvp_vp, _state);}

 __attribute__((weak)) bool calcrngbrgvp_wp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcrngbrgvp_wp, _state);}

 __attribute__((weak)) bool calcrngbrgwp_wp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcrngbrgwp_wp, _state);}

 __attribute__((weak)) bool calcslantrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcslantrange, _state);}

 static bool contbrg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontbrg, _state);}

 static bool exitrngbrg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitrngbrg, _state);}

 static bool longrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klongrange, _state);}

 static bool scaleloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscaleloop, _state);}

 static bool scalevals(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscalevals, _state);}

 static bool setmaxrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetmaxrange, _state);}

 static bool setmaxtime(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetmaxtime, _state);}

 static bool shortrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortrange, _state);}

 static bool sortok1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortok1, _state);}

 static bool sortok2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortok2, _state);}

 static bool swapvals(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswapvals, _state);}

	
	#include "rngbrg_default_seg_lifted.cpp"
#include "rngbrg_gencode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_arctan
        case m2c::karctan: 	if (!arctan(0, _state)) return false; break;
#endif
        case m2c::kcalcangdiff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalceta: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcnmiles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcrngbrg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcrngbrgvp_af: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcrngbrgvp_vp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcrngbrgvp_wp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcrngbrgwp_wp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcslantrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontbrg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitrngbrg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klongrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kscaleloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscalevals: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetmaxrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetmaxtime: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortok1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortok2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_sqrt32
        case m2c::ksqrt32: 	if (!sqrt32(0, _state)) return false; break;
#endif
        case m2c::kswapvals: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_rngbrg()
          {
              {dw tmp999[2]={0*128,0};memcpy(&octtable,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={128*128,65535};memcpy(&dummycd474ec0_data_4_1813,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={256*128,65535};memcpy(&dummycd474ec0_data_8_1814,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={128*128,0};memcpy(&dummycd474ec0_data_c_1815,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={0*128,65535};memcpy(&dummycd474ec0_data_10_1816,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={384*128,0};memcpy(&dummycd474ec0_data_14_1817,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={256*128,0};memcpy(&dummycd474ec0_data_18_1818,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={384*128,65535};memcpy(&dummycd474ec0_data_1c_1819,&tmp999,sizeof tmp999);}
    flatdx = 0;
    flatdy = 0;
    slantrng = 0;
    slantdx = 0;
    slantdy = 0;
    slantdz = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_rngbrg(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

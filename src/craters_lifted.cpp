/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "craters.h"

	
 __attribute__((weak)) bool makecrater(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmakecrater, _state);}

 __attribute__((weak)) bool scancraters(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscancraters, _state);}

 static bool craterloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcraterloop, _state);}

 static bool donecraters(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdonecraters, _state);}

	
	#include "craters_default_seg_lifted.cpp"
#include "craters_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcraterloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdonecraters: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawmobile
        case m2c::kdrawmobile: 	if (!drawmobile(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmakecrater: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscancraters: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_craters()
          {
              {dw tmp999=offset(craterdata,craterbuffer);MYCOPY(nextcraterptr)}
    {db tmp999=0;MYCOPY(craternum)}
    {db tmp999=mob_crater1m;MYCOPY(dummydd2f1063_data_3_408)}
    {db tmp999=mob_crater2m;MYCOPY(dummydd2f1063_data_4_409)}
    {db tmp999=mob_heave;MYCOPY(dummydd2f1063_data_5_410)}
    {db tmp999=mob_cancrat;MYCOPY(dummydd2f1063_data_6_411)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(tmp_mob)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(tmp_view)}
    {crater tmp999[128]={{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0},{crater_null,0,0,0,0,0,0,0}};MYCOPY(__m2c_structrow_dd2f1063_421)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_craters(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "smokedrw.h"

	
 __attribute__((weak)) bool drawsmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsmoke, _state);}

 __attribute__((weak)) bool drawsmokeobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsmokeobject, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 static bool aboveclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveclouds, _state);}

 static bool belowclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowclouds, _state);}

 static bool calcpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcpos, _state);}

 static bool exitsmokeobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsmokeobject, _state);}

 static bool failsmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailsmoke, _state);}

 static bool failsmokelink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailsmokelink, _state);}

 static bool inclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinclouds, _state);}

 static bool sorted(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorted, _state);}

 static bool zrelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzrelok, _state);}

	
	#include "smokedrw_default_seg_lifted.cpp"
#include "smokedrw_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kaboveclouds: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowclouds: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calccirclecrt
        case m2c::kcalccirclecrt: 	if (!calccirclecrt(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calceyeposition
        case m2c::kcalceyeposition: 	if (!calceyeposition(0, _state)) return false; break;
#endif
        case m2c::kcalcpos: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_circlesmoke
        case m2c::kcirclesmoke: 	if (!circlesmoke(0, _state)) return false; break;
#endif
        case m2c::kdrawsmoke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawsmokeobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsmokeobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailsmoke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailsmokelink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinclouds: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_objectdistsort1
        case m2c::kobjectdistsort1: 	if (!objectdistsort1(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_objectdistsort2
        case m2c::kobjectdistsort2: 	if (!objectdistsort2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_objectdistsort3
        case m2c::kobjectdistsort3: 	if (!objectdistsort3(0, _state)) return false; break;
#endif
        case m2c::ksorted: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kviscode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzrelok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_smokedrw()
          {
              dummy45e8f1d9_data_0_643 = 49152;
    sectoradjust = 0;
    dummy45e8f1d9_data_4_645 = 16384;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_smokedrw(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

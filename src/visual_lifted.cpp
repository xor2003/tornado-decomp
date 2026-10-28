/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "visual.h"

	
 __attribute__((weak)) bool mobilevisual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmobilevisual, _state);}

 __attribute__((weak)) bool visual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvisual, _state);}

 __attribute__((weak)) bool aboveclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveclouds, _state);}

 __attribute__((weak)) bool belowclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowclouds, _state);}

 __attribute__((weak)) bool inclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinclouds, _state);}

	
	#include "visual_default_seg_lifted.cpp"
#include "visual_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kaboveclouds: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowclouds: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcafactors
        case m2c::kcalcafactors: 	if (!calcafactors(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcangles
        case m2c::kcalcangles: 	if (!calcangles(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcobjgrid
        case m2c::kcalcobjgrid: 	if (!calcobjgrid(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcsctrgrid
        case m2c::kcalcsctrgrid: 	if (!calcsctrgrid(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcsctroffsets
        case m2c::kcalcsctroffsets: 	if (!calcsctroffsets(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawclouds1
        case m2c::kdrawclouds1: 	if (!drawclouds1(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawclouds2
        case m2c::kdrawclouds2: 	if (!drawclouds2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawfarobjects
        case m2c::kdrawfarobjects: 	if (!drawfarobjects(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawhorizon
        case m2c::kdrawhorizon: 	if (!drawhorizon(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawmobile
        case m2c::kdrawmobile: 	if (!drawmobile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawobjects1
        case m2c::kdrawobjects1: 	if (!drawobjects1(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawobjects2
        case m2c::kdrawobjects2: 	if (!drawobjects2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawobjects3
        case m2c::kdrawobjects3: 	if (!drawobjects3(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawstars
        case m2c::kdrawstars: 	if (!drawstars(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinclouds: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_initclouds
        case m2c::kinitclouds: 	if (!initclouds(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_initvisual
        case m2c::kinitvisual: 	if (!initvisual(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmobilevisual: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_rotateview
        case m2c::krotateview: 	if (!rotateview(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_scancraters
        case m2c::kscancraters: 	if (!scancraters(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_scansectors
        case m2c::kscansectors: 	if (!scansectors(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_scansmoke
        case m2c::kscansmoke: 	if (!scansmoke(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_uservisual
        case m2c::kuservisual: 	if (!uservisual(0, _state)) return false; break;
#endif
        case m2c::kvisual: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_visual()
          {
              sortclouds = m2c::kglobal_belowclouds;
    dummy67ecaf93_data_2_53 = m2c::kglobal_inclouds;
    dummy67ecaf93_data_4_54 = m2c::kglobal_aboveclouds;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_visual(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

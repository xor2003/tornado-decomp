/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "uservis.h"

	
 __attribute__((weak)) bool switchonlights(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchonlights, _state);}

 __attribute__((weak)) bool uservisual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kuservisual, _state);}

 static bool contmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontmob, _state);}

 static bool exitswitchon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitswitchon, _state);}

 static bool mobloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmobloop, _state);}

 static bool nextmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextmob, _state);}

 static bool scanxloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanxloop, _state);}

 static bool scanyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanyloop, _state);}

 static bool skipsector(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsector, _state);}

 static bool switchonloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchonloop, _state);}

	
	#include "uservis_default_seg_lifted.cpp"
#include "uservis_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcontmob: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawmobile
        case m2c::kdrawmobile: 	if (!drawmobile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_drawweapons
        case m2c::kdrawweapons: 	if (!drawweapons(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitswitchon: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_locatemobiles
        case m2c::klocatemobiles: 	if (!locatemobiles(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmobloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextmob: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_rxopponentdata
        case m2c::krxopponentdata: 	if (!rxopponentdata(0, _state)) return false; break;
#endif
        case m2c::kscanxloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsector: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchonlights: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchonloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kuservisual: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_uservis()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_uservis(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

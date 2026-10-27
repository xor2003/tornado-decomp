/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "initgame.h"

	
 static bool createdronelp(m2c::_offsets _i, struct m2c::_STATE* _state){return initgame(_i ? _i : m2c::kcreatedronelp, _state);}

 static bool initafloop(m2c::_offsets _i, struct m2c::_STATE* _state){return initgame(_i ? _i : m2c::kinitafloop, _state);}

 static bool initgameexit(m2c::_offsets _i, struct m2c::_STATE* _state){return initgame(_i ? _i : m2c::kinitgameexit, _state);}

 static bool initnextaf(m2c::_offsets _i, struct m2c::_STATE* _state){return initgame(_i ? _i : m2c::kinitnextaf, _state);}

 static bool setwaytotal(m2c::_offsets _i, struct m2c::_STATE* _state){return initgame(_i ? _i : m2c::ksetwaytotal, _state);}

 static bool skipclock(m2c::_offsets _i, struct m2c::_STATE* _state){return initgame(_i ? _i : m2c::kskipclock, _state);}

	
	#include "initgame_default_seg_lifted.cpp"
#include "initgame_code_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcreatedronelp: 	if (!initgame(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_createmobile
        case m2c::kcreatemobile: 	if (!createmobile(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kinitafloop: 	if (!initgame(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_initconvoys
        case m2c::kinitconvoys: 	if (!initconvoys(0, _state)) return false; break;
#endif
        case m2c::kinitgame: 	if (!initgame(0, _state)) return false; break;
        case m2c::kinitgameexit: 	if (!initgame(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_inithelicops
        case m2c::kinithelicops: 	if (!inithelicops(0, _state)) return false; break;
#endif
        case m2c::kinitnextaf: 	if (!initgame(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_initplanes
        case m2c::kinitplanes: 	if (!initplanes(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_initweapons
        case m2c::kinitweapons: 	if (!initweapons(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::ksetwaytotal: 	if (!initgame(__disp, _state)) return false; break;
        case m2c::kskipclock: 	if (!initgame(__disp, _state)) return false; break;
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
          void Initializer_initgame()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_initgame(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

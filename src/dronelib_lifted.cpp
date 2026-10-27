/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "dronelib.h"

	
 __attribute__((weak)) bool getdronealive(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetdronealive, _state);}

 __attribute__((weak)) bool getdronechaff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetdronechaff, _state);}

 __attribute__((weak)) bool getdroneflare(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetdroneflare, _state);}

 __attribute__((weak)) bool getdroneillum(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetdroneillum, _state);}

 __attribute__((weak)) bool getdronespeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetdronespeed, _state);}

 __attribute__((weak)) bool setdronewpnlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdronewpnlock, _state);}

 __attribute__((weak)) bool wpnkilldrone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpnkilldrone, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool clrdronealive(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclrdronealive, _state);}

 static bool clrdronechaff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclrdronechaff, _state);}

 static bool clrdroneflare(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclrdroneflare, _state);}

 static bool clrdroneillum(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclrdroneillum, _state);}

 static bool contdronekill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontdronekill, _state);}

 static bool contplayerkill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontplayerkill, _state);}

 static bool exitdronespeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitdronespeed, _state);}

 static bool exitkill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitkill, _state);}

 static bool exitwpnlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitwpnlock, _state);}

 static bool loopstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloopstart, _state);}

 static bool setdronealive(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdronealive, _state);}

 static bool setdronechaff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdronechaff, _state);}

 static bool setdroneflare(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdroneflare, _state);}

 static bool setdroneillum(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdroneillum, _state);}

 static bool skipaclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipaclock, _state);}

 static bool skipkillmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkillmob, _state);}

 static bool skipkilltrain(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkilltrain, _state);}

 static bool skipkilltruck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkilltruck, _state);}

 static bool skipplayerkill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipplayerkill, _state);}

 static bool stopconvoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstopconvoy, _state);}

	
	#include "dronelib_default_seg_lifted.cpp"
#include "dronelib_dronecode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
        case m2c::kcalcrngbrgvp_vp: 	if (!calcrngbrgvp_vp(0, _state)) return false; break;
#endif
        case m2c::kclrdronealive: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclrdronechaff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclrdroneflare: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclrdroneillum: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontdronekill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontplayerkill: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_deletemobile
        case m2c::kdeletemobile: 	if (!deletemobile(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel18: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel19: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel21: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel22: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel23: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel24: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel25: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel26: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kexitdronespeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitkill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitwpnlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetdronealive: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetdronechaff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetdroneflare: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetdroneillum: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetdronespeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloopstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_maxdamage
        case m2c::kmaxdamage: 	if (!maxdamage(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_meddamage
        case m2c::kmeddamage: 	if (!meddamage(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
        case m2c::ksetdronealive: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdronechaff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdroneflare: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdroneillum: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdronewpnlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipaclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkillmob: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkilltrain: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkilltruck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipplayerkill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstopconvoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpnkilldrone: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_dronelib()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_dronelib(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

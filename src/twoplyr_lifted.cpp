/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "twoplyr.h"

	
 __attribute__((weak)) bool inittwoplayer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinittwoplayer, _state);}

 __attribute__((weak)) bool oppfirecannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::koppfirecannon, _state);}

 __attribute__((weak)) bool oppfiremissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::koppfiremissile, _state);}

 __attribute__((weak)) bool oppreldecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::koppreldecoy, _state);}

 __attribute__((weak)) bool rxopponentdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxopponentdata, _state);}

 __attribute__((weak)) bool txtornadodata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktxtornadodata, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool rxinvalid(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxinvalid, _state);}

 static bool rxloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxloop1, _state);}

 static bool rxloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxloop2, _state);}

 static bool rxoppexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxoppexit, _state);}

 static bool rxtimeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxtimeout, _state);}

	
	#include "twoplyr_default_seg_lifted.cpp"
#include "twoplyr_twocode_lifted.cpp"
#include "twoplyr_weaponcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_createmobile
        case m2c::kcreatemobile: 	if (!createmobile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_deletemobile
        case m2c::kdeletemobile: 	if (!deletemobile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_destroytornado
        case m2c::kdestroytornado: 	if (!destroytornado(0, _state)) return false; break;
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
        case m2c::kedummylabel4: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group2(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_firecannon
        case m2c::kfirecannon: 	if (!firecannon(0, _state)) return false; break;
#endif
        case m2c::kinittwoplayer: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_launchmissile
        case m2c::klaunchmissile: 	if (!launchmissile(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::koppfirecannon: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::koppfiremissile: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::koppreldecoy: 	if (!_group2(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_readdata
        case m2c::kreaddata: 	if (!readdata(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_releasedecoy
        case m2c::kreleasedecoy: 	if (!releasedecoy(0, _state)) return false; break;
#endif
        case m2c::krxinvalid: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krxloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krxloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krxoppexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krxopponentdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krxtimeout: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_sendpacket
        case m2c::ksendpacket: 	if (!sendpacket(0, _state)) return false; break;
#endif
        case m2c::ktxtornadodata: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_twoplyr()
          {
              opp_mobile = mobile{25,6,0,0,65535};
    opp_view = viewpoint{100,100,0,0,5000,0,0,0};
    opp_drone = drone_data{0,2,0};
    oppvtas = 0;
    oppflags1 = 0;
    oppflags2 = 0;
    oppflags3 = 0;
    tx = comms{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    rx = comms{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    rxflag = 0;
    txgameend = 0;
    rxgameend = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_twoplyr(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

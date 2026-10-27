/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "sam.h"

	
 static bool __m2c_macrolocal_10_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_10_skip, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool __m2c_macrolocal_5_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_5_skip, _state);}

 static bool __m2c_macrolocal_6_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_6_skip, _state);}

 static bool __m2c_macrolocal_7_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_7_skip, _state);}

 static bool __m2c_macrolocal_9_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::k__m2c_macrolocal_9_skip, _state);}

 static bool samexit(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::ksamexit, _state);}

 static bool samlocated(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::ksamlocated, _state);}

 static bool samscanloop(m2c::_offsets _i, struct m2c::_STATE* _state){return updatesam(_i ? _i : m2c::ksamscanloop, _state);}

	
	#include "sam_default_seg_lifted.cpp"
#include "sam_weaponcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_10_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_7_skip: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_9_skip: 	if (!updatesam(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcintercept
        case m2c::kcalcintercept: 	if (!calcintercept(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
        case m2c::kcalcrngbrgvp_vp: 	if (!calcrngbrgvp_vp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcslantrange
        case m2c::kcalcslantrange: 	if (!calcslantrange(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!updatesam(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_launchmissile
        case m2c::klaunchmissile: 	if (!launchmissile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_launchsound
        case m2c::klaunchsound: 	if (!launchsound(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_makesmokeeffect
        case m2c::kmakesmokeeffect: 	if (!makesmokeeffect(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
        case m2c::ksamexit: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::ksamlocated: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::ksamscanloop: 	if (!updatesam(__disp, _state)) return false; break;
        case m2c::kupdatesam: 	if (!updatesam(0, _state)) return false; break;
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
          void Initializer_sam()
          {
              {dw tmp999=15*100;MYCOPY(samtimer)}
    {viewpoint tmp999={0,0,0,0,8,0,0,0};MYCOPY(sam_view)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(aim_view)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_sam(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

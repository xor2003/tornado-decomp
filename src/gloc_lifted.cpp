/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "gloc.h"

	
 static bool __m2c_macrolocal_10_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::k__m2c_macrolocal_10_skip, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool blkok(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kblkok, _state);}

 static bool contblackout(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kcontblackout, _state);}

 static bool contcurtains(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kcontcurtains, _state);}

 static bool contgloc(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kcontgloc, _state);}

 static bool conthypoxia(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kconthypoxia, _state);}

 static bool contoxyfail(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kcontoxyfail, _state);}

 static bool contredout(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kcontredout, _state);}

 static bool exitgloc(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kexitgloc, _state);}

 static bool redok(m2c::_offsets _i, struct m2c::_STATE* _state){return updategloc(_i ? _i : m2c::kredok, _state);}

	
	#include "gloc_default_seg_lifted.cpp"
#include "gloc_gencode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_10_skip: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kblkok: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kcontblackout: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kcontcurtains: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kcontgloc: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kconthypoxia: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kcontoxyfail: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kcontredout: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kexitgloc: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kredok: 	if (!updategloc(__disp, _state)) return false; break;
        case m2c::kupdategloc: 	if (!updategloc(0, _state)) return false; break;
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
          void Initializer_gloc()
          {
              blktimer = 0;
    redtimer = 0;
    gloctimer = 0;
    oxytimer = 0;
    {db tmp999[2]={0};memcpy(&curtains,&tmp999,sizeof tmp999);}
    curtainstimer = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_gloc(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "loadpic.h"

	
 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool fadeinok(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::kfadeinok, _state);}

 static bool fadeoutok(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::kfadeoutok, _state);}

 static bool loaderror(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::kloaderror, _state);}

 static bool sortquit(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::ksortquit, _state);}

 static bool waitloop(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::kwaitloop, _state);}

 static bool waitnomore(m2c::_offsets _i, struct m2c::_STATE* _state){return loadpicture(_i ? _i : m2c::kwaitnomore, _state);}

	
	#include "loadpic_default_seg_lifted.cpp"
#include "loadpic_piccode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!loadpicture(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_cls
        case m2c::kcls: 	if (!cls(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_download
        case m2c::kdownload: 	if (!download(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!loadpicture(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!loadpicture(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!loadpicture(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fadein
        case m2c::kfadein: 	if (!fadein(0, _state)) return false; break;
#endif
        case m2c::kfadeinok: 	if (!loadpicture(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fadeout
        case m2c::kfadeout: 	if (!fadeout(0, _state)) return false; break;
#endif
        case m2c::kfadeoutok: 	if (!loadpicture(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_instantfadein
        case m2c::kinstantfadein: 	if (!instantfadein(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_instantfadeout
        case m2c::kinstantfadeout: 	if (!instantfadeout(0, _state)) return false; break;
#endif
        case m2c::kloaderror: 	if (!loadpicture(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_loadfile
        case m2c::kloadfile: 	if (!loadfile(0, _state)) return false; break;
#endif
        case m2c::kloadpicture: 	if (!loadpicture(0, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_qfadein
        case m2c::kqfadein: 	if (!qfadein(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_qfadeout
        case m2c::kqfadeout: 	if (!qfadeout(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_readmouse
        case m2c::kreadmouse: 	if (!readmouse(0, _state)) return false; break;
#endif
        case m2c::ksortquit: 	if (!loadpicture(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_swappalettes
        case m2c::kswappalettes: 	if (!swappalettes(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_unpackdeltapic
        case m2c::kunpackdeltapic: 	if (!unpackdeltapic(0, _state)) return false; break;
#endif
        case m2c::kwaitloop: 	if (!loadpicture(__disp, _state)) return false; break;
        case m2c::kwaitnomore: 	if (!loadpicture(__disp, _state)) return false; break;
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
          void Initializer_loadpic()
          {
              fadeflag = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_loadpic(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

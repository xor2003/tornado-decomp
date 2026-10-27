/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "main.h"

	
 __attribute__((weak)) bool aborttodos(m2c::_offsets _i, struct m2c::_STATE* _state){return code_0_proc(_i ? _i : m2c::kaborttodos, _state);}

 static bool returntodos(m2c::_offsets _i, struct m2c::_STATE* _state){return code_0_proc(_i ? _i : m2c::kreturntodos, _state);}

	
             bool asmmain(m2c::_offsets, struct m2c::_STATE* _state){return code_0_proc(m2c::kmain, _state);}
            namespace m2c{ m2cf* _ENTRY_POINT_ = &asmmain;}
        
	#include "main_default_seg_lifted.cpp"
#include "main_code_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kaborttodos: 	if (!code_0_proc(__disp, _state)) return false; break;
        case m2c::kcode_0_proc: 	if (!code_0_proc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_control
        case m2c::kcontrol: 	if (!control_proc(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!code_0_proc(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_installcriterr
        case m2c::kinstallcriterr: 	if (!installcriterr(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_installkbd
        case m2c::kinstallkbd: 	if (!installkbd(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_installmouse
        case m2c::kinstallmouse: 	if (!installmouse(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_installoverflow
        case m2c::kinstalloverflow: 	if (!installoverflow(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_installtimer
        case m2c::kinstalltimer: 	if (!installtimer(0, _state)) return false; break;
#endif
        case m2c::kmain: 	if (!code_0_proc(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_normalisemusic
        case m2c::knormalisemusic: 	if (!normalisemusic(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_normalisesound
        case m2c::knormalisesound: 	if (!normalisesound(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_parsecmndline
        case m2c::kparsecmndline: 	if (!parsecmndline(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_restorecriterr
        case m2c::krestorecriterr: 	if (!restorecriterr(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_restorekbd
        case m2c::krestorekbd: 	if (!restorekbd(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_restoremouse
        case m2c::krestoremouse: 	if (!restoremouse(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_restoreoverflow
        case m2c::krestoreoverflow: 	if (!restoreoverflow(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_restoretimer
        case m2c::krestoretimer: 	if (!restoretimer(0, _state)) return false; break;
#endif
        case m2c::kreturntodos: 	if (!code_0_proc(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_settimedate
        case m2c::ksettimedate: 	if (!settimedate(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_stopcomms
        case m2c::kstopcomms: 	if (!stopcomms(0, _state)) return false; break;
#endif
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
          void Initializer_main()
          {
              {db tmp999=0;MYCOPY(videomode)}
    {db tmp999=0;MYCOPY(returncode)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_main(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

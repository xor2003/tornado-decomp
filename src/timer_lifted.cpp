/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "timer.h"

	
 __attribute__((weak)) bool installtimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstalltimer, _state);}

 __attribute__((weak)) bool installuser100(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstalluser100, _state);}

 __attribute__((weak)) bool installuser20(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstalluser20, _state);}

 __attribute__((weak)) bool restoretimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krestoretimer, _state);}

 __attribute__((weak)) bool restoreuser100(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krestoreuser100, _state);}

 __attribute__((weak)) bool restoreuser20(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krestoreuser20, _state);}

 __attribute__((weak)) bool settimedate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksettimedate, _state);}

 __attribute__((weak)) bool timerintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktimerintr, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool exittimedate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittimedate, _state);}

 static bool nouser100(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knouser100, _state);}

 static bool nouser20(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knouser20, _state);}

 static bool retviadosintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kretviadosintr, _state);}

	
	#include "timer_default_seg_lifted.cpp"
#include "timer_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittimedate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstalltimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstalluser100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstalluser20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knouser100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knouser20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krestoretimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krestoreuser100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krestoreuser20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kretviadosintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksettimedate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktimerintr: 	if (!_group1(__disp, _state)) return false; break;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to call to 0x%x cs=%04x ip=%04x ss=%04x sp=%04x. See " __FILE__ " line %d\n", __disp, _state->cs, _state->eip, _state->ss, _state->esp, __LINE__);m2c::stackDump(_state); abort(); }
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
          void Initializer_timer()
          {
              ticker = 0;
    frames = 0;
    lastframe = 0;
    countdown = 0;
    elapsedtime = 0;
    frameelaptime = 0;
    count100 = 100;
    {db tmp999[2]={0};memcpy(&intrcntr,&tmp999,sizeof tmp999);}
    dostimer = 0;
    dosvctrseg = 0;
    dosvctroff = 0;
    {db tmp999[2]={0};memcpy(&uservctr20flag,&tmp999,sizeof tmp999);}
    uservctr20 = 0;
    {db tmp999[2]={0};memcpy(&uservctr100flag,&tmp999,sizeof tmp999);}
    uservctr100 = 0;
    dostimeroff = 0;
    dostimerseg = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_timer(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "music.h"

	
 __attribute__((weak)) bool installmusic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallmusic, _state);}

 __attribute__((weak)) bool normalisemusic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knormalisemusic, _state);}

 __attribute__((weak)) bool refreshmusic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krefreshmusic, _state);}

 __attribute__((weak)) bool resumemusic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kresumemusic, _state);}

 __attribute__((weak)) bool suspendmusic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksuspendmusic, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool continstall(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontinstall, _state);}

 __attribute__((weak)) bool installadlb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstalladlb, _state);}

 __attribute__((weak)) bool installblst(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallblst, _state);}

 static bool installcarderr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallcarderr, _state);}

 static bool installfileerr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallfileerr, _state);}

 static bool installmemerr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallmemerr, _state);}

 __attribute__((weak)) bool installnull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallnull, _state);}

 __attribute__((weak)) bool installrlnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallrlnd, _state);}

 __attribute__((weak)) bool installspkr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallspkr, _state);}

	
	#include "music_default_seg_lifted.cpp"
#include "music_sndcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontinstall: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstalladlb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallblst: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallcarderr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallfileerr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallmemerr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallmusic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallnull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallrlnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallspkr: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_loadfile
        case m2c::kloadfile: 	if (!loadfile(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knormalisemusic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krefreshmusic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kresumemusic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksuspendmusic: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_music()
          {
              {db tmp999=0;MYCOPY(installed)}
    {db tmp999=0;MYCOPY(normalised)}
    {char tmp999[11]="THEMEB.BIN";MYCOPY(speakerbin)}
    {char tmp999[11]="THEMEA.BIN";MYCOPY(adlibbin)}
    {char tmp999[11]="THEMER.BIN";MYCOPY(rolandbin)}
    {dw tmp999=0;MYCOPY(musicdriveroff)}
    {dw tmp999=0;MYCOPY(musicdriverseg)}
    {dw tmp999=m2c::kglobal_installnull;MYCOPY(_installmusic)}
    {dw tmp999=m2c::kglobal_installspkr;MYCOPY(dummy24ce8f3e_data_29_1398)}
    {dw tmp999=m2c::kglobal_installblst;MYCOPY(dummy24ce8f3e_data_2b_1399)}
    {dw tmp999=m2c::kglobal_installadlb;MYCOPY(dummy24ce8f3e_data_2d_1400)}
    {dw tmp999=m2c::kglobal_installrlnd;MYCOPY(dummy24ce8f3e_data_2f_1401)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_music(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

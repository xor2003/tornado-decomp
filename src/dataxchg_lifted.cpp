/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "dataxchg.h"

	
 __attribute__((weak)) bool loadgamedata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadgamedata, _state);}

 __attribute__((weak)) bool loadmapdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadmapdata, _state);}

 __attribute__((weak)) bool savegamedata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavegamedata, _state);}

 __attribute__((weak)) bool savemapdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavemapdata, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool loadgameerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadgameerror, _state);}

 static bool loadmaperror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadmaperror, _state);}

 static bool savegameerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavegameerror, _state);}

 static bool saveimperror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksaveimperror, _state);}

 static bool savemaperror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavemaperror, _state);}

	
	#include "dataxchg_default_seg_lifted.cpp"
#include "dataxchg_code_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_buildsctrtables
        case m2c::kbuildsctrtables: 	if (!buildsctrtables(0, _state)) return false; break;
#endif
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_loadfile
        case m2c::kloadfile: 	if (!loadfile(0, _state)) return false; break;
#endif
        case m2c::kloadgamedata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadgameerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadmapdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadmaperror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_savefile
        case m2c::ksavefile: 	if (!savefile(0, _state)) return false; break;
#endif
        case m2c::ksavegamedata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavegameerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksaveimperror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavemapdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavemaperror: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_dataxchg()
          {
              {dw tmp999=0;MYCOPY(gnddatasize)}
    {dw tmp999=0;MYCOPY(mobdatasize)}
    {char tmp999[24]="..\\DATAXCHG\\GAMEPLAY.IN";MYCOPY(gameplayin)}
    {char tmp999[21]="..\\DATAXCHG\\LAYER.IN";MYCOPY(layersin)}
    {char tmp999[24]="..\\DATAXCHG\\OBSECDEF.IN";MYCOPY(gndobjectsin)}
    {char tmp999[23]="..\\DATAXCHG\\MSECDEF.IN";MYCOPY(mobobjectsin)}
    {char tmp999[24]="..\\DATAXCHG\\MISCDATA.IN";MYCOPY(miscdatain)}
    {char tmp999[25]="..\\DATAXCHG\\GAMEPLAY.OUT";MYCOPY(gameplayout)}
    {char tmp999[23]="..\\DATAXCHG\\IMPACT.OUT";MYCOPY(impactout)}
    {char tmp999[25]="..\\DATAXCHG\\OBSECDEF.OUT";MYCOPY(gndobjectsout)}
    {char tmp999[24]="..\\DATAXCHG\\MSECDEF.OUT";MYCOPY(mobobjectsout)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_dataxchg(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

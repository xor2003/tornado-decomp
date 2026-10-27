/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "modellib.h"

	
 __attribute__((weak)) bool calcsinefine(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcsinefine, _state);}

 __attribute__((weak)) bool calcvias(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcvias, _state);}

 __attribute__((weak)) bool calcvkts(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcvkts, _state);}

 __attribute__((weak)) bool initctrldevice(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitctrldevice, _state);}

 __attribute__((weak)) bool limitpfine(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitpfine, _state);}

 __attribute__((weak)) bool limitpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitpitch, _state);}

 __attribute__((weak)) bool moveviewpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmoveviewpoint, _state);}

 __attribute__((weak)) bool initjoy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitjoy1, _state);}

 __attribute__((weak)) bool initjoy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitjoy2, _state);}

 __attribute__((weak)) bool initkbd1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitkbd1, _state);}

 __attribute__((weak)) bool initkbd2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitkbd2, _state);}

	
	#include "modellib_default_seg_lifted.cpp"
#include "modellib_modcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcalcsinefine: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcvias: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcvkts: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitctrldevice: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitjoy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitjoy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitkbd1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitkbd2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitpfine: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitpitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmoveviewpoint: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_recaljoysticks
        case m2c::krecaljoysticks: 	if (!recaljoysticks(0, _state)) return false; break;
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
          void Initializer_modellib()
          {
              {dw tmp999=m2c::kglobal_initkbd1;MYCOPY(initctrlswitch)}
    {dw tmp999=m2c::kglobal_initkbd2;MYCOPY(dummy70e08c8c_data_2_1705)}
    {dw tmp999=m2c::kglobal_initjoy1;MYCOPY(dummy70e08c8c_data_4_1706)}
    {dw tmp999=m2c::kglobal_initjoy2;MYCOPY(dummy70e08c8c_data_6_1707)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_modellib(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

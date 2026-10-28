/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "newmouse.h"

	
 __attribute__((weak)) bool installmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallmouse, _state);}

 __attribute__((weak)) bool readmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadmouse, _state);}

 __attribute__((weak)) bool readmousemotion(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadmousemotion, _state);}

 __attribute__((weak)) bool resetmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kresetmouse, _state);}

 __attribute__((weak)) bool restoremouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krestoremouse, _state);}

 __attribute__((weak)) bool setmouselimits(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetmouselimits, _state);}

 __attribute__((weak)) bool setmousepos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetmousepos, _state);}

 static bool installexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstallexit, _state);}

 static bool readmotionexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadmotionexit, _state);}

 static bool updateexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateexit, _state);}

	
	#include "newmouse_default_seg_lifted.cpp"
#include "newmouse_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kinstallexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstallmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kreadmotionexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadmousemotion: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kresetmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krestoremouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetmouselimits: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetmousepos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateexit: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_newmouse()
          {
              {db tmp999[2]={0};memcpy(&mouseflag,&tmp999,sizeof tmp999);}
    mousexmin = 0;
    mousexmax = 639;
    mouseymin = 0;
    mouseymax = 399;
    mousex = 320;
    mousey = 200;
    _mousex = 320;
    _mousey = 200;
    lhsbutton = 0;
    rhsbutton = 0;
    _lhsbutton = 0;
    _rhsbutton = 0;
    xmickeys = 0;
    ymickeys = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_newmouse(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

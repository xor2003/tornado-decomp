/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "statdraw.h"

	
 static bool exitsector(m2c::_offsets _i, struct m2c::_STATE* _state){return drawstatmobiles(_i ? _i : m2c::kexitsector, _state);}

 static bool nullsector(m2c::_offsets _i, struct m2c::_STATE* _state){return drawstatmobiles(_i ? _i : m2c::knullsector, _state);}

 static bool scanloop(m2c::_offsets _i, struct m2c::_STATE* _state){return drawstatmobiles(_i ? _i : m2c::kscanloop, _state);}

	
	#include "statdraw_default_seg_lifted.cpp"
#include "statdraw_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_drawmobile
        case m2c::kdrawmobile: 	if (!drawmobile(0, _state)) return false; break;
#endif
        case m2c::kdrawstatmobiles: 	if (!drawstatmobiles(0, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!drawstatmobiles(__disp, _state)) return false; break;
        case m2c::kexitsector: 	if (!drawstatmobiles(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knullsector: 	if (!drawstatmobiles(__disp, _state)) return false; break;
        case m2c::kscanloop: 	if (!drawstatmobiles(__disp, _state)) return false; break;
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
          void Initializer_statdraw()
          {
              {mobile tmp999={0,0,0,0,65535};MYCOPY(tmp_mob)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(tmp_view)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_statdraw(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

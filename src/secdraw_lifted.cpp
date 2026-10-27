/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "secdraw.h"

	
 __attribute__((weak)) bool drawsector(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsector, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 static bool abortflatobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabortflatobject, _state);}

 static bool abortgndobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabortgndobject, _state);}

 static bool contflatloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontflatloop, _state);}

 static bool contgndloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontgndloop2, _state);}

 static bool exitflatloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitflatloop, _state);}

 static bool exitgndloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitgndloop, _state);}

 static bool exitsector(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsector, _state);}

 static bool flatobjectloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflatobjectloop, _state);}

 static bool gndobjectloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgndobjectloop, _state);}

	
	#include "secdraw_default_seg_lifted.cpp"
#include "secdraw_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kabortflatobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kabortgndobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontflatloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontgndloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontgndloop2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawflatobject
        case m2c::kdrawflatobject: 	if (!drawflatobject(0, _state)) return false; break;
#endif
        case m2c::kdrawsector: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitflatloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitgndloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsector: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflatobjectloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgndobjectloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_objectdistsort1
        case m2c::kobjectdistsort1: 	if (!objectdistsort1(0, _state)) return false; break;
#endif
        case m2c::kviscode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_secdraw()
          {
              {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_0_754)}
    {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_1_762)}
    {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_2_767)}
    {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_3_774)}
    {db tmp999=38;MYCOPY(contgndloop1)}
    {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_5_859)}
    {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_6_864)}
    {db tmp999=38;MYCOPY(dummy1772b8b0_viscode_7_871)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_secdraw(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "trnsfrm.h"

	
 __attribute__((weak)) bool calc3doffset(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalc3doffset, _state);}

 __attribute__((weak)) bool calceyecoords(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalceyecoords, _state);}

 __attribute__((weak)) bool calcrngrelco(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcrngrelco, _state);}

 __attribute__((weak)) bool calctgtrelco(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalctgtrelco, _state);}

 __attribute__((weak)) bool calctransmatrix(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalctransmatrix, _state);}

 static bool __m2c_macrolocal_27_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_27_skip, _state);}

 static bool __m2c_macrolocal_28_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_28_skip, _state);}

 static bool relcoerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krelcoerror, _state);}

 static bool zrelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzrelok, _state);}

	
	#include "trnsfrm_default_seg_lifted.cpp"
#include "trnsfrm_gencode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_27_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_28_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalc3doffset: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalceyecoords: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcrngrelco: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcslantrange
        case m2c::kcalcslantrange: 	if (!calcslantrange(0, _state)) return false; break;
#endif
        case m2c::kcalctgtrelco: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalctransmatrix: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel18: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel19: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel21: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::krelcoerror: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_sqrt32
        case m2c::ksqrt32: 	if (!sqrt32(0, _state)) return false; break;
#endif
        case m2c::kzrelok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_trnsfrm()
          {
              {dw tmp999=0;MYCOPY(v_sinh)}
    {dw tmp999=0;MYCOPY(v_cosh)}
    {dw tmp999=0;MYCOPY(v_sinp)}
    {dw tmp999=0;MYCOPY(v_cosp)}
    {dw tmp999=0;MYCOPY(v_sinr)}
    {dw tmp999=0;MYCOPY(v_cosr)}
    {dw tmp999=0;MYCOPY(a1)}
    {dw tmp999=0;MYCOPY(a2)}
    {dw tmp999=0;MYCOPY(a3)}
    {dw tmp999=0;MYCOPY(a4)}
    {dw tmp999=0;MYCOPY(a5)}
    {dw tmp999=0;MYCOPY(a6)}
    {dw tmp999=0;MYCOPY(a7)}
    {dw tmp999=0;MYCOPY(a8)}
    {dw tmp999=0;MYCOPY(a9)}
    {dd tmp999=0;MYCOPY(tmprng)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_trnsfrm(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

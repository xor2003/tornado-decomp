/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "int_clip.h"

	
 __attribute__((weak)) bool int_calccrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kint_calccrt, _state);}

 __attribute__((weak)) bool int_circlecrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kint_circlecrt, _state);}

 __attribute__((weak)) bool int_scalevp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kint_scalevp, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 static bool _checkovxneg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_checkovxneg, _state);}

 static bool _checkovzneg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_checkovzneg, _state);}

 static bool _xoverflow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_xoverflow, _state);}

 static bool _xycalc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_xycalc, _state);}

 static bool _ycrtzero(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_ycrtzero, _state);}

 static bool _yoverflow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_yoverflow, _state);}

 static bool _zycalc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k_zycalc, _state);}

 static bool checkovxneg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckovxneg, _state);}

 static bool checkovzneg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckovzneg, _state);}

 static bool setzmax(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetzmax, _state);}

 static bool setzmin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetzmin, _state);}

 static bool xcrtok1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxcrtok1, _state);}

 static bool xcrtok2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxcrtok2, _state);}

 static bool xoverflow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxoverflow, _state);}

 static bool xycalc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxycalc, _state);}

 static bool ycrtok1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kycrtok1, _state);}

 static bool ycrtok2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kycrtok2, _state);}

 static bool ycrtzero(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kycrtzero, _state);}

 static bool yoverflow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kyoverflow, _state);}

 static bool zycalc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzycalc, _state);}

	
	#include "int_clip_default_seg_lifted.cpp"
#include "int_clip_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k_checkovxneg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k_checkovzneg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k_xoverflow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k_xycalc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k_ycrtzero: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k_yoverflow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k_zycalc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckovxneg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckovzneg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kint_calccrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kint_circlecrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kint_scalevp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::ksetzmax: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetzmin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kviscode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxcrtok1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxcrtok2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxoverflow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxycalc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kycrtok1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kycrtok2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kycrtzero: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kyoverflow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzycalc: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_int_clip()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_int_clip(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

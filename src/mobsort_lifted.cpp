/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "mobsort.h"

	
 __attribute__((weak)) bool createmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreatemobile, _state);}

 __attribute__((weak)) bool deletemobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdeletemobile, _state);}

 __attribute__((weak)) bool locatemobiles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klocatemobiles, _state);}

 __attribute__((weak)) bool updatemobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemobile, _state);}

 static bool __m2c_macrolocal_1_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_mvxy1, _state);}

 static bool __m2c_macrolocal_1_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_mvxy2, _state);}

 static bool __m2c_macrolocal_1_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_mvxy3, _state);}

 static bool __m2c_macrolocal_1_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_mvxy4, _state);}

 static bool createerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreateerror, _state);}

 static bool deleteerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdeleteerror, _state);}

 static bool deleteok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdeleteok, _state);}

 static bool linkmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinkmobile, _state);}

 static bool nomatchfound(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knomatchfound, _state);}

 static bool nomobslocated(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knomobslocated, _state);}

 static bool searchbin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksearchbin, _state);}

 static bool unlinkmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunlinkmobile, _state);}

 static bool updateerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateerror, _state);}

 static bool updateok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateok, _state);}

	
	#include "mobsort_default_seg_lifted.cpp"
#include "mobsort_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreateerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreatemobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdeleteerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdeletemobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdeleteok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klinkmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klocatemobiles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knomatchfound: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knomobslocated: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksearchbin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunlinkmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatemobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_mobsort()
          {
          
          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_mobsort(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

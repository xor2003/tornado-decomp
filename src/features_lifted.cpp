/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "features_m2c.h"

	
 __attribute__((weak)) bool drawfeatures1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawfeatures1, _state);}

 __attribute__((weak)) bool drawrivers(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawrivers, _state);}

 __attribute__((weak)) bool scanvertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex1, _state);}

 __attribute__((weak)) bool scanvertex16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex16, _state);}

 __attribute__((weak)) bool scanvertex2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex2, _state);}

 __attribute__((weak)) bool scanvertex8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex8, _state);}

 static bool contfeatures(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontfeatures, _state);}

 __attribute__((weak)) bool drawfeatures2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawfeatures2, _state);}

 static bool exitfeatures(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitfeatures, _state);}

 static bool exitrivers(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitrivers, _state);}

 static bool exitvertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex1, _state);}

 static bool exitvertex16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex16, _state);}

 static bool exitvertex2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex2, _state);}

 static bool exitvertex8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex8, _state);}

 static bool inrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinrange, _state);}

 static bool intofeatures(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintofeatures, _state);}

 static bool nextface(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextface, _state);}

 static bool skipvertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipvertex1, _state);}

 static bool skipvertex16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipvertex16, _state);}

 static bool skipvertex2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipvertex2, _state);}

 static bool skipvertex8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipvertex8, _state);}

 static bool sortline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortline, _state);}

	
	#include "features_default_seg_lifted.cpp"
#include "features_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
        case m2c::kcontfeatures: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawfeatures1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawfeatures2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawrivers: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitfeatures: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitrivers: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintofeatures: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knextface: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyclip
        case m2c::kpolyclip: 	if (!polyclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polyfill
        case m2c::kpolyfill: 	if (!polyfill(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polyline
        case m2c::kpolyline: 	if (!polyline(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polylineclip
        case m2c::kpolylineclip: 	if (!polylineclip(0, _state)) return false; break;
#endif
        case m2c::kscanvertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertex16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertex2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertex8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipvertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipvertex16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipvertex2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipvertex8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop8: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_features()
          {
              {db tmp999[2]={1,0};MYCOPY(gndtextenabled)}
    {dw tmp999=m2c::kglobal_scanvertex1;MYCOPY(scanvertexlist)}
    {dw tmp999=m2c::kglobal_scanvertex2;MYCOPY(dummy289c48d8_data_4_765)}
    {dw tmp999=m2c::kglobal_scanvertex8;MYCOPY(dummy289c48d8_data_6_766)}
    {dw tmp999=m2c::kglobal_scanvertex16;MYCOPY(dummy289c48d8_data_8_767)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_a_833)}
    {db tmp999=38;MYCOPY(vertexloop1)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_c_933)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_d_941)}
    {db tmp999=38;MYCOPY(vertexloop2)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_f_982)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_10_990)}
    {db tmp999=38;MYCOPY(vertexloop8)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_12_1034)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_13_1042)}
    {db tmp999=38;MYCOPY(vertexloop16)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_15_1092)}
    {db tmp999=38;MYCOPY(dummy289c48d8_viscode_16_1100)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_features(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

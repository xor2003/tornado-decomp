/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "mobile.h"

	
 __attribute__((weak)) bool calcmobmaxdim(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcmobmaxdim, _state);}

 __attribute__((weak)) bool drawmobobject1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmobobject1, _state);}

 __attribute__((weak)) bool drawmobobject2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmobobject2, _state);}

 __attribute__((weak)) bool drawmobobject3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmobobject3, _state);}

 __attribute__((weak)) bool scanvertexlist1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertexlist1, _state);}

 __attribute__((weak)) bool scanvertexlist2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertexlist2, _state);}

 __attribute__((weak)) bool scanvertexlist3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertexlist3, _state);}

 static bool approxloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kapproxloop1, _state);}

 static bool approxloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kapproxloop2, _state);}

 static bool approxloop3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kapproxloop3, _state);}

 static bool controtate1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontrotate1, _state);}

 static bool controtate2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontrotate2, _state);}

 static bool controtate3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontrotate3, _state);}

 static bool exitlink1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlink1, _state);}

 static bool exitlink2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlink2, _state);}

 static bool exitlink3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlink3, _state);}

 static bool exitmobobject1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmobobject1, _state);}

 static bool exitmobobject2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmobobject2, _state);}

 static bool exitmobobject3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmobobject3, _state);}

 static bool exitscanvertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitscanvertex1, _state);}

 static bool exitscanvertex2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitscanvertex2, _state);}

 static bool exitscanvertex3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitscanvertex3, _state);}

 static bool skiprotate1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprotate1, _state);}

 static bool skiprotate2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprotate2, _state);}

 static bool skiprotate3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprotate3, _state);}

 static bool skipsort1_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort1_1, _state);}

 static bool skipsort1_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort1_2, _state);}

 static bool skipsort1_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort1_3, _state);}

 static bool skipsort2_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort2_1, _state);}

 static bool skipsort2_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort2_2, _state);}

 static bool skipsort2_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort2_3, _state);}

 static bool sortposition1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortposition1, _state);}

 static bool sortposition2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortposition2, _state);}

 static bool sortposition3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortposition3, _state);}

	
	#include "mobile_default_seg_lifted.cpp"
#include "mobile_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kapproxloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kapproxloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kapproxloop3: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcbfactors
        case m2c::kcalcbfactors: 	if (!calcbfactors(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calccfactors
        case m2c::kcalccfactors: 	if (!calccfactors(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcdfactors
        case m2c::kcalcdfactors: 	if (!calcdfactors(0, _state)) return false; break;
#endif
        case m2c::kcalcmobmaxdim: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrotategrid1
        case m2c::kcalcrotategrid1: 	if (!calcrotategrid1(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrotategrid2
        case m2c::kcalcrotategrid2: 	if (!calcrotategrid2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrotategrid3
        case m2c::kcalcrotategrid3: 	if (!calcrotategrid3(0, _state)) return false; break;
#endif
        case m2c::kcontrotate1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontrotate2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontrotate3: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_dotclip
        case m2c::kdotclip: 	if (!dotclip(0, _state)) return false; break;
#endif
        case m2c::kdrawmobobject1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmobobject2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmobobject3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlink1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlink2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlink3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmobobject1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmobobject2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmobobject3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitscanvertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitscanvertex2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitscanvertex3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_scanface
        case m2c::kscanface: 	if (!scanface(0, _state)) return false; break;
#endif
        case m2c::kscanvertexlist1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexlist2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexlist3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexloop3: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
        case m2c::kskiprotate1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprotate2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprotate3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort1_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort1_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort1_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort2_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort2_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort2_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortposition1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortposition2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortposition3: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_mobile()
          {
              {dw tmp999=0;MYCOPY(calcobjectpos)}
    {dw tmp999=1;MYCOPY(dummy515b4f89_data_2_705)}
    {dw tmp999=2;MYCOPY(dummy515b4f89_data_4_706)}
    {dw tmp999=3;MYCOPY(dummy515b4f89_data_6_707)}
    {dw tmp999=4;MYCOPY(dummy515b4f89_data_8_708)}
    {dw tmp999=0;MYCOPY(rgridhdg)}
    {dw tmp999=0;MYCOPY(rgridpitch)}
    {dw tmp999=0;MYCOPY(rgridroll)}
    {db tmp999=38;MYCOPY(scanvertexloop1)}
    {db tmp999=38;MYCOPY(dummy515b4f89_viscode_11_1334)}
    {db tmp999=38;MYCOPY(dummy515b4f89_viscode_12_1342)}
    {db tmp999=38;MYCOPY(scanvertexloop2)}
    {db tmp999=38;MYCOPY(dummy515b4f89_viscode_14_1385)}
    {db tmp999=38;MYCOPY(dummy515b4f89_viscode_15_1393)}
    {db tmp999=38;MYCOPY(scanvertexloop3)}
    {db tmp999=38;MYCOPY(dummy515b4f89_viscode_17_1436)}
    {db tmp999=38;MYCOPY(dummy515b4f89_viscode_18_1444)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_mobile(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "ground.h"

	
 __attribute__((weak)) bool calcobjectpos1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcobjectpos1, _state);}

 __attribute__((weak)) bool calcobjectpos16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcobjectpos16, _state);}

 __attribute__((weak)) bool calcobjectpos2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcobjectpos2, _state);}

 __attribute__((weak)) bool calcobjectpos4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcobjectpos4, _state);}

 __attribute__((weak)) bool calcobjectpos8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcobjectpos8, _state);}

 __attribute__((weak)) bool drawflatobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawflatobject, _state);}

 __attribute__((weak)) bool drawgndobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgndobject, _state);}

 __attribute__((weak)) bool scanflatvrtxlst(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanflatvrtxlst, _state);}

 __attribute__((weak)) bool scanvertexlist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertexlist, _state);}

 static bool approxloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kapproxloop, _state);}

 static bool exitflatobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitflatobject, _state);}

 static bool exitgndobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitgndobject, _state);}

 static bool exitscanflat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitscanflat, _state);}

 static bool exitscanvertex(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitscanvertex, _state);}

 static bool fixobjectpos16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixobjectpos16, _state);}

 static bool fixobjectpos2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixobjectpos2, _state);}

 static bool fixobjectpos4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixobjectpos4, _state);}

 static bool fixobjectpos8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixobjectpos8, _state);}

 static bool flatapproxloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflatapproxloop, _state);}

 static bool skipsort1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort1, _state);}

 static bool skipsort2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsort2, _state);}

 static bool skipsorta(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsorta, _state);}

 static bool skipsortb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsortb, _state);}

 static bool sortflatpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortflatpos, _state);}

 static bool sortposition(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortposition, _state);}

	
	#include "ground_default_seg_lifted.cpp"
#include "ground_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kapproxloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcobjectpos1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcobjectpos16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcobjectpos2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcobjectpos4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcobjectpos8: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_dotclip
        case m2c::kdotclip: 	if (!dotclip(0, _state)) return false; break;
#endif
        case m2c::kdrawflatobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawgndobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitflatobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitgndobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitscanflat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitscanvertex: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixobjectpos16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixobjectpos2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixobjectpos4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixobjectpos8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflatapproxloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_scanface
        case m2c::kscanface: 	if (!scanface(0, _state)) return false; break;
#endif
        case m2c::kscanflatloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanflatvrtxlst: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexlist: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertexloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
        case m2c::kskipsort1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsort2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsorta: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsortb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortflatpos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortposition: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_ground()
          {
              {dw tmp999=m2c::kglobal_calcobjectpos1;MYCOPY(calcobjectpos)}
    {dw tmp999=m2c::kglobal_calcobjectpos2;MYCOPY(dummydf58ca8e_data_2_699)}
    {dw tmp999=m2c::kglobal_calcobjectpos4;MYCOPY(dummydf58ca8e_data_4_700)}
    {dw tmp999=m2c::kglobal_calcobjectpos8;MYCOPY(dummydf58ca8e_data_6_701)}
    {dw tmp999=m2c::kglobal_calcobjectpos16;MYCOPY(dummydf58ca8e_data_8_702)}
    {db tmp999=38;MYCOPY(scanvertexloop)}
    {db tmp999=38;MYCOPY(dummydf58ca8e_viscode_b_1288)}
    {db tmp999=38;MYCOPY(dummydf58ca8e_viscode_c_1296)}
    {db tmp999=38;MYCOPY(scanflatloop)}
    {db tmp999=38;MYCOPY(dummydf58ca8e_viscode_e_1338)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_ground(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "scanface.h"

	
 __attribute__((weak)) bool gosub(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgosub, _state);}

 __attribute__((weak)) bool ifthen(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kifthen, _state);}

 __attribute__((weak)) bool ifthenelse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kifthenelse, _state);}

 __attribute__((weak)) bool illegal(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::killegal, _state);}

 __attribute__((weak)) bool scanface(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanface, _state);}

 __attribute__((weak)) bool selectcase(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectcase, _state);}

 __attribute__((weak)) bool sortprmdecexc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprmdecexc, _state);}

 __attribute__((weak)) bool sortprmdecinc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprmdecinc, _state);}

 __attribute__((weak)) bool sortprmline1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprmline1, _state);}

 __attribute__((weak)) bool sortprmline2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprmline2, _state);}

 __attribute__((weak)) bool sortprmpoly1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprmpoly1, _state);}

 __attribute__((weak)) bool sortprmpoly2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprmpoly2, _state);}

 __attribute__((weak)) bool sortsecdecexc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsecdecexc, _state);}

 __attribute__((weak)) bool sortsecdecinc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsecdecinc, _state);}

 __attribute__((weak)) bool sortsecline1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsecline1, _state);}

 __attribute__((weak)) bool sortsecline2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsecline2, _state);}

 __attribute__((weak)) bool sortsecpoly1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsecpoly1, _state);}

 __attribute__((weak)) bool sortsecpoly2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsecpoly2, _state);}

 static bool condfalse1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcondfalse1, _state);}

 static bool condfalse2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcondfalse2, _state);}

 static bool faceloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfaceloop, _state);}

 static bool flushbuffer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflushbuffer, _state);}

 static bool nextface(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextface, _state);}

 static bool prmlinefail1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprmlinefail1, _state);}

 static bool prmlinefail2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprmlinefail2, _state);}

 static bool prmpolyfail1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprmpolyfail1, _state);}

 static bool prmpolyfail2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprmpolyfail2, _state);}

 static bool prmpolyrvrs1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprmpolyrvrs1, _state);}

 static bool prmpolyrvrs2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprmpolyrvrs2, _state);}

 static bool scanfaceexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanfaceexit, _state);}

 static bool seclinefail1_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseclinefail1_1, _state);}

 static bool seclinefail1_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseclinefail1_2, _state);}

 static bool seclinefail2_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseclinefail2_1, _state);}

 static bool seclinefail2_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseclinefail2_2, _state);}

 static bool seclinervrs2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kseclinervrs2, _state);}

 static bool secpolyfail1_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksecpolyfail1_1, _state);}

 static bool secpolyfail1_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksecpolyfail1_2, _state);}

 static bool secpolyfail2_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksecpolyfail2_1, _state);}

 static bool secpolyfail2_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksecpolyfail2_2, _state);}

 static bool secpolyrvrs2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksecpolyrvrs2, _state);}

 static bool sortaclkwise1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaclkwise1, _state);}

 static bool sortaclkwise2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaclkwise2, _state);}

 static bool sortaclkwise3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaclkwise3, _state);}

 static bool sortaclkwise4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaclkwise4, _state);}

 static bool sortclkwise1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortclkwise1, _state);}

 static bool sortclkwise2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortclkwise2, _state);}

 static bool sortclkwise3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortclkwise3, _state);}

 static bool sortclkwise4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortclkwise4, _state);}

	
	#include "scanface_default_seg_lifted.cpp"
#include "scanface_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcondfalse1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcondfalse2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_cycliccheck
        case m2c::kcycliccheck: 	if (!cycliccheck(0, _state)) return false; break;
#endif
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfaceloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflushbuffer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgosub: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kifthen: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kifthenelse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::killegal: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knextface: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyclip
        case m2c::kpolyclip: 	if (!polyclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polyline
        case m2c::kpolyline: 	if (!polyline(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polylineclip
        case m2c::kpolylineclip: 	if (!polylineclip(0, _state)) return false; break;
#endif
        case m2c::kprmlinefail1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprmlinefail2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprmpolyfail1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprmpolyfail2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprmpolyrvrs1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprmpolyrvrs2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanface: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanfaceexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseclinefail1_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseclinefail1_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseclinefail2_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseclinefail2_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kseclinervrs2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksecpolyfail1_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksecpolyfail1_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksecpolyfail2_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksecpolyfail2_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksecpolyrvrs2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectcase: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaclkwise1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaclkwise2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaclkwise3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaclkwise4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortclkwise1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortclkwise2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortclkwise3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortclkwise4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprmdecexc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprmdecinc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprmline1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprmline2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprmpoly1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprmpoly2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsecdecexc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsecdecinc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsecline1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsecline2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsecpoly1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsecpoly2: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_scanface()
          {
              {dw tmp999=m2c::kglobal_sortsecpoly1;MYCOPY(dummy75c80ae3_data_0_458)}
    {dw tmp999=m2c::kglobal_sortsecline1;MYCOPY(dummy75c80ae3_data_2_459)}
    {dw tmp999=m2c::kglobal_sortsecpoly2;MYCOPY(dummy75c80ae3_data_4_460)}
    {dw tmp999=m2c::kglobal_sortsecline2;MYCOPY(dummy75c80ae3_data_6_461)}
    {dw tmp999=m2c::kglobal_sortprmpoly1;MYCOPY(dummy75c80ae3_data_8_462)}
    {dw tmp999=m2c::kglobal_sortprmline1;MYCOPY(dummy75c80ae3_data_a_463)}
    {dw tmp999=m2c::kglobal_sortprmpoly2;MYCOPY(dummy75c80ae3_data_c_464)}
    {dw tmp999=m2c::kglobal_sortprmline2;MYCOPY(dummy75c80ae3_data_e_465)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_10_466)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_12_467)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_14_468)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_16_469)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_18_470)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_1a_471)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_1c_472)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_1e_473)}
    {dw tmp999=m2c::kglobal_sortsecdecinc;MYCOPY(dummy75c80ae3_data_20_474)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_22_475)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_24_476)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_26_477)}
    {dw tmp999=m2c::kglobal_sortprmdecinc;MYCOPY(dummy75c80ae3_data_28_478)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_2a_479)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_2c_480)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_2e_481)}
    {dw tmp999=m2c::kglobal_sortsecdecexc;MYCOPY(dummy75c80ae3_data_30_482)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_32_483)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_34_484)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_36_485)}
    {dw tmp999=m2c::kglobal_sortprmdecexc;MYCOPY(dummy75c80ae3_data_38_486)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_3a_487)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_3c_488)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_3e_489)}
    {dw tmp999=m2c::kglobal_ifthen;MYCOPY(dummy75c80ae3_data_40_492)}
    {dw tmp999=m2c::kglobal_ifthenelse;MYCOPY(dummy75c80ae3_data_42_493)}
    {dw tmp999=m2c::kglobal_selectcase;MYCOPY(dummy75c80ae3_data_44_494)}
    {dw tmp999=m2c::kglobal_gosub;MYCOPY(dummy75c80ae3_data_46_495)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_48_496)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_4a_497)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_4c_498)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_4e_499)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_50_500)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_52_501)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_54_502)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_56_503)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_58_504)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_5a_505)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_5c_506)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_5e_507)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_60_508)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_62_509)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_64_510)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_66_511)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_68_512)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_6a_513)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_6c_514)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_6e_515)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_70_516)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_72_517)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_74_518)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_76_519)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_78_520)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_7a_521)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_7c_522)}
    {dw tmp999=m2c::kglobal_illegal;MYCOPY(dummy75c80ae3_data_7e_523)}
    {dd tmp999=m2c::kglobal_polyfill;MYCOPY(facedraw)}
    {dd tmp999=m2c::kglobal_meshfill;MYCOPY(dummy75c80ae3_data_84_527)}
    {dd tmp999=m2c::kglobal_polyline;MYCOPY(dummy75c80ae3_data_88_528)}
    {dd tmp999=m2c::kglobal_polyline;MYCOPY(dummy75c80ae3_data_8c_529)}
    {dd tmp999=m2c::kglobal_rvrspolyfill;MYCOPY(rvrsfacedraw)}
    {dd tmp999=m2c::kglobal_rvrsmeshfill;MYCOPY(dummy75c80ae3_data_94_531)}
    {dw tmp999=0;MYCOPY(drawrecover)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_scanface(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "railways.h"

	
 __attribute__((weak)) bool doubletrack1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdoubletrack1, _state);}

 __attribute__((weak)) bool doubletrack2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdoubletrack2, _state);}

 __attribute__((weak)) bool drawrailways(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawrailways, _state);}

 __attribute__((weak)) bool linerail1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinerail1, _state);}

 __attribute__((weak)) bool linerail16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinerail16, _state);}

 __attribute__((weak)) bool linerail2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinerail2, _state);}

 __attribute__((weak)) bool linerail8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinerail8, _state);}

 __attribute__((weak)) bool polyrail1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyrail1, _state);}

 __attribute__((weak)) bool polyrail2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyrail2, _state);}

 __attribute__((weak)) bool singletrack1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksingletrack1, _state);}

 __attribute__((weak)) bool singletrack2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksingletrack2, _state);}

 __attribute__((weak)) bool sortdoubleend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortdoubleend, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 static bool conttrackdraw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconttrackdraw, _state);}

 static bool drawnextrail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawnextrail, _state);}

 static bool drawnexttrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawnexttrack, _state);}

 static bool drawrailsexit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawrailsexit1, _state);}

 static bool drawrailsexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawrailsexit2, _state);}

 static bool exitlinerail1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlinerail1, _state);}

 static bool exitlinerail16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlinerail16, _state);}

 static bool exitlinerail2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlinerail2, _state);}

 static bool exitlinerail8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlinerail8, _state);}

 static bool exitpolyrail1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitpolyrail1, _state);}

 static bool exitpolyrail2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitpolyrail2, _state);}

 static bool exitsingle1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsingle1, _state);}

 static bool exitsingle2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsingle2, _state);}

 static bool scaleok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscaleok, _state);}

 static bool skiprail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprail, _state);}

 static bool skiptrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptrack, _state);}

	
	#include "railways_default_seg_lifted.cpp"
#include "railways_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
        case m2c::kconttrackdraw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdoubletrack1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdoubletrack2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawnextrail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawnexttrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawrailsexit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawrailsexit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawrailways: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlinerail1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlinerail16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlinerail2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlinerail8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitpolyrail1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitpolyrail2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsingle1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsingle2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::klinerail1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klinerail16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klinerail2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klinerail8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyclip
        case m2c::kpolyclip: 	if (!polyclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polyfill
        case m2c::kpolyfill: 	if (!polyfill(0, _state)) return false; break;
#endif
        case m2c::kpolyrail1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyrail2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_quicklineclip
        case m2c::kquicklineclip: 	if (!quicklineclip(0, _state)) return false; break;
#endif
        case m2c::kscaleok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksingletrack1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksingletrack2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortdoubleend: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_railways()
          {
              {dw tmp999=m2c::kglobal_polyrail1;MYCOPY(polyrails)}
    {dw tmp999=m2c::kglobal_polyrail2;MYCOPY(dummyd96f7c97_data_2_930)}
    {dw tmp999=m2c::kglobal_linerail8;MYCOPY(dummyd96f7c97_data_4_931)}
    {dw tmp999=m2c::kglobal_linerail16;MYCOPY(dummyd96f7c97_data_6_932)}
    {dw tmp999=m2c::kglobal_linerail1;MYCOPY(linerails)}
    {dw tmp999=m2c::kglobal_linerail2;MYCOPY(dummyd96f7c97_data_a_936)}
    {dw tmp999=m2c::kglobal_linerail8;MYCOPY(dummyd96f7c97_data_c_937)}
    {dw tmp999=m2c::kglobal_linerail16;MYCOPY(dummyd96f7c97_data_e_938)}
    {dw tmp999=m2c::kglobal_singletrack1;MYCOPY(singletracks)}
    {dw tmp999=m2c::kglobal_singletrack2;MYCOPY(dummyd96f7c97_data_12_942)}
    {dw tmp999=m2c::kglobal_doubletrack1;MYCOPY(doubletracks)}
    {dw tmp999=m2c::kglobal_doubletrack2;MYCOPY(dummyd96f7c97_data_16_946)}
    {dw tmp999=0;MYCOPY(drawrailtype)}
    {dw tmp999=4;MYCOPY(trackscalevals)}
    {dw tmp999=260;MYCOPY(dummyd96f7c97_data_1c_951)}
    {dw tmp999=0;MYCOPY(trackscale)}
    {dw tmp999=dolmid+dol0;MYCOPY(raillength1)}
    {dw tmp999=dolmid+dol8192;MYCOPY(dummyd96f7c97_data_22_956)}
    {dw tmp999=dolmid+dol8192;MYCOPY(dummyd96f7c97_data_24_957)}
    {dw tmp999=dolmid+dol8192;MYCOPY(dummyd96f7c97_data_26_958)}
    {dw tmp999=dolmid+dol8192;MYCOPY(dummyd96f7c97_data_28_959)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_2a_960)}
    {dw tmp999=dolmid+dol8192;MYCOPY(dummyd96f7c97_data_2c_961)}
    {dw tmp999=dolmid-dol8192;MYCOPY(dummyd96f7c97_data_2e_962)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_30_963)}
    {dw tmp999=dolmid-dol8192;MYCOPY(dummyd96f7c97_data_32_964)}
    {dw tmp999=dolmid-dol8192;MYCOPY(dummyd96f7c97_data_34_965)}
    {dw tmp999=dolmid-dol8192;MYCOPY(dummyd96f7c97_data_36_966)}
    {dw tmp999=dolmid-dol8192;MYCOPY(dummyd96f7c97_data_38_967)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_3a_968)}
    {dw tmp999=dolmid-dol8192;MYCOPY(dummyd96f7c97_data_3c_969)}
    {dw tmp999=dolmid+dol8192;MYCOPY(dummyd96f7c97_data_3e_970)}
    {dw tmp999=dolmid+dol0;MYCOPY(raillength2)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummyd96f7c97_data_42_974)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummyd96f7c97_data_44_975)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummyd96f7c97_data_46_976)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummyd96f7c97_data_48_977)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_4a_978)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummyd96f7c97_data_4c_979)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummyd96f7c97_data_4e_980)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_50_981)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummyd96f7c97_data_52_982)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummyd96f7c97_data_54_983)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummyd96f7c97_data_56_984)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummyd96f7c97_data_58_985)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_5a_986)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummyd96f7c97_data_5c_987)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummyd96f7c97_data_5e_988)}
    {dw tmp999=dolmid+dol0;MYCOPY(raillength8)}
    {dw tmp999=dolmid+dol1024;MYCOPY(dummyd96f7c97_data_62_992)}
    {dw tmp999=dolmid+dol1024;MYCOPY(dummyd96f7c97_data_64_993)}
    {dw tmp999=dolmid+dol1024;MYCOPY(dummyd96f7c97_data_66_994)}
    {dw tmp999=dolmid+dol1024;MYCOPY(dummyd96f7c97_data_68_995)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_6a_996)}
    {dw tmp999=dolmid+dol1024;MYCOPY(dummyd96f7c97_data_6c_997)}
    {dw tmp999=dolmid-dol1024;MYCOPY(dummyd96f7c97_data_6e_998)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_70_999)}
    {dw tmp999=dolmid-dol1024;MYCOPY(dummyd96f7c97_data_72_1000)}
    {dw tmp999=dolmid-dol1024;MYCOPY(dummyd96f7c97_data_74_1001)}
    {dw tmp999=dolmid-dol1024;MYCOPY(dummyd96f7c97_data_76_1002)}
    {dw tmp999=dolmid-dol1024;MYCOPY(dummyd96f7c97_data_78_1003)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_7a_1004)}
    {dw tmp999=dolmid-dol1024;MYCOPY(dummyd96f7c97_data_7c_1005)}
    {dw tmp999=dolmid+dol1024;MYCOPY(dummyd96f7c97_data_7e_1006)}
    {dw tmp999=dolmid+dol0;MYCOPY(raillength16)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummyd96f7c97_data_82_1010)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummyd96f7c97_data_84_1011)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummyd96f7c97_data_86_1012)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummyd96f7c97_data_88_1013)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_8a_1014)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummyd96f7c97_data_8c_1015)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummyd96f7c97_data_8e_1016)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_90_1017)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummyd96f7c97_data_92_1018)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummyd96f7c97_data_94_1019)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummyd96f7c97_data_96_1020)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummyd96f7c97_data_98_1021)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummyd96f7c97_data_9a_1022)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummyd96f7c97_data_9c_1023)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummyd96f7c97_data_9e_1024)}
    {dw tmp999=arbmid-arb32;MYCOPY(railwidth1)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_a2_1028)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_a4_1029)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_a6_1030)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_a8_1031)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_aa_1032)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_ac_1033)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_ae_1034)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_b0_1035)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_b2_1036)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_b4_1037)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_b6_1038)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_b8_1039)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_ba_1040)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_bc_1041)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_be_1042)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_c0_1043)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_c2_1044)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_c4_1045)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_c6_1046)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_c8_1047)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_ca_1048)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_cc_1049)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_ce_1050)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_d0_1051)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_d2_1052)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_d4_1053)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_d6_1054)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_d8_1055)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_da_1056)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_dc_1057)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_de_1058)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_e0_1059)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_e2_1060)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_e4_1061)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_e6_1062)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_e8_1063)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_ea_1064)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_ec_1065)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_ee_1066)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_f0_1067)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_f2_1068)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_f4_1069)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_f6_1070)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_f8_1071)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_fa_1072)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_fc_1073)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_fe_1074)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_100_1075)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_102_1076)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_104_1077)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_106_1078)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_108_1079)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_10a_1080)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_10c_1081)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_10e_1082)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_110_1083)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_112_1084)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_114_1085)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_116_1086)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_118_1087)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_11a_1088)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_11c_1089)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_11e_1090)}
    {dw tmp999=arbmid-arb16;MYCOPY(railwidth2)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_122_1094)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_124_1095)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_126_1096)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_128_1097)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_12a_1098)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_12c_1099)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_12e_1100)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_130_1101)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_132_1102)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_134_1103)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_136_1104)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_138_1105)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_13a_1106)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_13c_1107)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_13e_1108)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_140_1109)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_142_1110)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_144_1111)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_146_1112)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_148_1113)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_14a_1114)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_14c_1115)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_14e_1116)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_150_1117)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_152_1118)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_154_1119)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_156_1120)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_158_1121)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_15a_1122)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_15c_1123)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_15e_1124)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_160_1125)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_162_1126)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_164_1127)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_166_1128)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_168_1129)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_16a_1130)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_16c_1131)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_16e_1132)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_170_1133)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_172_1134)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_174_1135)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_176_1136)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_178_1137)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_17a_1138)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_17c_1139)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_17e_1140)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_180_1141)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_182_1142)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_184_1143)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_186_1144)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_188_1145)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_18a_1146)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_18c_1147)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_18e_1148)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_190_1149)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_192_1150)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_194_1151)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_196_1152)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_198_1153)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_19a_1154)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_19c_1155)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_19e_1156)}
    {dw tmp999=arbmid+arb0;MYCOPY(strackend1)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1a2_1160)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1a4_1161)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1a6_1162)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1a8_1163)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1aa_1164)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1ac_1165)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1ae_1166)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1b0_1167)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1b2_1168)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1b4_1169)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1b6_1170)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1b8_1171)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1ba_1172)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1bc_1173)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1be_1174)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1c0_1175)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1c2_1176)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1c4_1177)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1c6_1178)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1c8_1179)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1ca_1180)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1cc_1181)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1ce_1182)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1d0_1183)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1d2_1184)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1d4_1185)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1d6_1186)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1d8_1187)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1da_1188)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummyd96f7c97_data_1dc_1189)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummyd96f7c97_data_1de_1190)}
    {dw tmp999=arbmid+arb0;MYCOPY(strackend2)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_1e2_1194)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1e4_1195)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_1e6_1196)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1e8_1197)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1ea_1198)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_1ec_1199)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_1ee_1200)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_1f0_1201)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1f2_1202)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_1f4_1203)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1f6_1204)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1f8_1205)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_1fa_1206)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_1fc_1207)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_1fe_1208)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_200_1209)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_202_1210)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_204_1211)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_206_1212)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_208_1213)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_20a_1214)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_20c_1215)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_20e_1216)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_210_1217)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_212_1218)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_214_1219)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_216_1220)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_218_1221)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_21a_1222)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummyd96f7c97_data_21c_1223)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummyd96f7c97_data_21e_1224)}
    {dw tmp999=arbmid-arb64;MYCOPY(dtrackend16)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_222_1228)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_224_1229)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_226_1230)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_228_1231)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_22a_1232)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_22c_1233)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_22e_1234)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_230_1235)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_232_1236)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_234_1237)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_236_1238)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_238_1239)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_23a_1240)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_23c_1241)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_23e_1242)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_240_1243)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_242_1244)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_244_1245)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_246_1246)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_248_1247)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_24a_1248)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_24c_1249)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_24e_1250)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_250_1251)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_252_1252)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummyd96f7c97_data_254_1253)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_256_1254)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_258_1255)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummyd96f7c97_data_25a_1256)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_25c_1257)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummyd96f7c97_data_25e_1258)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_railways(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

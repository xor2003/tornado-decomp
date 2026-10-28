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
              polyrails = m2c::kglobal_polyrail1;
    dummyd96f7c97_data_2_930 = m2c::kglobal_polyrail2;
    dummyd96f7c97_data_4_931 = m2c::kglobal_linerail8;
    dummyd96f7c97_data_6_932 = m2c::kglobal_linerail16;
    linerails = m2c::kglobal_linerail1;
    dummyd96f7c97_data_a_936 = m2c::kglobal_linerail2;
    dummyd96f7c97_data_c_937 = m2c::kglobal_linerail8;
    dummyd96f7c97_data_e_938 = m2c::kglobal_linerail16;
    singletracks = m2c::kglobal_singletrack1;
    dummyd96f7c97_data_12_942 = m2c::kglobal_singletrack2;
    doubletracks = m2c::kglobal_doubletrack1;
    dummyd96f7c97_data_16_946 = m2c::kglobal_doubletrack2;
    drawrailtype = 0;
    trackscalevals = 4;
    dummyd96f7c97_data_1c_951 = 260;
    trackscale = 0;
    raillength1 = dolmid+dol0;
    dummyd96f7c97_data_22_956 = dolmid+dol8192;
    dummyd96f7c97_data_24_957 = dolmid+dol8192;
    dummyd96f7c97_data_26_958 = dolmid+dol8192;
    dummyd96f7c97_data_28_959 = dolmid+dol8192;
    dummyd96f7c97_data_2a_960 = dolmid+dol0;
    dummyd96f7c97_data_2c_961 = dolmid+dol8192;
    dummyd96f7c97_data_2e_962 = dolmid-dol8192;
    dummyd96f7c97_data_30_963 = dolmid+dol0;
    dummyd96f7c97_data_32_964 = dolmid-dol8192;
    dummyd96f7c97_data_34_965 = dolmid-dol8192;
    dummyd96f7c97_data_36_966 = dolmid-dol8192;
    dummyd96f7c97_data_38_967 = dolmid-dol8192;
    dummyd96f7c97_data_3a_968 = dolmid+dol0;
    dummyd96f7c97_data_3c_969 = dolmid-dol8192;
    dummyd96f7c97_data_3e_970 = dolmid+dol8192;
    raillength2 = dolmid+dol0;
    dummyd96f7c97_data_42_974 = dolmid+dol4096;
    dummyd96f7c97_data_44_975 = dolmid+dol4096;
    dummyd96f7c97_data_46_976 = dolmid+dol4096;
    dummyd96f7c97_data_48_977 = dolmid+dol4096;
    dummyd96f7c97_data_4a_978 = dolmid+dol0;
    dummyd96f7c97_data_4c_979 = dolmid+dol4096;
    dummyd96f7c97_data_4e_980 = dolmid-dol4096;
    dummyd96f7c97_data_50_981 = dolmid+dol0;
    dummyd96f7c97_data_52_982 = dolmid-dol4096;
    dummyd96f7c97_data_54_983 = dolmid-dol4096;
    dummyd96f7c97_data_56_984 = dolmid-dol4096;
    dummyd96f7c97_data_58_985 = dolmid-dol4096;
    dummyd96f7c97_data_5a_986 = dolmid+dol0;
    dummyd96f7c97_data_5c_987 = dolmid-dol4096;
    dummyd96f7c97_data_5e_988 = dolmid+dol4096;
    raillength8 = dolmid+dol0;
    dummyd96f7c97_data_62_992 = dolmid+dol1024;
    dummyd96f7c97_data_64_993 = dolmid+dol1024;
    dummyd96f7c97_data_66_994 = dolmid+dol1024;
    dummyd96f7c97_data_68_995 = dolmid+dol1024;
    dummyd96f7c97_data_6a_996 = dolmid+dol0;
    dummyd96f7c97_data_6c_997 = dolmid+dol1024;
    dummyd96f7c97_data_6e_998 = dolmid-dol1024;
    dummyd96f7c97_data_70_999 = dolmid+dol0;
    dummyd96f7c97_data_72_1000 = dolmid-dol1024;
    dummyd96f7c97_data_74_1001 = dolmid-dol1024;
    dummyd96f7c97_data_76_1002 = dolmid-dol1024;
    dummyd96f7c97_data_78_1003 = dolmid-dol1024;
    dummyd96f7c97_data_7a_1004 = dolmid+dol0;
    dummyd96f7c97_data_7c_1005 = dolmid-dol1024;
    dummyd96f7c97_data_7e_1006 = dolmid+dol1024;
    raillength16 = dolmid+dol0;
    dummyd96f7c97_data_82_1010 = dolmid+dol512;
    dummyd96f7c97_data_84_1011 = dolmid+dol512;
    dummyd96f7c97_data_86_1012 = dolmid+dol512;
    dummyd96f7c97_data_88_1013 = dolmid+dol512;
    dummyd96f7c97_data_8a_1014 = dolmid+dol0;
    dummyd96f7c97_data_8c_1015 = dolmid+dol512;
    dummyd96f7c97_data_8e_1016 = dolmid-dol512;
    dummyd96f7c97_data_90_1017 = dolmid+dol0;
    dummyd96f7c97_data_92_1018 = dolmid-dol512;
    dummyd96f7c97_data_94_1019 = dolmid-dol512;
    dummyd96f7c97_data_96_1020 = dolmid-dol512;
    dummyd96f7c97_data_98_1021 = dolmid-dol512;
    dummyd96f7c97_data_9a_1022 = dolmid+dol0;
    dummyd96f7c97_data_9c_1023 = dolmid-dol512;
    dummyd96f7c97_data_9e_1024 = dolmid+dol512;
    railwidth1 = arbmid-arb32;
    dummyd96f7c97_data_a2_1028 = arbmid-arb32;
    dummyd96f7c97_data_a4_1029 = arbmid-arb32;
    dummyd96f7c97_data_a6_1030 = arbmid+arb32;
    dummyd96f7c97_data_a8_1031 = arbmid+arb32;
    dummyd96f7c97_data_aa_1032 = arbmid+arb32;
    dummyd96f7c97_data_ac_1033 = arbmid+arb32;
    dummyd96f7c97_data_ae_1034 = arbmid-arb32;
    dummyd96f7c97_data_b0_1035 = arbmid-arb32;
    dummyd96f7c97_data_b2_1036 = arbmid+arb32;
    dummyd96f7c97_data_b4_1037 = arbmid+arb0;
    dummyd96f7c97_data_b6_1038 = arbmid+arb64;
    dummyd96f7c97_data_b8_1039 = arbmid+arb64;
    dummyd96f7c97_data_ba_1040 = arbmid+arb0;
    dummyd96f7c97_data_bc_1041 = arbmid+arb32;
    dummyd96f7c97_data_be_1042 = arbmid-arb32;
    dummyd96f7c97_data_c0_1043 = arbmid-arb32;
    dummyd96f7c97_data_c2_1044 = arbmid+arb32;
    dummyd96f7c97_data_c4_1045 = arbmid+arb32;
    dummyd96f7c97_data_c6_1046 = arbmid+arb32;
    dummyd96f7c97_data_c8_1047 = arbmid+arb32;
    dummyd96f7c97_data_ca_1048 = arbmid-arb32;
    dummyd96f7c97_data_cc_1049 = arbmid-arb32;
    dummyd96f7c97_data_ce_1050 = arbmid-arb32;
    dummyd96f7c97_data_d0_1051 = arbmid+arb32;
    dummyd96f7c97_data_d2_1052 = arbmid+arb32;
    dummyd96f7c97_data_d4_1053 = arbmid+arb64;
    dummyd96f7c97_data_d6_1054 = arbmid+arb0;
    dummyd96f7c97_data_d8_1055 = arbmid+arb0;
    dummyd96f7c97_data_da_1056 = arbmid-arb64;
    dummyd96f7c97_data_dc_1057 = arbmid-arb32;
    dummyd96f7c97_data_de_1058 = arbmid-arb32;
    dummyd96f7c97_data_e0_1059 = arbmid+arb32;
    dummyd96f7c97_data_e2_1060 = arbmid+arb32;
    dummyd96f7c97_data_e4_1061 = arbmid+arb32;
    dummyd96f7c97_data_e6_1062 = arbmid-arb32;
    dummyd96f7c97_data_e8_1063 = arbmid-arb32;
    dummyd96f7c97_data_ea_1064 = arbmid-arb32;
    dummyd96f7c97_data_ec_1065 = arbmid-arb32;
    dummyd96f7c97_data_ee_1066 = arbmid+arb32;
    dummyd96f7c97_data_f0_1067 = arbmid+arb32;
    dummyd96f7c97_data_f2_1068 = arbmid-arb32;
    dummyd96f7c97_data_f4_1069 = arbmid+arb0;
    dummyd96f7c97_data_f6_1070 = arbmid-arb64;
    dummyd96f7c97_data_f8_1071 = arbmid-arb64;
    dummyd96f7c97_data_fa_1072 = arbmid+arb0;
    dummyd96f7c97_data_fc_1073 = arbmid-arb32;
    dummyd96f7c97_data_fe_1074 = arbmid+arb32;
    dummyd96f7c97_data_100_1075 = arbmid+arb32;
    dummyd96f7c97_data_102_1076 = arbmid-arb32;
    dummyd96f7c97_data_104_1077 = arbmid-arb32;
    dummyd96f7c97_data_106_1078 = arbmid-arb32;
    dummyd96f7c97_data_108_1079 = arbmid-arb32;
    dummyd96f7c97_data_10a_1080 = arbmid+arb32;
    dummyd96f7c97_data_10c_1081 = arbmid+arb32;
    dummyd96f7c97_data_10e_1082 = arbmid+arb32;
    dummyd96f7c97_data_110_1083 = arbmid-arb32;
    dummyd96f7c97_data_112_1084 = arbmid-arb32;
    dummyd96f7c97_data_114_1085 = arbmid-arb64;
    dummyd96f7c97_data_116_1086 = arbmid+arb0;
    dummyd96f7c97_data_118_1087 = arbmid+arb0;
    dummyd96f7c97_data_11a_1088 = arbmid+arb64;
    dummyd96f7c97_data_11c_1089 = arbmid+arb32;
    dummyd96f7c97_data_11e_1090 = arbmid+arb32;
    railwidth2 = arbmid-arb16;
    dummyd96f7c97_data_122_1094 = arbmid-arb16;
    dummyd96f7c97_data_124_1095 = arbmid-arb16;
    dummyd96f7c97_data_126_1096 = arbmid+arb16;
    dummyd96f7c97_data_128_1097 = arbmid+arb16;
    dummyd96f7c97_data_12a_1098 = arbmid+arb16;
    dummyd96f7c97_data_12c_1099 = arbmid+arb16;
    dummyd96f7c97_data_12e_1100 = arbmid-arb16;
    dummyd96f7c97_data_130_1101 = arbmid-arb16;
    dummyd96f7c97_data_132_1102 = arbmid+arb16;
    dummyd96f7c97_data_134_1103 = arbmid+arb0;
    dummyd96f7c97_data_136_1104 = arbmid+arb32;
    dummyd96f7c97_data_138_1105 = arbmid+arb32;
    dummyd96f7c97_data_13a_1106 = arbmid+arb0;
    dummyd96f7c97_data_13c_1107 = arbmid+arb16;
    dummyd96f7c97_data_13e_1108 = arbmid-arb16;
    dummyd96f7c97_data_140_1109 = arbmid-arb16;
    dummyd96f7c97_data_142_1110 = arbmid+arb16;
    dummyd96f7c97_data_144_1111 = arbmid+arb16;
    dummyd96f7c97_data_146_1112 = arbmid+arb16;
    dummyd96f7c97_data_148_1113 = arbmid+arb16;
    dummyd96f7c97_data_14a_1114 = arbmid-arb16;
    dummyd96f7c97_data_14c_1115 = arbmid-arb16;
    dummyd96f7c97_data_14e_1116 = arbmid-arb16;
    dummyd96f7c97_data_150_1117 = arbmid+arb16;
    dummyd96f7c97_data_152_1118 = arbmid+arb16;
    dummyd96f7c97_data_154_1119 = arbmid+arb32;
    dummyd96f7c97_data_156_1120 = arbmid+arb0;
    dummyd96f7c97_data_158_1121 = arbmid+arb0;
    dummyd96f7c97_data_15a_1122 = arbmid-arb32;
    dummyd96f7c97_data_15c_1123 = arbmid-arb16;
    dummyd96f7c97_data_15e_1124 = arbmid-arb16;
    dummyd96f7c97_data_160_1125 = arbmid+arb16;
    dummyd96f7c97_data_162_1126 = arbmid+arb16;
    dummyd96f7c97_data_164_1127 = arbmid+arb16;
    dummyd96f7c97_data_166_1128 = arbmid-arb16;
    dummyd96f7c97_data_168_1129 = arbmid-arb16;
    dummyd96f7c97_data_16a_1130 = arbmid-arb16;
    dummyd96f7c97_data_16c_1131 = arbmid-arb16;
    dummyd96f7c97_data_16e_1132 = arbmid+arb16;
    dummyd96f7c97_data_170_1133 = arbmid+arb16;
    dummyd96f7c97_data_172_1134 = arbmid-arb16;
    dummyd96f7c97_data_174_1135 = arbmid+arb0;
    dummyd96f7c97_data_176_1136 = arbmid-arb32;
    dummyd96f7c97_data_178_1137 = arbmid-arb32;
    dummyd96f7c97_data_17a_1138 = arbmid+arb0;
    dummyd96f7c97_data_17c_1139 = arbmid-arb16;
    dummyd96f7c97_data_17e_1140 = arbmid+arb16;
    dummyd96f7c97_data_180_1141 = arbmid+arb16;
    dummyd96f7c97_data_182_1142 = arbmid-arb16;
    dummyd96f7c97_data_184_1143 = arbmid-arb16;
    dummyd96f7c97_data_186_1144 = arbmid-arb16;
    dummyd96f7c97_data_188_1145 = arbmid-arb16;
    dummyd96f7c97_data_18a_1146 = arbmid+arb16;
    dummyd96f7c97_data_18c_1147 = arbmid+arb16;
    dummyd96f7c97_data_18e_1148 = arbmid+arb16;
    dummyd96f7c97_data_190_1149 = arbmid-arb16;
    dummyd96f7c97_data_192_1150 = arbmid-arb16;
    dummyd96f7c97_data_194_1151 = arbmid-arb32;
    dummyd96f7c97_data_196_1152 = arbmid+arb0;
    dummyd96f7c97_data_198_1153 = arbmid+arb0;
    dummyd96f7c97_data_19a_1154 = arbmid+arb32;
    dummyd96f7c97_data_19c_1155 = arbmid+arb16;
    dummyd96f7c97_data_19e_1156 = arbmid+arb16;
    strackend1 = arbmid+arb0;
    dummyd96f7c97_data_1a2_1160 = arbmid-arb32;
    dummyd96f7c97_data_1a4_1161 = arbmid+arb0;
    dummyd96f7c97_data_1a6_1162 = arbmid+arb32;
    dummyd96f7c97_data_1a8_1163 = arbmid+arb0;
    dummyd96f7c97_data_1aa_1164 = arbmid+arb0;
    dummyd96f7c97_data_1ac_1165 = arbmid+arb32;
    dummyd96f7c97_data_1ae_1166 = arbmid+arb32;
    dummyd96f7c97_data_1b0_1167 = arbmid-arb32;
    dummyd96f7c97_data_1b2_1168 = arbmid+arb0;
    dummyd96f7c97_data_1b4_1169 = arbmid+arb32;
    dummyd96f7c97_data_1b6_1170 = arbmid+arb0;
    dummyd96f7c97_data_1b8_1171 = arbmid+arb0;
    dummyd96f7c97_data_1ba_1172 = arbmid+arb0;
    dummyd96f7c97_data_1bc_1173 = arbmid+arb32;
    dummyd96f7c97_data_1be_1174 = arbmid-arb32;
    dummyd96f7c97_data_1c0_1175 = arbmid+arb0;
    dummyd96f7c97_data_1c2_1176 = arbmid+arb32;
    dummyd96f7c97_data_1c4_1177 = arbmid+arb0;
    dummyd96f7c97_data_1c6_1178 = arbmid-arb32;
    dummyd96f7c97_data_1c8_1179 = arbmid+arb0;
    dummyd96f7c97_data_1ca_1180 = arbmid+arb0;
    dummyd96f7c97_data_1cc_1181 = arbmid-arb32;
    dummyd96f7c97_data_1ce_1182 = arbmid-arb32;
    dummyd96f7c97_data_1d0_1183 = arbmid+arb32;
    dummyd96f7c97_data_1d2_1184 = arbmid+arb0;
    dummyd96f7c97_data_1d4_1185 = arbmid-arb32;
    dummyd96f7c97_data_1d6_1186 = arbmid+arb0;
    dummyd96f7c97_data_1d8_1187 = arbmid+arb0;
    dummyd96f7c97_data_1da_1188 = arbmid+arb0;
    dummyd96f7c97_data_1dc_1189 = arbmid-arb32;
    dummyd96f7c97_data_1de_1190 = arbmid+arb32;
    strackend2 = arbmid+arb0;
    dummyd96f7c97_data_1e2_1194 = arbmid-arb16;
    dummyd96f7c97_data_1e4_1195 = arbmid+arb0;
    dummyd96f7c97_data_1e6_1196 = arbmid+arb16;
    dummyd96f7c97_data_1e8_1197 = arbmid+arb0;
    dummyd96f7c97_data_1ea_1198 = arbmid+arb0;
    dummyd96f7c97_data_1ec_1199 = arbmid+arb16;
    dummyd96f7c97_data_1ee_1200 = arbmid+arb16;
    dummyd96f7c97_data_1f0_1201 = arbmid-arb16;
    dummyd96f7c97_data_1f2_1202 = arbmid+arb0;
    dummyd96f7c97_data_1f4_1203 = arbmid+arb16;
    dummyd96f7c97_data_1f6_1204 = arbmid+arb0;
    dummyd96f7c97_data_1f8_1205 = arbmid+arb0;
    dummyd96f7c97_data_1fa_1206 = arbmid+arb0;
    dummyd96f7c97_data_1fc_1207 = arbmid+arb16;
    dummyd96f7c97_data_1fe_1208 = arbmid-arb16;
    dummyd96f7c97_data_200_1209 = arbmid+arb0;
    dummyd96f7c97_data_202_1210 = arbmid+arb16;
    dummyd96f7c97_data_204_1211 = arbmid+arb0;
    dummyd96f7c97_data_206_1212 = arbmid-arb16;
    dummyd96f7c97_data_208_1213 = arbmid+arb0;
    dummyd96f7c97_data_20a_1214 = arbmid+arb0;
    dummyd96f7c97_data_20c_1215 = arbmid-arb16;
    dummyd96f7c97_data_20e_1216 = arbmid-arb16;
    dummyd96f7c97_data_210_1217 = arbmid+arb16;
    dummyd96f7c97_data_212_1218 = arbmid+arb0;
    dummyd96f7c97_data_214_1219 = arbmid-arb16;
    dummyd96f7c97_data_216_1220 = arbmid+arb0;
    dummyd96f7c97_data_218_1221 = arbmid+arb0;
    dummyd96f7c97_data_21a_1222 = arbmid+arb0;
    dummyd96f7c97_data_21c_1223 = arbmid-arb16;
    dummyd96f7c97_data_21e_1224 = arbmid+arb16;
    dtrackend16 = arbmid-arb64;
    dummyd96f7c97_data_222_1228 = arbmid+arb0;
    dummyd96f7c97_data_224_1229 = arbmid+arb64;
    dummyd96f7c97_data_226_1230 = arbmid+arb0;
    dummyd96f7c97_data_228_1231 = arbmid-arb64;
    dummyd96f7c97_data_22a_1232 = arbmid+arb64;
    dummyd96f7c97_data_22c_1233 = arbmid+arb64;
    dummyd96f7c97_data_22e_1234 = arbmid-arb64;
    dummyd96f7c97_data_230_1235 = arbmid+arb0;
    dummyd96f7c97_data_232_1236 = arbmid+arb64;
    dummyd96f7c97_data_234_1237 = arbmid+arb0;
    dummyd96f7c97_data_236_1238 = arbmid-arb64;
    dummyd96f7c97_data_238_1239 = arbmid+arb64;
    dummyd96f7c97_data_23a_1240 = arbmid+arb64;
    dummyd96f7c97_data_23c_1241 = arbmid-arb64;
    dummyd96f7c97_data_23e_1242 = arbmid-arb64;
    dummyd96f7c97_data_240_1243 = arbmid+arb64;
    dummyd96f7c97_data_242_1244 = arbmid+arb0;
    dummyd96f7c97_data_244_1245 = arbmid-arb64;
    dummyd96f7c97_data_246_1246 = arbmid+arb0;
    dummyd96f7c97_data_248_1247 = arbmid+arb64;
    dummyd96f7c97_data_24a_1248 = arbmid-arb64;
    dummyd96f7c97_data_24c_1249 = arbmid-arb64;
    dummyd96f7c97_data_24e_1250 = arbmid+arb64;
    dummyd96f7c97_data_250_1251 = arbmid+arb0;
    dummyd96f7c97_data_252_1252 = arbmid-arb64;
    dummyd96f7c97_data_254_1253 = arbmid+arb0;
    dummyd96f7c97_data_256_1254 = arbmid+arb64;
    dummyd96f7c97_data_258_1255 = arbmid-arb64;
    dummyd96f7c97_data_25a_1256 = arbmid-arb64;
    dummyd96f7c97_data_25c_1257 = arbmid+arb64;
    dummyd96f7c97_data_25e_1258 = arbmid+arb64;

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
        

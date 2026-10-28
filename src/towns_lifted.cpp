/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "towns.h"

	
 __attribute__((weak)) bool drawtown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawtown, _state);}

 __attribute__((weak)) bool makevertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmakevertex1, _state);}

 __attribute__((weak)) bool scanvertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex1, _state);}

 __attribute__((weak)) bool scanvertex2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex2, _state);}

 __attribute__((weak)) bool scanvertex8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanvertex8, _state);}

 static bool viscode_9_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_9_proc, _state);}

 static bool contlines(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontlines, _state);}

 static bool contpolys(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontpolys, _state);}

 static bool exitmakevert1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmakevert1, _state);}

 static bool exittowns(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittowns, _state);}

 static bool exitvertex1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex1, _state);}

 static bool exitvertex2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex2, _state);}

 static bool exitvertex8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitvertex8, _state);}

 static bool nextlineface(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextlineface, _state);}

 static bool nextpoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextpoly, _state);}

 static bool nextpolyface(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextpolyface, _state);}

 static bool scaleok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscaleok, _state);}

 static bool skippoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippoly, _state);}

	
	#include "towns_default_seg_lifted.cpp"
#include "towns_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
        case m2c::kcontlines: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontpolys: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawtown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmakevert1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittowns: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitvertex8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmakevertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmakevertloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextlineface: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextpoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextpolyface: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kscaleok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertex1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertex2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanvertex8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvertexloop8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kviscode_9_proc: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_towns()
          {
              dummy72722ef9_data_0_966 = offset(featobj1,town1);
    dummy72722ef9_data_2_967 = offset(featobj1,town2);
    dummy72722ef9_data_4_968 = offset(featobj1,town3);
    dummy72722ef9_data_6_969 = offset(featobj1,town4);
    dummy72722ef9_data_8_970 = offset(featobj1,town5);
    dummy72722ef9_data_a_971 = offset(featobj1,town6);
    dummy72722ef9_data_c_972 = offset(featobj1,town7);
    dummy72722ef9_data_e_973 = offset(featobj1,town8);
    dummy72722ef9_data_10_974 = offset(featobj1,town9);
    dummy72722ef9_data_12_975 = offset(featobj1,town10);
    dummy72722ef9_data_14_976 = offset(featobj1,town11);
    dummy72722ef9_data_16_977 = offset(featobj1,town12);
    dummy72722ef9_data_18_978 = offset(featobj1,town13);
    scanvertexlist = m2c::kglobal_scanvertex1;
    dummy72722ef9_data_1c_983 = m2c::kglobal_scanvertex2;
    dummy72722ef9_data_1e_984 = m2c::kglobal_scanvertex8;
    {db tmp999[5]={0,0,0,0,255};memcpy(&roadpoly,&tmp999,sizeof tmp999);}
    endtype = arbmid-arb128;
    dummy72722ef9_data_27_993 = arbmid+arb0;
    dummy72722ef9_data_29_994 = arbmid+arb128;
    dummy72722ef9_data_2b_995 = arbmid+arb0;
    dummy72722ef9_data_2d_996 = arbmid-arb128;
    dummy72722ef9_data_2f_997 = arbmid+arb128;
    dummy72722ef9_data_31_998 = arbmid+arb128;
    dummy72722ef9_data_33_999 = arbmid-arb128;
    dummy72722ef9_data_35_1000 = arbmid+arb0;
    dummy72722ef9_data_37_1001 = arbmid+arb128;
    dummy72722ef9_data_39_1002 = arbmid+arb0;
    dummy72722ef9_data_3b_1003 = arbmid-arb128;
    dummy72722ef9_data_3d_1004 = arbmid+arb128;
    dummy72722ef9_data_3f_1005 = arbmid+arb128;
    dummy72722ef9_data_41_1006 = arbmid-arb128;
    dummy72722ef9_data_43_1007 = arbmid-arb128;
    dummy72722ef9_data_45_1008 = arbmid+arb128;
    dummy72722ef9_data_47_1009 = arbmid+arb0;
    dummy72722ef9_data_49_1010 = arbmid-arb128;
    dummy72722ef9_data_4b_1011 = arbmid+arb0;
    dummy72722ef9_data_4d_1012 = arbmid+arb128;
    dummy72722ef9_data_4f_1013 = arbmid-arb128;
    dummy72722ef9_data_51_1014 = arbmid-arb128;
    dummy72722ef9_data_53_1015 = arbmid+arb128;
    dummy72722ef9_data_55_1016 = arbmid+arb0;
    dummy72722ef9_data_57_1017 = arbmid-arb128;
    dummy72722ef9_data_59_1018 = arbmid+arb0;
    dummy72722ef9_data_5b_1019 = arbmid+arb128;
    dummy72722ef9_data_5d_1020 = arbmid-arb128;
    dummy72722ef9_data_5f_1021 = arbmid-arb128;
    dummy72722ef9_data_61_1022 = arbmid+arb128;
    dummy72722ef9_data_63_1023 = arbmid+arb128;
    {db tmp999[3]={0,122,96};memcpy(&dummy72722ef9_featobj1_65_1031,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,122,102};memcpy(&dummy72722ef9_featobj1_68_1032,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,128,104};memcpy(&dummy72722ef9_featobj1_6b_1033,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,130,106};memcpy(&dummy72722ef9_featobj1_6e_1034,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,132,124};memcpy(&dummy72722ef9_featobj1_71_1035,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,132,132};memcpy(&dummy72722ef9_featobj1_74_1036,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,150};memcpy(&dummy72722ef9_featobj1_77_1037,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,128,154};memcpy(&dummy72722ef9_featobj1_7a_1038,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,124,154};memcpy(&dummy72722ef9_featobj1_7d_1039,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,120,152};memcpy(&dummy72722ef9_featobj1_80_1040,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,118,146};memcpy(&dummy72722ef9_featobj1_83_1041,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,118,124};memcpy(&dummy72722ef9_featobj1_86_1042,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,122,102};memcpy(&dummy72722ef9_featobj1_89_1043,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,118,106};memcpy(&dummy72722ef9_featobj1_8c_1044,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,114,110};memcpy(&dummy72722ef9_featobj1_8f_1045,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,114,118};memcpy(&dummy72722ef9_featobj1_92_1046,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,114,118};memcpy(&dummy72722ef9_featobj1_95_1047,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,112,120};memcpy(&dummy72722ef9_featobj1_98_1048,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,112,124};memcpy(&dummy72722ef9_featobj1_9b_1049,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,114,126};memcpy(&dummy72722ef9_featobj1_9e_1050,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,116,126};memcpy(&dummy72722ef9_featobj1_a1_1051,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,118,120};memcpy(&dummy72722ef9_featobj1_a4_1052,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,116,118};memcpy(&dummy72722ef9_featobj1_a7_1053,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,118,122};memcpy(&dummy72722ef9_featobj1_aa_1054,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,120,122};memcpy(&dummy72722ef9_featobj1_ad_1055,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,124,126};memcpy(&dummy72722ef9_featobj1_b0_1056,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,112,122};memcpy(&dummy72722ef9_featobj1_b3_1057,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,110,124};memcpy(&dummy72722ef9_featobj1_b6_1058,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,110,144};memcpy(&dummy72722ef9_featobj1_b9_1059,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,112,146};memcpy(&dummy72722ef9_featobj1_bc_1060,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,118,146};memcpy(&dummy72722ef9_featobj1_bf_1061,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,124};memcpy(&dummy72722ef9_featobj1_c2_1062,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,128};memcpy(&dummy72722ef9_featobj1_c5_1063,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,132};memcpy(&dummy72722ef9_featobj1_c8_1064,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,132,136};memcpy(&dummy72722ef9_featobj1_cb_1065,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,142,136};memcpy(&dummy72722ef9_featobj1_ce_1066,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,142,140};memcpy(&dummy72722ef9_featobj1_d1_1067,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,136,140};memcpy(&dummy72722ef9_featobj1_d4_1068,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,136,150};memcpy(&dummy72722ef9_featobj1_d7_1069,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,150};memcpy(&dummy72722ef9_featobj1_da_1070,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_dd_1071 = 255;
    dummy72722ef9_featobj1_de_1072 = offset(featobj1,town1_1);
    town1_1 = 57;
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,255};memcpy(&dummy72722ef9_featobj1_e2_1075,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,24,26,28,30,255};memcpy(&dummy72722ef9_featobj1_f0_1076,&tmp999,sizeof tmp999);}
    {db tmp999[11]={col_grey2,32,34,36,38,40,22,42,44,32,255};memcpy(&dummy72722ef9_featobj1_f6_1077,&tmp999,sizeof tmp999);}
    {db tmp999[5]={col_grey2,46,48,50,255};memcpy(&dummy72722ef9_featobj1_101_1078,&tmp999,sizeof tmp999);}
    {db tmp999[7]={col_grey2,52,54,56,58,60,255};memcpy(&dummy72722ef9_featobj1_106_1079,&tmp999,sizeof tmp999);}
    {db tmp999[5]={col_grey2,62,64,66,255};memcpy(&dummy72722ef9_featobj1_10d_1081,&tmp999,sizeof tmp999);}
    {db tmp999[8]={col_grey2,68,70,72,74,76,78,255};memcpy(&dummy72722ef9_featobj1_112_1082,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_11a_1083 = 255;
    {db tmp999[3]={16,96,134};memcpy(&dummy72722ef9_featobj1_11b_1086,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,146,134};memcpy(&dummy72722ef9_featobj1_11e_1087,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,150,130};memcpy(&dummy72722ef9_featobj1_121_1088,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,150,126};memcpy(&dummy72722ef9_featobj1_124_1089,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,148,124};memcpy(&dummy72722ef9_featobj1_127_1090,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,138,124};memcpy(&dummy72722ef9_featobj1_12a_1091,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,116};memcpy(&dummy72722ef9_featobj1_12d_1092,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,130,112};memcpy(&dummy72722ef9_featobj1_130_1093,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,108};memcpy(&dummy72722ef9_featobj1_133_1094,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,148,108};memcpy(&dummy72722ef9_featobj1_136_1095,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,150,110};memcpy(&dummy72722ef9_featobj1_139_1096,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,150,122};memcpy(&dummy72722ef9_featobj1_13c_1097,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,148,124};memcpy(&dummy72722ef9_featobj1_13f_1098,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,126,134};memcpy(&dummy72722ef9_featobj1_142_1099,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,130,138};memcpy(&dummy72722ef9_featobj1_145_1100,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,130,140};memcpy(&dummy72722ef9_featobj1_148_1101,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,142};memcpy(&dummy72722ef9_featobj1_14b_1102,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,134,142};memcpy(&dummy72722ef9_featobj1_14e_1103,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,136,140};memcpy(&dummy72722ef9_featobj1_151_1104,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,136,138};memcpy(&dummy72722ef9_featobj1_154_1105,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,140,134};memcpy(&dummy72722ef9_featobj1_157_1106,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,136,138};memcpy(&dummy72722ef9_featobj1_15a_1107,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,134,136};memcpy(&dummy72722ef9_featobj1_15d_1108,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,136};memcpy(&dummy72722ef9_featobj1_160_1109,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,130,138};memcpy(&dummy72722ef9_featobj1_163_1110,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,132,142};memcpy(&dummy72722ef9_featobj1_166_1111,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,158};memcpy(&dummy72722ef9_featobj1_169_1112,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,160};memcpy(&dummy72722ef9_featobj1_16c_1113,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,158};memcpy(&dummy72722ef9_featobj1_16f_1114,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,130,160};memcpy(&dummy72722ef9_featobj1_172_1115,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_175_1116 = 255;
    dummy72722ef9_featobj1_176_1117 = offset(featobj1,town2_1);
    town2_1 = 41;
    {db tmp999[15]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,255};memcpy(&dummy72722ef9_featobj1_17a_1120,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,26,28,30,32,34,36,38,40,255};memcpy(&dummy72722ef9_featobj1_189_1121,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,42,44,46,48,255};memcpy(&dummy72722ef9_featobj1_193_1122,&tmp999,sizeof tmp999);}
    {db tmp999[5]={col_grey2,50,52,54,255};memcpy(&dummy72722ef9_featobj1_199_1123,&tmp999,sizeof tmp999);}
    {db tmp999[4]={col_grey2,56,58,255};memcpy(&dummy72722ef9_featobj1_19e_1124,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_1a2_1125 = 255;
    {db tmp999[3]={24,96,138};memcpy(&dummy72722ef9_featobj1_1a3_1128,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,136};memcpy(&dummy72722ef9_featobj1_1a6_1129,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,134};memcpy(&dummy72722ef9_featobj1_1a9_1130,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,100,132};memcpy(&dummy72722ef9_featobj1_1ac_1131,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,102,132};memcpy(&dummy72722ef9_featobj1_1af_1132,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,104,134};memcpy(&dummy72722ef9_featobj1_1b2_1133,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,104,136};memcpy(&dummy72722ef9_featobj1_1b5_1134,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,102,138};memcpy(&dummy72722ef9_featobj1_1b8_1135,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,100,138};memcpy(&dummy72722ef9_featobj1_1bb_1136,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,98,136};memcpy(&dummy72722ef9_featobj1_1be_1137,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,98,134};memcpy(&dummy72722ef9_featobj1_1c1_1138,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,96,132};memcpy(&dummy72722ef9_featobj1_1c4_1139,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,102,138};memcpy(&dummy72722ef9_featobj1_1c7_1140,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,106,142};memcpy(&dummy72722ef9_featobj1_1ca_1141,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,158,142};memcpy(&dummy72722ef9_featobj1_1cd_1142,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,160,140};memcpy(&dummy72722ef9_featobj1_1d0_1143,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,160,132};memcpy(&dummy72722ef9_featobj1_1d3_1144,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,158,130};memcpy(&dummy72722ef9_featobj1_1d6_1145,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,104,130};memcpy(&dummy72722ef9_featobj1_1d9_1146,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,102,132};memcpy(&dummy72722ef9_featobj1_1dc_1147,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,96,124};memcpy(&dummy72722ef9_featobj1_1df_1148,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,122};memcpy(&dummy72722ef9_featobj1_1e2_1149,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,148,122};memcpy(&dummy72722ef9_featobj1_1e5_1150,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,150,120};memcpy(&dummy72722ef9_featobj1_1e8_1151,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,150,118};memcpy(&dummy72722ef9_featobj1_1eb_1152,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,144,112};memcpy(&dummy72722ef9_featobj1_1ee_1153,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,98,112};memcpy(&dummy72722ef9_featobj1_1f1_1154,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,96,110};memcpy(&dummy72722ef9_featobj1_1f4_1155,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,122};memcpy(&dummy72722ef9_featobj1_1f7_1156,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,98,112};memcpy(&dummy72722ef9_featobj1_1fa_1157,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_1fd_1158 = 255;
    dummy72722ef9_featobj1_1fe_1159 = offset(featobj1,town3_1);
    town3_1 = 39;
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,255};memcpy(&dummy72722ef9_featobj1_202_1162,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,24,26,28,30,32,34,36,38,255};memcpy(&dummy72722ef9_featobj1_210_1163,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,40,42,44,46,48,50,52,54,255};memcpy(&dummy72722ef9_featobj1_21a_1164,&tmp999,sizeof tmp999);}
    {db tmp999[4]={col_grey2,56,58,255};memcpy(&dummy72722ef9_featobj1_224_1165,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_228_1166 = 255;
    {db tmp999[3]={0,120,112};memcpy(&dummy72722ef9_featobj1_229_1169,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,120,166};memcpy(&dummy72722ef9_featobj1_22c_1170,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,124,170};memcpy(&dummy72722ef9_featobj1_22f_1171,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,134,170};memcpy(&dummy72722ef9_featobj1_232_1172,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,140,166};memcpy(&dummy72722ef9_featobj1_235_1173,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,140,134};memcpy(&dummy72722ef9_featobj1_238_1174,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,134};memcpy(&dummy72722ef9_featobj1_23b_1175,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,138};memcpy(&dummy72722ef9_featobj1_23e_1176,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,144};memcpy(&dummy72722ef9_featobj1_241_1177,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,132,150};memcpy(&dummy72722ef9_featobj1_244_1178,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,156};memcpy(&dummy72722ef9_featobj1_247_1179,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,140,156};memcpy(&dummy72722ef9_featobj1_24a_1180,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,120,96};memcpy(&dummy72722ef9_featobj1_24d_1181,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,120,106};memcpy(&dummy72722ef9_featobj1_250_1182,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,118,108};memcpy(&dummy72722ef9_featobj1_253_1183,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,118,110};memcpy(&dummy72722ef9_featobj1_256_1184,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,120,112};memcpy(&dummy72722ef9_featobj1_259_1185,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,122,112};memcpy(&dummy72722ef9_featobj1_25c_1186,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,124,110};memcpy(&dummy72722ef9_featobj1_25f_1187,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,124,108};memcpy(&dummy72722ef9_featobj1_262_1188,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,122,106};memcpy(&dummy72722ef9_featobj1_265_1189,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,108,118};memcpy(&dummy72722ef9_featobj1_268_1190,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,108,114};memcpy(&dummy72722ef9_featobj1_26b_1191,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,112,110};memcpy(&dummy72722ef9_featobj1_26e_1192,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,124,110};memcpy(&dummy72722ef9_featobj1_271_1193,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,110};memcpy(&dummy72722ef9_featobj1_274_1194,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,104};memcpy(&dummy72722ef9_featobj1_277_1195,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,102};memcpy(&dummy72722ef9_featobj1_27a_1196,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,140,102};memcpy(&dummy72722ef9_featobj1_27d_1197,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,142,104};memcpy(&dummy72722ef9_featobj1_280_1198,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,142,112};memcpy(&dummy72722ef9_featobj1_283_1199,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,138,116};memcpy(&dummy72722ef9_featobj1_286_1200,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,116};memcpy(&dummy72722ef9_featobj1_289_1201,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,130,114};memcpy(&dummy72722ef9_featobj1_28c_1202,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,110};memcpy(&dummy72722ef9_featobj1_28f_1203,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_292_1204 = 255;
    dummy72722ef9_featobj1_293_1205 = offset(featobj1,town4_1);
    town4_1 = 46;
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,255};memcpy(&dummy72722ef9_featobj1_297_1208,&tmp999,sizeof tmp999);}
    {db tmp999[12]={col_grey2,24,26,28,30,32,34,36,38,40,26,255};memcpy(&dummy72722ef9_featobj1_2a5_1209,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,42,44,46,30,255};memcpy(&dummy72722ef9_featobj1_2b1_1210,&tmp999,sizeof tmp999);}
    {db tmp999[13]={col_grey2,48,50,52,54,56,58,60,62,64,66,68,255};memcpy(&dummy72722ef9_featobj1_2b7_1211,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_2c4_1212 = 255;
    {db tmp999[3]={32,156,160};memcpy(&dummy72722ef9_featobj1_2c5_1215,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,156,158};memcpy(&dummy72722ef9_featobj1_2c8_1216,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,158,156};memcpy(&dummy72722ef9_featobj1_2cb_1217,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,160,156};memcpy(&dummy72722ef9_featobj1_2ce_1218,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,156,158};memcpy(&dummy72722ef9_featobj1_2d1_1219,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,144,158};memcpy(&dummy72722ef9_featobj1_2d4_1220,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,136,152};memcpy(&dummy72722ef9_featobj1_2d7_1221,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,130,150};memcpy(&dummy72722ef9_featobj1_2da_1222,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,128};memcpy(&dummy72722ef9_featobj1_2dd_1223,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,136,122};memcpy(&dummy72722ef9_featobj1_2e0_1224,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,160,122};memcpy(&dummy72722ef9_featobj1_2e3_1225,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,132,160};memcpy(&dummy72722ef9_featobj1_2e6_1226,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,176};memcpy(&dummy72722ef9_featobj1_2e9_1227,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,180};memcpy(&dummy72722ef9_featobj1_2ec_1228,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,184};memcpy(&dummy72722ef9_featobj1_2ef_1229,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,138,184};memcpy(&dummy72722ef9_featobj1_2f2_1230,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,138,164};memcpy(&dummy72722ef9_featobj1_2f5_1231,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,136,162};memcpy(&dummy72722ef9_featobj1_2f8_1232,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,132,162};memcpy(&dummy72722ef9_featobj1_2fb_1233,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,144,158};memcpy(&dummy72722ef9_featobj1_2fe_1234,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,144,122};memcpy(&dummy72722ef9_featobj1_301_1235,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,160,152};memcpy(&dummy72722ef9_featobj1_304_1236,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,136,152};memcpy(&dummy72722ef9_featobj1_307_1237,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,136,122};memcpy(&dummy72722ef9_featobj1_30a_1238,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_30d_1239 = 255;
    dummy72722ef9_featobj1_30e_1240 = offset(featobj1,town5_1);
    town5_1 = 35;
    {db tmp999[6]={col_grey2,0,2,4,6,255};memcpy(&dummy72722ef9_featobj1_312_1243,&tmp999,sizeof tmp999);}
    {db tmp999[9]={col_grey2,8,10,12,14,16,18,20,255};memcpy(&dummy72722ef9_featobj1_318_1244,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,22,24,26,28,30,32,34,36,255};memcpy(&dummy72722ef9_featobj1_321_1245,&tmp999,sizeof tmp999);}
    {db tmp999[4]={col_grey2,38,40,255};memcpy(&dummy72722ef9_featobj1_32b_1246,&tmp999,sizeof tmp999);}
    {db tmp999[5]={col_grey2,42,44,46,255};memcpy(&dummy72722ef9_featobj1_32f_1247,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_334_1248 = 255;
    {db tmp999[3]={24,118,160};memcpy(&dummy72722ef9_featobj1_335_1251,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,120,158};memcpy(&dummy72722ef9_featobj1_338_1252,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,120,156};memcpy(&dummy72722ef9_featobj1_33b_1253,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,112,156};memcpy(&dummy72722ef9_featobj1_33e_1254,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,110,154};memcpy(&dummy72722ef9_featobj1_341_1255,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,110,142};memcpy(&dummy72722ef9_featobj1_344_1256,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,112,140};memcpy(&dummy72722ef9_featobj1_347_1257,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,128,140};memcpy(&dummy72722ef9_featobj1_34a_1258,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,130,142};memcpy(&dummy72722ef9_featobj1_34d_1259,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,130,154};memcpy(&dummy72722ef9_featobj1_350_1260,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,128,156};memcpy(&dummy72722ef9_featobj1_353_1261,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,120,158};memcpy(&dummy72722ef9_featobj1_356_1262,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,122,160};memcpy(&dummy72722ef9_featobj1_359_1263,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,120,162};memcpy(&dummy72722ef9_featobj1_35c_1264,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,120,166};memcpy(&dummy72722ef9_featobj1_35f_1265,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,118,168};memcpy(&dummy72722ef9_featobj1_362_1266,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,112,168};memcpy(&dummy72722ef9_featobj1_365_1267,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,110,170};memcpy(&dummy72722ef9_featobj1_368_1268,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,110,178};memcpy(&dummy72722ef9_featobj1_36b_1269,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,112,180};memcpy(&dummy72722ef9_featobj1_36e_1270,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,114,180};memcpy(&dummy72722ef9_featobj1_371_1271,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,116,178};memcpy(&dummy72722ef9_featobj1_374_1272,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,116,168};memcpy(&dummy72722ef9_featobj1_377_1273,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,118,160};memcpy(&dummy72722ef9_featobj1_37a_1274,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,120,162};memcpy(&dummy72722ef9_featobj1_37d_1275,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,118,164};memcpy(&dummy72722ef9_featobj1_380_1276,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,112,164};memcpy(&dummy72722ef9_featobj1_383_1277,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,110,162};memcpy(&dummy72722ef9_featobj1_386_1278,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,110,158};memcpy(&dummy72722ef9_featobj1_389_1279,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,112,156};memcpy(&dummy72722ef9_featobj1_38c_1280,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,96,164};memcpy(&dummy72722ef9_featobj1_38f_1281,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,104,164};memcpy(&dummy72722ef9_featobj1_392_1282,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,106,162};memcpy(&dummy72722ef9_featobj1_395_1283,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,106,156};memcpy(&dummy72722ef9_featobj1_398_1284,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,104,154};memcpy(&dummy72722ef9_featobj1_39b_1285,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,104,140};memcpy(&dummy72722ef9_featobj1_39e_1286,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,102,138};memcpy(&dummy72722ef9_featobj1_3a1_1287,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,94,138};memcpy(&dummy72722ef9_featobj1_3a4_1288,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,90,142};memcpy(&dummy72722ef9_featobj1_3a7_1289,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,90,162};memcpy(&dummy72722ef9_featobj1_3aa_1290,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,92,164};memcpy(&dummy72722ef9_featobj1_3ad_1291,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,96,160};memcpy(&dummy72722ef9_featobj1_3b0_1292,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,96,138};memcpy(&dummy72722ef9_featobj1_3b3_1293,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_3b6_1294 = 255;
    dummy72722ef9_featobj1_3b7_1295 = offset(featobj1,town6_1);
    town6_1 = 56;
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,4,255};memcpy(&dummy72722ef9_featobj1_3bb_1298,&tmp999,sizeof tmp999);}
    {db tmp999[14]={col_grey2,22,24,26,28,30,32,34,36,38,40,42,44,255};memcpy(&dummy72722ef9_featobj1_3c9_1299,&tmp999,sizeof tmp999);}
    {db tmp999[9]={col_grey2,46,48,50,52,54,56,58,255};memcpy(&dummy72722ef9_featobj1_3d7_1300,&tmp999,sizeof tmp999);}
    {db tmp999[14]={col_grey2,60,62,64,66,68,70,72,74,76,78,80,60,255};memcpy(&dummy72722ef9_featobj1_3e0_1301,&tmp999,sizeof tmp999);}
    {db tmp999[4]={col_grey2,82,84,255};memcpy(&dummy72722ef9_featobj1_3ee_1302,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_3f2_1303 = 255;
    {db tmp999[3]={16,96,130};memcpy(&dummy72722ef9_featobj1_3f3_1306,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,130};memcpy(&dummy72722ef9_featobj1_3f6_1307,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,128};memcpy(&dummy72722ef9_featobj1_3f9_1308,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,130,124};memcpy(&dummy72722ef9_featobj1_3fc_1309,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,120};memcpy(&dummy72722ef9_featobj1_3ff_1310,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,108};memcpy(&dummy72722ef9_featobj1_402_1311,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,134,106};memcpy(&dummy72722ef9_featobj1_405_1312,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,144,106};memcpy(&dummy72722ef9_featobj1_408_1313,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,148,110};memcpy(&dummy72722ef9_featobj1_40b_1314,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,154,110};memcpy(&dummy72722ef9_featobj1_40e_1315,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,162,114};memcpy(&dummy72722ef9_featobj1_411_1316,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,164,118};memcpy(&dummy72722ef9_featobj1_414_1317,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,164,128};memcpy(&dummy72722ef9_featobj1_417_1318,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,162,130};memcpy(&dummy72722ef9_featobj1_41a_1319,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,158,130};memcpy(&dummy72722ef9_featobj1_41d_1320,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,156,128};memcpy(&dummy72722ef9_featobj1_420_1321,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,156,126};memcpy(&dummy72722ef9_featobj1_423_1322,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,158,124};memcpy(&dummy72722ef9_featobj1_426_1323,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,162,124};memcpy(&dummy72722ef9_featobj1_429_1324,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,164,126};memcpy(&dummy72722ef9_featobj1_42c_1325,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,132,130};memcpy(&dummy72722ef9_featobj1_42f_1326,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,154,130};memcpy(&dummy72722ef9_featobj1_432_1327,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,156,128};memcpy(&dummy72722ef9_featobj1_435_1328,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,118};memcpy(&dummy72722ef9_featobj1_438_1329,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,152,118};memcpy(&dummy72722ef9_featobj1_43b_1330,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,158,124};memcpy(&dummy72722ef9_featobj1_43e_1331,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,152,118};memcpy(&dummy72722ef9_featobj1_441_1332,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,152,110};memcpy(&dummy72722ef9_featobj1_444_1333,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_447_1334 = 255;
    dummy72722ef9_featobj1_448_1335 = offset(featobj1,town7_1);
    town7_1 = 37;
    {db tmp999[22]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,255};memcpy(&dummy72722ef9_featobj1_44c_1338,&tmp999,sizeof tmp999);}
    {db tmp999[5]={col_grey2,40,42,44,255};memcpy(&dummy72722ef9_featobj1_462_1339,&tmp999,sizeof tmp999);}
    {db tmp999[5]={col_grey2,46,48,50,255};memcpy(&dummy72722ef9_featobj1_467_1340,&tmp999,sizeof tmp999);}
    {db tmp999[4]={col_grey2,52,54,255};memcpy(&dummy72722ef9_featobj1_46c_1341,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_470_1342 = 255;
    {db tmp999[3]={16,96,120};memcpy(&dummy72722ef9_featobj1_471_1345,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,120};memcpy(&dummy72722ef9_featobj1_474_1346,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,100,118};memcpy(&dummy72722ef9_featobj1_477_1347,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,102,118};memcpy(&dummy72722ef9_featobj1_47a_1348,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,102,114};memcpy(&dummy72722ef9_featobj1_47d_1349,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,104,112};memcpy(&dummy72722ef9_featobj1_480_1350,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,110,112};memcpy(&dummy72722ef9_featobj1_483_1351,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,114,108};memcpy(&dummy72722ef9_featobj1_486_1352,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,118,108};memcpy(&dummy72722ef9_featobj1_489_1353,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,120,110};memcpy(&dummy72722ef9_featobj1_48c_1354,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,144,124};memcpy(&dummy72722ef9_featobj1_48f_1355,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,154,138};memcpy(&dummy72722ef9_featobj1_492_1356,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,154,156};memcpy(&dummy72722ef9_featobj1_495_1357,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,156,158};memcpy(&dummy72722ef9_featobj1_498_1358,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,158,156};memcpy(&dummy72722ef9_featobj1_49b_1359,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,156,158};memcpy(&dummy72722ef9_featobj1_49e_1360,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,156,162};memcpy(&dummy72722ef9_featobj1_4a1_1361,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,158,164};memcpy(&dummy72722ef9_featobj1_4a4_1362,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,162,164};memcpy(&dummy72722ef9_featobj1_4a7_1363,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,164,162};memcpy(&dummy72722ef9_featobj1_4aa_1364,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,164,158};memcpy(&dummy72722ef9_featobj1_4ad_1365,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,162,156};memcpy(&dummy72722ef9_featobj1_4b0_1366,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,98,120};memcpy(&dummy72722ef9_featobj1_4b3_1367,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,98,122};memcpy(&dummy72722ef9_featobj1_4b6_1368,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,100,124};memcpy(&dummy72722ef9_featobj1_4b9_1369,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,102,124};memcpy(&dummy72722ef9_featobj1_4bc_1370,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,104,122};memcpy(&dummy72722ef9_featobj1_4bf_1371,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,104,120};memcpy(&dummy72722ef9_featobj1_4c2_1372,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,102,118};memcpy(&dummy72722ef9_featobj1_4c5_1373,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,104,122};memcpy(&dummy72722ef9_featobj1_4c8_1374,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,116,122};memcpy(&dummy72722ef9_featobj1_4cb_1375,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,136,134};memcpy(&dummy72722ef9_featobj1_4ce_1376,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,154,156};memcpy(&dummy72722ef9_featobj1_4d1_1377,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,156,96};memcpy(&dummy72722ef9_featobj1_4d4_1378,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,156,98};memcpy(&dummy72722ef9_featobj1_4d7_1379,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,158,100};memcpy(&dummy72722ef9_featobj1_4da_1380,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,160,100};memcpy(&dummy72722ef9_featobj1_4dd_1381,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,156,98};memcpy(&dummy72722ef9_featobj1_4e0_1382,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,122,98};memcpy(&dummy72722ef9_featobj1_4e3_1383,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,120,100};memcpy(&dummy72722ef9_featobj1_4e6_1384,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,120,104};memcpy(&dummy72722ef9_featobj1_4e9_1385,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,114};memcpy(&dummy72722ef9_featobj1_4ec_1386,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,148,120};memcpy(&dummy72722ef9_featobj1_4ef_1387,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,160,120};memcpy(&dummy72722ef9_featobj1_4f2_1388,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_4f5_1389 = 255;
    dummy72722ef9_featobj1_4f6_1390 = offset(featobj1,town8_1);
    town8_1 = 58;
    {db tmp999[16]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,255};memcpy(&dummy72722ef9_featobj1_4fa_1393,&tmp999,sizeof tmp999);}
    {db tmp999[11]={col_grey2,28,30,32,34,36,38,40,42,28,255};memcpy(&dummy72722ef9_featobj1_50a_1394,&tmp999,sizeof tmp999);}
    {db tmp999[9]={col_grey2,44,46,48,50,52,54,56,255};memcpy(&dummy72722ef9_featobj1_515_1395,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,58,60,62,64,255};memcpy(&dummy72722ef9_featobj1_51e_1396,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,66,68,70,72,255};memcpy(&dummy72722ef9_featobj1_524_1397,&tmp999,sizeof tmp999);}
    {db tmp999[9]={col_grey2,74,76,78,80,82,84,86,255};memcpy(&dummy72722ef9_featobj1_52a_1398,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_533_1399 = 255;
    {db tmp999[3]={16,96,156};memcpy(&dummy72722ef9_featobj1_534_1402,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,98,156};memcpy(&dummy72722ef9_featobj1_537_1403,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,100,158};memcpy(&dummy72722ef9_featobj1_53a_1404,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,100,160};memcpy(&dummy72722ef9_featobj1_53d_1405,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,156};memcpy(&dummy72722ef9_featobj1_540_1406,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,108,140};memcpy(&dummy72722ef9_featobj1_543_1407,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,114,126};memcpy(&dummy72722ef9_featobj1_546_1408,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,124,116};memcpy(&dummy72722ef9_featobj1_549_1409,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,130,116};memcpy(&dummy72722ef9_featobj1_54c_1410,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,132,118};memcpy(&dummy72722ef9_featobj1_54f_1411,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,126};memcpy(&dummy72722ef9_featobj1_552_1412,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,128,136};memcpy(&dummy72722ef9_featobj1_555_1413,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,114,144};memcpy(&dummy72722ef9_featobj1_558_1414,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,110,154};memcpy(&dummy72722ef9_featobj1_55b_1415,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,108,156};memcpy(&dummy72722ef9_featobj1_55e_1416,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,100,158};memcpy(&dummy72722ef9_featobj1_561_1417,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_564_1418 = 255;
    dummy72722ef9_featobj1_565_1419 = offset(featobj1,town9_1);
    town9_1 = 21;
    {db tmp999[6]={col_grey2,0,2,4,6,255};memcpy(&dummy72722ef9_featobj1_569_1422,&tmp999,sizeof tmp999);}
    {db tmp999[14]={col_grey2,8,10,12,14,16,18,20,22,24,26,28,30,255};memcpy(&dummy72722ef9_featobj1_56f_1423,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_57d_1424 = 255;
    {db tmp999[3]={48,160,130};memcpy(&dummy72722ef9_featobj1_57e_1427,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,134,130};memcpy(&dummy72722ef9_featobj1_581_1428,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,132};memcpy(&dummy72722ef9_featobj1_584_1429,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,138};memcpy(&dummy72722ef9_featobj1_587_1430,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,144};memcpy(&dummy72722ef9_featobj1_58a_1431,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,146};memcpy(&dummy72722ef9_featobj1_58d_1432,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,146,146};memcpy(&dummy72722ef9_featobj1_590_1433,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,156,138};memcpy(&dummy72722ef9_featobj1_593_1434,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,156,132};memcpy(&dummy72722ef9_featobj1_596_1435,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,158,130};memcpy(&dummy72722ef9_featobj1_599_1436,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,140,146};memcpy(&dummy72722ef9_featobj1_59c_1437,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,140,126};memcpy(&dummy72722ef9_featobj1_59f_1438,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,138,124};memcpy(&dummy72722ef9_featobj1_5a2_1439,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,128,124};memcpy(&dummy72722ef9_featobj1_5a5_1440,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,126,126};memcpy(&dummy72722ef9_featobj1_5a8_1441,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,126,152};memcpy(&dummy72722ef9_featobj1_5ab_1442,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,118,158};memcpy(&dummy72722ef9_featobj1_5ae_1443,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,114,158};memcpy(&dummy72722ef9_featobj1_5b1_1444,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,112,156};memcpy(&dummy72722ef9_featobj1_5b4_1445,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,112,102};memcpy(&dummy72722ef9_featobj1_5b7_1446,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,114,100};memcpy(&dummy72722ef9_featobj1_5ba_1447,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,122,100};memcpy(&dummy72722ef9_featobj1_5bd_1448,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,124,102};memcpy(&dummy72722ef9_featobj1_5c0_1449,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,124,120};memcpy(&dummy72722ef9_featobj1_5c3_1450,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,122,122};memcpy(&dummy72722ef9_featobj1_5c6_1451,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,112,122};memcpy(&dummy72722ef9_featobj1_5c9_1452,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,128,124};memcpy(&dummy72722ef9_featobj1_5cc_1453,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,128,122};memcpy(&dummy72722ef9_featobj1_5cf_1454,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,126,120};memcpy(&dummy72722ef9_featobj1_5d2_1455,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,122,124};memcpy(&dummy72722ef9_featobj1_5d5_1456,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,124,126};memcpy(&dummy72722ef9_featobj1_5d8_1457,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,126,126};memcpy(&dummy72722ef9_featobj1_5db_1458,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,124,102};memcpy(&dummy72722ef9_featobj1_5de_1459,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,126,102};memcpy(&dummy72722ef9_featobj1_5e1_1460,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,128,100};memcpy(&dummy72722ef9_featobj1_5e4_1461,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,128,98};memcpy(&dummy72722ef9_featobj1_5e7_1462,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,126,96};memcpy(&dummy72722ef9_featobj1_5ea_1463,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,124,96};memcpy(&dummy72722ef9_featobj1_5ed_1464,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,122,98};memcpy(&dummy72722ef9_featobj1_5f0_1465,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,122,100};memcpy(&dummy72722ef9_featobj1_5f3_1466,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_5f6_1467 = 255;
    dummy72722ef9_featobj1_5f7_1468 = offset(featobj1,town10_1);
    town10_1 = 51;
    {db tmp999[12]={col_grey2,0,2,4,6,8,10,12,14,16,18,255};memcpy(&dummy72722ef9_featobj1_5fb_1471,&tmp999,sizeof tmp999);}
    {db tmp999[18]={col_grey2,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,255};memcpy(&dummy72722ef9_featobj1_607_1472,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,52,54,56,46,48,58,60,62,255};memcpy(&dummy72722ef9_featobj1_619_1473,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,64,66,68,70,72,74,76,78,255};memcpy(&dummy72722ef9_featobj1_623_1474,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_62d_1475 = 255;
    {db tmp999[3]={56,130,100};memcpy(&dummy72722ef9_featobj1_62e_1478,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,116,114};memcpy(&dummy72722ef9_featobj1_631_1479,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,116,124};memcpy(&dummy72722ef9_featobj1_634_1480,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,118,126};memcpy(&dummy72722ef9_featobj1_637_1481,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,118,136};memcpy(&dummy72722ef9_featobj1_63a_1482,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,152};memcpy(&dummy72722ef9_featobj1_63d_1483,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,144,152};memcpy(&dummy72722ef9_featobj1_640_1484,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,146,150};memcpy(&dummy72722ef9_featobj1_643_1485,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,146,118};memcpy(&dummy72722ef9_featobj1_646_1486,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,104};memcpy(&dummy72722ef9_featobj1_649_1487,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,102};memcpy(&dummy72722ef9_featobj1_64c_1488,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,130,100};memcpy(&dummy72722ef9_featobj1_64f_1489,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,98};memcpy(&dummy72722ef9_featobj1_652_1490,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,96};memcpy(&dummy72722ef9_featobj1_655_1491,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,96};memcpy(&dummy72722ef9_featobj1_658_1492,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,136,98};memcpy(&dummy72722ef9_featobj1_65b_1493,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,136,100};memcpy(&dummy72722ef9_featobj1_65e_1494,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,134,102};memcpy(&dummy72722ef9_featobj1_661_1495,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,102};memcpy(&dummy72722ef9_featobj1_664_1496,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,134,96};memcpy(&dummy72722ef9_featobj1_667_1497,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,134,82};memcpy(&dummy72722ef9_featobj1_66a_1498,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,128,82};memcpy(&dummy72722ef9_featobj1_66d_1499,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,128,88};memcpy(&dummy72722ef9_featobj1_670_1500,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,88};memcpy(&dummy72722ef9_featobj1_673_1501,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_676_1502 = 255;
    dummy72722ef9_featobj1_677_1503 = offset(featobj1,town11_1);
    town11_1 = 29;
    {db tmp999[21]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,255};memcpy(&dummy72722ef9_featobj1_67b_1506,&tmp999,sizeof tmp999);}
    {db tmp999[7]={col_grey2,38,40,42,44,46,255};memcpy(&dummy72722ef9_featobj1_690_1507,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_697_1508 = 255;
    {db tmp999[3]={16,98,132};memcpy(&dummy72722ef9_featobj1_698_1511,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,100,132};memcpy(&dummy72722ef9_featobj1_69b_1512,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,110,142};memcpy(&dummy72722ef9_featobj1_69e_1513,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,142};memcpy(&dummy72722ef9_featobj1_6a1_1514,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,132,140};memcpy(&dummy72722ef9_featobj1_6a4_1515,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,146,140};memcpy(&dummy72722ef9_featobj1_6a7_1516,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,148,138};memcpy(&dummy72722ef9_featobj1_6aa_1517,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,148,136};memcpy(&dummy72722ef9_featobj1_6ad_1518,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,136,124};memcpy(&dummy72722ef9_featobj1_6b0_1519,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,110};memcpy(&dummy72722ef9_featobj1_6b3_1520,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,128,108};memcpy(&dummy72722ef9_featobj1_6b6_1521,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,118,100};memcpy(&dummy72722ef9_featobj1_6b9_1522,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,108,86};memcpy(&dummy72722ef9_featobj1_6bc_1523,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,100,80};memcpy(&dummy72722ef9_featobj1_6bf_1524,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,98,80};memcpy(&dummy72722ef9_featobj1_6c2_1525,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,160,74};memcpy(&dummy72722ef9_featobj1_6c5_1526,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,158,76};memcpy(&dummy72722ef9_featobj1_6c8_1527,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,158,80};memcpy(&dummy72722ef9_featobj1_6cb_1528,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,160,82};memcpy(&dummy72722ef9_featobj1_6ce_1529,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,158,78};memcpy(&dummy72722ef9_featobj1_6d1_1530,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,78};memcpy(&dummy72722ef9_featobj1_6d4_1531,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,84};memcpy(&dummy72722ef9_featobj1_6d7_1532,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,90};memcpy(&dummy72722ef9_featobj1_6da_1533,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,106};memcpy(&dummy72722ef9_featobj1_6dd_1534,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,136,108};memcpy(&dummy72722ef9_featobj1_6e0_1535,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,140,120};memcpy(&dummy72722ef9_featobj1_6e3_1536,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,142,122};memcpy(&dummy72722ef9_featobj1_6e6_1537,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,158,122};memcpy(&dummy72722ef9_featobj1_6e9_1538,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,160,126};memcpy(&dummy72722ef9_featobj1_6ec_1539,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,158,124};memcpy(&dummy72722ef9_featobj1_6ef_1540,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,158,120};memcpy(&dummy72722ef9_featobj1_6f2_1541,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,160,118};memcpy(&dummy72722ef9_featobj1_6f5_1542,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,96,136};memcpy(&dummy72722ef9_featobj1_6f8_1543,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,134};memcpy(&dummy72722ef9_featobj1_6fb_1544,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,98,130};memcpy(&dummy72722ef9_featobj1_6fe_1545,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,96,128};memcpy(&dummy72722ef9_featobj1_701_1546,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,96,84};memcpy(&dummy72722ef9_featobj1_704_1547,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,98,82};memcpy(&dummy72722ef9_featobj1_707_1548,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,98,78};memcpy(&dummy72722ef9_featobj1_70a_1549,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,96,76};memcpy(&dummy72722ef9_featobj1_70d_1550,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,160,134};memcpy(&dummy72722ef9_featobj1_710_1551,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,158,134};memcpy(&dummy72722ef9_featobj1_713_1552,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,156,136};memcpy(&dummy72722ef9_featobj1_716_1553,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,152,136};memcpy(&dummy72722ef9_featobj1_719_1554,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,146,130};memcpy(&dummy72722ef9_featobj1_71c_1555,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,146,122};memcpy(&dummy72722ef9_featobj1_71f_1556,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_722_1557 = 255;
    dummy72722ef9_featobj1_723_1558 = offset(featobj1,town12_1);
    town12_1 = 61;
    {db tmp999[17]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,255};memcpy(&dummy72722ef9_featobj1_727_1561,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,30,32,34,36,255};memcpy(&dummy72722ef9_featobj1_738_1562,&tmp999,sizeof tmp999);}
    {db tmp999[11]={col_grey2,38,40,42,44,46,48,50,52,54,255};memcpy(&dummy72722ef9_featobj1_73e_1563,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,56,58,60,62,255};memcpy(&dummy72722ef9_featobj1_749_1564,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,64,66,68,70,255};memcpy(&dummy72722ef9_featobj1_74f_1565,&tmp999,sizeof tmp999);}
    {db tmp999[6]={col_grey2,72,74,76,78,255};memcpy(&dummy72722ef9_featobj1_755_1566,&tmp999,sizeof tmp999);}
    {db tmp999[8]={col_grey2,80,82,84,86,88,90,255};memcpy(&dummy72722ef9_featobj1_75b_1567,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_763_1568 = 255;
    {db tmp999[3]={56,128,112};memcpy(&dummy72722ef9_featobj1_764_1571,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,126,120};memcpy(&dummy72722ef9_featobj1_767_1572,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,126,142};memcpy(&dummy72722ef9_featobj1_76a_1573,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,126,144};memcpy(&dummy72722ef9_featobj1_76d_1574,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,128,146};memcpy(&dummy72722ef9_featobj1_770_1575,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,134,142};memcpy(&dummy72722ef9_featobj1_773_1576,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,138,136};memcpy(&dummy72722ef9_featobj1_776_1577,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,140,130};memcpy(&dummy72722ef9_featobj1_779_1578,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,140,126};memcpy(&dummy72722ef9_featobj1_77c_1579,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,142,124};memcpy(&dummy72722ef9_featobj1_77f_1580,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,142,122};memcpy(&dummy72722ef9_featobj1_782_1581,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,140,120};memcpy(&dummy72722ef9_featobj1_785_1582,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,138,120};memcpy(&dummy72722ef9_featobj1_788_1583,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,136,122};memcpy(&dummy72722ef9_featobj1_78b_1584,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,136,124};memcpy(&dummy72722ef9_featobj1_78e_1585,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,138,126};memcpy(&dummy72722ef9_featobj1_791_1586,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,126,124};memcpy(&dummy72722ef9_featobj1_794_1587,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,130,124};memcpy(&dummy72722ef9_featobj1_797_1588,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,136,118};memcpy(&dummy72722ef9_featobj1_79a_1589,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,136,114};memcpy(&dummy72722ef9_featobj1_79d_1590,&tmp999,sizeof tmp999);}
    {db tmp999[3]={40,132,112};memcpy(&dummy72722ef9_featobj1_7a0_1591,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,128,112};memcpy(&dummy72722ef9_featobj1_7a3_1592,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,136,124};memcpy(&dummy72722ef9_featobj1_7a6_1593,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,126};memcpy(&dummy72722ef9_featobj1_7a9_1594,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,130};memcpy(&dummy72722ef9_featobj1_7ac_1595,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,130,142};memcpy(&dummy72722ef9_featobj1_7af_1596,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,134,142};memcpy(&dummy72722ef9_featobj1_7b2_1597,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,160,106};memcpy(&dummy72722ef9_featobj1_7b5_1598,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,158,106};memcpy(&dummy72722ef9_featobj1_7b8_1599,&tmp999,sizeof tmp999);}
    {db tmp999[3]={48,142,122};memcpy(&dummy72722ef9_featobj1_7bb_1600,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,140,120};memcpy(&dummy72722ef9_featobj1_7be_1601,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,158,104};memcpy(&dummy72722ef9_featobj1_7c1_1602,&tmp999,sizeof tmp999);}
    {db tmp999[3]={16,160,104};memcpy(&dummy72722ef9_featobj1_7c4_1603,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,136,158};memcpy(&dummy72722ef9_featobj1_7c7_1604,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,136,162};memcpy(&dummy72722ef9_featobj1_7ca_1605,&tmp999,sizeof tmp999);}
    {db tmp999[3]={56,132,166};memcpy(&dummy72722ef9_featobj1_7cd_1606,&tmp999,sizeof tmp999);}
    {db tmp999[3]={0,130,170};memcpy(&dummy72722ef9_featobj1_7d0_1607,&tmp999,sizeof tmp999);}
    {db tmp999[3]={8,132,176};memcpy(&dummy72722ef9_featobj1_7d3_1608,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,138,176};memcpy(&dummy72722ef9_featobj1_7d6_1609,&tmp999,sizeof tmp999);}
    {db tmp999[3]={24,140,174};memcpy(&dummy72722ef9_featobj1_7d9_1610,&tmp999,sizeof tmp999);}
    {db tmp999[3]={32,140,160};memcpy(&dummy72722ef9_featobj1_7dc_1611,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_7df_1612 = 255;
    dummy72722ef9_featobj1_7e0_1613 = offset(featobj1,town13_1);
    town13_1 = 54;
    {db tmp999[20]={col_grey2,0,2,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,16,255};memcpy(&dummy72722ef9_featobj1_7e4_1616,&tmp999,sizeof tmp999);}
    {db tmp999[8]={col_grey2,32,34,36,38,40,42,255};memcpy(&dummy72722ef9_featobj1_7f8_1617,&tmp999,sizeof tmp999);}
    {db tmp999[7]={col_grey2,44,46,48,50,52,255};memcpy(&dummy72722ef9_featobj1_800_1618,&tmp999,sizeof tmp999);}
    {db tmp999[8]={col_grey2,54,56,58,60,62,64,255};memcpy(&dummy72722ef9_featobj1_807_1620,&tmp999,sizeof tmp999);}
    {db tmp999[10]={col_grey2,66,68,70,72,74,76,78,80,255};memcpy(&dummy72722ef9_featobj1_80f_1621,&tmp999,sizeof tmp999);}
    dummy72722ef9_featobj1_819_1622 = 255;
    vertexloop1 = 38;
    dummy72722ef9_viscode_81b_1803 = 38;
    dummy72722ef9_viscode_81c_1811 = 38;
    vertexloop2 = 38;
    dummy72722ef9_viscode_81e_1848 = 38;
    dummy72722ef9_viscode_81f_1856 = 38;
    vertexloop8 = 38;
    dummy72722ef9_viscode_821_1896 = 38;
    dummy72722ef9_viscode_822_1904 = 38;
    makevertloop1 = 38;
    dummy72722ef9_viscode_824_1955 = 38;
    dummy72722ef9_viscode_825_1963 = 38;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_towns(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

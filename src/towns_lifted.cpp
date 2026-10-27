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
              {dw tmp999=offset(featobj1,town1);MYCOPY(dummy72722ef9_data_0_966)}
    {dw tmp999=offset(featobj1,town2);MYCOPY(dummy72722ef9_data_2_967)}
    {dw tmp999=offset(featobj1,town3);MYCOPY(dummy72722ef9_data_4_968)}
    {dw tmp999=offset(featobj1,town4);MYCOPY(dummy72722ef9_data_6_969)}
    {dw tmp999=offset(featobj1,town5);MYCOPY(dummy72722ef9_data_8_970)}
    {dw tmp999=offset(featobj1,town6);MYCOPY(dummy72722ef9_data_a_971)}
    {dw tmp999=offset(featobj1,town7);MYCOPY(dummy72722ef9_data_c_972)}
    {dw tmp999=offset(featobj1,town8);MYCOPY(dummy72722ef9_data_e_973)}
    {dw tmp999=offset(featobj1,town9);MYCOPY(dummy72722ef9_data_10_974)}
    {dw tmp999=offset(featobj1,town10);MYCOPY(dummy72722ef9_data_12_975)}
    {dw tmp999=offset(featobj1,town11);MYCOPY(dummy72722ef9_data_14_976)}
    {dw tmp999=offset(featobj1,town12);MYCOPY(dummy72722ef9_data_16_977)}
    {dw tmp999=offset(featobj1,town13);MYCOPY(dummy72722ef9_data_18_978)}
    {dw tmp999=m2c::kglobal_scanvertex1;MYCOPY(scanvertexlist)}
    {dw tmp999=m2c::kglobal_scanvertex2;MYCOPY(dummy72722ef9_data_1c_983)}
    {dw tmp999=m2c::kglobal_scanvertex8;MYCOPY(dummy72722ef9_data_1e_984)}
    {db tmp999[5]={0,0,0,0,255};MYCOPY(roadpoly)}
    {dw tmp999=arbmid-arb128;MYCOPY(endtype)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_27_993)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_29_994)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_2b_995)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_2d_996)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_2f_997)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_31_998)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_33_999)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_35_1000)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_37_1001)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_39_1002)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_3b_1003)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_3d_1004)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_3f_1005)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_41_1006)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_43_1007)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_45_1008)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_47_1009)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_49_1010)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_4b_1011)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_4d_1012)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_4f_1013)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_51_1014)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_53_1015)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_55_1016)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_57_1017)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy72722ef9_data_59_1018)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_5b_1019)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_5d_1020)}
    {dw tmp999=arbmid-arb128;MYCOPY(dummy72722ef9_data_5f_1021)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_61_1022)}
    {dw tmp999=arbmid+arb128;MYCOPY(dummy72722ef9_data_63_1023)}
    {db tmp999[3]={0,122,96};MYCOPY(dummy72722ef9_featobj1_65_1031)}
    {db tmp999[3]={8,122,102};MYCOPY(dummy72722ef9_featobj1_68_1032)}
    {db tmp999[3]={8,128,104};MYCOPY(dummy72722ef9_featobj1_6b_1033)}
    {db tmp999[3]={8,130,106};MYCOPY(dummy72722ef9_featobj1_6e_1034)}
    {db tmp999[3]={0,132,124};MYCOPY(dummy72722ef9_featobj1_71_1035)}
    {db tmp999[3]={0,132,132};MYCOPY(dummy72722ef9_featobj1_74_1036)}
    {db tmp999[3]={56,132,150};MYCOPY(dummy72722ef9_featobj1_77_1037)}
    {db tmp999[3]={48,128,154};MYCOPY(dummy72722ef9_featobj1_7a_1038)}
    {db tmp999[3]={40,124,154};MYCOPY(dummy72722ef9_featobj1_7d_1039)}
    {db tmp999[3]={40,120,152};MYCOPY(dummy72722ef9_featobj1_80_1040)}
    {db tmp999[3]={32,118,146};MYCOPY(dummy72722ef9_featobj1_83_1041)}
    {db tmp999[3]={24,118,124};MYCOPY(dummy72722ef9_featobj1_86_1042)}
    {db tmp999[3]={56,122,102};MYCOPY(dummy72722ef9_featobj1_89_1043)}
    {db tmp999[3]={56,118,106};MYCOPY(dummy72722ef9_featobj1_8c_1044)}
    {db tmp999[3]={56,114,110};MYCOPY(dummy72722ef9_featobj1_8f_1045)}
    {db tmp999[3]={8,114,118};MYCOPY(dummy72722ef9_featobj1_92_1046)}
    {db tmp999[3]={56,114,118};MYCOPY(dummy72722ef9_featobj1_95_1047)}
    {db tmp999[3]={56,112,120};MYCOPY(dummy72722ef9_featobj1_98_1048)}
    {db tmp999[3]={8,112,124};MYCOPY(dummy72722ef9_featobj1_9b_1049)}
    {db tmp999[3]={8,114,126};MYCOPY(dummy72722ef9_featobj1_9e_1050)}
    {db tmp999[3]={24,116,126};MYCOPY(dummy72722ef9_featobj1_a1_1051)}
    {db tmp999[3]={40,118,120};MYCOPY(dummy72722ef9_featobj1_a4_1052)}
    {db tmp999[3]={40,116,118};MYCOPY(dummy72722ef9_featobj1_a7_1053)}
    {db tmp999[3]={16,118,122};MYCOPY(dummy72722ef9_featobj1_aa_1054)}
    {db tmp999[3]={8,120,122};MYCOPY(dummy72722ef9_featobj1_ad_1055)}
    {db tmp999[3]={8,124,126};MYCOPY(dummy72722ef9_featobj1_b0_1056)}
    {db tmp999[3]={56,112,122};MYCOPY(dummy72722ef9_featobj1_b3_1057)}
    {db tmp999[3]={56,110,124};MYCOPY(dummy72722ef9_featobj1_b6_1058)}
    {db tmp999[3]={8,110,144};MYCOPY(dummy72722ef9_featobj1_b9_1059)}
    {db tmp999[3]={8,112,146};MYCOPY(dummy72722ef9_featobj1_bc_1060)}
    {db tmp999[3]={16,118,146};MYCOPY(dummy72722ef9_featobj1_bf_1061)}
    {db tmp999[3]={56,132,124};MYCOPY(dummy72722ef9_featobj1_c2_1062)}
    {db tmp999[3]={0,130,128};MYCOPY(dummy72722ef9_featobj1_c5_1063)}
    {db tmp999[3]={8,132,132};MYCOPY(dummy72722ef9_featobj1_c8_1064)}
    {db tmp999[3]={16,132,136};MYCOPY(dummy72722ef9_featobj1_cb_1065)}
    {db tmp999[3]={8,142,136};MYCOPY(dummy72722ef9_featobj1_ce_1066)}
    {db tmp999[3]={56,142,140};MYCOPY(dummy72722ef9_featobj1_d1_1067)}
    {db tmp999[3]={56,136,140};MYCOPY(dummy72722ef9_featobj1_d4_1068)}
    {db tmp999[3]={56,136,150};MYCOPY(dummy72722ef9_featobj1_d7_1069)}
    {db tmp999[3]={56,132,150};MYCOPY(dummy72722ef9_featobj1_da_1070)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_dd_1071)}
    {dw tmp999=offset(featobj1,town1_1);MYCOPY(dummy72722ef9_featobj1_de_1072)}
    {dw tmp999=57;MYCOPY(town1_1)}
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,255};MYCOPY(dummy72722ef9_featobj1_e2_1075)}
    {db tmp999[6]={col_grey2,24,26,28,30,255};MYCOPY(dummy72722ef9_featobj1_f0_1076)}
    {db tmp999[11]={col_grey2,32,34,36,38,40,22,42,44,32,255};MYCOPY(dummy72722ef9_featobj1_f6_1077)}
    {db tmp999[5]={col_grey2,46,48,50,255};MYCOPY(dummy72722ef9_featobj1_101_1078)}
    {db tmp999[7]={col_grey2,52,54,56,58,60,255};MYCOPY(dummy72722ef9_featobj1_106_1079)}
    {db tmp999[5]={col_grey2,62,64,66,255};MYCOPY(dummy72722ef9_featobj1_10d_1081)}
    {db tmp999[8]={col_grey2,68,70,72,74,76,78,255};MYCOPY(dummy72722ef9_featobj1_112_1082)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_11a_1083)}
    {db tmp999[3]={16,96,134};MYCOPY(dummy72722ef9_featobj1_11b_1086)}
    {db tmp999[3]={24,146,134};MYCOPY(dummy72722ef9_featobj1_11e_1087)}
    {db tmp999[3]={24,150,130};MYCOPY(dummy72722ef9_featobj1_121_1088)}
    {db tmp999[3]={40,150,126};MYCOPY(dummy72722ef9_featobj1_124_1089)}
    {db tmp999[3]={40,148,124};MYCOPY(dummy72722ef9_featobj1_127_1090)}
    {db tmp999[3]={40,138,124};MYCOPY(dummy72722ef9_featobj1_12a_1091)}
    {db tmp999[3]={40,132,116};MYCOPY(dummy72722ef9_featobj1_12d_1092)}
    {db tmp999[3]={32,130,112};MYCOPY(dummy72722ef9_featobj1_130_1093)}
    {db tmp999[3]={24,132,108};MYCOPY(dummy72722ef9_featobj1_133_1094)}
    {db tmp999[3]={8,148,108};MYCOPY(dummy72722ef9_featobj1_136_1095)}
    {db tmp999[3]={8,150,110};MYCOPY(dummy72722ef9_featobj1_139_1096)}
    {db tmp999[3]={56,150,122};MYCOPY(dummy72722ef9_featobj1_13c_1097)}
    {db tmp999[3]={56,148,124};MYCOPY(dummy72722ef9_featobj1_13f_1098)}
    {db tmp999[3]={8,126,134};MYCOPY(dummy72722ef9_featobj1_142_1099)}
    {db tmp999[3]={8,130,138};MYCOPY(dummy72722ef9_featobj1_145_1100)}
    {db tmp999[3]={8,130,140};MYCOPY(dummy72722ef9_featobj1_148_1101)}
    {db tmp999[3]={8,132,142};MYCOPY(dummy72722ef9_featobj1_14b_1102)}
    {db tmp999[3]={24,134,142};MYCOPY(dummy72722ef9_featobj1_14e_1103)}
    {db tmp999[3]={24,136,140};MYCOPY(dummy72722ef9_featobj1_151_1104)}
    {db tmp999[3]={24,136,138};MYCOPY(dummy72722ef9_featobj1_154_1105)}
    {db tmp999[3]={24,140,134};MYCOPY(dummy72722ef9_featobj1_157_1106)}
    {db tmp999[3]={40,136,138};MYCOPY(dummy72722ef9_featobj1_15a_1107)}
    {db tmp999[3]={40,134,136};MYCOPY(dummy72722ef9_featobj1_15d_1108)}
    {db tmp999[3]={56,132,136};MYCOPY(dummy72722ef9_featobj1_160_1109)}
    {db tmp999[3]={56,130,138};MYCOPY(dummy72722ef9_featobj1_163_1110)}
    {db tmp999[3]={0,132,142};MYCOPY(dummy72722ef9_featobj1_166_1111)}
    {db tmp999[3]={8,132,158};MYCOPY(dummy72722ef9_featobj1_169_1112)}
    {db tmp999[3]={8,134,160};MYCOPY(dummy72722ef9_featobj1_16c_1113)}
    {db tmp999[3]={56,132,158};MYCOPY(dummy72722ef9_featobj1_16f_1114)}
    {db tmp999[3]={56,130,160};MYCOPY(dummy72722ef9_featobj1_172_1115)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_175_1116)}
    {dw tmp999=offset(featobj1,town2_1);MYCOPY(dummy72722ef9_featobj1_176_1117)}
    {dw tmp999=41;MYCOPY(town2_1)}
    {db tmp999[15]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,255};MYCOPY(dummy72722ef9_featobj1_17a_1120)}
    {db tmp999[10]={col_grey2,26,28,30,32,34,36,38,40,255};MYCOPY(dummy72722ef9_featobj1_189_1121)}
    {db tmp999[6]={col_grey2,42,44,46,48,255};MYCOPY(dummy72722ef9_featobj1_193_1122)}
    {db tmp999[5]={col_grey2,50,52,54,255};MYCOPY(dummy72722ef9_featobj1_199_1123)}
    {db tmp999[4]={col_grey2,56,58,255};MYCOPY(dummy72722ef9_featobj1_19e_1124)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_1a2_1125)}
    {db tmp999[3]={24,96,138};MYCOPY(dummy72722ef9_featobj1_1a3_1128)}
    {db tmp999[3]={24,98,136};MYCOPY(dummy72722ef9_featobj1_1a6_1129)}
    {db tmp999[3]={24,98,134};MYCOPY(dummy72722ef9_featobj1_1a9_1130)}
    {db tmp999[3]={24,100,132};MYCOPY(dummy72722ef9_featobj1_1ac_1131)}
    {db tmp999[3]={8,102,132};MYCOPY(dummy72722ef9_featobj1_1af_1132)}
    {db tmp999[3]={8,104,134};MYCOPY(dummy72722ef9_featobj1_1b2_1133)}
    {db tmp999[3]={56,104,136};MYCOPY(dummy72722ef9_featobj1_1b5_1134)}
    {db tmp999[3]={56,102,138};MYCOPY(dummy72722ef9_featobj1_1b8_1135)}
    {db tmp999[3]={40,100,138};MYCOPY(dummy72722ef9_featobj1_1bb_1136)}
    {db tmp999[3]={40,98,136};MYCOPY(dummy72722ef9_featobj1_1be_1137)}
    {db tmp999[3]={40,98,134};MYCOPY(dummy72722ef9_featobj1_1c1_1138)}
    {db tmp999[3]={40,96,132};MYCOPY(dummy72722ef9_featobj1_1c4_1139)}
    {db tmp999[3]={8,102,138};MYCOPY(dummy72722ef9_featobj1_1c7_1140)}
    {db tmp999[3]={8,106,142};MYCOPY(dummy72722ef9_featobj1_1ca_1141)}
    {db tmp999[3]={24,158,142};MYCOPY(dummy72722ef9_featobj1_1cd_1142)}
    {db tmp999[3]={24,160,140};MYCOPY(dummy72722ef9_featobj1_1d0_1143)}
    {db tmp999[3]={40,160,132};MYCOPY(dummy72722ef9_featobj1_1d3_1144)}
    {db tmp999[3]={40,158,130};MYCOPY(dummy72722ef9_featobj1_1d6_1145)}
    {db tmp999[3]={56,104,130};MYCOPY(dummy72722ef9_featobj1_1d9_1146)}
    {db tmp999[3]={56,102,132};MYCOPY(dummy72722ef9_featobj1_1dc_1147)}
    {db tmp999[3]={24,96,124};MYCOPY(dummy72722ef9_featobj1_1df_1148)}
    {db tmp999[3]={24,98,122};MYCOPY(dummy72722ef9_featobj1_1e2_1149)}
    {db tmp999[3]={24,148,122};MYCOPY(dummy72722ef9_featobj1_1e5_1150)}
    {db tmp999[3]={24,150,120};MYCOPY(dummy72722ef9_featobj1_1e8_1151)}
    {db tmp999[3]={40,150,118};MYCOPY(dummy72722ef9_featobj1_1eb_1152)}
    {db tmp999[3]={40,144,112};MYCOPY(dummy72722ef9_featobj1_1ee_1153)}
    {db tmp999[3]={40,98,112};MYCOPY(dummy72722ef9_featobj1_1f1_1154)}
    {db tmp999[3]={40,96,110};MYCOPY(dummy72722ef9_featobj1_1f4_1155)}
    {db tmp999[3]={24,98,122};MYCOPY(dummy72722ef9_featobj1_1f7_1156)}
    {db tmp999[3]={40,98,112};MYCOPY(dummy72722ef9_featobj1_1fa_1157)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_1fd_1158)}
    {dw tmp999=offset(featobj1,town3_1);MYCOPY(dummy72722ef9_featobj1_1fe_1159)}
    {dw tmp999=39;MYCOPY(town3_1)}
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,255};MYCOPY(dummy72722ef9_featobj1_202_1162)}
    {db tmp999[10]={col_grey2,24,26,28,30,32,34,36,38,255};MYCOPY(dummy72722ef9_featobj1_210_1163)}
    {db tmp999[10]={col_grey2,40,42,44,46,48,50,52,54,255};MYCOPY(dummy72722ef9_featobj1_21a_1164)}
    {db tmp999[4]={col_grey2,56,58,255};MYCOPY(dummy72722ef9_featobj1_224_1165)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_228_1166)}
    {db tmp999[3]={0,120,112};MYCOPY(dummy72722ef9_featobj1_229_1169)}
    {db tmp999[3]={8,120,166};MYCOPY(dummy72722ef9_featobj1_22c_1170)}
    {db tmp999[3]={8,124,170};MYCOPY(dummy72722ef9_featobj1_22f_1171)}
    {db tmp999[3]={24,134,170};MYCOPY(dummy72722ef9_featobj1_232_1172)}
    {db tmp999[3]={24,140,166};MYCOPY(dummy72722ef9_featobj1_235_1173)}
    {db tmp999[3]={40,140,134};MYCOPY(dummy72722ef9_featobj1_238_1174)}
    {db tmp999[3]={56,132,134};MYCOPY(dummy72722ef9_featobj1_23b_1175)}
    {db tmp999[3]={56,132,138};MYCOPY(dummy72722ef9_featobj1_23e_1176)}
    {db tmp999[3]={0,130,144};MYCOPY(dummy72722ef9_featobj1_241_1177)}
    {db tmp999[3]={0,132,150};MYCOPY(dummy72722ef9_featobj1_244_1178)}
    {db tmp999[3]={8,134,156};MYCOPY(dummy72722ef9_featobj1_247_1179)}
    {db tmp999[3]={16,140,156};MYCOPY(dummy72722ef9_featobj1_24a_1180)}
    {db tmp999[3]={0,120,96};MYCOPY(dummy72722ef9_featobj1_24d_1181)}
    {db tmp999[3]={56,120,106};MYCOPY(dummy72722ef9_featobj1_250_1182)}
    {db tmp999[3]={56,118,108};MYCOPY(dummy72722ef9_featobj1_253_1183)}
    {db tmp999[3]={8,118,110};MYCOPY(dummy72722ef9_featobj1_256_1184)}
    {db tmp999[3]={8,120,112};MYCOPY(dummy72722ef9_featobj1_259_1185)}
    {db tmp999[3]={24,122,112};MYCOPY(dummy72722ef9_featobj1_25c_1186)}
    {db tmp999[3]={24,124,110};MYCOPY(dummy72722ef9_featobj1_25f_1187)}
    {db tmp999[3]={40,124,108};MYCOPY(dummy72722ef9_featobj1_262_1188)}
    {db tmp999[3]={40,122,106};MYCOPY(dummy72722ef9_featobj1_265_1189)}
    {db tmp999[3]={32,108,118};MYCOPY(dummy72722ef9_featobj1_268_1190)}
    {db tmp999[3]={24,108,114};MYCOPY(dummy72722ef9_featobj1_26b_1191)}
    {db tmp999[3]={24,112,110};MYCOPY(dummy72722ef9_featobj1_26e_1192)}
    {db tmp999[3]={16,124,110};MYCOPY(dummy72722ef9_featobj1_271_1193)}
    {db tmp999[3]={24,130,110};MYCOPY(dummy72722ef9_featobj1_274_1194)}
    {db tmp999[3]={24,130,104};MYCOPY(dummy72722ef9_featobj1_277_1195)}
    {db tmp999[3]={24,132,102};MYCOPY(dummy72722ef9_featobj1_27a_1196)}
    {db tmp999[3]={8,140,102};MYCOPY(dummy72722ef9_featobj1_27d_1197)}
    {db tmp999[3]={8,142,104};MYCOPY(dummy72722ef9_featobj1_280_1198)}
    {db tmp999[3]={56,142,112};MYCOPY(dummy72722ef9_featobj1_283_1199)}
    {db tmp999[3]={56,138,116};MYCOPY(dummy72722ef9_featobj1_286_1200)}
    {db tmp999[3]={40,132,116};MYCOPY(dummy72722ef9_featobj1_289_1201)}
    {db tmp999[3]={40,130,114};MYCOPY(dummy72722ef9_featobj1_28c_1202)}
    {db tmp999[3]={24,130,110};MYCOPY(dummy72722ef9_featobj1_28f_1203)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_292_1204)}
    {dw tmp999=offset(featobj1,town4_1);MYCOPY(dummy72722ef9_featobj1_293_1205)}
    {dw tmp999=46;MYCOPY(town4_1)}
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,255};MYCOPY(dummy72722ef9_featobj1_297_1208)}
    {db tmp999[12]={col_grey2,24,26,28,30,32,34,36,38,40,26,255};MYCOPY(dummy72722ef9_featobj1_2a5_1209)}
    {db tmp999[6]={col_grey2,42,44,46,30,255};MYCOPY(dummy72722ef9_featobj1_2b1_1210)}
    {db tmp999[13]={col_grey2,48,50,52,54,56,58,60,62,64,66,68,255};MYCOPY(dummy72722ef9_featobj1_2b7_1211)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_2c4_1212)}
    {db tmp999[3]={32,156,160};MYCOPY(dummy72722ef9_featobj1_2c5_1215)}
    {db tmp999[3]={24,156,158};MYCOPY(dummy72722ef9_featobj1_2c8_1216)}
    {db tmp999[3]={24,158,156};MYCOPY(dummy72722ef9_featobj1_2cb_1217)}
    {db tmp999[3]={16,160,156};MYCOPY(dummy72722ef9_featobj1_2ce_1218)}
    {db tmp999[3]={48,156,158};MYCOPY(dummy72722ef9_featobj1_2d1_1219)}
    {db tmp999[3]={40,144,158};MYCOPY(dummy72722ef9_featobj1_2d4_1220)}
    {db tmp999[3]={40,136,152};MYCOPY(dummy72722ef9_featobj1_2d7_1221)}
    {db tmp999[3]={40,130,150};MYCOPY(dummy72722ef9_featobj1_2da_1222)}
    {db tmp999[3]={24,130,128};MYCOPY(dummy72722ef9_featobj1_2dd_1223)}
    {db tmp999[3]={24,136,122};MYCOPY(dummy72722ef9_featobj1_2e0_1224)}
    {db tmp999[3]={16,160,122};MYCOPY(dummy72722ef9_featobj1_2e3_1225)}
    {db tmp999[3]={0,132,160};MYCOPY(dummy72722ef9_featobj1_2e6_1226)}
    {db tmp999[3]={56,132,176};MYCOPY(dummy72722ef9_featobj1_2e9_1227)}
    {db tmp999[3]={0,130,180};MYCOPY(dummy72722ef9_featobj1_2ec_1228)}
    {db tmp999[3]={8,132,184};MYCOPY(dummy72722ef9_featobj1_2ef_1229)}
    {db tmp999[3]={24,138,184};MYCOPY(dummy72722ef9_featobj1_2f2_1230)}
    {db tmp999[3]={40,138,164};MYCOPY(dummy72722ef9_featobj1_2f5_1231)}
    {db tmp999[3]={40,136,162};MYCOPY(dummy72722ef9_featobj1_2f8_1232)}
    {db tmp999[3]={48,132,162};MYCOPY(dummy72722ef9_featobj1_2fb_1233)}
    {db tmp999[3]={32,144,158};MYCOPY(dummy72722ef9_featobj1_2fe_1234)}
    {db tmp999[3]={32,144,122};MYCOPY(dummy72722ef9_featobj1_301_1235)}
    {db tmp999[3]={48,160,152};MYCOPY(dummy72722ef9_featobj1_304_1236)}
    {db tmp999[3]={40,136,152};MYCOPY(dummy72722ef9_featobj1_307_1237)}
    {db tmp999[3]={32,136,122};MYCOPY(dummy72722ef9_featobj1_30a_1238)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_30d_1239)}
    {dw tmp999=offset(featobj1,town5_1);MYCOPY(dummy72722ef9_featobj1_30e_1240)}
    {dw tmp999=35;MYCOPY(town5_1)}
    {db tmp999[6]={col_grey2,0,2,4,6,255};MYCOPY(dummy72722ef9_featobj1_312_1243)}
    {db tmp999[9]={col_grey2,8,10,12,14,16,18,20,255};MYCOPY(dummy72722ef9_featobj1_318_1244)}
    {db tmp999[10]={col_grey2,22,24,26,28,30,32,34,36,255};MYCOPY(dummy72722ef9_featobj1_321_1245)}
    {db tmp999[4]={col_grey2,38,40,255};MYCOPY(dummy72722ef9_featobj1_32b_1246)}
    {db tmp999[5]={col_grey2,42,44,46,255};MYCOPY(dummy72722ef9_featobj1_32f_1247)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_334_1248)}
    {db tmp999[3]={24,118,160};MYCOPY(dummy72722ef9_featobj1_335_1251)}
    {db tmp999[3]={24,120,158};MYCOPY(dummy72722ef9_featobj1_338_1252)}
    {db tmp999[3]={40,120,156};MYCOPY(dummy72722ef9_featobj1_33b_1253)}
    {db tmp999[3]={40,112,156};MYCOPY(dummy72722ef9_featobj1_33e_1254)}
    {db tmp999[3]={40,110,154};MYCOPY(dummy72722ef9_featobj1_341_1255)}
    {db tmp999[3]={24,110,142};MYCOPY(dummy72722ef9_featobj1_344_1256)}
    {db tmp999[3]={24,112,140};MYCOPY(dummy72722ef9_featobj1_347_1257)}
    {db tmp999[3]={8,128,140};MYCOPY(dummy72722ef9_featobj1_34a_1258)}
    {db tmp999[3]={8,130,142};MYCOPY(dummy72722ef9_featobj1_34d_1259)}
    {db tmp999[3]={56,130,154};MYCOPY(dummy72722ef9_featobj1_350_1260)}
    {db tmp999[3]={56,128,156};MYCOPY(dummy72722ef9_featobj1_353_1261)}
    {db tmp999[3]={8,120,158};MYCOPY(dummy72722ef9_featobj1_356_1262)}
    {db tmp999[3]={0,122,160};MYCOPY(dummy72722ef9_featobj1_359_1263)}
    {db tmp999[3]={56,120,162};MYCOPY(dummy72722ef9_featobj1_35c_1264)}
    {db tmp999[3]={56,120,166};MYCOPY(dummy72722ef9_featobj1_35f_1265)}
    {db tmp999[3]={56,118,168};MYCOPY(dummy72722ef9_featobj1_362_1266)}
    {db tmp999[3]={56,112,168};MYCOPY(dummy72722ef9_featobj1_365_1267)}
    {db tmp999[3]={56,110,170};MYCOPY(dummy72722ef9_featobj1_368_1268)}
    {db tmp999[3]={8,110,178};MYCOPY(dummy72722ef9_featobj1_36b_1269)}
    {db tmp999[3]={8,112,180};MYCOPY(dummy72722ef9_featobj1_36e_1270)}
    {db tmp999[3]={24,114,180};MYCOPY(dummy72722ef9_featobj1_371_1271)}
    {db tmp999[3]={24,116,178};MYCOPY(dummy72722ef9_featobj1_374_1272)}
    {db tmp999[3]={24,116,168};MYCOPY(dummy72722ef9_featobj1_377_1273)}
    {db tmp999[3]={8,118,160};MYCOPY(dummy72722ef9_featobj1_37a_1274)}
    {db tmp999[3]={0,120,162};MYCOPY(dummy72722ef9_featobj1_37d_1275)}
    {db tmp999[3]={56,118,164};MYCOPY(dummy72722ef9_featobj1_380_1276)}
    {db tmp999[3]={40,112,164};MYCOPY(dummy72722ef9_featobj1_383_1277)}
    {db tmp999[3]={40,110,162};MYCOPY(dummy72722ef9_featobj1_386_1278)}
    {db tmp999[3]={24,110,158};MYCOPY(dummy72722ef9_featobj1_389_1279)}
    {db tmp999[3]={24,112,156};MYCOPY(dummy72722ef9_featobj1_38c_1280)}
    {db tmp999[3]={16,96,164};MYCOPY(dummy72722ef9_featobj1_38f_1281)}
    {db tmp999[3]={24,104,164};MYCOPY(dummy72722ef9_featobj1_392_1282)}
    {db tmp999[3]={24,106,162};MYCOPY(dummy72722ef9_featobj1_395_1283)}
    {db tmp999[3]={40,106,156};MYCOPY(dummy72722ef9_featobj1_398_1284)}
    {db tmp999[3]={40,104,154};MYCOPY(dummy72722ef9_featobj1_39b_1285)}
    {db tmp999[3]={40,104,140};MYCOPY(dummy72722ef9_featobj1_39e_1286)}
    {db tmp999[3]={40,102,138};MYCOPY(dummy72722ef9_featobj1_3a1_1287)}
    {db tmp999[3]={56,94,138};MYCOPY(dummy72722ef9_featobj1_3a4_1288)}
    {db tmp999[3]={56,90,142};MYCOPY(dummy72722ef9_featobj1_3a7_1289)}
    {db tmp999[3]={8,90,162};MYCOPY(dummy72722ef9_featobj1_3aa_1290)}
    {db tmp999[3]={8,92,164};MYCOPY(dummy72722ef9_featobj1_3ad_1291)}
    {db tmp999[3]={32,96,160};MYCOPY(dummy72722ef9_featobj1_3b0_1292)}
    {db tmp999[3]={32,96,138};MYCOPY(dummy72722ef9_featobj1_3b3_1293)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_3b6_1294)}
    {dw tmp999=offset(featobj1,town6_1);MYCOPY(dummy72722ef9_featobj1_3b7_1295)}
    {dw tmp999=56;MYCOPY(town6_1)}
    {db tmp999[14]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,4,255};MYCOPY(dummy72722ef9_featobj1_3bb_1298)}
    {db tmp999[14]={col_grey2,22,24,26,28,30,32,34,36,38,40,42,44,255};MYCOPY(dummy72722ef9_featobj1_3c9_1299)}
    {db tmp999[9]={col_grey2,46,48,50,52,54,56,58,255};MYCOPY(dummy72722ef9_featobj1_3d7_1300)}
    {db tmp999[14]={col_grey2,60,62,64,66,68,70,72,74,76,78,80,60,255};MYCOPY(dummy72722ef9_featobj1_3e0_1301)}
    {db tmp999[4]={col_grey2,82,84,255};MYCOPY(dummy72722ef9_featobj1_3ee_1302)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_3f2_1303)}
    {db tmp999[3]={16,96,130};MYCOPY(dummy72722ef9_featobj1_3f3_1306)}
    {db tmp999[3]={24,132,130};MYCOPY(dummy72722ef9_featobj1_3f6_1307)}
    {db tmp999[3]={40,132,128};MYCOPY(dummy72722ef9_featobj1_3f9_1308)}
    {db tmp999[3]={32,130,124};MYCOPY(dummy72722ef9_featobj1_3fc_1309)}
    {db tmp999[3]={24,132,120};MYCOPY(dummy72722ef9_featobj1_3ff_1310)}
    {db tmp999[3]={24,132,108};MYCOPY(dummy72722ef9_featobj1_402_1311)}
    {db tmp999[3]={24,134,106};MYCOPY(dummy72722ef9_featobj1_405_1312)}
    {db tmp999[3]={8,144,106};MYCOPY(dummy72722ef9_featobj1_408_1313)}
    {db tmp999[3]={8,148,110};MYCOPY(dummy72722ef9_featobj1_40b_1314)}
    {db tmp999[3]={8,154,110};MYCOPY(dummy72722ef9_featobj1_40e_1315)}
    {db tmp999[3]={8,162,114};MYCOPY(dummy72722ef9_featobj1_411_1316)}
    {db tmp999[3]={0,164,118};MYCOPY(dummy72722ef9_featobj1_414_1317)}
    {db tmp999[3]={56,164,128};MYCOPY(dummy72722ef9_featobj1_417_1318)}
    {db tmp999[3]={56,162,130};MYCOPY(dummy72722ef9_featobj1_41a_1319)}
    {db tmp999[3]={40,158,130};MYCOPY(dummy72722ef9_featobj1_41d_1320)}
    {db tmp999[3]={40,156,128};MYCOPY(dummy72722ef9_featobj1_420_1321)}
    {db tmp999[3]={24,156,126};MYCOPY(dummy72722ef9_featobj1_423_1322)}
    {db tmp999[3]={24,158,124};MYCOPY(dummy72722ef9_featobj1_426_1323)}
    {db tmp999[3]={8,162,124};MYCOPY(dummy72722ef9_featobj1_429_1324)}
    {db tmp999[3]={8,164,126};MYCOPY(dummy72722ef9_featobj1_42c_1325)}
    {db tmp999[3]={16,132,130};MYCOPY(dummy72722ef9_featobj1_42f_1326)}
    {db tmp999[3]={24,154,130};MYCOPY(dummy72722ef9_featobj1_432_1327)}
    {db tmp999[3]={24,156,128};MYCOPY(dummy72722ef9_featobj1_435_1328)}
    {db tmp999[3]={8,132,118};MYCOPY(dummy72722ef9_featobj1_438_1329)}
    {db tmp999[3]={8,152,118};MYCOPY(dummy72722ef9_featobj1_43b_1330)}
    {db tmp999[3]={8,158,124};MYCOPY(dummy72722ef9_featobj1_43e_1331)}
    {db tmp999[3]={8,152,118};MYCOPY(dummy72722ef9_featobj1_441_1332)}
    {db tmp999[3]={8,152,110};MYCOPY(dummy72722ef9_featobj1_444_1333)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_447_1334)}
    {dw tmp999=offset(featobj1,town7_1);MYCOPY(dummy72722ef9_featobj1_448_1335)}
    {dw tmp999=37;MYCOPY(town7_1)}
    {db tmp999[22]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,255};MYCOPY(dummy72722ef9_featobj1_44c_1338)}
    {db tmp999[5]={col_grey2,40,42,44,255};MYCOPY(dummy72722ef9_featobj1_462_1339)}
    {db tmp999[5]={col_grey2,46,48,50,255};MYCOPY(dummy72722ef9_featobj1_467_1340)}
    {db tmp999[4]={col_grey2,52,54,255};MYCOPY(dummy72722ef9_featobj1_46c_1341)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_470_1342)}
    {db tmp999[3]={16,96,120};MYCOPY(dummy72722ef9_featobj1_471_1345)}
    {db tmp999[3]={24,98,120};MYCOPY(dummy72722ef9_featobj1_474_1346)}
    {db tmp999[3]={24,100,118};MYCOPY(dummy72722ef9_featobj1_477_1347)}
    {db tmp999[3]={24,102,118};MYCOPY(dummy72722ef9_featobj1_47a_1348)}
    {db tmp999[3]={24,102,114};MYCOPY(dummy72722ef9_featobj1_47d_1349)}
    {db tmp999[3]={24,104,112};MYCOPY(dummy72722ef9_featobj1_480_1350)}
    {db tmp999[3]={24,110,112};MYCOPY(dummy72722ef9_featobj1_483_1351)}
    {db tmp999[3]={24,114,108};MYCOPY(dummy72722ef9_featobj1_486_1352)}
    {db tmp999[3]={8,118,108};MYCOPY(dummy72722ef9_featobj1_489_1353)}
    {db tmp999[3]={8,120,110};MYCOPY(dummy72722ef9_featobj1_48c_1354)}
    {db tmp999[3]={8,144,124};MYCOPY(dummy72722ef9_featobj1_48f_1355)}
    {db tmp999[3]={0,154,138};MYCOPY(dummy72722ef9_featobj1_492_1356)}
    {db tmp999[3]={0,154,156};MYCOPY(dummy72722ef9_featobj1_495_1357)}
    {db tmp999[3]={0,156,158};MYCOPY(dummy72722ef9_featobj1_498_1358)}
    {db tmp999[3]={56,158,156};MYCOPY(dummy72722ef9_featobj1_49b_1359)}
    {db tmp999[3]={56,156,158};MYCOPY(dummy72722ef9_featobj1_49e_1360)}
    {db tmp999[3]={8,156,162};MYCOPY(dummy72722ef9_featobj1_4a1_1361)}
    {db tmp999[3]={8,158,164};MYCOPY(dummy72722ef9_featobj1_4a4_1362)}
    {db tmp999[3]={24,162,164};MYCOPY(dummy72722ef9_featobj1_4a7_1363)}
    {db tmp999[3]={24,164,162};MYCOPY(dummy72722ef9_featobj1_4aa_1364)}
    {db tmp999[3]={40,164,158};MYCOPY(dummy72722ef9_featobj1_4ad_1365)}
    {db tmp999[3]={40,162,156};MYCOPY(dummy72722ef9_featobj1_4b0_1366)}
    {db tmp999[3]={56,98,120};MYCOPY(dummy72722ef9_featobj1_4b3_1367)}
    {db tmp999[3]={8,98,122};MYCOPY(dummy72722ef9_featobj1_4b6_1368)}
    {db tmp999[3]={8,100,124};MYCOPY(dummy72722ef9_featobj1_4b9_1369)}
    {db tmp999[3]={24,102,124};MYCOPY(dummy72722ef9_featobj1_4bc_1370)}
    {db tmp999[3]={24,104,122};MYCOPY(dummy72722ef9_featobj1_4bf_1371)}
    {db tmp999[3]={40,104,120};MYCOPY(dummy72722ef9_featobj1_4c2_1372)}
    {db tmp999[3]={40,102,118};MYCOPY(dummy72722ef9_featobj1_4c5_1373)}
    {db tmp999[3]={16,104,122};MYCOPY(dummy72722ef9_featobj1_4c8_1374)}
    {db tmp999[3]={8,116,122};MYCOPY(dummy72722ef9_featobj1_4cb_1375)}
    {db tmp999[3]={8,136,134};MYCOPY(dummy72722ef9_featobj1_4ce_1376)}
    {db tmp999[3]={8,154,156};MYCOPY(dummy72722ef9_featobj1_4d1_1377)}
    {db tmp999[3]={0,156,96};MYCOPY(dummy72722ef9_featobj1_4d4_1378)}
    {db tmp999[3]={8,156,98};MYCOPY(dummy72722ef9_featobj1_4d7_1379)}
    {db tmp999[3]={8,158,100};MYCOPY(dummy72722ef9_featobj1_4da_1380)}
    {db tmp999[3]={16,160,100};MYCOPY(dummy72722ef9_featobj1_4dd_1381)}
    {db tmp999[3]={48,156,98};MYCOPY(dummy72722ef9_featobj1_4e0_1382)}
    {db tmp999[3]={56,122,98};MYCOPY(dummy72722ef9_featobj1_4e3_1383)}
    {db tmp999[3]={56,120,100};MYCOPY(dummy72722ef9_featobj1_4e6_1384)}
    {db tmp999[3]={8,120,104};MYCOPY(dummy72722ef9_featobj1_4e9_1385)}
    {db tmp999[3]={8,134,114};MYCOPY(dummy72722ef9_featobj1_4ec_1386)}
    {db tmp999[3]={8,148,120};MYCOPY(dummy72722ef9_featobj1_4ef_1387)}
    {db tmp999[3]={16,160,120};MYCOPY(dummy72722ef9_featobj1_4f2_1388)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_4f5_1389)}
    {dw tmp999=offset(featobj1,town8_1);MYCOPY(dummy72722ef9_featobj1_4f6_1390)}
    {dw tmp999=58;MYCOPY(town8_1)}
    {db tmp999[16]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,255};MYCOPY(dummy72722ef9_featobj1_4fa_1393)}
    {db tmp999[11]={col_grey2,28,30,32,34,36,38,40,42,28,255};MYCOPY(dummy72722ef9_featobj1_50a_1394)}
    {db tmp999[9]={col_grey2,44,46,48,50,52,54,56,255};MYCOPY(dummy72722ef9_featobj1_515_1395)}
    {db tmp999[6]={col_grey2,58,60,62,64,255};MYCOPY(dummy72722ef9_featobj1_51e_1396)}
    {db tmp999[6]={col_grey2,66,68,70,72,255};MYCOPY(dummy72722ef9_featobj1_524_1397)}
    {db tmp999[9]={col_grey2,74,76,78,80,82,84,86,255};MYCOPY(dummy72722ef9_featobj1_52a_1398)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_533_1399)}
    {db tmp999[3]={16,96,156};MYCOPY(dummy72722ef9_featobj1_534_1402)}
    {db tmp999[3]={8,98,156};MYCOPY(dummy72722ef9_featobj1_537_1403)}
    {db tmp999[3]={8,100,158};MYCOPY(dummy72722ef9_featobj1_53a_1404)}
    {db tmp999[3]={0,100,160};MYCOPY(dummy72722ef9_featobj1_53d_1405)}
    {db tmp999[3]={24,98,156};MYCOPY(dummy72722ef9_featobj1_540_1406)}
    {db tmp999[3]={24,108,140};MYCOPY(dummy72722ef9_featobj1_543_1407)}
    {db tmp999[3]={24,114,126};MYCOPY(dummy72722ef9_featobj1_546_1408)}
    {db tmp999[3]={24,124,116};MYCOPY(dummy72722ef9_featobj1_549_1409)}
    {db tmp999[3]={8,130,116};MYCOPY(dummy72722ef9_featobj1_54c_1410)}
    {db tmp999[3]={0,132,118};MYCOPY(dummy72722ef9_featobj1_54f_1411)}
    {db tmp999[3]={56,132,126};MYCOPY(dummy72722ef9_featobj1_552_1412)}
    {db tmp999[3]={56,128,136};MYCOPY(dummy72722ef9_featobj1_555_1413)}
    {db tmp999[3]={56,114,144};MYCOPY(dummy72722ef9_featobj1_558_1414)}
    {db tmp999[3]={56,110,154};MYCOPY(dummy72722ef9_featobj1_55b_1415)}
    {db tmp999[3]={56,108,156};MYCOPY(dummy72722ef9_featobj1_55e_1416)}
    {db tmp999[3]={56,100,158};MYCOPY(dummy72722ef9_featobj1_561_1417)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_564_1418)}
    {dw tmp999=offset(featobj1,town9_1);MYCOPY(dummy72722ef9_featobj1_565_1419)}
    {dw tmp999=21;MYCOPY(town9_1)}
    {db tmp999[6]={col_grey2,0,2,4,6,255};MYCOPY(dummy72722ef9_featobj1_569_1422)}
    {db tmp999[14]={col_grey2,8,10,12,14,16,18,20,22,24,26,28,30,255};MYCOPY(dummy72722ef9_featobj1_56f_1423)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_57d_1424)}
    {db tmp999[3]={48,160,130};MYCOPY(dummy72722ef9_featobj1_57e_1427)}
    {db tmp999[3]={56,134,130};MYCOPY(dummy72722ef9_featobj1_581_1428)}
    {db tmp999[3]={56,132,132};MYCOPY(dummy72722ef9_featobj1_584_1429)}
    {db tmp999[3]={0,130,138};MYCOPY(dummy72722ef9_featobj1_587_1430)}
    {db tmp999[3]={8,132,144};MYCOPY(dummy72722ef9_featobj1_58a_1431)}
    {db tmp999[3]={8,134,146};MYCOPY(dummy72722ef9_featobj1_58d_1432)}
    {db tmp999[3]={24,146,146};MYCOPY(dummy72722ef9_featobj1_590_1433)}
    {db tmp999[3]={24,156,138};MYCOPY(dummy72722ef9_featobj1_593_1434)}
    {db tmp999[3]={24,156,132};MYCOPY(dummy72722ef9_featobj1_596_1435)}
    {db tmp999[3]={24,158,130};MYCOPY(dummy72722ef9_featobj1_599_1436)}
    {db tmp999[3]={32,140,146};MYCOPY(dummy72722ef9_featobj1_59c_1437)}
    {db tmp999[3]={40,140,126};MYCOPY(dummy72722ef9_featobj1_59f_1438)}
    {db tmp999[3]={40,138,124};MYCOPY(dummy72722ef9_featobj1_5a2_1439)}
    {db tmp999[3]={56,128,124};MYCOPY(dummy72722ef9_featobj1_5a5_1440)}
    {db tmp999[3]={56,126,126};MYCOPY(dummy72722ef9_featobj1_5a8_1441)}
    {db tmp999[3]={56,126,152};MYCOPY(dummy72722ef9_featobj1_5ab_1442)}
    {db tmp999[3]={56,118,158};MYCOPY(dummy72722ef9_featobj1_5ae_1443)}
    {db tmp999[3]={40,114,158};MYCOPY(dummy72722ef9_featobj1_5b1_1444)}
    {db tmp999[3]={40,112,156};MYCOPY(dummy72722ef9_featobj1_5b4_1445)}
    {db tmp999[3]={24,112,102};MYCOPY(dummy72722ef9_featobj1_5b7_1446)}
    {db tmp999[3]={24,114,100};MYCOPY(dummy72722ef9_featobj1_5ba_1447)}
    {db tmp999[3]={8,122,100};MYCOPY(dummy72722ef9_featobj1_5bd_1448)}
    {db tmp999[3]={8,124,102};MYCOPY(dummy72722ef9_featobj1_5c0_1449)}
    {db tmp999[3]={56,124,120};MYCOPY(dummy72722ef9_featobj1_5c3_1450)}
    {db tmp999[3]={56,122,122};MYCOPY(dummy72722ef9_featobj1_5c6_1451)}
    {db tmp999[3]={48,112,122};MYCOPY(dummy72722ef9_featobj1_5c9_1452)}
    {db tmp999[3]={32,128,124};MYCOPY(dummy72722ef9_featobj1_5cc_1453)}
    {db tmp999[3]={40,128,122};MYCOPY(dummy72722ef9_featobj1_5cf_1454)}
    {db tmp999[3]={40,126,120};MYCOPY(dummy72722ef9_featobj1_5d2_1455)}
    {db tmp999[3]={8,122,124};MYCOPY(dummy72722ef9_featobj1_5d5_1456)}
    {db tmp999[3]={8,124,126};MYCOPY(dummy72722ef9_featobj1_5d8_1457)}
    {db tmp999[3]={16,126,126};MYCOPY(dummy72722ef9_featobj1_5db_1458)}
    {db tmp999[3]={8,124,102};MYCOPY(dummy72722ef9_featobj1_5de_1459)}
    {db tmp999[3]={24,126,102};MYCOPY(dummy72722ef9_featobj1_5e1_1460)}
    {db tmp999[3]={24,128,100};MYCOPY(dummy72722ef9_featobj1_5e4_1461)}
    {db tmp999[3]={40,128,98};MYCOPY(dummy72722ef9_featobj1_5e7_1462)}
    {db tmp999[3]={40,126,96};MYCOPY(dummy72722ef9_featobj1_5ea_1463)}
    {db tmp999[3]={56,124,96};MYCOPY(dummy72722ef9_featobj1_5ed_1464)}
    {db tmp999[3]={56,122,98};MYCOPY(dummy72722ef9_featobj1_5f0_1465)}
    {db tmp999[3]={8,122,100};MYCOPY(dummy72722ef9_featobj1_5f3_1466)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_5f6_1467)}
    {dw tmp999=offset(featobj1,town10_1);MYCOPY(dummy72722ef9_featobj1_5f7_1468)}
    {dw tmp999=51;MYCOPY(town10_1)}
    {db tmp999[12]={col_grey2,0,2,4,6,8,10,12,14,16,18,255};MYCOPY(dummy72722ef9_featobj1_5fb_1471)}
    {db tmp999[18]={col_grey2,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,255};MYCOPY(dummy72722ef9_featobj1_607_1472)}
    {db tmp999[10]={col_grey2,52,54,56,46,48,58,60,62,255};MYCOPY(dummy72722ef9_featobj1_619_1473)}
    {db tmp999[10]={col_grey2,64,66,68,70,72,74,76,78,255};MYCOPY(dummy72722ef9_featobj1_623_1474)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_62d_1475)}
    {db tmp999[3]={56,130,100};MYCOPY(dummy72722ef9_featobj1_62e_1478)}
    {db tmp999[3]={56,116,114};MYCOPY(dummy72722ef9_featobj1_631_1479)}
    {db tmp999[3]={8,116,124};MYCOPY(dummy72722ef9_featobj1_634_1480)}
    {db tmp999[3]={8,118,126};MYCOPY(dummy72722ef9_featobj1_637_1481)}
    {db tmp999[3]={8,118,136};MYCOPY(dummy72722ef9_featobj1_63a_1482)}
    {db tmp999[3]={8,134,152};MYCOPY(dummy72722ef9_featobj1_63d_1483)}
    {db tmp999[3]={24,144,152};MYCOPY(dummy72722ef9_featobj1_640_1484)}
    {db tmp999[3]={24,146,150};MYCOPY(dummy72722ef9_featobj1_643_1485)}
    {db tmp999[3]={40,146,118};MYCOPY(dummy72722ef9_featobj1_646_1486)}
    {db tmp999[3]={40,132,104};MYCOPY(dummy72722ef9_featobj1_649_1487)}
    {db tmp999[3]={40,132,102};MYCOPY(dummy72722ef9_featobj1_64c_1488)}
    {db tmp999[3]={40,130,100};MYCOPY(dummy72722ef9_featobj1_64f_1489)}
    {db tmp999[3]={24,130,98};MYCOPY(dummy72722ef9_featobj1_652_1490)}
    {db tmp999[3]={24,132,96};MYCOPY(dummy72722ef9_featobj1_655_1491)}
    {db tmp999[3]={8,134,96};MYCOPY(dummy72722ef9_featobj1_658_1492)}
    {db tmp999[3]={8,136,98};MYCOPY(dummy72722ef9_featobj1_65b_1493)}
    {db tmp999[3]={56,136,100};MYCOPY(dummy72722ef9_featobj1_65e_1494)}
    {db tmp999[3]={56,134,102};MYCOPY(dummy72722ef9_featobj1_661_1495)}
    {db tmp999[3]={56,132,102};MYCOPY(dummy72722ef9_featobj1_664_1496)}
    {db tmp999[3]={32,134,96};MYCOPY(dummy72722ef9_featobj1_667_1497)}
    {db tmp999[3]={40,134,82};MYCOPY(dummy72722ef9_featobj1_66a_1498)}
    {db tmp999[3]={56,128,82};MYCOPY(dummy72722ef9_featobj1_66d_1499)}
    {db tmp999[3]={8,128,88};MYCOPY(dummy72722ef9_featobj1_670_1500)}
    {db tmp999[3]={8,134,88};MYCOPY(dummy72722ef9_featobj1_673_1501)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_676_1502)}
    {dw tmp999=offset(featobj1,town11_1);MYCOPY(dummy72722ef9_featobj1_677_1503)}
    {dw tmp999=29;MYCOPY(town11_1)}
    {db tmp999[21]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,255};MYCOPY(dummy72722ef9_featobj1_67b_1506)}
    {db tmp999[7]={col_grey2,38,40,42,44,46,255};MYCOPY(dummy72722ef9_featobj1_690_1507)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_697_1508)}
    {db tmp999[3]={16,98,132};MYCOPY(dummy72722ef9_featobj1_698_1511)}
    {db tmp999[3]={8,100,132};MYCOPY(dummy72722ef9_featobj1_69b_1512)}
    {db tmp999[3]={8,110,142};MYCOPY(dummy72722ef9_featobj1_69e_1513)}
    {db tmp999[3]={24,130,142};MYCOPY(dummy72722ef9_featobj1_6a1_1514)}
    {db tmp999[3]={24,132,140};MYCOPY(dummy72722ef9_featobj1_6a4_1515)}
    {db tmp999[3]={24,146,140};MYCOPY(dummy72722ef9_featobj1_6a7_1516)}
    {db tmp999[3]={24,148,138};MYCOPY(dummy72722ef9_featobj1_6aa_1517)}
    {db tmp999[3]={40,148,136};MYCOPY(dummy72722ef9_featobj1_6ad_1518)}
    {db tmp999[3]={40,136,124};MYCOPY(dummy72722ef9_featobj1_6b0_1519)}
    {db tmp999[3]={40,132,110};MYCOPY(dummy72722ef9_featobj1_6b3_1520)}
    {db tmp999[3]={40,128,108};MYCOPY(dummy72722ef9_featobj1_6b6_1521)}
    {db tmp999[3]={40,118,100};MYCOPY(dummy72722ef9_featobj1_6b9_1522)}
    {db tmp999[3]={40,108,86};MYCOPY(dummy72722ef9_featobj1_6bc_1523)}
    {db tmp999[3]={40,100,80};MYCOPY(dummy72722ef9_featobj1_6bf_1524)}
    {db tmp999[3]={48,98,80};MYCOPY(dummy72722ef9_featobj1_6c2_1525)}
    {db tmp999[3]={56,160,74};MYCOPY(dummy72722ef9_featobj1_6c5_1526)}
    {db tmp999[3]={56,158,76};MYCOPY(dummy72722ef9_featobj1_6c8_1527)}
    {db tmp999[3]={8,158,80};MYCOPY(dummy72722ef9_featobj1_6cb_1528)}
    {db tmp999[3]={8,160,82};MYCOPY(dummy72722ef9_featobj1_6ce_1529)}
    {db tmp999[3]={48,158,78};MYCOPY(dummy72722ef9_featobj1_6d1_1530)}
    {db tmp999[3]={56,132,78};MYCOPY(dummy72722ef9_featobj1_6d4_1531)}
    {db tmp999[3]={0,130,84};MYCOPY(dummy72722ef9_featobj1_6d7_1532)}
    {db tmp999[3]={8,132,90};MYCOPY(dummy72722ef9_featobj1_6da_1533)}
    {db tmp999[3]={8,132,106};MYCOPY(dummy72722ef9_featobj1_6dd_1534)}
    {db tmp999[3]={8,136,108};MYCOPY(dummy72722ef9_featobj1_6e0_1535)}
    {db tmp999[3]={8,140,120};MYCOPY(dummy72722ef9_featobj1_6e3_1536)}
    {db tmp999[3]={8,142,122};MYCOPY(dummy72722ef9_featobj1_6e6_1537)}
    {db tmp999[3]={16,158,122};MYCOPY(dummy72722ef9_featobj1_6e9_1538)}
    {db tmp999[3]={40,160,126};MYCOPY(dummy72722ef9_featobj1_6ec_1539)}
    {db tmp999[3]={40,158,124};MYCOPY(dummy72722ef9_featobj1_6ef_1540)}
    {db tmp999[3]={24,158,120};MYCOPY(dummy72722ef9_featobj1_6f2_1541)}
    {db tmp999[3]={24,160,118};MYCOPY(dummy72722ef9_featobj1_6f5_1542)}
    {db tmp999[3]={24,96,136};MYCOPY(dummy72722ef9_featobj1_6f8_1543)}
    {db tmp999[3]={24,98,134};MYCOPY(dummy72722ef9_featobj1_6fb_1544)}
    {db tmp999[3]={40,98,130};MYCOPY(dummy72722ef9_featobj1_6fe_1545)}
    {db tmp999[3]={40,96,128};MYCOPY(dummy72722ef9_featobj1_701_1546)}
    {db tmp999[3]={24,96,84};MYCOPY(dummy72722ef9_featobj1_704_1547)}
    {db tmp999[3]={24,98,82};MYCOPY(dummy72722ef9_featobj1_707_1548)}
    {db tmp999[3]={40,98,78};MYCOPY(dummy72722ef9_featobj1_70a_1549)}
    {db tmp999[3]={40,96,76};MYCOPY(dummy72722ef9_featobj1_70d_1550)}
    {db tmp999[3]={48,160,134};MYCOPY(dummy72722ef9_featobj1_710_1551)}
    {db tmp999[3]={56,158,134};MYCOPY(dummy72722ef9_featobj1_713_1552)}
    {db tmp999[3]={56,156,136};MYCOPY(dummy72722ef9_featobj1_716_1553)}
    {db tmp999[3]={40,152,136};MYCOPY(dummy72722ef9_featobj1_719_1554)}
    {db tmp999[3]={40,146,130};MYCOPY(dummy72722ef9_featobj1_71c_1555)}
    {db tmp999[3]={32,146,122};MYCOPY(dummy72722ef9_featobj1_71f_1556)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_722_1557)}
    {dw tmp999=offset(featobj1,town12_1);MYCOPY(dummy72722ef9_featobj1_723_1558)}
    {dw tmp999=61;MYCOPY(town12_1)}
    {db tmp999[17]={col_grey2,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,255};MYCOPY(dummy72722ef9_featobj1_727_1561)}
    {db tmp999[6]={col_grey2,30,32,34,36,255};MYCOPY(dummy72722ef9_featobj1_738_1562)}
    {db tmp999[11]={col_grey2,38,40,42,44,46,48,50,52,54,255};MYCOPY(dummy72722ef9_featobj1_73e_1563)}
    {db tmp999[6]={col_grey2,56,58,60,62,255};MYCOPY(dummy72722ef9_featobj1_749_1564)}
    {db tmp999[6]={col_grey2,64,66,68,70,255};MYCOPY(dummy72722ef9_featobj1_74f_1565)}
    {db tmp999[6]={col_grey2,72,74,76,78,255};MYCOPY(dummy72722ef9_featobj1_755_1566)}
    {db tmp999[8]={col_grey2,80,82,84,86,88,90,255};MYCOPY(dummy72722ef9_featobj1_75b_1567)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_763_1568)}
    {db tmp999[3]={56,128,112};MYCOPY(dummy72722ef9_featobj1_764_1571)}
    {db tmp999[3]={0,126,120};MYCOPY(dummy72722ef9_featobj1_767_1572)}
    {db tmp999[3]={0,126,142};MYCOPY(dummy72722ef9_featobj1_76a_1573)}
    {db tmp999[3]={8,126,144};MYCOPY(dummy72722ef9_featobj1_76d_1574)}
    {db tmp999[3]={16,128,146};MYCOPY(dummy72722ef9_featobj1_770_1575)}
    {db tmp999[3]={24,134,142};MYCOPY(dummy72722ef9_featobj1_773_1576)}
    {db tmp999[3]={24,138,136};MYCOPY(dummy72722ef9_featobj1_776_1577)}
    {db tmp999[3]={32,140,130};MYCOPY(dummy72722ef9_featobj1_779_1578)}
    {db tmp999[3]={24,140,126};MYCOPY(dummy72722ef9_featobj1_77c_1579)}
    {db tmp999[3]={24,142,124};MYCOPY(dummy72722ef9_featobj1_77f_1580)}
    {db tmp999[3]={40,142,122};MYCOPY(dummy72722ef9_featobj1_782_1581)}
    {db tmp999[3]={40,140,120};MYCOPY(dummy72722ef9_featobj1_785_1582)}
    {db tmp999[3]={56,138,120};MYCOPY(dummy72722ef9_featobj1_788_1583)}
    {db tmp999[3]={56,136,122};MYCOPY(dummy72722ef9_featobj1_78b_1584)}
    {db tmp999[3]={8,136,124};MYCOPY(dummy72722ef9_featobj1_78e_1585)}
    {db tmp999[3]={8,138,126};MYCOPY(dummy72722ef9_featobj1_791_1586)}
    {db tmp999[3]={16,126,124};MYCOPY(dummy72722ef9_featobj1_794_1587)}
    {db tmp999[3]={24,130,124};MYCOPY(dummy72722ef9_featobj1_797_1588)}
    {db tmp999[3]={24,136,118};MYCOPY(dummy72722ef9_featobj1_79a_1589)}
    {db tmp999[3]={40,136,114};MYCOPY(dummy72722ef9_featobj1_79d_1590)}
    {db tmp999[3]={40,132,112};MYCOPY(dummy72722ef9_featobj1_7a0_1591)}
    {db tmp999[3]={48,128,112};MYCOPY(dummy72722ef9_featobj1_7a3_1592)}
    {db tmp999[3]={56,136,124};MYCOPY(dummy72722ef9_featobj1_7a6_1593)}
    {db tmp999[3]={56,132,126};MYCOPY(dummy72722ef9_featobj1_7a9_1594)}
    {db tmp999[3]={0,130,130};MYCOPY(dummy72722ef9_featobj1_7ac_1595)}
    {db tmp999[3]={8,130,142};MYCOPY(dummy72722ef9_featobj1_7af_1596)}
    {db tmp999[3]={8,134,142};MYCOPY(dummy72722ef9_featobj1_7b2_1597)}
    {db tmp999[3]={48,160,106};MYCOPY(dummy72722ef9_featobj1_7b5_1598)}
    {db tmp999[3]={56,158,106};MYCOPY(dummy72722ef9_featobj1_7b8_1599)}
    {db tmp999[3]={48,142,122};MYCOPY(dummy72722ef9_featobj1_7bb_1600)}
    {db tmp999[3]={32,140,120};MYCOPY(dummy72722ef9_featobj1_7be_1601)}
    {db tmp999[3]={24,158,104};MYCOPY(dummy72722ef9_featobj1_7c1_1602)}
    {db tmp999[3]={16,160,104};MYCOPY(dummy72722ef9_featobj1_7c4_1603)}
    {db tmp999[3]={0,136,158};MYCOPY(dummy72722ef9_featobj1_7c7_1604)}
    {db tmp999[3]={56,136,162};MYCOPY(dummy72722ef9_featobj1_7ca_1605)}
    {db tmp999[3]={56,132,166};MYCOPY(dummy72722ef9_featobj1_7cd_1606)}
    {db tmp999[3]={0,130,170};MYCOPY(dummy72722ef9_featobj1_7d0_1607)}
    {db tmp999[3]={8,132,176};MYCOPY(dummy72722ef9_featobj1_7d3_1608)}
    {db tmp999[3]={24,138,176};MYCOPY(dummy72722ef9_featobj1_7d6_1609)}
    {db tmp999[3]={24,140,174};MYCOPY(dummy72722ef9_featobj1_7d9_1610)}
    {db tmp999[3]={32,140,160};MYCOPY(dummy72722ef9_featobj1_7dc_1611)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_7df_1612)}
    {dw tmp999=offset(featobj1,town13_1);MYCOPY(dummy72722ef9_featobj1_7e0_1613)}
    {dw tmp999=54;MYCOPY(town13_1)}
    {db tmp999[20]={col_grey2,0,2,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,16,255};MYCOPY(dummy72722ef9_featobj1_7e4_1616)}
    {db tmp999[8]={col_grey2,32,34,36,38,40,42,255};MYCOPY(dummy72722ef9_featobj1_7f8_1617)}
    {db tmp999[7]={col_grey2,44,46,48,50,52,255};MYCOPY(dummy72722ef9_featobj1_800_1618)}
    {db tmp999[8]={col_grey2,54,56,58,60,62,64,255};MYCOPY(dummy72722ef9_featobj1_807_1620)}
    {db tmp999[10]={col_grey2,66,68,70,72,74,76,78,80,255};MYCOPY(dummy72722ef9_featobj1_80f_1621)}
    {db tmp999=255;MYCOPY(dummy72722ef9_featobj1_819_1622)}
    {db tmp999=38;MYCOPY(vertexloop1)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_81b_1803)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_81c_1811)}
    {db tmp999=38;MYCOPY(vertexloop2)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_81e_1848)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_81f_1856)}
    {db tmp999=38;MYCOPY(vertexloop8)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_821_1896)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_822_1904)}
    {db tmp999=38;MYCOPY(makevertloop1)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_824_1955)}
    {db tmp999=38;MYCOPY(dummy72722ef9_viscode_825_1963)}

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
        

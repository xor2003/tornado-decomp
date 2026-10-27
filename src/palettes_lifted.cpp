/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "palettes.h"

	
 __attribute__((weak)) bool fixgmrpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixgmrpalette, _state);}

 __attribute__((weak)) bool fixirpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixirpalette, _state);}

 __attribute__((weak)) bool initpalettes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitpalettes, _state);}

 __attribute__((weak)) bool scalergbvalues(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscalergbvalues, _state);}

 __attribute__((weak)) bool setgmrpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetgmrpalette, _state);}

 __attribute__((weak)) bool sethudlevel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksethudlevel, _state);}

 __attribute__((weak)) bool setirpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetirpalette, _state);}

 __attribute__((weak)) bool setnightpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetnightpanel, _state);}

 __attribute__((weak)) bool swappalettes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswappalettes, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool exitnightpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitnightpanel, _state);}

 static bool exitpalettes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitpalettes, _state);}

 static bool irloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kirloop, _state);}

 static bool paletteok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpaletteok, _state);}

 static bool skippreview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippreview, _state);}

	
	#include "palettes_default_seg_lifted.cpp"
#include "palettes_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitnightpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitpalettes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixgmrpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixirpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitpalettes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kirloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_loadfile
        case m2c::kloadfile: 	if (!loadfile(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kpaletteok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscalergbvalues: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetgmrpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksethudlevel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetirpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetnightpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippreview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswappalettes: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_palettes()
          {
              {db tmp999[32]={0,0+1,1+1,2+1,3+1,4+1,5+1,6+1,7+1,8+1,9+1,10+1,11+1,12+1,13+1,14+1,15+1,16+1,17+1,18+1,19+1,20+1,21+1,22+1,23+1,24+1,25+1,26+1,27+1,28+1,29+1,30+1};MYCOPY(dummy787e69db_paldata_0_610)}
    {db tmp999[32]={31+1,32+1,33+1,34+1,35+1,36+1,37+1,38+1,39+1,40+1,41+1,42+1,43+1,44+1,45+1,46+1,47+1,48+1,49+1,50+1,51+1,52+1,53+1,54+1,55+1,56+1,57+1,58+1,59+1,60+1,61+1,62+1};MYCOPY(dummy787e69db_paldata_20_674)}
    {db tmp999[32]={63+1,64+1,65+1,66+1,67+1,68+1,69+1,70+1,71+1,72+1,73+1,74+1,75+1,76+1,77+1,78+1,79+1,80+1,81+1,82+1,83+1,84+1,85+1,86+1,87+1,88+1,89+1,90+1,91+1,92+1,93+1,94+1};MYCOPY(dummy787e69db_paldata_40_738)}
    {db tmp999[32]={95+1,96+1,97+1,98+1,99+1,100+1,101+1,102+1,103+1,104+1,105+1,106+1,107+1,108+1,109+1,110+1,111+1,112+1,113+1,114+1,115+1,116+1,117+1,118+1,119+1,120+1,121+1,122+1,123+1,124+1,125+1,126+1};MYCOPY(dummy787e69db_paldata_60_802)}
    {db tmp999[32]={127+1,128+1,129+1,130+1,131+1,132+1,133+1,134+1,135+1,136+1,137+1,138+1,139+1,140+1,141+1,142+1,143+1,144+1,145+1,146+1,147+1,148+1,149+1,150+1,151+1,152+1,153+1,154+1,155+1,156+1,157+1,158+1};MYCOPY(dummy787e69db_paldata_80_866)}
    {db tmp999[32]={159+1,160+1,161+1,162+1,163+1,164+1,165+1,166+1,167+1,168+1,169+1,170+1,171+1,172+1,173+1,174+1,175+1,176+1,177+1,178+1,179+1,180+1,181+1,182+1,183+1,184+1,185+1,186+1,187+1,188+1,189+1,190+1};MYCOPY(dummy787e69db_paldata_a0_930)}
    {db tmp999[32]={191+1,192+1,193+1,194+1,195+1,196+1,197+1,198+1,199+1,200+1,201+1,202+1,203+1,204+1,205+1,206+1,207+1,208+1,209+1,210+1,211+1,212+1,213+1,214+1,215+1,216+1,217+1,218+1,219+1,220+1,221+1,222+1};MYCOPY(dummy787e69db_paldata_c0_994)}
    {db tmp999[32]={223+1,224+1,225+1,226+1,227+1,228+1,229+1,230+1,231+1,232+1,233+1,234+1,235+1,236+1,237+1,238+1,239+1,240+1,241+1,242+1,243+1,244+1,245+1,246+1,247+1,248+1,249+1,250+1,251+1,252+1,253+1,254+1};MYCOPY(dummy787e69db_paldata_e0_1058)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_100_1135)}
    {db tmp999[3]={0,0,42};MYCOPY(dummy787e69db_paldata_103_1136)}
    {db tmp999[3]={0,42,0};MYCOPY(dummy787e69db_paldata_106_1137)}
    {db tmp999[3]={0,42,42};MYCOPY(dummy787e69db_paldata_109_1138)}
    {db tmp999[3]={42,0,0};MYCOPY(dummy787e69db_paldata_10c_1139)}
    {db tmp999[3]={42,0,42};MYCOPY(dummy787e69db_paldata_10f_1140)}
    {db tmp999[3]={42,21,0};MYCOPY(dummy787e69db_paldata_112_1141)}
    {db tmp999[3]={42,42,42};MYCOPY(dummy787e69db_paldata_115_1142)}
    {db tmp999[3]={21,21,21};MYCOPY(dummy787e69db_paldata_118_1143)}
    {db tmp999[3]={21,21,63};MYCOPY(dummy787e69db_paldata_11b_1144)}
    {db tmp999[3]={21,63,21};MYCOPY(dummy787e69db_paldata_11e_1145)}
    {db tmp999[3]={21,63,63};MYCOPY(dummy787e69db_paldata_121_1146)}
    {db tmp999[3]={63,21,21};MYCOPY(dummy787e69db_paldata_124_1147)}
    {db tmp999[3]={63,21,63};MYCOPY(dummy787e69db_paldata_127_1148)}
    {db tmp999[3]={63,63,21};MYCOPY(dummy787e69db_paldata_12a_1149)}
    {db tmp999[3]={63,63,63};MYCOPY(dummy787e69db_paldata_12d_1150)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_130_1157)}
    {db tmp999[3]={63,21,21};MYCOPY(dummy787e69db_paldata_133_1158)}
    {db tmp999[3]={63,63,21};MYCOPY(dummy787e69db_paldata_136_1159)}
    {db tmp999[3]={21,63,63};MYCOPY(dummy787e69db_paldata_139_1160)}
    {db tmp999[3]={63,63,63};MYCOPY(dummy787e69db_paldata_13c_1161)}
    {db tmp999[3]={0,26,42};MYCOPY(vga_ext_text)}
    {db tmp999[3]={32,44,57};MYCOPY(dummy787e69db_paldata_142_1165)}
    {db tmp999[3]={63,35,5};MYCOPY(dummy787e69db_paldata_145_1166)}
    {db tmp999[3]={63,63,63};MYCOPY(dummy787e69db_paldata_148_1169)}
    {db tmp999[3]={51,51,51};MYCOPY(dummy787e69db_paldata_14b_1170)}
    {db tmp999[3]={40,40,40};MYCOPY(dummy787e69db_paldata_14e_1171)}
    {db tmp999[3]={28,28,28};MYCOPY(dummy787e69db_paldata_151_1172)}
    {db tmp999[3]={17,17,17};MYCOPY(dummy787e69db_paldata_154_1173)}
    {db tmp999[3]={63,16,20};MYCOPY(dummy787e69db_paldata_157_1174)}
    {db tmp999[3]={50,3,7};MYCOPY(dummy787e69db_paldata_15a_1175)}
    {db tmp999[3]={41,0,0};MYCOPY(dummy787e69db_paldata_15d_1176)}
    {db tmp999[3]={16,26,40};MYCOPY(dummy787e69db_paldata_160_1177)}
    {db tmp999[3]={9,16,25};MYCOPY(dummy787e69db_paldata_163_1178)}
    {db tmp999[3]={63,58,37};MYCOPY(dummy787e69db_paldata_166_1179)}
    {db tmp999[3]={63,46,0};MYCOPY(dummy787e69db_paldata_169_1180)}
    {db tmp999[3]={63,37,0};MYCOPY(dummy787e69db_paldata_16c_1181)}
    {db tmp999[3]={20,63,33};MYCOPY(dummy787e69db_paldata_16f_1182)}
    {db tmp999[3]={63,51,51};MYCOPY(dummy787e69db_paldata_172_1183)}
    {db tmp999[3]={51,51,63};MYCOPY(dummy787e69db_paldata_175_1184)}
    {db tmp999[3]={63,63,63};MYCOPY(dummy787e69db_paldata_178_1187)}
    {db tmp999[3]={50,50,50};MYCOPY(dummy787e69db_paldata_17b_1188)}
    {db tmp999[3]={37,37,37};MYCOPY(dummy787e69db_paldata_17e_1189)}
    {db tmp999[3]={31,31,31};MYCOPY(dummy787e69db_paldata_181_1190)}
    {db tmp999[3]={24,24,24};MYCOPY(dummy787e69db_paldata_184_1191)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_187_1192)}
    {db tmp999[3]={35,41,41};MYCOPY(dummy787e69db_paldata_18a_1193)}
    {db tmp999[3]={32,39,39};MYCOPY(dummy787e69db_paldata_18d_1194)}
    {db tmp999[3]={30,37,37};MYCOPY(dummy787e69db_paldata_190_1195)}
    {db tmp999[3]={27,35,35};MYCOPY(dummy787e69db_paldata_193_1196)}
    {db tmp999[3]={25,33,33};MYCOPY(dummy787e69db_paldata_196_1197)}
    {db tmp999[3]={23,31,31};MYCOPY(dummy787e69db_paldata_199_1198)}
    {db tmp999[3]={56,47,33};MYCOPY(dummy787e69db_paldata_19c_1199)}
    {db tmp999[3]={49,40,28};MYCOPY(dummy787e69db_paldata_19f_1200)}
    {db tmp999[3]={43,34,23};MYCOPY(dummy787e69db_paldata_1a2_1201)}
    {db tmp999[3]={36,27,19};MYCOPY(dummy787e69db_paldata_1a5_1202)}
    {db tmp999[3]={30,22,15};MYCOPY(dummy787e69db_paldata_1a8_1203)}
    {db tmp999[3]={47,34,28};MYCOPY(dummy787e69db_paldata_1ab_1204)}
    {db tmp999[3]={45,31,25};MYCOPY(dummy787e69db_paldata_1ae_1205)}
    {db tmp999[3]={44,29,22};MYCOPY(dummy787e69db_paldata_1b1_1206)}
    {db tmp999[3]={43,26,20};MYCOPY(dummy787e69db_paldata_1b4_1207)}
    {db tmp999[3]={42,24,18};MYCOPY(dummy787e69db_paldata_1b7_1208)}
    {db tmp999[3]={56,56,56};MYCOPY(dummy787e69db_paldata_1ba_1209)}
    {db tmp999[3]={43,43,43};MYCOPY(dummy787e69db_paldata_1bd_1210)}
    {db tmp999[3]={19,19,19};MYCOPY(dummy787e69db_paldata_1c0_1211)}
    {db tmp999[3]={12,12,12};MYCOPY(dummy787e69db_paldata_1c3_1212)}
    {db tmp999[3]={62,63,0};MYCOPY(dummy787e69db_paldata_1c6_1213)}
    {db tmp999[3]={63,55,0};MYCOPY(dummy787e69db_paldata_1c9_1214)}
    {db tmp999[3]={63,46,0};MYCOPY(dummy787e69db_paldata_1cc_1215)}
    {db tmp999[3]={63,38,0};MYCOPY(dummy787e69db_paldata_1cf_1216)}
    {db tmp999[3]={63,32,0};MYCOPY(dummy787e69db_paldata_1d2_1217)}
    {db tmp999[3]={63,24,0};MYCOPY(dummy787e69db_paldata_1d5_1218)}
    {db tmp999[3]={0,50,34};MYCOPY(dummy787e69db_paldata_1d8_1219)}
    {db tmp999[3]={0,46,30};MYCOPY(dummy787e69db_paldata_1db_1220)}
    {db tmp999[3]={0,41,28};MYCOPY(dummy787e69db_paldata_1de_1221)}
    {db tmp999[3]={0,33,25};MYCOPY(dummy787e69db_paldata_1e1_1222)}
    {db tmp999[3]={0,50,49};MYCOPY(dummy787e69db_paldata_1e4_1223)}
    {db tmp999[3]={0,44,43};MYCOPY(dummy787e69db_paldata_1e7_1224)}
    {db tmp999[3]={0,40,38};MYCOPY(dummy787e69db_paldata_1ea_1225)}
    {db tmp999[3]={0,37,35};MYCOPY(dummy787e69db_paldata_1ed_1226)}
    {db tmp999[3]={28,37,28};MYCOPY(dummy787e69db_paldata_1f0_1227)}
    {db tmp999[3]={25,34,25};MYCOPY(dummy787e69db_paldata_1f3_1228)}
    {db tmp999[3]={22,31,22};MYCOPY(dummy787e69db_paldata_1f6_1229)}
    {db tmp999[3]={20,29,20};MYCOPY(dummy787e69db_paldata_1f9_1230)}
    {db tmp999[3]={18,26,17};MYCOPY(dummy787e69db_paldata_1fc_1231)}
    {db tmp999[3]={16,24,15};MYCOPY(dummy787e69db_paldata_1ff_1232)}
    {db tmp999[3]={61,61,61};MYCOPY(dummy787e69db_paldata_202_1233)}
    {db tmp999[3]={16,18,24};MYCOPY(dummy787e69db_paldata_205_1234)}
    {db tmp999[3]={0,0,4};MYCOPY(dummy787e69db_paldata_208_1235)}
    {db tmp999[3]={34,34,34};MYCOPY(dummy787e69db_paldata_20b_1238)}
    {db tmp999[3]={27,27,27};MYCOPY(dummy787e69db_paldata_20e_1239)}
    {db tmp999[3]={0,37,25};MYCOPY(vga_gnd)}
    {db tmp999[3]={30,37,35};MYCOPY(dummy787e69db_paldata_214_1241)}
    {db tmp999[3]={25,25,25};MYCOPY(dummy787e69db_paldata_217_1242)}
    {db tmp999[3]={21,23,23};MYCOPY(dummy787e69db_paldata_21a_1243)}
    {db tmp999[3]={0,30,29};MYCOPY(dummy787e69db_paldata_21d_1244)}
    {db tmp999[3]={0,38,25};MYCOPY(dummy787e69db_paldata_220_1247)}
    {db tmp999[3]={2,39,26};MYCOPY(dummy787e69db_paldata_223_1248)}
    {db tmp999[3]={5,40,27};MYCOPY(dummy787e69db_paldata_226_1249)}
    {db tmp999[3]={15,41,28};MYCOPY(dummy787e69db_paldata_229_1250)}
    {db tmp999[3]={21,42,28};MYCOPY(dummy787e69db_paldata_22c_1251)}
    {db tmp999[3]={25,43,28};MYCOPY(dummy787e69db_paldata_22f_1252)}
    {db tmp999[3]={28,44,27};MYCOPY(dummy787e69db_paldata_232_1253)}
    {db tmp999[3]={32,44,26};MYCOPY(dummy787e69db_paldata_235_1254)}
    {db tmp999[3]={35,44,25};MYCOPY(dummy787e69db_paldata_238_1255)}
    {db tmp999[3]={38,44,24};MYCOPY(dummy787e69db_paldata_23b_1256)}
    {db tmp999[3]={40,44,24};MYCOPY(dummy787e69db_paldata_23e_1257)}
    {db tmp999[3]={42,44,23};MYCOPY(dummy787e69db_paldata_241_1258)}
    {db tmp999[3]={44,44,23};MYCOPY(dummy787e69db_paldata_244_1259)}
    {db tmp999[3]={46,43,23};MYCOPY(dummy787e69db_paldata_247_1260)}
    {db tmp999[3]={48,42,23};MYCOPY(dummy787e69db_paldata_24a_1261)}
    {db tmp999[3]={50,41,23};MYCOPY(dummy787e69db_paldata_24d_1262)}
    {db tmp999[3]={63,63,63};MYCOPY(vga_sky)}
    {db tmp999[3]={59,61,63};MYCOPY(dummy787e69db_paldata_253_1266)}
    {db tmp999[3]={55,59,63};MYCOPY(dummy787e69db_paldata_256_1267)}
    {db tmp999[3]={52,58,63};MYCOPY(dummy787e69db_paldata_259_1268)}
    {db tmp999[3]={49,56,63};MYCOPY(dummy787e69db_paldata_25c_1269)}
    {db tmp999[3]={45,55,63};MYCOPY(dummy787e69db_paldata_25f_1270)}
    {db tmp999[3]={42,53,63};MYCOPY(dummy787e69db_paldata_262_1271)}
    {db tmp999[3]={38,51,63};MYCOPY(dummy787e69db_paldata_265_1272)}
    {db tmp999[3]={35,50,63};MYCOPY(dummy787e69db_paldata_268_1273)}
    {db tmp999[3]={31,48,63};MYCOPY(dummy787e69db_paldata_26b_1274)}
    {db tmp999[3]={28,47,63};MYCOPY(dummy787e69db_paldata_26e_1275)}
    {db tmp999[3]={24,45,63};MYCOPY(dummy787e69db_paldata_271_1276)}
    {db tmp999[3]={21,43,63};MYCOPY(dummy787e69db_paldata_274_1277)}
    {db tmp999[3]={18,42,63};MYCOPY(dummy787e69db_paldata_277_1278)}
    {db tmp999[3]={14,40,63};MYCOPY(dummy787e69db_paldata_27a_1279)}
    {db tmp999[3]={11,39,63};MYCOPY(dummy787e69db_paldata_27d_1280)}
    {db tmp999[3]={11,34,14};MYCOPY(dummy787e69db_paldata_280_1284)}
    {db tmp999[3]={11,35,12};MYCOPY(dummy787e69db_paldata_283_1285)}
    {db tmp999[3]={13,37,11};MYCOPY(dummy787e69db_paldata_286_1286)}
    {db tmp999[3]={16,39,12};MYCOPY(dummy787e69db_paldata_289_1287)}
    {db tmp999[3]={19,40,12};MYCOPY(dummy787e69db_paldata_28c_1288)}
    {db tmp999[3]={22,42,13};MYCOPY(dummy787e69db_paldata_28f_1289)}
    {db tmp999[3]={26,44,13};MYCOPY(dummy787e69db_paldata_292_1290)}
    {db tmp999[3]={30,45,13};MYCOPY(dummy787e69db_paldata_295_1291)}
    {db tmp999[3]={34,47,14};MYCOPY(dummy787e69db_paldata_298_1292)}
    {db tmp999[3]={38,49,14};MYCOPY(dummy787e69db_paldata_29b_1293)}
    {db tmp999[3]={43,50,14};MYCOPY(dummy787e69db_paldata_29e_1294)}
    {db tmp999[3]={47,52,15};MYCOPY(dummy787e69db_paldata_2a1_1295)}
    {db tmp999[3]={52,54,15};MYCOPY(dummy787e69db_paldata_2a4_1296)}
    {db tmp999[3]={55,53,15};MYCOPY(dummy787e69db_paldata_2a7_1297)}
    {db tmp999[3]={57,51,15};MYCOPY(dummy787e69db_paldata_2aa_1298)}
    {db tmp999[3]={59,49,16};MYCOPY(dummy787e69db_paldata_2ad_1299)}
    {db tmp999[3]={40,40,43};MYCOPY(dummy787e69db_paldata_2b0_1302)}
    {db tmp999[3]={28,28,32};MYCOPY(dummy787e69db_paldata_2b3_1303)}
    {db tmp999[3]={42,5,5};MYCOPY(dummy787e69db_paldata_2b6_1304)}
    {db tmp999[3]={30,30,33};MYCOPY(dummy787e69db_paldata_2b9_1305)}
    {db tmp999[3]={11,11,15};MYCOPY(dummy787e69db_paldata_2bc_1306)}
    {db tmp999[3]={9,58,17};MYCOPY(vga_hud)}
    {db tmp999[3]={63,34,8};MYCOPY(dummy787e69db_paldata_2c2_1308)}
    {db tmp999[3]={28,28,33};MYCOPY(dummy787e69db_paldata_2c5_1309)}
    {db tmp999[3]={56,58,59};MYCOPY(dummy787e69db_paldata_2c8_1310)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_2cb_1311)}
    {db tmp999[3]={43,43,43};MYCOPY(dummy787e69db_paldata_2ce_1312)}
    {db tmp999[3]={10,19,34};MYCOPY(dummy787e69db_paldata_2d1_1313)}
    {db tmp999[3]={37,0,0};MYCOPY(dummy787e69db_paldata_2d4_1314)}
    {db tmp999[3]={45,7,0};MYCOPY(dummy787e69db_paldata_2d7_1315)}
    {db tmp999[3]={0,48,0};MYCOPY(dummy787e69db_paldata_2da_1318)}
    {db tmp999[3]={0,54,0};MYCOPY(dummy787e69db_paldata_2dd_1319)}
    {db tmp999[3]={11,34,14};MYCOPY(dummy787e69db_paldata_2e0_1322)}
    {db tmp999[3]={32,20,10};MYCOPY(dummy787e69db_paldata_2e3_1323)}
    {db tmp999[3]={19,19,19};MYCOPY(dummy787e69db_paldata_2e6_1324)}
    {db tmp999[3]={8,15,39};MYCOPY(dummy787e69db_paldata_2e9_1325)}
    {db tmp999[3]={0,44,43};MYCOPY(dummy787e69db_paldata_2ec_1326)}
    {db tmp999[3]={0,33,25};MYCOPY(dummy787e69db_paldata_2ef_1327)}
    {db tmp999[3]={0,46,30};MYCOPY(dummy787e69db_paldata_2f2_1328)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_2f5_1329)}
    {db tmp999[3]={63,21,21};MYCOPY(dummy787e69db_paldata_2f8_1330)}
    {db tmp999[3]={44,44,44};MYCOPY(dummy787e69db_paldata_2fb_1331)}
    {db tmp999[3]={42,21,0};MYCOPY(dummy787e69db_paldata_2fe_1332)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_301_1333)}
    {db tmp999[3]={63,21,21};MYCOPY(dummy787e69db_paldata_304_1334)}
    {db tmp999[3]={44,44,44};MYCOPY(dummy787e69db_paldata_307_1335)}
    {db tmp999[3]={62,35,5};MYCOPY(dummy787e69db_paldata_30a_1336)}
    {db tmp999[3]={51,10,0};MYCOPY(dummy787e69db_paldata_30d_1339)}
    {db tmp999[3]={0,9,1};MYCOPY(dummy787e69db_paldata_310_1340)}
    {db tmp999[3]={0,12,0};MYCOPY(dummy787e69db_paldata_313_1341)}
    {db tmp999[3]={0,15,0};MYCOPY(dummy787e69db_paldata_316_1342)}
    {db tmp999[3]={0,18,0};MYCOPY(dummy787e69db_paldata_319_1343)}
    {db tmp999[3]={0,21,0};MYCOPY(dummy787e69db_paldata_31c_1344)}
    {db tmp999[3]={0,24,0};MYCOPY(dummy787e69db_paldata_31f_1345)}
    {db tmp999[3]={0,27,0};MYCOPY(dummy787e69db_paldata_322_1346)}
    {db tmp999[3]={0,30,0};MYCOPY(dummy787e69db_paldata_325_1347)}
    {db tmp999[3]={0,33,0};MYCOPY(dummy787e69db_paldata_328_1348)}
    {db tmp999[3]={0,36,0};MYCOPY(dummy787e69db_paldata_32b_1349)}
    {db tmp999[3]={0,39,0};MYCOPY(dummy787e69db_paldata_32e_1350)}
    {db tmp999[3]={0,42,0};MYCOPY(dummy787e69db_paldata_331_1351)}
    {db tmp999[3]={0,45,0};MYCOPY(dummy787e69db_paldata_334_1352)}
    {db tmp999[3]={0,48,0};MYCOPY(dummy787e69db_paldata_337_1353)}
    {db tmp999[3]={0,51,0};MYCOPY(dummy787e69db_paldata_33a_1354)}
    {db tmp999[3]={0,54,0};MYCOPY(dummy787e69db_paldata_33d_1355)}
    {db tmp999[240]={0};MYCOPY(dummy787e69db_paldata_340_1359)}
    {db tmp999[3]={54,59,57};MYCOPY(dummy787e69db_paldata_430_1367)}
    {db tmp999[3]={49,56,54};MYCOPY(dummy787e69db_paldata_433_1368)}
    {db tmp999[3]={45,54,51};MYCOPY(dummy787e69db_paldata_436_1369)}
    {db tmp999[3]={40,51,49};MYCOPY(dummy787e69db_paldata_439_1370)}
    {db tmp999[3]={37,49,47};MYCOPY(dummy787e69db_paldata_43c_1371)}
    {db tmp999[3]={33,46,45};MYCOPY(dummy787e69db_paldata_43f_1372)}
    {db tmp999[3]={29,44,43};MYCOPY(dummy787e69db_paldata_442_1373)}
    {db tmp999[3]={26,41,41};MYCOPY(dummy787e69db_paldata_445_1374)}
    {db tmp999[3]={22,38,39};MYCOPY(dummy787e69db_paldata_448_1375)}
    {db tmp999[3]={19,34,36};MYCOPY(dummy787e69db_paldata_44b_1376)}
    {db tmp999[3]={17,30,34};MYCOPY(dummy787e69db_paldata_44e_1377)}
    {db tmp999[3]={14,27,31};MYCOPY(dummy787e69db_paldata_451_1378)}
    {db tmp999[3]={12,24,29};MYCOPY(dummy787e69db_paldata_454_1379)}
    {db tmp999[3]={9,20,27};MYCOPY(dummy787e69db_paldata_457_1380)}
    {db tmp999[3]={7,17,24};MYCOPY(dummy787e69db_paldata_45a_1381)}
    {db tmp999[3]={6,14,22};MYCOPY(dummy787e69db_paldata_45d_1382)}
    {db tmp999[3]={0,0,2};MYCOPY(dummy787e69db_paldata_460_1383)}
    {db tmp999[3]={3,3,6};MYCOPY(dummy787e69db_paldata_463_1384)}
    {db tmp999[3]={5,5,8};MYCOPY(dummy787e69db_paldata_466_1385)}
    {db tmp999[3]={7,7,11};MYCOPY(dummy787e69db_paldata_469_1386)}
    {db tmp999[3]={9,9,13};MYCOPY(dummy787e69db_paldata_46c_1387)}
    {db tmp999[3]={11,11,15};MYCOPY(dummy787e69db_paldata_46f_1388)}
    {db tmp999[3]={13,13,17};MYCOPY(dummy787e69db_paldata_472_1389)}
    {db tmp999[3]={15,15,19};MYCOPY(dummy787e69db_paldata_475_1390)}
    {db tmp999[3]={17,17,21};MYCOPY(dummy787e69db_paldata_478_1391)}
    {db tmp999[3]={19,19,23};MYCOPY(dummy787e69db_paldata_47b_1392)}
    {db tmp999[3]={21,21,25};MYCOPY(dummy787e69db_paldata_47e_1393)}
    {db tmp999[3]={23,23,27};MYCOPY(dummy787e69db_paldata_481_1394)}
    {db tmp999[3]={26,26,30};MYCOPY(dummy787e69db_paldata_484_1395)}
    {db tmp999[3]={28,28,32};MYCOPY(dummy787e69db_paldata_487_1396)}
    {db tmp999[3]={30,30,34};MYCOPY(dummy787e69db_paldata_48a_1397)}
    {db tmp999[3]={32,32,36};MYCOPY(dummy787e69db_paldata_48d_1398)}
    {db tmp999[3]={34,34,38};MYCOPY(dummy787e69db_paldata_490_1399)}
    {db tmp999[3]={36,36,40};MYCOPY(dummy787e69db_paldata_493_1400)}
    {db tmp999[3]={38,38,42};MYCOPY(dummy787e69db_paldata_496_1401)}
    {db tmp999[3]={40,40,43};MYCOPY(dummy787e69db_paldata_499_1402)}
    {db tmp999[3]={42,42,45};MYCOPY(dummy787e69db_paldata_49c_1403)}
    {db tmp999[3]={44,44,47};MYCOPY(dummy787e69db_paldata_49f_1404)}
    {db tmp999[3]={46,46,49};MYCOPY(dummy787e69db_paldata_4a2_1405)}
    {db tmp999[3]={48,48,52};MYCOPY(dummy787e69db_paldata_4a5_1406)}
    {db tmp999[3]={50,50,54};MYCOPY(dummy787e69db_paldata_4a8_1407)}
    {db tmp999[3]={52,52,56};MYCOPY(dummy787e69db_paldata_4ab_1408)}
    {db tmp999[3]={54,54,57};MYCOPY(dummy787e69db_paldata_4ae_1409)}
    {db tmp999[3]={56,56,59};MYCOPY(dummy787e69db_paldata_4b1_1410)}
    {db tmp999[3]={58,58,61};MYCOPY(dummy787e69db_paldata_4b4_1411)}
    {db tmp999[3]={9,0,0};MYCOPY(dummy787e69db_paldata_4b7_1412)}
    {db tmp999[3]={16,1,1};MYCOPY(dummy787e69db_paldata_4ba_1413)}
    {db tmp999[3]={28,7,7};MYCOPY(dummy787e69db_paldata_4bd_1414)}
    {db tmp999[3]={36,3,3};MYCOPY(dummy787e69db_paldata_4c0_1415)}
    {db tmp999[3]={42,5,5};MYCOPY(dummy787e69db_paldata_4c3_1416)}
    {db tmp999[3]={51,9,7};MYCOPY(dummy787e69db_paldata_4c6_1417)}
    {db tmp999[3]={56,9,9};MYCOPY(dummy787e69db_paldata_4c9_1418)}
    {db tmp999[3]={63,12,7};MYCOPY(dummy787e69db_paldata_4cc_1419)}
    {db tmp999[3]={0,7,0};MYCOPY(dummy787e69db_paldata_4cf_1420)}
    {db tmp999[3]={11,11,15};MYCOPY(dummy787e69db_paldata_4d2_1421)}
    {db tmp999[3]={13,13,18};MYCOPY(dummy787e69db_paldata_4d5_1422)}
    {db tmp999[3]={16,16,21};MYCOPY(dummy787e69db_paldata_4d8_1423)}
    {db tmp999[3]={19,19,24};MYCOPY(dummy787e69db_paldata_4db_1424)}
    {db tmp999[3]={21,21,25};MYCOPY(dummy787e69db_paldata_4de_1425)}
    {db tmp999[3]={38,38,42};MYCOPY(dummy787e69db_paldata_4e1_1426)}
    {db tmp999[3]={46,46,49};MYCOPY(dummy787e69db_paldata_4e4_1427)}
    {db tmp999[3]={54,34,0};MYCOPY(dummy787e69db_paldata_4e7_1428)}
    {db tmp999[3]={63,40,5};MYCOPY(dummy787e69db_paldata_4ea_1429)}
    {db tmp999[3]={51,32,0};MYCOPY(dummy787e69db_paldata_4ed_1430)}
    {db tmp999[3]={54,34,0};MYCOPY(dummy787e69db_paldata_4f0_1431)}
    {db tmp999[3]={18,10,0};MYCOPY(dummy787e69db_paldata_4f3_1432)}
    {db tmp999[3]={25,14,1};MYCOPY(dummy787e69db_paldata_4f6_1433)}
    {db tmp999[3]={39,27,0};MYCOPY(dummy787e69db_paldata_4f9_1434)}
    {db tmp999[3]={43,28,0};MYCOPY(dummy787e69db_paldata_4fc_1435)}
    {db tmp999[3]={0,30,0};MYCOPY(dummy787e69db_paldata_4ff_1436)}
    {db tmp999[3]={57,38,0};MYCOPY(dummy787e69db_paldata_502_1437)}
    {db tmp999[3]={21,1,1};MYCOPY(dummy787e69db_paldata_505_1438)}
    {db tmp999[3]={63,40,5};MYCOPY(dummy787e69db_paldata_508_1439)}
    {db tmp999[3]={35,31,27};MYCOPY(dummy787e69db_paldata_50b_1440)}
    {db tmp999[3]={31,28,28};MYCOPY(dummy787e69db_paldata_50e_1441)}
    {db tmp999[3]={37,31,32};MYCOPY(dummy787e69db_paldata_511_1442)}
    {db tmp999[3]={39,34,30};MYCOPY(dummy787e69db_paldata_514_1443)}
    {db tmp999[3]={30,26,22};MYCOPY(dummy787e69db_paldata_517_1444)}
    {db tmp999[3]={63,21,63};MYCOPY(dummy787e69db_paldata_51a_1445)}
    {db tmp999[3]={50,50,54};MYCOPY(dummy787e69db_paldata_51d_1446)}
    {db tmp999[3]={56,58,59};MYCOPY(dummy787e69db_paldata_520_1450)}
    {db tmp999[3]={54,55,56};MYCOPY(dummy787e69db_paldata_523_1451)}
    {db tmp999[3]={52,54,54};MYCOPY(dummy787e69db_paldata_526_1452)}
    {db tmp999[3]={50,51,52};MYCOPY(dummy787e69db_paldata_529_1453)}
    {db tmp999[3]={48,49,50};MYCOPY(dummy787e69db_paldata_52c_1454)}
    {db tmp999[3]={46,47,48};MYCOPY(dummy787e69db_paldata_52f_1455)}
    {db tmp999[3]={44,45,46};MYCOPY(dummy787e69db_paldata_532_1456)}
    {db tmp999[3]={42,43,44};MYCOPY(dummy787e69db_paldata_535_1457)}
    {db tmp999[3]={40,41,42};MYCOPY(dummy787e69db_paldata_538_1458)}
    {db tmp999[3]={37,39,39};MYCOPY(dummy787e69db_paldata_53b_1459)}
    {db tmp999[3]={36,37,37};MYCOPY(dummy787e69db_paldata_53e_1460)}
    {db tmp999[3]={33,35,35};MYCOPY(dummy787e69db_paldata_541_1461)}
    {db tmp999[3]={32,33,33};MYCOPY(dummy787e69db_paldata_544_1462)}
    {db tmp999[3]={29,30,31};MYCOPY(dummy787e69db_paldata_547_1463)}
    {db tmp999[3]={27,28,29};MYCOPY(dummy787e69db_paldata_54a_1464)}
    {db tmp999[3]={25,26,27};MYCOPY(dummy787e69db_paldata_54d_1465)}
    {db tmp999[3]={23,24,24};MYCOPY(dummy787e69db_paldata_550_1466)}
    {db tmp999[3]={21,22,22};MYCOPY(dummy787e69db_paldata_553_1467)}
    {db tmp999[3]={19,20,20};MYCOPY(dummy787e69db_paldata_556_1468)}
    {db tmp999[3]={17,18,18};MYCOPY(dummy787e69db_paldata_559_1469)}
    {db tmp999[3]={15,16,16};MYCOPY(dummy787e69db_paldata_55c_1470)}
    {db tmp999[3]={13,14,14};MYCOPY(dummy787e69db_paldata_55f_1471)}
    {db tmp999[3]={11,11,12};MYCOPY(dummy787e69db_paldata_562_1472)}
    {db tmp999[3]={9,9,10};MYCOPY(dummy787e69db_paldata_565_1473)}
    {db tmp999[3]={7,7,7};MYCOPY(dummy787e69db_paldata_568_1474)}
    {db tmp999[3]={5,5,5};MYCOPY(dummy787e69db_paldata_56b_1475)}
    {db tmp999[3]={3,3,3};MYCOPY(dummy787e69db_paldata_56e_1476)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_571_1477)}
    {db tmp999[3]={3,6,2};MYCOPY(dummy787e69db_paldata_574_1478)}
    {db tmp999[3]={5,7,3};MYCOPY(dummy787e69db_paldata_577_1479)}
    {db tmp999[3]={6,8,4};MYCOPY(dummy787e69db_paldata_57a_1480)}
    {db tmp999[3]={7,9,4};MYCOPY(dummy787e69db_paldata_57d_1481)}
    {db tmp999[3]={7,10,5};MYCOPY(dummy787e69db_paldata_580_1482)}
    {db tmp999[3]={8,11,5};MYCOPY(dummy787e69db_paldata_583_1483)}
    {db tmp999[3]={9,11,6};MYCOPY(dummy787e69db_paldata_586_1484)}
    {db tmp999[3]={9,12,6};MYCOPY(dummy787e69db_paldata_589_1485)}
    {db tmp999[3]={10,13,7};MYCOPY(dummy787e69db_paldata_58c_1486)}
    {db tmp999[3]={11,14,7};MYCOPY(dummy787e69db_paldata_58f_1487)}
    {db tmp999[3]={11,14,8};MYCOPY(dummy787e69db_paldata_592_1488)}
    {db tmp999[3]={12,15,8};MYCOPY(dummy787e69db_paldata_595_1489)}
    {db tmp999[3]={13,16,9};MYCOPY(dummy787e69db_paldata_598_1490)}
    {db tmp999[3]={14,17,9};MYCOPY(dummy787e69db_paldata_59b_1491)}
    {db tmp999[3]={14,18,10};MYCOPY(dummy787e69db_paldata_59e_1492)}
    {db tmp999[3]={15,18,11};MYCOPY(dummy787e69db_paldata_5a1_1493)}
    {db tmp999[3]={16,19,11};MYCOPY(dummy787e69db_paldata_5a4_1494)}
    {db tmp999[3]={17,20,12};MYCOPY(dummy787e69db_paldata_5a7_1495)}
    {db tmp999[3]={17,21,12};MYCOPY(dummy787e69db_paldata_5aa_1496)}
    {db tmp999[3]={18,21,13};MYCOPY(dummy787e69db_paldata_5ad_1497)}
    {db tmp999[3]={19,22,14};MYCOPY(dummy787e69db_paldata_5b0_1498)}
    {db tmp999[3]={20,23,15};MYCOPY(dummy787e69db_paldata_5b3_1499)}
    {db tmp999[3]={21,24,15};MYCOPY(dummy787e69db_paldata_5b6_1500)}
    {db tmp999[3]={21,25,16};MYCOPY(dummy787e69db_paldata_5b9_1501)}
    {db tmp999[3]={22,25,17};MYCOPY(dummy787e69db_paldata_5bc_1502)}
    {db tmp999[3]={23,26,17};MYCOPY(dummy787e69db_paldata_5bf_1503)}
    {db tmp999[3]={24,27,18};MYCOPY(dummy787e69db_paldata_5c2_1504)}
    {db tmp999[3]={24,28,19};MYCOPY(dummy787e69db_paldata_5c5_1505)}
    {db tmp999[3]={25,29,20};MYCOPY(dummy787e69db_paldata_5c8_1506)}
    {db tmp999[3]={26,29,20};MYCOPY(dummy787e69db_paldata_5cb_1507)}
    {db tmp999[3]={27,30,21};MYCOPY(dummy787e69db_paldata_5ce_1508)}
    {db tmp999[3]={28,31,22};MYCOPY(dummy787e69db_paldata_5d1_1509)}
    {db tmp999[3]={32,35,25};MYCOPY(dummy787e69db_paldata_5d4_1510)}
    {db tmp999[3]={2,5,6};MYCOPY(dummy787e69db_paldata_5d7_1511)}
    {db tmp999[3]={4,8,14};MYCOPY(dummy787e69db_paldata_5da_1512)}
    {db tmp999[3]={4,10,13};MYCOPY(dummy787e69db_paldata_5dd_1513)}
    {db tmp999[3]={63,61,26};MYCOPY(dummy787e69db_paldata_5e0_1514)}
    {db tmp999[3]={55,53,22};MYCOPY(dummy787e69db_paldata_5e3_1515)}
    {db tmp999[3]={48,46,19};MYCOPY(dummy787e69db_paldata_5e6_1516)}
    {db tmp999[3]={41,39,16};MYCOPY(dummy787e69db_paldata_5e9_1517)}
    {db tmp999[3]={33,31,13};MYCOPY(dummy787e69db_paldata_5ec_1518)}
    {db tmp999[3]={26,24,10};MYCOPY(dummy787e69db_paldata_5ef_1519)}
    {db tmp999[3]={19,17,7};MYCOPY(dummy787e69db_paldata_5f2_1520)}
    {db tmp999[3]={12,11,4};MYCOPY(dummy787e69db_paldata_5f5_1521)}
    {db tmp999[3]={13,6,6};MYCOPY(dummy787e69db_paldata_5f8_1522)}
    {db tmp999[3]={17,6,6};MYCOPY(dummy787e69db_paldata_5fb_1523)}
    {db tmp999[3]={21,6,6};MYCOPY(dummy787e69db_paldata_5fe_1524)}
    {db tmp999[3]={25,5,5};MYCOPY(dummy787e69db_paldata_601_1525)}
    {db tmp999[3]={29,4,4};MYCOPY(dummy787e69db_paldata_604_1526)}
    {db tmp999[3]={33,1,1};MYCOPY(dummy787e69db_paldata_607_1527)}
    {db tmp999[3]={37,0,0};MYCOPY(dummy787e69db_paldata_60a_1528)}
    {db tmp999[3]={63,63,63};MYCOPY(dummy787e69db_paldata_60d_1529)}
    {db tmp999[3]={9,58,17};MYCOPY(vga_hud_cols)}
    {db tmp999[3]={6,42,12};MYCOPY(dummy787e69db_paldata_613_1533)}
    {db tmp999[3]={3,27,7};MYCOPY(dummy787e69db_paldata_616_1534)}
    {db tmp999[3]={1,12,3};MYCOPY(dummy787e69db_paldata_619_1535)}
    {db tmp999[3]={0,37,25};MYCOPY(vga_gnd1)}
    {db tmp999[3]={30,37,35};MYCOPY(dummy787e69db_paldata_61f_1540)}
    {db tmp999[3]={63,63,63};MYCOPY(vga_gnd2)}
    {db tmp999[3]={63,63,63};MYCOPY(dummy787e69db_paldata_625_1544)}
    {db tmp999[3]={63,63,63};MYCOPY(vga_sky1)}
    {db tmp999[3]={59,61,63};MYCOPY(dummy787e69db_paldata_62b_1548)}
    {db tmp999[3]={55,59,63};MYCOPY(dummy787e69db_paldata_62e_1549)}
    {db tmp999[3]={52,58,63};MYCOPY(dummy787e69db_paldata_631_1550)}
    {db tmp999[3]={49,56,63};MYCOPY(dummy787e69db_paldata_634_1551)}
    {db tmp999[3]={45,55,63};MYCOPY(dummy787e69db_paldata_637_1552)}
    {db tmp999[3]={42,53,63};MYCOPY(dummy787e69db_paldata_63a_1553)}
    {db tmp999[3]={38,51,63};MYCOPY(dummy787e69db_paldata_63d_1554)}
    {db tmp999[3]={35,50,63};MYCOPY(dummy787e69db_paldata_640_1555)}
    {db tmp999[3]={31,48,63};MYCOPY(dummy787e69db_paldata_643_1556)}
    {db tmp999[3]={28,47,63};MYCOPY(dummy787e69db_paldata_646_1557)}
    {db tmp999[3]={24,45,63};MYCOPY(dummy787e69db_paldata_649_1558)}
    {db tmp999[3]={21,43,63};MYCOPY(dummy787e69db_paldata_64c_1559)}
    {db tmp999[3]={18,42,63};MYCOPY(dummy787e69db_paldata_64f_1560)}
    {db tmp999[3]={14,40,63};MYCOPY(dummy787e69db_paldata_652_1561)}
    {db tmp999[3]={11,39,63};MYCOPY(dummy787e69db_paldata_655_1562)}
    {db tmp999[3]={63,63,63};MYCOPY(vga_sky2)}
    {db tmp999[3]={62,62,62};MYCOPY(dummy787e69db_paldata_65b_1566)}
    {db tmp999[3]={61,61,61};MYCOPY(dummy787e69db_paldata_65e_1567)}
    {db tmp999[3]={60,60,60};MYCOPY(dummy787e69db_paldata_661_1568)}
    {db tmp999[3]={59,59,59};MYCOPY(dummy787e69db_paldata_664_1569)}
    {db tmp999[3]={58,58,58};MYCOPY(dummy787e69db_paldata_667_1570)}
    {db tmp999[3]={57,57,57};MYCOPY(dummy787e69db_paldata_66a_1571)}
    {db tmp999[3]={56,56,56};MYCOPY(dummy787e69db_paldata_66d_1572)}
    {db tmp999[3]={55,55,55};MYCOPY(dummy787e69db_paldata_670_1573)}
    {db tmp999[3]={54,54,54};MYCOPY(dummy787e69db_paldata_673_1574)}
    {db tmp999[3]={53,53,53};MYCOPY(dummy787e69db_paldata_676_1575)}
    {db tmp999[3]={52,52,52};MYCOPY(dummy787e69db_paldata_679_1576)}
    {db tmp999[3]={51,51,51};MYCOPY(dummy787e69db_paldata_67c_1577)}
    {db tmp999[3]={50,50,50};MYCOPY(dummy787e69db_paldata_67f_1578)}
    {db tmp999[3]={49,49,49};MYCOPY(dummy787e69db_paldata_682_1579)}
    {db tmp999[3]={48,48,48};MYCOPY(dummy787e69db_paldata_685_1580)}
    {db tmp999[3]={0,26,42};MYCOPY(vga_ext_text1)}
    {db tmp999[3]={32,44,57};MYCOPY(dummy787e69db_paldata_68b_1584)}
    {db tmp999[3]={63,35,5};MYCOPY(dummy787e69db_paldata_68e_1585)}
    {db tmp999[3]={0,19,33};MYCOPY(dummy787e69db_paldata_691_1586)}
    {db tmp999[3]={22,30,41};MYCOPY(dummy787e69db_paldata_694_1587)}
    {db tmp999[3]={46,24,2};MYCOPY(dummy787e69db_paldata_697_1588)}
    {db tmp999[3]={0,17,30};MYCOPY(dummy787e69db_paldata_69a_1589)}
    {db tmp999[3]={20,27,38};MYCOPY(dummy787e69db_paldata_69d_1590)}
    {db tmp999[3]={39,19,1};MYCOPY(dummy787e69db_paldata_6a0_1591)}
    {db tmp999[3]={0,11,22};MYCOPY(dummy787e69db_paldata_6a3_1592)}
    {db tmp999[3]={14,18,27};MYCOPY(dummy787e69db_paldata_6a6_1593)}
    {db tmp999[3]={29,13,1};MYCOPY(dummy787e69db_paldata_6a9_1594)}
    {db tmp999[3]={0,9,18};MYCOPY(dummy787e69db_paldata_6ac_1595)}
    {db tmp999[3]={12,14,23};MYCOPY(dummy787e69db_paldata_6af_1596)}
    {db tmp999[3]={22,9,1};MYCOPY(dummy787e69db_paldata_6b2_1597)}
    {db tmp999[3]={24,63,0};MYCOPY(vga_ext_text2)}
    {db tmp999[3]={63,63,0};MYCOPY(dummy787e69db_paldata_6b8_1601)}
    {db tmp999[3]={63,40,0};MYCOPY(dummy787e69db_paldata_6bb_1602)}
    {db tmp999[3]={20,56,0};MYCOPY(dummy787e69db_paldata_6be_1603)}
    {db tmp999[3]={55,56,0};MYCOPY(dummy787e69db_paldata_6c1_1604)}
    {db tmp999[3]={56,35,0};MYCOPY(dummy787e69db_paldata_6c4_1605)}
    {db tmp999[3]={17,49,0};MYCOPY(dummy787e69db_paldata_6c7_1606)}
    {db tmp999[3]={49,51,0};MYCOPY(dummy787e69db_paldata_6ca_1607)}
    {db tmp999[3]={49,30,0};MYCOPY(dummy787e69db_paldata_6cd_1608)}
    {db tmp999[3]={15,45,0};MYCOPY(dummy787e69db_paldata_6d0_1609)}
    {db tmp999[3]={46,48,0};MYCOPY(dummy787e69db_paldata_6d3_1610)}
    {db tmp999[3]={46,28,0};MYCOPY(dummy787e69db_paldata_6d6_1611)}
    {db tmp999[3]={11,41,0};MYCOPY(dummy787e69db_paldata_6d9_1612)}
    {db tmp999[3]={42,45,0};MYCOPY(dummy787e69db_paldata_6dc_1613)}
    {db tmp999[3]={43,25,0};MYCOPY(dummy787e69db_paldata_6df_1614)}
    {db tmp999[3]={5,18,18};MYCOPY(vga_preview)}
    {db tmp999[3]={5,18,18};MYCOPY(dummy787e69db_paldata_6e5_1618)}
    {db tmp999[3]={6,19,19};MYCOPY(dummy787e69db_paldata_6e8_1619)}
    {db tmp999[3]={7,19,19};MYCOPY(dummy787e69db_paldata_6eb_1620)}
    {db tmp999[3]={8,20,20};MYCOPY(dummy787e69db_paldata_6ee_1621)}
    {db tmp999[3]={9,20,20};MYCOPY(dummy787e69db_paldata_6f1_1622)}
    {db tmp999[3]={10,21,21};MYCOPY(dummy787e69db_paldata_6f4_1623)}
    {db tmp999[3]={11,21,21};MYCOPY(dummy787e69db_paldata_6f7_1624)}
    {db tmp999[3]={11,22,22};MYCOPY(dummy787e69db_paldata_6fa_1625)}
    {db tmp999[3]={13,23,23};MYCOPY(dummy787e69db_paldata_6fd_1626)}
    {db tmp999[3]={14,23,23};MYCOPY(dummy787e69db_paldata_700_1627)}
    {db tmp999[3]={15,24,24};MYCOPY(dummy787e69db_paldata_703_1628)}
    {db tmp999[3]={20,28,28};MYCOPY(dummy787e69db_paldata_706_1629)}
    {db tmp999[3]={21,30,30};MYCOPY(dummy787e69db_paldata_709_1630)}
    {db tmp999[3]={6,9,9};MYCOPY(dummy787e69db_paldata_70c_1631)}
    {db tmp999[3]={25,35,35};MYCOPY(dummy787e69db_paldata_70f_1632)}
    {db tmp999[3]={33,33,33};MYCOPY(dummy787e69db_paldata_712_1633)}
    {db tmp999[3]={15,24,24};MYCOPY(dummy787e69db_paldata_715_1634)}
    {db tmp999[3]={63,34,0};MYCOPY(dummy787e69db_paldata_718_1635)}
    {db tmp999[3]={0};MYCOPY(dummy787e69db_paldata_71b_1636)}
    {db tmp999[3]={4,15,15};MYCOPY(dummy787e69db_paldata_71e_1637)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_721_1638)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_724_1639)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_727_1640)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_72a_1641)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_72d_1642)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_730_1643)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_733_1644)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_736_1645)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_739_1646)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_73c_1647)}
    {db tmp999[3]={63,3,0};MYCOPY(dummy787e69db_paldata_73f_1648)}
    {db tmp999[768]={0};MYCOPY(dummy787e69db_paldata_742_1653)}
    {db tmp999[104]={0};MYCOPY(dummy787e69db_paldata_a42_1659)}
    {db tmp999=0;MYCOPY(panellight)}
    {db tmp999=0;MYCOPY(hudlevel)}
    {db tmp999=1;MYCOPY(initnighthud)}
    {char tmp999[13]="PANEL_xy.RGB";MYCOPY(paneloverlay)}
    {char tmp999[13]="KNEES_xy.RGB";MYCOPY(kneesoverlay)}
    {db tmp999=48;MYCOPY(r_grey_cloud)}
    {db tmp999=48;MYCOPY(g_grey_cloud)}
    {db tmp999=48;MYCOPY(b_grey_cloud)}
    {db tmp999=63;MYCOPY(r_white_cloud)}
    {db tmp999=63;MYCOPY(g_white_cloud)}
    {db tmp999=63;MYCOPY(b_white_cloud)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_palettes(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

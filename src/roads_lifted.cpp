/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "roads.h"

	
 __attribute__((weak)) bool calcnodepos1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnodepos1, _state);}

 __attribute__((weak)) bool calcnodepos16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnodepos16, _state);}

 __attribute__((weak)) bool calcnodepos2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnodepos2, _state);}

 __attribute__((weak)) bool calcnodepos8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnodepos8, _state);}

 __attribute__((weak)) bool drawnode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawnode, _state);}

 __attribute__((weak)) bool drawroads(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawroads, _state);}

 __attribute__((weak)) bool lineroad1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineroad1, _state);}

 __attribute__((weak)) bool lineroad16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineroad16, _state);}

 __attribute__((weak)) bool lineroad2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineroad2, _state);}

 __attribute__((weak)) bool lineroad8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineroad8, _state);}

 __attribute__((weak)) bool polyroad1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyroad1, _state);}

 __attribute__((weak)) bool polyroad2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyroad2, _state);}

 static bool drawnextroad(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawnextroad, _state);}

 static bool drawroadsexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawroadsexit, _state);}

 static bool exitlineroad1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlineroad1, _state);}

 static bool exitlineroad16(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlineroad16, _state);}

 static bool exitlineroad2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlineroad2, _state);}

 static bool exitlineroad8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlineroad8, _state);}

 static bool exitpolyroad1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitpolyroad1, _state);}

 static bool exitpolyroad2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitpolyroad2, _state);}

 static bool layer2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klayer2, _state);}

 static bool layer3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klayer3, _state);}

 static bool layer4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klayer4, _state);}

 static bool skiproad(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiproad, _state);}

	
	#include "roads_default_seg_lifted.cpp"
#include "roads_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcalcnodepos1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcnodepos16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcnodepos2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcnodepos8: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
        case m2c::kdrawnextroad: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawnode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawroads: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawroadsexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kexitlineroad1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlineroad16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlineroad2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlineroad8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitpolyroad1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitpolyroad2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klayer2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klayer3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klayer4: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::klineroad1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineroad16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineroad2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineroad8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyclip
        case m2c::kpolyclip: 	if (!polyclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_polyfill
        case m2c::kpolyfill: 	if (!polyfill(0, _state)) return false; break;
#endif
        case m2c::kpolyroad1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyroad2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_quicklineclip
        case m2c::kquicklineclip: 	if (!quicklineclip(0, _state)) return false; break;
#endif
        case m2c::kskiproad: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_roads()
          {
              {dw tmp999=m2c::kglobal_calcnodepos1;MYCOPY(calcnodepos)}
    {dw tmp999=m2c::kglobal_calcnodepos2;MYCOPY(dummy7f9a0a44_data_2_754)}
    {dw tmp999=m2c::kglobal_calcnodepos8;MYCOPY(dummy7f9a0a44_data_4_755)}
    {dw tmp999=m2c::kglobal_calcnodepos16;MYCOPY(dummy7f9a0a44_data_6_756)}
    {dw tmp999=m2c::kglobal_polyroad1;MYCOPY(polyroads)}
    {dw tmp999=m2c::kglobal_polyroad2;MYCOPY(dummy7f9a0a44_data_a_760)}
    {dw tmp999=m2c::kglobal_lineroad8;MYCOPY(dummy7f9a0a44_data_c_761)}
    {dw tmp999=m2c::kglobal_lineroad16;MYCOPY(dummy7f9a0a44_data_e_762)}
    {dw tmp999=m2c::kglobal_lineroad1;MYCOPY(lineroads)}
    {dw tmp999=m2c::kglobal_lineroad2;MYCOPY(dummy7f9a0a44_data_12_766)}
    {dw tmp999=m2c::kglobal_lineroad8;MYCOPY(dummy7f9a0a44_data_14_767)}
    {dw tmp999=m2c::kglobal_lineroad16;MYCOPY(dummy7f9a0a44_data_16_768)}
    {dw tmp999=0;MYCOPY(drawroadtype)}
    {dw tmp999=dolmid+dol0;MYCOPY(roadlength1)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummy7f9a0a44_data_1c_773)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummy7f9a0a44_data_1e_774)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummy7f9a0a44_data_20_775)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummy7f9a0a44_data_22_776)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_24_777)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummy7f9a0a44_data_26_778)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummy7f9a0a44_data_28_779)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_2a_780)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummy7f9a0a44_data_2c_781)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummy7f9a0a44_data_2e_782)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummy7f9a0a44_data_30_783)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummy7f9a0a44_data_32_784)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_34_785)}
    {dw tmp999=dolmid-dol4096;MYCOPY(dummy7f9a0a44_data_36_786)}
    {dw tmp999=dolmid+dol4096;MYCOPY(dummy7f9a0a44_data_38_787)}
    {dw tmp999=dolmid+dol0;MYCOPY(roadlength2)}
    {dw tmp999=dolmid+dol2048;MYCOPY(dummy7f9a0a44_data_3c_791)}
    {dw tmp999=dolmid+dol2048;MYCOPY(dummy7f9a0a44_data_3e_792)}
    {dw tmp999=dolmid+dol2048;MYCOPY(dummy7f9a0a44_data_40_793)}
    {dw tmp999=dolmid+dol2048;MYCOPY(dummy7f9a0a44_data_42_794)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_44_795)}
    {dw tmp999=dolmid+dol2048;MYCOPY(dummy7f9a0a44_data_46_796)}
    {dw tmp999=dolmid-dol2048;MYCOPY(dummy7f9a0a44_data_48_797)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_4a_798)}
    {dw tmp999=dolmid-dol2048;MYCOPY(dummy7f9a0a44_data_4c_799)}
    {dw tmp999=dolmid-dol2048;MYCOPY(dummy7f9a0a44_data_4e_800)}
    {dw tmp999=dolmid-dol2048;MYCOPY(dummy7f9a0a44_data_50_801)}
    {dw tmp999=dolmid-dol2048;MYCOPY(dummy7f9a0a44_data_52_802)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_54_803)}
    {dw tmp999=dolmid-dol2048;MYCOPY(dummy7f9a0a44_data_56_804)}
    {dw tmp999=dolmid+dol2048;MYCOPY(dummy7f9a0a44_data_58_805)}
    {dw tmp999=dolmid+dol0;MYCOPY(roadlength8)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummy7f9a0a44_data_5c_809)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummy7f9a0a44_data_5e_810)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummy7f9a0a44_data_60_811)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummy7f9a0a44_data_62_812)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_64_813)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummy7f9a0a44_data_66_814)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummy7f9a0a44_data_68_815)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_6a_816)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummy7f9a0a44_data_6c_817)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummy7f9a0a44_data_6e_818)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummy7f9a0a44_data_70_819)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummy7f9a0a44_data_72_820)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_74_821)}
    {dw tmp999=dolmid-dol512;MYCOPY(dummy7f9a0a44_data_76_822)}
    {dw tmp999=dolmid+dol512;MYCOPY(dummy7f9a0a44_data_78_823)}
    {dw tmp999=dolmid+dol0;MYCOPY(roadlength16)}
    {dw tmp999=dolmid+dol256;MYCOPY(dummy7f9a0a44_data_7c_827)}
    {dw tmp999=dolmid+dol256;MYCOPY(dummy7f9a0a44_data_7e_828)}
    {dw tmp999=dolmid+dol256;MYCOPY(dummy7f9a0a44_data_80_829)}
    {dw tmp999=dolmid+dol256;MYCOPY(dummy7f9a0a44_data_82_830)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_84_831)}
    {dw tmp999=dolmid+dol256;MYCOPY(dummy7f9a0a44_data_86_832)}
    {dw tmp999=dolmid-dol256;MYCOPY(dummy7f9a0a44_data_88_833)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_8a_834)}
    {dw tmp999=dolmid-dol256;MYCOPY(dummy7f9a0a44_data_8c_835)}
    {dw tmp999=dolmid-dol256;MYCOPY(dummy7f9a0a44_data_8e_836)}
    {dw tmp999=dolmid-dol256;MYCOPY(dummy7f9a0a44_data_90_837)}
    {dw tmp999=dolmid-dol256;MYCOPY(dummy7f9a0a44_data_92_838)}
    {dw tmp999=dolmid+dol0;MYCOPY(dummy7f9a0a44_data_94_839)}
    {dw tmp999=dolmid-dol256;MYCOPY(dummy7f9a0a44_data_96_840)}
    {dw tmp999=dolmid+dol256;MYCOPY(dummy7f9a0a44_data_98_841)}
    {dw tmp999=arbmid-arb32;MYCOPY(roadwidth1)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_9c_845)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_9e_846)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_a0_847)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_a2_848)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_a4_849)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_a6_850)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_a8_851)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_aa_852)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_ac_853)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_ae_854)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummy7f9a0a44_data_b0_855)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummy7f9a0a44_data_b2_856)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_b4_857)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_b6_858)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_b8_859)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_ba_860)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_bc_861)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_be_862)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_c0_863)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_c2_864)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_c4_865)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_c6_866)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_c8_867)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_ca_868)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_cc_869)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummy7f9a0a44_data_ce_870)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_d0_871)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_d2_872)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummy7f9a0a44_data_d4_873)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_d6_874)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_d8_875)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_da_876)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_dc_877)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_de_878)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_e0_879)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_e2_880)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_e4_881)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_e6_882)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_e8_883)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_ea_884)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_ec_885)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_ee_886)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummy7f9a0a44_data_f0_887)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummy7f9a0a44_data_f2_888)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_f4_889)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_f6_890)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_f8_891)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_fa_892)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_fc_893)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_fe_894)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_100_895)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_102_896)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_104_897)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_106_898)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_108_899)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_10a_900)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_10c_901)}
    {dw tmp999=arbmid-arb64;MYCOPY(dummy7f9a0a44_data_10e_902)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_110_903)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_112_904)}
    {dw tmp999=arbmid+arb64;MYCOPY(dummy7f9a0a44_data_114_905)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_116_906)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_118_907)}
    {dw tmp999=arbmid-arb16;MYCOPY(roadwidth2)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_11c_911)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_11e_912)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_120_913)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_122_914)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_124_915)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_126_916)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_128_917)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_12a_918)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_12c_919)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_12e_920)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_130_921)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_132_922)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_134_923)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_136_924)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_138_925)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_13a_926)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_13c_927)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_13e_928)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_140_929)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_142_930)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_144_931)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_146_932)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_148_933)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_14a_934)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_14c_935)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_14e_936)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_150_937)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_152_938)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_154_939)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_156_940)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_158_941)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_15a_942)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_15c_943)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_15e_944)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_160_945)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_162_946)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_164_947)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_166_948)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_168_949)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_16a_950)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_16c_951)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_16e_952)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_170_953)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_172_954)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_174_955)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_176_956)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_178_957)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_17a_958)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_17c_959)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_17e_960)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_180_961)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_182_962)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_184_963)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_186_964)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_188_965)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_18a_966)}
    {dw tmp999=arbmid-arb16;MYCOPY(dummy7f9a0a44_data_18c_967)}
    {dw tmp999=arbmid-arb32;MYCOPY(dummy7f9a0a44_data_18e_968)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_190_969)}
    {dw tmp999=arbmid+arb0;MYCOPY(dummy7f9a0a44_data_192_970)}
    {dw tmp999=arbmid+arb32;MYCOPY(dummy7f9a0a44_data_194_971)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_196_972)}
    {dw tmp999=arbmid+arb16;MYCOPY(dummy7f9a0a44_data_198_973)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_roads(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

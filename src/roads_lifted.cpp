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
              calcnodepos = m2c::kglobal_calcnodepos1;
    dummy7f9a0a44_data_2_754 = m2c::kglobal_calcnodepos2;
    dummy7f9a0a44_data_4_755 = m2c::kglobal_calcnodepos8;
    dummy7f9a0a44_data_6_756 = m2c::kglobal_calcnodepos16;
    polyroads = m2c::kglobal_polyroad1;
    dummy7f9a0a44_data_a_760 = m2c::kglobal_polyroad2;
    dummy7f9a0a44_data_c_761 = m2c::kglobal_lineroad8;
    dummy7f9a0a44_data_e_762 = m2c::kglobal_lineroad16;
    lineroads = m2c::kglobal_lineroad1;
    dummy7f9a0a44_data_12_766 = m2c::kglobal_lineroad2;
    dummy7f9a0a44_data_14_767 = m2c::kglobal_lineroad8;
    dummy7f9a0a44_data_16_768 = m2c::kglobal_lineroad16;
    drawroadtype = 0;
    roadlength1 = dolmid+dol0;
    dummy7f9a0a44_data_1c_773 = dolmid+dol4096;
    dummy7f9a0a44_data_1e_774 = dolmid+dol4096;
    dummy7f9a0a44_data_20_775 = dolmid+dol4096;
    dummy7f9a0a44_data_22_776 = dolmid+dol4096;
    dummy7f9a0a44_data_24_777 = dolmid+dol0;
    dummy7f9a0a44_data_26_778 = dolmid+dol4096;
    dummy7f9a0a44_data_28_779 = dolmid-dol4096;
    dummy7f9a0a44_data_2a_780 = dolmid+dol0;
    dummy7f9a0a44_data_2c_781 = dolmid-dol4096;
    dummy7f9a0a44_data_2e_782 = dolmid-dol4096;
    dummy7f9a0a44_data_30_783 = dolmid-dol4096;
    dummy7f9a0a44_data_32_784 = dolmid-dol4096;
    dummy7f9a0a44_data_34_785 = dolmid+dol0;
    dummy7f9a0a44_data_36_786 = dolmid-dol4096;
    dummy7f9a0a44_data_38_787 = dolmid+dol4096;
    roadlength2 = dolmid+dol0;
    dummy7f9a0a44_data_3c_791 = dolmid+dol2048;
    dummy7f9a0a44_data_3e_792 = dolmid+dol2048;
    dummy7f9a0a44_data_40_793 = dolmid+dol2048;
    dummy7f9a0a44_data_42_794 = dolmid+dol2048;
    dummy7f9a0a44_data_44_795 = dolmid+dol0;
    dummy7f9a0a44_data_46_796 = dolmid+dol2048;
    dummy7f9a0a44_data_48_797 = dolmid-dol2048;
    dummy7f9a0a44_data_4a_798 = dolmid+dol0;
    dummy7f9a0a44_data_4c_799 = dolmid-dol2048;
    dummy7f9a0a44_data_4e_800 = dolmid-dol2048;
    dummy7f9a0a44_data_50_801 = dolmid-dol2048;
    dummy7f9a0a44_data_52_802 = dolmid-dol2048;
    dummy7f9a0a44_data_54_803 = dolmid+dol0;
    dummy7f9a0a44_data_56_804 = dolmid-dol2048;
    dummy7f9a0a44_data_58_805 = dolmid+dol2048;
    roadlength8 = dolmid+dol0;
    dummy7f9a0a44_data_5c_809 = dolmid+dol512;
    dummy7f9a0a44_data_5e_810 = dolmid+dol512;
    dummy7f9a0a44_data_60_811 = dolmid+dol512;
    dummy7f9a0a44_data_62_812 = dolmid+dol512;
    dummy7f9a0a44_data_64_813 = dolmid+dol0;
    dummy7f9a0a44_data_66_814 = dolmid+dol512;
    dummy7f9a0a44_data_68_815 = dolmid-dol512;
    dummy7f9a0a44_data_6a_816 = dolmid+dol0;
    dummy7f9a0a44_data_6c_817 = dolmid-dol512;
    dummy7f9a0a44_data_6e_818 = dolmid-dol512;
    dummy7f9a0a44_data_70_819 = dolmid-dol512;
    dummy7f9a0a44_data_72_820 = dolmid-dol512;
    dummy7f9a0a44_data_74_821 = dolmid+dol0;
    dummy7f9a0a44_data_76_822 = dolmid-dol512;
    dummy7f9a0a44_data_78_823 = dolmid+dol512;
    roadlength16 = dolmid+dol0;
    dummy7f9a0a44_data_7c_827 = dolmid+dol256;
    dummy7f9a0a44_data_7e_828 = dolmid+dol256;
    dummy7f9a0a44_data_80_829 = dolmid+dol256;
    dummy7f9a0a44_data_82_830 = dolmid+dol256;
    dummy7f9a0a44_data_84_831 = dolmid+dol0;
    dummy7f9a0a44_data_86_832 = dolmid+dol256;
    dummy7f9a0a44_data_88_833 = dolmid-dol256;
    dummy7f9a0a44_data_8a_834 = dolmid+dol0;
    dummy7f9a0a44_data_8c_835 = dolmid-dol256;
    dummy7f9a0a44_data_8e_836 = dolmid-dol256;
    dummy7f9a0a44_data_90_837 = dolmid-dol256;
    dummy7f9a0a44_data_92_838 = dolmid-dol256;
    dummy7f9a0a44_data_94_839 = dolmid+dol0;
    dummy7f9a0a44_data_96_840 = dolmid-dol256;
    dummy7f9a0a44_data_98_841 = dolmid+dol256;
    roadwidth1 = arbmid-arb32;
    dummy7f9a0a44_data_9c_845 = arbmid-arb32;
    dummy7f9a0a44_data_9e_846 = arbmid-arb32;
    dummy7f9a0a44_data_a0_847 = arbmid+arb32;
    dummy7f9a0a44_data_a2_848 = arbmid+arb32;
    dummy7f9a0a44_data_a4_849 = arbmid+arb32;
    dummy7f9a0a44_data_a6_850 = arbmid+arb32;
    dummy7f9a0a44_data_a8_851 = arbmid-arb32;
    dummy7f9a0a44_data_aa_852 = arbmid-arb32;
    dummy7f9a0a44_data_ac_853 = arbmid+arb32;
    dummy7f9a0a44_data_ae_854 = arbmid+arb0;
    dummy7f9a0a44_data_b0_855 = arbmid+arb64;
    dummy7f9a0a44_data_b2_856 = arbmid+arb64;
    dummy7f9a0a44_data_b4_857 = arbmid+arb0;
    dummy7f9a0a44_data_b6_858 = arbmid+arb32;
    dummy7f9a0a44_data_b8_859 = arbmid-arb32;
    dummy7f9a0a44_data_ba_860 = arbmid-arb32;
    dummy7f9a0a44_data_bc_861 = arbmid+arb32;
    dummy7f9a0a44_data_be_862 = arbmid+arb32;
    dummy7f9a0a44_data_c0_863 = arbmid+arb32;
    dummy7f9a0a44_data_c2_864 = arbmid+arb32;
    dummy7f9a0a44_data_c4_865 = arbmid-arb32;
    dummy7f9a0a44_data_c6_866 = arbmid-arb32;
    dummy7f9a0a44_data_c8_867 = arbmid-arb32;
    dummy7f9a0a44_data_ca_868 = arbmid+arb32;
    dummy7f9a0a44_data_cc_869 = arbmid+arb32;
    dummy7f9a0a44_data_ce_870 = arbmid+arb64;
    dummy7f9a0a44_data_d0_871 = arbmid+arb0;
    dummy7f9a0a44_data_d2_872 = arbmid+arb0;
    dummy7f9a0a44_data_d4_873 = arbmid-arb64;
    dummy7f9a0a44_data_d6_874 = arbmid-arb32;
    dummy7f9a0a44_data_d8_875 = arbmid-arb32;
    dummy7f9a0a44_data_da_876 = arbmid+arb32;
    dummy7f9a0a44_data_dc_877 = arbmid+arb32;
    dummy7f9a0a44_data_de_878 = arbmid+arb32;
    dummy7f9a0a44_data_e0_879 = arbmid-arb32;
    dummy7f9a0a44_data_e2_880 = arbmid-arb32;
    dummy7f9a0a44_data_e4_881 = arbmid-arb32;
    dummy7f9a0a44_data_e6_882 = arbmid-arb32;
    dummy7f9a0a44_data_e8_883 = arbmid+arb32;
    dummy7f9a0a44_data_ea_884 = arbmid+arb32;
    dummy7f9a0a44_data_ec_885 = arbmid-arb32;
    dummy7f9a0a44_data_ee_886 = arbmid+arb0;
    dummy7f9a0a44_data_f0_887 = arbmid-arb64;
    dummy7f9a0a44_data_f2_888 = arbmid-arb64;
    dummy7f9a0a44_data_f4_889 = arbmid+arb0;
    dummy7f9a0a44_data_f6_890 = arbmid-arb32;
    dummy7f9a0a44_data_f8_891 = arbmid+arb32;
    dummy7f9a0a44_data_fa_892 = arbmid+arb32;
    dummy7f9a0a44_data_fc_893 = arbmid-arb32;
    dummy7f9a0a44_data_fe_894 = arbmid-arb32;
    dummy7f9a0a44_data_100_895 = arbmid-arb32;
    dummy7f9a0a44_data_102_896 = arbmid-arb32;
    dummy7f9a0a44_data_104_897 = arbmid+arb32;
    dummy7f9a0a44_data_106_898 = arbmid+arb32;
    dummy7f9a0a44_data_108_899 = arbmid+arb32;
    dummy7f9a0a44_data_10a_900 = arbmid-arb32;
    dummy7f9a0a44_data_10c_901 = arbmid-arb32;
    dummy7f9a0a44_data_10e_902 = arbmid-arb64;
    dummy7f9a0a44_data_110_903 = arbmid+arb0;
    dummy7f9a0a44_data_112_904 = arbmid+arb0;
    dummy7f9a0a44_data_114_905 = arbmid+arb64;
    dummy7f9a0a44_data_116_906 = arbmid+arb32;
    dummy7f9a0a44_data_118_907 = arbmid+arb32;
    roadwidth2 = arbmid-arb16;
    dummy7f9a0a44_data_11c_911 = arbmid-arb16;
    dummy7f9a0a44_data_11e_912 = arbmid-arb16;
    dummy7f9a0a44_data_120_913 = arbmid+arb16;
    dummy7f9a0a44_data_122_914 = arbmid+arb16;
    dummy7f9a0a44_data_124_915 = arbmid+arb16;
    dummy7f9a0a44_data_126_916 = arbmid+arb16;
    dummy7f9a0a44_data_128_917 = arbmid-arb16;
    dummy7f9a0a44_data_12a_918 = arbmid-arb16;
    dummy7f9a0a44_data_12c_919 = arbmid+arb16;
    dummy7f9a0a44_data_12e_920 = arbmid+arb0;
    dummy7f9a0a44_data_130_921 = arbmid+arb32;
    dummy7f9a0a44_data_132_922 = arbmid+arb32;
    dummy7f9a0a44_data_134_923 = arbmid+arb0;
    dummy7f9a0a44_data_136_924 = arbmid+arb16;
    dummy7f9a0a44_data_138_925 = arbmid-arb16;
    dummy7f9a0a44_data_13a_926 = arbmid-arb16;
    dummy7f9a0a44_data_13c_927 = arbmid+arb16;
    dummy7f9a0a44_data_13e_928 = arbmid+arb16;
    dummy7f9a0a44_data_140_929 = arbmid+arb16;
    dummy7f9a0a44_data_142_930 = arbmid+arb16;
    dummy7f9a0a44_data_144_931 = arbmid-arb16;
    dummy7f9a0a44_data_146_932 = arbmid-arb16;
    dummy7f9a0a44_data_148_933 = arbmid-arb16;
    dummy7f9a0a44_data_14a_934 = arbmid+arb16;
    dummy7f9a0a44_data_14c_935 = arbmid+arb16;
    dummy7f9a0a44_data_14e_936 = arbmid+arb32;
    dummy7f9a0a44_data_150_937 = arbmid+arb0;
    dummy7f9a0a44_data_152_938 = arbmid+arb0;
    dummy7f9a0a44_data_154_939 = arbmid-arb32;
    dummy7f9a0a44_data_156_940 = arbmid-arb16;
    dummy7f9a0a44_data_158_941 = arbmid-arb16;
    dummy7f9a0a44_data_15a_942 = arbmid+arb16;
    dummy7f9a0a44_data_15c_943 = arbmid+arb16;
    dummy7f9a0a44_data_15e_944 = arbmid+arb16;
    dummy7f9a0a44_data_160_945 = arbmid-arb16;
    dummy7f9a0a44_data_162_946 = arbmid-arb16;
    dummy7f9a0a44_data_164_947 = arbmid-arb16;
    dummy7f9a0a44_data_166_948 = arbmid-arb16;
    dummy7f9a0a44_data_168_949 = arbmid+arb16;
    dummy7f9a0a44_data_16a_950 = arbmid+arb16;
    dummy7f9a0a44_data_16c_951 = arbmid-arb16;
    dummy7f9a0a44_data_16e_952 = arbmid+arb0;
    dummy7f9a0a44_data_170_953 = arbmid-arb32;
    dummy7f9a0a44_data_172_954 = arbmid-arb32;
    dummy7f9a0a44_data_174_955 = arbmid+arb0;
    dummy7f9a0a44_data_176_956 = arbmid-arb16;
    dummy7f9a0a44_data_178_957 = arbmid+arb16;
    dummy7f9a0a44_data_17a_958 = arbmid+arb16;
    dummy7f9a0a44_data_17c_959 = arbmid-arb16;
    dummy7f9a0a44_data_17e_960 = arbmid-arb16;
    dummy7f9a0a44_data_180_961 = arbmid-arb16;
    dummy7f9a0a44_data_182_962 = arbmid-arb16;
    dummy7f9a0a44_data_184_963 = arbmid+arb16;
    dummy7f9a0a44_data_186_964 = arbmid+arb16;
    dummy7f9a0a44_data_188_965 = arbmid+arb16;
    dummy7f9a0a44_data_18a_966 = arbmid-arb16;
    dummy7f9a0a44_data_18c_967 = arbmid-arb16;
    dummy7f9a0a44_data_18e_968 = arbmid-arb32;
    dummy7f9a0a44_data_190_969 = arbmid+arb0;
    dummy7f9a0a44_data_192_970 = arbmid+arb0;
    dummy7f9a0a44_data_194_971 = arbmid+arb32;
    dummy7f9a0a44_data_196_972 = arbmid+arb16;
    dummy7f9a0a44_data_198_973 = arbmid+arb16;

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
        

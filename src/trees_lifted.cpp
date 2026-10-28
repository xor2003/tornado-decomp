/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "trees.h"

	
 __attribute__((weak)) bool drawtrees(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawtrees, _state);}

 __attribute__((weak)) bool scantrees(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscantrees, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool exittreeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittreeloop, _state);}

 static bool exittrees(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittrees, _state);}

 static bool nexttree(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knexttree, _state);}

 static bool skiptree(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptree, _state);}

 static bool treeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktreeloop, _state);}

	
	#include "trees_default_seg_lifted.cpp"
#include "trees_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawtrees: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittreeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittrees: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knexttree: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_objectdistsort1
        case m2c::kobjectdistsort1: 	if (!objectdistsort1(0, _state)) return false; break;
#endif
        case m2c::kscantrees: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptree: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktreeloop: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_trees()
          {
              {db tmp999[2]={1,0};memcpy(&treesenabled,&tmp999,sizeof tmp999);}
    xtemp = 0;
    ytemp = 0;
    treelayouts = offset(data,treelayout1);
    dummya11d4033_data_8_783 = offset(data,treelayout2);
    dummya11d4033_data_a_784 = offset(data,treelayout3);
    dummya11d4033_data_c_785 = offset(data,treelayout4);
    {db tmp999[2]={8,9};memcpy(&dummya11d4033_data_e_787,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,4};memcpy(&dummya11d4033_data_10_788,&tmp999,sizeof tmp999);}
    {db tmp999[2]={46,6};memcpy(&dummya11d4033_data_12_789,&tmp999,sizeof tmp999);}
    {db tmp999[2]={17,60};memcpy(&dummya11d4033_data_14_790,&tmp999,sizeof tmp999);}
    {db tmp999[2]={61,28};memcpy(&dummya11d4033_data_16_791,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,47};memcpy(&dummya11d4033_data_18_792,&tmp999,sizeof tmp999);}
    {db tmp999[2]={63,11};memcpy(&dummya11d4033_data_1a_793,&tmp999,sizeof tmp999);}
    {db tmp999[2]={33,57};memcpy(&dummya11d4033_data_1c_794,&tmp999,sizeof tmp999);}
    {db tmp999[2]={42,63};memcpy(&dummya11d4033_data_1e_795,&tmp999,sizeof tmp999);}
    {db tmp999[2]={51,14};memcpy(&dummya11d4033_data_20_796,&tmp999,sizeof tmp999);}
    {db tmp999[2]={56,38};memcpy(&dummya11d4033_data_22_797,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,36};memcpy(&dummya11d4033_data_24_798,&tmp999,sizeof tmp999);}
    {db tmp999[2]={18,53};memcpy(&dummya11d4033_data_26_799,&tmp999,sizeof tmp999);}
    {db tmp999[2]={31,30};memcpy(&dummya11d4033_data_28_800,&tmp999,sizeof tmp999);}
    {db tmp999[2]={60,35};memcpy(&dummya11d4033_data_2a_801,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,52};memcpy(&dummya11d4033_data_2c_802,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,22};memcpy(&dummya11d4033_data_2e_803,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,58};memcpy(&dummya11d4033_data_30_804,&tmp999,sizeof tmp999);}
    {db tmp999[2]={50,20};memcpy(&dummya11d4033_data_32_805,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,31};memcpy(&dummya11d4033_data_34_806,&tmp999,sizeof tmp999);}
    {db tmp999[2]={20,21};memcpy(&dummya11d4033_data_36_807,&tmp999,sizeof tmp999);}
    {db tmp999[2]={47,18};memcpy(&dummya11d4033_data_38_808,&tmp999,sizeof tmp999);}
    {db tmp999[2]={52,59};memcpy(&dummya11d4033_data_3a_809,&tmp999,sizeof tmp999);}
    {db tmp999[2]={30,5};memcpy(&dummya11d4033_data_3c_810,&tmp999,sizeof tmp999);}
    {db tmp999[2]={58,55};memcpy(&dummya11d4033_data_3e_811,&tmp999,sizeof tmp999);}
    {db tmp999[2]={29,2};memcpy(&dummya11d4033_data_40_812,&tmp999,sizeof tmp999);}
    {db tmp999[2]={43,10};memcpy(&dummya11d4033_data_42_813,&tmp999,sizeof tmp999);}
    {db tmp999[2]={35,37};memcpy(&dummya11d4033_data_44_814,&tmp999,sizeof tmp999);}
    {db tmp999[2]={45,46};memcpy(&dummya11d4033_data_46_815,&tmp999,sizeof tmp999);}
    {db tmp999[2]={19,39};memcpy(&dummya11d4033_data_48_816,&tmp999,sizeof tmp999);}
    {db tmp999[2]={44,17};memcpy(&dummya11d4033_data_4a_817,&tmp999,sizeof tmp999);}
    {db tmp999[2]={27,41};memcpy(&dummya11d4033_data_4c_818,&tmp999,sizeof tmp999);}
    {db tmp999[2]={36,58};memcpy(&dummya11d4033_data_4e_820,&tmp999,sizeof tmp999);}
    {db tmp999[2]={60,41};memcpy(&dummya11d4033_data_50_821,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,63};memcpy(&dummya11d4033_data_52_822,&tmp999,sizeof tmp999);}
    {db tmp999[2]={51,9};memcpy(&dummya11d4033_data_54_823,&tmp999,sizeof tmp999);}
    {db tmp999[2]={49,45};memcpy(&dummya11d4033_data_56_824,&tmp999,sizeof tmp999);}
    {db tmp999[2]={58,50};memcpy(&dummya11d4033_data_58_825,&tmp999,sizeof tmp999);}
    {db tmp999[2]={17,18};memcpy(&dummya11d4033_data_5a_826,&tmp999,sizeof tmp999);}
    {db tmp999[2]={46,3};memcpy(&dummya11d4033_data_5c_827,&tmp999,sizeof tmp999);}
    {db tmp999[2]={45,14};memcpy(&dummya11d4033_data_5e_828,&tmp999,sizeof tmp999);}
    {db tmp999[2]={56,54};memcpy(&dummya11d4033_data_60_829,&tmp999,sizeof tmp999);}
    {db tmp999[2]={34,59};memcpy(&dummya11d4033_data_62_830,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,8};memcpy(&dummya11d4033_data_64_831,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,49};memcpy(&dummya11d4033_data_66_832,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,36};memcpy(&dummya11d4033_data_68_833,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,35};memcpy(&dummya11d4033_data_6a_834,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,13};memcpy(&dummya11d4033_data_6c_835,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,20};memcpy(&dummya11d4033_data_6e_836,&tmp999,sizeof tmp999);}
    {db tmp999[2]={18,4};memcpy(&dummya11d4033_data_70_837,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,27};memcpy(&dummya11d4033_data_72_838,&tmp999,sizeof tmp999);}
    {db tmp999[2]={55,31};memcpy(&dummya11d4033_data_74_839,&tmp999,sizeof tmp999);}
    {db tmp999[2]={50,5};memcpy(&dummya11d4033_data_76_840,&tmp999,sizeof tmp999);}
    {db tmp999[2]={19,15};memcpy(&dummya11d4033_data_78_841,&tmp999,sizeof tmp999);}
    {db tmp999[2]={29,57};memcpy(&dummya11d4033_data_7a_842,&tmp999,sizeof tmp999);}
    {db tmp999[2]={31,60};memcpy(&dummya11d4033_data_7c_843,&tmp999,sizeof tmp999);}
    {db tmp999[2]={53,17};memcpy(&dummya11d4033_data_7e_844,&tmp999,sizeof tmp999);}
    {db tmp999[2]={24,38};memcpy(&dummya11d4033_data_80_845,&tmp999,sizeof tmp999);}
    {db tmp999[2]={40,37};memcpy(&dummya11d4033_data_82_846,&tmp999,sizeof tmp999);}
    {db tmp999[2]={25,40};memcpy(&dummya11d4033_data_84_847,&tmp999,sizeof tmp999);}
    {db tmp999[2]={38,34};memcpy(&dummya11d4033_data_86_848,&tmp999,sizeof tmp999);}
    {db tmp999[2]={20,22};memcpy(&dummya11d4033_data_88_849,&tmp999,sizeof tmp999);}
    {db tmp999[2]={33,30};memcpy(&dummya11d4033_data_8a_850,&tmp999,sizeof tmp999);}
    {db tmp999[2]={47,19};memcpy(&dummya11d4033_data_8c_851,&tmp999,sizeof tmp999);}
    {db tmp999[2]={60,34};memcpy(&dummya11d4033_data_8e_853,&tmp999,sizeof tmp999);}
    {db tmp999[2]={57,54};memcpy(&dummya11d4033_data_90_854,&tmp999,sizeof tmp999);}
    {db tmp999[2]={26,41};memcpy(&dummya11d4033_data_92_855,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,49};memcpy(&dummya11d4033_data_94_856,&tmp999,sizeof tmp999);}
    {db tmp999[2]={25,40};memcpy(&dummya11d4033_data_96_857,&tmp999,sizeof tmp999);}
    {db tmp999[2]={31,13};memcpy(&dummya11d4033_data_98_858,&tmp999,sizeof tmp999);}
    {db tmp999[2]={17,9};memcpy(&dummya11d4033_data_9a_859,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,53};memcpy(&dummya11d4033_data_9c_860,&tmp999,sizeof tmp999);}
    {db tmp999[2]={50,2};memcpy(&dummya11d4033_data_9e_861,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,3};memcpy(&dummya11d4033_data_a0_862,&tmp999,sizeof tmp999);}
    {db tmp999[2]={19,63};memcpy(&dummya11d4033_data_a2_863,&tmp999,sizeof tmp999);}
    {db tmp999[2]={47,62};memcpy(&dummya11d4033_data_a4_864,&tmp999,sizeof tmp999);}
    {db tmp999[2]={58,8};memcpy(&dummya11d4033_data_a6_865,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,38};memcpy(&dummya11d4033_data_a8_866,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,6};memcpy(&dummya11d4033_data_aa_867,&tmp999,sizeof tmp999);}
    {db tmp999[2]={20,21};memcpy(&dummya11d4033_data_ac_868,&tmp999,sizeof tmp999);}
    {db tmp999[2]={35,17};memcpy(&dummya11d4033_data_ae_869,&tmp999,sizeof tmp999);}
    {db tmp999[2]={62,59};memcpy(&dummya11d4033_data_b0_870,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,36};memcpy(&dummya11d4033_data_b2_871,&tmp999,sizeof tmp999);}
    {db tmp999[2]={61,27};memcpy(&dummya11d4033_data_b4_872,&tmp999,sizeof tmp999);}
    {db tmp999[2]={30,60};memcpy(&dummya11d4033_data_b6_873,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,30};memcpy(&dummya11d4033_data_b8_874,&tmp999,sizeof tmp999);}
    {db tmp999[2]={56,31};memcpy(&dummya11d4033_data_ba_875,&tmp999,sizeof tmp999);}
    {db tmp999[2]={33,50};memcpy(&dummya11d4033_data_bc_876,&tmp999,sizeof tmp999);}
    {db tmp999[2]={45,47};memcpy(&dummya11d4033_data_be_877,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,24};memcpy(&dummya11d4033_data_c0_878,&tmp999,sizeof tmp999);}
    {db tmp999[2]={46,45};memcpy(&dummya11d4033_data_c2_879,&tmp999,sizeof tmp999);}
    {db tmp999[2]={40,1};memcpy(&dummya11d4033_data_c4_880,&tmp999,sizeof tmp999);}
    {db tmp999[2]={42,15};memcpy(&dummya11d4033_data_c6_881,&tmp999,sizeof tmp999);}
    {db tmp999[2]={54,44};memcpy(&dummya11d4033_data_c8_882,&tmp999,sizeof tmp999);}
    {db tmp999[2]={41,28};memcpy(&dummya11d4033_data_ca_883,&tmp999,sizeof tmp999);}
    {db tmp999[2]={18,20};memcpy(&dummya11d4033_data_cc_884,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,35};memcpy(&dummya11d4033_data_ce_886,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,33};memcpy(&dummya11d4033_data_d0_887,&tmp999,sizeof tmp999);}
    {db tmp999[2]={61,1};memcpy(&dummya11d4033_data_d2_888,&tmp999,sizeof tmp999);}
    {db tmp999[2]={46,63};memcpy(&dummya11d4033_data_d4_889,&tmp999,sizeof tmp999);}
    {db tmp999[2]={56,57};memcpy(&dummya11d4033_data_d6_890,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,17};memcpy(&dummya11d4033_data_d8_891,&tmp999,sizeof tmp999);}
    {db tmp999[2]={25,59};memcpy(&dummya11d4033_data_da_892,&tmp999,sizeof tmp999);}
    {db tmp999[2]={40,2};memcpy(&dummya11d4033_data_dc_893,&tmp999,sizeof tmp999);}
    {db tmp999[2]={34,58};memcpy(&dummya11d4033_data_de_894,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,51};memcpy(&dummya11d4033_data_e0_895,&tmp999,sizeof tmp999);}
    {db tmp999[2]={35,6};memcpy(&dummya11d4033_data_e2_896,&tmp999,sizeof tmp999);}
    {db tmp999[2]={24,20};memcpy(&dummya11d4033_data_e4_897,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,14};memcpy(&dummya11d4033_data_e6_898,&tmp999,sizeof tmp999);}
    {db tmp999[2]={53,10};memcpy(&dummya11d4033_data_e8_899,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,12};memcpy(&dummya11d4033_data_ea_900,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,54};memcpy(&dummya11d4033_data_ec_901,&tmp999,sizeof tmp999);}
    {db tmp999[2]={55,38};memcpy(&dummya11d4033_data_ee_902,&tmp999,sizeof tmp999);}
    {db tmp999[2]={58,60};memcpy(&dummya11d4033_data_f0_903,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,30};memcpy(&dummya11d4033_data_f2_904,&tmp999,sizeof tmp999);}
    {db tmp999[2]={28,7};memcpy(&dummya11d4033_data_f4_905,&tmp999,sizeof tmp999);}
    {db tmp999[2]={47,44};memcpy(&dummya11d4033_data_f6_906,&tmp999,sizeof tmp999);}
    {db tmp999[2]={19,62};memcpy(&dummya11d4033_data_f8_907,&tmp999,sizeof tmp999);}
    {db tmp999[2]={26,4};memcpy(&dummya11d4033_data_fa_908,&tmp999,sizeof tmp999);}
    {db tmp999[2]={57,34};memcpy(&dummya11d4033_data_fc_909,&tmp999,sizeof tmp999);}
    {db tmp999[2]={27,41};memcpy(&dummya11d4033_data_fe_910,&tmp999,sizeof tmp999);}
    {db tmp999[2]={50,21};memcpy(&dummya11d4033_data_100_911,&tmp999,sizeof tmp999);}
    {db tmp999[2]={54,19};memcpy(&dummya11d4033_data_102_912,&tmp999,sizeof tmp999);}
    {db tmp999[2]={38,39};memcpy(&dummya11d4033_data_104_913,&tmp999,sizeof tmp999);}
    {db tmp999[2]={30,31};memcpy(&dummya11d4033_data_106_914,&tmp999,sizeof tmp999);}
    {db tmp999[2]={17,46};memcpy(&dummya11d4033_data_108_915,&tmp999,sizeof tmp999);}
    {db tmp999[2]={45,18};memcpy(&dummya11d4033_data_10a_916,&tmp999,sizeof tmp999);}
    {db tmp999[2]={36,29};memcpy(&dummya11d4033_data_10c_917,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_trees(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

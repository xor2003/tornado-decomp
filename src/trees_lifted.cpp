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
              {db tmp999[2]={1,0};MYCOPY(treesenabled)}
    {dw tmp999=0;MYCOPY(xtemp)}
    {dw tmp999=0;MYCOPY(ytemp)}
    {dw tmp999=offset(data,treelayout1);MYCOPY(treelayouts)}
    {dw tmp999=offset(data,treelayout2);MYCOPY(dummya11d4033_data_8_783)}
    {dw tmp999=offset(data,treelayout3);MYCOPY(dummya11d4033_data_a_784)}
    {dw tmp999=offset(data,treelayout4);MYCOPY(dummya11d4033_data_c_785)}
    {db tmp999[2]={8,9};MYCOPY(dummya11d4033_data_e_787)}
    {db tmp999[2]={13,4};MYCOPY(dummya11d4033_data_10_788)}
    {db tmp999[2]={46,6};MYCOPY(dummya11d4033_data_12_789)}
    {db tmp999[2]={17,60};MYCOPY(dummya11d4033_data_14_790)}
    {db tmp999[2]={61,28};MYCOPY(dummya11d4033_data_16_791)}
    {db tmp999[2]={4,47};MYCOPY(dummya11d4033_data_18_792)}
    {db tmp999[2]={63,11};MYCOPY(dummya11d4033_data_1a_793)}
    {db tmp999[2]={33,57};MYCOPY(dummya11d4033_data_1c_794)}
    {db tmp999[2]={42,63};MYCOPY(dummya11d4033_data_1e_795)}
    {db tmp999[2]={51,14};MYCOPY(dummya11d4033_data_20_796)}
    {db tmp999[2]={56,38};MYCOPY(dummya11d4033_data_22_797)}
    {db tmp999[2]={14,36};MYCOPY(dummya11d4033_data_24_798)}
    {db tmp999[2]={18,53};MYCOPY(dummya11d4033_data_26_799)}
    {db tmp999[2]={31,30};MYCOPY(dummya11d4033_data_28_800)}
    {db tmp999[2]={60,35};MYCOPY(dummya11d4033_data_2a_801)}
    {db tmp999[2]={10,52};MYCOPY(dummya11d4033_data_2c_802)}
    {db tmp999[2]={1,22};MYCOPY(dummya11d4033_data_2e_803)}
    {db tmp999[2]={15,58};MYCOPY(dummya11d4033_data_30_804)}
    {db tmp999[2]={50,20};MYCOPY(dummya11d4033_data_32_805)}
    {db tmp999[2]={2,31};MYCOPY(dummya11d4033_data_34_806)}
    {db tmp999[2]={20,21};MYCOPY(dummya11d4033_data_36_807)}
    {db tmp999[2]={47,18};MYCOPY(dummya11d4033_data_38_808)}
    {db tmp999[2]={52,59};MYCOPY(dummya11d4033_data_3a_809)}
    {db tmp999[2]={30,5};MYCOPY(dummya11d4033_data_3c_810)}
    {db tmp999[2]={58,55};MYCOPY(dummya11d4033_data_3e_811)}
    {db tmp999[2]={29,2};MYCOPY(dummya11d4033_data_40_812)}
    {db tmp999[2]={43,10};MYCOPY(dummya11d4033_data_42_813)}
    {db tmp999[2]={35,37};MYCOPY(dummya11d4033_data_44_814)}
    {db tmp999[2]={45,46};MYCOPY(dummya11d4033_data_46_815)}
    {db tmp999[2]={19,39};MYCOPY(dummya11d4033_data_48_816)}
    {db tmp999[2]={44,17};MYCOPY(dummya11d4033_data_4a_817)}
    {db tmp999[2]={27,41};MYCOPY(dummya11d4033_data_4c_818)}
    {db tmp999[2]={36,58};MYCOPY(dummya11d4033_data_4e_820)}
    {db tmp999[2]={60,41};MYCOPY(dummya11d4033_data_50_821)}
    {db tmp999[2]={2,63};MYCOPY(dummya11d4033_data_52_822)}
    {db tmp999[2]={51,9};MYCOPY(dummya11d4033_data_54_823)}
    {db tmp999[2]={49,45};MYCOPY(dummya11d4033_data_56_824)}
    {db tmp999[2]={58,50};MYCOPY(dummya11d4033_data_58_825)}
    {db tmp999[2]={17,18};MYCOPY(dummya11d4033_data_5a_826)}
    {db tmp999[2]={46,3};MYCOPY(dummya11d4033_data_5c_827)}
    {db tmp999[2]={45,14};MYCOPY(dummya11d4033_data_5e_828)}
    {db tmp999[2]={56,54};MYCOPY(dummya11d4033_data_60_829)}
    {db tmp999[2]={34,59};MYCOPY(dummya11d4033_data_62_830)}
    {db tmp999[2]={3,8};MYCOPY(dummya11d4033_data_64_831)}
    {db tmp999[2]={5,49};MYCOPY(dummya11d4033_data_66_832)}
    {db tmp999[2]={1,36};MYCOPY(dummya11d4033_data_68_833)}
    {db tmp999[2]={11,35};MYCOPY(dummya11d4033_data_6a_834)}
    {db tmp999[2]={4,13};MYCOPY(dummya11d4033_data_6c_835)}
    {db tmp999[2]={7,20};MYCOPY(dummya11d4033_data_6e_836)}
    {db tmp999[2]={18,4};MYCOPY(dummya11d4033_data_70_837)}
    {db tmp999[2]={6,27};MYCOPY(dummya11d4033_data_72_838)}
    {db tmp999[2]={55,31};MYCOPY(dummya11d4033_data_74_839)}
    {db tmp999[2]={50,5};MYCOPY(dummya11d4033_data_76_840)}
    {db tmp999[2]={19,15};MYCOPY(dummya11d4033_data_78_841)}
    {db tmp999[2]={29,57};MYCOPY(dummya11d4033_data_7a_842)}
    {db tmp999[2]={31,60};MYCOPY(dummya11d4033_data_7c_843)}
    {db tmp999[2]={53,17};MYCOPY(dummya11d4033_data_7e_844)}
    {db tmp999[2]={24,38};MYCOPY(dummya11d4033_data_80_845)}
    {db tmp999[2]={40,37};MYCOPY(dummya11d4033_data_82_846)}
    {db tmp999[2]={25,40};MYCOPY(dummya11d4033_data_84_847)}
    {db tmp999[2]={38,34};MYCOPY(dummya11d4033_data_86_848)}
    {db tmp999[2]={20,22};MYCOPY(dummya11d4033_data_88_849)}
    {db tmp999[2]={33,30};MYCOPY(dummya11d4033_data_8a_850)}
    {db tmp999[2]={47,19};MYCOPY(dummya11d4033_data_8c_851)}
    {db tmp999[2]={60,34};MYCOPY(dummya11d4033_data_8e_853)}
    {db tmp999[2]={57,54};MYCOPY(dummya11d4033_data_90_854)}
    {db tmp999[2]={26,41};MYCOPY(dummya11d4033_data_92_855)}
    {db tmp999[2]={4,49};MYCOPY(dummya11d4033_data_94_856)}
    {db tmp999[2]={25,40};MYCOPY(dummya11d4033_data_96_857)}
    {db tmp999[2]={31,13};MYCOPY(dummya11d4033_data_98_858)}
    {db tmp999[2]={17,9};MYCOPY(dummya11d4033_data_9a_859)}
    {db tmp999[2]={8,53};MYCOPY(dummya11d4033_data_9c_860)}
    {db tmp999[2]={50,2};MYCOPY(dummya11d4033_data_9e_861)}
    {db tmp999[2]={12,3};MYCOPY(dummya11d4033_data_a0_862)}
    {db tmp999[2]={19,63};MYCOPY(dummya11d4033_data_a2_863)}
    {db tmp999[2]={47,62};MYCOPY(dummya11d4033_data_a4_864)}
    {db tmp999[2]={58,8};MYCOPY(dummya11d4033_data_a6_865)}
    {db tmp999[2]={1,38};MYCOPY(dummya11d4033_data_a8_866)}
    {db tmp999[2]={5,6};MYCOPY(dummya11d4033_data_aa_867)}
    {db tmp999[2]={20,21};MYCOPY(dummya11d4033_data_ac_868)}
    {db tmp999[2]={35,17};MYCOPY(dummya11d4033_data_ae_869)}
    {db tmp999[2]={62,59};MYCOPY(dummya11d4033_data_b0_870)}
    {db tmp999[2]={9,36};MYCOPY(dummya11d4033_data_b2_871)}
    {db tmp999[2]={61,27};MYCOPY(dummya11d4033_data_b4_872)}
    {db tmp999[2]={30,60};MYCOPY(dummya11d4033_data_b6_873)}
    {db tmp999[2]={3,30};MYCOPY(dummya11d4033_data_b8_874)}
    {db tmp999[2]={56,31};MYCOPY(dummya11d4033_data_ba_875)}
    {db tmp999[2]={33,50};MYCOPY(dummya11d4033_data_bc_876)}
    {db tmp999[2]={45,47};MYCOPY(dummya11d4033_data_be_877)}
    {db tmp999[2]={2,24};MYCOPY(dummya11d4033_data_c0_878)}
    {db tmp999[2]={46,45};MYCOPY(dummya11d4033_data_c2_879)}
    {db tmp999[2]={40,1};MYCOPY(dummya11d4033_data_c4_880)}
    {db tmp999[2]={42,15};MYCOPY(dummya11d4033_data_c6_881)}
    {db tmp999[2]={54,44};MYCOPY(dummya11d4033_data_c8_882)}
    {db tmp999[2]={41,28};MYCOPY(dummya11d4033_data_ca_883)}
    {db tmp999[2]={18,20};MYCOPY(dummya11d4033_data_cc_884)}
    {db tmp999[2]={7,35};MYCOPY(dummya11d4033_data_ce_886)}
    {db tmp999[2]={2,33};MYCOPY(dummya11d4033_data_d0_887)}
    {db tmp999[2]={61,1};MYCOPY(dummya11d4033_data_d2_888)}
    {db tmp999[2]={46,63};MYCOPY(dummya11d4033_data_d4_889)}
    {db tmp999[2]={56,57};MYCOPY(dummya11d4033_data_d6_890)}
    {db tmp999[2]={13,17};MYCOPY(dummya11d4033_data_d8_891)}
    {db tmp999[2]={25,59};MYCOPY(dummya11d4033_data_da_892)}
    {db tmp999[2]={40,2};MYCOPY(dummya11d4033_data_dc_893)}
    {db tmp999[2]={34,58};MYCOPY(dummya11d4033_data_de_894)}
    {db tmp999[2]={8,51};MYCOPY(dummya11d4033_data_e0_895)}
    {db tmp999[2]={35,6};MYCOPY(dummya11d4033_data_e2_896)}
    {db tmp999[2]={24,20};MYCOPY(dummya11d4033_data_e4_897)}
    {db tmp999[2]={6,14};MYCOPY(dummya11d4033_data_e6_898)}
    {db tmp999[2]={53,10};MYCOPY(dummya11d4033_data_e8_899)}
    {db tmp999[2]={10,12};MYCOPY(dummya11d4033_data_ea_900)}
    {db tmp999[2]={15,54};MYCOPY(dummya11d4033_data_ec_901)}
    {db tmp999[2]={55,38};MYCOPY(dummya11d4033_data_ee_902)}
    {db tmp999[2]={58,60};MYCOPY(dummya11d4033_data_f0_903)}
    {db tmp999[2]={12,30};MYCOPY(dummya11d4033_data_f2_904)}
    {db tmp999[2]={28,7};MYCOPY(dummya11d4033_data_f4_905)}
    {db tmp999[2]={47,44};MYCOPY(dummya11d4033_data_f6_906)}
    {db tmp999[2]={19,62};MYCOPY(dummya11d4033_data_f8_907)}
    {db tmp999[2]={26,4};MYCOPY(dummya11d4033_data_fa_908)}
    {db tmp999[2]={57,34};MYCOPY(dummya11d4033_data_fc_909)}
    {db tmp999[2]={27,41};MYCOPY(dummya11d4033_data_fe_910)}
    {db tmp999[2]={50,21};MYCOPY(dummya11d4033_data_100_911)}
    {db tmp999[2]={54,19};MYCOPY(dummya11d4033_data_102_912)}
    {db tmp999[2]={38,39};MYCOPY(dummya11d4033_data_104_913)}
    {db tmp999[2]={30,31};MYCOPY(dummya11d4033_data_106_914)}
    {db tmp999[2]={17,46};MYCOPY(dummya11d4033_data_108_915)}
    {db tmp999[2]={45,18};MYCOPY(dummya11d4033_data_10a_916)}
    {db tmp999[2]={36,29};MYCOPY(dummya11d4033_data_10c_917)}

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
        

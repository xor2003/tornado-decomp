/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "stars.h"

	
 static bool exitstars(m2c::_offsets _i, struct m2c::_STATE* _state){return drawstars(_i ? _i : m2c::kexitstars, _state);}

 static bool skipstar(m2c::_offsets _i, struct m2c::_STATE* _state){return drawstars(_i ? _i : m2c::kskipstar, _state);}

 static bool starloop(m2c::_offsets _i, struct m2c::_STATE* _state){return drawstars(_i ? _i : m2c::kstarloop, _state);}

	
	#include "stars_default_seg_lifted.cpp"
#include "stars_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_dotclip
        case m2c::kdotclip: 	if (!dotclip(0, _state)) return false; break;
#endif
        case m2c::kdrawstars: 	if (!drawstars(0, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!drawstars(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!drawstars(__disp, _state)) return false; break;
        case m2c::kexitstars: 	if (!drawstars(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
        case m2c::kskipstar: 	if (!drawstars(__disp, _state)) return false; break;
        case m2c::kstarloop: 	if (!drawstars(__disp, _state)) return false; break;
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
          void Initializer_stars()
          {
              {db tmp999[2]={1,0};MYCOPY(starsenabled)}
    {db tmp999[4]={62,118,94,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_2_584)}
    {db tmp999[4]={62,102,128,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_6_585)}
    {db tmp999[4]={62,100,74,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_a_586)}
    {db tmp999[4]={60,116,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_e_587)}
    {db tmp999[4]={62,88,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_12_588)}
    {db tmp999[4]={58,114,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_16_589)}
    {db tmp999[4]={62,78,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1a_590)}
    {db tmp999[4]={58,100,114,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1e_591)}
    {db tmp999[4]={54,126,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_22_592)}
    {db tmp999[4]={54,124,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_26_593)}
    {db tmp999[4]={56,110,92,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2a_594)}
    {db tmp999[4]={58,98,116,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_2e_595)}
    {db tmp999[4]={56,104,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_32_596)}
    {db tmp999[4]={54,112,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_36_597)}
    {db tmp999[4]={58,92,110,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3a_598)}
    {db tmp999[4]={60,82,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3e_599)}
    {db tmp999[4]={58,88,108,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_42_600)}
    {db tmp999[4]={60,80,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_46_601)}
    {db tmp999[4]={50,120,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4a_602)}
    {db tmp999[4]={48,126,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4e_603)}
    {db tmp999[4]={62,68,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_52_604)}
    {db tmp999[4]={54,96,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_56_605)}
    {db tmp999[4]={54,96,88,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_5a_606)}
    {db tmp999[4]={54,96,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5e_607)}
    {db tmp999[4]={48,114,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_62_608)}
    {db tmp999[4]={46,120,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_66_609)}
    {db tmp999[4]={46,118,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_6a_610)}
    {db tmp999[4]={56,84,102,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_6e_611)}
    {db tmp999[4]={64,64,82,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_72_612)}
    {db tmp999[4]={38,126,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_76_613)}
    {db tmp999[4]={50,96,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_7a_614)}
    {db tmp999[4]={38,122,120,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_7e_615)}
    {db tmp999[4]={42,112,124,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_82_616)}
    {db tmp999[4]={42,110,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_86_617)}
    {db tmp999[4]={52,86,114,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_8a_618)}
    {db tmp999[4]={34,120,100,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_8e_619)}
    {db tmp999[4]={30,126,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_92_620)}
    {db tmp999[4]={34,120,88,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_96_621)}
    {db tmp999[4]={58,74,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_9a_622)}
    {db tmp999[4]={58,74,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_9e_623)}
    {db tmp999[4]={46,94,96,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_a2_624)}
    {db tmp999[4]={28,122,94,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_a6_625)}
    {db tmp999[4]={26,124,114,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_aa_626)}
    {db tmp999[4]={42,96,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_ae_627)}
    {db tmp999[4]={58,72,88,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_b2_628)}
    {db tmp999[4]={38,94,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_b6_629)}
    {db tmp999[4]={24,110,96,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_ba_630)}
    {db tmp999[4]={28,104,94,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_be_631)}
    {db tmp999[4]={40,90,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_c2_632)}
    {db tmp999[4]={22,110,96,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_c6_633)}
    {db tmp999[4]={40,90,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_ca_634)}
    {db tmp999[4]={12,120,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_ce_635)}
    {db tmp999[4]={36,94,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_d2_636)}
    {db tmp999[4]={18,110,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_d6_637)}
    {db tmp999[4]={30,96,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_da_638)}
    {db tmp999[4]={12,114,122,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_de_639)}
    {db tmp999[4]={10,114,128,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_e2_640)}
    {db tmp999[4]={38,88,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_e6_641)}
    {db tmp999[4]={18,106,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_ea_642)}
    {db tmp999[4]={16,108,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_ee_643)}
    {db tmp999[4]={2,120,94,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_f2_644)}
    {db tmp999[4]={28,94,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_f6_645)}
    {db tmp999[4]={22,98,128,col_nt_grey1};MYCOPY(dummybdaf037b_stardata_fa_646)}
    {db tmp999[4]={38,84,120,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_fe_647)}
    {db tmp999[4]={38,84,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_102_648)}
    {db tmp999[4]={30,90,114,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_106_649)}
    {db tmp999[4]={30,90,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_10a_650)}
    {db tmp999[4]={28,90,114,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_10e_651)}
    {db tmp999[4]={20,94,122,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_112_652)}
    {db tmp999[4]={22,92,96,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_116_653)}
    {db tmp999[4]={46,76,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_11a_654)}
    {db tmp999[4]={16,96,90,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_11e_655)}
    {db tmp999[4]={48,74,120,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_122_656)}
    {db tmp999[4]={42,78,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_126_657)}
    {db tmp999[4]={0,106,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_12a_658)}
    {db tmp999[4]={12,98,92,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_12e_659)}
    {db tmp999[4]={8,100,94,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_132_660)}
    {db tmp999[4]={12,96,102,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_136_661)}
    {db tmp999[4]={6,98,120,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_13a_662)}
    {db tmp999[4]={40,78,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_13e_663)}
    {db tmp999[4]={8,96,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_142_664)}
    {db tmp999[4]={16,90,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_146_665)}
    {db tmp999[4]={38,78,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_14a_666)}
    {db tmp999[4]={22,86,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_14e_667)}
    {db tmp999[4]={48,72,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_152_668)}
    {db tmp999[4]={20,86,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_156_669)}
    {db tmp999[4]={22,84,120,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_15a_670)}
    {db tmp999[4]={0,94,84,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_15e_671)}
    {db tmp999[4]={6,90,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_162_672)}
    {db tmp999[4]={14,86,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_166_673)}
    {db tmp999[4]={18,84,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_16a_674)}
    {db tmp999[4]={4,90,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_16e_675)}
    {db tmp999[4]={18,84,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_172_676)}
    {db tmp999[4]={16,84,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_176_677)}
    {db tmp999[4]={12,86,80,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_17a_678)}
    {db tmp999[4]={8,86,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_17e_679)}
    {db tmp999[4]={6,86,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_182_680)}
    {db tmp999[4]={2,88,84,col_nt_r_white1};MYCOPY(dummybdaf037b_stardata_186_681)}
    {db tmp999[4]={4,86,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_18a_682)}
    {db tmp999[4]={2,86,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_18e_683)}
    {db tmp999[4]={44,70,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_192_684)}
    {db tmp999[4]={50,68,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_196_685)}
    {db tmp999[4]={14,78,98,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_19a_686)}
    {db tmp999[4]={8,80,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_19e_687)}
    {db tmp999[4]={32,72,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1a2_688)}
    {db tmp999[4]={10,78,118,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1a6_689)}
    {db tmp999[4]={0,80,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1aa_690)}
    {db tmp999[4]={8,78,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1ae_691)}
    {db tmp999[4]={22,74,102,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1b2_692)}
    {db tmp999[4]={22,72,108,col_nt_yellow1};MYCOPY(dummybdaf037b_stardata_1b6_693)}
    {db tmp999[4]={10,74,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1ba_694)}
    {db tmp999[4]={12,72,70,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1be_695)}
    {db tmp999[4]={24,70,86,col_nt_grey1};MYCOPY(dummybdaf037b_stardata_1c2_696)}
    {db tmp999[4]={0,72,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1c6_697)}
    {db tmp999[4]={2,70,88,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1ca_698)}
    {db tmp999[4]={20,66,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1ce_699)}
    {db tmp999[4]={10,66,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1d2_700)}
    {db tmp999[4]={0,66,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1d6_701)}
    {db tmp999[4]={4,66,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1da_702)}
    {db tmp999[4]={2,66,72,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1de_703)}
    {db tmp999[4]={18,64,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1e2_704)}
    {db tmp999[4]={46,64,82,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_1e6_705)}
    {db tmp999[4]={4,64,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1ea_706)}
    {db tmp999[4]={6,64,108,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_1ee_707)}
    {db tmp999[4]={4,62,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1f2_708)}
    {db tmp999[4]={4,62,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1f6_709)}
    {db tmp999[4]={4,62,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_1fa_710)}
    {db tmp999[4]={2,60,90,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_1fe_711)}
    {db tmp999[4]={4,60,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_202_712)}
    {db tmp999[4]={40,62,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_206_713)}
    {db tmp999[4]={6,58,88,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_20a_714)}
    {db tmp999[4]={32,60,76,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_20e_715)}
    {db tmp999[4]={56,62,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_212_716)}
    {db tmp999[4]={4,54,82,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_216_717)}
    {db tmp999[4]={22,56,84,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_21a_718)}
    {db tmp999[4]={4,52,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_21e_719)}
    {db tmp999[4]={50,60,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_222_720)}
    {db tmp999[4]={38,58,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_226_721)}
    {db tmp999[4]={40,58,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_22a_722)}
    {db tmp999[4]={8,48,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_22e_723)}
    {db tmp999[4]={2,44,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_232_724)}
    {db tmp999[4]={2,42,84,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_236_725)}
    {db tmp999[4]={4,42,90,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_23a_726)}
    {db tmp999[4]={24,48,114,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_23e_727)}
    {db tmp999[4]={18,46,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_242_728)}
    {db tmp999[4]={10,42,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_246_729)}
    {db tmp999[4]={14,42,98,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_24a_730)}
    {db tmp999[4]={46,56,74,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_24e_731)}
    {db tmp999[4]={4,36,70,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_252_732)}
    {db tmp999[4]={2,34,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_256_733)}
    {db tmp999[4]={44,54,74,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_25a_734)}
    {db tmp999[4]={0,32,102,col_nt_grey1};MYCOPY(dummybdaf037b_stardata_25e_735)}
    {db tmp999[4]={14,28,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_262_736)}
    {db tmp999[4]={38,44,122,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_266_737)}
    {db tmp999[4]={52,54,96,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_26a_738)}
    {db tmp999[4]={6,14,94,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_26e_739)}
    {db tmp999[4]={32,36,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_272_740)}
    {db tmp999[4]={26,30,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_276_741)}
    {db tmp999[4]={50,50,86,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_27a_742)}
    {db tmp999[4]={26,26,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_27e_743)}
    {db tmp999[4]={24,22,126,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_282_744)}
    {db tmp999[4]={24,22,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_286_745)}
    {db tmp999[4]={38,36,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_28a_746)}
    {db tmp999[4]={44,42,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_28e_747)}
    {db tmp999[4]={10,0,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_292_748)}
    {db tmp999[4]={34,28,96,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_296_749)}
    {db tmp999[4]={16,4,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_29a_750)}
    {db tmp999[4]={58,56,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_29e_751)}
    {db tmp999[4]={58,56,84,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2a2_752)}
    {db tmp999[4]={52,48,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2a6_753)}
    {db tmp999[4]={16,0,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2aa_754)}
    {db tmp999[4]={46,40,102,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2ae_755)}
    {db tmp999[4]={42,34,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2b2_756)}
    {db tmp999[4]={30,18,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2b6_757)}
    {db tmp999[4]={44,34,80,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2ba_758)}
    {db tmp999[4]={50,42,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2be_759)}
    {db tmp999[4]={54,48,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2c2_760)}
    {db tmp999[4]={38,22,88,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2c6_761)}
    {db tmp999[4]={48,34,88,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2ca_762)}
    {db tmp999[4]={30,0,86,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2ce_763)}
    {db tmp999[4]={46,30,72,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_2d2_764)}
    {db tmp999[4]={34,2,94,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2d6_765)}
    {db tmp999[4]={36,6,124,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2da_766)}
    {db tmp999[4]={50,34,76,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_2de_767)}
    {db tmp999[4]={36,2,124,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_2e2_768)}
    {db tmp999[4]={42,12,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2e6_769)}
    {db tmp999[4]={44,10,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2ea_770)}
    {db tmp999[4]={48,10,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2ee_771)}
    {db tmp999[4]={48,10,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2f2_772)}
    {db tmp999[4]={46,2,94,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2f6_773)}
    {db tmp999[4]={54,24,126,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_2fa_774)}
    {db tmp999[4]={48,2,88,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_2fe_775)}
    {db tmp999[4]={58,40,110,col_nt_grey1};MYCOPY(dummybdaf037b_stardata_302_776)}
    {db tmp999[4]={60,46,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_306_777)}
    {db tmp999[4]={52,6,86,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_30a_778)}
    {db tmp999[4]={54,14,78,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_30e_779)}
    {db tmp999[4]={52,4,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_312_780)}
    {db tmp999[4]={58,32,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_316_781)}
    {db tmp999[4]={54,10,100,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_31a_782)}
    {db tmp999[4]={62,48,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_31e_783)}
    {db tmp999[4]={62,30,102,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_322_784)}
    {db tmp999[4]={62,26,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_326_785)}
    {db tmp999[4]={62,18,76,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_32a_786)}
    {db tmp999[4]={62,20,124,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_32e_787)}
    {db tmp999[4]={66,34,110,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_332_788)}
    {db tmp999[4]={70,12,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_336_789)}
    {db tmp999[4]={72,10,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_33a_790)}
    {db tmp999[4]={66,50,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_33e_791)}
    {db tmp999[4]={74,22,128,col_nt_grey1};MYCOPY(dummybdaf037b_stardata_342_792)}
    {db tmp999[4]={72,32,90,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_346_793)}
    {db tmp999[4]={78,14,74,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_34a_794)}
    {db tmp999[4]={80,14,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_34e_795)}
    {db tmp999[4]={80,22,128,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_352_796)}
    {db tmp999[4]={74,38,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_356_797)}
    {db tmp999[4]={78,32,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_35a_798)}
    {db tmp999[4]={82,26,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_35e_799)}
    {db tmp999[4]={84,24,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_362_800)}
    {db tmp999[4]={74,44,90,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_366_801)}
    {db tmp999[4]={90,14,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_36a_802)}
    {db tmp999[4]={78,38,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_36e_803)}
    {db tmp999[4]={96,6,86,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_372_804)}
    {db tmp999[4]={70,54,88,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_376_805)}
    {db tmp999[4]={92,22,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_37a_806)}
    {db tmp999[4]={106,2,90,col_nt_r_white1};MYCOPY(dummybdaf037b_stardata_37e_807)}
    {db tmp999[4]={90,26,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_382_808)}
    {db tmp999[4]={92,26,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_386_809)}
    {db tmp999[4]={106,10,104,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_38a_810)}
    {db tmp999[4]={70,56,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_38e_811)}
    {db tmp999[4]={114,0,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_392_812)}
    {db tmp999[4]={88,34,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_396_813)}
    {db tmp999[4]={120,0,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_39a_814)}
    {db tmp999[4]={108,14,98,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_39e_815)}
    {db tmp999[4]={116,8,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3a2_816)}
    {db tmp999[4]={76,50,128,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_3a6_817)}
    {db tmp999[4]={76,52,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3aa_818)}
    {db tmp999[4]={84,44,88,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3ae_819)}
    {db tmp999[4]={118,12,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3b2_820)}
    {db tmp999[4]={126,10,118,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3b6_821)}
    {db tmp999[4]={126,14,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3ba_822)}
    {db tmp999[4]={76,54,112,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3be_823)}
    {db tmp999[4]={94,40,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3c2_824)}
    {db tmp999[4]={118,22,102,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3c6_825)}
    {db tmp999[4]={88,46,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3ca_826)}
    {db tmp999[4]={102,36,88,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_3ce_827)}
    {db tmp999[4]={110,32,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3d2_828)}
    {db tmp999[4]={114,30,94,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3d6_829)}
    {db tmp999[4]={82,52,70,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_3da_830)}
    {db tmp999[4]={126,24,88,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3de_831)}
    {db tmp999[4]={126,24,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3e2_832)}
    {db tmp999[4]={70,60,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3e6_833)}
    {db tmp999[4]={122,28,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3ea_834)}
    {db tmp999[4]={114,34,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3ee_835)}
    {db tmp999[4]={108,38,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3f2_836)}
    {db tmp999[4]={126,28,98,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_3f6_837)}
    {db tmp999[4]={96,46,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3fa_838)}
    {db tmp999[4]={94,48,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_3fe_839)}
    {db tmp999[4]={102,46,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_402_840)}
    {db tmp999[4]={90,52,74,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_406_841)}
    {db tmp999[4]={82,56,100,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_40a_842)}
    {db tmp999[4]={122,40,88,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_40e_843)}
    {db tmp999[4]={120,42,120,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_412_844)}
    {db tmp999[4]={92,54,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_416_845)}
    {db tmp999[4]={104,50,98,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_41a_846)}
    {db tmp999[4]={70,62,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_41e_847)}
    {db tmp999[4]={116,50,96,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_422_848)}
    {db tmp999[4]={90,58,124,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_426_849)}
    {db tmp999[4]={94,58,72,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_42a_850)}
    {db tmp999[4]={94,58,78,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_42e_851)}
    {db tmp999[4]={114,54,102,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_432_852)}
    {db tmp999[4]={118,54,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_436_853)}
    {db tmp999[4]={114,56,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_43a_854)}
    {db tmp999[4]={96,60,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_43e_855)}
    {db tmp999[4]={110,58,124,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_442_856)}
    {db tmp999[4]={118,58,76,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_446_857)}
    {db tmp999[4]={108,60,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_44a_858)}
    {db tmp999[4]={98,62,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_44e_859)}
    {db tmp999[4]={84,62,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_452_860)}
    {db tmp999[4]={106,62,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_456_861)}
    {db tmp999[4]={114,64,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_45a_862)}
    {db tmp999[4]={114,64,92,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_45e_863)}
    {db tmp999[4]={110,64,122,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_462_864)}
    {db tmp999[4]={88,64,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_466_865)}
    {db tmp999[4]={84,64,70,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_46a_866)}
    {db tmp999[4]={126,66,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_46e_867)}
    {db tmp999[4]={116,66,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_472_868)}
    {db tmp999[4]={66,64,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_476_869)}
    {db tmp999[4]={110,68,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_47a_870)}
    {db tmp999[4]={84,66,72,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_47e_871)}
    {db tmp999[4]={86,66,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_482_872)}
    {db tmp999[4]={84,66,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_486_873)}
    {db tmp999[4]={126,74,114,col_nt_b_white1};MYCOPY(dummybdaf037b_stardata_48a_874)}
    {db tmp999[4]={126,76,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_48e_875)}
    {db tmp999[4]={122,76,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_492_876)}
    {db tmp999[4]={112,74,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_496_877)}
    {db tmp999[4]={126,78,106,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_49a_878)}
    {db tmp999[4]={100,72,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_49e_879)}
    {db tmp999[4]={106,74,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4a2_880)}
    {db tmp999[4]={122,78,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4a6_881)}
    {db tmp999[4]={104,74,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4aa_882)}
    {db tmp999[4]={94,72,72,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4ae_883)}
    {db tmp999[4]={94,72,84,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_4b2_884)}
    {db tmp999[4]={126,82,80,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_4b6_885)}
    {db tmp999[4]={106,78,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4ba_886)}
    {db tmp999[4]={82,70,110,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_4be_887)}
    {db tmp999[4]={122,84,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4c2_888)}
    {db tmp999[4]={92,74,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4c6_889)}
    {db tmp999[4]={76,68,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4ca_890)}
    {db tmp999[4]={86,72,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4ce_891)}
    {db tmp999[4]={108,82,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4d2_892)}
    {db tmp999[4]={116,86,94,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_4d6_893)}
    {db tmp999[4]={108,82,124,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4da_894)}
    {db tmp999[4]={78,70,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4de_895)}
    {db tmp999[4]={108,84,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4e2_896)}
    {db tmp999[4]={120,90,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4e6_897)}
    {db tmp999[4]={120,90,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4ea_898)}
    {db tmp999[4]={98,80,76,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4ee_899)}
    {db tmp999[4]={112,88,74,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4f2_900)}
    {db tmp999[4]={80,72,82,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_4f6_901)}
    {db tmp999[4]={96,80,76,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_4fa_902)}
    {db tmp999[4]={98,82,70,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_4fe_903)}
    {db tmp999[4]={102,84,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_502_904)}
    {db tmp999[4]={80,72,114,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_506_905)}
    {db tmp999[4]={116,92,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_50a_906)}
    {db tmp999[4]={106,88,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_50e_907)}
    {db tmp999[4]={128,100,90,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_512_908)}
    {db tmp999[4]={126,100,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_516_909)}
    {db tmp999[4]={84,76,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_51a_910)}
    {db tmp999[4]={100,88,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_51e_911)}
    {db tmp999[4]={76,72,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_522_912)}
    {db tmp999[4]={124,104,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_526_913)}
    {db tmp999[4]={74,70,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_52a_914)}
    {db tmp999[4]={94,84,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_52e_915)}
    {db tmp999[4]={120,104,122,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_532_916)}
    {db tmp999[4]={100,90,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_536_917)}
    {db tmp999[4]={124,110,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_53a_918)}
    {db tmp999[4]={90,84,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_53e_919)}
    {db tmp999[4]={122,110,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_542_920)}
    {db tmp999[4]={118,108,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_546_921)}
    {db tmp999[4]={112,104,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_54a_922)}
    {db tmp999[4]={106,100,120,col_nt_grey1};MYCOPY(dummybdaf037b_stardata_54e_923)}
    {db tmp999[4]={126,118,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_552_924)}
    {db tmp999[4]={112,106,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_556_925)}
    {db tmp999[4]={100,96,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_55a_926)}
    {db tmp999[4]={82,80,80,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_55e_927)}
    {db tmp999[4]={82,80,102,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_562_928)}
    {db tmp999[4]={80,78,104,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_566_929)}
    {db tmp999[4]={122,116,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_56a_930)}
    {db tmp999[4]={124,120,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_56e_931)}
    {db tmp999[4]={112,110,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_572_932)}
    {db tmp999[4]={86,86,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_576_933)}
    {db tmp999[4]={110,112,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_57a_934)}
    {db tmp999[4]={98,100,118,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_57e_935)}
    {db tmp999[4]={114,120,108,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_582_936)}
    {db tmp999[4]={108,114,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_586_937)}
    {db tmp999[4]={102,108,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_58a_938)}
    {db tmp999[4]={88,92,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_58e_939)}
    {db tmp999[4]={76,78,100,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_592_940)}
    {db tmp999[4]={92,98,80,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_596_941)}
    {db tmp999[4]={78,82,74,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_59a_942)}
    {db tmp999[4]={78,82,128,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_59e_943)}
    {db tmp999[4]={98,110,122,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5a2_944)}
    {db tmp999[4]={86,96,112,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5a6_945)}
    {db tmp999[4]={96,112,74,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5aa_946)}
    {db tmp999[4]={96,112,82,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5ae_947)}
    {db tmp999[4]={106,126,100,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5b2_948)}
    {db tmp999[4]={86,96,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5b6_949)}
    {db tmp999[4]={76,82,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5ba_950)}
    {db tmp999[4]={72,76,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5be_951)}
    {db tmp999[4]={94,110,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5c2_952)}
    {db tmp999[4]={74,82,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5c6_953)}
    {db tmp999[4]={78,90,78,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5ca_954)}
    {db tmp999[4]={88,110,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5ce_955)}
    {db tmp999[4]={82,98,126,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_5d2_956)}
    {db tmp999[4]={78,92,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5d6_957)}
    {db tmp999[4]={82,100,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5da_958)}
    {db tmp999[4]={92,122,114,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5de_959)}
    {db tmp999[4]={76,90,94,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5e2_960)}
    {db tmp999[4]={82,104,120,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5e6_961)}
    {db tmp999[4]={80,100,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5ea_962)}
    {db tmp999[4]={74,88,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5ee_963)}
    {db tmp999[4]={86,116,126,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5f2_964)}
    {db tmp999[4]={78,98,98,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5f6_965)}
    {db tmp999[4]={78,98,108,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5fa_966)}
    {db tmp999[4]={82,112,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_5fe_967)}
    {db tmp999[4]={82,114,116,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_602_968)}
    {db tmp999[4]={82,116,96,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_606_969)}
    {db tmp999[4]={80,112,86,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_60a_970)}
    {db tmp999[4]={80,114,88,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_60e_971)}
    {db tmp999[4]={72,90,126,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_612_972)}
    {db tmp999[4]={66,70,128,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_616_973)}
    {db tmp999[4]={80,126,122,col_nt_grey3};MYCOPY(dummybdaf037b_stardata_61a_974)}
    {db tmp999[4]={74,104,86,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_61e_975)}
    {db tmp999[4]={68,80,84,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_622_976)}
    {db tmp999[4]={80,128,82,col_nt_grey2};MYCOPY(dummybdaf037b_stardata_626_977)}
    {db tmp999[4]={66,72,96,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_62a_978)}
    {db tmp999[4]={72,102,110,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_62e_979)}
    {db tmp999[4]={74,122,90,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_632_980)}
    {db tmp999[4]={74,128,92,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_636_981)}
    {db tmp999[4]={68,104,106,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_63a_982)}
    {db tmp999[4]={68,106,104,col_nt_grey4};MYCOPY(dummybdaf037b_stardata_63e_983)}
    {db tmp999=38;MYCOPY(dummybdaf037b_viscode_642_1010)}
    {db tmp999=38;MYCOPY(dummybdaf037b_viscode_643_1018)}
    {db tmp999=38;MYCOPY(dummybdaf037b_viscode_644_1026)}
    {db tmp999=38;MYCOPY(dummybdaf037b_viscode_645_1037)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_stars(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "debug.h"

	
	
	#include "debug_default_seg_lifted.cpp"
#include "debug_code_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kedummylabel1: 	if (!printdebuginfo(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!printdebuginfo(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kprintdebuginfo: 	if (!printdebuginfo(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
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
          void Initializer_debug()
          {
              {db tmp999=2;MYCOPY(dummy78c1fe4b_data_0_496)}
    {db tmp999=5;MYCOPY(dummy78c1fe4b_data_1_497)}
    {db tmp999[4]={p_ext,27,col_white,col_hud};MYCOPY(dummy78c1fe4b_data_2_498)}
    {db tmp999[2]={15,128};MYCOPY(dummy78c1fe4b_data_6_500)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_8_509)}
    {dw tmp999[2]={0,0};MYCOPY(dummy78c1fe4b_data_a_510)}
    {char tmp999[9]={'P','O','L','Y','G','O','N','S',':'};MYCOPY(dummy78c1fe4b_data_e_511)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy78c1fe4b_data_17_512)}
    {dw tmp999=m2c::near_offset_external(polycount);MYCOPY(dummy78c1fe4b_data_19_513)}
    {dw tmp999=m2c::near_offset_external(polycount);MYCOPY(dummy78c1fe4b_data_1b_514)}
    {db tmp999[2]={15,0};MYCOPY(dummy78c1fe4b_data_1d_518)}
    {db tmp999[10]={p_ext,22,255,0,255,0,255,0,col_hud,col_black};MYCOPY(dummy78c1fe4b_data_20_522)}
    {db tmp999=3;MYCOPY(dummy78c1fe4b_data_2a_523)}
    {db tmp999=5;MYCOPY(dummy78c1fe4b_data_2b_524)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_2c_527)}
    {dw tmp999[2]={108,15};MYCOPY(dummy78c1fe4b_data_2e_528)}
    {char tmp999[26]={'*','D','I','G','I','T','A','L',' ','I','N','T','E','G','R','A','T','I','O','N',' ','1','9','9','3','*'};MYCOPY(dummy78c1fe4b_data_32_530)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_4c_533)}
    {dw tmp999[2]={94,15+6+linespc};MYCOPY(dummy78c1fe4b_data_4e_534)}
    {char tmp999[33]={'D','A','V','I','D',' ','K',' ','M','A','R','S','H','A','L','L',':',' ','P','r','o','j','e','c','t',' ','M','a','n','a','g','e','r'};MYCOPY(dummy78c1fe4b_data_52_536)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_73_539)}
    {dw tmp999[2]={8,29+linespc};MYCOPY(dummy78c1fe4b_data_75_540)}
    {char tmp999[76]={'K','E','V','I','N',' ','B','E','Z','A','N','T',',',' ','N','I','C','K',' ','M','A','S','C','A','L','L',',',' ','T','O','N','Y',' ','H','O','S','I','E','R',',',' ','R','O','B','I','N',' ','H','E','Y','D','O','N',',',' ','M','A','T','T','H','E','W',' ','S','M','I','T','H',':',' ','D','e','s','i','g','n'};MYCOPY(dummy78c1fe4b_data_79_542)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_c5_545)}
    {dw tmp999[2]={78,37+linespc};MYCOPY(dummy78c1fe4b_data_c7_546)}
    {char tmp999[41]={'N','I','C','K',' ','M','A','S','C','A','L','L',',',' ','D','A','V','I','D',' ','M','A','R','S','H','A','L','L',':',' ','M','a','n','u','a','l',' ','t','e','x','t'};MYCOPY(dummy78c1fe4b_data_cb_548)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_f4_551)}
    {dw tmp999[2]={48,45+linespc};MYCOPY(dummy78c1fe4b_data_f6_552)}
    {char tmp999[56]={'K','E','R','R','Y',' ','L','E','-','G','R','A','Y',',',' ','W','E','N','D','Y',' ','H','O','S','K','I','N',':',' ','G','r','a','p','h','i','c','s',',',' ','a','r','t','w','o','r','k',' ','&',' ','p','a','c','k','a','g','e'};MYCOPY(dummy78c1fe4b_data_fa_554)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_132_557)}
    {dw tmp999[2]={94,53+linespc};MYCOPY(dummy78c1fe4b_data_134_558)}
    {char tmp999[33]={'D','E','R','R','O','L',' ','E','U','L','I','N','G',':',' ','T','e','c','h','n','i','c','a','l',' ','d','r','a','w','i','n','g','s'};MYCOPY(dummy78c1fe4b_data_138_560)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_159_563)}
    {dw tmp999[2]={64,61+linespc};MYCOPY(dummy78c1fe4b_data_15b_564)}
    {char tmp999[48]={'R','O','D',' ','S','W','I','F','T',',',' ','R','U','S','S','E','L','L',' ','A','L','C','O','C','K',',',' ','J','E','F','F','R','E','Y',' ','L','O','V','E',':',' ','T','e','s','t','i','n','g'};MYCOPY(dummy78c1fe4b_data_15f_566)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_18f_569)}
    {dw tmp999[2]={78,69+linespc};MYCOPY(dummy78c1fe4b_data_191_570)}
    {char tmp999[41]={'R','O','D',' ','C','O','B','A','I','N',',',' ','S','T','E','P','H','A','N','I','E',' ','B','U','R','N','E','T','T',':',' ','P','r','o','d','u','c','t','i','o','n'};MYCOPY(dummy78c1fe4b_data_195_572)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_1be_575)}
    {dw tmp999[2]={110,77+linespc};MYCOPY(dummy78c1fe4b_data_1c0_576)}
    {char tmp999[25]={'D','E','B','B','I','E',' ','D','U','R','R','A','N','T',':',' ','M','a','r','k','e','t','i','n','g'};MYCOPY(dummy78c1fe4b_data_1c4_578)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_1dd_581)}
    {dw tmp999[2]={48,85+linespc};MYCOPY(dummy78c1fe4b_data_1df_582)}
    {char tmp999[56]={'V','I','C','K','I',' ','M','C','B','U','R','N','I','E',',',' ','J','U','L','I','E','-','A','N','N',' ','M','E','R','R','I','T',',',' ','G','I','L','L',' ','N','I','L',':',' ','A','n','c','.',' ','s','u','p','p','o','r','t'};MYCOPY(dummy78c1fe4b_data_1e3_584)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_21b_587)}
    {dw tmp999[2]={120,93+linespc};MYCOPY(dummy78c1fe4b_data_21d_588)}
    {char tmp999[20]={'D','A','V','I','D',' ','W','H','I','T','T','A','K','E','R',':',' ','S','F','X'};MYCOPY(dummy78c1fe4b_data_221_590)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_235_593)}
    {dw tmp999[2]={62,101+linespc};MYCOPY(dummy78c1fe4b_data_237_594)}
    {char tmp999[49]={'D','A','V','I','D',' ','P','U','N','S','H','O','N',',',' ','R','I','C','H','A','R','D',' ','W','E','L','L','S',',',' ','D','O','M','I','N','I','C',' ','K','I','N','G',':',' ','M','u','s','i','c'};MYCOPY(dummy78c1fe4b_data_23b_596)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_26c_599)}
    {dw tmp999[2]={128,109+14+linespc};MYCOPY(dummy78c1fe4b_data_26e_600)}
    {char tmp999[16]={'*','C','O','M','M','U','N','I','T','Y',' ','2','0','1','8','*'};MYCOPY(dummy78c1fe4b_data_272_602)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_282_605)}
    {dw tmp999[2]={66,131+6+linespc};MYCOPY(dummy78c1fe4b_data_284_606)}
    {char tmp999[47]={'F','R','A','N','K','I','E',',',' ','T','A','I','L','F','I','N',',',' ','A','T','A','R','I','B','A','B','Y',',',' ','M','U','P','F',':',' ','M','o','d','s',',',' ','G','i','t','h','u','b'};MYCOPY(dummy78c1fe4b_data_288_608)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_2b7_611)}
    {dw tmp999[2]={110,145+linespc};MYCOPY(dummy78c1fe4b_data_2b9_612)}
    {char tmp999[25]={'S','P','E','E','D','W','A','G','O','N',',',' ','T','O','M','N',':',' ','T','e','s','t','i','n','g'};MYCOPY(dummy78c1fe4b_data_2bd_614)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_2d6_617)}
    {dw tmp999[2]={100,153+linespc};MYCOPY(dummy78c1fe4b_data_2d8_618)}
    {char tmp999[30]={'a','n','d',' ','t','o',' ','m','a','n','y',' ','o','t','h','e','r','s',',',' ','t','h','a','n','k',' ','y','o','u','!'};MYCOPY(dummy78c1fe4b_data_2dc_620)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_2fa_643)}
    {dw tmp999[2]={266,161+linespc+6};MYCOPY(dummy78c1fe4b_data_2fc_644)}
    {char tmp999[12]={'I','n',' ','m','e','m','o','r','y',' ','o','f'};MYCOPY(dummy78c1fe4b_data_300_646)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy78c1fe4b_data_30c_649)}
    {dw tmp999[2]={196,175+8};MYCOPY(dummy78c1fe4b_data_30e_650)}
    {char tmp999[29]={'D','a','v','i','d',' ','K','.',' ','M','a','r','s','h','a','l','l',' ','(','1','9','5','3','-','2','0','1','6',')'};MYCOPY(dummy78c1fe4b_data_312_652)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_debug(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

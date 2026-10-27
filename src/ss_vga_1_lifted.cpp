/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "ss_vga_1.h"

	
	
	#include "ss_vga_1_default_seg_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
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
          void Initializer_ss_vga_1()
          {
              {char tmp999[16]={'V','G','A',' ','S','S','p','r','i','t','e',' ','D','A','T','A'};MYCOPY(sspriteid)}
    {dw tmp999=offset(ssprdata,_huddigit0_0);MYCOPY(dummyd729d0ac_ssprdata_10_82)}
    {dw tmp999=offset(ssprdata,_huddigit0_1);MYCOPY(dummyd729d0ac_ssprdata_12_83)}
    {dw tmp999=offset(ssprdata,_huddigit1_0);MYCOPY(dummyd729d0ac_ssprdata_14_84)}
    {dw tmp999=offset(ssprdata,_huddigit1_1);MYCOPY(dummyd729d0ac_ssprdata_16_85)}
    {dw tmp999=offset(ssprdata,_huddigit2_0);MYCOPY(dummyd729d0ac_ssprdata_18_86)}
    {dw tmp999=offset(ssprdata,_huddigit2_1);MYCOPY(dummyd729d0ac_ssprdata_1a_87)}
    {dw tmp999=offset(ssprdata,_huddigit3_0);MYCOPY(dummyd729d0ac_ssprdata_1c_88)}
    {dw tmp999=offset(ssprdata,_huddigit3_1);MYCOPY(dummyd729d0ac_ssprdata_1e_89)}
    {dw tmp999=offset(ssprdata,_huddigit4_0);MYCOPY(dummyd729d0ac_ssprdata_20_90)}
    {dw tmp999=offset(ssprdata,_huddigit4_1);MYCOPY(dummyd729d0ac_ssprdata_22_91)}
    {dw tmp999=offset(ssprdata,_huddigit5_0);MYCOPY(dummyd729d0ac_ssprdata_24_92)}
    {dw tmp999=offset(ssprdata,_huddigit5_1);MYCOPY(dummyd729d0ac_ssprdata_26_93)}
    {dw tmp999=offset(ssprdata,_huddigit6_0);MYCOPY(dummyd729d0ac_ssprdata_28_94)}
    {dw tmp999=offset(ssprdata,_huddigit6_1);MYCOPY(dummyd729d0ac_ssprdata_2a_95)}
    {dw tmp999=offset(ssprdata,_huddigit7_0);MYCOPY(dummyd729d0ac_ssprdata_2c_96)}
    {dw tmp999=offset(ssprdata,_huddigit7_1);MYCOPY(dummyd729d0ac_ssprdata_2e_97)}
    {dw tmp999=offset(ssprdata,_huddigit8_0);MYCOPY(dummyd729d0ac_ssprdata_30_98)}
    {dw tmp999=offset(ssprdata,_huddigit8_1);MYCOPY(dummyd729d0ac_ssprdata_32_99)}
    {dw tmp999=offset(ssprdata,_huddigit9_0);MYCOPY(dummyd729d0ac_ssprdata_34_100)}
    {dw tmp999=offset(ssprdata,_huddigit9_1);MYCOPY(dummyd729d0ac_ssprdata_36_101)}
    {dw tmp999=65535;MYCOPY(dummyd729d0ac_ssprdata_38_102)}
    {dw tmp999=1;MYCOPY(_huddigit0_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_3c_111)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_3e_112)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_40_113)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_42_114)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_44_115)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_46_117)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_4a_118)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_4e_119)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_52_120)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_56_121)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_5a_122)}
    {dw tmp999=1;MYCOPY(_huddigit0_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_84_127)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_86_128)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_88_129)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_8a_130)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_8c_131)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_8e_133)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_92_134)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_96_135)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_9a_136)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_9e_137)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_a2_138)}
    {dw tmp999=1;MYCOPY(_huddigit1_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_cc_143)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_ce_144)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_d0_145)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_d2_146)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_d4_147)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_d6_149)}
    {db tmp999[4]={133,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_da_150)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_de_151)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_e2_152)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_e6_153)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_ea_154)}
    {dw tmp999=1;MYCOPY(_huddigit1_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_114_159)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_116_160)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_118_161)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_11a_162)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_11c_163)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_11e_165)}
    {db tmp999[4]={3,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_122_166)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_126_167)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_12a_168)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_12e_169)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_132_170)}
    {dw tmp999=1;MYCOPY(_huddigit2_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_15c_175)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_15e_176)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_160_177)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_162_178)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_164_179)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_166_181)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_16a_182)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_16e_183)}
    {db tmp999[4]={133,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_172_184)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_176_185)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_17a_186)}
    {dw tmp999=1;MYCOPY(_huddigit2_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_1a4_191)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_1a6_192)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_1a8_193)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_1aa_194)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_1ac_195)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_1ae_197)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_1b2_198)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_1b6_199)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_1ba_200)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_1be_201)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_1c2_202)}
    {dw tmp999=1;MYCOPY(_huddigit3_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_1ec_207)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_1ee_208)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_1f0_209)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_1f2_210)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_1f4_211)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_1f6_213)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_1fa_214)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_1fe_215)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_202_216)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_206_217)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_20a_218)}
    {dw tmp999=1;MYCOPY(_huddigit3_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_234_223)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_236_224)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_238_225)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_23a_226)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_23c_227)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_23e_229)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_242_230)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_246_231)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_24a_232)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_24e_233)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_252_234)}
    {dw tmp999=1;MYCOPY(_huddigit4_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_27c_239)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_27e_240)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_280_241)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_282_242)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_284_243)}
    {db tmp999[4]={133,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_286_245)}
    {db tmp999[4]={133,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_28a_246)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_28e_247)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_292_248)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_296_249)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_29a_250)}
    {dw tmp999=1;MYCOPY(_huddigit4_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_2c4_255)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_2c6_256)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_2c8_257)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_2ca_258)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_2cc_259)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_2ce_261)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_2d2_262)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_2d6_263)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_2da_264)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_2de_265)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_2e2_266)}
    {dw tmp999=1;MYCOPY(_huddigit5_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_30c_271)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_30e_272)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_310_273)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_312_274)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_314_275)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_316_277)}
    {db tmp999[4]={133,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_31a_278)}
    {db tmp999[4]={133,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_31e_279)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_322_280)}
    {db tmp999[4]={133,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_326_281)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_32a_282)}
    {dw tmp999=1;MYCOPY(_huddigit5_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_354_287)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_356_288)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_358_289)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_35a_290)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_35c_291)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_35e_293)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_362_294)}
    {db tmp999[4]={3,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_366_295)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_36a_296)}
    {db tmp999[4]={3,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_36e_297)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_372_298)}
    {dw tmp999=1;MYCOPY(_huddigit6_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_39c_303)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_39e_304)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_3a0_305)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_3a2_306)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_3a4_307)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_3a6_309)}
    {db tmp999[4]={133,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_3aa_310)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_3ae_311)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_3b2_312)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_3b6_313)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_3ba_314)}
    {dw tmp999=1;MYCOPY(_huddigit6_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_3e4_319)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_3e6_320)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_3e8_321)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_3ea_322)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_3ec_323)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_3ee_325)}
    {db tmp999[4]={3,133,3,3};MYCOPY(dummyd729d0ac_ssprdata_3f2_326)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_3f6_327)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_3fa_328)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_3fe_329)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_402_330)}
    {dw tmp999=1;MYCOPY(_huddigit7_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_42c_335)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_42e_336)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_430_337)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_432_338)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_434_339)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_436_341)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_43a_342)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_43e_343)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_442_344)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_446_345)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_44a_346)}
    {dw tmp999=1;MYCOPY(_huddigit7_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_474_351)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_476_352)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_478_353)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_47a_354)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_47c_355)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_47e_357)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_482_358)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_486_359)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_48a_360)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_48e_361)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_492_362)}
    {dw tmp999=1;MYCOPY(_huddigit8_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_4bc_367)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_4be_368)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_4c0_369)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_4c2_370)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_4c4_371)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_4c6_373)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_4ca_374)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_4ce_375)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_4d2_376)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_4d6_377)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_4da_378)}
    {dw tmp999=1;MYCOPY(_huddigit8_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_504_383)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_506_384)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_508_385)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_50a_386)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_50c_387)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_50e_389)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_512_390)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_516_391)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_51a_392)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_51e_393)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_522_394)}
    {dw tmp999=1;MYCOPY(_huddigit9_0)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_54c_399)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_54e_400)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_550_401)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_552_402)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_554_403)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_556_405)}
    {db tmp999[4]={133,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_55a_406)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_55e_407)}
    {db tmp999[4]={3,3,133,3};MYCOPY(dummyd729d0ac_ssprdata_562_408)}
    {db tmp999[4]={133,133,133,3};MYCOPY(dummyd729d0ac_ssprdata_566_409)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_56a_410)}
    {dw tmp999=1;MYCOPY(_huddigit9_1)}
    {dw tmp999=5;MYCOPY(dummyd729d0ac_ssprdata_594_415)}
    {dw tmp999=1*5;MYCOPY(dummyd729d0ac_ssprdata_596_416)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_598_417)}
    {dw tmp999=65534;MYCOPY(dummyd729d0ac_ssprdata_59a_418)}
    {db tmp999=3;MYCOPY(dummyd729d0ac_ssprdata_59c_419)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_59e_421)}
    {db tmp999[4]={3,133,3,133};MYCOPY(dummyd729d0ac_ssprdata_5a2_422)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_5a6_423)}
    {db tmp999[4]={3,3,3,133};MYCOPY(dummyd729d0ac_ssprdata_5aa_424)}
    {db tmp999[4]={3,133,133,133};MYCOPY(dummyd729d0ac_ssprdata_5ae_425)}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};MYCOPY(dummyd729d0ac_ssprdata_5b2_426)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_ss_vga_1(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

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
              {char tmp999[16]={'V','G','A',' ','S','S','p','r','i','t','e',' ','D','A','T','A'};memcpy(&sspriteid,&tmp999,sizeof tmp999);}
    dummyd729d0ac_ssprdata_10_82 = offset(ssprdata,_huddigit0_0);
    dummyd729d0ac_ssprdata_12_83 = offset(ssprdata,_huddigit0_1);
    dummyd729d0ac_ssprdata_14_84 = offset(ssprdata,_huddigit1_0);
    dummyd729d0ac_ssprdata_16_85 = offset(ssprdata,_huddigit1_1);
    dummyd729d0ac_ssprdata_18_86 = offset(ssprdata,_huddigit2_0);
    dummyd729d0ac_ssprdata_1a_87 = offset(ssprdata,_huddigit2_1);
    dummyd729d0ac_ssprdata_1c_88 = offset(ssprdata,_huddigit3_0);
    dummyd729d0ac_ssprdata_1e_89 = offset(ssprdata,_huddigit3_1);
    dummyd729d0ac_ssprdata_20_90 = offset(ssprdata,_huddigit4_0);
    dummyd729d0ac_ssprdata_22_91 = offset(ssprdata,_huddigit4_1);
    dummyd729d0ac_ssprdata_24_92 = offset(ssprdata,_huddigit5_0);
    dummyd729d0ac_ssprdata_26_93 = offset(ssprdata,_huddigit5_1);
    dummyd729d0ac_ssprdata_28_94 = offset(ssprdata,_huddigit6_0);
    dummyd729d0ac_ssprdata_2a_95 = offset(ssprdata,_huddigit6_1);
    dummyd729d0ac_ssprdata_2c_96 = offset(ssprdata,_huddigit7_0);
    dummyd729d0ac_ssprdata_2e_97 = offset(ssprdata,_huddigit7_1);
    dummyd729d0ac_ssprdata_30_98 = offset(ssprdata,_huddigit8_0);
    dummyd729d0ac_ssprdata_32_99 = offset(ssprdata,_huddigit8_1);
    dummyd729d0ac_ssprdata_34_100 = offset(ssprdata,_huddigit9_0);
    dummyd729d0ac_ssprdata_36_101 = offset(ssprdata,_huddigit9_1);
    dummyd729d0ac_ssprdata_38_102 = 65535;
    _huddigit0_0 = 1;
    dummyd729d0ac_ssprdata_3c_111 = 5;
    dummyd729d0ac_ssprdata_3e_112 = 1*5;
    dummyd729d0ac_ssprdata_40_113 = 65534;
    dummyd729d0ac_ssprdata_42_114 = 65534;
    dummyd729d0ac_ssprdata_44_115 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_46_117,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_4a_118,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_4e_119,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_52_120,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_56_121,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_5a_122,&tmp999,sizeof tmp999);}
    _huddigit0_1 = 1;
    dummyd729d0ac_ssprdata_84_127 = 5;
    dummyd729d0ac_ssprdata_86_128 = 1*5;
    dummyd729d0ac_ssprdata_88_129 = 65534;
    dummyd729d0ac_ssprdata_8a_130 = 65534;
    dummyd729d0ac_ssprdata_8c_131 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_8e_133,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_92_134,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_96_135,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_9a_136,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_9e_137,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_a2_138,&tmp999,sizeof tmp999);}
    _huddigit1_0 = 1;
    dummyd729d0ac_ssprdata_cc_143 = 5;
    dummyd729d0ac_ssprdata_ce_144 = 1*5;
    dummyd729d0ac_ssprdata_d0_145 = 65534;
    dummyd729d0ac_ssprdata_d2_146 = 65534;
    dummyd729d0ac_ssprdata_d4_147 = 3;
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_d6_149,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,3,3};memcpy(&dummyd729d0ac_ssprdata_da_150,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_de_151,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_e2_152,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_e6_153,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_ea_154,&tmp999,sizeof tmp999);}
    _huddigit1_1 = 1;
    dummyd729d0ac_ssprdata_114_159 = 5;
    dummyd729d0ac_ssprdata_116_160 = 1*5;
    dummyd729d0ac_ssprdata_118_161 = 65534;
    dummyd729d0ac_ssprdata_11a_162 = 65534;
    dummyd729d0ac_ssprdata_11c_163 = 3;
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_11e_165,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,3};memcpy(&dummyd729d0ac_ssprdata_122_166,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_126_167,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_12a_168,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_12e_169,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_132_170,&tmp999,sizeof tmp999);}
    _huddigit2_0 = 1;
    dummyd729d0ac_ssprdata_15c_175 = 5;
    dummyd729d0ac_ssprdata_15e_176 = 1*5;
    dummyd729d0ac_ssprdata_160_177 = 65534;
    dummyd729d0ac_ssprdata_162_178 = 65534;
    dummyd729d0ac_ssprdata_164_179 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_166_181,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_16a_182,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_16e_183,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,3,3};memcpy(&dummyd729d0ac_ssprdata_172_184,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_176_185,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_17a_186,&tmp999,sizeof tmp999);}
    _huddigit2_1 = 1;
    dummyd729d0ac_ssprdata_1a4_191 = 5;
    dummyd729d0ac_ssprdata_1a6_192 = 1*5;
    dummyd729d0ac_ssprdata_1a8_193 = 65534;
    dummyd729d0ac_ssprdata_1aa_194 = 65534;
    dummyd729d0ac_ssprdata_1ac_195 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_1ae_197,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_1b2_198,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_1b6_199,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_1ba_200,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_1be_201,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_1c2_202,&tmp999,sizeof tmp999);}
    _huddigit3_0 = 1;
    dummyd729d0ac_ssprdata_1ec_207 = 5;
    dummyd729d0ac_ssprdata_1ee_208 = 1*5;
    dummyd729d0ac_ssprdata_1f0_209 = 65534;
    dummyd729d0ac_ssprdata_1f2_210 = 65534;
    dummyd729d0ac_ssprdata_1f4_211 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_1f6_213,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_1fa_214,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_1fe_215,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_202_216,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_206_217,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_20a_218,&tmp999,sizeof tmp999);}
    _huddigit3_1 = 1;
    dummyd729d0ac_ssprdata_234_223 = 5;
    dummyd729d0ac_ssprdata_236_224 = 1*5;
    dummyd729d0ac_ssprdata_238_225 = 65534;
    dummyd729d0ac_ssprdata_23a_226 = 65534;
    dummyd729d0ac_ssprdata_23c_227 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_23e_229,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_242_230,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_246_231,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_24a_232,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_24e_233,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_252_234,&tmp999,sizeof tmp999);}
    _huddigit4_0 = 1;
    dummyd729d0ac_ssprdata_27c_239 = 5;
    dummyd729d0ac_ssprdata_27e_240 = 1*5;
    dummyd729d0ac_ssprdata_280_241 = 65534;
    dummyd729d0ac_ssprdata_282_242 = 65534;
    dummyd729d0ac_ssprdata_284_243 = 3;
    {db tmp999[4]={133,3,3,3};memcpy(&dummyd729d0ac_ssprdata_286_245,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,3,3};memcpy(&dummyd729d0ac_ssprdata_28a_246,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_28e_247,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_292_248,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_296_249,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_29a_250,&tmp999,sizeof tmp999);}
    _huddigit4_1 = 1;
    dummyd729d0ac_ssprdata_2c4_255 = 5;
    dummyd729d0ac_ssprdata_2c6_256 = 1*5;
    dummyd729d0ac_ssprdata_2c8_257 = 65534;
    dummyd729d0ac_ssprdata_2ca_258 = 65534;
    dummyd729d0ac_ssprdata_2cc_259 = 3;
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_2ce_261,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_2d2_262,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_2d6_263,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_2da_264,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_2de_265,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_2e2_266,&tmp999,sizeof tmp999);}
    _huddigit5_0 = 1;
    dummyd729d0ac_ssprdata_30c_271 = 5;
    dummyd729d0ac_ssprdata_30e_272 = 1*5;
    dummyd729d0ac_ssprdata_310_273 = 65534;
    dummyd729d0ac_ssprdata_312_274 = 65534;
    dummyd729d0ac_ssprdata_314_275 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_316_277,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,3,3};memcpy(&dummyd729d0ac_ssprdata_31a_278,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,3,3};memcpy(&dummyd729d0ac_ssprdata_31e_279,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_322_280,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,3,3};memcpy(&dummyd729d0ac_ssprdata_326_281,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_32a_282,&tmp999,sizeof tmp999);}
    _huddigit5_1 = 1;
    dummyd729d0ac_ssprdata_354_287 = 5;
    dummyd729d0ac_ssprdata_356_288 = 1*5;
    dummyd729d0ac_ssprdata_358_289 = 65534;
    dummyd729d0ac_ssprdata_35a_290 = 65534;
    dummyd729d0ac_ssprdata_35c_291 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_35e_293,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_362_294,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,3};memcpy(&dummyd729d0ac_ssprdata_366_295,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_36a_296,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,3};memcpy(&dummyd729d0ac_ssprdata_36e_297,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_372_298,&tmp999,sizeof tmp999);}
    _huddigit6_0 = 1;
    dummyd729d0ac_ssprdata_39c_303 = 5;
    dummyd729d0ac_ssprdata_39e_304 = 1*5;
    dummyd729d0ac_ssprdata_3a0_305 = 65534;
    dummyd729d0ac_ssprdata_3a2_306 = 65534;
    dummyd729d0ac_ssprdata_3a4_307 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_3a6_309,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,3,3};memcpy(&dummyd729d0ac_ssprdata_3aa_310,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_3ae_311,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_3b2_312,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_3b6_313,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_3ba_314,&tmp999,sizeof tmp999);}
    _huddigit6_1 = 1;
    dummyd729d0ac_ssprdata_3e4_319 = 5;
    dummyd729d0ac_ssprdata_3e6_320 = 1*5;
    dummyd729d0ac_ssprdata_3e8_321 = 65534;
    dummyd729d0ac_ssprdata_3ea_322 = 65534;
    dummyd729d0ac_ssprdata_3ec_323 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_3ee_325,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,3};memcpy(&dummyd729d0ac_ssprdata_3f2_326,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_3f6_327,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_3fa_328,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_3fe_329,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_402_330,&tmp999,sizeof tmp999);}
    _huddigit7_0 = 1;
    dummyd729d0ac_ssprdata_42c_335 = 5;
    dummyd729d0ac_ssprdata_42e_336 = 1*5;
    dummyd729d0ac_ssprdata_430_337 = 65534;
    dummyd729d0ac_ssprdata_432_338 = 65534;
    dummyd729d0ac_ssprdata_434_339 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_436_341,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_43a_342,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_43e_343,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_442_344,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_446_345,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_44a_346,&tmp999,sizeof tmp999);}
    _huddigit7_1 = 1;
    dummyd729d0ac_ssprdata_474_351 = 5;
    dummyd729d0ac_ssprdata_476_352 = 1*5;
    dummyd729d0ac_ssprdata_478_353 = 65534;
    dummyd729d0ac_ssprdata_47a_354 = 65534;
    dummyd729d0ac_ssprdata_47c_355 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_47e_357,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_482_358,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_486_359,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_48a_360,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_48e_361,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_492_362,&tmp999,sizeof tmp999);}
    _huddigit8_0 = 1;
    dummyd729d0ac_ssprdata_4bc_367 = 5;
    dummyd729d0ac_ssprdata_4be_368 = 1*5;
    dummyd729d0ac_ssprdata_4c0_369 = 65534;
    dummyd729d0ac_ssprdata_4c2_370 = 65534;
    dummyd729d0ac_ssprdata_4c4_371 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_4c6_373,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_4ca_374,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_4ce_375,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_4d2_376,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_4d6_377,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_4da_378,&tmp999,sizeof tmp999);}
    _huddigit8_1 = 1;
    dummyd729d0ac_ssprdata_504_383 = 5;
    dummyd729d0ac_ssprdata_506_384 = 1*5;
    dummyd729d0ac_ssprdata_508_385 = 65534;
    dummyd729d0ac_ssprdata_50a_386 = 65534;
    dummyd729d0ac_ssprdata_50c_387 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_50e_389,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_512_390,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_516_391,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_51a_392,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_51e_393,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_522_394,&tmp999,sizeof tmp999);}
    _huddigit9_0 = 1;
    dummyd729d0ac_ssprdata_54c_399 = 5;
    dummyd729d0ac_ssprdata_54e_400 = 1*5;
    dummyd729d0ac_ssprdata_550_401 = 65534;
    dummyd729d0ac_ssprdata_552_402 = 65534;
    dummyd729d0ac_ssprdata_554_403 = 3;
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_556_405,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,3,133,3};memcpy(&dummyd729d0ac_ssprdata_55a_406,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_55e_407,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,133,3};memcpy(&dummyd729d0ac_ssprdata_562_408,&tmp999,sizeof tmp999);}
    {db tmp999[4]={133,133,133,3};memcpy(&dummyd729d0ac_ssprdata_566_409,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_56a_410,&tmp999,sizeof tmp999);}
    _huddigit9_1 = 1;
    dummyd729d0ac_ssprdata_594_415 = 5;
    dummyd729d0ac_ssprdata_596_416 = 1*5;
    dummyd729d0ac_ssprdata_598_417 = 65534;
    dummyd729d0ac_ssprdata_59a_418 = 65534;
    dummyd729d0ac_ssprdata_59c_419 = 3;
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_59e_421,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,3,133};memcpy(&dummyd729d0ac_ssprdata_5a2_422,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_5a6_423,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,3,3,133};memcpy(&dummyd729d0ac_ssprdata_5aa_424,&tmp999,sizeof tmp999);}
    {db tmp999[4]={3,133,133,133};memcpy(&dummyd729d0ac_ssprdata_5ae_425,&tmp999,sizeof tmp999);}
    {db tmp999[40]={3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};memcpy(&dummyd729d0ac_ssprdata_5b2_426,&tmp999,sizeof tmp999);}

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
        

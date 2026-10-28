/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "mathfunc.h"

	
 __attribute__((weak)) bool calcdeltatime(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcdeltatime, _state);}

 __attribute__((weak)) bool calcdeltaxy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcdeltaxy, _state);}

 __attribute__((weak)) bool sqrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrt, _state);}

 __attribute__((weak)) bool sqrt32(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrt32, _state);}

 static bool sqrt32exit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrt32exit, _state);}

 static bool sqrt32loop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrt32loop1, _state);}

 static bool sqrt32loop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrt32loop2, _state);}

 static bool sqrt32result(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrt32result, _state);}

 static bool sqrtexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksqrtexit, _state);}

 static bool timeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktimeok, _state);}

	
	#include "mathfunc_default_seg_lifted.cpp"
#include "mathfunc_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcalcdeltatime: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcdeltaxy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::ksqrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksqrt32: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksqrt32exit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksqrt32loop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksqrt32loop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksqrt32result: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksqrtexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktimeok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_mathfunc()
          {
              deltatime = 3277;
    deltatable = 0;
    dummy526b9c98_data_4_217 = 328;
    dummy526b9c98_data_6_218 = 655;
    dummy526b9c98_data_8_219 = 983;
    dummy526b9c98_data_a_220 = 1311;
    dummy526b9c98_data_c_221 = 1638;
    dummy526b9c98_data_e_222 = 1966;
    dummy526b9c98_data_10_223 = 2294;
    dummy526b9c98_data_12_224 = 2621;
    dummy526b9c98_data_14_225 = 2949;
    dummy526b9c98_data_16_226 = 3277;
    dummy526b9c98_data_18_227 = 3604;
    dummy526b9c98_data_1a_228 = 3932;
    dummy526b9c98_data_1c_229 = 4260;
    dummy526b9c98_data_1e_230 = 4587;
    dummy526b9c98_data_20_231 = 4915;
    dummy526b9c98_data_22_232 = 5243;
    dummy526b9c98_data_24_233 = 5570;
    dummy526b9c98_data_26_234 = 5898;
    dummy526b9c98_data_28_235 = 6226;
    dummy526b9c98_data_2a_236 = 6553;
    dummy526b9c98_data_2c_237 = 6881;
    dummy526b9c98_data_2e_238 = 7209;
    dummy526b9c98_data_30_239 = 7536;
    dummy526b9c98_data_32_240 = 7864;
    dummy526b9c98_data_34_241 = 8192;
    dummy526b9c98_data_36_242 = 8519;
    dummy526b9c98_data_38_243 = 8847;
    dummy526b9c98_data_3a_244 = 9175;
    dummy526b9c98_data_3c_245 = 9502;
    dummy526b9c98_data_3e_246 = 9830;
    dummy526b9c98_data_40_247 = 10158;
    dummy526b9c98_data_42_248 = 10485;
    dummy526b9c98_data_44_249 = 10813;
    dummy526b9c98_data_46_250 = 11141;
    dummy526b9c98_data_48_251 = 11468;
    dummy526b9c98_data_4a_252 = 11796;
    dummy526b9c98_data_4c_253 = 12124;
    dummy526b9c98_data_4e_254 = 12451;
    dummy526b9c98_data_50_255 = 12779;
    dummy526b9c98_data_52_256 = 13107;
    dummy526b9c98_data_54_257 = 13434;
    dummy526b9c98_data_56_258 = 13762;
    dummy526b9c98_data_58_259 = 14090;
    dummy526b9c98_data_5a_260 = 14417;
    dummy526b9c98_data_5c_261 = 14745;
    dummy526b9c98_data_5e_262 = 15073;
    dummy526b9c98_data_60_263 = 15400;
    dummy526b9c98_data_62_264 = 15728;
    dummy526b9c98_data_64_265 = 16056;
    dummy526b9c98_data_66_266 = 16384;
    dummy526b9c98_data_68_267 = 16711;
    dummy526b9c98_data_6a_268 = 17039;
    dummy526b9c98_data_6c_269 = 17367;
    dummy526b9c98_data_6e_270 = 17694;
    dummy526b9c98_data_70_271 = 18022;
    dummy526b9c98_data_72_272 = 18350;
    dummy526b9c98_data_74_273 = 18677;
    dummy526b9c98_data_76_274 = 19005;
    dummy526b9c98_data_78_275 = 19333;
    dummy526b9c98_data_7a_276 = 19660;
    dummy526b9c98_data_7c_277 = 19988;
    dummy526b9c98_data_7e_278 = 20316;
    dummy526b9c98_data_80_279 = 20643;
    dummy526b9c98_data_82_280 = 20971;
    dummy526b9c98_data_84_281 = 21299;
    dummy526b9c98_data_86_282 = 21626;
    dummy526b9c98_data_88_283 = 21954;
    dummy526b9c98_data_8a_284 = 22282;
    dummy526b9c98_data_8c_285 = 22609;
    dummy526b9c98_data_8e_286 = 22937;
    dummy526b9c98_data_90_287 = 23265;
    dummy526b9c98_data_92_288 = 23592;
    dummy526b9c98_data_94_289 = 23920;
    dummy526b9c98_data_96_290 = 24248;
    dummy526b9c98_data_98_291 = 24575;
    dummy526b9c98_data_9a_292 = 24903;
    dummy526b9c98_data_9c_293 = 25231;
    dummy526b9c98_data_9e_294 = 25558;
    dummy526b9c98_data_a0_295 = 25886;
    dummy526b9c98_data_a2_296 = 26214;
    dummy526b9c98_data_a4_297 = 26541;
    dummy526b9c98_data_a6_298 = 26869;
    dummy526b9c98_data_a8_299 = 27197;
    dummy526b9c98_data_aa_300 = 27524;
    dummy526b9c98_data_ac_301 = 27852;
    dummy526b9c98_data_ae_302 = 28180;
    dummy526b9c98_data_b0_303 = 28507;
    dummy526b9c98_data_b2_304 = 28835;
    dummy526b9c98_data_b4_305 = 29163;
    dummy526b9c98_data_b6_306 = 29490;
    dummy526b9c98_data_b8_307 = 29818;
    dummy526b9c98_data_ba_308 = 30146;
    dummy526b9c98_data_bc_309 = 30473;
    dummy526b9c98_data_be_310 = 30801;
    dummy526b9c98_data_c0_311 = 31129;
    dummy526b9c98_data_c2_312 = 31456;
    dummy526b9c98_data_c4_313 = 31784;
    dummy526b9c98_data_c6_314 = 32112;
    dummy526b9c98_data_c8_315 = 32439;
    dummy526b9c98_data_ca_316 = 32767;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_mathfunc(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

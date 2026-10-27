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
              {dw tmp999=3277;MYCOPY(deltatime)}
    {dw tmp999=0;MYCOPY(deltatable)}
    {dw tmp999=328;MYCOPY(dummy526b9c98_data_4_217)}
    {dw tmp999=655;MYCOPY(dummy526b9c98_data_6_218)}
    {dw tmp999=983;MYCOPY(dummy526b9c98_data_8_219)}
    {dw tmp999=1311;MYCOPY(dummy526b9c98_data_a_220)}
    {dw tmp999=1638;MYCOPY(dummy526b9c98_data_c_221)}
    {dw tmp999=1966;MYCOPY(dummy526b9c98_data_e_222)}
    {dw tmp999=2294;MYCOPY(dummy526b9c98_data_10_223)}
    {dw tmp999=2621;MYCOPY(dummy526b9c98_data_12_224)}
    {dw tmp999=2949;MYCOPY(dummy526b9c98_data_14_225)}
    {dw tmp999=3277;MYCOPY(dummy526b9c98_data_16_226)}
    {dw tmp999=3604;MYCOPY(dummy526b9c98_data_18_227)}
    {dw tmp999=3932;MYCOPY(dummy526b9c98_data_1a_228)}
    {dw tmp999=4260;MYCOPY(dummy526b9c98_data_1c_229)}
    {dw tmp999=4587;MYCOPY(dummy526b9c98_data_1e_230)}
    {dw tmp999=4915;MYCOPY(dummy526b9c98_data_20_231)}
    {dw tmp999=5243;MYCOPY(dummy526b9c98_data_22_232)}
    {dw tmp999=5570;MYCOPY(dummy526b9c98_data_24_233)}
    {dw tmp999=5898;MYCOPY(dummy526b9c98_data_26_234)}
    {dw tmp999=6226;MYCOPY(dummy526b9c98_data_28_235)}
    {dw tmp999=6553;MYCOPY(dummy526b9c98_data_2a_236)}
    {dw tmp999=6881;MYCOPY(dummy526b9c98_data_2c_237)}
    {dw tmp999=7209;MYCOPY(dummy526b9c98_data_2e_238)}
    {dw tmp999=7536;MYCOPY(dummy526b9c98_data_30_239)}
    {dw tmp999=7864;MYCOPY(dummy526b9c98_data_32_240)}
    {dw tmp999=8192;MYCOPY(dummy526b9c98_data_34_241)}
    {dw tmp999=8519;MYCOPY(dummy526b9c98_data_36_242)}
    {dw tmp999=8847;MYCOPY(dummy526b9c98_data_38_243)}
    {dw tmp999=9175;MYCOPY(dummy526b9c98_data_3a_244)}
    {dw tmp999=9502;MYCOPY(dummy526b9c98_data_3c_245)}
    {dw tmp999=9830;MYCOPY(dummy526b9c98_data_3e_246)}
    {dw tmp999=10158;MYCOPY(dummy526b9c98_data_40_247)}
    {dw tmp999=10485;MYCOPY(dummy526b9c98_data_42_248)}
    {dw tmp999=10813;MYCOPY(dummy526b9c98_data_44_249)}
    {dw tmp999=11141;MYCOPY(dummy526b9c98_data_46_250)}
    {dw tmp999=11468;MYCOPY(dummy526b9c98_data_48_251)}
    {dw tmp999=11796;MYCOPY(dummy526b9c98_data_4a_252)}
    {dw tmp999=12124;MYCOPY(dummy526b9c98_data_4c_253)}
    {dw tmp999=12451;MYCOPY(dummy526b9c98_data_4e_254)}
    {dw tmp999=12779;MYCOPY(dummy526b9c98_data_50_255)}
    {dw tmp999=13107;MYCOPY(dummy526b9c98_data_52_256)}
    {dw tmp999=13434;MYCOPY(dummy526b9c98_data_54_257)}
    {dw tmp999=13762;MYCOPY(dummy526b9c98_data_56_258)}
    {dw tmp999=14090;MYCOPY(dummy526b9c98_data_58_259)}
    {dw tmp999=14417;MYCOPY(dummy526b9c98_data_5a_260)}
    {dw tmp999=14745;MYCOPY(dummy526b9c98_data_5c_261)}
    {dw tmp999=15073;MYCOPY(dummy526b9c98_data_5e_262)}
    {dw tmp999=15400;MYCOPY(dummy526b9c98_data_60_263)}
    {dw tmp999=15728;MYCOPY(dummy526b9c98_data_62_264)}
    {dw tmp999=16056;MYCOPY(dummy526b9c98_data_64_265)}
    {dw tmp999=16384;MYCOPY(dummy526b9c98_data_66_266)}
    {dw tmp999=16711;MYCOPY(dummy526b9c98_data_68_267)}
    {dw tmp999=17039;MYCOPY(dummy526b9c98_data_6a_268)}
    {dw tmp999=17367;MYCOPY(dummy526b9c98_data_6c_269)}
    {dw tmp999=17694;MYCOPY(dummy526b9c98_data_6e_270)}
    {dw tmp999=18022;MYCOPY(dummy526b9c98_data_70_271)}
    {dw tmp999=18350;MYCOPY(dummy526b9c98_data_72_272)}
    {dw tmp999=18677;MYCOPY(dummy526b9c98_data_74_273)}
    {dw tmp999=19005;MYCOPY(dummy526b9c98_data_76_274)}
    {dw tmp999=19333;MYCOPY(dummy526b9c98_data_78_275)}
    {dw tmp999=19660;MYCOPY(dummy526b9c98_data_7a_276)}
    {dw tmp999=19988;MYCOPY(dummy526b9c98_data_7c_277)}
    {dw tmp999=20316;MYCOPY(dummy526b9c98_data_7e_278)}
    {dw tmp999=20643;MYCOPY(dummy526b9c98_data_80_279)}
    {dw tmp999=20971;MYCOPY(dummy526b9c98_data_82_280)}
    {dw tmp999=21299;MYCOPY(dummy526b9c98_data_84_281)}
    {dw tmp999=21626;MYCOPY(dummy526b9c98_data_86_282)}
    {dw tmp999=21954;MYCOPY(dummy526b9c98_data_88_283)}
    {dw tmp999=22282;MYCOPY(dummy526b9c98_data_8a_284)}
    {dw tmp999=22609;MYCOPY(dummy526b9c98_data_8c_285)}
    {dw tmp999=22937;MYCOPY(dummy526b9c98_data_8e_286)}
    {dw tmp999=23265;MYCOPY(dummy526b9c98_data_90_287)}
    {dw tmp999=23592;MYCOPY(dummy526b9c98_data_92_288)}
    {dw tmp999=23920;MYCOPY(dummy526b9c98_data_94_289)}
    {dw tmp999=24248;MYCOPY(dummy526b9c98_data_96_290)}
    {dw tmp999=24575;MYCOPY(dummy526b9c98_data_98_291)}
    {dw tmp999=24903;MYCOPY(dummy526b9c98_data_9a_292)}
    {dw tmp999=25231;MYCOPY(dummy526b9c98_data_9c_293)}
    {dw tmp999=25558;MYCOPY(dummy526b9c98_data_9e_294)}
    {dw tmp999=25886;MYCOPY(dummy526b9c98_data_a0_295)}
    {dw tmp999=26214;MYCOPY(dummy526b9c98_data_a2_296)}
    {dw tmp999=26541;MYCOPY(dummy526b9c98_data_a4_297)}
    {dw tmp999=26869;MYCOPY(dummy526b9c98_data_a6_298)}
    {dw tmp999=27197;MYCOPY(dummy526b9c98_data_a8_299)}
    {dw tmp999=27524;MYCOPY(dummy526b9c98_data_aa_300)}
    {dw tmp999=27852;MYCOPY(dummy526b9c98_data_ac_301)}
    {dw tmp999=28180;MYCOPY(dummy526b9c98_data_ae_302)}
    {dw tmp999=28507;MYCOPY(dummy526b9c98_data_b0_303)}
    {dw tmp999=28835;MYCOPY(dummy526b9c98_data_b2_304)}
    {dw tmp999=29163;MYCOPY(dummy526b9c98_data_b4_305)}
    {dw tmp999=29490;MYCOPY(dummy526b9c98_data_b6_306)}
    {dw tmp999=29818;MYCOPY(dummy526b9c98_data_b8_307)}
    {dw tmp999=30146;MYCOPY(dummy526b9c98_data_ba_308)}
    {dw tmp999=30473;MYCOPY(dummy526b9c98_data_bc_309)}
    {dw tmp999=30801;MYCOPY(dummy526b9c98_data_be_310)}
    {dw tmp999=31129;MYCOPY(dummy526b9c98_data_c0_311)}
    {dw tmp999=31456;MYCOPY(dummy526b9c98_data_c2_312)}
    {dw tmp999=31784;MYCOPY(dummy526b9c98_data_c4_313)}
    {dw tmp999=32112;MYCOPY(dummy526b9c98_data_c6_314)}
    {dw tmp999=32439;MYCOPY(dummy526b9c98_data_c8_315)}
    {dw tmp999=32767;MYCOPY(dummy526b9c98_data_ca_316)}

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
        

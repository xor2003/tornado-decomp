/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "smoke.h"

	
 __attribute__((weak)) bool checkairpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckairpos, _state);}

 __attribute__((weak)) bool ctrlair1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlair1, _state);}

 __attribute__((weak)) bool ctrlgnd1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlgnd1, _state);}

 __attribute__((weak)) bool ctrlnull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlnull, _state);}

 __attribute__((weak)) bool initair1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitair1, _state);}

 __attribute__((weak)) bool initgnd1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitgnd1, _state);}

 static bool makesinglesmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmakesinglesmoke, _state);}

 __attribute__((weak)) bool makesmokeeffect(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmakesmokeeffect, _state);}

 __attribute__((weak)) bool scansmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscansmoke, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 static bool __m2c_macrolocal_8_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_8_skip, _state);}

 static bool __m2c_macrolocal_9_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_9_skip, _state);}

 static bool addsmokeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaddsmokeloop, _state);}

 static bool air1phase1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kair1phase1, _state);}

 static bool air1phase2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kair1phase2, _state);}

 static bool airsmokeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairsmokeloop, _state);}

 static bool exitairpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitairpos, _state);}

 static bool gnd1phase1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgnd1phase1, _state);}

 static bool gnd1phase2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgnd1phase2, _state);}

 static bool initair1exit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitair1exit, _state);}

 __attribute__((weak)) bool initairexplo(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitairexplo, _state);}

 __attribute__((weak)) bool initairtrail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitairtrail, _state);}

 __attribute__((weak)) bool initburning(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitburning, _state);}

 __attribute__((weak)) bool initcrater1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitcrater1, _state);}

 __attribute__((weak)) bool initcrater2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitcrater2, _state);}

 __attribute__((weak)) bool initcrater3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitcrater3, _state);}

 static bool initgnd1exit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitgnd1exit, _state);}

 __attribute__((weak)) bool initkickup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitkickup, _state);}

 static bool nextsmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextsmoke, _state);}

 static bool setminsize(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetminsize, _state);}

 static bool skiprepro(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprepro, _state);}

 static bool smokeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksmokeloop, _state);}

 static bool sortsmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsmoke, _state);}

	
	#include "smoke_default_seg_lifted.cpp"
#include "smoke_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_8_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_9_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaddsmokeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kair1phase1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kair1phase2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairsmokeloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
        case m2c::kcheckairpos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlair1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlgnd1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlnull: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawsmoke
        case m2c::kdrawsmoke: 	if (!drawsmoke(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitairpos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgnd1phase1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgnd1phase2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitair1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitair1exit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitairexplo: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitairtrail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitburning: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitcrater1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitcrater2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitcrater3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitgnd1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitgnd1exit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitkickup: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmakesinglesmoke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmakesmokeeffect: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextsmoke: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
        case m2c::kscansmoke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetminsize: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprepro: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksmokeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsmoke: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_smoke()
          {
              nextsmokeptr = offset(smokedata,smokebuffer);
    tmp_smoke = smoke{stype_null,0,0,0,0,0,0,0,0,0,0,0,0};
    initsmoke = m2c::kglobal_initcrater1;
    dummyf03cce71_data_1e_808 = m2c::kglobal_initcrater2;
    dummyf03cce71_data_20_809 = m2c::kglobal_initcrater3;
    dummyf03cce71_data_22_810 = m2c::kglobal_initburning;
    dummyf03cce71_data_24_811 = m2c::kglobal_initkickup;
    dummyf03cce71_data_26_812 = m2c::kglobal_initairexplo;
    dummyf03cce71_data_28_813 = m2c::kglobal_initairtrail;
    ctrlsmoke = m2c::kglobal_ctrlnull;
    dummyf03cce71_data_2c_817 = m2c::kglobal_ctrlgnd1;
    dummyf03cce71_data_2e_818 = m2c::kglobal_ctrlair1;
    {smoke tmp999[128]={{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0},{stype_null,0,0,0,0,0,0,0,0,0,0,0,0}};memcpy(&__m2c_structrow_f03cce71_826,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_smoke(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

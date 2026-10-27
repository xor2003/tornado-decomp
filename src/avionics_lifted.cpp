/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "avionics.h"

	
 __attribute__((weak)) bool advancewp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadvancewp, _state);}

 __attribute__((weak)) bool aircraftradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaircraftradar, _state);}

 __attribute__((weak)) bool autoaltitude(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoaltitude, _state);}

 __attribute__((weak)) bool autoapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoapproach, _state);}

 __attribute__((weak)) bool autocancel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautocancel, _state);}

 __attribute__((weak)) bool autoheading(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoheading, _state);}

 __attribute__((weak)) bool autopilot(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautopilot, _state);}

 __attribute__((weak)) bool autoroute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoroute, _state);}

 __attribute__((weak)) bool autothrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautothrottle, _state);}

 __attribute__((weak)) bool boresight(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kboresight, _state);}

 __attribute__((weak)) bool calcnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnextwp, _state);}

 __attribute__((weak)) bool calcradalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcradalt, _state);}

 __attribute__((weak)) bool calctfrideindex(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalctfrideindex, _state);}

 __attribute__((weak)) bool calcturndist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcturndist, _state);}

 __attribute__((weak)) bool calcvfactor(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcvfactor, _state);}

 __attribute__((weak)) bool canceltgtwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcanceltgtwp, _state);}

 __attribute__((weak)) bool checkils(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckils, _state);}

 __attribute__((weak)) bool cycletargets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcycletargets, _state);}

 static bool modcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmodcode_0_proc, _state);}

 __attribute__((weak)) bool radshadcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradshadcheck, _state);}

 __attribute__((weak)) bool scanaaa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanaaa, _state);}

 __attribute__((weak)) bool scanac(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanac, _state);}

 __attribute__((weak)) bool scanairfields(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanairfields, _state);}

 __attribute__((weak)) bool scanewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanewr, _state);}

 __attribute__((weak)) bool scangndheight(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscangndheight, _state);}

 __attribute__((weak)) bool scanmsl(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmsl, _state);}

 __attribute__((weak)) bool scansam(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscansam, _state);}

 __attribute__((weak)) bool selectnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectnextwp, _state);}

 __attribute__((weak)) bool selecttgtwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselecttgtwp, _state);}

 __attribute__((weak)) bool shadowcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshadowcheck, _state);}

 __attribute__((weak)) bool sortwpalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortwpalt, _state);}

 __attribute__((weak)) bool terrainfollow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kterrainfollow, _state);}

 __attribute__((weak)) bool trackmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktrackmobile, _state);}

 __attribute__((weak)) bool updateairradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateairradar, _state);}

 __attribute__((weak)) bool updateappprog(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateappprog, _state);}

 __attribute__((weak)) bool updateavionics(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateavionics, _state);}

 __attribute__((weak)) bool updateclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateclock, _state);}

 __attribute__((weak)) bool updateils(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateils, _state);}

 __attribute__((weak)) bool updatenavsystem(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatenavsystem, _state);}

 __attribute__((weak)) bool updateradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateradar, _state);}

 static bool updaterwr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdaterwr, _state);}

 __attribute__((weak)) bool updatetgtwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatetgtwp, _state);}

 __attribute__((weak)) bool updatewpdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatewpdata, _state);}

 static bool __m2c_macrolocal_101_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_101_skip, _state);}

 static bool __m2c_macrolocal_102_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_102_skip, _state);}

 static bool __m2c_macrolocal_103_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_103_skip, _state);}

 static bool __m2c_macrolocal_105_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_105_skip, _state);}

 static bool __m2c_macrolocal_106_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_106_skip, _state);}

 static bool __m2c_macrolocal_107_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_107_skip, _state);}

 static bool __m2c_macrolocal_111_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_111_skip, _state);}

 static bool __m2c_macrolocal_112_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_112_skip, _state);}

 static bool __m2c_macrolocal_114_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_114_skip, _state);}

 static bool __m2c_macrolocal_115_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_115_skip, _state);}

 static bool __m2c_macrolocal_116_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_116_skip, _state);}

 static bool __m2c_macrolocal_117_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_117_skip, _state);}

 static bool __m2c_macrolocal_119_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_119_skip, _state);}

 static bool __m2c_macrolocal_120_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_120_skip, _state);}

 static bool __m2c_macrolocal_121_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_121_skip, _state);}

 static bool __m2c_macrolocal_122_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_122_skip, _state);}

 static bool __m2c_macrolocal_124_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_124_skip, _state);}

 static bool __m2c_macrolocal_125_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_125_skip, _state);}

 static bool __m2c_macrolocal_126_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_126_skip, _state);}

 static bool __m2c_macrolocal_127_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_127_skip, _state);}

 static bool __m2c_macrolocal_128_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_128_skip, _state);}

 static bool __m2c_macrolocal_129_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_129_skip, _state);}

 static bool __m2c_macrolocal_130_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_130_skip, _state);}

 static bool __m2c_macrolocal_131_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_131_skip, _state);}

 static bool __m2c_macrolocal_133_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_133_skip, _state);}

 static bool __m2c_macrolocal_134_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_134_skip, _state);}

 static bool __m2c_macrolocal_135_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_135_skip, _state);}

 static bool __m2c_macrolocal_136_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_136_skip, _state);}

 static bool __m2c_macrolocal_16_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_testhi, _state);}

 static bool __m2c_macrolocal_16_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_testok, _state);}

 static bool __m2c_macrolocal_18_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_18_skip, _state);}

 static bool __m2c_macrolocal_19_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_skip, _state);}

 static bool __m2c_macrolocal_1_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_testhi, _state);}

 static bool __m2c_macrolocal_1_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_testok, _state);}

 static bool __m2c_macrolocal_20_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_20_testhi, _state);}

 static bool __m2c_macrolocal_20_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_20_testok, _state);}

 static bool __m2c_macrolocal_29_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_29_skip, _state);}

 static bool __m2c_macrolocal_30_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_30_skip, _state);}

 static bool __m2c_macrolocal_31_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_skip, _state);}

 static bool __m2c_macrolocal_32_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_32_skip, _state);}

 static bool __m2c_macrolocal_33_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_33_skip, _state);}

 static bool __m2c_macrolocal_34_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_skip, _state);}

 static bool __m2c_macrolocal_36_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_36_skip, _state);}

 static bool __m2c_macrolocal_37_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_37_skip, _state);}

 static bool __m2c_macrolocal_38_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_38_skip, _state);}

 static bool __m2c_macrolocal_39_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_39_skip, _state);}

 static bool __m2c_macrolocal_43_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_43_skip, _state);}

 static bool __m2c_macrolocal_46_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_46_testhi, _state);}

 static bool __m2c_macrolocal_46_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_46_testok, _state);}

 static bool __m2c_macrolocal_49_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_49_testhi, _state);}

 static bool __m2c_macrolocal_49_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_49_testok, _state);}

 static bool __m2c_macrolocal_56_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_56_skip, _state);}

 static bool __m2c_macrolocal_57_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_57_skip, _state);}

 static bool __m2c_macrolocal_58_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_58_skip, _state);}

 static bool __m2c_macrolocal_59_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_59_skip, _state);}

 static bool __m2c_macrolocal_60_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_60_skip, _state);}

 static bool __m2c_macrolocal_61_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_61_skip, _state);}

 static bool __m2c_macrolocal_63_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_63_skip, _state);}

 static bool __m2c_macrolocal_64_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_64_skip, _state);}

 static bool __m2c_macrolocal_68_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_68_testhi, _state);}

 static bool __m2c_macrolocal_68_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_68_testok, _state);}

 static bool __m2c_macrolocal_6_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_mvxy1, _state);}

 static bool __m2c_macrolocal_6_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_mvxy2, _state);}

 static bool __m2c_macrolocal_6_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_mvxy3, _state);}

 static bool __m2c_macrolocal_6_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_mvxy4, _state);}

 static bool __m2c_macrolocal_71_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_71_skip, _state);}

 static bool __m2c_macrolocal_72_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_72_skip, _state);}

 static bool __m2c_macrolocal_73_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_73_testhi, _state);}

 static bool __m2c_macrolocal_73_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_73_testok, _state);}

 static bool __m2c_macrolocal_74_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_74_testhi, _state);}

 static bool __m2c_macrolocal_74_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_74_testok, _state);}

 static bool __m2c_macrolocal_75_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_75_skip, _state);}

 static bool __m2c_macrolocal_76_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_76_skip, _state);}

 static bool __m2c_macrolocal_77_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_77_skip, _state);}

 static bool __m2c_macrolocal_78_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_78_skip, _state);}

 static bool __m2c_macrolocal_97_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_97_skip, _state);}

 static bool aaanextsctr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaanextsctr, _state);}

 static bool aaaxloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaaxloop, _state);}

 static bool aaayloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaayloop, _state);}

 static bool aaexit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaexit1, _state);}

 static bool aaexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaexit2, _state);}

 static bool aaexit3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaexit3, _state);}

 static bool adcok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadcok, _state);}

 static bool adjusthdg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadjusthdg, _state);}

 static bool advanceok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadvanceok, _state);}

 static bool afloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kafloop, _state);}

 static bool ahexit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kahexit1, _state);}

 static bool ahexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kahexit2, _state);}

 static bool airtgtdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairtgtdata, _state);}

 static bool altok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltok, _state);}

 static bool appexit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kappexit1, _state);}

 static bool appexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kappexit2, _state);}

 static bool atexit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::katexit1, _state);}

 static bool atexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::katexit2, _state);}

 static bool autothrotok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautothrotok, _state);}

 static bool calczerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalczerror, _state);}

 static bool checkalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckalt, _state);}

 static bool checklaststep(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchecklaststep, _state);}

 static bool clockok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclockok, _state);}

 static bool contairradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontairradar, _state);}

 static bool contautopilot(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontautopilot, _state);}

 static bool contconeelev(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontconeelev, _state);}

 static bool contheading(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontheading, _state);}

 static bool continhibit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontinhibit, _state);}

 static bool controute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontroute, _state);}

 static bool contshadow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontshadow, _state);}

 static bool contsortslope(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontsortslope, _state);}

 static bool contthrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontthrottle, _state);}

 static bool conttrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconttrack, _state);}

 static bool cycleloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcycleloop, _state);}

 static bool cycleok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcycleok, _state);}

 static bool endscan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kendscan, _state);}

 static bool ewrdead(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kewrdead, _state);}

 static bool ewrok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kewrok, _state);}

 static bool exitacradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitacradar, _state);}

 static bool exitairradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitairradar, _state);}

 static bool exitappprog(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitappprog, _state);}

 static bool exitautopilot(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitautopilot, _state);}

 static bool exitautoroute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitautoroute, _state);}

 static bool exitcancelwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitcancelwp, _state);}

 static bool exitcycle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitcycle, _state);}

 static bool exitewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitewr, _state);}

 static bool exitils(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitils, _state);}

 static bool exitnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitnextwp, _state);}

 static bool exitrwr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitrwr, _state);}

 static bool exitselectwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitselectwp, _state);}

 static bool exitthrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitthrottle, _state);}

 static bool exittrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittrack, _state);}

 static bool exitupdatewp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitupdatewp, _state);}

 static bool exitwpalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitwpalt, _state);}

 static bool findfirstloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindfirstloop, _state);}

 static bool findnextloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindnextloop, _state);}

 static bool ilsfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kilsfail, _state);}

 static bool ilsok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kilsok, _state);}

 static bool inilsbeam(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinilsbeam, _state);}

 static bool initdownslope(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitdownslope, _state);}

 static bool initslope(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitslope, _state);}

 static bool longrangecheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klongrangecheck, _state);}

 static bool losttrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klosttrack, _state);}

 static bool maxrollangle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmaxrollangle, _state);}

 static bool maxthrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmaxthrottle, _state);}

 static bool medrangecheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmedrangecheck, _state);}

 static bool minthrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kminthrottle, _state);}

 static bool missilelocated(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissilelocated, _state);}

 static bool missilescan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissilescan, _state);}

 static bool nextaf(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextaf, _state);}

 static bool nexttarget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knexttarget, _state);}

 static bool nextweapon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextweapon, _state);}

 static bool radarnonvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradarnonvis, _state);}

 static bool radarok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradarok, _state);}

 static bool radarvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradarvis, _state);}

 static bool radnonvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradnonvis, _state);}

 static bool radshadloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradshadloop, _state);}

 static bool radvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradvis, _state);}

 static bool samnextsctr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksamnextsctr, _state);}

 static bool samxloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksamxloop, _state);}

 static bool samyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksamyloop, _state);}

 static bool satisfiedwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksatisfiedwp, _state);}

 static bool scanaaaloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanaaaloop, _state);}

 static bool scanafloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanafloop, _state);}

 static bool scangndhtloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscangndhtloop, _state);}

 static bool scanmobiles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmobiles, _state);}

 static bool scansamloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscansamloop, _state);}

 static bool scanxloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanxloop, _state);}

 static bool scanyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanyloop, _state);}

 static bool setaimhfine(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetaimhfine, _state);}

 static bool setaptimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetaptimer, _state);}

 static bool setpitchlimit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpitchlimit, _state);}

 static bool settdist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksettdist, _state);}

 static bool settel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksettel, _state);}

 static bool shadowloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshadowloop, _state);}

 static bool shortrangecheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortrangecheck, _state);}

 static bool skipaaa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipaaa, _state);}

 static bool skipappinit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipappinit, _state);}

 static bool skipapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipapproach, _state);}

 static bool skipcancel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcancel, _state);}

 static bool skipconeelev(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipconeelev, _state);}

 static bool skiphold(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiphold, _state);}

 static bool skipmissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmissile, _state);}

 static bool skipmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmobile, _state);}

 static bool skippullup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippullup, _state);}

 static bool skippushdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippushdown, _state);}

 static bool skipreheat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipreheat, _state);}

 static bool skipsam(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsam, _state);}

 static bool skipsector(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsector, _state);}

 static bool skiptfollow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptfollow, _state);}

 static bool skiptrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptrack, _state);}

 static bool sortaaprate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaaprate, _state);}

 static bool sortdownslope(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortdownslope, _state);}

 static bool sorteapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorteapproach, _state);}

 static bool sortgroundewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortgroundewr, _state);}

 static bool sortlink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortlink, _state);}

 static bool sortmobileewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortmobileewr, _state);}

 static bool sortnapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortnapproach, _state);}

 static bool sortpitchrate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpitchrate, _state);}

 static bool sortsapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortsapproach, _state);}

 __attribute__((weak)) bool sortslope(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortslope, _state);}

 static bool sortthrust(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortthrust, _state);}

 static bool sortvtrim(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortvtrim, _state);}

 static bool sortwapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortwapproach, _state);}

 static bool targetloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktargetloop, _state);}

 static bool targetwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktargetwp, _state);}

 static bool tdistov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdistov, _state);}

 static bool tfabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfabove, _state);}

 static bool tfcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfcont, _state);}

 static bool tfexit1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfexit1, _state);}

 static bool tfexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfexit2, _state);}

 static bool tfexit3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfexit3, _state);}

 static bool tfexit4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfexit4, _state);}

 static bool tfrideloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktfrideloop, _state);}

 static bool tgtwpok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktgtwpok, _state);}

 static bool throttleloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kthrottleloop, _state);}

 static bool togglealtmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktogglealtmode, _state);}

 static bool trackok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktrackok, _state);}

 static bool updatewpexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatewpexit, _state);}

 static bool wpok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpok, _state);}

 static bool xyscaleok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxyscaleok, _state);}

	
	#include "avionics_default_seg_lifted.cpp"
#include "avionics_modcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_101_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_102_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_103_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_105_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_106_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_107_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_111_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_112_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_114_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_115_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_116_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_117_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_119_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_120_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_121_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_122_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_124_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_125_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_126_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_127_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_128_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_129_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_130_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_131_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_133_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_134_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_135_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_136_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_18_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_20_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_20_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_29_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_30_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_32_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_33_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_36_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_37_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_38_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_39_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_43_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_46_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_46_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_49_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_49_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_56_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_57_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_58_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_59_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_60_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_61_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_63_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_64_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_68_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_68_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_71_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_72_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_73_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_73_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_74_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_74_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_75_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_76_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_77_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_78_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_97_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaanextsctr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaaxloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaayloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaexit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaexit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaexit3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadcok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadjusthdg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadvanceok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadvancewp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kafloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kahexit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kahexit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaircraftradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairtgtdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaltok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kappexit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kappexit2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_arctan
        case m2c::karctan: 	if (!arctan(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_arctan2
        case m2c::karctan2: 	if (!arctan2(0, _state)) return false; break;
#endif
        case m2c::katexit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::katexit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautoaltitude: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautoapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautocancel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautoheading: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautopilot: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautoroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautothrotok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautothrottle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kboresight: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcdeltaxy
        case m2c::kcalcdeltaxy: 	if (!calcdeltaxy(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calceta
        case m2c::kcalceta: 	if (!calceta(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calceyecoords
        case m2c::kcalceyecoords: 	if (!calceyecoords(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
        case m2c::kcalcnextwp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcnmiles
        case m2c::kcalcnmiles: 	if (!calcnmiles(0, _state)) return false; break;
#endif
        case m2c::kcalcradalt: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_af
        case m2c::kcalcrngbrgvp_af: 	if (!calcrngbrgvp_af(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
        case m2c::kcalcrngbrgvp_vp: 	if (!calcrngbrgvp_vp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
        case m2c::kcalcrngbrgvp_wp: 	if (!calcrngbrgvp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgwp_wp
        case m2c::kcalcrngbrgwp_wp: 	if (!calcrngbrgwp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcslantrange
        case m2c::kcalcslantrange: 	if (!calcslantrange(0, _state)) return false; break;
#endif
        case m2c::kcalctfrideindex: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calctgtrelco
        case m2c::kcalctgtrelco: 	if (!calctgtrelco(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calctransmatrix
        case m2c::kcalctransmatrix: 	if (!calctransmatrix(0, _state)) return false; break;
#endif
        case m2c::kcalcturndist: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcvfactor: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcvias
        case m2c::kcalcvias: 	if (!calcvias(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcvkts
        case m2c::kcalcvkts: 	if (!calcvkts(0, _state)) return false; break;
#endif
        case m2c::kcalczerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcanceltgtwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckalt: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_checkfailures
        case m2c::kcheckfailures: 	if (!checkfailures(0, _state)) return false; break;
#endif
        case m2c::kcheckils: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchecklaststep: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclockok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontairradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontautopilot: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontconeelev: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontheading: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontinhibit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontshadow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontsortslope: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontthrottle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconttrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcycleloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcycleok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcycletargets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel101: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel102: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel103: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel104: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel105: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel106: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel107: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel108: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel109: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel18: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel19: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel21: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel22: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel23: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel24: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel25: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel26: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel27: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel28: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel29: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel30: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel31: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel32: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel33: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel34: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel35: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel36: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel37: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel38: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel39: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel40: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel41: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel42: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel43: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel44: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel45: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel46: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel47: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel48: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel49: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel50: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel51: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel52: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel53: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel54: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel55: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel56: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel57: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel58: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel59: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel60: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel61: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel62: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel63: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel64: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel65: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel66: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel67: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel68: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel69: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel70: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel71: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel72: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel73: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel74: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel75: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel76: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel77: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel78: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel79: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel80: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel81: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel82: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel83: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel84: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel85: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel86: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel87: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel88: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel89: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel90: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel91: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel92: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel93: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel94: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel95: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel96: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel97: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel98: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel99: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel18: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel19: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel21: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel22: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel23: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel24: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel25: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel26: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel27: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel28: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel29: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel30: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel31: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel32: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel33: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel34: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel35: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel36: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel37: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel38: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel39: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel40: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel41: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kendscan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kewrdead: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kewrok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitacradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitairradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitappprog: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitautopilot: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitautoroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitcancelwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitcycle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitils: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitnextwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitrwr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitselectwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitthrottle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitupdatewp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitwpalt: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fastarctan
        case m2c::kfastarctan: 	if (!fastarctan(0, _state)) return false; break;
#endif
        case m2c::kfindfirstloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfindnextloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_getdronealive
        case m2c::kgetdronealive: 	if (!getdronealive(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdroneillum
        case m2c::kgetdroneillum: 	if (!getdroneillum(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdronespeed
        case m2c::kgetdronespeed: 	if (!getdronespeed(0, _state)) return false; break;
#endif
        case m2c::kilsfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kilsok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinilsbeam: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitdownslope: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitslope: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_locatemobiles
        case m2c::klocatemobiles: 	if (!locatemobiles(0, _state)) return false; break;
#endif
        case m2c::klongrangecheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klosttrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmaxrollangle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmaxthrottle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmedrangecheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kminthrottle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissilelocated: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissilescan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmodcode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_morsedashsound
        case m2c::kmorsedashsound: 	if (!morsedashsound(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_morsedotsound
        case m2c::kmorsedotsound: 	if (!morsedotsound(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_moveviewpoint
        case m2c::kmoveviewpoint: 	if (!moveviewpoint(0, _state)) return false; break;
#endif
        case m2c::knextaf: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knexttarget: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextweapon: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_qcalcgndheight
        case m2c::kqcalcgndheight: 	if (!qcalcgndheight(0, _state)) return false; break;
#endif
        case m2c::kradarnonvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradarok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradarvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradnonvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradshadcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradshadloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradvis: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_rwralertsound
        case m2c::krwralertsound: 	if (!rwralertsound(0, _state)) return false; break;
#endif
        case m2c::ksamnextsctr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksamxloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksamyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksatisfiedwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanaaa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanaaaloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanac: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanafloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanairfields: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscangndheight: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscangndhtloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmobiles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmsl: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscansam: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscansamloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanxloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanyloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_selectautomfd
        case m2c::kselectautomfd: 	if (!selectautomfd(0, _state)) return false; break;
#endif
        case m2c::kselectnextwp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_selectradarmfd
        case m2c::kselectradarmfd: 	if (!selectradarmfd(0, _state)) return false; break;
#endif
        case m2c::kselecttgtwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetaimhfine: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetaptimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpitchlimit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksettdist: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksettel: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setviewmode
        case m2c::ksetviewmode: 	if (!setviewmode(0, _state)) return false; break;
#endif
        case m2c::kshadowcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshadowloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortrangecheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipaaa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipappinit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcancel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipconeelev: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiphold: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmissile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippullup: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippushdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipreheat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsam: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsector: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptfollow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaaprate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortdownslope: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorteapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortgroundewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortlink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortmobileewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortnapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpitchrate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortsapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortslope: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortthrust: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortvtrim: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortwapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortwpalt: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_tangent
        case m2c::ktangent: 	if (!tangent(0, _state)) return false; break;
#endif
        case m2c::ktargetloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktargetwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdistov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kterrainfollow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfexit1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfexit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfexit3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfexit4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktfrideloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktgtwpok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kthrottleloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktogglealtmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktrackmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktrackok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateairradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateappprog: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateavionics: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateils: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatenavsystem: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdaterwr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatetgtwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatewpdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatewpexit: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_validatetiald
        case m2c::kvalidatetiald: 	if (!validatetiald(0, _state)) return false; break;
#endif
        case m2c::kwpok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_xcalcunclipcrt
        case m2c::kxcalcunclipcrt: 	if (!xcalcunclipcrt(0, _state)) return false; break;
#endif
        case m2c::kxyscaleok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_avionics()
          {
              {db tmp999=0;MYCOPY(allowsplitscreenbigmap)}
    {db tmp999=0;MYCOPY(splitscreenbigmapison)}
    {db tmp999=0;MYCOPY(currentviewischecksix)}
    {db tmp999=0;MYCOPY(sam_launched_while_in_cockpit)}
    {db tmp999=0;MYCOPY(ssf_gear)}
    {db tmp999=0;MYCOPY(ssf_wheelbrakes)}
    {db tmp999=0;MYCOPY(ssf_airbrakes)}
    {db tmp999=0;MYCOPY(ssf_engine1)}
    {db tmp999=0;MYCOPY(ssf_engine2)}
    {db tmp999=0;MYCOPY(ssf_sweep)}
    {db tmp999=0;MYCOPY(ssf_flaps)}
    {db tmp999=0;MYCOPY(ssf_thrustrvrs)}
    {db tmp999=0;MYCOPY(ssf_spils)}
    {db tmp999=0;MYCOPY(ssf_hud)}
    {db tmp999=0;MYCOPY(ssf_pilotmfd)}
    {db tmp999=0;MYCOPY(ssf_navigmfd)}
    {db tmp999=0;MYCOPY(ssf_tab1)}
    {db tmp999=0;MYCOPY(ssf_tab2)}
    {db tmp999=0;MYCOPY(ssf_commsrx)}
    {db tmp999=0;MYCOPY(ssf_oxygen)}
    {db tmp999=0;MYCOPY(ssf_radar)}
    {db tmp999=0;MYCOPY(ssf_ecm)}
    {db tmp999=0;MYCOPY(ssf_rwr)}
    {db tmp999=0;MYCOPY(ssf_adc)}
    {dw tmp999=0;MYCOPY(vfac)}
    {dw tmp999=0;MYCOPY(counterthird)}
    {dw tmp999=0;MYCOPY(mfd_counter)}
    {db tmp999=0;MYCOPY(shiftdwaspressed)}
    {dw tmp999=0;MYCOPY(trueradalt)}
    {dw tmp999=0;MYCOPY(dispradalt)}
    {dw tmp999=80;MYCOPY(zrkrombcamdist)}
    {dw tmp999=0;MYCOPY(yawvalue)}
    {dw tmp999=0;MYCOPY(yawvalue2)}
    {dw tmp999=0;MYCOPY(yawvalue3)}
    {dw tmp999=0;MYCOPY(yawvalue_zrk_aaa)}
    {dw tmp999=22;MYCOPY(horizonvalue)}
    {dw tmp999=10;MYCOPY(horizonvalue2)}
    {dw tmp999=18;MYCOPY(horizonvalue_zrk_aaa)}
    {dw tmp999=10;MYCOPY(horizonvalue3)}
    {dw tmp999=65416;MYCOPY(horizonvalue4)}
    {dw tmp999=65526;MYCOPY(horizonvalue5)}
    {dw tmp999=30;MYCOPY(horizonvalue6)}
    {dw tmp999=65406;MYCOPY(checksixvalue)}
    {dw tmp999=65496;MYCOPY(horizonbombvalue)}
    {db tmp999=0;MYCOPY(inweaponview)}
    {db tmp999=1;MYCOPY(cockpitviews)}
    {dw tmp999[32]={0};MYCOPY(gndhtdata)}
    {dw tmp999=0;MYCOPY(gndhtdist)}
    {dw tmp999=21;MYCOPY(dummy9f9781f2_data_83_2495)}
    {dw tmp999=25;MYCOPY(dummy9f9781f2_data_85_2496)}
    {dw tmp999=31;MYCOPY(dummy9f9781f2_data_87_2497)}
    {dw tmp999=37;MYCOPY(dummy9f9781f2_data_89_2498)}
    {dw tmp999=44;MYCOPY(dummy9f9781f2_data_8b_2499)}
    {dw tmp999=52;MYCOPY(dummy9f9781f2_data_8d_2500)}
    {dw tmp999=62;MYCOPY(dummy9f9781f2_data_8f_2501)}
    {dw tmp999=72;MYCOPY(dummy9f9781f2_data_91_2502)}
    {dw tmp999=85;MYCOPY(dummy9f9781f2_data_93_2503)}
    {dw tmp999=99;MYCOPY(dummy9f9781f2_data_95_2504)}
    {dw tmp999=117;MYCOPY(dummy9f9781f2_data_97_2505)}
    {dw tmp999=138;MYCOPY(dummy9f9781f2_data_99_2506)}
    {dw tmp999=165;MYCOPY(dummy9f9781f2_data_9b_2507)}
    {dw tmp999=199;MYCOPY(dummy9f9781f2_data_9d_2508)}
    {dw tmp999=245;MYCOPY(dummy9f9781f2_data_9f_2509)}
    {dw tmp999=309;MYCOPY(dummy9f9781f2_data_a1_2510)}
    {dw tmp999=401;MYCOPY(dummy9f9781f2_data_a3_2511)}
    {dw tmp999=0;MYCOPY(tfrideindex)}
    {dw tmp999=90;MYCOPY(tfridetable)}
    {dw tmp999=100;MYCOPY(dummy9f9781f2_data_a9_2528)}
    {dw tmp999=150;MYCOPY(dummy9f9781f2_data_ab_2529)}
    {dw tmp999=200;MYCOPY(dummy9f9781f2_data_ad_2530)}
    {dw tmp999=300;MYCOPY(dummy9f9781f2_data_af_2531)}
    {dw tmp999=400;MYCOPY(dummy9f9781f2_data_b1_2532)}
    {dw tmp999=500;MYCOPY(dummy9f9781f2_data_b3_2533)}
    {dw tmp999=600;MYCOPY(dummy9f9781f2_data_b5_2534)}
    {dw tmp999=700;MYCOPY(dummy9f9781f2_data_b7_2535)}
    {dw tmp999=800;MYCOPY(dummy9f9781f2_data_b9_2536)}
    {dw tmp999=1000;MYCOPY(dummy9f9781f2_data_bb_2537)}
    {dw tmp999=100;MYCOPY(tfridealt)}
    {db tmp999=0;MYCOPY(tfauto)}
    {db tmp999=0;MYCOPY(tflast)}
    {db tmp999=0;MYCOPY(tferror)}
    {db tmp999=0;MYCOPY(tfbrisk)}
    {db tmp999=0;MYCOPY(tfpullup)}
    {db tmp999=0;MYCOPY(count1)}
    {db tmp999=0;MYCOPY(count2)}
    {db tmp999=0;MYCOPY(count3)}
    {db tmp999=0;MYCOPY(lookahead)}
    {dw tmp999=0;MYCOPY(tfslope)}
    {dw tmp999=0;MYCOPY(tfpitchrate)}
    {dw tmp999=0;MYCOPY(tfdeltaprate)}
    {dw tmp999=0;MYCOPY(tfgforce)}
    {dw tmp999=0;MYCOPY(tftrackpoint)}
    {dw tmp999=0;MYCOPY(tftgtalt)}
    {dw tmp999=0;MYCOPY(tfalterror)}
    {dw tmp999=0;MYCOPY(tfdisterror)}
    {dw tmp999=0;MYCOPY(autovias)}
    {dw tmp999=0;MYCOPY(autoviasfine)}
    {dw tmp999=0;MYCOPY(autovtas)}
    {dw tmp999=0;MYCOPY(atthrust)}
    {dw tmp999=0;MYCOPY(aimthrottle)}
    {dw tmp999=0;MYCOPY(aimreheat)}
    {db tmp999=0;MYCOPY(autothrot)}
    {db tmp999=0;MYCOPY(aterror)}
    {db tmp999=0;MYCOPY(playtheme)}
    {db tmp999=0;MYCOPY(escopetoggle)}
    {db tmp999=0;MYCOPY(togglezrk_zsu)}
    {db tmp999=0;MYCOPY(togglefullscreen)}
    {viewpoint tmp999={0,0,0,0,8,0,0,0};MYCOPY(aaa_or_sam_value)}
    {dw tmp999=0;MYCOPY(autohdg)}
    {dw tmp999=0;MYCOPY(autohdgfine)}
    {dw tmp999=0;MYCOPY(ahrollrate)}
    {dw tmp999=0;MYCOPY(ahdeltarrate)}
    {db tmp999=0;MYCOPY(ahflag)}
    {db tmp999=0;MYCOPY(aherror)}
    {dw tmp999=0;MYCOPY(autorfine)}
    {dw tmp999=0;MYCOPY(aimhfine)}
    {dw tmp999=0;MYCOPY(errhfine)}
    {dw tmp999=0;MYCOPY(ahmaxrate)}
    {dw tmp999=0;MYCOPY(ahrollval)}
    {dw tmp999=0;MYCOPY(autoalt)}
    {dw tmp999=0;MYCOPY(autoaltfine)}
    {dw tmp999=0;MYCOPY(aapitchrate)}
    {dw tmp999=0;MYCOPY(aadeltaprate)}
    {dw tmp999=0;MYCOPY(aagforce)}
    {db tmp999=0;MYCOPY(aaflag)}
    {db tmp999=0;MYCOPY(aaerror)}
    {dw tmp999=0;MYCOPY(aimpfine)}
    {dw tmp999=0;MYCOPY(aaalterror)}
    {dw tmp999=0;MYCOPY(aadisterror)}
    {dw tmp999=0;MYCOPY(thetaab)}
    {dw tmp999=0;MYCOPY(thetabc)}
    {dw tmp999=0;MYCOPY(thetaabc)}
    {dw tmp999=0;MYCOPY(rturn)}
    {dw tmp999=0;MYCOPY(tdist)}
    {dw tmp999=0;MYCOPY(inhibitdelay)}
    {db tmp999=0;MYCOPY(arflag)}
    {db tmp999=0;MYCOPY(arlast)}
    {db tmp999=0;MYCOPY(tracklocked)}
    {dw tmp999=m2c::near_offset_external(waylist);MYCOPY(oldwpptr)}
    {db tmp999=0;MYCOPY(ilsactive)}
    {db tmp999=0;MYCOPY(ilsapproach)}
    {dw tmp999=0;MYCOPY(ilsrangelo)}
    {dw tmp999=0;MYCOPY(ilsrangehi)}
    {dw tmp999=0;MYCOPY(ilserrorlo)}
    {dw tmp999=0;MYCOPY(ilserrorhi)}
    {dw tmp999=0;MYCOPY(ilsmaxerror)}
    {dw tmp999=0;MYCOPY(ilslocalerror)}
    {dw tmp999=0;MYCOPY(ilslocalpos)}
    {dw tmp999=0;MYCOPY(ilsglideerror)}
    {dw tmp999=0;MYCOPY(ilsglidepos)}
    {dw tmp999=65535;MYCOPY(ilsairfieldptr)}
    {dw tmp999=0;MYCOPY(ilsrng)}
    {dw tmp999=0;MYCOPY(ilsbrg)}
    {dw tmp999=0;MYCOPY(ilseta)}
    {dw tmp999=0;MYCOPY(apphfine)}
    {db tmp999=0;MYCOPY(appflag)}
    {db tmp999=0;MYCOPY(applast)}
    {db tmp999=0;MYCOPY(apperror)}
    {dw tmp999[4]={180,172,153,135};MYCOPY(approachspeed)}
    {dw tmp999[4]={199,187,180,65535};MYCOPY(dummy9f9781f2_data_15c_2692)}
    {dw tmp999[4]={208,65535,65535,65535};MYCOPY(dummy9f9781f2_data_164_2693)}
    {db tmp999=0;MYCOPY(appprogflag)}
    {db tmp999=0;MYCOPY(appprogseq)}
    {dw tmp999=0;MYCOPY(appprogtimer)}
    {arad_track tmp999[40]={{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0},{65535,0,0,0,0}};MYCOPY(__m2c_structrow_9f9781f2_2710)}
    {dw tmp999=offset(data,airradartracks);MYCOPY(airradarptr)}
    {dw tmp999=0;MYCOPY(numradartracks)}
    {dw tmp999=arad_med_range;MYCOPY(airradarrng)}
    {dw tmp999=4096;MYCOPY(airradaroffset)}
    {dw tmp999=8192;MYCOPY(dummy9f9781f2_data_358_2722)}
    {dw tmp999=20480;MYCOPY(dummy9f9781f2_data_35a_2723)}
    {dw tmp999=3;MYCOPY(airradarscan)}
    {dw tmp999=5;MYCOPY(dummy9f9781f2_data_35e_2727)}
    {dw tmp999=11;MYCOPY(dummy9f9781f2_data_360_2728)}
    {dw tmp999=5;MYCOPY(scansize)}
    {dw tmp999=dw(-(5/2));MYCOPY(scanoffset)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(arad_view)}
    {dw tmp999=512;MYCOPY(xdivvals)}
    {dw tmp999=1024;MYCOPY(dummy9f9781f2_data_37a_2743)}
    {dw tmp999=2560;MYCOPY(dummy9f9781f2_data_37c_2744)}
    {dw tmp999=683;MYCOPY(ydivvals)}
    {dw tmp999=1365;MYCOPY(dummy9f9781f2_data_380_2752)}
    {dw tmp999=3413;MYCOPY(dummy9f9781f2_data_382_2753)}
    {dw tmp999=0;MYCOPY(samplecntr)}
    {dd tmp999=0;MYCOPY(boresighterror)}
    {dw tmp999=0;MYCOPY(tmpangdiff)}
    {dw tmp999=0;MYCOPY(tmpscaledrng)}
    {dw tmp999=0;MYCOPY(tmpscaledcnt)}
    {dd tmp999=0;MYCOPY(tmpzerr)}
    {dd tmp999=0;MYCOPY(tmpdz)}
    {dw tmp999=0;MYCOPY(dispairtgtrng)}
    {dw tmp999=0;MYCOPY(dispairtgtalt)}
    {dw tmp999=0;MYCOPY(dispairtgtvel)}
    {dw tmp999=0;MYCOPY(dispairtgthdg)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(rwr_view)}
    {dw tmp999=0;MYCOPY(numrwrthreats)}
    {dw tmp999=0;MYCOPY(oldrwrthreats)}
    {dw tmp999=0;MYCOPY(activesamcntr)}
    {dw tmp999=0;MYCOPY(rwrthreatindex)}
    {db tmp999=0;MYCOPY(rwrthreatflags)}
    {dw tmp999=0;MYCOPY(tmpflags)}
    {rwr tmp999[16]={{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535},{0,0,0,0,0,0,0,65535}};MYCOPY(rwrthreats)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_avionics(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "mfd.h"

	
 __attribute__((weak)) bool airradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairradar, _state);}

 __attribute__((weak)) bool autopilotdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautopilotdisp, _state);}

 __attribute__((weak)) bool checktabmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchecktabmap, _state);}

 __attribute__((weak)) bool cleardisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcleardisp, _state);}

 static bool damageddisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamageddisp, _state);}

 __attribute__((weak)) bool damageddispmfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamageddispmfd, _state);}

 __attribute__((weak)) bool drawirimage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawirimage, _state);}

 __attribute__((weak)) bool drawmobsymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmobsymbol, _state);}

 __attribute__((weak)) bool drawradarmask(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawradarmask, _state);}

 __attribute__((weak)) bool flirdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp, _state);}

 __attribute__((weak)) bool flirdisp_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp_ori, _state);}

 __attribute__((weak)) bool gndmappingradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgndmappingradar, _state);}

 __attribute__((weak)) bool ilsdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kilsdisp, _state);}

 __attribute__((weak)) bool invaliddisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinvaliddisp, _state);}

 __attribute__((weak)) bool mapdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapdisp, _state);}

 static bool pancode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpancode_0_proc, _state);}

 __attribute__((weak)) bool radardisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradardisp, _state);}

 __attribute__((weak)) bool rotatehdg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krotatehdg, _state);}

 __attribute__((weak)) bool selectautomfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectautomfd, _state);}

 __attribute__((weak)) bool selectradarmfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectradarmfd, _state);}

 __attribute__((weak)) bool snapmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksnapmobile, _state);}

 __attribute__((weak)) bool snapstatic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksnapstatic, _state);}

 __attribute__((weak)) bool sortaltdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaltdol, _state);}

 __attribute__((weak)) bool sorthdgdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorthdgdol, _state);}

 static bool stealmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstealmouse, _state);}

 __attribute__((weak)) bool updatemapzoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemapzoom, _state);}

 __attribute__((weak)) bool updatemfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemfd, _state);}

 static bool __m2c_macrolocal_100_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_100_testhi, _state);}

 static bool __m2c_macrolocal_100_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_100_testok, _state);}

 static bool __m2c_macrolocal_101_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_101_testhi, _state);}

 static bool __m2c_macrolocal_101_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_101_testok, _state);}

 static bool __m2c_macrolocal_102_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_102_skippixel, _state);}

 static bool __m2c_macrolocal_103_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_103_skippixel, _state);}

 static bool __m2c_macrolocal_104_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_104_skippixel, _state);}

 static bool __m2c_macrolocal_105_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_105_skippixel, _state);}

 static bool __m2c_macrolocal_106_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_106_skippixel, _state);}

 static bool __m2c_macrolocal_107_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_107_skippixel, _state);}

 static bool __m2c_macrolocal_108_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_108_skippixel, _state);}

 static bool __m2c_macrolocal_109_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_109_skippixel, _state);}

 static bool __m2c_macrolocal_110_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_110_skip, _state);}

 static bool __m2c_macrolocal_111_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_111_skippixel, _state);}

 static bool __m2c_macrolocal_112_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_112_skippixel, _state);}

 static bool __m2c_macrolocal_113_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_113_skippixel, _state);}

 static bool __m2c_macrolocal_114_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_114_skippixel, _state);}

 static bool __m2c_macrolocal_115_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_115_skippixel, _state);}

 static bool __m2c_macrolocal_116_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_116_skippixel, _state);}

 static bool __m2c_macrolocal_117_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_117_skippixel, _state);}

 static bool __m2c_macrolocal_118_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_118_skippixel, _state);}

 static bool __m2c_macrolocal_119_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_119_skippixel, _state);}

 static bool __m2c_macrolocal_120_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_120_skippixel, _state);}

 static bool __m2c_macrolocal_121_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_121_skippixel, _state);}

 static bool __m2c_macrolocal_122_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_122_skippixel, _state);}

 static bool __m2c_macrolocal_123_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_123_skippixel, _state);}

 static bool __m2c_macrolocal_124_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_124_skip, _state);}

 static bool __m2c_macrolocal_59_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_59_skip, _state);}

 static bool __m2c_macrolocal_60_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_60_skip, _state);}

 static bool __m2c_macrolocal_65_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_65_skip, _state);}

 static bool __m2c_macrolocal_66_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_66_skip, _state);}

 static bool __m2c_macrolocal_67_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_skip, _state);}

 static bool __m2c_macrolocal_68_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_68_testhi, _state);}

 static bool __m2c_macrolocal_68_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_68_testok, _state);}

 static bool __m2c_macrolocal_69_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_69_testhi, _state);}

 static bool __m2c_macrolocal_69_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_69_testok, _state);}

 static bool __m2c_macrolocal_70_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_70_testhi, _state);}

 static bool __m2c_macrolocal_70_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_70_testok, _state);}

 static bool __m2c_macrolocal_71_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_71_testhi, _state);}

 static bool __m2c_macrolocal_71_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_71_testok, _state);}

 static bool __m2c_macrolocal_72_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_72_skip, _state);}

 static bool __m2c_macrolocal_75_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_75_skip, _state);}

 static bool __m2c_macrolocal_76_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_76_skip, _state);}

 static bool __m2c_macrolocal_77_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_77_skippixel, _state);}

 static bool __m2c_macrolocal_78_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_78_skippixel, _state);}

 static bool __m2c_macrolocal_79_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_79_skippixel, _state);}

 static bool __m2c_macrolocal_80_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_80_skippixel, _state);}

 static bool __m2c_macrolocal_81_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_81_skippixel, _state);}

 static bool __m2c_macrolocal_82_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_82_skippixel, _state);}

 static bool __m2c_macrolocal_83_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_83_skippixel, _state);}

 static bool __m2c_macrolocal_84_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_84_skippixel, _state);}

 static bool __m2c_macrolocal_85_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_85_skip, _state);}

 static bool __m2c_macrolocal_86_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_86_skippixel, _state);}

 static bool __m2c_macrolocal_87_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_skippixel, _state);}

 static bool __m2c_macrolocal_88_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_88_skippixel, _state);}

 static bool __m2c_macrolocal_89_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_89_skippixel, _state);}

 static bool __m2c_macrolocal_90_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_90_skippixel, _state);}

 static bool __m2c_macrolocal_91_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_91_skippixel, _state);}

 static bool __m2c_macrolocal_92_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_92_skippixel, _state);}

 static bool __m2c_macrolocal_93_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_93_skippixel, _state);}

 static bool __m2c_macrolocal_96_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_96_skip, _state);}

 static bool __m2c_macrolocal_97_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_97_skip, _state);}

 static bool __m2c_macrolocal_98_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_98_testhi, _state);}

 static bool __m2c_macrolocal_98_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_98_testok, _state);}

 static bool __m2c_macrolocal_99_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_99_testhi, _state);}

 static bool __m2c_macrolocal_99_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_99_testok, _state);}

 static bool airtgtloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairtgtloop1, _state);}

 static bool airtgtloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairtgtloop2, _state);}

 __attribute__((weak)) bool altacquire(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltacquire, _state);}

 __attribute__((weak)) bool altapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltapproach, _state);}

 __attribute__((weak)) bool altmanual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltmanual, _state);}

 __attribute__((weak)) bool alttf(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalttf, _state);}

 static bool bypassescope2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbypassescope2, _state);}

 static bool bypassescope2b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbypassescope2b, _state);}

 static bool check_mfdselect(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheck_mfdselect, _state);}

 static bool contairradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontairradar, _state);}

 static bool contautodisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontautodisp, _state);}

 static bool contgmrdes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontgmrdes, _state);}

 static bool contgmrmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontgmrmap, _state);}

 static bool contsteal(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontsteal, _state);}

 static bool damaged(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamaged, _state);}

 static bool damagedloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamagedloop, _state);}

 static bool damagedloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamagedloop2, _state);}

 static bool decradrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecradrange, _state);}

 static bool dontgonavmfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdontgonavmfd, _state);}

 static bool drawmoballied(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmoballied, _state);}

 static bool drawmobenemy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmobenemy, _state);}

 static bool exitaltdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitaltdol, _state);}

 static bool exitautodisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitautodisp, _state);}

 static bool exithdgdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexithdgdol, _state);}

 static bool exitmobsymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmobsymbol, _state);}

 static bool exitsteal(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsteal, _state);}

 static bool failsnapmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailsnapmobile, _state);}

 static bool failsnapstatic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailsnapstatic, _state);}

 static bool failtabmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailtabmap, _state);}

 static bool flashok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflashok, _state);}

 static bool gmrdecrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgmrdecrange, _state);}

 static bool gmrincrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgmrincrange, _state);}

 static bool gmrrangeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgmrrangeok, _state);}

 __attribute__((weak)) bool hdgacquire(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgacquire, _state);}

 __attribute__((weak)) bool hdgapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgapproach, _state);}

 __attribute__((weak)) bool hdgmanual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgmanual, _state);}

 __attribute__((weak)) bool hdgtrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgtrack, _state);}

 static bool ilsexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kilsexit, _state);}

 static bool incradrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kincradrange, _state);}

 static bool jumpouttohere(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjumpouttohere, _state);}

 static bool jumpoverheremann(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjumpoverheremann, _state);}

 static bool lompatoverhereman(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klompatoverhereman, _state);}

 static bool nextdamage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextdamage, _state);}

 static bool nextdamage2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextdamage2, _state);}

 static bool notracks(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knotracks, _state);}

 static bool ouches(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kouches, _state);}

 static bool passsnapmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpasssnapmobile, _state);}

 static bool passsnapstatic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpasssnapstatic, _state);}

 static bool passtabmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpasstabmap, _state);}

 static bool plotmobloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kplotmobloop, _state);}

 static bool plotnextmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kplotnextmob, _state);}

 static bool radarok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradarok, _state);}

 static bool radrangeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradrangeok, _state);}

 static bool scanmobdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmobdone, _state);}

 static bool scanmobloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmobloop, _state);}

 static bool scanstatdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanstatdone, _state);}

 static bool scanstatloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanstatloop, _state);}

 __attribute__((weak)) bool selectafds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectafds, _state);}

 __attribute__((weak)) bool selectflir(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectflir, _state);}

 __attribute__((weak)) bool selectloopback(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectloopback, _state);}

 __attribute__((weak)) bool selectmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectmap, _state);}

 __attribute__((weak)) bool selectmodeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectmodeok, _state);}

 static bool selectnext(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectnext, _state);}

 __attribute__((weak)) bool selectradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectradar, _state);}

 static bool setairtgt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetairtgt, _state);}

 static bool skipapprttg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipapprttg, _state);}

 static bool skipfixcols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfixcols, _state);}

 static bool skipircols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipircols, _state);}

 static bool skipmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmobile, _state);}

 static bool skipmovironwork0(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmovironwork0, _state);}

 static bool skippyhere(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippyhere, _state);}

 static bool skipradarcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipradarcheck, _state);}

 static bool skipradrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipradrange, _state);}

 static bool skiprotatelt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprotatelt, _state);}

 static bool skiprotatert(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprotatert, _state);}

 static bool skipstatic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipstatic, _state);}

 static bool skiptgtcursor(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptgtcursor, _state);}

 static bool skipwpcursor(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipwpcursor, _state);}

 static bool skipzoomin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipzoomin, _state);}

 static bool skipzoomout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipzoomout, _state);}

 static bool sortautomode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortautomode, _state);}

 static bool sortmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortmode, _state);}

 static bool switchedoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchedoff, _state);}

 static bool tgtflashok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktgtflashok, _state);}

 __attribute__((weak)) bool updatenavigmfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatenavigmfd, _state);}

 __attribute__((weak)) bool updatepilotmfd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatepilotmfd, _state);}

 static bool zebra(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzebra, _state);}

	
	#include "mfd_default_seg_lifted.cpp"
#include "mfd_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_100_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_100_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_101_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_101_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_102_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_103_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_104_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_105_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_106_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_107_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_108_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_109_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_110_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_111_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_112_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_113_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_114_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_115_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_116_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_117_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_118_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_119_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_120_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_121_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_122_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_123_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_124_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_59_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_60_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_65_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_66_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_68_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_68_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_69_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_69_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_70_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_70_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_71_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_71_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_72_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_75_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_76_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_77_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_78_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_79_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_80_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_81_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_82_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_83_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_84_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_85_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_86_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_88_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_89_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_90_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_91_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_92_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_93_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_96_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_97_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_98_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_98_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_99_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_99_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairtgtloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairtgtloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaltacquire: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaltapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaltmanual: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalttf: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautopilotdisp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
        case m2c::kbypassescope2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbypassescope2b: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_canceltgtwp
        case m2c::kcanceltgtwp: 	if (!canceltgtwp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_charsprite
        case m2c::kcharsprite: 	if (!charsprite(0, _state)) return false; break;
#endif
        case m2c::kcheck_mfdselect: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchecktabmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcleardisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontairradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontautodisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontgmrdes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontgmrmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontsteal: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamaged: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamageddisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamageddispmfd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamagedloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamagedloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecradrange: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_decworddol
        case m2c::kdecworddol: 	if (!decworddol(0, _state)) return false; break;
#endif
        case m2c::kdontgonavmfd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawirimage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmoballied: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmobenemy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmobsymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawradarmask: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawradarnoise
        case m2c::kdrawradarnoise: 	if (!drawradarnoise(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitaltdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitautodisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexithdgdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmobsymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsteal: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailsnapmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailsnapstatic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailtabmap: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fixgmrpalette
        case m2c::kfixgmrpalette: 	if (!fixgmrpalette(0, _state)) return false; break;
#endif
        case m2c::kflashok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgmrdecrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgmrincrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgmrrangeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgndmappingradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgacquire: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgmanual: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgtrack: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::kilsdisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kilsexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kincradrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinvaliddisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjumpouttohere: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjumpoverheremann: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_loadextrnpan
        case m2c::kloadextrnpan: 	if (!loadextrnpan(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_locatemobiles
        case m2c::klocatemobiles: 	if (!locatemobiles(0, _state)) return false; break;
#endif
        case m2c::klompatoverhereman: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmapdisp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_moveviewpoint
        case m2c::kmoveviewpoint: 	if (!moveviewpoint(0, _state)) return false; break;
#endif
        case m2c::knextdamage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextdamage2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knotracks: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kouches: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpancode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpasssnapmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpasssnapstatic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpasstabmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kplotmobloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kplotnextmob: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyfill
        case m2c::kpolyfill: 	if (!polyfill(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_printchar
        case m2c::kprintchar: 	if (!printchar(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kradardisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradarok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradrangeok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_readmousemotion
        case m2c::kreadmousemotion: 	if (!readmousemotion(0, _state)) return false; break;
#endif
        case m2c::krotatehdg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmobdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmobloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanstatdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanstatloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectafds: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectautomfd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectflir: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectloopback: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectmodeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectnext: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectradarmfd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetairtgt: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setgmrpalette
        case m2c::ksetgmrpalette: 	if (!setgmrpalette(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setviewmode
        case m2c::ksetviewmode: 	if (!setviewmode(0, _state)) return false; break;
#endif
        case m2c::kskipapprttg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfixcols: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipircols: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmovironwork0: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippyhere: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipradarcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipradrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprotatelt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprotatert: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipstatic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptgtcursor: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipwpcursor: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipzoomin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipzoomout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksnapmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksnapstatic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaltdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortautomode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorthdgdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstealmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchedoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktgtflashok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updateextrn
        case m2c::kupdateextrn: 	if (!updateextrn(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updatehud2
        case m2c::kupdatehud2: 	if (!updatehud2(0, _state)) return false; break;
#endif
        case m2c::kupdatemapzoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatemfd: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updatemovingmap
        case m2c::kupdatemovingmap: 	if (!updatemovingmap(0, _state)) return false; break;
#endif
        case m2c::kupdatenavigmfd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatepilotmfd: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updaterwr
        case m2c::kupdaterwr: 	if (!updaterwr(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updatetgtwp
        case m2c::kupdatetgtwp: 	if (!updatetgtwp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_visual
        case m2c::kvisual: 	if (!visual(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
        case m2c::kvlinedraw: 	if (!vlinedraw(0, _state)) return false; break;
#endif
        case m2c::kzebra: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_mfd()
          {
              xorg_tiald = 0;
    {db tmp999[2]={0};memcpy(&yorg_tiald,&tmp999,sizeof tmp999);}
    xorg = 0;
    {db tmp999[2]={0};memcpy(&yorg,&tmp999,sizeof tmp999);}
    pilot_mfd = mfd{128,144,1,0,map_zoom1,map_org_centre,m2c::near_offset_external(ssf_pilotmfd),0,1};
    navig_mfd = mfd{128,57,1,4,map_zoom1,map_org_centre,m2c::near_offset_external(ssf_navigmfd),0,1};
    mfdmouseflags = 1;
    selectswitch = m2c::kglobal_selectmap;
    dummy9e517ded_data_2b_2565 = m2c::kglobal_selectradar;
    dummy9e517ded_data_2d_2566 = m2c::kglobal_selectafds;
    dummy9e517ded_data_2f_2567 = m2c::kglobal_selectmodeok;
    dummy9e517ded_data_31_2568 = m2c::kglobal_selectflir;
    dummy9e517ded_data_33_2569 = m2c::kglobal_selectflir;
    dummy9e517ded_data_35_2570 = m2c::kglobal_selectloopback;
    dispswitch = m2c::kglobal_mapdisp;
    dummy9e517ded_data_39_2576 = m2c::kglobal_radardisp;
    dummy9e517ded_data_3b_2577 = m2c::kglobal_autopilotdisp;
    dummy9e517ded_data_3d_2578 = m2c::kglobal_ilsdisp;
    dummy9e517ded_data_3f_2579 = m2c::kglobal_flirdisp_ori;
    dummy9e517ded_data_41_2580 = m2c::kglobal_flirdisp;
    gmrrange = map_zoom1;
    gmrok = 0;
    gmrflashtimer = 0;
    gmrflashcol = gmr_flash_hi;
    snapsearcharea = 16384/8;
    dummy9e517ded_data_4b_2601 = 16384/16;
    dummy9e517ded_data_4d_2602 = 16384/32;
    dummy9e517ded_data_4f_2603 = 16384/64;
    dummy9e517ded_data_51_2604 = 16384/128;
    dummy9e517ded_data_53_2605 = 16384/256;
    snapx = 0;
    snapy = 0;
    airradystart = 8;
    dummy9e517ded_data_5b_2618 = 8;
    dummy9e517ded_data_5d_2619 = 4;
    airradycount = 3;
    dummy9e517ded_data_61_2623 = 5;
    dummy9e517ded_data_63_2624 = 11;
    airradystep = 16;
    dummy9e517ded_data_67_2628 = 8;
    dummy9e517ded_data_69_2629 = 4;
    tgtflashtimer = 0;
    tgtcol = tgt_flash_hi;
    tgtflashcol = tgt_flash_hi;
    polyx1 = 0;
    polyy1 = 0;
    polyx2 = 0;
    polyy2 = 0;
    polyx3 = 0;
    polyy3 = 0;
    polyx4 = 0;
    polyy4 = 0;
    dummy9e517ded_data_7f_2653 = 65535;
    crsrxv = crsr_xv_max/2;
    crsryv = crsr_yv_max/2;
    {db tmp999[2]={255,255};memcpy(&dummy9e517ded_data_85_2673,&tmp999,sizeof tmp999);}
    {db tmp999[2]={20,43};memcpy(&dummy9e517ded_data_87_2674,&tmp999,sizeof tmp999);}
    {db tmp999[2]={18,45};memcpy(&dummy9e517ded_data_89_2675,&tmp999,sizeof tmp999);}
    {db tmp999[2]={16,47};memcpy(&dummy9e517ded_data_8b_2676,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,49};memcpy(&dummy9e517ded_data_8d_2677,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,50};memcpy(&dummy9e517ded_data_8f_2678,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,51};memcpy(&dummy9e517ded_data_91_2679,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,52};memcpy(&dummy9e517ded_data_93_2680,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,53};memcpy(&dummy9e517ded_data_95_2681,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,54};memcpy(&dummy9e517ded_data_97_2682,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,55};memcpy(&dummy9e517ded_data_99_2683,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,56};memcpy(&dummy9e517ded_data_9b_2684,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,57};memcpy(&dummy9e517ded_data_9d_2685,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,58};memcpy(&dummy9e517ded_data_9f_2686,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,58};memcpy(&dummy9e517ded_data_a1_2687,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,59};memcpy(&dummy9e517ded_data_a3_2688,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,59};memcpy(&dummy9e517ded_data_a5_2689,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,59};memcpy(&dummy9e517ded_data_a7_2690,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,60};memcpy(&dummy9e517ded_data_a9_2691,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,60};memcpy(&dummy9e517ded_data_ab_2692,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,60};memcpy(&dummy9e517ded_data_ad_2693,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,60};memcpy(&dummy9e517ded_data_af_2694,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_b1_2695,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_b3_2696,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_b5_2697,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_b7_2698,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_b9_2699,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_bb_2700,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,61};memcpy(&dummy9e517ded_data_bd_2701,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,60};memcpy(&dummy9e517ded_data_bf_2702,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,59};memcpy(&dummy9e517ded_data_c1_2703,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,58};memcpy(&dummy9e517ded_data_c3_2704,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,57};memcpy(&dummy9e517ded_data_c5_2705,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,56};memcpy(&dummy9e517ded_data_c7_2706,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,55};memcpy(&dummy9e517ded_data_c9_2707,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,54};memcpy(&dummy9e517ded_data_cb_2708,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,53};memcpy(&dummy9e517ded_data_cd_2709,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,52};memcpy(&dummy9e517ded_data_cf_2710,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,51};memcpy(&dummy9e517ded_data_d1_2711,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,50};memcpy(&dummy9e517ded_data_d3_2712,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,49};memcpy(&dummy9e517ded_data_d5_2713,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,48};memcpy(&dummy9e517ded_data_d7_2714,&tmp999,sizeof tmp999);}
    {db tmp999[2]={16,47};memcpy(&dummy9e517ded_data_d9_2715,&tmp999,sizeof tmp999);}
    {db tmp999[2]={17,46};memcpy(&dummy9e517ded_data_db_2716,&tmp999,sizeof tmp999);}
    {db tmp999[2]={18,45};memcpy(&dummy9e517ded_data_dd_2717,&tmp999,sizeof tmp999);}
    {db tmp999[2]={19,44};memcpy(&dummy9e517ded_data_df_2718,&tmp999,sizeof tmp999);}
    {db tmp999[2]={20,43};memcpy(&dummy9e517ded_data_e1_2719,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,255};memcpy(&dummy9e517ded_data_e3_2720,&tmp999,sizeof tmp999);}
    autotitledol = offset(data,offdol);
    dummy9e517ded_data_e7_2726 = offset(data,approachdol);
    dummy9e517ded_data_e9_2727 = offset(data,trackacquiredol);
    dummy9e517ded_data_eb_2728 = offset(data,althdgholddol);
    dummy9e517ded_data_ed_2729 = offset(data,terrainfollowdol);
    altswitch = m2c::kglobal_altmanual;
    dummy9e517ded_data_f1_2735 = m2c::kglobal_altapproach;
    dummy9e517ded_data_f3_2736 = m2c::kglobal_altacquire;
    dummy9e517ded_data_f5_2737 = m2c::kglobal_alttf;
    hdgswitch = m2c::kglobal_hdgmanual;
    dummy9e517ded_data_f9_2743 = m2c::kglobal_hdgapproach;
    dummy9e517ded_data_fb_2744 = m2c::kglobal_hdgacquire;
    dummy9e517ded_data_fd_2745 = m2c::kglobal_hdgtrack;
    modeptr = offset(data,offdol);
    altptr = offset(data,manualdol);
    hdgptr = offset(data,manualdol);
    iasptr = offset(data,manualdol);
    wptel = 0;
    {db tmp999[8]={255,0,170,0,170,0,col_crt8,0};memcpy(&mfdattr1,&tmp999,sizeof tmp999);}
    {db tmp999[8]={255,0,170,0,170,0,col_crt16,0};memcpy(&mfdattr2,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_119_2772 = 3;
    dummy9e517ded_data_11a_2773 = 5;
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_11b_2774,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_11d_2775 = offset(data,xorg);
    dummy9e517ded_data_11f_2776 = offset(data,yorg);
    {db tmp999[2]={p_ext,54};memcpy(&dummy9e517ded_data_121_2777,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_123_2778 = offset(data,mfdattr1);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_125_2779,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,4};memcpy(&dummy9e517ded_data_127_2780,&tmp999,sizeof tmp999);}
    {char tmp999[5]={'A','F','D','S',' '};memcpy(&dummy9e517ded_data_12b_2781,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,65};memcpy(&dummy9e517ded_data_130_2782,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_132_2783 = offset(data,modeptr);
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_134_2784,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_136_2785 = offset(data,xorg);
    dummy9e517ded_data_138_2786 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_13a_2787,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,13};memcpy(&dummy9e517ded_data_13c_2788,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'A','L','T',' '};memcpy(&dummy9e517ded_data_140_2789,&tmp999,sizeof tmp999);}
    {char tmp999[6]={'-','-','-','-','-',' '};memcpy(&altdol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,65};memcpy(&dummy9e517ded_data_14a_2791,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_14c_2792 = offset(data,altptr);
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_14e_2793,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_150_2794 = offset(data,xorg);
    dummy9e517ded_data_152_2795 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_154_2796,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,20};memcpy(&dummy9e517ded_data_156_2797,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'H','D','G',' '};memcpy(&dummy9e517ded_data_15a_2798,&tmp999,sizeof tmp999);}
    {char tmp999[6]={' ',' ','-','-','-',' '};memcpy(&hdgdol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,65};memcpy(&dummy9e517ded_data_164_2800,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_166_2801 = offset(data,hdgptr);
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_168_2802,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_16a_2803 = offset(data,xorg);
    dummy9e517ded_data_16c_2804 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_16e_2805,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,27};memcpy(&dummy9e517ded_data_170_2806,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'I','A','S',' '};memcpy(&dummy9e517ded_data_174_2807,&tmp999,sizeof tmp999);}
    {char tmp999[6]={' ',' ','-','-','-',' '};memcpy(&iasdol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,65};memcpy(&dummy9e517ded_data_17e_2809,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_180_2810 = offset(data,iasptr);
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_183_2813,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_185_2814 = offset(data,xorg);
    dummy9e517ded_data_187_2815 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_189_2816,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,34};memcpy(&dummy9e517ded_data_18b_2817,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'T','T','G',' '};memcpy(&dummy9e517ded_data_18f_2818,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,62};memcpy(&dummy9e517ded_data_194_2821,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_196_2822 = m2c::near_offset_external(ilseta);
    dummy9e517ded_data_198_2823 = m2c::near_offset_external(ilseta);
    {db tmp999[2]={p_ext,62};memcpy(&dummy9e517ded_data_19b_2826,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_19d_2827 = m2c::near_offset_external(wpeta);
    dummy9e517ded_data_19f_2828 = m2c::near_offset_external(wpeta);
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummy9e517ded_data_1a2_2831,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_1a8_2834,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_1aa_2835 = offset(data,xorg);
    dummy9e517ded_data_1ac_2836 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_1ae_2837,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,41};memcpy(&dummy9e517ded_data_1b0_2838,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'T','E','L',' '};memcpy(&dummy9e517ded_data_1b4_2839,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,62};memcpy(&dummy9e517ded_data_1b9_2842,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_1bb_2843 = offset(data,wptel);
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummy9e517ded_data_1be_2846,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_1c4_2849,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_1c6_2850 = offset(data,xorg);
    dummy9e517ded_data_1c8_2851 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_1ca_2852,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={44,41};memcpy(&dummy9e517ded_data_1cc_2853,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'E','R','L','Y'};memcpy(&dummy9e517ded_data_1d0_2854,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_1d5_2857,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_1d7_2858 = offset(data,xorg);
    dummy9e517ded_data_1d9_2859 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_1db_2860,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={44,41};memcpy(&dummy9e517ded_data_1dd_2861,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'L','A','T','E'};memcpy(&dummy9e517ded_data_1e1_2862,&tmp999,sizeof tmp999);}
    {char tmp999[4]="OFF";memcpy(&offdol,&tmp999,sizeof tmp999);}
    {char tmp999[6]="APRCH";memcpy(&approachdol,&tmp999,sizeof tmp999);}
    {char tmp999[10]="TRACK ( )";memcpy(&trackacquiredol,&tmp999,sizeof tmp999);}
    {char tmp999[8]="ALT/HDG";memcpy(&althdgholddol,&tmp999,sizeof tmp999);}
    {char tmp999[3]="TF";memcpy(&terrainfollowdol,&tmp999,sizeof tmp999);}
    {char tmp999[6]="THROT";memcpy(&autothrottledol,&tmp999,sizeof tmp999);}
    {char tmp999[5]="AUTO";memcpy(&autodol,&tmp999,sizeof tmp999);}
    {char tmp999[5]="ACQR";memcpy(&acquiredol,&tmp999,sizeof tmp999);}
    {char tmp999[4]="MAN";memcpy(&manualdol,&tmp999,sizeof tmp999);}
    {char tmp999[5]="RIDE";memcpy(&ridedol,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_21e_2877 = 3;
    dummy9e517ded_data_21f_2878 = 5;
    {db tmp999[2]={p_ext,50};memcpy(&dummy9e517ded_data_220_2879,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_222_2880 = offset(data,xorg);
    dummy9e517ded_data_224_2881 = offset(data,yorg);
    {db tmp999[4]={p_ext,27,col_crt10,col_crt1};memcpy(&dummy9e517ded_data_226_2882,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_22a_2883,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,1};memcpy(&dummy9e517ded_data_22c_2884,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,35};memcpy(&dummy9e517ded_data_230_2885,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,38};memcpy(&dummy9e517ded_data_232_2887,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_234_2888 = m2c::near_offset_external(disphdg);
    dummy9e517ded_data_236_2889 = m2c::near_offset_external(disphdg);
    {db tmp999[2]={15,0};memcpy(&dummy9e517ded_data_238_2890,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_23b_2894,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={32,0};memcpy(&dummy9e517ded_data_23d_2895,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,60};memcpy(&dummy9e517ded_data_241_2896,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_243_2897 = m2c::near_offset_external(ilsbrg);
    dummy9e517ded_data_245_2898 = m2c::near_offset_external(ilsbrg);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_247_2899,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={65480,41};memcpy(&dummy9e517ded_data_249_2900,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,62};memcpy(&dummy9e517ded_data_24d_2901,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_24f_2902 = m2c::near_offset_external(ilseta);
    dummy9e517ded_data_251_2903 = m2c::near_offset_external(ilseta);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_253_2904,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,0};memcpy(&dummy9e517ded_data_255_2905,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,61};memcpy(&dummy9e517ded_data_259_2906,&tmp999,sizeof tmp999);}
    dummy9e517ded_data_25b_2907 = m2c::near_offset_external(ilsrng);
    dummy9e517ded_data_25d_2908 = m2c::near_offset_external(ilsrng);
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_260_2911,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={32,0};memcpy(&dummy9e517ded_data_262_2912,&tmp999,sizeof tmp999);}
    {char tmp999[3]={'-','-','-'};memcpy(&dummy9e517ded_data_266_2913,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_269_2914,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={65480,41};memcpy(&dummy9e517ded_data_26b_2915,&tmp999,sizeof tmp999);}
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummy9e517ded_data_26f_2916,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,21};memcpy(&dummy9e517ded_data_274_2917,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,0};memcpy(&dummy9e517ded_data_276_2918,&tmp999,sizeof tmp999);}
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummy9e517ded_data_27a_2919,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_mfd(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

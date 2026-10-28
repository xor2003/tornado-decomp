/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "tab.h"

	
 __attribute__((weak)) bool adjustlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadjustlock, _state);}

 __attribute__((weak)) bool adjustxyoffsets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadjustxyoffsets, _state);}

 __attribute__((weak)) bool adjustzoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kadjustzoom, _state);}

 __attribute__((weak)) bool calcscansize(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcscansize, _state);}

 __attribute__((weak)) bool cleardisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcleardisp, _state);}

 __attribute__((weak)) bool damageddisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamageddisp, _state);}

 __attribute__((weak)) bool drawcrosssymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawcrosssymbol, _state);}

 __attribute__((weak)) bool drawcrosssymbol_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawcrosssymbol_ori, _state);}

 __attribute__((weak)) bool drawlasersymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawlasersymbol, _state);}

 __attribute__((weak)) bool drawlasersymbol_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawlasersymbol_ori, _state);}

 __attribute__((weak)) bool drawleg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawleg, _state);}

 __attribute__((weak)) bool drawstandby(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawstandby, _state);}

 __attribute__((weak)) bool drawstandby2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawstandby2, _state);}

 __attribute__((weak)) bool drawtracksymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawtracksymbol, _state);}

 __attribute__((weak)) bool drawtracksymbol_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawtracksymbol_ori, _state);}

 __attribute__((weak)) bool flirdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp, _state);}

 __attribute__((weak)) bool flirdisp_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp_ori, _state);}

 __attribute__((weak)) bool flirdisp_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp_ori2, _state);}

 __attribute__((weak)) bool flirdisp_ori3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp_ori3, _state);}

 __attribute__((weak)) bool flirdisp_ori4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflirdisp_ori4, _state);}

 __attribute__((weak)) bool invaliddisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinvaliddisp, _state);}

 __attribute__((weak)) bool invaliddisp_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinvaliddisp_ori, _state);}

 __attribute__((weak)) bool mapdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapdisp, _state);}

 static bool pancode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpancode_0_proc, _state);}

 __attribute__((weak)) bool radardisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kradardisp, _state);}

 __attribute__((weak)) bool recalcxyoffsets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krecalcxyoffsets, _state);}

 __attribute__((weak)) bool refdisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krefdisp, _state);}

 __attribute__((weak)) bool rotatexyoffsets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krotatexyoffsets, _state);}

 __attribute__((weak)) bool routeplandisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krouteplandisp, _state);}

 __attribute__((weak)) bool setdatum(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdatum, _state);}

 __attribute__((weak)) bool settarget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksettarget, _state);}

 __attribute__((weak)) bool snapgndobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksnapgndobject, _state);}

 __attribute__((weak)) bool stealmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstealmouse, _state);}

 __attribute__((weak)) bool targetmoved(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktargetmoved, _state);}

 __attribute__((weak)) bool tialddisp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialddisp, _state);}

 __attribute__((weak)) bool tialddisp_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialddisp_ori, _state);}

 __attribute__((weak)) bool tialddisp_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialddisp_ori2, _state);}

 __attribute__((weak)) bool updatetab(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatetab, _state);}

 __attribute__((weak)) bool validatetiald(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvalidatetiald, _state);}

 static bool __m2c_macrolocal_100_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_100_skip, _state);}

 static bool __m2c_macrolocal_101_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_101_skip, _state);}

 static bool __m2c_macrolocal_102_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_102_skippixel, _state);}

 static bool __m2c_macrolocal_103_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_103_skippixel, _state);}

 static bool __m2c_macrolocal_104_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_104_skippixel, _state);}

 static bool __m2c_macrolocal_105_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_105_skippixel, _state);}

 static bool __m2c_macrolocal_106_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_106_skippixel, _state);}

 static bool __m2c_macrolocal_107_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_107_skippixel, _state);}

 static bool __m2c_macrolocal_108_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_108_skippixel, _state);}

 static bool __m2c_macrolocal_109_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_109_skippixel, _state);}

 static bool __m2c_macrolocal_110_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_110_skippixel, _state);}

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

 static bool __m2c_macrolocal_124_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_124_skippixel, _state);}

 static bool __m2c_macrolocal_125_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_125_skippixel, _state);}

 static bool __m2c_macrolocal_126_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_126_skip, _state);}

 static bool __m2c_macrolocal_127_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_127_skip, _state);}

 static bool __m2c_macrolocal_128_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_128_skippixel, _state);}

 static bool __m2c_macrolocal_129_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_129_skippixel, _state);}

 static bool __m2c_macrolocal_130_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_130_skippixel, _state);}

 static bool __m2c_macrolocal_131_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_131_skippixel, _state);}

 static bool __m2c_macrolocal_132_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_132_skippixel, _state);}

 static bool __m2c_macrolocal_133_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_133_skippixel, _state);}

 static bool __m2c_macrolocal_134_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_134_skippixel, _state);}

 static bool __m2c_macrolocal_135_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_135_skippixel, _state);}

 static bool __m2c_macrolocal_136_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_136_skippixel, _state);}

 static bool __m2c_macrolocal_137_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_137_skippixel, _state);}

 static bool __m2c_macrolocal_138_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_138_skippixel, _state);}

 static bool __m2c_macrolocal_139_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_139_skippixel, _state);}

 static bool __m2c_macrolocal_140_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_140_skippixel, _state);}

 static bool __m2c_macrolocal_141_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_141_skippixel, _state);}

 static bool __m2c_macrolocal_142_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_142_skippixel, _state);}

 static bool __m2c_macrolocal_143_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_143_skippixel, _state);}

 static bool __m2c_macrolocal_144_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_144_skippixel, _state);}

 static bool __m2c_macrolocal_145_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_145_skippixel, _state);}

 static bool __m2c_macrolocal_146_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_146_skippixel, _state);}

 static bool __m2c_macrolocal_147_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_147_skippixel, _state);}

 static bool __m2c_macrolocal_148_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_148_skippixel, _state);}

 static bool __m2c_macrolocal_149_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_149_skippixel, _state);}

 static bool __m2c_macrolocal_150_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_150_skippixel, _state);}

 static bool __m2c_macrolocal_151_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_151_skippixel, _state);}

 static bool __m2c_macrolocal_152_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_152_skippixel, _state);}

 static bool __m2c_macrolocal_153_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_153_skippixel, _state);}

 static bool __m2c_macrolocal_154_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_154_skippixel, _state);}

 static bool __m2c_macrolocal_155_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_155_skippixel, _state);}

 static bool __m2c_macrolocal_156_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_156_skippixel, _state);}

 static bool __m2c_macrolocal_157_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_157_skippixel, _state);}

 static bool __m2c_macrolocal_158_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_158_skippixel, _state);}

 static bool __m2c_macrolocal_159_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_159_skippixel, _state);}

 static bool __m2c_macrolocal_160_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_160_skippixel, _state);}

 static bool __m2c_macrolocal_161_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_161_skippixel, _state);}

 static bool __m2c_macrolocal_162_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_162_skippixel, _state);}

 static bool __m2c_macrolocal_163_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_163_skippixel, _state);}

 static bool __m2c_macrolocal_164_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_164_skippixel, _state);}

 static bool __m2c_macrolocal_165_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_165_skippixel, _state);}

 static bool __m2c_macrolocal_166_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_166_skippixel, _state);}

 static bool __m2c_macrolocal_167_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_167_skippixel, _state);}

 static bool __m2c_macrolocal_168_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_168_skippixel, _state);}

 static bool __m2c_macrolocal_169_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_169_skippixel, _state);}

 static bool __m2c_macrolocal_170_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_170_skippixel, _state);}

 static bool __m2c_macrolocal_171_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_171_skippixel, _state);}

 static bool __m2c_macrolocal_172_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_172_skippixel, _state);}

 static bool __m2c_macrolocal_173_skippixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_173_skippixel, _state);}

 static bool __m2c_macrolocal_174_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_174_skip, _state);}

 static bool __m2c_macrolocal_181_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_181_testhi, _state);}

 static bool __m2c_macrolocal_181_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_181_testok, _state);}

 static bool __m2c_macrolocal_182_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_182_testhi, _state);}

 static bool __m2c_macrolocal_182_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_182_testok, _state);}

 static bool __m2c_macrolocal_189_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_189_testhi, _state);}

 static bool __m2c_macrolocal_189_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_189_testok, _state);}

 static bool __m2c_macrolocal_190_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_190_skip, _state);}

 static bool __m2c_macrolocal_191_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_191_skip, _state);}

 static bool __m2c_macrolocal_193_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_193_testhi, _state);}

 static bool __m2c_macrolocal_193_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_193_testok, _state);}

 static bool __m2c_macrolocal_195_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_195_testhi, _state);}

 static bool __m2c_macrolocal_195_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_195_testok, _state);}

 static bool __m2c_macrolocal_209_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_209_testhi, _state);}

 static bool __m2c_macrolocal_209_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_209_testok, _state);}

 static bool __m2c_macrolocal_210_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_210_testhi, _state);}

 static bool __m2c_macrolocal_210_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_210_testok, _state);}

 static bool __m2c_macrolocal_211_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_211_testhi, _state);}

 static bool __m2c_macrolocal_211_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_211_testok, _state);}

 static bool __m2c_macrolocal_213_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_213_testhi, _state);}

 static bool __m2c_macrolocal_213_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_213_testok, _state);}

 static bool __m2c_macrolocal_233_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_233_skip, _state);}

 static bool __m2c_macrolocal_234_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_234_skip, _state);}

 static bool __m2c_macrolocal_88_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_88_skip, _state);}

 static bool __m2c_macrolocal_89_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_89_skip, _state);}

 static bool __m2c_macrolocal_90_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_90_skip, _state);}

 static bool __m2c_macrolocal_91_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_91_skip, _state);}

 static bool __m2c_macrolocal_95_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_95_skip, _state);}

 static bool __m2c_macrolocal_96_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_96_skip, _state);}

 static bool __m2c_macrolocal_98_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_98_testhi, _state);}

 static bool __m2c_macrolocal_98_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_98_testok, _state);}

 static bool __m2c_macrolocal_99_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_99_testhi, _state);}

 static bool __m2c_macrolocal_99_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_99_testok, _state);}

 static bool bypassescope(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbypassescope, _state);}

 static bool bypassescope2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbypassescope2, _state);}

 static bool bypassescope_and_adi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbypassescope_and_adi, _state);}

 static bool cancellock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcancellock, _state);}

 static bool cancellock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcancellock_ori, _state);}

 static bool cancellock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcancellock_ori2, _state);}

 static bool canceltiald(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcanceltiald, _state);}

 static bool checktab(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchecktab, _state);}

 static bool checktab2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchecktab2, _state);}

 static bool checktab3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchecktab3, _state);}

 static bool conthere(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconthere, _state);}

 static bool conthere2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconthere2, _state);}

 static bool contplnscale(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontplnscale, _state);}

 static bool contrefslew(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontrefslew, _state);}

 static bool contselect(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontselect, _state);}

 static bool contsteal(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontsteal, _state);}

 static bool contvisual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontvisual, _state);}

 static bool contvisual_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontvisual_ori, _state);}

 static bool contvisual_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontvisual_ori2, _state);}

 static bool damaged(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamaged, _state);}

 static bool damagedloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdamagedloop, _state);}

 static bool drawfloatwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawfloatwp, _state);}

 static bool drawposmarker(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawposmarker, _state);}

 static bool drawrefmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawrefmap, _state);}

 static bool drawwpmarkers(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawwpmarkers, _state);}

 static bool exitsteal(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsteal, _state);}

 static bool failsnapgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailsnapgnd, _state);}

 static bool getout1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetout1, _state);}

 static bool getout2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetout2, _state);}

 static bool getout3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetout3, _state);}

 static bool getout4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetout4, _state);}

 static bool getouthere(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetouthere, _state);}

 static bool goaheadselect(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgoaheadselect, _state);}

 static bool gooverheremann(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgooverheremann, _state);}

 static bool hdgok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgok, _state);}

 static bool inittiald(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinittiald, _state);}

 static bool intoadjustlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoadjustlock, _state);}

 static bool intoadjustlock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoadjustlock_ori, _state);}

 static bool intoadjustlock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoadjustlock_ori2, _state);}

 static bool intosearch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintosearch, _state);}

 static bool intosearch_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintosearch_ori, _state);}

 static bool intosearch_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintosearch_ori2, _state);}

 static bool intotargetlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintotargetlock, _state);}

 static bool intotargetlock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintotargetlock_ori, _state);}

 static bool intotargetlock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintotargetlock_ori2, _state);}

 static bool intozoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintozoom, _state);}

 static bool intozoom_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintozoom_ori, _state);}

 static bool intozoom_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintozoom_ori2, _state);}

 static bool limitdx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitdx, _state);}

 static bool limitdy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitdy, _state);}

 static bool limitxr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitxr, _state);}

 static bool limityr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimityr, _state);}

 static bool linkloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinkloop, _state);}

 static bool nextcondition3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextcondition3, _state);}

 static bool nextcondition4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextcondition4, _state);}

 static bool nextcondition5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextcondition5, _state);}

 static bool nextdamage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextdamage, _state);}

 static bool putcolorhud1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kputcolorhud1, _state);}

 static bool putcolorhud2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kputcolorhud2, _state);}

 static bool putcolorhud3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kputcolorhud3, _state);}

 static bool putcolorhud4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kputcolorhud4, _state);}

 static bool readtialdmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadtialdmouse, _state);}

 static bool readtialdmouse_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadtialdmouse_ori, _state);}

 static bool readtialdmouse_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadtialdmouse_ori2, _state);}

 static bool refzoomin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krefzoomin, _state);}

 static bool refzoomok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krefzoomok, _state);}

 static bool refzoomout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krefzoomout, _state);}

 static bool routeplanexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krouteplanexit, _state);}

 static bool scanobjloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanobjloop, _state);}

 static bool scanwploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanwploop, _state);}

 __attribute__((weak)) bool selectloopback(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectloopback, _state);}

 __attribute__((weak)) bool selectmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectmap, _state);}

 __attribute__((weak)) bool selectmodeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectmodeok, _state);}

 static bool selectnext(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectnext, _state);}

 __attribute__((weak)) bool selectradar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectradar, _state);}

 __attribute__((weak)) bool selecttiald(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselecttiald, _state);}

 static bool setcolourhudd1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcolourhudd1, _state);}

 static bool setcolourhudd2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcolourhudd2, _state);}

 static bool setcolourhudd3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcolourhudd3, _state);}

 static bool setcolourhudd4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcolourhudd4, _state);}

 static bool setvpalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetvpalt, _state);}

 static bool setvpalt_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetvpalt_ori, _state);}

 static bool setvpalt_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetvpalt_ori2, _state);}

 static bool skipacsymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipacsymbol, _state);}

 static bool skipcross(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcross, _state);}

 static bool skipcross_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcross_ori, _state);}

 static bool skipfixcols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfixcols, _state);}

 static bool skipfixcols_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfixcols_ori, _state);}

 static bool skipfixcols_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfixcols_ori2, _state);}

 static bool skipircols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipircols, _state);}

 static bool skipircols_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipircols_ori, _state);}

 static bool skipircols_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipircols_ori2, _state);}

 static bool skipwpmarker(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipwpmarker, _state);}

 static bool skipwpsymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipwpsymbol, _state);}

 static bool skipzoomin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipzoomin, _state);}

 static bool skipzoomout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipzoomout, _state);}

 static bool sortmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortmode, _state);}

 static bool sorttdmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttdmode, _state);}

 static bool sorttdmode_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttdmode_ori, _state);}

 static bool sorttdmode_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttdmode_ori2, _state);}

 static bool startscan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstartscan, _state);}

 static bool switchedoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchedoff, _state);}

 __attribute__((weak)) bool tdsymadjustlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymadjustlock, _state);}

 __attribute__((weak)) bool tdsymadjustlock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymadjustlock_ori, _state);}

 __attribute__((weak)) bool tdsymadjustlock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymadjustlock_ori2, _state);}

 __attribute__((weak)) bool tdsymok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymok, _state);}

 __attribute__((weak)) bool tdsymok_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymok_ori, _state);}

 __attribute__((weak)) bool tdsymok_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymok_ori2, _state);}

 __attribute__((weak)) bool tdsymtargetlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymtargetlock, _state);}

 __attribute__((weak)) bool tdsymtargetlock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymtargetlock_ori, _state);}

 __attribute__((weak)) bool tdsymtargetlock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymtargetlock_ori2, _state);}

 __attribute__((weak)) bool tdsymzoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymzoom, _state);}

 __attribute__((weak)) bool tdsymzoom_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymzoom_ori, _state);}

 __attribute__((weak)) bool tdsymzoom_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdsymzoom_ori2, _state);}

 __attribute__((weak)) bool tialdadjustlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdadjustlock, _state);}

 __attribute__((weak)) bool tialdadjustlock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdadjustlock_ori, _state);}

 __attribute__((weak)) bool tialdadjustlock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdadjustlock_ori2, _state);}

 static bool tialdexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdexit, _state);}

 static bool tialdexit_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdexit_ori, _state);}

 static bool tialdexit_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdexit_ori2, _state);}

 __attribute__((weak)) bool tialdinit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdinit, _state);}

 __attribute__((weak)) bool tialdinit_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdinit_ori, _state);}

 __attribute__((weak)) bool tialdinit_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdinit_ori2, _state);}

 static bool tialdok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdok, _state);}

 static bool tialdok_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdok_ori, _state);}

 static bool tialdok_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdok_ori2, _state);}

 __attribute__((weak)) bool tialdsearch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdsearch, _state);}

 __attribute__((weak)) bool tialdsearch_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdsearch_ori, _state);}

 __attribute__((weak)) bool tialdsearch_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdsearch_ori2, _state);}

 __attribute__((weak)) bool tialdtargetlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdtargetlock, _state);}

 __attribute__((weak)) bool tialdtargetlock_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdtargetlock_ori, _state);}

 __attribute__((weak)) bool tialdtargetlock_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdtargetlock_ori2, _state);}

 __attribute__((weak)) bool tialdzoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdzoom, _state);}

 __attribute__((weak)) bool tialdzoom_ori(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdzoom_ori, _state);}

 __attribute__((weak)) bool tialdzoom_ori2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktialdzoom_ori2, _state);}

 __attribute__((weak)) bool updatetab1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatetab1, _state);}

 __attribute__((weak)) bool updatetab2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatetab2, _state);}

 static bool validateexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvalidateexit, _state);}

 static bool wpinvalid1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpinvalid1, _state);}

 static bool wpinvalid2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpinvalid2, _state);}

 static bool wpmarkerloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpmarkerloop, _state);}

 static bool xgridloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxgridloop, _state);}

 static bool xok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxok, _state);}

 static bool ygridloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kygridloop, _state);}

 static bool yok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kyok, _state);}

 static bool zxs1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzxs1, _state);}

 static bool zxs2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzxs2, _state);}

 static bool zxs3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzxs3, _state);}

 static bool zxs4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzxs4, _state);}

	
	#include "tab_default_seg_lifted.cpp"
#include "tab_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_100_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_101_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_102_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_103_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_104_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_105_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_106_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_107_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_108_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_109_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_110_skippixel: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::k__m2c_macrolocal_124_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_125_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_126_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_127_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_128_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_129_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_130_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_131_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_132_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_133_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_134_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_135_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_136_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_137_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_138_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_139_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_140_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_141_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_142_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_143_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_144_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_145_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_146_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_147_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_148_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_149_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_150_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_151_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_152_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_153_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_154_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_155_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_156_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_157_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_158_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_159_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_160_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_161_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_162_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_163_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_164_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_165_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_166_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_168_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_169_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_170_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_171_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_172_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_skippixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_174_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_181_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_181_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_182_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_182_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_189_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_189_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_190_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_191_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_193_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_193_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_195_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_195_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_209_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_209_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_210_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_210_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_211_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_211_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_213_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_213_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_233_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_234_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_88_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_89_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_90_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_91_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_95_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_96_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_98_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_98_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_99_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_99_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadjustlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadjustxyoffsets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kadjustzoom: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
        case m2c::kbypassescope: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbypassescope2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbypassescope_and_adi: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calceta
        case m2c::kcalceta: 	if (!calceta(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcnmiles
        case m2c::kcalcnmiles: 	if (!calcnmiles(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
        case m2c::kcalcrngbrgvp_vp: 	if (!calcrngbrgvp_vp(0, _state)) return false; break;
#endif
        case m2c::kcalcscansize: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcancellock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcancellock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcancellock_ori2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_canceltgtwp
        case m2c::kcanceltgtwp: 	if (!canceltgtwp(0, _state)) return false; break;
#endif
        case m2c::kcanceltiald: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_cellsprite
        case m2c::kcellsprite: 	if (!cellsprite(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_charsprite
        case m2c::kcharsprite: 	if (!charsprite(0, _state)) return false; break;
#endif
        case m2c::kchecktab: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchecktab2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchecktab3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcleardisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconthere: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconthere2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontplnscale: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontrefslew: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontselect: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontsteal: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontvisual: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontvisual_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontvisual_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamaged: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamageddisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdamagedloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawadirollbug
        case m2c::kdrawadirollbug: 	if (!drawadirollbug(0, _state)) return false; break;
#endif
        case m2c::kdrawcrosssymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawcrosssymbol_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawfloatwp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawirimage
        case m2c::kdrawirimage: 	if (!drawirimage(0, _state)) return false; break;
#endif
        case m2c::kdrawlasersymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawlasersymbol_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawleg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawposmarker: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawrefmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawstandby: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawstandby2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawtracksymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawtracksymbol_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawwpmarkers: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel110: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel111: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel112: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel113: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel114: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel115: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel116: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel117: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel118: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel119: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel120: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel121: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel122: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel123: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel124: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel125: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel42: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel43: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel44: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel45: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel46: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel47: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsteal: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailsnapgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp_ori3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflirdisp_ori4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetout1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetout2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetout3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetout4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetouthere: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgoaheadselect: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgooverheremann: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::kinittiald: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoadjustlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoadjustlock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoadjustlock_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintosearch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintosearch_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintosearch_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintotargetlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintotargetlock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintotargetlock_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintozoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintozoom_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintozoom_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinvaliddisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinvaliddisp_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitdx: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitdy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitxr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimityr: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::klinkloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_loadextrnpan
        case m2c::kloadextrnpan: 	if (!loadextrnpan(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmapdisp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_moveviewpoint
        case m2c::kmoveviewpoint: 	if (!moveviewpoint(0, _state)) return false; break;
#endif
        case m2c::knextcondition3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextcondition4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextcondition5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextdamage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpancode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kputcolorhud1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kputcolorhud2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kputcolorhud3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kputcolorhud4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kradardisp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_readmousemotion
        case m2c::kreadmousemotion: 	if (!readmousemotion(0, _state)) return false; break;
#endif
        case m2c::kreadtialdmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadtialdmouse_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadtialdmouse_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krecalcxyoffsets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krefdisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krefzoomin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krefzoomok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krefzoomout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krotatexyoffsets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krouteplandisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krouteplanexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanobjloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanwploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectloopback: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectmodeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectnext: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectradar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselecttiald: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcolourhudd1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcolourhudd2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcolourhudd3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcolourhudd4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdatum: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
        case m2c::ksettarget: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setviewmode
        case m2c::ksetviewmode: 	if (!setviewmode(0, _state)) return false; break;
#endif
        case m2c::ksetvpalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetvpalt_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetvpalt_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipacsymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcross: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcross_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfixcols: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfixcols_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfixcols_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipircols: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipircols_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipircols_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipwpmarker: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipwpsymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipzoomin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipzoomout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksnapgndobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttdmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttdmode_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttdmode_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstartscan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstealmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchedoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktargetmoved: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymadjustlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymadjustlock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymadjustlock_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymok_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymok_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymtargetlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymtargetlock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymtargetlock_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymzoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymzoom_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdsymzoom_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdadjustlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdadjustlock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdadjustlock_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialddisp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialddisp_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialddisp_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdexit_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdexit_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdinit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdinit_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdinit_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdok_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdok_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdsearch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdsearch_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdsearch_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdtargetlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdtargetlock_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdtargetlock_ori2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdzoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdzoom_ori: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktialdzoom_ori2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updateadi2
        case m2c::kupdateadi2: 	if (!updateadi2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updatectrlsface
        case m2c::kupdatectrlsface: 	if (!updatectrlsface(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updateescope2
        case m2c::kupdateescope2: 	if (!updateescope2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updateextrn
        case m2c::kupdateextrn: 	if (!updateextrn(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updatehud
        case m2c::kupdatehud: 	if (!updatehud(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updatehud2
        case m2c::kupdatehud2: 	if (!updatehud2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updatemovingmap
        case m2c::kupdatemovingmap: 	if (!updatemovingmap(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_updaterwr
        case m2c::kupdaterwr: 	if (!updaterwr(0, _state)) return false; break;
#endif
        case m2c::kupdatetab: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatetab1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatetab2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updatetgtwp
        case m2c::kupdatetgtwp: 	if (!updatetgtwp(0, _state)) return false; break;
#endif
        case m2c::kvalidateexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvalidatetiald: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_vdotclip
        case m2c::kvdotclip: 	if (!vdotclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwnavigpanbrief
        case m2c::kvga_drwnavigpanbrief: 	if (!vga_drwnavigpanbrief(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_visual
        case m2c::kvisual: 	if (!visual(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
        case m2c::kvlinedraw: 	if (!vlinedraw(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vquicklineclip
        case m2c::kvquicklineclip: 	if (!vquicklineclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vsetviewport
        case m2c::kvsetviewport: 	if (!vsetviewport(0, _state)) return false; break;
#endif
        case m2c::kwpinvalid1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpinvalid2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpmarkerloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxgridloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kygridloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kyok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzxs1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzxs2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzxs3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzxs4: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_tab()
          {
              dummycd97adea_data_0_2661 = 3;
    dummycd97adea_data_1_2662 = 5;
    {db tmp999[10]={p_ext,22,0,0,0,0,170,0,col_hud,0};memcpy(&dummycd97adea_data_2_2663,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,19};memcpy(&dummycd97adea_data_d_2667,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummycd97adea_data_f_2668,&tmp999,sizeof tmp999);}
    dummycd97adea_data_11_2669 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummycd97adea_data_13_2670,&tmp999,sizeof tmp999);}
    dummycd97adea_data_15_2671 = hud_y_org+27-90;
    {char tmp999[4]={'G','U','N','S'};memcpy(&dummycd97adea_data_17_2672,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummycd97adea_data_1b_2673,&tmp999,sizeof tmp999);}
    dummycd97adea_data_1d_2674 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummycd97adea_data_1f_2675,&tmp999,sizeof tmp999);}
    dummycd97adea_data_21_2676 = hud_y_org+33-90;
    dummycd97adea_data_23_2677 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummycd97adea_data_24_2678,&tmp999,sizeof tmp999);}
    dummycd97adea_data_26_2679 = m2c::near_offset_external(cannons);
    dummycd97adea_data_28_2680 = m2c::near_offset_external(cannons);
    {db tmp999[2]={15,0};memcpy(&dummycd97adea_data_2a_2681,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,19};memcpy(&dummycd97adea_data_2d_2685,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummycd97adea_data_2f_2686,&tmp999,sizeof tmp999);}
    dummycd97adea_data_31_2687 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummycd97adea_data_33_2688,&tmp999,sizeof tmp999);}
    dummycd97adea_data_35_2689 = hud_y_org+27-40;
    {char tmp999[4]={'G','U','N','S'};memcpy(&dummycd97adea_data_37_2690,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummycd97adea_data_3b_2691,&tmp999,sizeof tmp999);}
    dummycd97adea_data_3d_2692 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummycd97adea_data_3f_2693,&tmp999,sizeof tmp999);}
    dummycd97adea_data_41_2694 = hud_y_org+33-40;
    dummycd97adea_data_43_2695 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummycd97adea_data_44_2696,&tmp999,sizeof tmp999);}
    dummycd97adea_data_46_2697 = m2c::near_offset_external(cannons);
    dummycd97adea_data_48_2698 = m2c::near_offset_external(cannons);
    {db tmp999[2]={15,0};memcpy(&dummycd97adea_data_4a_2699,&tmp999,sizeof tmp999);}
    localxpos = local_x;
    glideypos = glide_y;
    {db tmp999[2]={0,244};memcpy(&dummycd97adea_data_50_2718,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,244};memcpy(&dummycd97adea_data_52_2719,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,244};memcpy(&dummycd97adea_data_54_2720,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,244};memcpy(&dummycd97adea_data_56_2721,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,244};memcpy(&dummycd97adea_data_58_2722,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,245};memcpy(&dummycd97adea_data_5a_2723,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,245};memcpy(&dummycd97adea_data_5c_2724,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,245};memcpy(&dummycd97adea_data_5e_2725,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,246};memcpy(&dummycd97adea_data_60_2726,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,246};memcpy(&dummycd97adea_data_62_2727,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,247};memcpy(&dummycd97adea_data_64_2728,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,248};memcpy(&dummycd97adea_data_66_2729,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,249};memcpy(&dummycd97adea_data_68_2730,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,250};memcpy(&dummycd97adea_data_6a_2731,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,251};memcpy(&dummycd97adea_data_6c_2732,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,252};memcpy(&dummycd97adea_data_6e_2733,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,253};memcpy(&dummycd97adea_data_70_2734,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,254};memcpy(&dummycd97adea_data_72_2735,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,255};memcpy(&dummycd97adea_data_74_2736,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,0};memcpy(&dummycd97adea_data_76_2737,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,1};memcpy(&dummycd97adea_data_78_2738,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,2};memcpy(&dummycd97adea_data_7a_2739,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,3};memcpy(&dummycd97adea_data_7c_2740,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,4};memcpy(&dummycd97adea_data_7e_2741,&tmp999,sizeof tmp999);}
    {db tmp999[2]={14,5};memcpy(&dummycd97adea_data_80_2742,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,6};memcpy(&dummycd97adea_data_82_2743,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,7};memcpy(&dummycd97adea_data_84_2744,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,8};memcpy(&dummycd97adea_data_86_2745,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,9};memcpy(&dummycd97adea_data_88_2746,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,10};memcpy(&dummycd97adea_data_8a_2747,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,10};memcpy(&dummycd97adea_data_8c_2748,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,11};memcpy(&dummycd97adea_data_8e_2749,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,11};memcpy(&dummycd97adea_data_90_2750,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,11};memcpy(&dummycd97adea_data_92_2751,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,12};memcpy(&dummycd97adea_data_94_2752,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,12};memcpy(&dummycd97adea_data_96_2753,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,12};memcpy(&dummycd97adea_data_98_2754,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,12};memcpy(&dummycd97adea_data_9a_2755,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,12};memcpy(&dummycd97adea_data_9c_2756,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,12};memcpy(&dummycd97adea_data_9e_2757,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,12};memcpy(&dummycd97adea_data_a0_2758,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,12};memcpy(&dummycd97adea_data_a2_2759,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,12};memcpy(&dummycd97adea_data_a4_2760,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,11};memcpy(&dummycd97adea_data_a6_2761,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,11};memcpy(&dummycd97adea_data_a8_2762,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,11};memcpy(&dummycd97adea_data_aa_2763,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,10};memcpy(&dummycd97adea_data_ac_2764,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,10};memcpy(&dummycd97adea_data_ae_2765,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,9};memcpy(&dummycd97adea_data_b0_2766,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,8};memcpy(&dummycd97adea_data_b2_2767,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,7};memcpy(&dummycd97adea_data_b4_2768,&tmp999,sizeof tmp999);}
    {db tmp999[2]={243,6};memcpy(&dummycd97adea_data_b6_2769,&tmp999,sizeof tmp999);}
    {db tmp999[2]={242,5};memcpy(&dummycd97adea_data_b8_2770,&tmp999,sizeof tmp999);}
    {db tmp999[2]={242,4};memcpy(&dummycd97adea_data_ba_2771,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,3};memcpy(&dummycd97adea_data_bc_2772,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,2};memcpy(&dummycd97adea_data_be_2773,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,1};memcpy(&dummycd97adea_data_c0_2774,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,0};memcpy(&dummycd97adea_data_c2_2775,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,255};memcpy(&dummycd97adea_data_c4_2776,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,254};memcpy(&dummycd97adea_data_c6_2777,&tmp999,sizeof tmp999);}
    {db tmp999[2]={241,253};memcpy(&dummycd97adea_data_c8_2778,&tmp999,sizeof tmp999);}
    {db tmp999[2]={242,252};memcpy(&dummycd97adea_data_ca_2779,&tmp999,sizeof tmp999);}
    {db tmp999[2]={242,251};memcpy(&dummycd97adea_data_cc_2780,&tmp999,sizeof tmp999);}
    {db tmp999[2]={243,250};memcpy(&dummycd97adea_data_ce_2781,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,249};memcpy(&dummycd97adea_data_d0_2782,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,248};memcpy(&dummycd97adea_data_d2_2783,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,247};memcpy(&dummycd97adea_data_d4_2784,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,246};memcpy(&dummycd97adea_data_d6_2785,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,246};memcpy(&dummycd97adea_data_d8_2786,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,245};memcpy(&dummycd97adea_data_da_2787,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,245};memcpy(&dummycd97adea_data_dc_2788,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,245};memcpy(&dummycd97adea_data_de_2789,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,244};memcpy(&dummycd97adea_data_e0_2790,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,244};memcpy(&dummycd97adea_data_e2_2791,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,244};memcpy(&dummycd97adea_data_e4_2792,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,244};memcpy(&dummycd97adea_data_e6_2793,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,244};memcpy(&dummycd97adea_data_e8_2794,&tmp999,sizeof tmp999);}
    xorg = 0;
    {db tmp999[2]={0};memcpy(&yorg,&tmp999,sizeof tmp999);}
    xorg_tiald = 0;
    {db tmp999[2]={0};memcpy(&yorg_tiald,&tmp999,sizeof tmp999);}
    tabptr = offset(data,tab1);
    tab1 = tab{16,26,1,0,m2c::near_offset_external(ssf_tab1),0,0,0,0};
    tab2 = tab{208,26,1,4,m2c::near_offset_external(ssf_tab2),0,0,0,0};
    tabmouseflags = 0;
    selectswitch = m2c::kglobal_selectmodeok;
    dummycd97adea_data_113_2859 = m2c::kglobal_selectmap;
    dummycd97adea_data_115_2860 = m2c::kglobal_selectmodeok;
    dummycd97adea_data_117_2861 = m2c::kglobal_selectmodeok;
    dummycd97adea_data_119_2862 = m2c::kglobal_selectmodeok;
    dummycd97adea_data_11b_2863 = m2c::kglobal_selecttiald;
    dummycd97adea_data_11d_2864 = m2c::kglobal_selecttiald;
    dummycd97adea_data_11f_2865 = m2c::kglobal_selectradar;
    dummycd97adea_data_121_2866 = m2c::kglobal_selectloopback;
    dispswitch = m2c::kglobal_routeplandisp;
    dummycd97adea_data_125_2872 = m2c::kglobal_mapdisp;
    dummycd97adea_data_127_2873 = m2c::kglobal_refdisp;
    dummycd97adea_data_129_2874 = m2c::kglobal_flirdisp_ori;
    dummycd97adea_data_12b_2875 = m2c::kglobal_flirdisp;
    dummycd97adea_data_12d_2876 = m2c::kglobal_tialddisp_ori;
    dummycd97adea_data_12f_2877 = m2c::kglobal_tialddisp;
    dummycd97adea_data_131_2878 = m2c::kglobal_radardisp;
    vp = viewport{0,0,0,0,0,0};
    mapzoom = map_zoom1;
    maporigin = map_org_centre;
    plnscale = pln_scale1;
    {db tmp999[2]={0,7};memcpy(&plnscaletable,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,6};memcpy(&dummycd97adea_data_145_2902,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,5};memcpy(&dummycd97adea_data_147_2903,&tmp999,sizeof tmp999);}
    plnxcentre = 0;
    plnycentre = 0;
    tmpx = 0;
    tmpy = 0;
    tiald_view = viewpoint{0,0,0,0,0,0,0,0};
    tdscansize = 0;
    tdxoffset = 0;
    tdyoffset = 0;
    tdzoom = 255;
    tdzoomkey = 0;
    tddrag = 0;
    tdcross = 1;
    tdblink = 0;
    tialdactive = 0;
    laseractive = 0;
    tdblinktimer = td_blink_rate;
    tdmode = tiald_init;
    tdswitch = m2c::kglobal_tialdinit;
    dummycd97adea_data_177_2937 = m2c::kglobal_tialdsearch;
    dummycd97adea_data_179_2938 = m2c::kglobal_tialdzoom;
    dummycd97adea_data_17b_2939 = m2c::kglobal_tialdadjustlock;
    dummycd97adea_data_17d_2940 = m2c::kglobal_tialdtargetlock;
    tdswitch_ori = m2c::kglobal_tialdinit_ori;
    dummycd97adea_data_181_2942 = m2c::kglobal_tialdsearch_ori;
    dummycd97adea_data_183_2943 = m2c::kglobal_tialdzoom_ori;
    dummycd97adea_data_185_2944 = m2c::kglobal_tialdadjustlock_ori;
    dummycd97adea_data_187_2945 = m2c::kglobal_tialdtargetlock_ori;
    tdswitch_ori2 = m2c::kglobal_tialdinit_ori2;
    dummycd97adea_data_18b_2947 = m2c::kglobal_tialdsearch_ori2;
    dummycd97adea_data_18d_2948 = m2c::kglobal_tialdzoom_ori2;
    dummycd97adea_data_18f_2949 = m2c::kglobal_tialdadjustlock_ori2;
    dummycd97adea_data_191_2950 = m2c::kglobal_tialdtargetlock_ori2;
    tdsymbolswitch = m2c::kglobal_tdsymok;
    dummycd97adea_data_195_2954 = m2c::kglobal_tdsymok;
    dummycd97adea_data_197_2955 = m2c::kglobal_tdsymzoom;
    dummycd97adea_data_199_2956 = m2c::kglobal_tdsymadjustlock;
    dummycd97adea_data_19b_2957 = m2c::kglobal_tdsymtargetlock;
    tdsymbolswitch_ori = m2c::kglobal_tdsymok;
    dummycd97adea_data_19f_2959 = m2c::kglobal_tdsymok_ori;
    dummycd97adea_data_1a1_2960 = m2c::kglobal_tdsymzoom_ori;
    dummycd97adea_data_1a3_2961 = m2c::kglobal_tdsymadjustlock_ori;
    dummycd97adea_data_1a5_2962 = m2c::kglobal_tdsymtargetlock_ori;
    tdsymbolswitch_ori2 = m2c::kglobal_tdsymok;
    dummycd97adea_data_1a9_2964 = m2c::kglobal_tdsymok_ori2;
    dummycd97adea_data_1ab_2965 = m2c::kglobal_tdsymzoom_ori2;
    dummycd97adea_data_1ad_2966 = m2c::kglobal_tdsymadjustlock_ori2;
    dummycd97adea_data_1af_2967 = m2c::kglobal_tdsymtargetlock_ori2;
    ref_view = viewpoint{16,16,0,0,0,0,0,0};
    {db tmp999[2]={0};memcpy(&refdesignated,&tmp999,sizeof tmp999);}
    refdesx = xc;
    refdesy = yc;
    refzoom = map_zoom1;
    refrng = 0;
    refbrg = 0;
    refrngnmiles = 0;
    refeta = 0;
    radartest = 0;
    dummycd97adea_data_1d6_2993 = 3;
    dummycd97adea_data_1d7_2994 = 5;
    {db tmp999[4]={p_ext,27,col_crt16,col_crt16};memcpy(&dummycd97adea_data_1d8_2995,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_1dc_2996,&tmp999,sizeof tmp999);}
    dummycd97adea_data_1de_2997 = offset(data,xorg);
    dummycd97adea_data_1e0_2998 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_1e2_2999,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,1};memcpy(&dummycd97adea_data_1e4_3000,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,35};memcpy(&dummycd97adea_data_1e8_3001,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,38};memcpy(&dummycd97adea_data_1ea_3003,&tmp999,sizeof tmp999);}
    dummycd97adea_data_1ec_3004 = m2c::near_offset_external(disphdg);
    dummycd97adea_data_1ee_3005 = m2c::near_offset_external(disphdg);
    {db tmp999[2]={15,0};memcpy(&dummycd97adea_data_1f0_3006,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_1f3_3010,&tmp999,sizeof tmp999);}
    dummycd97adea_data_1f5_3011 = offset(data,xorg);
    dummycd97adea_data_1f7_3012 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_1f9_3013,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={72,66};memcpy(&dummycd97adea_data_1fb_3014,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,61};memcpy(&dummycd97adea_data_1ff_3015,&tmp999,sizeof tmp999);}
    dummycd97adea_data_201_3016 = m2c::near_offset_external(wprngnmiles);
    dummycd97adea_data_203_3017 = m2c::near_offset_external(wprngnmiles);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_206_3020,&tmp999,sizeof tmp999);}
    dummycd97adea_data_208_3021 = offset(data,xorg);
    dummycd97adea_data_20a_3022 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_20c_3023,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={80,1};memcpy(&dummycd97adea_data_20e_3024,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,60};memcpy(&dummycd97adea_data_212_3025,&tmp999,sizeof tmp999);}
    dummycd97adea_data_214_3026 = m2c::near_offset_external(wpbrg);
    dummycd97adea_data_216_3027 = m2c::near_offset_external(wpbrg);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_219_3030,&tmp999,sizeof tmp999);}
    dummycd97adea_data_21b_3031 = offset(data,xorg);
    dummycd97adea_data_21d_3032 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_21f_3034,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,56};memcpy(&dummycd97adea_data_221_3035,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,62};memcpy(&dummycd97adea_data_225_3036,&tmp999,sizeof tmp999);}
    dummycd97adea_data_227_3037 = m2c::near_offset_external(wpeta);
    dummycd97adea_data_229_3038 = m2c::near_offset_external(wpeta);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_22c_3041,&tmp999,sizeof tmp999);}
    dummycd97adea_data_22e_3042 = offset(data,xorg);
    dummycd97adea_data_230_3043 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_232_3044,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={72,66};memcpy(&dummycd97adea_data_234_3045,&tmp999,sizeof tmp999);}
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummycd97adea_data_238_3046,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_23e_3049,&tmp999,sizeof tmp999);}
    dummycd97adea_data_240_3050 = offset(data,xorg);
    dummycd97adea_data_242_3051 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_244_3052,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={80,1};memcpy(&dummycd97adea_data_246_3053,&tmp999,sizeof tmp999);}
    {char tmp999[3]={'-','-','-'};memcpy(&dummycd97adea_data_24a_3054,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_24e_3057,&tmp999,sizeof tmp999);}
    dummycd97adea_data_250_3058 = offset(data,xorg);
    dummycd97adea_data_252_3059 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_254_3060,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,66};memcpy(&dummycd97adea_data_256_3061,&tmp999,sizeof tmp999);}
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummycd97adea_data_25a_3062,&tmp999,sizeof tmp999);}
    dummycd97adea_data_260_3069 = 3;
    dummycd97adea_data_261_3070 = 5;
    {db tmp999[4]={p_ext,27,col_ref_sym,col_ref_sym};memcpy(&dummycd97adea_data_262_3071,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_266_3072,&tmp999,sizeof tmp999);}
    dummycd97adea_data_268_3073 = offset(data,xorg);
    dummycd97adea_data_26a_3074 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_26c_3075,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,1};memcpy(&dummycd97adea_data_26e_3076,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,35};memcpy(&dummycd97adea_data_272_3077,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,38};memcpy(&dummycd97adea_data_274_3079,&tmp999,sizeof tmp999);}
    dummycd97adea_data_276_3080 = m2c::near_offset_external(disphdg);
    dummycd97adea_data_278_3081 = m2c::near_offset_external(disphdg);
    {db tmp999[2]={15,0};memcpy(&dummycd97adea_data_27a_3082,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_27c_3084,&tmp999,sizeof tmp999);}
    dummycd97adea_data_27e_3085 = offset(data,xorg);
    dummycd97adea_data_280_3086 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_282_3087,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={72,66};memcpy(&dummycd97adea_data_284_3088,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,61};memcpy(&dummycd97adea_data_288_3089,&tmp999,sizeof tmp999);}
    dummycd97adea_data_28a_3090 = offset(data,refrngnmiles);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_28c_3091,&tmp999,sizeof tmp999);}
    dummycd97adea_data_28e_3092 = offset(data,xorg);
    dummycd97adea_data_290_3093 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_292_3094,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={80,1};memcpy(&dummycd97adea_data_294_3095,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,60};memcpy(&dummycd97adea_data_298_3096,&tmp999,sizeof tmp999);}
    dummycd97adea_data_29a_3097 = offset(data,refbrg);
    dummycd97adea_data_29d_3100 = 3;
    dummycd97adea_data_29e_3101 = 5;
    {db tmp999[4]={p_ext,27,col_hud,col_hud};memcpy(&dummycd97adea_data_29f_3102,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_2a3_3103,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2a5_3104 = offset(data,xorg);
    dummycd97adea_data_2a7_3105 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_2a9_3106,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,1};memcpy(&dummycd97adea_data_2ab_3107,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,35};memcpy(&dummycd97adea_data_2af_3108,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,38};memcpy(&dummycd97adea_data_2b1_3110,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2b3_3111 = m2c::near_offset_external(disphdg);
    dummycd97adea_data_2b5_3112 = m2c::near_offset_external(disphdg);
    {db tmp999[2]={15,0};memcpy(&dummycd97adea_data_2b7_3113,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_2b9_3115,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2bb_3116 = offset(data,xorg);
    dummycd97adea_data_2bd_3117 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_2bf_3118,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={72,66};memcpy(&dummycd97adea_data_2c1_3119,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,61};memcpy(&dummycd97adea_data_2c5_3120,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2c7_3121 = offset(data,refrngnmiles);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_2c9_3122,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2cb_3123 = offset(data,xorg);
    dummycd97adea_data_2cd_3124 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_2cf_3125,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={80,1};memcpy(&dummycd97adea_data_2d1_3126,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,60};memcpy(&dummycd97adea_data_2d5_3127,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2d7_3128 = offset(data,refbrg);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_2da_3131,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2dc_3132 = offset(data,xorg);
    dummycd97adea_data_2de_3133 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_2e0_3134,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,66};memcpy(&dummycd97adea_data_2e2_3135,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,62};memcpy(&dummycd97adea_data_2e6_3136,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2e8_3137 = offset(data,refeta);
    {db tmp999[2]={p_ext,50};memcpy(&dummycd97adea_data_2eb_3140,&tmp999,sizeof tmp999);}
    dummycd97adea_data_2ed_3141 = offset(data,xorg);
    dummycd97adea_data_2ef_3142 = offset(data,yorg);
    {db tmp999[2]={p_ext,21};memcpy(&dummycd97adea_data_2f1_3143,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={4,66};memcpy(&dummycd97adea_data_2f3_3144,&tmp999,sizeof tmp999);}
    {char tmp999[5]={'-','-','-','-','-'};memcpy(&dummycd97adea_data_2f7_3145,&tmp999,sizeof tmp999);}
    dummycd97adea_pancode_2fd_5601 = 38;
    dummycd97adea_pancode_2fe_5607 = 38;
    dummycd97adea_pancode_2ff_5612 = 38;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_tab(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "hud.h"

	
 __attribute__((weak)) bool clipline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipline, _state);}

 __attribute__((weak)) bool dispairtgtdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdispairtgtdata, _state);}

 __attribute__((weak)) bool drawairtarget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawairtarget, _state);}

 __attribute__((weak)) bool drawalarmclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawalarmclock, _state);}

 __attribute__((weak)) bool drawbombfall(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawbombfall, _state);}

 __attribute__((weak)) bool drawbrokenbar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawbrokenbar, _state);}

 __attribute__((weak)) bool drawccipmrkr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawccipmrkr, _state);}

 __attribute__((weak)) bool drawcentrecross(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawcentrecross, _state);}

 __attribute__((weak)) bool drawdownstroke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawdownstroke, _state);}

 __attribute__((weak)) bool drawgndgunclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgndgunclock, _state);}

 __attribute__((weak)) bool drawgndtgtmrkr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgndtgtmrkr, _state);}

 __attribute__((weak)) bool drawhudbrackets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawhudbrackets, _state);}

 __attribute__((weak)) bool drawintercept(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawintercept, _state);}

 __attribute__((weak)) bool drawpitchbar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpitchbar, _state);}

 __attribute__((weak)) bool drawsolidbar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsolidbar, _state);}

 __attribute__((weak)) bool drawsolidfall(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsolidfall, _state);}

 __attribute__((weak)) bool drawstandby(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawstandby, _state);}

 __attribute__((weak)) bool drawzerobar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawzerobar, _state);}

 __attribute__((weak)) bool inithud(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinithud, _state);}

 __attribute__((weak)) bool jp233clock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjp233clock, _state);}

 __attribute__((weak)) bool laserrangeclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klaserrangeclock, _state);}

 static bool limitpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitpitch, _state);}

 __attribute__((weak)) bool loftsteeringcue(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloftsteeringcue, _state);}

 static bool pancode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpancode_0_proc, _state);}

 __attribute__((weak)) bool projecthudpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprojecthudpoint, _state);}

 __attribute__((weak)) bool rotatemrkrline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krotatemrkrline, _state);}

 __attribute__((weak)) bool sethudclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksethudclip, _state);}

 __attribute__((weak)) bool updateacsymbol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateacsymbol, _state);}

 __attribute__((weak)) bool updateairspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateairspeed, _state);}

 __attribute__((weak)) bool updatealt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatealt, _state);}

 __attribute__((weak)) bool updatealtclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatealtclock, _state);}

 __attribute__((weak)) bool updateaoa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateaoa, _state);}

 __attribute__((weak)) bool updateaoameter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateaoameter, _state);}

 __attribute__((weak)) bool updateclock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateclock, _state);}

 __attribute__((weak)) bool updateearlylate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateearlylate, _state);}

 __attribute__((weak)) bool updatehdg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatehdg, _state);}

 __attribute__((weak)) bool updatehud(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatehud, _state);}

 __attribute__((weak)) bool updateils(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateils, _state);}

 __attribute__((weak)) bool updatepitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatepitch, _state);}

 __attribute__((weak)) bool updatevsi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatevsi, _state);}

 static bool __m2c_macrolocal_139_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_139_testhi, _state);}

 static bool __m2c_macrolocal_139_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_139_testok, _state);}

 static bool __m2c_macrolocal_146_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_146_skip, _state);}

 static bool __m2c_macrolocal_147_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_147_skip, _state);}

 static bool __m2c_macrolocal_148_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_148_skip, _state);}

 static bool __m2c_macrolocal_149_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_149_skip, _state);}

 static bool __m2c_macrolocal_152_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_152_skip, _state);}

 static bool __m2c_macrolocal_154_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_154_skip, _state);}

 static bool __m2c_macrolocal_156_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_156_skip, _state);}

 static bool __m2c_macrolocal_157_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_157_skip, _state);}

 static bool __m2c_macrolocal_158_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_158_testhi, _state);}

 static bool __m2c_macrolocal_158_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_158_testok, _state);}

 static bool __m2c_macrolocal_165_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_165_skip, _state);}

 static bool __m2c_macrolocal_166_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_166_skip, _state);}

 static bool __m2c_macrolocal_167_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_167_skip, _state);}

 static bool __m2c_macrolocal_168_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_168_skip, _state);}

 static bool __m2c_macrolocal_169_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_169_skip, _state);}

 static bool __m2c_macrolocal_170_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_170_skip, _state);}

 static bool __m2c_macrolocal_171_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_171_skip, _state);}

 static bool __m2c_macrolocal_172_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_172_skip, _state);}

 static bool __m2c_macrolocal_173_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_173_skip, _state);}

 static bool __m2c_macrolocal_174_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_174_skip, _state);}

 static bool __m2c_macrolocal_175_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_175_skip, _state);}

 static bool __m2c_macrolocal_176_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_176_skip, _state);}

 static bool __m2c_macrolocal_177_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_177_skip, _state);}

 static bool __m2c_macrolocal_178_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_178_skip, _state);}

 static bool __m2c_macrolocal_179_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_179_skip, _state);}

 static bool __m2c_macrolocal_180_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_180_skip, _state);}

 static bool __m2c_macrolocal_181_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_181_skip, _state);}

 static bool __m2c_macrolocal_182_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_182_skip, _state);}

 static bool __m2c_macrolocal_183_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_183_skip, _state);}

 static bool __m2c_macrolocal_184_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_184_skip, _state);}

 static bool __m2c_macrolocal_185_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_185_skip, _state);}

 static bool __m2c_macrolocal_186_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_186_skip, _state);}

 static bool __m2c_macrolocal_191_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_191_skip, _state);}

 static bool __m2c_macrolocal_63_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_63_skip, _state);}

 static bool __m2c_macrolocal_64_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_64_skip, _state);}

 static bool airspeedexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairspeedexit, _state);}

 static bool altclockbug(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltclockbug, _state);}

 static bool bar0(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbar0, _state);}

 static bool bar90(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbar90, _state);}

 static bool bar_90(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbar_90, _state);}

 static bool barloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbarloop, _state);}

 static bool bugquad1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad1, _state);}

 static bool bugquad2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad2, _state);}

 static bool bugquad3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad3, _state);}

 static bool bugquad4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad4, _state);}

 static bool cannonrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcannonrange, _state);}

 static bool clipscaledline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipscaledline, _state);}

 static bool cont1500m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont1500m, _state);}

 static bool cont400m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont400m, _state);}

 static bool cont600m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont600m, _state);}

 static bool cont900m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont900m, _state);}

 static bool contairtarget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontairtarget, _state);}

 static bool contnav(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontnav, _state);}

 static bool drawaltbug(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawaltbug, _state);}

 static bool exitearlylate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitearlylate, _state);}

 static bool exithud(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexithud, _state);}

 static bool exitintercept(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitintercept, _state);}

 static bool exitlaserrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlaserrange, _state);}

 static bool failairtarget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailairtarget, _state);}

 static bool failccipmrkr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailccipmrkr, _state);}

 static bool failgndtgtmrkr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailgndtgtmrkr, _state);}

 static bool hdgdigitloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgdigitloop, _state);}

 static bool hdgdigits(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgdigits, _state);}

 static bool hdgdotloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgdotloop, _state);}

 static bool htmargok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khtmargok, _state);}

 __attribute__((weak)) bool hudalarmdir(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudalarmdir, _state);}

 __attribute__((weak)) bool hudalarmind(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudalarmind, _state);}

 __attribute__((weak)) bool hudcannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudcannon, _state);}

 __attribute__((weak)) bool hudjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudjp233, _state);}

 __attribute__((weak)) bool hudlaserguided(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudlaserguided, _state);}

 __attribute__((weak)) bool hudlaydownbomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudlaydownbomb, _state);}

 __attribute__((weak)) bool hudloftbomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudloftbomb, _state);}

 __attribute__((weak)) bool hudmanualbomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudmanualbomb, _state);}

 __attribute__((weak)) bool hudnavigation(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudnavigation, _state);}

 __attribute__((weak)) bool hudsidewinder(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudsidewinder, _state);}

 __attribute__((weak)) bool hudskyflash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudskyflash, _state);}

 static bool initcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitcont, _state);}

 static bool initdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitdone, _state);}

 static bool laserrangeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klaserrangeok, _state);}

 static bool negpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knegpitch, _state);}

 static bool nextbar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextbar, _state);}

 static bool pospitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpospitch, _state);}

 static bool printpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintpitch, _state);}

 static bool setclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetclip, _state);}

 static bool sidewinderrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksidewinderrange, _state);}

 static bool skip1500m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip1500m, _state);}

 static bool skip400m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip400m, _state);}

 static bool skip600m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip600m, _state);}

 static bool skip900m(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip900m, _state);}

 static bool skipa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipa, _state);}

 static bool skipb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipb, _state);}

 static bool skipbrg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbrg, _state);}

 static bool skipc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipc, _state);}

 static bool skipd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipd, _state);}

 static bool skipirlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipirlock, _state);}

 static bool skyflashrange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskyflashrange, _state);}

 static bool sortflip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortflip, _state);}

 static bool standbysight(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstandbysight, _state);}

	
	#include "hud_default_seg_lifted.cpp"
#include "hud_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_139_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_139_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_146_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_147_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_148_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_149_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_152_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_154_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_156_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_157_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_158_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_158_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_165_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_166_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_168_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_169_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_170_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_171_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_172_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_174_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_175_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_176_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_177_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_178_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_179_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_180_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_181_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_182_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_183_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_184_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_185_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_186_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_191_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_63_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_64_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairspeedexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaltclockbug: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbar0: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbar90: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbar_90: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbarloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad4: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calceyecoords
        case m2c::kcalceyecoords: 	if (!calceyecoords(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcintercept
        case m2c::kcalcintercept: 	if (!calcintercept(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
        case m2c::kcalcrngbrgvp_wp: 	if (!calcrngbrgvp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calctgtrelco
        case m2c::kcalctgtrelco: 	if (!calctgtrelco(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calctransmatrix
        case m2c::kcalctransmatrix: 	if (!calctransmatrix(0, _state)) return false; break;
#endif
        case m2c::kcannonrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipscaledline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont1500m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont400m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont600m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont900m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontairtarget: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontnav: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdispairtgtdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawairtarget: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawalarmclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawaltbug: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawbombfall: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawbrackets
        case m2c::kdrawbrackets: 	if (!drawbrackets(0, _state)) return false; break;
#endif
        case m2c::kdrawbrokenbar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawccipmrkr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawcentrecross: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawdownstroke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawgndgunclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawgndtgtmrkr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawhudbrackets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawintercept: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpitchbar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawsolidbar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawsolidfall: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawstandby: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawzerobar: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitearlylate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexithud: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitintercept: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlaserrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailairtarget: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailccipmrkr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailgndtgtmrkr: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_getdronespeed
        case m2c::kgetdronespeed: 	if (!getdronespeed(0, _state)) return false; break;
#endif
        case m2c::khdgdigitloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgdigits: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgdotloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::khtmargok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudalarmdir: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudalarmind: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudcannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudjp233: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudlaserguided: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudlaydownbomb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudloftbomb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudmanualbomb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudnavigation: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudsidewinder: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudskyflash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinithud: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjp233clock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klaserrangeclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klaserrangeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitpitch: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::kloftsteeringcue: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knegpitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextbar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpancode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpospitch: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printchar
        case m2c::kprintchar: 	if (!printchar(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kprintpitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprojecthudpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krotatemrkrline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksethudclip: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_sethudlevel
        case m2c::ksethudlevel: 	if (!sethudlevel(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setsspriteclip
        case m2c::ksetsspriteclip: 	if (!setsspriteclip(0, _state)) return false; break;
#endif
        case m2c::ksidewinderrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip1500m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip400m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip600m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip900m: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbrg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipirlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskyflashrange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortflip: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_ssprite
        case m2c::kssprite: 	if (!ssprite(0, _state)) return false; break;
#endif
        case m2c::kstandbysight: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateacsymbol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateairspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatealt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatealtclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateaoa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateaoameter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateclock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateearlylate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatehdg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatehud: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateils: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatepitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatevsi: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_vdotclip
        case m2c::kvdotclip: 	if (!vdotclip(0, _state)) return false; break;
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
#ifndef M2C_CODE_EQUATE_xcalcunclipcrt
        case m2c::kxcalcunclipcrt: 	if (!xcalcunclipcrt(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_xdotclip
        case m2c::kxdotclip: 	if (!xdotclip(0, _state)) return false; break;
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
          void Initializer_hud()
          {
              hudswitch = m2c::kglobal_hudnavigation;
    dummy3db35c33_data_2_2350 = m2c::kglobal_hudmanualbomb;
    dummy3db35c33_data_4_2351 = m2c::kglobal_hudlaydownbomb;
    dummy3db35c33_data_6_2352 = m2c::kglobal_hudloftbomb;
    dummy3db35c33_data_8_2353 = m2c::kglobal_hudlaserguided;
    dummy3db35c33_data_a_2354 = m2c::kglobal_hudjp233;
    dummy3db35c33_data_c_2355 = m2c::kglobal_hudalarmdir;
    dummy3db35c33_data_e_2356 = m2c::kglobal_hudalarmind;
    dummy3db35c33_data_10_2357 = m2c::kglobal_hudcannon;
    dummy3db35c33_data_12_2358 = m2c::kglobal_hudsidewinder;
    dummy3db35c33_data_14_2359 = m2c::kglobal_hudskyflash;
    hudenabled = 1;
    machoption = 0;
    clip_above = 0;
    clip_below = 0;
    hdgyoff = 0;
    vp = viewport{112,5,96,88,0,7};
    markerx = 0;
    {db tmp999[2]={0};memcpy(&markery,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,246};memcpy(&dummy3db35c33_data_2c_2401,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,246};memcpy(&dummy3db35c33_data_2e_2402,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,246};memcpy(&dummy3db35c33_data_30_2403,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,246};memcpy(&dummy3db35c33_data_32_2404,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,246};memcpy(&dummy3db35c33_data_34_2405,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,247};memcpy(&dummy3db35c33_data_36_2406,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,247};memcpy(&dummy3db35c33_data_38_2407,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,248};memcpy(&dummy3db35c33_data_3a_2408,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,248};memcpy(&dummy3db35c33_data_3c_2409,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,249};memcpy(&dummy3db35c33_data_3e_2410,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,250};memcpy(&dummy3db35c33_data_40_2411,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,251};memcpy(&dummy3db35c33_data_42_2412,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,252};memcpy(&dummy3db35c33_data_44_2413,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,253};memcpy(&dummy3db35c33_data_46_2414,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,254};memcpy(&dummy3db35c33_data_48_2415,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,255};memcpy(&dummy3db35c33_data_4a_2416,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,0};memcpy(&dummy3db35c33_data_4c_2417,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,247};memcpy(&dummy3db35c33_data_4e_2419,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,247};memcpy(&dummy3db35c33_data_50_2420,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,247};memcpy(&dummy3db35c33_data_52_2421,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,247};memcpy(&dummy3db35c33_data_54_2422,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,247};memcpy(&dummy3db35c33_data_56_2423,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,248};memcpy(&dummy3db35c33_data_58_2424,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,248};memcpy(&dummy3db35c33_data_5a_2425,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,249};memcpy(&dummy3db35c33_data_5c_2426,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,249};memcpy(&dummy3db35c33_data_5e_2427,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,250};memcpy(&dummy3db35c33_data_60_2428,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,251};memcpy(&dummy3db35c33_data_62_2429,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,252};memcpy(&dummy3db35c33_data_64_2430,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,252};memcpy(&dummy3db35c33_data_66_2431,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,253};memcpy(&dummy3db35c33_data_68_2432,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,254};memcpy(&dummy3db35c33_data_6a_2433,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,255};memcpy(&dummy3db35c33_data_6c_2434,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,0};memcpy(&dummy3db35c33_data_6e_2435,&tmp999,sizeof tmp999);}
    barxoff = 0;
    baryoff = 0;
    px0 = 0;
    py0 = 0;
    px1 = 0;
    py1 = 0;
    px2 = 0;
    py2 = 0;
    px3 = 0;
    py3 = 0;
    px4 = 0;
    py4 = 0;
    px5 = 0;
    py5 = 0;
    px6 = 0;
    py6 = 0;
    px7 = 0;
    py7 = 0;
    px8 = 0;
    py8 = 0;
    px9 = 0;
    py9 = 0;
    px10 = 0;
    py10 = 0;
    px11 = 0;
    py11 = 0;
    px12 = 0;
    py12 = 0;
    clockxorg = 0;
    {db tmp999[2]={0};memcpy(&clockyorg,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,247};memcpy(&dummy3db35c33_data_ac_2484,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,247};memcpy(&dummy3db35c33_data_ae_2485,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,247};memcpy(&dummy3db35c33_data_b0_2486,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,247};memcpy(&dummy3db35c33_data_b2_2487,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,248};memcpy(&dummy3db35c33_data_b4_2488,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,248};memcpy(&dummy3db35c33_data_b6_2489,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,248};memcpy(&dummy3db35c33_data_b8_2490,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,249};memcpy(&dummy3db35c33_data_ba_2491,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,250};memcpy(&dummy3db35c33_data_bc_2492,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,251};memcpy(&dummy3db35c33_data_be_2493,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,252};memcpy(&dummy3db35c33_data_c0_2494,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,253};memcpy(&dummy3db35c33_data_c2_2495,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,254};memcpy(&dummy3db35c33_data_c4_2496,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,255};memcpy(&dummy3db35c33_data_c6_2497,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,0};memcpy(&dummy3db35c33_data_c8_2498,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,1};memcpy(&dummy3db35c33_data_ca_2499,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,2};memcpy(&dummy3db35c33_data_cc_2500,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,3};memcpy(&dummy3db35c33_data_ce_2501,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,4};memcpy(&dummy3db35c33_data_d0_2502,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,5};memcpy(&dummy3db35c33_data_d2_2503,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,6};memcpy(&dummy3db35c33_data_d4_2504,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,7};memcpy(&dummy3db35c33_data_d6_2505,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,8};memcpy(&dummy3db35c33_data_d8_2506,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,8};memcpy(&dummy3db35c33_data_da_2507,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,8};memcpy(&dummy3db35c33_data_dc_2508,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,9};memcpy(&dummy3db35c33_data_de_2509,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,9};memcpy(&dummy3db35c33_data_e0_2510,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,9};memcpy(&dummy3db35c33_data_e2_2511,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,9};memcpy(&dummy3db35c33_data_e4_2512,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,9};memcpy(&dummy3db35c33_data_e6_2513,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,9};memcpy(&dummy3db35c33_data_e8_2514,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,9};memcpy(&dummy3db35c33_data_ea_2515,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,8};memcpy(&dummy3db35c33_data_ec_2516,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,8};memcpy(&dummy3db35c33_data_ee_2517,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,8};memcpy(&dummy3db35c33_data_f0_2518,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,7};memcpy(&dummy3db35c33_data_f2_2519,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,6};memcpy(&dummy3db35c33_data_f4_2520,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,5};memcpy(&dummy3db35c33_data_f6_2521,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,4};memcpy(&dummy3db35c33_data_f8_2522,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,3};memcpy(&dummy3db35c33_data_fa_2523,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,2};memcpy(&dummy3db35c33_data_fc_2524,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,1};memcpy(&dummy3db35c33_data_fe_2525,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,0};memcpy(&dummy3db35c33_data_100_2526,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,255};memcpy(&dummy3db35c33_data_102_2527,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,254};memcpy(&dummy3db35c33_data_104_2528,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,253};memcpy(&dummy3db35c33_data_106_2529,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,252};memcpy(&dummy3db35c33_data_108_2530,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,251};memcpy(&dummy3db35c33_data_10a_2531,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,250};memcpy(&dummy3db35c33_data_10c_2532,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,249};memcpy(&dummy3db35c33_data_10e_2533,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,248};memcpy(&dummy3db35c33_data_110_2534,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,248};memcpy(&dummy3db35c33_data_112_2535,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,248};memcpy(&dummy3db35c33_data_114_2536,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,247};memcpy(&dummy3db35c33_data_116_2537,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,247};memcpy(&dummy3db35c33_data_118_2538,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,247};memcpy(&dummy3db35c33_data_11a_2539,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,248};memcpy(&dummy3db35c33_data_11c_2541,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,248};memcpy(&dummy3db35c33_data_11e_2542,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,248};memcpy(&dummy3db35c33_data_120_2543,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,248};memcpy(&dummy3db35c33_data_122_2544,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,249};memcpy(&dummy3db35c33_data_124_2545,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,249};memcpy(&dummy3db35c33_data_126_2546,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,249};memcpy(&dummy3db35c33_data_128_2547,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,250};memcpy(&dummy3db35c33_data_12a_2548,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,251};memcpy(&dummy3db35c33_data_12c_2549,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,252};memcpy(&dummy3db35c33_data_12e_2550,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,253};memcpy(&dummy3db35c33_data_130_2551,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,254};memcpy(&dummy3db35c33_data_132_2552,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,255};memcpy(&dummy3db35c33_data_134_2553,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,0};memcpy(&dummy3db35c33_data_136_2554,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,1};memcpy(&dummy3db35c33_data_138_2555,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,2};memcpy(&dummy3db35c33_data_13a_2556,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,3};memcpy(&dummy3db35c33_data_13c_2557,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,4};memcpy(&dummy3db35c33_data_13e_2558,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,5};memcpy(&dummy3db35c33_data_140_2559,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,6};memcpy(&dummy3db35c33_data_142_2560,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,7};memcpy(&dummy3db35c33_data_144_2561,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,7};memcpy(&dummy3db35c33_data_146_2562,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,7};memcpy(&dummy3db35c33_data_148_2563,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,8};memcpy(&dummy3db35c33_data_14a_2564,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,8};memcpy(&dummy3db35c33_data_14c_2565,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,8};memcpy(&dummy3db35c33_data_14e_2566,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,8};memcpy(&dummy3db35c33_data_150_2567,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,8};memcpy(&dummy3db35c33_data_152_2568,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,8};memcpy(&dummy3db35c33_data_154_2569,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,8};memcpy(&dummy3db35c33_data_156_2570,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,7};memcpy(&dummy3db35c33_data_158_2571,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,7};memcpy(&dummy3db35c33_data_15a_2572,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,7};memcpy(&dummy3db35c33_data_15c_2573,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,6};memcpy(&dummy3db35c33_data_15e_2574,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,5};memcpy(&dummy3db35c33_data_160_2575,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,4};memcpy(&dummy3db35c33_data_162_2576,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,3};memcpy(&dummy3db35c33_data_164_2577,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,2};memcpy(&dummy3db35c33_data_166_2578,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,1};memcpy(&dummy3db35c33_data_168_2579,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,0};memcpy(&dummy3db35c33_data_16a_2580,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,255};memcpy(&dummy3db35c33_data_16c_2581,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,254};memcpy(&dummy3db35c33_data_16e_2582,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,253};memcpy(&dummy3db35c33_data_170_2583,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,252};memcpy(&dummy3db35c33_data_172_2584,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,251};memcpy(&dummy3db35c33_data_174_2585,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,250};memcpy(&dummy3db35c33_data_176_2586,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,249};memcpy(&dummy3db35c33_data_178_2587,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,249};memcpy(&dummy3db35c33_data_17a_2588,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,249};memcpy(&dummy3db35c33_data_17c_2589,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,248};memcpy(&dummy3db35c33_data_17e_2590,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,248};memcpy(&dummy3db35c33_data_180_2591,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,248};memcpy(&dummy3db35c33_data_182_2592,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,246};memcpy(&dummy3db35c33_data_184_2594,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,246};memcpy(&dummy3db35c33_data_186_2595,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,246};memcpy(&dummy3db35c33_data_188_2596,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,246};memcpy(&dummy3db35c33_data_18a_2597,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,247};memcpy(&dummy3db35c33_data_18c_2598,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,247};memcpy(&dummy3db35c33_data_18e_2599,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,247};memcpy(&dummy3db35c33_data_190_2600,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,248};memcpy(&dummy3db35c33_data_192_2601,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,249};memcpy(&dummy3db35c33_data_194_2602,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,250};memcpy(&dummy3db35c33_data_196_2603,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,251};memcpy(&dummy3db35c33_data_198_2604,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,252};memcpy(&dummy3db35c33_data_19a_2605,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,253};memcpy(&dummy3db35c33_data_19c_2606,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,254};memcpy(&dummy3db35c33_data_19e_2607,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,255};memcpy(&dummy3db35c33_data_1a0_2608,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,0};memcpy(&dummy3db35c33_data_1a2_2609,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,1};memcpy(&dummy3db35c33_data_1a4_2610,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,2};memcpy(&dummy3db35c33_data_1a6_2611,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,3};memcpy(&dummy3db35c33_data_1a8_2612,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,4};memcpy(&dummy3db35c33_data_1aa_2613,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,5};memcpy(&dummy3db35c33_data_1ac_2614,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,6};memcpy(&dummy3db35c33_data_1ae_2615,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,7};memcpy(&dummy3db35c33_data_1b0_2616,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,8};memcpy(&dummy3db35c33_data_1b2_2617,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,9};memcpy(&dummy3db35c33_data_1b4_2618,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,9};memcpy(&dummy3db35c33_data_1b6_2619,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,9};memcpy(&dummy3db35c33_data_1b8_2620,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,10};memcpy(&dummy3db35c33_data_1ba_2621,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,10};memcpy(&dummy3db35c33_data_1bc_2622,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,10};memcpy(&dummy3db35c33_data_1be_2623,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,10};memcpy(&dummy3db35c33_data_1c0_2624,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,10};memcpy(&dummy3db35c33_data_1c2_2625,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,10};memcpy(&dummy3db35c33_data_1c4_2626,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,10};memcpy(&dummy3db35c33_data_1c6_2627,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,9};memcpy(&dummy3db35c33_data_1c8_2628,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,9};memcpy(&dummy3db35c33_data_1ca_2629,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,9};memcpy(&dummy3db35c33_data_1cc_2630,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,8};memcpy(&dummy3db35c33_data_1ce_2631,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,7};memcpy(&dummy3db35c33_data_1d0_2632,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,6};memcpy(&dummy3db35c33_data_1d2_2633,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,5};memcpy(&dummy3db35c33_data_1d4_2634,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,4};memcpy(&dummy3db35c33_data_1d6_2635,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,3};memcpy(&dummy3db35c33_data_1d8_2636,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,2};memcpy(&dummy3db35c33_data_1da_2637,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,1};memcpy(&dummy3db35c33_data_1dc_2638,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,0};memcpy(&dummy3db35c33_data_1de_2639,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,255};memcpy(&dummy3db35c33_data_1e0_2640,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,254};memcpy(&dummy3db35c33_data_1e2_2641,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,253};memcpy(&dummy3db35c33_data_1e4_2642,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,252};memcpy(&dummy3db35c33_data_1e6_2643,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,251};memcpy(&dummy3db35c33_data_1e8_2644,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,250};memcpy(&dummy3db35c33_data_1ea_2645,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,249};memcpy(&dummy3db35c33_data_1ec_2646,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,248};memcpy(&dummy3db35c33_data_1ee_2647,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,247};memcpy(&dummy3db35c33_data_1f0_2648,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,247};memcpy(&dummy3db35c33_data_1f2_2649,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,247};memcpy(&dummy3db35c33_data_1f4_2650,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,246};memcpy(&dummy3db35c33_data_1f6_2651,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,246};memcpy(&dummy3db35c33_data_1f8_2652,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,246};memcpy(&dummy3db35c33_data_1fa_2653,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_1fc_2661 = 3;
    dummy3db35c33_data_1fd_2662 = 5;
    {db tmp999[10]={p_ext,22,0,0,0,0,170,0,col_hud,0};memcpy(&dummy3db35c33_data_1fe_2663,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,4};memcpy(&dummy3db35c33_data_209_2668,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_20b_2669,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_20d_2670 = hud_x_org+36;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_20f_2671,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_211_2672 = hud_y_org-33;
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_213_2673,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_215_2674 = m2c::near_offset_external(dispbaralt);
    dummy3db35c33_data_217_2675 = m2c::near_offset_external(dispbaralt);
    dummy3db35c33_data_219_2676 = '0';
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_21a_2677,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,4};memcpy(&dummy3db35c33_data_21d_2682,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_21f_2683,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_221_2684 = hud_x_org+36;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_223_2685,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_225_2686 = hud_y_org-33;
    dummy3db35c33_data_227_2687 = 'R';
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_228_2688,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_22a_2689 = m2c::near_offset_external(trueradalt);
    dummy3db35c33_data_22c_2690 = m2c::near_offset_external(trueradalt);
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_22e_2691,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,4};memcpy(&dummy3db35c33_data_231_2696,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_233_2697,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_235_2698 = hud_x_org-56;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_237_2699,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_239_2700 = hud_y_org-33;
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_23b_2701,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_23d_2702 = m2c::near_offset_external(vkts);
    dummy3db35c33_data_23f_2703 = m2c::near_offset_external(vkts);
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_241_2704,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,19};memcpy(&dummy3db35c33_data_244_2709,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_246_2710,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_248_2711 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_24a_2712,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_24c_2713 = hud_y_org+27;
    {char tmp999[4]={'G','U','N','S'};memcpy(&dummy3db35c33_data_24e_2714,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_252_2715,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_254_2716 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_256_2717,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_258_2718 = hud_y_org+33;
    dummy3db35c33_data_25a_2719 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_25b_2720,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_25d_2721 = m2c::near_offset_external(cannons);
    dummy3db35c33_data_25f_2722 = m2c::near_offset_external(cannons);
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_261_2723,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,18};memcpy(&dummy3db35c33_data_264_2728,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_266_2729,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_268_2730 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_26a_2731,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_26c_2732 = hud_y_org+27;
    {char tmp999[4]={'A','I','M','9'};memcpy(&dummy3db35c33_data_26e_2733,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_272_2734,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_274_2735 = hud_x_org-48;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_276_2736,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_278_2737 = hud_y_org+33;
    dummy3db35c33_data_27a_2738 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_27b_2739,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_27d_2740 = m2c::near_offset_external(extstores)+ext_sidewinder;
    dummy3db35c33_data_27f_2741 = m2c::near_offset_external(extstores)+ext_sidewinder;
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_281_2742,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,18};memcpy(&dummy3db35c33_data_284_2747,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_286_2748,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_288_2749 = hud_x_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_28a_2750,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_28c_2751 = hud_y_org+27;
    {char tmp999[4]={'S','K','Y','F'};memcpy(&dummy3db35c33_data_28e_2752,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_292_2753,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_294_2754 = hud_x_org-48;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_296_2755,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_298_2756 = hud_y_org+33;
    dummy3db35c33_data_29a_2757 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_29b_2758,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_29d_2759 = m2c::near_offset_external(extstores)+ext_skyflash;
    dummy3db35c33_data_29f_2760 = m2c::near_offset_external(extstores)+ext_skyflash;
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_2a1_2761,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,2};memcpy(&dummy3db35c33_data_2a4_2767,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_2a6_2770,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2a8_2771 = hud_x_org+44;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_2aa_2772,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2ac_2773 = hud_y_org+21;
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_2ae_2774,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2b0_2775 = m2c::near_offset_external(dispairtgtrng);
    dummy3db35c33_data_2b2_2776 = m2c::near_offset_external(dispairtgtrng);
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_2b4_2778,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2b6_2779 = hud_x_org+44;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_2b8_2780,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2ba_2781 = hud_y_org+27;
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_2bc_2782,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2be_2783 = m2c::near_offset_external(dispairtgtalt);
    dummy3db35c33_data_2c0_2784 = m2c::near_offset_external(dispairtgtalt);
    {db tmp999[2]={15,3};memcpy(&dummy3db35c33_data_2c2_2786,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_2c4_2789,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2c6_2790 = hud_x_org+40;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_2c8_2791,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2ca_2792 = hud_y_org+33;
    {db tmp999[2]={p_ext,38};memcpy(&dummy3db35c33_data_2cc_2793,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2ce_2794 = m2c::near_offset_external(dispairtgtvel);
    dummy3db35c33_data_2d0_2795 = m2c::near_offset_external(dispairtgtvel);
    {db tmp999[2]={p_ext,16};memcpy(&dummy3db35c33_data_2d2_2797,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2d4_2798 = hud_x_org+40;
    {db tmp999[2]={p_ext,17};memcpy(&dummy3db35c33_data_2d6_2799,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2d8_2800 = hud_y_org+39;
    {db tmp999[2]={p_ext,60};memcpy(&dummy3db35c33_data_2da_2801,&tmp999,sizeof tmp999);}
    dummy3db35c33_data_2dc_2802 = m2c::near_offset_external(dispairtgthdg);
    dummy3db35c33_data_2de_2803 = m2c::near_offset_external(dispairtgthdg);
    {db tmp999[2]={15,0};memcpy(&dummy3db35c33_data_2e0_2805,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_hud(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

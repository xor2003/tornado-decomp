/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "vscreen.h"

	
 static bool cliplineend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcliplineend, _state);}

 __attribute__((weak)) bool clippoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippoly, _state);}

 __attribute__((weak)) bool clippolyline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippolyline, _state);}

 __attribute__((weak)) bool drawpoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpoly, _state);}

 __attribute__((weak)) bool drawpolyline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolyline, _state);}

 __attribute__((weak)) bool lineclipabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipabove, _state);}

 __attribute__((weak)) bool lineclipbelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipbelow, _state);}

 static bool lineclipcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipcheck, _state);}

 __attribute__((weak)) bool lineclipleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipleft, _state);}

 __attribute__((weak)) bool lineclipright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipright, _state);}

 __attribute__((weak)) bool nullpoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpoly, _state);}

 __attribute__((weak)) bool nullpolyline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpolyline, _state);}

 __attribute__((weak)) bool polyclipabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipabove, _state);}

 __attribute__((weak)) bool polyclipbelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipbelow, _state);}

 static bool polyclipcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipcheck, _state);}

 __attribute__((weak)) bool polyclipleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipleft, _state);}

 __attribute__((weak)) bool polyclipright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipright, _state);}

 __attribute__((weak)) bool vcalcoutcodes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvcalcoutcodes, _state);}

 __attribute__((weak)) bool vdotclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvdotclip, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 __attribute__((weak)) bool vpolyclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvpolyclip, _state);}

 __attribute__((weak)) bool vpolylineclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvpolylineclip, _state);}

 __attribute__((weak)) bool vquicklineclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvquicklineclip, _state);}

 __attribute__((weak)) bool vquickoutcodes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvquickoutcodes, _state);}

 __attribute__((weak)) bool vsetrotation(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvsetrotation, _state);}

 __attribute__((weak)) bool vsetviewport(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvsetviewport, _state);}

 __attribute__((weak)) bool vtransform(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvtransform, _state);}

 static bool __m2c_macrolocal_10_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_10_xcrtok, _state);}

 static bool __m2c_macrolocal_10_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_10_ycrtok, _state);}

 static bool __m2c_macrolocal_13_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_ocode1, _state);}

 static bool __m2c_macrolocal_13_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_ocode2, _state);}

 static bool __m2c_macrolocal_13_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_ocode3, _state);}

 static bool __m2c_macrolocal_13_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_ocode4, _state);}

 static bool __m2c_macrolocal_16_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_ocode1, _state);}

 static bool __m2c_macrolocal_16_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_ocode2, _state);}

 static bool __m2c_macrolocal_16_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_ocode3, _state);}

 static bool __m2c_macrolocal_16_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_ocode4, _state);}

 static bool __m2c_macrolocal_19_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_ocode1, _state);}

 static bool __m2c_macrolocal_19_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_ocode2, _state);}

 static bool __m2c_macrolocal_19_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_ocode3, _state);}

 static bool __m2c_macrolocal_19_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_ocode4, _state);}

 static bool __m2c_macrolocal_22_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_22_ocode1, _state);}

 static bool __m2c_macrolocal_22_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_22_ocode2, _state);}

 static bool __m2c_macrolocal_22_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_22_ocode3, _state);}

 static bool __m2c_macrolocal_22_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_22_ocode4, _state);}

 static bool __m2c_macrolocal_25_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_ocode1, _state);}

 static bool __m2c_macrolocal_25_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_ocode2, _state);}

 static bool __m2c_macrolocal_25_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_ocode3, _state);}

 static bool __m2c_macrolocal_25_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_ocode4, _state);}

 static bool __m2c_macrolocal_28_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_28_ocode1, _state);}

 static bool __m2c_macrolocal_28_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_28_ocode2, _state);}

 static bool __m2c_macrolocal_28_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_28_ocode3, _state);}

 static bool __m2c_macrolocal_28_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_28_ocode4, _state);}

 static bool __m2c_macrolocal_31_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_ocode1, _state);}

 static bool __m2c_macrolocal_31_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_ocode2, _state);}

 static bool __m2c_macrolocal_31_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_ocode3, _state);}

 static bool __m2c_macrolocal_31_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_ocode4, _state);}

 static bool __m2c_macrolocal_34_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_ocode1, _state);}

 static bool __m2c_macrolocal_34_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_ocode2, _state);}

 static bool __m2c_macrolocal_34_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_ocode3, _state);}

 static bool __m2c_macrolocal_34_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_ocode4, _state);}

 static bool __m2c_macrolocal_35_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_35_xcrtok, _state);}

 static bool __m2c_macrolocal_35_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_35_ycrtok, _state);}

 static bool __m2c_macrolocal_36_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_36_xcrtok, _state);}

 static bool __m2c_macrolocal_36_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_36_ycrtok, _state);}

 static bool __m2c_macrolocal_37_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_37_xcrtok, _state);}

 static bool __m2c_macrolocal_37_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_37_ycrtok, _state);}

 static bool __m2c_macrolocal_38_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_38_xcrtok, _state);}

 static bool __m2c_macrolocal_38_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_38_ycrtok, _state);}

 static bool __m2c_macrolocal_39_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_39_ocode1, _state);}

 static bool __m2c_macrolocal_39_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_39_ocode2, _state);}

 static bool __m2c_macrolocal_39_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_39_ocode3, _state);}

 static bool __m2c_macrolocal_39_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_39_ocode4, _state);}

 static bool __m2c_macrolocal_3_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_ocode1, _state);}

 static bool __m2c_macrolocal_3_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_ocode2, _state);}

 static bool __m2c_macrolocal_3_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_ocode3, _state);}

 static bool __m2c_macrolocal_3_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_ocode4, _state);}

 static bool __m2c_macrolocal_40_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_40_ocode1, _state);}

 static bool __m2c_macrolocal_40_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_40_ocode2, _state);}

 static bool __m2c_macrolocal_40_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_40_ocode3, _state);}

 static bool __m2c_macrolocal_40_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_40_ocode4, _state);}

 static bool __m2c_macrolocal_41_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_41_xcrtok, _state);}

 static bool __m2c_macrolocal_41_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_41_ycrtok, _state);}

 static bool __m2c_macrolocal_42_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_xcrtok, _state);}

 static bool __m2c_macrolocal_42_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_ycrtok, _state);}

 static bool __m2c_macrolocal_43_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_43_ocode1, _state);}

 static bool __m2c_macrolocal_43_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_43_ocode2, _state);}

 static bool __m2c_macrolocal_43_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_43_ocode3, _state);}

 static bool __m2c_macrolocal_43_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_43_ocode4, _state);}

 static bool __m2c_macrolocal_44_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_44_xcrtok, _state);}

 static bool __m2c_macrolocal_44_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_44_ycrtok, _state);}

 static bool __m2c_macrolocal_4_xcrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_xcrtok, _state);}

 static bool __m2c_macrolocal_4_ycrtok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_ycrtok, _state);}

 static bool __m2c_macrolocal_5_ocode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_5_ocode1, _state);}

 static bool __m2c_macrolocal_5_ocode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_5_ocode2, _state);}

 static bool __m2c_macrolocal_5_ocode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_5_ocode3, _state);}

 static bool __m2c_macrolocal_5_ocode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_5_ocode4, _state);}

 static bool abovecliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabovecliploop, _state);}

 static bool aboveclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveclipstart, _state);}

 static bool belowcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowcliploop, _state);}

 static bool belowclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowclipstart, _state);}

 static bool belowfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowfail, _state);}

 static bool calcendacrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcendacrt, _state);}

 static bool calcendbcrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcendbcrt, _state);}

 static bool clipdiverror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipdiverror, _state);}

 static bool clipenda(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipenda, _state);}

 static bool clipendb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipendb, _state);}

 static bool clipendexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipendexit, _state);}

 static bool clipendfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipendfail, _state);}

 static bool clipobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipobject, _state);}

 static bool clipplinedraw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipplinedraw, _state);}

 static bool clipplineendb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipplineendb, _state);}

 static bool clipplineexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipplineexit, _state);}

 static bool clipplinefail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipplinefail, _state);}

 static bool clipplineloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipplineloop, _state);}

 static bool clippolyfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippolyfail, _state);}

 static bool clippolyfaillnk(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippolyfaillnk, _state);}

 static bool clipswitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipswitch, _state);}

 static bool dotclipfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdotclipfail, _state);}

 static bool drawobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawobject, _state);}

 static bool drawplineexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawplineexit, _state);}

 static bool drawplinefail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawplinefail, _state);}

 static bool drawplineloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawplineloop, _state);}

 static bool drawpolyfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolyfail, _state);}

 static bool drawpolyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolyloop, _state);}

 static bool genxycrtloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgenxycrtloop, _state);}

 __attribute__((weak)) bool intoaboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoaboveclip, _state);}

 __attribute__((weak)) bool intobelowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintobelowclip, _state);}

 __attribute__((weak)) bool intoleftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoleftclip, _state);}

 __attribute__((weak)) bool intorightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintorightclip, _state);}

 static bool lclipa_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipa_eq, _state);}

 static bool lclipa_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipa_gt, _state);}

 static bool lclipa_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipa_lt, _state);}

 static bool lclipabovefail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipabovefail, _state);}

 static bool lclipacont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipacont, _state);}

 static bool lclipb_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipb_eq, _state);}

 static bool lclipb_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipb_gt, _state);}

 static bool lclipb_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipb_lt, _state);}

 static bool lclipbcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipbcont, _state);}

 static bool lclipbelowfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipbelowfail, _state);}

 static bool lclipdiverror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipdiverror, _state);}

 static bool lclipl_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipl_eq, _state);}

 static bool lclipl_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipl_gt, _state);}

 static bool lclipl_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipl_lt, _state);}

 static bool lcliplcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klcliplcont, _state);}

 static bool lclipleftfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipleftfail, _state);}

 static bool lclipr_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipr_eq, _state);}

 static bool lclipr_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipr_gt, _state);}

 static bool lclipr_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipr_lt, _state);}

 static bool lcliprcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klcliprcont, _state);}

 static bool lcliprightfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klcliprightfail, _state);}

 static bool leftcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftcliploop, _state);}

 static bool leftfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftfail, _state);}

 static bool nextaboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextaboveclip, _state);}

 static bool nextbelowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextbelowclip, _state);}

 static bool nextleftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextleftclip, _state);}

 static bool nextpolycoord(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextpolycoord, _state);}

 static bool nextrightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextrightclip, _state);}

 static bool nullplineloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullplineloop, _state);}

 static bool nullpolyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpolyloop, _state);}

 static bool ocodeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kocodeloop, _state);}

 static bool pclipa_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipa_eq, _state);}

 static bool pclipa_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipa_gt, _state);}

 static bool pclipa_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipa_lt, _state);}

 static bool pclipabovefail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipabovefail, _state);}

 static bool pclipacont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipacont, _state);}

 static bool pclipb_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipb_eq, _state);}

 static bool pclipb_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipb_gt, _state);}

 static bool pclipb_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipb_lt, _state);}

 static bool pclipbcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipbcont, _state);}

 static bool pclipbelowfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipbelowfail, _state);}

 static bool pclipl_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipl_eq, _state);}

 static bool pclipl_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipl_gt, _state);}

 static bool pclipl_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipl_lt, _state);}

 static bool pcliplcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpcliplcont, _state);}

 static bool pclipleftfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipleftfail, _state);}

 static bool pclipr_eq(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipr_eq, _state);}

 static bool pclipr_gt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipr_gt, _state);}

 static bool pclipr_lt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipr_lt, _state);}

 static bool pcliprcont(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpcliprcont, _state);}

 static bool pcliprightfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpcliprightfail, _state);}

 static bool plinenonvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kplinenonvis, _state);}

 static bool plinevistest(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kplinevistest, _state);}

 static bool polycrtloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolycrtloop, _state);}

 static bool qlineclipfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqlineclipfail, _state);}

 static bool quickocodeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kquickocodeloop, _state);}

 static bool rightcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightcliploop, _state);}

 static bool rightclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightclipstart, _state);}

 static bool rightfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightfail, _state);}

 static bool skipaboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipaboveclip, _state);}

 static bool skipabovepoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipabovepoint, _state);}

 static bool skipbelowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbelowclip, _state);}

 static bool skipbelowpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbelowpoint, _state);}

 static bool skipleftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipleftclip, _state);}

 static bool skipleftpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipleftpoint, _state);}

 static bool skiplinebelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplinebelow, _state);}

 static bool skiplineleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplineleft, _state);}

 static bool skiplineright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplineright, _state);}

 static bool skipobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipobject, _state);}

 static bool skiprightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprightclip, _state);}

 static bool skiprightpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprightpoint, _state);}

 __attribute__((weak)) bool sortpolycrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpolycrt, _state);}

 static bool sortpolyterm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpolyterm, _state);}

 static bool sortpolyvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpolyvis, _state);}

	
	#include "vscreen_default_seg_lifted.cpp"
#include "vscreen_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_10_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_10_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_22_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_22_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_22_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_22_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_28_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_28_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_28_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_28_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_35_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_35_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_36_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_36_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_37_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_37_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_38_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_38_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_39_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_39_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_39_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_39_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_40_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_40_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_40_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_40_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_41_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_41_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_43_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_43_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_43_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_43_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_44_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_44_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_xcrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_ycrtok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_ocode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_ocode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_ocode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_ocode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kabovecliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboveclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcendacrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcendbcrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipdiverror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipenda: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipendb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipendexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipendfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcliplineend: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipplinedraw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipplineendb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipplineexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipplinefail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipplineloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippolyfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippolyfaillnk: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippolyline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipswitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdotclipfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawplineexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawplinefail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawplineloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolyfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolyline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgenxycrtloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintobelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintorightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipa_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipa_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipa_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipabovefail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipacont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipb_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipb_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipb_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipbcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipbelowfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipdiverror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipl_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipl_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipl_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klcliplcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipleftfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipr_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipr_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipr_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klcliprcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klcliprightfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipbelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knextaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextbelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextpolycoord: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextrightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullplineloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpolyline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpolyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kocodeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipa_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipa_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipa_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipabovefail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipacont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipb_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipb_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipb_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipbcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipbelowfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipl_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipl_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipl_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpcliplcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipleftfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipr_eq: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipr_gt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipr_lt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpcliprcont: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpcliprightfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kplinenonvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kplinevistest: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipbelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolycrtloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqlineclipfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kquickocodeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipabovepoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbelowpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipleftpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplinebelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplineleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplineright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprightpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpolycrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpolyterm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpolyvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvcalcoutcodes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvdotclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kviscode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvpolyclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvpolylineclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvquicklineclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvquickoutcodes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvsetrotation: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvsetviewport: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvtransform: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_vscreen()
          {
              vp = viewport{0,0,0,0,0,0};
    clipl = 0;
    clipr = 0;
    clipb = 0;
    clipa = 0;
    xadjust = 0;
    yadjust = 0;
    x_org = 0;
    y_org = 0;
    xcrtmax = 0;
    ycrtmax = 0;
    vsinr = 0;
    vcosr = 0;
    objectdrawmode = 0;
    polyclipmode = m2c::kglobal_drawpoly;
    dummy36e2d4b2_data_26_435 = m2c::kglobal_clippoly;
    dummy36e2d4b2_data_28_436 = m2c::kglobal_nullpoly;
    plineclipmode = m2c::kglobal_drawpolyline;
    dummy36e2d4b2_data_2c_438 = m2c::kglobal_clippolyline;
    dummy36e2d4b2_data_2e_439 = m2c::kglobal_nullpolyline;
    lastptr = 0;
    {db tmp999[2]={0};memcpy(&lookahead,&tmp999,sizeof tmp999);}
    intopolyclip = m2c::kglobal_intoleftclip;
    dummy36e2d4b2_data_36_447 = m2c::kglobal_intorightclip;
    dummy36e2d4b2_data_38_448 = m2c::kglobal_intobelowclip;
    dummy36e2d4b2_data_3a_449 = m2c::kglobal_intoaboveclip;
    dummy36e2d4b2_data_3c_450 = m2c::kglobal_sortpolycrt;
    tempptr1 = 0;
    tempptr2 = 0;
    tempptr3 = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_vscreen(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

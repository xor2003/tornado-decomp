/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "circle.h"

	
 __attribute__((weak)) bool circlefill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcirclefill, _state);}

 static bool gcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgcode_0_proc, _state);}

 static bool abovedone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabovedone, _state);}

 static bool aboveleftdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveleftdone, _state);}

 static bool aboveleftskip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveleftskip, _state);}

 static bool aboverightdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboverightdone, _state);}

 static bool aboverightskip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboverightskip, _state);}

 static bool belowdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowdone, _state);}

 static bool belowleftdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowleftdone, _state);}

 static bool belowleftskip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowleftskip, _state);}

 static bool belowrightdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowrightdone, _state);}

 static bool belowrightskip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowrightskip, _state);}

 static bool circledone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircledone, _state);}

 __attribute__((weak)) bool circleexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleexit, _state);}

 static bool circleloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop1, _state);}

 static bool circleloop10(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop10, _state);}

 static bool circleloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop2, _state);}

 static bool circleloop3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop3, _state);}

 static bool circleloop4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop4, _state);}

 static bool circleloop5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop5, _state);}

 static bool circleloop6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop6, _state);}

 static bool circleloop7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop7, _state);}

 static bool circleloop8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop8, _state);}

 static bool circleloop9(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcircleloop9, _state);}

 __attribute__((weak)) bool circlemesh(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcirclemesh, _state);}

 __attribute__((weak)) bool circlesmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcirclesmoke, _state);}

 __attribute__((weak)) bool clipabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipabove, _state);}

 __attribute__((weak)) bool clipaboveleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipaboveleft, _state);}

 __attribute__((weak)) bool clipaboveright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipaboveright, _state);}

 __attribute__((weak)) bool clipbelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipbelow, _state);}

 __attribute__((weak)) bool clipbelowleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipbelowleft, _state);}

 __attribute__((weak)) bool clipbelowright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipbelowright, _state);}

 static bool clipcirclelink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipcirclelink, _state);}

 __attribute__((weak)) bool clipleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipleft, _state);}

 static bool clippedcircle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippedcircle, _state);}

 __attribute__((weak)) bool clipright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipright, _state);}

 static bool insideclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinsideclip, _state);}

 static bool intocirclefill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintocirclefill, _state);}

 static bool leftdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftdone, _state);}

 static bool ok10_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_1, _state);}

 static bool ok10_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_2, _state);}

 static bool ok10_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_3, _state);}

 static bool ok10_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_4, _state);}

 static bool ok10_5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_5, _state);}

 static bool ok10_6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_6, _state);}

 static bool ok10_7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_7, _state);}

 static bool ok10_8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok10_8, _state);}

 static bool ok2_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_1, _state);}

 static bool ok2_10(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_10, _state);}

 static bool ok2_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_2, _state);}

 static bool ok2_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_3, _state);}

 static bool ok2_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_4, _state);}

 static bool ok2_5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_5, _state);}

 static bool ok2_6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_6, _state);}

 static bool ok2_7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_7, _state);}

 static bool ok2_8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_8, _state);}

 static bool ok2_9(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok2_9, _state);}

 static bool ok3_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok3_1, _state);}

 static bool ok3_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok3_2, _state);}

 static bool ok3_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok3_3, _state);}

 static bool ok3_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok3_4, _state);}

 static bool ok3_5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok3_5, _state);}

 static bool ok3_6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok3_6, _state);}

 static bool ok4_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok4_1, _state);}

 static bool ok4_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok4_2, _state);}

 static bool ok4_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok4_3, _state);}

 static bool ok4_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok4_4, _state);}

 static bool ok5_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok5_1, _state);}

 static bool ok5_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok5_2, _state);}

 static bool ok5_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok5_3, _state);}

 static bool ok5_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok5_4, _state);}

 static bool ok6_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok6_1, _state);}

 static bool ok6_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok6_2, _state);}

 static bool ok6_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok6_3, _state);}

 static bool ok6_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok6_4, _state);}

 static bool ok6_5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok6_5, _state);}

 static bool ok6_6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok6_6, _state);}

 static bool ok7_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok7_1, _state);}

 static bool ok7_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok7_2, _state);}

 static bool ok7_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok7_3, _state);}

 static bool ok7_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok7_4, _state);}

 static bool ok8_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok8_1, _state);}

 static bool ok8_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok8_2, _state);}

 static bool ok8_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok8_3, _state);}

 static bool ok8_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok8_4, _state);}

 static bool ok9_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_1, _state);}

 static bool ok9_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_2, _state);}

 static bool ok9_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_3, _state);}

 static bool ok9_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_4, _state);}

 static bool ok9_5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_5, _state);}

 static bool ok9_6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_6, _state);}

 static bool ok9_7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_7, _state);}

 static bool ok9_8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kok9_8, _state);}

 static bool outcode1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koutcode1, _state);}

 static bool outcode2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koutcode2, _state);}

 static bool outcode3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koutcode3, _state);}

 static bool outcode4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koutcode4, _state);}

 static bool outsideclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koutsideclip, _state);}

 static bool outsidelink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koutsidelink, _state);}

 static bool rightdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightdone, _state);}

 static bool skip10_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip10_1, _state);}

 static bool skip10_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip10_2, _state);}

 static bool skip10_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip10_3, _state);}

 static bool skip10_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip10_4, _state);}

 static bool skip2_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip2_1, _state);}

 static bool skip2_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip2_2, _state);}

 static bool skip2_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip2_3, _state);}

 static bool skip2_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip2_4, _state);}

 static bool skip3_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip3_1, _state);}

 static bool skip3_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip3_2, _state);}

 static bool skip4_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip4_1, _state);}

 static bool skip4_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip4_2, _state);}

 static bool skip5_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip5_1, _state);}

 static bool skip5_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip5_2, _state);}

 static bool skip6_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip6_1, _state);}

 static bool skip6_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip6_2, _state);}

 static bool skip7_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip7_1, _state);}

 static bool skip7_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip7_2, _state);}

 static bool skip8_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip8_1, _state);}

 static bool skip8_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip8_2, _state);}

 static bool skip9_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip9_1, _state);}

 static bool skip9_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip9_2, _state);}

 static bool skip9_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip9_3, _state);}

 static bool skip9_4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip9_4, _state);}

 static bool skipxyocts1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts1, _state);}

 static bool skipxyocts10(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts10, _state);}

 static bool skipxyocts2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts2, _state);}

 static bool skipxyocts3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts3, _state);}

 static bool skipxyocts4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts4, _state);}

 static bool skipxyocts5(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts5, _state);}

 static bool skipxyocts6(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts6, _state);}

 static bool skipxyocts7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts7, _state);}

 static bool skipxyocts8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts8, _state);}

 static bool skipxyocts9(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxyocts9, _state);}

 static bool unclippedcircle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunclippedcircle, _state);}

	
	#include "circle_default_seg_lifted.cpp"
#include "circle_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kabovedone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboveleftdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboveleftskip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboverightdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboverightskip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowleftdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowleftskip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowrightdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowrightskip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircledone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcirclefill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcircleloop9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcirclemesh: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcirclesmoke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipaboveleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipaboveright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipbelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipbelowleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipbelowright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipcirclelink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippedcircle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgcode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinsideclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintocirclefill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kok10_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok10_8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok2_9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok3_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok3_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok3_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok3_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok3_5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok3_6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok4_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok4_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok4_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok4_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok5_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok5_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok5_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok5_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok6_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok6_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok6_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok6_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok6_5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok6_6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok7_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok7_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok7_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok7_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok8_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok8_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok8_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok8_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kok9_8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koutcode1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koutcode2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koutcode3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koutcode4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koutsideclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koutsidelink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip10_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip10_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip10_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip10_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip2_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip2_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip2_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip2_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip3_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip3_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip4_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip4_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip5_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip5_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip6_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip6_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip7_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip7_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip8_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip8_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip9_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip9_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip9_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip9_4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxyocts9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunclippedcircle: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_circle()
          {
              {dw tmp999=0;MYCOPY(circlexmin)}
    {dw tmp999=319;MYCOPY(circlexmax)}
    {dw tmp999=0;MYCOPY(circleymin)}
    {dw tmp999=199;MYCOPY(circleymax)}
    {db tmp999[2]={0};MYCOPY(circleflag)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(circlevectors)}
    {dw tmp999=m2c::kglobal_clipleft;MYCOPY(dummy08c42053_data_c_86)}
    {dw tmp999=m2c::kglobal_clipright;MYCOPY(dummy08c42053_data_e_87)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_10_88)}
    {dw tmp999=m2c::kglobal_clipbelow;MYCOPY(dummy08c42053_data_12_89)}
    {dw tmp999=m2c::kglobal_clipbelowleft;MYCOPY(dummy08c42053_data_14_90)}
    {dw tmp999=m2c::kglobal_clipbelowright;MYCOPY(dummy08c42053_data_16_91)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_18_92)}
    {dw tmp999=m2c::kglobal_clipabove;MYCOPY(dummy08c42053_data_1a_93)}
    {dw tmp999=m2c::kglobal_clipaboveleft;MYCOPY(dummy08c42053_data_1c_94)}
    {dw tmp999=m2c::kglobal_clipaboveright;MYCOPY(dummy08c42053_data_1e_95)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_20_96)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_22_97)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_24_98)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_26_99)}
    {dw tmp999=m2c::kglobal_circleexit;MYCOPY(dummy08c42053_data_28_100)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_circle(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

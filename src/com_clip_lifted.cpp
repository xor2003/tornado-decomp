/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "com_clip.h"

	
 __attribute__((weak)) bool calccirclecrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalccirclecrt, _state);}

 __attribute__((weak)) bool calccrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalccrt, _state);}

 __attribute__((weak)) bool calcocode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcocode, _state);}

 __attribute__((weak)) bool calcoutcodes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcoutcodes, _state);}

 static bool circlecrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcirclecrt, _state);}

 static bool cliplineend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcliplineend, _state);}

 __attribute__((weak)) bool clippoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippoly, _state);}

 __attribute__((weak)) bool clippolydots(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippolydots, _state);}

 __attribute__((weak)) bool clippolyline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclippolyline, _state);}

 __attribute__((weak)) bool cycliccheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcycliccheck, _state);}

 __attribute__((weak)) bool dotclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdotclip, _state);}

 __attribute__((weak)) bool drawpoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpoly, _state);}

 __attribute__((weak)) bool drawpolydots(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolydots, _state);}

 __attribute__((weak)) bool drawpolyline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolyline, _state);}

 __attribute__((weak)) bool fastcyclic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfastcyclic, _state);}

 __attribute__((weak)) bool horizonclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khorizonclip, _state);}

 __attribute__((weak)) bool lineclipabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipabove, _state);}

 __attribute__((weak)) bool lineclipbehind(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipbehind, _state);}

 __attribute__((weak)) bool lineclipbelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipbelow, _state);}

 static bool lineclipcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipcheck, _state);}

 __attribute__((weak)) bool lineclipleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipleft, _state);}

 __attribute__((weak)) bool lineclipright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klineclipright, _state);}

 __attribute__((weak)) bool nullcyclic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullcyclic, _state);}

 __attribute__((weak)) bool nullpoly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpoly, _state);}

 __attribute__((weak)) bool nullpolydots(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpolydots, _state);}

 __attribute__((weak)) bool nullpolyline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpolyline, _state);}

 __attribute__((weak)) bool polyclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclip, _state);}

 __attribute__((weak)) bool polyclipabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipabove, _state);}

 __attribute__((weak)) bool polyclipbehind(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipbehind, _state);}

 __attribute__((weak)) bool polyclipbelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipbelow, _state);}

 static bool polyclipcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipcheck, _state);}

 __attribute__((weak)) bool polyclipleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipleft, _state);}

 __attribute__((weak)) bool polyclipright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolyclipright, _state);}

 __attribute__((weak)) bool polydotclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolydotclip, _state);}

 __attribute__((weak)) bool polylineclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolylineclip, _state);}

 __attribute__((weak)) bool quicklineclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kquicklineclip, _state);}

 __attribute__((weak)) bool quickoutcodes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kquickoutcodes, _state);}

 __attribute__((weak)) bool scalevpyramid(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscalevpyramid, _state);}

 __attribute__((weak)) bool setviewmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetviewmode, _state);}

 __attribute__((weak)) bool slowcyclic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kslowcyclic, _state);}

 static bool viscode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kviscode_0_proc, _state);}

 __attribute__((weak)) bool xcalcunclipcrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxcalcunclipcrt, _state);}

 __attribute__((weak)) bool xdotclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxdotclip, _state);}

 static bool abovecliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabovecliploop, _state);}

 static bool aboveclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveclipstart, _state);}

 static bool abovelclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabovelclipdone, _state);}

 static bool abovepclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kabovepclipdone, _state);}

 static bool behindcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbehindcliploop, _state);}

 static bool behindfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbehindfail, _state);}

 static bool behindlclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbehindlclipdone, _state);}

 static bool behindpclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbehindpclipdone, _state);}

 static bool belowcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowcliploop, _state);}

 static bool belowclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowclipstart, _state);}

 static bool belowfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowfail, _state);}

 static bool belowlclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowlclipdone, _state);}

 static bool belowpclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowpclipdone, _state);}

 static bool calcendacrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcendacrt, _state);}

 static bool calcendbcrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcendbcrt, _state);}

 static bool calcocodeexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcocodeexit, _state);}

 static bool calcresult1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcresult1, _state);}

 static bool calcresult2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcresult2, _state);}

 static bool calcresult3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcresult3, _state);}

 static bool checkzy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckzy1, _state);}

 static bool checkzy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckzy2, _state);}

 static bool clipdiverror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipdiverror, _state);}

 static bool clipdivtest(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipdivtest, _state);}

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

 static bool contcyclic1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontcyclic1, _state);}

 static bool contcyclic2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontcyclic2, _state);}

 static bool dotclipfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdotclipfail, _state);}

 static bool drawobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawobject, _state);}

 static bool drawplineexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawplineexit, _state);}

 static bool drawplinefail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawplinefail, _state);}

 static bool drawplineloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawplineloop, _state);}

 static bool drawpolyfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolyfail, _state);}

 static bool drawpolyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpolyloop, _state);}

 static bool fastcyclicfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfastcyclicfail, _state);}

 static bool genxycrtloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgenxycrtloop, _state);}

 static bool hrznclipfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khrznclipfail, _state);}

 __attribute__((weak)) bool intoaboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoaboveclip, _state);}

 __attribute__((weak)) bool intobehindclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintobehindclip, _state);}

 __attribute__((weak)) bool intobelowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintobelowclip, _state);}

 __attribute__((weak)) bool intoleftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoleftclip, _state);}

 __attribute__((weak)) bool intorightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintorightclip, _state);}

 static bool lclipabove1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipabove1, _state);}

 static bool lclipbehind1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipbehind1, _state);}

 static bool lclipbelow1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipbelow1, _state);}

 static bool lclipdiverror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipdiverror, _state);}

 static bool lclipdivtest(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipdivtest, _state);}

 static bool lclipleft1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipleft1, _state);}

 static bool lclipright1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klclipright1, _state);}

 static bool leftcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftcliploop, _state);}

 static bool leftclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftclipstart, _state);}

 static bool leftfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftfail, _state);}

 static bool leftlclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftlclipdone, _state);}

 static bool leftpclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftpclipdone, _state);}

 static bool loopback1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloopback1, _state);}

 static bool loopback2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloopback2, _state);}

 static bool nextaboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextaboveclip, _state);}

 static bool nextbehindclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextbehindclip, _state);}

 static bool nextbelowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextbelowclip, _state);}

 static bool nextleftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextleftclip, _state);}

 static bool nextpolycoord(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextpolycoord, _state);}

 static bool nextrightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextrightclip, _state);}

 static bool nullplineloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullplineloop, _state);}

 static bool nullpolyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullpolyloop, _state);}

 static bool ocodeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kocodeloop, _state);}

 static bool pclipabove1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipabove1, _state);}

 static bool pclipbehind1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipbehind1, _state);}

 static bool pclipbelow1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipbelow1, _state);}

 static bool pclipleft1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipleft1, _state);}

 static bool pclipright1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpclipright1, _state);}

 static bool plinenonvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kplinenonvis, _state);}

 static bool plinevistest(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kplinevistest, _state);}

 static bool polycrtloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolycrtloop, _state);}

 static bool qlineclipfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqlineclipfail, _state);}

 static bool quickocodeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kquickocodeloop, _state);}

 static bool redoclippline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kredoclippline, _state);}

 static bool redodrawpline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kredodrawpline, _state);}

 static bool rightcliploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightcliploop, _state);}

 static bool rightclipstart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightclipstart, _state);}

 static bool rightfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightfail, _state);}

 static bool rightlclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightlclipdone, _state);}

 static bool rightpclipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightpclipdone, _state);}

 static bool skipaboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipaboveclip, _state);}

 static bool skipabovepoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipabovepoint, _state);}

 static bool skipbehindclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbehindclip, _state);}

 static bool skipbehindpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbehindpoint, _state);}

 static bool skipbelowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbelowclip, _state);}

 static bool skipbelowpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbelowpoint, _state);}

 static bool skipleftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipleftclip, _state);}

 static bool skipleftpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipleftpoint, _state);}

 static bool skiplinebehind(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplinebehind, _state);}

 static bool skiplinebelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplinebelow, _state);}

 static bool skiplineleft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplineleft, _state);}

 static bool skiplineright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplineright, _state);}

 static bool skipobject(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipobject, _state);}

 static bool skippolypoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippolypoint, _state);}

 static bool skiprightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprightclip, _state);}

 static bool skiprightpoint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprightpoint, _state);}

 static bool slowcyclicfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kslowcyclicfail, _state);}

 __attribute__((weak)) bool sortpolycrt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpolycrt, _state);}

 static bool sortpolyterm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpolyterm, _state);}

 static bool sortpolyvis(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpolyvis, _state);}

 static bool x2y2loop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kx2y2loop, _state);}

 static bool x3y3loop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kx3y3loop, _state);}

 static bool x4y4loop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kx4y4loop, _state);}

 static bool x5y5loop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kx5y5loop, _state);}

 static bool xdotclipfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxdotclipfail, _state);}

 static bool xneg1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxneg1, _state);}

 static bool xneg2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxneg2, _state);}

 static bool yneg1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kyneg1, _state);}

 static bool zneg1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzneg1, _state);}

 static bool zneg2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzneg2, _state);}

	
	#include "com_clip_default_seg_lifted.cpp"
#include "com_clip_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kabovecliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboveclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kabovelclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kabovepclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbehindcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbehindfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbehindlclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbehindpclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowlclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowpclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalccirclecrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalccrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcendacrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcendbcrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcocode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcocodeexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcoutcodes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcresult1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcresult2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcresult3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckzy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckzy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcirclecrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipdiverror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipdivtest: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kclippolydots: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippolyfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippolyfaillnk: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclippolyline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipswitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontcyclic1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontcyclic2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcycliccheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdotclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdotclipfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawplineexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawplinefail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawplineloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolydots: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolyfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolyline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpolyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kfastcyclic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfastcyclicfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgenxycrtloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khorizonclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khrznclipfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintobehindclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintobelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintorightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipabove1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipbehind1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipbelow1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipdiverror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipdivtest: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipleft1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klclipright1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftlclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftpclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipbehind: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipbelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klineclipright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloopback1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloopback2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knextaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextbehindclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextbelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextpolycoord: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextrightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullcyclic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullplineloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpoly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpolydots: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpolyline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullpolyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kocodeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipabove1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipbehind1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipbelow1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipleft1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpclipright1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kplinenonvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kplinevistest: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipbehind: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipbelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolyclipright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolycrtloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolydotclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpolylineclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqlineclipfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kquicklineclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kquickocodeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kquickoutcodes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kredoclippline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kredodrawpline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightcliploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightclipstart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightlclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krightpclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscalevpyramid: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetviewmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipabovepoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbehindclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbehindpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbelowpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipleftpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplinebehind: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplinebelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplineleft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplineright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipobject: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippolypoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprightpoint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kslowcyclic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kslowcyclicfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpolycrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpolyterm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpolyvis: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kviscode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kx2y2loop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kx3y3loop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kx4y4loop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kx5y5loop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxcalcunclipcrt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxdotclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxdotclipfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxneg1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxneg2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kyneg1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzneg1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzneg2: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_com_clip()
          {
              clipwndwxorg = 0;
    {db tmp999[2]={0};memcpy(&clipwndwyorg,&tmp999,sizeof tmp999);}
    clipwndwxmax = 0;
    {db tmp999[2]={0};memcpy(&clipwndwymax,&tmp999,sizeof tmp999);}
    clipwndwwidth = 0;
    clipwndwdepth = 0;
    {dw tmp999[2]={int_width,int_depth};memcpy(&clipwndwsize,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={alt_width,alt_depth};memcpy(&dummy35ce81fe_data_10_399,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={ext_width,ext_depth};memcpy(&dummy35ce81fe_data_14_400,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={tv1_width,tv1_depth};memcpy(&dummy35ce81fe_data_18_401,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={tv2_width,tv2_depth};memcpy(&dummy35ce81fe_data_1c_402,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={tv3_width,tv3_depth};memcpy(&dummy35ce81fe_data_20_403,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={tv4_width,tv4_depth};memcpy(&dummy35ce81fe_data_24_404,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={tv5_width,tv5_depth};memcpy(&dummy35ce81fe_data_28_405,&tmp999,sizeof tmp999);}
    varcliporg = 0;
    _scalevpyramid = 0;
    dummy35ce81fe_data_31_416 = m2c::kglobal_int_scalevp;
    dummy35ce81fe_data_33_417 = m2c::kglobal_alt_scalevp;
    dummy35ce81fe_data_35_418 = m2c::kglobal_ext_scalevp;
    dummy35ce81fe_data_37_419 = m2c::kglobal_tv1_scalevp;
    dummy35ce81fe_data_39_420 = m2c::kglobal_tv2_scalevp;
    dummy35ce81fe_data_3b_421 = m2c::kglobal_tv3_scalevp;
    dummy35ce81fe_data_3d_422 = m2c::kglobal_tv4_scalevp;
    dummy35ce81fe_data_3f_423 = m2c::kglobal_tv5_scalevp;
    _calccrt = 0;
    dummy35ce81fe_data_43_425 = m2c::kglobal_int_calccrt;
    dummy35ce81fe_data_45_426 = m2c::kglobal_alt_calccrt;
    dummy35ce81fe_data_47_427 = m2c::kglobal_ext_calccrt;
    dummy35ce81fe_data_49_428 = m2c::kglobal_tv1_calccrt;
    dummy35ce81fe_data_4b_429 = m2c::kglobal_tv2_calccrt;
    dummy35ce81fe_data_4d_430 = m2c::kglobal_tv3_calccrt;
    dummy35ce81fe_data_4f_431 = m2c::kglobal_tv4_calccrt;
    dummy35ce81fe_data_51_432 = m2c::kglobal_tv5_calccrt;
    _circlecrt = 0;
    dummy35ce81fe_data_55_434 = m2c::kglobal_int_circlecrt;
    dummy35ce81fe_data_57_435 = m2c::kglobal_alt_circlecrt;
    dummy35ce81fe_data_59_436 = m2c::kglobal_ext_circlecrt;
    dummy35ce81fe_data_5b_437 = m2c::kglobal_tv1_circlecrt;
    dummy35ce81fe_data_5d_438 = m2c::kglobal_tv2_circlecrt;
    dummy35ce81fe_data_5f_439 = m2c::kglobal_tv3_circlecrt;
    dummy35ce81fe_data_61_440 = m2c::kglobal_tv4_circlecrt;
    dummy35ce81fe_data_63_441 = m2c::kglobal_tv5_circlecrt;
    objectdrawmode = 0;
    polyclipmode = m2c::kglobal_drawpoly;
    dummy35ce81fe_data_69_451 = m2c::kglobal_clippoly;
    dummy35ce81fe_data_6b_452 = m2c::kglobal_nullpoly;
    plineclipmode = m2c::kglobal_drawpolyline;
    dummy35ce81fe_data_6f_454 = m2c::kglobal_clippolyline;
    dummy35ce81fe_data_71_455 = m2c::kglobal_nullpolyline;
    pdotclipmode = m2c::kglobal_drawpolydots;
    dummy35ce81fe_data_75_457 = m2c::kglobal_clippolydots;
    dummy35ce81fe_data_77_458 = m2c::kglobal_nullpolydots;
    cyclicmode = m2c::kglobal_fastcyclic;
    dummy35ce81fe_data_7b_460 = m2c::kglobal_slowcyclic;
    dummy35ce81fe_data_7d_461 = m2c::kglobal_nullcyclic;
    {dw tmp999[512]={0};memcpy(&clipbuffer,&tmp999,sizeof tmp999);}
    lastptr = 0;
    {db tmp999[2]={0};memcpy(&lookahead,&tmp999,sizeof tmp999);}
    intopolyclip = m2c::kglobal_intobehindclip;
    dummy35ce81fe_data_485_471 = m2c::kglobal_intoleftclip;
    dummy35ce81fe_data_487_472 = m2c::kglobal_intorightclip;
    dummy35ce81fe_data_489_473 = m2c::kglobal_intobelowclip;
    dummy35ce81fe_data_48b_474 = m2c::kglobal_intoaboveclip;
    dummy35ce81fe_data_48d_475 = m2c::kglobal_sortpolycrt;
    xenda = 0;
    yenda = 0;
    zenda = 0;
    {db tmp999[2]={0};memcpy(&ocodeenda,&tmp999,sizeof tmp999);}
    xendb = 0;
    yendb = 0;
    zendb = 0;
    xendc = 0;
    yendc = 0;
    zendc = 0;
    cliprecover = 0;
    tempptr1 = 0;
    tempptr2 = 0;
    tempptr3 = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_com_clip(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "vga_drvr.h"

	
 __attribute__((weak)) bool convertvgadata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvertvgadata, _state);}

 __attribute__((weak)) bool fadedown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadedown, _state);}

 __attribute__((weak)) bool fadein(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadein, _state);}

 __attribute__((weak)) bool fadeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeout, _state);}

 __attribute__((weak)) bool fadepalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadepalette, _state);}

 __attribute__((weak)) bool fadeup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeup, _state);}

 static bool gcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgcode_0_proc, _state);}

 __attribute__((weak)) bool instantfadein(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstantfadein, _state);}

 __attribute__((weak)) bool instantfadeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinstantfadeout, _state);}

 __attribute__((weak)) bool qfadein(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqfadein, _state);}

 __attribute__((weak)) bool qfadeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqfadeout, _state);}

 __attribute__((weak)) bool readdacblock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreaddacblock, _state);}

 __attribute__((weak)) bool screenshaker(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscreenshaker, _state);}

 __attribute__((weak)) bool setdacblock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetdacblock, _state);}

 __attribute__((weak)) bool unpackdeltapic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunpackdeltapic, _state);}

 __attribute__((weak)) bool updatefade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatefade, _state);}

 __attribute__((weak)) bool vga_bfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_bfill, _state);}

 __attribute__((weak)) bool vga_bsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_bsprite, _state);}

 __attribute__((weak)) bool vga_calcaddr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_calcaddr, _state);}

 __attribute__((weak)) bool vga_dload(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_dload, _state);}

 __attribute__((weak)) bool vga_hfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_hfill, _state);}

 __attribute__((weak)) bool vga_hline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_hline, _state);}

 __attribute__((weak)) bool vga_initms(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_initms, _state);}

 __attribute__((weak)) bool vga_initqs(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_initqs, _state);}

 __attribute__((weak)) bool vga_initss(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_initss, _state);}

 __attribute__((weak)) bool vga_line(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_line, _state);}

 __attribute__((weak)) bool vga_loadmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_loadmouse, _state);}

 __attribute__((weak)) bool vga_loadscreen(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_loadscreen, _state);}

 __attribute__((weak)) bool vga_mfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_mfill, _state);}

 __attribute__((weak)) bool vga_msprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_msprite, _state);}

 __attribute__((weak)) bool vga_pfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_pfill, _state);}

 __attribute__((weak)) bool vga_prtc1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_prtc1, _state);}

 __attribute__((weak)) bool vga_prtc2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_prtc2, _state);}

 __attribute__((weak)) bool vga_prtc3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_prtc3, _state);}

 __attribute__((weak)) bool vga_qsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_qsprite, _state);}

 __attribute__((weak)) bool vga_savemouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_savemouse, _state);}

 __attribute__((weak)) bool vga_savescreen(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_savescreen, _state);}

 __attribute__((weak)) bool vga_setpx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_setpx, _state);}

 __attribute__((weak)) bool vga_sfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_sfill, _state);}

 __attribute__((weak)) bool vga_ssprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_ssprite, _state);}

 __attribute__((weak)) bool vga_vline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_vline, _state);}

 __attribute__((weak)) bool vga_vmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_vmode, _state);}

 __attribute__((weak)) bool writesprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwritesprite, _state);}

 static bool aboveclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveclip, _state);}

 static bool belowclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowclip, _state);}

 static bool clipdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipdone, _state);}

 static bool contbsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontbsprite, _state);}

 static bool contfade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontfade, _state);}

 static bool contmsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontmsprite, _state);}

 static bool convloop0(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvloop0, _state);}

 static bool convloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvloop1, _state);}

 static bool convloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvloop2, _state);}

 static bool convloop3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvloop3, _state);}

 static bool copyssloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcopyssloop, _state);}

 __attribute__((weak)) bool dloadcopy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdloadcopy, _state);}

 __attribute__((weak)) bool dloadflip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdloadflip, _state);}

 static bool emeshendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kemeshendloop, _state);}

 static bool emeshptsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kemeshptsfixed, _state);}

 static bool esmkendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kesmkendloop, _state);}

 static bool esmkptsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kesmkptsfixed, _state);}

 static bool esmokeendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kesmokeendloop, _state);}

 static bool esmokeptsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kesmokeptsfixed, _state);}

 static bool fadedone1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadedone1, _state);}

 static bool fadedone2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadedone2, _state);}

 static bool fadedone3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadedone3, _state);}

 static bool fadeloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeloop1, _state);}

 static bool fadeloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeloop2, _state);}

 static bool fadeloop3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeloop3, _state);}

 static bool fadeoutloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeoutloop, _state);}

 static bool fillendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfillendloop, _state);}

 static bool fixemeshpoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixemeshpoints, _state);}

 static bool fixesmkpoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixesmkpoints, _state);}

 static bool fixesmokepoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixesmokepoints, _state);}

 static bool fixomeshpoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixomeshpoints, _state);}

 static bool fixosmkpoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixosmkpoints, _state);}

 static bool fixosmokepoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixosmokepoints, _state);}

 static bool fixpoints(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfixpoints, _state);}

 static bool hlineexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khlineexit, _state);}

 static bool hlinelink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khlinelink, _state);}

 static bool hlinexok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khlinexok, _state);}

 static bool initmsexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitmsexit, _state);}

 static bool initmsloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitmsloop, _state);}

 static bool initqsexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitqsexit, _state);}

 static bool initqsloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitqsloop, _state);}

 static bool initssexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitssexit, _state);}

 static bool initssloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitssloop, _state);}

 static bool intohline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintohline, _state);}

 static bool intovline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintovline, _state);}

 static bool leftclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleftclip, _state);}

 static bool meshfillexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmeshfillexit, _state);}

 static bool nextemeshline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextemeshline, _state);}

 __attribute__((weak)) bool nextesmkline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextesmkline, _state);}

 __attribute__((weak)) bool nextesmokeline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextesmokeline, _state);}

 static bool nextfillline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextfillline, _state);}

 static bool nextomeshline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextomeshline, _state);}

 __attribute__((weak)) bool nextosmkline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextosmkline, _state);}

 __attribute__((weak)) bool nextosmokeline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextosmokeline, _state);}

 static bool noswap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knoswap, _state);}

 __attribute__((weak)) bool oct1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct1, _state);}

 static bool oct1end(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct1end, _state);}

 static bool oct1lp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct1lp, _state);}

 static bool oct1ok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct1ok, _state);}

 static bool oct1ov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct1ov, _state);}

 __attribute__((weak)) bool oct2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct2, _state);}

 static bool oct2end(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct2end, _state);}

 static bool oct2lp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct2lp, _state);}

 __attribute__((weak)) bool oct7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct7, _state);}

 static bool oct7end(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct7end, _state);}

 static bool oct7lp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct7lp, _state);}

 __attribute__((weak)) bool oct8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct8, _state);}

 static bool oct8end(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct8end, _state);}

 static bool oct8lp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct8lp, _state);}

 static bool oct8ok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct8ok, _state);}

 static bool oct8ov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct8ov, _state);}

 static bool offsetok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koffsetok, _state);}

 static bool omeshendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::komeshendloop, _state);}

 static bool omeshptsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::komeshptsfixed, _state);}

 static bool osmkendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kosmkendloop, _state);}

 static bool osmkptsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kosmkptsfixed, _state);}

 static bool osmokeendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kosmokeendloop, _state);}

 static bool osmokeptsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kosmokeptsfixed, _state);}

 static bool pixelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpixelok, _state);}

 static bool pointsfixed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpointsfixed, _state);}

 static bool prtc1exit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprtc1exit, _state);}

 static bool prtc1loop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprtc1loop, _state);}

 static bool prtc1over(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprtc1over, _state);}

 static bool prtc3exit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprtc3exit, _state);}

 static bool prtc3loop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprtc3loop, _state);}

 static bool prtc3over(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprtc3over, _state);}

 static bool qsloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqsloop1, _state);}

 static bool qsloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqsloop2, _state);}

 static bool qsloop3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqsloop3, _state);}

 static bool qsloop4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqsloop4, _state);}

 static bool rightclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krightclip, _state);}

 static bool shortemeshline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortemeshline, _state);}

 static bool shortesmkline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortesmkline, _state);}

 static bool shortesmokeline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortesmokeline, _state);}

 static bool shorthline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshorthline, _state);}

 static bool shortline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortline, _state);}

 static bool shortomeshline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortomeshline, _state);}

 static bool shortosmkline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortosmkline, _state);}

 static bool shortosmokeline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshortosmokeline, _state);}

 static bool skipfade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfade, _state);}

 static bool skipload(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipload, _state);}

 static bool smkfillexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksmkfillexit, _state);}

 static bool smokefillexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksmokefillexit, _state);}

 static bool sortdelta(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortdelta, _state);}

 static bool sortpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortpalette, _state);}

 static bool sspritedone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksspritedone, _state);}

 static bool sspriteexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksspriteexit, _state);}

 static bool sspriteout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksspriteout, _state);}

 static bool unpackloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunpackloop, _state);}

 static bool vga_bfillloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_bfillloop, _state);}

 static bool vga_hfilllp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_hfilllp, _state);}

 static bool vga_ldmseexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_ldmseexit, _state);}

 static bool vga_ldmseloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_ldmseloop1, _state);}

 static bool vga_ldmseloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_ldmseloop2, _state);}

 static bool vga_ldmsemaplp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_ldmsemaplp, _state);}

 static bool vga_prtc2com(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_prtc2com, _state);}

 static bool vga_prtc2norm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_prtc2norm, _state);}

 static bool vga_svmseexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_svmseexit, _state);}

 static bool vga_svmseloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_svmseloop1, _state);}

 static bool vga_svmseloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_svmseloop2, _state);}

 static bool vga_svmsemaplp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_svmsemaplp, _state);}

 static bool vlinelink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvlinelink, _state);}

 static bool vlineloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvlineloop, _state);}

 static bool vlineyok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvlineyok, _state);}

 static bool vloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvloop1, _state);}

 static bool vloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvloop2, _state);}

 static bool wspritebytes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwspritebytes, _state);}

 static bool wspritedone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwspritedone, _state);}

 static bool wspriteloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwspriteloop, _state);}

	
	#include "vga_drvr_default_seg_lifted.cpp"
#include "vga_drvr_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kaboveclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontbsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontfade: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontmsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvertvgadata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvloop0: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvloop3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcopyssloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdloadcopy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdloadflip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel39: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel40: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel41: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kemeshendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kemeshptsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kesmkendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kesmkptsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kesmokeendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kesmokeptsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadedone1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadedone2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadedone3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadedown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadein: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeloop3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeoutloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadepalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeup: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fastrandx
        case m2c::kfastrandx: 	if (!fastrandx(0, _state)) return false; break;
#endif
        case m2c::kfillendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixemeshpoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixesmkpoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixesmokepoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixomeshpoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixosmkpoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixosmokepoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfixpoints: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgcode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khlineexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khlinelink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khlinexok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitmsexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitmsloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitqsexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitqsloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitssexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitssloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstantfadein: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinstantfadeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintohline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintovline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kleftclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmeshfillexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextemeshline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextesmkline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextesmokeline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextfillline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextomeshline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextosmkline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextosmokeline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knoswap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct1end: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct1lp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct1ok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct1ov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct2end: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct2lp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct7end: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct7lp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct8end: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct8lp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct8ok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct8ov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koffsetok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::komeshendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::komeshptsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kosmkendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kosmkptsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kosmokeendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kosmokeptsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpixelok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpointsfixed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprtc1exit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprtc1loop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprtc1over: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprtc3exit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprtc3loop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprtc3over: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqfadein: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqfadeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqsloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqsloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqsloop3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqsloop4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreaddacblock: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_resetmouse
        case m2c::kresetmouse: 	if (!resetmouse(0, _state)) return false; break;
#endif
        case m2c::krightclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscreenshaker: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdacblock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortemeshline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortesmkline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortesmokeline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshorthline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortomeshline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortosmkline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshortosmokeline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfade: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipload: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksmkfillexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksmokefillexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortdelta: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksspritedone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksspriteexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksspriteout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunpackdeltapic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunpackloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatefade: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_bfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_bfillloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_bsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_calcaddr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_dload: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_hfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_hfilllp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_hline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_initms: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_initqs: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_initss: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_ldmseexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_ldmseloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_ldmseloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_ldmsemaplp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_line: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_loadmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_loadscreen: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_mfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_msprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_pfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_prtc1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_prtc2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_prtc2com: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_prtc2norm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_prtc3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_qsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_savemouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_savescreen: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_setpx: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_sfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_ssprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_svmseexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_svmseloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_svmseloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_svmsemaplp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_vline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_vmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvlinelink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvlineloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvlineyok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwritesprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwspritebytes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwspritedone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwspriteloop: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_vga_drvr()
          {
              {dw tmp999[2]={0,16384};MYCOPY(vgascrstart)}
    {dw tmp999=m2c::kglobal_dloadflip;MYCOPY(dloadmode)}
    {dw tmp999=m2c::kglobal_dloadcopy;MYCOPY(dummyd1295831_data_6_432)}
    {db tmp999=17;MYCOPY(colmask)}
    {db tmp999=34;MYCOPY(dummyd1295831_data_9_434)}
    {db tmp999=68;MYCOPY(dummyd1295831_data_a_435)}
    {db tmp999=136;MYCOPY(dummyd1295831_data_b_436)}
    {dw tmp999=m2c::kglobal_oct2;MYCOPY(octtable)}
    {dw tmp999=m2c::kglobal_oct1;MYCOPY(dummyd1295831_data_e_438)}
    {dw tmp999=m2c::kglobal_oct7;MYCOPY(dummyd1295831_data_10_439)}
    {dw tmp999=m2c::kglobal_oct8;MYCOPY(dummyd1295831_data_12_440)}
    {db tmp999[32]={15,14,12,8,1,3,7,15,15 & even_hatch,14 & even_hatch,12 & even_hatch,8 & even_hatch,1 & even_hatch,3 & even_hatch,7 & even_hatch,15 & even_hatch,15 & odd_hatch,14 & odd_hatch,12 & odd_hatch,8 & odd_hatch,1 & odd_hatch,3 & odd_hatch,7 & odd_hatch,15 & odd_hatch,15 & even_smoke1,14 & even_smoke1,12 & even_smoke1,8 & even_smoke1,1 & even_smoke1,3 & even_smoke1,7 & even_smoke1,15 & even_smoke1};MYCOPY(dummyd1295831_data_14_442)}
    {db tmp999=15 & odd_smoke1;MYCOPY(dummyd1295831_data_34_490)}
    {db tmp999=14 & odd_smoke1;MYCOPY(dummyd1295831_data_35_491)}
    {db tmp999=12 & odd_smoke1;MYCOPY(dummyd1295831_data_36_492)}
    {db tmp999=8 & odd_smoke1;MYCOPY(dummyd1295831_data_37_493)}
    {db tmp999=1 & odd_smoke1;MYCOPY(dummyd1295831_data_38_495)}
    {db tmp999=3 & odd_smoke1;MYCOPY(dummyd1295831_data_39_496)}
    {db tmp999=7 & odd_smoke1;MYCOPY(dummyd1295831_data_3a_497)}
    {db tmp999=15 & odd_smoke1;MYCOPY(dummyd1295831_data_3b_498)}
    {db tmp999=15 & even_smoke2;MYCOPY(dummyd1295831_data_3c_506)}
    {db tmp999=14 & even_smoke2;MYCOPY(dummyd1295831_data_3d_507)}
    {db tmp999=12 & even_smoke2;MYCOPY(dummyd1295831_data_3e_508)}
    {db tmp999=8 & even_smoke2;MYCOPY(dummyd1295831_data_3f_509)}
    {db tmp999=1 & even_smoke2;MYCOPY(dummyd1295831_data_40_511)}
    {db tmp999=3 & even_smoke2;MYCOPY(dummyd1295831_data_41_512)}
    {db tmp999=7 & even_smoke2;MYCOPY(dummyd1295831_data_42_513)}
    {db tmp999=15 & even_smoke2;MYCOPY(dummyd1295831_data_43_514)}
    {db tmp999=15 & odd_smoke2;MYCOPY(dummyd1295831_data_44_516)}
    {db tmp999=14 & odd_smoke2;MYCOPY(dummyd1295831_data_45_517)}
    {db tmp999=12 & odd_smoke2;MYCOPY(dummyd1295831_data_46_518)}
    {db tmp999=8 & odd_smoke2;MYCOPY(dummyd1295831_data_47_519)}
    {db tmp999=1 & odd_smoke2;MYCOPY(dummyd1295831_data_48_521)}
    {db tmp999=3 & odd_smoke2;MYCOPY(dummyd1295831_data_49_522)}
    {db tmp999=7 & odd_smoke2;MYCOPY(dummyd1295831_data_4a_523)}
    {db tmp999=15 & odd_smoke2;MYCOPY(dummyd1295831_data_4b_524)}
    {dw tmp999=m2c::kglobal_nextesmokeline;MYCOPY(smokestart)}
    {dw tmp999=m2c::kglobal_nextesmkline;MYCOPY(dummyd1295831_data_4e_530)}
    {dw tmp999=m2c::kglobal_nextosmokeline;MYCOPY(dummyd1295831_data_50_531)}
    {dw tmp999=m2c::kglobal_nextosmkline;MYCOPY(dummyd1295831_data_52_532)}
    {db tmp999=0;MYCOPY(flipnibble)}
    {db tmp999=8;MYCOPY(dummyd1295831_data_55_536)}
    {db tmp999=4;MYCOPY(dummyd1295831_data_56_537)}
    {db tmp999=12;MYCOPY(dummyd1295831_data_57_538)}
    {db tmp999=2;MYCOPY(dummyd1295831_data_58_539)}
    {db tmp999=10;MYCOPY(dummyd1295831_data_59_540)}
    {db tmp999=6;MYCOPY(dummyd1295831_data_5a_541)}
    {db tmp999=14;MYCOPY(dummyd1295831_data_5b_542)}
    {db tmp999=1;MYCOPY(dummyd1295831_data_5c_543)}
    {db tmp999=9;MYCOPY(dummyd1295831_data_5d_544)}
    {db tmp999=5;MYCOPY(dummyd1295831_data_5e_545)}
    {db tmp999=13;MYCOPY(dummyd1295831_data_5f_546)}
    {db tmp999=3;MYCOPY(dummyd1295831_data_60_547)}
    {db tmp999=11;MYCOPY(dummyd1295831_data_61_548)}
    {db tmp999=7;MYCOPY(dummyd1295831_data_62_549)}
    {db tmp999=15;MYCOPY(dummyd1295831_data_63_550)}
    {db tmp999=15;MYCOPY(hrznmask)}
    {db tmp999=14;MYCOPY(dummyd1295831_data_65_554)}
    {db tmp999=12;MYCOPY(dummyd1295831_data_66_555)}
    {db tmp999=8;MYCOPY(dummyd1295831_data_67_556)}
    {db tmp999[2]={0};MYCOPY(fadeflag)}
    {db tmp999=0;MYCOPY(fadelevel1)}
    {db tmp999=0;MYCOPY(fadercol1)}
    {db tmp999=0;MYCOPY(fadegcol1)}
    {db tmp999=0;MYCOPY(fadebcol1)}
    {db tmp999=0;MYCOPY(_fadelevel1)}
    {db tmp999=0;MYCOPY(_fadercol1)}
    {db tmp999=0;MYCOPY(_fadegcol1)}
    {db tmp999=0;MYCOPY(_fadebcol1)}
    {dw tmp999=0;MYCOPY(fadestart1)}
    {dw tmp999=256;MYCOPY(fadecount1)}
    {db tmp999=0;MYCOPY(fadelevel2)}
    {db tmp999=0;MYCOPY(fadercol2)}
    {db tmp999=0;MYCOPY(fadegcol2)}
    {db tmp999=0;MYCOPY(fadebcol2)}
    {db tmp999=0;MYCOPY(_fadelevel2)}
    {db tmp999=0;MYCOPY(_fadercol2)}
    {db tmp999=0;MYCOPY(_fadegcol2)}
    {db tmp999=0;MYCOPY(_fadebcol2)}
    {dw tmp999=0;MYCOPY(fadestart2)}
    {dw tmp999=256;MYCOPY(fadecount2)}
    {db tmp999=0;MYCOPY(fadelevel3)}
    {db tmp999=0;MYCOPY(fadercol3)}
    {db tmp999=0;MYCOPY(fadegcol3)}
    {db tmp999=0;MYCOPY(fadebcol3)}
    {dw tmp999=0;MYCOPY(fadestart3)}
    {dw tmp999=256;MYCOPY(fadecount3)}
    {dw tmp999=0;MYCOPY(shaketimer)}
    {db tmp999=hshake_off;MYCOPY(hshake)}
    {db tmp999=vshake_off;MYCOPY(vshake)}
    {db tmp999=0;MYCOPY(vshaketable)}
    {db tmp999=160;MYCOPY(dummyd1295831_data_8f_622)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_vga_drvr(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

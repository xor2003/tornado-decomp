/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #include <execinfo.h>
        #include <unistd.h>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "com_drvr.h"

	
 __attribute__((weak)) bool blockfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kblockfill, _state);}

 __attribute__((weak)) bool bsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbsprite, _state);}

 __attribute__((weak)) bool download(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdownload, _state);}

 __attribute__((weak)) bool hlinedraw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khlinedraw, _state);}

 __attribute__((weak)) bool horizonfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khorizonfill, _state);}

 __attribute__((weak)) bool initmsprites(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitmsprites, _state);}

 __attribute__((weak)) bool initqsprites(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitqsprites, _state);}

 __attribute__((weak)) bool initssprites(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitssprites, _state);}

 __attribute__((weak)) bool linedraw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klinedraw, _state);}

 __attribute__((weak)) bool loadmousebgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadmousebgnd, _state);}

 __attribute__((weak)) bool loadscreen(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadscreen, _state);}

 __attribute__((weak)) bool msprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmsprite, _state);}

 __attribute__((weak)) bool null(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knull, _state);}

 __attribute__((weak)) bool printchar1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintchar1, _state);}

 __attribute__((weak)) bool printchar2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintchar2, _state);}

 __attribute__((weak)) bool printchar3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintchar3, _state);}

 __attribute__((weak)) bool qsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqsprite, _state);}

 __attribute__((weak)) bool savemousebgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavemousebgnd, _state);}

 __attribute__((weak)) bool savescreen(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavescreen, _state);}

 __attribute__((weak)) bool setattributes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetattributes, _state);}

 __attribute__((weak)) bool setpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpalette, _state);}

 __attribute__((weak)) bool setpixel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpixel, _state);}

 __attribute__((weak)) bool setsspriteclip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetsspriteclip, _state);}

 __attribute__((weak)) bool setvideomode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetvideomode, _state);}

 __attribute__((weak)) bool ssprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kssprite, _state);}

 __attribute__((weak)) bool uncompresspic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kuncompresspic, _state);}

 __attribute__((weak)) bool vlinedraw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvlinedraw, _state);}

 static bool framewait(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kframewait, _state);}

 static bool initpalette(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitpalette, _state);}

 static bool setvideoloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetvideoloop, _state);}

	
	#include "com_drvr_default_seg_lifted.cpp"
#include "com_drvr_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kblockfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdownload: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kframewait: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khlinedraw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khorizonfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitmsprites: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitqsprites: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitssprites: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klinedraw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadmousebgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadscreen: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintchar1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintchar2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintchar3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavemousebgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavescreen: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetattributes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpalette: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpixel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetsspriteclip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetvideoloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetvideomode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kssprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kuncompresspic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvlinedraw: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_com_drvr()
          {
              {dw tmp999=video_buf_size;MYCOPY(videobufsize)}
    {dw tmp999=0;MYCOPY(workscrptr)}
    {dw tmp999=0;MYCOPY(realscrptr)}
    {dw tmp999=ega;MYCOPY(screenmode)}
    {dw tmp999=0;MYCOPY(screenpage)}
    {dw tmp999=game_mode;MYCOPY(flipmode)}
    {db tmp999[2]={0};MYCOPY(setpaletteflag)}
    {dw tmp999=0;MYCOPY(polycount)}
    {dw tmp999=free_frame_rate;MYCOPY(maxframerate)}
    {dw tmp999=scr_type_2;MYCOPY(screentypetable)}
    {dw tmp999=scr_type_1;MYCOPY(screentype)}
    {db tmp999[2]={0};MYCOPY(pixelcol)}
    {db tmp999[2]={0};MYCOPY(linecol)}
    {db tmp999[2]={0};MYCOPY(fillcol)}
    {db tmp999[2]={0};MYCOPY(hrznlhscol)}
    {db tmp999[2]={0};MYCOPY(hrznrhscol)}
    {db tmp999[256]={255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};MYCOPY(palette)}
    {dw tmp999=m2c::near_offset_external(vga_palette1);MYCOPY(palettetable)}
    {dw tmp999=6;MYCOPY(attrtable)}
    {dw tmp999=2;MYCOPY(dummy679d9bb8_data_124_354)}
    {dw tmp999=0;MYCOPY(prtln)}
    {dw tmp999=0;MYCOPY(prtcl)}
    {db tmp999[2]={255,255};MYCOPY(forecol)}
    {db tmp999[2]={0};MYCOPY(backcol)}
    {db tmp999[2]={0};MYCOPY(printover)}
    {dw tmp999=m2c::near_offset_external(standard_7by9);MYCOPY(charsetptr1)}
    {dw tmp999=m2c::near_offset_external(standard_3by5);MYCOPY(charsetptr2)}
    {dw tmp999=m2c::near_offset_external(standard_5by9);MYCOPY(charsetptr3)}
    {dw tmp999=0;MYCOPY(spritex)}
    {dw tmp999=0;MYCOPY(spritey)}
    {dw tmp999=0;MYCOPY(spriteptr)}
    {db tmp999[2]={2,0};MYCOPY(clipxtable)}
    {dw tmp999=0;MYCOPY(clipxmin)}
    {dw tmp999=79;MYCOPY(clipxmax)}
    {dw tmp999=0;MYCOPY(clipymin)}
    {dw tmp999=199;MYCOPY(clipymax)}
    {dw tmp999=0;MYCOPY(hrznxmin)}
    {dw tmp999=0;MYCOPY(hrznxmax)}
    {dw tmp999=offset(data,_setvideomode);MYCOPY(jumpinitlist)}
    {dw tmp999=offset(data,_download);MYCOPY(dummy679d9bb8_data_14c_392)}
    {dw tmp999=offset(data,_setpixel);MYCOPY(dummy679d9bb8_data_14e_393)}
    {dw tmp999=offset(data,_linedraw);MYCOPY(dummy679d9bb8_data_150_394)}
    {dw tmp999=offset(data,_vlinedraw);MYCOPY(dummy679d9bb8_data_152_395)}
    {dw tmp999=offset(data,_hlinedraw);MYCOPY(dummy679d9bb8_data_154_396)}
    {dw tmp999=offset(data,_polyfill);MYCOPY(dummy679d9bb8_data_156_397)}
    {dw tmp999=offset(data,_meshfill);MYCOPY(dummy679d9bb8_data_158_398)}
    {dw tmp999=offset(data,_smokefill);MYCOPY(dummy679d9bb8_data_15a_399)}
    {dw tmp999=offset(data,_printchar1);MYCOPY(dummy679d9bb8_data_15c_400)}
    {dw tmp999=offset(data,_printchar2);MYCOPY(dummy679d9bb8_data_15e_401)}
    {dw tmp999=offset(data,_printchar3);MYCOPY(dummy679d9bb8_data_160_402)}
    {dw tmp999=offset(data,_ssprite);MYCOPY(dummy679d9bb8_data_162_403)}
    {dw tmp999=offset(data,_msprite);MYCOPY(dummy679d9bb8_data_164_404)}
    {dw tmp999=offset(data,_bsprite);MYCOPY(dummy679d9bb8_data_166_405)}
    {dw tmp999=offset(data,_qsprite);MYCOPY(dummy679d9bb8_data_168_406)}
    {dw tmp999=offset(data,_initssprites);MYCOPY(dummy679d9bb8_data_16a_407)}
    {dw tmp999=offset(data,_initmsprites);MYCOPY(dummy679d9bb8_data_16c_408)}
    {dw tmp999=offset(data,_initqsprites);MYCOPY(dummy679d9bb8_data_16e_409)}
    {dw tmp999=offset(data,_blockfill);MYCOPY(dummy679d9bb8_data_170_410)}
    {dw tmp999=offset(data,_savemousebgnd);MYCOPY(dummy679d9bb8_data_172_411)}
    {dw tmp999=offset(data,_loadmousebgnd);MYCOPY(dummy679d9bb8_data_174_412)}
    {dw tmp999=offset(data,_savescreen);MYCOPY(dummy679d9bb8_data_176_413)}
    {dw tmp999=offset(data,_loadscreen);MYCOPY(dummy679d9bb8_data_178_414)}
    {dw tmp999=offset(data,_uncompresspic);MYCOPY(dummy679d9bb8_data_17a_415)}
    {dw tmp999=offset(data,_horizonfill);MYCOPY(dummy679d9bb8_data_17c_416)}
    {dw tmp999=65535;MYCOPY(dummy679d9bb8_data_17e_417)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_setvideomode)}
    {dw tmp999=m2c::kglobal_vga_vmode;MYCOPY(dummy679d9bb8_data_182_419)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_download)}
    {dw tmp999=m2c::kglobal_vga_dload;MYCOPY(dummy679d9bb8_data_186_421)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_setpixel)}
    {dw tmp999=m2c::kglobal_vga_setpx;MYCOPY(dummy679d9bb8_data_18a_423)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_linedraw)}
    {dw tmp999=m2c::kglobal_vga_line;MYCOPY(dummy679d9bb8_data_18e_425)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_vlinedraw)}
    {dw tmp999=m2c::kglobal_vga_vline;MYCOPY(dummy679d9bb8_data_192_427)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_hlinedraw)}
    {dw tmp999=m2c::kglobal_vga_hline;MYCOPY(dummy679d9bb8_data_196_429)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_polyfill)}
    {dw tmp999=m2c::kglobal_vga_pfill;MYCOPY(dummy679d9bb8_data_19a_431)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_meshfill)}
    {dw tmp999=m2c::kglobal_vga_mfill;MYCOPY(dummy679d9bb8_data_19e_433)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_smokefill)}
    {dw tmp999=m2c::kglobal_vga_sfill;MYCOPY(dummy679d9bb8_data_1a2_435)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_printchar1)}
    {dw tmp999=m2c::kglobal_vga_prtc1;MYCOPY(dummy679d9bb8_data_1a6_437)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_printchar2)}
    {dw tmp999=m2c::kglobal_vga_prtc2;MYCOPY(dummy679d9bb8_data_1aa_439)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_printchar3)}
    {dw tmp999=m2c::kglobal_vga_prtc3;MYCOPY(dummy679d9bb8_data_1ae_441)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_ssprite)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_msprite)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_bsprite)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_qsprite)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_initssprites)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_initmsprites)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_initqsprites)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_blockfill)}
    {dw tmp999=m2c::kglobal_vga_bfill;MYCOPY(dummy679d9bb8_data_1c0_457)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_savemousebgnd)}
    {dw tmp999=m2c::kglobal_vga_savemouse;MYCOPY(dummy679d9bb8_data_1c4_459)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_loadmousebgnd)}
    {dw tmp999=m2c::kglobal_vga_loadmouse;MYCOPY(dummy679d9bb8_data_1c8_461)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_savescreen)}
    {dw tmp999=m2c::kglobal_vga_savescreen;MYCOPY(dummy679d9bb8_data_1cc_463)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_loadscreen)}
    {dw tmp999=m2c::kglobal_vga_loadscreen;MYCOPY(dummy679d9bb8_data_1d0_465)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_uncompresspic)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummy679d9bb8_data_1d4_467)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(_horizonfill)}
    {dw tmp999=m2c::kglobal_vga_hfill;MYCOPY(dummy679d9bb8_data_1d8_469)}
    {db tmp999[32000]={0};MYCOPY(workscreen)}
    {db tmp999[32000]={0};MYCOPY(copyscreen)}
    {db tmp999[320]={0};MYCOPY(mousehouse)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_com_drvr(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

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
              videobufsize = video_buf_size;
    workscrptr = 0;
    realscrptr = 0;
    screenmode = ega;
    screenpage = 0;
    flipmode = game_mode;
    {db tmp999[2]={0};memcpy(&setpaletteflag,&tmp999,sizeof tmp999);}
    polycount = 0;
    maxframerate = free_frame_rate;
    screentypetable = scr_type_2;
    screentype = scr_type_1;
    {db tmp999[2]={0};memcpy(&pixelcol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&linecol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&fillcol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&hrznlhscol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&hrznrhscol,&tmp999,sizeof tmp999);}
    {db tmp999[256]={255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};memcpy(&palette,&tmp999,sizeof tmp999);}
    palettetable = m2c::near_offset_external(vga_palette1);
    attrtable = 6;
    dummy679d9bb8_data_124_354 = 2;
    prtln = 0;
    prtcl = 0;
    {db tmp999[2]={255,255};memcpy(&forecol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&backcol,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&printover,&tmp999,sizeof tmp999);}
    charsetptr1 = m2c::near_offset_external(standard_7by9);
    charsetptr2 = m2c::near_offset_external(standard_3by5);
    charsetptr3 = m2c::near_offset_external(standard_5by9);
    spritex = 0;
    spritey = 0;
    spriteptr = 0;
    {db tmp999[2]={2,0};memcpy(&clipxtable,&tmp999,sizeof tmp999);}
    clipxmin = 0;
    clipxmax = 79;
    clipymin = 0;
    clipymax = 199;
    hrznxmin = 0;
    hrznxmax = 0;
    jumpinitlist = offset(data,_setvideomode);
    dummy679d9bb8_data_14c_392 = offset(data,_download);
    dummy679d9bb8_data_14e_393 = offset(data,_setpixel);
    dummy679d9bb8_data_150_394 = offset(data,_linedraw);
    dummy679d9bb8_data_152_395 = offset(data,_vlinedraw);
    dummy679d9bb8_data_154_396 = offset(data,_hlinedraw);
    dummy679d9bb8_data_156_397 = offset(data,_polyfill);
    dummy679d9bb8_data_158_398 = offset(data,_meshfill);
    dummy679d9bb8_data_15a_399 = offset(data,_smokefill);
    dummy679d9bb8_data_15c_400 = offset(data,_printchar1);
    dummy679d9bb8_data_15e_401 = offset(data,_printchar2);
    dummy679d9bb8_data_160_402 = offset(data,_printchar3);
    dummy679d9bb8_data_162_403 = offset(data,_ssprite);
    dummy679d9bb8_data_164_404 = offset(data,_msprite);
    dummy679d9bb8_data_166_405 = offset(data,_bsprite);
    dummy679d9bb8_data_168_406 = offset(data,_qsprite);
    dummy679d9bb8_data_16a_407 = offset(data,_initssprites);
    dummy679d9bb8_data_16c_408 = offset(data,_initmsprites);
    dummy679d9bb8_data_16e_409 = offset(data,_initqsprites);
    dummy679d9bb8_data_170_410 = offset(data,_blockfill);
    dummy679d9bb8_data_172_411 = offset(data,_savemousebgnd);
    dummy679d9bb8_data_174_412 = offset(data,_loadmousebgnd);
    dummy679d9bb8_data_176_413 = offset(data,_savescreen);
    dummy679d9bb8_data_178_414 = offset(data,_loadscreen);
    dummy679d9bb8_data_17a_415 = offset(data,_uncompresspic);
    dummy679d9bb8_data_17c_416 = offset(data,_horizonfill);
    dummy679d9bb8_data_17e_417 = 65535;
    _setvideomode = m2c::kglobal_null;
    dummy679d9bb8_data_182_419 = m2c::kglobal_vga_vmode;
    _download = m2c::kglobal_null;
    dummy679d9bb8_data_186_421 = m2c::kglobal_vga_dload;
    _setpixel = m2c::kglobal_null;
    dummy679d9bb8_data_18a_423 = m2c::kglobal_vga_setpx;
    _linedraw = m2c::kglobal_null;
    dummy679d9bb8_data_18e_425 = m2c::kglobal_vga_line;
    _vlinedraw = m2c::kglobal_null;
    dummy679d9bb8_data_192_427 = m2c::kglobal_vga_vline;
    _hlinedraw = m2c::kglobal_null;
    dummy679d9bb8_data_196_429 = m2c::kglobal_vga_hline;
    _polyfill = m2c::kglobal_null;
    dummy679d9bb8_data_19a_431 = m2c::kglobal_vga_pfill;
    _meshfill = m2c::kglobal_null;
    dummy679d9bb8_data_19e_433 = m2c::kglobal_vga_mfill;
    _smokefill = m2c::kglobal_null;
    dummy679d9bb8_data_1a2_435 = m2c::kglobal_vga_sfill;
    _printchar1 = m2c::kglobal_null;
    dummy679d9bb8_data_1a6_437 = m2c::kglobal_vga_prtc1;
    _printchar2 = m2c::kglobal_null;
    dummy679d9bb8_data_1aa_439 = m2c::kglobal_vga_prtc2;
    _printchar3 = m2c::kglobal_null;
    dummy679d9bb8_data_1ae_441 = m2c::kglobal_vga_prtc3;
    _ssprite = m2c::kglobal_null;
    _msprite = m2c::kglobal_null;
    _bsprite = m2c::kglobal_null;
    _qsprite = m2c::kglobal_null;
    _initssprites = m2c::kglobal_null;
    _initmsprites = m2c::kglobal_null;
    _initqsprites = m2c::kglobal_null;
    _blockfill = m2c::kglobal_null;
    dummy679d9bb8_data_1c0_457 = m2c::kglobal_vga_bfill;
    _savemousebgnd = m2c::kglobal_null;
    dummy679d9bb8_data_1c4_459 = m2c::kglobal_vga_savemouse;
    _loadmousebgnd = m2c::kglobal_null;
    dummy679d9bb8_data_1c8_461 = m2c::kglobal_vga_loadmouse;
    _savescreen = m2c::kglobal_null;
    dummy679d9bb8_data_1cc_463 = m2c::kglobal_vga_savescreen;
    _loadscreen = m2c::kglobal_null;
    dummy679d9bb8_data_1d0_465 = m2c::kglobal_vga_loadscreen;
    _uncompresspic = m2c::kglobal_null;
    dummy679d9bb8_data_1d4_467 = m2c::kglobal_null;
    _horizonfill = m2c::kglobal_null;
    dummy679d9bb8_data_1d8_469 = m2c::kglobal_vga_hfill;
    {db tmp999[32000]={0};memcpy(&workscreen,&tmp999,sizeof tmp999);}
    {db tmp999[32000]={0};memcpy(&copyscreen,&tmp999,sizeof tmp999);}
    {db tmp999[320]={0};memcpy(&mousehouse,&tmp999,sizeof tmp999);}

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
        

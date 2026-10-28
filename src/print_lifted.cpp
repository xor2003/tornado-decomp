/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "print.h"

	
 __attribute__((weak)) bool hexbyte(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khexbyte, _state);}

 __attribute__((weak)) bool hexfooter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khexfooter, _state);}

 __attribute__((weak)) bool hexheader(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khexheader, _state);}

 __attribute__((weak)) bool printchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintchar, _state);}

 __attribute__((weak)) bool printdecbyte(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintdecbyte, _state);}

 __attribute__((weak)) bool printdecword(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintdecword, _state);}

 __attribute__((weak)) bool printdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintdol, _state);}

 __attribute__((weak)) bool printhexbyte(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprinthexbyte, _state);}

 __attribute__((weak)) bool printhexlong(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprinthexlong, _state);}

 __attribute__((weak)) bool printhexword(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprinthexword, _state);}

 static bool contdsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontdsprite, _state);}

 static bool decdivdone(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecdivdone, _state);}

 static bool decdivloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecdivloop, _state);}

 static bool defaultwidth(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdefaultwidth, _state);}

 static bool extok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kextok, _state);}

 static bool leadingzero(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kleadingzero, _state);}

 static bool nohex_0(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knohex_0, _state);}

 static bool nohex_dol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knohex_dol, _state);}

 static bool nohex_h(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knohex_h, _state);}

 static bool nohex_sp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knohex_sp, _state);}

 static bool nullchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullchar, _state);}

 __attribute__((weak)) bool p_bcdat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_bcdat, _state);}

 __attribute__((weak)) bool p_char1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_char1, _state);}

 __attribute__((weak)) bool p_char2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_char2, _state);}

 __attribute__((weak)) bool p_char3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_char3, _state);}

 __attribute__((weak)) bool p_crsr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_crsr, _state);}

 __attribute__((weak)) bool p_decat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_decat, _state);}

 __attribute__((weak)) bool p_defcl(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_defcl, _state);}

 __attribute__((weak)) bool p_end(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_end, _state);}

 __attribute__((weak)) bool p_ext(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_ext, _state);}

 __attribute__((weak)) bool p_hexat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_hexat, _state);}

 __attribute__((weak)) bool p_input(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_input, _state);}

 __attribute__((weak)) bool p_nop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_nop, _state);}

 __attribute__((weak)) bool p_over0(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_over0, _state);}

 __attribute__((weak)) bool p_over1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_over1, _state);}

 __attribute__((weak)) bool p_rect(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_rect, _state);}

 __attribute__((weak)) bool p_rend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_rend, _state);}

 __attribute__((weak)) bool p_text(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_text, _state);}

 __attribute__((weak)) bool p_title(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_title, _state);}

 __attribute__((weak)) bool p_ulend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_ulend, _state);}

 __attribute__((weak)) bool p_uline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kp_uline, _state);}

 __attribute__((weak)) bool pd_attr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_attr, _state);}

 __attribute__((weak)) bool pd_decb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_decb, _state);}

 __attribute__((weak)) bool pd_decw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_decw, _state);}

 __attribute__((weak)) bool pd_hexb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_hexb, _state);}

 __attribute__((weak)) bool pd_hexl(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_hexl, _state);}

 __attribute__((weak)) bool pd_hexw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_hexw, _state);}

 __attribute__((weak)) bool pd_line(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_line, _state);}

 static bool pd_mspr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_mspr, _state);}

 __attribute__((weak)) bool pd_qspr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_qspr, _state);}

 static bool pd_sspr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_sspr, _state);}

 __attribute__((weak)) bool pd_vga(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_vga, _state);}

 __attribute__((weak)) bool pd_x(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_x, _state);}

 __attribute__((weak)) bool pd_xmov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_xmov, _state);}

 __attribute__((weak)) bool pd_xy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_xy, _state);}

 __attribute__((weak)) bool pd_xymv(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_xymv, _state);}

 __attribute__((weak)) bool pd_y(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_y, _state);}

 __attribute__((weak)) bool pd_ymov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpd_ymov, _state);}

 __attribute__((weak)) bool pp_attr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpp_attr, _state);}

 __attribute__((weak)) bool pp_decw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpp_decw, _state);}

 __attribute__((weak)) bool pp_str(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpp_str, _state);}

 static bool printdeccom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintdeccom, _state);}

 static bool printdolloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintdolloop, _state);}

 static bool printnumbuffer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintnumbuffer, _state);}

 static bool printnumloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintnumloop, _state);}

 __attribute__((weak)) bool pv_attr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_attr, _state);}

 __attribute__((weak)) bool pv_chr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_chr, _state);}

 __attribute__((weak)) bool pv_decb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_decb, _state);}

 __attribute__((weak)) bool pv_decw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_decw, _state);}

 __attribute__((weak)) bool pv_eta(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_eta, _state);}

 __attribute__((weak)) bool pv_hexb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_hexb, _state);}

 __attribute__((weak)) bool pv_hexl(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_hexl, _state);}

 __attribute__((weak)) bool pv_hexw(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_hexw, _state);}

 __attribute__((weak)) bool pv_pdeg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_pdeg, _state);}

 __attribute__((weak)) bool pv_rng(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_rng, _state);}

 __attribute__((weak)) bool pv_str(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_str, _state);}

 __attribute__((weak)) bool pv_x(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_x, _state);}

 __attribute__((weak)) bool pv_xy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_xy, _state);}

 __attribute__((weak)) bool pv_y(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpv_y, _state);}

 static bool skipleadingchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipleadingchar, _state);}

 static bool sortprintdolfn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortprintdolfn, _state);}

 static bool unsignednum(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunsignednum, _state);}

	
	#include "print_default_seg_lifted.cpp"
#include "print_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcontdsprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecdivdone: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecdivloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdefaultwidth: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawrectangle
        case m2c::kdrawrectangle: 	if (!drawrectangle(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kextok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khexbyte: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khexfooter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khexheader: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::kleadingzero: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knohex_0: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knohex_dol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knohex_h: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knohex_sp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_bcdat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_char1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_char2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_char3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_crsr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_decat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_defcl: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_end: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_ext: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_hexat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_input: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_nop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_over0: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_over1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_rect: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_rend: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_text: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_title: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_ulend: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kp_uline: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_attr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_decb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_decw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_hexb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_hexl: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_hexw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_line: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_mspr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_qspr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_sspr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_vga: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_x: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_xmov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_xy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_xymv: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_y: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpd_ymov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpp_attr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpp_decw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpp_str: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintdecbyte: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintdeccom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintdecword: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintdolloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprinthexbyte: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprinthexlong: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprinthexword: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintnumbuffer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintnumloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_attr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_chr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_decb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_decw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_eta: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_hexb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_hexl: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_hexw: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_pdeg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_rng: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_str: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_x: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_xy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpv_y: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setattributes
        case m2c::ksetattributes: 	if (!setattributes(0, _state)) return false; break;
#endif
        case m2c::kskipleadingchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortprintdolfn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunsignednum: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_print()
          {
              {db tmp999[2]={14,0};memcpy(&hexattr,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&decattr,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0};memcpy(&bcdattr,&tmp999,sizeof tmp999);}
    chartype = char_type1;
    _printchar = m2c::kglobal_printchar1;
    dummydaeeb126_data_c_424 = m2c::kglobal_printchar2;
    dummydaeeb126_data_10_425 = m2c::kglobal_printchar3;
    {db tmp999[8]={255,0,255,0,255,0,15,0};memcpy(&defaultcols,&tmp999,sizeof tmp999);}
    {db tmp999[8]={255,0,255,0,255,0,15,0};memcpy(&dialogtitle,&tmp999,sizeof tmp999);}
    {db tmp999[8]={0,255,0,255,0,119,0,7};memcpy(&dialogtext,&tmp999,sizeof tmp999);}
    {char tmp999[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};memcpy(&hexchars,&tmp999,sizeof tmp999);}
    {char tmp999[4]=" \00";memcpy(&leadingchar,&tmp999,sizeof tmp999);}
    {char tmp999[8]={0,0,0,0,' ','-','+','-'};memcpy(&signchar,&tmp999,sizeof tmp999);}
    {db tmp999[16]={0};memcpy(&numbuffer,&tmp999,sizeof tmp999);}
    tmpprtln = 0;
    tmpprtcl = 0;
    spritetype = m2c::kglobal_ssprite;
    dummydaeeb126_data_60_442 = m2c::kglobal_msprite;
    dummydaeeb126_data_64_443 = m2c::kglobal_qsprite;
    printdolfn = m2c::kglobal_p_end;
    dummydaeeb126_data_6a_445 = m2c::kglobal_p_input;
    dummydaeeb126_data_6c_446 = m2c::kglobal_p_over0;
    dummydaeeb126_data_6e_447 = m2c::kglobal_p_over1;
    dummydaeeb126_data_70_448 = m2c::kglobal_p_char1;
    dummydaeeb126_data_72_449 = m2c::kglobal_p_char2;
    dummydaeeb126_data_74_450 = m2c::kglobal_p_char3;
    dummydaeeb126_data_76_451 = m2c::kglobal_p_end;
    dummydaeeb126_data_78_452 = m2c::kglobal_p_end;
    dummydaeeb126_data_7a_453 = m2c::kglobal_p_end;
    dummydaeeb126_data_7c_454 = m2c::kglobal_p_end;
    dummydaeeb126_data_7e_455 = m2c::kglobal_p_end;
    dummydaeeb126_data_80_456 = m2c::kglobal_p_end;
    dummydaeeb126_data_82_457 = m2c::kglobal_p_crsr;
    dummydaeeb126_data_84_458 = m2c::kglobal_p_hexat;
    dummydaeeb126_data_86_459 = m2c::kglobal_p_decat;
    dummydaeeb126_data_88_460 = m2c::kglobal_p_bcdat;
    dummydaeeb126_data_8a_461 = m2c::kglobal_p_defcl;
    dummydaeeb126_data_8c_462 = m2c::kglobal_p_title;
    dummydaeeb126_data_8e_463 = m2c::kglobal_p_text;
    dummydaeeb126_data_90_464 = m2c::kglobal_p_uline;
    dummydaeeb126_data_92_465 = m2c::kglobal_p_ulend;
    dummydaeeb126_data_94_466 = m2c::kglobal_p_rect;
    dummydaeeb126_data_96_467 = m2c::kglobal_p_rend;
    dummydaeeb126_data_98_468 = m2c::kglobal_p_end;
    dummydaeeb126_data_9a_469 = m2c::kglobal_p_end;
    dummydaeeb126_data_9c_470 = m2c::kglobal_p_end;
    dummydaeeb126_data_9e_471 = m2c::kglobal_p_end;
    dummydaeeb126_data_a0_472 = m2c::kglobal_p_end;
    dummydaeeb126_data_a2_473 = m2c::kglobal_p_end;
    dummydaeeb126_data_a4_474 = m2c::kglobal_p_nop;
    dummydaeeb126_data_a6_475 = m2c::kglobal_p_ext;
    extprintdolfn = m2c::kglobal_p_end;
    dummydaeeb126_data_aa_477 = m2c::kglobal_p_end;
    dummydaeeb126_data_ac_478 = m2c::kglobal_pd_hexb;
    dummydaeeb126_data_ae_479 = m2c::kglobal_pd_hexw;
    dummydaeeb126_data_b0_480 = m2c::kglobal_pd_hexl;
    dummydaeeb126_data_b2_481 = m2c::kglobal_pd_decb;
    dummydaeeb126_data_b4_482 = m2c::kglobal_pd_decw;
    dummydaeeb126_data_b6_483 = m2c::kglobal_p_end;
    dummydaeeb126_data_b8_484 = m2c::kglobal_p_end;
    dummydaeeb126_data_ba_485 = m2c::kglobal_p_end;
    dummydaeeb126_data_bc_486 = m2c::kglobal_p_end;
    dummydaeeb126_data_be_487 = m2c::kglobal_p_end;
    dummydaeeb126_data_c0_488 = m2c::kglobal_p_end;
    dummydaeeb126_data_c2_489 = m2c::kglobal_p_end;
    dummydaeeb126_data_c4_490 = m2c::kglobal_p_end;
    dummydaeeb126_data_c6_491 = m2c::kglobal_p_end;
    dummydaeeb126_data_c8_492 = m2c::kglobal_pd_x;
    dummydaeeb126_data_ca_493 = m2c::kglobal_pd_y;
    dummydaeeb126_data_cc_494 = m2c::kglobal_pd_xy;
    dummydaeeb126_data_ce_495 = m2c::kglobal_pd_xmov;
    dummydaeeb126_data_d0_496 = m2c::kglobal_pd_ymov;
    dummydaeeb126_data_d2_497 = m2c::kglobal_pd_xymv;
    dummydaeeb126_data_d4_498 = m2c::kglobal_pd_attr;
    dummydaeeb126_data_d6_499 = m2c::kglobal_p_end;
    dummydaeeb126_data_d8_500 = m2c::kglobal_p_end;
    dummydaeeb126_data_da_501 = m2c::kglobal_pd_qspr;
    dummydaeeb126_data_dc_502 = m2c::kglobal_pd_line;
    dummydaeeb126_data_de_503 = m2c::kglobal_pd_vga;
    dummydaeeb126_data_e0_504 = m2c::kglobal_p_end;
    dummydaeeb126_data_e2_505 = m2c::kglobal_p_end;
    dummydaeeb126_data_e4_506 = m2c::kglobal_p_end;
    dummydaeeb126_data_e6_507 = m2c::kglobal_p_end;
    dummydaeeb126_data_e8_508 = m2c::kglobal_pv_chr;
    dummydaeeb126_data_ea_509 = m2c::kglobal_pv_str;
    dummydaeeb126_data_ec_510 = m2c::kglobal_pv_hexb;
    dummydaeeb126_data_ee_511 = m2c::kglobal_pv_hexw;
    dummydaeeb126_data_f0_512 = m2c::kglobal_pv_hexl;
    dummydaeeb126_data_f2_513 = m2c::kglobal_pv_decb;
    dummydaeeb126_data_f4_514 = m2c::kglobal_pv_decw;
    dummydaeeb126_data_f6_515 = m2c::kglobal_p_end;
    dummydaeeb126_data_f8_516 = m2c::kglobal_p_end;
    dummydaeeb126_data_fa_517 = m2c::kglobal_p_end;
    dummydaeeb126_data_fc_518 = m2c::kglobal_p_end;
    dummydaeeb126_data_fe_519 = m2c::kglobal_p_end;
    dummydaeeb126_data_100_520 = m2c::kglobal_p_end;
    dummydaeeb126_data_102_521 = m2c::kglobal_p_end;
    dummydaeeb126_data_104_522 = m2c::kglobal_p_end;
    dummydaeeb126_data_106_523 = m2c::kglobal_p_end;
    dummydaeeb126_data_108_524 = m2c::kglobal_pv_x;
    dummydaeeb126_data_10a_525 = m2c::kglobal_pv_y;
    dummydaeeb126_data_10c_526 = m2c::kglobal_pv_xy;
    dummydaeeb126_data_10e_527 = m2c::kglobal_p_end;
    dummydaeeb126_data_110_528 = m2c::kglobal_p_end;
    dummydaeeb126_data_112_529 = m2c::kglobal_p_end;
    dummydaeeb126_data_114_530 = m2c::kglobal_pv_attr;
    dummydaeeb126_data_116_531 = m2c::kglobal_p_end;
    dummydaeeb126_data_118_532 = m2c::kglobal_p_end;
    dummydaeeb126_data_11a_533 = m2c::kglobal_p_end;
    dummydaeeb126_data_11c_534 = m2c::kglobal_p_end;
    dummydaeeb126_data_11e_535 = m2c::kglobal_p_end;
    dummydaeeb126_data_120_536 = m2c::kglobal_pv_pdeg;
    dummydaeeb126_data_122_537 = m2c::kglobal_pv_rng;
    dummydaeeb126_data_124_538 = m2c::kglobal_pv_eta;
    dummydaeeb126_data_126_539 = m2c::kglobal_p_end;
    dummydaeeb126_data_128_540 = m2c::kglobal_p_end;
    dummydaeeb126_data_12a_541 = m2c::kglobal_pp_str;
    dummydaeeb126_data_12c_542 = m2c::kglobal_p_end;
    dummydaeeb126_data_12e_543 = m2c::kglobal_p_end;
    dummydaeeb126_data_130_544 = m2c::kglobal_p_end;
    dummydaeeb126_data_132_545 = m2c::kglobal_p_end;
    dummydaeeb126_data_134_546 = m2c::kglobal_pp_decw;
    dummydaeeb126_data_136_547 = m2c::kglobal_p_end;
    dummydaeeb126_data_138_548 = m2c::kglobal_p_end;
    dummydaeeb126_data_13a_549 = m2c::kglobal_p_end;
    dummydaeeb126_data_13c_550 = m2c::kglobal_p_end;
    dummydaeeb126_data_13e_551 = m2c::kglobal_p_end;
    dummydaeeb126_data_140_552 = m2c::kglobal_p_end;
    dummydaeeb126_data_142_553 = m2c::kglobal_p_end;
    dummydaeeb126_data_144_554 = m2c::kglobal_p_end;
    dummydaeeb126_data_146_555 = m2c::kglobal_p_end;
    dummydaeeb126_data_148_556 = m2c::kglobal_p_end;
    dummydaeeb126_data_14a_557 = m2c::kglobal_p_end;
    dummydaeeb126_data_14c_558 = m2c::kglobal_p_end;
    dummydaeeb126_data_14e_559 = m2c::kglobal_p_end;
    dummydaeeb126_data_150_560 = m2c::kglobal_p_end;
    dummydaeeb126_data_152_561 = m2c::kglobal_p_end;
    dummydaeeb126_data_154_562 = m2c::kglobal_pp_attr;
    dummydaeeb126_data_156_563 = m2c::kglobal_p_end;
    dummydaeeb126_data_158_564 = m2c::kglobal_p_end;
    dummydaeeb126_data_15a_565 = m2c::kglobal_p_end;
    dummydaeeb126_data_15c_566 = m2c::kglobal_p_end;
    dummydaeeb126_data_15e_567 = m2c::kglobal_p_end;
    dummydaeeb126_data_160_568 = m2c::kglobal_p_end;
    dummydaeeb126_data_162_569 = m2c::kglobal_p_end;
    dummydaeeb126_data_164_570 = m2c::kglobal_p_end;
    dummydaeeb126_data_166_571 = m2c::kglobal_p_end;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_print(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        

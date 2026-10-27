/* THIS IS GENERATED FILE */

        
#ifndef __M2C_PRINT_STUBS_H__
#define __M2C_PRINT_STUBS_H__

#include "asm.h"



	static const int char_type1 = 0;
static const int char_type2 = 4;
static const int char_type3 = 8;
static const int s_sprite = 0;
static const int m_sprite = 4;
static const int q_sprite = 8;
static const int max_ext_fn = 95;

	#define M2C_MODULE_PRINT 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db (& hexattr)[2];
extern db (& decattr)[2];
extern db (& bcdattr)[2];
extern dw& chartype;
extern dd& _printchar;
extern dd& dummydaeeb126_data_c_424;
extern dd& dummydaeeb126_data_10_425;
extern db (& defaultcols)[8];
extern db (& dialogtitle)[8];
extern db (& dialogtext)[8];
extern char (& hexchars)[16];
extern char (& leadingchar)[4];
extern char (& signchar)[8];
extern db (& numbuffer)[16];
extern dw& tmpprtln;
extern dw& tmpprtcl;
extern dd& spritetype;
extern dd& dummydaeeb126_data_60_442;
extern dd& dummydaeeb126_data_64_443;
extern dw& printdolfn;
extern dw& dummydaeeb126_data_6a_445;
extern dw& dummydaeeb126_data_6c_446;
extern dw& dummydaeeb126_data_6e_447;
extern dw& dummydaeeb126_data_70_448;
extern dw& dummydaeeb126_data_72_449;
extern dw& dummydaeeb126_data_74_450;
extern dw& dummydaeeb126_data_76_451;
extern dw& dummydaeeb126_data_78_452;
extern dw& dummydaeeb126_data_7a_453;
extern dw& dummydaeeb126_data_7c_454;
extern dw& dummydaeeb126_data_7e_455;
extern dw& dummydaeeb126_data_80_456;
extern dw& dummydaeeb126_data_82_457;
extern dw& dummydaeeb126_data_84_458;
extern dw& dummydaeeb126_data_86_459;
extern dw& dummydaeeb126_data_88_460;
extern dw& dummydaeeb126_data_8a_461;
extern dw& dummydaeeb126_data_8c_462;
extern dw& dummydaeeb126_data_8e_463;
extern dw& dummydaeeb126_data_90_464;
extern dw& dummydaeeb126_data_92_465;
extern dw& dummydaeeb126_data_94_466;
extern dw& dummydaeeb126_data_96_467;
extern dw& dummydaeeb126_data_98_468;
extern dw& dummydaeeb126_data_9a_469;
extern dw& dummydaeeb126_data_9c_470;
extern dw& dummydaeeb126_data_9e_471;
extern dw& dummydaeeb126_data_a0_472;
extern dw& dummydaeeb126_data_a2_473;
extern dw& dummydaeeb126_data_a4_474;
extern dw& dummydaeeb126_data_a6_475;
extern dw& extprintdolfn;
extern dw& dummydaeeb126_data_aa_477;
extern dw& dummydaeeb126_data_ac_478;
extern dw& dummydaeeb126_data_ae_479;
extern dw& dummydaeeb126_data_b0_480;
extern dw& dummydaeeb126_data_b2_481;
extern dw& dummydaeeb126_data_b4_482;
extern dw& dummydaeeb126_data_b6_483;
extern dw& dummydaeeb126_data_b8_484;
extern dw& dummydaeeb126_data_ba_485;
extern dw& dummydaeeb126_data_bc_486;
extern dw& dummydaeeb126_data_be_487;
extern dw& dummydaeeb126_data_c0_488;
extern dw& dummydaeeb126_data_c2_489;
extern dw& dummydaeeb126_data_c4_490;
extern dw& dummydaeeb126_data_c6_491;
extern dw& dummydaeeb126_data_c8_492;
extern dw& dummydaeeb126_data_ca_493;
extern dw& dummydaeeb126_data_cc_494;
extern dw& dummydaeeb126_data_ce_495;
extern dw& dummydaeeb126_data_d0_496;
extern dw& dummydaeeb126_data_d2_497;
extern dw& dummydaeeb126_data_d4_498;
extern dw& dummydaeeb126_data_d6_499;
extern dw& dummydaeeb126_data_d8_500;
extern dw& dummydaeeb126_data_da_501;
extern dw& dummydaeeb126_data_dc_502;
extern dw& dummydaeeb126_data_de_503;
extern dw& dummydaeeb126_data_e0_504;
extern dw& dummydaeeb126_data_e2_505;
extern dw& dummydaeeb126_data_e4_506;
extern dw& dummydaeeb126_data_e6_507;
extern dw& dummydaeeb126_data_e8_508;
extern dw& dummydaeeb126_data_ea_509;
extern dw& dummydaeeb126_data_ec_510;
extern dw& dummydaeeb126_data_ee_511;
extern dw& dummydaeeb126_data_f0_512;
extern dw& dummydaeeb126_data_f2_513;
extern dw& dummydaeeb126_data_f4_514;
extern dw& dummydaeeb126_data_f6_515;
extern dw& dummydaeeb126_data_f8_516;
extern dw& dummydaeeb126_data_fa_517;
extern dw& dummydaeeb126_data_fc_518;
extern dw& dummydaeeb126_data_fe_519;
extern dw& dummydaeeb126_data_100_520;
extern dw& dummydaeeb126_data_102_521;
extern dw& dummydaeeb126_data_104_522;
extern dw& dummydaeeb126_data_106_523;
extern dw& dummydaeeb126_data_108_524;
extern dw& dummydaeeb126_data_10a_525;
extern dw& dummydaeeb126_data_10c_526;
extern dw& dummydaeeb126_data_10e_527;
extern dw& dummydaeeb126_data_110_528;
extern dw& dummydaeeb126_data_112_529;
extern dw& dummydaeeb126_data_114_530;
extern dw& dummydaeeb126_data_116_531;
extern dw& dummydaeeb126_data_118_532;
extern dw& dummydaeeb126_data_11a_533;
extern dw& dummydaeeb126_data_11c_534;
extern dw& dummydaeeb126_data_11e_535;
extern dw& dummydaeeb126_data_120_536;
extern dw& dummydaeeb126_data_122_537;
extern dw& dummydaeeb126_data_124_538;
extern dw& dummydaeeb126_data_126_539;
extern dw& dummydaeeb126_data_128_540;
extern dw& dummydaeeb126_data_12a_541;
extern dw& dummydaeeb126_data_12c_542;
extern dw& dummydaeeb126_data_12e_543;
extern dw& dummydaeeb126_data_130_544;
extern dw& dummydaeeb126_data_132_545;
extern dw& dummydaeeb126_data_134_546;
extern dw& dummydaeeb126_data_136_547;
extern dw& dummydaeeb126_data_138_548;
extern dw& dummydaeeb126_data_13a_549;
extern dw& dummydaeeb126_data_13c_550;
extern dw& dummydaeeb126_data_13e_551;
extern dw& dummydaeeb126_data_140_552;
extern dw& dummydaeeb126_data_142_553;
extern dw& dummydaeeb126_data_144_554;
extern dw& dummydaeeb126_data_146_555;
extern dw& dummydaeeb126_data_148_556;
extern dw& dummydaeeb126_data_14a_557;
extern dw& dummydaeeb126_data_14c_558;
extern dw& dummydaeeb126_data_14e_559;
extern dw& dummydaeeb126_data_150_560;
extern dw& dummydaeeb126_data_152_561;
extern dw& dummydaeeb126_data_154_562;
extern dw& dummydaeeb126_data_156_563;
extern dw& dummydaeeb126_data_158_564;
extern dw& dummydaeeb126_data_15a_565;
extern dw& dummydaeeb126_data_15c_566;
extern dw& dummydaeeb126_data_15e_567;
extern dw& dummydaeeb126_data_160_568;
extern dw& dummydaeeb126_data_162_569;
extern dw& dummydaeeb126_data_164_570;
extern dw& dummydaeeb126_data_166_571;
extern db& libcode;

	
namespace m2c{
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
#ifndef M2C_CODE_EQUATE_p_ext
#define M2C_CODE_EQUATE_p_ext 1
static const dd kp_ext = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_printdol
#define M2C_CODE_EQUATE_printdol 1
static const dd kprintdol = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_printdolloop
#define M2C_CODE_EQUATE_printdolloop 1
static const dd kprintdolloop = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_sortprintdolfn
#define M2C_CODE_EQUATE_sortprintdolfn 1
static const dd ksortprintdolfn = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_printchar
#define M2C_CODE_EQUATE_printchar 1
static const dd kprintchar = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_p_end
#define M2C_CODE_EQUATE_p_end 1
static const dd kp_end = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_p_input
#define M2C_CODE_EQUATE_p_input 1
static const dd kp_input = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_p_over0
#define M2C_CODE_EQUATE_p_over0 1
static const dd kp_over0 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_p_over1
#define M2C_CODE_EQUATE_p_over1 1
static const dd kp_over1 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_p_char1
#define M2C_CODE_EQUATE_p_char1 1
static const dd kp_char1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_p_char2
#define M2C_CODE_EQUATE_p_char2 1
static const dd kp_char2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_p_char3
#define M2C_CODE_EQUATE_p_char3 1
static const dd kp_char3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_p_crsr
#define M2C_CODE_EQUATE_p_crsr 1
static const dd kp_crsr = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_p_hexat
#define M2C_CODE_EQUATE_p_hexat 1
static const dd kp_hexat = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_p_decat
#define M2C_CODE_EQUATE_p_decat 1
static const dd kp_decat = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_p_bcdat
#define M2C_CODE_EQUATE_p_bcdat 1
static const dd kp_bcdat = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_p_defcl
#define M2C_CODE_EQUATE_p_defcl 1
static const dd kp_defcl = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_p_title
#define M2C_CODE_EQUATE_p_title 1
static const dd kp_title = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_p_text
#define M2C_CODE_EQUATE_p_text 1
static const dd kp_text = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_p_uline
#define M2C_CODE_EQUATE_p_uline 1
static const dd kp_uline = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_p_ulend
#define M2C_CODE_EQUATE_p_ulend 1
static const dd kp_ulend = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_p_rect
#define M2C_CODE_EQUATE_p_rect 1
static const dd kp_rect = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_p_rend
#define M2C_CODE_EQUATE_p_rend 1
static const dd kp_rend = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_p_nop
#define M2C_CODE_EQUATE_p_nop 1
static const dd kp_nop = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_extok
#define M2C_CODE_EQUATE_extok 1
static const dd kextok = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_pv_chr
#define M2C_CODE_EQUATE_pv_chr 1
static const dd kpv_chr = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_pv_str
#define M2C_CODE_EQUATE_pv_str 1
static const dd kpv_str = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_pp_str
#define M2C_CODE_EQUATE_pp_str 1
static const dd kpp_str = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_pd_hexb
#define M2C_CODE_EQUATE_pd_hexb 1
static const dd kpd_hexb = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_printhexbyte
#define M2C_CODE_EQUATE_printhexbyte 1
static const dd kprinthexbyte = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_pv_hexb
#define M2C_CODE_EQUATE_pv_hexb 1
static const dd kpv_hexb = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_pd_hexw
#define M2C_CODE_EQUATE_pd_hexw 1
static const dd kpd_hexw = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_printhexword
#define M2C_CODE_EQUATE_printhexword 1
static const dd kprinthexword = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_pv_hexw
#define M2C_CODE_EQUATE_pv_hexw 1
static const dd kpv_hexw = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_pd_hexl
#define M2C_CODE_EQUATE_pd_hexl 1
static const dd kpd_hexl = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_printhexlong
#define M2C_CODE_EQUATE_printhexlong 1
static const dd kprinthexlong = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_pv_hexl
#define M2C_CODE_EQUATE_pv_hexl 1
static const dd kpv_hexl = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_pd_decb
#define M2C_CODE_EQUATE_pd_decb 1
static const dd kpd_decb = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_printdecbyte
#define M2C_CODE_EQUATE_printdecbyte 1
static const dd kprintdecbyte = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_pv_decb
#define M2C_CODE_EQUATE_pv_decb 1
static const dd kpv_decb = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_pd_decw
#define M2C_CODE_EQUATE_pd_decw 1
static const dd kpd_decw = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_printdecword
#define M2C_CODE_EQUATE_printdecword 1
static const dd kprintdecword = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_pv_decw
#define M2C_CODE_EQUATE_pv_decw 1
static const dd kpv_decw = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_pp_decw
#define M2C_CODE_EQUATE_pp_decw 1
static const dd kpp_decw = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_pd_x
#define M2C_CODE_EQUATE_pd_x 1
static const dd kpd_x = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_pv_x
#define M2C_CODE_EQUATE_pv_x 1
static const dd kpv_x = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_pd_y
#define M2C_CODE_EQUATE_pd_y 1
static const dd kpd_y = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_pv_y
#define M2C_CODE_EQUATE_pv_y 1
static const dd kpv_y = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_pd_xy
#define M2C_CODE_EQUATE_pd_xy 1
static const dd kpd_xy = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_pv_xy
#define M2C_CODE_EQUATE_pv_xy 1
static const dd kpv_xy = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_pd_xmov
#define M2C_CODE_EQUATE_pd_xmov 1
static const dd kpd_xmov = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_pd_ymov
#define M2C_CODE_EQUATE_pd_ymov 1
static const dd kpd_ymov = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_pd_xymv
#define M2C_CODE_EQUATE_pd_xymv 1
static const dd kpd_xymv = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_pd_attr
#define M2C_CODE_EQUATE_pd_attr 1
static const dd kpd_attr = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_pv_attr
#define M2C_CODE_EQUATE_pv_attr 1
static const dd kpv_attr = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_pp_attr
#define M2C_CODE_EQUATE_pp_attr 1
static const dd kpp_attr = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_pd_sspr
#define M2C_CODE_EQUATE_pd_sspr 1
static const dd kpd_sspr = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_contdsprite
#define M2C_CODE_EQUATE_contdsprite 1
static const dd kcontdsprite = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_pd_mspr
#define M2C_CODE_EQUATE_pd_mspr 1
static const dd kpd_mspr = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_pd_qspr
#define M2C_CODE_EQUATE_pd_qspr 1
static const dd kpd_qspr = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_pd_line
#define M2C_CODE_EQUATE_pd_line 1
static const dd kpd_line = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_pd_vga
#define M2C_CODE_EQUATE_pd_vga 1
static const dd kpd_vga = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_pv_pdeg
#define M2C_CODE_EQUATE_pv_pdeg 1
static const dd kpv_pdeg = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_pv_rng
#define M2C_CODE_EQUATE_pv_rng 1
static const dd kpv_rng = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_pv_eta
#define M2C_CODE_EQUATE_pv_eta 1
static const dd kpv_eta = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_hexheader
#define M2C_CODE_EQUATE_hexheader 1
static const dd khexheader = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_hexbyte
#define M2C_CODE_EQUATE_hexbyte 1
static const dd khexbyte = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_hexfooter
#define M2C_CODE_EQUATE_hexfooter 1
static const dd khexfooter = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_nohex_dol
#define M2C_CODE_EQUATE_nohex_dol 1
static const dd knohex_dol = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_nohex_0
#define M2C_CODE_EQUATE_nohex_0 1
static const dd knohex_0 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_nohex_h
#define M2C_CODE_EQUATE_nohex_h 1
static const dd knohex_h = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_nohex_sp
#define M2C_CODE_EQUATE_nohex_sp 1
static const dd knohex_sp = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_printdeccom
#define M2C_CODE_EQUATE_printdeccom 1
static const dd kprintdeccom = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_defaultwidth
#define M2C_CODE_EQUATE_defaultwidth 1
static const dd kdefaultwidth = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_unsignednum
#define M2C_CODE_EQUATE_unsignednum 1
static const dd kunsignednum = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_decdivloop
#define M2C_CODE_EQUATE_decdivloop 1
static const dd kdecdivloop = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_decdivdone
#define M2C_CODE_EQUATE_decdivdone 1
static const dd kdecdivdone = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_leadingzero
#define M2C_CODE_EQUATE_leadingzero 1
static const dd kleadingzero = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_skipleadingchar
#define M2C_CODE_EQUATE_skipleadingchar 1
static const dd kskipleadingchar = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_printnumbuffer
#define M2C_CODE_EQUATE_printnumbuffer 1
static const dd kprintnumbuffer = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_printnumloop
#define M2C_CODE_EQUATE_printnumloop 1
static const dd kprintnumloop = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_nullchar
#define M2C_CODE_EQUATE_nullchar 1
static const dd knullchar = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1062;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool hexbyte(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool hexfooter(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool hexheader(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printchar(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printdecbyte(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printdecword(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printdol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printhexbyte(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printhexlong(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printhexword(m2c::_offsets, struct m2c::_STATE*);
extern bool drawrectangle(m2c::_offsets, struct m2c::_STATE*);
extern bool hlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool msprite(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar1(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar2(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar3(m2c::_offsets, struct m2c::_STATE*);
extern bool qsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool setattributes(m2c::_offsets, struct m2c::_STATE*);
extern bool ssprite(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef inputmode
extern db& inputmode;
#endif
#ifndef backcol
extern db& backcol;
#endif
#ifndef forecol
extern db& forecol;
#endif
#ifndef prtln
extern dw& prtln;
#endif
#ifndef prtcl
extern dw& prtcl;
#endif
#ifndef cursorchar
extern db& cursorchar;
#endif
#ifndef printover
extern db& printover;
#endif

#endif

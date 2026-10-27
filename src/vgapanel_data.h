#ifndef __M2C_VGAPANEL_DATA_H__
#define __M2C_VGAPANEL_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& loadpanel;
extern dw& dummya8598969_data_2_1617;
extern dw& dummya8598969_data_4_1618;
extern dw& dummya8598969_data_6_1619;
extern dw& dummya8598969_data_8_1620;
extern dw& dummya8598969_data_a_1621;
extern dw& dummya8598969_data_c_1622;
extern dw& dummya8598969_data_e_1623;
extern dw& panelrgbptr;
extern dw& failures;
extern dw& armblinktimer;
extern db& armblink;
extern db& pancode;

#ifndef vga_panel
extern db& vga_panel;
#endif
#ifndef automode
extern dw& automode;
#endif
#ifndef ironwork
extern db& ironwork;
#endif
#ifndef escopetoggle
extern db& escopetoggle;
#endif
#ifndef wheelbrakes
extern db& wheelbrakes;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef armmode
extern dw& armmode;
#endif
#ifndef ssf_rwr
extern db& ssf_rwr;
#endif
#ifndef appprogseq
extern db& appprogseq;
#endif
#ifndef vga_panel1
extern db& vga_panel1;
#endif
#ifndef navig_mfd
extern dw& navig_mfd;
#endif
#ifndef crewmode
extern dw& crewmode;
#endif
#ifndef navigpanel
extern db& navigpanel;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef ssf_engine2
extern db& ssf_engine2;
#endif
#ifndef psidepanel
extern db& psidepanel;
#endif
#ifndef panelmode
extern dw& panelmode;
#endif
#ifndef vga_rgb_data
extern db& vga_rgb_data;
#endif
#ifndef autothrot
extern db& autothrot;
#endif
#ifndef reheat
extern dw& reheat;
#endif
#ifndef quietercockpit
extern db& quietercockpit;
#endif
#ifndef framepanel
extern db& framepanel;
#endif
#ifndef thrustrvrs
extern db& thrustrvrs;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef attention
extern db& attention;
#endif
#ifndef fuelwt
extern dw& fuelwt;
#endif
#ifndef jettison
extern db& jettison;
#endif
#ifndef gear
extern db& gear;
#endif
#ifndef m_cosr
extern dw& m_cosr;
#endif
#ifndef appprogflag
extern db& appprogflag;
#endif
#ifndef ambwarnings2
extern dw& ambwarnings2;
#endif
#ifndef ssf_gear
extern db& ssf_gear;
#endif
#ifndef tfbrisk
extern db& tfbrisk;
#endif
#ifndef rwrthreatflags
extern db& rwrthreatflags;
#endif
#ifndef extrapanel
extern db& extrapanel;
#endif
#ifndef tab2
extern tab& tab2;
#endif
#ifndef trueradalt
extern dw& trueradalt;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef redwarnings1
extern dw& redwarnings1;
#endif
#ifndef workscrptr
extern dw& workscrptr;
#endif
#ifndef tab1
extern tab& tab1;
#endif
#ifndef setpaletteflag
extern db& setpaletteflag;
#endif
#ifndef ambwarnings1
extern dw& ambwarnings1;
#endif
#ifndef workscreen
extern dw& workscreen;
#endif
#ifndef m_cosp
extern dw& m_cosp;
#endif
#ifndef pilot_mfd
extern dw& pilot_mfd;
#endif
#ifndef airarmmode
extern dw& airarmmode;
#endif
#ifndef pilotpanel
extern db& pilotpanel;
#endif
#ifndef ssf_engine1
extern db& ssf_engine1;
#endif
#ifndef geartimer
extern dw& geartimer;
#endif
#ifndef nsidepanel
extern db& nsidepanel;
#endif
#ifndef oxydollypos
extern db& oxydollypos;
#endif
#ifndef latearmanim
extern db& latearmanim;
#endif
#ifndef vga_panel2
extern db& vga_panel2;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef night
extern db& night;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_vga_initpanels
#define M2C_CODE_EQUATE_vga_initpanels 1
static const dd kvga_initpanels = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_getouttahere
#define M2C_CODE_EQUATE_getouttahere 1
static const dd kgetouttahere = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_initexit
#define M2C_CODE_EQUATE_initexit 1
static const dd kinitexit = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_vga_loadpanel
#define M2C_CODE_EQUATE_vga_loadpanel 1
static const dd kvga_loadpanel = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_loadpilotpan
#define M2C_CODE_EQUATE_loadpilotpan 1
static const dd kloadpilotpan = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_loadpsidepan
#define M2C_CODE_EQUATE_loadpsidepan 1
static const dd kloadpsidepan = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_loadnavigpan
#define M2C_CODE_EQUATE_loadnavigpan 1
static const dd kloadnavigpan = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_loadnsidepan
#define M2C_CODE_EQUATE_loadnsidepan 1
static const dd kloadnsidepan = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_loadlookdownpan
#define M2C_CODE_EQUATE_loadlookdownpan 1
static const dd kloadlookdownpan = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp1
#define M2C_CODE_EQUATE_reflectdlp1 1
static const dd kreflectdlp1 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp1
#define M2C_CODE_EQUATE_reflectwlp1 1
static const dd kreflectwlp1 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp2
#define M2C_CODE_EQUATE_reflectdlp2 1
static const dd kreflectdlp2 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp2
#define M2C_CODE_EQUATE_reflectwlp2 1
static const dd kreflectwlp2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp3
#define M2C_CODE_EQUATE_reflectdlp3 1
static const dd kreflectdlp3 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp3
#define M2C_CODE_EQUATE_reflectwlp3 1
static const dd kreflectwlp3 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp4
#define M2C_CODE_EQUATE_reflectdlp4 1
static const dd kreflectdlp4 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp4
#define M2C_CODE_EQUATE_reflectwlp4 1
static const dd kreflectwlp4 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_loadmappan
#define M2C_CODE_EQUATE_loadmappan 1
static const dd kloadmappan = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_vga_clrpilotpan
#define M2C_CODE_EQUATE_vga_clrpilotpan 1
static const dd kvga_clrpilotpan = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_vga_clrnavigpan
#define M2C_CODE_EQUATE_vga_clrnavigpan 1
static const dd kvga_clrnavigpan = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwpilotpan
#define M2C_CODE_EQUATE_vga_drwpilotpan 1
static const dd kvga_drwpilotpan = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_redgearlamps1
#define M2C_CODE_EQUATE_redgearlamps1 1
static const dd kredgearlamps1 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_pilotgearok
#define M2C_CODE_EQUATE_pilotgearok 1
static const dd kpilotgearok = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_wbrakesok
#define M2C_CODE_EQUATE_wbrakesok 1
static const dd kwbrakesok = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dollyok
#define M2C_CODE_EQUATE_dollyok 1
static const dd kdollyok = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_briskok
#define M2C_CODE_EQUATE_briskok 1
static const dd kbriskok = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_eng1ok
#define M2C_CODE_EQUATE_eng1ok 1
static const dd keng1ok = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_eng2ok
#define M2C_CODE_EQUATE_eng2ok 1
static const dd keng2ok = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_jettisonok
#define M2C_CODE_EQUATE_jettisonok 1
static const dd kjettisonok = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_rvrsok
#define M2C_CODE_EQUATE_rvrsok 1
static const dd krvrsok = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_appprogok
#define M2C_CODE_EQUATE_appprogok 1
static const dd kappprogok = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_pilotattnok
#define M2C_CODE_EQUATE_pilotattnok 1
static const dd kpilotattnok = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_pilotmfdok
#define M2C_CODE_EQUATE_pilotmfdok 1
static const dd kpilotmfdok = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_nightlatearm
#define M2C_CODE_EQUATE_nightlatearm 1
static const dd knightlatearm = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_latearmok
#define M2C_CODE_EQUATE_latearmok 1
static const dd klatearmok = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_pilotradarok
#define M2C_CODE_EQUATE_pilotradarok 1
static const dd kpilotradarok = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_pilotecmok
#define M2C_CODE_EQUATE_pilotecmok 1
static const dd kpilotecmok = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_92_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_92_skip 1
static const dd k__m2c_macrolocal_92_skip = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_wpnstatusok
#define M2C_CODE_EQUATE_wpnstatusok 1
static const dd kwpnstatusok = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_97_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_97_skip 1
static const dd k__m2c_macrolocal_97_skip = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_rwrok
#define M2C_CODE_EQUATE_rwrok 1
static const dd krwrok = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwnavigpan
#define M2C_CODE_EQUATE_vga_drwnavigpan 1
static const dd kvga_drwnavigpan = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_skipjmpnavigthrotokk
#define M2C_CODE_EQUATE_skipjmpnavigthrotokk 1
static const dd kskipjmpnavigthrotokk = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_navigthrotok
#define M2C_CODE_EQUATE_navigthrotok 1
static const dd knavigthrotok = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_checkfordamageoroff
#define M2C_CODE_EQUATE_checkfordamageoroff 1
static const dd kcheckfordamageoroff = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_skipcheckfordamageofoff
#define M2C_CODE_EQUATE_skipcheckfordamageofoff 1
static const dd kskipcheckfordamageofoff = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_skipcheckifradaltok
#define M2C_CODE_EQUATE_skipcheckifradaltok 1
static const dd kskipcheckifradaltok = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_103_skip 1
static const dd k__m2c_macrolocal_103_skip = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_104_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_104_skip 1
static const dd k__m2c_macrolocal_104_skip = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_checkifradaltok
#define M2C_CODE_EQUATE_checkifradaltok 1
static const dd kcheckifradaltok = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_redgearlamps2
#define M2C_CODE_EQUATE_redgearlamps2 1
static const dd kredgearlamps2 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_naviggearok
#define M2C_CODE_EQUATE_naviggearok 1
static const dd knaviggearok = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_navigautook
#define M2C_CODE_EQUATE_navigautook 1
static const dd knavigautook = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_navigattnok
#define M2C_CODE_EQUATE_navigattnok 1
static const dd knavigattnok = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_sinisini
#define M2C_CODE_EQUATE_sinisini 1
static const dd ksinisini = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_skipjmpnavigthrotokk3
#define M2C_CODE_EQUATE_skipjmpnavigthrotokk3 1
static const dd kskipjmpnavigthrotokk3 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_skipjmpnavigthrotokk2
#define M2C_CODE_EQUATE_skipjmpnavigthrotokk2 1
static const dd kskipjmpnavigthrotokk2 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_navigecmok
#define M2C_CODE_EQUATE_navigecmok 1
static const dd knavigecmok = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_navigmfdok
#define M2C_CODE_EQUATE_navigmfdok 1
static const dd knavigmfdok = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_navigtab1ok
#define M2C_CODE_EQUATE_navigtab1ok 1
static const dd knavigtab1ok = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_navigtab2ok
#define M2C_CODE_EQUATE_navigtab2ok 1
static const dd knavigtab2ok = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_navigradarok
#define M2C_CODE_EQUATE_navigradarok 1
static const dd knavigradarok = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwnavigpanbrief
#define M2C_CODE_EQUATE_vga_drwnavigpanbrief 1
static const dd kvga_drwnavigpanbrief = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_redgearlamps2b
#define M2C_CODE_EQUATE_redgearlamps2b 1
static const dd kredgearlamps2b = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_naviggearokb
#define M2C_CODE_EQUATE_naviggearokb 1
static const dd knaviggearokb = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_navigautookb
#define M2C_CODE_EQUATE_navigautookb 1
static const dd knavigautookb = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_vga_ironwork
#define M2C_CODE_EQUATE_vga_ironwork 1
static const dd kvga_ironwork = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_vga_brackets
#define M2C_CODE_EQUATE_vga_brackets 1
static const dd kvga_brackets = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_mxlp1_1
#define M2C_CODE_EQUATE_mxlp1_1 1
static const dd kmxlp1_1 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_mxlp1_2
#define M2C_CODE_EQUATE_mxlp1_2 1
static const dd kmxlp1_2 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_mxlp2_1
#define M2C_CODE_EQUATE_mxlp2_1 1
static const dd kmxlp2_1 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_mxlp2_2
#define M2C_CODE_EQUATE_mxlp2_2 1
static const dd kmxlp2_2 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_mxlp3_1
#define M2C_CODE_EQUATE_mxlp3_1 1
static const dd kmxlp3_1 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_mxlp3_2
#define M2C_CODE_EQUATE_mxlp3_2 1
static const dd kmxlp3_2 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_mxlp4_1
#define M2C_CODE_EQUATE_mxlp4_1 1
static const dd kmxlp4_1 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_mxlp4_2
#define M2C_CODE_EQUATE_mxlp4_2 1
static const dd kmxlp4_2 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_drawradarnoise
#define M2C_CODE_EQUATE_drawradarnoise 1
static const dd kdrawradarnoise = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_zxzx
#define M2C_CODE_EQUATE_zxzx 1
static const dd kzxzx = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_repositionblitter
#define M2C_CODE_EQUATE_repositionblitter 1
static const dd krepositionblitter = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_copypreviewpan
#define M2C_CODE_EQUATE_copypreviewpan 1
static const dd kcopypreviewpan = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_drawpreviewpan
#define M2C_CODE_EQUATE_drawpreviewpan 1
static const dd kdrawpreviewpan = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_storeworkscreen
#define M2C_CODE_EQUATE_storeworkscreen 1
static const dd kstoreworkscreen = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10e3;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_loadpanel
#define M2C_CODE_EQUATE_loadpanel 1
static const dd kloadpanel = (m2c::near_offset_external(::loadpanel));
#endif
#ifndef M2C_CODE_EQUATE_panelrgbptr
#define M2C_CODE_EQUATE_panelrgbptr 1
static const dd kpanelrgbptr = (m2c::near_offset_external(::panelrgbptr));
#endif
#ifndef M2C_CODE_EQUATE_failures
#define M2C_CODE_EQUATE_failures 1
static const dd kfailures = (m2c::near_offset_external(::failures));
#endif
#ifndef M2C_CODE_EQUATE_armblinktimer
#define M2C_CODE_EQUATE_armblinktimer 1
static const dd karmblinktimer = (m2c::near_offset_external(::armblinktimer));
#endif
#ifndef M2C_CODE_EQUATE_armblink
#define M2C_CODE_EQUATE_armblink 1
static const dd karmblink = (m2c::near_offset_external(::armblink));
#endif
}
#ifndef loadpanel
#define loadpanel m2c::kloadpanel
#endif
#ifndef panelrgbptr
#define panelrgbptr m2c::kpanelrgbptr
#endif
#ifndef failures
#define failures m2c::kfailures
#endif
#ifndef armblinktimer
#define armblinktimer m2c::karmblinktimer
#endif
#ifndef armblink
#define armblink m2c::karmblink
#endif



#endif

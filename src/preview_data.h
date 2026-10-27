#ifndef __M2C_PREVIEW_DATA_H__
#define __M2C_PREVIEW_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& modelptr;
extern dw& category;
extern dw& show3dtimer;
extern db& exit3dflag;
extern db& fadeinflag;
extern db& paused;
extern db& pauseplayxchg;
extern db& timer50;
extern viewpoint& vp;
extern mobile& p_mobile;
extern viewpoint& p_view;
extern dw& hfine;
extern dw& pfine;
extern dw& rfine;
extern dw& prevpfine;
extern dw& prevrfine;
extern dw& mousexcrt;
extern dw& mouseycrt;
extern char (& graphicsfile)[12];
extern char (& dummy6b9724ba_data_4f_2398)[12];
extern char (& picfilename)[8];
extern char (& dummy6b9724ba_data_63_2400)[4];
extern db& dummy6b9724ba_data_67_2401;
extern dw& gadgetptr;
extern gadget& __m2c_structrow_6b9724ba_2438;
extern gadget& __m2c_structrow_6b9724ba_2439;
extern gadget& __m2c_structrow_6b9724ba_2440;
extern gadget& __m2c_structrow_6b9724ba_2441;
extern gadget& pauseplaygadget;
extern gadget& __m2c_structrow_6b9724ba_2443;
extern gadget& __m2c_structrow_6b9724ba_2444;
extern gadget& __m2c_structrow_6b9724ba_2445;
extern gadget& __m2c_structrow_6b9724ba_2446;
extern dw& autotimer;
extern byte& picfile;
extern gadget& gadgetlist;
extern db& prevdata;
extern model& gr4model;
extern model& __m2c_structrow_6b9724ba_2495;
extern model& f3model;
extern model& __m2c_structrow_6b9724ba_2497;
extern model& __m2c_structrow_6b9724ba_2498;
extern model& __m2c_structrow_6b9724ba_2499;
extern model& __m2c_structrow_6b9724ba_2500;
extern model& __m2c_structrow_6b9724ba_2501;
extern model& __m2c_structrow_6b9724ba_2502;
extern model& __m2c_structrow_6b9724ba_2503;
extern model& __m2c_structrow_6b9724ba_2504;
extern model& __m2c_structrow_6b9724ba_2505;
extern model& __m2c_structrow_6b9724ba_2506;
extern model& __m2c_structrow_6b9724ba_2507;
extern model& __m2c_structrow_6b9724ba_2508;
extern model& __m2c_structrow_6b9724ba_2509;
extern model& __m2c_structrow_6b9724ba_2510;
extern model& __m2c_structrow_6b9724ba_2511;
extern model& __m2c_structrow_6b9724ba_2512;
extern model& __m2c_structrow_6b9724ba_2513;
extern model& __m2c_structrow_6b9724ba_2514;
extern model& __m2c_structrow_6b9724ba_2515;
extern model& __m2c_structrow_6b9724ba_2516;
extern model& __m2c_structrow_6b9724ba_2517;
extern model& __m2c_structrow_6b9724ba_2518;
extern model& __m2c_structrow_6b9724ba_2519;
extern model& __m2c_structrow_6b9724ba_2520;
extern model& __m2c_structrow_6b9724ba_2521;
extern char (& tornadodol)[8];
extern char (& floggerdol)[8];
extern char (& foxhounddol)[9];
extern char (& eagledol)[6];
extern char (& flankerdol)[8];
extern char (& falcondol)[7];
extern char (& fulcrumdol)[8];
extern char (& thunderboltdol)[12];
extern char (& frogfootdol)[9];
extern char (& herculesdol)[9];
extern char (& candiddol)[7];
extern char (& sentrydol)[7];
extern char (& mainstaydol)[9];
extern char (& apachedol)[7];
extern char (& hinddol)[5];
extern char (& chinookdol)[8];
extern char (& halodol)[5];
extern char (& challengerdol)[11];
extern char (& t80dol)[5];
extern char (& warriordol)[8];
extern char (& bmp2dol)[6];
extern char (& mlrsdol)[5];
extern char (& maz543dol)[8];
extern char (& patriotdol)[8];
extern char (& zrkrombdol)[9];
extern char (& zsu23dol)[9];
extern char (& giraffedol)[8];
extern char (& gr4dol)[4];
extern char (& mig27dol)[7];
extern char (& f3dol)[3];
extern char (& mig31dol)[7];
extern char (& f15dol)[5];
extern char (& su27dol)[6];
extern char (& f16dol)[5];
extern char (& mig29dol)[7];
extern char (& a10dol)[5];
extern char (& su25dol)[6];
extern char (& c130dol)[6];
extern char (& il76dol)[6];
extern char (& e3ddol)[5];
extern char (& a50dol)[5];
extern char (& ah64dol)[6];
extern char (& mi24dol)[6];
extern char (& ch47dol)[6];
extern char (& mi26dol)[6];
extern db& titlewidthaz;
extern db& dummy6b9724ba_prevdata_51f_2589;
extern db& dummy6b9724ba_prevdata_520_2590;
extern db& dummy6b9724ba_prevdata_521_2591;
extern db& dummy6b9724ba_prevdata_522_2592;
extern db& dummy6b9724ba_prevdata_523_2593;
extern db& dummy6b9724ba_prevdata_524_2594;
extern db& dummy6b9724ba_prevdata_525_2595;
extern db& dummy6b9724ba_prevdata_526_2596;
extern db& dummy6b9724ba_prevdata_527_2597;
extern db& dummy6b9724ba_prevdata_528_2598;
extern db& dummy6b9724ba_prevdata_529_2599;
extern db& dummy6b9724ba_prevdata_52a_2600;
extern db& dummy6b9724ba_prevdata_52b_2601;
extern db& dummy6b9724ba_prevdata_52c_2602;
extern db& dummy6b9724ba_prevdata_52d_2603;
extern db& dummy6b9724ba_prevdata_52e_2604;
extern db& dummy6b9724ba_prevdata_52f_2605;
extern db& dummy6b9724ba_prevdata_530_2606;
extern db& dummy6b9724ba_prevdata_531_2607;
extern db& dummy6b9724ba_prevdata_532_2608;
extern db& dummy6b9724ba_prevdata_533_2609;
extern db& dummy6b9724ba_prevdata_534_2610;
extern db& dummy6b9724ba_prevdata_535_2611;
extern db& dummy6b9724ba_prevdata_536_2612;
extern db& titlewidth09;
extern db& dummy6b9724ba_prevdata_538_2614;
extern db& dummy6b9724ba_prevdata_539_2615;
extern db& dummy6b9724ba_prevdata_53a_2616;
extern db& dummy6b9724ba_prevdata_53b_2617;
extern db& dummy6b9724ba_prevdata_53c_2618;
extern db& dummy6b9724ba_prevdata_53d_2619;
extern db& dummy6b9724ba_prevdata_53e_2620;
extern db& dummy6b9724ba_prevdata_53f_2621;
extern db& stitlewidthaz;
extern db& dummy6b9724ba_prevdata_541_2631;
extern db& dummy6b9724ba_prevdata_542_2632;
extern db& dummy6b9724ba_prevdata_543_2633;
extern db& dummy6b9724ba_prevdata_544_2634;
extern db& dummy6b9724ba_prevdata_545_2635;
extern db& dummy6b9724ba_prevdata_546_2636;
extern db& dummy6b9724ba_prevdata_547_2637;
extern db& dummy6b9724ba_prevdata_548_2638;
extern db& dummy6b9724ba_prevdata_549_2639;
extern db& dummy6b9724ba_prevdata_54a_2640;
extern db& dummy6b9724ba_prevdata_54b_2641;
extern db& dummy6b9724ba_prevdata_54c_2642;
extern db& dummy6b9724ba_prevdata_54d_2643;
extern db& dummy6b9724ba_prevdata_54e_2644;
extern db& dummy6b9724ba_prevdata_54f_2645;
extern db& dummy6b9724ba_prevdata_550_2646;
extern db& dummy6b9724ba_prevdata_551_2647;
extern db& dummy6b9724ba_prevdata_552_2648;
extern db& dummy6b9724ba_prevdata_553_2649;
extern db& stitlewidth09;
extern db& dummy6b9724ba_prevdata_555_2651;
extern db& dummy6b9724ba_prevdata_556_2652;
extern db& dummy6b9724ba_prevdata_557_2653;
extern db& dummy6b9724ba_prevdata_558_2654;
extern db& dummy6b9724ba_prevdata_559_2655;
extern db& dummy6b9724ba_prevdata_55a_2656;
extern kern& __m2c_structrow_6b9724ba_2675;
extern kern& __m2c_structrow_6b9724ba_2676;
extern kern& __m2c_structrow_6b9724ba_2677;
extern kern& __m2c_structrow_6b9724ba_2678;
extern kern& __m2c_structrow_6b9724ba_2679;
extern kern& __m2c_structrow_6b9724ba_2680;
extern kern& __m2c_structrow_6b9724ba_2681;
extern kern& __m2c_structrow_6b9724ba_2682;
extern kern& __m2c_structrow_6b9724ba_2683;
extern kern& __m2c_structrow_6b9724ba_2684;
extern kern& __m2c_structrow_6b9724ba_2685;
extern kern& __m2c_structrow_6b9724ba_2686;
extern kern& __m2c_structrow_6b9724ba_2687;
extern kern& __m2c_structrow_6b9724ba_2688;
extern kern& __m2c_structrow_6b9724ba_2689;
extern kern& __m2c_structrow_6b9724ba_2690;
extern kern& __m2c_structrow_6b9724ba_2691;
extern kern& __m2c_structrow_6b9724ba_2692;
extern kern& __m2c_structrow_6b9724ba_2693;
extern kern& __m2c_structrow_6b9724ba_2694;
extern kern& __m2c_structrow_6b9724ba_2695;
extern kern& __m2c_structrow_6b9724ba_2696;
extern db& dummy6b9724ba_prevdata_59d_2697;
extern kern& __m2c_structrow_6b9724ba_2705;
extern kern& __m2c_structrow_6b9724ba_2706;
extern kern& __m2c_structrow_6b9724ba_2707;
extern kern& __m2c_structrow_6b9724ba_2708;
extern kern& __m2c_structrow_6b9724ba_2709;
extern kern& __m2c_structrow_6b9724ba_2710;
extern kern& __m2c_structrow_6b9724ba_2711;
extern kern& __m2c_structrow_6b9724ba_2712;
extern kern& __m2c_structrow_6b9724ba_2713;
extern kern& __m2c_structrow_6b9724ba_2714;
extern kern& __m2c_structrow_6b9724ba_2715;
extern db& dummy6b9724ba_prevdata_5bf_2716;
extern model& modellist;
extern model& modellistend;
extern kern& titlekern;
extern kern& subtitlekern;
extern db& prevcode;

#ifndef mousexmin
extern dw& mousexmin;
#endif
#ifndef previewmode
extern db& previewmode;
#endif
#ifndef elapsedtime
extern dd& elapsedtime;
#endif
#ifndef workscreen
extern db& workscreen;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef key
extern db& key;
#endif
#ifndef mouseymax
extern dw& mouseymax;
#endif
#ifndef frames
extern dw& frames;
#endif
#ifndef mousexmax
extern dw& mousexmax;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef mouseymin
extern dw& mouseymin;
#endif
#ifndef workscrptr
extern dw& workscrptr;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_objectpreview
#define M2C_CODE_EQUATE_objectpreview 1
static const dd kobjectpreview = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_previewexit
#define M2C_CODE_EQUATE_previewexit 1
static const dd kpreviewexit = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_previewloop
#define M2C_CODE_EQUATE_previewloop 1
static const dd kpreviewloop = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_initexit
#define M2C_CODE_EQUATE_initexit 1
static const dd kinitexit = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_skipcycle
#define M2C_CODE_EQUATE_skipcycle 1
static const dd kskipcycle = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_modelloop
#define M2C_CODE_EQUATE_modelloop 1
static const dd kmodelloop = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_skipblades
#define M2C_CODE_EQUATE_skipblades 1
static const dd kskipblades = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_skipstore
#define M2C_CODE_EQUATE_skipstore 1
static const dd kskipstore = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_skiprestore
#define M2C_CODE_EQUATE_skiprestore 1
static const dd kskiprestore = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_exittimer
#define M2C_CODE_EQUATE_exittimer 1
static const dd kexittimer = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_exitmouseinput
#define M2C_CODE_EQUATE_exitmouseinput 1
static const dd kexitmouseinput = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_gadgetscanloop
#define M2C_CODE_EQUATE_gadgetscanloop 1
static const dd kgadgetscanloop = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_hitgadget
#define M2C_CODE_EQUATE_hitgadget 1
static const dd khitgadget = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_exitmouseptr
#define M2C_CODE_EQUATE_exitmouseptr 1
static const dd kexitmouseptr = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_skipa
#define M2C_CODE_EQUATE_skipa 1
static const dd kskipa = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_skipb
#define M2C_CODE_EQUATE_skipb 1
static const dd kskipb = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_skipc
#define M2C_CODE_EQUATE_skipc 1
static const dd kskipc = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_nullevent
#define M2C_CODE_EQUATE_nullevent 1
static const dd knullevent = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_ejectevent
#define M2C_CODE_EQUATE_ejectevent 1
static const dd kejectevent = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_pictureevent
#define M2C_CODE_EQUATE_pictureevent 1
static const dd kpictureevent = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_reverseevent
#define M2C_CODE_EQUATE_reverseevent 1
static const dd kreverseevent = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_contreverse
#define M2C_CODE_EQUATE_contreverse 1
static const dd kcontreverse = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_forwardevent
#define M2C_CODE_EQUATE_forwardevent 1
static const dd kforwardevent = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_contforward
#define M2C_CODE_EQUATE_contforward 1
static const dd kcontforward = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_pauseplayevent
#define M2C_CODE_EQUATE_pauseplayevent 1
static const dd kpauseplayevent = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_pitchupevent
#define M2C_CODE_EQUATE_pitchupevent 1
static const dd kpitchupevent = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_skippitchup
#define M2C_CODE_EQUATE_skippitchup 1
static const dd kskippitchup = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_pitchdnevent
#define M2C_CODE_EQUATE_pitchdnevent 1
static const dd kpitchdnevent = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_skippitchdn
#define M2C_CODE_EQUATE_skippitchdn 1
static const dd kskippitchdn = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_bankrevent
#define M2C_CODE_EQUATE_bankrevent 1
static const dd kbankrevent = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_skipbankr
#define M2C_CODE_EQUATE_skipbankr 1
static const dd kskipbankr = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_banklevent
#define M2C_CODE_EQUATE_banklevent 1
static const dd kbanklevent = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_skipbankl
#define M2C_CODE_EQUATE_skipbankl 1
static const dd kskipbankl = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_skipxchg
#define M2C_CODE_EQUATE_skipxchg 1
static const dd kskipxchg = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_exittitledol
#define M2C_CODE_EQUATE_exittitledol 1
static const dd kexittitledol = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_titleloop
#define M2C_CODE_EQUATE_titleloop 1
static const dd ktitleloop = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_conttitle
#define M2C_CODE_EQUATE_conttitle 1
static const dd kconttitle = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_skiptitlechar
#define M2C_CODE_EQUATE_skiptitlechar 1
static const dd kskiptitlechar = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_titlekernlp
#define M2C_CODE_EQUATE_titlekernlp 1
static const dd ktitlekernlp = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_titlekernok
#define M2C_CODE_EQUATE_titlekernok 1
static const dd ktitlekernok = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_exitsubtitledol
#define M2C_CODE_EQUATE_exitsubtitledol 1
static const dd kexitsubtitledol = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_subtitleloop
#define M2C_CODE_EQUATE_subtitleloop 1
static const dd ksubtitleloop = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_contsubtitle
#define M2C_CODE_EQUATE_contsubtitle 1
static const dd kcontsubtitle = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_skipstitlechar
#define M2C_CODE_EQUATE_skipstitlechar 1
static const dd kskipstitlechar = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_stitlekernlp
#define M2C_CODE_EQUATE_stitlekernlp 1
static const dd kstitlekernlp = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_stitlekernok
#define M2C_CODE_EQUATE_stitlekernok 1
static const dd kstitlekernok = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_spriteyloop
#define M2C_CODE_EQUATE_spriteyloop 1
static const dd kspriteyloop = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_spritexloop
#define M2C_CODE_EQUATE_spritexloop 1
static const dd kspritexloop = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_previewintr100
#define M2C_CODE_EQUATE_previewintr100 1
static const dd kpreviewintr100 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10aa;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_modelptr
#define M2C_CODE_EQUATE_modelptr 1
static const dd kmodelptr = (m2c::near_offset_external(::modelptr));
#endif
#ifndef M2C_CODE_EQUATE_category
#define M2C_CODE_EQUATE_category 1
static const dd kcategory = (m2c::near_offset_external(::category));
#endif
#ifndef M2C_CODE_EQUATE_show3dtimer
#define M2C_CODE_EQUATE_show3dtimer 1
static const dd kshow3dtimer = (m2c::near_offset_external(::show3dtimer));
#endif
#ifndef M2C_CODE_EQUATE_exit3dflag
#define M2C_CODE_EQUATE_exit3dflag 1
static const dd kexit3dflag = (m2c::near_offset_external(::exit3dflag));
#endif
#ifndef M2C_CODE_EQUATE_fadeinflag
#define M2C_CODE_EQUATE_fadeinflag 1
static const dd kfadeinflag = (m2c::near_offset_external(::fadeinflag));
#endif
#ifndef M2C_CODE_EQUATE_paused
#define M2C_CODE_EQUATE_paused 1
static const dd kpaused = (m2c::near_offset_external(::paused));
#endif
#ifndef M2C_CODE_EQUATE_pauseplayxchg
#define M2C_CODE_EQUATE_pauseplayxchg 1
static const dd kpauseplayxchg = (m2c::near_offset_external(::pauseplayxchg));
#endif
#ifndef M2C_CODE_EQUATE_timer50
#define M2C_CODE_EQUATE_timer50 1
static const dd ktimer50 = (m2c::near_offset_external(::timer50));
#endif
#ifndef M2C_CODE_EQUATE_vp
#define M2C_CODE_EQUATE_vp 1
static const dd kvp = (m2c::near_offset_external(::vp));
#endif
#ifndef M2C_CODE_EQUATE_p_mobile
#define M2C_CODE_EQUATE_p_mobile 1
static const dd kp_mobile = (m2c::near_offset_external(::p_mobile));
#endif
#ifndef M2C_CODE_EQUATE_p_view
#define M2C_CODE_EQUATE_p_view 1
static const dd kp_view = (m2c::near_offset_external(::p_view));
#endif
#ifndef M2C_CODE_EQUATE_hfine
#define M2C_CODE_EQUATE_hfine 1
static const dd khfine = (m2c::near_offset_external(::hfine));
#endif
#ifndef M2C_CODE_EQUATE_pfine
#define M2C_CODE_EQUATE_pfine 1
static const dd kpfine = (m2c::near_offset_external(::pfine));
#endif
#ifndef M2C_CODE_EQUATE_rfine
#define M2C_CODE_EQUATE_rfine 1
static const dd krfine = (m2c::near_offset_external(::rfine));
#endif
#ifndef M2C_CODE_EQUATE_prevpfine
#define M2C_CODE_EQUATE_prevpfine 1
static const dd kprevpfine = (m2c::near_offset_external(::prevpfine));
#endif
#ifndef M2C_CODE_EQUATE_prevrfine
#define M2C_CODE_EQUATE_prevrfine 1
static const dd kprevrfine = (m2c::near_offset_external(::prevrfine));
#endif
#ifndef M2C_CODE_EQUATE_mousexcrt
#define M2C_CODE_EQUATE_mousexcrt 1
static const dd kmousexcrt = (m2c::near_offset_external(::mousexcrt));
#endif
#ifndef M2C_CODE_EQUATE_mouseycrt
#define M2C_CODE_EQUATE_mouseycrt 1
static const dd kmouseycrt = (m2c::near_offset_external(::mouseycrt));
#endif
#ifndef M2C_CODE_EQUATE_graphicsfile
#define M2C_CODE_EQUATE_graphicsfile 1
static const dd kgraphicsfile = (m2c::near_offset_external(::graphicsfile));
#endif
#ifndef M2C_CODE_EQUATE_picfilename
#define M2C_CODE_EQUATE_picfilename 1
static const dd kpicfilename = (m2c::near_offset_external(::picfilename));
#endif
#ifndef M2C_CODE_EQUATE_gadgetptr
#define M2C_CODE_EQUATE_gadgetptr 1
static const dd kgadgetptr = (m2c::near_offset_external(::gadgetptr));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2438
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2438 1
static const dd k__m2c_structrow_6b9724ba_2438 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2438));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2439
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2439 1
static const dd k__m2c_structrow_6b9724ba_2439 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2439));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2440
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2440 1
static const dd k__m2c_structrow_6b9724ba_2440 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2440));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2441
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2441 1
static const dd k__m2c_structrow_6b9724ba_2441 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2441));
#endif
#ifndef M2C_CODE_EQUATE_pauseplaygadget
#define M2C_CODE_EQUATE_pauseplaygadget 1
static const dd kpauseplaygadget = (m2c::near_offset_external(::pauseplaygadget));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2443
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2443 1
static const dd k__m2c_structrow_6b9724ba_2443 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2443));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2444
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2444 1
static const dd k__m2c_structrow_6b9724ba_2444 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2444));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2445
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2445 1
static const dd k__m2c_structrow_6b9724ba_2445 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2445));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2446
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2446 1
static const dd k__m2c_structrow_6b9724ba_2446 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2446));
#endif
#ifndef M2C_CODE_EQUATE_autotimer
#define M2C_CODE_EQUATE_autotimer 1
static const dd kautotimer = (m2c::near_offset_external(::autotimer));
#endif
#ifndef M2C_CODE_EQUATE_gr4model
#define M2C_CODE_EQUATE_gr4model 1
static const dd kgr4model = (m2c::near_offset_external(::gr4model));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2495
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2495 1
static const dd k__m2c_structrow_6b9724ba_2495 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2495));
#endif
#ifndef M2C_CODE_EQUATE_f3model
#define M2C_CODE_EQUATE_f3model 1
static const dd kf3model = (m2c::near_offset_external(::f3model));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2497
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2497 1
static const dd k__m2c_structrow_6b9724ba_2497 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2497));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2498
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2498 1
static const dd k__m2c_structrow_6b9724ba_2498 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2498));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2499
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2499 1
static const dd k__m2c_structrow_6b9724ba_2499 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2499));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2500
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2500 1
static const dd k__m2c_structrow_6b9724ba_2500 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2500));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2501
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2501 1
static const dd k__m2c_structrow_6b9724ba_2501 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2501));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2502
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2502 1
static const dd k__m2c_structrow_6b9724ba_2502 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2502));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2503
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2503 1
static const dd k__m2c_structrow_6b9724ba_2503 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2503));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2504
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2504 1
static const dd k__m2c_structrow_6b9724ba_2504 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2504));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2505
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2505 1
static const dd k__m2c_structrow_6b9724ba_2505 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2505));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2506
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2506 1
static const dd k__m2c_structrow_6b9724ba_2506 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2506));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2507
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2507 1
static const dd k__m2c_structrow_6b9724ba_2507 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2507));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2508
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2508 1
static const dd k__m2c_structrow_6b9724ba_2508 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2508));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2509
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2509 1
static const dd k__m2c_structrow_6b9724ba_2509 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2509));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2510
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2510 1
static const dd k__m2c_structrow_6b9724ba_2510 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2510));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2511
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2511 1
static const dd k__m2c_structrow_6b9724ba_2511 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2511));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2512
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2512 1
static const dd k__m2c_structrow_6b9724ba_2512 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2512));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2513
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2513 1
static const dd k__m2c_structrow_6b9724ba_2513 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2513));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2514
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2514 1
static const dd k__m2c_structrow_6b9724ba_2514 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2514));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2515
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2515 1
static const dd k__m2c_structrow_6b9724ba_2515 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2515));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2516
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2516 1
static const dd k__m2c_structrow_6b9724ba_2516 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2516));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2517
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2517 1
static const dd k__m2c_structrow_6b9724ba_2517 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2517));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2518
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2518 1
static const dd k__m2c_structrow_6b9724ba_2518 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2518));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2519
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2519 1
static const dd k__m2c_structrow_6b9724ba_2519 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2519));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2520
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2520 1
static const dd k__m2c_structrow_6b9724ba_2520 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2520));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2521
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2521 1
static const dd k__m2c_structrow_6b9724ba_2521 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2521));
#endif
#ifndef M2C_CODE_EQUATE_tornadodol
#define M2C_CODE_EQUATE_tornadodol 1
static const dd ktornadodol = (m2c::near_offset_external(::tornadodol));
#endif
#ifndef M2C_CODE_EQUATE_floggerdol
#define M2C_CODE_EQUATE_floggerdol 1
static const dd kfloggerdol = (m2c::near_offset_external(::floggerdol));
#endif
#ifndef M2C_CODE_EQUATE_foxhounddol
#define M2C_CODE_EQUATE_foxhounddol 1
static const dd kfoxhounddol = (m2c::near_offset_external(::foxhounddol));
#endif
#ifndef M2C_CODE_EQUATE_eagledol
#define M2C_CODE_EQUATE_eagledol 1
static const dd keagledol = (m2c::near_offset_external(::eagledol));
#endif
#ifndef M2C_CODE_EQUATE_flankerdol
#define M2C_CODE_EQUATE_flankerdol 1
static const dd kflankerdol = (m2c::near_offset_external(::flankerdol));
#endif
#ifndef M2C_CODE_EQUATE_falcondol
#define M2C_CODE_EQUATE_falcondol 1
static const dd kfalcondol = (m2c::near_offset_external(::falcondol));
#endif
#ifndef M2C_CODE_EQUATE_fulcrumdol
#define M2C_CODE_EQUATE_fulcrumdol 1
static const dd kfulcrumdol = (m2c::near_offset_external(::fulcrumdol));
#endif
#ifndef M2C_CODE_EQUATE_thunderboltdol
#define M2C_CODE_EQUATE_thunderboltdol 1
static const dd kthunderboltdol = (m2c::near_offset_external(::thunderboltdol));
#endif
#ifndef M2C_CODE_EQUATE_frogfootdol
#define M2C_CODE_EQUATE_frogfootdol 1
static const dd kfrogfootdol = (m2c::near_offset_external(::frogfootdol));
#endif
#ifndef M2C_CODE_EQUATE_herculesdol
#define M2C_CODE_EQUATE_herculesdol 1
static const dd kherculesdol = (m2c::near_offset_external(::herculesdol));
#endif
#ifndef M2C_CODE_EQUATE_candiddol
#define M2C_CODE_EQUATE_candiddol 1
static const dd kcandiddol = (m2c::near_offset_external(::candiddol));
#endif
#ifndef M2C_CODE_EQUATE_sentrydol
#define M2C_CODE_EQUATE_sentrydol 1
static const dd ksentrydol = (m2c::near_offset_external(::sentrydol));
#endif
#ifndef M2C_CODE_EQUATE_mainstaydol
#define M2C_CODE_EQUATE_mainstaydol 1
static const dd kmainstaydol = (m2c::near_offset_external(::mainstaydol));
#endif
#ifndef M2C_CODE_EQUATE_apachedol
#define M2C_CODE_EQUATE_apachedol 1
static const dd kapachedol = (m2c::near_offset_external(::apachedol));
#endif
#ifndef M2C_CODE_EQUATE_hinddol
#define M2C_CODE_EQUATE_hinddol 1
static const dd khinddol = (m2c::near_offset_external(::hinddol));
#endif
#ifndef M2C_CODE_EQUATE_chinookdol
#define M2C_CODE_EQUATE_chinookdol 1
static const dd kchinookdol = (m2c::near_offset_external(::chinookdol));
#endif
#ifndef M2C_CODE_EQUATE_halodol
#define M2C_CODE_EQUATE_halodol 1
static const dd khalodol = (m2c::near_offset_external(::halodol));
#endif
#ifndef M2C_CODE_EQUATE_challengerdol
#define M2C_CODE_EQUATE_challengerdol 1
static const dd kchallengerdol = (m2c::near_offset_external(::challengerdol));
#endif
#ifndef M2C_CODE_EQUATE_t80dol
#define M2C_CODE_EQUATE_t80dol 1
static const dd kt80dol = (m2c::near_offset_external(::t80dol));
#endif
#ifndef M2C_CODE_EQUATE_warriordol
#define M2C_CODE_EQUATE_warriordol 1
static const dd kwarriordol = (m2c::near_offset_external(::warriordol));
#endif
#ifndef M2C_CODE_EQUATE_bmp2dol
#define M2C_CODE_EQUATE_bmp2dol 1
static const dd kbmp2dol = (m2c::near_offset_external(::bmp2dol));
#endif
#ifndef M2C_CODE_EQUATE_mlrsdol
#define M2C_CODE_EQUATE_mlrsdol 1
static const dd kmlrsdol = (m2c::near_offset_external(::mlrsdol));
#endif
#ifndef M2C_CODE_EQUATE_maz543dol
#define M2C_CODE_EQUATE_maz543dol 1
static const dd kmaz543dol = (m2c::near_offset_external(::maz543dol));
#endif
#ifndef M2C_CODE_EQUATE_patriotdol
#define M2C_CODE_EQUATE_patriotdol 1
static const dd kpatriotdol = (m2c::near_offset_external(::patriotdol));
#endif
#ifndef M2C_CODE_EQUATE_zrkrombdol
#define M2C_CODE_EQUATE_zrkrombdol 1
static const dd kzrkrombdol = (m2c::near_offset_external(::zrkrombdol));
#endif
#ifndef M2C_CODE_EQUATE_zsu23dol
#define M2C_CODE_EQUATE_zsu23dol 1
static const dd kzsu23dol = (m2c::near_offset_external(::zsu23dol));
#endif
#ifndef M2C_CODE_EQUATE_giraffedol
#define M2C_CODE_EQUATE_giraffedol 1
static const dd kgiraffedol = (m2c::near_offset_external(::giraffedol));
#endif
#ifndef M2C_CODE_EQUATE_gr4dol
#define M2C_CODE_EQUATE_gr4dol 1
static const dd kgr4dol = (m2c::near_offset_external(::gr4dol));
#endif
#ifndef M2C_CODE_EQUATE_mig27dol
#define M2C_CODE_EQUATE_mig27dol 1
static const dd kmig27dol = (m2c::near_offset_external(::mig27dol));
#endif
#ifndef M2C_CODE_EQUATE_f3dol
#define M2C_CODE_EQUATE_f3dol 1
static const dd kf3dol = (m2c::near_offset_external(::f3dol));
#endif
#ifndef M2C_CODE_EQUATE_mig31dol
#define M2C_CODE_EQUATE_mig31dol 1
static const dd kmig31dol = (m2c::near_offset_external(::mig31dol));
#endif
#ifndef M2C_CODE_EQUATE_f15dol
#define M2C_CODE_EQUATE_f15dol 1
static const dd kf15dol = (m2c::near_offset_external(::f15dol));
#endif
#ifndef M2C_CODE_EQUATE_su27dol
#define M2C_CODE_EQUATE_su27dol 1
static const dd ksu27dol = (m2c::near_offset_external(::su27dol));
#endif
#ifndef M2C_CODE_EQUATE_f16dol
#define M2C_CODE_EQUATE_f16dol 1
static const dd kf16dol = (m2c::near_offset_external(::f16dol));
#endif
#ifndef M2C_CODE_EQUATE_mig29dol
#define M2C_CODE_EQUATE_mig29dol 1
static const dd kmig29dol = (m2c::near_offset_external(::mig29dol));
#endif
#ifndef M2C_CODE_EQUATE_a10dol
#define M2C_CODE_EQUATE_a10dol 1
static const dd ka10dol = (m2c::near_offset_external(::a10dol));
#endif
#ifndef M2C_CODE_EQUATE_su25dol
#define M2C_CODE_EQUATE_su25dol 1
static const dd ksu25dol = (m2c::near_offset_external(::su25dol));
#endif
#ifndef M2C_CODE_EQUATE_c130dol
#define M2C_CODE_EQUATE_c130dol 1
static const dd kc130dol = (m2c::near_offset_external(::c130dol));
#endif
#ifndef M2C_CODE_EQUATE_il76dol
#define M2C_CODE_EQUATE_il76dol 1
static const dd kil76dol = (m2c::near_offset_external(::il76dol));
#endif
#ifndef M2C_CODE_EQUATE_e3ddol
#define M2C_CODE_EQUATE_e3ddol 1
static const dd ke3ddol = (m2c::near_offset_external(::e3ddol));
#endif
#ifndef M2C_CODE_EQUATE_a50dol
#define M2C_CODE_EQUATE_a50dol 1
static const dd ka50dol = (m2c::near_offset_external(::a50dol));
#endif
#ifndef M2C_CODE_EQUATE_ah64dol
#define M2C_CODE_EQUATE_ah64dol 1
static const dd kah64dol = (m2c::near_offset_external(::ah64dol));
#endif
#ifndef M2C_CODE_EQUATE_mi24dol
#define M2C_CODE_EQUATE_mi24dol 1
static const dd kmi24dol = (m2c::near_offset_external(::mi24dol));
#endif
#ifndef M2C_CODE_EQUATE_ch47dol
#define M2C_CODE_EQUATE_ch47dol 1
static const dd kch47dol = (m2c::near_offset_external(::ch47dol));
#endif
#ifndef M2C_CODE_EQUATE_mi26dol
#define M2C_CODE_EQUATE_mi26dol 1
static const dd kmi26dol = (m2c::near_offset_external(::mi26dol));
#endif
#ifndef M2C_CODE_EQUATE_titlewidthaz
#define M2C_CODE_EQUATE_titlewidthaz 1
static const dd ktitlewidthaz = (m2c::near_offset_external(::titlewidthaz));
#endif
#ifndef M2C_CODE_EQUATE_titlewidth09
#define M2C_CODE_EQUATE_titlewidth09 1
static const dd ktitlewidth09 = (m2c::near_offset_external(::titlewidth09));
#endif
#ifndef M2C_CODE_EQUATE_stitlewidthaz
#define M2C_CODE_EQUATE_stitlewidthaz 1
static const dd kstitlewidthaz = (m2c::near_offset_external(::stitlewidthaz));
#endif
#ifndef M2C_CODE_EQUATE_stitlewidth09
#define M2C_CODE_EQUATE_stitlewidth09 1
static const dd kstitlewidth09 = (m2c::near_offset_external(::stitlewidth09));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2675
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2675 1
static const dd k__m2c_structrow_6b9724ba_2675 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2675));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2676
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2676 1
static const dd k__m2c_structrow_6b9724ba_2676 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2676));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2677
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2677 1
static const dd k__m2c_structrow_6b9724ba_2677 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2677));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2678
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2678 1
static const dd k__m2c_structrow_6b9724ba_2678 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2678));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2679
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2679 1
static const dd k__m2c_structrow_6b9724ba_2679 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2679));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2680
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2680 1
static const dd k__m2c_structrow_6b9724ba_2680 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2680));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2681
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2681 1
static const dd k__m2c_structrow_6b9724ba_2681 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2681));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2682
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2682 1
static const dd k__m2c_structrow_6b9724ba_2682 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2682));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2683
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2683 1
static const dd k__m2c_structrow_6b9724ba_2683 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2683));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2684
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2684 1
static const dd k__m2c_structrow_6b9724ba_2684 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2684));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2685
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2685 1
static const dd k__m2c_structrow_6b9724ba_2685 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2685));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2686
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2686 1
static const dd k__m2c_structrow_6b9724ba_2686 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2686));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2687
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2687 1
static const dd k__m2c_structrow_6b9724ba_2687 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2687));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2688
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2688 1
static const dd k__m2c_structrow_6b9724ba_2688 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2688));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2689
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2689 1
static const dd k__m2c_structrow_6b9724ba_2689 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2689));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2690
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2690 1
static const dd k__m2c_structrow_6b9724ba_2690 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2690));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2691
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2691 1
static const dd k__m2c_structrow_6b9724ba_2691 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2691));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2692
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2692 1
static const dd k__m2c_structrow_6b9724ba_2692 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2692));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2693
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2693 1
static const dd k__m2c_structrow_6b9724ba_2693 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2693));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2694
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2694 1
static const dd k__m2c_structrow_6b9724ba_2694 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2694));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2695
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2695 1
static const dd k__m2c_structrow_6b9724ba_2695 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2695));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2696
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2696 1
static const dd k__m2c_structrow_6b9724ba_2696 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2696));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2705
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2705 1
static const dd k__m2c_structrow_6b9724ba_2705 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2705));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2706
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2706 1
static const dd k__m2c_structrow_6b9724ba_2706 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2706));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2707
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2707 1
static const dd k__m2c_structrow_6b9724ba_2707 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2707));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2708
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2708 1
static const dd k__m2c_structrow_6b9724ba_2708 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2708));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2709
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2709 1
static const dd k__m2c_structrow_6b9724ba_2709 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2709));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2710
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2710 1
static const dd k__m2c_structrow_6b9724ba_2710 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2710));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2711
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2711 1
static const dd k__m2c_structrow_6b9724ba_2711 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2711));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2712
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2712 1
static const dd k__m2c_structrow_6b9724ba_2712 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2712));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2713
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2713 1
static const dd k__m2c_structrow_6b9724ba_2713 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2713));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2714
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2714 1
static const dd k__m2c_structrow_6b9724ba_2714 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2714));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2715
#define M2C_CODE_EQUATE___m2c_structrow_6b9724ba_2715 1
static const dd k__m2c_structrow_6b9724ba_2715 = (m2c::near_offset_external(::__m2c_structrow_6b9724ba_2715));
#endif
}
#ifndef modelptr
#define modelptr m2c::kmodelptr
#endif
#ifndef category
#define category m2c::kcategory
#endif
#ifndef show3dtimer
#define show3dtimer m2c::kshow3dtimer
#endif
#ifndef exit3dflag
#define exit3dflag m2c::kexit3dflag
#endif
#ifndef fadeinflag
#define fadeinflag m2c::kfadeinflag
#endif
#ifndef paused
#define paused m2c::kpaused
#endif
#ifndef pauseplayxchg
#define pauseplayxchg m2c::kpauseplayxchg
#endif
#ifndef timer50
#define timer50 m2c::ktimer50
#endif
#ifndef vp
#define vp m2c::kvp
#endif
#ifndef p_mobile
#define p_mobile m2c::kp_mobile
#endif
#ifndef p_view
#define p_view m2c::kp_view
#endif
#ifndef hfine
#define hfine m2c::khfine
#endif
#ifndef pfine
#define pfine m2c::kpfine
#endif
#ifndef rfine
#define rfine m2c::krfine
#endif
#ifndef prevpfine
#define prevpfine m2c::kprevpfine
#endif
#ifndef prevrfine
#define prevrfine m2c::kprevrfine
#endif
#ifndef mousexcrt
#define mousexcrt m2c::kmousexcrt
#endif
#ifndef mouseycrt
#define mouseycrt m2c::kmouseycrt
#endif
#ifndef graphicsfile
#define graphicsfile m2c::kgraphicsfile
#endif
#ifndef picfilename
#define picfilename m2c::kpicfilename
#endif
#ifndef gadgetptr
#define gadgetptr m2c::kgadgetptr
#endif
#ifndef __m2c_structrow_6b9724ba_2438
#define __m2c_structrow_6b9724ba_2438 m2c::k__m2c_structrow_6b9724ba_2438
#endif
#ifndef __m2c_structrow_6b9724ba_2439
#define __m2c_structrow_6b9724ba_2439 m2c::k__m2c_structrow_6b9724ba_2439
#endif
#ifndef __m2c_structrow_6b9724ba_2440
#define __m2c_structrow_6b9724ba_2440 m2c::k__m2c_structrow_6b9724ba_2440
#endif
#ifndef __m2c_structrow_6b9724ba_2441
#define __m2c_structrow_6b9724ba_2441 m2c::k__m2c_structrow_6b9724ba_2441
#endif
#ifndef pauseplaygadget
#define pauseplaygadget m2c::kpauseplaygadget
#endif
#ifndef __m2c_structrow_6b9724ba_2443
#define __m2c_structrow_6b9724ba_2443 m2c::k__m2c_structrow_6b9724ba_2443
#endif
#ifndef __m2c_structrow_6b9724ba_2444
#define __m2c_structrow_6b9724ba_2444 m2c::k__m2c_structrow_6b9724ba_2444
#endif
#ifndef __m2c_structrow_6b9724ba_2445
#define __m2c_structrow_6b9724ba_2445 m2c::k__m2c_structrow_6b9724ba_2445
#endif
#ifndef __m2c_structrow_6b9724ba_2446
#define __m2c_structrow_6b9724ba_2446 m2c::k__m2c_structrow_6b9724ba_2446
#endif
#ifndef autotimer
#define autotimer m2c::kautotimer
#endif
#ifndef gr4model
#define gr4model m2c::kgr4model
#endif
#ifndef __m2c_structrow_6b9724ba_2495
#define __m2c_structrow_6b9724ba_2495 m2c::k__m2c_structrow_6b9724ba_2495
#endif
#ifndef f3model
#define f3model m2c::kf3model
#endif
#ifndef __m2c_structrow_6b9724ba_2497
#define __m2c_structrow_6b9724ba_2497 m2c::k__m2c_structrow_6b9724ba_2497
#endif
#ifndef __m2c_structrow_6b9724ba_2498
#define __m2c_structrow_6b9724ba_2498 m2c::k__m2c_structrow_6b9724ba_2498
#endif
#ifndef __m2c_structrow_6b9724ba_2499
#define __m2c_structrow_6b9724ba_2499 m2c::k__m2c_structrow_6b9724ba_2499
#endif
#ifndef __m2c_structrow_6b9724ba_2500
#define __m2c_structrow_6b9724ba_2500 m2c::k__m2c_structrow_6b9724ba_2500
#endif
#ifndef __m2c_structrow_6b9724ba_2501
#define __m2c_structrow_6b9724ba_2501 m2c::k__m2c_structrow_6b9724ba_2501
#endif
#ifndef __m2c_structrow_6b9724ba_2502
#define __m2c_structrow_6b9724ba_2502 m2c::k__m2c_structrow_6b9724ba_2502
#endif
#ifndef __m2c_structrow_6b9724ba_2503
#define __m2c_structrow_6b9724ba_2503 m2c::k__m2c_structrow_6b9724ba_2503
#endif
#ifndef __m2c_structrow_6b9724ba_2504
#define __m2c_structrow_6b9724ba_2504 m2c::k__m2c_structrow_6b9724ba_2504
#endif
#ifndef __m2c_structrow_6b9724ba_2505
#define __m2c_structrow_6b9724ba_2505 m2c::k__m2c_structrow_6b9724ba_2505
#endif
#ifndef __m2c_structrow_6b9724ba_2506
#define __m2c_structrow_6b9724ba_2506 m2c::k__m2c_structrow_6b9724ba_2506
#endif
#ifndef __m2c_structrow_6b9724ba_2507
#define __m2c_structrow_6b9724ba_2507 m2c::k__m2c_structrow_6b9724ba_2507
#endif
#ifndef __m2c_structrow_6b9724ba_2508
#define __m2c_structrow_6b9724ba_2508 m2c::k__m2c_structrow_6b9724ba_2508
#endif
#ifndef __m2c_structrow_6b9724ba_2509
#define __m2c_structrow_6b9724ba_2509 m2c::k__m2c_structrow_6b9724ba_2509
#endif
#ifndef __m2c_structrow_6b9724ba_2510
#define __m2c_structrow_6b9724ba_2510 m2c::k__m2c_structrow_6b9724ba_2510
#endif
#ifndef __m2c_structrow_6b9724ba_2511
#define __m2c_structrow_6b9724ba_2511 m2c::k__m2c_structrow_6b9724ba_2511
#endif
#ifndef __m2c_structrow_6b9724ba_2512
#define __m2c_structrow_6b9724ba_2512 m2c::k__m2c_structrow_6b9724ba_2512
#endif
#ifndef __m2c_structrow_6b9724ba_2513
#define __m2c_structrow_6b9724ba_2513 m2c::k__m2c_structrow_6b9724ba_2513
#endif
#ifndef __m2c_structrow_6b9724ba_2514
#define __m2c_structrow_6b9724ba_2514 m2c::k__m2c_structrow_6b9724ba_2514
#endif
#ifndef __m2c_structrow_6b9724ba_2515
#define __m2c_structrow_6b9724ba_2515 m2c::k__m2c_structrow_6b9724ba_2515
#endif
#ifndef __m2c_structrow_6b9724ba_2516
#define __m2c_structrow_6b9724ba_2516 m2c::k__m2c_structrow_6b9724ba_2516
#endif
#ifndef __m2c_structrow_6b9724ba_2517
#define __m2c_structrow_6b9724ba_2517 m2c::k__m2c_structrow_6b9724ba_2517
#endif
#ifndef __m2c_structrow_6b9724ba_2518
#define __m2c_structrow_6b9724ba_2518 m2c::k__m2c_structrow_6b9724ba_2518
#endif
#ifndef __m2c_structrow_6b9724ba_2519
#define __m2c_structrow_6b9724ba_2519 m2c::k__m2c_structrow_6b9724ba_2519
#endif
#ifndef __m2c_structrow_6b9724ba_2520
#define __m2c_structrow_6b9724ba_2520 m2c::k__m2c_structrow_6b9724ba_2520
#endif
#ifndef __m2c_structrow_6b9724ba_2521
#define __m2c_structrow_6b9724ba_2521 m2c::k__m2c_structrow_6b9724ba_2521
#endif
#ifndef tornadodol
#define tornadodol m2c::ktornadodol
#endif
#ifndef floggerdol
#define floggerdol m2c::kfloggerdol
#endif
#ifndef foxhounddol
#define foxhounddol m2c::kfoxhounddol
#endif
#ifndef eagledol
#define eagledol m2c::keagledol
#endif
#ifndef flankerdol
#define flankerdol m2c::kflankerdol
#endif
#ifndef falcondol
#define falcondol m2c::kfalcondol
#endif
#ifndef fulcrumdol
#define fulcrumdol m2c::kfulcrumdol
#endif
#ifndef thunderboltdol
#define thunderboltdol m2c::kthunderboltdol
#endif
#ifndef frogfootdol
#define frogfootdol m2c::kfrogfootdol
#endif
#ifndef herculesdol
#define herculesdol m2c::kherculesdol
#endif
#ifndef candiddol
#define candiddol m2c::kcandiddol
#endif
#ifndef sentrydol
#define sentrydol m2c::ksentrydol
#endif
#ifndef mainstaydol
#define mainstaydol m2c::kmainstaydol
#endif
#ifndef apachedol
#define apachedol m2c::kapachedol
#endif
#ifndef hinddol
#define hinddol m2c::khinddol
#endif
#ifndef chinookdol
#define chinookdol m2c::kchinookdol
#endif
#ifndef halodol
#define halodol m2c::khalodol
#endif
#ifndef challengerdol
#define challengerdol m2c::kchallengerdol
#endif
#ifndef t80dol
#define t80dol m2c::kt80dol
#endif
#ifndef warriordol
#define warriordol m2c::kwarriordol
#endif
#ifndef bmp2dol
#define bmp2dol m2c::kbmp2dol
#endif
#ifndef mlrsdol
#define mlrsdol m2c::kmlrsdol
#endif
#ifndef maz543dol
#define maz543dol m2c::kmaz543dol
#endif
#ifndef patriotdol
#define patriotdol m2c::kpatriotdol
#endif
#ifndef zrkrombdol
#define zrkrombdol m2c::kzrkrombdol
#endif
#ifndef zsu23dol
#define zsu23dol m2c::kzsu23dol
#endif
#ifndef giraffedol
#define giraffedol m2c::kgiraffedol
#endif
#ifndef gr4dol
#define gr4dol m2c::kgr4dol
#endif
#ifndef mig27dol
#define mig27dol m2c::kmig27dol
#endif
#ifndef f3dol
#define f3dol m2c::kf3dol
#endif
#ifndef mig31dol
#define mig31dol m2c::kmig31dol
#endif
#ifndef f15dol
#define f15dol m2c::kf15dol
#endif
#ifndef su27dol
#define su27dol m2c::ksu27dol
#endif
#ifndef f16dol
#define f16dol m2c::kf16dol
#endif
#ifndef mig29dol
#define mig29dol m2c::kmig29dol
#endif
#ifndef a10dol
#define a10dol m2c::ka10dol
#endif
#ifndef su25dol
#define su25dol m2c::ksu25dol
#endif
#ifndef c130dol
#define c130dol m2c::kc130dol
#endif
#ifndef il76dol
#define il76dol m2c::kil76dol
#endif
#ifndef e3ddol
#define e3ddol m2c::ke3ddol
#endif
#ifndef a50dol
#define a50dol m2c::ka50dol
#endif
#ifndef ah64dol
#define ah64dol m2c::kah64dol
#endif
#ifndef mi24dol
#define mi24dol m2c::kmi24dol
#endif
#ifndef ch47dol
#define ch47dol m2c::kch47dol
#endif
#ifndef mi26dol
#define mi26dol m2c::kmi26dol
#endif
#ifndef titlewidthaz
#define titlewidthaz m2c::ktitlewidthaz
#endif
#ifndef titlewidth09
#define titlewidth09 m2c::ktitlewidth09
#endif
#ifndef stitlewidthaz
#define stitlewidthaz m2c::kstitlewidthaz
#endif
#ifndef stitlewidth09
#define stitlewidth09 m2c::kstitlewidth09
#endif
#ifndef __m2c_structrow_6b9724ba_2675
#define __m2c_structrow_6b9724ba_2675 m2c::k__m2c_structrow_6b9724ba_2675
#endif
#ifndef __m2c_structrow_6b9724ba_2676
#define __m2c_structrow_6b9724ba_2676 m2c::k__m2c_structrow_6b9724ba_2676
#endif
#ifndef __m2c_structrow_6b9724ba_2677
#define __m2c_structrow_6b9724ba_2677 m2c::k__m2c_structrow_6b9724ba_2677
#endif
#ifndef __m2c_structrow_6b9724ba_2678
#define __m2c_structrow_6b9724ba_2678 m2c::k__m2c_structrow_6b9724ba_2678
#endif
#ifndef __m2c_structrow_6b9724ba_2679
#define __m2c_structrow_6b9724ba_2679 m2c::k__m2c_structrow_6b9724ba_2679
#endif
#ifndef __m2c_structrow_6b9724ba_2680
#define __m2c_structrow_6b9724ba_2680 m2c::k__m2c_structrow_6b9724ba_2680
#endif
#ifndef __m2c_structrow_6b9724ba_2681
#define __m2c_structrow_6b9724ba_2681 m2c::k__m2c_structrow_6b9724ba_2681
#endif
#ifndef __m2c_structrow_6b9724ba_2682
#define __m2c_structrow_6b9724ba_2682 m2c::k__m2c_structrow_6b9724ba_2682
#endif
#ifndef __m2c_structrow_6b9724ba_2683
#define __m2c_structrow_6b9724ba_2683 m2c::k__m2c_structrow_6b9724ba_2683
#endif
#ifndef __m2c_structrow_6b9724ba_2684
#define __m2c_structrow_6b9724ba_2684 m2c::k__m2c_structrow_6b9724ba_2684
#endif
#ifndef __m2c_structrow_6b9724ba_2685
#define __m2c_structrow_6b9724ba_2685 m2c::k__m2c_structrow_6b9724ba_2685
#endif
#ifndef __m2c_structrow_6b9724ba_2686
#define __m2c_structrow_6b9724ba_2686 m2c::k__m2c_structrow_6b9724ba_2686
#endif
#ifndef __m2c_structrow_6b9724ba_2687
#define __m2c_structrow_6b9724ba_2687 m2c::k__m2c_structrow_6b9724ba_2687
#endif
#ifndef __m2c_structrow_6b9724ba_2688
#define __m2c_structrow_6b9724ba_2688 m2c::k__m2c_structrow_6b9724ba_2688
#endif
#ifndef __m2c_structrow_6b9724ba_2689
#define __m2c_structrow_6b9724ba_2689 m2c::k__m2c_structrow_6b9724ba_2689
#endif
#ifndef __m2c_structrow_6b9724ba_2690
#define __m2c_structrow_6b9724ba_2690 m2c::k__m2c_structrow_6b9724ba_2690
#endif
#ifndef __m2c_structrow_6b9724ba_2691
#define __m2c_structrow_6b9724ba_2691 m2c::k__m2c_structrow_6b9724ba_2691
#endif
#ifndef __m2c_structrow_6b9724ba_2692
#define __m2c_structrow_6b9724ba_2692 m2c::k__m2c_structrow_6b9724ba_2692
#endif
#ifndef __m2c_structrow_6b9724ba_2693
#define __m2c_structrow_6b9724ba_2693 m2c::k__m2c_structrow_6b9724ba_2693
#endif
#ifndef __m2c_structrow_6b9724ba_2694
#define __m2c_structrow_6b9724ba_2694 m2c::k__m2c_structrow_6b9724ba_2694
#endif
#ifndef __m2c_structrow_6b9724ba_2695
#define __m2c_structrow_6b9724ba_2695 m2c::k__m2c_structrow_6b9724ba_2695
#endif
#ifndef __m2c_structrow_6b9724ba_2696
#define __m2c_structrow_6b9724ba_2696 m2c::k__m2c_structrow_6b9724ba_2696
#endif
#ifndef __m2c_structrow_6b9724ba_2705
#define __m2c_structrow_6b9724ba_2705 m2c::k__m2c_structrow_6b9724ba_2705
#endif
#ifndef __m2c_structrow_6b9724ba_2706
#define __m2c_structrow_6b9724ba_2706 m2c::k__m2c_structrow_6b9724ba_2706
#endif
#ifndef __m2c_structrow_6b9724ba_2707
#define __m2c_structrow_6b9724ba_2707 m2c::k__m2c_structrow_6b9724ba_2707
#endif
#ifndef __m2c_structrow_6b9724ba_2708
#define __m2c_structrow_6b9724ba_2708 m2c::k__m2c_structrow_6b9724ba_2708
#endif
#ifndef __m2c_structrow_6b9724ba_2709
#define __m2c_structrow_6b9724ba_2709 m2c::k__m2c_structrow_6b9724ba_2709
#endif
#ifndef __m2c_structrow_6b9724ba_2710
#define __m2c_structrow_6b9724ba_2710 m2c::k__m2c_structrow_6b9724ba_2710
#endif
#ifndef __m2c_structrow_6b9724ba_2711
#define __m2c_structrow_6b9724ba_2711 m2c::k__m2c_structrow_6b9724ba_2711
#endif
#ifndef __m2c_structrow_6b9724ba_2712
#define __m2c_structrow_6b9724ba_2712 m2c::k__m2c_structrow_6b9724ba_2712
#endif
#ifndef __m2c_structrow_6b9724ba_2713
#define __m2c_structrow_6b9724ba_2713 m2c::k__m2c_structrow_6b9724ba_2713
#endif
#ifndef __m2c_structrow_6b9724ba_2714
#define __m2c_structrow_6b9724ba_2714 m2c::k__m2c_structrow_6b9724ba_2714
#endif
#ifndef __m2c_structrow_6b9724ba_2715
#define __m2c_structrow_6b9724ba_2715 m2c::k__m2c_structrow_6b9724ba_2715
#endif



#endif

#ifndef __M2C_MODEL_DATA_H__
#define __M2C_MODEL_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern mobile& m_mobile;
extern viewpoint& m_view;
extern viewpoint& m_test;
extern dw& xsec;
extern dw& ysec;
extern dw& xft;
extern dw& xfine;
extern dw& yft;
extern dw& yfine;
extern dw& zfthi;
extern dw& zftlo;
extern dw& zfine;
extern dw& modelmapindex;
extern dw& hdg;
extern dw& hfine;
extern dw& pitch;
extern dw& pfine;
extern dw& roll;
extern dw& rfine;
extern dw& m_sinh;
extern dw& m_cosh;
extern dw& m_sinp;
extern dw& m_cosp;
extern dw& m_sinr;
extern dw& m_cosr;
extern dw& eleposn;
extern dw& ailposn;
extern dw& rudposn;
extern dw& hdgrate;
extern dw& pitchrate;
extern dw& rollrate;
extern dw& deltahrate;
extern dw& deltaprate;
extern dw& deltarrate;
extern dw& elerate;
extern dw& rudrate;
extern dw& elerollrate;
extern dw& ailrollrate;
extern dw& rudrollrate;
extern dw& grate;
extern dw& pitchflip;
extern dw& stallpitch;
extern dw& maxpitchdown;
extern dw& stallrolldir;
extern dw& recovery;
extern dw& weight;
extern dw& weight2;
extern dw& fixedweight;
extern db (& debugweight)[2];
extern dw& fuelwt;
extern dw& fuelwtfine;
extern dw& storeswt;
extern dw& throttle;
extern dw& throttlefine;
extern dw& reheat;
extern dw& reheatfine;
extern dw& rpm1;
extern dw& rpm2;
extern dw& thrust1;
extern dw& thrust2;
extern dw& thrust;
extern dw& thrust4;
extern db& engfire1;
extern db& engfire2;
extern dw& engfiretimer;
extern dw& fuelflow1;
extern dw& fuelflow2;
extern dw& temp1;
extern dw& temp2;
extern dw& dispgforce;
extern dw& dispalpha;
extern dw& dispzdot;
extern dw& dispvsi;
extern dw& dispbaralt;
extern dw& disphdg;
extern dw& dispmachnum;
extern dw& thrusttable;
extern dw& dummydfe71be4_data_bc_2585;
extern dw& dummydfe71be4_data_be_2586;
extern dw& dummydfe71be4_data_c0_2587;
extern dw& dummydfe71be4_data_c2_2588;
extern dw& dummydfe71be4_data_c4_2589;
extern dw& dummydfe71be4_data_c6_2590;
extern dw& dummydfe71be4_data_c8_2591;
extern dw& dummydfe71be4_data_ca_2592;
extern dw& dummydfe71be4_data_cc_2593;
extern dw& dummydfe71be4_data_ce_2594;
extern dw& dummydfe71be4_data_d0_2595;
extern dw& dummydfe71be4_data_d2_2596;
extern dw& dummydfe71be4_data_d4_2597;
extern dw& dummydfe71be4_data_d6_2598;
extern dw& dummydfe71be4_data_d8_2599;
extern dw& dummydfe71be4_data_da_2600;
extern dw& dummydfe71be4_data_dc_2601;
extern dw& dummydfe71be4_data_de_2602;
extern dw& dummydfe71be4_data_e0_2603;
extern dw& dummydfe71be4_data_e2_2604;
extern dw& dummydfe71be4_data_e4_2605;
extern dw& dummydfe71be4_data_e6_2606;
extern dw& dummydfe71be4_data_e8_2607;
extern dw& dummydfe71be4_data_ea_2608;
extern dw& dummydfe71be4_data_ec_2609;
extern dw& dummydfe71be4_data_ee_2610;
extern dw& dummydfe71be4_data_f0_2611;
extern dw& dummydfe71be4_data_f2_2612;
extern dw& dummydfe71be4_data_f4_2613;
extern dw& dummydfe71be4_data_f6_2614;
extern dw& dummydfe71be4_data_f8_2615;
extern dw& dummydfe71be4_data_fa_2616;
extern dw& dummydfe71be4_data_fc_2617;
extern dw& dummydfe71be4_data_fe_2618;
extern dw& dummydfe71be4_data_100_2619;
extern dw& dummydfe71be4_data_102_2620;
extern dw& dummydfe71be4_data_104_2621;
extern db& gear;
extern dw& geartimer;
extern db& wheelbrakes;
extern db& airbrakes;
extern db& thrustrvrs;
extern db& spils;
extern db& airborne1;
extern db& airborne2;
extern db& touchdown;
extern db& stallflag1;
extern db& stallflag2;
extern db& startstall;
extern db& spinflag;
extern db& autotrim;
extern db& newsector;
extern db& disableinput;
extern db& paused;
extern db& hithill;
extern db& timer50;
extern db (& sweepactive)[2];
extern db& crntwingpos;
extern db& destwingpos;
extern dw& crntwingval;
extern dw& destwingval;
extern dw& wingsetting;
extern dw& dummydfe71be4_data_124_2676;
extern dw& dummydfe71be4_data_126_2677;
extern dw (& dummydfe71be4_data_128_2693)[3];
extern dw (& dummydfe71be4_data_12e_2694)[3];
extern dw (& dummydfe71be4_data_134_2695)[3];
extern db (& flapsactive)[2];
extern db& crntflappos;
extern db& destflappos;
extern dw& crntflapval;
extern dw& destflapval;
extern dw& flapsetting;
extern dw& dummydfe71be4_data_144_2718;
extern dw& dummydfe71be4_data_146_2719;
extern dw& dummydfe71be4_data_148_2720;
extern dw (& dummydfe71be4_data_14a_2734)[2];
extern dw (& dummydfe71be4_data_14e_2735)[2];
extern dw (& dummydfe71be4_data_152_2736)[2];
extern dw (& dummydfe71be4_data_156_2737)[2];
extern db (& posinhibit)[4];
extern db (& dummydfe71be4_data_15e_2745)[4];
extern db (& dummydfe71be4_data_162_2746)[4];
extern dw& gforce;
extern dw& gmax;
extern dw& truegmax;
extern dw& gcoord;
extern dw& kfs;
extern dw& alpha;
extern dw (& kfsfixed)[4];
extern dw (& dummydfe71be4_data_17a_2774)[4];
extern dw (& dummydfe71be4_data_182_2775)[4];
extern dw (& kfssweep)[2];
extern dw (& dummydfe71be4_data_18e_2784)[2];
extern dw (& dummydfe71be4_data_192_2785)[2];
extern dw (& dummydfe71be4_data_196_2786)[2];
extern dw (& kfsflaps)[2];
extern dw (& dummydfe71be4_data_19e_2796)[2];
extern dw (& dummydfe71be4_data_1a2_2797)[2];
extern dw& draghi;
extern dw& draglo;
extern dw& drag4;
extern dw& dragcoeff;
extern dw& cd0;
extern dw& cl1;
extern dw& ksweep;
extern dw& ksweepcl2;
extern dw (& cd0table)[4];
extern dw (& dummydfe71be4_data_1be_2841)[4];
extern dw (& dummydfe71be4_data_1c6_2842)[4];
extern dw& accel;
extern dw& vtas;
extern dw& vtasfine;
extern dw& vias;
extern dw& vdiv;
extern dw& vav;
extern dw& vtrim;
extern dw& zdot;
extern dw& vkts;
extern dw& mach1;
extern dw& machnum;
extern dw (& vtrimtable)[4];
extern dw (& dummydfe71be4_data_1ec_2862)[4];
extern dw (& dummydfe71be4_data_1f4_2863)[4];
extern dw& rho;
extern dw& sqrtrho;
extern dw& rhotable;
extern dw& dummydfe71be4_data_202_2874;
extern dw& dummydfe71be4_data_204_2875;
extern dw& dummydfe71be4_data_206_2876;
extern dw& dummydfe71be4_data_208_2877;
extern dw& dummydfe71be4_data_20a_2878;
extern dw& dummydfe71be4_data_20c_2879;
extern dw& dummydfe71be4_data_20e_2880;
extern dw& dummydfe71be4_data_210_2881;
extern dw& dummydfe71be4_data_212_2882;
extern dw& dummydfe71be4_data_214_2883;
extern dw& dummydfe71be4_data_216_2884;
extern dw& dummydfe71be4_data_218_2885;
extern dw& dummydfe71be4_data_21a_2886;
extern dw& dummydfe71be4_data_21c_2887;
extern dw& dummydfe71be4_data_21e_2888;
extern dw& dummydfe71be4_data_220_2889;
extern dw& dummydfe71be4_data_222_2890;
extern dw& dummydfe71be4_data_224_2891;
extern dw& dummydfe71be4_data_226_2892;
extern dw& dummydfe71be4_data_228_2893;
extern dw& dummydfe71be4_data_22a_2894;
extern dw& dummydfe71be4_data_22c_2895;
extern dw& dummydfe71be4_data_22e_2896;
extern dw& dummydfe71be4_data_230_2897;
extern dw& dummydfe71be4_data_232_2898;
extern dw& dummydfe71be4_data_234_2899;
extern dw& dummydfe71be4_data_236_2900;
extern dw& dummydfe71be4_data_238_2901;
extern dw& dummydfe71be4_data_23a_2902;
extern dw& dummydfe71be4_data_23c_2903;
extern dw& dummydfe71be4_data_23e_2904;
extern dw& dummydfe71be4_data_240_2905;
extern dw& dummydfe71be4_data_242_2906;
extern dw& dummydfe71be4_data_244_2907;
extern dw& dummydfe71be4_data_246_2908;
extern dw& dummydfe71be4_data_248_2909;
extern dw& dummydfe71be4_data_24a_2910;
extern dw& dummydfe71be4_data_24c_2911;
extern dw& dummydfe71be4_data_24e_2912;
extern dw& dummydfe71be4_data_250_2913;
extern dw& dummydfe71be4_data_252_2914;
extern dw& dummydfe71be4_data_254_2915;
extern dw& dummydfe71be4_data_256_2916;
extern dw& dummydfe71be4_data_258_2917;
extern dw& dummydfe71be4_data_25a_2918;
extern dw& dummydfe71be4_data_25c_2919;
extern dw& dummydfe71be4_data_25e_2920;
extern dw& dummydfe71be4_data_260_2921;
extern dw& dummydfe71be4_data_262_2922;
extern dw& dummydfe71be4_data_264_2923;
extern dw& dummydfe71be4_data_266_2924;
extern dw& dummydfe71be4_data_268_2925;
extern dw& dummydfe71be4_data_26a_2926;
extern dw& dummydfe71be4_data_26c_2927;
extern dw& dummydfe71be4_data_26e_2928;
extern dw& dummydfe71be4_data_270_2929;
extern dw& dummydfe71be4_data_272_2930;
extern dw& dummydfe71be4_data_274_2931;
extern dw& dummydfe71be4_data_276_2932;
extern dw& dummydfe71be4_data_278_2933;
extern dw& dummydfe71be4_data_27a_2934;
extern dw& dummydfe71be4_data_27c_2935;
extern dw& dummydfe71be4_data_27e_2936;
extern dw& dummydfe71be4_data_280_2937;
extern dw& dummydfe71be4_data_282_2938;
extern dw& dummydfe71be4_data_284_2939;
extern dw& dummydfe71be4_data_286_2940;
extern dw& dummydfe71be4_data_288_2941;
extern dw& dummydfe71be4_data_28a_2942;
extern dw& dummydfe71be4_data_28c_2943;
extern dw& sqrtrhotable;
extern dw& dummydfe71be4_data_290_2949;
extern dw& dummydfe71be4_data_292_2950;
extern dw& dummydfe71be4_data_294_2951;
extern dw& dummydfe71be4_data_296_2952;
extern dw& dummydfe71be4_data_298_2953;
extern dw& dummydfe71be4_data_29a_2954;
extern dw& dummydfe71be4_data_29c_2955;
extern dw& dummydfe71be4_data_29e_2956;
extern dw& dummydfe71be4_data_2a0_2957;
extern dw& dummydfe71be4_data_2a2_2958;
extern dw& dummydfe71be4_data_2a4_2959;
extern dw& dummydfe71be4_data_2a6_2960;
extern dw& dummydfe71be4_data_2a8_2961;
extern dw& dummydfe71be4_data_2aa_2962;
extern dw& dummydfe71be4_data_2ac_2963;
extern dw& dummydfe71be4_data_2ae_2964;
extern dw& dummydfe71be4_data_2b0_2965;
extern dw& dummydfe71be4_data_2b2_2966;
extern dw& dummydfe71be4_data_2b4_2967;
extern dw& dummydfe71be4_data_2b6_2968;
extern dw& dummydfe71be4_data_2b8_2969;
extern dw& dummydfe71be4_data_2ba_2970;
extern dw& dummydfe71be4_data_2bc_2971;
extern dw& dummydfe71be4_data_2be_2972;
extern dw& dummydfe71be4_data_2c0_2973;
extern dw& dummydfe71be4_data_2c2_2974;
extern dw& dummydfe71be4_data_2c4_2975;
extern dw& dummydfe71be4_data_2c6_2976;
extern dw& dummydfe71be4_data_2c8_2977;
extern dw& dummydfe71be4_data_2ca_2978;
extern dw& dummydfe71be4_data_2cc_2979;
extern dw& dummydfe71be4_data_2ce_2980;
extern dw& dummydfe71be4_data_2d0_2981;
extern dw& dummydfe71be4_data_2d2_2982;
extern dw& dummydfe71be4_data_2d4_2983;
extern dw& dummydfe71be4_data_2d6_2984;
extern dw& dummydfe71be4_data_2d8_2985;
extern dw& dummydfe71be4_data_2da_2986;
extern dw& dummydfe71be4_data_2dc_2987;
extern dw& dummydfe71be4_data_2de_2988;
extern dw& dummydfe71be4_data_2e0_2989;
extern dw& dummydfe71be4_data_2e2_2990;
extern dw& dummydfe71be4_data_2e4_2991;
extern dw& dummydfe71be4_data_2e6_2992;
extern dw& dummydfe71be4_data_2e8_2993;
extern dw& dummydfe71be4_data_2ea_2994;
extern dw& dummydfe71be4_data_2ec_2995;
extern dw& dummydfe71be4_data_2ee_2996;
extern dw& dummydfe71be4_data_2f0_2997;
extern dw& dummydfe71be4_data_2f2_2998;
extern dw& dummydfe71be4_data_2f4_2999;
extern dw& dummydfe71be4_data_2f6_3000;
extern dw& dummydfe71be4_data_2f8_3001;
extern dw& dummydfe71be4_data_2fa_3002;
extern dw& dummydfe71be4_data_2fc_3003;
extern dw& dummydfe71be4_data_2fe_3004;
extern dw& dummydfe71be4_data_300_3005;
extern dw& dummydfe71be4_data_302_3006;
extern dw& dummydfe71be4_data_304_3007;
extern dw& dummydfe71be4_data_306_3008;
extern dw& dummydfe71be4_data_308_3009;
extern dw& dummydfe71be4_data_30a_3010;
extern dw& dummydfe71be4_data_30c_3011;
extern dw& dummydfe71be4_data_30e_3012;
extern dw& dummydfe71be4_data_310_3013;
extern dw& dummydfe71be4_data_312_3014;
extern dw& dummydfe71be4_data_314_3015;
extern dw& dummydfe71be4_data_316_3016;
extern dw& dummydfe71be4_data_318_3017;
extern dw& dummydfe71be4_data_31a_3018;
extern dw& xwindvtas;
extern dw& xwindvaim;
extern dw& xwindvfix;
extern dw& xwindveff;
extern dw& xwindgust;
extern dw& xwindfade;
extern dw& xwinddxft;
extern dw& xwinddxfine;
extern dw& xwinddyft;
extern dw& xwinddyfine;
extern dw& xwinddirtimer;
extern dw& kbdctrlswitch;
extern dw& dummydfe71be4_data_334_3044;
extern dw& dummydfe71be4_data_336_3045;
extern dw& dummydfe71be4_data_338_3047;
extern dw& kbdeleswitch;
extern dw& dummydfe71be4_data_33c_3051;
extern dw& dummydfe71be4_data_33e_3052;
extern dw& dummydfe71be4_data_340_3053;
extern dw& kbdailswitch;
extern dw& dummydfe71be4_data_344_3057;
extern dw& dummydfe71be4_data_346_3058;
extern dw& dummydfe71be4_data_348_3059;
extern dw& elekbdrate;
extern dw& ailkbdrate;
extern dw& rudkbdrate;
extern dw& elekbdwash;
extern dw& ailkbdwash;
extern dw& rudkbdwash;
extern db& oldcrsrup;
extern db& oldcrsrdn;
extern db& oldcrsrlf;
extern db& oldcrsrrt;
extern db& oldplus;
extern db& oldminus;
extern dw& joyeleswitch;
extern dw& dummydfe71be4_data_35e_3087;
extern dw& dummydfe71be4_data_360_3088;
extern dw& dummydfe71be4_data_362_3089;
extern dw& joyailswitch;
extern dw& dummydfe71be4_data_366_3093;
extern dw& dummydfe71be4_data_368_3094;
extern dw& dummydfe71be4_data_36a_3095;
extern dw& autothrotdelay;
extern dw& tfridedelay;
extern dw& autohdgdelay;
extern dw& autoaltdelay;
extern dw& joya_x;
extern dw& joya_y;
extern dw& joyb_x;
extern dw& joyb_y;
extern dw& oldjoya_x;
extern dw& oldjoya_y;
extern dw& oldjoyb_x;
extern dw& oldjoyb_y;
extern dw& dummydfe71be4_data_384_3123;
extern dw& dummydfe71be4_data_386_3124;
extern dw& dummydfe71be4_data_388_3125;
extern dw& dummydfe71be4_data_38a_3126;
extern dw& dummydfe71be4_data_38c_3127;
extern dw& dummydfe71be4_data_38e_3128;
extern dw& dummydfe71be4_data_390_3129;
extern dw& dummydfe71be4_data_392_3130;
extern dw& dummydfe71be4_data_394_3131;
extern dw& dummydfe71be4_data_396_3132;
extern dw& dummydfe71be4_data_398_3133;
extern dw& dummydfe71be4_data_39a_3134;
extern dw& dummydfe71be4_data_39c_3135;
extern dw& dummydfe71be4_data_39e_3136;
extern dw& dummydfe71be4_data_3a0_3137;
extern dw& dummydfe71be4_data_3a2_3138;
extern dw& dummydfe71be4_data_3a4_3139;
extern dw& dummydfe71be4_data_3a6_3140;
extern dw& dummydfe71be4_data_3a8_3141;
extern dw& dummydfe71be4_data_3aa_3142;
extern dw& dummydfe71be4_data_3ac_3143;
extern dw& dummydfe71be4_data_3ae_3144;
extern dw& dummydfe71be4_data_3b0_3145;
extern dw& dummydfe71be4_data_3b2_3146;
extern dw& dummydfe71be4_data_3b4_3147;
extern dw& dummydfe71be4_data_3b6_3148;
extern dw& dummydfe71be4_data_3b8_3149;
extern dw& dummydfe71be4_data_3ba_3150;
extern dw& dummydfe71be4_data_3bc_3151;
extern dw& dummydfe71be4_data_3be_3152;
extern dw& dummydfe71be4_data_3c0_3153;
extern dw& dummydfe71be4_data_3c2_3154;
extern dw& dummydfe71be4_data_3c4_3155;
extern dw& kf_updateswitch;
extern dw& dummydfe71be4_data_3c8_3161;
extern dw& kf_scanswitch;
extern dw& dummydfe71be4_data_3cc_3163;
extern gamekey& kf_hudcontrast;
extern gamekey& kf_hudswitch;
extern gamekey& kf_hudoption;
extern gamekey& kf_togglepitchcam;
extern gamekey& kf_resettrkcam;
extern gamekey& kf_resetsatcam;
extern gamekey& kf_adjusthorizondown;
extern gamekey& kf_resetwpncam;
extern gamekey& kf_zoomin;
extern gamekey& kf_zoomout;
extern gamekey& kf_fastzoomin;
extern gamekey& kf_fastzoomout;
extern gamekey& kf_trackclk;
extern gamekey& kf_trackaclk;
extern gamekey& kf_fasttrkclk;
extern gamekey& kf_fasttrkaclk;
extern gamekey& kf_dispselect;
extern gamekey& kf_tab1select;
extern gamekey& kf_tab1toggle;
extern gamekey& kf_tab2select;
extern gamekey& kf_tab2toggle;
extern gamekey& kf_pilotview;
extern gamekey& kf_navigview;
extern gamekey& kf_navigviewwithctrl;
extern gamekey& kf_lviewfix;
extern gamekey& kf_rviewfix;
extern gamekey& kf_lviewglance;
extern gamekey& kf_rviewglance;
extern gamekey& kf_trackingcam;
extern gamekey& kf_adjusthorizonup;
extern gamekey& kf_trackingcamup;
extern gamekey& kf_satellitecam;
extern gamekey& kf_remoteview;
extern gamekey& kf_mapview;
extern gamekey& kf_droneview;
extern gamekey& kf_droneprev;
extern gamekey& kf_droneside;
extern gamekey& kf_dronetype;
extern gamekey& kf_spectator;
extern gamekey& kf_restorespec;
extern gamekey& kf_lookdown;
extern gamekey& kf_viewweapon;
extern gamekey& kf_range;
extern gamekey& kf_gndtext;
extern gamekey& kf_hilltext;
extern gamekey& kf_hilltextcancel;
extern gamekey& kf_clouds;
extern gamekey& kf_horizon;
extern gamekey& kf_ironwork;
extern gamekey& kf_control;
extern gamekey& kf_sound;
extern gamekey& kf_yaw;
extern gamekey& kf_minimise;
extern gamekey& kf_gear;
extern gamekey& kf_wheelbrakes;
extern gamekey& kf_airbrakes;
extern gamekey& kf_wingswpfwd;
extern gamekey& kf_wingswpback;
extern gamekey& kf_flapsup;
extern gamekey& kf_flapsdn;
extern gamekey& kf_spils;
extern gamekey& kf_mfdselect;
extern gamekey& kf_mfdtoggle;
extern gamekey& kf_mapzoomin;
extern gamekey& kf_mapzoomout;
extern gamekey& kf_maporigin;
extern gamekey& kf_gndradar;
extern gamekey& kf_airradar;
extern gamekey& kf_radaroff;
extern gamekey& kf_boresight;
extern gamekey& kf_cycleairtgt;
extern gamekey& kf_cancelairtgt;
extern gamekey& kf_armgnd;
extern gamekey& kf_armair;
extern gamekey& kf_armoff;
extern gamekey& kf_package;
extern gamekey& kf_changearmor;
extern gamekey& kf_armorctrlshift;
extern gamekey& kf_armorctrlalt;
extern gamekey& kf_armordown;
extern gamekey& kf_turnescopeon;
extern gamekey& kf_wpnmode;
extern gamekey& kf_airweapon;
extern gamekey& kf_wpnfire;
extern gamekey& kf_wpncommit;
extern gamekey& kf_ecm;
extern gamekey& kf_chaff;
extern gamekey& kf_flare;
extern gamekey& kf_autocancel;
extern gamekey& kf_approach;
extern gamekey& kf_track;
extern gamekey& kf_hold;
extern gamekey& kf_tfollow;
extern gamekey& kf_throttle;
extern gamekey& kf_samlaunchertotornado;
extern gamekey& kf_aaatotornadoview1;
extern gamekey& kf_aaatotornadoview2;
extern gamekey& kf_autotrim;
extern gamekey& kf_skipwaypoint;
extern gamekey& kf_selecttgtwp;
extern gamekey& kf_canceltgtwp;
extern gamekey& kf_jetexttanks;
extern gamekey& kf_jetextstores;
extern gamekey& kf_jetall;
extern gamekey& kf_eject;
extern gamekey& kf_cancelattn;
extern gamekey& kf_recal;
extern gamekey& kf_joysensnorm;
extern gamekey& kf_joysenshigh;
extern gamekey& kf_quit;
extern gamekey& kf_pause;
extern gamekey& kf_full_mfd;
extern word& airborneflags;
extern word& stallflags;
extern word& buffetthresh;
extern word& flapthresh;
extern word& joyvals;
extern db& modcode;

#ifndef destroyed
extern db& destroyed;
#endif
#ifndef automode
extern dw& automode;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef xwindvmax
extern dw& xwindvmax;
#endif
#ifndef joyb_yval
extern dw& joyb_yval;
#endif
#ifndef autoaltfine
extern dw& autoaltfine;
#endif
#ifndef vshake
extern db& vshake;
#endif
#ifndef autothrot
extern db& autothrot;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef xwinddir
extern dw& xwinddir;
#endif
#ifndef controldevice
extern dw& controldevice;
#endif
#ifndef ssf_spils
extern db& ssf_spils;
#endif
#ifndef damagedreng
extern db& damagedreng;
#endif
#ifndef landing
extern db& landing;
#endif
#ifndef hshake
extern db& hshake;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef key
extern db& key;
#endif
#ifndef joyb_fire1
extern db& joyb_fire1;
#endif
#ifndef autovias
extern dw& autovias;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef ejected
extern db& ejected;
#endif
#ifndef damagedleng
extern db& damagedleng;
#endif
#ifndef startairspeed
extern dw& startairspeed;
#endif
#ifndef ahrollrate
extern dw& ahrollrate;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef nocollisions
extern db& nocollisions;
#endif
#ifndef joya_yval
extern dw& joya_yval;
#endif
#ifndef aaflag
extern db& aaflag;
#endif
#ifndef tfrideindex
extern dw& tfrideindex;
#endif
#ifndef ssf_ecm
extern db& ssf_ecm;
#endif
#ifndef joya_xval
extern dw& joya_xval;
#endif
#ifndef joya_justfired1
extern db& joya_justfired1;
#endif
#ifndef ssf_thrustrvrs
extern db& ssf_thrustrvrs;
#endif
#ifndef ssf_wheelbrakes
extern db& ssf_wheelbrakes;
#endif
#ifndef ssf_sweep
extern db& ssf_sweep;
#endif
#ifndef ssf_flaps
extern db& ssf_flaps;
#endif
#ifndef joyb_flag
extern db& joyb_flag;
#endif
#ifndef autoalt
extern dw& autoalt;
#endif
#ifndef joyb_justfired2
extern db& joyb_justfired2;
#endif
#ifndef autoviasfine
extern dw& autoviasfine;
#endif
#ifndef ssf_engine2
extern db& ssf_engine2;
#endif
#ifndef shaketimer
extern dw& shaketimer;
#endif
#ifndef startairborne
extern db& startairborne;
#endif
#ifndef joyb_xval
extern dw& joyb_xval;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef hitobjectnum
extern db& hitobjectnum;
#endif
#ifndef ahflag
extern db& ahflag;
#endif
#ifndef incockpit
extern db& incockpit;
#endif
#ifndef tfdeltaprate
extern dw& tfdeltaprate;
#endif
#ifndef hdgmode
extern dw& hdgmode;
#endif
#ifndef fixminweight
extern db& fixminweight;
#endif
#ifndef ssf_gear
extern db& ssf_gear;
#endif
#ifndef ecmfitted
extern db& ecmfitted;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef aagforce
extern dw& aagforce;
#endif
#ifndef ahdeltarrate
extern dw& ahdeltarrate;
#endif
#ifndef ssf_engine1
extern db& ssf_engine1;
#endif
#ifndef joya_justfired2
extern db& joya_justfired2;
#endif
#ifndef tfgforce
extern dw& tfgforce;
#endif
#ifndef tfauto
extern db& tfauto;
#endif
#ifndef joyb_fire2
extern db& joyb_fire2;
#endif
#ifndef joya_fire2
extern db& joya_fire2;
#endif
#ifndef joya_flag
extern db& joya_flag;
#endif
#ifndef tfpitchrate
extern dw& tfpitchrate;
#endif
#ifndef joyb_justfired1
extern db& joyb_justfired1;
#endif
#ifndef ssf_airbrakes
extern db& ssf_airbrakes;
#endif
#ifndef crewmode
extern dw& crewmode;
#endif
#ifndef aadeltaprate
extern dw& aadeltaprate;
#endif
#ifndef infinitefuel
extern db& infinitefuel;
#endif
#ifndef joya_fire1
extern db& joya_fire1;
#endif
#ifndef autohdgfine
extern dw& autohdgfine;
#endif
#ifndef ambwarnings2
extern dw& ambwarnings2;
#endif
#ifndef aapitchrate
extern dw& aapitchrate;
#endif
#ifndef altmode
extern dw& altmode;
#endif
#ifndef tmpdieflag
extern db& tmpdieflag;
#endif
#ifndef autohdg
extern dw& autohdg;
#endif
#ifndef joysensitivity
extern db& joysensitivity;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_initmodel
#define M2C_CODE_EQUATE_initmodel 1
static const dd kinitmodel = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_skipairborne
#define M2C_CODE_EQUATE_skipairborne 1
static const dd kskipairborne = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_model
#define M2C_CODE_EQUATE_model 1
static const dd kmodel = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_updatepaused
#define M2C_CODE_EQUATE_updatepaused 1
static const dd kupdatepaused = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_updatedisabled
#define M2C_CODE_EQUATE_updatedisabled 1
static const dd kupdatedisabled = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_kf_updatepilot
#define M2C_CODE_EQUATE_kf_updatepilot 1
static const dd kkf_updatepilot = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_kf_updatecommon
#define M2C_CODE_EQUATE_kf_updatecommon 1
static const dd kkf_updatecommon = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_kf_updatenavig
#define M2C_CODE_EQUATE_kf_updatenavig 1
static const dd kkf_updatenavig = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_contgamekeys
#define M2C_CODE_EQUATE_contgamekeys 1
static const dd kcontgamekeys = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_jettisonok
#define M2C_CODE_EQUATE_jettisonok 1
static const dd kjettisonok = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_setweight
#define M2C_CODE_EQUATE_setweight 1
static const dd ksetweight = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_skipgear
#define M2C_CODE_EQUATE_skipgear 1
static const dd kskipgear = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_skipwbrakes
#define M2C_CODE_EQUATE_skipwbrakes 1
static const dd kskipwbrakes = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_skipairbrakes
#define M2C_CODE_EQUATE_skipairbrakes 1
static const dd kskipairbrakes = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_skipspils
#define M2C_CODE_EQUATE_skipspils 1
static const dd kskipspils = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_skipautotrim
#define M2C_CODE_EQUATE_skipautotrim 1
static const dd kskipautotrim = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_skiprecal
#define M2C_CODE_EQUATE_skiprecal 1
static const dd kskiprecal = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_skipeject
#define M2C_CODE_EQUATE_skipeject 1
static const dd kskipeject = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_skipecm
#define M2C_CODE_EQUATE_skipecm 1
static const dd kskipecm = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_skipquit
#define M2C_CODE_EQUATE_skipquit 1
static const dd kskipquit = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_238_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_238_skip 1
static const dd k__m2c_macrolocal_238_skip = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_exitwinds
#define M2C_CODE_EQUATE_exitwinds 1
static const dd kexitwinds = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_239_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_239_testhi 1
static const dd k__m2c_macrolocal_239_testhi = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_239_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_239_testok 1
static const dd k__m2c_macrolocal_239_testok = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_contwindspeed
#define M2C_CODE_EQUATE_contwindspeed 1
static const dd kcontwindspeed = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_testjoy1
#define M2C_CODE_EQUATE_testjoy1 1
static const dd ktestjoy1 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_testjoy2
#define M2C_CODE_EQUATE_testjoy2 1
static const dd ktestjoy2 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_exitjoysticks
#define M2C_CODE_EQUATE_exitjoysticks 1
static const dd kexitjoysticks = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_251_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_251_skip 1
static const dd k__m2c_macrolocal_251_skip = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_joyelevators
#define M2C_CODE_EQUATE_joyelevators 1
static const dd kjoyelevators = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_joyrudder
#define M2C_CODE_EQUATE_joyrudder 1
static const dd kjoyrudder = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_joythrottle
#define M2C_CODE_EQUATE_joythrottle 1
static const dd kjoythrottle = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_252_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_252_skip 1
static const dd k__m2c_macrolocal_252_skip = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_aboff
#define M2C_CODE_EQUATE_aboff 1
static const dd kaboff = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_abon
#define M2C_CODE_EQUATE_abon 1
static const dd kabon = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_abskip
#define M2C_CODE_EQUATE_abskip 1
static const dd kabskip = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_joyelemanual
#define M2C_CODE_EQUATE_joyelemanual 1
static const dd kjoyelemanual = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_joyailerons
#define M2C_CODE_EQUATE_joyailerons 1
static const dd kjoyailerons = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_joyeleapproach
#define M2C_CODE_EQUATE_joyeleapproach 1
static const dd kjoyeleapproach = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_joyeleacquire
#define M2C_CODE_EQUATE_joyeleacquire 1
static const dd kjoyeleacquire = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_joyeletf
#define M2C_CODE_EQUATE_joyeletf 1
static const dd kjoyeletf = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_contjoyride
#define M2C_CODE_EQUATE_contjoyride 1
static const dd kcontjoyride = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_joyailmanual
#define M2C_CODE_EQUATE_joyailmanual 1
static const dd kjoyailmanual = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_rrateok
#define M2C_CODE_EQUATE_rrateok 1
static const dd krrateok = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_joyailapproach
#define M2C_CODE_EQUATE_joyailapproach 1
static const dd kjoyailapproach = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_joyailacquire
#define M2C_CODE_EQUATE_joyailacquire 1
static const dd kjoyailacquire = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_joyailtrack
#define M2C_CODE_EQUATE_joyailtrack 1
static const dd kjoyailtrack = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_sweepexit
#define M2C_CODE_EQUATE_sweepexit 1
static const dd ksweepexit = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_skipsweepfwd
#define M2C_CODE_EQUATE_skipsweepfwd 1
static const dd kskipsweepfwd = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_skipsweepback
#define M2C_CODE_EQUATE_skipsweepback 1
static const dd kskipsweepback = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_movewingsback
#define M2C_CODE_EQUATE_movewingsback 1
static const dd kmovewingsback = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_setwingdest
#define M2C_CODE_EQUATE_setwingdest 1
static const dd ksetwingdest = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_setwingval
#define M2C_CODE_EQUATE_setwingval 1
static const dd ksetwingval = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_flapsexit
#define M2C_CODE_EQUATE_flapsexit 1
static const dd kflapsexit = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_intoflapsup
#define M2C_CODE_EQUATE_intoflapsup 1
static const dd kintoflapsup = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_skipflapsup
#define M2C_CODE_EQUATE_skipflapsup 1
static const dd kskipflapsup = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_intoflapsdn
#define M2C_CODE_EQUATE_intoflapsdn 1
static const dd kintoflapsdn = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_skipflapsdn
#define M2C_CODE_EQUATE_skipflapsdn 1
static const dd kskipflapsdn = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_moveflapsdown
#define M2C_CODE_EQUATE_moveflapsdown 1
static const dd kmoveflapsdown = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_setflapdest
#define M2C_CODE_EQUATE_setflapdest 1
static const dd ksetflapdest = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_setflapval
#define M2C_CODE_EQUATE_setflapval 1
static const dd ksetflapval = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_calcairdensexit
#define M2C_CODE_EQUATE_calcairdensexit 1
static const dd kcalcairdensexit = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_kfsok
#define M2C_CODE_EQUATE_kfsok 1
static const dd kkfsok = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_sortgmax
#define M2C_CODE_EQUATE_sortgmax 1
static const dd ksortgmax = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_sortgmin
#define M2C_CODE_EQUATE_sortgmin 1
static const dd ksortgmin = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_setgmax
#define M2C_CODE_EQUATE_setgmax 1
static const dd ksetgmax = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_contgforce
#define M2C_CODE_EQUATE_contgforce 1
static const dd kcontgforce = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_contstallroll
#define M2C_CODE_EQUATE_contstallroll 1
static const dd kcontstallroll = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_checkgforce
#define M2C_CODE_EQUATE_checkgforce 1
static const dd kcheckgforce = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_setgcoord
#define M2C_CODE_EQUATE_setgcoord 1
static const dd ksetgcoord = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_setalpha
#define M2C_CODE_EQUATE_setalpha 1
static const dd ksetalpha = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_spinrates
#define M2C_CODE_EQUATE_spinrates 1
static const dd kspinrates = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_gndsteering
#define M2C_CODE_EQUATE_gndsteering 1
static const dd kgndsteering = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_fix90
#define M2C_CODE_EQUATE_fix90 1
static const dd kfix90 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_sethdgrate
#define M2C_CODE_EQUATE_sethdgrate 1
static const dd ksethdgrate = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_sumcontrols
#define M2C_CODE_EQUATE_sumcontrols 1
static const dd ksumcontrols = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_stallpitchdown
#define M2C_CODE_EQUATE_stallpitchdown 1
static const dd kstallpitchdown = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_contpitchrate
#define M2C_CODE_EQUATE_contpitchrate 1
static const dd kcontpitchrate = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_setpitchrate
#define M2C_CODE_EQUATE_setpitchrate 1
static const dd ksetpitchrate = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_skipgndpdown
#define M2C_CODE_EQUATE_skipgndpdown 1
static const dd kskipgndpdown = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_293_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_293_skip 1
static const dd k__m2c_macrolocal_293_skip = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_setdeltaprate
#define M2C_CODE_EQUATE_setdeltaprate 1
static const dd ksetdeltaprate = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_294_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_294_skip 1
static const dd k__m2c_macrolocal_294_skip = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_skipstartspin
#define M2C_CODE_EQUATE_skipstartspin 1
static const dd kskipstartspin = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_setrollrate
#define M2C_CODE_EQUATE_setrollrate 1
static const dd ksetrollrate = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_setdeltarrate
#define M2C_CODE_EQUATE_setdeltarrate 1
static const dd ksetdeltarrate = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_stallwingdrop
#define M2C_CODE_EQUATE_stallwingdrop 1
static const dd kstallwingdrop = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_calcratesexit
#define M2C_CODE_EQUATE_calcratesexit 1
static const dd kcalcratesexit = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_recoveryrates
#define M2C_CODE_EQUATE_recoveryrates 1
static const dd krecoveryrates = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_contspinpitch
#define M2C_CODE_EQUATE_contspinpitch 1
static const dd kcontspinpitch = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_dampspinpitch
#define M2C_CODE_EQUATE_dampspinpitch 1
static const dd kdampspinpitch = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_contspinroll
#define M2C_CODE_EQUATE_contspinroll 1
static const dd kcontspinroll = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_dampspinroll
#define M2C_CODE_EQUATE_dampspinroll 1
static const dd kdampspinroll = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_calcrpm1
#define M2C_CODE_EQUATE_calcrpm1 1
static const dd kcalcrpm1 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_spooldown1
#define M2C_CODE_EQUATE_spooldown1 1
static const dd kspooldown1 = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_calcrpm2
#define M2C_CODE_EQUATE_calcrpm2 1
static const dd kcalcrpm2 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_spooldown2
#define M2C_CODE_EQUATE_spooldown2 1
static const dd kspooldown2 = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_rpmok
#define M2C_CODE_EQUATE_rpmok 1
static const dd krpmok = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_setthrust1
#define M2C_CODE_EQUATE_setthrust1 1
static const dd ksetthrust1 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_setthrust2
#define M2C_CODE_EQUATE_setthrust2 1
static const dd ksetthrust2 = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_calcthrustvar
#define M2C_CODE_EQUATE_calcthrustvar 1
static const dd kcalcthrustvar = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_setthrust
#define M2C_CODE_EQUATE_setthrust 1
static const dd ksetthrust = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_sortthrust
#define M2C_CODE_EQUATE_sortthrust 1
static const dd ksortthrust = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_dampfuelflow
#define M2C_CODE_EQUATE_dampfuelflow 1
static const dd kdampfuelflow = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_setinduceddrag
#define M2C_CODE_EQUATE_setinduceddrag 1
static const dd ksetinduceddrag = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_setksweep
#define M2C_CODE_EQUATE_setksweep 1
static const dd ksetksweep = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_setksweepcl2
#define M2C_CODE_EQUATE_setksweepcl2 1
static const dd ksetksweepcl2 = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_setdrag
#define M2C_CODE_EQUATE_setdrag 1
static const dd ksetdrag = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE_addwbrakedrag
#define M2C_CODE_EQUATE_addwbrakedrag 1
static const dd kaddwbrakedrag = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_calcaccel
#define M2C_CODE_EQUATE_calcaccel 1
static const dd kcalcaccel = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_calcvav
#define M2C_CODE_EQUATE_calcvav 1
static const dd kcalcvav = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_setzdot
#define M2C_CODE_EQUATE_setzdot 1
static const dd ksetzdot = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel126
#define M2C_CODE_EQUATE_dummylabel126 1
static const dd kdummylabel126 = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_sortairborne
#define M2C_CODE_EQUATE_sortairborne 1
static const dd ksortairborne = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel127
#define M2C_CODE_EQUATE_dummylabel127 1
static const dd kdummylabel127 = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_contcalcalt
#define M2C_CODE_EQUATE_contcalcalt 1
static const dd kcontcalcalt = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel128
#define M2C_CODE_EQUATE_dummylabel128 1
static const dd kdummylabel128 = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel129
#define M2C_CODE_EQUATE_dummylabel129 1
static const dd kdummylabel129 = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_346_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_346_skip 1
static const dd k__m2c_macrolocal_346_skip = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_skiptouchdown
#define M2C_CODE_EQUATE_skiptouchdown 1
static const dd kskiptouchdown = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel130
#define M2C_CODE_EQUATE_dummylabel130 1
static const dd kdummylabel130 = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_didntlandonroad
#define M2C_CODE_EQUATE_didntlandonroad 1
static const dd kdidntlandonroad = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_347_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_347_skip 1
static const dd k__m2c_macrolocal_347_skip = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_contlanding
#define M2C_CODE_EQUATE_contlanding 1
static const dd kcontlanding = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_attok
#define M2C_CODE_EQUATE_attok 1
static const dd kattok = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel131
#define M2C_CODE_EQUATE_dummylabel131 1
static const dd kdummylabel131 = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel132
#define M2C_CODE_EQUATE_dummylabel132 1
static const dd kdummylabel132 = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE_sinkok
#define M2C_CODE_EQUATE_sinkok 1
static const dd ksinkok = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel133
#define M2C_CODE_EQUATE_dummylabel133 1
static const dd kdummylabel133 = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_rollok
#define M2C_CODE_EQUATE_rollok 1
static const dd krollok = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE_noseok
#define M2C_CODE_EQUATE_noseok 1
static const dd knoseok = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel134
#define M2C_CODE_EQUATE_dummylabel134 1
static const dd kdummylabel134 = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel135
#define M2C_CODE_EQUATE_dummylabel135 1
static const dd kdummylabel135 = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE_sortlanding
#define M2C_CODE_EQUATE_sortlanding 1
static const dd ksortlanding = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_355_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_355_skip 1
static const dd k__m2c_macrolocal_355_skip = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_sortwheelsup
#define M2C_CODE_EQUATE_sortwheelsup 1
static const dd ksortwheelsup = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_357_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_357_skip 1
static const dd k__m2c_macrolocal_357_skip = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE_landheavy
#define M2C_CODE_EQUATE_landheavy 1
static const dd klandheavy = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel136
#define M2C_CODE_EQUATE_dummylabel136 1
static const dd kdummylabel136 = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel137
#define M2C_CODE_EQUATE_dummylabel137 1
static const dd kdummylabel137 = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_358_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_358_skip 1
static const dd k__m2c_macrolocal_358_skip = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE_sortdeadstick
#define M2C_CODE_EQUATE_sortdeadstick 1
static const dd ksortdeadstick = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel138
#define M2C_CODE_EQUATE_dummylabel138 1
static const dd kdummylabel138 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_359_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_359_skip 1
static const dd k__m2c_macrolocal_359_skip = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel139
#define M2C_CODE_EQUATE_dummylabel139 1
static const dd kdummylabel139 = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x115c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel140
#define M2C_CODE_EQUATE_dummylabel140 1
static const dd kdummylabel140 = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel141
#define M2C_CODE_EQUATE_dummylabel141 1
static const dd kdummylabel141 = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel142
#define M2C_CODE_EQUATE_dummylabel142 1
static const dd kdummylabel142 = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_setanim
#define M2C_CODE_EQUATE_setanim 1
static const dd ksetanim = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel143
#define M2C_CODE_EQUATE_dummylabel143 1
static const dd kdummylabel143 = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel144
#define M2C_CODE_EQUATE_dummylabel144 1
static const dd kdummylabel144 = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel145
#define M2C_CODE_EQUATE_dummylabel145 1
static const dd kdummylabel145 = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE_nobuffet
#define M2C_CODE_EQUATE_nobuffet 1
static const dd knobuffet = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_lobuffet
#define M2C_CODE_EQUATE_lobuffet 1
static const dd klobuffet = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_hibuffet
#define M2C_CODE_EQUATE_hibuffet 1
static const dd khibuffet = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_buffetok
#define M2C_CODE_EQUATE_buffetok 1
static const dd kbuffetok = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_367_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_367_skip 1
static const dd k__m2c_macrolocal_367_skip = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_368_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_368_skip 1
static const dd k__m2c_macrolocal_368_skip = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_369_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_369_skip 1
static const dd k__m2c_macrolocal_369_skip = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_flapsok
#define M2C_CODE_EQUATE_flapsok 1
static const dd kflapsok = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_370_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_370_skip 1
static const dd k__m2c_macrolocal_370_skip = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE_skiphilltest
#define M2C_CODE_EQUATE_skiphilltest 1
static const dd kskiphilltest = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_371_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_371_skip 1
static const dd k__m2c_macrolocal_371_skip = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_372_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_372_skip 1
static const dd k__m2c_macrolocal_372_skip = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_373_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_373_skip 1
static const dd k__m2c_macrolocal_373_skip = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel146
#define M2C_CODE_EQUATE_dummylabel146 1
static const dd kdummylabel146 = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_374_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_374_skip 1
static const dd k__m2c_macrolocal_374_skip = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_375_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_375_skip 1
static const dd k__m2c_macrolocal_375_skip = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel147
#define M2C_CODE_EQUATE_dummylabel147 1
static const dd kdummylabel147 = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_377_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_377_skip 1
static const dd k__m2c_macrolocal_377_skip = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_378_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_378_skip 1
static const dd k__m2c_macrolocal_378_skip = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_skipsurfacechk
#define M2C_CODE_EQUATE_skipsurfacechk 1
static const dd kskipsurfacechk = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel148
#define M2C_CODE_EQUATE_dummylabel148 1
static const dd kdummylabel148 = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_379_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_379_skip 1
static const dd k__m2c_macrolocal_379_skip = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_380_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_380_skip 1
static const dd k__m2c_macrolocal_380_skip = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel149
#define M2C_CODE_EQUATE_dummylabel149 1
static const dd kdummylabel149 = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_hardsurface
#define M2C_CODE_EQUATE_hardsurface 1
static const dd khardsurface = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_381_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_381_skip 1
static const dd k__m2c_macrolocal_381_skip = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_railsurface
#define M2C_CODE_EQUATE_railsurface 1
static const dd krailsurface = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_382_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_382_skip 1
static const dd k__m2c_macrolocal_382_skip = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_ditched
#define M2C_CODE_EQUATE_ditched 1
static const dd kditched = 0x1180;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_383_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_383_skip 1
static const dd k__m2c_macrolocal_383_skip = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_nooffhard
#define M2C_CODE_EQUATE_nooffhard 1
static const dd knooffhard = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE_looffhard
#define M2C_CODE_EQUATE_looffhard 1
static const dd klooffhard = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE_hioffhard
#define M2C_CODE_EQUATE_hioffhard 1
static const dd khioffhard = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE_gndspeedhigh
#define M2C_CODE_EQUATE_gndspeedhigh 1
static const dd kgndspeedhigh = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_384_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_384_skip 1
static const dd k__m2c_macrolocal_384_skip = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_385_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_385_skip 1
static const dd k__m2c_macrolocal_385_skip = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_386_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_386_skip 1
static const dd k__m2c_macrolocal_386_skip = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_387_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_387_skip 1
static const dd k__m2c_macrolocal_387_skip = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_388_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_388_skip 1
static const dd k__m2c_macrolocal_388_skip = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_390_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_390_skip 1
static const dd k__m2c_macrolocal_390_skip = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_391_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_391_skip 1
static const dd k__m2c_macrolocal_391_skip = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel150
#define M2C_CODE_EQUATE_dummylabel150 1
static const dd kdummylabel150 = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_skipengfire
#define M2C_CODE_EQUATE_skipengfire 1
static const dd kskipengfire = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel151
#define M2C_CODE_EQUATE_dummylabel151 1
static const dd kdummylabel151 = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel152
#define M2C_CODE_EQUATE_dummylabel152 1
static const dd kdummylabel152 = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_395_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_395_skip 1
static const dd k__m2c_macrolocal_395_skip = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE_skipbrakeshake
#define M2C_CODE_EQUATE_skipbrakeshake 1
static const dd kskipbrakeshake = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel153
#define M2C_CODE_EQUATE_dummylabel153 1
static const dd kdummylabel153 = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel154
#define M2C_CODE_EQUATE_dummylabel154 1
static const dd kdummylabel154 = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_396_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_396_skip 1
static const dd k__m2c_macrolocal_396_skip = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel155
#define M2C_CODE_EQUATE_dummylabel155 1
static const dd kdummylabel155 = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_skipsmoketrail
#define M2C_CODE_EQUATE_skipsmoketrail 1
static const dd kskipsmoketrail = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel156
#define M2C_CODE_EQUATE_dummylabel156 1
static const dd kdummylabel156 = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel157
#define M2C_CODE_EQUATE_dummylabel157 1
static const dd kdummylabel157 = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE_dxok
#define M2C_CODE_EQUATE_dxok 1
static const dd kdxok = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel158
#define M2C_CODE_EQUATE_dummylabel158 1
static const dd kdummylabel158 = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_dyok
#define M2C_CODE_EQUATE_dyok 1
static const dd kdyok = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel159
#define M2C_CODE_EQUATE_dummylabel159 1
static const dd kdummylabel159 = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_dzok
#define M2C_CODE_EQUATE_dzok 1
static const dd kdzok = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel160
#define M2C_CODE_EQUATE_dummylabel160 1
static const dd kdummylabel160 = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE_collisionloop
#define M2C_CODE_EQUATE_collisionloop 1
static const dd kcollisionloop = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel161
#define M2C_CODE_EQUATE_dummylabel161 1
static const dd kdummylabel161 = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_hitgndobject
#define M2C_CODE_EQUATE_hitgndobject 1
static const dd khitgndobject = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE_hitmobobject
#define M2C_CODE_EQUATE_hitmobobject 1
static const dd khitmobobject = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_skipcollisions
#define M2C_CODE_EQUATE_skipcollisions 1
static const dd kskipcollisions = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel162
#define M2C_CODE_EQUATE_dummylabel162 1
static const dd kdummylabel162 = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_406_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_406_skip 1
static const dd k__m2c_macrolocal_406_skip = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel163
#define M2C_CODE_EQUATE_dummylabel163 1
static const dd kdummylabel163 = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_408_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_408_skip 1
static const dd k__m2c_macrolocal_408_skip = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE_gameintr20
#define M2C_CODE_EQUATE_gameintr20 1
static const dd kgameintr20 = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_409_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_409_skip 1
static const dd k__m2c_macrolocal_409_skip = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_scanpaused
#define M2C_CODE_EQUATE_scanpaused 1
static const dd kscanpaused = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_410_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_410_skip 1
static const dd k__m2c_macrolocal_410_skip = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_scandisabled
#define M2C_CODE_EQUATE_scandisabled 1
static const dd kscandisabled = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_kf_scanpilot
#define M2C_CODE_EQUATE_kf_scanpilot 1
static const dd kkf_scanpilot = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_kf_scancommon
#define M2C_CODE_EQUATE_kf_scancommon 1
static const dd kkf_scancommon = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_kf_scannavig
#define M2C_CODE_EQUATE_kf_scannavig 1
static const dd kkf_scannavig = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_exitintr20
#define M2C_CODE_EQUATE_exitintr20 1
static const dd kexitintr20 = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_washroll1
#define M2C_CODE_EQUATE_washroll1 1
static const dd kwashroll1 = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE_washroll2
#define M2C_CODE_EQUATE_washroll2 1
static const dd kwashroll2 = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE_washroll3
#define M2C_CODE_EQUATE_washroll3 1
static const dd kwashroll3 = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_washroll4
#define M2C_CODE_EQUATE_washroll4 1
static const dd kwashroll4 = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel164
#define M2C_CODE_EQUATE_dummylabel164 1
static const dd kdummylabel164 = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE_washrollok
#define M2C_CODE_EQUATE_washrollok 1
static const dd kwashrollok = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel165
#define M2C_CODE_EQUATE_dummylabel165 1
static const dd kdummylabel165 = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel166
#define M2C_CODE_EQUATE_dummylabel166 1
static const dd kdummylabel166 = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel167
#define M2C_CODE_EQUATE_dummylabel167 1
static const dd kdummylabel167 = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_gameintr100
#define M2C_CODE_EQUATE_gameintr100 1
static const dd kgameintr100 = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_520_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_520_skip 1
static const dd k__m2c_macrolocal_520_skip = 0x11be;
#endif
#ifndef M2C_CODE_EQUATE_gameintr50
#define M2C_CODE_EQUATE_gameintr50 1
static const dd kgameintr50 = 0x11bf;
#endif
#ifndef M2C_CODE_EQUATE_kbdstatus
#define M2C_CODE_EQUATE_kbdstatus 1
static const dd kkbdstatus = 0x11c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel168
#define M2C_CODE_EQUATE_dummylabel168 1
static const dd kdummylabel168 = 0x11c1;
#endif
#ifndef M2C_CODE_EQUATE_kbdelevators
#define M2C_CODE_EQUATE_kbdelevators 1
static const dd kkbdelevators = 0x11c2;
#endif
#ifndef M2C_CODE_EQUATE_kbdelemanual
#define M2C_CODE_EQUATE_kbdelemanual 1
static const dd kkbdelemanual = 0x11c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel169
#define M2C_CODE_EQUATE_dummylabel169 1
static const dd kdummylabel169 = 0x11c4;
#endif
#ifndef M2C_CODE_EQUATE_kbdailerons
#define M2C_CODE_EQUATE_kbdailerons 1
static const dd kkbdailerons = 0x11c6;
#endif
#ifndef M2C_CODE_EQUATE_kbdeleapproach
#define M2C_CODE_EQUATE_kbdeleapproach 1
static const dd kkbdeleapproach = 0x11c7;
#endif
#ifndef M2C_CODE_EQUATE_kbdeleacquire
#define M2C_CODE_EQUATE_kbdeleacquire 1
static const dd kkbdeleacquire = 0x11c8;
#endif
#ifndef M2C_CODE_EQUATE_skipincalt
#define M2C_CODE_EQUATE_skipincalt 1
static const dd kskipincalt = 0x11c9;
#endif
#ifndef M2C_CODE_EQUATE_contincalt
#define M2C_CODE_EQUATE_contincalt 1
static const dd kcontincalt = 0x11ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel170
#define M2C_CODE_EQUATE_dummylabel170 1
static const dd kdummylabel170 = 0x11cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel171
#define M2C_CODE_EQUATE_dummylabel171 1
static const dd kdummylabel171 = 0x11cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel172
#define M2C_CODE_EQUATE_dummylabel172 1
static const dd kdummylabel172 = 0x11cd;
#endif
#ifndef M2C_CODE_EQUATE_skipdecalt
#define M2C_CODE_EQUATE_skipdecalt 1
static const dd kskipdecalt = 0x11ce;
#endif
#ifndef M2C_CODE_EQUATE_contdecalt
#define M2C_CODE_EQUATE_contdecalt 1
static const dd kcontdecalt = 0x11cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel173
#define M2C_CODE_EQUATE_dummylabel173 1
static const dd kdummylabel173 = 0x11d0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel174
#define M2C_CODE_EQUATE_dummylabel174 1
static const dd kdummylabel174 = 0x11d1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel175
#define M2C_CODE_EQUATE_dummylabel175 1
static const dd kdummylabel175 = 0x11d2;
#endif
#ifndef M2C_CODE_EQUATE_kbdeletf
#define M2C_CODE_EQUATE_kbdeletf 1
static const dd kkbdeletf = 0x11d3;
#endif
#ifndef M2C_CODE_EQUATE_skipincride
#define M2C_CODE_EQUATE_skipincride 1
static const dd kskipincride = 0x11d4;
#endif
#ifndef M2C_CODE_EQUATE_contincride
#define M2C_CODE_EQUATE_contincride 1
static const dd kcontincride = 0x11d5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel176
#define M2C_CODE_EQUATE_dummylabel176 1
static const dd kdummylabel176 = 0x11d6;
#endif
#ifndef M2C_CODE_EQUATE_contdecride
#define M2C_CODE_EQUATE_contdecride 1
static const dd kcontdecride = 0x11d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel177
#define M2C_CODE_EQUATE_dummylabel177 1
static const dd kdummylabel177 = 0x11d8;
#endif
#ifndef M2C_CODE_EQUATE_kbdailmanual
#define M2C_CODE_EQUATE_kbdailmanual 1
static const dd kkbdailmanual = 0x11d9;
#endif
#ifndef M2C_CODE_EQUATE_kbdrudder
#define M2C_CODE_EQUATE_kbdrudder 1
static const dd kkbdrudder = 0x11da;
#endif
#ifndef M2C_CODE_EQUATE_kbdailapproach
#define M2C_CODE_EQUATE_kbdailapproach 1
static const dd kkbdailapproach = 0x11db;
#endif
#ifndef M2C_CODE_EQUATE_kbdailacquire
#define M2C_CODE_EQUATE_kbdailacquire 1
static const dd kkbdailacquire = 0x11dc;
#endif
#ifndef M2C_CODE_EQUATE_skipinchdg
#define M2C_CODE_EQUATE_skipinchdg 1
static const dd kskipinchdg = 0x11dd;
#endif
#ifndef M2C_CODE_EQUATE_continchdg
#define M2C_CODE_EQUATE_continchdg 1
static const dd kcontinchdg = 0x11de;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel178
#define M2C_CODE_EQUATE_dummylabel178 1
static const dd kdummylabel178 = 0x11df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel179
#define M2C_CODE_EQUATE_dummylabel179 1
static const dd kdummylabel179 = 0x11e0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel180
#define M2C_CODE_EQUATE_dummylabel180 1
static const dd kdummylabel180 = 0x11e1;
#endif
#ifndef M2C_CODE_EQUATE_skipdechdg
#define M2C_CODE_EQUATE_skipdechdg 1
static const dd kskipdechdg = 0x11e2;
#endif
#ifndef M2C_CODE_EQUATE_contdechdg
#define M2C_CODE_EQUATE_contdechdg 1
static const dd kcontdechdg = 0x11e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel181
#define M2C_CODE_EQUATE_dummylabel181 1
static const dd kdummylabel181 = 0x11e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel182
#define M2C_CODE_EQUATE_dummylabel182 1
static const dd kdummylabel182 = 0x11e5;
#endif
#ifndef M2C_CODE_EQUATE_kbdailtrack
#define M2C_CODE_EQUATE_kbdailtrack 1
static const dd kkbdailtrack = 0x11e6;
#endif
#ifndef M2C_CODE_EQUATE_kbdthrottle
#define M2C_CODE_EQUATE_kbdthrottle 1
static const dd kkbdthrottle = 0x11e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel183
#define M2C_CODE_EQUATE_dummylabel183 1
static const dd kdummylabel183 = 0x11e8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_521_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_521_skip 1
static const dd k__m2c_macrolocal_521_skip = 0x11e9;
#endif
#ifndef M2C_CODE_EQUATE_kbdautothrot
#define M2C_CODE_EQUATE_kbdautothrot 1
static const dd kkbdautothrot = 0x11ea;
#endif
#ifndef M2C_CODE_EQUATE_closethrottle
#define M2C_CODE_EQUATE_closethrottle 1
static const dd kclosethrottle = 0x11eb;
#endif
#ifndef M2C_CODE_EQUATE_increheat
#define M2C_CODE_EQUATE_increheat 1
static const dd kincreheat = 0x11ec;
#endif
#ifndef M2C_CODE_EQUATE_reheaton
#define M2C_CODE_EQUATE_reheaton 1
static const dd kreheaton = 0x11ed;
#endif
#ifndef M2C_CODE_EQUATE_slamthrotopen
#define M2C_CODE_EQUATE_slamthrotopen 1
static const dd kslamthrotopen = 0x11ee;
#endif
#ifndef M2C_CODE_EQUATE_slamreheatopen
#define M2C_CODE_EQUATE_slamreheatopen 1
static const dd kslamreheatopen = 0x11ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel184
#define M2C_CODE_EQUATE_dummylabel184 1
static const dd kdummylabel184 = 0x11f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel185
#define M2C_CODE_EQUATE_dummylabel185 1
static const dd kdummylabel185 = 0x11f1;
#endif
#ifndef M2C_CODE_EQUATE_decreheat
#define M2C_CODE_EQUATE_decreheat 1
static const dd kdecreheat = 0x11f2;
#endif
#ifndef M2C_CODE_EQUATE_reheatoff
#define M2C_CODE_EQUATE_reheatoff 1
static const dd kreheatoff = 0x11f3;
#endif
#ifndef M2C_CODE_EQUATE_slamthrotshut
#define M2C_CODE_EQUATE_slamthrotshut 1
static const dd kslamthrotshut = 0x11f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel186
#define M2C_CODE_EQUATE_dummylabel186 1
static const dd kdummylabel186 = 0x11f5;
#endif
#ifndef M2C_CODE_EQUATE_slamreheatshut
#define M2C_CODE_EQUATE_slamreheatshut 1
static const dd kslamreheatshut = 0x11f6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel187
#define M2C_CODE_EQUATE_dummylabel187 1
static const dd kdummylabel187 = 0x11f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel188
#define M2C_CODE_EQUATE_dummylabel188 1
static const dd kdummylabel188 = 0x11f8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_522_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_522_skip 1
static const dd k__m2c_macrolocal_522_skip = 0x11f9;
#endif
#ifndef M2C_CODE_EQUATE_skipincvias
#define M2C_CODE_EQUATE_skipincvias 1
static const dd kskipincvias = 0x11fa;
#endif
#ifndef M2C_CODE_EQUATE_contincvias
#define M2C_CODE_EQUATE_contincvias 1
static const dd kcontincvias = 0x11fb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel189
#define M2C_CODE_EQUATE_dummylabel189 1
static const dd kdummylabel189 = 0x11fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel190
#define M2C_CODE_EQUATE_dummylabel190 1
static const dd kdummylabel190 = 0x11fd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel191
#define M2C_CODE_EQUATE_dummylabel191 1
static const dd kdummylabel191 = 0x11fe;
#endif
#ifndef M2C_CODE_EQUATE_contdecvias
#define M2C_CODE_EQUATE_contdecvias 1
static const dd kcontdecvias = 0x11ff;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel192
#define M2C_CODE_EQUATE_dummylabel192 1
static const dd kdummylabel192 = 0x1200;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel193
#define M2C_CODE_EQUATE_dummylabel193 1
static const dd kdummylabel193 = 0x1201;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel194
#define M2C_CODE_EQUATE_dummylabel194 1
static const dd kdummylabel194 = 0x1202;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel195
#define M2C_CODE_EQUATE_dummylabel195 1
static const dd kdummylabel195 = 0x1203;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1204;
#endif
#ifndef M2C_CODE_EQUATE_incposn
#define M2C_CODE_EQUATE_incposn 1
static const dd kincposn = 0x1205;
#endif
#ifndef M2C_CODE_EQUATE_decposn
#define M2C_CODE_EQUATE_decposn 1
static const dd kdecposn = 0x1206;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel196
#define M2C_CODE_EQUATE_dummylabel196 1
static const dd kdummylabel196 = 0x1207;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel197
#define M2C_CODE_EQUATE_dummylabel197 1
static const dd kdummylabel197 = 0x1208;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel198
#define M2C_CODE_EQUATE_dummylabel198 1
static const dd kdummylabel198 = 0x1209;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x120a;
#endif
#ifndef M2C_CODE_EQUATE_sweepinactive
#define M2C_CODE_EQUATE_sweepinactive 1
static const dd ksweepinactive = 0x120b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel199
#define M2C_CODE_EQUATE_dummylabel199 1
static const dd kdummylabel199 = 0x120c;
#endif
#ifndef M2C_CODE_EQUATE_calcsfexit
#define M2C_CODE_EQUATE_calcsfexit 1
static const dd kcalcsfexit = 0x120d;
#endif
#ifndef M2C_CODE_EQUATE_flapsinactive
#define M2C_CODE_EQUATE_flapsinactive 1
static const dd kflapsinactive = 0x120e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel200
#define M2C_CODE_EQUATE_dummylabel200 1
static const dd kdummylabel200 = 0x120f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1210;
#endif
#ifndef M2C_CODE_EQUATE_sorttemp
#define M2C_CODE_EQUATE_sorttemp 1
static const dd ksorttemp = 0x1211;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel201
#define M2C_CODE_EQUATE_dummylabel201 1
static const dd kdummylabel201 = 0x1212;
#endif
#ifndef M2C_CODE_EQUATE_conttemp
#define M2C_CODE_EQUATE_conttemp 1
static const dd kconttemp = 0x1213;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel202
#define M2C_CODE_EQUATE_dummylabel202 1
static const dd kdummylabel202 = 0x1214;
#endif
#ifndef M2C_CODE_EQUATE_dectemp
#define M2C_CODE_EQUATE_dectemp 1
static const dd kdectemp = 0x1215;
#endif
#ifndef M2C_CODE_EQUATE_inctemp
#define M2C_CODE_EQUATE_inctemp 1
static const dd kinctemp = 0x1216;
#endif
#ifndef M2C_CODE_EQUATE_tempok
#define M2C_CODE_EQUATE_tempok 1
static const dd ktempok = 0x1217;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1218;
#endif
#ifndef M2C_CODE_EQUATE_negchange
#define M2C_CODE_EQUATE_negchange 1
static const dd knegchange = 0x1219;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel203
#define M2C_CODE_EQUATE_dummylabel203 1
static const dd kdummylabel203 = 0x121a;
#endif
#ifndef M2C_CODE_EQUATE_dampok
#define M2C_CODE_EQUATE_dampok 1
static const dd kdampok = 0x121b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel204
#define M2C_CODE_EQUATE_dummylabel204 1
static const dd kdummylabel204 = 0x121c;
#endif
#ifndef M2C_CODE_EQUATE_sorttwoplayer
#define M2C_CODE_EQUATE_sorttwoplayer 1
static const dd ksorttwoplayer = 0x121d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x121e;
#endif
#ifndef M2C_CODE_EQUATE_exitdestroy
#define M2C_CODE_EQUATE_exitdestroy 1
static const dd kexitdestroy = 0x121f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel205
#define M2C_CODE_EQUATE_dummylabel205 1
static const dd kdummylabel205 = 0x1220;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel206
#define M2C_CODE_EQUATE_dummylabel206 1
static const dd kdummylabel206 = 0x1221;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1222;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x1223;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel207
#define M2C_CODE_EQUATE_dummylabel207 1
static const dd kdummylabel207 = 0x1224;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_m_mobile
#define M2C_CODE_EQUATE_m_mobile 1
static const dd km_mobile = (m2c::near_offset_external(::m_mobile));
#endif
#ifndef M2C_CODE_EQUATE_m_view
#define M2C_CODE_EQUATE_m_view 1
static const dd km_view = (m2c::near_offset_external(::m_view));
#endif
#ifndef M2C_CODE_EQUATE_m_test
#define M2C_CODE_EQUATE_m_test 1
static const dd km_test = (m2c::near_offset_external(::m_test));
#endif
#ifndef M2C_CODE_EQUATE_xsec
#define M2C_CODE_EQUATE_xsec 1
static const dd kxsec = (m2c::near_offset_external(::xsec));
#endif
#ifndef M2C_CODE_EQUATE_ysec
#define M2C_CODE_EQUATE_ysec 1
static const dd kysec = (m2c::near_offset_external(::ysec));
#endif
#ifndef M2C_CODE_EQUATE_xft
#define M2C_CODE_EQUATE_xft 1
static const dd kxft = (m2c::near_offset_external(::xft));
#endif
#ifndef M2C_CODE_EQUATE_xfine
#define M2C_CODE_EQUATE_xfine 1
static const dd kxfine = (m2c::near_offset_external(::xfine));
#endif
#ifndef M2C_CODE_EQUATE_yft
#define M2C_CODE_EQUATE_yft 1
static const dd kyft = (m2c::near_offset_external(::yft));
#endif
#ifndef M2C_CODE_EQUATE_yfine
#define M2C_CODE_EQUATE_yfine 1
static const dd kyfine = (m2c::near_offset_external(::yfine));
#endif
#ifndef M2C_CODE_EQUATE_zfthi
#define M2C_CODE_EQUATE_zfthi 1
static const dd kzfthi = (m2c::near_offset_external(::zfthi));
#endif
#ifndef M2C_CODE_EQUATE_zftlo
#define M2C_CODE_EQUATE_zftlo 1
static const dd kzftlo = (m2c::near_offset_external(::zftlo));
#endif
#ifndef M2C_CODE_EQUATE_zfine
#define M2C_CODE_EQUATE_zfine 1
static const dd kzfine = (m2c::near_offset_external(::zfine));
#endif
#ifndef M2C_CODE_EQUATE_modelmapindex
#define M2C_CODE_EQUATE_modelmapindex 1
static const dd kmodelmapindex = (m2c::near_offset_external(::modelmapindex));
#endif
#ifndef M2C_CODE_EQUATE_hdg
#define M2C_CODE_EQUATE_hdg 1
static const dd khdg = (m2c::near_offset_external(::hdg));
#endif
#ifndef M2C_CODE_EQUATE_hfine
#define M2C_CODE_EQUATE_hfine 1
static const dd khfine = (m2c::near_offset_external(::hfine));
#endif
#ifndef M2C_CODE_EQUATE_pitch
#define M2C_CODE_EQUATE_pitch 1
static const dd kpitch = (m2c::near_offset_external(::pitch));
#endif
#ifndef M2C_CODE_EQUATE_pfine
#define M2C_CODE_EQUATE_pfine 1
static const dd kpfine = (m2c::near_offset_external(::pfine));
#endif
#ifndef M2C_CODE_EQUATE_roll
#define M2C_CODE_EQUATE_roll 1
static const dd kroll = (m2c::near_offset_external(::roll));
#endif
#ifndef M2C_CODE_EQUATE_rfine
#define M2C_CODE_EQUATE_rfine 1
static const dd krfine = (m2c::near_offset_external(::rfine));
#endif
#ifndef M2C_CODE_EQUATE_m_sinh
#define M2C_CODE_EQUATE_m_sinh 1
static const dd km_sinh = (m2c::near_offset_external(::m_sinh));
#endif
#ifndef M2C_CODE_EQUATE_m_cosh
#define M2C_CODE_EQUATE_m_cosh 1
static const dd km_cosh = (m2c::near_offset_external(::m_cosh));
#endif
#ifndef M2C_CODE_EQUATE_m_sinp
#define M2C_CODE_EQUATE_m_sinp 1
static const dd km_sinp = (m2c::near_offset_external(::m_sinp));
#endif
#ifndef M2C_CODE_EQUATE_m_cosp
#define M2C_CODE_EQUATE_m_cosp 1
static const dd km_cosp = (m2c::near_offset_external(::m_cosp));
#endif
#ifndef M2C_CODE_EQUATE_m_sinr
#define M2C_CODE_EQUATE_m_sinr 1
static const dd km_sinr = (m2c::near_offset_external(::m_sinr));
#endif
#ifndef M2C_CODE_EQUATE_m_cosr
#define M2C_CODE_EQUATE_m_cosr 1
static const dd km_cosr = (m2c::near_offset_external(::m_cosr));
#endif
#ifndef M2C_CODE_EQUATE_eleposn
#define M2C_CODE_EQUATE_eleposn 1
static const dd keleposn = (m2c::near_offset_external(::eleposn));
#endif
#ifndef M2C_CODE_EQUATE_ailposn
#define M2C_CODE_EQUATE_ailposn 1
static const dd kailposn = (m2c::near_offset_external(::ailposn));
#endif
#ifndef M2C_CODE_EQUATE_rudposn
#define M2C_CODE_EQUATE_rudposn 1
static const dd krudposn = (m2c::near_offset_external(::rudposn));
#endif
#ifndef M2C_CODE_EQUATE_hdgrate
#define M2C_CODE_EQUATE_hdgrate 1
static const dd khdgrate = (m2c::near_offset_external(::hdgrate));
#endif
#ifndef M2C_CODE_EQUATE_pitchrate
#define M2C_CODE_EQUATE_pitchrate 1
static const dd kpitchrate = (m2c::near_offset_external(::pitchrate));
#endif
#ifndef M2C_CODE_EQUATE_rollrate
#define M2C_CODE_EQUATE_rollrate 1
static const dd krollrate = (m2c::near_offset_external(::rollrate));
#endif
#ifndef M2C_CODE_EQUATE_deltahrate
#define M2C_CODE_EQUATE_deltahrate 1
static const dd kdeltahrate = (m2c::near_offset_external(::deltahrate));
#endif
#ifndef M2C_CODE_EQUATE_deltaprate
#define M2C_CODE_EQUATE_deltaprate 1
static const dd kdeltaprate = (m2c::near_offset_external(::deltaprate));
#endif
#ifndef M2C_CODE_EQUATE_deltarrate
#define M2C_CODE_EQUATE_deltarrate 1
static const dd kdeltarrate = (m2c::near_offset_external(::deltarrate));
#endif
#ifndef M2C_CODE_EQUATE_elerate
#define M2C_CODE_EQUATE_elerate 1
static const dd kelerate = (m2c::near_offset_external(::elerate));
#endif
#ifndef M2C_CODE_EQUATE_rudrate
#define M2C_CODE_EQUATE_rudrate 1
static const dd krudrate = (m2c::near_offset_external(::rudrate));
#endif
#ifndef M2C_CODE_EQUATE_elerollrate
#define M2C_CODE_EQUATE_elerollrate 1
static const dd kelerollrate = (m2c::near_offset_external(::elerollrate));
#endif
#ifndef M2C_CODE_EQUATE_ailrollrate
#define M2C_CODE_EQUATE_ailrollrate 1
static const dd kailrollrate = (m2c::near_offset_external(::ailrollrate));
#endif
#ifndef M2C_CODE_EQUATE_rudrollrate
#define M2C_CODE_EQUATE_rudrollrate 1
static const dd krudrollrate = (m2c::near_offset_external(::rudrollrate));
#endif
#ifndef M2C_CODE_EQUATE_grate
#define M2C_CODE_EQUATE_grate 1
static const dd kgrate = (m2c::near_offset_external(::grate));
#endif
#ifndef M2C_CODE_EQUATE_pitchflip
#define M2C_CODE_EQUATE_pitchflip 1
static const dd kpitchflip = (m2c::near_offset_external(::pitchflip));
#endif
#ifndef M2C_CODE_EQUATE_stallpitch
#define M2C_CODE_EQUATE_stallpitch 1
static const dd kstallpitch = (m2c::near_offset_external(::stallpitch));
#endif
#ifndef M2C_CODE_EQUATE_maxpitchdown
#define M2C_CODE_EQUATE_maxpitchdown 1
static const dd kmaxpitchdown = (m2c::near_offset_external(::maxpitchdown));
#endif
#ifndef M2C_CODE_EQUATE_stallrolldir
#define M2C_CODE_EQUATE_stallrolldir 1
static const dd kstallrolldir = (m2c::near_offset_external(::stallrolldir));
#endif
#ifndef M2C_CODE_EQUATE_recovery
#define M2C_CODE_EQUATE_recovery 1
static const dd krecovery = (m2c::near_offset_external(::recovery));
#endif
#ifndef M2C_CODE_EQUATE_weight
#define M2C_CODE_EQUATE_weight 1
static const dd kweight = (m2c::near_offset_external(::weight));
#endif
#ifndef M2C_CODE_EQUATE_weight2
#define M2C_CODE_EQUATE_weight2 1
static const dd kweight2 = (m2c::near_offset_external(::weight2));
#endif
#ifndef M2C_CODE_EQUATE_fixedweight
#define M2C_CODE_EQUATE_fixedweight 1
static const dd kfixedweight = (m2c::near_offset_external(::fixedweight));
#endif
#ifndef M2C_CODE_EQUATE_debugweight
#define M2C_CODE_EQUATE_debugweight 1
static const dd kdebugweight = (m2c::near_offset_external(::debugweight));
#endif
#ifndef M2C_CODE_EQUATE_fuelwt
#define M2C_CODE_EQUATE_fuelwt 1
static const dd kfuelwt = (m2c::near_offset_external(::fuelwt));
#endif
#ifndef M2C_CODE_EQUATE_fuelwtfine
#define M2C_CODE_EQUATE_fuelwtfine 1
static const dd kfuelwtfine = (m2c::near_offset_external(::fuelwtfine));
#endif
#ifndef M2C_CODE_EQUATE_storeswt
#define M2C_CODE_EQUATE_storeswt 1
static const dd kstoreswt = (m2c::near_offset_external(::storeswt));
#endif
#ifndef M2C_CODE_EQUATE_throttle
#define M2C_CODE_EQUATE_throttle 1
static const dd kthrottle = (m2c::near_offset_external(::throttle));
#endif
#ifndef M2C_CODE_EQUATE_throttlefine
#define M2C_CODE_EQUATE_throttlefine 1
static const dd kthrottlefine = (m2c::near_offset_external(::throttlefine));
#endif
#ifndef M2C_CODE_EQUATE_reheat
#define M2C_CODE_EQUATE_reheat 1
static const dd kreheat = (m2c::near_offset_external(::reheat));
#endif
#ifndef M2C_CODE_EQUATE_reheatfine
#define M2C_CODE_EQUATE_reheatfine 1
static const dd kreheatfine = (m2c::near_offset_external(::reheatfine));
#endif
#ifndef M2C_CODE_EQUATE_rpm1
#define M2C_CODE_EQUATE_rpm1 1
static const dd krpm1 = (m2c::near_offset_external(::rpm1));
#endif
#ifndef M2C_CODE_EQUATE_rpm2
#define M2C_CODE_EQUATE_rpm2 1
static const dd krpm2 = (m2c::near_offset_external(::rpm2));
#endif
#ifndef M2C_CODE_EQUATE_thrust1
#define M2C_CODE_EQUATE_thrust1 1
static const dd kthrust1 = (m2c::near_offset_external(::thrust1));
#endif
#ifndef M2C_CODE_EQUATE_thrust2
#define M2C_CODE_EQUATE_thrust2 1
static const dd kthrust2 = (m2c::near_offset_external(::thrust2));
#endif
#ifndef M2C_CODE_EQUATE_thrust
#define M2C_CODE_EQUATE_thrust 1
static const dd kthrust = (m2c::near_offset_external(::thrust));
#endif
#ifndef M2C_CODE_EQUATE_thrust4
#define M2C_CODE_EQUATE_thrust4 1
static const dd kthrust4 = (m2c::near_offset_external(::thrust4));
#endif
#ifndef M2C_CODE_EQUATE_engfire1
#define M2C_CODE_EQUATE_engfire1 1
static const dd kengfire1 = (m2c::near_offset_external(::engfire1));
#endif
#ifndef M2C_CODE_EQUATE_engfire2
#define M2C_CODE_EQUATE_engfire2 1
static const dd kengfire2 = (m2c::near_offset_external(::engfire2));
#endif
#ifndef M2C_CODE_EQUATE_engfiretimer
#define M2C_CODE_EQUATE_engfiretimer 1
static const dd kengfiretimer = (m2c::near_offset_external(::engfiretimer));
#endif
#ifndef M2C_CODE_EQUATE_fuelflow1
#define M2C_CODE_EQUATE_fuelflow1 1
static const dd kfuelflow1 = (m2c::near_offset_external(::fuelflow1));
#endif
#ifndef M2C_CODE_EQUATE_fuelflow2
#define M2C_CODE_EQUATE_fuelflow2 1
static const dd kfuelflow2 = (m2c::near_offset_external(::fuelflow2));
#endif
#ifndef M2C_CODE_EQUATE_temp1
#define M2C_CODE_EQUATE_temp1 1
static const dd ktemp1 = (m2c::near_offset_external(::temp1));
#endif
#ifndef M2C_CODE_EQUATE_temp2
#define M2C_CODE_EQUATE_temp2 1
static const dd ktemp2 = (m2c::near_offset_external(::temp2));
#endif
#ifndef M2C_CODE_EQUATE_dispgforce
#define M2C_CODE_EQUATE_dispgforce 1
static const dd kdispgforce = (m2c::near_offset_external(::dispgforce));
#endif
#ifndef M2C_CODE_EQUATE_dispalpha
#define M2C_CODE_EQUATE_dispalpha 1
static const dd kdispalpha = (m2c::near_offset_external(::dispalpha));
#endif
#ifndef M2C_CODE_EQUATE_dispzdot
#define M2C_CODE_EQUATE_dispzdot 1
static const dd kdispzdot = (m2c::near_offset_external(::dispzdot));
#endif
#ifndef M2C_CODE_EQUATE_dispvsi
#define M2C_CODE_EQUATE_dispvsi 1
static const dd kdispvsi = (m2c::near_offset_external(::dispvsi));
#endif
#ifndef M2C_CODE_EQUATE_dispbaralt
#define M2C_CODE_EQUATE_dispbaralt 1
static const dd kdispbaralt = (m2c::near_offset_external(::dispbaralt));
#endif
#ifndef M2C_CODE_EQUATE_disphdg
#define M2C_CODE_EQUATE_disphdg 1
static const dd kdisphdg = (m2c::near_offset_external(::disphdg));
#endif
#ifndef M2C_CODE_EQUATE_dispmachnum
#define M2C_CODE_EQUATE_dispmachnum 1
static const dd kdispmachnum = (m2c::near_offset_external(::dispmachnum));
#endif
#ifndef M2C_CODE_EQUATE_thrusttable
#define M2C_CODE_EQUATE_thrusttable 1
static const dd kthrusttable = (m2c::near_offset_external(::thrusttable));
#endif
#ifndef M2C_CODE_EQUATE_gear
#define M2C_CODE_EQUATE_gear 1
static const dd kgear = (m2c::near_offset_external(::gear));
#endif
#ifndef M2C_CODE_EQUATE_geartimer
#define M2C_CODE_EQUATE_geartimer 1
static const dd kgeartimer = (m2c::near_offset_external(::geartimer));
#endif
#ifndef M2C_CODE_EQUATE_wheelbrakes
#define M2C_CODE_EQUATE_wheelbrakes 1
static const dd kwheelbrakes = (m2c::near_offset_external(::wheelbrakes));
#endif
#ifndef M2C_CODE_EQUATE_airbrakes
#define M2C_CODE_EQUATE_airbrakes 1
static const dd kairbrakes = (m2c::near_offset_external(::airbrakes));
#endif
#ifndef M2C_CODE_EQUATE_thrustrvrs
#define M2C_CODE_EQUATE_thrustrvrs 1
static const dd kthrustrvrs = (m2c::near_offset_external(::thrustrvrs));
#endif
#ifndef M2C_CODE_EQUATE_spils
#define M2C_CODE_EQUATE_spils 1
static const dd kspils = (m2c::near_offset_external(::spils));
#endif
#ifndef M2C_CODE_EQUATE_airborne1
#define M2C_CODE_EQUATE_airborne1 1
static const dd kairborne1 = (m2c::near_offset_external(::airborne1));
#endif
#ifndef M2C_CODE_EQUATE_airborne2
#define M2C_CODE_EQUATE_airborne2 1
static const dd kairborne2 = (m2c::near_offset_external(::airborne2));
#endif
#ifndef M2C_CODE_EQUATE_touchdown
#define M2C_CODE_EQUATE_touchdown 1
static const dd ktouchdown = (m2c::near_offset_external(::touchdown));
#endif
#ifndef M2C_CODE_EQUATE_stallflag1
#define M2C_CODE_EQUATE_stallflag1 1
static const dd kstallflag1 = (m2c::near_offset_external(::stallflag1));
#endif
#ifndef M2C_CODE_EQUATE_stallflag2
#define M2C_CODE_EQUATE_stallflag2 1
static const dd kstallflag2 = (m2c::near_offset_external(::stallflag2));
#endif
#ifndef M2C_CODE_EQUATE_startstall
#define M2C_CODE_EQUATE_startstall 1
static const dd kstartstall = (m2c::near_offset_external(::startstall));
#endif
#ifndef M2C_CODE_EQUATE_spinflag
#define M2C_CODE_EQUATE_spinflag 1
static const dd kspinflag = (m2c::near_offset_external(::spinflag));
#endif
#ifndef M2C_CODE_EQUATE_autotrim
#define M2C_CODE_EQUATE_autotrim 1
static const dd kautotrim = (m2c::near_offset_external(::autotrim));
#endif
#ifndef M2C_CODE_EQUATE_newsector
#define M2C_CODE_EQUATE_newsector 1
static const dd knewsector = (m2c::near_offset_external(::newsector));
#endif
#ifndef M2C_CODE_EQUATE_disableinput
#define M2C_CODE_EQUATE_disableinput 1
static const dd kdisableinput = (m2c::near_offset_external(::disableinput));
#endif
#ifndef M2C_CODE_EQUATE_paused
#define M2C_CODE_EQUATE_paused 1
static const dd kpaused = (m2c::near_offset_external(::paused));
#endif
#ifndef M2C_CODE_EQUATE_hithill
#define M2C_CODE_EQUATE_hithill 1
static const dd khithill = (m2c::near_offset_external(::hithill));
#endif
#ifndef M2C_CODE_EQUATE_timer50
#define M2C_CODE_EQUATE_timer50 1
static const dd ktimer50 = (m2c::near_offset_external(::timer50));
#endif
#ifndef M2C_CODE_EQUATE_sweepactive
#define M2C_CODE_EQUATE_sweepactive 1
static const dd ksweepactive = (m2c::near_offset_external(::sweepactive));
#endif
#ifndef M2C_CODE_EQUATE_crntwingpos
#define M2C_CODE_EQUATE_crntwingpos 1
static const dd kcrntwingpos = (m2c::near_offset_external(::crntwingpos));
#endif
#ifndef M2C_CODE_EQUATE_destwingpos
#define M2C_CODE_EQUATE_destwingpos 1
static const dd kdestwingpos = (m2c::near_offset_external(::destwingpos));
#endif
#ifndef M2C_CODE_EQUATE_crntwingval
#define M2C_CODE_EQUATE_crntwingval 1
static const dd kcrntwingval = (m2c::near_offset_external(::crntwingval));
#endif
#ifndef M2C_CODE_EQUATE_destwingval
#define M2C_CODE_EQUATE_destwingval 1
static const dd kdestwingval = (m2c::near_offset_external(::destwingval));
#endif
#ifndef M2C_CODE_EQUATE_wingsetting
#define M2C_CODE_EQUATE_wingsetting 1
static const dd kwingsetting = (m2c::near_offset_external(::wingsetting));
#endif
#ifndef M2C_CODE_EQUATE_flapsactive
#define M2C_CODE_EQUATE_flapsactive 1
static const dd kflapsactive = (m2c::near_offset_external(::flapsactive));
#endif
#ifndef M2C_CODE_EQUATE_crntflappos
#define M2C_CODE_EQUATE_crntflappos 1
static const dd kcrntflappos = (m2c::near_offset_external(::crntflappos));
#endif
#ifndef M2C_CODE_EQUATE_destflappos
#define M2C_CODE_EQUATE_destflappos 1
static const dd kdestflappos = (m2c::near_offset_external(::destflappos));
#endif
#ifndef M2C_CODE_EQUATE_crntflapval
#define M2C_CODE_EQUATE_crntflapval 1
static const dd kcrntflapval = (m2c::near_offset_external(::crntflapval));
#endif
#ifndef M2C_CODE_EQUATE_destflapval
#define M2C_CODE_EQUATE_destflapval 1
static const dd kdestflapval = (m2c::near_offset_external(::destflapval));
#endif
#ifndef M2C_CODE_EQUATE_flapsetting
#define M2C_CODE_EQUATE_flapsetting 1
static const dd kflapsetting = (m2c::near_offset_external(::flapsetting));
#endif
#ifndef M2C_CODE_EQUATE_posinhibit
#define M2C_CODE_EQUATE_posinhibit 1
static const dd kposinhibit = (m2c::near_offset_external(::posinhibit));
#endif
#ifndef M2C_CODE_EQUATE_gforce
#define M2C_CODE_EQUATE_gforce 1
static const dd kgforce = (m2c::near_offset_external(::gforce));
#endif
#ifndef M2C_CODE_EQUATE_gmax
#define M2C_CODE_EQUATE_gmax 1
static const dd kgmax = (m2c::near_offset_external(::gmax));
#endif
#ifndef M2C_CODE_EQUATE_truegmax
#define M2C_CODE_EQUATE_truegmax 1
static const dd ktruegmax = (m2c::near_offset_external(::truegmax));
#endif
#ifndef M2C_CODE_EQUATE_gcoord
#define M2C_CODE_EQUATE_gcoord 1
static const dd kgcoord = (m2c::near_offset_external(::gcoord));
#endif
#ifndef M2C_CODE_EQUATE_kfs
#define M2C_CODE_EQUATE_kfs 1
static const dd kkfs = (m2c::near_offset_external(::kfs));
#endif
#ifndef M2C_CODE_EQUATE_alpha
#define M2C_CODE_EQUATE_alpha 1
static const dd kalpha = (m2c::near_offset_external(::alpha));
#endif
#ifndef M2C_CODE_EQUATE_kfsfixed
#define M2C_CODE_EQUATE_kfsfixed 1
static const dd kkfsfixed = (m2c::near_offset_external(::kfsfixed));
#endif
#ifndef M2C_CODE_EQUATE_kfssweep
#define M2C_CODE_EQUATE_kfssweep 1
static const dd kkfssweep = (m2c::near_offset_external(::kfssweep));
#endif
#ifndef M2C_CODE_EQUATE_kfsflaps
#define M2C_CODE_EQUATE_kfsflaps 1
static const dd kkfsflaps = (m2c::near_offset_external(::kfsflaps));
#endif
#ifndef M2C_CODE_EQUATE_draghi
#define M2C_CODE_EQUATE_draghi 1
static const dd kdraghi = (m2c::near_offset_external(::draghi));
#endif
#ifndef M2C_CODE_EQUATE_draglo
#define M2C_CODE_EQUATE_draglo 1
static const dd kdraglo = (m2c::near_offset_external(::draglo));
#endif
#ifndef M2C_CODE_EQUATE_drag4
#define M2C_CODE_EQUATE_drag4 1
static const dd kdrag4 = (m2c::near_offset_external(::drag4));
#endif
#ifndef M2C_CODE_EQUATE_dragcoeff
#define M2C_CODE_EQUATE_dragcoeff 1
static const dd kdragcoeff = (m2c::near_offset_external(::dragcoeff));
#endif
#ifndef M2C_CODE_EQUATE_cd0
#define M2C_CODE_EQUATE_cd0 1
static const dd kcd0 = (m2c::near_offset_external(::cd0));
#endif
#ifndef M2C_CODE_EQUATE_cl1
#define M2C_CODE_EQUATE_cl1 1
static const dd kcl1 = (m2c::near_offset_external(::cl1));
#endif
#ifndef M2C_CODE_EQUATE_ksweep
#define M2C_CODE_EQUATE_ksweep 1
static const dd kksweep = (m2c::near_offset_external(::ksweep));
#endif
#ifndef M2C_CODE_EQUATE_ksweepcl2
#define M2C_CODE_EQUATE_ksweepcl2 1
static const dd kksweepcl2 = (m2c::near_offset_external(::ksweepcl2));
#endif
#ifndef M2C_CODE_EQUATE_cd0table
#define M2C_CODE_EQUATE_cd0table 1
static const dd kcd0table = (m2c::near_offset_external(::cd0table));
#endif
#ifndef M2C_CODE_EQUATE_accel
#define M2C_CODE_EQUATE_accel 1
static const dd kaccel = (m2c::near_offset_external(::accel));
#endif
#ifndef M2C_CODE_EQUATE_vtas
#define M2C_CODE_EQUATE_vtas 1
static const dd kvtas = (m2c::near_offset_external(::vtas));
#endif
#ifndef M2C_CODE_EQUATE_vtasfine
#define M2C_CODE_EQUATE_vtasfine 1
static const dd kvtasfine = (m2c::near_offset_external(::vtasfine));
#endif
#ifndef M2C_CODE_EQUATE_vias
#define M2C_CODE_EQUATE_vias 1
static const dd kvias = (m2c::near_offset_external(::vias));
#endif
#ifndef M2C_CODE_EQUATE_vdiv
#define M2C_CODE_EQUATE_vdiv 1
static const dd kvdiv = (m2c::near_offset_external(::vdiv));
#endif
#ifndef M2C_CODE_EQUATE_vav
#define M2C_CODE_EQUATE_vav 1
static const dd kvav = (m2c::near_offset_external(::vav));
#endif
#ifndef M2C_CODE_EQUATE_vtrim
#define M2C_CODE_EQUATE_vtrim 1
static const dd kvtrim = (m2c::near_offset_external(::vtrim));
#endif
#ifndef M2C_CODE_EQUATE_zdot
#define M2C_CODE_EQUATE_zdot 1
static const dd kzdot = (m2c::near_offset_external(::zdot));
#endif
#ifndef M2C_CODE_EQUATE_vkts
#define M2C_CODE_EQUATE_vkts 1
static const dd kvkts = (m2c::near_offset_external(::vkts));
#endif
#ifndef M2C_CODE_EQUATE_mach1
#define M2C_CODE_EQUATE_mach1 1
static const dd kmach1 = (m2c::near_offset_external(::mach1));
#endif
#ifndef M2C_CODE_EQUATE_machnum
#define M2C_CODE_EQUATE_machnum 1
static const dd kmachnum = (m2c::near_offset_external(::machnum));
#endif
#ifndef M2C_CODE_EQUATE_vtrimtable
#define M2C_CODE_EQUATE_vtrimtable 1
static const dd kvtrimtable = (m2c::near_offset_external(::vtrimtable));
#endif
#ifndef M2C_CODE_EQUATE_rho
#define M2C_CODE_EQUATE_rho 1
static const dd krho = (m2c::near_offset_external(::rho));
#endif
#ifndef M2C_CODE_EQUATE_sqrtrho
#define M2C_CODE_EQUATE_sqrtrho 1
static const dd ksqrtrho = (m2c::near_offset_external(::sqrtrho));
#endif
#ifndef M2C_CODE_EQUATE_rhotable
#define M2C_CODE_EQUATE_rhotable 1
static const dd krhotable = (m2c::near_offset_external(::rhotable));
#endif
#ifndef M2C_CODE_EQUATE_sqrtrhotable
#define M2C_CODE_EQUATE_sqrtrhotable 1
static const dd ksqrtrhotable = (m2c::near_offset_external(::sqrtrhotable));
#endif
#ifndef M2C_CODE_EQUATE_xwindvtas
#define M2C_CODE_EQUATE_xwindvtas 1
static const dd kxwindvtas = (m2c::near_offset_external(::xwindvtas));
#endif
#ifndef M2C_CODE_EQUATE_xwindvaim
#define M2C_CODE_EQUATE_xwindvaim 1
static const dd kxwindvaim = (m2c::near_offset_external(::xwindvaim));
#endif
#ifndef M2C_CODE_EQUATE_xwindvfix
#define M2C_CODE_EQUATE_xwindvfix 1
static const dd kxwindvfix = (m2c::near_offset_external(::xwindvfix));
#endif
#ifndef M2C_CODE_EQUATE_xwindveff
#define M2C_CODE_EQUATE_xwindveff 1
static const dd kxwindveff = (m2c::near_offset_external(::xwindveff));
#endif
#ifndef M2C_CODE_EQUATE_xwindgust
#define M2C_CODE_EQUATE_xwindgust 1
static const dd kxwindgust = (m2c::near_offset_external(::xwindgust));
#endif
#ifndef M2C_CODE_EQUATE_xwindfade
#define M2C_CODE_EQUATE_xwindfade 1
static const dd kxwindfade = (m2c::near_offset_external(::xwindfade));
#endif
#ifndef M2C_CODE_EQUATE_xwinddxft
#define M2C_CODE_EQUATE_xwinddxft 1
static const dd kxwinddxft = (m2c::near_offset_external(::xwinddxft));
#endif
#ifndef M2C_CODE_EQUATE_xwinddxfine
#define M2C_CODE_EQUATE_xwinddxfine 1
static const dd kxwinddxfine = (m2c::near_offset_external(::xwinddxfine));
#endif
#ifndef M2C_CODE_EQUATE_xwinddyft
#define M2C_CODE_EQUATE_xwinddyft 1
static const dd kxwinddyft = (m2c::near_offset_external(::xwinddyft));
#endif
#ifndef M2C_CODE_EQUATE_xwinddyfine
#define M2C_CODE_EQUATE_xwinddyfine 1
static const dd kxwinddyfine = (m2c::near_offset_external(::xwinddyfine));
#endif
#ifndef M2C_CODE_EQUATE_xwinddirtimer
#define M2C_CODE_EQUATE_xwinddirtimer 1
static const dd kxwinddirtimer = (m2c::near_offset_external(::xwinddirtimer));
#endif
#ifndef M2C_CODE_EQUATE_kbdctrlswitch
#define M2C_CODE_EQUATE_kbdctrlswitch 1
static const dd kkbdctrlswitch = (m2c::near_offset_external(::kbdctrlswitch));
#endif
#ifndef M2C_CODE_EQUATE_kbdeleswitch
#define M2C_CODE_EQUATE_kbdeleswitch 1
static const dd kkbdeleswitch = (m2c::near_offset_external(::kbdeleswitch));
#endif
#ifndef M2C_CODE_EQUATE_kbdailswitch
#define M2C_CODE_EQUATE_kbdailswitch 1
static const dd kkbdailswitch = (m2c::near_offset_external(::kbdailswitch));
#endif
#ifndef M2C_CODE_EQUATE_elekbdrate
#define M2C_CODE_EQUATE_elekbdrate 1
static const dd kelekbdrate = (m2c::near_offset_external(::elekbdrate));
#endif
#ifndef M2C_CODE_EQUATE_ailkbdrate
#define M2C_CODE_EQUATE_ailkbdrate 1
static const dd kailkbdrate = (m2c::near_offset_external(::ailkbdrate));
#endif
#ifndef M2C_CODE_EQUATE_rudkbdrate
#define M2C_CODE_EQUATE_rudkbdrate 1
static const dd krudkbdrate = (m2c::near_offset_external(::rudkbdrate));
#endif
#ifndef M2C_CODE_EQUATE_elekbdwash
#define M2C_CODE_EQUATE_elekbdwash 1
static const dd kelekbdwash = (m2c::near_offset_external(::elekbdwash));
#endif
#ifndef M2C_CODE_EQUATE_ailkbdwash
#define M2C_CODE_EQUATE_ailkbdwash 1
static const dd kailkbdwash = (m2c::near_offset_external(::ailkbdwash));
#endif
#ifndef M2C_CODE_EQUATE_rudkbdwash
#define M2C_CODE_EQUATE_rudkbdwash 1
static const dd krudkbdwash = (m2c::near_offset_external(::rudkbdwash));
#endif
#ifndef M2C_CODE_EQUATE_oldcrsrup
#define M2C_CODE_EQUATE_oldcrsrup 1
static const dd koldcrsrup = (m2c::near_offset_external(::oldcrsrup));
#endif
#ifndef M2C_CODE_EQUATE_oldcrsrdn
#define M2C_CODE_EQUATE_oldcrsrdn 1
static const dd koldcrsrdn = (m2c::near_offset_external(::oldcrsrdn));
#endif
#ifndef M2C_CODE_EQUATE_oldcrsrlf
#define M2C_CODE_EQUATE_oldcrsrlf 1
static const dd koldcrsrlf = (m2c::near_offset_external(::oldcrsrlf));
#endif
#ifndef M2C_CODE_EQUATE_oldcrsrrt
#define M2C_CODE_EQUATE_oldcrsrrt 1
static const dd koldcrsrrt = (m2c::near_offset_external(::oldcrsrrt));
#endif
#ifndef M2C_CODE_EQUATE_oldplus
#define M2C_CODE_EQUATE_oldplus 1
static const dd koldplus = (m2c::near_offset_external(::oldplus));
#endif
#ifndef M2C_CODE_EQUATE_oldminus
#define M2C_CODE_EQUATE_oldminus 1
static const dd koldminus = (m2c::near_offset_external(::oldminus));
#endif
#ifndef M2C_CODE_EQUATE_joyeleswitch
#define M2C_CODE_EQUATE_joyeleswitch 1
static const dd kjoyeleswitch = (m2c::near_offset_external(::joyeleswitch));
#endif
#ifndef M2C_CODE_EQUATE_joyailswitch
#define M2C_CODE_EQUATE_joyailswitch 1
static const dd kjoyailswitch = (m2c::near_offset_external(::joyailswitch));
#endif
#ifndef M2C_CODE_EQUATE_autothrotdelay
#define M2C_CODE_EQUATE_autothrotdelay 1
static const dd kautothrotdelay = (m2c::near_offset_external(::autothrotdelay));
#endif
#ifndef M2C_CODE_EQUATE_tfridedelay
#define M2C_CODE_EQUATE_tfridedelay 1
static const dd ktfridedelay = (m2c::near_offset_external(::tfridedelay));
#endif
#ifndef M2C_CODE_EQUATE_autohdgdelay
#define M2C_CODE_EQUATE_autohdgdelay 1
static const dd kautohdgdelay = (m2c::near_offset_external(::autohdgdelay));
#endif
#ifndef M2C_CODE_EQUATE_autoaltdelay
#define M2C_CODE_EQUATE_autoaltdelay 1
static const dd kautoaltdelay = (m2c::near_offset_external(::autoaltdelay));
#endif
#ifndef M2C_CODE_EQUATE_joya_x
#define M2C_CODE_EQUATE_joya_x 1
static const dd kjoya_x = (m2c::near_offset_external(::joya_x));
#endif
#ifndef M2C_CODE_EQUATE_joya_y
#define M2C_CODE_EQUATE_joya_y 1
static const dd kjoya_y = (m2c::near_offset_external(::joya_y));
#endif
#ifndef M2C_CODE_EQUATE_joyb_x
#define M2C_CODE_EQUATE_joyb_x 1
static const dd kjoyb_x = (m2c::near_offset_external(::joyb_x));
#endif
#ifndef M2C_CODE_EQUATE_joyb_y
#define M2C_CODE_EQUATE_joyb_y 1
static const dd kjoyb_y = (m2c::near_offset_external(::joyb_y));
#endif
#ifndef M2C_CODE_EQUATE_oldjoya_x
#define M2C_CODE_EQUATE_oldjoya_x 1
static const dd koldjoya_x = (m2c::near_offset_external(::oldjoya_x));
#endif
#ifndef M2C_CODE_EQUATE_oldjoya_y
#define M2C_CODE_EQUATE_oldjoya_y 1
static const dd koldjoya_y = (m2c::near_offset_external(::oldjoya_y));
#endif
#ifndef M2C_CODE_EQUATE_oldjoyb_x
#define M2C_CODE_EQUATE_oldjoyb_x 1
static const dd koldjoyb_x = (m2c::near_offset_external(::oldjoyb_x));
#endif
#ifndef M2C_CODE_EQUATE_oldjoyb_y
#define M2C_CODE_EQUATE_oldjoyb_y 1
static const dd koldjoyb_y = (m2c::near_offset_external(::oldjoyb_y));
#endif
#ifndef M2C_CODE_EQUATE_kf_updateswitch
#define M2C_CODE_EQUATE_kf_updateswitch 1
static const dd kkf_updateswitch = (m2c::near_offset_external(::kf_updateswitch));
#endif
#ifndef M2C_CODE_EQUATE_kf_scanswitch
#define M2C_CODE_EQUATE_kf_scanswitch 1
static const dd kkf_scanswitch = (m2c::near_offset_external(::kf_scanswitch));
#endif
#ifndef M2C_CODE_EQUATE_kf_hudcontrast
#define M2C_CODE_EQUATE_kf_hudcontrast 1
static const dd kkf_hudcontrast = (m2c::near_offset_external(::kf_hudcontrast));
#endif
#ifndef M2C_CODE_EQUATE_kf_hudswitch
#define M2C_CODE_EQUATE_kf_hudswitch 1
static const dd kkf_hudswitch = (m2c::near_offset_external(::kf_hudswitch));
#endif
#ifndef M2C_CODE_EQUATE_kf_hudoption
#define M2C_CODE_EQUATE_kf_hudoption 1
static const dd kkf_hudoption = (m2c::near_offset_external(::kf_hudoption));
#endif
#ifndef M2C_CODE_EQUATE_kf_togglepitchcam
#define M2C_CODE_EQUATE_kf_togglepitchcam 1
static const dd kkf_togglepitchcam = (m2c::near_offset_external(::kf_togglepitchcam));
#endif
#ifndef M2C_CODE_EQUATE_kf_resettrkcam
#define M2C_CODE_EQUATE_kf_resettrkcam 1
static const dd kkf_resettrkcam = (m2c::near_offset_external(::kf_resettrkcam));
#endif
#ifndef M2C_CODE_EQUATE_kf_resetsatcam
#define M2C_CODE_EQUATE_kf_resetsatcam 1
static const dd kkf_resetsatcam = (m2c::near_offset_external(::kf_resetsatcam));
#endif
#ifndef M2C_CODE_EQUATE_kf_adjusthorizondown
#define M2C_CODE_EQUATE_kf_adjusthorizondown 1
static const dd kkf_adjusthorizondown = (m2c::near_offset_external(::kf_adjusthorizondown));
#endif
#ifndef M2C_CODE_EQUATE_kf_resetwpncam
#define M2C_CODE_EQUATE_kf_resetwpncam 1
static const dd kkf_resetwpncam = (m2c::near_offset_external(::kf_resetwpncam));
#endif
#ifndef M2C_CODE_EQUATE_kf_zoomin
#define M2C_CODE_EQUATE_kf_zoomin 1
static const dd kkf_zoomin = (m2c::near_offset_external(::kf_zoomin));
#endif
#ifndef M2C_CODE_EQUATE_kf_zoomout
#define M2C_CODE_EQUATE_kf_zoomout 1
static const dd kkf_zoomout = (m2c::near_offset_external(::kf_zoomout));
#endif
#ifndef M2C_CODE_EQUATE_kf_fastzoomin
#define M2C_CODE_EQUATE_kf_fastzoomin 1
static const dd kkf_fastzoomin = (m2c::near_offset_external(::kf_fastzoomin));
#endif
#ifndef M2C_CODE_EQUATE_kf_fastzoomout
#define M2C_CODE_EQUATE_kf_fastzoomout 1
static const dd kkf_fastzoomout = (m2c::near_offset_external(::kf_fastzoomout));
#endif
#ifndef M2C_CODE_EQUATE_kf_trackclk
#define M2C_CODE_EQUATE_kf_trackclk 1
static const dd kkf_trackclk = (m2c::near_offset_external(::kf_trackclk));
#endif
#ifndef M2C_CODE_EQUATE_kf_trackaclk
#define M2C_CODE_EQUATE_kf_trackaclk 1
static const dd kkf_trackaclk = (m2c::near_offset_external(::kf_trackaclk));
#endif
#ifndef M2C_CODE_EQUATE_kf_fasttrkclk
#define M2C_CODE_EQUATE_kf_fasttrkclk 1
static const dd kkf_fasttrkclk = (m2c::near_offset_external(::kf_fasttrkclk));
#endif
#ifndef M2C_CODE_EQUATE_kf_fasttrkaclk
#define M2C_CODE_EQUATE_kf_fasttrkaclk 1
static const dd kkf_fasttrkaclk = (m2c::near_offset_external(::kf_fasttrkaclk));
#endif
#ifndef M2C_CODE_EQUATE_kf_dispselect
#define M2C_CODE_EQUATE_kf_dispselect 1
static const dd kkf_dispselect = (m2c::near_offset_external(::kf_dispselect));
#endif
#ifndef M2C_CODE_EQUATE_kf_tab1select
#define M2C_CODE_EQUATE_kf_tab1select 1
static const dd kkf_tab1select = (m2c::near_offset_external(::kf_tab1select));
#endif
#ifndef M2C_CODE_EQUATE_kf_tab1toggle
#define M2C_CODE_EQUATE_kf_tab1toggle 1
static const dd kkf_tab1toggle = (m2c::near_offset_external(::kf_tab1toggle));
#endif
#ifndef M2C_CODE_EQUATE_kf_tab2select
#define M2C_CODE_EQUATE_kf_tab2select 1
static const dd kkf_tab2select = (m2c::near_offset_external(::kf_tab2select));
#endif
#ifndef M2C_CODE_EQUATE_kf_tab2toggle
#define M2C_CODE_EQUATE_kf_tab2toggle 1
static const dd kkf_tab2toggle = (m2c::near_offset_external(::kf_tab2toggle));
#endif
#ifndef M2C_CODE_EQUATE_kf_pilotview
#define M2C_CODE_EQUATE_kf_pilotview 1
static const dd kkf_pilotview = (m2c::near_offset_external(::kf_pilotview));
#endif
#ifndef M2C_CODE_EQUATE_kf_navigview
#define M2C_CODE_EQUATE_kf_navigview 1
static const dd kkf_navigview = (m2c::near_offset_external(::kf_navigview));
#endif
#ifndef M2C_CODE_EQUATE_kf_navigviewwithctrl
#define M2C_CODE_EQUATE_kf_navigviewwithctrl 1
static const dd kkf_navigviewwithctrl = (m2c::near_offset_external(::kf_navigviewwithctrl));
#endif
#ifndef M2C_CODE_EQUATE_kf_lviewfix
#define M2C_CODE_EQUATE_kf_lviewfix 1
static const dd kkf_lviewfix = (m2c::near_offset_external(::kf_lviewfix));
#endif
#ifndef M2C_CODE_EQUATE_kf_rviewfix
#define M2C_CODE_EQUATE_kf_rviewfix 1
static const dd kkf_rviewfix = (m2c::near_offset_external(::kf_rviewfix));
#endif
#ifndef M2C_CODE_EQUATE_kf_lviewglance
#define M2C_CODE_EQUATE_kf_lviewglance 1
static const dd kkf_lviewglance = (m2c::near_offset_external(::kf_lviewglance));
#endif
#ifndef M2C_CODE_EQUATE_kf_rviewglance
#define M2C_CODE_EQUATE_kf_rviewglance 1
static const dd kkf_rviewglance = (m2c::near_offset_external(::kf_rviewglance));
#endif
#ifndef M2C_CODE_EQUATE_kf_trackingcam
#define M2C_CODE_EQUATE_kf_trackingcam 1
static const dd kkf_trackingcam = (m2c::near_offset_external(::kf_trackingcam));
#endif
#ifndef M2C_CODE_EQUATE_kf_adjusthorizonup
#define M2C_CODE_EQUATE_kf_adjusthorizonup 1
static const dd kkf_adjusthorizonup = (m2c::near_offset_external(::kf_adjusthorizonup));
#endif
#ifndef M2C_CODE_EQUATE_kf_trackingcamup
#define M2C_CODE_EQUATE_kf_trackingcamup 1
static const dd kkf_trackingcamup = (m2c::near_offset_external(::kf_trackingcamup));
#endif
#ifndef M2C_CODE_EQUATE_kf_satellitecam
#define M2C_CODE_EQUATE_kf_satellitecam 1
static const dd kkf_satellitecam = (m2c::near_offset_external(::kf_satellitecam));
#endif
#ifndef M2C_CODE_EQUATE_kf_remoteview
#define M2C_CODE_EQUATE_kf_remoteview 1
static const dd kkf_remoteview = (m2c::near_offset_external(::kf_remoteview));
#endif
#ifndef M2C_CODE_EQUATE_kf_mapview
#define M2C_CODE_EQUATE_kf_mapview 1
static const dd kkf_mapview = (m2c::near_offset_external(::kf_mapview));
#endif
#ifndef M2C_CODE_EQUATE_kf_droneview
#define M2C_CODE_EQUATE_kf_droneview 1
static const dd kkf_droneview = (m2c::near_offset_external(::kf_droneview));
#endif
#ifndef M2C_CODE_EQUATE_kf_droneprev
#define M2C_CODE_EQUATE_kf_droneprev 1
static const dd kkf_droneprev = (m2c::near_offset_external(::kf_droneprev));
#endif
#ifndef M2C_CODE_EQUATE_kf_droneside
#define M2C_CODE_EQUATE_kf_droneside 1
static const dd kkf_droneside = (m2c::near_offset_external(::kf_droneside));
#endif
#ifndef M2C_CODE_EQUATE_kf_dronetype
#define M2C_CODE_EQUATE_kf_dronetype 1
static const dd kkf_dronetype = (m2c::near_offset_external(::kf_dronetype));
#endif
#ifndef M2C_CODE_EQUATE_kf_spectator
#define M2C_CODE_EQUATE_kf_spectator 1
static const dd kkf_spectator = (m2c::near_offset_external(::kf_spectator));
#endif
#ifndef M2C_CODE_EQUATE_kf_restorespec
#define M2C_CODE_EQUATE_kf_restorespec 1
static const dd kkf_restorespec = (m2c::near_offset_external(::kf_restorespec));
#endif
#ifndef M2C_CODE_EQUATE_kf_lookdown
#define M2C_CODE_EQUATE_kf_lookdown 1
static const dd kkf_lookdown = (m2c::near_offset_external(::kf_lookdown));
#endif
#ifndef M2C_CODE_EQUATE_kf_viewweapon
#define M2C_CODE_EQUATE_kf_viewweapon 1
static const dd kkf_viewweapon = (m2c::near_offset_external(::kf_viewweapon));
#endif
#ifndef M2C_CODE_EQUATE_kf_range
#define M2C_CODE_EQUATE_kf_range 1
static const dd kkf_range = (m2c::near_offset_external(::kf_range));
#endif
#ifndef M2C_CODE_EQUATE_kf_gndtext
#define M2C_CODE_EQUATE_kf_gndtext 1
static const dd kkf_gndtext = (m2c::near_offset_external(::kf_gndtext));
#endif
#ifndef M2C_CODE_EQUATE_kf_hilltext
#define M2C_CODE_EQUATE_kf_hilltext 1
static const dd kkf_hilltext = (m2c::near_offset_external(::kf_hilltext));
#endif
#ifndef M2C_CODE_EQUATE_kf_hilltextcancel
#define M2C_CODE_EQUATE_kf_hilltextcancel 1
static const dd kkf_hilltextcancel = (m2c::near_offset_external(::kf_hilltextcancel));
#endif
#ifndef M2C_CODE_EQUATE_kf_clouds
#define M2C_CODE_EQUATE_kf_clouds 1
static const dd kkf_clouds = (m2c::near_offset_external(::kf_clouds));
#endif
#ifndef M2C_CODE_EQUATE_kf_horizon
#define M2C_CODE_EQUATE_kf_horizon 1
static const dd kkf_horizon = (m2c::near_offset_external(::kf_horizon));
#endif
#ifndef M2C_CODE_EQUATE_kf_ironwork
#define M2C_CODE_EQUATE_kf_ironwork 1
static const dd kkf_ironwork = (m2c::near_offset_external(::kf_ironwork));
#endif
#ifndef M2C_CODE_EQUATE_kf_control
#define M2C_CODE_EQUATE_kf_control 1
static const dd kkf_control = (m2c::near_offset_external(::kf_control));
#endif
#ifndef M2C_CODE_EQUATE_kf_sound
#define M2C_CODE_EQUATE_kf_sound 1
static const dd kkf_sound = (m2c::near_offset_external(::kf_sound));
#endif
#ifndef M2C_CODE_EQUATE_kf_yaw
#define M2C_CODE_EQUATE_kf_yaw 1
static const dd kkf_yaw = (m2c::near_offset_external(::kf_yaw));
#endif
#ifndef M2C_CODE_EQUATE_kf_minimise
#define M2C_CODE_EQUATE_kf_minimise 1
static const dd kkf_minimise = (m2c::near_offset_external(::kf_minimise));
#endif
#ifndef M2C_CODE_EQUATE_kf_gear
#define M2C_CODE_EQUATE_kf_gear 1
static const dd kkf_gear = (m2c::near_offset_external(::kf_gear));
#endif
#ifndef M2C_CODE_EQUATE_kf_wheelbrakes
#define M2C_CODE_EQUATE_kf_wheelbrakes 1
static const dd kkf_wheelbrakes = (m2c::near_offset_external(::kf_wheelbrakes));
#endif
#ifndef M2C_CODE_EQUATE_kf_airbrakes
#define M2C_CODE_EQUATE_kf_airbrakes 1
static const dd kkf_airbrakes = (m2c::near_offset_external(::kf_airbrakes));
#endif
#ifndef M2C_CODE_EQUATE_kf_wingswpfwd
#define M2C_CODE_EQUATE_kf_wingswpfwd 1
static const dd kkf_wingswpfwd = (m2c::near_offset_external(::kf_wingswpfwd));
#endif
#ifndef M2C_CODE_EQUATE_kf_wingswpback
#define M2C_CODE_EQUATE_kf_wingswpback 1
static const dd kkf_wingswpback = (m2c::near_offset_external(::kf_wingswpback));
#endif
#ifndef M2C_CODE_EQUATE_kf_flapsup
#define M2C_CODE_EQUATE_kf_flapsup 1
static const dd kkf_flapsup = (m2c::near_offset_external(::kf_flapsup));
#endif
#ifndef M2C_CODE_EQUATE_kf_flapsdn
#define M2C_CODE_EQUATE_kf_flapsdn 1
static const dd kkf_flapsdn = (m2c::near_offset_external(::kf_flapsdn));
#endif
#ifndef M2C_CODE_EQUATE_kf_spils
#define M2C_CODE_EQUATE_kf_spils 1
static const dd kkf_spils = (m2c::near_offset_external(::kf_spils));
#endif
#ifndef M2C_CODE_EQUATE_kf_mfdselect
#define M2C_CODE_EQUATE_kf_mfdselect 1
static const dd kkf_mfdselect = (m2c::near_offset_external(::kf_mfdselect));
#endif
#ifndef M2C_CODE_EQUATE_kf_mfdtoggle
#define M2C_CODE_EQUATE_kf_mfdtoggle 1
static const dd kkf_mfdtoggle = (m2c::near_offset_external(::kf_mfdtoggle));
#endif
#ifndef M2C_CODE_EQUATE_kf_mapzoomin
#define M2C_CODE_EQUATE_kf_mapzoomin 1
static const dd kkf_mapzoomin = (m2c::near_offset_external(::kf_mapzoomin));
#endif
#ifndef M2C_CODE_EQUATE_kf_mapzoomout
#define M2C_CODE_EQUATE_kf_mapzoomout 1
static const dd kkf_mapzoomout = (m2c::near_offset_external(::kf_mapzoomout));
#endif
#ifndef M2C_CODE_EQUATE_kf_maporigin
#define M2C_CODE_EQUATE_kf_maporigin 1
static const dd kkf_maporigin = (m2c::near_offset_external(::kf_maporigin));
#endif
#ifndef M2C_CODE_EQUATE_kf_gndradar
#define M2C_CODE_EQUATE_kf_gndradar 1
static const dd kkf_gndradar = (m2c::near_offset_external(::kf_gndradar));
#endif
#ifndef M2C_CODE_EQUATE_kf_airradar
#define M2C_CODE_EQUATE_kf_airradar 1
static const dd kkf_airradar = (m2c::near_offset_external(::kf_airradar));
#endif
#ifndef M2C_CODE_EQUATE_kf_radaroff
#define M2C_CODE_EQUATE_kf_radaroff 1
static const dd kkf_radaroff = (m2c::near_offset_external(::kf_radaroff));
#endif
#ifndef M2C_CODE_EQUATE_kf_boresight
#define M2C_CODE_EQUATE_kf_boresight 1
static const dd kkf_boresight = (m2c::near_offset_external(::kf_boresight));
#endif
#ifndef M2C_CODE_EQUATE_kf_cycleairtgt
#define M2C_CODE_EQUATE_kf_cycleairtgt 1
static const dd kkf_cycleairtgt = (m2c::near_offset_external(::kf_cycleairtgt));
#endif
#ifndef M2C_CODE_EQUATE_kf_cancelairtgt
#define M2C_CODE_EQUATE_kf_cancelairtgt 1
static const dd kkf_cancelairtgt = (m2c::near_offset_external(::kf_cancelairtgt));
#endif
#ifndef M2C_CODE_EQUATE_kf_armgnd
#define M2C_CODE_EQUATE_kf_armgnd 1
static const dd kkf_armgnd = (m2c::near_offset_external(::kf_armgnd));
#endif
#ifndef M2C_CODE_EQUATE_kf_armair
#define M2C_CODE_EQUATE_kf_armair 1
static const dd kkf_armair = (m2c::near_offset_external(::kf_armair));
#endif
#ifndef M2C_CODE_EQUATE_kf_armoff
#define M2C_CODE_EQUATE_kf_armoff 1
static const dd kkf_armoff = (m2c::near_offset_external(::kf_armoff));
#endif
#ifndef M2C_CODE_EQUATE_kf_package
#define M2C_CODE_EQUATE_kf_package 1
static const dd kkf_package = (m2c::near_offset_external(::kf_package));
#endif
#ifndef M2C_CODE_EQUATE_kf_changearmor
#define M2C_CODE_EQUATE_kf_changearmor 1
static const dd kkf_changearmor = (m2c::near_offset_external(::kf_changearmor));
#endif
#ifndef M2C_CODE_EQUATE_kf_armorctrlshift
#define M2C_CODE_EQUATE_kf_armorctrlshift 1
static const dd kkf_armorctrlshift = (m2c::near_offset_external(::kf_armorctrlshift));
#endif
#ifndef M2C_CODE_EQUATE_kf_armorctrlalt
#define M2C_CODE_EQUATE_kf_armorctrlalt 1
static const dd kkf_armorctrlalt = (m2c::near_offset_external(::kf_armorctrlalt));
#endif
#ifndef M2C_CODE_EQUATE_kf_armordown
#define M2C_CODE_EQUATE_kf_armordown 1
static const dd kkf_armordown = (m2c::near_offset_external(::kf_armordown));
#endif
#ifndef M2C_CODE_EQUATE_kf_turnescopeon
#define M2C_CODE_EQUATE_kf_turnescopeon 1
static const dd kkf_turnescopeon = (m2c::near_offset_external(::kf_turnescopeon));
#endif
#ifndef M2C_CODE_EQUATE_kf_wpnmode
#define M2C_CODE_EQUATE_kf_wpnmode 1
static const dd kkf_wpnmode = (m2c::near_offset_external(::kf_wpnmode));
#endif
#ifndef M2C_CODE_EQUATE_kf_airweapon
#define M2C_CODE_EQUATE_kf_airweapon 1
static const dd kkf_airweapon = (m2c::near_offset_external(::kf_airweapon));
#endif
#ifndef M2C_CODE_EQUATE_kf_wpnfire
#define M2C_CODE_EQUATE_kf_wpnfire 1
static const dd kkf_wpnfire = (m2c::near_offset_external(::kf_wpnfire));
#endif
#ifndef M2C_CODE_EQUATE_kf_wpncommit
#define M2C_CODE_EQUATE_kf_wpncommit 1
static const dd kkf_wpncommit = (m2c::near_offset_external(::kf_wpncommit));
#endif
#ifndef M2C_CODE_EQUATE_kf_ecm
#define M2C_CODE_EQUATE_kf_ecm 1
static const dd kkf_ecm = (m2c::near_offset_external(::kf_ecm));
#endif
#ifndef M2C_CODE_EQUATE_kf_chaff
#define M2C_CODE_EQUATE_kf_chaff 1
static const dd kkf_chaff = (m2c::near_offset_external(::kf_chaff));
#endif
#ifndef M2C_CODE_EQUATE_kf_flare
#define M2C_CODE_EQUATE_kf_flare 1
static const dd kkf_flare = (m2c::near_offset_external(::kf_flare));
#endif
#ifndef M2C_CODE_EQUATE_kf_autocancel
#define M2C_CODE_EQUATE_kf_autocancel 1
static const dd kkf_autocancel = (m2c::near_offset_external(::kf_autocancel));
#endif
#ifndef M2C_CODE_EQUATE_kf_approach
#define M2C_CODE_EQUATE_kf_approach 1
static const dd kkf_approach = (m2c::near_offset_external(::kf_approach));
#endif
#ifndef M2C_CODE_EQUATE_kf_track
#define M2C_CODE_EQUATE_kf_track 1
static const dd kkf_track = (m2c::near_offset_external(::kf_track));
#endif
#ifndef M2C_CODE_EQUATE_kf_hold
#define M2C_CODE_EQUATE_kf_hold 1
static const dd kkf_hold = (m2c::near_offset_external(::kf_hold));
#endif
#ifndef M2C_CODE_EQUATE_kf_tfollow
#define M2C_CODE_EQUATE_kf_tfollow 1
static const dd kkf_tfollow = (m2c::near_offset_external(::kf_tfollow));
#endif
#ifndef M2C_CODE_EQUATE_kf_throttle
#define M2C_CODE_EQUATE_kf_throttle 1
static const dd kkf_throttle = (m2c::near_offset_external(::kf_throttle));
#endif
#ifndef M2C_CODE_EQUATE_kf_samlaunchertotornado
#define M2C_CODE_EQUATE_kf_samlaunchertotornado 1
static const dd kkf_samlaunchertotornado = (m2c::near_offset_external(::kf_samlaunchertotornado));
#endif
#ifndef M2C_CODE_EQUATE_kf_aaatotornadoview1
#define M2C_CODE_EQUATE_kf_aaatotornadoview1 1
static const dd kkf_aaatotornadoview1 = (m2c::near_offset_external(::kf_aaatotornadoview1));
#endif
#ifndef M2C_CODE_EQUATE_kf_aaatotornadoview2
#define M2C_CODE_EQUATE_kf_aaatotornadoview2 1
static const dd kkf_aaatotornadoview2 = (m2c::near_offset_external(::kf_aaatotornadoview2));
#endif
#ifndef M2C_CODE_EQUATE_kf_autotrim
#define M2C_CODE_EQUATE_kf_autotrim 1
static const dd kkf_autotrim = (m2c::near_offset_external(::kf_autotrim));
#endif
#ifndef M2C_CODE_EQUATE_kf_skipwaypoint
#define M2C_CODE_EQUATE_kf_skipwaypoint 1
static const dd kkf_skipwaypoint = (m2c::near_offset_external(::kf_skipwaypoint));
#endif
#ifndef M2C_CODE_EQUATE_kf_selecttgtwp
#define M2C_CODE_EQUATE_kf_selecttgtwp 1
static const dd kkf_selecttgtwp = (m2c::near_offset_external(::kf_selecttgtwp));
#endif
#ifndef M2C_CODE_EQUATE_kf_canceltgtwp
#define M2C_CODE_EQUATE_kf_canceltgtwp 1
static const dd kkf_canceltgtwp = (m2c::near_offset_external(::kf_canceltgtwp));
#endif
#ifndef M2C_CODE_EQUATE_kf_jetexttanks
#define M2C_CODE_EQUATE_kf_jetexttanks 1
static const dd kkf_jetexttanks = (m2c::near_offset_external(::kf_jetexttanks));
#endif
#ifndef M2C_CODE_EQUATE_kf_jetextstores
#define M2C_CODE_EQUATE_kf_jetextstores 1
static const dd kkf_jetextstores = (m2c::near_offset_external(::kf_jetextstores));
#endif
#ifndef M2C_CODE_EQUATE_kf_jetall
#define M2C_CODE_EQUATE_kf_jetall 1
static const dd kkf_jetall = (m2c::near_offset_external(::kf_jetall));
#endif
#ifndef M2C_CODE_EQUATE_kf_eject
#define M2C_CODE_EQUATE_kf_eject 1
static const dd kkf_eject = (m2c::near_offset_external(::kf_eject));
#endif
#ifndef M2C_CODE_EQUATE_kf_cancelattn
#define M2C_CODE_EQUATE_kf_cancelattn 1
static const dd kkf_cancelattn = (m2c::near_offset_external(::kf_cancelattn));
#endif
#ifndef M2C_CODE_EQUATE_kf_recal
#define M2C_CODE_EQUATE_kf_recal 1
static const dd kkf_recal = (m2c::near_offset_external(::kf_recal));
#endif
#ifndef M2C_CODE_EQUATE_kf_joysensnorm
#define M2C_CODE_EQUATE_kf_joysensnorm 1
static const dd kkf_joysensnorm = (m2c::near_offset_external(::kf_joysensnorm));
#endif
#ifndef M2C_CODE_EQUATE_kf_joysenshigh
#define M2C_CODE_EQUATE_kf_joysenshigh 1
static const dd kkf_joysenshigh = (m2c::near_offset_external(::kf_joysenshigh));
#endif
#ifndef M2C_CODE_EQUATE_kf_quit
#define M2C_CODE_EQUATE_kf_quit 1
static const dd kkf_quit = (m2c::near_offset_external(::kf_quit));
#endif
#ifndef M2C_CODE_EQUATE_kf_pause
#define M2C_CODE_EQUATE_kf_pause 1
static const dd kkf_pause = (m2c::near_offset_external(::kf_pause));
#endif
#ifndef M2C_CODE_EQUATE_kf_full_mfd
#define M2C_CODE_EQUATE_kf_full_mfd 1
static const dd kkf_full_mfd = (m2c::near_offset_external(::kf_full_mfd));
#endif
}
#ifndef m_mobile
#define m_mobile m2c::km_mobile
#endif
#ifndef m_view
#define m_view m2c::km_view
#endif
#ifndef m_test
#define m_test m2c::km_test
#endif
#ifndef xsec
#define xsec m2c::kxsec
#endif
#ifndef ysec
#define ysec m2c::kysec
#endif
#ifndef xft
#define xft m2c::kxft
#endif
#ifndef xfine
#define xfine m2c::kxfine
#endif
#ifndef yft
#define yft m2c::kyft
#endif
#ifndef yfine
#define yfine m2c::kyfine
#endif
#ifndef zfthi
#define zfthi m2c::kzfthi
#endif
#ifndef zftlo
#define zftlo m2c::kzftlo
#endif
#ifndef zfine
#define zfine m2c::kzfine
#endif
#ifndef modelmapindex
#define modelmapindex m2c::kmodelmapindex
#endif
#ifndef hdg
#define hdg m2c::khdg
#endif
#ifndef hfine
#define hfine m2c::khfine
#endif
#ifndef pitch
#define pitch m2c::kpitch
#endif
#ifndef pfine
#define pfine m2c::kpfine
#endif
#ifndef roll
#define roll m2c::kroll
#endif
#ifndef rfine
#define rfine m2c::krfine
#endif
#ifndef m_sinh
#define m_sinh m2c::km_sinh
#endif
#ifndef m_cosh
#define m_cosh m2c::km_cosh
#endif
#ifndef m_sinp
#define m_sinp m2c::km_sinp
#endif
#ifndef m_cosp
#define m_cosp m2c::km_cosp
#endif
#ifndef m_sinr
#define m_sinr m2c::km_sinr
#endif
#ifndef m_cosr
#define m_cosr m2c::km_cosr
#endif
#ifndef eleposn
#define eleposn m2c::keleposn
#endif
#ifndef ailposn
#define ailposn m2c::kailposn
#endif
#ifndef rudposn
#define rudposn m2c::krudposn
#endif
#ifndef hdgrate
#define hdgrate m2c::khdgrate
#endif
#ifndef pitchrate
#define pitchrate m2c::kpitchrate
#endif
#ifndef rollrate
#define rollrate m2c::krollrate
#endif
#ifndef deltahrate
#define deltahrate m2c::kdeltahrate
#endif
#ifndef deltaprate
#define deltaprate m2c::kdeltaprate
#endif
#ifndef deltarrate
#define deltarrate m2c::kdeltarrate
#endif
#ifndef elerate
#define elerate m2c::kelerate
#endif
#ifndef rudrate
#define rudrate m2c::krudrate
#endif
#ifndef elerollrate
#define elerollrate m2c::kelerollrate
#endif
#ifndef ailrollrate
#define ailrollrate m2c::kailrollrate
#endif
#ifndef rudrollrate
#define rudrollrate m2c::krudrollrate
#endif
#ifndef grate
#define grate m2c::kgrate
#endif
#ifndef pitchflip
#define pitchflip m2c::kpitchflip
#endif
#ifndef stallpitch
#define stallpitch m2c::kstallpitch
#endif
#ifndef maxpitchdown
#define maxpitchdown m2c::kmaxpitchdown
#endif
#ifndef stallrolldir
#define stallrolldir m2c::kstallrolldir
#endif
#ifndef recovery
#define recovery m2c::krecovery
#endif
#ifndef weight
#define weight m2c::kweight
#endif
#ifndef weight2
#define weight2 m2c::kweight2
#endif
#ifndef fixedweight
#define fixedweight m2c::kfixedweight
#endif
#ifndef debugweight
#define debugweight m2c::kdebugweight
#endif
#ifndef fuelwt
#define fuelwt m2c::kfuelwt
#endif
#ifndef fuelwtfine
#define fuelwtfine m2c::kfuelwtfine
#endif
#ifndef storeswt
#define storeswt m2c::kstoreswt
#endif
#ifndef throttle
#define throttle m2c::kthrottle
#endif
#ifndef throttlefine
#define throttlefine m2c::kthrottlefine
#endif
#ifndef reheat
#define reheat m2c::kreheat
#endif
#ifndef reheatfine
#define reheatfine m2c::kreheatfine
#endif
#ifndef rpm1
#define rpm1 m2c::krpm1
#endif
#ifndef rpm2
#define rpm2 m2c::krpm2
#endif
#ifndef thrust1
#define thrust1 m2c::kthrust1
#endif
#ifndef thrust2
#define thrust2 m2c::kthrust2
#endif
#ifndef thrust
#define thrust m2c::kthrust
#endif
#ifndef thrust4
#define thrust4 m2c::kthrust4
#endif
#ifndef engfire1
#define engfire1 m2c::kengfire1
#endif
#ifndef engfire2
#define engfire2 m2c::kengfire2
#endif
#ifndef engfiretimer
#define engfiretimer m2c::kengfiretimer
#endif
#ifndef fuelflow1
#define fuelflow1 m2c::kfuelflow1
#endif
#ifndef fuelflow2
#define fuelflow2 m2c::kfuelflow2
#endif
#ifndef temp1
#define temp1 m2c::ktemp1
#endif
#ifndef temp2
#define temp2 m2c::ktemp2
#endif
#ifndef dispgforce
#define dispgforce m2c::kdispgforce
#endif
#ifndef dispalpha
#define dispalpha m2c::kdispalpha
#endif
#ifndef dispzdot
#define dispzdot m2c::kdispzdot
#endif
#ifndef dispvsi
#define dispvsi m2c::kdispvsi
#endif
#ifndef dispbaralt
#define dispbaralt m2c::kdispbaralt
#endif
#ifndef disphdg
#define disphdg m2c::kdisphdg
#endif
#ifndef dispmachnum
#define dispmachnum m2c::kdispmachnum
#endif
#ifndef thrusttable
#define thrusttable m2c::kthrusttable
#endif
#ifndef gear
#define gear m2c::kgear
#endif
#ifndef geartimer
#define geartimer m2c::kgeartimer
#endif
#ifndef wheelbrakes
#define wheelbrakes m2c::kwheelbrakes
#endif
#ifndef airbrakes
#define airbrakes m2c::kairbrakes
#endif
#ifndef thrustrvrs
#define thrustrvrs m2c::kthrustrvrs
#endif
#ifndef spils
#define spils m2c::kspils
#endif
#ifndef airborne1
#define airborne1 m2c::kairborne1
#endif
#ifndef airborne2
#define airborne2 m2c::kairborne2
#endif
#ifndef touchdown
#define touchdown m2c::ktouchdown
#endif
#ifndef stallflag1
#define stallflag1 m2c::kstallflag1
#endif
#ifndef stallflag2
#define stallflag2 m2c::kstallflag2
#endif
#ifndef startstall
#define startstall m2c::kstartstall
#endif
#ifndef spinflag
#define spinflag m2c::kspinflag
#endif
#ifndef autotrim
#define autotrim m2c::kautotrim
#endif
#ifndef newsector
#define newsector m2c::knewsector
#endif
#ifndef disableinput
#define disableinput m2c::kdisableinput
#endif
#ifndef paused
#define paused m2c::kpaused
#endif
#ifndef hithill
#define hithill m2c::khithill
#endif
#ifndef timer50
#define timer50 m2c::ktimer50
#endif
#ifndef sweepactive
#define sweepactive m2c::ksweepactive
#endif
#ifndef crntwingpos
#define crntwingpos m2c::kcrntwingpos
#endif
#ifndef destwingpos
#define destwingpos m2c::kdestwingpos
#endif
#ifndef crntwingval
#define crntwingval m2c::kcrntwingval
#endif
#ifndef destwingval
#define destwingval m2c::kdestwingval
#endif
#ifndef wingsetting
#define wingsetting m2c::kwingsetting
#endif
#ifndef flapsactive
#define flapsactive m2c::kflapsactive
#endif
#ifndef crntflappos
#define crntflappos m2c::kcrntflappos
#endif
#ifndef destflappos
#define destflappos m2c::kdestflappos
#endif
#ifndef crntflapval
#define crntflapval m2c::kcrntflapval
#endif
#ifndef destflapval
#define destflapval m2c::kdestflapval
#endif
#ifndef flapsetting
#define flapsetting m2c::kflapsetting
#endif
#ifndef posinhibit
#define posinhibit m2c::kposinhibit
#endif
#ifndef gforce
#define gforce m2c::kgforce
#endif
#ifndef gmax
#define gmax m2c::kgmax
#endif
#ifndef truegmax
#define truegmax m2c::ktruegmax
#endif
#ifndef gcoord
#define gcoord m2c::kgcoord
#endif
#ifndef kfs
#define kfs m2c::kkfs
#endif
#ifndef alpha
#define alpha m2c::kalpha
#endif
#ifndef kfsfixed
#define kfsfixed m2c::kkfsfixed
#endif
#ifndef kfssweep
#define kfssweep m2c::kkfssweep
#endif
#ifndef kfsflaps
#define kfsflaps m2c::kkfsflaps
#endif
#ifndef draghi
#define draghi m2c::kdraghi
#endif
#ifndef draglo
#define draglo m2c::kdraglo
#endif
#ifndef drag4
#define drag4 m2c::kdrag4
#endif
#ifndef dragcoeff
#define dragcoeff m2c::kdragcoeff
#endif
#ifndef cd0
#define cd0 m2c::kcd0
#endif
#ifndef cl1
#define cl1 m2c::kcl1
#endif
#ifndef ksweep
#define ksweep m2c::kksweep
#endif
#ifndef ksweepcl2
#define ksweepcl2 m2c::kksweepcl2
#endif
#ifndef cd0table
#define cd0table m2c::kcd0table
#endif
#ifndef accel
#define accel m2c::kaccel
#endif
#ifndef vtas
#define vtas m2c::kvtas
#endif
#ifndef vtasfine
#define vtasfine m2c::kvtasfine
#endif
#ifndef vias
#define vias m2c::kvias
#endif
#ifndef vdiv
#define vdiv m2c::kvdiv
#endif
#ifndef vav
#define vav m2c::kvav
#endif
#ifndef vtrim
#define vtrim m2c::kvtrim
#endif
#ifndef zdot
#define zdot m2c::kzdot
#endif
#ifndef vkts
#define vkts m2c::kvkts
#endif
#ifndef mach1
#define mach1 m2c::kmach1
#endif
#ifndef machnum
#define machnum m2c::kmachnum
#endif
#ifndef vtrimtable
#define vtrimtable m2c::kvtrimtable
#endif
#ifndef rho
#define rho m2c::krho
#endif
#ifndef sqrtrho
#define sqrtrho m2c::ksqrtrho
#endif
#ifndef rhotable
#define rhotable m2c::krhotable
#endif
#ifndef sqrtrhotable
#define sqrtrhotable m2c::ksqrtrhotable
#endif
#ifndef xwindvtas
#define xwindvtas m2c::kxwindvtas
#endif
#ifndef xwindvaim
#define xwindvaim m2c::kxwindvaim
#endif
#ifndef xwindvfix
#define xwindvfix m2c::kxwindvfix
#endif
#ifndef xwindveff
#define xwindveff m2c::kxwindveff
#endif
#ifndef xwindgust
#define xwindgust m2c::kxwindgust
#endif
#ifndef xwindfade
#define xwindfade m2c::kxwindfade
#endif
#ifndef xwinddxft
#define xwinddxft m2c::kxwinddxft
#endif
#ifndef xwinddxfine
#define xwinddxfine m2c::kxwinddxfine
#endif
#ifndef xwinddyft
#define xwinddyft m2c::kxwinddyft
#endif
#ifndef xwinddyfine
#define xwinddyfine m2c::kxwinddyfine
#endif
#ifndef xwinddirtimer
#define xwinddirtimer m2c::kxwinddirtimer
#endif
#ifndef kbdctrlswitch
#define kbdctrlswitch m2c::kkbdctrlswitch
#endif
#ifndef kbdeleswitch
#define kbdeleswitch m2c::kkbdeleswitch
#endif
#ifndef kbdailswitch
#define kbdailswitch m2c::kkbdailswitch
#endif
#ifndef elekbdrate
#define elekbdrate m2c::kelekbdrate
#endif
#ifndef ailkbdrate
#define ailkbdrate m2c::kailkbdrate
#endif
#ifndef rudkbdrate
#define rudkbdrate m2c::krudkbdrate
#endif
#ifndef elekbdwash
#define elekbdwash m2c::kelekbdwash
#endif
#ifndef ailkbdwash
#define ailkbdwash m2c::kailkbdwash
#endif
#ifndef rudkbdwash
#define rudkbdwash m2c::krudkbdwash
#endif
#ifndef oldcrsrup
#define oldcrsrup m2c::koldcrsrup
#endif
#ifndef oldcrsrdn
#define oldcrsrdn m2c::koldcrsrdn
#endif
#ifndef oldcrsrlf
#define oldcrsrlf m2c::koldcrsrlf
#endif
#ifndef oldcrsrrt
#define oldcrsrrt m2c::koldcrsrrt
#endif
#ifndef oldplus
#define oldplus m2c::koldplus
#endif
#ifndef oldminus
#define oldminus m2c::koldminus
#endif
#ifndef joyeleswitch
#define joyeleswitch m2c::kjoyeleswitch
#endif
#ifndef joyailswitch
#define joyailswitch m2c::kjoyailswitch
#endif
#ifndef autothrotdelay
#define autothrotdelay m2c::kautothrotdelay
#endif
#ifndef tfridedelay
#define tfridedelay m2c::ktfridedelay
#endif
#ifndef autohdgdelay
#define autohdgdelay m2c::kautohdgdelay
#endif
#ifndef autoaltdelay
#define autoaltdelay m2c::kautoaltdelay
#endif
#ifndef joya_x
#define joya_x m2c::kjoya_x
#endif
#ifndef joya_y
#define joya_y m2c::kjoya_y
#endif
#ifndef joyb_x
#define joyb_x m2c::kjoyb_x
#endif
#ifndef joyb_y
#define joyb_y m2c::kjoyb_y
#endif
#ifndef oldjoya_x
#define oldjoya_x m2c::koldjoya_x
#endif
#ifndef oldjoya_y
#define oldjoya_y m2c::koldjoya_y
#endif
#ifndef oldjoyb_x
#define oldjoyb_x m2c::koldjoyb_x
#endif
#ifndef oldjoyb_y
#define oldjoyb_y m2c::koldjoyb_y
#endif
#ifndef kf_updateswitch
#define kf_updateswitch m2c::kkf_updateswitch
#endif
#ifndef kf_scanswitch
#define kf_scanswitch m2c::kkf_scanswitch
#endif
#ifndef kf_hudcontrast
#define kf_hudcontrast m2c::kkf_hudcontrast
#endif
#ifndef kf_hudswitch
#define kf_hudswitch m2c::kkf_hudswitch
#endif
#ifndef kf_hudoption
#define kf_hudoption m2c::kkf_hudoption
#endif
#ifndef kf_togglepitchcam
#define kf_togglepitchcam m2c::kkf_togglepitchcam
#endif
#ifndef kf_resettrkcam
#define kf_resettrkcam m2c::kkf_resettrkcam
#endif
#ifndef kf_resetsatcam
#define kf_resetsatcam m2c::kkf_resetsatcam
#endif
#ifndef kf_adjusthorizondown
#define kf_adjusthorizondown m2c::kkf_adjusthorizondown
#endif
#ifndef kf_resetwpncam
#define kf_resetwpncam m2c::kkf_resetwpncam
#endif
#ifndef kf_zoomin
#define kf_zoomin m2c::kkf_zoomin
#endif
#ifndef kf_zoomout
#define kf_zoomout m2c::kkf_zoomout
#endif
#ifndef kf_fastzoomin
#define kf_fastzoomin m2c::kkf_fastzoomin
#endif
#ifndef kf_fastzoomout
#define kf_fastzoomout m2c::kkf_fastzoomout
#endif
#ifndef kf_trackclk
#define kf_trackclk m2c::kkf_trackclk
#endif
#ifndef kf_trackaclk
#define kf_trackaclk m2c::kkf_trackaclk
#endif
#ifndef kf_fasttrkclk
#define kf_fasttrkclk m2c::kkf_fasttrkclk
#endif
#ifndef kf_fasttrkaclk
#define kf_fasttrkaclk m2c::kkf_fasttrkaclk
#endif
#ifndef kf_dispselect
#define kf_dispselect m2c::kkf_dispselect
#endif
#ifndef kf_tab1select
#define kf_tab1select m2c::kkf_tab1select
#endif
#ifndef kf_tab1toggle
#define kf_tab1toggle m2c::kkf_tab1toggle
#endif
#ifndef kf_tab2select
#define kf_tab2select m2c::kkf_tab2select
#endif
#ifndef kf_tab2toggle
#define kf_tab2toggle m2c::kkf_tab2toggle
#endif
#ifndef kf_pilotview
#define kf_pilotview m2c::kkf_pilotview
#endif
#ifndef kf_navigview
#define kf_navigview m2c::kkf_navigview
#endif
#ifndef kf_navigviewwithctrl
#define kf_navigviewwithctrl m2c::kkf_navigviewwithctrl
#endif
#ifndef kf_lviewfix
#define kf_lviewfix m2c::kkf_lviewfix
#endif
#ifndef kf_rviewfix
#define kf_rviewfix m2c::kkf_rviewfix
#endif
#ifndef kf_lviewglance
#define kf_lviewglance m2c::kkf_lviewglance
#endif
#ifndef kf_rviewglance
#define kf_rviewglance m2c::kkf_rviewglance
#endif
#ifndef kf_trackingcam
#define kf_trackingcam m2c::kkf_trackingcam
#endif
#ifndef kf_adjusthorizonup
#define kf_adjusthorizonup m2c::kkf_adjusthorizonup
#endif
#ifndef kf_trackingcamup
#define kf_trackingcamup m2c::kkf_trackingcamup
#endif
#ifndef kf_satellitecam
#define kf_satellitecam m2c::kkf_satellitecam
#endif
#ifndef kf_remoteview
#define kf_remoteview m2c::kkf_remoteview
#endif
#ifndef kf_mapview
#define kf_mapview m2c::kkf_mapview
#endif
#ifndef kf_droneview
#define kf_droneview m2c::kkf_droneview
#endif
#ifndef kf_droneprev
#define kf_droneprev m2c::kkf_droneprev
#endif
#ifndef kf_droneside
#define kf_droneside m2c::kkf_droneside
#endif
#ifndef kf_dronetype
#define kf_dronetype m2c::kkf_dronetype
#endif
#ifndef kf_spectator
#define kf_spectator m2c::kkf_spectator
#endif
#ifndef kf_restorespec
#define kf_restorespec m2c::kkf_restorespec
#endif
#ifndef kf_lookdown
#define kf_lookdown m2c::kkf_lookdown
#endif
#ifndef kf_viewweapon
#define kf_viewweapon m2c::kkf_viewweapon
#endif
#ifndef kf_range
#define kf_range m2c::kkf_range
#endif
#ifndef kf_gndtext
#define kf_gndtext m2c::kkf_gndtext
#endif
#ifndef kf_hilltext
#define kf_hilltext m2c::kkf_hilltext
#endif
#ifndef kf_hilltextcancel
#define kf_hilltextcancel m2c::kkf_hilltextcancel
#endif
#ifndef kf_clouds
#define kf_clouds m2c::kkf_clouds
#endif
#ifndef kf_horizon
#define kf_horizon m2c::kkf_horizon
#endif
#ifndef kf_ironwork
#define kf_ironwork m2c::kkf_ironwork
#endif
#ifndef kf_control
#define kf_control m2c::kkf_control
#endif
#ifndef kf_sound
#define kf_sound m2c::kkf_sound
#endif
#ifndef kf_yaw
#define kf_yaw m2c::kkf_yaw
#endif
#ifndef kf_minimise
#define kf_minimise m2c::kkf_minimise
#endif
#ifndef kf_gear
#define kf_gear m2c::kkf_gear
#endif
#ifndef kf_wheelbrakes
#define kf_wheelbrakes m2c::kkf_wheelbrakes
#endif
#ifndef kf_airbrakes
#define kf_airbrakes m2c::kkf_airbrakes
#endif
#ifndef kf_wingswpfwd
#define kf_wingswpfwd m2c::kkf_wingswpfwd
#endif
#ifndef kf_wingswpback
#define kf_wingswpback m2c::kkf_wingswpback
#endif
#ifndef kf_flapsup
#define kf_flapsup m2c::kkf_flapsup
#endif
#ifndef kf_flapsdn
#define kf_flapsdn m2c::kkf_flapsdn
#endif
#ifndef kf_spils
#define kf_spils m2c::kkf_spils
#endif
#ifndef kf_mfdselect
#define kf_mfdselect m2c::kkf_mfdselect
#endif
#ifndef kf_mfdtoggle
#define kf_mfdtoggle m2c::kkf_mfdtoggle
#endif
#ifndef kf_mapzoomin
#define kf_mapzoomin m2c::kkf_mapzoomin
#endif
#ifndef kf_mapzoomout
#define kf_mapzoomout m2c::kkf_mapzoomout
#endif
#ifndef kf_maporigin
#define kf_maporigin m2c::kkf_maporigin
#endif
#ifndef kf_gndradar
#define kf_gndradar m2c::kkf_gndradar
#endif
#ifndef kf_airradar
#define kf_airradar m2c::kkf_airradar
#endif
#ifndef kf_radaroff
#define kf_radaroff m2c::kkf_radaroff
#endif
#ifndef kf_boresight
#define kf_boresight m2c::kkf_boresight
#endif
#ifndef kf_cycleairtgt
#define kf_cycleairtgt m2c::kkf_cycleairtgt
#endif
#ifndef kf_cancelairtgt
#define kf_cancelairtgt m2c::kkf_cancelairtgt
#endif
#ifndef kf_armgnd
#define kf_armgnd m2c::kkf_armgnd
#endif
#ifndef kf_armair
#define kf_armair m2c::kkf_armair
#endif
#ifndef kf_armoff
#define kf_armoff m2c::kkf_armoff
#endif
#ifndef kf_package
#define kf_package m2c::kkf_package
#endif
#ifndef kf_changearmor
#define kf_changearmor m2c::kkf_changearmor
#endif
#ifndef kf_armorctrlshift
#define kf_armorctrlshift m2c::kkf_armorctrlshift
#endif
#ifndef kf_armorctrlalt
#define kf_armorctrlalt m2c::kkf_armorctrlalt
#endif
#ifndef kf_armordown
#define kf_armordown m2c::kkf_armordown
#endif
#ifndef kf_turnescopeon
#define kf_turnescopeon m2c::kkf_turnescopeon
#endif
#ifndef kf_wpnmode
#define kf_wpnmode m2c::kkf_wpnmode
#endif
#ifndef kf_airweapon
#define kf_airweapon m2c::kkf_airweapon
#endif
#ifndef kf_wpnfire
#define kf_wpnfire m2c::kkf_wpnfire
#endif
#ifndef kf_wpncommit
#define kf_wpncommit m2c::kkf_wpncommit
#endif
#ifndef kf_ecm
#define kf_ecm m2c::kkf_ecm
#endif
#ifndef kf_chaff
#define kf_chaff m2c::kkf_chaff
#endif
#ifndef kf_flare
#define kf_flare m2c::kkf_flare
#endif
#ifndef kf_autocancel
#define kf_autocancel m2c::kkf_autocancel
#endif
#ifndef kf_approach
#define kf_approach m2c::kkf_approach
#endif
#ifndef kf_track
#define kf_track m2c::kkf_track
#endif
#ifndef kf_hold
#define kf_hold m2c::kkf_hold
#endif
#ifndef kf_tfollow
#define kf_tfollow m2c::kkf_tfollow
#endif
#ifndef kf_throttle
#define kf_throttle m2c::kkf_throttle
#endif
#ifndef kf_samlaunchertotornado
#define kf_samlaunchertotornado m2c::kkf_samlaunchertotornado
#endif
#ifndef kf_aaatotornadoview1
#define kf_aaatotornadoview1 m2c::kkf_aaatotornadoview1
#endif
#ifndef kf_aaatotornadoview2
#define kf_aaatotornadoview2 m2c::kkf_aaatotornadoview2
#endif
#ifndef kf_autotrim
#define kf_autotrim m2c::kkf_autotrim
#endif
#ifndef kf_skipwaypoint
#define kf_skipwaypoint m2c::kkf_skipwaypoint
#endif
#ifndef kf_selecttgtwp
#define kf_selecttgtwp m2c::kkf_selecttgtwp
#endif
#ifndef kf_canceltgtwp
#define kf_canceltgtwp m2c::kkf_canceltgtwp
#endif
#ifndef kf_jetexttanks
#define kf_jetexttanks m2c::kkf_jetexttanks
#endif
#ifndef kf_jetextstores
#define kf_jetextstores m2c::kkf_jetextstores
#endif
#ifndef kf_jetall
#define kf_jetall m2c::kkf_jetall
#endif
#ifndef kf_eject
#define kf_eject m2c::kkf_eject
#endif
#ifndef kf_cancelattn
#define kf_cancelattn m2c::kkf_cancelattn
#endif
#ifndef kf_recal
#define kf_recal m2c::kkf_recal
#endif
#ifndef kf_joysensnorm
#define kf_joysensnorm m2c::kkf_joysensnorm
#endif
#ifndef kf_joysenshigh
#define kf_joysenshigh m2c::kkf_joysenshigh
#endif
#ifndef kf_quit
#define kf_quit m2c::kkf_quit
#endif
#ifndef kf_pause
#define kf_pause m2c::kkf_pause
#endif
#ifndef kf_full_mfd
#define kf_full_mfd m2c::kkf_full_mfd
#endif



#endif

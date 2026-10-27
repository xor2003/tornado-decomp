#ifndef __M2C_WEAPONS_DATA_H__
#define __M2C_WEAPONS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& packageptr;
extern dw& loftclock;
extern dw& loftratio;
extern db& rwrtgtvalid;
extern dw& airtgtptr;
extern dw& missiletgtptr;
extern dw& airarmmode;
extern dd& airtgtrange;
extern dd& gndtgtrange;
extern dw& launchside;
extern db& irlockflag;
extern dw& impactptr;
extern db& latearmanim;
extern db& armlock;
extern dd& bombthrow;
extern dw& weaponptr;
extern dw& targetptr;
extern dw& weaponnum;
extern dw& weaponvel;
extern dw& impactsurface;
extern dd& tmprange;
extern dd& radarrange;
extern db& radarflag;
extern mobile& wpn_mobile;
extern viewpoint& wpn_view;
extern weapon& wpn_weapon;
extern dw& extstoresindex;
extern dw& dummyfe1dabda_data_69_2461;
extern dw& dummyfe1dabda_data_6b_2462;
extern dw& dummyfe1dabda_data_6d_2463;
extern dw& dummyfe1dabda_data_6f_2464;
extern dw& dummyfe1dabda_data_71_2465;
extern dw& dummyfe1dabda_data_73_2466;
extern dw& dummyfe1dabda_data_75_2467;
extern dw& dummyfe1dabda_data_77_2468;
extern dw& extweights;
extern dw& dummyfe1dabda_data_7b_2474;
extern dw& dummyfe1dabda_data_7d_2475;
extern dw& dummyfe1dabda_data_7f_2476;
extern dw& dummyfe1dabda_data_81_2477;
extern dw& dummyfe1dabda_data_83_2478;
extern dw& dummyfe1dabda_data_85_2479;
extern dw& dummyfe1dabda_data_87_2480;
extern dw& dummyfe1dabda_data_89_2481;
extern dw& dummyfe1dabda_data_8b_2482;
extern dw& dummyfe1dabda_data_8d_2483;
extern dw& jp233timer;
extern dw& cannons;
extern dw& cannonfine;
extern dw& shellkillzone;
extern db& cannonfired;
extern dw& dummyfe1dabda_data_98_2523;
extern dw& dummyfe1dabda_data_9a_2524;
extern dw& dummyfe1dabda_data_9c_2525;
extern dw& dummyfe1dabda_data_9e_2526;
extern dw& dummyfe1dabda_data_a0_2527;
extern dw& dummyfe1dabda_data_a2_2528;
extern dw& dummyfe1dabda_data_a4_2529;
extern dw& dummyfe1dabda_data_a6_2530;
extern dw& dummyfe1dabda_data_a8_2531;
extern dw& dummyfe1dabda_data_aa_2532;
extern dw& dummyfe1dabda_data_ac_2533;
extern dw& dummyfe1dabda_data_ae_2534;
extern dw& dummyfe1dabda_data_b0_2535;
extern dw& dummyfe1dabda_data_b2_2536;
extern dw& dummyfe1dabda_data_b4_2537;
extern dw& dummyfe1dabda_data_b6_2538;
extern dw& dummyfe1dabda_data_b8_2539;
extern dw& dummyfe1dabda_data_ba_2540;
extern dw& dummyfe1dabda_data_bc_2541;
extern dw& dummyfe1dabda_data_be_2542;
extern dw& dummyfe1dabda_data_c0_2543;
extern dw& dummyfe1dabda_data_c2_2544;
extern dw& dummyfe1dabda_data_c4_2545;
extern dw& dummyfe1dabda_data_c6_2546;
extern dw& dummyfe1dabda_data_c8_2547;
extern dw& dummyfe1dabda_data_ca_2548;
extern dw& dummyfe1dabda_data_cc_2549;
extern dw& dummyfe1dabda_data_ce_2550;
extern dw& dummyfe1dabda_data_d0_2551;
extern dw& dummyfe1dabda_data_d2_2552;
extern dw& dummyfe1dabda_data_d4_2553;
extern dw& dummyfe1dabda_data_d6_2554;
extern dw& dummyfe1dabda_data_d8_2555;
extern dw& dummyfe1dabda_data_da_2556;
extern dw& dummyfe1dabda_data_dc_2557;
extern dw& dummyfe1dabda_data_de_2558;
extern dw& dummyfe1dabda_data_e0_2559;
extern dw& dummyfe1dabda_data_e2_2570;
extern dw& dummyfe1dabda_data_e4_2571;
extern dw& dummyfe1dabda_data_e6_2572;
extern dw& dummyfe1dabda_data_e8_2573;
extern dw& dummyfe1dabda_data_ea_2574;
extern dw& dummyfe1dabda_data_ec_2575;
extern dw& dummyfe1dabda_data_ee_2576;
extern dw& dummyfe1dabda_data_f0_2577;
extern dw& dummyfe1dabda_data_f2_2578;
extern dw& dummyfe1dabda_data_f4_2579;
extern dw& dummyfe1dabda_data_f6_2580;
extern dw& dummyfe1dabda_data_f8_2581;
extern dw& dummyfe1dabda_data_fa_2582;
extern dw& dummyfe1dabda_data_fc_2583;
extern dw& dummyfe1dabda_data_fe_2584;
extern dw& dummyfe1dabda_data_100_2585;
extern dw& dummyfe1dabda_data_102_2586;
extern dw& dummyfe1dabda_data_104_2587;
extern dw& dummyfe1dabda_data_106_2588;
extern dw& dummyfe1dabda_data_108_2589;
extern dw& dummyfe1dabda_data_10a_2590;
extern dw& dummyfe1dabda_data_10c_2591;
extern dw& dummyfe1dabda_data_10e_2592;
extern dw& dummyfe1dabda_data_110_2593;
extern dw& dummyfe1dabda_data_112_2594;
extern dw& dummyfe1dabda_data_114_2595;
extern dw& dummyfe1dabda_data_116_2596;
extern dw& dummyfe1dabda_data_118_2597;
extern dw& dummyfe1dabda_data_11a_2598;
extern dw& dummyfe1dabda_data_11c_2599;
extern dw& dummyfe1dabda_data_11e_2600;
extern dw& dummyfe1dabda_data_120_2601;
extern dw& dummyfe1dabda_data_122_2602;
extern dw& dummyfe1dabda_data_124_2603;
extern dw& dummyfe1dabda_data_126_2604;
extern dw& dummyfe1dabda_data_128_2605;
extern dw& dummyfe1dabda_data_12a_2606;
extern dw& dummyfe1dabda_data_12c_2626;
extern dw& dummyfe1dabda_data_12e_2627;
extern dw& dummyfe1dabda_data_130_2628;
extern dw& dummyfe1dabda_data_132_2629;
extern dw& dummyfe1dabda_data_134_2630;
extern dw& dummyfe1dabda_data_136_2631;
extern dw& dummyfe1dabda_data_138_2632;
extern dw& dummyfe1dabda_data_13a_2633;
extern dw& dummyfe1dabda_data_13c_2634;
extern dw& dummyfe1dabda_data_13e_2635;
extern dw& dummyfe1dabda_data_140_2636;
extern dw& dummyfe1dabda_data_142_2637;
extern dw& dummyfe1dabda_data_144_2638;
extern dw& dummyfe1dabda_data_146_2639;
extern dw& dummyfe1dabda_data_148_2640;
extern dw& dummyfe1dabda_data_14a_2641;
extern dw& dummyfe1dabda_data_14c_2642;
extern dw& dummyfe1dabda_data_14e_2643;
extern dw& dummyfe1dabda_data_150_2644;
extern dw& dummyfe1dabda_data_152_2645;
extern dw& dummyfe1dabda_data_154_2646;
extern dw& dummyfe1dabda_data_156_2647;
extern dw& dummyfe1dabda_data_158_2648;
extern dw& dummyfe1dabda_data_15a_2649;
extern dw& dummyfe1dabda_data_15c_2650;
extern dw& dummyfe1dabda_data_15e_2651;
extern dw& dummyfe1dabda_data_160_2652;
extern dw& dummyfe1dabda_data_162_2653;
extern dw& dummyfe1dabda_data_164_2654;
extern dw& dummyfe1dabda_data_166_2655;
extern dw& dummyfe1dabda_data_168_2656;
extern dw& dummyfe1dabda_data_16a_2657;
extern dw& dummyfe1dabda_data_16c_2658;
extern dw& dummyfe1dabda_data_16e_2659;
extern dw& dummyfe1dabda_data_170_2660;
extern dw& dummyfe1dabda_data_172_2661;
extern dw& dummyfe1dabda_data_174_2662;
extern dw& alarmmode;
extern dw& dummyfe1dabda_data_178_2666;
extern dw& dummyfe1dabda_data_17a_2667;
extern dw& dummyfe1dabda_data_17c_2668;
extern dw& dummyfe1dabda_data_17e_2669;
extern dw& dummyfe1dabda_data_180_2670;
extern dw& dummyfe1dabda_data_182_2671;
extern dw& dummyfe1dabda_data_184_2693;
extern dw& dummyfe1dabda_data_186_2694;
extern dw& dummyfe1dabda_data_188_2695;
extern dw& dummyfe1dabda_data_18a_2696;
extern dw& dummyfe1dabda_data_18c_2697;
extern dw& dummyfe1dabda_data_18e_2698;
extern dw& dummyfe1dabda_data_190_2699;
extern dw& dummyfe1dabda_data_192_2700;
extern dw& dummyfe1dabda_data_194_2701;
extern dw& dummyfe1dabda_data_196_2702;
extern dw& dummyfe1dabda_data_198_2703;
extern dw& dummyfe1dabda_data_19a_2704;
extern dw& dummyfe1dabda_data_19c_2705;
extern dw& dummyfe1dabda_data_19e_2706;
extern dw& dummyfe1dabda_data_1a0_2707;
extern dw& dummyfe1dabda_data_1a2_2708;
extern dw& dummyfe1dabda_data_1a4_2709;
extern dw& dummyfe1dabda_data_1a6_2710;
extern dw& dummyfe1dabda_data_1a8_2711;
extern dw& dummyfe1dabda_data_1aa_2712;
extern dw& dummyfe1dabda_data_1ac_2713;
extern dw& dummyfe1dabda_data_1ae_2714;
extern dw& dummyfe1dabda_data_1b0_2715;
extern dw& dummyfe1dabda_data_1b2_2716;
extern dw& dummyfe1dabda_data_1b4_2717;
extern dw& dummyfe1dabda_data_1b6_2718;
extern dw& dummyfe1dabda_data_1b8_2719;
extern dw& dummyfe1dabda_data_1ba_2720;
extern dw& dummyfe1dabda_data_1bc_2721;
extern dw& dummyfe1dabda_data_1be_2722;
extern dw& dummyfe1dabda_data_1c0_2723;
extern dw& dummyfe1dabda_data_1c2_2724;
extern dw& dummyfe1dabda_data_1c4_2725;
extern dw& dummyfe1dabda_data_1c6_2726;
extern dw& dummyfe1dabda_data_1c8_2727;
extern dw& dummyfe1dabda_data_1ca_2728;
extern dw& dummyfe1dabda_data_1cc_2729;
extern db& ecmfitted;
extern db& ecmactive;
extern dw& chaffcntr;
extern dw& flarecntr;
extern db& relchaff;
extern db& relflare;
extern db& objectnum;
extern db& dummyfe1dabda_data_1d7_2753;
extern db& dummyfe1dabda_data_1d8_2754;
extern db& dummyfe1dabda_data_1d9_2755;
extern db& dummyfe1dabda_data_1da_2756;
extern db& dummyfe1dabda_data_1db_2757;
extern db& dummyfe1dabda_data_1dc_2758;
extern db& dummyfe1dabda_data_1dd_2759;
extern db& dummyfe1dabda_data_1de_2760;
extern db& dummyfe1dabda_data_1df_2761;
extern db& dummyfe1dabda_data_1e0_2762;
extern db& dummyfe1dabda_data_1e1_2763;
extern db& dummyfe1dabda_data_1e2_2764;
extern db& dummyfe1dabda_data_1e3_2765;
extern dw& updateoneweapon;
extern dw& dummyfe1dabda_data_1e6_2772;
extern dw& dummyfe1dabda_data_1e8_2773;
extern dw& dummyfe1dabda_data_1ea_2774;
extern dw& dummyfe1dabda_data_1ec_2775;
extern dw& dummyfe1dabda_data_1ee_2776;
extern dw& dummyfe1dabda_data_1f0_2777;
extern dw& dummyfe1dabda_data_1f2_2778;
extern dw& dummyfe1dabda_data_1f4_2779;
extern dw& dummyfe1dabda_data_1f6_2780;
extern dw& dummyfe1dabda_data_1f8_2781;
extern dw& dummyfe1dabda_data_1fa_2782;
extern dw& dummyfe1dabda_data_1fc_2783;
extern dw& armswitch;
extern dw& dummyfe1dabda_data_200_2789;
extern dw& dummyfe1dabda_data_202_2790;
extern dw& dummyfe1dabda_data_204_2791;
extern dw& dummyfe1dabda_data_206_2792;
extern dw& dummyfe1dabda_data_208_2793;
extern dw& dummyfe1dabda_data_20a_2794;
extern dw& dummyfe1dabda_data_20c_2795;
extern dw& dummyfe1dabda_data_20e_2796;
extern dw& dummyfe1dabda_data_210_2797;
extern dw& dummyfe1dabda_data_212_2798;
extern dw& releaseweapon;
extern dw& dummyfe1dabda_data_216_2804;
extern dw& dummyfe1dabda_data_218_2805;
extern dw& dummyfe1dabda_data_21a_2806;
extern dw& dummyfe1dabda_data_21c_2807;
extern dw& safetyheights;
extern dw& dummyfe1dabda_data_220_2813;
extern dw& dummyfe1dabda_data_222_2814;
extern dw& dummyfe1dabda_data_224_2815;
extern dw& dummyfe1dabda_data_226_2816;
extern dw& retardfactors;
extern dw& dummyfe1dabda_data_22a_2822;
extern dw& dummyfe1dabda_data_22c_2823;
extern dw& dummyfe1dabda_data_22e_2824;
extern dw& dummyfe1dabda_data_230_2825;
extern db& cratersize;
extern db& dummyfe1dabda_data_233_2831;
extern db& dummyfe1dabda_data_234_2832;
extern db& dummyfe1dabda_data_235_2833;
extern db& dummyfe1dabda_data_236_2834;
extern db& dummyfe1dabda_data_237_2835;
extern db& dummyfe1dabda_data_238_2836;
extern db& dummyfe1dabda_data_239_2837;
extern db& dummyfe1dabda_data_23a_2838;
extern db& dummyfe1dabda_data_23b_2839;
extern db& dummyfe1dabda_data_23c_2840;
extern db& dummyfe1dabda_data_23d_2841;
extern db& dummyfe1dabda_data_23e_2842;
extern dw& cratersmoke;
extern dw& dummyfe1dabda_data_241_2850;
extern dw& dummyfe1dabda_data_243_2851;
extern dw& dummyfe1dabda_data_245_2852;
extern dw& dummyfe1dabda_data_247_2853;
extern dw& dummyfe1dabda_data_249_2854;
extern dw& dummyfe1dabda_data_24b_2855;
extern dw& dummyfe1dabda_data_24d_2856;
extern dw& dummyfe1dabda_data_24f_2857;
extern dw& dummyfe1dabda_data_251_2858;
extern dw& dummyfe1dabda_data_253_2859;
extern dw& dummyfe1dabda_data_255_2860;
extern dw& dummyfe1dabda_data_257_2861;
extern db& tornadowpndie;
extern db& dummyfe1dabda_data_25a_2867;
extern db& dummyfe1dabda_data_25b_2868;
extern db& dummyfe1dabda_data_25c_2869;
extern db& dummyfe1dabda_data_25d_2870;
extern db& dummyfe1dabda_data_25e_2871;
extern db& dummyfe1dabda_data_25f_2872;
extern db& dummyfe1dabda_data_260_2873;
extern db& dummyfe1dabda_data_261_2874;
extern db& dummyfe1dabda_data_262_2875;
extern db& dummyfe1dabda_data_263_2876;
extern db& dummyfe1dabda_data_264_2877;
extern db& dummyfe1dabda_data_265_2878;
extern db& weaponeffect;
extern db& dummyfe1dabda_data_267_2886;
extern db& dummyfe1dabda_data_268_2887;
extern db& dummyfe1dabda_data_269_2888;
extern db& dummyfe1dabda_data_26a_2889;
extern db& dummyfe1dabda_data_26b_2890;
extern db& dummyfe1dabda_data_26c_2891;
extern db& dummyfe1dabda_data_26d_2892;
extern db& dummyfe1dabda_data_26e_2893;
extern db& dummyfe1dabda_data_26f_2894;
extern db& dummyfe1dabda_data_270_2895;
extern db& dummyfe1dabda_data_271_2896;
extern db& dummyfe1dabda_data_272_2897;
extern dw& weaponradius;
extern dw& dummyfe1dabda_data_275_2905;
extern dw& dummyfe1dabda_data_277_2906;
extern dw& dummyfe1dabda_data_279_2907;
extern dw& dummyfe1dabda_data_27b_2908;
extern dw& dummyfe1dabda_data_27d_2909;
extern dw& dummyfe1dabda_data_27f_2910;
extern dw& dummyfe1dabda_data_281_2911;
extern dw& dummyfe1dabda_data_283_2912;
extern dw& dummyfe1dabda_data_285_2913;
extern dw& dummyfe1dabda_data_287_2914;
extern dw& dummyfe1dabda_data_289_2916;
extern dw& dummyfe1dabda_data_28b_2917;
extern dw& weaponhemi;
extern dw& dummyfe1dabda_data_28f_2925;
extern dw& dummyfe1dabda_data_291_2926;
extern dw& dummyfe1dabda_data_293_2927;
extern dw& dummyfe1dabda_data_295_2928;
extern dw& dummyfe1dabda_data_297_2929;
extern dw& dummyfe1dabda_data_299_2930;
extern dw& dummyfe1dabda_data_29b_2931;
extern dw& dummyfe1dabda_data_29d_2932;
extern dw& dummyfe1dabda_data_29f_2933;
extern dw& dummyfe1dabda_data_2a1_2934;
extern dw& dummyfe1dabda_data_2a3_2935;
extern dw& dummyfe1dabda_data_2a5_2936;
extern db& debristype;
extern db& dummyfe1dabda_data_2a8_2942;
extern db& dummyfe1dabda_data_2a9_2943;
extern db& dummyfe1dabda_data_2aa_2944;
extern db& dummyfe1dabda_data_2ab_2945;
extern db& dummyfe1dabda_data_2ac_2946;
extern db& dummyfe1dabda_data_2ad_2947;
extern db& dummyfe1dabda_data_2ae_2948;
extern viewpoint& tgt_view;
extern viewpoint& ccip_view;
extern byte& wpn_workspace;
extern word& sidedeceltime;
extern word& skydeceltime;
extern word& alarmdeceltime;
extern word& samdeceltime;
extern db& wpndata;
extern mobile& __m2c_structrow_fe1dabda_2964;
extern viewpoint& __m2c_structrow_fe1dabda_2965;
extern weapon& __m2c_structrow_fe1dabda_2966;
extern mobile& __m2c_structrow_fe1dabda_2969;
extern viewpoint& __m2c_structrow_fe1dabda_2970;
extern weapon& __m2c_structrow_fe1dabda_2971;
extern mobile& __m2c_structrow_fe1dabda_2974;
extern viewpoint& __m2c_structrow_fe1dabda_2975;
extern weapon& __m2c_structrow_fe1dabda_2976;
extern mobile& __m2c_structrow_fe1dabda_2979;
extern viewpoint& __m2c_structrow_fe1dabda_2980;
extern weapon& __m2c_structrow_fe1dabda_2981;
extern mobile& __m2c_structrow_fe1dabda_2984;
extern viewpoint& __m2c_structrow_fe1dabda_2985;
extern weapon& __m2c_structrow_fe1dabda_2986;
extern mobile& __m2c_structrow_fe1dabda_2989;
extern viewpoint& __m2c_structrow_fe1dabda_2990;
extern weapon& __m2c_structrow_fe1dabda_2991;
extern mobile& __m2c_structrow_fe1dabda_2994;
extern viewpoint& __m2c_structrow_fe1dabda_2995;
extern weapon& __m2c_structrow_fe1dabda_2996;
extern mobile& __m2c_structrow_fe1dabda_2999;
extern viewpoint& __m2c_structrow_fe1dabda_3000;
extern weapon& __m2c_structrow_fe1dabda_3001;
extern mobile& __m2c_structrow_fe1dabda_3004;
extern viewpoint& __m2c_structrow_fe1dabda_3005;
extern weapon& __m2c_structrow_fe1dabda_3006;
extern mobile& __m2c_structrow_fe1dabda_3009;
extern viewpoint& __m2c_structrow_fe1dabda_3010;
extern weapon& __m2c_structrow_fe1dabda_3011;
extern mobile& __m2c_structrow_fe1dabda_3014;
extern viewpoint& __m2c_structrow_fe1dabda_3015;
extern weapon& __m2c_structrow_fe1dabda_3016;
extern mobile& __m2c_structrow_fe1dabda_3019;
extern viewpoint& __m2c_structrow_fe1dabda_3020;
extern weapon& __m2c_structrow_fe1dabda_3021;
extern mobile& __m2c_structrow_fe1dabda_3024;
extern viewpoint& __m2c_structrow_fe1dabda_3025;
extern weapon& __m2c_structrow_fe1dabda_3026;
extern mobile& __m2c_structrow_fe1dabda_3029;
extern viewpoint& __m2c_structrow_fe1dabda_3030;
extern weapon& __m2c_structrow_fe1dabda_3031;
extern mobile& __m2c_structrow_fe1dabda_3034;
extern viewpoint& __m2c_structrow_fe1dabda_3035;
extern weapon& __m2c_structrow_fe1dabda_3036;
extern mobile& __m2c_structrow_fe1dabda_3039;
extern viewpoint& __m2c_structrow_fe1dabda_3040;
extern weapon& __m2c_structrow_fe1dabda_3041;
extern mobile& __m2c_structrow_fe1dabda_3044;
extern viewpoint& __m2c_structrow_fe1dabda_3045;
extern weapon& __m2c_structrow_fe1dabda_3046;
extern mobile& __m2c_structrow_fe1dabda_3049;
extern viewpoint& __m2c_structrow_fe1dabda_3050;
extern weapon& __m2c_structrow_fe1dabda_3051;
extern mobile& __m2c_structrow_fe1dabda_3054;
extern viewpoint& __m2c_structrow_fe1dabda_3055;
extern weapon& __m2c_structrow_fe1dabda_3056;
extern mobile& __m2c_structrow_fe1dabda_3059;
extern viewpoint& __m2c_structrow_fe1dabda_3060;
extern weapon& __m2c_structrow_fe1dabda_3061;
extern mobile& __m2c_structrow_fe1dabda_3064;
extern viewpoint& __m2c_structrow_fe1dabda_3065;
extern weapon& __m2c_structrow_fe1dabda_3066;
extern mobile& __m2c_structrow_fe1dabda_3069;
extern viewpoint& __m2c_structrow_fe1dabda_3070;
extern weapon& __m2c_structrow_fe1dabda_3071;
extern mobile& __m2c_structrow_fe1dabda_3074;
extern viewpoint& __m2c_structrow_fe1dabda_3075;
extern weapon& __m2c_structrow_fe1dabda_3076;
extern mobile& __m2c_structrow_fe1dabda_3079;
extern viewpoint& __m2c_structrow_fe1dabda_3080;
extern weapon& __m2c_structrow_fe1dabda_3081;
extern mobile& __m2c_structrow_fe1dabda_3084;
extern viewpoint& __m2c_structrow_fe1dabda_3085;
extern weapon& __m2c_structrow_fe1dabda_3086;
extern mobile& __m2c_structrow_fe1dabda_3089;
extern viewpoint& __m2c_structrow_fe1dabda_3090;
extern weapon& __m2c_structrow_fe1dabda_3091;
extern mobile& __m2c_structrow_fe1dabda_3094;
extern viewpoint& __m2c_structrow_fe1dabda_3095;
extern weapon& __m2c_structrow_fe1dabda_3096;
extern mobile& __m2c_structrow_fe1dabda_3099;
extern viewpoint& __m2c_structrow_fe1dabda_3100;
extern weapon& __m2c_structrow_fe1dabda_3101;
extern mobile& __m2c_structrow_fe1dabda_3104;
extern viewpoint& __m2c_structrow_fe1dabda_3105;
extern weapon& __m2c_structrow_fe1dabda_3106;
extern mobile& __m2c_structrow_fe1dabda_3109;
extern viewpoint& __m2c_structrow_fe1dabda_3110;
extern weapon& __m2c_structrow_fe1dabda_3111;
extern mobile& __m2c_structrow_fe1dabda_3114;
extern viewpoint& __m2c_structrow_fe1dabda_3115;
extern weapon& __m2c_structrow_fe1dabda_3116;
extern mobile& __m2c_structrow_fe1dabda_3119;
extern viewpoint& __m2c_structrow_fe1dabda_3120;
extern weapon& __m2c_structrow_fe1dabda_3121;
extern mobile& __m2c_structrow_fe1dabda_3124;
extern viewpoint& __m2c_structrow_fe1dabda_3125;
extern weapon& __m2c_structrow_fe1dabda_3126;
extern mobile& __m2c_structrow_fe1dabda_3129;
extern viewpoint& __m2c_structrow_fe1dabda_3130;
extern weapon& __m2c_structrow_fe1dabda_3131;
extern mobile& __m2c_structrow_fe1dabda_3134;
extern viewpoint& __m2c_structrow_fe1dabda_3135;
extern weapon& __m2c_structrow_fe1dabda_3136;
extern mobile& __m2c_structrow_fe1dabda_3139;
extern viewpoint& __m2c_structrow_fe1dabda_3140;
extern weapon& __m2c_structrow_fe1dabda_3141;
extern mobile& __m2c_structrow_fe1dabda_3144;
extern viewpoint& __m2c_structrow_fe1dabda_3145;
extern weapon& __m2c_structrow_fe1dabda_3146;
extern mobile& __m2c_structrow_fe1dabda_3149;
extern viewpoint& __m2c_structrow_fe1dabda_3150;
extern weapon& __m2c_structrow_fe1dabda_3151;
extern mobile& __m2c_structrow_fe1dabda_3154;
extern viewpoint& __m2c_structrow_fe1dabda_3155;
extern weapon& __m2c_structrow_fe1dabda_3156;
extern mobile& __m2c_structrow_fe1dabda_3159;
extern viewpoint& __m2c_structrow_fe1dabda_3160;
extern weapon& __m2c_structrow_fe1dabda_3161;
extern mobile& __m2c_structrow_fe1dabda_3164;
extern viewpoint& __m2c_structrow_fe1dabda_3165;
extern weapon& __m2c_structrow_fe1dabda_3166;
extern mobile& __m2c_structrow_fe1dabda_3169;
extern viewpoint& __m2c_structrow_fe1dabda_3170;
extern weapon& __m2c_structrow_fe1dabda_3171;
extern mobile& __m2c_structrow_fe1dabda_3174;
extern viewpoint& __m2c_structrow_fe1dabda_3175;
extern weapon& __m2c_structrow_fe1dabda_3176;
extern mobile& __m2c_structrow_fe1dabda_3179;
extern viewpoint& __m2c_structrow_fe1dabda_3180;
extern weapon& __m2c_structrow_fe1dabda_3181;
extern mobile& __m2c_structrow_fe1dabda_3184;
extern viewpoint& __m2c_structrow_fe1dabda_3185;
extern weapon& __m2c_structrow_fe1dabda_3186;
extern mobile& __m2c_structrow_fe1dabda_3189;
extern viewpoint& __m2c_structrow_fe1dabda_3190;
extern weapon& __m2c_structrow_fe1dabda_3191;
extern mobile& __m2c_structrow_fe1dabda_3194;
extern viewpoint& __m2c_structrow_fe1dabda_3195;
extern weapon& __m2c_structrow_fe1dabda_3196;
extern mobile& __m2c_structrow_fe1dabda_3199;
extern viewpoint& __m2c_structrow_fe1dabda_3200;
extern weapon& __m2c_structrow_fe1dabda_3201;
extern mobile& __m2c_structrow_fe1dabda_3204;
extern viewpoint& __m2c_structrow_fe1dabda_3205;
extern weapon& __m2c_structrow_fe1dabda_3206;
extern mobile& __m2c_structrow_fe1dabda_3209;
extern viewpoint& __m2c_structrow_fe1dabda_3210;
extern weapon& __m2c_structrow_fe1dabda_3211;
extern mobile& __m2c_structrow_fe1dabda_3214;
extern viewpoint& __m2c_structrow_fe1dabda_3215;
extern weapon& __m2c_structrow_fe1dabda_3216;
extern mobile& __m2c_structrow_fe1dabda_3219;
extern viewpoint& __m2c_structrow_fe1dabda_3220;
extern weapon& __m2c_structrow_fe1dabda_3221;
extern mobile& __m2c_structrow_fe1dabda_3224;
extern viewpoint& __m2c_structrow_fe1dabda_3225;
extern weapon& __m2c_structrow_fe1dabda_3226;
extern mobile& __m2c_structrow_fe1dabda_3229;
extern viewpoint& __m2c_structrow_fe1dabda_3230;
extern weapon& __m2c_structrow_fe1dabda_3231;
extern mobile& __m2c_structrow_fe1dabda_3234;
extern viewpoint& __m2c_structrow_fe1dabda_3235;
extern weapon& __m2c_structrow_fe1dabda_3236;
extern mobile& __m2c_structrow_fe1dabda_3239;
extern viewpoint& __m2c_structrow_fe1dabda_3240;
extern weapon& __m2c_structrow_fe1dabda_3241;
extern mobile& __m2c_structrow_fe1dabda_3244;
extern viewpoint& __m2c_structrow_fe1dabda_3245;
extern weapon& __m2c_structrow_fe1dabda_3246;
extern mobile& __m2c_structrow_fe1dabda_3249;
extern viewpoint& __m2c_structrow_fe1dabda_3250;
extern weapon& __m2c_structrow_fe1dabda_3251;
extern mobile& __m2c_structrow_fe1dabda_3254;
extern viewpoint& __m2c_structrow_fe1dabda_3255;
extern weapon& __m2c_structrow_fe1dabda_3256;
extern mobile& __m2c_structrow_fe1dabda_3259;
extern viewpoint& __m2c_structrow_fe1dabda_3260;
extern weapon& __m2c_structrow_fe1dabda_3261;
extern mobile& __m2c_structrow_fe1dabda_3264;
extern viewpoint& __m2c_structrow_fe1dabda_3265;
extern weapon& __m2c_structrow_fe1dabda_3266;
extern mobile& __m2c_structrow_fe1dabda_3269;
extern viewpoint& __m2c_structrow_fe1dabda_3270;
extern weapon& __m2c_structrow_fe1dabda_3271;
extern mobile& __m2c_structrow_fe1dabda_3274;
extern viewpoint& __m2c_structrow_fe1dabda_3275;
extern weapon& __m2c_structrow_fe1dabda_3276;
extern mobile& __m2c_structrow_fe1dabda_3279;
extern viewpoint& __m2c_structrow_fe1dabda_3280;
extern weapon& __m2c_structrow_fe1dabda_3281;
extern mobile& __m2c_structrow_fe1dabda_3284;
extern viewpoint& __m2c_structrow_fe1dabda_3285;
extern weapon& __m2c_structrow_fe1dabda_3286;
extern mobile& __m2c_structrow_fe1dabda_3289;
extern viewpoint& __m2c_structrow_fe1dabda_3290;
extern weapon& __m2c_structrow_fe1dabda_3291;
extern mobile& __m2c_structrow_fe1dabda_3294;
extern viewpoint& __m2c_structrow_fe1dabda_3295;
extern weapon& __m2c_structrow_fe1dabda_3296;
extern mobile& __m2c_structrow_fe1dabda_3299;
extern viewpoint& __m2c_structrow_fe1dabda_3300;
extern weapon& __m2c_structrow_fe1dabda_3301;
extern mobile& __m2c_structrow_fe1dabda_3304;
extern viewpoint& __m2c_structrow_fe1dabda_3305;
extern weapon& __m2c_structrow_fe1dabda_3306;
extern mobile& __m2c_structrow_fe1dabda_3309;
extern viewpoint& __m2c_structrow_fe1dabda_3310;
extern weapon& __m2c_structrow_fe1dabda_3311;
extern mobile& __m2c_structrow_fe1dabda_3314;
extern viewpoint& __m2c_structrow_fe1dabda_3315;
extern weapon& __m2c_structrow_fe1dabda_3316;
extern mobile& __m2c_structrow_fe1dabda_3319;
extern viewpoint& __m2c_structrow_fe1dabda_3320;
extern weapon& __m2c_structrow_fe1dabda_3321;
extern mobile& __m2c_structrow_fe1dabda_3324;
extern viewpoint& __m2c_structrow_fe1dabda_3325;
extern weapon& __m2c_structrow_fe1dabda_3326;
extern mobile& __m2c_structrow_fe1dabda_3329;
extern viewpoint& __m2c_structrow_fe1dabda_3330;
extern weapon& __m2c_structrow_fe1dabda_3331;
extern mobile& __m2c_structrow_fe1dabda_3334;
extern viewpoint& __m2c_structrow_fe1dabda_3335;
extern weapon& __m2c_structrow_fe1dabda_3336;
extern mobile& __m2c_structrow_fe1dabda_3339;
extern viewpoint& __m2c_structrow_fe1dabda_3340;
extern weapon& __m2c_structrow_fe1dabda_3341;
extern mobile& __m2c_structrow_fe1dabda_3344;
extern viewpoint& __m2c_structrow_fe1dabda_3345;
extern weapon& __m2c_structrow_fe1dabda_3346;
extern mobile& __m2c_structrow_fe1dabda_3349;
extern viewpoint& __m2c_structrow_fe1dabda_3350;
extern weapon& __m2c_structrow_fe1dabda_3351;
extern mobile& __m2c_structrow_fe1dabda_3354;
extern viewpoint& __m2c_structrow_fe1dabda_3355;
extern weapon& __m2c_structrow_fe1dabda_3356;
extern mobile& __m2c_structrow_fe1dabda_3359;
extern viewpoint& __m2c_structrow_fe1dabda_3360;
extern weapon& __m2c_structrow_fe1dabda_3361;
extern mobile& __m2c_structrow_fe1dabda_3364;
extern viewpoint& __m2c_structrow_fe1dabda_3365;
extern weapon& __m2c_structrow_fe1dabda_3366;
extern mobile& __m2c_structrow_fe1dabda_3369;
extern viewpoint& __m2c_structrow_fe1dabda_3370;
extern weapon& __m2c_structrow_fe1dabda_3371;
extern mobile& __m2c_structrow_fe1dabda_3374;
extern viewpoint& __m2c_structrow_fe1dabda_3375;
extern weapon& __m2c_structrow_fe1dabda_3376;
extern mobile& __m2c_structrow_fe1dabda_3379;
extern viewpoint& __m2c_structrow_fe1dabda_3380;
extern weapon& __m2c_structrow_fe1dabda_3381;
extern mobile& __m2c_structrow_fe1dabda_3384;
extern viewpoint& __m2c_structrow_fe1dabda_3385;
extern weapon& __m2c_structrow_fe1dabda_3386;
extern mobile& __m2c_structrow_fe1dabda_3389;
extern viewpoint& __m2c_structrow_fe1dabda_3390;
extern weapon& __m2c_structrow_fe1dabda_3391;
extern mobile& __m2c_structrow_fe1dabda_3394;
extern viewpoint& __m2c_structrow_fe1dabda_3395;
extern weapon& __m2c_structrow_fe1dabda_3396;
extern mobile& __m2c_structrow_fe1dabda_3399;
extern viewpoint& __m2c_structrow_fe1dabda_3400;
extern weapon& __m2c_structrow_fe1dabda_3401;
extern mobile& __m2c_structrow_fe1dabda_3404;
extern viewpoint& __m2c_structrow_fe1dabda_3405;
extern weapon& __m2c_structrow_fe1dabda_3406;
extern mobile& __m2c_structrow_fe1dabda_3409;
extern viewpoint& __m2c_structrow_fe1dabda_3410;
extern weapon& __m2c_structrow_fe1dabda_3411;
extern mobile& __m2c_structrow_fe1dabda_3414;
extern viewpoint& __m2c_structrow_fe1dabda_3415;
extern weapon& __m2c_structrow_fe1dabda_3416;
extern mobile& __m2c_structrow_fe1dabda_3419;
extern viewpoint& __m2c_structrow_fe1dabda_3420;
extern weapon& __m2c_structrow_fe1dabda_3421;
extern mobile& __m2c_structrow_fe1dabda_3424;
extern viewpoint& __m2c_structrow_fe1dabda_3425;
extern weapon& __m2c_structrow_fe1dabda_3426;
extern mobile& __m2c_structrow_fe1dabda_3429;
extern viewpoint& __m2c_structrow_fe1dabda_3430;
extern weapon& __m2c_structrow_fe1dabda_3431;
extern mobile& __m2c_structrow_fe1dabda_3434;
extern viewpoint& __m2c_structrow_fe1dabda_3435;
extern weapon& __m2c_structrow_fe1dabda_3436;
extern mobile& __m2c_structrow_fe1dabda_3439;
extern viewpoint& __m2c_structrow_fe1dabda_3440;
extern weapon& __m2c_structrow_fe1dabda_3441;
extern mobile& __m2c_structrow_fe1dabda_3444;
extern viewpoint& __m2c_structrow_fe1dabda_3445;
extern weapon& __m2c_structrow_fe1dabda_3446;
extern mobile& __m2c_structrow_fe1dabda_3449;
extern viewpoint& __m2c_structrow_fe1dabda_3450;
extern weapon& __m2c_structrow_fe1dabda_3451;
extern mobile& __m2c_structrow_fe1dabda_3454;
extern viewpoint& __m2c_structrow_fe1dabda_3455;
extern weapon& __m2c_structrow_fe1dabda_3456;
extern mobile& __m2c_structrow_fe1dabda_3459;
extern viewpoint& __m2c_structrow_fe1dabda_3460;
extern weapon& __m2c_structrow_fe1dabda_3461;
extern mobile& __m2c_structrow_fe1dabda_3464;
extern viewpoint& __m2c_structrow_fe1dabda_3465;
extern weapon& __m2c_structrow_fe1dabda_3466;
extern mobile& __m2c_structrow_fe1dabda_3469;
extern viewpoint& __m2c_structrow_fe1dabda_3470;
extern weapon& __m2c_structrow_fe1dabda_3471;
extern mobile& __m2c_structrow_fe1dabda_3474;
extern viewpoint& __m2c_structrow_fe1dabda_3475;
extern weapon& __m2c_structrow_fe1dabda_3476;
extern mobile& __m2c_structrow_fe1dabda_3479;
extern viewpoint& __m2c_structrow_fe1dabda_3480;
extern weapon& __m2c_structrow_fe1dabda_3481;
extern mobile& __m2c_structrow_fe1dabda_3484;
extern viewpoint& __m2c_structrow_fe1dabda_3485;
extern weapon& __m2c_structrow_fe1dabda_3486;
extern mobile& __m2c_structrow_fe1dabda_3489;
extern viewpoint& __m2c_structrow_fe1dabda_3490;
extern weapon& __m2c_structrow_fe1dabda_3491;
extern mobile& __m2c_structrow_fe1dabda_3494;
extern viewpoint& __m2c_structrow_fe1dabda_3495;
extern weapon& __m2c_structrow_fe1dabda_3496;
extern mobile& __m2c_structrow_fe1dabda_3499;
extern viewpoint& __m2c_structrow_fe1dabda_3500;
extern weapon& __m2c_structrow_fe1dabda_3501;
extern mobile& __m2c_structrow_fe1dabda_3504;
extern viewpoint& __m2c_structrow_fe1dabda_3505;
extern weapon& __m2c_structrow_fe1dabda_3506;
extern mobile& __m2c_structrow_fe1dabda_3509;
extern viewpoint& __m2c_structrow_fe1dabda_3510;
extern weapon& __m2c_structrow_fe1dabda_3511;
extern mobile& __m2c_structrow_fe1dabda_3514;
extern viewpoint& __m2c_structrow_fe1dabda_3515;
extern weapon& __m2c_structrow_fe1dabda_3516;
extern mobile& __m2c_structrow_fe1dabda_3519;
extern viewpoint& __m2c_structrow_fe1dabda_3520;
extern weapon& __m2c_structrow_fe1dabda_3521;
extern mobile& __m2c_structrow_fe1dabda_3524;
extern viewpoint& __m2c_structrow_fe1dabda_3525;
extern weapon& __m2c_structrow_fe1dabda_3526;
extern mobile& __m2c_structrow_fe1dabda_3529;
extern viewpoint& __m2c_structrow_fe1dabda_3530;
extern weapon& __m2c_structrow_fe1dabda_3531;
extern mobile& __m2c_structrow_fe1dabda_3534;
extern viewpoint& __m2c_structrow_fe1dabda_3535;
extern weapon& __m2c_structrow_fe1dabda_3536;
extern mobile& __m2c_structrow_fe1dabda_3539;
extern viewpoint& __m2c_structrow_fe1dabda_3540;
extern weapon& __m2c_structrow_fe1dabda_3541;
extern mobile& __m2c_structrow_fe1dabda_3544;
extern viewpoint& __m2c_structrow_fe1dabda_3545;
extern weapon& __m2c_structrow_fe1dabda_3546;
extern mobile& __m2c_structrow_fe1dabda_3549;
extern viewpoint& __m2c_structrow_fe1dabda_3550;
extern weapon& __m2c_structrow_fe1dabda_3551;
extern mobile& __m2c_structrow_fe1dabda_3554;
extern viewpoint& __m2c_structrow_fe1dabda_3555;
extern weapon& __m2c_structrow_fe1dabda_3556;
extern mobile& __m2c_structrow_fe1dabda_3559;
extern viewpoint& __m2c_structrow_fe1dabda_3560;
extern weapon& __m2c_structrow_fe1dabda_3561;
extern mobile& __m2c_structrow_fe1dabda_3564;
extern viewpoint& __m2c_structrow_fe1dabda_3565;
extern weapon& __m2c_structrow_fe1dabda_3566;
extern mobile& __m2c_structrow_fe1dabda_3569;
extern viewpoint& __m2c_structrow_fe1dabda_3570;
extern weapon& __m2c_structrow_fe1dabda_3571;
extern mobile& __m2c_structrow_fe1dabda_3574;
extern viewpoint& __m2c_structrow_fe1dabda_3575;
extern weapon& __m2c_structrow_fe1dabda_3576;
extern mobile& __m2c_structrow_fe1dabda_3579;
extern viewpoint& __m2c_structrow_fe1dabda_3580;
extern weapon& __m2c_structrow_fe1dabda_3581;
extern mobile& __m2c_structrow_fe1dabda_3584;
extern viewpoint& __m2c_structrow_fe1dabda_3585;
extern weapon& __m2c_structrow_fe1dabda_3586;
extern mobile& __m2c_structrow_fe1dabda_3589;
extern viewpoint& __m2c_structrow_fe1dabda_3590;
extern weapon& __m2c_structrow_fe1dabda_3591;
extern mobile& __m2c_structrow_fe1dabda_3594;
extern viewpoint& __m2c_structrow_fe1dabda_3595;
extern weapon& __m2c_structrow_fe1dabda_3596;
extern mobile& __m2c_structrow_fe1dabda_3599;
extern viewpoint& __m2c_structrow_fe1dabda_3600;
extern weapon& __m2c_structrow_fe1dabda_3601;
extern impact (& __m2c_structrow_fe1dabda_3604)[128];
extern word& weaponlist;
extern impact& impactlist;
extern impact& impactlistend;
extern db& secdata1;
extern db& msecdata1;
extern db& weaponcode;
extern db& viscode;

#ifndef amobkills
extern db& amobkills;
#endif
#ifndef sectortable
extern dw& sectortable;
#endif
#ifndef vshake
extern db& vshake;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef crntwingpos
extern db& crntwingpos;
#endif
#ifndef egndkills
extern db& egndkills;
#endif
#ifndef mobdamageflags
extern db& mobdamageflags;
#endif
#ifndef m_cosr
extern dw& m_cosr;
#endif
#ifndef storeswt
extern dw& storeswt;
#endif
#ifndef hshake
extern db& hshake;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef cloudtop
extern dd& cloudtop;
#endif
#ifndef gnddamageflags
extern db& gnddamageflags;
#endif
#ifndef cockpitviews
extern db& cockpitviews;
#endif
#ifndef mobradarlayer1
extern db& mobradarlayer1;
#endif
#ifndef gameviewmode
extern dw& gameviewmode;
#endif
#ifndef kf_armair
extern gamekey& kf_armair;
#endif
#ifndef m_cosp
extern dw& m_cosp;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef kf_package
extern gamekey& kf_package;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
#ifndef mobilelayer1
extern db& mobilelayer1;
#endif
#ifndef armmode
extern dw& armmode;
#endif
#ifndef kf_airweapon
extern gamekey& kf_airweapon;
#endif
#ifndef numrwrthreats
extern dw& numrwrthreats;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef kf_wpncommit
extern gamekey& kf_wpncommit;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef runwaydamage
extern runway_damage& runwaydamage;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef tx
extern comms& tx;
#endif
#ifndef packages
extern package& packages;
#endif
#ifndef nocollisions
extern db& nocollisions;
#endif
#ifndef floatwp
extern waypoint& floatwp;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef waytotal
extern dw& waytotal;
#endif
#ifndef rwrthreats
extern dw& rwrthreats;
#endif
#ifndef joya_justfired1
extern db& joya_justfired1;
#endif
#ifndef wpncambrgfine
extern dw& wpncambrgfine;
#endif
#ifndef mobsectortable
extern dw& mobsectortable;
#endif
#ifndef treesenabled
extern db& treesenabled;
#endif
#ifndef kf_flare
extern gamekey& kf_flare;
#endif
#ifndef shaketimer
extern dw& shaketimer;
#endif
#ifndef treelayer2
extern db& treelayer2;
#endif
#ifndef kf_armgnd
extern gamekey& kf_armgnd;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef incockpit
extern db& incockpit;
#endif
#ifndef treelayer3
extern db& treelayer3;
#endif
#ifndef emobkills
extern db& emobkills;
#endif
#ifndef treelayer4
extern db& treelayer4;
#endif
#ifndef msctrdatastart
extern db& msctrdatastart;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef airborne1
extern db& airborne1;
#endif
#ifndef overcast
extern db& overcast;
#endif
#ifndef sectordatastart
extern db& sectordatastart;
#endif
#ifndef kf_chaff
extern gamekey& kf_chaff;
#endif
#ifndef laseractive
extern db& laseractive;
#endif
#ifndef treelayer1
extern db& treelayer1;
#endif
#ifndef joya_justfired2
extern db& joya_justfired2;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef radartable
extern radars& radartable;
#endif
#ifndef wpncambrg
extern dw& wpncambrg;
#endif
#ifndef clouddepth
extern dw& clouddepth;
#endif
#ifndef treelayouts
extern dw& treelayouts;
#endif
#ifndef radarlists
extern dw& radarlists;
#endif
#ifndef ssf_rwr
extern db& ssf_rwr;
#endif
#ifndef infiniteweapons
extern db& infiniteweapons;
#endif
#ifndef agndkills
extern db& agndkills;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef wpbrg
extern dw& wpbrg;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef kf_wpnmode
extern gamekey& kf_wpnmode;
#endif
#ifndef sectorlayer1
extern db& sectorlayer1;
#endif
#ifndef fuelwt
extern dw& fuelwt;
#endif
#ifndef kf_wpnfire
extern gamekey& kf_wpnfire;
#endif
#ifndef joya_fire1
extern db& joya_fire1;
#endif
#ifndef viewweaponptr
extern dw& viewweaponptr;
#endif
#ifndef kf_armoff
extern gamekey& kf_armoff;
#endif
#ifndef ewrtable
extern dw& ewrtable;
#endif
#ifndef wprng
extern dd& wprng;
#endif
#ifndef extstores
extern dw& extstores;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_initweapons
#define M2C_CODE_EQUATE_initweapons 1
static const dd kinitweapons = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_skipboz
#define M2C_CODE_EQUATE_skipboz 1
static const dd kskipboz = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_skipskyshadow
#define M2C_CODE_EQUATE_skipskyshadow 1
static const dd kskipskyshadow = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_packageok
#define M2C_CODE_EQUATE_packageok 1
static const dd kpackageok = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_calcstoreswt
#define M2C_CODE_EQUATE_calcstoreswt 1
static const dd kcalcstoreswt = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_updateweapons
#define M2C_CODE_EQUATE_updateweapons 1
static const dd kupdateweapons = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_updateloop
#define M2C_CODE_EQUATE_updateloop 1
static const dd kupdateloop = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_updatenext
#define M2C_CODE_EQUATE_updatenext 1
static const dd kupdatenext = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_contsplash
#define M2C_CODE_EQUATE_contsplash 1
static const dd kcontsplash = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_contairburst
#define M2C_CODE_EQUATE_contairburst 1
static const dd kcontairburst = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_contupdate
#define M2C_CODE_EQUATE_contupdate 1
static const dd kcontupdate = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_updategpb
#define M2C_CODE_EQUATE_updategpb 1
static const dd kupdategpb = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_exitgpb
#define M2C_CODE_EQUATE_exitgpb 1
static const dd kexitgpb = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_updateret
#define M2C_CODE_EQUATE_updateret 1
static const dd kupdateret = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_exitret
#define M2C_CODE_EQUATE_exitret 1
static const dd kexitret = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_updatelgb
#define M2C_CODE_EQUATE_updatelgb 1
static const dd kupdatelgb = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_unguidedlgb
#define M2C_CODE_EQUATE_unguidedlgb 1
static const dd kunguidedlgb = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_exitlgb
#define M2C_CODE_EQUATE_exitlgb 1
static const dd kexitlgb = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_updatebl755
#define M2C_CODE_EQUATE_updatebl755 1
static const dd kupdatebl755 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_skipfragment
#define M2C_CODE_EQUATE_skipfragment 1
static const dd kskipfragment = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_contfragment
#define M2C_CODE_EQUATE_contfragment 1
static const dd kcontfragment = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_exitbl755
#define M2C_CODE_EQUATE_exitbl755 1
static const dd kexitbl755 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_updatejp233
#define M2C_CODE_EQUATE_updatejp233 1
static const dd kupdatejp233 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_exitjp233
#define M2C_CODE_EQUATE_exitjp233 1
static const dd kexitjp233 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_updatealarm
#define M2C_CODE_EQUATE_updatealarm 1
static const dd kupdatealarm = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_alarmdirect
#define M2C_CODE_EQUATE_alarmdirect 1
static const dd kalarmdirect = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_switchtozoom
#define M2C_CODE_EQUATE_switchtozoom 1
static const dd kswitchtozoom = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_switchtokill
#define M2C_CODE_EQUATE_switchtokill 1
static const dd kswitchtokill = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_alarmdamage
#define M2C_CODE_EQUATE_alarmdamage 1
static const dd kalarmdamage = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_exitalarm
#define M2C_CODE_EQUATE_exitalarm 1
static const dd kexitalarm = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_alarmkill
#define M2C_CODE_EQUATE_alarmkill 1
static const dd kalarmkill = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_intokill
#define M2C_CODE_EQUATE_intokill 1
static const dd kintokill = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_alarmguide
#define M2C_CODE_EQUATE_alarmguide 1
static const dd kalarmguide = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_alarmzoom
#define M2C_CODE_EQUATE_alarmzoom 1
static const dd kalarmzoom = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_switchtoloiter
#define M2C_CODE_EQUATE_switchtoloiter 1
static const dd kswitchtoloiter = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_16_skip 1
static const dd k__m2c_macrolocal_16_skip = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_17_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_17_skip 1
static const dd k__m2c_macrolocal_17_skip = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_intozoom
#define M2C_CODE_EQUATE_intozoom 1
static const dd kintozoom = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_alarmfreefall
#define M2C_CODE_EQUATE_alarmfreefall 1
static const dd kalarmfreefall = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_intofreefall
#define M2C_CODE_EQUATE_intofreefall 1
static const dd kintofreefall = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_20_skip 1
static const dd k__m2c_macrolocal_20_skip = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_alarmloiter
#define M2C_CODE_EQUATE_alarmloiter 1
static const dd kalarmloiter = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_contloiter
#define M2C_CODE_EQUATE_contloiter 1
static const dd kcontloiter = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_21_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_21_skip 1
static const dd k__m2c_macrolocal_21_skip = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_switchtofree
#define M2C_CODE_EQUATE_switchtofree 1
static const dd kswitchtofree = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_23_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_23_skip 1
static const dd k__m2c_macrolocal_23_skip = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_switchtodive
#define M2C_CODE_EQUATE_switchtodive 1
static const dd kswitchtodive = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_intoloiter
#define M2C_CODE_EQUATE_intoloiter 1
static const dd kintoloiter = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_alarmdive
#define M2C_CODE_EQUATE_alarmdive 1
static const dd kalarmdive = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_intodive
#define M2C_CODE_EQUATE_intodive 1
static const dd kintodive = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_updatecannon
#define M2C_CODE_EQUATE_updatecannon 1
static const dd kupdatecannon = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_exitcannon
#define M2C_CODE_EQUATE_exitcannon 1
static const dd kexitcannon = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_updatemissile
#define M2C_CODE_EQUATE_updatemissile 1
static const dd kupdatemissile = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_25_skip 1
static const dd k__m2c_macrolocal_25_skip = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_misstimerok
#define M2C_CODE_EQUATE_misstimerok 1
static const dd kmisstimerok = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_exitmissile
#define M2C_CODE_EQUATE_exitmissile 1
static const dd kexitmissile = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_contburnout
#define M2C_CODE_EQUATE_contburnout 1
static const dd kcontburnout = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_updatedecoy
#define M2C_CODE_EQUATE_updatedecoy 1
static const dd kupdatedecoy = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_exitdecoy
#define M2C_CODE_EQUATE_exitdecoy 1
static const dd kexitdecoy = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_bombhitgnd
#define M2C_CODE_EQUATE_bombhitgnd 1
static const dd kbombhitgnd = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_contbombball
#define M2C_CODE_EQUATE_contbombball 1
static const dd kcontbombball = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy1 1
static const dd k__m2c_macrolocal_30_mvxy1 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy2 1
static const dd k__m2c_macrolocal_30_mvxy2 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy3 1
static const dd k__m2c_macrolocal_30_mvxy3 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy4 1
static const dd k__m2c_macrolocal_30_mvxy4 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_setbombpitch
#define M2C_CODE_EQUATE_setbombpitch 1
static const dd ksetbombpitch = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_bombimpact
#define M2C_CODE_EQUATE_bombimpact 1
static const dd kbombimpact = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_calclgbvel
#define M2C_CODE_EQUATE_calclgbvel 1
static const dd kcalclgbvel = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_intolgbvel
#define M2C_CODE_EQUATE_intolgbvel 1
static const dd kintolgbvel = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy1 1
static const dd k__m2c_macrolocal_42_mvxy1 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy2 1
static const dd k__m2c_macrolocal_42_mvxy2 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy3 1
static const dd k__m2c_macrolocal_42_mvxy3 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy4 1
static const dd k__m2c_macrolocal_42_mvxy4 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_43_skip 1
static const dd k__m2c_macrolocal_43_skip = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_lgbimpact
#define M2C_CODE_EQUATE_lgbimpact 1
static const dd klgbimpact = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_44_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_44_skip 1
static const dd k__m2c_macrolocal_44_skip = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_45_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_45_skip 1
static const dd k__m2c_macrolocal_45_skip = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_nolaser
#define M2C_CODE_EQUATE_nolaser 1
static const dd knolaser = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_46_skip 1
static const dd k__m2c_macrolocal_46_skip = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_47_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_47_skip 1
static const dd k__m2c_macrolocal_47_skip = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_48_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_48_skip 1
static const dd k__m2c_macrolocal_48_skip = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_calclgbpitch1
#define M2C_CODE_EQUATE_calclgbpitch1 1
static const dd kcalclgbpitch1 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_calclgbpitch2
#define M2C_CODE_EQUATE_calclgbpitch2 1
static const dd kcalclgbpitch2 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_lgbhdgerror
#define M2C_CODE_EQUATE_lgbhdgerror 1
static const dd klgbhdgerror = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_calclgbrate
#define M2C_CODE_EQUATE_calclgbrate 1
static const dd kcalclgbrate = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_nolgbflip
#define M2C_CODE_EQUATE_nolgbflip 1
static const dd knolgbflip = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_sortlgbangles
#define M2C_CODE_EQUATE_sortlgbangles 1
static const dd ksortlgbangles = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_sortlgbhdg
#define M2C_CODE_EQUATE_sortlgbhdg 1
static const dd ksortlgbhdg = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_56_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_56_skip 1
static const dd k__m2c_macrolocal_56_skip = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_shellhitgnd
#define M2C_CODE_EQUATE_shellhitgnd 1
static const dd kshellhitgnd = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_contshellball
#define M2C_CODE_EQUATE_contshellball 1
static const dd kcontshellball = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy1 1
static const dd k__m2c_macrolocal_59_mvxy1 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy2 1
static const dd k__m2c_macrolocal_59_mvxy2 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy3 1
static const dd k__m2c_macrolocal_59_mvxy3 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy4 1
static const dd k__m2c_macrolocal_59_mvxy4 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_60_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_60_skip 1
static const dd k__m2c_macrolocal_60_skip = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_shellimpact
#define M2C_CODE_EQUATE_shellimpact 1
static const dd kshellimpact = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_shellok
#define M2C_CODE_EQUATE_shellok 1
static const dd kshellok = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_scanmobloop
#define M2C_CODE_EQUATE_scanmobloop 1
static const dd kscanmobloop = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_skipmob
#define M2C_CODE_EQUATE_skipmob 1
static const dd kskipmob = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_alarmtimerok
#define M2C_CODE_EQUATE_alarmtimerok 1
static const dd kalarmtimerok = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_alarmendlife
#define M2C_CODE_EQUATE_alarmendlife 1
static const dd kalarmendlife = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_setalarmvel
#define M2C_CODE_EQUATE_setalarmvel 1
static const dd ksetalarmvel = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_67_testhi 1
static const dd k__m2c_macrolocal_67_testhi = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_67_testok 1
static const dd k__m2c_macrolocal_67_testok = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_68_skip 1
static const dd k__m2c_macrolocal_68_skip = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_alarmguideok
#define M2C_CODE_EQUATE_alarmguideok 1
static const dd kalarmguideok = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_70_skip 1
static const dd k__m2c_macrolocal_70_skip = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_alarmguideover
#define M2C_CODE_EQUATE_alarmguideover 1
static const dd kalarmguideover = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_alarmaimpitch1
#define M2C_CODE_EQUATE_alarmaimpitch1 1
static const dd kalarmaimpitch1 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_alarmaimpitch2
#define M2C_CODE_EQUATE_alarmaimpitch2 1
static const dd kalarmaimpitch2 = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_contalarmpitch
#define M2C_CODE_EQUATE_contalarmpitch 1
static const dd kcontalarmpitch = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy1 1
static const dd k__m2c_macrolocal_80_mvxy1 = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy2 1
static const dd k__m2c_macrolocal_80_mvxy2 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy3 1
static const dd k__m2c_macrolocal_80_mvxy3 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy4 1
static const dd k__m2c_macrolocal_80_mvxy4 = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_queque002e
#define M2C_CODE_EQUATE_queque002e 1
static const dd kqueque002e = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_queque0030
#define M2C_CODE_EQUATE_queque0030 1
static const dd kqueque0030 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_84_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_84_skip 1
static const dd k__m2c_macrolocal_84_skip = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_alarmhitgnd
#define M2C_CODE_EQUATE_alarmhitgnd 1
static const dd kalarmhitgnd = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_contalarmmove
#define M2C_CODE_EQUATE_contalarmmove 1
static const dd kcontalarmmove = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy1 1
static const dd k__m2c_macrolocal_87_mvxy1 = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy2 1
static const dd k__m2c_macrolocal_87_mvxy2 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy3 1
static const dd k__m2c_macrolocal_87_mvxy3 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy4 1
static const dd k__m2c_macrolocal_87_mvxy4 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_alarmimpact
#define M2C_CODE_EQUATE_alarmimpact 1
static const dd kalarmimpact = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_90_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_90_skip 1
static const dd k__m2c_macrolocal_90_skip = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_alarmradarfail
#define M2C_CODE_EQUATE_alarmradarfail 1
static const dd kalarmradarfail = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_91_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_91_skip 1
static const dd k__m2c_macrolocal_91_skip = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_noradartargets
#define M2C_CODE_EQUATE_noradartargets 1
static const dd knoradartargets = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_92_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_92_skip 1
static const dd k__m2c_macrolocal_92_skip = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop1
#define M2C_CODE_EQUATE_scanyloop1 1
static const dd kscanyloop1 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop1
#define M2C_CODE_EQUATE_scanxloop1 1
static const dd kscanxloop1 = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_scannextsctr1
#define M2C_CODE_EQUATE_scannextsctr1 1
static const dd kscannextsctr1 = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_scanmobiles
#define M2C_CODE_EQUATE_scanmobiles 1
static const dd kscanmobiles = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_aerialactivity
#define M2C_CODE_EQUATE_aerialactivity 1
static const dd kaerialactivity = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop2
#define M2C_CODE_EQUATE_scanyloop2 1
static const dd kscanyloop2 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop2
#define M2C_CODE_EQUATE_scanxloop2 1
static const dd kscanxloop2 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_93_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_93_skip 1
static const dd k__m2c_macrolocal_93_skip = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_scannextsctr2
#define M2C_CODE_EQUATE_scannextsctr2 1
static const dd kscannextsctr2 = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_94_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_94_skip 1
static const dd k__m2c_macrolocal_94_skip = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_95_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_95_skip 1
static const dd k__m2c_macrolocal_95_skip = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_contewrscan
#define M2C_CODE_EQUATE_contewrscan 1
static const dd kcontewrscan = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_skipsamscan
#define M2C_CODE_EQUATE_skipsamscan 1
static const dd kskipsamscan = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_scansamloop
#define M2C_CODE_EQUATE_scansamloop 1
static const dd kscansamloop = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_exitsamloop
#define M2C_CODE_EQUATE_exitsamloop 1
static const dd kexitsamloop = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_skipaaascan
#define M2C_CODE_EQUATE_skipaaascan 1
static const dd kskipaaascan = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_scanaaaloop
#define M2C_CODE_EQUATE_scanaaaloop 1
static const dd kscanaaaloop = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_scanewrloop
#define M2C_CODE_EQUATE_scanewrloop 1
static const dd kscanewrloop = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_ewrfound
#define M2C_CODE_EQUATE_ewrfound 1
static const dd kewrfound = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_sortmobileewr
#define M2C_CODE_EQUATE_sortmobileewr 1
static const dd ksortmobileewr = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_sortgroundewr
#define M2C_CODE_EQUATE_sortgroundewr 1
static const dd ksortgroundewr = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_ewrdead
#define M2C_CODE_EQUATE_ewrdead 1
static const dd kewrdead = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_ewrok
#define M2C_CODE_EQUATE_ewrok 1
static const dd kewrok = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_97_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_97_skip 1
static const dd k__m2c_macrolocal_97_skip = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_98_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_98_skip 1
static const dd k__m2c_macrolocal_98_skip = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_alarmradarpass
#define M2C_CODE_EQUATE_alarmradarpass 1
static const dd kalarmradarpass = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_exitradartgt
#define M2C_CODE_EQUATE_exitradartgt 1
static const dd kexitradartgt = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_100_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_100_skip 1
static const dd k__m2c_macrolocal_100_skip = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_movemissile
#define M2C_CODE_EQUATE_movemissile 1
static const dd kmovemissile = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_101_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_101_skip 1
static const dd k__m2c_macrolocal_101_skip = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_missloselock
#define M2C_CODE_EQUATE_missloselock 1
static const dd kmissloselock = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_sortradarlock
#define M2C_CODE_EQUATE_sortradarlock 1
static const dd ksortradarlock = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_102_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_102_skip 1
static const dd k__m2c_macrolocal_102_skip = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE_skipdecoy
#define M2C_CODE_EQUATE_skipdecoy 1
static const dd kskipdecoy = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_misslockok
#define M2C_CODE_EQUATE_misslockok 1
static const dd kmisslockok = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_104_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_104_skip 1
static const dd k__m2c_macrolocal_104_skip = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_106_skip 1
static const dd k__m2c_macrolocal_106_skip = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_missaimpitch1
#define M2C_CODE_EQUATE_missaimpitch1 1
static const dd kmissaimpitch1 = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_missaimpitch2
#define M2C_CODE_EQUATE_missaimpitch2 1
static const dd kmissaimpitch2 = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_contmisspitch
#define M2C_CODE_EQUATE_contmisspitch 1
static const dd kcontmisspitch = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skip 1
static const dd k__m2c_macrolocal_115_skip = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_missilehitgnd
#define M2C_CODE_EQUATE_missilehitgnd 1
static const dd kmissilehitgnd = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_contmissmove
#define M2C_CODE_EQUATE_contmissmove 1
static const dd kcontmissmove = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy1 1
static const dd k__m2c_macrolocal_118_mvxy1 = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy2 1
static const dd k__m2c_macrolocal_118_mvxy2 = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy3 1
static const dd k__m2c_macrolocal_118_mvxy3 = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy4 1
static const dd k__m2c_macrolocal_118_mvxy4 = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_119_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_119_skip 1
static const dd k__m2c_macrolocal_119_skip = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_missileimpact
#define M2C_CODE_EQUATE_missileimpact 1
static const dd kmissileimpact = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skip 1
static const dd k__m2c_macrolocal_120_skip = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_121_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_121_skip 1
static const dd k__m2c_macrolocal_121_skip = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE_missileok
#define M2C_CODE_EQUATE_missileok 1
static const dd kmissileok = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_122_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_122_skip 1
static const dd k__m2c_macrolocal_122_skip = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE_exitbomblet
#define M2C_CODE_EQUATE_exitbomblet 1
static const dd kexitbomblet = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE_explosoundok
#define M2C_CODE_EQUATE_explosoundok 1
static const dd kexplosoundok = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE_contcrater
#define M2C_CODE_EQUATE_contcrater 1
static const dd kcontcrater = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_weaponsplash
#define M2C_CODE_EQUATE_weaponsplash 1
static const dd kweaponsplash = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_contheave
#define M2C_CODE_EQUATE_contheave 1
static const dd kcontheave = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE_rwyloop
#define M2C_CODE_EQUATE_rwyloop 1
static const dd krwyloop = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_newrwy
#define M2C_CODE_EQUATE_newrwy 1
static const dd knewrwy = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_nextrwy
#define M2C_CODE_EQUATE_nextrwy 1
static const dd knextrwy = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_samerwy
#define M2C_CODE_EQUATE_samerwy 1
static const dd ksamerwy = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE_exitrwydamage
#define M2C_CODE_EQUATE_exitrwydamage 1
static const dd kexitrwydamage = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE_wpnhitsound
#define M2C_CODE_EQUATE_wpnhitsound 1
static const dd kwpnhitsound = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE_wpnhitsmoke
#define M2C_CODE_EQUATE_wpnhitsmoke 1
static const dd kwpnhitsmoke = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_128_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_128_skip 1
static const dd k__m2c_macrolocal_128_skip = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_130_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_130_skip 1
static const dd k__m2c_macrolocal_130_skip = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_exitsplash
#define M2C_CODE_EQUATE_exitsplash 1
static const dd kexitsplash = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_weaponscontrol
#define M2C_CODE_EQUATE_weaponscontrol 1
static const dd kweaponscontrol = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_131_skip 1
static const dd k__m2c_macrolocal_131_skip = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_132_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_132_skip 1
static const dd k__m2c_macrolocal_132_skip = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_latearmswitch
#define M2C_CODE_EQUATE_latearmswitch 1
static const dd klatearmswitch = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE_skiparmoff
#define M2C_CODE_EQUATE_skiparmoff 1
static const dd kskiparmoff = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_skiparmgnd
#define M2C_CODE_EQUATE_skiparmgnd 1
static const dd kskiparmgnd = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE_skiparmair
#define M2C_CODE_EQUATE_skiparmair 1
static const dd kskiparmair = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_skippackage
#define M2C_CODE_EQUATE_skippackage 1
static const dd kskippackage = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_139_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_139_skip 1
static const dd k__m2c_macrolocal_139_skip = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_140_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_140_skip 1
static const dd k__m2c_macrolocal_140_skip = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_141_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_141_skip 1
static const dd k__m2c_macrolocal_141_skip = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE_setwpnmode
#define M2C_CODE_EQUATE_setwpnmode 1
static const dd ksetwpnmode = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE_skiplatearm
#define M2C_CODE_EQUATE_skiplatearm 1
static const dd kskiplatearm = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_setlatearm
#define M2C_CODE_EQUATE_setlatearm 1
static const dd ksetlatearm = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_armmanual
#define M2C_CODE_EQUATE_armmanual 1
static const dd karmmanual = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_skipmanual
#define M2C_CODE_EQUATE_skipmanual 1
static const dd kskipmanual = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE_armok
#define M2C_CODE_EQUATE_armok 1
static const dd karmok = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE_armlaydown
#define M2C_CODE_EQUATE_armlaydown 1
static const dd karmlaydown = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE_skiplaydown
#define M2C_CODE_EQUATE_skiplaydown 1
static const dd kskiplaydown = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_145_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_145_skip 1
static const dd k__m2c_macrolocal_145_skip = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_146_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_146_skip 1
static const dd k__m2c_macrolocal_146_skip = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_147_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_147_skip 1
static const dd k__m2c_macrolocal_147_skip = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_148_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_148_skip 1
static const dd k__m2c_macrolocal_148_skip = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_149_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_149_skip 1
static const dd k__m2c_macrolocal_149_skip = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_armloft
#define M2C_CODE_EQUATE_armloft 1
static const dd karmloft = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE_skiploft
#define M2C_CODE_EQUATE_skiploft 1
static const dd kskiploft = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_contpullup
#define M2C_CODE_EQUATE_contpullup 1
static const dd kcontpullup = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_loftcommit
#define M2C_CODE_EQUATE_loftcommit 1
static const dd kloftcommit = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_155_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_155_skip 1
static const dd k__m2c_macrolocal_155_skip = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_156_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_156_skip 1
static const dd k__m2c_macrolocal_156_skip = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_157_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_157_skip 1
static const dd k__m2c_macrolocal_157_skip = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_158_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_158_skip 1
static const dd k__m2c_macrolocal_158_skip = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_159_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_159_skip 1
static const dd k__m2c_macrolocal_159_skip = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_armlaserguided
#define M2C_CODE_EQUATE_armlaserguided 1
static const dd karmlaserguided = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_skiplaserguided
#define M2C_CODE_EQUATE_skiplaserguided 1
static const dd kskiplaserguided = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_armjp233
#define M2C_CODE_EQUATE_armjp233 1
static const dd karmjp233 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_166_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_166_skip 1
static const dd k__m2c_macrolocal_166_skip = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_contjp233
#define M2C_CODE_EQUATE_contjp233 1
static const dd kcontjp233 = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_skipjp233
#define M2C_CODE_EQUATE_skipjp233 1
static const dd kskipjp233 = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_168_skip 1
static const dd k__m2c_macrolocal_168_skip = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_169_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_169_skip 1
static const dd k__m2c_macrolocal_169_skip = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_170_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_170_skip 1
static const dd k__m2c_macrolocal_170_skip = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_171_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_171_skip 1
static const dd k__m2c_macrolocal_171_skip = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_172_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_172_skip 1
static const dd k__m2c_macrolocal_172_skip = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_176_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_176_skip 1
static const dd k__m2c_macrolocal_176_skip = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_177_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_177_skip 1
static const dd k__m2c_macrolocal_177_skip = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_armalarmdir
#define M2C_CODE_EQUATE_armalarmdir 1
static const dd karmalarmdir = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_181_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_181_skip 1
static const dd k__m2c_macrolocal_181_skip = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE_skipalarmdir
#define M2C_CODE_EQUATE_skipalarmdir 1
static const dd kskipalarmdir = 0x11be;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_182_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_182_skip 1
static const dd k__m2c_macrolocal_182_skip = 0x11bf;
#endif
#ifndef M2C_CODE_EQUATE_threatloop
#define M2C_CODE_EQUATE_threatloop 1
static const dd kthreatloop = 0x11c0;
#endif
#ifndef M2C_CODE_EQUATE_nextthreat
#define M2C_CODE_EQUATE_nextthreat 1
static const dd knextthreat = 0x11c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_184_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_184_skip 1
static const dd k__m2c_macrolocal_184_skip = 0x11c2;
#endif
#ifndef M2C_CODE_EQUATE_armalarmind
#define M2C_CODE_EQUATE_armalarmind 1
static const dd karmalarmind = 0x11c4;
#endif
#ifndef M2C_CODE_EQUATE_skipalarmind
#define M2C_CODE_EQUATE_skipalarmind 1
static const dd kskipalarmind = 0x11c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x11c6;
#endif
#ifndef M2C_CODE_EQUATE_armcannon
#define M2C_CODE_EQUATE_armcannon 1
static const dd karmcannon = 0x11c7;
#endif
#ifndef M2C_CODE_EQUATE_contcannon
#define M2C_CODE_EQUATE_contcannon 1
static const dd kcontcannon = 0x11c8;
#endif
#ifndef M2C_CODE_EQUATE_skipcannon
#define M2C_CODE_EQUATE_skipcannon 1
static const dd kskipcannon = 0x11c9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_190_skip 1
static const dd k__m2c_macrolocal_190_skip = 0x11ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x11cb;
#endif
#ifndef M2C_CODE_EQUATE_armsidewinder
#define M2C_CODE_EQUATE_armsidewinder 1
static const dd karmsidewinder = 0x11cd;
#endif
#ifndef M2C_CODE_EQUATE_skipsidewinder
#define M2C_CODE_EQUATE_skipsidewinder 1
static const dd kskipsidewinder = 0x11ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x11d0;
#endif
#ifndef M2C_CODE_EQUATE_armskyflash
#define M2C_CODE_EQUATE_armskyflash 1
static const dd karmskyflash = 0x11d1;
#endif
#ifndef M2C_CODE_EQUATE_skipskyflash
#define M2C_CODE_EQUATE_skipskyflash 1
static const dd kskipskyflash = 0x11d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x11d3;
#endif
#ifndef M2C_CODE_EQUATE_skipchaff
#define M2C_CODE_EQUATE_skipchaff 1
static const dd kskipchaff = 0x11d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x11d6;
#endif
#ifndef M2C_CODE_EQUATE_skipflare
#define M2C_CODE_EQUATE_skipflare 1
static const dd kskipflare = 0x11d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x11d8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x11d9;
#endif
#ifndef M2C_CODE_EQUATE_exitnextpack
#define M2C_CODE_EQUATE_exitnextpack 1
static const dd kexitnextpack = 0x11da;
#endif
#ifndef M2C_CODE_EQUATE_nextpackloop
#define M2C_CODE_EQUATE_nextpackloop 1
static const dd knextpackloop = 0x11db;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x11dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x11dd;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x11de;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_195_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_195_skip 1
static const dd k__m2c_macrolocal_195_skip = 0x11df;
#endif
#ifndef M2C_CODE_EQUATE_exitairwpn
#define M2C_CODE_EQUATE_exitairwpn 1
static const dd kexitairwpn = 0x11e0;
#endif
#ifndef M2C_CODE_EQUATE_setairwpn
#define M2C_CODE_EQUATE_setairwpn 1
static const dd ksetairwpn = 0x11e1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x11e2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x11e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x11e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x11e5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x11e7;
#endif
#ifndef M2C_CODE_EQUATE_calcpitchdown
#define M2C_CODE_EQUATE_calcpitchdown 1
static const dd kcalcpitchdown = 0x11e8;
#endif
#ifndef M2C_CODE_EQUATE_contthrow
#define M2C_CODE_EQUATE_contthrow 1
static const dd kcontthrow = 0x11e9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x11ea;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x11eb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x11ec;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x11ed;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x11ee;
#endif
#ifndef M2C_CODE_EQUATE_scaleok
#define M2C_CODE_EQUATE_scaleok 1
static const dd kscaleok = 0x11ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x11f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x11f1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x11f2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x11f3;
#endif
#ifndef M2C_CODE_EQUATE_releasebomb
#define M2C_CODE_EQUATE_releasebomb 1
static const dd kreleasebomb = 0x11f4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x11f5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x11f6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_206_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_206_skip 1
static const dd k__m2c_macrolocal_206_skip = 0x11f7;
#endif
#ifndef M2C_CODE_EQUATE_exitrelbomb
#define M2C_CODE_EQUATE_exitrelbomb 1
static const dd kexitrelbomb = 0x11f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x11f9;
#endif
#ifndef M2C_CODE_EQUATE_skiplgbrelease
#define M2C_CODE_EQUATE_skiplgbrelease 1
static const dd kskiplgbrelease = 0x11fa;
#endif
#ifndef M2C_CODE_EQUATE_contlgbrelease
#define M2C_CODE_EQUATE_contlgbrelease 1
static const dd kcontlgbrelease = 0x11fb;
#endif
#ifndef M2C_CODE_EQUATE_contrelbomb
#define M2C_CODE_EQUATE_contrelbomb 1
static const dd kcontrelbomb = 0x11fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x11fd;
#endif
#ifndef M2C_CODE_EQUATE_hvelok
#define M2C_CODE_EQUATE_hvelok 1
static const dd khvelok = 0x11fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x11ff;
#endif
#ifndef M2C_CODE_EQUATE_vvelok
#define M2C_CODE_EQUATE_vvelok 1
static const dd kvvelok = 0x1200;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x1201;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x1202;
#endif
#ifndef M2C_CODE_EQUATE_skipview
#define M2C_CODE_EQUATE_skipview 1
static const dd kskipview = 0x1203;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x1204;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x1205;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x1206;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x1207;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_212_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_212_skip 1
static const dd k__m2c_macrolocal_212_skip = 0x1208;
#endif
#ifndef M2C_CODE_EQUATE_exitlaunchalarm
#define M2C_CODE_EQUATE_exitlaunchalarm 1
static const dd kexitlaunchalarm = 0x1209;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x120a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x120c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x120d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x120e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_215_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_215_skip 1
static const dd k__m2c_macrolocal_215_skip = 0x120f;
#endif
#ifndef M2C_CODE_EQUATE_exitfirecannon
#define M2C_CODE_EQUATE_exitfirecannon 1
static const dd kexitfirecannon = 0x1210;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x1211;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x1212;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x1213;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x1214;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x1215;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x1216;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_221_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_221_skip 1
static const dd k__m2c_macrolocal_221_skip = 0x1217;
#endif
#ifndef M2C_CODE_EQUATE_exitlaunchmiss
#define M2C_CODE_EQUATE_exitlaunchmiss 1
static const dd kexitlaunchmiss = 0x1218;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel126
#define M2C_CODE_EQUATE_dummylabel126 1
static const dd kdummylabel126 = 0x1219;
#endif
#ifndef M2C_CODE_EQUATE_sortmissok
#define M2C_CODE_EQUATE_sortmissok 1
static const dd ksortmissok = 0x121a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel127
#define M2C_CODE_EQUATE_dummylabel127 1
static const dd kdummylabel127 = 0x121b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel128
#define M2C_CODE_EQUATE_dummylabel128 1
static const dd kdummylabel128 = 0x121c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel129
#define M2C_CODE_EQUATE_dummylabel129 1
static const dd kdummylabel129 = 0x121d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel130
#define M2C_CODE_EQUATE_dummylabel130 1
static const dd kdummylabel130 = 0x121e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x121f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel131
#define M2C_CODE_EQUATE_dummylabel131 1
static const dd kdummylabel131 = 0x1220;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel132
#define M2C_CODE_EQUATE_dummylabel132 1
static const dd kdummylabel132 = 0x1221;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_225_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_225_skip 1
static const dd k__m2c_macrolocal_225_skip = 0x1222;
#endif
#ifndef M2C_CODE_EQUATE_exitreldecoy
#define M2C_CODE_EQUATE_exitreldecoy 1
static const dd kexitreldecoy = 0x1223;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel133
#define M2C_CODE_EQUATE_dummylabel133 1
static const dd kdummylabel133 = 0x1224;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel42
#define M2C_CODE_EQUATE_edummylabel42 1
static const dd kedummylabel42 = 0x1226;
#endif
#ifndef M2C_CODE_EQUATE_findwpnloop
#define M2C_CODE_EQUATE_findwpnloop 1
static const dd kfindwpnloop = 0x1227;
#endif
#ifndef M2C_CODE_EQUATE_weaponavail
#define M2C_CODE_EQUATE_weaponavail 1
static const dd kweaponavail = 0x1228;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel134
#define M2C_CODE_EQUATE_dummylabel134 1
static const dd kdummylabel134 = 0x1229;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel43
#define M2C_CODE_EQUATE_edummylabel43 1
static const dd kedummylabel43 = 0x122a;
#endif
#ifndef M2C_CODE_EQUATE_exitimpact
#define M2C_CODE_EQUATE_exitimpact 1
static const dd kexitimpact = 0x122b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel44
#define M2C_CODE_EQUATE_edummylabel44 1
static const dd kedummylabel44 = 0x122c;
#endif
#ifndef M2C_CODE_EQUATE_exitproxkill
#define M2C_CODE_EQUATE_exitproxkill 1
static const dd kexitproxkill = 0x122d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel45
#define M2C_CODE_EQUATE_edummylabel45 1
static const dd kedummylabel45 = 0x1232;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_231_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_231_skip 1
static const dd k__m2c_macrolocal_231_skip = 0x1233;
#endif
#ifndef M2C_CODE_EQUATE_killgndexit
#define M2C_CODE_EQUATE_killgndexit 1
static const dd kkillgndexit = 0x1234;
#endif
#ifndef M2C_CODE_EQUATE_gndobjloop
#define M2C_CODE_EQUATE_gndobjloop 1
static const dd kgndobjloop = 0x1235;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_233_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_233_skip 1
static const dd k__m2c_macrolocal_233_skip = 0x1236;
#endif
#ifndef M2C_CODE_EQUATE_exitgndobj
#define M2C_CODE_EQUATE_exitgndobj 1
static const dd kexitgndobj = 0x1237;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_234_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_234_skip 1
static const dd k__m2c_macrolocal_234_skip = 0x1238;
#endif
#ifndef M2C_CODE_EQUATE_nextgndobj
#define M2C_CODE_EQUATE_nextgndobj 1
static const dd knextgndobj = 0x1239;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_235_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_235_skip 1
static const dd k__m2c_macrolocal_235_skip = 0x123a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_236_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_236_skip 1
static const dd k__m2c_macrolocal_236_skip = 0x123b;
#endif
#ifndef M2C_CODE_EQUATE_skipkillgnd
#define M2C_CODE_EQUATE_skipkillgnd 1
static const dd kskipkillgnd = 0x123c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel135
#define M2C_CODE_EQUATE_dummylabel135 1
static const dd kdummylabel135 = 0x123d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel46
#define M2C_CODE_EQUATE_edummylabel46 1
static const dd kedummylabel46 = 0x123f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_239_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_239_skip 1
static const dd k__m2c_macrolocal_239_skip = 0x1240;
#endif
#ifndef M2C_CODE_EQUATE_killstatexit
#define M2C_CODE_EQUATE_killstatexit 1
static const dd kkillstatexit = 0x1241;
#endif
#ifndef M2C_CODE_EQUATE_statmobloop
#define M2C_CODE_EQUATE_statmobloop 1
static const dd kstatmobloop = 0x1242;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_240_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_240_skip 1
static const dd k__m2c_macrolocal_240_skip = 0x1243;
#endif
#ifndef M2C_CODE_EQUATE_exitstatmob
#define M2C_CODE_EQUATE_exitstatmob 1
static const dd kexitstatmob = 0x1244;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_241_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_241_skip 1
static const dd k__m2c_macrolocal_241_skip = 0x1245;
#endif
#ifndef M2C_CODE_EQUATE_nextstatmob
#define M2C_CODE_EQUATE_nextstatmob 1
static const dd knextstatmob = 0x1246;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_242_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_242_skip 1
static const dd k__m2c_macrolocal_242_skip = 0x1247;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_243_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_243_skip 1
static const dd k__m2c_macrolocal_243_skip = 0x1248;
#endif
#ifndef M2C_CODE_EQUATE_skipkillmob
#define M2C_CODE_EQUATE_skipkillmob 1
static const dd kskipkillmob = 0x1249;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel136
#define M2C_CODE_EQUATE_dummylabel136 1
static const dd kdummylabel136 = 0x124a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel137
#define M2C_CODE_EQUATE_dummylabel137 1
static const dd kdummylabel137 = 0x124b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel47
#define M2C_CODE_EQUATE_edummylabel47 1
static const dd kedummylabel47 = 0x124c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_246_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_246_skip 1
static const dd k__m2c_macrolocal_246_skip = 0x124d;
#endif
#ifndef M2C_CODE_EQUATE_killmobexit
#define M2C_CODE_EQUATE_killmobexit 1
static const dd kkillmobexit = 0x124e;
#endif
#ifndef M2C_CODE_EQUATE_mobileloop
#define M2C_CODE_EQUATE_mobileloop 1
static const dd kmobileloop = 0x124f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_247_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_247_skip 1
static const dd k__m2c_macrolocal_247_skip = 0x1250;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_248_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_248_skip 1
static const dd k__m2c_macrolocal_248_skip = 0x1251;
#endif
#ifndef M2C_CODE_EQUATE_nextmobile
#define M2C_CODE_EQUATE_nextmobile 1
static const dd knextmobile = 0x1252;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_249_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_249_skip 1
static const dd k__m2c_macrolocal_249_skip = 0x1253;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_250_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_250_skip 1
static const dd k__m2c_macrolocal_250_skip = 0x1254;
#endif
#ifndef M2C_CODE_EQUATE_sortairborne
#define M2C_CODE_EQUATE_sortairborne 1
static const dd ksortairborne = 0x1255;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_252_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_252_skip 1
static const dd k__m2c_macrolocal_252_skip = 0x1256;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_254_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_254_skip 1
static const dd k__m2c_macrolocal_254_skip = 0x1257;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_255_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_255_skip 1
static const dd k__m2c_macrolocal_255_skip = 0x1258;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_256_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_256_skip 1
static const dd k__m2c_macrolocal_256_skip = 0x1259;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_257_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_257_skip 1
static const dd k__m2c_macrolocal_257_skip = 0x125a;
#endif
#ifndef M2C_CODE_EQUATE_skipmobkill
#define M2C_CODE_EQUATE_skipmobkill 1
static const dd kskipmobkill = 0x125b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel138
#define M2C_CODE_EQUATE_dummylabel138 1
static const dd kdummylabel138 = 0x125c;
#endif
#ifndef M2C_CODE_EQUATE_specialeffectsbeforenextmobile
#define M2C_CODE_EQUATE_specialeffectsbeforenextmobile 1
static const dd kspecialeffectsbeforenextmobile = 0x125d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel139
#define M2C_CODE_EQUATE_dummylabel139 1
static const dd kdummylabel139 = 0x125e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_258_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_258_skip 1
static const dd k__m2c_macrolocal_258_skip = 0x125f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel140
#define M2C_CODE_EQUATE_dummylabel140 1
static const dd kdummylabel140 = 0x1260;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_259_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_259_skip 1
static const dd k__m2c_macrolocal_259_skip = 0x1261;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel141
#define M2C_CODE_EQUATE_dummylabel141 1
static const dd kdummylabel141 = 0x1262;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_260_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_260_skip 1
static const dd k__m2c_macrolocal_260_skip = 0x1263;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel142
#define M2C_CODE_EQUATE_dummylabel142 1
static const dd kdummylabel142 = 0x1264;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_261_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_261_skip 1
static const dd k__m2c_macrolocal_261_skip = 0x1265;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel143
#define M2C_CODE_EQUATE_dummylabel143 1
static const dd kdummylabel143 = 0x1266;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel48
#define M2C_CODE_EQUATE_edummylabel48 1
static const dd kedummylabel48 = 0x1267;
#endif
#ifndef M2C_CODE_EQUATE_killtreesexit
#define M2C_CODE_EQUATE_killtreesexit 1
static const dd kkilltreesexit = 0x1268;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel49
#define M2C_CODE_EQUATE_edummylabel49 1
static const dd kedummylabel49 = 0x126a;
#endif
#ifndef M2C_CODE_EQUATE_scantreeloop
#define M2C_CODE_EQUATE_scantreeloop 1
static const dd kscantreeloop = 0x126b;
#endif
#ifndef M2C_CODE_EQUATE_nexttree
#define M2C_CODE_EQUATE_nexttree 1
static const dd knexttree = 0x126c;
#endif
#ifndef M2C_CODE_EQUATE_skiptree
#define M2C_CODE_EQUATE_skiptree 1
static const dd kskiptree = 0x126d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel50
#define M2C_CODE_EQUATE_edummylabel50 1
static const dd kedummylabel50 = 0x126e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_264_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_264_skip 1
static const dd k__m2c_macrolocal_264_skip = 0x126f;
#endif
#ifndef M2C_CODE_EQUATE_contburn
#define M2C_CODE_EQUATE_contburn 1
static const dd kcontburn = 0x1270;
#endif
#ifndef M2C_CODE_EQUATE_exploloop
#define M2C_CODE_EQUATE_exploloop 1
static const dd kexploloop = 0x1271;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel144
#define M2C_CODE_EQUATE_dummylabel144 1
static const dd kdummylabel144 = 0x1272;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel145
#define M2C_CODE_EQUATE_dummylabel145 1
static const dd kdummylabel145 = 0x1273;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel146
#define M2C_CODE_EQUATE_dummylabel146 1
static const dd kdummylabel146 = 0x1274;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel147
#define M2C_CODE_EQUATE_dummylabel147 1
static const dd kdummylabel147 = 0x1275;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel148
#define M2C_CODE_EQUATE_dummylabel148 1
static const dd kdummylabel148 = 0x1276;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel149
#define M2C_CODE_EQUATE_dummylabel149 1
static const dd kdummylabel149 = 0x1277;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel51
#define M2C_CODE_EQUATE_edummylabel51 1
static const dd kedummylabel51 = 0x1278;
#endif
#ifndef M2C_CODE_EQUATE_sortbellypylon
#define M2C_CODE_EQUATE_sortbellypylon 1
static const dd ksortbellypylon = 0x1279;
#endif
#ifndef M2C_CODE_EQUATE_dronewingpylon
#define M2C_CODE_EQUATE_dronewingpylon 1
static const dd kdronewingpylon = 0x127a;
#endif
#ifndef M2C_CODE_EQUATE_sortlaunchside
#define M2C_CODE_EQUATE_sortlaunchside 1
static const dd ksortlaunchside = 0x127b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel150
#define M2C_CODE_EQUATE_dummylabel150 1
static const dd kdummylabel150 = 0x127c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel151
#define M2C_CODE_EQUATE_dummylabel151 1
static const dd kdummylabel151 = 0x127d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel152
#define M2C_CODE_EQUATE_dummylabel152 1
static const dd kdummylabel152 = 0x127e;
#endif
#ifndef M2C_CODE_EQUATE_contpylonpos
#define M2C_CODE_EQUATE_contpylonpos 1
static const dd kcontpylonpos = 0x127f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel153
#define M2C_CODE_EQUATE_dummylabel153 1
static const dd kdummylabel153 = 0x1280;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel154
#define M2C_CODE_EQUATE_dummylabel154 1
static const dd kdummylabel154 = 0x1281;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy1 1
static const dd k__m2c_macrolocal_265_mvxy1 = 0x1282;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy2 1
static const dd k__m2c_macrolocal_265_mvxy2 = 0x1283;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy3 1
static const dd k__m2c_macrolocal_265_mvxy3 = 0x1284;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy4 1
static const dd k__m2c_macrolocal_265_mvxy4 = 0x1285;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel52
#define M2C_CODE_EQUATE_edummylabel52 1
static const dd kedummylabel52 = 0x1286;
#endif
#ifndef M2C_CODE_EQUATE_bellydecoy
#define M2C_CODE_EQUATE_bellydecoy 1
static const dd kbellydecoy = 0x1287;
#endif
#ifndef M2C_CODE_EQUATE_contdecoypos
#define M2C_CODE_EQUATE_contdecoypos 1
static const dd kcontdecoypos = 0x1288;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel155
#define M2C_CODE_EQUATE_dummylabel155 1
static const dd kdummylabel155 = 0x1289;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel156
#define M2C_CODE_EQUATE_dummylabel156 1
static const dd kdummylabel156 = 0x128a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel157
#define M2C_CODE_EQUATE_dummylabel157 1
static const dd kdummylabel157 = 0x128b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel158
#define M2C_CODE_EQUATE_dummylabel158 1
static const dd kdummylabel158 = 0x128c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy1 1
static const dd k__m2c_macrolocal_266_mvxy1 = 0x128d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy2 1
static const dd k__m2c_macrolocal_266_mvxy2 = 0x128e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy3 1
static const dd k__m2c_macrolocal_266_mvxy3 = 0x128f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy4 1
static const dd k__m2c_macrolocal_266_mvxy4 = 0x1290;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel53
#define M2C_CODE_EQUATE_edummylabel53 1
static const dd kedummylabel53 = 0x1291;
#endif
#ifndef M2C_CODE_EQUATE_nolock
#define M2C_CODE_EQUATE_nolock 1
static const dd knolock = 0x1292;
#endif
#ifndef M2C_CODE_EQUATE_irlock
#define M2C_CODE_EQUATE_irlock 1
static const dd kirlock = 0x1293;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel159
#define M2C_CODE_EQUATE_dummylabel159 1
static const dd kdummylabel159 = 0x1294;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel160
#define M2C_CODE_EQUATE_dummylabel160 1
static const dd kdummylabel160 = 0x1295;
#endif
#ifndef M2C_CODE_EQUATE_aerialexplosion
#define M2C_CODE_EQUATE_aerialexplosion 1
static const dd kaerialexplosion = 0x1296;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel54
#define M2C_CODE_EQUATE_edummylabel54 1
static const dd kedummylabel54 = 0x1297;
#endif
#ifndef M2C_CODE_EQUATE_exitaerial
#define M2C_CODE_EQUATE_exitaerial 1
static const dd kexitaerial = 0x1298;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel55
#define M2C_CODE_EQUATE_edummylabel55 1
static const dd kedummylabel55 = 0x129a;
#endif
#ifndef M2C_CODE_EQUATE_drawloop
#define M2C_CODE_EQUATE_drawloop 1
static const dd kdrawloop = 0x129b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel161
#define M2C_CODE_EQUATE_dummylabel161 1
static const dd kdummylabel161 = 0x129c;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_packageptr
#define M2C_CODE_EQUATE_packageptr 1
static const dd kpackageptr = (m2c::near_offset_external(::packageptr));
#endif
#ifndef M2C_CODE_EQUATE_loftclock
#define M2C_CODE_EQUATE_loftclock 1
static const dd kloftclock = (m2c::near_offset_external(::loftclock));
#endif
#ifndef M2C_CODE_EQUATE_loftratio
#define M2C_CODE_EQUATE_loftratio 1
static const dd kloftratio = (m2c::near_offset_external(::loftratio));
#endif
#ifndef M2C_CODE_EQUATE_rwrtgtvalid
#define M2C_CODE_EQUATE_rwrtgtvalid 1
static const dd krwrtgtvalid = (m2c::near_offset_external(::rwrtgtvalid));
#endif
#ifndef M2C_CODE_EQUATE_airtgtptr
#define M2C_CODE_EQUATE_airtgtptr 1
static const dd kairtgtptr = (m2c::near_offset_external(::airtgtptr));
#endif
#ifndef M2C_CODE_EQUATE_missiletgtptr
#define M2C_CODE_EQUATE_missiletgtptr 1
static const dd kmissiletgtptr = (m2c::near_offset_external(::missiletgtptr));
#endif
#ifndef M2C_CODE_EQUATE_airarmmode
#define M2C_CODE_EQUATE_airarmmode 1
static const dd kairarmmode = (m2c::near_offset_external(::airarmmode));
#endif
#ifndef M2C_CODE_EQUATE_airtgtrange
#define M2C_CODE_EQUATE_airtgtrange 1
static const dd kairtgtrange = (m2c::near_offset_external(::airtgtrange));
#endif
#ifndef M2C_CODE_EQUATE_gndtgtrange
#define M2C_CODE_EQUATE_gndtgtrange 1
static const dd kgndtgtrange = (m2c::near_offset_external(::gndtgtrange));
#endif
#ifndef M2C_CODE_EQUATE_launchside
#define M2C_CODE_EQUATE_launchside 1
static const dd klaunchside = (m2c::near_offset_external(::launchside));
#endif
#ifndef M2C_CODE_EQUATE_irlockflag
#define M2C_CODE_EQUATE_irlockflag 1
static const dd kirlockflag = (m2c::near_offset_external(::irlockflag));
#endif
#ifndef M2C_CODE_EQUATE_impactptr
#define M2C_CODE_EQUATE_impactptr 1
static const dd kimpactptr = (m2c::near_offset_external(::impactptr));
#endif
#ifndef M2C_CODE_EQUATE_latearmanim
#define M2C_CODE_EQUATE_latearmanim 1
static const dd klatearmanim = (m2c::near_offset_external(::latearmanim));
#endif
#ifndef M2C_CODE_EQUATE_armlock
#define M2C_CODE_EQUATE_armlock 1
static const dd karmlock = (m2c::near_offset_external(::armlock));
#endif
#ifndef M2C_CODE_EQUATE_bombthrow
#define M2C_CODE_EQUATE_bombthrow 1
static const dd kbombthrow = (m2c::near_offset_external(::bombthrow));
#endif
#ifndef M2C_CODE_EQUATE_weaponptr
#define M2C_CODE_EQUATE_weaponptr 1
static const dd kweaponptr = (m2c::near_offset_external(::weaponptr));
#endif
#ifndef M2C_CODE_EQUATE_targetptr
#define M2C_CODE_EQUATE_targetptr 1
static const dd ktargetptr = (m2c::near_offset_external(::targetptr));
#endif
#ifndef M2C_CODE_EQUATE_weaponnum
#define M2C_CODE_EQUATE_weaponnum 1
static const dd kweaponnum = (m2c::near_offset_external(::weaponnum));
#endif
#ifndef M2C_CODE_EQUATE_weaponvel
#define M2C_CODE_EQUATE_weaponvel 1
static const dd kweaponvel = (m2c::near_offset_external(::weaponvel));
#endif
#ifndef M2C_CODE_EQUATE_impactsurface
#define M2C_CODE_EQUATE_impactsurface 1
static const dd kimpactsurface = (m2c::near_offset_external(::impactsurface));
#endif
#ifndef M2C_CODE_EQUATE_tmprange
#define M2C_CODE_EQUATE_tmprange 1
static const dd ktmprange = (m2c::near_offset_external(::tmprange));
#endif
#ifndef M2C_CODE_EQUATE_radarrange
#define M2C_CODE_EQUATE_radarrange 1
static const dd kradarrange = (m2c::near_offset_external(::radarrange));
#endif
#ifndef M2C_CODE_EQUATE_radarflag
#define M2C_CODE_EQUATE_radarflag 1
static const dd kradarflag = (m2c::near_offset_external(::radarflag));
#endif
#ifndef M2C_CODE_EQUATE_wpn_mobile
#define M2C_CODE_EQUATE_wpn_mobile 1
static const dd kwpn_mobile = (m2c::near_offset_external(::wpn_mobile));
#endif
#ifndef M2C_CODE_EQUATE_wpn_view
#define M2C_CODE_EQUATE_wpn_view 1
static const dd kwpn_view = (m2c::near_offset_external(::wpn_view));
#endif
#ifndef M2C_CODE_EQUATE_wpn_weapon
#define M2C_CODE_EQUATE_wpn_weapon 1
static const dd kwpn_weapon = (m2c::near_offset_external(::wpn_weapon));
#endif
#ifndef M2C_CODE_EQUATE_extstoresindex
#define M2C_CODE_EQUATE_extstoresindex 1
static const dd kextstoresindex = (m2c::near_offset_external(::extstoresindex));
#endif
#ifndef M2C_CODE_EQUATE_extweights
#define M2C_CODE_EQUATE_extweights 1
static const dd kextweights = (m2c::near_offset_external(::extweights));
#endif
#ifndef M2C_CODE_EQUATE_jp233timer
#define M2C_CODE_EQUATE_jp233timer 1
static const dd kjp233timer = (m2c::near_offset_external(::jp233timer));
#endif
#ifndef M2C_CODE_EQUATE_cannons
#define M2C_CODE_EQUATE_cannons 1
static const dd kcannons = (m2c::near_offset_external(::cannons));
#endif
#ifndef M2C_CODE_EQUATE_cannonfine
#define M2C_CODE_EQUATE_cannonfine 1
static const dd kcannonfine = (m2c::near_offset_external(::cannonfine));
#endif
#ifndef M2C_CODE_EQUATE_shellkillzone
#define M2C_CODE_EQUATE_shellkillzone 1
static const dd kshellkillzone = (m2c::near_offset_external(::shellkillzone));
#endif
#ifndef M2C_CODE_EQUATE_cannonfired
#define M2C_CODE_EQUATE_cannonfired 1
static const dd kcannonfired = (m2c::near_offset_external(::cannonfired));
#endif
#ifndef M2C_CODE_EQUATE_alarmmode
#define M2C_CODE_EQUATE_alarmmode 1
static const dd kalarmmode = (m2c::near_offset_external(::alarmmode));
#endif
#ifndef M2C_CODE_EQUATE_ecmfitted
#define M2C_CODE_EQUATE_ecmfitted 1
static const dd kecmfitted = (m2c::near_offset_external(::ecmfitted));
#endif
#ifndef M2C_CODE_EQUATE_ecmactive
#define M2C_CODE_EQUATE_ecmactive 1
static const dd kecmactive = (m2c::near_offset_external(::ecmactive));
#endif
#ifndef M2C_CODE_EQUATE_chaffcntr
#define M2C_CODE_EQUATE_chaffcntr 1
static const dd kchaffcntr = (m2c::near_offset_external(::chaffcntr));
#endif
#ifndef M2C_CODE_EQUATE_flarecntr
#define M2C_CODE_EQUATE_flarecntr 1
static const dd kflarecntr = (m2c::near_offset_external(::flarecntr));
#endif
#ifndef M2C_CODE_EQUATE_relchaff
#define M2C_CODE_EQUATE_relchaff 1
static const dd krelchaff = (m2c::near_offset_external(::relchaff));
#endif
#ifndef M2C_CODE_EQUATE_relflare
#define M2C_CODE_EQUATE_relflare 1
static const dd krelflare = (m2c::near_offset_external(::relflare));
#endif
#ifndef M2C_CODE_EQUATE_objectnum
#define M2C_CODE_EQUATE_objectnum 1
static const dd kobjectnum = (m2c::near_offset_external(::objectnum));
#endif
#ifndef M2C_CODE_EQUATE_updateoneweapon
#define M2C_CODE_EQUATE_updateoneweapon 1
static const dd kupdateoneweapon = (m2c::near_offset_external(::updateoneweapon));
#endif
#ifndef M2C_CODE_EQUATE_armswitch
#define M2C_CODE_EQUATE_armswitch 1
static const dd karmswitch = (m2c::near_offset_external(::armswitch));
#endif
#ifndef M2C_CODE_EQUATE_releaseweapon
#define M2C_CODE_EQUATE_releaseweapon 1
static const dd kreleaseweapon = (m2c::near_offset_external(::releaseweapon));
#endif
#ifndef M2C_CODE_EQUATE_safetyheights
#define M2C_CODE_EQUATE_safetyheights 1
static const dd ksafetyheights = (m2c::near_offset_external(::safetyheights));
#endif
#ifndef M2C_CODE_EQUATE_retardfactors
#define M2C_CODE_EQUATE_retardfactors 1
static const dd kretardfactors = (m2c::near_offset_external(::retardfactors));
#endif
#ifndef M2C_CODE_EQUATE_cratersize
#define M2C_CODE_EQUATE_cratersize 1
static const dd kcratersize = (m2c::near_offset_external(::cratersize));
#endif
#ifndef M2C_CODE_EQUATE_cratersmoke
#define M2C_CODE_EQUATE_cratersmoke 1
static const dd kcratersmoke = (m2c::near_offset_external(::cratersmoke));
#endif
#ifndef M2C_CODE_EQUATE_tornadowpndie
#define M2C_CODE_EQUATE_tornadowpndie 1
static const dd ktornadowpndie = (m2c::near_offset_external(::tornadowpndie));
#endif
#ifndef M2C_CODE_EQUATE_weaponeffect
#define M2C_CODE_EQUATE_weaponeffect 1
static const dd kweaponeffect = (m2c::near_offset_external(::weaponeffect));
#endif
#ifndef M2C_CODE_EQUATE_weaponradius
#define M2C_CODE_EQUATE_weaponradius 1
static const dd kweaponradius = (m2c::near_offset_external(::weaponradius));
#endif
#ifndef M2C_CODE_EQUATE_weaponhemi
#define M2C_CODE_EQUATE_weaponhemi 1
static const dd kweaponhemi = (m2c::near_offset_external(::weaponhemi));
#endif
#ifndef M2C_CODE_EQUATE_debristype
#define M2C_CODE_EQUATE_debristype 1
static const dd kdebristype = (m2c::near_offset_external(::debristype));
#endif
#ifndef M2C_CODE_EQUATE_tgt_view
#define M2C_CODE_EQUATE_tgt_view 1
static const dd ktgt_view = (m2c::near_offset_external(::tgt_view));
#endif
#ifndef M2C_CODE_EQUATE_ccip_view
#define M2C_CODE_EQUATE_ccip_view 1
static const dd kccip_view = (m2c::near_offset_external(::ccip_view));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2964
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2964 1
static const dd k__m2c_structrow_fe1dabda_2964 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2964));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2965
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2965 1
static const dd k__m2c_structrow_fe1dabda_2965 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2965));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2966
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2966 1
static const dd k__m2c_structrow_fe1dabda_2966 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2966));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2969
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2969 1
static const dd k__m2c_structrow_fe1dabda_2969 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2969));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2970
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2970 1
static const dd k__m2c_structrow_fe1dabda_2970 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2970));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2971
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2971 1
static const dd k__m2c_structrow_fe1dabda_2971 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2971));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2974
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2974 1
static const dd k__m2c_structrow_fe1dabda_2974 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2974));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2975
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2975 1
static const dd k__m2c_structrow_fe1dabda_2975 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2975));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2976
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2976 1
static const dd k__m2c_structrow_fe1dabda_2976 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2976));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2979
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2979 1
static const dd k__m2c_structrow_fe1dabda_2979 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2979));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2980
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2980 1
static const dd k__m2c_structrow_fe1dabda_2980 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2980));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2981
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2981 1
static const dd k__m2c_structrow_fe1dabda_2981 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2981));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2984
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2984 1
static const dd k__m2c_structrow_fe1dabda_2984 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2984));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2985
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2985 1
static const dd k__m2c_structrow_fe1dabda_2985 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2985));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2986
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2986 1
static const dd k__m2c_structrow_fe1dabda_2986 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2986));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2989
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2989 1
static const dd k__m2c_structrow_fe1dabda_2989 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2989));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2990
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2990 1
static const dd k__m2c_structrow_fe1dabda_2990 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2990));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2991
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2991 1
static const dd k__m2c_structrow_fe1dabda_2991 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2991));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2994
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2994 1
static const dd k__m2c_structrow_fe1dabda_2994 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2994));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2995
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2995 1
static const dd k__m2c_structrow_fe1dabda_2995 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2995));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2996
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2996 1
static const dd k__m2c_structrow_fe1dabda_2996 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2996));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2999
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_2999 1
static const dd k__m2c_structrow_fe1dabda_2999 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_2999));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3000
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3000 1
static const dd k__m2c_structrow_fe1dabda_3000 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3000));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3001
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3001 1
static const dd k__m2c_structrow_fe1dabda_3001 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3001));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3004
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3004 1
static const dd k__m2c_structrow_fe1dabda_3004 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3004));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3005
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3005 1
static const dd k__m2c_structrow_fe1dabda_3005 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3005));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3006
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3006 1
static const dd k__m2c_structrow_fe1dabda_3006 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3006));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3009
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3009 1
static const dd k__m2c_structrow_fe1dabda_3009 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3009));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3010
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3010 1
static const dd k__m2c_structrow_fe1dabda_3010 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3010));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3011
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3011 1
static const dd k__m2c_structrow_fe1dabda_3011 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3011));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3014
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3014 1
static const dd k__m2c_structrow_fe1dabda_3014 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3014));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3015
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3015 1
static const dd k__m2c_structrow_fe1dabda_3015 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3015));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3016
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3016 1
static const dd k__m2c_structrow_fe1dabda_3016 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3016));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3019
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3019 1
static const dd k__m2c_structrow_fe1dabda_3019 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3019));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3020
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3020 1
static const dd k__m2c_structrow_fe1dabda_3020 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3020));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3021
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3021 1
static const dd k__m2c_structrow_fe1dabda_3021 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3021));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3024
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3024 1
static const dd k__m2c_structrow_fe1dabda_3024 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3024));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3025
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3025 1
static const dd k__m2c_structrow_fe1dabda_3025 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3025));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3026
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3026 1
static const dd k__m2c_structrow_fe1dabda_3026 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3026));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3029
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3029 1
static const dd k__m2c_structrow_fe1dabda_3029 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3029));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3030
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3030 1
static const dd k__m2c_structrow_fe1dabda_3030 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3030));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3031
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3031 1
static const dd k__m2c_structrow_fe1dabda_3031 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3031));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3034
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3034 1
static const dd k__m2c_structrow_fe1dabda_3034 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3034));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3035
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3035 1
static const dd k__m2c_structrow_fe1dabda_3035 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3035));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3036
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3036 1
static const dd k__m2c_structrow_fe1dabda_3036 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3036));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3039
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3039 1
static const dd k__m2c_structrow_fe1dabda_3039 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3039));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3040
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3040 1
static const dd k__m2c_structrow_fe1dabda_3040 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3040));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3041
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3041 1
static const dd k__m2c_structrow_fe1dabda_3041 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3041));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3044
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3044 1
static const dd k__m2c_structrow_fe1dabda_3044 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3044));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3045
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3045 1
static const dd k__m2c_structrow_fe1dabda_3045 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3045));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3046
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3046 1
static const dd k__m2c_structrow_fe1dabda_3046 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3046));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3049
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3049 1
static const dd k__m2c_structrow_fe1dabda_3049 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3049));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3050
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3050 1
static const dd k__m2c_structrow_fe1dabda_3050 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3050));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3051
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3051 1
static const dd k__m2c_structrow_fe1dabda_3051 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3051));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3054
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3054 1
static const dd k__m2c_structrow_fe1dabda_3054 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3054));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3055
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3055 1
static const dd k__m2c_structrow_fe1dabda_3055 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3055));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3056
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3056 1
static const dd k__m2c_structrow_fe1dabda_3056 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3056));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3059
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3059 1
static const dd k__m2c_structrow_fe1dabda_3059 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3059));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3060
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3060 1
static const dd k__m2c_structrow_fe1dabda_3060 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3060));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3061
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3061 1
static const dd k__m2c_structrow_fe1dabda_3061 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3061));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3064
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3064 1
static const dd k__m2c_structrow_fe1dabda_3064 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3064));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3065
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3065 1
static const dd k__m2c_structrow_fe1dabda_3065 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3065));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3066
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3066 1
static const dd k__m2c_structrow_fe1dabda_3066 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3066));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3069
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3069 1
static const dd k__m2c_structrow_fe1dabda_3069 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3069));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3070
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3070 1
static const dd k__m2c_structrow_fe1dabda_3070 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3070));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3071
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3071 1
static const dd k__m2c_structrow_fe1dabda_3071 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3071));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3074
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3074 1
static const dd k__m2c_structrow_fe1dabda_3074 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3074));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3075
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3075 1
static const dd k__m2c_structrow_fe1dabda_3075 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3075));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3076
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3076 1
static const dd k__m2c_structrow_fe1dabda_3076 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3076));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3079
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3079 1
static const dd k__m2c_structrow_fe1dabda_3079 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3079));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3080
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3080 1
static const dd k__m2c_structrow_fe1dabda_3080 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3080));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3081
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3081 1
static const dd k__m2c_structrow_fe1dabda_3081 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3081));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3084
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3084 1
static const dd k__m2c_structrow_fe1dabda_3084 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3084));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3085
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3085 1
static const dd k__m2c_structrow_fe1dabda_3085 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3085));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3086
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3086 1
static const dd k__m2c_structrow_fe1dabda_3086 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3086));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3089
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3089 1
static const dd k__m2c_structrow_fe1dabda_3089 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3089));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3090
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3090 1
static const dd k__m2c_structrow_fe1dabda_3090 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3090));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3091
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3091 1
static const dd k__m2c_structrow_fe1dabda_3091 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3091));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3094
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3094 1
static const dd k__m2c_structrow_fe1dabda_3094 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3094));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3095
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3095 1
static const dd k__m2c_structrow_fe1dabda_3095 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3095));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3096
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3096 1
static const dd k__m2c_structrow_fe1dabda_3096 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3096));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3099
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3099 1
static const dd k__m2c_structrow_fe1dabda_3099 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3099));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3100
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3100 1
static const dd k__m2c_structrow_fe1dabda_3100 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3100));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3101
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3101 1
static const dd k__m2c_structrow_fe1dabda_3101 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3101));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3104
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3104 1
static const dd k__m2c_structrow_fe1dabda_3104 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3104));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3105
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3105 1
static const dd k__m2c_structrow_fe1dabda_3105 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3105));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3106
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3106 1
static const dd k__m2c_structrow_fe1dabda_3106 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3106));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3109
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3109 1
static const dd k__m2c_structrow_fe1dabda_3109 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3109));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3110
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3110 1
static const dd k__m2c_structrow_fe1dabda_3110 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3110));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3111
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3111 1
static const dd k__m2c_structrow_fe1dabda_3111 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3111));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3114
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3114 1
static const dd k__m2c_structrow_fe1dabda_3114 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3114));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3115
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3115 1
static const dd k__m2c_structrow_fe1dabda_3115 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3115));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3116
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3116 1
static const dd k__m2c_structrow_fe1dabda_3116 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3116));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3119
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3119 1
static const dd k__m2c_structrow_fe1dabda_3119 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3119));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3120
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3120 1
static const dd k__m2c_structrow_fe1dabda_3120 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3120));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3121
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3121 1
static const dd k__m2c_structrow_fe1dabda_3121 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3121));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3124
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3124 1
static const dd k__m2c_structrow_fe1dabda_3124 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3124));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3125
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3125 1
static const dd k__m2c_structrow_fe1dabda_3125 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3125));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3126
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3126 1
static const dd k__m2c_structrow_fe1dabda_3126 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3126));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3129
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3129 1
static const dd k__m2c_structrow_fe1dabda_3129 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3129));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3130
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3130 1
static const dd k__m2c_structrow_fe1dabda_3130 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3130));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3131
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3131 1
static const dd k__m2c_structrow_fe1dabda_3131 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3131));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3134
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3134 1
static const dd k__m2c_structrow_fe1dabda_3134 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3134));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3135
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3135 1
static const dd k__m2c_structrow_fe1dabda_3135 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3135));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3136
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3136 1
static const dd k__m2c_structrow_fe1dabda_3136 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3136));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3139
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3139 1
static const dd k__m2c_structrow_fe1dabda_3139 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3139));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3140
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3140 1
static const dd k__m2c_structrow_fe1dabda_3140 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3140));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3141
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3141 1
static const dd k__m2c_structrow_fe1dabda_3141 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3141));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3144
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3144 1
static const dd k__m2c_structrow_fe1dabda_3144 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3144));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3145
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3145 1
static const dd k__m2c_structrow_fe1dabda_3145 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3145));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3146
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3146 1
static const dd k__m2c_structrow_fe1dabda_3146 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3146));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3149
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3149 1
static const dd k__m2c_structrow_fe1dabda_3149 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3149));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3150
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3150 1
static const dd k__m2c_structrow_fe1dabda_3150 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3150));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3151
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3151 1
static const dd k__m2c_structrow_fe1dabda_3151 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3151));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3154
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3154 1
static const dd k__m2c_structrow_fe1dabda_3154 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3154));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3155
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3155 1
static const dd k__m2c_structrow_fe1dabda_3155 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3155));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3156
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3156 1
static const dd k__m2c_structrow_fe1dabda_3156 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3156));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3159
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3159 1
static const dd k__m2c_structrow_fe1dabda_3159 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3159));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3160
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3160 1
static const dd k__m2c_structrow_fe1dabda_3160 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3160));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3161
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3161 1
static const dd k__m2c_structrow_fe1dabda_3161 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3161));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3164
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3164 1
static const dd k__m2c_structrow_fe1dabda_3164 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3164));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3165
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3165 1
static const dd k__m2c_structrow_fe1dabda_3165 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3165));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3166
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3166 1
static const dd k__m2c_structrow_fe1dabda_3166 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3166));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3169
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3169 1
static const dd k__m2c_structrow_fe1dabda_3169 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3169));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3170
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3170 1
static const dd k__m2c_structrow_fe1dabda_3170 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3170));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3171
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3171 1
static const dd k__m2c_structrow_fe1dabda_3171 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3171));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3174
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3174 1
static const dd k__m2c_structrow_fe1dabda_3174 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3174));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3175
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3175 1
static const dd k__m2c_structrow_fe1dabda_3175 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3175));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3176
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3176 1
static const dd k__m2c_structrow_fe1dabda_3176 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3176));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3179
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3179 1
static const dd k__m2c_structrow_fe1dabda_3179 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3179));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3180
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3180 1
static const dd k__m2c_structrow_fe1dabda_3180 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3180));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3181
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3181 1
static const dd k__m2c_structrow_fe1dabda_3181 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3181));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3184
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3184 1
static const dd k__m2c_structrow_fe1dabda_3184 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3184));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3185
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3185 1
static const dd k__m2c_structrow_fe1dabda_3185 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3185));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3186
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3186 1
static const dd k__m2c_structrow_fe1dabda_3186 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3186));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3189
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3189 1
static const dd k__m2c_structrow_fe1dabda_3189 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3189));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3190
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3190 1
static const dd k__m2c_structrow_fe1dabda_3190 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3190));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3191
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3191 1
static const dd k__m2c_structrow_fe1dabda_3191 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3191));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3194
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3194 1
static const dd k__m2c_structrow_fe1dabda_3194 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3194));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3195
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3195 1
static const dd k__m2c_structrow_fe1dabda_3195 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3195));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3196
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3196 1
static const dd k__m2c_structrow_fe1dabda_3196 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3196));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3199
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3199 1
static const dd k__m2c_structrow_fe1dabda_3199 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3199));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3200
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3200 1
static const dd k__m2c_structrow_fe1dabda_3200 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3200));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3201
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3201 1
static const dd k__m2c_structrow_fe1dabda_3201 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3201));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3204
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3204 1
static const dd k__m2c_structrow_fe1dabda_3204 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3204));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3205
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3205 1
static const dd k__m2c_structrow_fe1dabda_3205 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3205));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3206
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3206 1
static const dd k__m2c_structrow_fe1dabda_3206 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3206));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3209
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3209 1
static const dd k__m2c_structrow_fe1dabda_3209 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3209));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3210
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3210 1
static const dd k__m2c_structrow_fe1dabda_3210 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3210));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3211
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3211 1
static const dd k__m2c_structrow_fe1dabda_3211 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3211));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3214
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3214 1
static const dd k__m2c_structrow_fe1dabda_3214 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3214));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3215
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3215 1
static const dd k__m2c_structrow_fe1dabda_3215 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3215));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3216
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3216 1
static const dd k__m2c_structrow_fe1dabda_3216 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3216));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3219
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3219 1
static const dd k__m2c_structrow_fe1dabda_3219 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3219));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3220
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3220 1
static const dd k__m2c_structrow_fe1dabda_3220 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3220));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3221
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3221 1
static const dd k__m2c_structrow_fe1dabda_3221 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3221));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3224
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3224 1
static const dd k__m2c_structrow_fe1dabda_3224 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3224));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3225
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3225 1
static const dd k__m2c_structrow_fe1dabda_3225 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3225));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3226
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3226 1
static const dd k__m2c_structrow_fe1dabda_3226 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3226));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3229
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3229 1
static const dd k__m2c_structrow_fe1dabda_3229 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3229));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3230
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3230 1
static const dd k__m2c_structrow_fe1dabda_3230 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3230));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3231
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3231 1
static const dd k__m2c_structrow_fe1dabda_3231 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3231));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3234
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3234 1
static const dd k__m2c_structrow_fe1dabda_3234 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3234));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3235
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3235 1
static const dd k__m2c_structrow_fe1dabda_3235 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3235));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3236
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3236 1
static const dd k__m2c_structrow_fe1dabda_3236 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3236));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3239
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3239 1
static const dd k__m2c_structrow_fe1dabda_3239 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3239));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3240
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3240 1
static const dd k__m2c_structrow_fe1dabda_3240 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3240));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3241
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3241 1
static const dd k__m2c_structrow_fe1dabda_3241 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3241));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3244
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3244 1
static const dd k__m2c_structrow_fe1dabda_3244 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3244));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3245
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3245 1
static const dd k__m2c_structrow_fe1dabda_3245 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3245));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3246
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3246 1
static const dd k__m2c_structrow_fe1dabda_3246 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3246));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3249
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3249 1
static const dd k__m2c_structrow_fe1dabda_3249 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3249));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3250
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3250 1
static const dd k__m2c_structrow_fe1dabda_3250 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3250));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3251
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3251 1
static const dd k__m2c_structrow_fe1dabda_3251 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3251));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3254
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3254 1
static const dd k__m2c_structrow_fe1dabda_3254 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3254));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3255
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3255 1
static const dd k__m2c_structrow_fe1dabda_3255 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3255));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3256
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3256 1
static const dd k__m2c_structrow_fe1dabda_3256 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3256));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3259
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3259 1
static const dd k__m2c_structrow_fe1dabda_3259 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3259));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3260
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3260 1
static const dd k__m2c_structrow_fe1dabda_3260 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3260));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3261
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3261 1
static const dd k__m2c_structrow_fe1dabda_3261 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3261));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3264
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3264 1
static const dd k__m2c_structrow_fe1dabda_3264 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3264));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3265
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3265 1
static const dd k__m2c_structrow_fe1dabda_3265 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3265));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3266
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3266 1
static const dd k__m2c_structrow_fe1dabda_3266 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3266));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3269
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3269 1
static const dd k__m2c_structrow_fe1dabda_3269 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3269));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3270
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3270 1
static const dd k__m2c_structrow_fe1dabda_3270 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3270));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3271
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3271 1
static const dd k__m2c_structrow_fe1dabda_3271 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3271));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3274
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3274 1
static const dd k__m2c_structrow_fe1dabda_3274 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3274));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3275
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3275 1
static const dd k__m2c_structrow_fe1dabda_3275 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3275));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3276
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3276 1
static const dd k__m2c_structrow_fe1dabda_3276 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3276));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3279
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3279 1
static const dd k__m2c_structrow_fe1dabda_3279 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3279));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3280
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3280 1
static const dd k__m2c_structrow_fe1dabda_3280 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3280));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3281
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3281 1
static const dd k__m2c_structrow_fe1dabda_3281 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3281));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3284
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3284 1
static const dd k__m2c_structrow_fe1dabda_3284 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3284));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3285
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3285 1
static const dd k__m2c_structrow_fe1dabda_3285 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3285));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3286
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3286 1
static const dd k__m2c_structrow_fe1dabda_3286 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3286));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3289
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3289 1
static const dd k__m2c_structrow_fe1dabda_3289 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3289));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3290
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3290 1
static const dd k__m2c_structrow_fe1dabda_3290 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3290));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3291
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3291 1
static const dd k__m2c_structrow_fe1dabda_3291 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3291));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3294
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3294 1
static const dd k__m2c_structrow_fe1dabda_3294 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3294));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3295
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3295 1
static const dd k__m2c_structrow_fe1dabda_3295 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3295));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3296
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3296 1
static const dd k__m2c_structrow_fe1dabda_3296 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3296));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3299
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3299 1
static const dd k__m2c_structrow_fe1dabda_3299 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3299));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3300
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3300 1
static const dd k__m2c_structrow_fe1dabda_3300 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3300));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3301
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3301 1
static const dd k__m2c_structrow_fe1dabda_3301 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3301));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3304
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3304 1
static const dd k__m2c_structrow_fe1dabda_3304 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3304));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3305
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3305 1
static const dd k__m2c_structrow_fe1dabda_3305 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3305));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3306
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3306 1
static const dd k__m2c_structrow_fe1dabda_3306 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3306));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3309
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3309 1
static const dd k__m2c_structrow_fe1dabda_3309 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3309));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3310
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3310 1
static const dd k__m2c_structrow_fe1dabda_3310 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3310));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3311
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3311 1
static const dd k__m2c_structrow_fe1dabda_3311 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3311));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3314
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3314 1
static const dd k__m2c_structrow_fe1dabda_3314 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3314));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3315
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3315 1
static const dd k__m2c_structrow_fe1dabda_3315 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3315));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3316
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3316 1
static const dd k__m2c_structrow_fe1dabda_3316 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3316));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3319
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3319 1
static const dd k__m2c_structrow_fe1dabda_3319 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3319));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3320
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3320 1
static const dd k__m2c_structrow_fe1dabda_3320 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3320));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3321
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3321 1
static const dd k__m2c_structrow_fe1dabda_3321 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3321));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3324
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3324 1
static const dd k__m2c_structrow_fe1dabda_3324 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3324));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3325
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3325 1
static const dd k__m2c_structrow_fe1dabda_3325 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3325));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3326
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3326 1
static const dd k__m2c_structrow_fe1dabda_3326 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3326));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3329
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3329 1
static const dd k__m2c_structrow_fe1dabda_3329 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3329));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3330
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3330 1
static const dd k__m2c_structrow_fe1dabda_3330 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3330));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3331
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3331 1
static const dd k__m2c_structrow_fe1dabda_3331 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3331));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3334
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3334 1
static const dd k__m2c_structrow_fe1dabda_3334 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3334));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3335
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3335 1
static const dd k__m2c_structrow_fe1dabda_3335 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3335));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3336
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3336 1
static const dd k__m2c_structrow_fe1dabda_3336 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3336));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3339
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3339 1
static const dd k__m2c_structrow_fe1dabda_3339 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3339));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3340
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3340 1
static const dd k__m2c_structrow_fe1dabda_3340 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3340));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3341
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3341 1
static const dd k__m2c_structrow_fe1dabda_3341 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3341));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3344
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3344 1
static const dd k__m2c_structrow_fe1dabda_3344 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3344));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3345
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3345 1
static const dd k__m2c_structrow_fe1dabda_3345 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3345));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3346
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3346 1
static const dd k__m2c_structrow_fe1dabda_3346 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3346));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3349
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3349 1
static const dd k__m2c_structrow_fe1dabda_3349 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3349));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3350
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3350 1
static const dd k__m2c_structrow_fe1dabda_3350 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3350));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3351
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3351 1
static const dd k__m2c_structrow_fe1dabda_3351 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3351));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3354
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3354 1
static const dd k__m2c_structrow_fe1dabda_3354 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3354));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3355
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3355 1
static const dd k__m2c_structrow_fe1dabda_3355 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3355));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3356
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3356 1
static const dd k__m2c_structrow_fe1dabda_3356 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3356));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3359
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3359 1
static const dd k__m2c_structrow_fe1dabda_3359 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3359));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3360
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3360 1
static const dd k__m2c_structrow_fe1dabda_3360 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3360));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3361
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3361 1
static const dd k__m2c_structrow_fe1dabda_3361 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3361));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3364
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3364 1
static const dd k__m2c_structrow_fe1dabda_3364 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3364));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3365
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3365 1
static const dd k__m2c_structrow_fe1dabda_3365 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3365));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3366
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3366 1
static const dd k__m2c_structrow_fe1dabda_3366 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3366));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3369
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3369 1
static const dd k__m2c_structrow_fe1dabda_3369 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3369));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3370
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3370 1
static const dd k__m2c_structrow_fe1dabda_3370 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3370));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3371
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3371 1
static const dd k__m2c_structrow_fe1dabda_3371 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3371));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3374
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3374 1
static const dd k__m2c_structrow_fe1dabda_3374 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3374));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3375
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3375 1
static const dd k__m2c_structrow_fe1dabda_3375 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3375));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3376
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3376 1
static const dd k__m2c_structrow_fe1dabda_3376 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3376));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3379
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3379 1
static const dd k__m2c_structrow_fe1dabda_3379 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3379));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3380
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3380 1
static const dd k__m2c_structrow_fe1dabda_3380 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3380));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3381
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3381 1
static const dd k__m2c_structrow_fe1dabda_3381 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3381));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3384
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3384 1
static const dd k__m2c_structrow_fe1dabda_3384 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3384));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3385
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3385 1
static const dd k__m2c_structrow_fe1dabda_3385 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3385));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3386
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3386 1
static const dd k__m2c_structrow_fe1dabda_3386 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3386));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3389
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3389 1
static const dd k__m2c_structrow_fe1dabda_3389 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3389));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3390
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3390 1
static const dd k__m2c_structrow_fe1dabda_3390 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3390));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3391
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3391 1
static const dd k__m2c_structrow_fe1dabda_3391 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3391));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3394
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3394 1
static const dd k__m2c_structrow_fe1dabda_3394 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3394));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3395
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3395 1
static const dd k__m2c_structrow_fe1dabda_3395 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3395));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3396
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3396 1
static const dd k__m2c_structrow_fe1dabda_3396 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3396));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3399
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3399 1
static const dd k__m2c_structrow_fe1dabda_3399 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3399));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3400
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3400 1
static const dd k__m2c_structrow_fe1dabda_3400 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3400));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3401
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3401 1
static const dd k__m2c_structrow_fe1dabda_3401 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3401));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3404
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3404 1
static const dd k__m2c_structrow_fe1dabda_3404 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3404));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3405
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3405 1
static const dd k__m2c_structrow_fe1dabda_3405 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3405));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3406
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3406 1
static const dd k__m2c_structrow_fe1dabda_3406 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3406));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3409
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3409 1
static const dd k__m2c_structrow_fe1dabda_3409 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3409));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3410
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3410 1
static const dd k__m2c_structrow_fe1dabda_3410 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3410));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3411
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3411 1
static const dd k__m2c_structrow_fe1dabda_3411 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3411));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3414
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3414 1
static const dd k__m2c_structrow_fe1dabda_3414 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3414));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3415
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3415 1
static const dd k__m2c_structrow_fe1dabda_3415 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3415));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3416
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3416 1
static const dd k__m2c_structrow_fe1dabda_3416 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3416));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3419
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3419 1
static const dd k__m2c_structrow_fe1dabda_3419 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3419));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3420
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3420 1
static const dd k__m2c_structrow_fe1dabda_3420 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3420));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3421
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3421 1
static const dd k__m2c_structrow_fe1dabda_3421 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3421));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3424
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3424 1
static const dd k__m2c_structrow_fe1dabda_3424 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3424));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3425
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3425 1
static const dd k__m2c_structrow_fe1dabda_3425 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3425));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3426
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3426 1
static const dd k__m2c_structrow_fe1dabda_3426 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3426));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3429
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3429 1
static const dd k__m2c_structrow_fe1dabda_3429 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3429));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3430
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3430 1
static const dd k__m2c_structrow_fe1dabda_3430 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3430));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3431
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3431 1
static const dd k__m2c_structrow_fe1dabda_3431 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3431));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3434
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3434 1
static const dd k__m2c_structrow_fe1dabda_3434 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3434));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3435
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3435 1
static const dd k__m2c_structrow_fe1dabda_3435 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3435));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3436
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3436 1
static const dd k__m2c_structrow_fe1dabda_3436 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3436));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3439
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3439 1
static const dd k__m2c_structrow_fe1dabda_3439 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3439));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3440
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3440 1
static const dd k__m2c_structrow_fe1dabda_3440 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3440));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3441
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3441 1
static const dd k__m2c_structrow_fe1dabda_3441 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3441));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3444
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3444 1
static const dd k__m2c_structrow_fe1dabda_3444 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3444));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3445
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3445 1
static const dd k__m2c_structrow_fe1dabda_3445 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3445));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3446
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3446 1
static const dd k__m2c_structrow_fe1dabda_3446 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3446));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3449
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3449 1
static const dd k__m2c_structrow_fe1dabda_3449 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3449));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3450
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3450 1
static const dd k__m2c_structrow_fe1dabda_3450 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3450));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3451
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3451 1
static const dd k__m2c_structrow_fe1dabda_3451 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3451));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3454
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3454 1
static const dd k__m2c_structrow_fe1dabda_3454 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3454));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3455
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3455 1
static const dd k__m2c_structrow_fe1dabda_3455 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3455));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3456
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3456 1
static const dd k__m2c_structrow_fe1dabda_3456 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3456));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3459
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3459 1
static const dd k__m2c_structrow_fe1dabda_3459 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3459));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3460
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3460 1
static const dd k__m2c_structrow_fe1dabda_3460 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3460));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3461
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3461 1
static const dd k__m2c_structrow_fe1dabda_3461 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3461));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3464
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3464 1
static const dd k__m2c_structrow_fe1dabda_3464 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3464));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3465
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3465 1
static const dd k__m2c_structrow_fe1dabda_3465 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3465));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3466
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3466 1
static const dd k__m2c_structrow_fe1dabda_3466 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3466));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3469
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3469 1
static const dd k__m2c_structrow_fe1dabda_3469 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3469));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3470
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3470 1
static const dd k__m2c_structrow_fe1dabda_3470 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3470));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3471
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3471 1
static const dd k__m2c_structrow_fe1dabda_3471 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3471));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3474
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3474 1
static const dd k__m2c_structrow_fe1dabda_3474 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3474));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3475
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3475 1
static const dd k__m2c_structrow_fe1dabda_3475 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3475));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3476
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3476 1
static const dd k__m2c_structrow_fe1dabda_3476 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3476));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3479
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3479 1
static const dd k__m2c_structrow_fe1dabda_3479 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3479));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3480
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3480 1
static const dd k__m2c_structrow_fe1dabda_3480 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3480));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3481
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3481 1
static const dd k__m2c_structrow_fe1dabda_3481 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3481));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3484
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3484 1
static const dd k__m2c_structrow_fe1dabda_3484 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3484));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3485
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3485 1
static const dd k__m2c_structrow_fe1dabda_3485 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3485));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3486
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3486 1
static const dd k__m2c_structrow_fe1dabda_3486 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3486));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3489
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3489 1
static const dd k__m2c_structrow_fe1dabda_3489 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3489));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3490
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3490 1
static const dd k__m2c_structrow_fe1dabda_3490 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3490));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3491
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3491 1
static const dd k__m2c_structrow_fe1dabda_3491 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3491));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3494
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3494 1
static const dd k__m2c_structrow_fe1dabda_3494 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3494));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3495
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3495 1
static const dd k__m2c_structrow_fe1dabda_3495 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3495));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3496
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3496 1
static const dd k__m2c_structrow_fe1dabda_3496 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3496));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3499
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3499 1
static const dd k__m2c_structrow_fe1dabda_3499 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3499));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3500
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3500 1
static const dd k__m2c_structrow_fe1dabda_3500 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3500));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3501
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3501 1
static const dd k__m2c_structrow_fe1dabda_3501 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3501));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3504
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3504 1
static const dd k__m2c_structrow_fe1dabda_3504 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3504));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3505
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3505 1
static const dd k__m2c_structrow_fe1dabda_3505 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3505));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3506
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3506 1
static const dd k__m2c_structrow_fe1dabda_3506 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3506));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3509
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3509 1
static const dd k__m2c_structrow_fe1dabda_3509 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3509));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3510
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3510 1
static const dd k__m2c_structrow_fe1dabda_3510 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3510));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3511
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3511 1
static const dd k__m2c_structrow_fe1dabda_3511 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3511));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3514
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3514 1
static const dd k__m2c_structrow_fe1dabda_3514 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3514));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3515
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3515 1
static const dd k__m2c_structrow_fe1dabda_3515 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3515));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3516
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3516 1
static const dd k__m2c_structrow_fe1dabda_3516 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3516));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3519
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3519 1
static const dd k__m2c_structrow_fe1dabda_3519 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3519));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3520
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3520 1
static const dd k__m2c_structrow_fe1dabda_3520 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3520));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3521
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3521 1
static const dd k__m2c_structrow_fe1dabda_3521 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3521));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3524
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3524 1
static const dd k__m2c_structrow_fe1dabda_3524 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3524));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3525
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3525 1
static const dd k__m2c_structrow_fe1dabda_3525 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3525));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3526
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3526 1
static const dd k__m2c_structrow_fe1dabda_3526 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3526));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3529
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3529 1
static const dd k__m2c_structrow_fe1dabda_3529 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3529));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3530
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3530 1
static const dd k__m2c_structrow_fe1dabda_3530 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3530));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3531
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3531 1
static const dd k__m2c_structrow_fe1dabda_3531 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3531));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3534
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3534 1
static const dd k__m2c_structrow_fe1dabda_3534 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3534));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3535
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3535 1
static const dd k__m2c_structrow_fe1dabda_3535 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3535));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3536
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3536 1
static const dd k__m2c_structrow_fe1dabda_3536 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3536));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3539
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3539 1
static const dd k__m2c_structrow_fe1dabda_3539 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3539));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3540
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3540 1
static const dd k__m2c_structrow_fe1dabda_3540 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3540));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3541
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3541 1
static const dd k__m2c_structrow_fe1dabda_3541 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3541));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3544
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3544 1
static const dd k__m2c_structrow_fe1dabda_3544 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3544));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3545
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3545 1
static const dd k__m2c_structrow_fe1dabda_3545 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3545));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3546
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3546 1
static const dd k__m2c_structrow_fe1dabda_3546 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3546));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3549
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3549 1
static const dd k__m2c_structrow_fe1dabda_3549 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3549));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3550
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3550 1
static const dd k__m2c_structrow_fe1dabda_3550 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3550));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3551
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3551 1
static const dd k__m2c_structrow_fe1dabda_3551 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3551));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3554
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3554 1
static const dd k__m2c_structrow_fe1dabda_3554 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3554));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3555
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3555 1
static const dd k__m2c_structrow_fe1dabda_3555 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3555));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3556
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3556 1
static const dd k__m2c_structrow_fe1dabda_3556 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3556));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3559
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3559 1
static const dd k__m2c_structrow_fe1dabda_3559 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3559));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3560
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3560 1
static const dd k__m2c_structrow_fe1dabda_3560 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3560));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3561
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3561 1
static const dd k__m2c_structrow_fe1dabda_3561 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3561));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3564
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3564 1
static const dd k__m2c_structrow_fe1dabda_3564 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3564));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3565
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3565 1
static const dd k__m2c_structrow_fe1dabda_3565 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3565));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3566
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3566 1
static const dd k__m2c_structrow_fe1dabda_3566 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3566));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3569
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3569 1
static const dd k__m2c_structrow_fe1dabda_3569 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3569));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3570
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3570 1
static const dd k__m2c_structrow_fe1dabda_3570 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3570));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3571
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3571 1
static const dd k__m2c_structrow_fe1dabda_3571 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3571));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3574
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3574 1
static const dd k__m2c_structrow_fe1dabda_3574 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3574));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3575
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3575 1
static const dd k__m2c_structrow_fe1dabda_3575 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3575));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3576
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3576 1
static const dd k__m2c_structrow_fe1dabda_3576 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3576));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3579
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3579 1
static const dd k__m2c_structrow_fe1dabda_3579 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3579));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3580
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3580 1
static const dd k__m2c_structrow_fe1dabda_3580 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3580));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3581
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3581 1
static const dd k__m2c_structrow_fe1dabda_3581 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3581));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3584
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3584 1
static const dd k__m2c_structrow_fe1dabda_3584 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3584));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3585
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3585 1
static const dd k__m2c_structrow_fe1dabda_3585 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3585));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3586
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3586 1
static const dd k__m2c_structrow_fe1dabda_3586 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3586));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3589
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3589 1
static const dd k__m2c_structrow_fe1dabda_3589 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3589));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3590
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3590 1
static const dd k__m2c_structrow_fe1dabda_3590 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3590));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3591
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3591 1
static const dd k__m2c_structrow_fe1dabda_3591 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3591));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3594
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3594 1
static const dd k__m2c_structrow_fe1dabda_3594 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3594));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3595
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3595 1
static const dd k__m2c_structrow_fe1dabda_3595 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3595));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3596
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3596 1
static const dd k__m2c_structrow_fe1dabda_3596 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3596));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3599
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3599 1
static const dd k__m2c_structrow_fe1dabda_3599 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3599));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3600
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3600 1
static const dd k__m2c_structrow_fe1dabda_3600 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3600));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3601
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3601 1
static const dd k__m2c_structrow_fe1dabda_3601 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3601));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3604
#define M2C_CODE_EQUATE___m2c_structrow_fe1dabda_3604 1
static const dd k__m2c_structrow_fe1dabda_3604 = (m2c::near_offset_external(::__m2c_structrow_fe1dabda_3604));
#endif
}
#ifndef packageptr
#define packageptr m2c::kpackageptr
#endif
#ifndef loftclock
#define loftclock m2c::kloftclock
#endif
#ifndef loftratio
#define loftratio m2c::kloftratio
#endif
#ifndef rwrtgtvalid
#define rwrtgtvalid m2c::krwrtgtvalid
#endif
#ifndef airtgtptr
#define airtgtptr m2c::kairtgtptr
#endif
#ifndef missiletgtptr
#define missiletgtptr m2c::kmissiletgtptr
#endif
#ifndef airarmmode
#define airarmmode m2c::kairarmmode
#endif
#ifndef airtgtrange
#define airtgtrange m2c::kairtgtrange
#endif
#ifndef gndtgtrange
#define gndtgtrange m2c::kgndtgtrange
#endif
#ifndef launchside
#define launchside m2c::klaunchside
#endif
#ifndef irlockflag
#define irlockflag m2c::kirlockflag
#endif
#ifndef impactptr
#define impactptr m2c::kimpactptr
#endif
#ifndef latearmanim
#define latearmanim m2c::klatearmanim
#endif
#ifndef armlock
#define armlock m2c::karmlock
#endif
#ifndef bombthrow
#define bombthrow m2c::kbombthrow
#endif
#ifndef weaponptr
#define weaponptr m2c::kweaponptr
#endif
#ifndef targetptr
#define targetptr m2c::ktargetptr
#endif
#ifndef weaponnum
#define weaponnum m2c::kweaponnum
#endif
#ifndef weaponvel
#define weaponvel m2c::kweaponvel
#endif
#ifndef impactsurface
#define impactsurface m2c::kimpactsurface
#endif
#ifndef tmprange
#define tmprange m2c::ktmprange
#endif
#ifndef radarrange
#define radarrange m2c::kradarrange
#endif
#ifndef radarflag
#define radarflag m2c::kradarflag
#endif
#ifndef wpn_mobile
#define wpn_mobile m2c::kwpn_mobile
#endif
#ifndef wpn_view
#define wpn_view m2c::kwpn_view
#endif
#ifndef wpn_weapon
#define wpn_weapon m2c::kwpn_weapon
#endif
#ifndef extstoresindex
#define extstoresindex m2c::kextstoresindex
#endif
#ifndef extweights
#define extweights m2c::kextweights
#endif
#ifndef jp233timer
#define jp233timer m2c::kjp233timer
#endif
#ifndef cannons
#define cannons m2c::kcannons
#endif
#ifndef cannonfine
#define cannonfine m2c::kcannonfine
#endif
#ifndef shellkillzone
#define shellkillzone m2c::kshellkillzone
#endif
#ifndef cannonfired
#define cannonfired m2c::kcannonfired
#endif
#ifndef alarmmode
#define alarmmode m2c::kalarmmode
#endif
#ifndef ecmfitted
#define ecmfitted m2c::kecmfitted
#endif
#ifndef ecmactive
#define ecmactive m2c::kecmactive
#endif
#ifndef chaffcntr
#define chaffcntr m2c::kchaffcntr
#endif
#ifndef flarecntr
#define flarecntr m2c::kflarecntr
#endif
#ifndef relchaff
#define relchaff m2c::krelchaff
#endif
#ifndef relflare
#define relflare m2c::krelflare
#endif
#ifndef objectnum
#define objectnum m2c::kobjectnum
#endif
#ifndef updateoneweapon
#define updateoneweapon m2c::kupdateoneweapon
#endif
#ifndef armswitch
#define armswitch m2c::karmswitch
#endif
#ifndef releaseweapon
#define releaseweapon m2c::kreleaseweapon
#endif
#ifndef safetyheights
#define safetyheights m2c::ksafetyheights
#endif
#ifndef retardfactors
#define retardfactors m2c::kretardfactors
#endif
#ifndef cratersize
#define cratersize m2c::kcratersize
#endif
#ifndef cratersmoke
#define cratersmoke m2c::kcratersmoke
#endif
#ifndef tornadowpndie
#define tornadowpndie m2c::ktornadowpndie
#endif
#ifndef weaponeffect
#define weaponeffect m2c::kweaponeffect
#endif
#ifndef weaponradius
#define weaponradius m2c::kweaponradius
#endif
#ifndef weaponhemi
#define weaponhemi m2c::kweaponhemi
#endif
#ifndef debristype
#define debristype m2c::kdebristype
#endif
#ifndef tgt_view
#define tgt_view m2c::ktgt_view
#endif
#ifndef ccip_view
#define ccip_view m2c::kccip_view
#endif
#ifndef __m2c_structrow_fe1dabda_2964
#define __m2c_structrow_fe1dabda_2964 m2c::k__m2c_structrow_fe1dabda_2964
#endif
#ifndef __m2c_structrow_fe1dabda_2965
#define __m2c_structrow_fe1dabda_2965 m2c::k__m2c_structrow_fe1dabda_2965
#endif
#ifndef __m2c_structrow_fe1dabda_2966
#define __m2c_structrow_fe1dabda_2966 m2c::k__m2c_structrow_fe1dabda_2966
#endif
#ifndef __m2c_structrow_fe1dabda_2969
#define __m2c_structrow_fe1dabda_2969 m2c::k__m2c_structrow_fe1dabda_2969
#endif
#ifndef __m2c_structrow_fe1dabda_2970
#define __m2c_structrow_fe1dabda_2970 m2c::k__m2c_structrow_fe1dabda_2970
#endif
#ifndef __m2c_structrow_fe1dabda_2971
#define __m2c_structrow_fe1dabda_2971 m2c::k__m2c_structrow_fe1dabda_2971
#endif
#ifndef __m2c_structrow_fe1dabda_2974
#define __m2c_structrow_fe1dabda_2974 m2c::k__m2c_structrow_fe1dabda_2974
#endif
#ifndef __m2c_structrow_fe1dabda_2975
#define __m2c_structrow_fe1dabda_2975 m2c::k__m2c_structrow_fe1dabda_2975
#endif
#ifndef __m2c_structrow_fe1dabda_2976
#define __m2c_structrow_fe1dabda_2976 m2c::k__m2c_structrow_fe1dabda_2976
#endif
#ifndef __m2c_structrow_fe1dabda_2979
#define __m2c_structrow_fe1dabda_2979 m2c::k__m2c_structrow_fe1dabda_2979
#endif
#ifndef __m2c_structrow_fe1dabda_2980
#define __m2c_structrow_fe1dabda_2980 m2c::k__m2c_structrow_fe1dabda_2980
#endif
#ifndef __m2c_structrow_fe1dabda_2981
#define __m2c_structrow_fe1dabda_2981 m2c::k__m2c_structrow_fe1dabda_2981
#endif
#ifndef __m2c_structrow_fe1dabda_2984
#define __m2c_structrow_fe1dabda_2984 m2c::k__m2c_structrow_fe1dabda_2984
#endif
#ifndef __m2c_structrow_fe1dabda_2985
#define __m2c_structrow_fe1dabda_2985 m2c::k__m2c_structrow_fe1dabda_2985
#endif
#ifndef __m2c_structrow_fe1dabda_2986
#define __m2c_structrow_fe1dabda_2986 m2c::k__m2c_structrow_fe1dabda_2986
#endif
#ifndef __m2c_structrow_fe1dabda_2989
#define __m2c_structrow_fe1dabda_2989 m2c::k__m2c_structrow_fe1dabda_2989
#endif
#ifndef __m2c_structrow_fe1dabda_2990
#define __m2c_structrow_fe1dabda_2990 m2c::k__m2c_structrow_fe1dabda_2990
#endif
#ifndef __m2c_structrow_fe1dabda_2991
#define __m2c_structrow_fe1dabda_2991 m2c::k__m2c_structrow_fe1dabda_2991
#endif
#ifndef __m2c_structrow_fe1dabda_2994
#define __m2c_structrow_fe1dabda_2994 m2c::k__m2c_structrow_fe1dabda_2994
#endif
#ifndef __m2c_structrow_fe1dabda_2995
#define __m2c_structrow_fe1dabda_2995 m2c::k__m2c_structrow_fe1dabda_2995
#endif
#ifndef __m2c_structrow_fe1dabda_2996
#define __m2c_structrow_fe1dabda_2996 m2c::k__m2c_structrow_fe1dabda_2996
#endif
#ifndef __m2c_structrow_fe1dabda_2999
#define __m2c_structrow_fe1dabda_2999 m2c::k__m2c_structrow_fe1dabda_2999
#endif
#ifndef __m2c_structrow_fe1dabda_3000
#define __m2c_structrow_fe1dabda_3000 m2c::k__m2c_structrow_fe1dabda_3000
#endif
#ifndef __m2c_structrow_fe1dabda_3001
#define __m2c_structrow_fe1dabda_3001 m2c::k__m2c_structrow_fe1dabda_3001
#endif
#ifndef __m2c_structrow_fe1dabda_3004
#define __m2c_structrow_fe1dabda_3004 m2c::k__m2c_structrow_fe1dabda_3004
#endif
#ifndef __m2c_structrow_fe1dabda_3005
#define __m2c_structrow_fe1dabda_3005 m2c::k__m2c_structrow_fe1dabda_3005
#endif
#ifndef __m2c_structrow_fe1dabda_3006
#define __m2c_structrow_fe1dabda_3006 m2c::k__m2c_structrow_fe1dabda_3006
#endif
#ifndef __m2c_structrow_fe1dabda_3009
#define __m2c_structrow_fe1dabda_3009 m2c::k__m2c_structrow_fe1dabda_3009
#endif
#ifndef __m2c_structrow_fe1dabda_3010
#define __m2c_structrow_fe1dabda_3010 m2c::k__m2c_structrow_fe1dabda_3010
#endif
#ifndef __m2c_structrow_fe1dabda_3011
#define __m2c_structrow_fe1dabda_3011 m2c::k__m2c_structrow_fe1dabda_3011
#endif
#ifndef __m2c_structrow_fe1dabda_3014
#define __m2c_structrow_fe1dabda_3014 m2c::k__m2c_structrow_fe1dabda_3014
#endif
#ifndef __m2c_structrow_fe1dabda_3015
#define __m2c_structrow_fe1dabda_3015 m2c::k__m2c_structrow_fe1dabda_3015
#endif
#ifndef __m2c_structrow_fe1dabda_3016
#define __m2c_structrow_fe1dabda_3016 m2c::k__m2c_structrow_fe1dabda_3016
#endif
#ifndef __m2c_structrow_fe1dabda_3019
#define __m2c_structrow_fe1dabda_3019 m2c::k__m2c_structrow_fe1dabda_3019
#endif
#ifndef __m2c_structrow_fe1dabda_3020
#define __m2c_structrow_fe1dabda_3020 m2c::k__m2c_structrow_fe1dabda_3020
#endif
#ifndef __m2c_structrow_fe1dabda_3021
#define __m2c_structrow_fe1dabda_3021 m2c::k__m2c_structrow_fe1dabda_3021
#endif
#ifndef __m2c_structrow_fe1dabda_3024
#define __m2c_structrow_fe1dabda_3024 m2c::k__m2c_structrow_fe1dabda_3024
#endif
#ifndef __m2c_structrow_fe1dabda_3025
#define __m2c_structrow_fe1dabda_3025 m2c::k__m2c_structrow_fe1dabda_3025
#endif
#ifndef __m2c_structrow_fe1dabda_3026
#define __m2c_structrow_fe1dabda_3026 m2c::k__m2c_structrow_fe1dabda_3026
#endif
#ifndef __m2c_structrow_fe1dabda_3029
#define __m2c_structrow_fe1dabda_3029 m2c::k__m2c_structrow_fe1dabda_3029
#endif
#ifndef __m2c_structrow_fe1dabda_3030
#define __m2c_structrow_fe1dabda_3030 m2c::k__m2c_structrow_fe1dabda_3030
#endif
#ifndef __m2c_structrow_fe1dabda_3031
#define __m2c_structrow_fe1dabda_3031 m2c::k__m2c_structrow_fe1dabda_3031
#endif
#ifndef __m2c_structrow_fe1dabda_3034
#define __m2c_structrow_fe1dabda_3034 m2c::k__m2c_structrow_fe1dabda_3034
#endif
#ifndef __m2c_structrow_fe1dabda_3035
#define __m2c_structrow_fe1dabda_3035 m2c::k__m2c_structrow_fe1dabda_3035
#endif
#ifndef __m2c_structrow_fe1dabda_3036
#define __m2c_structrow_fe1dabda_3036 m2c::k__m2c_structrow_fe1dabda_3036
#endif
#ifndef __m2c_structrow_fe1dabda_3039
#define __m2c_structrow_fe1dabda_3039 m2c::k__m2c_structrow_fe1dabda_3039
#endif
#ifndef __m2c_structrow_fe1dabda_3040
#define __m2c_structrow_fe1dabda_3040 m2c::k__m2c_structrow_fe1dabda_3040
#endif
#ifndef __m2c_structrow_fe1dabda_3041
#define __m2c_structrow_fe1dabda_3041 m2c::k__m2c_structrow_fe1dabda_3041
#endif
#ifndef __m2c_structrow_fe1dabda_3044
#define __m2c_structrow_fe1dabda_3044 m2c::k__m2c_structrow_fe1dabda_3044
#endif
#ifndef __m2c_structrow_fe1dabda_3045
#define __m2c_structrow_fe1dabda_3045 m2c::k__m2c_structrow_fe1dabda_3045
#endif
#ifndef __m2c_structrow_fe1dabda_3046
#define __m2c_structrow_fe1dabda_3046 m2c::k__m2c_structrow_fe1dabda_3046
#endif
#ifndef __m2c_structrow_fe1dabda_3049
#define __m2c_structrow_fe1dabda_3049 m2c::k__m2c_structrow_fe1dabda_3049
#endif
#ifndef __m2c_structrow_fe1dabda_3050
#define __m2c_structrow_fe1dabda_3050 m2c::k__m2c_structrow_fe1dabda_3050
#endif
#ifndef __m2c_structrow_fe1dabda_3051
#define __m2c_structrow_fe1dabda_3051 m2c::k__m2c_structrow_fe1dabda_3051
#endif
#ifndef __m2c_structrow_fe1dabda_3054
#define __m2c_structrow_fe1dabda_3054 m2c::k__m2c_structrow_fe1dabda_3054
#endif
#ifndef __m2c_structrow_fe1dabda_3055
#define __m2c_structrow_fe1dabda_3055 m2c::k__m2c_structrow_fe1dabda_3055
#endif
#ifndef __m2c_structrow_fe1dabda_3056
#define __m2c_structrow_fe1dabda_3056 m2c::k__m2c_structrow_fe1dabda_3056
#endif
#ifndef __m2c_structrow_fe1dabda_3059
#define __m2c_structrow_fe1dabda_3059 m2c::k__m2c_structrow_fe1dabda_3059
#endif
#ifndef __m2c_structrow_fe1dabda_3060
#define __m2c_structrow_fe1dabda_3060 m2c::k__m2c_structrow_fe1dabda_3060
#endif
#ifndef __m2c_structrow_fe1dabda_3061
#define __m2c_structrow_fe1dabda_3061 m2c::k__m2c_structrow_fe1dabda_3061
#endif
#ifndef __m2c_structrow_fe1dabda_3064
#define __m2c_structrow_fe1dabda_3064 m2c::k__m2c_structrow_fe1dabda_3064
#endif
#ifndef __m2c_structrow_fe1dabda_3065
#define __m2c_structrow_fe1dabda_3065 m2c::k__m2c_structrow_fe1dabda_3065
#endif
#ifndef __m2c_structrow_fe1dabda_3066
#define __m2c_structrow_fe1dabda_3066 m2c::k__m2c_structrow_fe1dabda_3066
#endif
#ifndef __m2c_structrow_fe1dabda_3069
#define __m2c_structrow_fe1dabda_3069 m2c::k__m2c_structrow_fe1dabda_3069
#endif
#ifndef __m2c_structrow_fe1dabda_3070
#define __m2c_structrow_fe1dabda_3070 m2c::k__m2c_structrow_fe1dabda_3070
#endif
#ifndef __m2c_structrow_fe1dabda_3071
#define __m2c_structrow_fe1dabda_3071 m2c::k__m2c_structrow_fe1dabda_3071
#endif
#ifndef __m2c_structrow_fe1dabda_3074
#define __m2c_structrow_fe1dabda_3074 m2c::k__m2c_structrow_fe1dabda_3074
#endif
#ifndef __m2c_structrow_fe1dabda_3075
#define __m2c_structrow_fe1dabda_3075 m2c::k__m2c_structrow_fe1dabda_3075
#endif
#ifndef __m2c_structrow_fe1dabda_3076
#define __m2c_structrow_fe1dabda_3076 m2c::k__m2c_structrow_fe1dabda_3076
#endif
#ifndef __m2c_structrow_fe1dabda_3079
#define __m2c_structrow_fe1dabda_3079 m2c::k__m2c_structrow_fe1dabda_3079
#endif
#ifndef __m2c_structrow_fe1dabda_3080
#define __m2c_structrow_fe1dabda_3080 m2c::k__m2c_structrow_fe1dabda_3080
#endif
#ifndef __m2c_structrow_fe1dabda_3081
#define __m2c_structrow_fe1dabda_3081 m2c::k__m2c_structrow_fe1dabda_3081
#endif
#ifndef __m2c_structrow_fe1dabda_3084
#define __m2c_structrow_fe1dabda_3084 m2c::k__m2c_structrow_fe1dabda_3084
#endif
#ifndef __m2c_structrow_fe1dabda_3085
#define __m2c_structrow_fe1dabda_3085 m2c::k__m2c_structrow_fe1dabda_3085
#endif
#ifndef __m2c_structrow_fe1dabda_3086
#define __m2c_structrow_fe1dabda_3086 m2c::k__m2c_structrow_fe1dabda_3086
#endif
#ifndef __m2c_structrow_fe1dabda_3089
#define __m2c_structrow_fe1dabda_3089 m2c::k__m2c_structrow_fe1dabda_3089
#endif
#ifndef __m2c_structrow_fe1dabda_3090
#define __m2c_structrow_fe1dabda_3090 m2c::k__m2c_structrow_fe1dabda_3090
#endif
#ifndef __m2c_structrow_fe1dabda_3091
#define __m2c_structrow_fe1dabda_3091 m2c::k__m2c_structrow_fe1dabda_3091
#endif
#ifndef __m2c_structrow_fe1dabda_3094
#define __m2c_structrow_fe1dabda_3094 m2c::k__m2c_structrow_fe1dabda_3094
#endif
#ifndef __m2c_structrow_fe1dabda_3095
#define __m2c_structrow_fe1dabda_3095 m2c::k__m2c_structrow_fe1dabda_3095
#endif
#ifndef __m2c_structrow_fe1dabda_3096
#define __m2c_structrow_fe1dabda_3096 m2c::k__m2c_structrow_fe1dabda_3096
#endif
#ifndef __m2c_structrow_fe1dabda_3099
#define __m2c_structrow_fe1dabda_3099 m2c::k__m2c_structrow_fe1dabda_3099
#endif
#ifndef __m2c_structrow_fe1dabda_3100
#define __m2c_structrow_fe1dabda_3100 m2c::k__m2c_structrow_fe1dabda_3100
#endif
#ifndef __m2c_structrow_fe1dabda_3101
#define __m2c_structrow_fe1dabda_3101 m2c::k__m2c_structrow_fe1dabda_3101
#endif
#ifndef __m2c_structrow_fe1dabda_3104
#define __m2c_structrow_fe1dabda_3104 m2c::k__m2c_structrow_fe1dabda_3104
#endif
#ifndef __m2c_structrow_fe1dabda_3105
#define __m2c_structrow_fe1dabda_3105 m2c::k__m2c_structrow_fe1dabda_3105
#endif
#ifndef __m2c_structrow_fe1dabda_3106
#define __m2c_structrow_fe1dabda_3106 m2c::k__m2c_structrow_fe1dabda_3106
#endif
#ifndef __m2c_structrow_fe1dabda_3109
#define __m2c_structrow_fe1dabda_3109 m2c::k__m2c_structrow_fe1dabda_3109
#endif
#ifndef __m2c_structrow_fe1dabda_3110
#define __m2c_structrow_fe1dabda_3110 m2c::k__m2c_structrow_fe1dabda_3110
#endif
#ifndef __m2c_structrow_fe1dabda_3111
#define __m2c_structrow_fe1dabda_3111 m2c::k__m2c_structrow_fe1dabda_3111
#endif
#ifndef __m2c_structrow_fe1dabda_3114
#define __m2c_structrow_fe1dabda_3114 m2c::k__m2c_structrow_fe1dabda_3114
#endif
#ifndef __m2c_structrow_fe1dabda_3115
#define __m2c_structrow_fe1dabda_3115 m2c::k__m2c_structrow_fe1dabda_3115
#endif
#ifndef __m2c_structrow_fe1dabda_3116
#define __m2c_structrow_fe1dabda_3116 m2c::k__m2c_structrow_fe1dabda_3116
#endif
#ifndef __m2c_structrow_fe1dabda_3119
#define __m2c_structrow_fe1dabda_3119 m2c::k__m2c_structrow_fe1dabda_3119
#endif
#ifndef __m2c_structrow_fe1dabda_3120
#define __m2c_structrow_fe1dabda_3120 m2c::k__m2c_structrow_fe1dabda_3120
#endif
#ifndef __m2c_structrow_fe1dabda_3121
#define __m2c_structrow_fe1dabda_3121 m2c::k__m2c_structrow_fe1dabda_3121
#endif
#ifndef __m2c_structrow_fe1dabda_3124
#define __m2c_structrow_fe1dabda_3124 m2c::k__m2c_structrow_fe1dabda_3124
#endif
#ifndef __m2c_structrow_fe1dabda_3125
#define __m2c_structrow_fe1dabda_3125 m2c::k__m2c_structrow_fe1dabda_3125
#endif
#ifndef __m2c_structrow_fe1dabda_3126
#define __m2c_structrow_fe1dabda_3126 m2c::k__m2c_structrow_fe1dabda_3126
#endif
#ifndef __m2c_structrow_fe1dabda_3129
#define __m2c_structrow_fe1dabda_3129 m2c::k__m2c_structrow_fe1dabda_3129
#endif
#ifndef __m2c_structrow_fe1dabda_3130
#define __m2c_structrow_fe1dabda_3130 m2c::k__m2c_structrow_fe1dabda_3130
#endif
#ifndef __m2c_structrow_fe1dabda_3131
#define __m2c_structrow_fe1dabda_3131 m2c::k__m2c_structrow_fe1dabda_3131
#endif
#ifndef __m2c_structrow_fe1dabda_3134
#define __m2c_structrow_fe1dabda_3134 m2c::k__m2c_structrow_fe1dabda_3134
#endif
#ifndef __m2c_structrow_fe1dabda_3135
#define __m2c_structrow_fe1dabda_3135 m2c::k__m2c_structrow_fe1dabda_3135
#endif
#ifndef __m2c_structrow_fe1dabda_3136
#define __m2c_structrow_fe1dabda_3136 m2c::k__m2c_structrow_fe1dabda_3136
#endif
#ifndef __m2c_structrow_fe1dabda_3139
#define __m2c_structrow_fe1dabda_3139 m2c::k__m2c_structrow_fe1dabda_3139
#endif
#ifndef __m2c_structrow_fe1dabda_3140
#define __m2c_structrow_fe1dabda_3140 m2c::k__m2c_structrow_fe1dabda_3140
#endif
#ifndef __m2c_structrow_fe1dabda_3141
#define __m2c_structrow_fe1dabda_3141 m2c::k__m2c_structrow_fe1dabda_3141
#endif
#ifndef __m2c_structrow_fe1dabda_3144
#define __m2c_structrow_fe1dabda_3144 m2c::k__m2c_structrow_fe1dabda_3144
#endif
#ifndef __m2c_structrow_fe1dabda_3145
#define __m2c_structrow_fe1dabda_3145 m2c::k__m2c_structrow_fe1dabda_3145
#endif
#ifndef __m2c_structrow_fe1dabda_3146
#define __m2c_structrow_fe1dabda_3146 m2c::k__m2c_structrow_fe1dabda_3146
#endif
#ifndef __m2c_structrow_fe1dabda_3149
#define __m2c_structrow_fe1dabda_3149 m2c::k__m2c_structrow_fe1dabda_3149
#endif
#ifndef __m2c_structrow_fe1dabda_3150
#define __m2c_structrow_fe1dabda_3150 m2c::k__m2c_structrow_fe1dabda_3150
#endif
#ifndef __m2c_structrow_fe1dabda_3151
#define __m2c_structrow_fe1dabda_3151 m2c::k__m2c_structrow_fe1dabda_3151
#endif
#ifndef __m2c_structrow_fe1dabda_3154
#define __m2c_structrow_fe1dabda_3154 m2c::k__m2c_structrow_fe1dabda_3154
#endif
#ifndef __m2c_structrow_fe1dabda_3155
#define __m2c_structrow_fe1dabda_3155 m2c::k__m2c_structrow_fe1dabda_3155
#endif
#ifndef __m2c_structrow_fe1dabda_3156
#define __m2c_structrow_fe1dabda_3156 m2c::k__m2c_structrow_fe1dabda_3156
#endif
#ifndef __m2c_structrow_fe1dabda_3159
#define __m2c_structrow_fe1dabda_3159 m2c::k__m2c_structrow_fe1dabda_3159
#endif
#ifndef __m2c_structrow_fe1dabda_3160
#define __m2c_structrow_fe1dabda_3160 m2c::k__m2c_structrow_fe1dabda_3160
#endif
#ifndef __m2c_structrow_fe1dabda_3161
#define __m2c_structrow_fe1dabda_3161 m2c::k__m2c_structrow_fe1dabda_3161
#endif
#ifndef __m2c_structrow_fe1dabda_3164
#define __m2c_structrow_fe1dabda_3164 m2c::k__m2c_structrow_fe1dabda_3164
#endif
#ifndef __m2c_structrow_fe1dabda_3165
#define __m2c_structrow_fe1dabda_3165 m2c::k__m2c_structrow_fe1dabda_3165
#endif
#ifndef __m2c_structrow_fe1dabda_3166
#define __m2c_structrow_fe1dabda_3166 m2c::k__m2c_structrow_fe1dabda_3166
#endif
#ifndef __m2c_structrow_fe1dabda_3169
#define __m2c_structrow_fe1dabda_3169 m2c::k__m2c_structrow_fe1dabda_3169
#endif
#ifndef __m2c_structrow_fe1dabda_3170
#define __m2c_structrow_fe1dabda_3170 m2c::k__m2c_structrow_fe1dabda_3170
#endif
#ifndef __m2c_structrow_fe1dabda_3171
#define __m2c_structrow_fe1dabda_3171 m2c::k__m2c_structrow_fe1dabda_3171
#endif
#ifndef __m2c_structrow_fe1dabda_3174
#define __m2c_structrow_fe1dabda_3174 m2c::k__m2c_structrow_fe1dabda_3174
#endif
#ifndef __m2c_structrow_fe1dabda_3175
#define __m2c_structrow_fe1dabda_3175 m2c::k__m2c_structrow_fe1dabda_3175
#endif
#ifndef __m2c_structrow_fe1dabda_3176
#define __m2c_structrow_fe1dabda_3176 m2c::k__m2c_structrow_fe1dabda_3176
#endif
#ifndef __m2c_structrow_fe1dabda_3179
#define __m2c_structrow_fe1dabda_3179 m2c::k__m2c_structrow_fe1dabda_3179
#endif
#ifndef __m2c_structrow_fe1dabda_3180
#define __m2c_structrow_fe1dabda_3180 m2c::k__m2c_structrow_fe1dabda_3180
#endif
#ifndef __m2c_structrow_fe1dabda_3181
#define __m2c_structrow_fe1dabda_3181 m2c::k__m2c_structrow_fe1dabda_3181
#endif
#ifndef __m2c_structrow_fe1dabda_3184
#define __m2c_structrow_fe1dabda_3184 m2c::k__m2c_structrow_fe1dabda_3184
#endif
#ifndef __m2c_structrow_fe1dabda_3185
#define __m2c_structrow_fe1dabda_3185 m2c::k__m2c_structrow_fe1dabda_3185
#endif
#ifndef __m2c_structrow_fe1dabda_3186
#define __m2c_structrow_fe1dabda_3186 m2c::k__m2c_structrow_fe1dabda_3186
#endif
#ifndef __m2c_structrow_fe1dabda_3189
#define __m2c_structrow_fe1dabda_3189 m2c::k__m2c_structrow_fe1dabda_3189
#endif
#ifndef __m2c_structrow_fe1dabda_3190
#define __m2c_structrow_fe1dabda_3190 m2c::k__m2c_structrow_fe1dabda_3190
#endif
#ifndef __m2c_structrow_fe1dabda_3191
#define __m2c_structrow_fe1dabda_3191 m2c::k__m2c_structrow_fe1dabda_3191
#endif
#ifndef __m2c_structrow_fe1dabda_3194
#define __m2c_structrow_fe1dabda_3194 m2c::k__m2c_structrow_fe1dabda_3194
#endif
#ifndef __m2c_structrow_fe1dabda_3195
#define __m2c_structrow_fe1dabda_3195 m2c::k__m2c_structrow_fe1dabda_3195
#endif
#ifndef __m2c_structrow_fe1dabda_3196
#define __m2c_structrow_fe1dabda_3196 m2c::k__m2c_structrow_fe1dabda_3196
#endif
#ifndef __m2c_structrow_fe1dabda_3199
#define __m2c_structrow_fe1dabda_3199 m2c::k__m2c_structrow_fe1dabda_3199
#endif
#ifndef __m2c_structrow_fe1dabda_3200
#define __m2c_structrow_fe1dabda_3200 m2c::k__m2c_structrow_fe1dabda_3200
#endif
#ifndef __m2c_structrow_fe1dabda_3201
#define __m2c_structrow_fe1dabda_3201 m2c::k__m2c_structrow_fe1dabda_3201
#endif
#ifndef __m2c_structrow_fe1dabda_3204
#define __m2c_structrow_fe1dabda_3204 m2c::k__m2c_structrow_fe1dabda_3204
#endif
#ifndef __m2c_structrow_fe1dabda_3205
#define __m2c_structrow_fe1dabda_3205 m2c::k__m2c_structrow_fe1dabda_3205
#endif
#ifndef __m2c_structrow_fe1dabda_3206
#define __m2c_structrow_fe1dabda_3206 m2c::k__m2c_structrow_fe1dabda_3206
#endif
#ifndef __m2c_structrow_fe1dabda_3209
#define __m2c_structrow_fe1dabda_3209 m2c::k__m2c_structrow_fe1dabda_3209
#endif
#ifndef __m2c_structrow_fe1dabda_3210
#define __m2c_structrow_fe1dabda_3210 m2c::k__m2c_structrow_fe1dabda_3210
#endif
#ifndef __m2c_structrow_fe1dabda_3211
#define __m2c_structrow_fe1dabda_3211 m2c::k__m2c_structrow_fe1dabda_3211
#endif
#ifndef __m2c_structrow_fe1dabda_3214
#define __m2c_structrow_fe1dabda_3214 m2c::k__m2c_structrow_fe1dabda_3214
#endif
#ifndef __m2c_structrow_fe1dabda_3215
#define __m2c_structrow_fe1dabda_3215 m2c::k__m2c_structrow_fe1dabda_3215
#endif
#ifndef __m2c_structrow_fe1dabda_3216
#define __m2c_structrow_fe1dabda_3216 m2c::k__m2c_structrow_fe1dabda_3216
#endif
#ifndef __m2c_structrow_fe1dabda_3219
#define __m2c_structrow_fe1dabda_3219 m2c::k__m2c_structrow_fe1dabda_3219
#endif
#ifndef __m2c_structrow_fe1dabda_3220
#define __m2c_structrow_fe1dabda_3220 m2c::k__m2c_structrow_fe1dabda_3220
#endif
#ifndef __m2c_structrow_fe1dabda_3221
#define __m2c_structrow_fe1dabda_3221 m2c::k__m2c_structrow_fe1dabda_3221
#endif
#ifndef __m2c_structrow_fe1dabda_3224
#define __m2c_structrow_fe1dabda_3224 m2c::k__m2c_structrow_fe1dabda_3224
#endif
#ifndef __m2c_structrow_fe1dabda_3225
#define __m2c_structrow_fe1dabda_3225 m2c::k__m2c_structrow_fe1dabda_3225
#endif
#ifndef __m2c_structrow_fe1dabda_3226
#define __m2c_structrow_fe1dabda_3226 m2c::k__m2c_structrow_fe1dabda_3226
#endif
#ifndef __m2c_structrow_fe1dabda_3229
#define __m2c_structrow_fe1dabda_3229 m2c::k__m2c_structrow_fe1dabda_3229
#endif
#ifndef __m2c_structrow_fe1dabda_3230
#define __m2c_structrow_fe1dabda_3230 m2c::k__m2c_structrow_fe1dabda_3230
#endif
#ifndef __m2c_structrow_fe1dabda_3231
#define __m2c_structrow_fe1dabda_3231 m2c::k__m2c_structrow_fe1dabda_3231
#endif
#ifndef __m2c_structrow_fe1dabda_3234
#define __m2c_structrow_fe1dabda_3234 m2c::k__m2c_structrow_fe1dabda_3234
#endif
#ifndef __m2c_structrow_fe1dabda_3235
#define __m2c_structrow_fe1dabda_3235 m2c::k__m2c_structrow_fe1dabda_3235
#endif
#ifndef __m2c_structrow_fe1dabda_3236
#define __m2c_structrow_fe1dabda_3236 m2c::k__m2c_structrow_fe1dabda_3236
#endif
#ifndef __m2c_structrow_fe1dabda_3239
#define __m2c_structrow_fe1dabda_3239 m2c::k__m2c_structrow_fe1dabda_3239
#endif
#ifndef __m2c_structrow_fe1dabda_3240
#define __m2c_structrow_fe1dabda_3240 m2c::k__m2c_structrow_fe1dabda_3240
#endif
#ifndef __m2c_structrow_fe1dabda_3241
#define __m2c_structrow_fe1dabda_3241 m2c::k__m2c_structrow_fe1dabda_3241
#endif
#ifndef __m2c_structrow_fe1dabda_3244
#define __m2c_structrow_fe1dabda_3244 m2c::k__m2c_structrow_fe1dabda_3244
#endif
#ifndef __m2c_structrow_fe1dabda_3245
#define __m2c_structrow_fe1dabda_3245 m2c::k__m2c_structrow_fe1dabda_3245
#endif
#ifndef __m2c_structrow_fe1dabda_3246
#define __m2c_structrow_fe1dabda_3246 m2c::k__m2c_structrow_fe1dabda_3246
#endif
#ifndef __m2c_structrow_fe1dabda_3249
#define __m2c_structrow_fe1dabda_3249 m2c::k__m2c_structrow_fe1dabda_3249
#endif
#ifndef __m2c_structrow_fe1dabda_3250
#define __m2c_structrow_fe1dabda_3250 m2c::k__m2c_structrow_fe1dabda_3250
#endif
#ifndef __m2c_structrow_fe1dabda_3251
#define __m2c_structrow_fe1dabda_3251 m2c::k__m2c_structrow_fe1dabda_3251
#endif
#ifndef __m2c_structrow_fe1dabda_3254
#define __m2c_structrow_fe1dabda_3254 m2c::k__m2c_structrow_fe1dabda_3254
#endif
#ifndef __m2c_structrow_fe1dabda_3255
#define __m2c_structrow_fe1dabda_3255 m2c::k__m2c_structrow_fe1dabda_3255
#endif
#ifndef __m2c_structrow_fe1dabda_3256
#define __m2c_structrow_fe1dabda_3256 m2c::k__m2c_structrow_fe1dabda_3256
#endif
#ifndef __m2c_structrow_fe1dabda_3259
#define __m2c_structrow_fe1dabda_3259 m2c::k__m2c_structrow_fe1dabda_3259
#endif
#ifndef __m2c_structrow_fe1dabda_3260
#define __m2c_structrow_fe1dabda_3260 m2c::k__m2c_structrow_fe1dabda_3260
#endif
#ifndef __m2c_structrow_fe1dabda_3261
#define __m2c_structrow_fe1dabda_3261 m2c::k__m2c_structrow_fe1dabda_3261
#endif
#ifndef __m2c_structrow_fe1dabda_3264
#define __m2c_structrow_fe1dabda_3264 m2c::k__m2c_structrow_fe1dabda_3264
#endif
#ifndef __m2c_structrow_fe1dabda_3265
#define __m2c_structrow_fe1dabda_3265 m2c::k__m2c_structrow_fe1dabda_3265
#endif
#ifndef __m2c_structrow_fe1dabda_3266
#define __m2c_structrow_fe1dabda_3266 m2c::k__m2c_structrow_fe1dabda_3266
#endif
#ifndef __m2c_structrow_fe1dabda_3269
#define __m2c_structrow_fe1dabda_3269 m2c::k__m2c_structrow_fe1dabda_3269
#endif
#ifndef __m2c_structrow_fe1dabda_3270
#define __m2c_structrow_fe1dabda_3270 m2c::k__m2c_structrow_fe1dabda_3270
#endif
#ifndef __m2c_structrow_fe1dabda_3271
#define __m2c_structrow_fe1dabda_3271 m2c::k__m2c_structrow_fe1dabda_3271
#endif
#ifndef __m2c_structrow_fe1dabda_3274
#define __m2c_structrow_fe1dabda_3274 m2c::k__m2c_structrow_fe1dabda_3274
#endif
#ifndef __m2c_structrow_fe1dabda_3275
#define __m2c_structrow_fe1dabda_3275 m2c::k__m2c_structrow_fe1dabda_3275
#endif
#ifndef __m2c_structrow_fe1dabda_3276
#define __m2c_structrow_fe1dabda_3276 m2c::k__m2c_structrow_fe1dabda_3276
#endif
#ifndef __m2c_structrow_fe1dabda_3279
#define __m2c_structrow_fe1dabda_3279 m2c::k__m2c_structrow_fe1dabda_3279
#endif
#ifndef __m2c_structrow_fe1dabda_3280
#define __m2c_structrow_fe1dabda_3280 m2c::k__m2c_structrow_fe1dabda_3280
#endif
#ifndef __m2c_structrow_fe1dabda_3281
#define __m2c_structrow_fe1dabda_3281 m2c::k__m2c_structrow_fe1dabda_3281
#endif
#ifndef __m2c_structrow_fe1dabda_3284
#define __m2c_structrow_fe1dabda_3284 m2c::k__m2c_structrow_fe1dabda_3284
#endif
#ifndef __m2c_structrow_fe1dabda_3285
#define __m2c_structrow_fe1dabda_3285 m2c::k__m2c_structrow_fe1dabda_3285
#endif
#ifndef __m2c_structrow_fe1dabda_3286
#define __m2c_structrow_fe1dabda_3286 m2c::k__m2c_structrow_fe1dabda_3286
#endif
#ifndef __m2c_structrow_fe1dabda_3289
#define __m2c_structrow_fe1dabda_3289 m2c::k__m2c_structrow_fe1dabda_3289
#endif
#ifndef __m2c_structrow_fe1dabda_3290
#define __m2c_structrow_fe1dabda_3290 m2c::k__m2c_structrow_fe1dabda_3290
#endif
#ifndef __m2c_structrow_fe1dabda_3291
#define __m2c_structrow_fe1dabda_3291 m2c::k__m2c_structrow_fe1dabda_3291
#endif
#ifndef __m2c_structrow_fe1dabda_3294
#define __m2c_structrow_fe1dabda_3294 m2c::k__m2c_structrow_fe1dabda_3294
#endif
#ifndef __m2c_structrow_fe1dabda_3295
#define __m2c_structrow_fe1dabda_3295 m2c::k__m2c_structrow_fe1dabda_3295
#endif
#ifndef __m2c_structrow_fe1dabda_3296
#define __m2c_structrow_fe1dabda_3296 m2c::k__m2c_structrow_fe1dabda_3296
#endif
#ifndef __m2c_structrow_fe1dabda_3299
#define __m2c_structrow_fe1dabda_3299 m2c::k__m2c_structrow_fe1dabda_3299
#endif
#ifndef __m2c_structrow_fe1dabda_3300
#define __m2c_structrow_fe1dabda_3300 m2c::k__m2c_structrow_fe1dabda_3300
#endif
#ifndef __m2c_structrow_fe1dabda_3301
#define __m2c_structrow_fe1dabda_3301 m2c::k__m2c_structrow_fe1dabda_3301
#endif
#ifndef __m2c_structrow_fe1dabda_3304
#define __m2c_structrow_fe1dabda_3304 m2c::k__m2c_structrow_fe1dabda_3304
#endif
#ifndef __m2c_structrow_fe1dabda_3305
#define __m2c_structrow_fe1dabda_3305 m2c::k__m2c_structrow_fe1dabda_3305
#endif
#ifndef __m2c_structrow_fe1dabda_3306
#define __m2c_structrow_fe1dabda_3306 m2c::k__m2c_structrow_fe1dabda_3306
#endif
#ifndef __m2c_structrow_fe1dabda_3309
#define __m2c_structrow_fe1dabda_3309 m2c::k__m2c_structrow_fe1dabda_3309
#endif
#ifndef __m2c_structrow_fe1dabda_3310
#define __m2c_structrow_fe1dabda_3310 m2c::k__m2c_structrow_fe1dabda_3310
#endif
#ifndef __m2c_structrow_fe1dabda_3311
#define __m2c_structrow_fe1dabda_3311 m2c::k__m2c_structrow_fe1dabda_3311
#endif
#ifndef __m2c_structrow_fe1dabda_3314
#define __m2c_structrow_fe1dabda_3314 m2c::k__m2c_structrow_fe1dabda_3314
#endif
#ifndef __m2c_structrow_fe1dabda_3315
#define __m2c_structrow_fe1dabda_3315 m2c::k__m2c_structrow_fe1dabda_3315
#endif
#ifndef __m2c_structrow_fe1dabda_3316
#define __m2c_structrow_fe1dabda_3316 m2c::k__m2c_structrow_fe1dabda_3316
#endif
#ifndef __m2c_structrow_fe1dabda_3319
#define __m2c_structrow_fe1dabda_3319 m2c::k__m2c_structrow_fe1dabda_3319
#endif
#ifndef __m2c_structrow_fe1dabda_3320
#define __m2c_structrow_fe1dabda_3320 m2c::k__m2c_structrow_fe1dabda_3320
#endif
#ifndef __m2c_structrow_fe1dabda_3321
#define __m2c_structrow_fe1dabda_3321 m2c::k__m2c_structrow_fe1dabda_3321
#endif
#ifndef __m2c_structrow_fe1dabda_3324
#define __m2c_structrow_fe1dabda_3324 m2c::k__m2c_structrow_fe1dabda_3324
#endif
#ifndef __m2c_structrow_fe1dabda_3325
#define __m2c_structrow_fe1dabda_3325 m2c::k__m2c_structrow_fe1dabda_3325
#endif
#ifndef __m2c_structrow_fe1dabda_3326
#define __m2c_structrow_fe1dabda_3326 m2c::k__m2c_structrow_fe1dabda_3326
#endif
#ifndef __m2c_structrow_fe1dabda_3329
#define __m2c_structrow_fe1dabda_3329 m2c::k__m2c_structrow_fe1dabda_3329
#endif
#ifndef __m2c_structrow_fe1dabda_3330
#define __m2c_structrow_fe1dabda_3330 m2c::k__m2c_structrow_fe1dabda_3330
#endif
#ifndef __m2c_structrow_fe1dabda_3331
#define __m2c_structrow_fe1dabda_3331 m2c::k__m2c_structrow_fe1dabda_3331
#endif
#ifndef __m2c_structrow_fe1dabda_3334
#define __m2c_structrow_fe1dabda_3334 m2c::k__m2c_structrow_fe1dabda_3334
#endif
#ifndef __m2c_structrow_fe1dabda_3335
#define __m2c_structrow_fe1dabda_3335 m2c::k__m2c_structrow_fe1dabda_3335
#endif
#ifndef __m2c_structrow_fe1dabda_3336
#define __m2c_structrow_fe1dabda_3336 m2c::k__m2c_structrow_fe1dabda_3336
#endif
#ifndef __m2c_structrow_fe1dabda_3339
#define __m2c_structrow_fe1dabda_3339 m2c::k__m2c_structrow_fe1dabda_3339
#endif
#ifndef __m2c_structrow_fe1dabda_3340
#define __m2c_structrow_fe1dabda_3340 m2c::k__m2c_structrow_fe1dabda_3340
#endif
#ifndef __m2c_structrow_fe1dabda_3341
#define __m2c_structrow_fe1dabda_3341 m2c::k__m2c_structrow_fe1dabda_3341
#endif
#ifndef __m2c_structrow_fe1dabda_3344
#define __m2c_structrow_fe1dabda_3344 m2c::k__m2c_structrow_fe1dabda_3344
#endif
#ifndef __m2c_structrow_fe1dabda_3345
#define __m2c_structrow_fe1dabda_3345 m2c::k__m2c_structrow_fe1dabda_3345
#endif
#ifndef __m2c_structrow_fe1dabda_3346
#define __m2c_structrow_fe1dabda_3346 m2c::k__m2c_structrow_fe1dabda_3346
#endif
#ifndef __m2c_structrow_fe1dabda_3349
#define __m2c_structrow_fe1dabda_3349 m2c::k__m2c_structrow_fe1dabda_3349
#endif
#ifndef __m2c_structrow_fe1dabda_3350
#define __m2c_structrow_fe1dabda_3350 m2c::k__m2c_structrow_fe1dabda_3350
#endif
#ifndef __m2c_structrow_fe1dabda_3351
#define __m2c_structrow_fe1dabda_3351 m2c::k__m2c_structrow_fe1dabda_3351
#endif
#ifndef __m2c_structrow_fe1dabda_3354
#define __m2c_structrow_fe1dabda_3354 m2c::k__m2c_structrow_fe1dabda_3354
#endif
#ifndef __m2c_structrow_fe1dabda_3355
#define __m2c_structrow_fe1dabda_3355 m2c::k__m2c_structrow_fe1dabda_3355
#endif
#ifndef __m2c_structrow_fe1dabda_3356
#define __m2c_structrow_fe1dabda_3356 m2c::k__m2c_structrow_fe1dabda_3356
#endif
#ifndef __m2c_structrow_fe1dabda_3359
#define __m2c_structrow_fe1dabda_3359 m2c::k__m2c_structrow_fe1dabda_3359
#endif
#ifndef __m2c_structrow_fe1dabda_3360
#define __m2c_structrow_fe1dabda_3360 m2c::k__m2c_structrow_fe1dabda_3360
#endif
#ifndef __m2c_structrow_fe1dabda_3361
#define __m2c_structrow_fe1dabda_3361 m2c::k__m2c_structrow_fe1dabda_3361
#endif
#ifndef __m2c_structrow_fe1dabda_3364
#define __m2c_structrow_fe1dabda_3364 m2c::k__m2c_structrow_fe1dabda_3364
#endif
#ifndef __m2c_structrow_fe1dabda_3365
#define __m2c_structrow_fe1dabda_3365 m2c::k__m2c_structrow_fe1dabda_3365
#endif
#ifndef __m2c_structrow_fe1dabda_3366
#define __m2c_structrow_fe1dabda_3366 m2c::k__m2c_structrow_fe1dabda_3366
#endif
#ifndef __m2c_structrow_fe1dabda_3369
#define __m2c_structrow_fe1dabda_3369 m2c::k__m2c_structrow_fe1dabda_3369
#endif
#ifndef __m2c_structrow_fe1dabda_3370
#define __m2c_structrow_fe1dabda_3370 m2c::k__m2c_structrow_fe1dabda_3370
#endif
#ifndef __m2c_structrow_fe1dabda_3371
#define __m2c_structrow_fe1dabda_3371 m2c::k__m2c_structrow_fe1dabda_3371
#endif
#ifndef __m2c_structrow_fe1dabda_3374
#define __m2c_structrow_fe1dabda_3374 m2c::k__m2c_structrow_fe1dabda_3374
#endif
#ifndef __m2c_structrow_fe1dabda_3375
#define __m2c_structrow_fe1dabda_3375 m2c::k__m2c_structrow_fe1dabda_3375
#endif
#ifndef __m2c_structrow_fe1dabda_3376
#define __m2c_structrow_fe1dabda_3376 m2c::k__m2c_structrow_fe1dabda_3376
#endif
#ifndef __m2c_structrow_fe1dabda_3379
#define __m2c_structrow_fe1dabda_3379 m2c::k__m2c_structrow_fe1dabda_3379
#endif
#ifndef __m2c_structrow_fe1dabda_3380
#define __m2c_structrow_fe1dabda_3380 m2c::k__m2c_structrow_fe1dabda_3380
#endif
#ifndef __m2c_structrow_fe1dabda_3381
#define __m2c_structrow_fe1dabda_3381 m2c::k__m2c_structrow_fe1dabda_3381
#endif
#ifndef __m2c_structrow_fe1dabda_3384
#define __m2c_structrow_fe1dabda_3384 m2c::k__m2c_structrow_fe1dabda_3384
#endif
#ifndef __m2c_structrow_fe1dabda_3385
#define __m2c_structrow_fe1dabda_3385 m2c::k__m2c_structrow_fe1dabda_3385
#endif
#ifndef __m2c_structrow_fe1dabda_3386
#define __m2c_structrow_fe1dabda_3386 m2c::k__m2c_structrow_fe1dabda_3386
#endif
#ifndef __m2c_structrow_fe1dabda_3389
#define __m2c_structrow_fe1dabda_3389 m2c::k__m2c_structrow_fe1dabda_3389
#endif
#ifndef __m2c_structrow_fe1dabda_3390
#define __m2c_structrow_fe1dabda_3390 m2c::k__m2c_structrow_fe1dabda_3390
#endif
#ifndef __m2c_structrow_fe1dabda_3391
#define __m2c_structrow_fe1dabda_3391 m2c::k__m2c_structrow_fe1dabda_3391
#endif
#ifndef __m2c_structrow_fe1dabda_3394
#define __m2c_structrow_fe1dabda_3394 m2c::k__m2c_structrow_fe1dabda_3394
#endif
#ifndef __m2c_structrow_fe1dabda_3395
#define __m2c_structrow_fe1dabda_3395 m2c::k__m2c_structrow_fe1dabda_3395
#endif
#ifndef __m2c_structrow_fe1dabda_3396
#define __m2c_structrow_fe1dabda_3396 m2c::k__m2c_structrow_fe1dabda_3396
#endif
#ifndef __m2c_structrow_fe1dabda_3399
#define __m2c_structrow_fe1dabda_3399 m2c::k__m2c_structrow_fe1dabda_3399
#endif
#ifndef __m2c_structrow_fe1dabda_3400
#define __m2c_structrow_fe1dabda_3400 m2c::k__m2c_structrow_fe1dabda_3400
#endif
#ifndef __m2c_structrow_fe1dabda_3401
#define __m2c_structrow_fe1dabda_3401 m2c::k__m2c_structrow_fe1dabda_3401
#endif
#ifndef __m2c_structrow_fe1dabda_3404
#define __m2c_structrow_fe1dabda_3404 m2c::k__m2c_structrow_fe1dabda_3404
#endif
#ifndef __m2c_structrow_fe1dabda_3405
#define __m2c_structrow_fe1dabda_3405 m2c::k__m2c_structrow_fe1dabda_3405
#endif
#ifndef __m2c_structrow_fe1dabda_3406
#define __m2c_structrow_fe1dabda_3406 m2c::k__m2c_structrow_fe1dabda_3406
#endif
#ifndef __m2c_structrow_fe1dabda_3409
#define __m2c_structrow_fe1dabda_3409 m2c::k__m2c_structrow_fe1dabda_3409
#endif
#ifndef __m2c_structrow_fe1dabda_3410
#define __m2c_structrow_fe1dabda_3410 m2c::k__m2c_structrow_fe1dabda_3410
#endif
#ifndef __m2c_structrow_fe1dabda_3411
#define __m2c_structrow_fe1dabda_3411 m2c::k__m2c_structrow_fe1dabda_3411
#endif
#ifndef __m2c_structrow_fe1dabda_3414
#define __m2c_structrow_fe1dabda_3414 m2c::k__m2c_structrow_fe1dabda_3414
#endif
#ifndef __m2c_structrow_fe1dabda_3415
#define __m2c_structrow_fe1dabda_3415 m2c::k__m2c_structrow_fe1dabda_3415
#endif
#ifndef __m2c_structrow_fe1dabda_3416
#define __m2c_structrow_fe1dabda_3416 m2c::k__m2c_structrow_fe1dabda_3416
#endif
#ifndef __m2c_structrow_fe1dabda_3419
#define __m2c_structrow_fe1dabda_3419 m2c::k__m2c_structrow_fe1dabda_3419
#endif
#ifndef __m2c_structrow_fe1dabda_3420
#define __m2c_structrow_fe1dabda_3420 m2c::k__m2c_structrow_fe1dabda_3420
#endif
#ifndef __m2c_structrow_fe1dabda_3421
#define __m2c_structrow_fe1dabda_3421 m2c::k__m2c_structrow_fe1dabda_3421
#endif
#ifndef __m2c_structrow_fe1dabda_3424
#define __m2c_structrow_fe1dabda_3424 m2c::k__m2c_structrow_fe1dabda_3424
#endif
#ifndef __m2c_structrow_fe1dabda_3425
#define __m2c_structrow_fe1dabda_3425 m2c::k__m2c_structrow_fe1dabda_3425
#endif
#ifndef __m2c_structrow_fe1dabda_3426
#define __m2c_structrow_fe1dabda_3426 m2c::k__m2c_structrow_fe1dabda_3426
#endif
#ifndef __m2c_structrow_fe1dabda_3429
#define __m2c_structrow_fe1dabda_3429 m2c::k__m2c_structrow_fe1dabda_3429
#endif
#ifndef __m2c_structrow_fe1dabda_3430
#define __m2c_structrow_fe1dabda_3430 m2c::k__m2c_structrow_fe1dabda_3430
#endif
#ifndef __m2c_structrow_fe1dabda_3431
#define __m2c_structrow_fe1dabda_3431 m2c::k__m2c_structrow_fe1dabda_3431
#endif
#ifndef __m2c_structrow_fe1dabda_3434
#define __m2c_structrow_fe1dabda_3434 m2c::k__m2c_structrow_fe1dabda_3434
#endif
#ifndef __m2c_structrow_fe1dabda_3435
#define __m2c_structrow_fe1dabda_3435 m2c::k__m2c_structrow_fe1dabda_3435
#endif
#ifndef __m2c_structrow_fe1dabda_3436
#define __m2c_structrow_fe1dabda_3436 m2c::k__m2c_structrow_fe1dabda_3436
#endif
#ifndef __m2c_structrow_fe1dabda_3439
#define __m2c_structrow_fe1dabda_3439 m2c::k__m2c_structrow_fe1dabda_3439
#endif
#ifndef __m2c_structrow_fe1dabda_3440
#define __m2c_structrow_fe1dabda_3440 m2c::k__m2c_structrow_fe1dabda_3440
#endif
#ifndef __m2c_structrow_fe1dabda_3441
#define __m2c_structrow_fe1dabda_3441 m2c::k__m2c_structrow_fe1dabda_3441
#endif
#ifndef __m2c_structrow_fe1dabda_3444
#define __m2c_structrow_fe1dabda_3444 m2c::k__m2c_structrow_fe1dabda_3444
#endif
#ifndef __m2c_structrow_fe1dabda_3445
#define __m2c_structrow_fe1dabda_3445 m2c::k__m2c_structrow_fe1dabda_3445
#endif
#ifndef __m2c_structrow_fe1dabda_3446
#define __m2c_structrow_fe1dabda_3446 m2c::k__m2c_structrow_fe1dabda_3446
#endif
#ifndef __m2c_structrow_fe1dabda_3449
#define __m2c_structrow_fe1dabda_3449 m2c::k__m2c_structrow_fe1dabda_3449
#endif
#ifndef __m2c_structrow_fe1dabda_3450
#define __m2c_structrow_fe1dabda_3450 m2c::k__m2c_structrow_fe1dabda_3450
#endif
#ifndef __m2c_structrow_fe1dabda_3451
#define __m2c_structrow_fe1dabda_3451 m2c::k__m2c_structrow_fe1dabda_3451
#endif
#ifndef __m2c_structrow_fe1dabda_3454
#define __m2c_structrow_fe1dabda_3454 m2c::k__m2c_structrow_fe1dabda_3454
#endif
#ifndef __m2c_structrow_fe1dabda_3455
#define __m2c_structrow_fe1dabda_3455 m2c::k__m2c_structrow_fe1dabda_3455
#endif
#ifndef __m2c_structrow_fe1dabda_3456
#define __m2c_structrow_fe1dabda_3456 m2c::k__m2c_structrow_fe1dabda_3456
#endif
#ifndef __m2c_structrow_fe1dabda_3459
#define __m2c_structrow_fe1dabda_3459 m2c::k__m2c_structrow_fe1dabda_3459
#endif
#ifndef __m2c_structrow_fe1dabda_3460
#define __m2c_structrow_fe1dabda_3460 m2c::k__m2c_structrow_fe1dabda_3460
#endif
#ifndef __m2c_structrow_fe1dabda_3461
#define __m2c_structrow_fe1dabda_3461 m2c::k__m2c_structrow_fe1dabda_3461
#endif
#ifndef __m2c_structrow_fe1dabda_3464
#define __m2c_structrow_fe1dabda_3464 m2c::k__m2c_structrow_fe1dabda_3464
#endif
#ifndef __m2c_structrow_fe1dabda_3465
#define __m2c_structrow_fe1dabda_3465 m2c::k__m2c_structrow_fe1dabda_3465
#endif
#ifndef __m2c_structrow_fe1dabda_3466
#define __m2c_structrow_fe1dabda_3466 m2c::k__m2c_structrow_fe1dabda_3466
#endif
#ifndef __m2c_structrow_fe1dabda_3469
#define __m2c_structrow_fe1dabda_3469 m2c::k__m2c_structrow_fe1dabda_3469
#endif
#ifndef __m2c_structrow_fe1dabda_3470
#define __m2c_structrow_fe1dabda_3470 m2c::k__m2c_structrow_fe1dabda_3470
#endif
#ifndef __m2c_structrow_fe1dabda_3471
#define __m2c_structrow_fe1dabda_3471 m2c::k__m2c_structrow_fe1dabda_3471
#endif
#ifndef __m2c_structrow_fe1dabda_3474
#define __m2c_structrow_fe1dabda_3474 m2c::k__m2c_structrow_fe1dabda_3474
#endif
#ifndef __m2c_structrow_fe1dabda_3475
#define __m2c_structrow_fe1dabda_3475 m2c::k__m2c_structrow_fe1dabda_3475
#endif
#ifndef __m2c_structrow_fe1dabda_3476
#define __m2c_structrow_fe1dabda_3476 m2c::k__m2c_structrow_fe1dabda_3476
#endif
#ifndef __m2c_structrow_fe1dabda_3479
#define __m2c_structrow_fe1dabda_3479 m2c::k__m2c_structrow_fe1dabda_3479
#endif
#ifndef __m2c_structrow_fe1dabda_3480
#define __m2c_structrow_fe1dabda_3480 m2c::k__m2c_structrow_fe1dabda_3480
#endif
#ifndef __m2c_structrow_fe1dabda_3481
#define __m2c_structrow_fe1dabda_3481 m2c::k__m2c_structrow_fe1dabda_3481
#endif
#ifndef __m2c_structrow_fe1dabda_3484
#define __m2c_structrow_fe1dabda_3484 m2c::k__m2c_structrow_fe1dabda_3484
#endif
#ifndef __m2c_structrow_fe1dabda_3485
#define __m2c_structrow_fe1dabda_3485 m2c::k__m2c_structrow_fe1dabda_3485
#endif
#ifndef __m2c_structrow_fe1dabda_3486
#define __m2c_structrow_fe1dabda_3486 m2c::k__m2c_structrow_fe1dabda_3486
#endif
#ifndef __m2c_structrow_fe1dabda_3489
#define __m2c_structrow_fe1dabda_3489 m2c::k__m2c_structrow_fe1dabda_3489
#endif
#ifndef __m2c_structrow_fe1dabda_3490
#define __m2c_structrow_fe1dabda_3490 m2c::k__m2c_structrow_fe1dabda_3490
#endif
#ifndef __m2c_structrow_fe1dabda_3491
#define __m2c_structrow_fe1dabda_3491 m2c::k__m2c_structrow_fe1dabda_3491
#endif
#ifndef __m2c_structrow_fe1dabda_3494
#define __m2c_structrow_fe1dabda_3494 m2c::k__m2c_structrow_fe1dabda_3494
#endif
#ifndef __m2c_structrow_fe1dabda_3495
#define __m2c_structrow_fe1dabda_3495 m2c::k__m2c_structrow_fe1dabda_3495
#endif
#ifndef __m2c_structrow_fe1dabda_3496
#define __m2c_structrow_fe1dabda_3496 m2c::k__m2c_structrow_fe1dabda_3496
#endif
#ifndef __m2c_structrow_fe1dabda_3499
#define __m2c_structrow_fe1dabda_3499 m2c::k__m2c_structrow_fe1dabda_3499
#endif
#ifndef __m2c_structrow_fe1dabda_3500
#define __m2c_structrow_fe1dabda_3500 m2c::k__m2c_structrow_fe1dabda_3500
#endif
#ifndef __m2c_structrow_fe1dabda_3501
#define __m2c_structrow_fe1dabda_3501 m2c::k__m2c_structrow_fe1dabda_3501
#endif
#ifndef __m2c_structrow_fe1dabda_3504
#define __m2c_structrow_fe1dabda_3504 m2c::k__m2c_structrow_fe1dabda_3504
#endif
#ifndef __m2c_structrow_fe1dabda_3505
#define __m2c_structrow_fe1dabda_3505 m2c::k__m2c_structrow_fe1dabda_3505
#endif
#ifndef __m2c_structrow_fe1dabda_3506
#define __m2c_structrow_fe1dabda_3506 m2c::k__m2c_structrow_fe1dabda_3506
#endif
#ifndef __m2c_structrow_fe1dabda_3509
#define __m2c_structrow_fe1dabda_3509 m2c::k__m2c_structrow_fe1dabda_3509
#endif
#ifndef __m2c_structrow_fe1dabda_3510
#define __m2c_structrow_fe1dabda_3510 m2c::k__m2c_structrow_fe1dabda_3510
#endif
#ifndef __m2c_structrow_fe1dabda_3511
#define __m2c_structrow_fe1dabda_3511 m2c::k__m2c_structrow_fe1dabda_3511
#endif
#ifndef __m2c_structrow_fe1dabda_3514
#define __m2c_structrow_fe1dabda_3514 m2c::k__m2c_structrow_fe1dabda_3514
#endif
#ifndef __m2c_structrow_fe1dabda_3515
#define __m2c_structrow_fe1dabda_3515 m2c::k__m2c_structrow_fe1dabda_3515
#endif
#ifndef __m2c_structrow_fe1dabda_3516
#define __m2c_structrow_fe1dabda_3516 m2c::k__m2c_structrow_fe1dabda_3516
#endif
#ifndef __m2c_structrow_fe1dabda_3519
#define __m2c_structrow_fe1dabda_3519 m2c::k__m2c_structrow_fe1dabda_3519
#endif
#ifndef __m2c_structrow_fe1dabda_3520
#define __m2c_structrow_fe1dabda_3520 m2c::k__m2c_structrow_fe1dabda_3520
#endif
#ifndef __m2c_structrow_fe1dabda_3521
#define __m2c_structrow_fe1dabda_3521 m2c::k__m2c_structrow_fe1dabda_3521
#endif
#ifndef __m2c_structrow_fe1dabda_3524
#define __m2c_structrow_fe1dabda_3524 m2c::k__m2c_structrow_fe1dabda_3524
#endif
#ifndef __m2c_structrow_fe1dabda_3525
#define __m2c_structrow_fe1dabda_3525 m2c::k__m2c_structrow_fe1dabda_3525
#endif
#ifndef __m2c_structrow_fe1dabda_3526
#define __m2c_structrow_fe1dabda_3526 m2c::k__m2c_structrow_fe1dabda_3526
#endif
#ifndef __m2c_structrow_fe1dabda_3529
#define __m2c_structrow_fe1dabda_3529 m2c::k__m2c_structrow_fe1dabda_3529
#endif
#ifndef __m2c_structrow_fe1dabda_3530
#define __m2c_structrow_fe1dabda_3530 m2c::k__m2c_structrow_fe1dabda_3530
#endif
#ifndef __m2c_structrow_fe1dabda_3531
#define __m2c_structrow_fe1dabda_3531 m2c::k__m2c_structrow_fe1dabda_3531
#endif
#ifndef __m2c_structrow_fe1dabda_3534
#define __m2c_structrow_fe1dabda_3534 m2c::k__m2c_structrow_fe1dabda_3534
#endif
#ifndef __m2c_structrow_fe1dabda_3535
#define __m2c_structrow_fe1dabda_3535 m2c::k__m2c_structrow_fe1dabda_3535
#endif
#ifndef __m2c_structrow_fe1dabda_3536
#define __m2c_structrow_fe1dabda_3536 m2c::k__m2c_structrow_fe1dabda_3536
#endif
#ifndef __m2c_structrow_fe1dabda_3539
#define __m2c_structrow_fe1dabda_3539 m2c::k__m2c_structrow_fe1dabda_3539
#endif
#ifndef __m2c_structrow_fe1dabda_3540
#define __m2c_structrow_fe1dabda_3540 m2c::k__m2c_structrow_fe1dabda_3540
#endif
#ifndef __m2c_structrow_fe1dabda_3541
#define __m2c_structrow_fe1dabda_3541 m2c::k__m2c_structrow_fe1dabda_3541
#endif
#ifndef __m2c_structrow_fe1dabda_3544
#define __m2c_structrow_fe1dabda_3544 m2c::k__m2c_structrow_fe1dabda_3544
#endif
#ifndef __m2c_structrow_fe1dabda_3545
#define __m2c_structrow_fe1dabda_3545 m2c::k__m2c_structrow_fe1dabda_3545
#endif
#ifndef __m2c_structrow_fe1dabda_3546
#define __m2c_structrow_fe1dabda_3546 m2c::k__m2c_structrow_fe1dabda_3546
#endif
#ifndef __m2c_structrow_fe1dabda_3549
#define __m2c_structrow_fe1dabda_3549 m2c::k__m2c_structrow_fe1dabda_3549
#endif
#ifndef __m2c_structrow_fe1dabda_3550
#define __m2c_structrow_fe1dabda_3550 m2c::k__m2c_structrow_fe1dabda_3550
#endif
#ifndef __m2c_structrow_fe1dabda_3551
#define __m2c_structrow_fe1dabda_3551 m2c::k__m2c_structrow_fe1dabda_3551
#endif
#ifndef __m2c_structrow_fe1dabda_3554
#define __m2c_structrow_fe1dabda_3554 m2c::k__m2c_structrow_fe1dabda_3554
#endif
#ifndef __m2c_structrow_fe1dabda_3555
#define __m2c_structrow_fe1dabda_3555 m2c::k__m2c_structrow_fe1dabda_3555
#endif
#ifndef __m2c_structrow_fe1dabda_3556
#define __m2c_structrow_fe1dabda_3556 m2c::k__m2c_structrow_fe1dabda_3556
#endif
#ifndef __m2c_structrow_fe1dabda_3559
#define __m2c_structrow_fe1dabda_3559 m2c::k__m2c_structrow_fe1dabda_3559
#endif
#ifndef __m2c_structrow_fe1dabda_3560
#define __m2c_structrow_fe1dabda_3560 m2c::k__m2c_structrow_fe1dabda_3560
#endif
#ifndef __m2c_structrow_fe1dabda_3561
#define __m2c_structrow_fe1dabda_3561 m2c::k__m2c_structrow_fe1dabda_3561
#endif
#ifndef __m2c_structrow_fe1dabda_3564
#define __m2c_structrow_fe1dabda_3564 m2c::k__m2c_structrow_fe1dabda_3564
#endif
#ifndef __m2c_structrow_fe1dabda_3565
#define __m2c_structrow_fe1dabda_3565 m2c::k__m2c_structrow_fe1dabda_3565
#endif
#ifndef __m2c_structrow_fe1dabda_3566
#define __m2c_structrow_fe1dabda_3566 m2c::k__m2c_structrow_fe1dabda_3566
#endif
#ifndef __m2c_structrow_fe1dabda_3569
#define __m2c_structrow_fe1dabda_3569 m2c::k__m2c_structrow_fe1dabda_3569
#endif
#ifndef __m2c_structrow_fe1dabda_3570
#define __m2c_structrow_fe1dabda_3570 m2c::k__m2c_structrow_fe1dabda_3570
#endif
#ifndef __m2c_structrow_fe1dabda_3571
#define __m2c_structrow_fe1dabda_3571 m2c::k__m2c_structrow_fe1dabda_3571
#endif
#ifndef __m2c_structrow_fe1dabda_3574
#define __m2c_structrow_fe1dabda_3574 m2c::k__m2c_structrow_fe1dabda_3574
#endif
#ifndef __m2c_structrow_fe1dabda_3575
#define __m2c_structrow_fe1dabda_3575 m2c::k__m2c_structrow_fe1dabda_3575
#endif
#ifndef __m2c_structrow_fe1dabda_3576
#define __m2c_structrow_fe1dabda_3576 m2c::k__m2c_structrow_fe1dabda_3576
#endif
#ifndef __m2c_structrow_fe1dabda_3579
#define __m2c_structrow_fe1dabda_3579 m2c::k__m2c_structrow_fe1dabda_3579
#endif
#ifndef __m2c_structrow_fe1dabda_3580
#define __m2c_structrow_fe1dabda_3580 m2c::k__m2c_structrow_fe1dabda_3580
#endif
#ifndef __m2c_structrow_fe1dabda_3581
#define __m2c_structrow_fe1dabda_3581 m2c::k__m2c_structrow_fe1dabda_3581
#endif
#ifndef __m2c_structrow_fe1dabda_3584
#define __m2c_structrow_fe1dabda_3584 m2c::k__m2c_structrow_fe1dabda_3584
#endif
#ifndef __m2c_structrow_fe1dabda_3585
#define __m2c_structrow_fe1dabda_3585 m2c::k__m2c_structrow_fe1dabda_3585
#endif
#ifndef __m2c_structrow_fe1dabda_3586
#define __m2c_structrow_fe1dabda_3586 m2c::k__m2c_structrow_fe1dabda_3586
#endif
#ifndef __m2c_structrow_fe1dabda_3589
#define __m2c_structrow_fe1dabda_3589 m2c::k__m2c_structrow_fe1dabda_3589
#endif
#ifndef __m2c_structrow_fe1dabda_3590
#define __m2c_structrow_fe1dabda_3590 m2c::k__m2c_structrow_fe1dabda_3590
#endif
#ifndef __m2c_structrow_fe1dabda_3591
#define __m2c_structrow_fe1dabda_3591 m2c::k__m2c_structrow_fe1dabda_3591
#endif
#ifndef __m2c_structrow_fe1dabda_3594
#define __m2c_structrow_fe1dabda_3594 m2c::k__m2c_structrow_fe1dabda_3594
#endif
#ifndef __m2c_structrow_fe1dabda_3595
#define __m2c_structrow_fe1dabda_3595 m2c::k__m2c_structrow_fe1dabda_3595
#endif
#ifndef __m2c_structrow_fe1dabda_3596
#define __m2c_structrow_fe1dabda_3596 m2c::k__m2c_structrow_fe1dabda_3596
#endif
#ifndef __m2c_structrow_fe1dabda_3599
#define __m2c_structrow_fe1dabda_3599 m2c::k__m2c_structrow_fe1dabda_3599
#endif
#ifndef __m2c_structrow_fe1dabda_3600
#define __m2c_structrow_fe1dabda_3600 m2c::k__m2c_structrow_fe1dabda_3600
#endif
#ifndef __m2c_structrow_fe1dabda_3601
#define __m2c_structrow_fe1dabda_3601 m2c::k__m2c_structrow_fe1dabda_3601
#endif
#ifndef __m2c_structrow_fe1dabda_3604
#define __m2c_structrow_fe1dabda_3604 m2c::k__m2c_structrow_fe1dabda_3604
#endif



#endif

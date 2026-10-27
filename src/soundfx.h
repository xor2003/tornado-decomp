/* THIS IS GENERATED FILE */

        
#ifndef __M2C_SOUNDFX_STUBS_H__
#define __M2C_SOUNDFX_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
struct waypoint {
  db wp_id;
  db wp_attr;
  dw wp_xsec;
  dw wp_ysec;
  dw wp_xft;
  dw wp_yft;
  dw wp_zft;
  dw wp_time;
  db wp_action;
  db wp_package;
};

struct endroute {
  db dummyd1263ced_default_seg_0_305;
  db dummyd1263ced_default_seg_0_306;
};

struct airfield {
  dw af_xsec;
  dw af_ysec;
  db af_status;
  db af_ils_status;
  dw af_rng;
  dw af_brg;
  dw af_eta;
  dw af_rng_lo;
  dw af_rng_hi;
  dw af_ils_ptr;
};

struct drone_data {
  dw drone_type;
  db drone_side;
  db drone_event;
};

struct vehicle {
  dw veh_drone;
  db veh_side;
  db veh_event;
  dw veh_node_ptr;
  dw veh_dist;
  dw veh_dist_fine;
  dw veh_xfine;
  dw veh_yfine;
  dw veh_zfine;
};

struct convoy {
  db cnvy_active;
  db __m2c_pad_1_1;
  dw cnvy_delay;
  dw cnvy_speed;
  dw cnvy_aim_speed;
  db cnvy_drone;
  db cnvy_event;
};

struct route_node {
  db route_xsec;
  db route_ysec;
  dw route_xft;
  dw route_yft;
  dw route_dist;
  dw route_dir;
  db route_attr;
  db route_speed;
  db route_drone;
  db route_event;
};

struct clock {
  db clk_hrs;
  db clk_mins;
  db clk_secs;
  db clk_100ths;
};

struct aircraft {
  dw ac_drone;
  db ac_side;
  db ac_event;
  dw ac_type;
  dw ac_delay;
  db ac_drone_num;
  db ac_event_num;
  dw ac_ctrl_mode;
  dw ac_wp_ptr;
  dw ac_xfine;
  dw ac_yfine;
  dw ac_zfine;
  dw ac_hfine;
  dw ac_pfine;
  dw ac_rfine;
  dw ac_vtas;
  dw ac_vtas_fine;
  dw ac_lift_vctr;
  db ac_ab_delay;
  db ac_sweep_delay;
  dw ac_taxi_ptr;
  dw ac_taxi_xft;
  dw ac_taxi_yft;
  dw ac_arm_lock;
  dw ac_flags;
  dw ac_decoy_timer;
  dw ac_aa_timer;
  dw ac_opp_ptr;
  dw ac_prev_perr;
  dw ac_prev_prate;
  db ac_shells;
  db ac_missiles;
  dw ac_wpn_int;
  dw ac_evade_timer;
  dw ac_gmax_timer;
};

struct helicopter {
  dw hc_drone;
  db hc_side;
  db hc_event;
  dw hc_type;
  dw hc_delay;
  db hc_drone_num;
  db hc_event_num;
  dw hc_ctrl_mode;
  dw hc_wp_ptr;
  dw hc_xfine;
  dw hc_yfine;
  dw hc_zfine;
  dw hc_hfine;
  dw hc_pfine;
  dw hc_rfine;
  dw hc_vtas;
  dw hc_vtas_fine;
  dw hc_lift_vctr;
  dw hc_accel_pfine;
  dw hc_flags;
  dw hc_decoy_timer;
};

struct weapon {
  dw wpn_type;
  dw wpn_flags;
  dw wpn_hfine;
  dw wpn_pfine;
  dw wpn_xfine;
  dw wpn_yfine;
  dw wpn_zfine;
  dw wpn_userw1;
  dw wpn_userw2;
  dw wpn_userw3;
  dw wpn_userw4;
  dw wpn_userw5;
  dw wpn_userw6;
  dw wpn_userw7;
};

struct package {
  db pack_wp_id;
  db __m2c_pad_1_1;
  dw pack_weap_type;
  dw pack_weap_num;
  dw pack_weap_mode;
};

struct arad_track {
  dw arad_ptr;
  dd arad_rng;
  dw arad_brg;
  dw arad_xcrt;
  dw arad_ycrt;
};

struct impact {
  db imp_xsec;
  db imp_ysec;
  dw imp_xft;
  dw imp_yft;
  db imp_weap_type;
  db imp_surf_type;
};

struct radars {
  dw rad_sam_offset;
  dw rad_aaa_offset;
};

struct ewr {
  dw ewr_type;
  db ewr_xsec;
  db ewr_ysec;
  dw ewr_ptr;
};

struct rwr {
  dw rwr_threat;
  dd rwr_rng;
  dw rwr_dir;
  dw rwr_xsec;
  dw rwr_ysec;
  dw rwr_xft;
  dw rwr_yft;
  dw rwr_ptr;
};

struct comms {
  db comms_checksum;
  db comms_flags1;
  db comms_flags2;
  db comms_flags3;
  db comms_mob_num;
  db comms_mob_anim;
  dw comms_xsec;
  dw comms_ysec;
  dw comms_xft;
  dw comms_yft;
  dd comms_zft;
  dw comms_hdg;
  dw comms_pitch;
  dw comms_roll;
  dw comms_vtas;
};

struct runway_damage {
  dw rdam_xsec;
  dw rdam_ysec;
  dw rdam_hits;
};

#pragma pack(pop)

static const word wp_id = offsetof(struct waypoint, wp_id);
static const word wp_attr = offsetof(struct waypoint, wp_attr);
static const word wp_xsec = offsetof(struct waypoint, wp_xsec);
static const word wp_ysec = offsetof(struct waypoint, wp_ysec);
static const word wp_xft = offsetof(struct waypoint, wp_xft);
static const word wp_yft = offsetof(struct waypoint, wp_yft);
static const word wp_zft = offsetof(struct waypoint, wp_zft);
static const word wp_time = offsetof(struct waypoint, wp_time);
static const word wp_action = offsetof(struct waypoint, wp_action);
static const word wp_package = offsetof(struct waypoint, wp_package);
static const word dummyd1263ced_default_seg_0_305 = offsetof(struct endroute, dummyd1263ced_default_seg_0_305);
static const word dummyd1263ced_default_seg_0_306 = offsetof(struct endroute, dummyd1263ced_default_seg_0_306);
static const word af_xsec = offsetof(struct airfield, af_xsec);
static const word af_ysec = offsetof(struct airfield, af_ysec);
static const word af_status = offsetof(struct airfield, af_status);
static const word af_ils_status = offsetof(struct airfield, af_ils_status);
static const word af_rng = offsetof(struct airfield, af_rng);
static const word af_brg = offsetof(struct airfield, af_brg);
static const word af_eta = offsetof(struct airfield, af_eta);
static const word af_rng_lo = offsetof(struct airfield, af_rng_lo);
static const word af_rng_hi = offsetof(struct airfield, af_rng_hi);
static const word af_ils_ptr = offsetof(struct airfield, af_ils_ptr);
static const word drone_type = offsetof(struct drone_data, drone_type);
static const word drone_side = offsetof(struct drone_data, drone_side);
static const word drone_event = offsetof(struct drone_data, drone_event);
static const word veh_drone = offsetof(struct vehicle, veh_drone);
static const word veh_side = offsetof(struct vehicle, veh_side);
static const word veh_event = offsetof(struct vehicle, veh_event);
static const word veh_node_ptr = offsetof(struct vehicle, veh_node_ptr);
static const word veh_dist = offsetof(struct vehicle, veh_dist);
static const word veh_dist_fine = offsetof(struct vehicle, veh_dist_fine);
static const word veh_xfine = offsetof(struct vehicle, veh_xfine);
static const word veh_yfine = offsetof(struct vehicle, veh_yfine);
static const word veh_zfine = offsetof(struct vehicle, veh_zfine);
static const word cnvy_active = offsetof(struct convoy, cnvy_active);
static const word cnvy_delay = offsetof(struct convoy, cnvy_delay);
static const word cnvy_speed = offsetof(struct convoy, cnvy_speed);
static const word cnvy_aim_speed = offsetof(struct convoy, cnvy_aim_speed);
static const word cnvy_drone = offsetof(struct convoy, cnvy_drone);
static const word cnvy_event = offsetof(struct convoy, cnvy_event);
static const word route_xsec = offsetof(struct route_node, route_xsec);
static const word route_ysec = offsetof(struct route_node, route_ysec);
static const word route_xft = offsetof(struct route_node, route_xft);
static const word route_yft = offsetof(struct route_node, route_yft);
static const word route_dist = offsetof(struct route_node, route_dist);
static const word route_dir = offsetof(struct route_node, route_dir);
static const word route_attr = offsetof(struct route_node, route_attr);
static const word route_speed = offsetof(struct route_node, route_speed);
static const word route_drone = offsetof(struct route_node, route_drone);
static const word route_event = offsetof(struct route_node, route_event);
static const word clk_hrs = offsetof(struct clock, clk_hrs);
static const word clk_mins = offsetof(struct clock, clk_mins);
static const word clk_secs = offsetof(struct clock, clk_secs);
static const word clk_100ths = offsetof(struct clock, clk_100ths);
static const word ac_drone = offsetof(struct aircraft, ac_drone);
static const word ac_side = offsetof(struct aircraft, ac_side);
static const word ac_event = offsetof(struct aircraft, ac_event);
static const word ac_type = offsetof(struct aircraft, ac_type);
static const word ac_delay = offsetof(struct aircraft, ac_delay);
static const word ac_drone_num = offsetof(struct aircraft, ac_drone_num);
static const word ac_event_num = offsetof(struct aircraft, ac_event_num);
static const word ac_ctrl_mode = offsetof(struct aircraft, ac_ctrl_mode);
static const word ac_wp_ptr = offsetof(struct aircraft, ac_wp_ptr);
static const word ac_xfine = offsetof(struct aircraft, ac_xfine);
static const word ac_yfine = offsetof(struct aircraft, ac_yfine);
static const word ac_zfine = offsetof(struct aircraft, ac_zfine);
static const word ac_hfine = offsetof(struct aircraft, ac_hfine);
static const word ac_pfine = offsetof(struct aircraft, ac_pfine);
static const word ac_rfine = offsetof(struct aircraft, ac_rfine);
static const word ac_vtas = offsetof(struct aircraft, ac_vtas);
static const word ac_vtas_fine = offsetof(struct aircraft, ac_vtas_fine);
static const word ac_lift_vctr = offsetof(struct aircraft, ac_lift_vctr);
static const word ac_ab_delay = offsetof(struct aircraft, ac_ab_delay);
static const word ac_sweep_delay = offsetof(struct aircraft, ac_sweep_delay);
static const word ac_taxi_ptr = offsetof(struct aircraft, ac_taxi_ptr);
static const word ac_taxi_xft = offsetof(struct aircraft, ac_taxi_xft);
static const word ac_taxi_yft = offsetof(struct aircraft, ac_taxi_yft);
static const word ac_arm_lock = offsetof(struct aircraft, ac_arm_lock);
static const word ac_flags = offsetof(struct aircraft, ac_flags);
static const word ac_decoy_timer = offsetof(struct aircraft, ac_decoy_timer);
static const word ac_aa_timer = offsetof(struct aircraft, ac_aa_timer);
static const word ac_opp_ptr = offsetof(struct aircraft, ac_opp_ptr);
static const word ac_prev_perr = offsetof(struct aircraft, ac_prev_perr);
static const word ac_prev_prate = offsetof(struct aircraft, ac_prev_prate);
static const word ac_shells = offsetof(struct aircraft, ac_shells);
static const word ac_missiles = offsetof(struct aircraft, ac_missiles);
static const word ac_wpn_int = offsetof(struct aircraft, ac_wpn_int);
static const word ac_evade_timer = offsetof(struct aircraft, ac_evade_timer);
static const word ac_gmax_timer = offsetof(struct aircraft, ac_gmax_timer);
static const word hc_drone = offsetof(struct helicopter, hc_drone);
static const word hc_side = offsetof(struct helicopter, hc_side);
static const word hc_event = offsetof(struct helicopter, hc_event);
static const word hc_type = offsetof(struct helicopter, hc_type);
static const word hc_delay = offsetof(struct helicopter, hc_delay);
static const word hc_drone_num = offsetof(struct helicopter, hc_drone_num);
static const word hc_event_num = offsetof(struct helicopter, hc_event_num);
static const word hc_ctrl_mode = offsetof(struct helicopter, hc_ctrl_mode);
static const word hc_wp_ptr = offsetof(struct helicopter, hc_wp_ptr);
static const word hc_xfine = offsetof(struct helicopter, hc_xfine);
static const word hc_yfine = offsetof(struct helicopter, hc_yfine);
static const word hc_zfine = offsetof(struct helicopter, hc_zfine);
static const word hc_hfine = offsetof(struct helicopter, hc_hfine);
static const word hc_pfine = offsetof(struct helicopter, hc_pfine);
static const word hc_rfine = offsetof(struct helicopter, hc_rfine);
static const word hc_vtas = offsetof(struct helicopter, hc_vtas);
static const word hc_vtas_fine = offsetof(struct helicopter, hc_vtas_fine);
static const word hc_lift_vctr = offsetof(struct helicopter, hc_lift_vctr);
static const word hc_accel_pfine = offsetof(struct helicopter, hc_accel_pfine);
static const word hc_flags = offsetof(struct helicopter, hc_flags);
static const word hc_decoy_timer = offsetof(struct helicopter, hc_decoy_timer);
static const word wpn_type = offsetof(struct weapon, wpn_type);
static const word wpn_flags = offsetof(struct weapon, wpn_flags);
static const word wpn_hfine = offsetof(struct weapon, wpn_hfine);
static const word wpn_pfine = offsetof(struct weapon, wpn_pfine);
static const word wpn_xfine = offsetof(struct weapon, wpn_xfine);
static const word wpn_yfine = offsetof(struct weapon, wpn_yfine);
static const word wpn_zfine = offsetof(struct weapon, wpn_zfine);
static const word wpn_userw1 = offsetof(struct weapon, wpn_userw1);
static const word wpn_userw2 = offsetof(struct weapon, wpn_userw2);
static const word wpn_userw3 = offsetof(struct weapon, wpn_userw3);
static const word wpn_userw4 = offsetof(struct weapon, wpn_userw4);
static const word wpn_userw5 = offsetof(struct weapon, wpn_userw5);
static const word wpn_userw6 = offsetof(struct weapon, wpn_userw6);
static const word wpn_userw7 = offsetof(struct weapon, wpn_userw7);
static const word pack_wp_id = offsetof(struct package, pack_wp_id);
static const word pack_weap_type = offsetof(struct package, pack_weap_type);
static const word pack_weap_num = offsetof(struct package, pack_weap_num);
static const word pack_weap_mode = offsetof(struct package, pack_weap_mode);
static const word arad_ptr = offsetof(struct arad_track, arad_ptr);
static const word arad_rng = offsetof(struct arad_track, arad_rng);
static const word arad_brg = offsetof(struct arad_track, arad_brg);
static const word arad_xcrt = offsetof(struct arad_track, arad_xcrt);
static const word arad_ycrt = offsetof(struct arad_track, arad_ycrt);
static const word imp_xsec = offsetof(struct impact, imp_xsec);
static const word imp_ysec = offsetof(struct impact, imp_ysec);
static const word imp_xft = offsetof(struct impact, imp_xft);
static const word imp_yft = offsetof(struct impact, imp_yft);
static const word imp_weap_type = offsetof(struct impact, imp_weap_type);
static const word imp_surf_type = offsetof(struct impact, imp_surf_type);
static const word rad_sam_offset = offsetof(struct radars, rad_sam_offset);
static const word rad_aaa_offset = offsetof(struct radars, rad_aaa_offset);
static const word ewr_type = offsetof(struct ewr, ewr_type);
static const word ewr_xsec = offsetof(struct ewr, ewr_xsec);
static const word ewr_ysec = offsetof(struct ewr, ewr_ysec);
static const word ewr_ptr = offsetof(struct ewr, ewr_ptr);
static const word rwr_threat = offsetof(struct rwr, rwr_threat);
static const word rwr_rng = offsetof(struct rwr, rwr_rng);
static const word rwr_dir = offsetof(struct rwr, rwr_dir);
static const word rwr_xsec = offsetof(struct rwr, rwr_xsec);
static const word rwr_ysec = offsetof(struct rwr, rwr_ysec);
static const word rwr_xft = offsetof(struct rwr, rwr_xft);
static const word rwr_yft = offsetof(struct rwr, rwr_yft);
static const word rwr_ptr = offsetof(struct rwr, rwr_ptr);
static const word comms_checksum = offsetof(struct comms, comms_checksum);
static const word comms_flags1 = offsetof(struct comms, comms_flags1);
static const word comms_flags2 = offsetof(struct comms, comms_flags2);
static const word comms_flags3 = offsetof(struct comms, comms_flags3);
static const word comms_mob_num = offsetof(struct comms, comms_mob_num);
static const word comms_mob_anim = offsetof(struct comms, comms_mob_anim);
static const word comms_xsec = offsetof(struct comms, comms_xsec);
static const word comms_ysec = offsetof(struct comms, comms_ysec);
static const word comms_xft = offsetof(struct comms, comms_xft);
static const word comms_yft = offsetof(struct comms, comms_yft);
static const word comms_zft = offsetof(struct comms, comms_zft);
static const word comms_hdg = offsetof(struct comms, comms_hdg);
static const word comms_pitch = offsetof(struct comms, comms_pitch);
static const word comms_roll = offsetof(struct comms, comms_roll);
static const word comms_vtas = offsetof(struct comms, comms_vtas);
static const word rdam_xsec = offsetof(struct runway_damage, rdam_xsec);
static const word rdam_ysec = offsetof(struct runway_damage, rdam_ysec);
static const word rdam_hits = offsetof(struct runway_damage, rdam_hits);


	static const int ids_tornado = 0;
static const int adv_tornado = 2;
static const int ecr_tornado = 4;
static const int ctrl_dev_kbd1 = 0;
static const int ctrl_dev_kbd2 = 2;
static const int ctrl_dev_joy1 = 4;
static const int ctrl_dev_joy2 = 6;
static const int snd_null = 0;
static const int snd_speaker = 2;
static const int snd_sblaster = 4;
static const int snd_adlib = 6;
static const int snd_roland = 8;
static const int shake_opt_off = 0;
static const int shake_opt_on = 1;
static const int sound_opt_off = 0;
static const int sound_opt_on = 1;
static const int sound_opt_eng = 2;
static const int view_pilot = 0;
static const int view_lpilot = 2;
static const int view_rpilot = 4;
static const int view_navig = 6;
static const int view_lnavig = 8;
static const int view_rnavig = 10;
static const int view_tracking = 12;
static const int view_satellite = 14;
static const int view_map = 16;
static const int view_drone = 18;
static const int view_spectator = 20;
static const int view_remote = 22;
static const int view_lookdown = 24;
static const int view_lookup = 26;
static const int view_demo = 28;
static const int view_destroyed = 30;
static const int view_weapon = 32;
static const int view_zrk = 34;
static const int view_zsu1 = 36;
static const int view_zsu2 = 38;
static const int view_zrk_aaa = 40;
static const int pilotpan = 0;
static const int psidepan = 2;
static const int navigpan = 4;
static const int nsidepan = 6;
static const int extrnpan = 8;
static const int lookdown = 10;
static const int lookup = 12;
static const int mappan = 14;
static const int crew_pilot = 0;
static const int crew_navig = 2;
static const int auto_off = 0;
static const int auto_approach = 2;
static const int auto_track = 4;
static const int auto_hold = 6;
static const int auto_tf = 8;
static const int alt_manual = 0;
static const int alt_approach = 2;
static const int alt_acquire = 4;
static const int alt_tf = 6;
static const int hdg_manual = 0;
static const int hdg_approach = 2;
static const int hdg_acquire = 4;
static const int hdg_track = 6;
static const int jet_null = 0;
static const int jet_ext_tanks = 1;
static const int jet_ext_stores = 2;
static const int jet_all = 3;
static const int die_quit = 1;
static const int die_hypoxia = 2;
static const int die_break_up = 3;
static const int die_crash_hill = 4;
static const int die_crash_gnd = 5;
static const int die_ditched = 6;
static const int die_gnd_spd_hi = 7;
static const int die_sink_hi = 8;
static const int die_roll_hi = 9;
static const int die_nose_wheel = 10;
static const int die_tail_scrape = 11;
static const int die_collapse = 12;
static const int die_fire = 13;
static const int die_eject = 14;
static const int die_missile = 15;
static const int die_cannon = 16;
static const int die_sam = 17;
static const int die_aaa = 18;
static const int die_gnd_explo = 19;
static const int die_air_explo = 20;
static const int die_hit_gnd_obj = 21;
static const int die_hit_mob_obj = 22;
static const int die_2_plyr_win = 23;
static const int die_2_plyr_draw = 24;
static const int die_2_plyr_lose = 25;
static const int sys_err_mouse = 255;
static const int sys_err_panels = 254;
static const int sys_err_rgb = 253;
static const int sys_err_ld_game = 252;
static const int sys_err_sv_game = 251;
static const int sys_err_ld_lyr = 250;
static const int sys_err_ld_obj = 249;
static const int sys_err_sv_obj = 248;
static const int sys_err_ld_mob = 247;
static const int sys_err_sv_mob = 246;
static const int sys_err_map_ok = 245;
static const int sys_err_resize = 244;
static const int sys_err_smem = 243;
static const int sys_err_sdrvr = 242;
static const int sys_err_scard = 241;
static const int sys_err_ld_pic = 240;
static const int sys_err_ld_prev = 239;
static const int sys_err_sv_imp = 238;
static const int sys_err_ld_misc = 237;
static const int sys_err_timeout = 236;
static const int sys_err_sync_to = 235;
static const int sys_err_mmem = 234;
static const int sys_err_mdrvr = 233;
static const int sys_err_mcard = 232;
enum {
    dip_gloc = 0x1,
    dip_hypoxia = 0x2,
    dip_eject = 0x4,
    dip_destroyed = 0x8,
    dip_demo = 0x80,
    wp_type = 0x1,
    wp_link = 0x2,
    wp_here = 0x4,
    wp_tf = 0x8,
    wp_ils = 0x10,
    wp_coord = 0x20,
    wp_break = 0x40,
    wp_valid = 0x80,
};
static const int num_wp_long = 16;
static const int num_wp_short = 9;
enum {
    wpack_mode_mask = 0xf,
    wpack_num_mask = 0xf0,
};
static const int wpack_null = 0;
static const int wpack_gpb1000 = 2;
static const int wpack_ret1000 = 4;
static const int wpack_lgb1000 = 6;
static const int wpack_bl755 = 8;
static const int wpack_jp233 = 10;
static const int wpack_alarm = 12;
static const int wpack_agm = 14;
static const int nul_radar = 0;
static const int gnd_radar = 2;
static const int air_radar = 4;
static const int num_airfields = 4;
static const int dead = 0;
static const int allied = 1;
static const int enemy = 2;
static const int drone_unknown = 0;
static const int drone_aircraft = 2;
static const int drone_helicopt = 4;
static const int drone_truck = 6;
static const int drone_train = 8;
static const int num_drones = 90;
static const int truck = 0;
static const int train = 2;
static const int num_trucks = 4;
static const int num_trains = 8;
static const int num_route_nodes = 32;
enum {
    rn_end = 0x1,
    rn_link = 0x2,
    rn_event = 0x4,
    rn_delay = 0x8,
    rn_upslope = 0x10,
    rn_dnslope = 0x20,
    red_oxy = 0x1,
    red_l_fire = 0x2,
    red_r_fire = 0x4,
    red_aut = 0x8,
    red_rev = 0x10,
    red_spils = 0x20,
    red_uc = 0x40,
    red_fuel = 0x80,
    red_l_eng = 0x100,
    red_r_eng = 0x200,
    amb_cnfg = 0x1,
    amb_adc = 0x2,
    amb_ecm = 0x4,
    amb_uc = 0x8,
    amb_wb = 0x10,
    amb_ab = 0x20,
    amb_flps = 0x40,
    amb_swp = 0x80,
    amb_hud = 0x100,
    amb_mfd1 = 0x200,
    amb_mfd2 = 0x400,
    amb_l_tab = 0x800,
    amb_r_tab = 0x1000,
    amb_rad = 0x2000,
    amb_rwr = 0x4000,
};
static const int ac_wp_null = 0;
static const int ac_wp_takeoff = 2;
static const int ac_wp_airborne = 4;
static const int ac_wp_taxi = 6;
static const int ac_wp_restart = 8;
static const int gr4_tornado = 0;
static const int mig27_flogger = 2;
static const int f3_tornado = 4;
static const int mig31_foxhound = 6;
static const int f15_eagle = 8;
static const int su27_flanker = 10;
static const int f16_falcon = 12;
static const int mig29_fulcrum = 14;
static const int a10_thunderbolt = 16;
static const int su25_frogfoot = 18;
static const int e3d_sentry = 20;
static const int il76_mainstay = 22;
static const int c130_hercules = 24;
static const int il76_candid = 26;
enum {
    aflg_ir_lock = 0x1,
    aflg_rad_lock = 0x2,
    aflg_rel_chaff = 0x4,
    aflg_rel_flare = 0x8,
    aflg_evade_hi = 0x10,
    aflg_evade_lo = 0x20,
    aflg_gmax = 0x40,
    aflg_upright = 0x80,
    aflg_break = 0x100,
};
static const int hc_wp_null = 0;
static const int hc_wp_takeoff = 2;
static const int hc_wp_airborne = 4;
static const int hc_wp_stop = 6;
static const int hc_wp_restart = 8;
static const int ah64_apache = 0;
static const int mi24_hind = 2;
static const int ch47_chinook = 4;
static const int mi26_halo = 6;
enum {
    hflg_ir_lock = 0x1,
    hflg_rad_lock = 0x2,
    hflg_rel_chaff = 0x4,
    hflg_rel_flare = 0x8,
    object_lights = 0x0,
    object_enemy = 0x40,
    object_dead = 0x80,
    object_clear = 0xc0,
    wing_sweep_fwd = 0x0,
    wing_sweep_mid = 0x1,
    wing_sweep_bck = 0x2,
    wing_sweep_all = 0x3,
    gear_down = 0x4,
    reheat_l_eng = 0x8,
    reheat_r_eng = 0x10,
    reheat_all = 0x18,
    ac_specials = 0x20,
    rotor_pos1 = 0x0,
    rotor_pos2 = 0x1,
    rotor_pos3 = 0x2,
    rotor_all = 0x3,
    headlamps = 0x1,
};
static const int null_weapon = -1;
static const int gpb1000 = 0;
static const int ret1000 = 2;
static const int lgb1000 = 4;
static const int bl755 = 6;
static const int jp233 = 8;
static const int asm_alarm = 10;
static const int cannon = 12;
static const int sidewinder = 14;
static const int skyflash = 16;
static const int patriot = 18;
static const int gecko = 20;
static const int chaff = 22;
static const int flare = 24;
static const int ext_gpb1000 = 0;
static const int ext_ret1000 = 2;
static const int ext_lgb1000 = 4;
static const int ext_bl755 = 6;
static const int ext_jp233 = 8;
static const int ext_alarm = 10;
static const int ext_sidewinder = 12;
static const int ext_skyflash = 14;
static const int ext_boz100 = 16;
static const int ext_skyshadow = 18;
static const int ext_droptank = 20;
static const int max_cannon = 180;
static const int max_chaff = 120;
static const int max_flares = 28;
enum {
    retarded_bomb = 0x1,
    casing_off = 0x2,
    splash1 = 0x1,
};
static const int airburst1 = 5;
enum {
    flame = 0x1,
    chute = 0x2,
    rhs_cannon = 0x1,
    lhs_cannon = 0x2,
};
static const int num_weapons = 128;
enum {
    wflg_alarm_mode = 0x7,
    wflg_tornado = 0x8,
    wflg_splash = 0x10,
    wflg_unguided = 0x20,
    wflg_bomblet = 0x40,
    wflg_burnout = 0x80,
    wflg_ir_seek = 0x100,
    wflg_airburst = 0x200,
    wflg_no_radar = 0x400,
    wflg_tlock = 0x800,
};
static const int alarm_direct = 0;
static const int alarm_kill = 1;
static const int alarm_guide = 2;
static const int alarm_zoom = 3;
static const int alarm_freefall = 4;
static const int alarm_loiter = 5;
static const int alarm_dive = 6;
static const int wpn_effect1 = 0;
static const int wpn_effect2 = 1;
static const int wpn_effect3 = 2;
static const int wpn_effect4 = 3;
static const int num_packages = 3;
static const int arm_off = 0;
static const int arm_manual = 2;
static const int arm_laydown = 4;
static const int arm_loft = 6;
static const int arm_lgb = 8;
static const int arm_jp233 = 10;
static const int arm_alarm_dir = 12;
static const int arm_alarm_ind = 14;
static const int arm_cannon = 16;
static const int arm_sidewinder = 18;
static const int arm_skyflash = 20;
static const int shake_nose_down = 5;
static const int shake_land_good = 10;
static const int shake_land_hvy = 15;
static const int shake_cannon = 45;
static const int shake_jp233 = 50;
static const int shake_damage = 75;
static const int shake_collide = 100;
static const int shake_brake = 240;
static const int shake_buffet = 245;
static const int shake_off_hard = 250;
static const int shake_wheels_up = 255;
enum {
    land_good = 0x1,
    land_heavy = 0x2,
    land_wheels_up = 0x4,
    land_dead_stick = 0x8,
    land_road = 0x10,
    land_enemy = 0x20,
    land_stationary = 0x40,
};
static const int minor_damage = 1;
static const int major_damage = 2;
static const int total_damage = 3;
static const int num_tracks = 40;
static const int arad_min_range = 0;
static const int arad_med_range = 2;
static const int arad_max_range = 4;
static const int num_impacts = 128;
enum {
    sect_enemy = 0x80,
    sect_sam = 0x40,
    sect_aaa = 0x20,
    sect_ewr = 0x10,
    sect_ewr_num = 0xf,
    e_ewr_floor = 0xf,
    a_ewr_floor = 0xf0,
};
static const int num_sam_aaa = 128;
static const int num_ewr = 8;
static const int ewr_ground = 0;
static const int ewr_mobile = 2;
static const int threat_sam = 0;
static const int threat_aaa = 2;
static const int threat_ewr = 4;
static const int threat_ac = 6;
static const int threat_rad_msl = 8;
static const int threat_ir_msl = 10;
static const int num_rwr_threats = 16;
enum {
    rwr_sam = 0x10,
    rwr_aaa = 0x8,
    rwr_ewr = 0x4,
    rwr_ac = 0x2,
    rwr_msl = 0x1,
    dam_hard_mask = 0x3,
    dam_hard1 = 0x0,
    dam_hard2 = 0x1,
    dam_hard3 = 0x2,
    dam_hard4 = 0x3,
    dam_debris_mask = 0x1c,
    dam_debris1 = 0x0,
    dam_debris2 = 0x4,
    dam_debris3 = 0x8,
    dam_debris4 = 0xc,
    dam_debris5 = 0x10,
    dam_debris6 = 0x14,
    dam_debris7 = 0x18,
    dam_debris8 = 0x1c,
    dam_explo_mask = 0xff,
    dam_explo1 = 0x0,
    dam_explo2 = 0x20,
    dam_explo3 = 0x40,
    dam_explo4 = 0x60,
    dam_invalid = 0x80,
    i_fire_cannon = 0x1,
    i_fire_aim9l = 0x2,
    i_fire_skyflash = 0x4,
    i_rel_chaff = 0x8,
    i_rel_flare = 0x10,
    i_emit_radar = 0x20,
    i_emit_ecm = 0x40,
    i_illum_you = 0x80,
    i_paused = 0x1,
    i_resumed = 0x2,
    i_no_weapons = 0x1,
    i_killed = 0x2,
    i_ejected = 0x4,
    i_quit = 0x8,
    i_killed_you = 0x10,
};
static const int num_runways = 8;
static const int way_rec_size = 16;
#define wp_speed (wp_time)
static const int af_rec_size = 18;
#define _drone_type (mob_rec_size+view_rec_size+drone_type)
#define _drone_side (mob_rec_size+view_rec_size+drone_side)
#define _drone_event (mob_rec_size+view_rec_size+drone_event)
static const int veh_rec_size = 16;
#define next_vehicle (mob_rec_size+view_rec_size+16)
#define _veh_drone (mob_rec_size+view_rec_size+veh_drone)
#define _veh_side (mob_rec_size+view_rec_size+veh_side)
#define _veh_event (mob_rec_size+view_rec_size+veh_event)
#define _veh_node_ptr (mob_rec_size+view_rec_size+veh_node_ptr)
#define _veh_dist (mob_rec_size+view_rec_size+veh_dist)
#define _veh_dist_fine (mob_rec_size+view_rec_size+veh_dist_fine)
#define _veh_xfine (mob_rec_size+view_rec_size+veh_xfine)
#define _veh_yfine (mob_rec_size+view_rec_size+veh_yfine)
#define _veh_zfine (mob_rec_size+view_rec_size+veh_zfine)
static const int cnvy_rec_size = 10;
static const int route_rec_size = 14;
#define red_cancel (~(0x8))
#define amb_cancel (~(0x1+0x8))
static const int ac_rec_size = 62;
#define ac_waypoints (mob_rec_size+view_rec_size+62)
#define _ac_drone (mob_rec_size+view_rec_size+ac_drone)
#define _ac_side (mob_rec_size+view_rec_size+ac_side)
#define _ac_event (mob_rec_size+view_rec_size+ac_event)
#define _ac_type (mob_rec_size+view_rec_size+ac_type)
#define _ac_delay (mob_rec_size+view_rec_size+ac_delay)
#define _ac_drone_num (mob_rec_size+view_rec_size+ac_drone_num)
#define _ac_event_num (mob_rec_size+view_rec_size+ac_event_num)
#define _ac_ctrl_mode (mob_rec_size+view_rec_size+ac_ctrl_mode)
#define _ac_wp_ptr (mob_rec_size+view_rec_size+ac_wp_ptr)
#define _ac_xfine (mob_rec_size+view_rec_size+ac_xfine)
#define _ac_yfine (mob_rec_size+view_rec_size+ac_yfine)
#define _ac_zfine (mob_rec_size+view_rec_size+ac_zfine)
#define _ac_hfine (mob_rec_size+view_rec_size+ac_hfine)
#define _ac_pfine (mob_rec_size+view_rec_size+ac_pfine)
#define _ac_rfine (mob_rec_size+view_rec_size+ac_rfine)
#define _ac_vtas (mob_rec_size+view_rec_size+ac_vtas)
#define _ac_vtas_fine (mob_rec_size+view_rec_size+ac_vtas_fine)
#define _ac_lift_vctr (mob_rec_size+view_rec_size+ac_lift_vctr)
#define _ac_ab_delay (mob_rec_size+view_rec_size+ac_ab_delay)
#define _ac_sweep_delay (mob_rec_size+view_rec_size+ac_sweep_delay)
#define _ac_taxi_ptr (mob_rec_size+view_rec_size+ac_taxi_ptr)
#define _ac_taxi_xft (mob_rec_size+view_rec_size+ac_taxi_xft)
#define _ac_taxi_yft (mob_rec_size+view_rec_size+ac_taxi_yft)
#define _ac_arm_lock (mob_rec_size+view_rec_size+ac_arm_lock)
#define _ac_flags (mob_rec_size+view_rec_size+ac_flags)
#define _ac_decoy_timer (mob_rec_size+view_rec_size+ac_decoy_timer)
#define _ac_aa_timer (mob_rec_size+view_rec_size+ac_aa_timer)
#define _ac_opp_ptr (mob_rec_size+view_rec_size+ac_opp_ptr)
#define _ac_prev_perr (mob_rec_size+view_rec_size+ac_prev_perr)
#define _ac_prev_prate (mob_rec_size+view_rec_size+ac_prev_prate)
#define _ac_shells (mob_rec_size+view_rec_size+ac_shells)
#define _ac_missiles (mob_rec_size+view_rec_size+ac_missiles)
#define _ac_wpn_int (mob_rec_size+view_rec_size+ac_wpn_int)
#define _ac_evade_timer (mob_rec_size+view_rec_size+ac_evade_timer)
#define _ac_gmax_timer (mob_rec_size+view_rec_size+ac_gmax_timer)
static const int hc_rec_size = 38;
#define hc_waypoints (mob_rec_size+view_rec_size+38)
#define _hc_drone (mob_rec_size+view_rec_size+hc_drone)
#define _hc_side (mob_rec_size+view_rec_size+hc_side)
#define _hc_event (mob_rec_size+view_rec_size+hc_event)
#define _hc_type (mob_rec_size+view_rec_size+hc_type)
#define _hc_delay (mob_rec_size+view_rec_size+hc_delay)
#define _hc_drone_num (mob_rec_size+view_rec_size+hc_drone_num)
#define _hc_event_num (mob_rec_size+view_rec_size+hc_event_num)
#define _hc_ctrl_mode (mob_rec_size+view_rec_size+hc_ctrl_mode)
#define _hc_wp_ptr (mob_rec_size+view_rec_size+hc_wp_ptr)
#define _hc_xfine (mob_rec_size+view_rec_size+hc_xfine)
#define _hc_yfine (mob_rec_size+view_rec_size+hc_yfine)
#define _hc_zfine (mob_rec_size+view_rec_size+hc_zfine)
#define _hc_hfine (mob_rec_size+view_rec_size+hc_hfine)
#define _hc_pfine (mob_rec_size+view_rec_size+hc_pfine)
#define _hc_rfine (mob_rec_size+view_rec_size+hc_rfine)
#define _hc_vtas (mob_rec_size+view_rec_size+hc_vtas)
#define _hc_vtas_fine (mob_rec_size+view_rec_size+hc_vtas_fine)
#define _hc_lift_vctr (mob_rec_size+view_rec_size+hc_lift_vctr)
#define _hc_accel_pfine (mob_rec_size+view_rec_size+hc_accel_pfine)
#define _hc_flags (mob_rec_size+view_rec_size+hc_flags)
#define _hc_decoy_timer (mob_rec_size+view_rec_size+hc_decoy_timer)
static const int wpn_rec_size = 28;
#define wpn_data_size (mob_rec_size+view_rec_size+28)
#define wpn_bomb_hvel (wpn_userw1)
#define wpn_bomb_vvel (wpn_userw2)
#define wpn_lgb_tgt (wpn_userw1)
#define wpn_lgb_vel (wpn_userw2)
#define wpn_can_hvel (wpn_userw1)
#define wpn_can_vvel (wpn_userw2)
#define wpn_can_timer (wpn_userw3)
#define wpn_can_src (wpn_userw4)
#define wpn_miss_tgt (wpn_userw1)
#define wpn_miss_vel (wpn_userw2)
#define wpn_miss_accel (wpn_userw3)
#define wpn_miss_timer (wpn_userw4)
#define wpn_miss_decoy (wpn_userw5)
#define wpn_alm_vel (wpn_userw1)
#define wpn_alm_accel (wpn_userw2)
#define wpn_alm_timer (wpn_userw3)
#define wpn_alm_xsec (wpn_userw4)
#define wpn_alm_ysec (wpn_userw5)
#define wpn_alm_xft (wpn_userw6)
#define wpn_alm_yft (wpn_userw7)
#define wpn_decoy_hvel (wpn_bomb_hvel)
#define wpn_decoy_vvel (wpn_bomb_vvel)
#define wpn_decoy_life (wpn_userw3)
#define _wpn_type (mob_rec_size+view_rec_size+wpn_type)
#define _wpn_flags (mob_rec_size+view_rec_size+wpn_flags)
#define _wpn_hfine (mob_rec_size+view_rec_size+wpn_hfine)
#define _wpn_pfine (mob_rec_size+view_rec_size+wpn_pfine)
#define _wpn_xfine (mob_rec_size+view_rec_size+wpn_xfine)
#define _wpn_yfine (mob_rec_size+view_rec_size+wpn_yfine)
#define _wpn_zfine (mob_rec_size+view_rec_size+wpn_zfine)
#define _wpn_userw1 (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_userw2 (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_userw3 (mob_rec_size+view_rec_size+wpn_userw3)
#define _wpn_userw4 (mob_rec_size+view_rec_size+wpn_userw4)
#define _wpn_bomb_hvel (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_bomb_vvel (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_lgb_tgt (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_lgb_vel (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_can_hvel (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_can_vvel (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_can_timer (mob_rec_size+view_rec_size+wpn_userw3)
#define _wpn_miss_tgt (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_miss_vel (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_miss_accel (mob_rec_size+view_rec_size+wpn_userw3)
#define _wpn_miss_timer (mob_rec_size+view_rec_size+wpn_userw4)
#define _wpn_miss_decoy (mob_rec_size+view_rec_size+wpn_userw5)
#define _wpn_alm_vel (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_alm_accel (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_alm_timer (mob_rec_size+view_rec_size+wpn_userw3)
#define _wpn_alm_xsec (mob_rec_size+view_rec_size+wpn_userw4)
#define _wpn_alm_ysec (mob_rec_size+view_rec_size+wpn_userw5)
#define _wpn_alm_xft (mob_rec_size+view_rec_size+wpn_userw6)
#define _wpn_alm_yft (mob_rec_size+view_rec_size+wpn_userw7)
#define _wpn_decoy_hvel (mob_rec_size+view_rec_size+wpn_userw1)
#define _wpn_decoy_vvel (mob_rec_size+view_rec_size+wpn_userw2)
#define _wpn_decoy_life (mob_rec_size+view_rec_size+wpn_userw3)
static const int pack_rec_size = 8;
#define arad_rng_lo (arad_rng)
#define arad_rng_hi (arad_rng+2)
static const int arad_rec_size = 12;
static const int imp_rec_size = 8;
static const int rad_rec_size = 4;
static const int ewr_rec_size = (int)sizeof(ewr);
#define rwr_rng_lo (rwr_rng)
#define rwr_rng_hi (rwr_rng+2)
static const int rwr_rec_size = (int)sizeof(rwr);
static const int comms_rec_size = 26;
#define comms_zft_lo (comms_zft)
#define comms_zft_hi (comms_zft+2)
static const int rdam_rec_size = 6;
constexpr int sflg_loop = 0x1;
static const int fsize_speaker = 2046;
static const int fsize_sblaster = 24832;
static const int fsize_adlib = 4424;
static const int fsize_roland = 7492;
static const int psize_speaker = (2046/16)+1;
static const int psize_sblaster = (24832/16)+1;
static const int psize_adlib = (4424/16)+1;
static const int psize_roland = (7492/16)+1;
enum {
    spkr_norm = 0x002,
    spkr_refresh = 0x001,
    spkr_fxon1 = 0x004,
    spkr_fxoff1 = 0x005,
    spkr_revs1 = 0x007,
    spkr_fx_int_eng = 0x000,
    spkr_fx_ext_eng = 0x001,
    spkr_fx_attn = 0x00d,
    spkr_fx_rwr = 0x00c,
    spkr_fx_cannon = 0x008,
    spkr_fx_explo1 = 0x003,
    spkr_fx_explo2 = 0x004,
    spkr_fx_explo3 = 0x002,
    spkr_fx_launch = 0x007,
    spkr_fx_screech = 0x00a,
    spkr_fx_decoy = 0x005,
    spkr_fx_mdot = 0x013,
    spkr_fx_mdash = 0x012,
    spkr_fx_gear = 0x010,
    spkr_fx_growl = 0x00b,
    spkr_fx_rumble = 0x009,
};
static const int spkr_pr_launch = 255;
static const int spkr_pr_attn = 250;
static const int spkr_pr_rwr = 240;
static const int spkr_pr_cannon = 210;
static const int spkr_pr_explo1 = 200;
static const int spkr_pr_explo2 = 190;
static const int spkr_pr_explo3 = 180;
static const int spkr_pr_screech = 150;
static const int spkr_pr_decoy = 125;
static const int spkr_pr_mdot = 100;
static const int spkr_pr_mdash = 99;
static const int spkr_pr_gear = 80;
static const int spkr_pr_growl = 5;
static const int spkr_pr_rumble = 1;
#define spkr_fl_attn (sflg_loop)
#define spkr_fl_rwr (sflg_loop)
static const int spkr_fl_cannon = 0;
static const int spkr_fl_explo1 = 0;
static const int spkr_fl_explo2 = 0;
static const int spkr_fl_explo3 = 0;
static const int spkr_fl_launch = 0;
static const int spkr_fl_screech = 0;
static const int spkr_fl_decoy = 0;
static const int spkr_fl_mdot = 0;
static const int spkr_fl_mdash = 0;
static const int spkr_fl_gear = 0;
static const int spkr_fl_growl = 0;
static const int spkr_fl_rumble = 0;
static const int spkr_tm_attn = 150;
static const int spkr_tm_rwr = 50;
static const int spkr_tm_cannon = 25;
static const int spkr_tm_explo1 = 50;
static const int spkr_tm_explo2 = 50;
static const int spkr_tm_explo3 = 25;
static const int spkr_tm_launch = 10;
static const int spkr_tm_screech = 8;
static const int spkr_tm_decoy = 5;
static const int spkr_tm_mdot = 5;
static const int spkr_tm_mdash = 20;
static const int spkr_tm_gear = 40;
static const int spkr_tm_growl = -1;
static const int spkr_tm_rumble = -1;
enum {
    blst_init = 0x005,
    blst_norm = 0x002,
    blst_fxon1 = 0x000,
    blst_fxoff1 = 0x001,
    blst_revs1 = 0x004,
    blst_fault = 0x006,
    blst_fx_int_eng = 0x007,
    blst_fx_ext_eng = 0x003,
    blst_fx_cannon = 0x000,
    blst_fx_explo1 = 0x001,
    blst_fx_explo2 = 0x002,
    blst_fx_explo3 = 0x004,
    blst_fx_screech = 0x008,
};
static const int blst_pr_cannon = 210;
static const int blst_pr_explo1 = 200;
static const int blst_pr_explo2 = 190;
static const int blst_pr_explo3 = 180;
static const int blst_pr_screech = 150;
static const int blst_fl_cannon = 0;
static const int blst_fl_explo1 = 0;
static const int blst_fl_explo2 = 0;
static const int blst_fl_explo3 = 0;
static const int blst_fl_screech = 0;
static const int blst_tm_cannon = 25;
static const int blst_tm_explo1 = 65;
static const int blst_tm_explo2 = 65;
static const int blst_tm_explo3 = 35;
static const int blst_tm_screech = 8;
enum {
    adlb_init = 0x014,
    adlb_norm = 0x002,
    adlb_refresh = 0x001,
    adlb_fxon1 = 0x004,
    adlb_fxon2 = 0x005,
    adlb_fxoff1 = 0x006,
    adlb_fxoff2 = 0x007,
    adlb_revs1 = 0x00a,
    adlb_revs2 = 0x00b,
    adlb_vol1 = 0x00e,
    adlb_vol2 = 0x00f,
    adlb_fx_int_eng = 0x000,
    adlb_fx_ext_eng = 0x001,
    adlb_fx_attn = 0x00d,
    adlb_fx_rwr = 0x00c,
    adlb_fx_cannon = 0x008,
    adlb_fx_explo1 = 0x003,
    adlb_fx_explo2 = 0x004,
    adlb_fx_explo3 = 0x002,
    adlb_fx_launch = 0x007,
    adlb_fx_screech = 0x00a,
    adlb_fx_decoy = 0x005,
    adlb_fx_mdot = 0x013,
    adlb_fx_mdash = 0x012,
    adlb_fx_gear = 0x010,
    adlb_fx_growl = 0x00b,
    adlb_fx_rumble = 0x009,
};
static const int adlb_pr_launch = 255;
static const int adlb_pr_attn = 250;
static const int adlb_pr_rwr = 240;
static const int adlb_pr_cannon = 210;
static const int adlb_pr_explo1 = 200;
static const int adlb_pr_explo2 = 190;
static const int adlb_pr_explo3 = 180;
static const int adlb_pr_screech = 150;
static const int adlb_pr_decoy = 125;
static const int adlb_pr_mdot = 100;
static const int adlb_pr_mdash = 99;
static const int adlb_pr_gear = 80;
static const int adlb_pr_growl = 5;
static const int adlb_pr_rumble = 1;
#define adlb_fl_attn (sflg_loop)
#define adlb_fl_rwr (sflg_loop)
static const int adlb_fl_cannon = 0;
static const int adlb_fl_explo1 = 0;
static const int adlb_fl_explo2 = 0;
static const int adlb_fl_explo3 = 0;
static const int adlb_fl_launch = 0;
static const int adlb_fl_screech = 0;
static const int adlb_fl_decoy = 0;
static const int adlb_fl_mdot = 0;
static const int adlb_fl_mdash = 0;
static const int adlb_fl_gear = 0;
static const int adlb_fl_growl = 0;
static const int adlb_fl_rumble = 0;
static const int adlb_tm_attn = 150;
static const int adlb_tm_rwr = 50;
static const int adlb_tm_cannon = 25;
static const int adlb_tm_explo1 = 65;
static const int adlb_tm_explo2 = 65;
static const int adlb_tm_explo3 = 35;
static const int adlb_tm_launch = 40;
static const int adlb_tm_screech = 8;
static const int adlb_tm_decoy = 5;
static const int adlb_tm_mdot = 5;
static const int adlb_tm_mdash = -1;
static const int adlb_tm_gear = 75;
static const int adlb_tm_growl = -1;
static const int adlb_tm_rumble = -1;
enum {
    rlnd_init = 0x014,
    rlnd_norm = 0x013,
    rlnd_refresh = 0x001,
    rlnd_fxon1 = 0x004,
    rlnd_fxon2 = 0x005,
    rlnd_fxoff1 = 0x006,
    rlnd_fxoff2 = 0x007,
    rlnd_revs1 = 0x00a,
    rlnd_revs2 = 0x00b,
    rlnd_vol1 = 0x00e,
    rlnd_vol2 = 0x00f,
    rlnd_fx_int_eng = 0x000,
    rlnd_fx_ext_eng = 0x001,
    rlnd_fx_attn = 0x00d,
    rlnd_fx_rwr = 0x00c,
    rlnd_fx_cannon = 0x008,
    rlnd_fx_explo1 = 0x003,
    rlnd_fx_explo2 = 0x004,
    rlnd_fx_explo3 = 0x002,
    rlnd_fx_launch = 0x007,
    rlnd_fx_screech = 0x00a,
    rlnd_fx_decoy = 0x005,
    rlnd_fx_mdot = 0x013,
    rlnd_fx_mdash = 0x012,
    rlnd_fx_gear = 0x010,
    rlnd_fx_growl = 0x00b,
    rlnd_fx_rumble = 0x009,
};
static const int rlnd_pr_launch = 255;
static const int rlnd_pr_attn = 250;
static const int rlnd_pr_rwr = 240;
static const int rlnd_pr_cannon = 210;
static const int rlnd_pr_explo1 = 200;
static const int rlnd_pr_explo2 = 190;
static const int rlnd_pr_explo3 = 180;
static const int rlnd_pr_screech = 150;
static const int rlnd_pr_decoy = 125;
static const int rlnd_pr_mdot = 100;
static const int rlnd_pr_mdash = 99;
static const int rlnd_pr_gear = 80;
static const int rlnd_pr_growl = 5;
static const int rlnd_pr_rumble = 1;
#define rlnd_fl_attn (sflg_loop)
#define rlnd_fl_rwr (sflg_loop)
static const int rlnd_fl_cannon = 0;
static const int rlnd_fl_explo1 = 0;
static const int rlnd_fl_explo2 = 0;
static const int rlnd_fl_explo3 = 0;
static const int rlnd_fl_launch = 0;
static const int rlnd_fl_screech = 0;
static const int rlnd_fl_decoy = 0;
static const int rlnd_fl_mdot = 0;
static const int rlnd_fl_mdash = 0;
static const int rlnd_fl_gear = 0;
static const int rlnd_fl_growl = 0;
static const int rlnd_fl_rumble = 0;
static const int rlnd_tm_attn = 150;
static const int rlnd_tm_rwr = 50;
static const int rlnd_tm_cannon = 25;
static const int rlnd_tm_explo1 = 65;
static const int rlnd_tm_explo2 = 65;
static const int rlnd_tm_explo3 = 35;
static const int rlnd_tm_launch = 35;
static const int rlnd_tm_screech = 8;
static const int rlnd_tm_decoy = 5;
static const int rlnd_tm_mdot = 5;
static const int rlnd_tm_mdash = 20;
static const int rlnd_tm_gear = 75;
static const int rlnd_tm_growl = -1;
static const int rlnd_tm_rumble = -1;

	#define M2C_MODULE_SOUNDFX 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& soundon;
extern db& engsoundon;
extern db& installed;
extern db& normalised;
extern db& blstfault;
extern db& tmp1;
extern db& tmp2;
extern db& ch1priority;
extern db& ch2priority;
extern db& ch3priority;
extern db& ch1flags;
extern db& ch2flags;
extern db& ch3flags;
extern dw& ch1timer;
extern dw& ch2timer;
extern dw& ch3timer;
extern char (& speakerbin)[12];
extern char (& sblasterbin)[13];
extern char (& adlibbin)[10];
extern char (& rolandbin)[11];
extern dw& driver1seg;
extern dw& driver2seg;
extern dw& _installsound;
extern dw& dummyd1263ced_data_47_1492;
extern dw& dummyd1263ced_data_49_1493;
extern dw& dummyd1263ced_data_4b_1494;
extern dw& dummyd1263ced_data_4d_1495;
extern dw& _normalisesound;
extern dw& dummyd1263ced_data_51_1497;
extern dw& dummyd1263ced_data_53_1498;
extern dw& dummyd1263ced_data_55_1499;
extern dw& dummyd1263ced_data_57_1500;
extern dw& _suspendsound;
extern dw& dummyd1263ced_data_5b_1502;
extern dw& dummyd1263ced_data_5d_1503;
extern dw& dummyd1263ced_data_5f_1504;
extern dw& dummyd1263ced_data_61_1505;
extern dw& _refreshsound;
extern dw& dummyd1263ced_data_65_1507;
extern dw& dummyd1263ced_data_67_1508;
extern dw& dummyd1263ced_data_69_1509;
extern dw& dummyd1263ced_data_6b_1510;
extern dw& _updatesound;
extern dw& dummyd1263ced_data_6f_1512;
extern dw& dummyd1263ced_data_71_1513;
extern dw& dummyd1263ced_data_73_1514;
extern dw& dummyd1263ced_data_75_1515;
extern dw& _explosound1;
extern dw& dummyd1263ced_data_79_1517;
extern dw& dummyd1263ced_data_7b_1518;
extern dw& dummyd1263ced_data_7d_1519;
extern dw& dummyd1263ced_data_7f_1520;
extern dw& _explosound2;
extern dw& dummyd1263ced_data_83_1522;
extern dw& dummyd1263ced_data_85_1523;
extern dw& dummyd1263ced_data_87_1524;
extern dw& dummyd1263ced_data_89_1525;
extern dw& _explosound3;
extern dw& dummyd1263ced_data_8d_1527;
extern dw& dummyd1263ced_data_8f_1528;
extern dw& dummyd1263ced_data_91_1529;
extern dw& dummyd1263ced_data_93_1530;
extern dw& _screechsound;
extern dw& dummyd1263ced_data_97_1532;
extern dw& dummyd1263ced_data_99_1533;
extern dw& dummyd1263ced_data_9b_1534;
extern dw& dummyd1263ced_data_9d_1535;
extern dw& _morsedotsound;
extern dw& dummyd1263ced_data_a1_1537;
extern dw& dummyd1263ced_data_a3_1538;
extern dw& dummyd1263ced_data_a5_1539;
extern dw& dummyd1263ced_data_a7_1540;
extern dw& _morsedashsound;
extern dw& dummyd1263ced_data_ab_1542;
extern dw& dummyd1263ced_data_ad_1543;
extern dw& dummyd1263ced_data_af_1544;
extern dw& dummyd1263ced_data_b1_1545;
extern dw& _gearsound;
extern dw& dummyd1263ced_data_b5_1547;
extern dw& dummyd1263ced_data_b7_1548;
extern dw& dummyd1263ced_data_b9_1549;
extern dw& dummyd1263ced_data_bb_1550;
extern dw& _attentionsound;
extern dw& dummyd1263ced_data_bf_1552;
extern dw& dummyd1263ced_data_c1_1553;
extern dw& dummyd1263ced_data_c3_1554;
extern dw& dummyd1263ced_data_c5_1555;
extern dw& _killattnsound;
extern dw& dummyd1263ced_data_c9_1557;
extern dw& dummyd1263ced_data_cb_1558;
extern dw& dummyd1263ced_data_cd_1559;
extern dw& dummyd1263ced_data_cf_1560;
extern dw& _cannonsound;
extern dw& dummyd1263ced_data_d3_1562;
extern dw& dummyd1263ced_data_d5_1563;
extern dw& dummyd1263ced_data_d7_1564;
extern dw& dummyd1263ced_data_d9_1565;
extern dw& _launchsound;
extern dw& dummyd1263ced_data_dd_1567;
extern dw& dummyd1263ced_data_df_1568;
extern dw& dummyd1263ced_data_e1_1569;
extern dw& dummyd1263ced_data_e3_1570;
extern dw& _rwralertsound;
extern dw& dummyd1263ced_data_e7_1572;
extern dw& dummyd1263ced_data_e9_1573;
extern dw& dummyd1263ced_data_eb_1574;
extern dw& dummyd1263ced_data_ed_1575;
extern dw& _decoysound;
extern dw& dummyd1263ced_data_f1_1577;
extern dw& dummyd1263ced_data_f3_1578;
extern dw& dummyd1263ced_data_f5_1579;
extern dw& dummyd1263ced_data_f7_1580;
extern db& sndcode;

	
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
#ifndef M2C_CODE_EQUATE_installsound
#define M2C_CODE_EQUATE_installsound 1
static const dd kinstallsound = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_installnull
#define M2C_CODE_EQUATE_installnull 1
static const dd kinstallnull = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_installspkr
#define M2C_CODE_EQUATE_installspkr 1
static const dd kinstallspkr = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_installmemerr
#define M2C_CODE_EQUATE_installmemerr 1
static const dd kinstallmemerr = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_installfileerr
#define M2C_CODE_EQUATE_installfileerr 1
static const dd kinstallfileerr = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_installblst
#define M2C_CODE_EQUATE_installblst 1
static const dd kinstallblst = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_installcarderr
#define M2C_CODE_EQUATE_installcarderr 1
static const dd kinstallcarderr = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_installadlb
#define M2C_CODE_EQUATE_installadlb 1
static const dd kinstalladlb = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_installrlnd
#define M2C_CODE_EQUATE_installrlnd 1
static const dd kinstallrlnd = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_normalisesound
#define M2C_CODE_EQUATE_normalisesound 1
static const dd knormalisesound = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_normalnull
#define M2C_CODE_EQUATE_normalnull 1
static const dd knormalnull = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_normalspkr
#define M2C_CODE_EQUATE_normalspkr 1
static const dd knormalspkr = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_normalblst
#define M2C_CODE_EQUATE_normalblst 1
static const dd knormalblst = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_normaladlb
#define M2C_CODE_EQUATE_normaladlb 1
static const dd knormaladlb = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_normalrlnd
#define M2C_CODE_EQUATE_normalrlnd 1
static const dd knormalrlnd = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_suspendsound
#define M2C_CODE_EQUATE_suspendsound 1
static const dd ksuspendsound = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_suspendnull
#define M2C_CODE_EQUATE_suspendnull 1
static const dd ksuspendnull = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_suspendspkr
#define M2C_CODE_EQUATE_suspendspkr 1
static const dd ksuspendspkr = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_suspendblst
#define M2C_CODE_EQUATE_suspendblst 1
static const dd ksuspendblst = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_suspendadlb
#define M2C_CODE_EQUATE_suspendadlb 1
static const dd ksuspendadlb = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_suspendrlnd
#define M2C_CODE_EQUATE_suspendrlnd 1
static const dd ksuspendrlnd = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_resumesound
#define M2C_CODE_EQUATE_resumesound 1
static const dd kresumesound = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_refreshsound
#define M2C_CODE_EQUATE_refreshsound 1
static const dd krefreshsound = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_skipch1
#define M2C_CODE_EQUATE_skipch1 1
static const dd kskipch1 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_skipch2
#define M2C_CODE_EQUATE_skipch2 1
static const dd kskipch2 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_skipch3
#define M2C_CODE_EQUATE_skipch3 1
static const dd kskipch3 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_refreshnull
#define M2C_CODE_EQUATE_refreshnull 1
static const dd krefreshnull = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_refreshspkr
#define M2C_CODE_EQUATE_refreshspkr 1
static const dd krefreshspkr = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_refreshblst
#define M2C_CODE_EQUATE_refreshblst 1
static const dd krefreshblst = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_refreshadlb
#define M2C_CODE_EQUATE_refreshadlb 1
static const dd krefreshadlb = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_refreshrlnd
#define M2C_CODE_EQUATE_refreshrlnd 1
static const dd krefreshrlnd = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_updatesound
#define M2C_CODE_EQUATE_updatesound 1
static const dd kupdatesound = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_updatenull
#define M2C_CODE_EQUATE_updatenull 1
static const dd kupdatenull = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_updatespkr
#define M2C_CODE_EQUATE_updatespkr 1
static const dd kupdatespkr = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_skipgrowlspkr
#define M2C_CODE_EQUATE_skipgrowlspkr 1
static const dd kskipgrowlspkr = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_growloffspkr
#define M2C_CODE_EQUATE_growloffspkr 1
static const dd kgrowloffspkr = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_skiprumblespkr
#define M2C_CODE_EQUATE_skiprumblespkr 1
static const dd kskiprumblespkr = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_contrumblespkr
#define M2C_CODE_EQUATE_contrumblespkr 1
static const dd kcontrumblespkr = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_engoffspkr
#define M2C_CODE_EQUATE_engoffspkr 1
static const dd kengoffspkr = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_engadjustspkr
#define M2C_CODE_EQUATE_engadjustspkr 1
static const dd kengadjustspkr = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_engokspkr
#define M2C_CODE_EQUATE_engokspkr 1
static const dd kengokspkr = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_updateblst
#define M2C_CODE_EQUATE_updateblst 1
static const dd kupdateblst = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_updateadlb
#define M2C_CODE_EQUATE_updateadlb 1
static const dd kupdateadlb = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_engoffblst
#define M2C_CODE_EQUATE_engoffblst 1
static const dd kengoffblst = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_engcontblst
#define M2C_CODE_EQUATE_engcontblst 1
static const dd kengcontblst = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_engokblst
#define M2C_CODE_EQUATE_engokblst 1
static const dd kengokblst = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_intoupdateadlb
#define M2C_CODE_EQUATE_intoupdateadlb 1
static const dd kintoupdateadlb = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_engoffadlb
#define M2C_CODE_EQUATE_engoffadlb 1
static const dd kengoffadlb = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_engadjustadlb
#define M2C_CODE_EQUATE_engadjustadlb 1
static const dd kengadjustadlb = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_zxcv
#define M2C_CODE_EQUATE_zxcv 1
static const dd kzxcv = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_skipgrowladlb
#define M2C_CODE_EQUATE_skipgrowladlb 1
static const dd kskipgrowladlb = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_growloffadlb
#define M2C_CODE_EQUATE_growloffadlb 1
static const dd kgrowloffadlb = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_skiprumbleadlb
#define M2C_CODE_EQUATE_skiprumbleadlb 1
static const dd kskiprumbleadlb = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_contrumbleadlb
#define M2C_CODE_EQUATE_contrumbleadlb 1
static const dd kcontrumbleadlb = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_updaterlnd
#define M2C_CODE_EQUATE_updaterlnd 1
static const dd kupdaterlnd = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_skipgrowlrlnd
#define M2C_CODE_EQUATE_skipgrowlrlnd 1
static const dd kskipgrowlrlnd = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_growloffrlnd
#define M2C_CODE_EQUATE_growloffrlnd 1
static const dd kgrowloffrlnd = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_skiprumblerlnd
#define M2C_CODE_EQUATE_skiprumblerlnd 1
static const dd kskiprumblerlnd = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_contrumblerlnd
#define M2C_CODE_EQUATE_contrumblerlnd 1
static const dd kcontrumblerlnd = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_engoffrlnd
#define M2C_CODE_EQUATE_engoffrlnd 1
static const dd kengoffrlnd = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_engadjustrlnd
#define M2C_CODE_EQUATE_engadjustrlnd 1
static const dd kengadjustrlnd = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_engokrlnd
#define M2C_CODE_EQUATE_engokrlnd 1
static const dd kengokrlnd = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_explosound1
#define M2C_CODE_EQUATE_explosound1 1
static const dd kexplosound1 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_explo1null
#define M2C_CODE_EQUATE_explo1null 1
static const dd kexplo1null = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_explo1spkr
#define M2C_CODE_EQUATE_explo1spkr 1
static const dd kexplo1spkr = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitspkr
#define M2C_CODE_EQUATE_explo1exitspkr 1
static const dd kexplo1exitspkr = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_explo1blst
#define M2C_CODE_EQUATE_explo1blst 1
static const dd kexplo1blst = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitblst
#define M2C_CODE_EQUATE_explo1exitblst 1
static const dd kexplo1exitblst = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_explo1adlb
#define M2C_CODE_EQUATE_explo1adlb 1
static const dd kexplo1adlb = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitadlb
#define M2C_CODE_EQUATE_explo1exitadlb 1
static const dd kexplo1exitadlb = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_explo1rlnd
#define M2C_CODE_EQUATE_explo1rlnd 1
static const dd kexplo1rlnd = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_explo1exitrlnd
#define M2C_CODE_EQUATE_explo1exitrlnd 1
static const dd kexplo1exitrlnd = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_explosound2
#define M2C_CODE_EQUATE_explosound2 1
static const dd kexplosound2 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_explo2null
#define M2C_CODE_EQUATE_explo2null 1
static const dd kexplo2null = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_explo2spkr
#define M2C_CODE_EQUATE_explo2spkr 1
static const dd kexplo2spkr = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitspkr
#define M2C_CODE_EQUATE_explo2exitspkr 1
static const dd kexplo2exitspkr = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_explo2blst
#define M2C_CODE_EQUATE_explo2blst 1
static const dd kexplo2blst = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitblst
#define M2C_CODE_EQUATE_explo2exitblst 1
static const dd kexplo2exitblst = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_explo2adlb
#define M2C_CODE_EQUATE_explo2adlb 1
static const dd kexplo2adlb = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitadlb
#define M2C_CODE_EQUATE_explo2exitadlb 1
static const dd kexplo2exitadlb = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_explo2rlnd
#define M2C_CODE_EQUATE_explo2rlnd 1
static const dd kexplo2rlnd = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_explo2exitrlnd
#define M2C_CODE_EQUATE_explo2exitrlnd 1
static const dd kexplo2exitrlnd = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_explosound3
#define M2C_CODE_EQUATE_explosound3 1
static const dd kexplosound3 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_explo3null
#define M2C_CODE_EQUATE_explo3null 1
static const dd kexplo3null = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_explo3spkr
#define M2C_CODE_EQUATE_explo3spkr 1
static const dd kexplo3spkr = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitspkr
#define M2C_CODE_EQUATE_explo3exitspkr 1
static const dd kexplo3exitspkr = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_explo3blst
#define M2C_CODE_EQUATE_explo3blst 1
static const dd kexplo3blst = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitblst
#define M2C_CODE_EQUATE_explo3exitblst 1
static const dd kexplo3exitblst = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_explo3adlb
#define M2C_CODE_EQUATE_explo3adlb 1
static const dd kexplo3adlb = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitadlb
#define M2C_CODE_EQUATE_explo3exitadlb 1
static const dd kexplo3exitadlb = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_explo3rlnd
#define M2C_CODE_EQUATE_explo3rlnd 1
static const dd kexplo3rlnd = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_explo3exitrlnd
#define M2C_CODE_EQUATE_explo3exitrlnd 1
static const dd kexplo3exitrlnd = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_screechsound
#define M2C_CODE_EQUATE_screechsound 1
static const dd kscreechsound = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_screechnull
#define M2C_CODE_EQUATE_screechnull 1
static const dd kscreechnull = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_screechspkr
#define M2C_CODE_EQUATE_screechspkr 1
static const dd kscreechspkr = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_screechblst
#define M2C_CODE_EQUATE_screechblst 1
static const dd kscreechblst = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_screechadlb
#define M2C_CODE_EQUATE_screechadlb 1
static const dd kscreechadlb = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_screechrlnd
#define M2C_CODE_EQUATE_screechrlnd 1
static const dd kscreechrlnd = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_morsedotsound
#define M2C_CODE_EQUATE_morsedotsound 1
static const dd kmorsedotsound = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_morsedotnull
#define M2C_CODE_EQUATE_morsedotnull 1
static const dd kmorsedotnull = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_morsedotspkr
#define M2C_CODE_EQUATE_morsedotspkr 1
static const dd kmorsedotspkr = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_morsedotblst
#define M2C_CODE_EQUATE_morsedotblst 1
static const dd kmorsedotblst = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_morsedotadlb
#define M2C_CODE_EQUATE_morsedotadlb 1
static const dd kmorsedotadlb = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_morsedotrlnd
#define M2C_CODE_EQUATE_morsedotrlnd 1
static const dd kmorsedotrlnd = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_morsedashsound
#define M2C_CODE_EQUATE_morsedashsound 1
static const dd kmorsedashsound = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_morsedashnull
#define M2C_CODE_EQUATE_morsedashnull 1
static const dd kmorsedashnull = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_morsedashspkr
#define M2C_CODE_EQUATE_morsedashspkr 1
static const dd kmorsedashspkr = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_morsedashblst
#define M2C_CODE_EQUATE_morsedashblst 1
static const dd kmorsedashblst = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_morsedashadlb
#define M2C_CODE_EQUATE_morsedashadlb 1
static const dd kmorsedashadlb = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_morsedashrlnd
#define M2C_CODE_EQUATE_morsedashrlnd 1
static const dd kmorsedashrlnd = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_gearsound
#define M2C_CODE_EQUATE_gearsound 1
static const dd kgearsound = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_gearnull
#define M2C_CODE_EQUATE_gearnull 1
static const dd kgearnull = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_gearspkr
#define M2C_CODE_EQUATE_gearspkr 1
static const dd kgearspkr = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_gearblst
#define M2C_CODE_EQUATE_gearblst 1
static const dd kgearblst = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_gearadlb
#define M2C_CODE_EQUATE_gearadlb 1
static const dd kgearadlb = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_gearrlnd
#define M2C_CODE_EQUATE_gearrlnd 1
static const dd kgearrlnd = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_attentionsound
#define M2C_CODE_EQUATE_attentionsound 1
static const dd kattentionsound = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_attentionnull
#define M2C_CODE_EQUATE_attentionnull 1
static const dd kattentionnull = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_attentionspkr
#define M2C_CODE_EQUATE_attentionspkr 1
static const dd kattentionspkr = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_attentionblst
#define M2C_CODE_EQUATE_attentionblst 1
static const dd kattentionblst = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_attentionadlb
#define M2C_CODE_EQUATE_attentionadlb 1
static const dd kattentionadlb = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_attentionrlnd
#define M2C_CODE_EQUATE_attentionrlnd 1
static const dd kattentionrlnd = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_killattnsound
#define M2C_CODE_EQUATE_killattnsound 1
static const dd kkillattnsound = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_killattnnull
#define M2C_CODE_EQUATE_killattnnull 1
static const dd kkillattnnull = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_killattnspkr
#define M2C_CODE_EQUATE_killattnspkr 1
static const dd kkillattnspkr = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_killattnblst
#define M2C_CODE_EQUATE_killattnblst 1
static const dd kkillattnblst = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_killattnadlb
#define M2C_CODE_EQUATE_killattnadlb 1
static const dd kkillattnadlb = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_killattnrlnd
#define M2C_CODE_EQUATE_killattnrlnd 1
static const dd kkillattnrlnd = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_cannonsound
#define M2C_CODE_EQUATE_cannonsound 1
static const dd kcannonsound = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_cannonnull
#define M2C_CODE_EQUATE_cannonnull 1
static const dd kcannonnull = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_cannonspkr
#define M2C_CODE_EQUATE_cannonspkr 1
static const dd kcannonspkr = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_cannonblst
#define M2C_CODE_EQUATE_cannonblst 1
static const dd kcannonblst = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_cannonadlb
#define M2C_CODE_EQUATE_cannonadlb 1
static const dd kcannonadlb = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_cannonrlnd
#define M2C_CODE_EQUATE_cannonrlnd 1
static const dd kcannonrlnd = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_launchsound
#define M2C_CODE_EQUATE_launchsound 1
static const dd klaunchsound = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_launchnull
#define M2C_CODE_EQUATE_launchnull 1
static const dd klaunchnull = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_launchspkr
#define M2C_CODE_EQUATE_launchspkr 1
static const dd klaunchspkr = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_launchblst
#define M2C_CODE_EQUATE_launchblst 1
static const dd klaunchblst = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_launchadlb
#define M2C_CODE_EQUATE_launchadlb 1
static const dd klaunchadlb = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_launchrlnd
#define M2C_CODE_EQUATE_launchrlnd 1
static const dd klaunchrlnd = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_rwralertsound
#define M2C_CODE_EQUATE_rwralertsound 1
static const dd krwralertsound = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_rwralertnull
#define M2C_CODE_EQUATE_rwralertnull 1
static const dd krwralertnull = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_rwralertspkr
#define M2C_CODE_EQUATE_rwralertspkr 1
static const dd krwralertspkr = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_rwralertblst
#define M2C_CODE_EQUATE_rwralertblst 1
static const dd krwralertblst = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_rwralertadlb
#define M2C_CODE_EQUATE_rwralertadlb 1
static const dd krwralertadlb = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_rwralertrlnd
#define M2C_CODE_EQUATE_rwralertrlnd 1
static const dd krwralertrlnd = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_decoysound
#define M2C_CODE_EQUATE_decoysound 1
static const dd kdecoysound = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_decoynull
#define M2C_CODE_EQUATE_decoynull 1
static const dd kdecoynull = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_decoyspkr
#define M2C_CODE_EQUATE_decoyspkr 1
static const dd kdecoyspkr = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_decoyblst
#define M2C_CODE_EQUATE_decoyblst 1
static const dd kdecoyblst = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_decoyadlb
#define M2C_CODE_EQUATE_decoyadlb 1
static const dd kdecoyadlb = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_decoyrlnd
#define M2C_CODE_EQUATE_decoyrlnd 1
static const dd kdecoyrlnd = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x110d;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool attentionsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cannonsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool decoysound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool explosound1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool explosound2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool explosound3(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool gearsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool installsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool killattnsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool launchsound(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool morsedashsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool morsedotsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool normalisesound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool refreshsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool resumesound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool rwralertsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool screechsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool suspendsound(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatesound(m2c::_offsets, struct m2c::_STATE*);
extern bool loadfile(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef quietercockpit
extern db& quietercockpit;
#endif
#ifndef rpm1
extern dw& rpm1;
#endif
#ifndef soundoption
extern db& soundoption;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef armmode
extern dw& armmode;
#endif
#ifndef irlockflag
extern db& irlockflag;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef cockpitviews
extern db& cockpitviews;
#endif
#ifndef soundcard
extern dw& soundcard;
#endif
#ifndef rpm2
extern dw& rpm2;
#endif
#ifndef reheat
extern dw& reheat;
#endif

#endif

/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VGAPANEL_STUBS_H__
#define __M2C_VGAPANEL_STUBS_H__

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
  db dummya8598969_default_seg_0_317;
  db dummya8598969_default_seg_0_318;
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

struct mfd {
  dw mfd_x_org;
  db mfd_y_org;
  db mfd_status;
  dw mfd_mode;
  dw mfd_map_zoom;
  dw mfd_map_org;
  dw mfd_ssf_ptr;
  db mfd_req_mouse;
  db mfd_has_mouse;
};

struct tab {
  dw tab_x_org;
  db tab_y_org;
  db tab_status;
  dw tab_mode;
  dw tab_ssf_ptr;
  db tab_req_mouse;
  db tab_has_mouse;
  db tab_select;
  db tab_toggle;
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
static const word dummya8598969_default_seg_0_317 = offsetof(struct endroute, dummya8598969_default_seg_0_317);
static const word dummya8598969_default_seg_0_318 = offsetof(struct endroute, dummya8598969_default_seg_0_318);
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
static const word mfd_x_org = offsetof(struct mfd, mfd_x_org);
static const word mfd_y_org = offsetof(struct mfd, mfd_y_org);
static const word mfd_status = offsetof(struct mfd, mfd_status);
static const word mfd_mode = offsetof(struct mfd, mfd_mode);
static const word mfd_map_zoom = offsetof(struct mfd, mfd_map_zoom);
static const word mfd_map_org = offsetof(struct mfd, mfd_map_org);
static const word mfd_ssf_ptr = offsetof(struct mfd, mfd_ssf_ptr);
static const word mfd_req_mouse = offsetof(struct mfd, mfd_req_mouse);
static const word mfd_has_mouse = offsetof(struct mfd, mfd_has_mouse);
static const word tab_x_org = offsetof(struct tab, tab_x_org);
static const word tab_y_org = offsetof(struct tab, tab_y_org);
static const word tab_status = offsetof(struct tab, tab_status);
static const word tab_mode = offsetof(struct tab, tab_mode);
static const word tab_ssf_ptr = offsetof(struct tab, tab_ssf_ptr);
static const word tab_req_mouse = offsetof(struct tab, tab_req_mouse);
static const word tab_has_mouse = offsetof(struct tab, tab_has_mouse);
static const word tab_select = offsetof(struct tab, tab_select);
static const word tab_toggle = offsetof(struct tab, tab_toggle);


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
static const int mfd_map = 0;
static const int mfd_radar = 2;
static const int mfd_auto_pilot = 4;
static const int mfd_ils = 6;
static const int mfd_flir_ori = 8;
static const int mfd_flir = 10;
static const int mfd_loopback = 12;
static const int tab_pln = 0;
static const int tab_map = 2;
static const int tab_ref = 4;
static const int tab_flir = 6;
static const int tab_flir_ori = 8;
static const int tab_tiald = 10;
static const int tab_tiald_ori = 12;
static const int tab_radar = 14;
static const int tab_loopback = 16;
enum {
    vga_page_0 = 0x0a000,
    vga_page_1 = 0x0a400,
    vga_page_2 = 0x0a800,
    vga_page_3 = 0x0ac00,
    vga_seq = 0x003c4,
    vga_seq_mapmsk = 0x002,
    vga_seq_memmod = 0x004,
    vga_ctrl = 0x003ce,
    vga_ctrl_setres = 0x000,
    vga_ctrl_enable = 0x001,
    vga_ctrl_colcmp = 0x002,
    vga_ctrl_rotate = 0x003,
    vga_ctrl_rdmap = 0x004,
    vga_ctrl_mode = 0x005,
    vga_ctrl_misc = 0x006,
    vga_ctrl_colmsk = 0x007,
    vga_ctrl_bitmsk = 0x008,
    vga_crtc = 0x003d4,
    vga_crtc_hi = 0x00c,
    vga_crtc_lo = 0x00d,
    vga_crtc_uline = 0x014,
    vga_crtc_mode = 0x017,
    vga_crt_stat = 0x003da,
    vga_vsync = 0x8,
    vga_pel_write = 0x003c8,
    vga_pel_read = 0x003c7,
    vga_pel_data = 0x003c9,
    vga_input_1 = 0x003da,
    vga_attr = 0x003c0,
    vga_attr_hpan = 0x033,
};
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
static const int min_op_rad_alt = 100;
#define pilotpan_seg (vga_page_2)
static const int pilotpan_off = 320*96/4;
static const int pilotpan_size = 320*104;
static const int pilotpan_scr = 320*96/4;
#define psidepan_seg (vga_page_2)
static const int psidepan_off = 320*0/4;
static const int psidepan_size = 320*40;
static const int psidepan_scr = 320*160/4;
#define navigpan_seg (vga_page_3)
static const int navigpan_off = 320*0/4;
static const int navigpan_size = 320*200;
static const int navigpan_scr = 320*0/4;
#define nsidepan_seg (vga_page_2)
static const int nsidepan_off = 320*40/4;
static const int nsidepan_size = 320*40;
static const int nsidepan_scr = 320*160/4;
#define framepan_seg (vga_page_2)
static const int framepan_off = 320*80/4;
static const int framepan_size = 320*16;
static const int framepan_scr = 320*122/4;
static const int extrapan_off = 320*0/4;
static const int extrapan_size = 320*200;
static const int arm_blink_time = 50;

	#define M2C_MODULE_VGAPANEL 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
#ifndef M2C_CODE_EQUATE_vga_initpanels
#define M2C_CODE_EQUATE_vga_initpanels 1
static const dd kvga_initpanels = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_getouttahere
#define M2C_CODE_EQUATE_getouttahere 1
static const dd kgetouttahere = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_initexit
#define M2C_CODE_EQUATE_initexit 1
static const dd kinitexit = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_interleavedata
#define M2C_CODE_EQUATE_interleavedata 1
static const dd kinterleavedata = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_retrievedata
#define M2C_CODE_EQUATE_retrievedata 1
static const dd kretrievedata = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_videoblitter
#define M2C_CODE_EQUATE_videoblitter 1
static const dd kvideoblitter = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_vga_loadpanel
#define M2C_CODE_EQUATE_vga_loadpanel 1
static const dd kvga_loadpanel = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_loadpilotpan
#define M2C_CODE_EQUATE_loadpilotpan 1
static const dd kloadpilotpan = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_loadpsidepan
#define M2C_CODE_EQUATE_loadpsidepan 1
static const dd kloadpsidepan = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_loadnavigpan
#define M2C_CODE_EQUATE_loadnavigpan 1
static const dd kloadnavigpan = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_loadnsidepan
#define M2C_CODE_EQUATE_loadnsidepan 1
static const dd kloadnsidepan = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_loadlookdownpan
#define M2C_CODE_EQUATE_loadlookdownpan 1
static const dd kloadlookdownpan = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_qextrasprite
#define M2C_CODE_EQUATE_qextrasprite 1
static const dd kqextrasprite = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp1
#define M2C_CODE_EQUATE_reflectdlp1 1
static const dd kreflectdlp1 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp1
#define M2C_CODE_EQUATE_reflectwlp1 1
static const dd kreflectwlp1 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp2
#define M2C_CODE_EQUATE_reflectdlp2 1
static const dd kreflectdlp2 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp2
#define M2C_CODE_EQUATE_reflectwlp2 1
static const dd kreflectwlp2 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp3
#define M2C_CODE_EQUATE_reflectdlp3 1
static const dd kreflectdlp3 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp3
#define M2C_CODE_EQUATE_reflectwlp3 1
static const dd kreflectwlp3 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_reflectdlp4
#define M2C_CODE_EQUATE_reflectdlp4 1
static const dd kreflectdlp4 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_reflectwlp4
#define M2C_CODE_EQUATE_reflectwlp4 1
static const dd kreflectwlp4 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_loadmappan
#define M2C_CODE_EQUATE_loadmappan 1
static const dd kloadmappan = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_vga_clrpilotpan
#define M2C_CODE_EQUATE_vga_clrpilotpan 1
static const dd kvga_clrpilotpan = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_vga_clrnavigpan
#define M2C_CODE_EQUATE_vga_clrnavigpan 1
static const dd kvga_clrnavigpan = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwpilotpan
#define M2C_CODE_EQUATE_vga_drwpilotpan 1
static const dd kvga_drwpilotpan = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_redgearlamps1
#define M2C_CODE_EQUATE_redgearlamps1 1
static const dd kredgearlamps1 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_pilotgearok
#define M2C_CODE_EQUATE_pilotgearok 1
static const dd kpilotgearok = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_mextrasprite
#define M2C_CODE_EQUATE_mextrasprite 1
static const dd kmextrasprite = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_wbrakesok
#define M2C_CODE_EQUATE_wbrakesok 1
static const dd kwbrakesok = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dollyok
#define M2C_CODE_EQUATE_dollyok 1
static const dd kdollyok = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_briskok
#define M2C_CODE_EQUATE_briskok 1
static const dd kbriskok = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_eng1ok
#define M2C_CODE_EQUATE_eng1ok 1
static const dd keng1ok = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_eng2ok
#define M2C_CODE_EQUATE_eng2ok 1
static const dd keng2ok = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_jettisonok
#define M2C_CODE_EQUATE_jettisonok 1
static const dd kjettisonok = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_rvrsok
#define M2C_CODE_EQUATE_rvrsok 1
static const dd krvrsok = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_appprogok
#define M2C_CODE_EQUATE_appprogok 1
static const dd kappprogok = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_pilotattnok
#define M2C_CODE_EQUATE_pilotattnok 1
static const dd kpilotattnok = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_pilotmfdok
#define M2C_CODE_EQUATE_pilotmfdok 1
static const dd kpilotmfdok = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_nightlatearm
#define M2C_CODE_EQUATE_nightlatearm 1
static const dd knightlatearm = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_latearmok
#define M2C_CODE_EQUATE_latearmok 1
static const dd klatearmok = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_pilotradarok
#define M2C_CODE_EQUATE_pilotradarok 1
static const dd kpilotradarok = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_pilotecmok
#define M2C_CODE_EQUATE_pilotecmok 1
static const dd kpilotecmok = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_92_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_92_skip 1
static const dd k__m2c_macrolocal_92_skip = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_wpnstatusok
#define M2C_CODE_EQUATE_wpnstatusok 1
static const dd kwpnstatusok = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_97_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_97_skip 1
static const dd k__m2c_macrolocal_97_skip = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_rwrok
#define M2C_CODE_EQUATE_rwrok 1
static const dd krwrok = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwnavigpan
#define M2C_CODE_EQUATE_vga_drwnavigpan 1
static const dd kvga_drwnavigpan = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_skipjmpnavigthrotokk
#define M2C_CODE_EQUATE_skipjmpnavigthrotokk 1
static const dd kskipjmpnavigthrotokk = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_navigthrotok
#define M2C_CODE_EQUATE_navigthrotok 1
static const dd knavigthrotok = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_checkfordamageoroff
#define M2C_CODE_EQUATE_checkfordamageoroff 1
static const dd kcheckfordamageoroff = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_skipcheckfordamageofoff
#define M2C_CODE_EQUATE_skipcheckfordamageofoff 1
static const dd kskipcheckfordamageofoff = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_skipcheckifradaltok
#define M2C_CODE_EQUATE_skipcheckifradaltok 1
static const dd kskipcheckifradaltok = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_103_skip 1
static const dd k__m2c_macrolocal_103_skip = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_104_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_104_skip 1
static const dd k__m2c_macrolocal_104_skip = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_checkifradaltok
#define M2C_CODE_EQUATE_checkifradaltok 1
static const dd kcheckifradaltok = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_redgearlamps2
#define M2C_CODE_EQUATE_redgearlamps2 1
static const dd kredgearlamps2 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_naviggearok
#define M2C_CODE_EQUATE_naviggearok 1
static const dd knaviggearok = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_navigautook
#define M2C_CODE_EQUATE_navigautook 1
static const dd knavigautook = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_navigattnok
#define M2C_CODE_EQUATE_navigattnok 1
static const dd knavigattnok = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_sinisini
#define M2C_CODE_EQUATE_sinisini 1
static const dd ksinisini = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_skipjmpnavigthrotokk3
#define M2C_CODE_EQUATE_skipjmpnavigthrotokk3 1
static const dd kskipjmpnavigthrotokk3 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_skipjmpnavigthrotokk2
#define M2C_CODE_EQUATE_skipjmpnavigthrotokk2 1
static const dd kskipjmpnavigthrotokk2 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_navigecmok
#define M2C_CODE_EQUATE_navigecmok 1
static const dd knavigecmok = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_navigmfdok
#define M2C_CODE_EQUATE_navigmfdok 1
static const dd knavigmfdok = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_navigtab1ok
#define M2C_CODE_EQUATE_navigtab1ok 1
static const dd knavigtab1ok = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_navigtab2ok
#define M2C_CODE_EQUATE_navigtab2ok 1
static const dd knavigtab2ok = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_navigradarok
#define M2C_CODE_EQUATE_navigradarok 1
static const dd knavigradarok = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_vga_drwnavigpanbrief
#define M2C_CODE_EQUATE_vga_drwnavigpanbrief 1
static const dd kvga_drwnavigpanbrief = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_redgearlamps2b
#define M2C_CODE_EQUATE_redgearlamps2b 1
static const dd kredgearlamps2b = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_naviggearokb
#define M2C_CODE_EQUATE_naviggearokb 1
static const dd knaviggearokb = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_navigautookb
#define M2C_CODE_EQUATE_navigautookb 1
static const dd knavigautookb = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_vga_ironwork
#define M2C_CODE_EQUATE_vga_ironwork 1
static const dd kvga_ironwork = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_vga_brackets
#define M2C_CODE_EQUATE_vga_brackets 1
static const dd kvga_brackets = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_mxlp1_1
#define M2C_CODE_EQUATE_mxlp1_1 1
static const dd kmxlp1_1 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_mxlp1_2
#define M2C_CODE_EQUATE_mxlp1_2 1
static const dd kmxlp1_2 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_mxlp2_1
#define M2C_CODE_EQUATE_mxlp2_1 1
static const dd kmxlp2_1 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_mxlp2_2
#define M2C_CODE_EQUATE_mxlp2_2 1
static const dd kmxlp2_2 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_mxlp3_1
#define M2C_CODE_EQUATE_mxlp3_1 1
static const dd kmxlp3_1 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_mxlp3_2
#define M2C_CODE_EQUATE_mxlp3_2 1
static const dd kmxlp3_2 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_mxlp4_1
#define M2C_CODE_EQUATE_mxlp4_1 1
static const dd kmxlp4_1 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_mxlp4_2
#define M2C_CODE_EQUATE_mxlp4_2 1
static const dd kmxlp4_2 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_drawradarnoise
#define M2C_CODE_EQUATE_drawradarnoise 1
static const dd kdrawradarnoise = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_zxzx
#define M2C_CODE_EQUATE_zxzx 1
static const dd kzxzx = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_repositionblitter
#define M2C_CODE_EQUATE_repositionblitter 1
static const dd krepositionblitter = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_copypreviewpan
#define M2C_CODE_EQUATE_copypreviewpan 1
static const dd kcopypreviewpan = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_drawpreviewpan
#define M2C_CODE_EQUATE_drawpreviewpan 1
static const dd kdrawpreviewpan = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_storeworkscreen
#define M2C_CODE_EQUATE_storeworkscreen 1
static const dd kstoreworkscreen = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x10e1;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool copypreviewpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawpreviewpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawradarnoise(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool interleavedata(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadlookdownpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadmappan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadnavigpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadnsidepan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadpilotpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadpsidepan(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mextrasprite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool qextrasprite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool retrievedata(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool storeworkscreen(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_brackets(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_clrnavigpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_clrpilotpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_drwnavigpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_drwnavigpanbrief(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_drwpilotpan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_initpanels(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_ironwork(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vga_loadpanel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool videoblitter(m2c::_offsets, struct m2c::_STATE*);
extern bool loadextrnpan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadfile(m2c::_offsets, struct m2c::_STATE*);
extern bool loadframepan(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


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

#endif

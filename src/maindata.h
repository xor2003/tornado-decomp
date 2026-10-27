/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MAINDATA_STUBS_H__
#define __M2C_MAINDATA_STUBS_H__

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
  db dummyde47e31c_default_seg_0_624;
  db dummyde47e31c_default_seg_0_625;
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

struct viewpoint {
  dw vp_xsec;
  dw vp_ysec;
  dw vp_xft;
  dw vp_yft;
  dd vp_zft;
  dw vp_hdg;
  dw vp_pitch;
  dw vp_roll;
};

struct sectordata {
  dw sec_obj_ptr;
  dw sec_flat_ptr;
};

struct objectdata {
  db obj_type;
  db obj_num;
  dw obj_xpos;
  dw obj_ypos;
  dw obj_zpos;
  dw obj_userw1;
  dw obj_userw2;
  dw obj_userw3;
  dw obj_userw4;
  db obj_userb1;
  db obj_userb2;
  dw obj_ptr;
};

struct objectheader {
  dw obj_hdr_scale;
  dw obj_hdr_range;
  dw obj_hdr_ptr;
  db obj_hdr_flags;
  db obj_hdr_col;
  dw obj_hdr_xgrid;
  dw obj_hdr_ygrid;
  dw obj_hdr_zgrid;
};

struct mobile {
  db mob_num;
  db mob_type;
  db mob_anim;
  db __m2c_pad_3_3;
  dw mob_link_ptr;
};

struct mobsort {
  dw msort_xsec;
  dw msort_ysec;
  dw msort_ptr;
};

struct gndobj {
  db gnd_num;
  db gnd_anim;
  db gnd_xgrid;
  db gnd_ygrid;
};

struct statmob {
  db stat_num;
  db stat_anim;
  dw stat_xft;
  dw stat_yft;
  dw stat_hdg;
};

struct crater {
  db crater_type;
  db crater_anim;
  dw crater_xsec;
  dw crater_ysec;
  dw crater_xft;
  dw crater_yft;
  dw crater_zft;
  dw crater_hdg;
};

struct smoke {
  dw smoke_type;
  db smoke_col;
  db smoke_flags;
  dw smoke_xsec;
  dw smoke_ysec;
  dw smoke_xft;
  dw smoke_yft;
  dd smoke_zft;
  dw smoke_zfine;
  dw smoke_rft;
  dw smoke_time;
  dw smoke_exp_time;
  dw smoke_sib_cntr;
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
static const word dummyde47e31c_default_seg_0_624 = offsetof(struct endroute, dummyde47e31c_default_seg_0_624);
static const word dummyde47e31c_default_seg_0_625 = offsetof(struct endroute, dummyde47e31c_default_seg_0_625);
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
static const word vp_xsec = offsetof(struct viewpoint, vp_xsec);
static const word vp_ysec = offsetof(struct viewpoint, vp_ysec);
static const word vp_xft = offsetof(struct viewpoint, vp_xft);
static const word vp_yft = offsetof(struct viewpoint, vp_yft);
static const word vp_zft = offsetof(struct viewpoint, vp_zft);
static const word vp_hdg = offsetof(struct viewpoint, vp_hdg);
static const word vp_pitch = offsetof(struct viewpoint, vp_pitch);
static const word vp_roll = offsetof(struct viewpoint, vp_roll);
static const word sec_obj_ptr = offsetof(struct sectordata, sec_obj_ptr);
static const word sec_flat_ptr = offsetof(struct sectordata, sec_flat_ptr);
static const word obj_type = offsetof(struct objectdata, obj_type);
static const word obj_num = offsetof(struct objectdata, obj_num);
static const word obj_xpos = offsetof(struct objectdata, obj_xpos);
static const word obj_ypos = offsetof(struct objectdata, obj_ypos);
static const word obj_zpos = offsetof(struct objectdata, obj_zpos);
static const word obj_userw1 = offsetof(struct objectdata, obj_userw1);
static const word obj_userw2 = offsetof(struct objectdata, obj_userw2);
static const word obj_userw3 = offsetof(struct objectdata, obj_userw3);
static const word obj_userw4 = offsetof(struct objectdata, obj_userw4);
static const word obj_userb1 = offsetof(struct objectdata, obj_userb1);
static const word obj_userb2 = offsetof(struct objectdata, obj_userb2);
static const word obj_ptr = offsetof(struct objectdata, obj_ptr);
static const word obj_hdr_scale = offsetof(struct objectheader, obj_hdr_scale);
static const word obj_hdr_range = offsetof(struct objectheader, obj_hdr_range);
static const word obj_hdr_ptr = offsetof(struct objectheader, obj_hdr_ptr);
static const word obj_hdr_flags = offsetof(struct objectheader, obj_hdr_flags);
static const word obj_hdr_col = offsetof(struct objectheader, obj_hdr_col);
static const word obj_hdr_xgrid = offsetof(struct objectheader, obj_hdr_xgrid);
static const word obj_hdr_ygrid = offsetof(struct objectheader, obj_hdr_ygrid);
static const word obj_hdr_zgrid = offsetof(struct objectheader, obj_hdr_zgrid);
static const word mob_num = offsetof(struct mobile, mob_num);
static const word mob_type = offsetof(struct mobile, mob_type);
static const word mob_anim = offsetof(struct mobile, mob_anim);
static const word mob_link_ptr = offsetof(struct mobile, mob_link_ptr);
static const word msort_xsec = offsetof(struct mobsort, msort_xsec);
static const word msort_ysec = offsetof(struct mobsort, msort_ysec);
static const word msort_ptr = offsetof(struct mobsort, msort_ptr);
static const word gnd_num = offsetof(struct gndobj, gnd_num);
static const word gnd_anim = offsetof(struct gndobj, gnd_anim);
static const word gnd_xgrid = offsetof(struct gndobj, gnd_xgrid);
static const word gnd_ygrid = offsetof(struct gndobj, gnd_ygrid);
static const word stat_num = offsetof(struct statmob, stat_num);
static const word stat_anim = offsetof(struct statmob, stat_anim);
static const word stat_xft = offsetof(struct statmob, stat_xft);
static const word stat_yft = offsetof(struct statmob, stat_yft);
static const word stat_hdg = offsetof(struct statmob, stat_hdg);
static const word crater_type = offsetof(struct crater, crater_type);
static const word crater_anim = offsetof(struct crater, crater_anim);
static const word crater_xsec = offsetof(struct crater, crater_xsec);
static const word crater_ysec = offsetof(struct crater, crater_ysec);
static const word crater_xft = offsetof(struct crater, crater_xft);
static const word crater_yft = offsetof(struct crater, crater_yft);
static const word crater_zft = offsetof(struct crater, crater_zft);
static const word crater_hdg = offsetof(struct crater, crater_hdg);
static const word smoke_type = offsetof(struct smoke, smoke_type);
static const word smoke_col = offsetof(struct smoke, smoke_col);
static const word smoke_flags = offsetof(struct smoke, smoke_flags);
static const word smoke_xsec = offsetof(struct smoke, smoke_xsec);
static const word smoke_ysec = offsetof(struct smoke, smoke_ysec);
static const word smoke_xft = offsetof(struct smoke, smoke_xft);
static const word smoke_yft = offsetof(struct smoke, smoke_yft);
static const word smoke_zft = offsetof(struct smoke, smoke_zft);
static const word smoke_zfine = offsetof(struct smoke, smoke_zfine);
static const word smoke_rft = offsetof(struct smoke, smoke_rft);
static const word smoke_time = offsetof(struct smoke, smoke_time);
static const word smoke_exp_time = offsetof(struct smoke, smoke_exp_time);
static const word smoke_sib_cntr = offsetof(struct smoke, smoke_sib_cntr);


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
static const int opt_debug = 1;
static const int opt_turbo = 0;
static const int opt_photo = 0;
static const int opt_title_pic = 0;
static const int opt_logo_pic = 0;
static const int opt_demo = 0;
static const int opt_fly_demo = 0;
static const int opt_preview = 0;
static const int opt_no_pics = 0;
static const int opt_holobyte = 0;
static const int opt_coktel = 0;
static const int opt_leader = 0;
static const int opt_system4 = 0;
static const int sec_scale1 = 0;
static const int sec_scale2 = 2;
static const int sec_scale8 = 4;
static const int sec_scale16 = 6;
static const int int_viewmode = 0;
static const int alt_viewmode = 2;
static const int ext_viewmode = 4;
static const int tv1_viewmode = 6;
static const int tv2_viewmode = 8;
static const int tv3_viewmode = 10;
static const int tv4_viewmode = 12;
static const int tv5_viewmode = 14;
static const int nul_viewmode = 0;
static const int rotate_null = 0;
static const int rotate_view_rt = 2;
static const int rotate_view_lt = 4;
static const int rotate_view_up = 6;
static const int rotate_view_dn = 8;
static const int rotate_view_bk = 10;
static const int rotate_view_ft = 12;
static const int dolmid = 128;
static const int dol0 = 0;
static const int dol256 = 2;
static const int dol512 = 4;
static const int dol1024 = 8;
static const int dol2048 = 16;
static const int dol4096 = 32;
static const int dol8192 = 64;
static const int min_sec_scan = 3;
static const int max_sec_scan = 15;
enum {
    map_x_wrap = 0x0001f,
    map_y_wrap = 0x0001f,
};
static const int sctr_y_thres = 11600;
static const int obj_scale1 = 0;
static const int obj_scale2 = 2;
static const int obj_scale4 = 4;
static const int obj_scale8 = 6;
static const int obj_scale16 = 8;
static const int max_range1 = 16384;
static const int max_range2 = 8192;
static const int max_range4 = 4096;
static const int max_range8 = 2048;
static const int max_range16 = 1024;
static const int arbmid = 64;
static const int arb0 = 0;
static const int arb16 = 2;
static const int arb32 = 4;
static const int arb48 = 6;
static const int arb64 = 8;
static const int arb80 = 10;
static const int arb96 = 12;
static const int arb112 = 14;
static const int arb128 = 16;
static const int arb192 = 24;
static const int arb256 = 32;
static const int arb384 = 48;
static const int arb512 = 64;
static const int otype_ground = 0;
static const int otype_mobile1 = 2;
static const int otype_mobile2 = 4;
static const int otype_mobile3 = 6;
static const int otype_mobile4 = 8;
static const int otype_hillface = 10;
static const int otype_smoke = 12;
constexpr int obj_flg_pixel = 0x1;
static const int num_objects = 256;
static const int num_bins = 64+1;
static const int num_far_objects = 256;
static const int num_far_bins = 64+1;
static const int behind_bin = 0;
static const int in_front_bin = 2;
enum {
    face_extended = 0x40,
    face_decision = 0x20,
    face_exclude = 0x10,
    face_primary = 0x8,
    face_visible = 0x4,
    face_structure = 0x2,
    face_fill_type = 0x1,
};
static const int num_mobiles = 256;
static const int surface_unknown = 0;
static const int surface_runway = 2;
static const int surface_taxiway = 4;
static const int surface_hard = 6;
static const int surface_road = 8;
static const int surface_railway = 10;
static const int surface_river = 12;
static const int surface_lake = 14;
static const int num_craters = 128;
static const int crater_null = 0;
static const int crater_size1 = 1;
static const int crater_size2 = 2;
static const int crater_heave = 3;
static const int crater_shell = 4;
static const int num_smoke = 128;
static const int smoke_crater1 = 0;
static const int smoke_crater2 = 2;
static const int smoke_crater3 = 4;
static const int smoke_burning = 6;
static const int smoke_kick_up = 8;
static const int smoke_air_explo = 10;
static const int smoke_air_trail = 12;
static const int stype_null = 0;
static const int stype_gnd1 = 2;
static const int stype_air1 = 4;
constexpr int sflg_repro = 0x1;
static const int mob_a10 = 1;
static const int mob_ah64 = 2;
static const int mob_loco1 = 3;
static const int mob_rltank1 = 4;
static const int mob_hind1 = 5;
static const int mob_il76 = 6;
static const int mob_su27_1 = 7;
static const int mob_rdtnkr1 = 8;
static const int mob_tornado1 = 9;
static const int mob_su25 = 10;
static const int mob_c130 = 11;
static const int mob_t80 = 12;
static const int mob_chinook = 13;
static const int mob_f16 = 14;
static const int mob_maz543 = 15;
static const int mob_mig29 = 16;
static const int mob_rlttrans = 17;
static const int mob_rlwagona = 18;
static const int mob_zsu23 = 19;
static const int mob_bmp2 = 20;
static const int mob_e3d = 21;
static const int mob_f15 = 22;
static const int mob_mobrad = 23;
static const int mob_romb = 24;
static const int mob_tornadv1 = 25;
static const int mob_airburst = 26;
static const int mob_mig31 = 27;
static const int mob_aim9l = 28;
static const int mob_chal1 = 29;
static const int mob_mi26 = 30;
static const int mob_mig27_1 = 31;
static const int mob_mlrs1 = 32;
static const int mob_pat1 = 33;
static const int mob_warrior1 = 34;
static const int mob_cancrat = 35;
static const int mob_crater1m = 36;
static const int mob_crater2m = 37;
static const int mob_bomb = 38;
static const int mob_alarm = 39;
static const int mob_bomblet = 40;
static const int mob_lgb = 41;
static const int mob_heave = 42;
static const int mob_sg357 = 43;
static const int mob_skyflash = 44;
static const int mob_splash = 45;
static const int mob_flare = 46;
static const int mob_chaff = 47;
static const int mob_tracer = 48;
static const int mob_tracerb = 49;
static const int drone_ac_on = 1;
static const int drone_hc_on = 1;
static const int way_rec_size = 16;
#define wp_speed (wp_time)
static const int af_rec_size = 18;
#define _drone_type (6+18+drone_type)
#define _drone_side (6+18+drone_side)
#define _drone_event (6+18+drone_event)
static const int veh_rec_size = 16;
static const int next_vehicle = 6+18+16;
#define _veh_drone (6+18+veh_drone)
#define _veh_side (6+18+veh_side)
#define _veh_event (6+18+veh_event)
#define _veh_node_ptr (6+18+veh_node_ptr)
#define _veh_dist (6+18+veh_dist)
#define _veh_dist_fine (6+18+veh_dist_fine)
#define _veh_xfine (6+18+veh_xfine)
#define _veh_yfine (6+18+veh_yfine)
#define _veh_zfine (6+18+veh_zfine)
static const int cnvy_rec_size = 10;
static const int route_rec_size = 14;
#define red_cancel (~(0x8))
#define amb_cancel (~(0x1+0x8))
static const int ac_rec_size = 62;
static const int ac_waypoints = 6+18+62;
#define _ac_drone (6+18+ac_drone)
#define _ac_side (6+18+ac_side)
#define _ac_event (6+18+ac_event)
#define _ac_type (6+18+ac_type)
#define _ac_delay (6+18+ac_delay)
#define _ac_drone_num (6+18+ac_drone_num)
#define _ac_event_num (6+18+ac_event_num)
#define _ac_ctrl_mode (6+18+ac_ctrl_mode)
#define _ac_wp_ptr (6+18+ac_wp_ptr)
#define _ac_xfine (6+18+ac_xfine)
#define _ac_yfine (6+18+ac_yfine)
#define _ac_zfine (6+18+ac_zfine)
#define _ac_hfine (6+18+ac_hfine)
#define _ac_pfine (6+18+ac_pfine)
#define _ac_rfine (6+18+ac_rfine)
#define _ac_vtas (6+18+ac_vtas)
#define _ac_vtas_fine (6+18+ac_vtas_fine)
#define _ac_lift_vctr (6+18+ac_lift_vctr)
#define _ac_ab_delay (6+18+ac_ab_delay)
#define _ac_sweep_delay (6+18+ac_sweep_delay)
#define _ac_taxi_ptr (6+18+ac_taxi_ptr)
#define _ac_taxi_xft (6+18+ac_taxi_xft)
#define _ac_taxi_yft (6+18+ac_taxi_yft)
#define _ac_arm_lock (6+18+ac_arm_lock)
#define _ac_flags (6+18+ac_flags)
#define _ac_decoy_timer (6+18+ac_decoy_timer)
#define _ac_aa_timer (6+18+ac_aa_timer)
#define _ac_opp_ptr (6+18+ac_opp_ptr)
#define _ac_prev_perr (6+18+ac_prev_perr)
#define _ac_prev_prate (6+18+ac_prev_prate)
#define _ac_shells (6+18+ac_shells)
#define _ac_missiles (6+18+ac_missiles)
#define _ac_wpn_int (6+18+ac_wpn_int)
#define _ac_evade_timer (6+18+ac_evade_timer)
#define _ac_gmax_timer (6+18+ac_gmax_timer)
static const int hc_rec_size = 38;
static const int hc_waypoints = 6+18+38;
#define _hc_drone (6+18+hc_drone)
#define _hc_side (6+18+hc_side)
#define _hc_event (6+18+hc_event)
#define _hc_type (6+18+hc_type)
#define _hc_delay (6+18+hc_delay)
#define _hc_drone_num (6+18+hc_drone_num)
#define _hc_event_num (6+18+hc_event_num)
#define _hc_ctrl_mode (6+18+hc_ctrl_mode)
#define _hc_wp_ptr (6+18+hc_wp_ptr)
#define _hc_xfine (6+18+hc_xfine)
#define _hc_yfine (6+18+hc_yfine)
#define _hc_zfine (6+18+hc_zfine)
#define _hc_hfine (6+18+hc_hfine)
#define _hc_pfine (6+18+hc_pfine)
#define _hc_rfine (6+18+hc_rfine)
#define _hc_vtas (6+18+hc_vtas)
#define _hc_vtas_fine (6+18+hc_vtas_fine)
#define _hc_lift_vctr (6+18+hc_lift_vctr)
#define _hc_accel_pfine (6+18+hc_accel_pfine)
#define _hc_flags (6+18+hc_flags)
#define _hc_decoy_timer (6+18+hc_decoy_timer)
static const int wpn_rec_size = 28;
static const int wpn_data_size = 6+18+28;
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
#define _wpn_type (6+18+wpn_type)
#define _wpn_flags (6+18+wpn_flags)
#define _wpn_hfine (6+18+wpn_hfine)
#define _wpn_pfine (6+18+wpn_pfine)
#define _wpn_xfine (6+18+wpn_xfine)
#define _wpn_yfine (6+18+wpn_yfine)
#define _wpn_zfine (6+18+wpn_zfine)
#define _wpn_userw1 (6+18+wpn_userw1)
#define _wpn_userw2 (6+18+wpn_userw2)
#define _wpn_userw3 (6+18+wpn_userw3)
#define _wpn_userw4 (6+18+wpn_userw4)
#define _wpn_bomb_hvel (6+18+wpn_userw1)
#define _wpn_bomb_vvel (6+18+wpn_userw2)
#define _wpn_lgb_tgt (6+18+wpn_userw1)
#define _wpn_lgb_vel (6+18+wpn_userw2)
#define _wpn_can_hvel (6+18+wpn_userw1)
#define _wpn_can_vvel (6+18+wpn_userw2)
#define _wpn_can_timer (6+18+wpn_userw3)
#define _wpn_miss_tgt (6+18+wpn_userw1)
#define _wpn_miss_vel (6+18+wpn_userw2)
#define _wpn_miss_accel (6+18+wpn_userw3)
#define _wpn_miss_timer (6+18+wpn_userw4)
#define _wpn_miss_decoy (6+18+wpn_userw5)
#define _wpn_alm_vel (6+18+wpn_userw1)
#define _wpn_alm_accel (6+18+wpn_userw2)
#define _wpn_alm_timer (6+18+wpn_userw3)
#define _wpn_alm_xsec (6+18+wpn_userw4)
#define _wpn_alm_ysec (6+18+wpn_userw5)
#define _wpn_alm_xft (6+18+wpn_userw6)
#define _wpn_alm_yft (6+18+wpn_userw7)
#define _wpn_decoy_hvel (6+18+wpn_userw1)
#define _wpn_decoy_vvel (6+18+wpn_userw2)
#define _wpn_decoy_life (6+18+wpn_userw3)
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
static const int view_rec_size = 18;
#define vp_zft_lo (vp_zft)
#define vp_zft_hi (vp_zft+2)
static const int sec_rec_size = 4;
static const int obj_rec_size = 20;
#define obj_xgrid (obj_userw1)
#define obj_ygrid (obj_userw2)
#define obj_hdg (obj_userw1)
#define obj_pitch (obj_userw2)
#define obj_roll (obj_userw3)
#define obj_anim_flags (obj_userb1)
#define obj_xsecpos (obj_userw1)
#define obj_ysecpos (obj_userw2)
#define obj_zsecpos (obj_userw3)
#define obj_mapindex (obj_userw4)
#define obj_secscale (obj_userb1)
#define obj_face_flags (obj_userb2)
#define obj_ymin (obj_xpos)
#define obj_smoke_rft (obj_userw1)
#define obj_smoke_col (obj_userb1)
static const int obj_hdr_size = 14;
static const int mob_rec_size = 6;
#define _vp_xsec (6+vp_xsec)
#define _vp_ysec (6+vp_ysec)
#define _vp_xft (6+vp_xft)
#define _vp_yft (6+vp_yft)
#define _vp_zft (6+vp_zft)
#define _vp_hdg (6+vp_hdg)
#define _vp_pitch (6+vp_pitch)
#define _vp_roll (6+vp_roll)
#define _vp_zft_lo (6+vp_zft)
#define _vp_zft_hi (6+(vp_zft+2))
static const int msort_rec_size = 6;
static const int gnd_rec_size = 4;
static const int stat_rec_size = 8;
static const int crater_rec_size = 14;
static const int smoke_rec_size = 26;
#define smoke_zft_lo (smoke_zft)
#define smoke_zft_hi (smoke_zft+2)

	#define M2C_MODULE_MAINDATA 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern viewpoint& tmp_view;
extern viewpoint& tmp2_view;
extern dw& gameviewmode;
extern dw& panelmode;
extern dw& crewmode;
extern dw& automode;
extern dw& altmode;
extern dw& hdgmode;
extern dw& radarmode;
extern dw& waytotal;
extern dw& armmode;
extern db& shakeup;
extern db& fullscreen;
extern dw& wpptr;
extern dw& endwpptr;
extern waypoint& floatwp;
extern dd& wprng;
extern dw& wpbrg;
extern dw& wpbrgfine;
extern dw& wprngnmiles;
extern dw& wpeta;
extern dw& wptimeearlylate;
extern dw& redwarnings1;
extern dw& redwarnings2;
extern dw& ambwarnings1;
extern dw& ambwarnings2;
extern db& shakepriority;
extern db& tmpdieflag;
extern db& jettison;
extern dw& dummyde47e31c_data_65_2075;
extern dw& dummyde47e31c_data_67_2076;
extern dw& dummyde47e31c_data_69_2077;
extern dw& dummyde47e31c_data_6b_2078;
extern dw& dummyde47e31c_data_6d_2079;
extern dw& dummyde47e31c_data_6f_2080;
extern dw& dummyde47e31c_data_71_2081;
extern dw& dummyde47e31c_data_73_2082;
extern dw& dummyde47e31c_data_75_2083;
extern dw& dummyde47e31c_data_77_2084;
extern dw& dummyde47e31c_data_79_2085;
extern dw& dummyde47e31c_data_7b_2086;
extern dw& dummyde47e31c_data_7d_2087;
extern dw& dummyde47e31c_data_7f_2088;
extern dw& dummyde47e31c_data_81_2089;
extern dw& dummyde47e31c_data_83_2090;
extern dw& dummyde47e31c_data_85_2091;
extern dw& dummyde47e31c_data_87_2092;
extern dw& dummyde47e31c_data_89_2093;
extern dw& dummyde47e31c_data_8b_2094;
extern dw& dummyde47e31c_data_8d_2095;
extern dw& dummyde47e31c_data_8f_2096;
extern dw& dummyde47e31c_data_91_2097;
extern dw& dummyde47e31c_data_93_2098;
extern dw& dummyde47e31c_data_95_2099;
extern dw& dummyde47e31c_data_97_2100;
extern dw& dummyde47e31c_data_99_2101;
extern dw& dummyde47e31c_data_9b_2102;
extern dw& dummyde47e31c_data_9d_2103;
extern dw& dummyde47e31c_data_9f_2104;
extern dw& dummyde47e31c_data_a1_2105;
extern dw& dummyde47e31c_data_a3_2106;
extern dw& dummyde47e31c_data_a5_2107;
extern dw& dummyde47e31c_data_a7_2108;
extern dw& dummyde47e31c_data_a9_2109;
extern dw& dummyde47e31c_data_ab_2110;
extern dw& dummyde47e31c_data_ad_2111;
extern dw& dummyde47e31c_data_af_2112;
extern dw& dummyde47e31c_data_b1_2113;
extern dw& dummyde47e31c_data_b3_2114;
extern dw& dummyde47e31c_data_b5_2115;
extern dw& dummyde47e31c_data_b7_2116;
extern dw& dummyde47e31c_data_b9_2117;
extern dw& dummyde47e31c_data_bb_2118;
extern dw& dummyde47e31c_data_bd_2119;
extern dw& dummyde47e31c_data_bf_2120;
extern dw& dummyde47e31c_data_c1_2121;
extern dw& dummyde47e31c_data_c3_2122;
extern dw& dummyde47e31c_data_c5_2123;
extern dw& dummyde47e31c_data_c7_2124;
extern dw& dummyde47e31c_data_c9_2125;
extern dw& dummyde47e31c_data_cb_2126;
extern dw& dummyde47e31c_data_cd_2127;
extern dw& dummyde47e31c_data_cf_2128;
extern dw& dummyde47e31c_data_d1_2129;
extern dw& dummyde47e31c_data_d3_2130;
extern dw& dummyde47e31c_data_d5_2131;
extern dw& dummyde47e31c_data_d7_2132;
extern dw& dummyde47e31c_data_d9_2133;
extern dw& dummyde47e31c_data_db_2134;
extern dw& dummyde47e31c_data_dd_2135;
extern dw& dummyde47e31c_data_df_2136;
extern dw& dummyde47e31c_data_e1_2137;
extern dw& dummyde47e31c_data_e3_2138;
extern dw& dummyde47e31c_data_e5_2139;
extern dw& dummyde47e31c_data_e7_2140;
extern dw& dummyde47e31c_data_e9_2141;
extern dw& dummyde47e31c_data_eb_2142;
extern dw& dummyde47e31c_data_ed_2143;
extern dw& dummyde47e31c_data_ef_2144;
extern dw& dummyde47e31c_data_f1_2145;
extern dw& dummyde47e31c_data_f3_2146;
extern dw& dummyde47e31c_data_f5_2147;
extern dw& dummyde47e31c_data_f7_2148;
extern dw& dummyde47e31c_data_f9_2149;
extern dw& dummyde47e31c_data_fb_2150;
extern dw& dummyde47e31c_data_fd_2151;
extern dw& dummyde47e31c_data_ff_2152;
extern dw& dummyde47e31c_data_101_2153;
extern dw& dummyde47e31c_data_103_2154;
extern dw& dummyde47e31c_data_105_2155;
extern dw& dummyde47e31c_data_107_2156;
extern dw& dummyde47e31c_data_109_2157;
extern dw& dummyde47e31c_data_10b_2158;
extern dw& dummyde47e31c_data_10d_2159;
extern dw& dummyde47e31c_data_10f_2160;
extern dw& dummyde47e31c_data_111_2161;
extern dw& dummyde47e31c_data_113_2162;
extern dw& dummyde47e31c_data_115_2163;
extern dw& dummyde47e31c_data_117_2164;
extern dw& dummyde47e31c_data_119_2170;
extern dw& dummyde47e31c_data_11b_2171;
extern dw& dummyde47e31c_data_11d_2172;
extern dw& dummyde47e31c_data_11f_2173;
extern dw& dummyde47e31c_data_121_2174;
extern dw& dummyde47e31c_data_123_2175;
extern dw& dummyde47e31c_data_125_2176;
extern dw& dummyde47e31c_data_127_2177;
extern dw& dummyde47e31c_data_129_2178;
extern dw& dummyde47e31c_data_12b_2179;
extern dw& dummyde47e31c_data_12d_2180;
extern dw& dummyde47e31c_data_12f_2181;
extern dw& dummyde47e31c_data_131_2182;
extern dw& dummyde47e31c_data_133_2183;
extern dw& dummyde47e31c_data_135_2184;
extern dw& dummyde47e31c_data_137_2185;
extern dw& dummyde47e31c_data_139_2186;
extern dw& dummyde47e31c_data_13b_2187;
extern dw& dummyde47e31c_data_13d_2188;
extern dw& dummyde47e31c_data_13f_2189;
extern dw& aairdronelast;
extern dw& dummyde47e31c_data_143_2192;
extern dw& dummyde47e31c_data_145_2193;
extern dw& dummyde47e31c_data_147_2194;
extern dw& dummyde47e31c_data_149_2195;
extern dw& dummyde47e31c_data_14b_2196;
extern dw& dummyde47e31c_data_14d_2197;
extern dw& dummyde47e31c_data_14f_2198;
extern dw& dummyde47e31c_data_151_2199;
extern dw& dummyde47e31c_data_153_2200;
extern dw& dummyde47e31c_data_155_2201;
extern dw& dummyde47e31c_data_157_2202;
extern dw& dummyde47e31c_data_159_2203;
extern dw& dummyde47e31c_data_15b_2204;
extern dw& dummyde47e31c_data_15d_2205;
extern dw& dummyde47e31c_data_15f_2206;
extern dw& dummyde47e31c_data_161_2207;
extern dw& dummyde47e31c_data_163_2208;
extern dw& dummyde47e31c_data_165_2209;
extern dw& dummyde47e31c_data_167_2210;
extern dw& dummyde47e31c_data_169_2211;
extern dw& eairdronelast;
extern dw& dummyde47e31c_data_16d_2214;
extern dw& dummyde47e31c_data_16f_2215;
extern dw& dummyde47e31c_data_171_2216;
extern dw& agnddronelast;
extern dw& dummyde47e31c_data_175_2219;
extern dw& dummyde47e31c_data_177_2220;
extern dw& dummyde47e31c_data_179_2221;
extern dw& egnddronelast;
extern dw& gamedatasize;
extern dw& dummyde47e31c_data_17f_2234;
extern dw& tornadotype;
extern dw& controldevice;
extern dw& soundcard;
extern dw& musiccard;
extern dw& redwarnings;
extern dw& ambwarnings;
extern dw& startairspeed;
extern dd& timelimit;
extern dw& apilotskill;
extern dw& epilotskill;
extern dw& xwindvmax;
extern dw& xwinddir;
extern db& exploremode;
extern db& previewmode;
extern db& demomode;
extern db& nocollisions;
extern db& dieflag;
extern db& landing;
extern db& infiniteweapons;
extern db& infinitefuel;
extern db& infinitegforce;
extern db& ironwork;
extern db& twoplayer;
extern db& commsdevice;
extern db& baudrate;
extern db& soundoption;
extern db& destroyed;
extern db& ejected;
extern db& startairborne;
extern db& autotrack;
extern db& damagedleng;
extern db& damagedreng;
extern db& fixminweight;
extern db& nofire;
extern db& globaltimeout;
extern db& hitobjectnum;
extern struct clock& clock24;
extern dw& extstores;
extern dw& dummyde47e31c_data_1b9_2307;
extern dw& dummyde47e31c_data_1bb_2308;
extern dw& dummyde47e31c_data_1bd_2309;
extern dw& dummyde47e31c_data_1bf_2310;
extern dw& dummyde47e31c_data_1c1_2311;
extern dw& dummyde47e31c_data_1c3_2312;
extern dw& dummyde47e31c_data_1c5_2313;
extern dw& dummyde47e31c_data_1c7_2314;
extern dw& dummyde47e31c_data_1c9_2315;
extern dw& dummyde47e31c_data_1cb_2316;
extern package& __m2c_structrow_de47e31c_2348;
extern package& __m2c_structrow_de47e31c_2349;
extern package& __m2c_structrow_de47e31c_2350;
extern dw& startwaypoint;
extern waypoint& __m2c_structrow_de47e31c_2362;
extern waypoint& __m2c_structrow_de47e31c_2363;
extern waypoint& __m2c_structrow_de47e31c_2364;
extern waypoint& __m2c_structrow_de47e31c_2365;
extern waypoint& __m2c_structrow_de47e31c_2366;
extern waypoint& __m2c_structrow_de47e31c_2367;
extern waypoint& __m2c_structrow_de47e31c_2368;
extern waypoint& __m2c_structrow_de47e31c_2369;
extern waypoint& __m2c_structrow_de47e31c_2370;
extern waypoint& __m2c_structrow_de47e31c_2371;
extern waypoint& __m2c_structrow_de47e31c_2372;
extern waypoint& __m2c_structrow_de47e31c_2373;
extern waypoint& __m2c_structrow_de47e31c_2374;
extern waypoint& __m2c_structrow_de47e31c_2375;
extern waypoint& __m2c_structrow_de47e31c_2376;
extern waypoint& __m2c_structrow_de47e31c_2378;
extern endroute& __m2c_structrow_de47e31c_2379;
extern airfield& __m2c_structrow_de47e31c_2387;
extern airfield& __m2c_structrow_de47e31c_2388;
extern airfield& __m2c_structrow_de47e31c_2389;
extern airfield& __m2c_structrow_de47e31c_2390;
extern db (& agndkills)[128];
extern db (& egndkills)[128];
extern db (& amobkills)[64];
extern db (& emobkills)[64];
extern ewr (& ewrtable)[16];
extern waypoint& __m2c_structrow_de47e31c_2421;
extern waypoint& __m2c_structrow_de47e31c_2422;
extern waypoint& __m2c_structrow_de47e31c_2423;
extern waypoint& __m2c_structrow_de47e31c_2424;
extern waypoint& __m2c_structrow_de47e31c_2425;
extern waypoint& __m2c_structrow_de47e31c_2426;
extern waypoint& __m2c_structrow_de47e31c_2427;
extern waypoint& __m2c_structrow_de47e31c_2428;
extern waypoint& __m2c_structrow_de47e31c_2434;
extern waypoint& __m2c_structrow_de47e31c_2435;
extern waypoint& __m2c_structrow_de47e31c_2436;
extern waypoint& __m2c_structrow_de47e31c_2437;
extern waypoint& __m2c_structrow_de47e31c_2438;
extern waypoint& __m2c_structrow_de47e31c_2439;
extern waypoint& __m2c_structrow_de47e31c_2440;
extern waypoint& __m2c_structrow_de47e31c_2441;
extern waypoint& __m2c_structrow_de47e31c_2447;
extern waypoint& __m2c_structrow_de47e31c_2448;
extern waypoint& __m2c_structrow_de47e31c_2449;
extern waypoint& __m2c_structrow_de47e31c_2450;
extern waypoint& __m2c_structrow_de47e31c_2451;
extern waypoint& __m2c_structrow_de47e31c_2452;
extern waypoint& __m2c_structrow_de47e31c_2453;
extern waypoint& __m2c_structrow_de47e31c_2454;
extern waypoint& __m2c_structrow_de47e31c_2455;
extern waypoint& __m2c_structrow_de47e31c_2456;
extern waypoint& __m2c_structrow_de47e31c_2457;
extern waypoint& __m2c_structrow_de47e31c_2463;
extern waypoint& __m2c_structrow_de47e31c_2464;
extern waypoint& __m2c_structrow_de47e31c_2465;
extern waypoint& __m2c_structrow_de47e31c_2466;
extern waypoint& __m2c_structrow_de47e31c_2467;
extern waypoint& __m2c_structrow_de47e31c_2468;
extern waypoint& __m2c_structrow_de47e31c_2469;
extern waypoint& __m2c_structrow_de47e31c_2470;
extern waypoint& __m2c_structrow_de47e31c_2471;
extern waypoint& __m2c_structrow_de47e31c_2472;
extern waypoint& __m2c_structrow_de47e31c_2473;
extern waypoint& __m2c_structrow_de47e31c_2479;
extern waypoint& __m2c_structrow_de47e31c_2480;
extern waypoint& __m2c_structrow_de47e31c_2481;
extern waypoint& __m2c_structrow_de47e31c_2482;
extern waypoint& __m2c_structrow_de47e31c_2483;
extern waypoint& __m2c_structrow_de47e31c_2484;
extern waypoint& __m2c_structrow_de47e31c_2485;
extern waypoint& __m2c_structrow_de47e31c_2486;
extern waypoint& __m2c_structrow_de47e31c_2487;
extern waypoint& __m2c_structrow_de47e31c_2488;
extern waypoint& __m2c_structrow_de47e31c_2489;
extern waypoint& __m2c_structrow_de47e31c_2495;
extern waypoint& __m2c_structrow_de47e31c_2496;
extern waypoint& __m2c_structrow_de47e31c_2497;
extern waypoint& __m2c_structrow_de47e31c_2498;
extern waypoint& __m2c_structrow_de47e31c_2499;
extern waypoint& __m2c_structrow_de47e31c_2500;
extern waypoint& __m2c_structrow_de47e31c_2501;
extern waypoint& __m2c_structrow_de47e31c_2502;
extern waypoint& __m2c_structrow_de47e31c_2503;
extern waypoint& __m2c_structrow_de47e31c_2504;
extern waypoint& __m2c_structrow_de47e31c_2505;
extern waypoint& __m2c_structrow_de47e31c_2511;
extern waypoint& __m2c_structrow_de47e31c_2512;
extern waypoint& __m2c_structrow_de47e31c_2513;
extern waypoint& __m2c_structrow_de47e31c_2514;
extern waypoint& __m2c_structrow_de47e31c_2515;
extern waypoint& __m2c_structrow_de47e31c_2516;
extern waypoint& __m2c_structrow_de47e31c_2517;
extern waypoint& __m2c_structrow_de47e31c_2523;
extern waypoint& __m2c_structrow_de47e31c_2524;
extern waypoint& __m2c_structrow_de47e31c_2525;
extern waypoint& __m2c_structrow_de47e31c_2526;
extern waypoint& __m2c_structrow_de47e31c_2527;
extern waypoint& __m2c_structrow_de47e31c_2528;
extern waypoint& __m2c_structrow_de47e31c_2529;
extern waypoint& __m2c_structrow_de47e31c_2555;
extern waypoint& __m2c_structrow_de47e31c_2556;
extern waypoint& __m2c_structrow_de47e31c_2557;
extern waypoint& __m2c_structrow_de47e31c_2558;
extern waypoint& __m2c_structrow_de47e31c_2559;
extern waypoint& __m2c_structrow_de47e31c_2565;
extern waypoint& __m2c_structrow_de47e31c_2566;
extern waypoint& __m2c_structrow_de47e31c_2567;
extern waypoint& __m2c_structrow_de47e31c_2568;
extern waypoint& __m2c_structrow_de47e31c_2569;
extern waypoint& __m2c_structrow_de47e31c_2575;
extern waypoint& __m2c_structrow_de47e31c_2576;
extern waypoint& __m2c_structrow_de47e31c_2577;
extern waypoint& __m2c_structrow_de47e31c_2578;
extern waypoint& __m2c_structrow_de47e31c_2579;
extern waypoint& __m2c_structrow_de47e31c_2585;
extern waypoint& __m2c_structrow_de47e31c_2586;
extern waypoint& __m2c_structrow_de47e31c_2587;
extern waypoint& __m2c_structrow_de47e31c_2588;
extern waypoint& __m2c_structrow_de47e31c_2589;
extern waypoint& __m2c_structrow_de47e31c_2595;
extern waypoint& __m2c_structrow_de47e31c_2596;
extern waypoint& __m2c_structrow_de47e31c_2597;
extern waypoint& __m2c_structrow_de47e31c_2598;
extern waypoint& __m2c_structrow_de47e31c_2599;
extern waypoint& __m2c_structrow_de47e31c_2605;
extern waypoint& __m2c_structrow_de47e31c_2606;
extern waypoint& __m2c_structrow_de47e31c_2607;
extern waypoint& __m2c_structrow_de47e31c_2608;
extern waypoint& __m2c_structrow_de47e31c_2614;
extern waypoint& __m2c_structrow_de47e31c_2615;
extern waypoint& __m2c_structrow_de47e31c_2616;
extern waypoint& __m2c_structrow_de47e31c_2617;
extern waypoint& __m2c_structrow_de47e31c_2618;
extern waypoint& __m2c_structrow_de47e31c_2624;
extern waypoint& __m2c_structrow_de47e31c_2625;
extern waypoint& __m2c_structrow_de47e31c_2626;
extern waypoint& __m2c_structrow_de47e31c_2627;
extern waypoint& __m2c_structrow_de47e31c_2628;
extern waypoint& __m2c_structrow_de47e31c_2629;
extern waypoint& __m2c_structrow_de47e31c_2635;
extern waypoint& __m2c_structrow_de47e31c_2636;
extern waypoint& __m2c_structrow_de47e31c_2637;
extern waypoint& __m2c_structrow_de47e31c_2638;
extern waypoint& __m2c_structrow_de47e31c_2639;
extern waypoint& __m2c_structrow_de47e31c_2640;
extern waypoint& __m2c_structrow_de47e31c_2650;
extern waypoint& __m2c_structrow_de47e31c_2651;
extern waypoint& __m2c_structrow_de47e31c_2652;
extern waypoint& __m2c_structrow_de47e31c_2653;
extern waypoint& __m2c_structrow_de47e31c_2654;
extern waypoint& __m2c_structrow_de47e31c_2655;
extern waypoint& __m2c_structrow_de47e31c_2656;
extern waypoint& __m2c_structrow_de47e31c_2657;
extern waypoint& __m2c_structrow_de47e31c_2658;
extern waypoint& __m2c_structrow_de47e31c_2659;
extern waypoint& __m2c_structrow_de47e31c_2660;
extern waypoint& __m2c_structrow_de47e31c_2666;
extern waypoint& __m2c_structrow_de47e31c_2667;
extern waypoint& __m2c_structrow_de47e31c_2668;
extern waypoint& __m2c_structrow_de47e31c_2669;
extern waypoint& __m2c_structrow_de47e31c_2670;
extern waypoint& __m2c_structrow_de47e31c_2671;
extern waypoint& __m2c_structrow_de47e31c_2672;
extern waypoint& __m2c_structrow_de47e31c_2673;
extern waypoint& __m2c_structrow_de47e31c_2674;
extern waypoint& __m2c_structrow_de47e31c_2675;
extern waypoint& __m2c_structrow_de47e31c_2676;
extern waypoint& __m2c_structrow_de47e31c_2682;
extern waypoint& __m2c_structrow_de47e31c_2683;
extern waypoint& __m2c_structrow_de47e31c_2684;
extern waypoint& __m2c_structrow_de47e31c_2685;
extern waypoint& __m2c_structrow_de47e31c_2686;
extern waypoint& __m2c_structrow_de47e31c_2687;
extern waypoint& __m2c_structrow_de47e31c_2688;
extern waypoint& __m2c_structrow_de47e31c_2689;
extern waypoint& __m2c_structrow_de47e31c_2690;
extern waypoint& __m2c_structrow_de47e31c_2691;
extern waypoint& __m2c_structrow_de47e31c_2692;
extern waypoint& __m2c_structrow_de47e31c_2698;
extern waypoint& __m2c_structrow_de47e31c_2699;
extern waypoint& __m2c_structrow_de47e31c_2700;
extern waypoint& __m2c_structrow_de47e31c_2701;
extern waypoint& __m2c_structrow_de47e31c_2702;
extern waypoint& __m2c_structrow_de47e31c_2703;
extern waypoint& __m2c_structrow_de47e31c_2704;
extern waypoint& __m2c_structrow_de47e31c_2705;
extern waypoint& __m2c_structrow_de47e31c_2706;
extern waypoint& __m2c_structrow_de47e31c_2707;
extern waypoint& __m2c_structrow_de47e31c_2708;
extern waypoint& __m2c_structrow_de47e31c_2714;
extern waypoint& __m2c_structrow_de47e31c_2715;
extern waypoint& __m2c_structrow_de47e31c_2716;
extern waypoint& __m2c_structrow_de47e31c_2717;
extern waypoint& __m2c_structrow_de47e31c_2718;
extern waypoint& __m2c_structrow_de47e31c_2719;
extern waypoint& __m2c_structrow_de47e31c_2720;
extern waypoint& __m2c_structrow_de47e31c_2721;
extern waypoint& __m2c_structrow_de47e31c_2722;
extern waypoint& __m2c_structrow_de47e31c_2723;
extern waypoint& __m2c_structrow_de47e31c_2724;
extern waypoint& __m2c_structrow_de47e31c_2730;
extern waypoint& __m2c_structrow_de47e31c_2731;
extern waypoint& __m2c_structrow_de47e31c_2732;
extern waypoint& __m2c_structrow_de47e31c_2733;
extern waypoint& __m2c_structrow_de47e31c_2734;
extern waypoint& __m2c_structrow_de47e31c_2735;
extern waypoint& __m2c_structrow_de47e31c_2736;
extern waypoint& __m2c_structrow_de47e31c_2737;
extern waypoint& __m2c_structrow_de47e31c_2738;
extern waypoint& __m2c_structrow_de47e31c_2739;
extern waypoint& __m2c_structrow_de47e31c_2740;
extern waypoint& __m2c_structrow_de47e31c_2746;
extern waypoint& __m2c_structrow_de47e31c_2747;
extern waypoint& __m2c_structrow_de47e31c_2748;
extern waypoint& __m2c_structrow_de47e31c_2749;
extern waypoint& __m2c_structrow_de47e31c_2750;
extern waypoint& __m2c_structrow_de47e31c_2751;
extern waypoint& __m2c_structrow_de47e31c_2752;
extern waypoint& __m2c_structrow_de47e31c_2758;
extern waypoint& __m2c_structrow_de47e31c_2759;
extern waypoint& __m2c_structrow_de47e31c_2760;
extern waypoint& __m2c_structrow_de47e31c_2761;
extern waypoint& __m2c_structrow_de47e31c_2762;
extern waypoint& __m2c_structrow_de47e31c_2763;
extern waypoint& __m2c_structrow_de47e31c_2764;
extern waypoint& __m2c_structrow_de47e31c_2790;
extern waypoint& __m2c_structrow_de47e31c_2791;
extern waypoint& __m2c_structrow_de47e31c_2792;
extern waypoint& __m2c_structrow_de47e31c_2793;
extern waypoint& __m2c_structrow_de47e31c_2794;
extern waypoint& __m2c_structrow_de47e31c_2800;
extern waypoint& __m2c_structrow_de47e31c_2801;
extern waypoint& __m2c_structrow_de47e31c_2802;
extern waypoint& __m2c_structrow_de47e31c_2803;
extern waypoint& __m2c_structrow_de47e31c_2804;
extern waypoint& __m2c_structrow_de47e31c_2810;
extern waypoint& __m2c_structrow_de47e31c_2811;
extern waypoint& __m2c_structrow_de47e31c_2812;
extern waypoint& __m2c_structrow_de47e31c_2813;
extern waypoint& __m2c_structrow_de47e31c_2814;
extern waypoint& __m2c_structrow_de47e31c_2820;
extern waypoint& __m2c_structrow_de47e31c_2821;
extern waypoint& __m2c_structrow_de47e31c_2822;
extern waypoint& __m2c_structrow_de47e31c_2823;
extern waypoint& __m2c_structrow_de47e31c_2824;
extern waypoint& __m2c_structrow_de47e31c_2830;
extern waypoint& __m2c_structrow_de47e31c_2831;
extern waypoint& __m2c_structrow_de47e31c_2832;
extern waypoint& __m2c_structrow_de47e31c_2833;
extern waypoint& __m2c_structrow_de47e31c_2834;
extern waypoint& __m2c_structrow_de47e31c_2840;
extern waypoint& __m2c_structrow_de47e31c_2841;
extern waypoint& __m2c_structrow_de47e31c_2842;
extern waypoint& __m2c_structrow_de47e31c_2843;
extern waypoint& __m2c_structrow_de47e31c_2844;
extern waypoint& __m2c_structrow_de47e31c_2845;
extern waypoint& __m2c_structrow_de47e31c_2851;
extern waypoint& __m2c_structrow_de47e31c_2852;
extern waypoint& __m2c_structrow_de47e31c_2853;
extern waypoint& __m2c_structrow_de47e31c_2854;
extern waypoint& __m2c_structrow_de47e31c_2855;
extern waypoint& __m2c_structrow_de47e31c_2856;
extern waypoint& __m2c_structrow_de47e31c_2862;
extern waypoint& __m2c_structrow_de47e31c_2863;
extern waypoint& __m2c_structrow_de47e31c_2864;
extern waypoint& __m2c_structrow_de47e31c_2865;
extern waypoint& __m2c_structrow_de47e31c_2866;
extern waypoint& __m2c_structrow_de47e31c_2867;
extern waypoint& __m2c_structrow_de47e31c_2873;
extern waypoint& __m2c_structrow_de47e31c_2874;
extern waypoint& __m2c_structrow_de47e31c_2875;
extern waypoint& __m2c_structrow_de47e31c_2876;
extern waypoint& __m2c_structrow_de47e31c_2877;
extern waypoint& __m2c_structrow_de47e31c_2878;
extern convoy& atruckconvoy1;
extern mobile& atruck1_1;
extern viewpoint& __m2c_structrow_de47e31c_2889;
extern vehicle& __m2c_structrow_de47e31c_2890;
extern mobile& atruck1_2;
extern viewpoint& __m2c_structrow_de47e31c_2892;
extern vehicle& __m2c_structrow_de47e31c_2893;
extern mobile& atruck1_3;
extern viewpoint& __m2c_structrow_de47e31c_2895;
extern vehicle& __m2c_structrow_de47e31c_2896;
extern mobile& atruck1_4;
extern viewpoint& __m2c_structrow_de47e31c_2898;
extern vehicle& __m2c_structrow_de47e31c_2899;
extern convoy& atruckconvoy2;
extern mobile& atruck2_1;
extern viewpoint& __m2c_structrow_de47e31c_2908;
extern vehicle& __m2c_structrow_de47e31c_2909;
extern mobile& atruck2_2;
extern viewpoint& __m2c_structrow_de47e31c_2911;
extern vehicle& __m2c_structrow_de47e31c_2912;
extern mobile& atruck2_3;
extern viewpoint& __m2c_structrow_de47e31c_2914;
extern vehicle& __m2c_structrow_de47e31c_2915;
extern mobile& atruck2_4;
extern viewpoint& __m2c_structrow_de47e31c_2917;
extern vehicle& __m2c_structrow_de47e31c_2918;
extern convoy& etruckconvoy1;
extern mobile& etruck1_1;
extern viewpoint& __m2c_structrow_de47e31c_2927;
extern vehicle& __m2c_structrow_de47e31c_2928;
extern mobile& etruck1_2;
extern viewpoint& __m2c_structrow_de47e31c_2930;
extern vehicle& __m2c_structrow_de47e31c_2931;
extern mobile& etruck1_3;
extern viewpoint& __m2c_structrow_de47e31c_2933;
extern vehicle& __m2c_structrow_de47e31c_2934;
extern mobile& etruck1_4;
extern viewpoint& __m2c_structrow_de47e31c_2936;
extern vehicle& __m2c_structrow_de47e31c_2937;
extern convoy& etruckconvoy2;
extern mobile& etruck2_1;
extern viewpoint& __m2c_structrow_de47e31c_2946;
extern vehicle& __m2c_structrow_de47e31c_2947;
extern mobile& etruck2_2;
extern viewpoint& __m2c_structrow_de47e31c_2949;
extern vehicle& __m2c_structrow_de47e31c_2950;
extern mobile& etruck2_3;
extern viewpoint& __m2c_structrow_de47e31c_2952;
extern vehicle& __m2c_structrow_de47e31c_2953;
extern mobile& etruck2_4;
extern viewpoint& __m2c_structrow_de47e31c_2955;
extern vehicle& __m2c_structrow_de47e31c_2956;
extern convoy& atrain1;
extern mobile& atrain1_1;
extern viewpoint& __m2c_structrow_de47e31c_2967;
extern vehicle& __m2c_structrow_de47e31c_2968;
extern mobile& atrain1_2;
extern viewpoint& __m2c_structrow_de47e31c_2970;
extern vehicle& __m2c_structrow_de47e31c_2971;
extern mobile& atrain1_3;
extern viewpoint& __m2c_structrow_de47e31c_2973;
extern vehicle& __m2c_structrow_de47e31c_2974;
extern mobile& atrain1_4;
extern viewpoint& __m2c_structrow_de47e31c_2976;
extern vehicle& __m2c_structrow_de47e31c_2977;
extern mobile& atrain1_5;
extern viewpoint& __m2c_structrow_de47e31c_2979;
extern vehicle& __m2c_structrow_de47e31c_2980;
extern mobile& atrain1_6;
extern viewpoint& __m2c_structrow_de47e31c_2982;
extern vehicle& __m2c_structrow_de47e31c_2983;
extern mobile& atrain1_7;
extern viewpoint& __m2c_structrow_de47e31c_2985;
extern vehicle& __m2c_structrow_de47e31c_2986;
extern mobile& atrain1_8;
extern viewpoint& __m2c_structrow_de47e31c_2988;
extern vehicle& __m2c_structrow_de47e31c_2989;
extern convoy& atrain2;
extern mobile& atrain2_1;
extern viewpoint& __m2c_structrow_de47e31c_3000;
extern vehicle& __m2c_structrow_de47e31c_3001;
extern mobile& atrain2_2;
extern viewpoint& __m2c_structrow_de47e31c_3003;
extern vehicle& __m2c_structrow_de47e31c_3004;
extern mobile& atrain2_3;
extern viewpoint& __m2c_structrow_de47e31c_3006;
extern vehicle& __m2c_structrow_de47e31c_3007;
extern mobile& atrain2_4;
extern viewpoint& __m2c_structrow_de47e31c_3009;
extern vehicle& __m2c_structrow_de47e31c_3010;
extern mobile& atrain2_5;
extern viewpoint& __m2c_structrow_de47e31c_3012;
extern vehicle& __m2c_structrow_de47e31c_3013;
extern mobile& atrain2_6;
extern viewpoint& __m2c_structrow_de47e31c_3015;
extern vehicle& __m2c_structrow_de47e31c_3016;
extern mobile& atrain2_7;
extern viewpoint& __m2c_structrow_de47e31c_3018;
extern vehicle& __m2c_structrow_de47e31c_3019;
extern mobile& atrain2_8;
extern viewpoint& __m2c_structrow_de47e31c_3021;
extern vehicle& __m2c_structrow_de47e31c_3022;
extern convoy& etrain1;
extern mobile& etrain1_1;
extern viewpoint& __m2c_structrow_de47e31c_3033;
extern vehicle& __m2c_structrow_de47e31c_3034;
extern mobile& etrain1_2;
extern viewpoint& __m2c_structrow_de47e31c_3036;
extern vehicle& __m2c_structrow_de47e31c_3037;
extern mobile& etrain1_3;
extern viewpoint& __m2c_structrow_de47e31c_3039;
extern vehicle& __m2c_structrow_de47e31c_3040;
extern mobile& etrain1_4;
extern viewpoint& __m2c_structrow_de47e31c_3042;
extern vehicle& __m2c_structrow_de47e31c_3043;
extern mobile& etrain1_5;
extern viewpoint& __m2c_structrow_de47e31c_3045;
extern vehicle& __m2c_structrow_de47e31c_3046;
extern mobile& etrain1_6;
extern viewpoint& __m2c_structrow_de47e31c_3048;
extern vehicle& __m2c_structrow_de47e31c_3049;
extern mobile& etrain1_7;
extern viewpoint& __m2c_structrow_de47e31c_3051;
extern vehicle& __m2c_structrow_de47e31c_3052;
extern mobile& etrain1_8;
extern viewpoint& __m2c_structrow_de47e31c_3054;
extern vehicle& __m2c_structrow_de47e31c_3055;
extern convoy& etrain2;
extern mobile& etrain2_1;
extern viewpoint& __m2c_structrow_de47e31c_3066;
extern vehicle& __m2c_structrow_de47e31c_3067;
extern mobile& etrain2_2;
extern viewpoint& __m2c_structrow_de47e31c_3069;
extern vehicle& __m2c_structrow_de47e31c_3070;
extern mobile& etrain2_3;
extern viewpoint& __m2c_structrow_de47e31c_3072;
extern vehicle& __m2c_structrow_de47e31c_3073;
extern mobile& etrain2_4;
extern viewpoint& __m2c_structrow_de47e31c_3075;
extern vehicle& __m2c_structrow_de47e31c_3076;
extern mobile& etrain2_5;
extern viewpoint& __m2c_structrow_de47e31c_3078;
extern vehicle& __m2c_structrow_de47e31c_3079;
extern mobile& etrain2_6;
extern viewpoint& __m2c_structrow_de47e31c_3081;
extern vehicle& __m2c_structrow_de47e31c_3082;
extern mobile& etrain2_7;
extern viewpoint& __m2c_structrow_de47e31c_3084;
extern vehicle& __m2c_structrow_de47e31c_3085;
extern mobile& etrain2_8;
extern viewpoint& __m2c_structrow_de47e31c_3087;
extern vehicle& __m2c_structrow_de47e31c_3088;
extern route_node& __m2c_structrow_de47e31c_3096;
extern route_node& __m2c_structrow_de47e31c_3098;
extern route_node& __m2c_structrow_de47e31c_3100;
extern route_node& __m2c_structrow_de47e31c_3101;
extern route_node& __m2c_structrow_de47e31c_3102;
extern route_node& __m2c_structrow_de47e31c_3103;
extern route_node& __m2c_structrow_de47e31c_3104;
extern route_node& __m2c_structrow_de47e31c_3105;
extern route_node& __m2c_structrow_de47e31c_3106;
extern route_node& __m2c_structrow_de47e31c_3107;
extern route_node& __m2c_structrow_de47e31c_3108;
extern route_node& __m2c_structrow_de47e31c_3109;
extern route_node& __m2c_structrow_de47e31c_3110;
extern route_node& __m2c_structrow_de47e31c_3111;
extern route_node& __m2c_structrow_de47e31c_3112;
extern route_node& __m2c_structrow_de47e31c_3113;
extern route_node& __m2c_structrow_de47e31c_3114;
extern route_node& __m2c_structrow_de47e31c_3115;
extern route_node& __m2c_structrow_de47e31c_3116;
extern route_node& __m2c_structrow_de47e31c_3117;
extern route_node& __m2c_structrow_de47e31c_3118;
extern route_node& __m2c_structrow_de47e31c_3119;
extern route_node& __m2c_structrow_de47e31c_3120;
extern route_node& __m2c_structrow_de47e31c_3121;
extern route_node& __m2c_structrow_de47e31c_3122;
extern route_node& __m2c_structrow_de47e31c_3123;
extern route_node& __m2c_structrow_de47e31c_3124;
extern route_node& __m2c_structrow_de47e31c_3125;
extern route_node& __m2c_structrow_de47e31c_3126;
extern route_node& __m2c_structrow_de47e31c_3127;
extern route_node& __m2c_structrow_de47e31c_3128;
extern route_node& __m2c_structrow_de47e31c_3129;
extern route_node& __m2c_structrow_de47e31c_3138;
extern route_node& __m2c_structrow_de47e31c_3139;
extern route_node& __m2c_structrow_de47e31c_3140;
extern route_node& __m2c_structrow_de47e31c_3141;
extern route_node& __m2c_structrow_de47e31c_3142;
extern route_node& __m2c_structrow_de47e31c_3143;
extern route_node& __m2c_structrow_de47e31c_3144;
extern route_node& __m2c_structrow_de47e31c_3145;
extern route_node& __m2c_structrow_de47e31c_3146;
extern route_node& __m2c_structrow_de47e31c_3147;
extern route_node& __m2c_structrow_de47e31c_3148;
extern route_node& __m2c_structrow_de47e31c_3149;
extern route_node& __m2c_structrow_de47e31c_3150;
extern route_node& __m2c_structrow_de47e31c_3151;
extern route_node& __m2c_structrow_de47e31c_3152;
extern route_node& __m2c_structrow_de47e31c_3153;
extern route_node& __m2c_structrow_de47e31c_3154;
extern route_node& __m2c_structrow_de47e31c_3155;
extern route_node& __m2c_structrow_de47e31c_3156;
extern route_node& __m2c_structrow_de47e31c_3157;
extern route_node& __m2c_structrow_de47e31c_3158;
extern route_node& __m2c_structrow_de47e31c_3159;
extern route_node& __m2c_structrow_de47e31c_3160;
extern route_node& __m2c_structrow_de47e31c_3161;
extern route_node& __m2c_structrow_de47e31c_3162;
extern route_node& __m2c_structrow_de47e31c_3163;
extern route_node& __m2c_structrow_de47e31c_3164;
extern route_node& __m2c_structrow_de47e31c_3165;
extern route_node& __m2c_structrow_de47e31c_3166;
extern route_node& __m2c_structrow_de47e31c_3167;
extern route_node& __m2c_structrow_de47e31c_3168;
extern route_node& __m2c_structrow_de47e31c_3169;
extern route_node& __m2c_structrow_de47e31c_3178;
extern route_node& __m2c_structrow_de47e31c_3179;
extern route_node& __m2c_structrow_de47e31c_3180;
extern route_node& __m2c_structrow_de47e31c_3181;
extern route_node& __m2c_structrow_de47e31c_3182;
extern route_node& __m2c_structrow_de47e31c_3183;
extern route_node& __m2c_structrow_de47e31c_3184;
extern route_node& __m2c_structrow_de47e31c_3185;
extern route_node& __m2c_structrow_de47e31c_3186;
extern route_node& __m2c_structrow_de47e31c_3187;
extern route_node& __m2c_structrow_de47e31c_3188;
extern route_node& __m2c_structrow_de47e31c_3189;
extern route_node& __m2c_structrow_de47e31c_3190;
extern route_node& __m2c_structrow_de47e31c_3191;
extern route_node& __m2c_structrow_de47e31c_3192;
extern route_node& __m2c_structrow_de47e31c_3193;
extern route_node& __m2c_structrow_de47e31c_3194;
extern route_node& __m2c_structrow_de47e31c_3195;
extern route_node& __m2c_structrow_de47e31c_3196;
extern route_node& __m2c_structrow_de47e31c_3197;
extern route_node& __m2c_structrow_de47e31c_3198;
extern route_node& __m2c_structrow_de47e31c_3199;
extern route_node& __m2c_structrow_de47e31c_3200;
extern route_node& __m2c_structrow_de47e31c_3201;
extern route_node& __m2c_structrow_de47e31c_3202;
extern route_node& __m2c_structrow_de47e31c_3203;
extern route_node& __m2c_structrow_de47e31c_3204;
extern route_node& __m2c_structrow_de47e31c_3205;
extern route_node& __m2c_structrow_de47e31c_3206;
extern route_node& __m2c_structrow_de47e31c_3207;
extern route_node& __m2c_structrow_de47e31c_3208;
extern route_node& __m2c_structrow_de47e31c_3209;
extern route_node& __m2c_structrow_de47e31c_3218;
extern route_node& __m2c_structrow_de47e31c_3219;
extern route_node& __m2c_structrow_de47e31c_3220;
extern route_node& __m2c_structrow_de47e31c_3221;
extern route_node& __m2c_structrow_de47e31c_3222;
extern route_node& __m2c_structrow_de47e31c_3223;
extern route_node& __m2c_structrow_de47e31c_3224;
extern route_node& __m2c_structrow_de47e31c_3225;
extern route_node& __m2c_structrow_de47e31c_3226;
extern route_node& __m2c_structrow_de47e31c_3227;
extern route_node& __m2c_structrow_de47e31c_3228;
extern route_node& __m2c_structrow_de47e31c_3229;
extern route_node& __m2c_structrow_de47e31c_3230;
extern route_node& __m2c_structrow_de47e31c_3231;
extern route_node& __m2c_structrow_de47e31c_3232;
extern route_node& __m2c_structrow_de47e31c_3233;
extern route_node& __m2c_structrow_de47e31c_3234;
extern route_node& __m2c_structrow_de47e31c_3235;
extern route_node& __m2c_structrow_de47e31c_3236;
extern route_node& __m2c_structrow_de47e31c_3237;
extern route_node& __m2c_structrow_de47e31c_3238;
extern route_node& __m2c_structrow_de47e31c_3239;
extern route_node& __m2c_structrow_de47e31c_3240;
extern route_node& __m2c_structrow_de47e31c_3241;
extern route_node& __m2c_structrow_de47e31c_3242;
extern route_node& __m2c_structrow_de47e31c_3243;
extern route_node& __m2c_structrow_de47e31c_3244;
extern route_node& __m2c_structrow_de47e31c_3245;
extern route_node& __m2c_structrow_de47e31c_3246;
extern route_node& __m2c_structrow_de47e31c_3247;
extern route_node& __m2c_structrow_de47e31c_3248;
extern route_node& __m2c_structrow_de47e31c_3249;
extern route_node& __m2c_structrow_de47e31c_3257;
extern route_node& __m2c_structrow_de47e31c_3258;
extern route_node& __m2c_structrow_de47e31c_3260;
extern route_node& __m2c_structrow_de47e31c_3262;
extern route_node& __m2c_structrow_de47e31c_3264;
extern route_node& __m2c_structrow_de47e31c_3266;
extern route_node& __m2c_structrow_de47e31c_3268;
extern route_node& __m2c_structrow_de47e31c_3270;
extern route_node& __m2c_structrow_de47e31c_3272;
extern route_node& __m2c_structrow_de47e31c_3274;
extern route_node& __m2c_structrow_de47e31c_3276;
extern route_node& __m2c_structrow_de47e31c_3278;
extern route_node& __m2c_structrow_de47e31c_3280;
extern route_node& __m2c_structrow_de47e31c_3282;
extern route_node& __m2c_structrow_de47e31c_3284;
extern route_node& __m2c_structrow_de47e31c_3286;
extern route_node& __m2c_structrow_de47e31c_3288;
extern route_node& __m2c_structrow_de47e31c_3290;
extern route_node& __m2c_structrow_de47e31c_3292;
extern route_node& __m2c_structrow_de47e31c_3294;
extern route_node& __m2c_structrow_de47e31c_3296;
extern route_node& __m2c_structrow_de47e31c_3298;
extern route_node& __m2c_structrow_de47e31c_3300;
extern route_node& __m2c_structrow_de47e31c_3302;
extern route_node& __m2c_structrow_de47e31c_3304;
extern route_node& __m2c_structrow_de47e31c_3306;
extern route_node& __m2c_structrow_de47e31c_3307;
extern route_node& __m2c_structrow_de47e31c_3308;
extern route_node& __m2c_structrow_de47e31c_3309;
extern route_node& __m2c_structrow_de47e31c_3310;
extern route_node& __m2c_structrow_de47e31c_3311;
extern route_node& __m2c_structrow_de47e31c_3312;
extern route_node& __m2c_structrow_de47e31c_3321;
extern route_node& __m2c_structrow_de47e31c_3322;
extern route_node& __m2c_structrow_de47e31c_3323;
extern route_node& __m2c_structrow_de47e31c_3324;
extern route_node& __m2c_structrow_de47e31c_3325;
extern route_node& __m2c_structrow_de47e31c_3326;
extern route_node& __m2c_structrow_de47e31c_3327;
extern route_node& __m2c_structrow_de47e31c_3328;
extern route_node& __m2c_structrow_de47e31c_3329;
extern route_node& __m2c_structrow_de47e31c_3330;
extern route_node& __m2c_structrow_de47e31c_3331;
extern route_node& __m2c_structrow_de47e31c_3332;
extern route_node& __m2c_structrow_de47e31c_3333;
extern route_node& __m2c_structrow_de47e31c_3334;
extern route_node& __m2c_structrow_de47e31c_3335;
extern route_node& __m2c_structrow_de47e31c_3336;
extern route_node& __m2c_structrow_de47e31c_3337;
extern route_node& __m2c_structrow_de47e31c_3338;
extern route_node& __m2c_structrow_de47e31c_3339;
extern route_node& __m2c_structrow_de47e31c_3340;
extern route_node& __m2c_structrow_de47e31c_3341;
extern route_node& __m2c_structrow_de47e31c_3342;
extern route_node& __m2c_structrow_de47e31c_3343;
extern route_node& __m2c_structrow_de47e31c_3344;
extern route_node& __m2c_structrow_de47e31c_3345;
extern route_node& __m2c_structrow_de47e31c_3346;
extern route_node& __m2c_structrow_de47e31c_3347;
extern route_node& __m2c_structrow_de47e31c_3348;
extern route_node& __m2c_structrow_de47e31c_3349;
extern route_node& __m2c_structrow_de47e31c_3350;
extern route_node& __m2c_structrow_de47e31c_3351;
extern route_node& __m2c_structrow_de47e31c_3352;
extern route_node& __m2c_structrow_de47e31c_3361;
extern route_node& __m2c_structrow_de47e31c_3362;
extern route_node& __m2c_structrow_de47e31c_3363;
extern route_node& __m2c_structrow_de47e31c_3364;
extern route_node& __m2c_structrow_de47e31c_3365;
extern route_node& __m2c_structrow_de47e31c_3366;
extern route_node& __m2c_structrow_de47e31c_3367;
extern route_node& __m2c_structrow_de47e31c_3368;
extern route_node& __m2c_structrow_de47e31c_3369;
extern route_node& __m2c_structrow_de47e31c_3370;
extern route_node& __m2c_structrow_de47e31c_3371;
extern route_node& __m2c_structrow_de47e31c_3372;
extern route_node& __m2c_structrow_de47e31c_3373;
extern route_node& __m2c_structrow_de47e31c_3374;
extern route_node& __m2c_structrow_de47e31c_3375;
extern route_node& __m2c_structrow_de47e31c_3376;
extern route_node& __m2c_structrow_de47e31c_3377;
extern route_node& __m2c_structrow_de47e31c_3378;
extern route_node& __m2c_structrow_de47e31c_3379;
extern route_node& __m2c_structrow_de47e31c_3380;
extern route_node& __m2c_structrow_de47e31c_3381;
extern route_node& __m2c_structrow_de47e31c_3382;
extern route_node& __m2c_structrow_de47e31c_3383;
extern route_node& __m2c_structrow_de47e31c_3384;
extern route_node& __m2c_structrow_de47e31c_3385;
extern route_node& __m2c_structrow_de47e31c_3386;
extern route_node& __m2c_structrow_de47e31c_3387;
extern route_node& __m2c_structrow_de47e31c_3388;
extern route_node& __m2c_structrow_de47e31c_3389;
extern route_node& __m2c_structrow_de47e31c_3390;
extern route_node& __m2c_structrow_de47e31c_3391;
extern route_node& __m2c_structrow_de47e31c_3392;
extern route_node& __m2c_structrow_de47e31c_3401;
extern route_node& __m2c_structrow_de47e31c_3402;
extern route_node& __m2c_structrow_de47e31c_3403;
extern route_node& __m2c_structrow_de47e31c_3404;
extern route_node& __m2c_structrow_de47e31c_3405;
extern route_node& __m2c_structrow_de47e31c_3406;
extern route_node& __m2c_structrow_de47e31c_3407;
extern route_node& __m2c_structrow_de47e31c_3408;
extern route_node& __m2c_structrow_de47e31c_3409;
extern route_node& __m2c_structrow_de47e31c_3410;
extern route_node& __m2c_structrow_de47e31c_3411;
extern route_node& __m2c_structrow_de47e31c_3412;
extern route_node& __m2c_structrow_de47e31c_3413;
extern route_node& __m2c_structrow_de47e31c_3414;
extern route_node& __m2c_structrow_de47e31c_3415;
extern route_node& __m2c_structrow_de47e31c_3416;
extern route_node& __m2c_structrow_de47e31c_3417;
extern route_node& __m2c_structrow_de47e31c_3418;
extern route_node& __m2c_structrow_de47e31c_3419;
extern route_node& __m2c_structrow_de47e31c_3420;
extern route_node& __m2c_structrow_de47e31c_3421;
extern route_node& __m2c_structrow_de47e31c_3422;
extern route_node& __m2c_structrow_de47e31c_3423;
extern route_node& __m2c_structrow_de47e31c_3424;
extern route_node& __m2c_structrow_de47e31c_3425;
extern route_node& __m2c_structrow_de47e31c_3426;
extern route_node& __m2c_structrow_de47e31c_3427;
extern route_node& __m2c_structrow_de47e31c_3428;
extern route_node& __m2c_structrow_de47e31c_3429;
extern route_node& __m2c_structrow_de47e31c_3430;
extern route_node& __m2c_structrow_de47e31c_3431;
extern route_node& __m2c_structrow_de47e31c_3432;
extern viewpoint& _m_view;
extern dw& _fuelwt;
extern viewpoint& _exp_view;
extern dw& _expmapzoom;
extern dw& _secscancnt1;
extern dw& _secscanoff1;
extern dw& _secscancnt2;
extern dw& _secscanoff2;
extern dd& _cloudbase;
extern dw& _clouddepth;
extern db& _gndtextenabled;
extern db& _treesenabled;
extern db& _hilltxtenabled;
extern db& _cloudsenabled;
extern db& _starsenabled;
extern db& _gradenabled;
extern db& _overcast;
extern db& _fog;
extern db& _night;
extern db& _panellight;
extern db& _chstick;
extern db& _thrustmaster;
extern dw& _tm_minx;
extern dw& _tm_miny;
extern dw& _tm_midx;
extern dw& _tm_midy;
extern dw& _tm_maxx;
extern dw& _tm_maxy;
extern dw& _tm_cooliecn;
extern dw& _tm_coolielt;
extern dw& _tm_cooliedn;
extern dw& _tm_cooliert;
extern dw& _tm_coolieup;
extern runway_damage (& runwaydamage)[8];
extern word& droneptrs;
extern word& aairdroneptrs;
extern word& eairdroneptrs;
extern word& agnddroneptrs;
extern word& egnddroneptrs;
extern byte& gameplaydata;
extern package& packages;
extern waypoint& waylist;
extern word& airfieldlist;
extern byte& aaircraft1;
extern byte& aaircraft2;
extern byte& aaircraft3;
extern byte& aaircraft4;
extern byte& aaircraft5;
extern byte& aaircraft6;
extern byte& aaircraft7;
extern byte& aaircraft8;
extern byte& aaircraft9;
extern byte& aaircraft10;
extern byte& aaircraft11;
extern byte& aaircraft12;
extern byte& aaircraft13;
extern byte& aaircraft14;
extern byte& aaircraft15;
extern byte& aaircraft16;
extern byte& aaircraft17;
extern byte& ahelicopter1;
extern byte& ahelicopter2;
extern byte& ahelicopter3;
extern byte& ahelicopter4;
extern byte& eaircraft1;
extern byte& eaircraft2;
extern byte& eaircraft3;
extern byte& eaircraft4;
extern byte& eaircraft5;
extern byte& eaircraft6;
extern byte& eaircraft7;
extern byte& eaircraft8;
extern byte& eaircraft9;
extern byte& eaircraft10;
extern byte& eaircraft11;
extern byte& eaircraft12;
extern byte& eaircraft13;
extern byte& eaircraft14;
extern byte& eaircraft15;
extern byte& eaircraft16;
extern byte& eaircraft17;
extern byte& ehelicopter1;
extern byte& ehelicopter2;
extern byte& ehelicopter3;
extern byte& ehelicopter4;
extern word& atruck1route;
extern word& atruck2route;
extern word& etruck1route;
extern word& etruck2route;
extern word& atrain1route;
extern word& atrain2route;
extern word& etrain1route;
extern word& etrain2route;
extern byte& gameplayend;

	
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
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif

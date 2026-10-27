/* THIS IS GENERATED FILE */

        
#ifndef __M2C_WEAPONS_STUBS_H__
#define __M2C_WEAPONS_STUBS_H__

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
  db dummyfe1dabda_default_seg_0_420;
  db dummyfe1dabda_default_seg_0_421;
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

struct gamekey {
  db k_status;
  db k_lock;
  db k_state;
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
static const word dummyfe1dabda_default_seg_0_420 = offsetof(struct endroute, dummyfe1dabda_default_seg_0_420);
static const word dummyfe1dabda_default_seg_0_421 = offsetof(struct endroute, dummyfe1dabda_default_seg_0_421);
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
static const word k_status = offsetof(struct gamekey, k_status);
static const word k_lock = offsetof(struct gamekey, k_lock);
static const word k_state = offsetof(struct gamekey, k_state);


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
static const int gnd_bunkerb = 1;
static const int gnd_citblk1 = 2;
static const int gnd_citblk10 = 3;
static const int gnd_citblk2 = 4;
static const int gnd_citblk3 = 5;
static const int gnd_citblk4 = 6;
static const int gnd_citblk5 = 7;
static const int gnd_citblk6 = 8;
static const int gnd_citblk7 = 9;
static const int gnd_citblk8 = 10;
static const int gnd_citblk9 = 11;
static const int gnd_cooltwr = 12;
static const int gnd_copsea = 13;
static const int gnd_copseb = 14;
static const int gnd_copsec = 15;
static const int gnd_copsed = 16;
static const int gnd_ctwra1 = 17;
static const int gnd_ehasb = 18;
static const int gnd_embe1 = 19;
static const int gnd_embe2 = 20;
static const int gnd_embe3 = 21;
static const int gnd_embe4 = 22;
static const int gnd_embew1 = 23;
static const int gnd_embewe1 = 24;
static const int gnd_embeww1 = 25;
static const int gnd_embnrth2 = 26;
static const int gnd_embnrth3 = 27;
static const int gnd_embnrth4 = 28;
static const int gnd_embns1 = 29;
static const int gnd_embnsn1 = 30;
static const int gnd_embnss1 = 31;
static const int gnd_embnth1 = 32;
static const int gnd_embsth1 = 33;
static const int gnd_embsth2 = 34;
static const int gnd_embsth3 = 35;
static const int gnd_embsth4 = 36;
static const int gnd_embw1 = 37;
static const int gnd_embw2 = 38;
static const int gnd_embw3 = 39;
static const int gnd_embw4 = 40;
static const int gnd_ewr_1 = 41;
static const int gnd_ptank = 42;
static const int gnd_gentanks = 43;
static const int gnd_indchim = 44;
static const int gnd_crater1 = 45;
static const int gnd_crater2 = 46;
static const int gnd_crater3 = 47;
static const int gnd_ilsgld = 48;
static const int gnd_ilsloc09 = 49;
static const int gnd_ilsloc18 = 50;
static const int gnd_ilsloc27 = 51;
static const int gnd_ilsloc36 = 52;
static const int gnd_fuelpt = 53;
static const int gnd_gbmlae = 54;
static const int gnd_gbmlan = 55;
static const int gnd_hasclsd1 = 56;
static const int gnd_hasopen1 = 57;
static const int gnd_mnhan1 = 58;
static const int gnd_mnhane1 = 59;
static const int gnd_mrly1 = 60;
static const int gnd_off1 = 61;
static const int gnd_off2 = 62;
static const int gnd_off3 = 63;
static const int gnd_pbf1 = 64;
static const int gnd_pstnn = 65;
static const int gnd_pwrline = 66;
static const int gnd_pwrlinn = 67;
static const int gnd_rdbrgew1 = 68;
static const int gnd_rdbrgn1 = 69;
static const int gnd_rdsbrge1 = 70;
static const int gnd_rdsbrgn1 = 71;
static const int gnd_rlbraew1 = 72;
static const int gnd_rlbram1 = 73;
static const int gnd_rlbrbew1 = 74;
static const int gnd_rlbrbnm1 = 75;
static const int gnd_station = 76;
static const int gnd_tvmast = 77;
static const int gnd_unita1 = 78;
static const int gnd_unitb1 = 79;
static const int gnd_unitc1 = 80;
static const int gnd_wtower = 81;
static const int gnd_flyote1 = 82;
static const int gnd_flyote2 = 83;
static const int gnd_flyotn1 = 84;
static const int gnd_flyotn2 = 85;
static const int gnd_flyots1 = 86;
static const int gnd_flyots2 = 87;
static const int gnd_flyotw1 = 88;
static const int gnd_flyotw2 = 89;
static const int gnd_camtent = 90;
static const int gnd_munstor = 91;
static const int gnd_vstre0 = 92;
static const int gnd_vstrn1 = 93;
static const int gnd_vstrs1 = 94;
static const int gnd_vstrw1 = 95;
static const int gnd_pwrlntn = 96;
static const int gnd_pwrlnts = 97;
static const int gnd_pwrlnte = 98;
static const int gnd_pwrlntw = 99;
static const int gnd_rbewd = 100;
static const int gnd_rbnsd = 101;
static const int gnd_rlbewd = 102;
static const int gnd_rlbnsd = 103;
static const int gnd_embcrater = 104;
static const int nul = 0;
static const int del = 8;
static const int ent = 13;
static const int escp = 27;
static const int k_esc = 1;
static const int k_space = 57;
static const int k_del1 = 14;
static const int k_del2 = 83;
static const int k_del3 = 75;
static const int k_sysreq = 84;
static const int k_numlock = 69;
static const int k_capslock = 58;
static const int k_ctrl = 29;
static const int k_shift = 42;
static const int k_shift1 = 42;
static const int k_shift2 = 54;
static const int k_enter = 28;
static const int k_backspace = 14;
static const int k_alt = 56;
static const int k_tab = 15;
static const int k_plus = 13;
static const int k_minus = 12;
static const int k_lessthan = 51;
static const int k_grtrthan = 52;
static const int k_hash = 43;
static const int k_opn_sq_brkt = 26;
static const int k_cls_sq_brkt = 27;
static const int k_apostrophe = 40;
static const int k_semicolon = 39;
static const int k_backslash = 86;
static const int k_pad_ins = 82;
static const int k_pad_del = 83;
static const int k_pad_plus = 78;
static const int k_pad_minus = 74;
static const int k_pad_star = 55;
static const int k_home = 71;
static const int k_end = 79;
static const int k_pgup = 73;
static const int k_pgdn = 81;
static const int k_crsrlf = 75;
static const int k_crsrrt = 77;
static const int k_crsrup = 72;
static const int k_crsrdn = 80;
static const int k_centre = 76;
static const int k_mouself = 71;
static const int k_mousert = 73;
static const int k_ams_joylf = 122;
static const int k_ams_joyrt = 121;
static const int k_ams_joyup = 124;
static const int k_ams_joydn = 123;
static const int k_ams_joyf1 = 120;
static const int k_ams_joyf2 = 119;
static const int k_ams_mouself = 126;
static const int k_ams_mousert = 125;
static const int k_1 = 2;
static const int k_2 = 3;
static const int k_3 = 4;
static const int k_4 = 5;
static const int k_5 = 6;
static const int k_6 = 7;
static const int k_7 = 8;
static const int k_8 = 9;
static const int k_9 = 10;
static const int k_0 = 11;
static const int k_f1 = 59;
static const int k_f2 = 60;
static const int k_f3 = 61;
static const int k_f4 = 62;
static const int k_f5 = 63;
static const int k_f6 = 64;
static const int k_f7 = 65;
static const int k_f8 = 66;
static const int k_f9 = 67;
static const int k_f10 = 68;
static const int k_f11 = 87;
static const int k_f12 = 88;
static const int k_a = 30;
static const int k_b = 48;
static const int k_c = 46;
static const int k_d = 32;
static const int k_e = 18;
static const int k_f = 33;
static const int k_g = 34;
static const int k_h = 35;
static const int k_i = 23;
static const int k_j = 36;
static const int k_k = 37;
static const int k_l = 38;
static const int k_m = 50;
static const int k_n = 49;
static const int k_o = 24;
static const int k_p = 25;
static const int k_q = 16;
static const int k_r = 19;
static const int k_s = 31;
static const int k_t = 20;
static const int k_u = 22;
static const int k_v = 47;
static const int k_w = 17;
static const int k_x = 45;
static const int k_y = 21;
static const int k_z = 44;
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
static const int bl755_bomblets = 6;
static const int jp233_bomblets = 15;
static const int jp233_period = 4*100;
static const int cannon_rate = 16;
static const int muzzle_velocity = 3363*8;
static const int shell_lifetime = 3*100;
static const int side_max_speed = 3000*8;
static const int side_burntime = 2*100;
static const int side_accel = 1500*8;
static const int sky_max_speed = 4000*8;
static const int sky_burntime = 7*100;
static const int sky_accel = 571*8;
static const int alarm_max_speed = 2000*8;
static const int alarm_min_speed = 40*8;
static const int alarm_stl_speed = 200*8;
static const int alarm_burntime = 10*100;
static const int alarm_accel = 200*8;
static const int target_alt = 0;
static const int clearance_alt = 200;
static const int release_alt = 1000;
static const int cruise_alt = 5000;
static const int loiter_alt = 10000;
static const int kill_range = 4000;
static const int zoom_range = 6000;
static const int sam_min_speed = 1000*8;
static const int sam_max_speed = 2500*8;
static const int sam_burntime = 3*100;
static const int sam_accel = 500*8;
static const int chaff_life = 5*100;
static const int flare_life = 5*100;
static const int chaff_retard = 16384;
static const int flare_retard = 24576;

	#define M2C_MODULE_WEAPONS 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
#ifndef M2C_CODE_EQUATE_initweapons
#define M2C_CODE_EQUATE_initweapons 1
static const dd kinitweapons = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_skipboz
#define M2C_CODE_EQUATE_skipboz 1
static const dd kskipboz = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_skipskyshadow
#define M2C_CODE_EQUATE_skipskyshadow 1
static const dd kskipskyshadow = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_packageok
#define M2C_CODE_EQUATE_packageok 1
static const dd kpackageok = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_calcstoreswt
#define M2C_CODE_EQUATE_calcstoreswt 1
static const dd kcalcstoreswt = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_updateweapons
#define M2C_CODE_EQUATE_updateweapons 1
static const dd kupdateweapons = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_updateloop
#define M2C_CODE_EQUATE_updateloop 1
static const dd kupdateloop = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_updatenext
#define M2C_CODE_EQUATE_updatenext 1
static const dd kupdatenext = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_contsplash
#define M2C_CODE_EQUATE_contsplash 1
static const dd kcontsplash = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_contairburst
#define M2C_CODE_EQUATE_contairburst 1
static const dd kcontairburst = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_contupdate
#define M2C_CODE_EQUATE_contupdate 1
static const dd kcontupdate = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_updatesplash
#define M2C_CODE_EQUATE_updatesplash 1
static const dd kupdatesplash = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_updateairburst
#define M2C_CODE_EQUATE_updateairburst 1
static const dd kupdateairburst = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_updategpb
#define M2C_CODE_EQUATE_updategpb 1
static const dd kupdategpb = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_bombballistics
#define M2C_CODE_EQUATE_bombballistics 1
static const dd kbombballistics = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_exitgpb
#define M2C_CODE_EQUATE_exitgpb 1
static const dd kexitgpb = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_grounddamage
#define M2C_CODE_EQUATE_grounddamage 1
static const dd kgrounddamage = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_updateret
#define M2C_CODE_EQUATE_updateret 1
static const dd kupdateret = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_exitret
#define M2C_CODE_EQUATE_exitret 1
static const dd kexitret = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_updatelgb
#define M2C_CODE_EQUATE_updatelgb 1
static const dd kupdatelgb = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_unguidedlgb
#define M2C_CODE_EQUATE_unguidedlgb 1
static const dd kunguidedlgb = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_lgbguidance
#define M2C_CODE_EQUATE_lgbguidance 1
static const dd klgbguidance = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_exitlgb
#define M2C_CODE_EQUATE_exitlgb 1
static const dd kexitlgb = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_updatebl755
#define M2C_CODE_EQUATE_updatebl755 1
static const dd kupdatebl755 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_skipfragment
#define M2C_CODE_EQUATE_skipfragment 1
static const dd kskipfragment = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_contfragment
#define M2C_CODE_EQUATE_contfragment 1
static const dd kcontfragment = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_createbomblet
#define M2C_CODE_EQUATE_createbomblet 1
static const dd kcreatebomblet = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_exitbl755
#define M2C_CODE_EQUATE_exitbl755 1
static const dd kexitbl755 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_updatejp233
#define M2C_CODE_EQUATE_updatejp233 1
static const dd kupdatejp233 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_exitjp233
#define M2C_CODE_EQUATE_exitjp233 1
static const dd kexitjp233 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_updatealarm
#define M2C_CODE_EQUATE_updatealarm 1
static const dd kupdatealarm = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_alarmdirect
#define M2C_CODE_EQUATE_alarmdirect 1
static const dd kalarmdirect = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_checkalarmtimer
#define M2C_CODE_EQUATE_checkalarmtimer 1
static const dd kcheckalarmtimer = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_switchtozoom
#define M2C_CODE_EQUATE_switchtozoom 1
static const dd kswitchtozoom = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_alarmguidance
#define M2C_CODE_EQUATE_alarmguidance 1
static const dd kalarmguidance = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_switchtokill
#define M2C_CODE_EQUATE_switchtokill 1
static const dd kswitchtokill = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_alarmmovement
#define M2C_CODE_EQUATE_alarmmovement 1
static const dd kalarmmovement = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_alarmdamage
#define M2C_CODE_EQUATE_alarmdamage 1
static const dd kalarmdamage = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_exitalarm
#define M2C_CODE_EQUATE_exitalarm 1
static const dd kexitalarm = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_alarmkill
#define M2C_CODE_EQUATE_alarmkill 1
static const dd kalarmkill = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_intokill
#define M2C_CODE_EQUATE_intokill 1
static const dd kintokill = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_alarmguide
#define M2C_CODE_EQUATE_alarmguide 1
static const dd kalarmguide = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_alarmzoom
#define M2C_CODE_EQUATE_alarmzoom 1
static const dd kalarmzoom = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_switchtoloiter
#define M2C_CODE_EQUATE_switchtoloiter 1
static const dd kswitchtoloiter = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_16_skip 1
static const dd k__m2c_macrolocal_16_skip = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_17_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_17_skip 1
static const dd k__m2c_macrolocal_17_skip = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_alarmguideabove
#define M2C_CODE_EQUATE_alarmguideabove 1
static const dd kalarmguideabove = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_intozoom
#define M2C_CODE_EQUATE_intozoom 1
static const dd kintozoom = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_alarmfreefall
#define M2C_CODE_EQUATE_alarmfreefall 1
static const dd kalarmfreefall = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_alarmguidebelow
#define M2C_CODE_EQUATE_alarmguidebelow 1
static const dd kalarmguidebelow = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_intofreefall
#define M2C_CODE_EQUATE_intofreefall 1
static const dd kintofreefall = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_20_skip 1
static const dd k__m2c_macrolocal_20_skip = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_alarmloiter
#define M2C_CODE_EQUATE_alarmloiter 1
static const dd kalarmloiter = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_contloiter
#define M2C_CODE_EQUATE_contloiter 1
static const dd kcontloiter = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_21_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_21_skip 1
static const dd k__m2c_macrolocal_21_skip = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_switchtofree
#define M2C_CODE_EQUATE_switchtofree 1
static const dd kswitchtofree = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_alarmradarscan
#define M2C_CODE_EQUATE_alarmradarscan 1
static const dd kalarmradarscan = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_23_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_23_skip 1
static const dd k__m2c_macrolocal_23_skip = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_switchtodive
#define M2C_CODE_EQUATE_switchtodive 1
static const dd kswitchtodive = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_intoloiter
#define M2C_CODE_EQUATE_intoloiter 1
static const dd kintoloiter = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_alarmdive
#define M2C_CODE_EQUATE_alarmdive 1
static const dd kalarmdive = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_intodive
#define M2C_CODE_EQUATE_intodive 1
static const dd kintodive = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_updatecannon
#define M2C_CODE_EQUATE_updatecannon 1
static const dd kupdatecannon = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_exitcannon
#define M2C_CODE_EQUATE_exitcannon 1
static const dd kexitcannon = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_shellballistics
#define M2C_CODE_EQUATE_shellballistics 1
static const dd kshellballistics = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_updatemissile
#define M2C_CODE_EQUATE_updatemissile 1
static const dd kupdatemissile = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_25_skip 1
static const dd k__m2c_macrolocal_25_skip = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_misstimerok
#define M2C_CODE_EQUATE_misstimerok 1
static const dd kmisstimerok = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_wpnhittarget
#define M2C_CODE_EQUATE_wpnhittarget 1
static const dd kwpnhittarget = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_exitmissile
#define M2C_CODE_EQUATE_exitmissile 1
static const dd kexitmissile = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_contburnout
#define M2C_CODE_EQUATE_contburnout 1
static const dd kcontburnout = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_missileguidance
#define M2C_CODE_EQUATE_missileguidance 1
static const dd kmissileguidance = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_updatedecoy
#define M2C_CODE_EQUATE_updatedecoy 1
static const dd kupdatedecoy = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_exitdecoy
#define M2C_CODE_EQUATE_exitdecoy 1
static const dd kexitdecoy = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_bombhitgnd
#define M2C_CODE_EQUATE_bombhitgnd 1
static const dd kbombhitgnd = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_contbombball
#define M2C_CODE_EQUATE_contbombball 1
static const dd kcontbombball = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy1 1
static const dd k__m2c_macrolocal_30_mvxy1 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy2 1
static const dd k__m2c_macrolocal_30_mvxy2 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy3 1
static const dd k__m2c_macrolocal_30_mvxy3 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_30_mvxy4 1
static const dd k__m2c_macrolocal_30_mvxy4 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_setbombpitch
#define M2C_CODE_EQUATE_setbombpitch 1
static const dd ksetbombpitch = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_bombimpact
#define M2C_CODE_EQUATE_bombimpact 1
static const dd kbombimpact = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_calclgbvel
#define M2C_CODE_EQUATE_calclgbvel 1
static const dd kcalclgbvel = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_intolgbvel
#define M2C_CODE_EQUATE_intolgbvel 1
static const dd kintolgbvel = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy1 1
static const dd k__m2c_macrolocal_42_mvxy1 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy2 1
static const dd k__m2c_macrolocal_42_mvxy2 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy3 1
static const dd k__m2c_macrolocal_42_mvxy3 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_42_mvxy4 1
static const dd k__m2c_macrolocal_42_mvxy4 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_43_skip 1
static const dd k__m2c_macrolocal_43_skip = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_lgbimpact
#define M2C_CODE_EQUATE_lgbimpact 1
static const dd klgbimpact = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_44_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_44_skip 1
static const dd k__m2c_macrolocal_44_skip = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_45_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_45_skip 1
static const dd k__m2c_macrolocal_45_skip = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_nolaser
#define M2C_CODE_EQUATE_nolaser 1
static const dd knolaser = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_46_skip 1
static const dd k__m2c_macrolocal_46_skip = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_47_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_47_skip 1
static const dd k__m2c_macrolocal_47_skip = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_48_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_48_skip 1
static const dd k__m2c_macrolocal_48_skip = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_calclgbpitch1
#define M2C_CODE_EQUATE_calclgbpitch1 1
static const dd kcalclgbpitch1 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_calclgbpitch2
#define M2C_CODE_EQUATE_calclgbpitch2 1
static const dd kcalclgbpitch2 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_lgbhdgerror
#define M2C_CODE_EQUATE_lgbhdgerror 1
static const dd klgbhdgerror = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_calclgbrate
#define M2C_CODE_EQUATE_calclgbrate 1
static const dd kcalclgbrate = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_nolgbflip
#define M2C_CODE_EQUATE_nolgbflip 1
static const dd knolgbflip = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_sortlgbangles
#define M2C_CODE_EQUATE_sortlgbangles 1
static const dd ksortlgbangles = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_sortlgbhdg
#define M2C_CODE_EQUATE_sortlgbhdg 1
static const dd ksortlgbhdg = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_56_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_56_skip 1
static const dd k__m2c_macrolocal_56_skip = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_shellhitgnd
#define M2C_CODE_EQUATE_shellhitgnd 1
static const dd kshellhitgnd = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_contshellball
#define M2C_CODE_EQUATE_contshellball 1
static const dd kcontshellball = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy1 1
static const dd k__m2c_macrolocal_59_mvxy1 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy2 1
static const dd k__m2c_macrolocal_59_mvxy2 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy3 1
static const dd k__m2c_macrolocal_59_mvxy3 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_59_mvxy4 1
static const dd k__m2c_macrolocal_59_mvxy4 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_60_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_60_skip 1
static const dd k__m2c_macrolocal_60_skip = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_shellimpact
#define M2C_CODE_EQUATE_shellimpact 1
static const dd kshellimpact = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_shellok
#define M2C_CODE_EQUATE_shellok 1
static const dd kshellok = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_scanmobloop
#define M2C_CODE_EQUATE_scanmobloop 1
static const dd kscanmobloop = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_skipmob
#define M2C_CODE_EQUATE_skipmob 1
static const dd kskipmob = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_alarmtimerok
#define M2C_CODE_EQUATE_alarmtimerok 1
static const dd kalarmtimerok = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_alarmendlife
#define M2C_CODE_EQUATE_alarmendlife 1
static const dd kalarmendlife = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_setalarmvel
#define M2C_CODE_EQUATE_setalarmvel 1
static const dd ksetalarmvel = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_67_testhi 1
static const dd k__m2c_macrolocal_67_testhi = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_67_testok 1
static const dd k__m2c_macrolocal_67_testok = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_68_skip 1
static const dd k__m2c_macrolocal_68_skip = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_alarmguideok
#define M2C_CODE_EQUATE_alarmguideok 1
static const dd kalarmguideok = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_70_skip 1
static const dd k__m2c_macrolocal_70_skip = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_alarmguideover
#define M2C_CODE_EQUATE_alarmguideover 1
static const dd kalarmguideover = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_alarmaimpitch1
#define M2C_CODE_EQUATE_alarmaimpitch1 1
static const dd kalarmaimpitch1 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_alarmaimpitch2
#define M2C_CODE_EQUATE_alarmaimpitch2 1
static const dd kalarmaimpitch2 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_contalarmpitch
#define M2C_CODE_EQUATE_contalarmpitch 1
static const dd kcontalarmpitch = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy1 1
static const dd k__m2c_macrolocal_80_mvxy1 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy2 1
static const dd k__m2c_macrolocal_80_mvxy2 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy3 1
static const dd k__m2c_macrolocal_80_mvxy3 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_80_mvxy4 1
static const dd k__m2c_macrolocal_80_mvxy4 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_queque002e
#define M2C_CODE_EQUATE_queque002e 1
static const dd kqueque002e = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_queque0030
#define M2C_CODE_EQUATE_queque0030 1
static const dd kqueque0030 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_84_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_84_skip 1
static const dd k__m2c_macrolocal_84_skip = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_alarmhitgnd
#define M2C_CODE_EQUATE_alarmhitgnd 1
static const dd kalarmhitgnd = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_contalarmmove
#define M2C_CODE_EQUATE_contalarmmove 1
static const dd kcontalarmmove = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy1 1
static const dd k__m2c_macrolocal_87_mvxy1 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy2 1
static const dd k__m2c_macrolocal_87_mvxy2 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy3 1
static const dd k__m2c_macrolocal_87_mvxy3 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_87_mvxy4 1
static const dd k__m2c_macrolocal_87_mvxy4 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_alarmimpact
#define M2C_CODE_EQUATE_alarmimpact 1
static const dd kalarmimpact = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_90_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_90_skip 1
static const dd k__m2c_macrolocal_90_skip = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_alarmradarfail
#define M2C_CODE_EQUATE_alarmradarfail 1
static const dd kalarmradarfail = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_91_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_91_skip 1
static const dd k__m2c_macrolocal_91_skip = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_noradartargets
#define M2C_CODE_EQUATE_noradartargets 1
static const dd knoradartargets = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_92_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_92_skip 1
static const dd k__m2c_macrolocal_92_skip = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop1
#define M2C_CODE_EQUATE_scanyloop1 1
static const dd kscanyloop1 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop1
#define M2C_CODE_EQUATE_scanxloop1 1
static const dd kscanxloop1 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_scannextsctr1
#define M2C_CODE_EQUATE_scannextsctr1 1
static const dd kscannextsctr1 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_scanmobiles
#define M2C_CODE_EQUATE_scanmobiles 1
static const dd kscanmobiles = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_aerialactivity
#define M2C_CODE_EQUATE_aerialactivity 1
static const dd kaerialactivity = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop2
#define M2C_CODE_EQUATE_scanyloop2 1
static const dd kscanyloop2 = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop2
#define M2C_CODE_EQUATE_scanxloop2 1
static const dd kscanxloop2 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_93_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_93_skip 1
static const dd k__m2c_macrolocal_93_skip = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_scannextsctr2
#define M2C_CODE_EQUATE_scannextsctr2 1
static const dd kscannextsctr2 = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_94_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_94_skip 1
static const dd k__m2c_macrolocal_94_skip = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_95_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_95_skip 1
static const dd k__m2c_macrolocal_95_skip = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_contewrscan
#define M2C_CODE_EQUATE_contewrscan 1
static const dd kcontewrscan = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_skipsamscan
#define M2C_CODE_EQUATE_skipsamscan 1
static const dd kskipsamscan = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_scansamloop
#define M2C_CODE_EQUATE_scansamloop 1
static const dd kscansamloop = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_exitsamloop
#define M2C_CODE_EQUATE_exitsamloop 1
static const dd kexitsamloop = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_checkradartgt
#define M2C_CODE_EQUATE_checkradartgt 1
static const dd kcheckradartgt = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_skipaaascan
#define M2C_CODE_EQUATE_skipaaascan 1
static const dd kskipaaascan = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_scanaaaloop
#define M2C_CODE_EQUATE_scanaaaloop 1
static const dd kscanaaaloop = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_scanewrloop
#define M2C_CODE_EQUATE_scanewrloop 1
static const dd kscanewrloop = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_ewrfound
#define M2C_CODE_EQUATE_ewrfound 1
static const dd kewrfound = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_sortmobileewr
#define M2C_CODE_EQUATE_sortmobileewr 1
static const dd ksortmobileewr = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_sortgroundewr
#define M2C_CODE_EQUATE_sortgroundewr 1
static const dd ksortgroundewr = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_ewrdead
#define M2C_CODE_EQUATE_ewrdead 1
static const dd kewrdead = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_ewrok
#define M2C_CODE_EQUATE_ewrok 1
static const dd kewrok = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_97_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_97_skip 1
static const dd k__m2c_macrolocal_97_skip = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_98_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_98_skip 1
static const dd k__m2c_macrolocal_98_skip = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_alarmradarpass
#define M2C_CODE_EQUATE_alarmradarpass 1
static const dd kalarmradarpass = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_exitradartgt
#define M2C_CODE_EQUATE_exitradartgt 1
static const dd kexitradartgt = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_100_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_100_skip 1
static const dd k__m2c_macrolocal_100_skip = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_movemissile
#define M2C_CODE_EQUATE_movemissile 1
static const dd kmovemissile = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_101_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_101_skip 1
static const dd k__m2c_macrolocal_101_skip = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_missloselock
#define M2C_CODE_EQUATE_missloselock 1
static const dd kmissloselock = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_sortradarlock
#define M2C_CODE_EQUATE_sortradarlock 1
static const dd ksortradarlock = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_checkirlock
#define M2C_CODE_EQUATE_checkirlock 1
static const dd kcheckirlock = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_102_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_102_skip 1
static const dd k__m2c_macrolocal_102_skip = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_skipdecoy
#define M2C_CODE_EQUATE_skipdecoy 1
static const dd kskipdecoy = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_misslockok
#define M2C_CODE_EQUATE_misslockok 1
static const dd kmisslockok = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_104_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_104_skip 1
static const dd k__m2c_macrolocal_104_skip = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_106_skip 1
static const dd k__m2c_macrolocal_106_skip = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_missaimpitch1
#define M2C_CODE_EQUATE_missaimpitch1 1
static const dd kmissaimpitch1 = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_missaimpitch2
#define M2C_CODE_EQUATE_missaimpitch2 1
static const dd kmissaimpitch2 = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_contmisspitch
#define M2C_CODE_EQUATE_contmisspitch 1
static const dd kcontmisspitch = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skip 1
static const dd k__m2c_macrolocal_115_skip = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_missilehitgnd
#define M2C_CODE_EQUATE_missilehitgnd 1
static const dd kmissilehitgnd = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_contmissmove
#define M2C_CODE_EQUATE_contmissmove 1
static const dd kcontmissmove = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy1 1
static const dd k__m2c_macrolocal_118_mvxy1 = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy2 1
static const dd k__m2c_macrolocal_118_mvxy2 = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy3 1
static const dd k__m2c_macrolocal_118_mvxy3 = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_118_mvxy4 1
static const dd k__m2c_macrolocal_118_mvxy4 = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_119_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_119_skip 1
static const dd k__m2c_macrolocal_119_skip = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_missileimpact
#define M2C_CODE_EQUATE_missileimpact 1
static const dd kmissileimpact = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skip 1
static const dd k__m2c_macrolocal_120_skip = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_121_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_121_skip 1
static const dd k__m2c_macrolocal_121_skip = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_missileok
#define M2C_CODE_EQUATE_missileok 1
static const dd kmissileok = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_122_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_122_skip 1
static const dd k__m2c_macrolocal_122_skip = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_findavailweapon
#define M2C_CODE_EQUATE_findavailweapon 1
static const dd kfindavailweapon = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE_exitbomblet
#define M2C_CODE_EQUATE_exitbomblet 1
static const dd kexitbomblet = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_explosoundok
#define M2C_CODE_EQUATE_explosoundok 1
static const dd kexplosoundok = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_contcrater
#define M2C_CODE_EQUATE_contcrater 1
static const dd kcontcrater = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_storeimpact
#define M2C_CODE_EQUATE_storeimpact 1
static const dd kstoreimpact = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_proximitykill
#define M2C_CODE_EQUATE_proximitykill 1
static const dd kproximitykill = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_weaponsplash
#define M2C_CODE_EQUATE_weaponsplash 1
static const dd kweaponsplash = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_contheave
#define M2C_CODE_EQUATE_contheave 1
static const dd kcontheave = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_recordrwydamage
#define M2C_CODE_EQUATE_recordrwydamage 1
static const dd krecordrwydamage = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_rwyloop
#define M2C_CODE_EQUATE_rwyloop 1
static const dd krwyloop = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_newrwy
#define M2C_CODE_EQUATE_newrwy 1
static const dd knewrwy = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_nextrwy
#define M2C_CODE_EQUATE_nextrwy 1
static const dd knextrwy = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_samerwy
#define M2C_CODE_EQUATE_samerwy 1
static const dd ksamerwy = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_exitrwydamage
#define M2C_CODE_EQUATE_exitrwydamage 1
static const dd kexitrwydamage = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_wpnhitsound
#define M2C_CODE_EQUATE_wpnhitsound 1
static const dd kwpnhitsound = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE_wpnhitsmoke
#define M2C_CODE_EQUATE_wpnhitsmoke 1
static const dd kwpnhitsmoke = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_128_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_128_skip 1
static const dd k__m2c_macrolocal_128_skip = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_130_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_130_skip 1
static const dd k__m2c_macrolocal_130_skip = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE_createairburst
#define M2C_CODE_EQUATE_createairburst 1
static const dd kcreateairburst = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE_exitsplash
#define M2C_CODE_EQUATE_exitsplash 1
static const dd kexitsplash = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_weaponscontrol
#define M2C_CODE_EQUATE_weaponscontrol 1
static const dd kweaponscontrol = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_131_skip 1
static const dd k__m2c_macrolocal_131_skip = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_132_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_132_skip 1
static const dd k__m2c_macrolocal_132_skip = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE_latearmswitch
#define M2C_CODE_EQUATE_latearmswitch 1
static const dd klatearmswitch = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE_skiparmoff
#define M2C_CODE_EQUATE_skiparmoff 1
static const dd kskiparmoff = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_skiparmgnd
#define M2C_CODE_EQUATE_skiparmgnd 1
static const dd kskiparmgnd = 0x115c;
#endif
#ifndef M2C_CODE_EQUATE_skiparmair
#define M2C_CODE_EQUATE_skiparmair 1
static const dd kskiparmair = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_selectairwpn
#define M2C_CODE_EQUATE_selectairwpn 1
static const dd kselectairwpn = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_skippackage
#define M2C_CODE_EQUATE_skippackage 1
static const dd kskippackage = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_selectnextpack
#define M2C_CODE_EQUATE_selectnextpack 1
static const dd kselectnextpack = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_139_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_139_skip 1
static const dd k__m2c_macrolocal_139_skip = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_140_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_140_skip 1
static const dd k__m2c_macrolocal_140_skip = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_141_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_141_skip 1
static const dd k__m2c_macrolocal_141_skip = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_setwpnmode
#define M2C_CODE_EQUATE_setwpnmode 1
static const dd ksetwpnmode = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE_skiplatearm
#define M2C_CODE_EQUATE_skiplatearm 1
static const dd kskiplatearm = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_setlatearm
#define M2C_CODE_EQUATE_setlatearm 1
static const dd ksetlatearm = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE_armmanual
#define M2C_CODE_EQUATE_armmanual 1
static const dd karmmanual = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_calcthrow
#define M2C_CODE_EQUATE_calcthrow 1
static const dd kcalcthrow = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE_calcbombccip
#define M2C_CODE_EQUATE_calcbombccip 1
static const dd kcalcbombccip = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_skipmanual
#define M2C_CODE_EQUATE_skipmanual 1
static const dd kskipmanual = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_releasepackage
#define M2C_CODE_EQUATE_releasepackage 1
static const dd kreleasepackage = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE_armok
#define M2C_CODE_EQUATE_armok 1
static const dd karmok = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_armlaydown
#define M2C_CODE_EQUATE_armlaydown 1
static const dd karmlaydown = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_skiplaydown
#define M2C_CODE_EQUATE_skiplaydown 1
static const dd kskiplaydown = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_145_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_145_skip 1
static const dd k__m2c_macrolocal_145_skip = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_146_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_146_skip 1
static const dd k__m2c_macrolocal_146_skip = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_147_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_147_skip 1
static const dd k__m2c_macrolocal_147_skip = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_148_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_148_skip 1
static const dd k__m2c_macrolocal_148_skip = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_149_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_149_skip 1
static const dd k__m2c_macrolocal_149_skip = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_armloft
#define M2C_CODE_EQUATE_armloft 1
static const dd karmloft = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE_skiploft
#define M2C_CODE_EQUATE_skiploft 1
static const dd kskiploft = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_contpullup
#define M2C_CODE_EQUATE_contpullup 1
static const dd kcontpullup = 0x1180;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE_loftcommit
#define M2C_CODE_EQUATE_loftcommit 1
static const dd kloftcommit = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_155_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_155_skip 1
static const dd k__m2c_macrolocal_155_skip = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_156_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_156_skip 1
static const dd k__m2c_macrolocal_156_skip = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_157_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_157_skip 1
static const dd k__m2c_macrolocal_157_skip = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_158_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_158_skip 1
static const dd k__m2c_macrolocal_158_skip = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_159_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_159_skip 1
static const dd k__m2c_macrolocal_159_skip = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE_armlaserguided
#define M2C_CODE_EQUATE_armlaserguided 1
static const dd karmlaserguided = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE_skiplaserguided
#define M2C_CODE_EQUATE_skiplaserguided 1
static const dd kskiplaserguided = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE_armjp233
#define M2C_CODE_EQUATE_armjp233 1
static const dd karmjp233 = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_166_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_166_skip 1
static const dd k__m2c_macrolocal_166_skip = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_contjp233
#define M2C_CODE_EQUATE_contjp233 1
static const dd kcontjp233 = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_skipjp233
#define M2C_CODE_EQUATE_skipjp233 1
static const dd kskipjp233 = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_168_skip 1
static const dd k__m2c_macrolocal_168_skip = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_169_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_169_skip 1
static const dd k__m2c_macrolocal_169_skip = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_170_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_170_skip 1
static const dd k__m2c_macrolocal_170_skip = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_171_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_171_skip 1
static const dd k__m2c_macrolocal_171_skip = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_172_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_172_skip 1
static const dd k__m2c_macrolocal_172_skip = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_176_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_176_skip 1
static const dd k__m2c_macrolocal_176_skip = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_177_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_177_skip 1
static const dd k__m2c_macrolocal_177_skip = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE_armalarmdir
#define M2C_CODE_EQUATE_armalarmdir 1
static const dd karmalarmdir = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_181_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_181_skip 1
static const dd k__m2c_macrolocal_181_skip = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_skipalarmdir
#define M2C_CODE_EQUATE_skipalarmdir 1
static const dd kskipalarmdir = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_182_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_182_skip 1
static const dd k__m2c_macrolocal_182_skip = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_threatloop
#define M2C_CODE_EQUATE_threatloop 1
static const dd kthreatloop = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE_nextthreat
#define M2C_CODE_EQUATE_nextthreat 1
static const dd knextthreat = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_184_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_184_skip 1
static const dd k__m2c_macrolocal_184_skip = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE_launchalarm
#define M2C_CODE_EQUATE_launchalarm 1
static const dd klaunchalarm = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_armalarmind
#define M2C_CODE_EQUATE_armalarmind 1
static const dd karmalarmind = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE_skipalarmind
#define M2C_CODE_EQUATE_skipalarmind 1
static const dd kskipalarmind = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_armcannon
#define M2C_CODE_EQUATE_armcannon 1
static const dd karmcannon = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE_contcannon
#define M2C_CODE_EQUATE_contcannon 1
static const dd kcontcannon = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE_skipcannon
#define M2C_CODE_EQUATE_skipcannon 1
static const dd kskipcannon = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_190_skip 1
static const dd k__m2c_macrolocal_190_skip = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE_firecannon
#define M2C_CODE_EQUATE_firecannon 1
static const dd kfirecannon = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE_armsidewinder
#define M2C_CODE_EQUATE_armsidewinder 1
static const dd karmsidewinder = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_skipsidewinder
#define M2C_CODE_EQUATE_skipsidewinder 1
static const dd kskipsidewinder = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_launchmissile
#define M2C_CODE_EQUATE_launchmissile 1
static const dd klaunchmissile = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_armskyflash
#define M2C_CODE_EQUATE_armskyflash 1
static const dd karmskyflash = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_skipskyflash
#define M2C_CODE_EQUATE_skipskyflash 1
static const dd kskipskyflash = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_skipchaff
#define M2C_CODE_EQUATE_skipchaff 1
static const dd kskipchaff = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_releasedecoy
#define M2C_CODE_EQUATE_releasedecoy 1
static const dd kreleasedecoy = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE_skipflare
#define M2C_CODE_EQUATE_skipflare 1
static const dd kskipflare = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE_exitnextpack
#define M2C_CODE_EQUATE_exitnextpack 1
static const dd kexitnextpack = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE_nextpackloop
#define M2C_CODE_EQUATE_nextpackloop 1
static const dd knextpackloop = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_195_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_195_skip 1
static const dd k__m2c_macrolocal_195_skip = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE_exitairwpn
#define M2C_CODE_EQUATE_exitairwpn 1
static const dd kexitairwpn = 0x11be;
#endif
#ifndef M2C_CODE_EQUATE_setairwpn
#define M2C_CODE_EQUATE_setairwpn 1
static const dd ksetairwpn = 0x11bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x11c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x11c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x11c2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x11c3;
#endif
#ifndef M2C_CODE_EQUATE_retardbombvel
#define M2C_CODE_EQUATE_retardbombvel 1
static const dd kretardbombvel = 0x11c4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x11c5;
#endif
#ifndef M2C_CODE_EQUATE_calcpitchdown
#define M2C_CODE_EQUATE_calcpitchdown 1
static const dd kcalcpitchdown = 0x11c6;
#endif
#ifndef M2C_CODE_EQUATE_contthrow
#define M2C_CODE_EQUATE_contthrow 1
static const dd kcontthrow = 0x11c7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x11c8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x11c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x11ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x11cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x11cc;
#endif
#ifndef M2C_CODE_EQUATE_scaleok
#define M2C_CODE_EQUATE_scaleok 1
static const dd kscaleok = 0x11cd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x11ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x11cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x11d0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x11d1;
#endif
#ifndef M2C_CODE_EQUATE_releasebomb
#define M2C_CODE_EQUATE_releasebomb 1
static const dd kreleasebomb = 0x11d2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x11d3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x11d4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_206_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_206_skip 1
static const dd k__m2c_macrolocal_206_skip = 0x11d5;
#endif
#ifndef M2C_CODE_EQUATE_exitrelbomb
#define M2C_CODE_EQUATE_exitrelbomb 1
static const dd kexitrelbomb = 0x11d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x11d7;
#endif
#ifndef M2C_CODE_EQUATE_skiplgbrelease
#define M2C_CODE_EQUATE_skiplgbrelease 1
static const dd kskiplgbrelease = 0x11d8;
#endif
#ifndef M2C_CODE_EQUATE_contlgbrelease
#define M2C_CODE_EQUATE_contlgbrelease 1
static const dd kcontlgbrelease = 0x11d9;
#endif
#ifndef M2C_CODE_EQUATE_contrelbomb
#define M2C_CODE_EQUATE_contrelbomb 1
static const dd kcontrelbomb = 0x11da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x11db;
#endif
#ifndef M2C_CODE_EQUATE_hvelok
#define M2C_CODE_EQUATE_hvelok 1
static const dd khvelok = 0x11dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x11dd;
#endif
#ifndef M2C_CODE_EQUATE_vvelok
#define M2C_CODE_EQUATE_vvelok 1
static const dd kvvelok = 0x11de;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x11df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x11e0;
#endif
#ifndef M2C_CODE_EQUATE_skipview
#define M2C_CODE_EQUATE_skipview 1
static const dd kskipview = 0x11e1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x11e2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x11e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x11e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x11e5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_212_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_212_skip 1
static const dd k__m2c_macrolocal_212_skip = 0x11e6;
#endif
#ifndef M2C_CODE_EQUATE_exitlaunchalarm
#define M2C_CODE_EQUATE_exitlaunchalarm 1
static const dd kexitlaunchalarm = 0x11e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x11e8;
#endif
#ifndef M2C_CODE_EQUATE_calcpylonpos
#define M2C_CODE_EQUATE_calcpylonpos 1
static const dd kcalcpylonpos = 0x11e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x11ea;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x11eb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x11ec;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_215_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_215_skip 1
static const dd k__m2c_macrolocal_215_skip = 0x11ed;
#endif
#ifndef M2C_CODE_EQUATE_exitfirecannon
#define M2C_CODE_EQUATE_exitfirecannon 1
static const dd kexitfirecannon = 0x11ee;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x11ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x11f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x11f1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x11f2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x11f3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x11f4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_221_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_221_skip 1
static const dd k__m2c_macrolocal_221_skip = 0x11f5;
#endif
#ifndef M2C_CODE_EQUATE_exitlaunchmiss
#define M2C_CODE_EQUATE_exitlaunchmiss 1
static const dd kexitlaunchmiss = 0x11f6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel126
#define M2C_CODE_EQUATE_dummylabel126 1
static const dd kdummylabel126 = 0x11f7;
#endif
#ifndef M2C_CODE_EQUATE_sortmissok
#define M2C_CODE_EQUATE_sortmissok 1
static const dd ksortmissok = 0x11f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel127
#define M2C_CODE_EQUATE_dummylabel127 1
static const dd kdummylabel127 = 0x11f9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel128
#define M2C_CODE_EQUATE_dummylabel128 1
static const dd kdummylabel128 = 0x11fa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel129
#define M2C_CODE_EQUATE_dummylabel129 1
static const dd kdummylabel129 = 0x11fb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel130
#define M2C_CODE_EQUATE_dummylabel130 1
static const dd kdummylabel130 = 0x11fc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x11fd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel131
#define M2C_CODE_EQUATE_dummylabel131 1
static const dd kdummylabel131 = 0x11fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel132
#define M2C_CODE_EQUATE_dummylabel132 1
static const dd kdummylabel132 = 0x11ff;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_225_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_225_skip 1
static const dd k__m2c_macrolocal_225_skip = 0x1200;
#endif
#ifndef M2C_CODE_EQUATE_exitreldecoy
#define M2C_CODE_EQUATE_exitreldecoy 1
static const dd kexitreldecoy = 0x1201;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel133
#define M2C_CODE_EQUATE_dummylabel133 1
static const dd kdummylabel133 = 0x1202;
#endif
#ifndef M2C_CODE_EQUATE_calcdecoypos
#define M2C_CODE_EQUATE_calcdecoypos 1
static const dd kcalcdecoypos = 0x1203;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel42
#define M2C_CODE_EQUATE_edummylabel42 1
static const dd kedummylabel42 = 0x1204;
#endif
#ifndef M2C_CODE_EQUATE_findwpnloop
#define M2C_CODE_EQUATE_findwpnloop 1
static const dd kfindwpnloop = 0x1205;
#endif
#ifndef M2C_CODE_EQUATE_weaponavail
#define M2C_CODE_EQUATE_weaponavail 1
static const dd kweaponavail = 0x1206;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel134
#define M2C_CODE_EQUATE_dummylabel134 1
static const dd kdummylabel134 = 0x1207;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel43
#define M2C_CODE_EQUATE_edummylabel43 1
static const dd kedummylabel43 = 0x1208;
#endif
#ifndef M2C_CODE_EQUATE_exitimpact
#define M2C_CODE_EQUATE_exitimpact 1
static const dd kexitimpact = 0x1209;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel44
#define M2C_CODE_EQUATE_edummylabel44 1
static const dd kedummylabel44 = 0x120a;
#endif
#ifndef M2C_CODE_EQUATE_exitproxkill
#define M2C_CODE_EQUATE_exitproxkill 1
static const dd kexitproxkill = 0x120b;
#endif
#ifndef M2C_CODE_EQUATE_killgndobjects
#define M2C_CODE_EQUATE_killgndobjects 1
static const dd kkillgndobjects = 0x120c;
#endif
#ifndef M2C_CODE_EQUATE_killstatmobiles
#define M2C_CODE_EQUATE_killstatmobiles 1
static const dd kkillstatmobiles = 0x120d;
#endif
#ifndef M2C_CODE_EQUATE_killmobiles
#define M2C_CODE_EQUATE_killmobiles 1
static const dd kkillmobiles = 0x120e;
#endif
#ifndef M2C_CODE_EQUATE_killtrees
#define M2C_CODE_EQUATE_killtrees 1
static const dd kkilltrees = 0x120f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel45
#define M2C_CODE_EQUATE_edummylabel45 1
static const dd kedummylabel45 = 0x1210;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_231_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_231_skip 1
static const dd k__m2c_macrolocal_231_skip = 0x1211;
#endif
#ifndef M2C_CODE_EQUATE_killgndexit
#define M2C_CODE_EQUATE_killgndexit 1
static const dd kkillgndexit = 0x1212;
#endif
#ifndef M2C_CODE_EQUATE_gndobjloop
#define M2C_CODE_EQUATE_gndobjloop 1
static const dd kgndobjloop = 0x1213;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_233_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_233_skip 1
static const dd k__m2c_macrolocal_233_skip = 0x1214;
#endif
#ifndef M2C_CODE_EQUATE_exitgndobj
#define M2C_CODE_EQUATE_exitgndobj 1
static const dd kexitgndobj = 0x1215;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_234_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_234_skip 1
static const dd k__m2c_macrolocal_234_skip = 0x1216;
#endif
#ifndef M2C_CODE_EQUATE_nextgndobj
#define M2C_CODE_EQUATE_nextgndobj 1
static const dd knextgndobj = 0x1217;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_235_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_235_skip 1
static const dd k__m2c_macrolocal_235_skip = 0x1218;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_236_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_236_skip 1
static const dd k__m2c_macrolocal_236_skip = 0x1219;
#endif
#ifndef M2C_CODE_EQUATE_skipkillgnd
#define M2C_CODE_EQUATE_skipkillgnd 1
static const dd kskipkillgnd = 0x121a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel135
#define M2C_CODE_EQUATE_dummylabel135 1
static const dd kdummylabel135 = 0x121b;
#endif
#ifndef M2C_CODE_EQUATE_createexplosion
#define M2C_CODE_EQUATE_createexplosion 1
static const dd kcreateexplosion = 0x121c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel46
#define M2C_CODE_EQUATE_edummylabel46 1
static const dd kedummylabel46 = 0x121d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_239_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_239_skip 1
static const dd k__m2c_macrolocal_239_skip = 0x121e;
#endif
#ifndef M2C_CODE_EQUATE_killstatexit
#define M2C_CODE_EQUATE_killstatexit 1
static const dd kkillstatexit = 0x121f;
#endif
#ifndef M2C_CODE_EQUATE_statmobloop
#define M2C_CODE_EQUATE_statmobloop 1
static const dd kstatmobloop = 0x1220;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_240_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_240_skip 1
static const dd k__m2c_macrolocal_240_skip = 0x1221;
#endif
#ifndef M2C_CODE_EQUATE_exitstatmob
#define M2C_CODE_EQUATE_exitstatmob 1
static const dd kexitstatmob = 0x1222;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_241_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_241_skip 1
static const dd k__m2c_macrolocal_241_skip = 0x1223;
#endif
#ifndef M2C_CODE_EQUATE_nextstatmob
#define M2C_CODE_EQUATE_nextstatmob 1
static const dd knextstatmob = 0x1224;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_242_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_242_skip 1
static const dd k__m2c_macrolocal_242_skip = 0x1225;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_243_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_243_skip 1
static const dd k__m2c_macrolocal_243_skip = 0x1226;
#endif
#ifndef M2C_CODE_EQUATE_skipkillmob
#define M2C_CODE_EQUATE_skipkillmob 1
static const dd kskipkillmob = 0x1227;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel136
#define M2C_CODE_EQUATE_dummylabel136 1
static const dd kdummylabel136 = 0x1228;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel137
#define M2C_CODE_EQUATE_dummylabel137 1
static const dd kdummylabel137 = 0x1229;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel47
#define M2C_CODE_EQUATE_edummylabel47 1
static const dd kedummylabel47 = 0x122a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_246_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_246_skip 1
static const dd k__m2c_macrolocal_246_skip = 0x122b;
#endif
#ifndef M2C_CODE_EQUATE_killmobexit
#define M2C_CODE_EQUATE_killmobexit 1
static const dd kkillmobexit = 0x122c;
#endif
#ifndef M2C_CODE_EQUATE_mobileloop
#define M2C_CODE_EQUATE_mobileloop 1
static const dd kmobileloop = 0x122d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_247_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_247_skip 1
static const dd k__m2c_macrolocal_247_skip = 0x122e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_248_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_248_skip 1
static const dd k__m2c_macrolocal_248_skip = 0x122f;
#endif
#ifndef M2C_CODE_EQUATE_nextmobile
#define M2C_CODE_EQUATE_nextmobile 1
static const dd knextmobile = 0x1230;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_249_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_249_skip 1
static const dd k__m2c_macrolocal_249_skip = 0x1231;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_250_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_250_skip 1
static const dd k__m2c_macrolocal_250_skip = 0x1232;
#endif
#ifndef M2C_CODE_EQUATE_sortairborne
#define M2C_CODE_EQUATE_sortairborne 1
static const dd ksortairborne = 0x1233;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_252_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_252_skip 1
static const dd k__m2c_macrolocal_252_skip = 0x1234;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_254_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_254_skip 1
static const dd k__m2c_macrolocal_254_skip = 0x1235;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_255_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_255_skip 1
static const dd k__m2c_macrolocal_255_skip = 0x1236;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_256_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_256_skip 1
static const dd k__m2c_macrolocal_256_skip = 0x1237;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_257_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_257_skip 1
static const dd k__m2c_macrolocal_257_skip = 0x1238;
#endif
#ifndef M2C_CODE_EQUATE_skipmobkill
#define M2C_CODE_EQUATE_skipmobkill 1
static const dd kskipmobkill = 0x1239;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel138
#define M2C_CODE_EQUATE_dummylabel138 1
static const dd kdummylabel138 = 0x123a;
#endif
#ifndef M2C_CODE_EQUATE_specialeffectsbeforenextmobile
#define M2C_CODE_EQUATE_specialeffectsbeforenextmobile 1
static const dd kspecialeffectsbeforenextmobile = 0x123b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel139
#define M2C_CODE_EQUATE_dummylabel139 1
static const dd kdummylabel139 = 0x123c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_258_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_258_skip 1
static const dd k__m2c_macrolocal_258_skip = 0x123d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel140
#define M2C_CODE_EQUATE_dummylabel140 1
static const dd kdummylabel140 = 0x123e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_259_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_259_skip 1
static const dd k__m2c_macrolocal_259_skip = 0x123f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel141
#define M2C_CODE_EQUATE_dummylabel141 1
static const dd kdummylabel141 = 0x1240;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_260_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_260_skip 1
static const dd k__m2c_macrolocal_260_skip = 0x1241;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel142
#define M2C_CODE_EQUATE_dummylabel142 1
static const dd kdummylabel142 = 0x1242;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_261_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_261_skip 1
static const dd k__m2c_macrolocal_261_skip = 0x1243;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel143
#define M2C_CODE_EQUATE_dummylabel143 1
static const dd kdummylabel143 = 0x1244;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel48
#define M2C_CODE_EQUATE_edummylabel48 1
static const dd kedummylabel48 = 0x1245;
#endif
#ifndef M2C_CODE_EQUATE_killtreesexit
#define M2C_CODE_EQUATE_killtreesexit 1
static const dd kkilltreesexit = 0x1246;
#endif
#ifndef M2C_CODE_EQUATE_scantrees
#define M2C_CODE_EQUATE_scantrees 1
static const dd kscantrees = 0x1247;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel49
#define M2C_CODE_EQUATE_edummylabel49 1
static const dd kedummylabel49 = 0x1248;
#endif
#ifndef M2C_CODE_EQUATE_scantreeloop
#define M2C_CODE_EQUATE_scantreeloop 1
static const dd kscantreeloop = 0x1249;
#endif
#ifndef M2C_CODE_EQUATE_nexttree
#define M2C_CODE_EQUATE_nexttree 1
static const dd knexttree = 0x124a;
#endif
#ifndef M2C_CODE_EQUATE_skiptree
#define M2C_CODE_EQUATE_skiptree 1
static const dd kskiptree = 0x124b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel50
#define M2C_CODE_EQUATE_edummylabel50 1
static const dd kedummylabel50 = 0x124c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_264_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_264_skip 1
static const dd k__m2c_macrolocal_264_skip = 0x124d;
#endif
#ifndef M2C_CODE_EQUATE_contburn
#define M2C_CODE_EQUATE_contburn 1
static const dd kcontburn = 0x124e;
#endif
#ifndef M2C_CODE_EQUATE_exploloop
#define M2C_CODE_EQUATE_exploloop 1
static const dd kexploloop = 0x124f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel144
#define M2C_CODE_EQUATE_dummylabel144 1
static const dd kdummylabel144 = 0x1250;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel145
#define M2C_CODE_EQUATE_dummylabel145 1
static const dd kdummylabel145 = 0x1251;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel146
#define M2C_CODE_EQUATE_dummylabel146 1
static const dd kdummylabel146 = 0x1252;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel147
#define M2C_CODE_EQUATE_dummylabel147 1
static const dd kdummylabel147 = 0x1253;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel148
#define M2C_CODE_EQUATE_dummylabel148 1
static const dd kdummylabel148 = 0x1254;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel149
#define M2C_CODE_EQUATE_dummylabel149 1
static const dd kdummylabel149 = 0x1255;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel51
#define M2C_CODE_EQUATE_edummylabel51 1
static const dd kedummylabel51 = 0x1256;
#endif
#ifndef M2C_CODE_EQUATE_sortbellypylon
#define M2C_CODE_EQUATE_sortbellypylon 1
static const dd ksortbellypylon = 0x1257;
#endif
#ifndef M2C_CODE_EQUATE_dronewingpylon
#define M2C_CODE_EQUATE_dronewingpylon 1
static const dd kdronewingpylon = 0x1258;
#endif
#ifndef M2C_CODE_EQUATE_sortlaunchside
#define M2C_CODE_EQUATE_sortlaunchside 1
static const dd ksortlaunchside = 0x1259;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel150
#define M2C_CODE_EQUATE_dummylabel150 1
static const dd kdummylabel150 = 0x125a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel151
#define M2C_CODE_EQUATE_dummylabel151 1
static const dd kdummylabel151 = 0x125b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel152
#define M2C_CODE_EQUATE_dummylabel152 1
static const dd kdummylabel152 = 0x125c;
#endif
#ifndef M2C_CODE_EQUATE_contpylonpos
#define M2C_CODE_EQUATE_contpylonpos 1
static const dd kcontpylonpos = 0x125d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel153
#define M2C_CODE_EQUATE_dummylabel153 1
static const dd kdummylabel153 = 0x125e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel154
#define M2C_CODE_EQUATE_dummylabel154 1
static const dd kdummylabel154 = 0x125f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy1 1
static const dd k__m2c_macrolocal_265_mvxy1 = 0x1260;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy2 1
static const dd k__m2c_macrolocal_265_mvxy2 = 0x1261;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy3 1
static const dd k__m2c_macrolocal_265_mvxy3 = 0x1262;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_265_mvxy4 1
static const dd k__m2c_macrolocal_265_mvxy4 = 0x1263;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel52
#define M2C_CODE_EQUATE_edummylabel52 1
static const dd kedummylabel52 = 0x1264;
#endif
#ifndef M2C_CODE_EQUATE_bellydecoy
#define M2C_CODE_EQUATE_bellydecoy 1
static const dd kbellydecoy = 0x1265;
#endif
#ifndef M2C_CODE_EQUATE_contdecoypos
#define M2C_CODE_EQUATE_contdecoypos 1
static const dd kcontdecoypos = 0x1266;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel155
#define M2C_CODE_EQUATE_dummylabel155 1
static const dd kdummylabel155 = 0x1267;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel156
#define M2C_CODE_EQUATE_dummylabel156 1
static const dd kdummylabel156 = 0x1268;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel157
#define M2C_CODE_EQUATE_dummylabel157 1
static const dd kdummylabel157 = 0x1269;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel158
#define M2C_CODE_EQUATE_dummylabel158 1
static const dd kdummylabel158 = 0x126a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy1 1
static const dd k__m2c_macrolocal_266_mvxy1 = 0x126b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy2 1
static const dd k__m2c_macrolocal_266_mvxy2 = 0x126c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy3 1
static const dd k__m2c_macrolocal_266_mvxy3 = 0x126d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_266_mvxy4 1
static const dd k__m2c_macrolocal_266_mvxy4 = 0x126e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel53
#define M2C_CODE_EQUATE_edummylabel53 1
static const dd kedummylabel53 = 0x126f;
#endif
#ifndef M2C_CODE_EQUATE_nolock
#define M2C_CODE_EQUATE_nolock 1
static const dd knolock = 0x1270;
#endif
#ifndef M2C_CODE_EQUATE_irlock
#define M2C_CODE_EQUATE_irlock 1
static const dd kirlock = 0x1271;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel159
#define M2C_CODE_EQUATE_dummylabel159 1
static const dd kdummylabel159 = 0x1272;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel160
#define M2C_CODE_EQUATE_dummylabel160 1
static const dd kdummylabel160 = 0x1273;
#endif
#ifndef M2C_CODE_EQUATE_aerialexplosion
#define M2C_CODE_EQUATE_aerialexplosion 1
static const dd kaerialexplosion = 0x1274;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel54
#define M2C_CODE_EQUATE_edummylabel54 1
static const dd kedummylabel54 = 0x1275;
#endif
#ifndef M2C_CODE_EQUATE_exitaerial
#define M2C_CODE_EQUATE_exitaerial 1
static const dd kexitaerial = 0x1276;
#endif
#ifndef M2C_CODE_EQUATE_drawweapons
#define M2C_CODE_EQUATE_drawweapons 1
static const dd kdrawweapons = 0x1277;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel55
#define M2C_CODE_EQUATE_edummylabel55 1
static const dd kedummylabel55 = 0x1278;
#endif
#ifndef M2C_CODE_EQUATE_drawloop
#define M2C_CODE_EQUATE_drawloop 1
static const dd kdrawloop = 0x1279;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel161
#define M2C_CODE_EQUATE_dummylabel161 1
static const dd kdummylabel161 = 0x127a;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x127b;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool aerialexplosion(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool alarmguidance(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool alarmguideabove(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool alarmguidebelow(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool alarmmovement(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool alarmradarscan(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool bombballistics(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcbombccip(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcdecoypos(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcpylonpos(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcstoreswt(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcthrow(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkalarmtimer(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkirlock(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkradartgt(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool createairburst(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool createbomblet(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool createexplosion(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawweapons(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool findavailweapon(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool firecannon(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool grounddamage(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initweapons(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool killgndobjects(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool killmobiles(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool killstatmobiles(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool killtrees(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool launchalarm(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool launchmissile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool lgbguidance(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool missileguidance(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool proximitykill(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool recordrwydamage(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool releasebomb(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool releasedecoy(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool releasepackage(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool retardbombvel(m2c::_offsets, struct m2c::_STATE*);
static bool scantrees(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectairwpn(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectnextpack(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool shellballistics(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool storeimpact(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateairburst(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatealarm(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatebl755(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatecannon(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatedecoy(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updategpb(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatejp233(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatelgb(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatemissile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateret(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatesplash(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateweapons(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool weaponscontrol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool wpnhittarget(m2c::_offsets, struct m2c::_STATE*);
extern bool calc3doffset(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangdiff(m2c::_offsets, struct m2c::_STATE*);
extern bool calceta(m2c::_offsets, struct m2c::_STATE*);
extern bool calcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool calcintercept(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_vp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_wp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcslantrange(m2c::_offsets, struct m2c::_STATE*);
extern bool calctransmatrix(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonsound(m2c::_offsets, struct m2c::_STATE*);
extern bool decoysound(m2c::_offsets, struct m2c::_STATE*);
extern bool destroytornado(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmobile(m2c::_offsets, struct m2c::_STATE*);
extern bool explosound1(m2c::_offsets, struct m2c::_STATE*);
extern bool explosound2(m2c::_offsets, struct m2c::_STATE*);
extern bool explosound3(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarctan(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronealive(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronechaff(m2c::_offsets, struct m2c::_STATE*);
extern bool getdroneflare(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronespeed(m2c::_offsets, struct m2c::_STATE*);
extern bool launchsound(m2c::_offsets, struct m2c::_STATE*);
extern bool locatemobiles(m2c::_offsets, struct m2c::_STATE*);
extern bool makecrater(m2c::_offsets, struct m2c::_STATE*);
extern bool makesmokeeffect(m2c::_offsets, struct m2c::_STATE*);
extern bool maxdamage(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashsound(m2c::_offsets, struct m2c::_STATE*);
extern bool moveviewpoint(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool setdronewpnlock(m2c::_offsets, struct m2c::_STATE*);
extern bool sqrt32(m2c::_offsets, struct m2c::_STATE*);
extern bool surfacecheck(m2c::_offsets, struct m2c::_STATE*);
extern bool wpnkilldrone(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


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

#endif

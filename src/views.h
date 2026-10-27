/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VIEWS_STUBS_H__
#define __M2C_VIEWS_STUBS_H__

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
  db dummy81fbe7a0_default_seg_0_478;
  db dummy81fbe7a0_default_seg_0_479;
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
static const word dummy81fbe7a0_default_seg_0_478 = offsetof(struct endroute, dummy81fbe7a0_default_seg_0_478);
static const word dummy81fbe7a0_default_seg_0_479 = offsetof(struct endroute, dummy81fbe7a0_default_seg_0_479);
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
static const int sam_gopher = 0;
static const int sam_buffer = 0;
static const int zft_cockpit = 8;
static const int min_zoom = 40;
static const int max_zoom = 2047;
enum {
    a_air_mode = 0x0,
    e_air_mode = 0x2,
    a_gnd_mode = 0x4,
    e_gnd_mode = 0x6,
    a_e_toggle = 0x2,
    air_gnd_toggle = 0x4,
};
static const int drone_air_time = 10*100;
static const int drone_gnd_time = 5*100;
static const int wpn_dist_min = 32*256;
static const int wpn_dist_max = 120*256;
static const int switch_thresh = 1;
static const int overhead_alt = 1;

	#define M2C_MODULE_VIEWS 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& pitchtoggle;
extern db& pitchtoggleweapon;
extern dw& viewptr;
extern dw& viewswitch;
extern dw& dummy81fbe7a0_data_6_2270;
extern dw& dummy81fbe7a0_data_8_2271;
extern dw& dummy81fbe7a0_data_a_2272;
extern dw& dummy81fbe7a0_data_c_2273;
extern dw& dummy81fbe7a0_data_e_2274;
extern dw& dummy81fbe7a0_data_10_2275;
extern dw& dummy81fbe7a0_data_12_2276;
extern dw& dummy81fbe7a0_data_14_2277;
extern dw& dummy81fbe7a0_data_16_2278;
extern dw& dummy81fbe7a0_data_18_2279;
extern dw& dummy81fbe7a0_data_1a_2280;
extern dw& dummy81fbe7a0_data_1c_2281;
extern dw& dummy81fbe7a0_data_1e_2282;
extern dw& dummy81fbe7a0_data_20_2283;
extern dw& dummy81fbe7a0_data_22_2284;
extern dw& dummy81fbe7a0_data_24_2285;
extern dw& dummy81fbe7a0_data_26_2286;
extern dw& dummy81fbe7a0_data_28_2287;
extern dw& dummy81fbe7a0_data_2a_2288;
extern dw& dummy81fbe7a0_data_2c_2289;
extern dw& rotateswitch;
extern dw& dummy81fbe7a0_data_30_2295;
extern dw& dummy81fbe7a0_data_32_2296;
extern dw& dummy81fbe7a0_data_34_2297;
extern dw& dummy81fbe7a0_data_36_2298;
extern dw& dummy81fbe7a0_data_38_2299;
extern dw& dummy81fbe7a0_data_3a_2300;
extern dw& dummy81fbe7a0_data_3c_2301;
extern dw& dummy81fbe7a0_data_3e_2302;
extern dw& dummy81fbe7a0_data_40_2303;
extern dw& dummy81fbe7a0_data_42_2304;
extern dw& dummy81fbe7a0_data_44_2305;
extern dw& dummy81fbe7a0_data_46_2306;
extern dw& dummy81fbe7a0_data_48_2307;
extern dw& dummy81fbe7a0_data_4a_2308;
extern dw& dummy81fbe7a0_data_4c_2309;
extern dw& dummy81fbe7a0_data_4e_2310;
extern dw& dummy81fbe7a0_data_50_2311;
extern dw& dummy81fbe7a0_data_52_2312;
extern dw& dummy81fbe7a0_data_54_2313;
extern dw& dummy81fbe7a0_data_56_2314;
extern dw& panelswitch;
extern dw& dummy81fbe7a0_data_5a_2320;
extern dw& dummy81fbe7a0_data_5c_2321;
extern dw& dummy81fbe7a0_data_5e_2322;
extern dw& dummy81fbe7a0_data_60_2323;
extern dw& dummy81fbe7a0_data_62_2324;
extern dw& dummy81fbe7a0_data_64_2325;
extern dw& dummy81fbe7a0_data_66_2326;
extern dw& dummy81fbe7a0_data_68_2327;
extern dw& dummy81fbe7a0_data_6a_2328;
extern dw& dummy81fbe7a0_data_6c_2329;
extern dw& dummy81fbe7a0_data_6e_2330;
extern dw& dummy81fbe7a0_data_70_2331;
extern dw& dummy81fbe7a0_data_72_2332;
extern dw& dummy81fbe7a0_data_74_2333;
extern dw& dummy81fbe7a0_data_76_2334;
extern dw& dummy81fbe7a0_data_78_2335;
extern dw& dummy81fbe7a0_data_7a_2336;
extern dw& dummy81fbe7a0_data_7c_2337;
extern dw& dummy81fbe7a0_data_7e_2338;
extern dw& dummy81fbe7a0_data_80_2339;
extern dw& crewswitch;
extern dw& dummy81fbe7a0_data_84_2345;
extern dw& dummy81fbe7a0_data_86_2346;
extern dw& dummy81fbe7a0_data_88_2347;
extern dw& dummy81fbe7a0_data_8a_2348;
extern dw& dummy81fbe7a0_data_8c_2349;
extern dw& dummy81fbe7a0_data_8e_2350;
extern dw& dummy81fbe7a0_data_90_2351;
extern dw& dummy81fbe7a0_data_92_2352;
extern dw& dummy81fbe7a0_data_94_2353;
extern dw& dummy81fbe7a0_data_96_2354;
extern dw& dummy81fbe7a0_data_98_2355;
extern dw& dummy81fbe7a0_data_9a_2356;
extern dw& dummy81fbe7a0_data_9c_2357;
extern dw& dummy81fbe7a0_data_9e_2358;
extern dw& dummy81fbe7a0_data_a0_2359;
extern dw& dummy81fbe7a0_data_a2_2360;
extern dw& dummy81fbe7a0_data_a4_2361;
extern dw& dummy81fbe7a0_data_a6_2362;
extern dw& dummy81fbe7a0_data_a8_2363;
extern dw& dummy81fbe7a0_data_aa_2364;
extern db& incockpit;
extern db& quietercockpit;
extern db& cockpitflags;
extern db& dummy81fbe7a0_data_af_2374;
extern db& dummy81fbe7a0_data_b0_2375;
extern db& dummy81fbe7a0_data_b1_2376;
extern db& dummy81fbe7a0_data_b2_2377;
extern db& dummy81fbe7a0_data_b3_2378;
extern db& dummy81fbe7a0_data_b4_2379;
extern db& dummy81fbe7a0_data_b5_2380;
extern db& dummy81fbe7a0_data_b6_2381;
extern db& quietercockpitflags;
extern db& dummy81fbe7a0_data_b8_2385;
extern db& dummy81fbe7a0_data_b9_2386;
extern db& dummy81fbe7a0_data_ba_2387;
extern db& dummy81fbe7a0_data_bb_2388;
extern db& dummy81fbe7a0_data_bc_2389;
extern db& dummy81fbe7a0_data_bd_2390;
extern db& dummy81fbe7a0_data_be_2391;
extern db& dummy81fbe7a0_data_bf_2392;
extern db& dummy81fbe7a0_data_c0_2393;
extern db& dummy81fbe7a0_data_c1_2394;
extern db& dummy81fbe7a0_data_c2_2395;
extern db& dummy81fbe7a0_data_c3_2396;
extern db& dummy81fbe7a0_data_c4_2397;
extern db& earshot;
extern db& earshotflags;
extern dw& updateswitch;
extern dw& dummy81fbe7a0_data_c9_2438;
extern dw& dummy81fbe7a0_data_cb_2439;
extern dw& dummy81fbe7a0_data_cd_2440;
extern dw& dummy81fbe7a0_data_cf_2441;
extern dw& dummy81fbe7a0_data_d1_2442;
extern dw& dummy81fbe7a0_data_d3_2443;
extern dw& dummy81fbe7a0_data_d5_2444;
extern dw& dummy81fbe7a0_data_d7_2445;
extern dw& dummy81fbe7a0_data_d9_2446;
extern dw& dummy81fbe7a0_data_db_2447;
extern dw& dummy81fbe7a0_data_dd_2448;
extern dw& dummy81fbe7a0_data_df_2449;
extern dw& dummy81fbe7a0_data_e1_2450;
extern dw& dummy81fbe7a0_data_e3_2451;
extern dw& dummy81fbe7a0_data_e5_2452;
extern dw& dummy81fbe7a0_data_e7_2453;
extern dw& dummy81fbe7a0_data_e9_2454;
extern dw& dummy81fbe7a0_data_eb_2455;
extern dw& dummy81fbe7a0_data_ed_2456;
extern dw& dummy81fbe7a0_data_ef_2457;
extern db (& glanceflag)[2];
extern dw& prevviewmode;
extern dw& glancekeyptr;
extern dw& trkcamdist;
extern dw& trkcamdistfine;
extern dw& trkcambrg;
extern dw& trkcambrgfine;
extern dw& trkcamalt;
extern dw& trkcamalt2;
extern dw& satcamdist;
extern dw& satcamdistfine;
extern dw& satcamside;
extern dw& dronemode;
extern dw& dummy81fbe7a0_data_10b_2509;
extern dw& dummy81fbe7a0_data_10d_2510;
extern dw& dummy81fbe7a0_data_10f_2511;
extern dw& dummy81fbe7a0_data_111_2512;
extern dw& dummy81fbe7a0_data_113_2514;
extern dw& dummy81fbe7a0_data_115_2515;
extern dw& dummy81fbe7a0_data_117_2516;
extern dw& dummy81fbe7a0_data_119_2517;
extern dw& dummy81fbe7a0_data_11b_2519;
extern dw& dummy81fbe7a0_data_11d_2520;
extern dw& dummy81fbe7a0_data_11f_2521;
extern dw& dummy81fbe7a0_data_121_2522;
extern dw& drncamdist;
extern dw& dummy81fbe7a0_data_125_2524;
extern dw& dummy81fbe7a0_data_127_2525;
extern dw& dummy81fbe7a0_data_129_2526;
extern dw& drncamdistfine;
extern dw& dummy81fbe7a0_data_12d_2528;
extern dw& dummy81fbe7a0_data_12f_2529;
extern dw& dummy81fbe7a0_data_131_2530;
extern dw& drncambrg;
extern dw& dummy81fbe7a0_data_135_2532;
extern dw& dummy81fbe7a0_data_137_2533;
extern dw& dummy81fbe7a0_data_139_2534;
extern dw& drncambrgfine;
extern dw& dummy81fbe7a0_data_13d_2536;
extern dw& dummy81fbe7a0_data_13f_2537;
extern dw& dummy81fbe7a0_data_141_2538;
extern db& specvalid;
extern viewpoint& spec_view;
extern dw& speccamhdgfine;
extern viewpoint& rem_view;
extern viewpoint& demo_view;
extern dw& dronetimer;
extern dw& cameraangle;
extern dw& cameraswitch;
extern dw& dummy81fbe7a0_data_182_2581;
extern dw& dummy81fbe7a0_data_184_2582;
extern dw& dummy81fbe7a0_data_186_2583;
extern dw& rndcambrg;
extern dw& destroytimer;
extern dw& viewweaponptr;
extern viewpoint& wpn_view;
extern dw& wpncamdist;
extern dw& wpncambrg;
extern dw& wpncambrgfine;
extern db& wpnexpview;
extern dw& weaponswitch;
extern dw& dummy81fbe7a0_data_1a9_2611;
extern dw& dummy81fbe7a0_data_1ab_2612;
extern dw& dummy81fbe7a0_data_1ad_2613;
extern dw& dummy81fbe7a0_data_1af_2614;
extern dw& dummy81fbe7a0_data_1b1_2615;
extern dw& dummy81fbe7a0_data_1b3_2616;
extern dw& dummy81fbe7a0_data_1b5_2617;
extern dw& dummy81fbe7a0_data_1b7_2618;
extern word& dronecrntptrs;
extern word& dronelistptrs;
extern word& dronelistends;
extern db& wpndata;
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
#ifndef M2C_CODE_EQUATE_pancode_0_proc
#define M2C_CODE_EQUATE_pancode_0_proc 1
static const dd kpancode_0_proc = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_chggameviewmode
#define M2C_CODE_EQUATE_chggameviewmode 1
static const dd kchggameviewmode = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_setgameviewmode
#define M2C_CODE_EQUATE_setgameviewmode 1
static const dd ksetgameviewmode = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_soundok
#define M2C_CODE_EQUATE_soundok 1
static const dd ksoundok = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_updategameview
#define M2C_CODE_EQUATE_updategameview 1
static const dd kupdategameview = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_updateview
#define M2C_CODE_EQUATE_updateview 1
static const dd kupdateview = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_checkchange
#define M2C_CODE_EQUATE_checkchange 1
static const dd kcheckchange = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skippilot
#define M2C_CODE_EQUATE_skippilot 1
static const dd kskippilot = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_skipnavig
#define M2C_CODE_EQUATE_skipnavig 1
static const dd kskipnavig = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_skiplfix
#define M2C_CODE_EQUATE_skiplfix 1
static const dd kskiplfix = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_skiprfix
#define M2C_CODE_EQUATE_skiprfix 1
static const dd kskiprfix = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_skiplglance
#define M2C_CODE_EQUATE_skiplglance 1
static const dd kskiplglance = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_skiprglance
#define M2C_CODE_EQUATE_skiprglance 1
static const dd kskiprglance = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_skipkf_trackingcamup
#define M2C_CODE_EQUATE_skipkf_trackingcamup 1
static const dd kskipkf_trackingcamup = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_intotracking
#define M2C_CODE_EQUATE_intotracking 1
static const dd kintotracking = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_skiptrackingzrk_and_zsu
#define M2C_CODE_EQUATE_skiptrackingzrk_and_zsu 1
static const dd kskiptrackingzrk_and_zsu = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_skipkf_trackingcamup2
#define M2C_CODE_EQUATE_skipkf_trackingcamup2 1
static const dd kskipkf_trackingcamup2 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_skiptracking
#define M2C_CODE_EQUATE_skiptracking 1
static const dd kskiptracking = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_skipsatellite
#define M2C_CODE_EQUATE_skipsatellite 1
static const dd kskipsatellite = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_skipmapview
#define M2C_CODE_EQUATE_skipmapview 1
static const dd kskipmapview = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_check1
#define M2C_CODE_EQUATE_check1 1
static const dd kcheck1 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_nope
#define M2C_CODE_EQUATE_nope 1
static const dd knope = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_check3
#define M2C_CODE_EQUATE_check3 1
static const dd kcheck3 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_skipdroneside
#define M2C_CODE_EQUATE_skipdroneside 1
static const dd kskipdroneside = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_faildroneside
#define M2C_CODE_EQUATE_faildroneside 1
static const dd kfaildroneside = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_currentdroneok
#define M2C_CODE_EQUATE_currentdroneok 1
static const dd kcurrentdroneok = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_selectnextdrone
#define M2C_CODE_EQUATE_selectnextdrone 1
static const dd kselectnextdrone = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_skipdronetype
#define M2C_CODE_EQUATE_skipdronetype 1
static const dd kskipdronetype = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_faildronetype
#define M2C_CODE_EQUATE_faildronetype 1
static const dd kfaildronetype = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_skipdroneview
#define M2C_CODE_EQUATE_skipdroneview 1
static const dd kskipdroneview = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_intodroneview
#define M2C_CODE_EQUATE_intodroneview 1
static const dd kintodroneview = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_faildroneview
#define M2C_CODE_EQUATE_faildroneview 1
static const dd kfaildroneview = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_selectprevdrone
#define M2C_CODE_EQUATE_selectprevdrone 1
static const dd kselectprevdrone = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_selectanydrone
#define M2C_CODE_EQUATE_selectanydrone 1
static const dd kselectanydrone = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_skipspectator
#define M2C_CODE_EQUATE_skipspectator 1
static const dd kskipspectator = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_catchtornado
#define M2C_CODE_EQUATE_catchtornado 1
static const dd kcatchtornado = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_skipremote
#define M2C_CODE_EQUATE_skipremote 1
static const dd kskipremote = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_skipsamlaunchertotornado1
#define M2C_CODE_EQUATE_skipsamlaunchertotornado1 1
static const dd kskipsamlaunchertotornado1 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_skipzrk1
#define M2C_CODE_EQUATE_skipzrk1 1
static const dd kskipzrk1 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_skipzrk2
#define M2C_CODE_EQUATE_skipzrk2 1
static const dd kskipzrk2 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy1 1
static const dd k__m2c_macrolocal_36_mvxy1 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy2 1
static const dd k__m2c_macrolocal_36_mvxy2 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy3 1
static const dd k__m2c_macrolocal_36_mvxy3 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_36_mvxy4 1
static const dd k__m2c_macrolocal_36_mvxy4 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_skipaaatotornado2
#define M2C_CODE_EQUATE_skipaaatotornado2 1
static const dd kskipaaatotornado2 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy1 1
static const dd k__m2c_macrolocal_41_mvxy1 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy2 1
static const dd k__m2c_macrolocal_41_mvxy2 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy3 1
static const dd k__m2c_macrolocal_41_mvxy3 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_41_mvxy4 1
static const dd k__m2c_macrolocal_41_mvxy4 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_skiptolookdown
#define M2C_CODE_EQUATE_skiptolookdown 1
static const dd kskiptolookdown = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy1 1
static const dd k__m2c_macrolocal_46_mvxy1 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy2 1
static const dd k__m2c_macrolocal_46_mvxy2 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy3 1
static const dd k__m2c_macrolocal_46_mvxy3 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_46_mvxy4 1
static const dd k__m2c_macrolocal_46_mvxy4 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_queque000b
#define M2C_CODE_EQUATE_queque000b 1
static const dd kqueque000b = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_queque000d
#define M2C_CODE_EQUATE_queque000d 1
static const dd kqueque000d = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_skiplookdown
#define M2C_CODE_EQUATE_skiplookdown 1
static const dd kskiplookdown = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_setexpview
#define M2C_CODE_EQUATE_setexpview 1
static const dd ksetexpview = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_51_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_51_skip 1
static const dd k__m2c_macrolocal_51_skip = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_exitdamagestatus
#define M2C_CODE_EQUATE_exitdamagestatus 1
static const dd kexitdamagestatus = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_52_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_52_skip 1
static const dd k__m2c_macrolocal_52_skip = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_53_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_53_skip 1
static const dd k__m2c_macrolocal_53_skip = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_54_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_54_skip 1
static const dd k__m2c_macrolocal_54_skip = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_55_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_55_skip 1
static const dd k__m2c_macrolocal_55_skip = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_56_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_56_skip 1
static const dd k__m2c_macrolocal_56_skip = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_57_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_57_skip 1
static const dd k__m2c_macrolocal_57_skip = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_58_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_58_skip 1
static const dd k__m2c_macrolocal_58_skip = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_59_skip 1
static const dd k__m2c_macrolocal_59_skip = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_60_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_60_skip 1
static const dd k__m2c_macrolocal_60_skip = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_61_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_61_skip 1
static const dd k__m2c_macrolocal_61_skip = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_62_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_62_skip 1
static const dd k__m2c_macrolocal_62_skip = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_63_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_63_skip 1
static const dd k__m2c_macrolocal_63_skip = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_64_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_64_skip 1
static const dd k__m2c_macrolocal_64_skip = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_65_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_65_skip 1
static const dd k__m2c_macrolocal_65_skip = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_66_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_66_skip 1
static const dd k__m2c_macrolocal_66_skip = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_67_skip 1
static const dd k__m2c_macrolocal_67_skip = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_68_skip 1
static const dd k__m2c_macrolocal_68_skip = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_69_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_69_skip 1
static const dd k__m2c_macrolocal_69_skip = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_skipshakeup
#define M2C_CODE_EQUATE_skipshakeup 1
static const dd kskipshakeup = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_bothenginesdead
#define M2C_CODE_EQUATE_bothenginesdead 1
static const dd kbothenginesdead = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_updatepilot
#define M2C_CODE_EQUATE_updatepilot 1
static const dd kupdatepilot = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_updateviewexit
#define M2C_CODE_EQUATE_updateviewexit 1
static const dd kupdateviewexit = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_updatelpilot
#define M2C_CODE_EQUATE_updatelpilot 1
static const dd kupdatelpilot = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_updatelnavig
#define M2C_CODE_EQUATE_updatelnavig 1
static const dd kupdatelnavig = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_updaterpilot
#define M2C_CODE_EQUATE_updaterpilot 1
static const dd kupdaterpilot = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_updaternavig
#define M2C_CODE_EQUATE_updaternavig 1
static const dd kupdaternavig = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_updatenavig
#define M2C_CODE_EQUATE_updatenavig 1
static const dd kupdatenavig = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_updatetracking
#define M2C_CODE_EQUATE_updatetracking 1
static const dd kupdatetracking = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_adjustzoom
#define M2C_CODE_EQUATE_adjustzoom 1
static const dd kadjustzoom = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_adjusttrack
#define M2C_CODE_EQUATE_adjusttrack 1
static const dd kadjusttrack = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_skipalex7
#define M2C_CODE_EQUATE_skipalex7 1
static const dd kskipalex7 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_fixtominus180a
#define M2C_CODE_EQUATE_fixtominus180a 1
static const dd kfixtominus180a = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_skipalex8
#define M2C_CODE_EQUATE_skipalex8 1
static const dd kskipalex8 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_fixtopositive180a
#define M2C_CODE_EQUATE_fixtopositive180a 1
static const dd kfixtopositive180a = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_addtwotoyawvalue
#define M2C_CODE_EQUATE_addtwotoyawvalue 1
static const dd kaddtwotoyawvalue = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_zftok
#define M2C_CODE_EQUATE_zftok 1
static const dd kzftok = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_skipalex1
#define M2C_CODE_EQUATE_skipalex1 1
static const dd kskipalex1 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_skipalex2
#define M2C_CODE_EQUATE_skipalex2 1
static const dd kskipalex2 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_skiproll
#define M2C_CODE_EQUATE_skiproll 1
static const dd kskiproll = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy1 1
static const dd k__m2c_macrolocal_85_mvxy1 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy2 1
static const dd k__m2c_macrolocal_85_mvxy2 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy3 1
static const dd k__m2c_macrolocal_85_mvxy3 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_85_mvxy4 1
static const dd k__m2c_macrolocal_85_mvxy4 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_queque0022
#define M2C_CODE_EQUATE_queque0022 1
static const dd kqueque0022 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_queque0024
#define M2C_CODE_EQUATE_queque0024 1
static const dd kqueque0024 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_updatezrk_aaa
#define M2C_CODE_EQUATE_updatezrk_aaa 1
static const dd kupdatezrk_aaa = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_skipalex7b
#define M2C_CODE_EQUATE_skipalex7b 1
static const dd kskipalex7b = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_fixtominus180ab
#define M2C_CODE_EQUATE_fixtominus180ab 1
static const dd kfixtominus180ab = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_skipalex8b
#define M2C_CODE_EQUATE_skipalex8b 1
static const dd kskipalex8b = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_fixtopositive180ab
#define M2C_CODE_EQUATE_fixtopositive180ab 1
static const dd kfixtopositive180ab = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_addtwotoyawvalueb
#define M2C_CODE_EQUATE_addtwotoyawvalueb 1
static const dd kaddtwotoyawvalueb = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_skipppper1b
#define M2C_CODE_EQUATE_skipppper1b 1
static const dd kskipppper1b = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_zftokb
#define M2C_CODE_EQUATE_zftokb 1
static const dd kzftokb = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_skipalex1b
#define M2C_CODE_EQUATE_skipalex1b 1
static const dd kskipalex1b = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_skipalex2b
#define M2C_CODE_EQUATE_skipalex2b 1
static const dd kskipalex2b = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_skiproll2
#define M2C_CODE_EQUATE_skiproll2 1
static const dd kskiproll2 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy1 1
static const dd k__m2c_macrolocal_106_mvxy1 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy2 1
static const dd k__m2c_macrolocal_106_mvxy2 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy3 1
static const dd k__m2c_macrolocal_106_mvxy3 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_106_mvxy4 1
static const dd k__m2c_macrolocal_106_mvxy4 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_queque0026
#define M2C_CODE_EQUATE_queque0026 1
static const dd kqueque0026 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_queque0028
#define M2C_CODE_EQUATE_queque0028 1
static const dd kqueque0028 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_updatesatellite
#define M2C_CODE_EQUATE_updatesatellite 1
static const dd kupdatesatellite = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_skiproll3
#define M2C_CODE_EQUATE_skiproll3 1
static const dd kskiproll3 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_satcamzftok
#define M2C_CODE_EQUATE_satcamzftok 1
static const dd ksatcamzftok = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_skipalexis1
#define M2C_CODE_EQUATE_skipalexis1 1
static const dd kskipalexis1 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_skipalexis2
#define M2C_CODE_EQUATE_skipalexis2 1
static const dd kskipalexis2 = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_updatemap
#define M2C_CODE_EQUATE_updatemap 1
static const dd kupdatemap = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_updatedrone
#define M2C_CODE_EQUATE_updatedrone 1
static const dd kupdatedrone = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skip 1
static const dd k__m2c_macrolocal_115_skip = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_skipcandy9
#define M2C_CODE_EQUATE_skipcandy9 1
static const dd kskipcandy9 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_fixtominus180b
#define M2C_CODE_EQUATE_fixtominus180b 1
static const dd kfixtominus180b = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_skipcandy8
#define M2C_CODE_EQUATE_skipcandy8 1
static const dd kskipcandy8 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_fixtopositive180b
#define M2C_CODE_EQUATE_fixtopositive180b 1
static const dd kfixtopositive180b = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_addtwotoyawvalue2
#define M2C_CODE_EQUATE_addtwotoyawvalue2 1
static const dd kaddtwotoyawvalue2 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_skipalex5
#define M2C_CODE_EQUATE_skipalex5 1
static const dd kskipalex5 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_skipalex6
#define M2C_CODE_EQUATE_skipalex6 1
static const dd kskipalex6 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_skiproll4
#define M2C_CODE_EQUATE_skiproll4 1
static const dd kskiproll4 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy1 1
static const dd k__m2c_macrolocal_131_mvxy1 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy2 1
static const dd k__m2c_macrolocal_131_mvxy2 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy3 1
static const dd k__m2c_macrolocal_131_mvxy3 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_131_mvxy4 1
static const dd k__m2c_macrolocal_131_mvxy4 = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_queque002b
#define M2C_CODE_EQUATE_queque002b 1
static const dd kqueque002b = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_queque002d
#define M2C_CODE_EQUATE_queque002d 1
static const dd kqueque002d = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_updatespectator
#define M2C_CODE_EQUATE_updatespectator 1
static const dd kupdatespectator = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_rotatehdg
#define M2C_CODE_EQUATE_rotatehdg 1
static const dd krotatehdg = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_skipgarry1
#define M2C_CODE_EQUATE_skipgarry1 1
static const dd kskipgarry1 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_skipgarry2
#define M2C_CODE_EQUATE_skipgarry2 1
static const dd kskipgarry2 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_updateremote
#define M2C_CODE_EQUATE_updateremote 1
static const dd kupdateremote = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_136_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_136_skip 1
static const dd k__m2c_macrolocal_136_skip = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_remoteok
#define M2C_CODE_EQUATE_remoteok 1
static const dd kremoteok = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_skipjake1
#define M2C_CODE_EQUATE_skipjake1 1
static const dd kskipjake1 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_skipjake2
#define M2C_CODE_EQUATE_skipjake2 1
static const dd kskipjake2 = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_scalerange
#define M2C_CODE_EQUATE_scalerange 1
static const dd kscalerange = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_scalezdiff
#define M2C_CODE_EQUATE_scalezdiff 1
static const dd kscalezdiff = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_scaleok
#define M2C_CODE_EQUATE_scaleok 1
static const dd kscaleok = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_setremotepitch
#define M2C_CODE_EQUATE_setremotepitch 1
static const dd ksetremotepitch = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_updatelookdown
#define M2C_CODE_EQUATE_updatelookdown 1
static const dd kupdatelookdown = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_updatelookup
#define M2C_CODE_EQUATE_updatelookup 1
static const dd kupdatelookup = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_updatedemo
#define M2C_CODE_EQUATE_updatedemo 1
static const dd kupdatedemo = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_demoview
#define M2C_CODE_EQUATE_demoview 1
static const dd kdemoview = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_updatedestroyed
#define M2C_CODE_EQUATE_updatedestroyed 1
static const dd kupdatedestroyed = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_destroyview
#define M2C_CODE_EQUATE_destroyview 1
static const dd kdestroyview = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_updateweapon
#define M2C_CODE_EQUATE_updateweapon 1
static const dd kupdateweapon = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_weaponview
#define M2C_CODE_EQUATE_weaponview 1
static const dd kweaponview = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_skipfrankie1
#define M2C_CODE_EQUATE_skipfrankie1 1
static const dd kskipfrankie1 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_skipfrankie2
#define M2C_CODE_EQUATE_skipfrankie2 1
static const dd kskipfrankie2 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_skiphilltest
#define M2C_CODE_EQUATE_skiphilltest 1
static const dd kskiphilltest = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomin
#define M2C_CODE_EQUATE_skipzoomin 1
static const dd kskipzoomin = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_setminzoom
#define M2C_CODE_EQUATE_setminzoom 1
static const dd ksetminzoom = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_zoomok
#define M2C_CODE_EQUATE_zoomok 1
static const dd kzoomok = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_skiptrackclk
#define M2C_CODE_EQUATE_skiptrackclk 1
static const dd kskiptrackclk = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_skiptrackaclk
#define M2C_CODE_EQUATE_skiptrackaclk 1
static const dd kskiptrackaclk = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_skiprotatert
#define M2C_CODE_EQUATE_skiprotatert 1
static const dd kskiprotatert = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_skiprotatelt
#define M2C_CODE_EQUATE_skiprotatelt 1
static const dd kskiprotatelt = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_nextdroneloop
#define M2C_CODE_EQUATE_nextdroneloop 1
static const dd knextdroneloop = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_nextptrok
#define M2C_CODE_EQUATE_nextptrok 1
static const dd knextptrok = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_prevdroneloop
#define M2C_CODE_EQUATE_prevdroneloop 1
static const dd kprevdroneloop = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_prevptrok
#define M2C_CODE_EQUATE_prevptrok 1
static const dd kprevptrok = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_anydroneloop
#define M2C_CODE_EQUATE_anydroneloop 1
static const dd kanydroneloop = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_selectrnddrone
#define M2C_CODE_EQUATE_selectrnddrone 1
static const dd kselectrnddrone = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_rndloop
#define M2C_CODE_EQUATE_rndloop 1
static const dd krndloop = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_contrndloop
#define M2C_CODE_EQUATE_contrndloop 1
static const dd kcontrndloop = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_contdemo
#define M2C_CODE_EQUATE_contdemo 1
static const dd kcontdemo = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_exitdemo
#define M2C_CODE_EQUATE_exitdemo 1
static const dd kexitdemo = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE_camrotateclk
#define M2C_CODE_EQUATE_camrotateclk 1
static const dd kcamrotateclk = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_setcamerabrg
#define M2C_CODE_EQUATE_setcamerabrg 1
static const dd ksetcamerabrg = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE_camrotateaclk
#define M2C_CODE_EQUATE_camrotateaclk 1
static const dd kcamrotateaclk = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_camrandom
#define M2C_CODE_EQUATE_camrandom 1
static const dd kcamrandom = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy1 1
static const dd k__m2c_macrolocal_168_mvxy1 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy2 1
static const dd k__m2c_macrolocal_168_mvxy2 = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy3 1
static const dd k__m2c_macrolocal_168_mvxy3 = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_168_mvxy4 1
static const dd k__m2c_macrolocal_168_mvxy4 = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy1 1
static const dd k__m2c_macrolocal_174_mvxy1 = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy2 1
static const dd k__m2c_macrolocal_174_mvxy2 = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy3 1
static const dd k__m2c_macrolocal_174_mvxy3 = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_174_mvxy4 1
static const dd k__m2c_macrolocal_174_mvxy4 = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_queque0034
#define M2C_CODE_EQUATE_queque0034 1
static const dd kqueque0034 = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_queque0036
#define M2C_CODE_EQUATE_queque0036 1
static const dd kqueque0036 = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_skiproll5
#define M2C_CODE_EQUATE_skiproll5 1
static const dd kskiproll5 = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_overheadview
#define M2C_CODE_EQUATE_overheadview 1
static const dd koverheadview = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_normalview
#define M2C_CODE_EQUATE_normalview 1
static const dd knormalview = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE_bombview
#define M2C_CODE_EQUATE_bombview 1
static const dd kbombview = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_adjustwpnzoom
#define M2C_CODE_EQUATE_adjustwpnzoom 1
static const dd kadjustwpnzoom = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_adjustwpntrack
#define M2C_CODE_EQUATE_adjustwpntrack 1
static const dd kadjustwpntrack = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_exitweapon
#define M2C_CODE_EQUATE_exitweapon 1
static const dd kexitweapon = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_alarmview
#define M2C_CODE_EQUATE_alarmview 1
static const dd kalarmview = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_missileview
#define M2C_CODE_EQUATE_missileview 1
static const dd kmissileview = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_skipwpnzoomin
#define M2C_CODE_EQUATE_skipwpnzoomin 1
static const dd kskipwpnzoomin = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE_wpnzoomok
#define M2C_CODE_EQUATE_wpnzoomok 1
static const dd kwpnzoomok = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE_skipwpnzoomout
#define M2C_CODE_EQUATE_skipwpnzoomout 1
static const dd kskipwpnzoomout = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy1 1
static const dd k__m2c_macrolocal_190_mvxy1 = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy2 1
static const dd k__m2c_macrolocal_190_mvxy2 = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy3 1
static const dd k__m2c_macrolocal_190_mvxy3 = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_190_mvxy4 1
static const dd k__m2c_macrolocal_190_mvxy4 = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1154;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjusttrack(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjustwpntrack(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjustwpnzoom(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjustzoom(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool currentdroneok(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool demoview(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool destroyview(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
static bool pancode_0_proc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool rotatehdg(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectanydrone(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectnextdrone(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectprevdrone(m2c::_offsets, struct m2c::_STATE*);
static bool selectrnddrone(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setgameviewmode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updategameview(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool weaponview(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangdiff(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdeltaxy(m2c::_offsets, struct m2c::_STATE*);
extern bool calcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool calcmobmaxdim(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_vp(m2c::_offsets, struct m2c::_STATE*);
extern bool loadextrnpan(m2c::_offsets, struct m2c::_STATE*);
extern bool mapview(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool resumesound(m2c::_offsets, struct m2c::_STATE*);
extern bool setpanelmode(m2c::_offsets, struct m2c::_STATE*);
extern bool setviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendsound(m2c::_offsets, struct m2c::_STATE*);
extern bool updateextrn(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef ssf_tab2
extern db& ssf_tab2;
#endif
#ifndef kf_yaw
extern db& kf_yaw;
#endif
#ifndef tmp2_view
extern viewpoint& tmp2_view;
#endif
#ifndef kf_lviewglance
extern db& kf_lviewglance;
#endif
#ifndef zrkrombcamdist
extern dw& zrkrombcamdist;
#endif
#ifndef vshake
extern db& vshake;
#endif
#ifndef kf_trackingcam
extern db& kf_trackingcam;
#endif
#ifndef eairdronelast
extern dw& eairdronelast;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef kf_gndtext
extern db& kf_gndtext;
#endif
#ifndef kf_aaatotornadoview2
extern db& kf_aaatotornadoview2;
#endif
#ifndef ssf_spils
extern db& ssf_spils;
#endif
#ifndef tm_coolieval
extern db& tm_coolieval;
#endif
#ifndef viewrotatemode
extern dw& viewrotatemode;
#endif
#ifndef kf_armorctrlshift
extern db& kf_armorctrlshift;
#endif
#ifndef hshake
extern db& hshake;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef ssf_commsrx
extern db& ssf_commsrx;
#endif
#ifndef togglezrk_zsu
extern db& togglezrk_zsu;
#endif
#ifndef kf_resetwpncam
extern db& kf_resetwpncam;
#endif
#ifndef key
extern db& key;
#endif
#ifndef cockpitviews
extern db& cockpitviews;
#endif
#ifndef kf_spectator
extern db& kf_spectator;
#endif
#ifndef gameviewmode
extern dw& gameviewmode;
#endif
#ifndef kf_trackaclk
extern db& kf_trackaclk;
#endif
#ifndef kf_satellitecam
extern db& kf_satellitecam;
#endif
#ifndef ssf_navigmfd
extern db& ssf_navigmfd;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef eairdroneptrs
extern dw& eairdroneptrs;
#endif
#ifndef kf_navigview
extern db& kf_navigview;
#endif
#ifndef inweaponview
extern db& inweaponview;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef kf_mapview
extern db& kf_mapview;
#endif
#ifndef kf_restorespec
extern db& kf_restorespec;
#endif
#ifndef kf_droneside
extern db& kf_droneside;
#endif
#ifndef kf_range
extern db& kf_range;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef kf_droneview
extern db& kf_droneview;
#endif
#ifndef kf_armorctrlalt
extern db& kf_armorctrlalt;
#endif
#ifndef aairdroneptrs
extern dw& aairdroneptrs;
#endif
#ifndef horizonvalue6
extern dw& horizonvalue6;
#endif
#ifndef kf_rviewfix
extern db& kf_rviewfix;
#endif
#ifndef spinflag
extern db& spinflag;
#endif
#ifndef ssf_pilotmfd
extern db& ssf_pilotmfd;
#endif
#ifndef kf_pilotview
extern db& kf_pilotview;
#endif
#ifndef kf_fasttrkclk
extern db& kf_fasttrkclk;
#endif
#ifndef kf_togglepitchcam
extern db& kf_togglepitchcam;
#endif
#ifndef egnddroneptrs
extern dw& egnddroneptrs;
#endif
#ifndef ssf_radar
extern db& ssf_radar;
#endif
#ifndef ssf_ecm
extern db& ssf_ecm;
#endif
#ifndef kf_minimise
extern db& kf_minimise;
#endif
#ifndef kf_remoteview
extern db& kf_remoteview;
#endif
#ifndef horizonvalue3
extern dw& horizonvalue3;
#endif
#ifndef sam_view
extern viewpoint& sam_view;
#endif
#ifndef kf_changearmor
extern db& kf_changearmor;
#endif
#ifndef ssf_sweep
extern db& ssf_sweep;
#endif
#ifndef kf_zoomout
extern db& kf_zoomout;
#endif
#ifndef ssf_flaps
extern db& ssf_flaps;
#endif
#ifndef kf_aaatotornadoview1
extern db& kf_aaatotornadoview1;
#endif
#ifndef agnddroneptrs
extern dw& agnddroneptrs;
#endif
#ifndef ssf_engine2
extern db& ssf_engine2;
#endif
#ifndef kf_fasttrkaclk
extern db& kf_fasttrkaclk;
#endif
#ifndef shaketimer
extern dw& shaketimer;
#endif
#ifndef egnddronelast
extern dw& egnddronelast;
#endif
#ifndef yawvalue2
extern dw& yawvalue2;
#endif
#ifndef aaa_or_sam_value
extern viewpoint& aaa_or_sam_value;
#endif
#ifndef horizonvalue2
extern dw& horizonvalue2;
#endif
#ifndef ssf_tab1
extern db& ssf_tab1;
#endif
#ifndef kf_resetsatcam
extern db& kf_resetsatcam;
#endif
#ifndef splitscreenbigmapison
extern db& splitscreenbigmapison;
#endif
#ifndef ssf_gear
extern db& ssf_gear;
#endif
#ifndef aaa_view1
extern viewpoint& aaa_view1;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef ssf_engine1
extern db& ssf_engine1;
#endif
#ifndef yawvalue_zrk_aaa
extern dw& yawvalue_zrk_aaa;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef kf_trackclk
extern db& kf_trackclk;
#endif
#ifndef kf_lviewfix
extern db& kf_lviewfix;
#endif
#ifndef currentviewischecksix
extern db& currentviewischecksix;
#endif
#ifndef shakeup
extern db& shakeup;
#endif
#ifndef kf_samlaunchertotornado
extern db& kf_samlaunchertotornado;
#endif
#ifndef kf_zoomin
extern db& kf_zoomin;
#endif
#ifndef kf_rviewglance
extern db& kf_rviewglance;
#endif
#ifndef escopetoggle
extern db& escopetoggle;
#endif
#ifndef ssf_rwr
extern db& ssf_rwr;
#endif
#ifndef ssf_hud
extern db& ssf_hud;
#endif
#ifndef kf_fastzoomin
extern db& kf_fastzoomin;
#endif
#ifndef crewmode
extern dw& crewmode;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef pitchflip
extern dw& pitchflip;
#endif
#ifndef aairdronelast
extern dw& aairdronelast;
#endif
#ifndef kf_droneprev
extern db& kf_droneprev;
#endif
#ifndef kf_dronetype
extern db& kf_dronetype;
#endif
#ifndef aaa_view2
extern viewpoint& aaa_view2;
#endif
#ifndef ssf_oxygen
extern db& ssf_oxygen;
#endif
#ifndef kf_pause
extern db& kf_pause;
#endif
#ifndef yawvalue
extern dw& yawvalue;
#endif
#ifndef kf_trackingcamup
extern db& kf_trackingcamup;
#endif
#ifndef kf_lookdown
extern db& kf_lookdown;
#endif
#ifndef v_view
extern dw& v_view;
#endif
#ifndef kf_resettrkcam
extern db& kf_resettrkcam;
#endif
#ifndef agnddronelast
extern dw& agnddronelast;
#endif
#ifndef horizonvalue
extern dw& horizonvalue;
#endif
#ifndef kf_fastzoomout
extern db& kf_fastzoomout;
#endif
#ifndef kf_viewweapon
extern db& kf_viewweapon;
#endif
#ifndef horizonvalue5
extern dw& horizonvalue5;
#endif
#ifndef ssf_adc
extern db& ssf_adc;
#endif
#ifndef tmpdieflag
extern db& tmpdieflag;
#endif
#ifndef horizonvalue_zrk_aaa
extern dw& horizonvalue_zrk_aaa;
#endif

#endif

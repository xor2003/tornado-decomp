/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MODEL_STUBS_H__
#define __M2C_MODEL_STUBS_H__

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
  db dummydfe71be4_default_seg_0_577;
  db dummydfe71be4_default_seg_0_578;
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
static const word dummydfe71be4_default_seg_0_577 = offsetof(struct endroute, dummydfe71be4_default_seg_0_577);
static const word dummydfe71be4_default_seg_0_578 = offsetof(struct endroute, dummydfe71be4_default_seg_0_578);
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
static const int min_stall_prate = 1*128;
static const int max_stall_prate = 46*128;
static const int max_stall_pdn1 = -28*128;
static const int max_stall_pdn2 = -64*128;
static const int min_stall_rrate = 1*128;
static const int max_stall_rrate = 32*128;
static const int rwash_thresh = 7;
static const int rwash_rate = 40;
static const int damp2 = 1;
static const int damp4 = 2;
static const int damp8 = 3;
static const int damp16 = 4;
static const int damp32 = 5;
static const int damp64 = 6;
static const int min_weight = 31065+200+200;
static const int nom_weight = 45000;
static const int max_ids_fuel = 10720+970;
static const int max_adv_fuel = 11790+970;
static const int max_ext_fuel = 3960*2;
static const int idle_rpm = 63*256;
static const int rpm_delta_max = 1894;
static const int eng_fire_time = 30*100;
static const int min_eng_temp = 0*16;
static const int max_eng_temp = 1000*16;
static const int max_temp_inc = 100*16;
static const int max_temp_dec = -25*16;
static const int gear_time = 300;
static const int sweep_d_25 = 0;
static const int sweep_d_45 = 1;
static const int sweep_d_67 = 2;
static const int sweep_a_25 = 0;
static const int sweep_a_45 = 333;
static const int sweep_a_67 = 700;
static const int flaps_d_zero = 0;
static const int flaps_d_mnvr = 1;
static const int flaps_d_mid = 2;
static const int flaps_d_full = 3;
static const int flaps_a_zero = 0;
static const int flaps_a_mnvr = 150;
static const int flaps_a_mid = 300;
static const int flaps_a_full = 600;
static const int g_max = 120;
static const int g_min = -48;
static const int alpha_max = 21*16;
static const int alpha_min = -8*16;
static const int kgear = 1475;
static const int kairbrakes = 3677;
static const int kground = 2336;
static const int kstatic = 34000;
static const int krolling = 12000;
static const int kfreewheel = 4000;
static const int kwheelsup = 34000;
static const int xwind_vmin = 68;
static const int xwind_vmax = 1023;
static const int xwind_dir_int = 15*100;
static const int kbd_auto_rpt = 50;
static const int joy_auto_rpt = 50;

	#define M2C_MODULE_MODEL 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
#ifndef M2C_CODE_EQUATE_initmodel
#define M2C_CODE_EQUATE_initmodel 1
static const dd kinitmodel = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_calcangles
#define M2C_CODE_EQUATE_calcangles 1
static const dd kcalcangles = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_skipairborne
#define M2C_CODE_EQUATE_skipairborne 1
static const dd kskipairborne = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_calcairdensity
#define M2C_CODE_EQUATE_calcairdensity 1
static const dd kcalcairdensity = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_initnewsector
#define M2C_CODE_EQUATE_initnewsector 1
static const dd kinitnewsector = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_model
#define M2C_CODE_EQUATE_model 1
static const dd kmodel = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_updategamekeys
#define M2C_CODE_EQUATE_updategamekeys 1
static const dd kupdategamekeys = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_preamble
#define M2C_CODE_EQUATE_preamble 1
static const dd kpreamble = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_crosswinds
#define M2C_CODE_EQUATE_crosswinds 1
static const dd kcrosswinds = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_sortjoysticks
#define M2C_CODE_EQUATE_sortjoysticks 1
static const dd ksortjoysticks = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_updatesweep
#define M2C_CODE_EQUATE_updatesweep 1
static const dd kupdatesweep = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_updateflaps
#define M2C_CODE_EQUATE_updateflaps 1
static const dd kupdateflaps = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_calcairspeed
#define M2C_CODE_EQUATE_calcairspeed 1
static const dd kcalcairspeed = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_calcgforce
#define M2C_CODE_EQUATE_calcgforce 1
static const dd kcalcgforce = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_calcrates
#define M2C_CODE_EQUATE_calcrates 1
static const dd kcalcrates = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_calcthrust
#define M2C_CODE_EQUATE_calcthrust 1
static const dd kcalcthrust = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_calcfuelflow
#define M2C_CODE_EQUATE_calcfuelflow 1
static const dd kcalcfuelflow = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_calcdrag
#define M2C_CODE_EQUATE_calcdrag 1
static const dd kcalcdrag = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_calcposition
#define M2C_CODE_EQUATE_calcposition 1
static const dd kcalcposition = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_calcaltitude
#define M2C_CODE_EQUATE_calcaltitude 1
static const dd kcalcaltitude = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_postamble
#define M2C_CODE_EQUATE_postamble 1
static const dd kpostamble = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_updatepaused
#define M2C_CODE_EQUATE_updatepaused 1
static const dd kupdatepaused = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_updatedisabled
#define M2C_CODE_EQUATE_updatedisabled 1
static const dd kupdatedisabled = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_kf_updatepilot
#define M2C_CODE_EQUATE_kf_updatepilot 1
static const dd kkf_updatepilot = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_kf_updatecommon
#define M2C_CODE_EQUATE_kf_updatecommon 1
static const dd kkf_updatecommon = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_kf_updatenavig
#define M2C_CODE_EQUATE_kf_updatenavig 1
static const dd kkf_updatenavig = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_contgamekeys
#define M2C_CODE_EQUATE_contgamekeys 1
static const dd kcontgamekeys = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_jettisonok
#define M2C_CODE_EQUATE_jettisonok 1
static const dd kjettisonok = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_setweight
#define M2C_CODE_EQUATE_setweight 1
static const dd ksetweight = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_skipgear
#define M2C_CODE_EQUATE_skipgear 1
static const dd kskipgear = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_skipwbrakes
#define M2C_CODE_EQUATE_skipwbrakes 1
static const dd kskipwbrakes = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_skipairbrakes
#define M2C_CODE_EQUATE_skipairbrakes 1
static const dd kskipairbrakes = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_skipspils
#define M2C_CODE_EQUATE_skipspils 1
static const dd kskipspils = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_skipautotrim
#define M2C_CODE_EQUATE_skipautotrim 1
static const dd kskipautotrim = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_skiprecal
#define M2C_CODE_EQUATE_skiprecal 1
static const dd kskiprecal = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_skipeject
#define M2C_CODE_EQUATE_skipeject 1
static const dd kskipeject = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_startejectseq
#define M2C_CODE_EQUATE_startejectseq 1
static const dd kstartejectseq = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_skipecm
#define M2C_CODE_EQUATE_skipecm 1
static const dd kskipecm = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_skipquit
#define M2C_CODE_EQUATE_skipquit 1
static const dd kskipquit = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_238_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_238_skip 1
static const dd k__m2c_macrolocal_238_skip = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_exitwinds
#define M2C_CODE_EQUATE_exitwinds 1
static const dd kexitwinds = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_239_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_239_testhi 1
static const dd k__m2c_macrolocal_239_testhi = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_239_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_239_testok 1
static const dd k__m2c_macrolocal_239_testok = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_contwindspeed
#define M2C_CODE_EQUATE_contwindspeed 1
static const dd kcontwindspeed = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_testjoy1
#define M2C_CODE_EQUATE_testjoy1 1
static const dd ktestjoy1 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_testjoy2
#define M2C_CODE_EQUATE_testjoy2 1
static const dd ktestjoy2 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_exitjoysticks
#define M2C_CODE_EQUATE_exitjoysticks 1
static const dd kexitjoysticks = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_251_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_251_skip 1
static const dd k__m2c_macrolocal_251_skip = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_joyelevators
#define M2C_CODE_EQUATE_joyelevators 1
static const dd kjoyelevators = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_joyrudder
#define M2C_CODE_EQUATE_joyrudder 1
static const dd kjoyrudder = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_joythrottle
#define M2C_CODE_EQUATE_joythrottle 1
static const dd kjoythrottle = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_252_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_252_skip 1
static const dd k__m2c_macrolocal_252_skip = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_aboff
#define M2C_CODE_EQUATE_aboff 1
static const dd kaboff = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_abon
#define M2C_CODE_EQUATE_abon 1
static const dd kabon = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_abskip
#define M2C_CODE_EQUATE_abskip 1
static const dd kabskip = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_joyelemanual
#define M2C_CODE_EQUATE_joyelemanual 1
static const dd kjoyelemanual = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_joyailerons
#define M2C_CODE_EQUATE_joyailerons 1
static const dd kjoyailerons = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_joyeleapproach
#define M2C_CODE_EQUATE_joyeleapproach 1
static const dd kjoyeleapproach = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_joyeleacquire
#define M2C_CODE_EQUATE_joyeleacquire 1
static const dd kjoyeleacquire = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_joyeletf
#define M2C_CODE_EQUATE_joyeletf 1
static const dd kjoyeletf = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_contjoyride
#define M2C_CODE_EQUATE_contjoyride 1
static const dd kcontjoyride = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_joyailmanual
#define M2C_CODE_EQUATE_joyailmanual 1
static const dd kjoyailmanual = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_rrateok
#define M2C_CODE_EQUATE_rrateok 1
static const dd krrateok = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_joyailapproach
#define M2C_CODE_EQUATE_joyailapproach 1
static const dd kjoyailapproach = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_joyailacquire
#define M2C_CODE_EQUATE_joyailacquire 1
static const dd kjoyailacquire = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_joyailtrack
#define M2C_CODE_EQUATE_joyailtrack 1
static const dd kjoyailtrack = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_sweepexit
#define M2C_CODE_EQUATE_sweepexit 1
static const dd ksweepexit = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_skipsweepfwd
#define M2C_CODE_EQUATE_skipsweepfwd 1
static const dd kskipsweepfwd = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_skipsweepback
#define M2C_CODE_EQUATE_skipsweepback 1
static const dd kskipsweepback = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_movewingsback
#define M2C_CODE_EQUATE_movewingsback 1
static const dd kmovewingsback = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_setwingdest
#define M2C_CODE_EQUATE_setwingdest 1
static const dd ksetwingdest = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_setwingval
#define M2C_CODE_EQUATE_setwingval 1
static const dd ksetwingval = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_flapsexit
#define M2C_CODE_EQUATE_flapsexit 1
static const dd kflapsexit = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_intoflapsup
#define M2C_CODE_EQUATE_intoflapsup 1
static const dd kintoflapsup = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_skipflapsup
#define M2C_CODE_EQUATE_skipflapsup 1
static const dd kskipflapsup = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_intoflapsdn
#define M2C_CODE_EQUATE_intoflapsdn 1
static const dd kintoflapsdn = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_skipflapsdn
#define M2C_CODE_EQUATE_skipflapsdn 1
static const dd kskipflapsdn = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_moveflapsdown
#define M2C_CODE_EQUATE_moveflapsdown 1
static const dd kmoveflapsdown = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_setflapdest
#define M2C_CODE_EQUATE_setflapdest 1
static const dd ksetflapdest = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_setflapval
#define M2C_CODE_EQUATE_setflapval 1
static const dd ksetflapval = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_calcairdensexit
#define M2C_CODE_EQUATE_calcairdensexit 1
static const dd kcalcairdensexit = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_kfsok
#define M2C_CODE_EQUATE_kfsok 1
static const dd kkfsok = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_sortgmax
#define M2C_CODE_EQUATE_sortgmax 1
static const dd ksortgmax = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_sortgmin
#define M2C_CODE_EQUATE_sortgmin 1
static const dd ksortgmin = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_setgmax
#define M2C_CODE_EQUATE_setgmax 1
static const dd ksetgmax = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_contgforce
#define M2C_CODE_EQUATE_contgforce 1
static const dd kcontgforce = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_contstallroll
#define M2C_CODE_EQUATE_contstallroll 1
static const dd kcontstallroll = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_checkgforce
#define M2C_CODE_EQUATE_checkgforce 1
static const dd kcheckgforce = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_setgcoord
#define M2C_CODE_EQUATE_setgcoord 1
static const dd ksetgcoord = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_setalpha
#define M2C_CODE_EQUATE_setalpha 1
static const dd ksetalpha = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_spinrates
#define M2C_CODE_EQUATE_spinrates 1
static const dd kspinrates = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_gndsteering
#define M2C_CODE_EQUATE_gndsteering 1
static const dd kgndsteering = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_fix90
#define M2C_CODE_EQUATE_fix90 1
static const dd kfix90 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_sethdgrate
#define M2C_CODE_EQUATE_sethdgrate 1
static const dd ksethdgrate = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_sumcontrols
#define M2C_CODE_EQUATE_sumcontrols 1
static const dd ksumcontrols = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_stallpitchdown
#define M2C_CODE_EQUATE_stallpitchdown 1
static const dd kstallpitchdown = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_contpitchrate
#define M2C_CODE_EQUATE_contpitchrate 1
static const dd kcontpitchrate = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_setpitchrate
#define M2C_CODE_EQUATE_setpitchrate 1
static const dd ksetpitchrate = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_damprate
#define M2C_CODE_EQUATE_damprate 1
static const dd kdamprate = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_skipgndpdown
#define M2C_CODE_EQUATE_skipgndpdown 1
static const dd kskipgndpdown = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_293_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_293_skip 1
static const dd k__m2c_macrolocal_293_skip = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_setdeltaprate
#define M2C_CODE_EQUATE_setdeltaprate 1
static const dd ksetdeltaprate = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_294_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_294_skip 1
static const dd k__m2c_macrolocal_294_skip = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_skipstartspin
#define M2C_CODE_EQUATE_skipstartspin 1
static const dd kskipstartspin = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_setrollrate
#define M2C_CODE_EQUATE_setrollrate 1
static const dd ksetrollrate = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_setdeltarrate
#define M2C_CODE_EQUATE_setdeltarrate 1
static const dd ksetdeltarrate = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_stallwingdrop
#define M2C_CODE_EQUATE_stallwingdrop 1
static const dd kstallwingdrop = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_calcratesexit
#define M2C_CODE_EQUATE_calcratesexit 1
static const dd kcalcratesexit = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_recoveryrates
#define M2C_CODE_EQUATE_recoveryrates 1
static const dd krecoveryrates = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_contspinpitch
#define M2C_CODE_EQUATE_contspinpitch 1
static const dd kcontspinpitch = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_dampspinpitch
#define M2C_CODE_EQUATE_dampspinpitch 1
static const dd kdampspinpitch = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_contspinroll
#define M2C_CODE_EQUATE_contspinroll 1
static const dd kcontspinroll = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_dampspinroll
#define M2C_CODE_EQUATE_dampspinroll 1
static const dd kdampspinroll = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_calcrpm1
#define M2C_CODE_EQUATE_calcrpm1 1
static const dd kcalcrpm1 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_spooldown1
#define M2C_CODE_EQUATE_spooldown1 1
static const dd kspooldown1 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_calcrpm2
#define M2C_CODE_EQUATE_calcrpm2 1
static const dd kcalcrpm2 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_spooldown2
#define M2C_CODE_EQUATE_spooldown2 1
static const dd kspooldown2 = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_rpmok
#define M2C_CODE_EQUATE_rpmok 1
static const dd krpmok = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_setthrust1
#define M2C_CODE_EQUATE_setthrust1 1
static const dd ksetthrust1 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_calcengtemp
#define M2C_CODE_EQUATE_calcengtemp 1
static const dd kcalcengtemp = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_setthrust2
#define M2C_CODE_EQUATE_setthrust2 1
static const dd ksetthrust2 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_calcthrustvar
#define M2C_CODE_EQUATE_calcthrustvar 1
static const dd kcalcthrustvar = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_setthrust
#define M2C_CODE_EQUATE_setthrust 1
static const dd ksetthrust = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_sortthrust
#define M2C_CODE_EQUATE_sortthrust 1
static const dd ksortthrust = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_dampfuelflow
#define M2C_CODE_EQUATE_dampfuelflow 1
static const dd kdampfuelflow = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_calcsfvalue
#define M2C_CODE_EQUATE_calcsfvalue 1
static const dd kcalcsfvalue = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_setinduceddrag
#define M2C_CODE_EQUATE_setinduceddrag 1
static const dd ksetinduceddrag = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_setksweep
#define M2C_CODE_EQUATE_setksweep 1
static const dd ksetksweep = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_setksweepcl2
#define M2C_CODE_EQUATE_setksweepcl2 1
static const dd ksetksweepcl2 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_setdrag
#define M2C_CODE_EQUATE_setdrag 1
static const dd ksetdrag = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_addwbrakedrag
#define M2C_CODE_EQUATE_addwbrakedrag 1
static const dd kaddwbrakedrag = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_calcaccel
#define M2C_CODE_EQUATE_calcaccel 1
static const dd kcalcaccel = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_calcvav
#define M2C_CODE_EQUATE_calcvav 1
static const dd kcalcvav = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_setzdot
#define M2C_CODE_EQUATE_setzdot 1
static const dd ksetzdot = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel126
#define M2C_CODE_EQUATE_dummylabel126 1
static const dd kdummylabel126 = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_sortairborne
#define M2C_CODE_EQUATE_sortairborne 1
static const dd ksortairborne = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel127
#define M2C_CODE_EQUATE_dummylabel127 1
static const dd kdummylabel127 = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_contcalcalt
#define M2C_CODE_EQUATE_contcalcalt 1
static const dd kcontcalcalt = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel128
#define M2C_CODE_EQUATE_dummylabel128 1
static const dd kdummylabel128 = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel129
#define M2C_CODE_EQUATE_dummylabel129 1
static const dd kdummylabel129 = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_346_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_346_skip 1
static const dd k__m2c_macrolocal_346_skip = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_skiptouchdown
#define M2C_CODE_EQUATE_skiptouchdown 1
static const dd kskiptouchdown = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel130
#define M2C_CODE_EQUATE_dummylabel130 1
static const dd kdummylabel130 = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_didntlandonroad
#define M2C_CODE_EQUATE_didntlandonroad 1
static const dd kdidntlandonroad = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_347_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_347_skip 1
static const dd k__m2c_macrolocal_347_skip = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE_contlanding
#define M2C_CODE_EQUATE_contlanding 1
static const dd kcontlanding = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_attok
#define M2C_CODE_EQUATE_attok 1
static const dd kattok = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel131
#define M2C_CODE_EQUATE_dummylabel131 1
static const dd kdummylabel131 = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_destroytornado
#define M2C_CODE_EQUATE_destroytornado 1
static const dd kdestroytornado = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel132
#define M2C_CODE_EQUATE_dummylabel132 1
static const dd kdummylabel132 = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_sinkok
#define M2C_CODE_EQUATE_sinkok 1
static const dd ksinkok = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel133
#define M2C_CODE_EQUATE_dummylabel133 1
static const dd kdummylabel133 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE_rollok
#define M2C_CODE_EQUATE_rollok 1
static const dd krollok = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_noseok
#define M2C_CODE_EQUATE_noseok 1
static const dd knoseok = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel134
#define M2C_CODE_EQUATE_dummylabel134 1
static const dd kdummylabel134 = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel135
#define M2C_CODE_EQUATE_dummylabel135 1
static const dd kdummylabel135 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_sortlanding
#define M2C_CODE_EQUATE_sortlanding 1
static const dd ksortlanding = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_355_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_355_skip 1
static const dd k__m2c_macrolocal_355_skip = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_sortwheelsup
#define M2C_CODE_EQUATE_sortwheelsup 1
static const dd ksortwheelsup = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_357_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_357_skip 1
static const dd k__m2c_macrolocal_357_skip = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_landheavy
#define M2C_CODE_EQUATE_landheavy 1
static const dd klandheavy = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel136
#define M2C_CODE_EQUATE_dummylabel136 1
static const dd kdummylabel136 = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel137
#define M2C_CODE_EQUATE_dummylabel137 1
static const dd kdummylabel137 = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_358_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_358_skip 1
static const dd k__m2c_macrolocal_358_skip = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_sortdeadstick
#define M2C_CODE_EQUATE_sortdeadstick 1
static const dd ksortdeadstick = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel138
#define M2C_CODE_EQUATE_dummylabel138 1
static const dd kdummylabel138 = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_359_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_359_skip 1
static const dd k__m2c_macrolocal_359_skip = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel139
#define M2C_CODE_EQUATE_dummylabel139 1
static const dd kdummylabel139 = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel140
#define M2C_CODE_EQUATE_dummylabel140 1
static const dd kdummylabel140 = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel141
#define M2C_CODE_EQUATE_dummylabel141 1
static const dd kdummylabel141 = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel142
#define M2C_CODE_EQUATE_dummylabel142 1
static const dd kdummylabel142 = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_setanim
#define M2C_CODE_EQUATE_setanim 1
static const dd ksetanim = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel143
#define M2C_CODE_EQUATE_dummylabel143 1
static const dd kdummylabel143 = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel144
#define M2C_CODE_EQUATE_dummylabel144 1
static const dd kdummylabel144 = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel145
#define M2C_CODE_EQUATE_dummylabel145 1
static const dd kdummylabel145 = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_nobuffet
#define M2C_CODE_EQUATE_nobuffet 1
static const dd knobuffet = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_lobuffet
#define M2C_CODE_EQUATE_lobuffet 1
static const dd klobuffet = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_hibuffet
#define M2C_CODE_EQUATE_hibuffet 1
static const dd khibuffet = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_buffetok
#define M2C_CODE_EQUATE_buffetok 1
static const dd kbuffetok = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_367_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_367_skip 1
static const dd k__m2c_macrolocal_367_skip = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_368_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_368_skip 1
static const dd k__m2c_macrolocal_368_skip = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_369_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_369_skip 1
static const dd k__m2c_macrolocal_369_skip = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_flapsok
#define M2C_CODE_EQUATE_flapsok 1
static const dd kflapsok = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_370_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_370_skip 1
static const dd k__m2c_macrolocal_370_skip = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_skiphilltest
#define M2C_CODE_EQUATE_skiphilltest 1
static const dd kskiphilltest = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_371_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_371_skip 1
static const dd k__m2c_macrolocal_371_skip = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_372_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_372_skip 1
static const dd k__m2c_macrolocal_372_skip = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_373_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_373_skip 1
static const dd k__m2c_macrolocal_373_skip = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel146
#define M2C_CODE_EQUATE_dummylabel146 1
static const dd kdummylabel146 = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_374_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_374_skip 1
static const dd k__m2c_macrolocal_374_skip = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_375_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_375_skip 1
static const dd k__m2c_macrolocal_375_skip = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel147
#define M2C_CODE_EQUATE_dummylabel147 1
static const dd kdummylabel147 = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_377_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_377_skip 1
static const dd k__m2c_macrolocal_377_skip = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_378_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_378_skip 1
static const dd k__m2c_macrolocal_378_skip = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE_skipsurfacechk
#define M2C_CODE_EQUATE_skipsurfacechk 1
static const dd kskipsurfacechk = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel148
#define M2C_CODE_EQUATE_dummylabel148 1
static const dd kdummylabel148 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_379_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_379_skip 1
static const dd k__m2c_macrolocal_379_skip = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_380_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_380_skip 1
static const dd k__m2c_macrolocal_380_skip = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel149
#define M2C_CODE_EQUATE_dummylabel149 1
static const dd kdummylabel149 = 0x115c;
#endif
#ifndef M2C_CODE_EQUATE_hardsurface
#define M2C_CODE_EQUATE_hardsurface 1
static const dd khardsurface = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_381_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_381_skip 1
static const dd k__m2c_macrolocal_381_skip = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_railsurface
#define M2C_CODE_EQUATE_railsurface 1
static const dd krailsurface = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_382_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_382_skip 1
static const dd k__m2c_macrolocal_382_skip = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_ditched
#define M2C_CODE_EQUATE_ditched 1
static const dd kditched = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_383_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_383_skip 1
static const dd k__m2c_macrolocal_383_skip = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE_nooffhard
#define M2C_CODE_EQUATE_nooffhard 1
static const dd knooffhard = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE_looffhard
#define M2C_CODE_EQUATE_looffhard 1
static const dd klooffhard = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_hioffhard
#define M2C_CODE_EQUATE_hioffhard 1
static const dd khioffhard = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_gndspeedhigh
#define M2C_CODE_EQUATE_gndspeedhigh 1
static const dd kgndspeedhigh = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_384_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_384_skip 1
static const dd k__m2c_macrolocal_384_skip = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_385_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_385_skip 1
static const dd k__m2c_macrolocal_385_skip = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_386_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_386_skip 1
static const dd k__m2c_macrolocal_386_skip = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_387_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_387_skip 1
static const dd k__m2c_macrolocal_387_skip = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_388_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_388_skip 1
static const dd k__m2c_macrolocal_388_skip = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_390_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_390_skip 1
static const dd k__m2c_macrolocal_390_skip = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_391_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_391_skip 1
static const dd k__m2c_macrolocal_391_skip = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel150
#define M2C_CODE_EQUATE_dummylabel150 1
static const dd kdummylabel150 = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE_skipengfire
#define M2C_CODE_EQUATE_skipengfire 1
static const dd kskipengfire = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel151
#define M2C_CODE_EQUATE_dummylabel151 1
static const dd kdummylabel151 = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel152
#define M2C_CODE_EQUATE_dummylabel152 1
static const dd kdummylabel152 = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_395_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_395_skip 1
static const dd k__m2c_macrolocal_395_skip = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_skipbrakeshake
#define M2C_CODE_EQUATE_skipbrakeshake 1
static const dd kskipbrakeshake = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel153
#define M2C_CODE_EQUATE_dummylabel153 1
static const dd kdummylabel153 = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel154
#define M2C_CODE_EQUATE_dummylabel154 1
static const dd kdummylabel154 = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_396_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_396_skip 1
static const dd k__m2c_macrolocal_396_skip = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel155
#define M2C_CODE_EQUATE_dummylabel155 1
static const dd kdummylabel155 = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_skipsmoketrail
#define M2C_CODE_EQUATE_skipsmoketrail 1
static const dd kskipsmoketrail = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel156
#define M2C_CODE_EQUATE_dummylabel156 1
static const dd kdummylabel156 = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel157
#define M2C_CODE_EQUATE_dummylabel157 1
static const dd kdummylabel157 = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_dxok
#define M2C_CODE_EQUATE_dxok 1
static const dd kdxok = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel158
#define M2C_CODE_EQUATE_dummylabel158 1
static const dd kdummylabel158 = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE_dyok
#define M2C_CODE_EQUATE_dyok 1
static const dd kdyok = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel159
#define M2C_CODE_EQUATE_dummylabel159 1
static const dd kdummylabel159 = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE_dzok
#define M2C_CODE_EQUATE_dzok 1
static const dd kdzok = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel160
#define M2C_CODE_EQUATE_dummylabel160 1
static const dd kdummylabel160 = 0x1180;
#endif
#ifndef M2C_CODE_EQUATE_collisionloop
#define M2C_CODE_EQUATE_collisionloop 1
static const dd kcollisionloop = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel161
#define M2C_CODE_EQUATE_dummylabel161 1
static const dd kdummylabel161 = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE_hitgndobject
#define M2C_CODE_EQUATE_hitgndobject 1
static const dd khitgndobject = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE_hitmobobject
#define M2C_CODE_EQUATE_hitmobobject 1
static const dd khitmobobject = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE_skipcollisions
#define M2C_CODE_EQUATE_skipcollisions 1
static const dd kskipcollisions = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel162
#define M2C_CODE_EQUATE_dummylabel162 1
static const dd kdummylabel162 = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_406_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_406_skip 1
static const dd k__m2c_macrolocal_406_skip = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel163
#define M2C_CODE_EQUATE_dummylabel163 1
static const dd kdummylabel163 = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_408_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_408_skip 1
static const dd k__m2c_macrolocal_408_skip = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE_gameintr20
#define M2C_CODE_EQUATE_gameintr20 1
static const dd kgameintr20 = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_409_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_409_skip 1
static const dd k__m2c_macrolocal_409_skip = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_scanpaused
#define M2C_CODE_EQUATE_scanpaused 1
static const dd kscanpaused = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_410_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_410_skip 1
static const dd k__m2c_macrolocal_410_skip = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_scandisabled
#define M2C_CODE_EQUATE_scandisabled 1
static const dd kscandisabled = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_kf_scanpilot
#define M2C_CODE_EQUATE_kf_scanpilot 1
static const dd kkf_scanpilot = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE_kf_scancommon
#define M2C_CODE_EQUATE_kf_scancommon 1
static const dd kkf_scancommon = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE_kf_scannavig
#define M2C_CODE_EQUATE_kf_scannavig 1
static const dd kkf_scannavig = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE_exitintr20
#define M2C_CODE_EQUATE_exitintr20 1
static const dd kexitintr20 = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE_washroll1
#define M2C_CODE_EQUATE_washroll1 1
static const dd kwashroll1 = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE_washroll2
#define M2C_CODE_EQUATE_washroll2 1
static const dd kwashroll2 = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE_washroll3
#define M2C_CODE_EQUATE_washroll3 1
static const dd kwashroll3 = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_washroll4
#define M2C_CODE_EQUATE_washroll4 1
static const dd kwashroll4 = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel164
#define M2C_CODE_EQUATE_dummylabel164 1
static const dd kdummylabel164 = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE_washrollok
#define M2C_CODE_EQUATE_washrollok 1
static const dd kwashrollok = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel165
#define M2C_CODE_EQUATE_dummylabel165 1
static const dd kdummylabel165 = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel166
#define M2C_CODE_EQUATE_dummylabel166 1
static const dd kdummylabel166 = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel167
#define M2C_CODE_EQUATE_dummylabel167 1
static const dd kdummylabel167 = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE_gameintr100
#define M2C_CODE_EQUATE_gameintr100 1
static const dd kgameintr100 = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_520_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_520_skip 1
static const dd k__m2c_macrolocal_520_skip = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE_gameintr50
#define M2C_CODE_EQUATE_gameintr50 1
static const dd kgameintr50 = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE_kbdstatus
#define M2C_CODE_EQUATE_kbdstatus 1
static const dd kkbdstatus = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel168
#define M2C_CODE_EQUATE_dummylabel168 1
static const dd kdummylabel168 = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE_kbdelevators
#define M2C_CODE_EQUATE_kbdelevators 1
static const dd kkbdelevators = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_kbdelemanual
#define M2C_CODE_EQUATE_kbdelemanual 1
static const dd kkbdelemanual = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel169
#define M2C_CODE_EQUATE_dummylabel169 1
static const dd kdummylabel169 = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE_updateposn
#define M2C_CODE_EQUATE_updateposn 1
static const dd kupdateposn = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE_kbdailerons
#define M2C_CODE_EQUATE_kbdailerons 1
static const dd kkbdailerons = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE_kbdeleapproach
#define M2C_CODE_EQUATE_kbdeleapproach 1
static const dd kkbdeleapproach = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE_kbdeleacquire
#define M2C_CODE_EQUATE_kbdeleacquire 1
static const dd kkbdeleacquire = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE_skipincalt
#define M2C_CODE_EQUATE_skipincalt 1
static const dd kskipincalt = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE_contincalt
#define M2C_CODE_EQUATE_contincalt 1
static const dd kcontincalt = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel170
#define M2C_CODE_EQUATE_dummylabel170 1
static const dd kdummylabel170 = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel171
#define M2C_CODE_EQUATE_dummylabel171 1
static const dd kdummylabel171 = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel172
#define M2C_CODE_EQUATE_dummylabel172 1
static const dd kdummylabel172 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_skipdecalt
#define M2C_CODE_EQUATE_skipdecalt 1
static const dd kskipdecalt = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_contdecalt
#define M2C_CODE_EQUATE_contdecalt 1
static const dd kcontdecalt = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel173
#define M2C_CODE_EQUATE_dummylabel173 1
static const dd kdummylabel173 = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel174
#define M2C_CODE_EQUATE_dummylabel174 1
static const dd kdummylabel174 = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel175
#define M2C_CODE_EQUATE_dummylabel175 1
static const dd kdummylabel175 = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE_kbdeletf
#define M2C_CODE_EQUATE_kbdeletf 1
static const dd kkbdeletf = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE_skipincride
#define M2C_CODE_EQUATE_skipincride 1
static const dd kskipincride = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_contincride
#define M2C_CODE_EQUATE_contincride 1
static const dd kcontincride = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel176
#define M2C_CODE_EQUATE_dummylabel176 1
static const dd kdummylabel176 = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE_contdecride
#define M2C_CODE_EQUATE_contdecride 1
static const dd kcontdecride = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel177
#define M2C_CODE_EQUATE_dummylabel177 1
static const dd kdummylabel177 = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE_kbdailmanual
#define M2C_CODE_EQUATE_kbdailmanual 1
static const dd kkbdailmanual = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE_kbdrudder
#define M2C_CODE_EQUATE_kbdrudder 1
static const dd kkbdrudder = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_kbdailapproach
#define M2C_CODE_EQUATE_kbdailapproach 1
static const dd kkbdailapproach = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE_kbdailacquire
#define M2C_CODE_EQUATE_kbdailacquire 1
static const dd kkbdailacquire = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE_skipinchdg
#define M2C_CODE_EQUATE_skipinchdg 1
static const dd kskipinchdg = 0x11be;
#endif
#ifndef M2C_CODE_EQUATE_continchdg
#define M2C_CODE_EQUATE_continchdg 1
static const dd kcontinchdg = 0x11bf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel178
#define M2C_CODE_EQUATE_dummylabel178 1
static const dd kdummylabel178 = 0x11c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel179
#define M2C_CODE_EQUATE_dummylabel179 1
static const dd kdummylabel179 = 0x11c1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel180
#define M2C_CODE_EQUATE_dummylabel180 1
static const dd kdummylabel180 = 0x11c2;
#endif
#ifndef M2C_CODE_EQUATE_skipdechdg
#define M2C_CODE_EQUATE_skipdechdg 1
static const dd kskipdechdg = 0x11c3;
#endif
#ifndef M2C_CODE_EQUATE_contdechdg
#define M2C_CODE_EQUATE_contdechdg 1
static const dd kcontdechdg = 0x11c4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel181
#define M2C_CODE_EQUATE_dummylabel181 1
static const dd kdummylabel181 = 0x11c5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel182
#define M2C_CODE_EQUATE_dummylabel182 1
static const dd kdummylabel182 = 0x11c6;
#endif
#ifndef M2C_CODE_EQUATE_kbdailtrack
#define M2C_CODE_EQUATE_kbdailtrack 1
static const dd kkbdailtrack = 0x11c7;
#endif
#ifndef M2C_CODE_EQUATE_kbdthrottle
#define M2C_CODE_EQUATE_kbdthrottle 1
static const dd kkbdthrottle = 0x11c8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel183
#define M2C_CODE_EQUATE_dummylabel183 1
static const dd kdummylabel183 = 0x11c9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_521_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_521_skip 1
static const dd k__m2c_macrolocal_521_skip = 0x11ca;
#endif
#ifndef M2C_CODE_EQUATE_kbdautothrot
#define M2C_CODE_EQUATE_kbdautothrot 1
static const dd kkbdautothrot = 0x11cb;
#endif
#ifndef M2C_CODE_EQUATE_closethrottle
#define M2C_CODE_EQUATE_closethrottle 1
static const dd kclosethrottle = 0x11cc;
#endif
#ifndef M2C_CODE_EQUATE_increheat
#define M2C_CODE_EQUATE_increheat 1
static const dd kincreheat = 0x11cd;
#endif
#ifndef M2C_CODE_EQUATE_reheaton
#define M2C_CODE_EQUATE_reheaton 1
static const dd kreheaton = 0x11ce;
#endif
#ifndef M2C_CODE_EQUATE_slamthrotopen
#define M2C_CODE_EQUATE_slamthrotopen 1
static const dd kslamthrotopen = 0x11cf;
#endif
#ifndef M2C_CODE_EQUATE_slamreheatopen
#define M2C_CODE_EQUATE_slamreheatopen 1
static const dd kslamreheatopen = 0x11d0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel184
#define M2C_CODE_EQUATE_dummylabel184 1
static const dd kdummylabel184 = 0x11d1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel185
#define M2C_CODE_EQUATE_dummylabel185 1
static const dd kdummylabel185 = 0x11d2;
#endif
#ifndef M2C_CODE_EQUATE_decreheat
#define M2C_CODE_EQUATE_decreheat 1
static const dd kdecreheat = 0x11d3;
#endif
#ifndef M2C_CODE_EQUATE_reheatoff
#define M2C_CODE_EQUATE_reheatoff 1
static const dd kreheatoff = 0x11d4;
#endif
#ifndef M2C_CODE_EQUATE_slamthrotshut
#define M2C_CODE_EQUATE_slamthrotshut 1
static const dd kslamthrotshut = 0x11d5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel186
#define M2C_CODE_EQUATE_dummylabel186 1
static const dd kdummylabel186 = 0x11d6;
#endif
#ifndef M2C_CODE_EQUATE_slamreheatshut
#define M2C_CODE_EQUATE_slamreheatshut 1
static const dd kslamreheatshut = 0x11d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel187
#define M2C_CODE_EQUATE_dummylabel187 1
static const dd kdummylabel187 = 0x11d8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel188
#define M2C_CODE_EQUATE_dummylabel188 1
static const dd kdummylabel188 = 0x11d9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_522_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_522_skip 1
static const dd k__m2c_macrolocal_522_skip = 0x11da;
#endif
#ifndef M2C_CODE_EQUATE_skipincvias
#define M2C_CODE_EQUATE_skipincvias 1
static const dd kskipincvias = 0x11db;
#endif
#ifndef M2C_CODE_EQUATE_contincvias
#define M2C_CODE_EQUATE_contincvias 1
static const dd kcontincvias = 0x11dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel189
#define M2C_CODE_EQUATE_dummylabel189 1
static const dd kdummylabel189 = 0x11dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel190
#define M2C_CODE_EQUATE_dummylabel190 1
static const dd kdummylabel190 = 0x11de;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel191
#define M2C_CODE_EQUATE_dummylabel191 1
static const dd kdummylabel191 = 0x11df;
#endif
#ifndef M2C_CODE_EQUATE_contdecvias
#define M2C_CODE_EQUATE_contdecvias 1
static const dd kcontdecvias = 0x11e0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel192
#define M2C_CODE_EQUATE_dummylabel192 1
static const dd kdummylabel192 = 0x11e1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel193
#define M2C_CODE_EQUATE_dummylabel193 1
static const dd kdummylabel193 = 0x11e2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel194
#define M2C_CODE_EQUATE_dummylabel194 1
static const dd kdummylabel194 = 0x11e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel195
#define M2C_CODE_EQUATE_dummylabel195 1
static const dd kdummylabel195 = 0x11e4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x11e5;
#endif
#ifndef M2C_CODE_EQUATE_incposn
#define M2C_CODE_EQUATE_incposn 1
static const dd kincposn = 0x11e6;
#endif
#ifndef M2C_CODE_EQUATE_decposn
#define M2C_CODE_EQUATE_decposn 1
static const dd kdecposn = 0x11e7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel196
#define M2C_CODE_EQUATE_dummylabel196 1
static const dd kdummylabel196 = 0x11e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel197
#define M2C_CODE_EQUATE_dummylabel197 1
static const dd kdummylabel197 = 0x11e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel198
#define M2C_CODE_EQUATE_dummylabel198 1
static const dd kdummylabel198 = 0x11ea;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x11eb;
#endif
#ifndef M2C_CODE_EQUATE_sweepinactive
#define M2C_CODE_EQUATE_sweepinactive 1
static const dd ksweepinactive = 0x11ec;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel199
#define M2C_CODE_EQUATE_dummylabel199 1
static const dd kdummylabel199 = 0x11ed;
#endif
#ifndef M2C_CODE_EQUATE_calcsfexit
#define M2C_CODE_EQUATE_calcsfexit 1
static const dd kcalcsfexit = 0x11ee;
#endif
#ifndef M2C_CODE_EQUATE_flapsinactive
#define M2C_CODE_EQUATE_flapsinactive 1
static const dd kflapsinactive = 0x11ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel200
#define M2C_CODE_EQUATE_dummylabel200 1
static const dd kdummylabel200 = 0x11f0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x11f1;
#endif
#ifndef M2C_CODE_EQUATE_sorttemp
#define M2C_CODE_EQUATE_sorttemp 1
static const dd ksorttemp = 0x11f2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel201
#define M2C_CODE_EQUATE_dummylabel201 1
static const dd kdummylabel201 = 0x11f3;
#endif
#ifndef M2C_CODE_EQUATE_conttemp
#define M2C_CODE_EQUATE_conttemp 1
static const dd kconttemp = 0x11f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel202
#define M2C_CODE_EQUATE_dummylabel202 1
static const dd kdummylabel202 = 0x11f5;
#endif
#ifndef M2C_CODE_EQUATE_dectemp
#define M2C_CODE_EQUATE_dectemp 1
static const dd kdectemp = 0x11f6;
#endif
#ifndef M2C_CODE_EQUATE_inctemp
#define M2C_CODE_EQUATE_inctemp 1
static const dd kinctemp = 0x11f7;
#endif
#ifndef M2C_CODE_EQUATE_tempok
#define M2C_CODE_EQUATE_tempok 1
static const dd ktempok = 0x11f8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x11f9;
#endif
#ifndef M2C_CODE_EQUATE_negchange
#define M2C_CODE_EQUATE_negchange 1
static const dd knegchange = 0x11fa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel203
#define M2C_CODE_EQUATE_dummylabel203 1
static const dd kdummylabel203 = 0x11fb;
#endif
#ifndef M2C_CODE_EQUATE_dampok
#define M2C_CODE_EQUATE_dampok 1
static const dd kdampok = 0x11fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel204
#define M2C_CODE_EQUATE_dummylabel204 1
static const dd kdummylabel204 = 0x11fd;
#endif
#ifndef M2C_CODE_EQUATE_sorttwoplayer
#define M2C_CODE_EQUATE_sorttwoplayer 1
static const dd ksorttwoplayer = 0x11fe;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x11ff;
#endif
#ifndef M2C_CODE_EQUATE_exitdestroy
#define M2C_CODE_EQUATE_exitdestroy 1
static const dd kexitdestroy = 0x1200;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel205
#define M2C_CODE_EQUATE_dummylabel205 1
static const dd kdummylabel205 = 0x1201;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel206
#define M2C_CODE_EQUATE_dummylabel206 1
static const dd kdummylabel206 = 0x1202;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1203;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x1204;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel207
#define M2C_CODE_EQUATE_dummylabel207 1
static const dd kdummylabel207 = 0x1205;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1206;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcairdensity(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcairspeed(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcaltitude(m2c::_offsets, struct m2c::_STATE*);
static bool calcangles(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcdrag(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcengtemp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcfuelflow(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcgforce(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcposition(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcrates(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcsfvalue(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcthrust(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool crosswinds(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool damprate(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool destroytornado(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool gameintr100(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool gameintr20(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initmodel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initnewsector(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool model(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool postamble(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool preamble(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortjoysticks(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool startejectseq(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateflaps(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updategamekeys(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateposn(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatesweep(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdeltatime(m2c::_offsets, struct m2c::_STATE*);
extern bool calcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsinefine(m2c::_offsets, struct m2c::_STATE*);
extern bool calcstoreswt(m2c::_offsets, struct m2c::_STATE*);
extern bool cratercollision(m2c::_offsets, struct m2c::_STATE*);
extern bool createmobile(m2c::_offsets, struct m2c::_STATE*);
extern bool deletemobile(m2c::_offsets, struct m2c::_STATE*);
extern bool gearsound(m2c::_offsets, struct m2c::_STATE*);
extern bool groundcollision(m2c::_offsets, struct m2c::_STATE*);
extern bool initctrldevice(m2c::_offsets, struct m2c::_STATE*);
extern bool jetall(m2c::_offsets, struct m2c::_STATE*);
extern bool jetextstores(m2c::_offsets, struct m2c::_STATE*);
extern bool jetexttanks(m2c::_offsets, struct m2c::_STATE*);
extern bool limitpfine(m2c::_offsets, struct m2c::_STATE*);
extern bool makesmokeeffect(m2c::_offsets, struct m2c::_STATE*);
extern bool mindamage(m2c::_offsets, struct m2c::_STATE*);
extern bool mobilecollision(m2c::_offsets, struct m2c::_STATE*);
extern bool moveviewpoint(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool readjoysticks(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshmusic(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshsound(m2c::_offsets, struct m2c::_STATE*);
extern bool screechsound(m2c::_offsets, struct m2c::_STATE*);
extern bool screenshaker(m2c::_offsets, struct m2c::_STATE*);
extern bool setgameviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool staticcollision(m2c::_offsets, struct m2c::_STATE*);
extern bool surfacecheck(m2c::_offsets, struct m2c::_STATE*);
extern bool treecollision(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


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

#endif

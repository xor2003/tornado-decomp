/* THIS IS GENERATED FILE */

        
#ifndef __M2C_HUD2_STUBS_H__
#define __M2C_HUD2_STUBS_H__

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
  db dummy68abc1d3_default_seg_0_322;
  db dummy68abc1d3_default_seg_0_323;
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

struct viewport {
  dw v_x_org;
  dw v_y_org;
  dw v_width;
  dw v_depth;
  db v_scale_up;
  db v_scale_dn;
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
static const word dummy68abc1d3_default_seg_0_322 = offsetof(struct endroute, dummy68abc1d3_default_seg_0_322);
static const word dummy68abc1d3_default_seg_0_323 = offsetof(struct endroute, dummy68abc1d3_default_seg_0_323);
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
static const word v_x_org = offsetof(struct viewport, v_x_org);
static const word v_y_org = offsetof(struct viewport, v_y_org);
static const word v_width = offsetof(struct viewport, v_width);
static const word v_depth = offsetof(struct viewport, v_depth);
static const word v_scale_up = offsetof(struct viewport, v_scale_up);
static const word v_scale_dn = offsetof(struct viewport, v_scale_dn);
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
static const int fog_col_start = 8;
static const int fog_col_count = 104;
static const int night_col_start = 24;
static const int night_col_count = 88;
static const int ir_col_start = 8;
static const int ir_col_count = 104;
static const int col_black = 0;
static const int col_lt_red = 1;
static const int col_yellow = 2;
static const int col_lt_cyan = 3;
static const int col_white = 4;
static const int col_text_norm1 = 5;
static const int col_text_norm2 = 6;
static const int col_text_alert = 7;
static const int col_nt_white1 = 8;
static const int col_nt_grey1 = 9;
static const int col_nt_grey2 = 10;
static const int col_nt_grey3 = 11;
static const int col_nt_grey4 = 12;
static const int col_nt_red1 = 13;
static const int col_nt_red2 = 14;
static const int col_nt_red3 = 15;
static const int col_nt_blue1 = 16;
static const int col_nt_blue2 = 17;
static const int col_nt_yellow1 = 18;
static const int col_nt_amber1 = 19;
static const int col_nt_amber2 = 20;
static const int col_nt_green1 = 21;
static const int col_nt_r_white1 = 22;
static const int col_nt_b_white1 = 23;
static const int col_white1 = 24;
static const int col_grey1 = 25;
static const int col_grey2 = 26;
static const int col_grey3 = 27;
static const int col_grey4 = 28;
static const int col_black1 = 29;
static const int col_cyan_grey1 = 30;
static const int col_cyan_grey2 = 31;
static const int col_cyan_grey3 = 32;
static const int col_cyan_grey4 = 33;
static const int col_cyan_grey5 = 34;
static const int col_cyan_grey6 = 35;
static const int col_sand1 = 36;
static const int col_sand2 = 37;
static const int col_sand3 = 38;
static const int col_sand4 = 39;
static const int col_sand5 = 40;
static const int col_rust1 = 41;
static const int col_rust2 = 42;
static const int col_rust3 = 43;
static const int col_rust4 = 44;
static const int col_rust5 = 45;
static const int col_new_grey1 = 46;
static const int col_new_grey2 = 47;
static const int col_new_grey3 = 48;
static const int col_new_grey4 = 49;
static const int col_yellow1 = 50;
static const int col_amber1 = 51;
static const int col_amber2 = 52;
static const int col_amber3 = 53;
static const int col_amber4 = 54;
static const int col_red1 = 55;
static const int col_green1 = 56;
static const int col_green2 = 57;
static const int col_green3 = 58;
static const int col_green4 = 59;
static const int col_dk_cyan1 = 60;
static const int col_dk_cyan2 = 61;
static const int col_dk_cyan3 = 62;
static const int col_dk_cyan4 = 63;
static const int col_olive1 = 64;
static const int col_olive2 = 65;
static const int col_olive3 = 66;
static const int col_olive4 = 67;
static const int col_olive5 = 68;
static const int col_olive6 = 69;
static const int col_near_white1 = 70;
static const int col_smoke_grey1 = 71;
static const int col_smoke_grey2 = 72;
static const int col_road1 = 73;
static const int col_rwy1 = 74;
static const int col_gnd1 = 75;
static const int col_gnd2 = 76;
static const int col_rail1 = 77;
static const int col_rail2 = 78;
static const int col_river1 = 79;
static const int col_hill1 = 80;
static const int col_hill2 = 81;
static const int col_hill3 = 82;
static const int col_hill4 = 83;
static const int col_hill5 = 84;
static const int col_hill6 = 85;
static const int col_hill7 = 86;
static const int col_hill8 = 87;
static const int col_hill9 = 88;
static const int col_hill10 = 89;
static const int col_hill11 = 90;
static const int col_hill12 = 91;
static const int col_hill13 = 92;
static const int col_hill14 = 93;
static const int col_hill15 = 94;
static const int col_hill16 = 95;
static const int col_sky1 = 96;
static const int col_sky2 = 97;
static const int col_sky3 = 98;
static const int col_sky4 = 99;
static const int col_sky5 = 100;
static const int col_sky6 = 101;
static const int col_sky7 = 102;
static const int col_sky8 = 103;
static const int col_sky9 = 104;
static const int col_sky10 = 105;
static const int col_sky11 = 106;
static const int col_sky12 = 107;
static const int col_sky13 = 108;
static const int col_sky14 = 109;
static const int col_sky15 = 110;
static const int col_sky16 = 111;
static const int col_map_hill1 = 112;
static const int col_map_hill2 = 113;
static const int col_map_hill3 = 114;
static const int col_map_hill4 = 115;
static const int col_map_hill5 = 116;
static const int col_map_hill6 = 117;
static const int col_map_hill7 = 118;
static const int col_map_hill8 = 119;
static const int col_map_hill9 = 120;
static const int col_map_hill10 = 121;
static const int col_map_hill11 = 122;
static const int col_map_hill12 = 123;
static const int col_map_hill13 = 124;
static const int col_map_hill14 = 125;
static const int col_map_hill15 = 126;
static const int col_map_hill16 = 127;
static const int col_needle = 128;
static const int col_counter = 129;
static const int col_red_needle = 130;
static const int col_adi_sky = 131;
static const int col_adi_gnd = 132;
static const int col_hud = 133;
static const int col_bug = 134;
static const int col_aoa = 135;
static const int col_knee_pad = 136;
static const int col_knee_ink1 = 137;
static const int col_knee_ink2 = 138;
static const int col_knee_pen = 139;
static const int col_knee_num = 140;
static const int col_sight = 141;
#define col_tiald_sym (col_black)
#define col_map_sym (col_black)
#define col_ref_sym (col_black)
#define col_radar_mask (col_black)
#define col_rad_miss (col_map_enemy)
#define col_ir_miss (col_crt_red)
static const int col_local1 = 209;
static const int col_local2 = 213;
static const int col_local3 = 215;
static const int col_local4 = 218;
static const int col_local5 = 220;
static const int col_nt_local1 = 233;
static const int col_nt_local2 = 234;
static const int col_nt_local3 = 235;
static const int col_nt_local4 = 236;
static const int col_nt_local5 = 255;
static const int col_glide1 = 210;
static const int col_glide2 = 216;
static const int col_glide3 = 220;
static const int col_nt_glide1 = 234;
static const int col_nt_glide2 = 235;
static const int col_nt_glide3 = 236;
static const int col_map_gnd1 = 144;
static const int col_map_road1 = 145;
static const int col_map_rail1 = 146;
static const int col_map_rwy1 = 147;
static const int col_map_river1 = 148;
static const int col_map_green1 = 149;
static const int col_map_green2 = 150;
static const int col_map_compass = 151;
static const int col_map_locator = 152;
static const int col_map_allied = 153;
static const int col_map_border = 154;
static const int col_compass = 155;
static const int col_locator = 156;
static const int col_map_rwy2 = 157;
static const int col_map_enemy = 158;
static const int col_crt_red = 159;
static const int col_crt1 = 160;
static const int col_crt2 = 161;
static const int col_crt3 = 162;
static const int col_crt4 = 163;
static const int col_crt5 = 164;
static const int col_crt6 = 165;
static const int col_crt7 = 166;
static const int col_crt8 = 167;
static const int col_crt9 = 168;
static const int col_crt10 = 169;
static const int col_crt11 = 170;
static const int col_crt12 = 171;
static const int col_crt13 = 172;
static const int col_crt14 = 173;
static const int col_crt15 = 174;
static const int col_crt16 = 175;
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
static const int input_all = 0;
static const int input_alpha = 1;
static const int input_num = 2;
static const int p_ext = 31;
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
static const int vp_rec_size = 10;
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
static const int hud_x_fs_org = 160;
static const int hud_y_fs_org = 96;
static const int clip_left2 = 104;
static const int clip_right2 = 215;
static const int base_line_y = 20;
static const int base_line_width = 40;

	#define M2C_MODULE_HUD2 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& hudswitch2;
extern dw& dummy68abc1d3_data_2_2351;
extern dw& dummy68abc1d3_data_4_2352;
extern dw& dummy68abc1d3_data_6_2353;
extern dw& dummy68abc1d3_data_8_2354;
extern dw& dummy68abc1d3_data_a_2355;
extern dw& dummy68abc1d3_data_c_2356;
extern dw& dummy68abc1d3_data_e_2357;
extern dw& dummy68abc1d3_data_10_2358;
extern dw& dummy68abc1d3_data_12_2359;
extern dw& dummy68abc1d3_data_14_2360;
extern db& hudenabled2;
extern db& machoption2;
extern dw& clip_above2;
extern dw& clip_below2;
extern dw& hdgyoff2;
extern viewport& vp2;
extern dw& markerx2;
extern db (& markery2)[2];
extern db (& dummy68abc1d3_data_2c_2403)[2];
extern db (& dummy68abc1d3_data_2e_2404)[2];
extern db (& dummy68abc1d3_data_30_2405)[2];
extern db (& dummy68abc1d3_data_32_2406)[2];
extern db (& dummy68abc1d3_data_34_2407)[2];
extern db (& dummy68abc1d3_data_36_2408)[2];
extern db (& dummy68abc1d3_data_38_2409)[2];
extern db (& dummy68abc1d3_data_3a_2410)[2];
extern db (& dummy68abc1d3_data_3c_2411)[2];
extern db (& dummy68abc1d3_data_3e_2412)[2];
extern db (& dummy68abc1d3_data_40_2413)[2];
extern db (& dummy68abc1d3_data_42_2414)[2];
extern db (& dummy68abc1d3_data_44_2415)[2];
extern db (& dummy68abc1d3_data_46_2416)[2];
extern db (& dummy68abc1d3_data_48_2417)[2];
extern db (& dummy68abc1d3_data_4a_2418)[2];
extern db (& dummy68abc1d3_data_4c_2419)[2];
extern db (& dummy68abc1d3_data_4e_2421)[2];
extern db (& dummy68abc1d3_data_50_2422)[2];
extern db (& dummy68abc1d3_data_52_2423)[2];
extern db (& dummy68abc1d3_data_54_2424)[2];
extern db (& dummy68abc1d3_data_56_2425)[2];
extern db (& dummy68abc1d3_data_58_2426)[2];
extern db (& dummy68abc1d3_data_5a_2427)[2];
extern db (& dummy68abc1d3_data_5c_2428)[2];
extern db (& dummy68abc1d3_data_5e_2429)[2];
extern db (& dummy68abc1d3_data_60_2430)[2];
extern db (& dummy68abc1d3_data_62_2431)[2];
extern db (& dummy68abc1d3_data_64_2432)[2];
extern db (& dummy68abc1d3_data_66_2433)[2];
extern db (& dummy68abc1d3_data_68_2434)[2];
extern db (& dummy68abc1d3_data_6a_2435)[2];
extern db (& dummy68abc1d3_data_6c_2436)[2];
extern db (& dummy68abc1d3_data_6e_2437)[2];
extern dw& barxoff2;
extern dw& baryoff2;
extern dw& px02;
extern dw& py02;
extern dw& px1b;
extern dw& py1b;
extern dw& px2b;
extern dw& py2b;
extern dw& px3b;
extern dw& py3b;
extern dw& px4b;
extern dw& py4b;
extern dw& px5b;
extern dw& py5b;
extern dw& px6b;
extern dw& py6b;
extern dw& px7b;
extern dw& py7b;
extern dw& px8b;
extern dw& py8b;
extern dw& px9b;
extern dw& py9b;
extern dw& px10b;
extern dw& py10b;
extern dw& px11b;
extern dw& py11b;
extern dw& px12b;
extern dw& py12b;
extern dw& clockxorg2;
extern db (& clockyorg2)[2];
extern db (& dummy68abc1d3_data_ac_2486)[2];
extern db (& dummy68abc1d3_data_ae_2487)[2];
extern db (& dummy68abc1d3_data_b0_2488)[2];
extern db (& dummy68abc1d3_data_b2_2489)[2];
extern db (& dummy68abc1d3_data_b4_2490)[2];
extern db (& dummy68abc1d3_data_b6_2491)[2];
extern db (& dummy68abc1d3_data_b8_2492)[2];
extern db (& dummy68abc1d3_data_ba_2493)[2];
extern db (& dummy68abc1d3_data_bc_2494)[2];
extern db (& dummy68abc1d3_data_be_2495)[2];
extern db (& dummy68abc1d3_data_c0_2496)[2];
extern db (& dummy68abc1d3_data_c2_2497)[2];
extern db (& dummy68abc1d3_data_c4_2498)[2];
extern db (& dummy68abc1d3_data_c6_2499)[2];
extern db (& dummy68abc1d3_data_c8_2500)[2];
extern db (& dummy68abc1d3_data_ca_2501)[2];
extern db (& dummy68abc1d3_data_cc_2502)[2];
extern db (& dummy68abc1d3_data_ce_2503)[2];
extern db (& dummy68abc1d3_data_d0_2504)[2];
extern db (& dummy68abc1d3_data_d2_2505)[2];
extern db (& dummy68abc1d3_data_d4_2506)[2];
extern db (& dummy68abc1d3_data_d6_2507)[2];
extern db (& dummy68abc1d3_data_d8_2508)[2];
extern db (& dummy68abc1d3_data_da_2509)[2];
extern db (& dummy68abc1d3_data_dc_2510)[2];
extern db (& dummy68abc1d3_data_de_2511)[2];
extern db (& dummy68abc1d3_data_e0_2512)[2];
extern db (& dummy68abc1d3_data_e2_2513)[2];
extern db (& dummy68abc1d3_data_e4_2514)[2];
extern db (& dummy68abc1d3_data_e6_2515)[2];
extern db (& dummy68abc1d3_data_e8_2516)[2];
extern db (& dummy68abc1d3_data_ea_2517)[2];
extern db (& dummy68abc1d3_data_ec_2518)[2];
extern db (& dummy68abc1d3_data_ee_2519)[2];
extern db (& dummy68abc1d3_data_f0_2520)[2];
extern db (& dummy68abc1d3_data_f2_2521)[2];
extern db (& dummy68abc1d3_data_f4_2522)[2];
extern db (& dummy68abc1d3_data_f6_2523)[2];
extern db (& dummy68abc1d3_data_f8_2524)[2];
extern db (& dummy68abc1d3_data_fa_2525)[2];
extern db (& dummy68abc1d3_data_fc_2526)[2];
extern db (& dummy68abc1d3_data_fe_2527)[2];
extern db (& dummy68abc1d3_data_100_2528)[2];
extern db (& dummy68abc1d3_data_102_2529)[2];
extern db (& dummy68abc1d3_data_104_2530)[2];
extern db (& dummy68abc1d3_data_106_2531)[2];
extern db (& dummy68abc1d3_data_108_2532)[2];
extern db (& dummy68abc1d3_data_10a_2533)[2];
extern db (& dummy68abc1d3_data_10c_2534)[2];
extern db (& dummy68abc1d3_data_10e_2535)[2];
extern db (& dummy68abc1d3_data_110_2536)[2];
extern db (& dummy68abc1d3_data_112_2537)[2];
extern db (& dummy68abc1d3_data_114_2538)[2];
extern db (& dummy68abc1d3_data_116_2539)[2];
extern db (& dummy68abc1d3_data_118_2540)[2];
extern db (& dummy68abc1d3_data_11a_2541)[2];
extern db (& dummy68abc1d3_data_11c_2543)[2];
extern db (& dummy68abc1d3_data_11e_2544)[2];
extern db (& dummy68abc1d3_data_120_2545)[2];
extern db (& dummy68abc1d3_data_122_2546)[2];
extern db (& dummy68abc1d3_data_124_2547)[2];
extern db (& dummy68abc1d3_data_126_2548)[2];
extern db (& dummy68abc1d3_data_128_2549)[2];
extern db (& dummy68abc1d3_data_12a_2550)[2];
extern db (& dummy68abc1d3_data_12c_2551)[2];
extern db (& dummy68abc1d3_data_12e_2552)[2];
extern db (& dummy68abc1d3_data_130_2553)[2];
extern db (& dummy68abc1d3_data_132_2554)[2];
extern db (& dummy68abc1d3_data_134_2555)[2];
extern db (& dummy68abc1d3_data_136_2556)[2];
extern db (& dummy68abc1d3_data_138_2557)[2];
extern db (& dummy68abc1d3_data_13a_2558)[2];
extern db (& dummy68abc1d3_data_13c_2559)[2];
extern db (& dummy68abc1d3_data_13e_2560)[2];
extern db (& dummy68abc1d3_data_140_2561)[2];
extern db (& dummy68abc1d3_data_142_2562)[2];
extern db (& dummy68abc1d3_data_144_2563)[2];
extern db (& dummy68abc1d3_data_146_2564)[2];
extern db (& dummy68abc1d3_data_148_2565)[2];
extern db (& dummy68abc1d3_data_14a_2566)[2];
extern db (& dummy68abc1d3_data_14c_2567)[2];
extern db (& dummy68abc1d3_data_14e_2568)[2];
extern db (& dummy68abc1d3_data_150_2569)[2];
extern db (& dummy68abc1d3_data_152_2570)[2];
extern db (& dummy68abc1d3_data_154_2571)[2];
extern db (& dummy68abc1d3_data_156_2572)[2];
extern db (& dummy68abc1d3_data_158_2573)[2];
extern db (& dummy68abc1d3_data_15a_2574)[2];
extern db (& dummy68abc1d3_data_15c_2575)[2];
extern db (& dummy68abc1d3_data_15e_2576)[2];
extern db (& dummy68abc1d3_data_160_2577)[2];
extern db (& dummy68abc1d3_data_162_2578)[2];
extern db (& dummy68abc1d3_data_164_2579)[2];
extern db (& dummy68abc1d3_data_166_2580)[2];
extern db (& dummy68abc1d3_data_168_2581)[2];
extern db (& dummy68abc1d3_data_16a_2582)[2];
extern db (& dummy68abc1d3_data_16c_2583)[2];
extern db (& dummy68abc1d3_data_16e_2584)[2];
extern db (& dummy68abc1d3_data_170_2585)[2];
extern db (& dummy68abc1d3_data_172_2586)[2];
extern db (& dummy68abc1d3_data_174_2587)[2];
extern db (& dummy68abc1d3_data_176_2588)[2];
extern db (& dummy68abc1d3_data_178_2589)[2];
extern db (& dummy68abc1d3_data_17a_2590)[2];
extern db (& dummy68abc1d3_data_17c_2591)[2];
extern db (& dummy68abc1d3_data_17e_2592)[2];
extern db (& dummy68abc1d3_data_180_2593)[2];
extern db (& dummy68abc1d3_data_182_2594)[2];
extern db (& dummy68abc1d3_data_184_2596)[2];
extern db (& dummy68abc1d3_data_186_2597)[2];
extern db (& dummy68abc1d3_data_188_2598)[2];
extern db (& dummy68abc1d3_data_18a_2599)[2];
extern db (& dummy68abc1d3_data_18c_2600)[2];
extern db (& dummy68abc1d3_data_18e_2601)[2];
extern db (& dummy68abc1d3_data_190_2602)[2];
extern db (& dummy68abc1d3_data_192_2603)[2];
extern db (& dummy68abc1d3_data_194_2604)[2];
extern db (& dummy68abc1d3_data_196_2605)[2];
extern db (& dummy68abc1d3_data_198_2606)[2];
extern db (& dummy68abc1d3_data_19a_2607)[2];
extern db (& dummy68abc1d3_data_19c_2608)[2];
extern db (& dummy68abc1d3_data_19e_2609)[2];
extern db (& dummy68abc1d3_data_1a0_2610)[2];
extern db (& dummy68abc1d3_data_1a2_2611)[2];
extern db (& dummy68abc1d3_data_1a4_2612)[2];
extern db (& dummy68abc1d3_data_1a6_2613)[2];
extern db (& dummy68abc1d3_data_1a8_2614)[2];
extern db (& dummy68abc1d3_data_1aa_2615)[2];
extern db (& dummy68abc1d3_data_1ac_2616)[2];
extern db (& dummy68abc1d3_data_1ae_2617)[2];
extern db (& dummy68abc1d3_data_1b0_2618)[2];
extern db (& dummy68abc1d3_data_1b2_2619)[2];
extern db (& dummy68abc1d3_data_1b4_2620)[2];
extern db (& dummy68abc1d3_data_1b6_2621)[2];
extern db (& dummy68abc1d3_data_1b8_2622)[2];
extern db (& dummy68abc1d3_data_1ba_2623)[2];
extern db (& dummy68abc1d3_data_1bc_2624)[2];
extern db (& dummy68abc1d3_data_1be_2625)[2];
extern db (& dummy68abc1d3_data_1c0_2626)[2];
extern db (& dummy68abc1d3_data_1c2_2627)[2];
extern db (& dummy68abc1d3_data_1c4_2628)[2];
extern db (& dummy68abc1d3_data_1c6_2629)[2];
extern db (& dummy68abc1d3_data_1c8_2630)[2];
extern db (& dummy68abc1d3_data_1ca_2631)[2];
extern db (& dummy68abc1d3_data_1cc_2632)[2];
extern db (& dummy68abc1d3_data_1ce_2633)[2];
extern db (& dummy68abc1d3_data_1d0_2634)[2];
extern db (& dummy68abc1d3_data_1d2_2635)[2];
extern db (& dummy68abc1d3_data_1d4_2636)[2];
extern db (& dummy68abc1d3_data_1d6_2637)[2];
extern db (& dummy68abc1d3_data_1d8_2638)[2];
extern db (& dummy68abc1d3_data_1da_2639)[2];
extern db (& dummy68abc1d3_data_1dc_2640)[2];
extern db (& dummy68abc1d3_data_1de_2641)[2];
extern db (& dummy68abc1d3_data_1e0_2642)[2];
extern db (& dummy68abc1d3_data_1e2_2643)[2];
extern db (& dummy68abc1d3_data_1e4_2644)[2];
extern db (& dummy68abc1d3_data_1e6_2645)[2];
extern db (& dummy68abc1d3_data_1e8_2646)[2];
extern db (& dummy68abc1d3_data_1ea_2647)[2];
extern db (& dummy68abc1d3_data_1ec_2648)[2];
extern db (& dummy68abc1d3_data_1ee_2649)[2];
extern db (& dummy68abc1d3_data_1f0_2650)[2];
extern db (& dummy68abc1d3_data_1f2_2651)[2];
extern db (& dummy68abc1d3_data_1f4_2652)[2];
extern db (& dummy68abc1d3_data_1f6_2653)[2];
extern db (& dummy68abc1d3_data_1f8_2654)[2];
extern db (& dummy68abc1d3_data_1fa_2655)[2];
extern db& dummy68abc1d3_data_1fc_2663;
extern db& dummy68abc1d3_data_1fd_2664;
extern db (& dummy68abc1d3_data_1fe_2665)[10];
extern db& dummy68abc1d3_data_208_2666;
extern db (& dummy68abc1d3_data_209_2670)[2];
extern db (& dummy68abc1d3_data_20b_2671)[2];
extern dw& dummy68abc1d3_data_20d_2672;
extern db (& dummy68abc1d3_data_20f_2673)[2];
extern dw& dummy68abc1d3_data_211_2674;
extern db (& dummy68abc1d3_data_213_2675)[2];
extern dw& dummy68abc1d3_data_215_2676;
extern dw& dummy68abc1d3_data_217_2677;
extern char& dummy68abc1d3_data_219_2678;
extern db (& dummy68abc1d3_data_21a_2679)[2];
extern db& dummy68abc1d3_data_21c_2680;
extern db (& dummy68abc1d3_data_21d_2684)[2];
extern db (& dummy68abc1d3_data_21f_2685)[2];
extern dw& dummy68abc1d3_data_221_2686;
extern db (& dummy68abc1d3_data_223_2687)[2];
extern dw& dummy68abc1d3_data_225_2688;
extern char& dummy68abc1d3_data_227_2689;
extern db (& dummy68abc1d3_data_228_2690)[2];
extern dw& dummy68abc1d3_data_22a_2691;
extern dw& dummy68abc1d3_data_22c_2692;
extern db (& dummy68abc1d3_data_22e_2693)[2];
extern db& dummy68abc1d3_data_230_2694;
extern db (& dummy68abc1d3_data_231_2698)[2];
extern db (& dummy68abc1d3_data_233_2699)[2];
extern dw& dummy68abc1d3_data_235_2700;
extern db (& dummy68abc1d3_data_237_2701)[2];
extern dw& dummy68abc1d3_data_239_2702;
extern db (& dummy68abc1d3_data_23b_2703)[2];
extern dw& dummy68abc1d3_data_23d_2704;
extern dw& dummy68abc1d3_data_23f_2705;
extern db (& dummy68abc1d3_data_241_2706)[2];
extern db& dummy68abc1d3_data_243_2707;
extern db (& dummy68abc1d3_data_244_2711)[2];
extern db (& dummy68abc1d3_data_246_2712)[2];
extern dw& dummy68abc1d3_data_248_2713;
extern db (& dummy68abc1d3_data_24a_2714)[2];
extern dw& dummy68abc1d3_data_24c_2715;
extern char (& dummy68abc1d3_data_24e_2716)[4];
extern db (& dummy68abc1d3_data_252_2717)[2];
extern dw& dummy68abc1d3_data_254_2718;
extern db (& dummy68abc1d3_data_256_2719)[2];
extern dw& dummy68abc1d3_data_258_2720;
extern char& dummy68abc1d3_data_25a_2721;
extern db (& dummy68abc1d3_data_25b_2722)[2];
extern dw& dummy68abc1d3_data_25d_2723;
extern dw& dummy68abc1d3_data_25f_2724;
extern db (& dummy68abc1d3_data_261_2725)[2];
extern db& dummy68abc1d3_data_263_2726;
extern db (& dummy68abc1d3_data_264_2730)[2];
extern db (& dummy68abc1d3_data_266_2731)[2];
extern dw& dummy68abc1d3_data_268_2732;
extern db (& dummy68abc1d3_data_26a_2733)[2];
extern dw& dummy68abc1d3_data_26c_2734;
extern char (& dummy68abc1d3_data_26e_2735)[4];
extern db (& dummy68abc1d3_data_272_2736)[2];
extern dw& dummy68abc1d3_data_274_2737;
extern db (& dummy68abc1d3_data_276_2738)[2];
extern dw& dummy68abc1d3_data_278_2739;
extern char& dummy68abc1d3_data_27a_2740;
extern db (& dummy68abc1d3_data_27b_2741)[2];
extern dw& dummy68abc1d3_data_27d_2742;
extern dw& dummy68abc1d3_data_27f_2743;
extern db (& dummy68abc1d3_data_281_2744)[2];
extern db& dummy68abc1d3_data_283_2745;
extern db (& dummy68abc1d3_data_284_2749)[2];
extern db (& dummy68abc1d3_data_286_2750)[2];
extern dw& dummy68abc1d3_data_288_2751;
extern db (& dummy68abc1d3_data_28a_2752)[2];
extern dw& dummy68abc1d3_data_28c_2753;
extern char (& dummy68abc1d3_data_28e_2754)[4];
extern db (& dummy68abc1d3_data_292_2755)[2];
extern dw& dummy68abc1d3_data_294_2756;
extern db (& dummy68abc1d3_data_296_2757)[2];
extern dw& dummy68abc1d3_data_298_2758;
extern char& dummy68abc1d3_data_29a_2759;
extern db (& dummy68abc1d3_data_29b_2760)[2];
extern dw& dummy68abc1d3_data_29d_2761;
extern dw& dummy68abc1d3_data_29f_2762;
extern db (& dummy68abc1d3_data_2a1_2763)[2];
extern db& dummy68abc1d3_data_2a3_2764;
extern db (& dummy68abc1d3_data_2a4_2769)[2];
extern db (& dummy68abc1d3_data_2a6_2772)[2];
extern dw& dummy68abc1d3_data_2a8_2773;
extern db (& dummy68abc1d3_data_2aa_2774)[2];
extern dw& dummy68abc1d3_data_2ac_2775;
extern db (& dummy68abc1d3_data_2ae_2776)[2];
extern dw& dummy68abc1d3_data_2b0_2777;
extern dw& dummy68abc1d3_data_2b2_2778;
extern db (& dummy68abc1d3_data_2b4_2780)[2];
extern dw& dummy68abc1d3_data_2b6_2781;
extern db (& dummy68abc1d3_data_2b8_2782)[2];
extern dw& dummy68abc1d3_data_2ba_2783;
extern db (& dummy68abc1d3_data_2bc_2784)[2];
extern dw& dummy68abc1d3_data_2be_2785;
extern dw& dummy68abc1d3_data_2c0_2786;
extern db (& dummy68abc1d3_data_2c2_2788)[2];
extern db (& dummy68abc1d3_data_2c4_2791)[2];
extern dw& dummy68abc1d3_data_2c6_2792;
extern db (& dummy68abc1d3_data_2c8_2793)[2];
extern dw& dummy68abc1d3_data_2ca_2794;
extern db (& dummy68abc1d3_data_2cc_2795)[2];
extern dw& dummy68abc1d3_data_2ce_2796;
extern dw& dummy68abc1d3_data_2d0_2797;
extern db (& dummy68abc1d3_data_2d2_2799)[2];
extern dw& dummy68abc1d3_data_2d4_2800;
extern db (& dummy68abc1d3_data_2d6_2801)[2];
extern dw& dummy68abc1d3_data_2d8_2802;
extern db (& dummy68abc1d3_data_2da_2803)[2];
extern dw& dummy68abc1d3_data_2dc_2804;
extern dw& dummy68abc1d3_data_2de_2805;
extern db (& dummy68abc1d3_data_2e0_2807)[2];
extern db& dummy68abc1d3_data_2e2_2808;
extern byte& altbugxy1b;
extern byte& altbugxy2b;
extern byte& countclock1b;
extern byte& countclock2b;
extern byte& countclock3b;
extern byte& setup2dol;
extern byte& baralt2dol;
extern byte& radalt2dol;
extern byte& vkts2dol;
extern byte& cannon2dol;
extern byte& sidewinder2dol;
extern byte& skyflash2dol;
extern byte& airtgt2dol;
extern db& pancode;

	#if __has_include("hud1_data.h")
#include "hud1_data.h"
#endif

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
#ifndef M2C_CODE_EQUATE_updatehud2
#define M2C_CODE_EQUATE_updatehud2 1
static const dd kupdatehud2 = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_inithud2
#define M2C_CODE_EQUATE_inithud2 1
static const dd kinithud2 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_drawhudbrackets2
#define M2C_CODE_EQUATE_drawhudbrackets2 1
static const dd kdrawhudbrackets2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_updateaoameter2
#define M2C_CODE_EQUATE_updateaoameter2 1
static const dd kupdateaoameter2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_63_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_63_skip 1
static const dd k__m2c_macrolocal_63_skip = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_exithud2
#define M2C_CODE_EQUATE_exithud2 1
static const dd kexithud2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_hudnavigation2
#define M2C_CODE_EQUATE_hudnavigation2 1
static const dd khudnavigation2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_updateaoa2
#define M2C_CODE_EQUATE_updateaoa2 1
static const dd kupdateaoa2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_updatevsi2
#define M2C_CODE_EQUATE_updatevsi2 1
static const dd kupdatevsi2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_updatealtclock2
#define M2C_CODE_EQUATE_updatealtclock2 1
static const dd kupdatealtclock2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_updateairspeed2
#define M2C_CODE_EQUATE_updateairspeed2 1
static const dd kupdateairspeed2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_updatehdg2
#define M2C_CODE_EQUATE_updatehdg2 1
static const dd kupdatehdg2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_updatepitch2
#define M2C_CODE_EQUATE_updatepitch2 1
static const dd kupdatepitch2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_updateearlylate2
#define M2C_CODE_EQUATE_updateearlylate2 1
static const dd kupdateearlylate2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_updateacsymbol2
#define M2C_CODE_EQUATE_updateacsymbol2 1
static const dd kupdateacsymbol2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_contnav2
#define M2C_CODE_EQUATE_contnav2 1
static const dd kcontnav2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_updateils2
#define M2C_CODE_EQUATE_updateils2 1
static const dd kupdateils2 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_hudmanualbomb2
#define M2C_CODE_EQUATE_hudmanualbomb2 1
static const dd khudmanualbomb2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_drawccipmrkr2
#define M2C_CODE_EQUATE_drawccipmrkr2 1
static const dd kdrawccipmrkr2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_drawbombfall2
#define M2C_CODE_EQUATE_drawbombfall2 1
static const dd kdrawbombfall2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_hudlaydownbomb2
#define M2C_CODE_EQUATE_hudlaydownbomb2 1
static const dd khudlaydownbomb2 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_drawgndtgtmrkr2
#define M2C_CODE_EQUATE_drawgndtgtmrkr2 1
static const dd kdrawgndtgtmrkr2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_hudloftbomb2
#define M2C_CODE_EQUATE_hudloftbomb2 1
static const dd khudloftbomb2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_updateclock2
#define M2C_CODE_EQUATE_updateclock2 1
static const dd kupdateclock2 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_loftsteeringcue2
#define M2C_CODE_EQUATE_loftsteeringcue2 1
static const dd kloftsteeringcue2 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_drawsolidfall2
#define M2C_CODE_EQUATE_drawsolidfall2 1
static const dd kdrawsolidfall2 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_hudlaserguided2
#define M2C_CODE_EQUATE_hudlaserguided2 1
static const dd khudlaserguided2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_laserrangeclock2
#define M2C_CODE_EQUATE_laserrangeclock2 1
static const dd klaserrangeclock2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_hudjp2332
#define M2C_CODE_EQUATE_hudjp2332 1
static const dd khudjp2332 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_jp233clock2
#define M2C_CODE_EQUATE_jp233clock2 1
static const dd kjp233clock2 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_hudalarmdir2
#define M2C_CODE_EQUATE_hudalarmdir2 1
static const dd khudalarmdir2 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_drawcentrecross2
#define M2C_CODE_EQUATE_drawcentrecross2 1
static const dd kdrawcentrecross2 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_drawalarmclock2
#define M2C_CODE_EQUATE_drawalarmclock2 1
static const dd kdrawalarmclock2 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_hudalarmind2
#define M2C_CODE_EQUATE_hudalarmind2 1
static const dd khudalarmind2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_hudcannon2
#define M2C_CODE_EQUATE_hudcannon2 1
static const dd khudcannon2 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_updatealt2
#define M2C_CODE_EQUATE_updatealt2 1
static const dd kupdatealt2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_drawairtarget2
#define M2C_CODE_EQUATE_drawairtarget2 1
static const dd kdrawairtarget2 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_standbysight2
#define M2C_CODE_EQUATE_standbysight2 1
static const dd kstandbysight2 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_drawintercept2
#define M2C_CODE_EQUATE_drawintercept2 1
static const dd kdrawintercept2 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dispairtgtdata2
#define M2C_CODE_EQUATE_dispairtgtdata2 1
static const dd kdispairtgtdata2 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_drawgndgunclock2
#define M2C_CODE_EQUATE_drawgndgunclock2 1
static const dd kdrawgndgunclock2 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_drawstandby2
#define M2C_CODE_EQUATE_drawstandby2 1
static const dd kdrawstandby2 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_hudsidewinder2
#define M2C_CODE_EQUATE_hudsidewinder2 1
static const dd khudsidewinder2 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_hudskyflash2
#define M2C_CODE_EQUATE_hudskyflash2 1
static const dd khudskyflash2 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_initcont2
#define M2C_CODE_EQUATE_initcont2 1
static const dd kinitcont2 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_initdone2
#define M2C_CODE_EQUATE_initdone2 1
static const dd kinitdone2 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_setclip2
#define M2C_CODE_EQUATE_setclip2 1
static const dd ksetclip2 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_sethudclip2
#define M2C_CODE_EQUATE_sethudclip2 1
static const dd ksethudclip2 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_altclockbug2
#define M2C_CODE_EQUATE_altclockbug2 1
static const dd kaltclockbug2 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_bugquad4b
#define M2C_CODE_EQUATE_bugquad4b 1
static const dd kbugquad4b = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_bugquad3b
#define M2C_CODE_EQUATE_bugquad3b 1
static const dd kbugquad3b = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_bugquad2b
#define M2C_CODE_EQUATE_bugquad2b 1
static const dd kbugquad2b = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_bugquad1b
#define M2C_CODE_EQUATE_bugquad1b 1
static const dd kbugquad1b = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_drawaltbug2
#define M2C_CODE_EQUATE_drawaltbug2 1
static const dd kdrawaltbug2 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_airspeedexit2
#define M2C_CODE_EQUATE_airspeedexit2 1
static const dd kairspeedexit2 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_hdgdotloop2
#define M2C_CODE_EQUATE_hdgdotloop2 1
static const dd khdgdotloop2 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_hdgdigits2
#define M2C_CODE_EQUATE_hdgdigits2 1
static const dd khdgdigits2 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_hdgdigitloop2
#define M2C_CODE_EQUATE_hdgdigitloop2 1
static const dd khdgdigitloop2 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_skipbrg2
#define M2C_CODE_EQUATE_skipbrg2 1
static const dd kskipbrg2 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_limitpitch2
#define M2C_CODE_EQUATE_limitpitch2 1
static const dd klimitpitch2 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_barloop2
#define M2C_CODE_EQUATE_barloop2 1
static const dd kbarloop2 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_bar0
#define M2C_CODE_EQUATE_bar0 1
static const dd kbar0 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_bar90
#define M2C_CODE_EQUATE_bar90 1
static const dd kbar90 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_bar_90
#define M2C_CODE_EQUATE_bar_90 1
static const dd kbar_90 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_drawpitchbar2
#define M2C_CODE_EQUATE_drawpitchbar2 1
static const dd kdrawpitchbar2 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_nextbar2
#define M2C_CODE_EQUATE_nextbar2 1
static const dd knextbar2 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_drawzerobar2
#define M2C_CODE_EQUATE_drawzerobar2 1
static const dd kdrawzerobar2 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_drawsolidbar2
#define M2C_CODE_EQUATE_drawsolidbar2 1
static const dd kdrawsolidbar2 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_drawbrokenbar2
#define M2C_CODE_EQUATE_drawbrokenbar2 1
static const dd kdrawbrokenbar2 = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_sortflip2
#define M2C_CODE_EQUATE_sortflip2 1
static const dd ksortflip2 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_pospitch2
#define M2C_CODE_EQUATE_pospitch2 1
static const dd kpospitch2 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_negpitch2
#define M2C_CODE_EQUATE_negpitch2 1
static const dd knegpitch2 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_drawdownstroke2
#define M2C_CODE_EQUATE_drawdownstroke2 1
static const dd kdrawdownstroke2 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_printpitch2
#define M2C_CODE_EQUATE_printpitch2 1
static const dd kprintpitch2 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_clipline2
#define M2C_CODE_EQUATE_clipline2 1
static const dd kclipline2 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_clipscaledline2
#define M2C_CODE_EQUATE_clipscaledline2 1
static const dd kclipscaledline2 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_pancode_0_proc
#define M2C_CODE_EQUATE_pancode_0_proc 1
static const dd kpancode_0_proc = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_exitearlylate2
#define M2C_CODE_EQUATE_exitearlylate2 1
static const dd kexitearlylate2 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_139_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_139_testhi 1
static const dd k__m2c_macrolocal_139_testhi = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_139_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_139_testok 1
static const dd k__m2c_macrolocal_139_testok = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_projecthudpoint2
#define M2C_CODE_EQUATE_projecthudpoint2 1
static const dd kprojecthudpoint2 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_146_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_146_skip 1
static const dd k__m2c_macrolocal_146_skip = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_failgndtgtmrkr2
#define M2C_CODE_EQUATE_failgndtgtmrkr2 1
static const dd kfailgndtgtmrkr2 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_147_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_147_skip 1
static const dd k__m2c_macrolocal_147_skip = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_148_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_148_skip 1
static const dd k__m2c_macrolocal_148_skip = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_rotatemrkrline2
#define M2C_CODE_EQUATE_rotatemrkrline2 1
static const dd krotatemrkrline2 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_failccipmrkr2
#define M2C_CODE_EQUATE_failccipmrkr2 1
static const dd kfailccipmrkr2 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_149_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_149_skip 1
static const dd k__m2c_macrolocal_149_skip = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_htmargok2
#define M2C_CODE_EQUATE_htmargok2 1
static const dd khtmargok2 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_152_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_152_skip 1
static const dd k__m2c_macrolocal_152_skip = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_154_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_154_skip 1
static const dd k__m2c_macrolocal_154_skip = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_156_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_156_skip 1
static const dd k__m2c_macrolocal_156_skip = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_157_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_157_skip 1
static const dd k__m2c_macrolocal_157_skip = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_exitlaserrange2
#define M2C_CODE_EQUATE_exitlaserrange2 1
static const dd kexitlaserrange2 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_laserrangeok2
#define M2C_CODE_EQUATE_laserrangeok2 1
static const dd klaserrangeok2 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_158_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_158_testhi 1
static const dd k__m2c_macrolocal_158_testhi = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_158_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_158_testok 1
static const dd k__m2c_macrolocal_158_testok = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_165_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_165_skip 1
static const dd k__m2c_macrolocal_165_skip = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_failairtarget2
#define M2C_CODE_EQUATE_failairtarget2 1
static const dd kfailairtarget2 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_166_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_166_skip 1
static const dd k__m2c_macrolocal_166_skip = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_167_skip 1
static const dd k__m2c_macrolocal_167_skip = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_skipa2
#define M2C_CODE_EQUATE_skipa2 1
static const dd kskipa2 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_skipb2
#define M2C_CODE_EQUATE_skipb2 1
static const dd kskipb2 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_skipc2
#define M2C_CODE_EQUATE_skipc2 1
static const dd kskipc2 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_skipd
#define M2C_CODE_EQUATE_skipd 1
static const dd kskipd = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_cannonrange2
#define M2C_CODE_EQUATE_cannonrange2 1
static const dd kcannonrange2 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_168_skip 1
static const dd k__m2c_macrolocal_168_skip = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_sidewinderrange2
#define M2C_CODE_EQUATE_sidewinderrange2 1
static const dd ksidewinderrange2 = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_169_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_169_skip 1
static const dd k__m2c_macrolocal_169_skip = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_skyflashrange2
#define M2C_CODE_EQUATE_skyflashrange2 1
static const dd kskyflashrange2 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_cont400m2
#define M2C_CODE_EQUATE_cont400m2 1
static const dd kcont400m2 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_skip400m2
#define M2C_CODE_EQUATE_skip400m2 1
static const dd kskip400m2 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_170_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_170_skip 1
static const dd k__m2c_macrolocal_170_skip = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_171_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_171_skip 1
static const dd k__m2c_macrolocal_171_skip = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_cont600m2
#define M2C_CODE_EQUATE_cont600m2 1
static const dd kcont600m2 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_skip600m2
#define M2C_CODE_EQUATE_skip600m2 1
static const dd kskip600m2 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_172_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_172_skip 1
static const dd k__m2c_macrolocal_172_skip = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_173_skip 1
static const dd k__m2c_macrolocal_173_skip = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_contairtarget2
#define M2C_CODE_EQUATE_contairtarget2 1
static const dd kcontairtarget2 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_174_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_174_skip 1
static const dd k__m2c_macrolocal_174_skip = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_skipirlock2
#define M2C_CODE_EQUATE_skipirlock2 1
static const dd kskipirlock2 = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_175_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_175_skip 1
static const dd k__m2c_macrolocal_175_skip = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_176_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_176_skip 1
static const dd k__m2c_macrolocal_176_skip = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_177_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_177_skip 1
static const dd k__m2c_macrolocal_177_skip = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_178_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_178_skip 1
static const dd k__m2c_macrolocal_178_skip = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_179_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_179_skip 1
static const dd k__m2c_macrolocal_179_skip = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_180_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_180_skip 1
static const dd k__m2c_macrolocal_180_skip = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_181_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_181_skip 1
static const dd k__m2c_macrolocal_181_skip = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_182_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_182_skip 1
static const dd k__m2c_macrolocal_182_skip = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_183_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_183_skip 1
static const dd k__m2c_macrolocal_183_skip = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_184_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_184_skip 1
static const dd k__m2c_macrolocal_184_skip = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_185_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_185_skip 1
static const dd k__m2c_macrolocal_185_skip = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_186_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_186_skip 1
static const dd k__m2c_macrolocal_186_skip = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_cont900m2
#define M2C_CODE_EQUATE_cont900m2 1
static const dd kcont900m2 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_skip900m2
#define M2C_CODE_EQUATE_skip900m2 1
static const dd kskip900m2 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_cont1500m2
#define M2C_CODE_EQUATE_cont1500m2 1
static const dd kcont1500m2 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_skip1500m2
#define M2C_CODE_EQUATE_skip1500m2 1
static const dd kskip1500m2 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_191_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_191_skip 1
static const dd k__m2c_macrolocal_191_skip = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_exitintercept2
#define M2C_CODE_EQUATE_exitintercept2 1
static const dd kexitintercept2 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x10e8;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clipline2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool dispairtgtdata2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawairtarget2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawalarmclock2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawbombfall2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawbrokenbar2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawccipmrkr2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawcentrecross2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawdownstroke2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawgndgunclock2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawgndtgtmrkr2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawhudbrackets2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawintercept2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawpitchbar2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawsolidbar2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawsolidfall2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawstandby2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawzerobar2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool inithud2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool jp233clock2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool laserrangeclock2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool limitpitch2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loftsteeringcue2(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
static bool pancode_0_proc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool projecthudpoint2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool rotatemrkrline2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sethudclip2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateacsymbol2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateairspeed2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatealt2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatealtclock2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateaoa2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateaoameter2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateclock2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateearlylate2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatehdg2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatehud2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateils2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatepitch2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatevsi2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangdiff(m2c::_offsets, struct m2c::_STATE*);
extern bool calceyecoords(m2c::_offsets, struct m2c::_STATE*);
extern bool calcintercept(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_wp(m2c::_offsets, struct m2c::_STATE*);
extern bool calctgtrelco(m2c::_offsets, struct m2c::_STATE*);
extern bool calctransmatrix(m2c::_offsets, struct m2c::_STATE*);
extern bool drawbrackets(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronespeed(m2c::_offsets, struct m2c::_STATE*);
extern bool hlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);
extern bool sethudlevel(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);
extern bool setsspriteclip(m2c::_offsets, struct m2c::_STATE*);
extern bool ssprite(m2c::_offsets, struct m2c::_STATE*);
extern bool vdotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool vquicklineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vsetviewport(m2c::_offsets, struct m2c::_STATE*);
extern bool xcalcunclipcrt(m2c::_offsets, struct m2c::_STATE*);
extern bool xdotclip(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef ironwork
extern db& ironwork;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef hudlevel
extern db& hudlevel;
#endif
#ifndef dispalpha
extern dw& dispalpha;
#endif
#ifndef m_sinr
extern dw& m_sinr;
#endif
#ifndef ilsactive
extern db& ilsactive;
#endif
#ifndef m_cosr
extern dw& m_cosr;
#endif
#ifndef kf_hudcontrast
extern db& kf_hudcontrast;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef zftlo
extern dw& zftlo;
#endif
#ifndef spritey
extern dw& spritey;
#endif
#ifndef ilsglidepos
extern dw& ilsglidepos;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef loftratio
extern dw& loftratio;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
#ifndef armmode
extern dw& armmode;
#endif
#ifndef huddigits
extern dw& huddigits;
#endif
#ifndef ilslocalpos
extern dw& ilslocalpos;
#endif
#ifndef dispbaralt
extern dw& dispbaralt;
#endif
#ifndef packageptr
extern dw& packageptr;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef ze
extern dw& ze;
#endif
#ifndef quietercockpit
extern db& quietercockpit;
#endif
#ifndef dispmachnum
extern dw& dispmachnum;
#endif
#ifndef loftclock
extern dw& loftclock;
#endif
#ifndef dispairtgtrng
extern dw& dispairtgtrng;
#endif
#ifndef spriteptr
extern dw& spriteptr;
#endif
#ifndef dispzdot
extern dw& dispzdot;
#endif
#ifndef sprite
extern dw& sprite;
#endif
#ifndef vkts
extern dw& vkts;
#endif
#ifndef floatwp
extern waypoint& floatwp;
#endif
#ifndef gndtgtrange
extern dd& gndtgtrange;
#endif
#ifndef dispairtgthdg
extern dw& dispairtgthdg;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef waytotal
extern dw& waytotal;
#endif
#ifndef kf_hudswitch
extern db& kf_hudswitch;
#endif
#ifndef kf_hudoption
extern db& kf_hudoption;
#endif
#ifndef rwrtgtvalid
extern db& rwrtgtvalid;
#endif
#ifndef dispairtgtalt
extern dw& dispairtgtalt;
#endif
#ifndef rfine
extern dw& rfine;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef trueradalt
extern dw& trueradalt;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef tgt_view
extern viewpoint& tgt_view;
#endif
#ifndef ccip_view
extern viewpoint& ccip_view;
#endif
#ifndef wpbrgfine
extern dw& wpbrgfine;
#endif
#ifndef armlock
extern db& armlock;
#endif
#ifndef laseractive
extern db& laseractive;
#endif
#ifndef ssf_engine1
extern db& ssf_engine1;
#endif
#ifndef spritex
extern dw& spritex;
#endif
#ifndef tfauto
extern db& tfauto;
#endif
#ifndef airtgtrange
extern dd& airtgtrange;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef wpbrg
extern dw& wpbrg;
#endif
#ifndef dispairtgtvel
extern dw& dispairtgtvel;
#endif
#ifndef prtcl
extern dw& prtcl;
#endif
#ifndef cannons
extern dw& cannons;
#endif
#ifndef wptimeearlylate
extern dw& wptimeearlylate;
#endif
#ifndef zfthi
extern dw& zfthi;
#endif
#ifndef safetyheights
extern dw& safetyheights;
#endif
#ifndef hfine
extern dw& hfine;
#endif
#ifndef prtln
extern dw& prtln;
#endif
#ifndef jp233timer
extern dw& jp233timer;
#endif
#ifndef pfine
extern dw& pfine;
#endif
#ifndef extstores
extern dw& extstores;
#endif
#ifndef hdg
extern dw& hdg;
#endif
#ifndef irlockflag
extern db& irlockflag;
#endif

#endif

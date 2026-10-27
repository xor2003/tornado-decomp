/* THIS IS GENERATED FILE */

        
#ifndef __M2C_AIRCRAFT_STUBS_H__
#define __M2C_AIRCRAFT_STUBS_H__

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
  db dummy21cefb4a_default_seg_0_407;
  db dummy21cefb4a_default_seg_0_408;
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

struct runway {
  dw rwy_dir;
  dw rwy_width;
  dw rwy_x1;
  dw rwy_y1;
  dw rwy_x2;
  dw rwy_y2;
};

struct ils {
  dw ils_x_datum;
  dw ils_y_datum;
  db ils_available;
  db __m2c_pad_3_5;
  dw ils_n_tdown_x;
  dw ils_n_tdown_y;
  dw ils_s_tdown_x;
  dw ils_s_tdown_y;
  dw ils_e_tdown_x;
  dw ils_e_tdown_y;
  dw ils_w_tdown_x;
  dw ils_w_tdown_y;
};

struct taxi {
  dw taxi_end_ptr;
  dw taxi_x_mod;
  dw taxi_y_mod;
};

struct tnode {
  dw tnode_xft;
  dw tnode_yft;
};

struct perf_data {
  dw perf_takeoff;
  dw perf_cruise;
  dw perf_landing;
  dw perf_combat;
};

struct takeoff {
  dw to_v_rotate;
  dw to_accel;
  dw to_r_rate;
  dw to_l_rate;
};

struct cruise {
  dw crs_ceiling;
  dw crs_mxspeed_sl;
  dw crs_mxspeed_36;
  dw crs_accel;
  db crs_heavy;
};

struct landing {
  dw lnd_decel;
};

struct combat {
  db com_shells;
  db com_missiles;
  dw com_roll_rate;
  dw com_gmax;
  dw com_accel;
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
static const word dummy21cefb4a_default_seg_0_407 = offsetof(struct endroute, dummy21cefb4a_default_seg_0_407);
static const word dummy21cefb4a_default_seg_0_408 = offsetof(struct endroute, dummy21cefb4a_default_seg_0_408);
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
static const word rwy_dir = offsetof(struct runway, rwy_dir);
static const word rwy_width = offsetof(struct runway, rwy_width);
static const word rwy_x1 = offsetof(struct runway, rwy_x1);
static const word rwy_y1 = offsetof(struct runway, rwy_y1);
static const word rwy_x2 = offsetof(struct runway, rwy_x2);
static const word rwy_y2 = offsetof(struct runway, rwy_y2);
static const word ils_x_datum = offsetof(struct ils, ils_x_datum);
static const word ils_y_datum = offsetof(struct ils, ils_y_datum);
static const word ils_available = offsetof(struct ils, ils_available);
static const word ils_n_tdown_x = offsetof(struct ils, ils_n_tdown_x);
static const word ils_n_tdown_y = offsetof(struct ils, ils_n_tdown_y);
static const word ils_s_tdown_x = offsetof(struct ils, ils_s_tdown_x);
static const word ils_s_tdown_y = offsetof(struct ils, ils_s_tdown_y);
static const word ils_e_tdown_x = offsetof(struct ils, ils_e_tdown_x);
static const word ils_e_tdown_y = offsetof(struct ils, ils_e_tdown_y);
static const word ils_w_tdown_x = offsetof(struct ils, ils_w_tdown_x);
static const word ils_w_tdown_y = offsetof(struct ils, ils_w_tdown_y);
static const word taxi_end_ptr = offsetof(struct taxi, taxi_end_ptr);
static const word taxi_x_mod = offsetof(struct taxi, taxi_x_mod);
static const word taxi_y_mod = offsetof(struct taxi, taxi_y_mod);
static const word tnode_xft = offsetof(struct tnode, tnode_xft);
static const word tnode_yft = offsetof(struct tnode, tnode_yft);
static const word perf_takeoff = offsetof(struct perf_data, perf_takeoff);
static const word perf_cruise = offsetof(struct perf_data, perf_cruise);
static const word perf_landing = offsetof(struct perf_data, perf_landing);
static const word perf_combat = offsetof(struct perf_data, perf_combat);
static const word to_v_rotate = offsetof(struct takeoff, to_v_rotate);
static const word to_accel = offsetof(struct takeoff, to_accel);
static const word to_r_rate = offsetof(struct takeoff, to_r_rate);
static const word to_l_rate = offsetof(struct takeoff, to_l_rate);
static const word crs_ceiling = offsetof(struct cruise, crs_ceiling);
static const word crs_mxspeed_sl = offsetof(struct cruise, crs_mxspeed_sl);
static const word crs_mxspeed_36 = offsetof(struct cruise, crs_mxspeed_36);
static const word crs_accel = offsetof(struct cruise, crs_accel);
static const word crs_heavy = offsetof(struct cruise, crs_heavy);
static const word lnd_decel = offsetof(struct landing, lnd_decel);
static const word com_shells = offsetof(struct combat, com_shells);
static const word com_missiles = offsetof(struct combat, com_missiles);
static const word com_roll_rate = offsetof(struct combat, com_roll_rate);
static const word com_gmax = offsetof(struct combat, com_gmax);
static const word com_accel = offsetof(struct combat, com_accel);


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
static const int rwy_1836 = 0*8;
static const int rwy_1331 = 1*8;
static const int rwy_0927 = 2*8;
static const int rwy_0422 = 3*8;
static const int rwy_width256 = 0;
static const int rwy_width192 = 2;
static const int rwy_width128 = 4;
enum {
    ils_n = 0x8,
    ils_s = 0x4,
    ils_e = 0x2,
    ils_w = 0x1,
};
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
static const int rwy_rec_size = 12;
static const int ils_rec_size = 22;
static const int taxi_rec_size = 6;
static const int tnode_rec_size = 4;
static const int ac_data_size = 6+18+62;
static const int fixed_decel = 10*8;
static const int ctrl_null = 0;
static const int ctrl_takeoff = 2;
static const int ctrl_track = 4;
static const int ctrl_approach = 6;
static const int ctrl_touchdown = 8;
static const int ctrl_landing = 10;
static const int ctrl_taxi = 12;
static const int ctrl_combat = 14;
static const int debug_weapons = 0;
static const int wpn_clr_delay = 1*100;
static const int lgb_delay = 2*100;
static const int alarm_delay = 1*100;
static const int agm_delay = 1*100;
static const int rotation_angle = 2185;
static const int dly_after_event = 30*100;
static const int land_pitch_dn = 8*128;
static const int resupply_delay = 15*100;
static const int min_gmax = 6*16;
static const int ah_max_roll = 85*128;
static const int ah_roll_rate = 64*128;
static const int taxi_speed_fast = 680;
static const int taxi_speed_slow = 204;
static const int combat_floor = 200;
static const int combat_ceiling = 50000;
static const int gnd_check_alt = 10000;
static const int break_alt = 5000;
static const int very_low = 600;

	#define M2C_MODULE_AIRCRAFT 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& aircraftptr;
extern dw& perfdataptr;
extern mobile& ac_mobile;
extern viewpoint& ac_view;
extern aircraft& ac_data;
extern dw& ac_autohfine;
extern dw& ac_autoalt;
extern dw& ac_autovtas;
extern dd& ac_wprng;
extern dw& ac_wpbrg;
extern dw& ac_wpbrgfine;
extern dw& ac_vmin;
extern dw& ac_vmax;
extern dw& ac_vtrim;
extern dw& ac_thetaab;
extern dw& ac_thetabc;
extern dw& ac_thetaabc;
extern dw& ac_rturn;
extern dw& controlmode;
extern dw& dummy21cefb4a_data_78_2049;
extern dw& dummy21cefb4a_data_7a_2050;
extern dw& dummy21cefb4a_data_7c_2051;
extern dw& dummy21cefb4a_data_7e_2052;
extern dw& dummy21cefb4a_data_80_2053;
extern dw& dummy21cefb4a_data_82_2054;
extern dw& dummy21cefb4a_data_84_2055;
extern dw& armswitch;
extern dw& dummy21cefb4a_data_88_2061;
extern dw& dummy21cefb4a_data_8a_2062;
extern dw& dummy21cefb4a_data_8c_2063;
extern dw& dummy21cefb4a_data_8e_2064;
extern dw& dummy21cefb4a_data_90_2065;
extern dw& dummy21cefb4a_data_92_2066;
extern dw& dummy21cefb4a_data_94_2067;
extern dw& weapontype;
extern dw& weaponnum;
extern dw& perfdataptrs;
extern dw& dummy21cefb4a_data_9c_2087;
extern dw& dummy21cefb4a_data_9e_2088;
extern dw& dummy21cefb4a_data_a0_2089;
extern dw& dummy21cefb4a_data_a2_2090;
extern dw& dummy21cefb4a_data_a4_2091;
extern dw& dummy21cefb4a_data_a6_2092;
extern dw& dummy21cefb4a_data_a8_2093;
extern dw& dummy21cefb4a_data_aa_2094;
extern dw& dummy21cefb4a_data_ac_2095;
extern dw& dummy21cefb4a_data_ae_2096;
extern dw& dummy21cefb4a_data_b0_2097;
extern dw& dummy21cefb4a_data_b2_2098;
extern dw& dummy21cefb4a_data_b4_2099;
extern perf_data& gr4tornado;
extern perf_data& mig27flogger;
extern perf_data& f3tornado;
extern perf_data& mig31foxhound;
extern perf_data& f15eagle;
extern perf_data& su27flanker;
extern perf_data& f16falcon;
extern perf_data& mig29fulcrum;
extern perf_data& a10thunderbolt;
extern perf_data& su25frogfoot;
extern perf_data& e3dsentry;
extern perf_data& il76mainstay;
extern perf_data& c130hercules;
extern perf_data& il76candid;
extern takeoff& takeoff1;
extern takeoff& takeoff2;
extern takeoff& takeoff3;
extern cruise& cruise1;
extern cruise& cruise2;
extern cruise& cruise3;
extern cruise& cruise4;
extern dw& dummy21cefb4a_data_166_2233;
extern dw& dummy21cefb4a_data_168_2234;
extern dw& dummy21cefb4a_data_16a_2235;
extern dw& dummy21cefb4a_data_16c_2236;
extern dw& dummy21cefb4a_data_16e_2237;
extern dw& dummy21cefb4a_data_170_2238;
extern dw& dummy21cefb4a_data_172_2239;
extern dw& dummy21cefb4a_data_174_2240;
extern dw& dummy21cefb4a_data_176_2241;
extern dw& dummy21cefb4a_data_178_2242;
extern dw& dummy21cefb4a_data_17a_2243;
extern dw& dummy21cefb4a_data_17c_2244;
extern dw& dummy21cefb4a_data_17e_2245;
extern dw& dummy21cefb4a_data_180_2246;
extern dw& dummy21cefb4a_data_182_2247;
extern dw& dummy21cefb4a_data_184_2248;
extern dw& dummy21cefb4a_data_186_2249;
extern dw& dummy21cefb4a_data_188_2250;
extern dw& dummy21cefb4a_data_18a_2251;
extern dw& dummy21cefb4a_data_18c_2252;
extern dw& dummy21cefb4a_data_18e_2253;
extern dw& dummy21cefb4a_data_190_2254;
extern dw& dummy21cefb4a_data_192_2255;
extern dw& dummy21cefb4a_data_194_2256;
extern dw& dummy21cefb4a_data_196_2257;
extern dw& dummy21cefb4a_data_198_2258;
extern dw& dummy21cefb4a_data_19a_2259;
extern dw& dummy21cefb4a_data_19c_2260;
extern dw& dummy21cefb4a_data_19e_2261;
extern dw& dummy21cefb4a_data_1a0_2262;
extern dw& dummy21cefb4a_data_1a2_2263;
extern dw& dummy21cefb4a_data_1a4_2264;
extern dw& dummy21cefb4a_data_1a6_2265;
extern dw& dummy21cefb4a_data_1a8_2266;
extern dw& dummy21cefb4a_data_1aa_2267;
extern dw& dummy21cefb4a_data_1ac_2268;
extern dw& dummy21cefb4a_data_1ae_2269;
extern dw& dummy21cefb4a_data_1b0_2270;
extern dw& dummy21cefb4a_data_1b2_2271;
extern dw& dummy21cefb4a_data_1b4_2272;
extern dw& dummy21cefb4a_data_1b6_2273;
extern dw& dummy21cefb4a_data_1b8_2274;
extern dw& dummy21cefb4a_data_1ba_2275;
extern dw& dummy21cefb4a_data_1bc_2276;
extern dw& dummy21cefb4a_data_1be_2277;
extern dw& dummy21cefb4a_data_1c0_2278;
extern dw& dummy21cefb4a_data_1c2_2279;
extern dw& dummy21cefb4a_data_1c4_2280;
extern dw& dummy21cefb4a_data_1c6_2281;
extern dw& dummy21cefb4a_data_1c8_2282;
extern dw& dummy21cefb4a_data_1ca_2283;
extern dw& dummy21cefb4a_data_1cc_2284;
extern dw& dummy21cefb4a_data_1ce_2285;
extern dw& dummy21cefb4a_data_1d0_2286;
extern dw& dummy21cefb4a_data_1d2_2287;
extern dw& dummy21cefb4a_data_1d4_2288;
extern dw& dummy21cefb4a_data_1d6_2289;
extern dw& dummy21cefb4a_data_1d8_2290;
extern dw& dummy21cefb4a_data_1da_2291;
extern dw& dummy21cefb4a_data_1dc_2292;
extern dw& dummy21cefb4a_data_1de_2293;
extern dw& dummy21cefb4a_data_1e0_2294;
extern dw& dummy21cefb4a_data_1e2_2295;
extern dw& dummy21cefb4a_data_1e4_2296;
extern dw& dummy21cefb4a_data_1e6_2297;
extern landing& landing1;
extern landing& landing2;
extern landing& landing3;
extern combat& combat1;
extern combat& combat2;
extern combat& combat3;
extern combat& combat4;
extern combat& combat5;
extern combat& combat6;
extern waypoint& taxiwp;
extern dw& ac_vias;
extern dw& ac_divvias;
extern dw& ac_divvtas;
extern viewpoint& icpoint;
extern dw& scaledrange;
extern dw& xt;
extern dw& yt;
extern dw& zt;
extern dw& hdgerror;
extern dw& pitcherror;
extern dw& brgerror;
extern dw& cosbrgerror;
extern dw& maxrrate;
extern dw& maxprate;
extern dw& maxgforce;
extern dw& rolldemand;
extern dw& dampedroll;
extern dw& pitchrate;
extern dw& oppvtas;
extern dw& tornadooppptr;
extern dw& tmpsrcptr;
extern dw& tmpicptr;
extern dd& tmpicrng;
extern dw& responsetimer;
extern dw& ewrexposetimer;
extern dw& breaktimer;
extern dw& very_fast;
extern db& errorscale;
extern db& oppbehind;
extern db& breakflag;
extern byte& ac_workspace;
extern word& minspeed;
extern db& dronecode;
extern db& weaponcode;

	
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
#ifndef M2C_CODE_EQUATE_initplanes
#define M2C_CODE_EQUATE_initplanes 1
static const dd kinitplanes = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_initoneplane
#define M2C_CODE_EQUATE_initoneplane 1
static const dd kinitoneplane = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_setewrtimer
#define M2C_CODE_EQUATE_setewrtimer 1
static const dd ksetewrtimer = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_setbreaktimer
#define M2C_CODE_EQUATE_setbreaktimer 1
static const dd ksetbreaktimer = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_setveryfast
#define M2C_CODE_EQUATE_setveryfast 1
static const dd ksetveryfast = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_initoneexit
#define M2C_CODE_EQUATE_initoneexit 1
static const dd kinitoneexit = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_sortcontrolmode
#define M2C_CODE_EQUATE_sortcontrolmode 1
static const dd ksortcontrolmode = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_setctrlmode
#define M2C_CODE_EQUATE_setctrlmode 1
static const dd ksetctrlmode = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_setaatimer
#define M2C_CODE_EQUATE_setaatimer 1
static const dd ksetaatimer = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_updateplanes
#define M2C_CODE_EQUATE_updateplanes 1
static const dd kupdateplanes = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_tornadoaction
#define M2C_CODE_EQUATE_tornadoaction 1
static const dd ktornadoaction = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_droneaction
#define M2C_CODE_EQUATE_droneaction 1
static const dd kdroneaction = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_updateoneplane
#define M2C_CODE_EQUATE_updateoneplane 1
static const dd kupdateoneplane = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_updateoneexit
#define M2C_CODE_EQUATE_updateoneexit 1
static const dd kupdateoneexit = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_calcangles
#define M2C_CODE_EQUATE_calcangles 1
static const dd kcalcangles = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_calcdeltaxyz
#define M2C_CODE_EQUATE_calcdeltaxyz 1
static const dd kcalcdeltaxyz = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_groundcheck
#define M2C_CODE_EQUATE_groundcheck 1
static const dd kgroundcheck = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_evasiontactics
#define M2C_CODE_EQUATE_evasiontactics 1
static const dd kevasiontactics = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_aaactivity
#define M2C_CODE_EQUATE_aaactivity 1
static const dd kaaactivity = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_ctrlnull
#define M2C_CODE_EQUATE_ctrlnull 1
static const dd kctrlnull = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_ctrltakeoff
#define M2C_CODE_EQUATE_ctrltakeoff 1
static const dd kctrltakeoff = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_sortdelay
#define M2C_CODE_EQUATE_sortdelay 1
static const dd ksortdelay = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_sorttakeoffanim
#define M2C_CODE_EQUATE_sorttakeoffanim 1
static const dd ksorttakeoffanim = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_sortliftvector
#define M2C_CODE_EQUATE_sortliftvector 1
static const dd ksortliftvector = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_ctrltrack
#define M2C_CODE_EQUATE_ctrltrack 1
static const dd kctrltrack = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_autoroute
#define M2C_CODE_EQUATE_autoroute 1
static const dd kautoroute = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_autoheading
#define M2C_CODE_EQUATE_autoheading 1
static const dd kautoheading = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_autoaltitude
#define M2C_CODE_EQUATE_autoaltitude 1
static const dd kautoaltitude = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_autothrottle
#define M2C_CODE_EQUATE_autothrottle 1
static const dd kautothrottle = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_autobomb
#define M2C_CODE_EQUATE_autobomb 1
static const dd kautobomb = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_ctrlapproach
#define M2C_CODE_EQUATE_ctrlapproach 1
static const dd kctrlapproach = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_ctrltouchdown
#define M2C_CODE_EQUATE_ctrltouchdown 1
static const dd kctrltouchdown = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_ctrllanding
#define M2C_CODE_EQUATE_ctrllanding 1
static const dd kctrllanding = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_skiprestart
#define M2C_CODE_EQUATE_skiprestart 1
static const dd kskiprestart = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_exitlanding
#define M2C_CODE_EQUATE_exitlanding 1
static const dd kexitlanding = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_inittaxi
#define M2C_CODE_EQUATE_inittaxi 1
static const dd kinittaxi = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_sorttaxixy
#define M2C_CODE_EQUATE_sorttaxixy 1
static const dd ksorttaxixy = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_exitinittaxi
#define M2C_CODE_EQUATE_exitinittaxi 1
static const dd kexitinittaxi = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_ctrltaxi
#define M2C_CODE_EQUATE_ctrltaxi 1
static const dd kctrltaxi = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_calctaxirngbrg
#define M2C_CODE_EQUATE_calctaxirngbrg 1
static const dd kcalctaxirngbrg = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_sortspeed
#define M2C_CODE_EQUATE_sortspeed 1
static const dd ksortspeed = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_taxidecel
#define M2C_CODE_EQUATE_taxidecel 1
static const dd ktaxidecel = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_taxiaccel
#define M2C_CODE_EQUATE_taxiaccel 1
static const dd ktaxiaccel = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_taxispeedok
#define M2C_CODE_EQUATE_taxispeedok 1
static const dd ktaxispeedok = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_exittaxi
#define M2C_CODE_EQUATE_exittaxi 1
static const dd kexittaxi = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_sorttaxihdg
#define M2C_CODE_EQUATE_sorttaxihdg 1
static const dd ksorttaxihdg = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_skiparmlock
#define M2C_CODE_EQUATE_skiparmlock 1
static const dd kskiparmlock = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_exitroute
#define M2C_CODE_EQUATE_exitroute 1
static const dd kexitroute = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_satisfiedwp
#define M2C_CODE_EQUATE_satisfiedwp 1
static const dd ksatisfiedwp = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_targetwp
#define M2C_CODE_EQUATE_targetwp 1
static const dd ktargetwp = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_calcturndist
#define M2C_CODE_EQUATE_calcturndist 1
static const dd kcalcturndist = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_wpok
#define M2C_CODE_EQUATE_wpok 1
static const dd kwpok = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_selectnextwp
#define M2C_CODE_EQUATE_selectnextwp 1
static const dd kselectnextwp = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_sortwpalt
#define M2C_CODE_EQUATE_sortwpalt 1
static const dd ksortwpalt = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_setautoalt
#define M2C_CODE_EQUATE_setautoalt 1
static const dd ksetautoalt = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_setspeed
#define M2C_CODE_EQUATE_setspeed 1
static const dd ksetspeed = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_setmaxspeed
#define M2C_CODE_EQUATE_setmaxspeed 1
static const dd ksetmaxspeed = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_timeok
#define M2C_CODE_EQUATE_timeok 1
static const dd ktimeok = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_calcnextwp
#define M2C_CODE_EQUATE_calcnextwp 1
static const dd kcalcnextwp = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_sortlink
#define M2C_CODE_EQUATE_sortlink 1
static const dd ksortlink = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_exitnextwp
#define M2C_CODE_EQUATE_exitnextwp 1
static const dd kexitnextwp = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_15_testhi 1
static const dd k__m2c_macrolocal_15_testhi = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_15_testok 1
static const dd k__m2c_macrolocal_15_testok = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_exitturndist
#define M2C_CODE_EQUATE_exitturndist 1
static const dd kexitturndist = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_tdistov
#define M2C_CODE_EQUATE_tdistov 1
static const dd ktdistov = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_20_testhi 1
static const dd k__m2c_macrolocal_20_testhi = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_20_testok 1
static const dd k__m2c_macrolocal_20_testok = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_maxrollangle
#define M2C_CODE_EQUATE_maxrollangle 1
static const dd kmaxrollangle = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_contheading
#define M2C_CODE_EQUATE_contheading 1
static const dd kcontheading = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_skiptf
#define M2C_CODE_EQUATE_skiptf 1
static const dd kskiptf = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy1 1
static const dd k__m2c_macrolocal_31_mvxy1 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy2 1
static const dd k__m2c_macrolocal_31_mvxy2 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy3 1
static const dd k__m2c_macrolocal_31_mvxy3 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_31_mvxy4 1
static const dd k__m2c_macrolocal_31_mvxy4 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_queque0009
#define M2C_CODE_EQUATE_queque0009 1
static const dd kqueque0009 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_queque000b
#define M2C_CODE_EQUATE_queque000b 1
static const dd kqueque000b = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy1 1
static const dd k__m2c_macrolocal_32_mvxy1 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy2 1
static const dd k__m2c_macrolocal_32_mvxy2 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy3 1
static const dd k__m2c_macrolocal_32_mvxy3 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_32_mvxy4 1
static const dd k__m2c_macrolocal_32_mvxy4 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_queque000d
#define M2C_CODE_EQUATE_queque000d 1
static const dd kqueque000d = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_queque000f
#define M2C_CODE_EQUATE_queque000f 1
static const dd kqueque000f = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_contautoalt
#define M2C_CODE_EQUATE_contautoalt 1
static const dd kcontautoalt = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_34_testhi 1
static const dd k__m2c_macrolocal_34_testhi = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_34_testok 1
static const dd k__m2c_macrolocal_34_testok = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_prateok
#define M2C_CODE_EQUATE_prateok 1
static const dd kprateok = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_setpitchlimit
#define M2C_CODE_EQUATE_setpitchlimit 1
static const dd ksetpitchlimit = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_zftok
#define M2C_CODE_EQUATE_zftok 1
static const dd kzftok = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_contaccel
#define M2C_CODE_EQUATE_contaccel 1
static const dd kcontaccel = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_accelok
#define M2C_CODE_EQUATE_accelok 1
static const dd kaccelok = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dxok
#define M2C_CODE_EQUATE_dxok 1
static const dd kdxok = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_dyok
#define M2C_CODE_EQUATE_dyok 1
static const dd kdyok = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_dzok
#define M2C_CODE_EQUATE_dzok 1
static const dd kdzok = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_ctrlcombat
#define M2C_CODE_EQUATE_ctrlcombat 1
static const dd kctrlcombat = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_skipbreak
#define M2C_CODE_EQUATE_skipbreak 1
static const dd kskipbreak = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_sortbreak
#define M2C_CODE_EQUATE_sortbreak 1
static const dd ksortbreak = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_intobreak
#define M2C_CODE_EQUATE_intobreak 1
static const dd kintobreak = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_contbreak
#define M2C_CODE_EQUATE_contbreak 1
static const dd kcontbreak = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_selectbreakwp
#define M2C_CODE_EQUATE_selectbreakwp 1
static const dd kselectbreakwp = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_65_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_65_skip 1
static const dd k__m2c_macrolocal_65_skip = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_skipupright
#define M2C_CODE_EQUATE_skipupright 1
static const dd kskipupright = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy1 1
static const dd k__m2c_macrolocal_67_mvxy1 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy2 1
static const dd k__m2c_macrolocal_67_mvxy2 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy3 1
static const dd k__m2c_macrolocal_67_mvxy3 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_67_mvxy4 1
static const dd k__m2c_macrolocal_67_mvxy4 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_skipevade
#define M2C_CODE_EQUATE_skipevade 1
static const dd kskipevade = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_contevade
#define M2C_CODE_EQUATE_contevade 1
static const dd kcontevade = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_intoevade
#define M2C_CODE_EQUATE_intoevade 1
static const dd kintoevade = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_stopevade
#define M2C_CODE_EQUATE_stopevade 1
static const dd kstopevade = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_69_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_69_skip 1
static const dd k__m2c_macrolocal_69_skip = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_setceiling
#define M2C_CODE_EQUATE_setceiling 1
static const dd ksetceiling = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_70_skip 1
static const dd k__m2c_macrolocal_70_skip = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_71_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_71_skip 1
static const dd k__m2c_macrolocal_71_skip = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_gndcheckok
#define M2C_CODE_EQUATE_gndcheckok 1
static const dd kgndcheckok = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_72_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_72_skip 1
static const dd k__m2c_macrolocal_72_skip = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_sorticalt
#define M2C_CODE_EQUATE_sorticalt 1
static const dd ksorticalt = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_setcosbrgerror
#define M2C_CODE_EQUATE_setcosbrgerror 1
static const dd ksetcosbrgerror = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_skipdeadband
#define M2C_CODE_EQUATE_skipdeadband 1
static const dd kskipdeadband = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_sethdgerror
#define M2C_CODE_EQUATE_sethdgerror 1
static const dd ksethdgerror = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_setpitcherror
#define M2C_CODE_EQUATE_setpitcherror 1
static const dd ksetpitcherror = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_78_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_78_skip 1
static const dd k__m2c_macrolocal_78_skip = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_skipfiring
#define M2C_CODE_EQUATE_skipfiring 1
static const dd kskipfiring = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_79_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_79_skip 1
static const dd k__m2c_macrolocal_79_skip = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_skipcannon
#define M2C_CODE_EQUATE_skipcannon 1
static const dd kskipcannon = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_autocannon
#define M2C_CODE_EQUATE_autocannon 1
static const dd kautocannon = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_automissile
#define M2C_CODE_EQUATE_automissile 1
static const dd kautomissile = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_gmaxok
#define M2C_CODE_EQUATE_gmaxok 1
static const dd kgmaxok = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_casepull
#define M2C_CODE_EQUATE_casepull 1
static const dd kcasepull = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_casepitchok
#define M2C_CODE_EQUATE_casepitchok 1
static const dd kcasepitchok = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_casepush
#define M2C_CODE_EQUATE_casepush 1
static const dd kcasepush = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_setrolldemand
#define M2C_CODE_EQUATE_setrolldemand 1
static const dd ksetrolldemand = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_decerror
#define M2C_CODE_EQUATE_decerror 1
static const dd kdecerror = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_incerror
#define M2C_CODE_EQUATE_incerror 1
static const dd kincerror = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_sameerror
#define M2C_CODE_EQUATE_sameerror 1
static const dd ksameerror = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_contpitchrate
#define M2C_CODE_EQUATE_contpitchrate 1
static const dd kcontpitchrate = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_96_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_96_testhi 1
static const dd k__m2c_macrolocal_96_testhi = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_96_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_96_testok 1
static const dd k__m2c_macrolocal_96_testok = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_sorthdg
#define M2C_CODE_EQUATE_sorthdg 1
static const dd ksorthdg = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_altok
#define M2C_CODE_EQUATE_altok 1
static const dd kaltok = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_setcombatspeed
#define M2C_CODE_EQUATE_setcombatspeed 1
static const dd ksetcombatspeed = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_103_testhi 1
static const dd k__m2c_macrolocal_103_testhi = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_103_testok 1
static const dd k__m2c_macrolocal_103_testok = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_calcaccel
#define M2C_CODE_EQUATE_calcaccel 1
static const dd kcalcaccel = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_sortaccel
#define M2C_CODE_EQUATE_sortaccel 1
static const dd ksortaccel = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_accok
#define M2C_CODE_EQUATE_accok 1
static const dd kaccok = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_exitcombat
#define M2C_CODE_EQUATE_exitcombat 1
static const dd kexitcombat = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_breakfail
#define M2C_CODE_EQUATE_breakfail 1
static const dd kbreakfail = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_breakpass
#define M2C_CODE_EQUATE_breakpass 1
static const dd kbreakpass = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_109_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_109_skip 1
static const dd k__m2c_macrolocal_109_skip = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_actionexit
#define M2C_CODE_EQUATE_actionexit 1
static const dd kactionexit = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_contaction
#define M2C_CODE_EQUATE_contaction 1
static const dd kcontaction = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_checkescort
#define M2C_CODE_EQUATE_checkescort 1
static const dd kcheckescort = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_110_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_110_skip 1
static const dd k__m2c_macrolocal_110_skip = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_111_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_111_skip 1
static const dd k__m2c_macrolocal_111_skip = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_112_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_112_skip 1
static const dd k__m2c_macrolocal_112_skip = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE_skipcntrattack
#define M2C_CODE_EQUATE_skipcntrattack 1
static const dd kskipcntrattack = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_icresponse
#define M2C_CODE_EQUATE_icresponse 1
static const dd kicresponse = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE_awacsresponse
#define M2C_CODE_EQUATE_awacsresponse 1
static const dd kawacsresponse = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE_miscresponse
#define M2C_CODE_EQUATE_miscresponse 1
static const dd kmiscresponse = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_checkicavail
#define M2C_CODE_EQUATE_checkicavail 1
static const dd kcheckicavail = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE_setcombatmode
#define M2C_CODE_EQUATE_setcombatmode 1
static const dd ksetcombatmode = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_findenemyic
#define M2C_CODE_EQUATE_findenemyic 1
static const dd kfindenemyic = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_113_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_113_skip 1
static const dd k__m2c_macrolocal_113_skip = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_skipewr
#define M2C_CODE_EQUATE_skipewr 1
static const dd kskipewr = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skip 1
static const dd k__m2c_macrolocal_115_skip = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_skipresponse
#define M2C_CODE_EQUATE_skipresponse 1
static const dd kskipresponse = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_117_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_117_skip 1
static const dd k__m2c_macrolocal_117_skip = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE_proxenemyic
#define M2C_CODE_EQUATE_proxenemyic 1
static const dd kproxenemyic = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE_skipicprox
#define M2C_CODE_EQUATE_skipicprox 1
static const dd kskipicprox = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_skipawacsprox
#define M2C_CODE_EQUATE_skipawacsprox 1
static const dd kskipawacsprox = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skip 1
static const dd k__m2c_macrolocal_120_skip = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE_skipescort
#define M2C_CODE_EQUATE_skipescort 1
static const dd kskipescort = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE_proxalliedic
#define M2C_CODE_EQUATE_proxalliedic 1
static const dd kproxalliedic = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_skipbreaktimer
#define M2C_CODE_EQUATE_skipbreaktimer 1
static const dd kskipbreaktimer = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE_skipaawacs
#define M2C_CODE_EQUATE_skipaawacs 1
static const dd kskipaawacs = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_skipeawacs
#define M2C_CODE_EQUATE_skipeawacs 1
static const dd kskipeawacs = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_icunavail
#define M2C_CODE_EQUATE_icunavail 1
static const dd kicunavail = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_icavail
#define M2C_CODE_EQUATE_icavail 1
static const dd kicavail = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE_skipe7
#define M2C_CODE_EQUATE_skipe7 1
static const dd kskipe7 = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE_skipe8
#define M2C_CODE_EQUATE_skipe8 1
static const dd kskipe8 = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE_skipe9
#define M2C_CODE_EQUATE_skipe9 1
static const dd kskipe9 = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE_skipe10
#define M2C_CODE_EQUATE_skipe10 1
static const dd kskipe10 = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE_skipe11
#define M2C_CODE_EQUATE_skipe11 1
static const dd kskipe11 = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE_skipe12
#define M2C_CODE_EQUATE_skipe12 1
static const dd kskipe12 = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE_proxenemyexit
#define M2C_CODE_EQUATE_proxenemyexit 1
static const dd kproxenemyexit = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x115c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel126
#define M2C_CODE_EQUATE_dummylabel126 1
static const dd kdummylabel126 = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_proxalliedexit
#define M2C_CODE_EQUATE_proxalliedexit 1
static const dd kproxalliedexit = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel127
#define M2C_CODE_EQUATE_dummylabel127 1
static const dd kdummylabel127 = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel128
#define M2C_CODE_EQUATE_dummylabel128 1
static const dd kdummylabel128 = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel129
#define M2C_CODE_EQUATE_dummylabel129 1
static const dd kdummylabel129 = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel130
#define M2C_CODE_EQUATE_dummylabel130 1
static const dd kdummylabel130 = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel131
#define M2C_CODE_EQUATE_dummylabel131 1
static const dd kdummylabel131 = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel132
#define M2C_CODE_EQUATE_dummylabel132 1
static const dd kdummylabel132 = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_146_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_146_skip 1
static const dd k__m2c_macrolocal_146_skip = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_aaexit
#define M2C_CODE_EQUATE_aaexit 1
static const dd kaaexit = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel133
#define M2C_CODE_EQUATE_dummylabel133 1
static const dd kdummylabel133 = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE_aaok
#define M2C_CODE_EQUATE_aaok 1
static const dd kaaok = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_exitbomb
#define M2C_CODE_EQUATE_exitbomb 1
static const dd kexitbomb = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_armnull
#define M2C_CODE_EQUATE_armnull 1
static const dd karmnull = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE_armgpb1000
#define M2C_CODE_EQUATE_armgpb1000 1
static const dd karmgpb1000 = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_autolaydown
#define M2C_CODE_EQUATE_autolaydown 1
static const dd kautolaydown = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_armret1000
#define M2C_CODE_EQUATE_armret1000 1
static const dd karmret1000 = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_armlgb1000
#define M2C_CODE_EQUATE_armlgb1000 1
static const dd karmlgb1000 = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE_autolgb
#define M2C_CODE_EQUATE_autolgb 1
static const dd kautolgb = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_armbl755
#define M2C_CODE_EQUATE_armbl755 1
static const dd karmbl755 = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_armjp233
#define M2C_CODE_EQUATE_armjp233 1
static const dd karmjp233 = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE_autojp233
#define M2C_CODE_EQUATE_autojp233 1
static const dd kautojp233 = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE_armalarm
#define M2C_CODE_EQUATE_armalarm 1
static const dd karmalarm = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_autoalarm
#define M2C_CODE_EQUATE_autoalarm 1
static const dd kautoalarm = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_armagm
#define M2C_CODE_EQUATE_armagm 1
static const dd karmagm = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE_autoagm
#define M2C_CODE_EQUATE_autoagm 1
static const dd kautoagm = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_148_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_148_skip 1
static const dd k__m2c_macrolocal_148_skip = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_exitlaydown
#define M2C_CODE_EQUATE_exitlaydown 1
static const dd kexitlaydown = 0x1180;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel134
#define M2C_CODE_EQUATE_dummylabel134 1
static const dd kdummylabel134 = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE_contlgb
#define M2C_CODE_EQUATE_contlgb 1
static const dd kcontlgb = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE_exitlgb
#define M2C_CODE_EQUATE_exitlgb 1
static const dd kexitlgb = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE_lgbok
#define M2C_CODE_EQUATE_lgbok 1
static const dd klgbok = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel135
#define M2C_CODE_EQUATE_dummylabel135 1
static const dd kdummylabel135 = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel42
#define M2C_CODE_EQUATE_edummylabel42 1
static const dd kedummylabel42 = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE_contjp233
#define M2C_CODE_EQUATE_contjp233 1
static const dd kcontjp233 = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_154_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_154_skip 1
static const dd k__m2c_macrolocal_154_skip = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE_exitjp233
#define M2C_CODE_EQUATE_exitjp233 1
static const dd kexitjp233 = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_155_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_155_skip 1
static const dd k__m2c_macrolocal_155_skip = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel136
#define M2C_CODE_EQUATE_dummylabel136 1
static const dd kdummylabel136 = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel137
#define M2C_CODE_EQUATE_dummylabel137 1
static const dd kdummylabel137 = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel138
#define M2C_CODE_EQUATE_dummylabel138 1
static const dd kdummylabel138 = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel43
#define M2C_CODE_EQUATE_edummylabel43 1
static const dd kedummylabel43 = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_contalarm
#define M2C_CODE_EQUATE_contalarm 1
static const dd kcontalarm = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_162_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_162_skip 1
static const dd k__m2c_macrolocal_162_skip = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE_exitalarm
#define M2C_CODE_EQUATE_exitalarm 1
static const dd kexitalarm = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_163_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_163_skip 1
static const dd k__m2c_macrolocal_163_skip = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_164_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_164_skip 1
static const dd k__m2c_macrolocal_164_skip = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE_alarmok
#define M2C_CODE_EQUATE_alarmok 1
static const dd kalarmok = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_166_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_166_skip 1
static const dd k__m2c_macrolocal_166_skip = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy1 1
static const dd k__m2c_macrolocal_167_mvxy1 = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy2 1
static const dd k__m2c_macrolocal_167_mvxy2 = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy3 1
static const dd k__m2c_macrolocal_167_mvxy3 = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_167_mvxy4 1
static const dd k__m2c_macrolocal_167_mvxy4 = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE_queque0032
#define M2C_CODE_EQUATE_queque0032 1
static const dd kqueque0032 = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_queque0034
#define M2C_CODE_EQUATE_queque0034 1
static const dd kqueque0034 = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel139
#define M2C_CODE_EQUATE_dummylabel139 1
static const dd kdummylabel139 = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel140
#define M2C_CODE_EQUATE_dummylabel140 1
static const dd kdummylabel140 = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel44
#define M2C_CODE_EQUATE_edummylabel44 1
static const dd kedummylabel44 = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE_contagm
#define M2C_CODE_EQUATE_contagm 1
static const dd kcontagm = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_168_skip 1
static const dd k__m2c_macrolocal_168_skip = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_exitagm
#define M2C_CODE_EQUATE_exitagm 1
static const dd kexitagm = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_169_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_169_skip 1
static const dd k__m2c_macrolocal_169_skip = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_170_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_170_skip 1
static const dd k__m2c_macrolocal_170_skip = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_agmok
#define M2C_CODE_EQUATE_agmok 1
static const dd kagmok = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_172_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_172_skip 1
static const dd k__m2c_macrolocal_172_skip = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy1
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy1 1
static const dd k__m2c_macrolocal_173_mvxy1 = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy2
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy2 1
static const dd k__m2c_macrolocal_173_mvxy2 = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy3
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy3 1
static const dd k__m2c_macrolocal_173_mvxy3 = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy4
#define M2C_CODE_EQUATE___m2c_macrolocal_173_mvxy4 1
static const dd k__m2c_macrolocal_173_mvxy4 = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE_queque003a
#define M2C_CODE_EQUATE_queque003a 1
static const dd kqueque003a = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_queque003c
#define M2C_CODE_EQUATE_queque003c 1
static const dd kqueque003c = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel141
#define M2C_CODE_EQUATE_dummylabel141 1
static const dd kdummylabel141 = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel142
#define M2C_CODE_EQUATE_dummylabel142 1
static const dd kdummylabel142 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel45
#define M2C_CODE_EQUATE_edummylabel45 1
static const dd kedummylabel45 = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel46
#define M2C_CODE_EQUATE_edummylabel46 1
static const dd kedummylabel46 = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel143
#define M2C_CODE_EQUATE_dummylabel143 1
static const dd kdummylabel143 = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel47
#define M2C_CODE_EQUATE_edummylabel47 1
static const dd kedummylabel47 = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_skipevasion
#define M2C_CODE_EQUATE_skipevasion 1
static const dd kskipevasion = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE_setdecoytimer
#define M2C_CODE_EQUATE_setdecoytimer 1
static const dd ksetdecoytimer = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel144
#define M2C_CODE_EQUATE_dummylabel144 1
static const dd kdummylabel144 = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel145
#define M2C_CODE_EQUATE_dummylabel145 1
static const dd kdummylabel145 = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE__group2
#define M2C_CODE_EQUATE__group2 1
static const dd k_group2 = 0x11b8;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
static bool _group2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool aaactivity(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autoagm(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autoalarm(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autoaltitude(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autobomb(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autocannon(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autoheading(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autojp233(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autolaydown(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autolgb(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool automissile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autoroute(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autothrottle(m2c::_offsets, struct m2c::_STATE*);
static bool calcangles(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcdeltaxyz(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcnextwp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calctaxirngbrg(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcturndist(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkicavail(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrlapproach(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrlcombat(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrllanding(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrlnull(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrltakeoff(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrltaxi(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrltouchdown(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ctrltrack(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool droneaction(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool evasiontactics(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool findenemyic(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool groundcheck(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initoneplane(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initplanes(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool inittaxi(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool proxalliedic(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool proxenemyic(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectbreakwp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectnextwp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setaatimer(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setbreaktimer(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setcombatmode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setewrtimer(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setveryfast(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortcontrolmode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sorttaxixy(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool tornadoaction(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateoneplane(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateplanes(m2c::_offsets, struct m2c::_STATE*);
extern bool aerialexplosion(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangdiff(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdeltaxy(m2c::_offsets, struct m2c::_STATE*);
extern bool calceyecoords(m2c::_offsets, struct m2c::_STATE*);
extern bool calcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool calcintercept(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_vp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_wp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgwp_wp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngrelco(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsinefine(m2c::_offsets, struct m2c::_STATE*);
extern bool calcslantrange(m2c::_offsets, struct m2c::_STATE*);
extern bool calcthrow(m2c::_offsets, struct m2c::_STATE*);
extern bool calctransmatrix(m2c::_offsets, struct m2c::_STATE*);
extern bool calcvias(m2c::_offsets, struct m2c::_STATE*);
extern bool checkirlock(m2c::_offsets, struct m2c::_STATE*);
extern bool deletemobile(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarccos(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarcsin(m2c::_offsets, struct m2c::_STATE*);
extern bool firecannon(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronealive(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronespeed(m2c::_offsets, struct m2c::_STATE*);
extern bool launchalarm(m2c::_offsets, struct m2c::_STATE*);
extern bool launchmissile(m2c::_offsets, struct m2c::_STATE*);
extern bool limitpfine(m2c::_offsets, struct m2c::_STATE*);
extern bool makesmokeeffect(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool releasedecoy(m2c::_offsets, struct m2c::_STATE*);
extern bool releasepackage(m2c::_offsets, struct m2c::_STATE*);
extern bool tangent(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemobile(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef demomode
extern db& demomode;
#endif
#ifndef eaircraft8
extern dw& eaircraft8;
#endif
#ifndef droneptrs
extern dw& droneptrs;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef aaircraft11
extern dw& aaircraft11;
#endif
#ifndef eaircraft13
extern dw& eaircraft13;
#endif
#ifndef eaircraft17
extern dw& eaircraft17;
#endif
#ifndef sctrgamelayer1
extern db& sctrgamelayer1;
#endif
#ifndef aaircraft10
extern dw& aaircraft10;
#endif
#ifndef aaircraft12
extern dw& aaircraft12;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef eaircraft3
extern dw& eaircraft3;
#endif
#ifndef speciallayer1
extern db& speciallayer1;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef aaircraft3
extern dw& aaircraft3;
#endif
#ifndef eaircraft16
extern dw& eaircraft16;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef aaircraft16
extern dw& aaircraft16;
#endif
#ifndef eaircraft11
extern dw& eaircraft11;
#endif
#ifndef frameelaptime
extern dd& frameelaptime;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef eaircraft12
extern dw& eaircraft12;
#endif
#ifndef aaircraft2
extern dw& aaircraft2;
#endif
#ifndef eaircraft15
extern dw& eaircraft15;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef missiletgtptr
extern dw& missiletgtptr;
#endif
#ifndef epilotskill
extern dw& epilotskill;
#endif
#ifndef aaircraft5
extern dw& aaircraft5;
#endif
#ifndef eaircraft7
extern dw& eaircraft7;
#endif
#ifndef slantrng
extern dd& slantrng;
#endif
#ifndef apilotskill
extern dw& apilotskill;
#endif
#ifndef aaircraft6
extern dw& aaircraft6;
#endif
#ifndef eaircraft14
extern dw& eaircraft14;
#endif
#ifndef vias
extern dw& vias;
#endif
#ifndef modelmapindex
extern dw& modelmapindex;
#endif
#ifndef rwrthreatflags
extern db& rwrthreatflags;
#endif
#ifndef eaircraft9
extern dw& eaircraft9;
#endif
#ifndef aaircraft8
extern dw& aaircraft8;
#endif
#ifndef aaircraft17
extern dw& aaircraft17;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef trueradalt
extern dw& trueradalt;
#endif
#ifndef aaircraft13
extern dw& aaircraft13;
#endif
#ifndef eaircraft5
extern dw& eaircraft5;
#endif
#ifndef airborne1
extern db& airborne1;
#endif
#ifndef aaircraft7
extern dw& aaircraft7;
#endif
#ifndef aaircraft4
extern dw& aaircraft4;
#endif
#ifndef eaircraft6
extern dw& eaircraft6;
#endif
#ifndef eaircraft10
extern dw& eaircraft10;
#endif
#ifndef eaircraft2
extern dw& eaircraft2;
#endif
#ifndef aaircraft15
extern dw& aaircraft15;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef aaircraft1
extern dw& aaircraft1;
#endif
#ifndef taxirouteptrs
extern dw& taxirouteptrs;
#endif
#ifndef aaircraft14
extern dw& aaircraft14;
#endif
#ifndef aaircraft9
extern dw& aaircraft9;
#endif
#ifndef eaircraft4
extern dw& eaircraft4;
#endif
#ifndef eaircraft1
extern dw& eaircraft1;
#endif
#ifndef bombthrow
extern dd& bombthrow;
#endif
#ifndef nofire
extern db& nofire;
#endif

#endif

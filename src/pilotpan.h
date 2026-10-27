/* THIS IS GENERATED FILE */

        
#ifndef __M2C_PILOTPAN_STUBS_H__
#define __M2C_PILOTPAN_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
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
  db dummyb7946b14_default_seg_0_434;
  db dummyb7946b14_default_seg_0_435;
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

static const word tab_x_org = offsetof(struct tab, tab_x_org);
static const word tab_y_org = offsetof(struct tab, tab_y_org);
static const word tab_status = offsetof(struct tab, tab_status);
static const word tab_mode = offsetof(struct tab, tab_mode);
static const word tab_ssf_ptr = offsetof(struct tab, tab_ssf_ptr);
static const word tab_req_mouse = offsetof(struct tab, tab_req_mouse);
static const word tab_has_mouse = offsetof(struct tab, tab_has_mouse);
static const word tab_select = offsetof(struct tab, tab_select);
static const word tab_toggle = offsetof(struct tab, tab_toggle);
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
static const word dummyb7946b14_default_seg_0_434 = offsetof(struct endroute, dummyb7946b14_default_seg_0_434);
static const word dummyb7946b14_default_seg_0_435 = offsetof(struct endroute, dummyb7946b14_default_seg_0_435);
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
static const int tab_pln = 0;
static const int tab_map = 2;
static const int tab_ref = 4;
static const int tab_flir = 6;
static const int tab_flir_ori = 8;
static const int tab_tiald = 10;
static const int tab_tiald_ori = 12;
static const int tab_radar = 14;
static const int tab_loopback = 16;
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
static const int min_op_rad_alt = 100;
static const int local_x = 95;
static const int local_y = 184;
static const int glide_x = 78;
static const int glide_y = 186;
static const int oxy_time = 200;
static const int rwr_circle_x = 236;
static const int rwr_circle_y = 121;
static const int rwr_circle_y2 = 80;
static const int escope_x = 72;
static const int escope_y = 111;
static const int escope_width = 32;
static const int escope_depth = 20;
static const int escope_datum = 6;
static const int escope_x_2 = 283;
static const int escope_y_2 = 172;
static const int escope_width_2 = 32;
static const int escope_depth_2 = 20;
static const int escope_datum_2 = 6;

	#define M2C_MODULE_PILOTPAN 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& fromhometopgup;
extern dw& tempval;
extern db& nvg_set;
extern dw& localxpos;
extern db& glideypos;
extern dw& oxydollytimer;
extern db& oxydollypos;
extern dw& rwrlosymbol;
extern dw& dummyb7946b14_data_c_2361;
extern dw& dummyb7946b14_data_e_2362;
extern dw& dummyb7946b14_data_10_2363;
extern dw& dummyb7946b14_data_12_2364;
extern dw& dummyb7946b14_data_14_2365;
extern dw& rwrhisymbol;
extern dw& dummyb7946b14_data_18_2369;
extern dw& dummyb7946b14_data_1a_2370;
extern dw& dummyb7946b14_data_1c_2371;
extern dw& dummyb7946b14_data_1e_2372;
extern dw& dummyb7946b14_data_20_2373;
extern db (& dummyb7946b14_data_22_2379)[2];
extern db (& dummyb7946b14_data_24_2380)[2];
extern db (& dummyb7946b14_data_26_2381)[2];
extern db (& dummyb7946b14_data_28_2382)[2];
extern db (& dummyb7946b14_data_2a_2383)[2];
extern db (& dummyb7946b14_data_2c_2384)[2];
extern db (& dummyb7946b14_data_2e_2385)[2];
extern db (& dummyb7946b14_data_30_2386)[2];
extern db (& dummyb7946b14_data_32_2387)[2];
extern db (& dummyb7946b14_data_34_2388)[2];
extern db (& dummyb7946b14_data_36_2389)[2];
extern db (& dummyb7946b14_data_38_2390)[2];
extern db (& dummyb7946b14_data_3a_2391)[2];
extern db (& dummyb7946b14_data_3c_2392)[2];
extern db (& dummyb7946b14_data_3e_2393)[2];
extern db (& dummyb7946b14_data_40_2394)[2];
extern db (& dummyb7946b14_data_42_2395)[2];
extern db (& dummyb7946b14_data_44_2396)[2];
extern db (& dummyb7946b14_data_46_2397)[2];
extern db (& dummyb7946b14_data_48_2398)[2];
extern db (& dummyb7946b14_data_4a_2399)[2];
extern db (& dummyb7946b14_data_4c_2400)[2];
extern db (& dummyb7946b14_data_4e_2401)[2];
extern db (& dummyb7946b14_data_50_2402)[2];
extern db (& dummyb7946b14_data_52_2403)[2];
extern db (& dummyb7946b14_data_54_2404)[2];
extern db (& dummyb7946b14_data_56_2405)[2];
extern db (& dummyb7946b14_data_58_2406)[2];
extern db (& dummyb7946b14_data_5a_2407)[2];
extern db (& dummyb7946b14_data_5c_2408)[2];
extern db (& dummyb7946b14_data_5e_2409)[2];
extern db (& dummyb7946b14_data_60_2410)[2];
extern db (& dummyb7946b14_data_62_2411)[2];
extern db (& dummyb7946b14_data_64_2412)[2];
extern db (& dummyb7946b14_data_66_2413)[2];
extern db (& dummyb7946b14_data_68_2414)[2];
extern db (& dummyb7946b14_data_6a_2415)[2];
extern db (& dummyb7946b14_data_6c_2416)[2];
extern db (& dummyb7946b14_data_6e_2417)[2];
extern db (& dummyb7946b14_data_70_2418)[2];
extern db (& dummyb7946b14_data_72_2419)[2];
extern db (& dummyb7946b14_data_74_2420)[2];
extern db (& dummyb7946b14_data_76_2421)[2];
extern db (& dummyb7946b14_data_78_2422)[2];
extern db (& dummyb7946b14_data_7a_2423)[2];
extern db (& dummyb7946b14_data_7c_2424)[2];
extern db (& dummyb7946b14_data_7e_2425)[2];
extern db (& dummyb7946b14_data_80_2426)[2];
extern db (& dummyb7946b14_data_82_2427)[2];
extern db (& dummyb7946b14_data_84_2428)[2];
extern db (& dummyb7946b14_data_86_2429)[2];
extern db (& dummyb7946b14_data_88_2430)[2];
extern db (& dummyb7946b14_data_8a_2431)[2];
extern db (& dummyb7946b14_data_8c_2432)[2];
extern db (& dummyb7946b14_data_8e_2433)[2];
extern db (& dummyb7946b14_data_90_2434)[2];
extern db (& dummyb7946b14_data_92_2435)[2];
extern db (& dummyb7946b14_data_94_2441)[2];
extern db (& dummyb7946b14_data_96_2442)[2];
extern db (& dummyb7946b14_data_98_2443)[2];
extern db (& dummyb7946b14_data_9a_2444)[2];
extern db (& dummyb7946b14_data_9c_2445)[2];
extern db (& dummyb7946b14_data_9e_2446)[2];
extern db (& dummyb7946b14_data_a0_2447)[2];
extern db (& dummyb7946b14_data_a2_2448)[2];
extern db (& dummyb7946b14_data_a4_2449)[2];
extern db (& dummyb7946b14_data_a6_2450)[2];
extern db (& dummyb7946b14_data_a8_2451)[2];
extern db (& dummyb7946b14_data_aa_2452)[2];
extern db (& dummyb7946b14_data_ac_2453)[2];
extern db (& dummyb7946b14_data_ae_2454)[2];
extern db (& dummyb7946b14_data_b0_2455)[2];
extern db (& dummyb7946b14_data_b2_2456)[2];
extern db (& dummyb7946b14_data_b4_2457)[2];
extern db (& dummyb7946b14_data_b6_2458)[2];
extern db (& dummyb7946b14_data_b8_2459)[2];
extern db (& dummyb7946b14_data_ba_2460)[2];
extern db (& dummyb7946b14_data_bc_2461)[2];
extern db (& dummyb7946b14_data_be_2462)[2];
extern db (& dummyb7946b14_data_c0_2463)[2];
extern db (& dummyb7946b14_data_c2_2464)[2];
extern db (& dummyb7946b14_data_c4_2465)[2];
extern db (& dummyb7946b14_data_c6_2466)[2];
extern db (& dummyb7946b14_data_c8_2467)[2];
extern db (& dummyb7946b14_data_ca_2468)[2];
extern db (& dummyb7946b14_data_cc_2469)[2];
extern db (& dummyb7946b14_data_ce_2470)[2];
extern db (& dummyb7946b14_data_d0_2471)[2];
extern db (& dummyb7946b14_data_d2_2472)[2];
extern db (& dummyb7946b14_data_d4_2473)[2];
extern db (& dummyb7946b14_data_d6_2474)[2];
extern db (& dummyb7946b14_data_d8_2475)[2];
extern db (& dummyb7946b14_data_da_2476)[2];
extern db (& dummyb7946b14_data_dc_2477)[2];
extern db (& dummyb7946b14_data_de_2478)[2];
extern db (& dummyb7946b14_data_e0_2479)[2];
extern db (& dummyb7946b14_data_e2_2480)[2];
extern db (& dummyb7946b14_data_e4_2481)[2];
extern db (& dummyb7946b14_data_e6_2482)[2];
extern db (& dummyb7946b14_data_e8_2483)[2];
extern db (& dummyb7946b14_data_ea_2484)[2];
extern db (& dummyb7946b14_data_ec_2485)[2];
extern db (& dummyb7946b14_data_ee_2486)[2];
extern db (& dummyb7946b14_data_f0_2487)[2];
extern db (& dummyb7946b14_data_f2_2488)[2];
extern db (& dummyb7946b14_data_f4_2489)[2];
extern db (& dummyb7946b14_data_f6_2490)[2];
extern db (& dummyb7946b14_data_f8_2491)[2];
extern db (& dummyb7946b14_data_fa_2492)[2];
extern db (& dummyb7946b14_data_fc_2493)[2];
extern db (& dummyb7946b14_data_fe_2494)[2];
extern db (& dummyb7946b14_data_100_2495)[2];
extern db (& dummyb7946b14_data_102_2496)[2];
extern db (& dummyb7946b14_data_104_2497)[2];
extern db (& dummyb7946b14_data_106_2498)[2];
extern db (& dummyb7946b14_data_108_2499)[2];
extern db (& dummyb7946b14_data_10a_2500)[2];
extern db (& dummyb7946b14_data_10c_2501)[2];
extern db (& dummyb7946b14_data_10e_2502)[2];
extern db (& dummyb7946b14_data_110_2503)[2];
extern db (& dummyb7946b14_data_112_2504)[2];
extern db (& dummyb7946b14_data_114_2505)[2];
extern db (& dummyb7946b14_data_116_2511)[2];
extern db (& dummyb7946b14_data_118_2512)[2];
extern db (& dummyb7946b14_data_11a_2513)[2];
extern db (& dummyb7946b14_data_11c_2514)[2];
extern db (& dummyb7946b14_data_11e_2515)[2];
extern db (& dummyb7946b14_data_120_2516)[2];
extern db (& dummyb7946b14_data_122_2517)[2];
extern db (& dummyb7946b14_data_124_2518)[2];
extern db (& dummyb7946b14_data_126_2519)[2];
extern db (& dummyb7946b14_data_128_2520)[2];
extern db (& dummyb7946b14_data_12a_2521)[2];
extern db (& dummyb7946b14_data_12c_2522)[2];
extern db (& dummyb7946b14_data_12e_2523)[2];
extern db (& dummyb7946b14_data_130_2524)[2];
extern db (& dummyb7946b14_data_132_2525)[2];
extern db (& dummyb7946b14_data_134_2526)[2];
extern db (& dummyb7946b14_data_136_2527)[2];
extern db (& dummyb7946b14_data_138_2528)[2];
extern db (& dummyb7946b14_data_13a_2529)[2];
extern db (& dummyb7946b14_data_13c_2530)[2];
extern db (& dummyb7946b14_data_13e_2531)[2];
extern db (& dummyb7946b14_data_140_2532)[2];
extern db (& dummyb7946b14_data_142_2533)[2];
extern db (& dummyb7946b14_data_144_2534)[2];
extern db (& dummyb7946b14_data_146_2535)[2];
extern db (& dummyb7946b14_data_148_2536)[2];
extern db (& dummyb7946b14_data_14a_2537)[2];
extern db (& dummyb7946b14_data_14c_2538)[2];
extern db (& dummyb7946b14_data_14e_2539)[2];
extern db (& dummyb7946b14_data_150_2540)[2];
extern db (& dummyb7946b14_data_152_2541)[2];
extern db (& dummyb7946b14_data_154_2542)[2];
extern db (& dummyb7946b14_data_156_2543)[2];
extern db (& dummyb7946b14_data_158_2544)[2];
extern db (& dummyb7946b14_data_15a_2545)[2];
extern db (& dummyb7946b14_data_15c_2546)[2];
extern db (& dummyb7946b14_data_15e_2547)[2];
extern db (& dummyb7946b14_data_160_2548)[2];
extern db (& dummyb7946b14_data_162_2549)[2];
extern db (& dummyb7946b14_data_164_2550)[2];
extern db (& dummyb7946b14_data_166_2551)[2];
extern db (& dummyb7946b14_data_168_2552)[2];
extern db (& dummyb7946b14_data_16a_2553)[2];
extern db (& dummyb7946b14_data_16c_2554)[2];
extern db (& dummyb7946b14_data_16e_2555)[2];
extern db (& dummyb7946b14_data_170_2556)[2];
extern db (& dummyb7946b14_data_172_2557)[2];
extern db (& dummyb7946b14_data_174_2558)[2];
extern db (& dummyb7946b14_data_176_2559)[2];
extern db (& dummyb7946b14_data_178_2560)[2];
extern db (& dummyb7946b14_data_17a_2561)[2];
extern db (& dummyb7946b14_data_17c_2562)[2];
extern db (& dummyb7946b14_data_17e_2563)[2];
extern db (& dummyb7946b14_data_180_2564)[2];
extern db (& dummyb7946b14_data_182_2565)[2];
extern db (& dummyb7946b14_data_184_2566)[2];
extern db (& dummyb7946b14_data_186_2567)[2];
extern db (& dummyb7946b14_data_188_2568)[2];
extern db (& dummyb7946b14_data_18a_2569)[2];
extern db (& dummyb7946b14_data_18c_2570)[2];
extern db (& dummyb7946b14_data_18e_2571)[2];
extern db (& dummyb7946b14_data_190_2572)[2];
extern db (& dummyb7946b14_data_192_2573)[2];
extern db (& dummyb7946b14_data_194_2574)[2];
extern db (& dummyb7946b14_data_196_2575)[2];
extern db (& dummyb7946b14_data_198_2576)[2];
extern db (& dummyb7946b14_data_19a_2577)[2];
extern db (& dummyb7946b14_data_19c_2578)[2];
extern db (& dummyb7946b14_data_19e_2579)[2];
extern db (& dummyb7946b14_data_1a0_2580)[2];
extern db (& dummyb7946b14_data_1a2_2581)[2];
extern db (& dummyb7946b14_data_1a4_2582)[2];
extern db (& dummyb7946b14_data_1a6_2583)[2];
extern db (& dummyb7946b14_data_1a8_2584)[2];
extern db (& dummyb7946b14_data_1aa_2585)[2];
extern db (& dummyb7946b14_data_1ac_2586)[2];
extern db (& dummyb7946b14_data_1ae_2587)[2];
extern db (& flapsxy)[2];
extern db (& dummyb7946b14_data_1b2_2593)[2];
extern db (& dummyb7946b14_data_1b4_2594)[2];
extern db (& dummyb7946b14_data_1b6_2595)[2];
extern db (& dummyb7946b14_data_1b8_2596)[2];
extern db (& dummyb7946b14_data_1ba_2597)[2];
extern db (& dummyb7946b14_data_1bc_2598)[2];
extern db (& dummyb7946b14_data_1be_2599)[2];
extern db (& slatsxy)[2];
extern db (& dummyb7946b14_data_1c2_2601)[2];
extern db (& dummyb7946b14_data_1c4_2602)[2];
extern db (& dummyb7946b14_data_1c6_2603)[2];
extern db (& wingsxy)[2];
extern db (& dummyb7946b14_data_1ca_2605)[2];
extern db (& dummyb7946b14_data_1cc_2606)[2];
extern db (& dummyb7946b14_data_1ce_2607)[2];
extern db (& dummyb7946b14_data_1d0_2608)[2];
extern db (& dummyb7946b14_data_1d2_2609)[2];
extern db (& dummyb7946b14_data_1d4_2610)[2];
extern db (& dummyb7946b14_data_1d6_2611)[2];
extern db (& dummyb7946b14_data_1d8_2612)[2];
extern db (& dummyb7946b14_data_1da_2613)[2];
extern db (& dummyb7946b14_data_1dc_2614)[2];
extern db (& dummyb7946b14_data_1de_2615)[2];
extern db& dummyb7946b14_data_1e0_2621;
extern db& dummyb7946b14_data_1e1_2622;
extern db (& dummyb7946b14_data_1e2_2623)[10];
extern db& dummyb7946b14_data_1ec_2624;
extern db (& dummyb7946b14_data_1ed_2628)[2];
extern db (& dummyb7946b14_data_1ef_2630)[2];
extern dw (& dummyb7946b14_data_1f1_2631)[2];
extern db (& dummyb7946b14_data_1f5_2632)[2];
extern dw& dummyb7946b14_data_1f7_2633;
extern dw& dummyb7946b14_data_1f9_2634;
extern db (& dummyb7946b14_data_1fb_2635)[2];
extern dw& dummyb7946b14_data_1fd_2636;
extern db (& dummyb7946b14_data_1ff_2637)[2];
extern dw& dummyb7946b14_data_201_2638;
extern dw& dummyb7946b14_data_203_2639;
extern db (& dummyb7946b14_data_205_2640)[2];
extern db& dummyb7946b14_data_207_2642;
extern db (& dummyb7946b14_data_208_2646)[2];
extern db (& dummyb7946b14_data_20a_2648)[2];
extern dw (& dummyb7946b14_data_20c_2649)[2];
extern db (& dummyb7946b14_data_210_2650)[2];
extern dw& dummyb7946b14_data_212_2651;
extern db (& dummyb7946b14_data_214_2652)[2];
extern db& dummyb7946b14_data_216_2654;
extern db (& dummyb7946b14_data_217_2658)[2];
extern db (& dummyb7946b14_data_219_2660)[2];
extern dw (& dummyb7946b14_data_21b_2661)[2];
extern db (& dummyb7946b14_data_21f_2662)[2];
extern dw& dummyb7946b14_data_221_2663;
extern dw& dummyb7946b14_data_223_2664;
extern db (& dummyb7946b14_data_225_2665)[2];
extern db& dummyb7946b14_data_227_2667;
extern byte& dialxy1;
extern byte& dialxy2;
extern byte& dialxy3;
extern byte& setupdol;
extern byte& rpmdol;
extern byte& baraltdol;
extern byte& compassdol;
extern db& stack;
extern db (& dummyb7946b14_stack_228_2695)[2];
extern db (& dummyb7946b14_stack_22a_2696)[2];
extern db (& dummyb7946b14_stack_22c_2697)[2];
extern db (& dummyb7946b14_stack_22e_2698)[2];
extern db (& dummyb7946b14_stack_230_2699)[2];
extern db (& dummyb7946b14_stack_232_2700)[2];
extern db (& dummyb7946b14_stack_234_2701)[2];
extern db (& dummyb7946b14_stack_236_2702)[2];
extern db (& dummyb7946b14_stack_238_2703)[2];
extern db (& dummyb7946b14_stack_23a_2704)[2];
extern db (& dummyb7946b14_stack_23c_2705)[2];
extern db (& dummyb7946b14_stack_23e_2706)[2];
extern db (& dummyb7946b14_stack_240_2707)[2];
extern db (& dummyb7946b14_stack_242_2708)[2];
extern db (& dummyb7946b14_stack_244_2709)[2];
extern db (& dummyb7946b14_stack_246_2710)[2];
extern db (& dummyb7946b14_stack_248_2711)[2];
extern db (& dummyb7946b14_stack_24a_2712)[2];
extern db (& dummyb7946b14_stack_24c_2713)[2];
extern db (& dummyb7946b14_stack_24e_2714)[2];
extern db (& dummyb7946b14_stack_250_2715)[2];
extern db (& dummyb7946b14_stack_252_2716)[2];
extern db (& dummyb7946b14_stack_254_2717)[2];
extern db (& dummyb7946b14_stack_256_2718)[2];
extern db (& dummyb7946b14_stack_258_2719)[2];
extern db (& dummyb7946b14_stack_25a_2720)[2];
extern db (& dummyb7946b14_stack_25c_2721)[2];
extern db (& dummyb7946b14_stack_25e_2722)[2];
extern db (& dummyb7946b14_stack_260_2723)[2];
extern db (& dummyb7946b14_stack_262_2724)[2];
extern db (& dummyb7946b14_stack_264_2725)[2];
extern db (& dummyb7946b14_stack_266_2726)[2];
extern db (& dummyb7946b14_stack_268_2727)[2];
extern db (& dummyb7946b14_stack_26a_2728)[2];
extern db (& dummyb7946b14_stack_26c_2729)[2];
extern db (& dummyb7946b14_stack_26e_2730)[2];
extern db (& dummyb7946b14_stack_270_2731)[2];
extern db (& dummyb7946b14_stack_272_2732)[2];
extern db (& dummyb7946b14_stack_274_2733)[2];
extern db (& dummyb7946b14_stack_276_2734)[2];
extern db (& dummyb7946b14_stack_278_2735)[2];
extern db (& dummyb7946b14_stack_27a_2736)[2];
extern db (& dummyb7946b14_stack_27c_2737)[2];
extern db (& dummyb7946b14_stack_27e_2738)[2];
extern db (& dummyb7946b14_stack_280_2739)[2];
extern db (& dummyb7946b14_stack_282_2740)[2];
extern db (& dummyb7946b14_stack_284_2741)[2];
extern db (& dummyb7946b14_stack_286_2742)[2];
extern db (& dummyb7946b14_stack_288_2743)[2];
extern db (& dummyb7946b14_stack_28a_2744)[2];
extern db (& dummyb7946b14_stack_28c_2745)[2];
extern db (& dummyb7946b14_stack_28e_2746)[2];
extern db (& dummyb7946b14_stack_290_2747)[2];
extern db (& dummyb7946b14_stack_292_2748)[2];
extern db (& dummyb7946b14_stack_294_2749)[2];
extern db (& dummyb7946b14_stack_296_2750)[2];
extern db (& dummyb7946b14_stack_298_2751)[2];
extern db (& dummyb7946b14_stack_29a_2752)[2];
extern db (& dummyb7946b14_stack_29c_2753)[2];
extern db (& dummyb7946b14_stack_29e_2754)[2];
extern db (& dummyb7946b14_stack_2a0_2755)[2];
extern db (& dummyb7946b14_stack_2a2_2756)[2];
extern db (& dummyb7946b14_stack_2a4_2757)[2];
extern db (& dummyb7946b14_stack_2a6_2758)[2];
extern db (& dummyb7946b14_stack_2a8_2759)[2];
extern byte& rwrcircle;
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
#ifndef M2C_CODE_EQUATE_updatepilot
#define M2C_CODE_EQUATE_updatepilot 1
static const dd kupdatepilot = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_initpanel
#define M2C_CODE_EQUATE_initpanel 1
static const dd kinitpanel = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_updateengrpm
#define M2C_CODE_EQUATE_updateengrpm 1
static const dd kupdateengrpm = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_updateengtemp
#define M2C_CODE_EQUATE_updateengtemp 1
static const dd kupdateengtemp = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_updatefuel
#define M2C_CODE_EQUATE_updatefuel 1
static const dd kupdatefuel = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_updateadi
#define M2C_CODE_EQUATE_updateadi 1
static const dd kupdateadi = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_updatehsi
#define M2C_CODE_EQUATE_updatehsi 1
static const dd kupdatehsi = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_updategmeter
#define M2C_CODE_EQUATE_updategmeter 1
static const dd kupdategmeter = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_updatecompass
#define M2C_CODE_EQUATE_updatecompass 1
static const dd kupdatecompass = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_updatectrlsface
#define M2C_CODE_EQUATE_updatectrlsface 1
static const dd kupdatectrlsface = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_updatealtimeter
#define M2C_CODE_EQUATE_updatealtimeter 1
static const dd kupdatealtimeter = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_updatevsi
#define M2C_CODE_EQUATE_updatevsi 1
static const dd kupdatevsi = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_updatespeed
#define M2C_CODE_EQUATE_updatespeed 1
static const dd kupdatespeed = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_updateradalt
#define M2C_CODE_EQUATE_updateradalt 1
static const dd kupdateradalt = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_updateescope
#define M2C_CODE_EQUATE_updateescope 1
static const dd kupdateescope = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_updateoxydolly
#define M2C_CODE_EQUATE_updateoxydolly 1
static const dd kupdateoxydolly = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_drawadirollbug
#define M2C_CODE_EQUATE_drawadirollbug 1
static const dd kdrawadirollbug = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_updaterwr
#define M2C_CODE_EQUATE_updaterwr 1
static const dd kupdaterwr = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_22_skip 1
static const dd k__m2c_macrolocal_22_skip = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_noshakes
#define M2C_CODE_EQUATE_noshakes 1
static const dd knoshakes = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_notskipshakecockpit0
#define M2C_CODE_EQUATE_notskipshakecockpit0 1
static const dd knotskipshakecockpit0 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_23_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_23_skip 1
static const dd k__m2c_macrolocal_23_skip = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_skipshakecockpit1
#define M2C_CODE_EQUATE_skipshakecockpit1 1
static const dd kskipshakecockpit1 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_24_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_24_skip 1
static const dd k__m2c_macrolocal_24_skip = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_skipshakecockpit2
#define M2C_CODE_EQUATE_skipshakecockpit2 1
static const dd kskipshakecockpit2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_25_skip 1
static const dd k__m2c_macrolocal_25_skip = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_skipshakecockpit3
#define M2C_CODE_EQUATE_skipshakecockpit3 1
static const dd kskipshakecockpit3 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_26_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_26_skip 1
static const dd k__m2c_macrolocal_26_skip = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_27_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_27_skip 1
static const dd k__m2c_macrolocal_27_skip = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_localok
#define M2C_CODE_EQUATE_localok 1
static const dd klocalok = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_glideok
#define M2C_CODE_EQUATE_glideok 1
static const dd kglideok = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_contgmeter
#define M2C_CODE_EQUATE_contgmeter 1
static const dd kcontgmeter = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_standardloc
#define M2C_CODE_EQUATE_standardloc 1
static const dd kstandardloc = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_customlocationflapsslats
#define M2C_CODE_EQUATE_customlocationflapsslats 1
static const dd kcustomlocationflapsslats = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_checkpitchlimitortabdamaged
#define M2C_CODE_EQUATE_checkpitchlimitortabdamaged 1
static const dd kcheckpitchlimitortabdamaged = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_rausout
#define M2C_CODE_EQUATE_rausout 1
static const dd krausout = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_38_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_38_skip 1
static const dd k__m2c_macrolocal_38_skip = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_standardlocation
#define M2C_CODE_EQUATE_standardlocation 1
static const dd kstandardlocation = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_radaltok
#define M2C_CODE_EQUATE_radaltok 1
static const dd kradaltok = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_50_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_50_skip 1
static const dd k__m2c_macrolocal_50_skip = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_exitescope
#define M2C_CODE_EQUATE_exitescope 1
static const dd kexitescope = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_altok
#define M2C_CODE_EQUATE_altok 1
static const dd kaltok = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_etchdatum
#define M2C_CODE_EQUATE_etchdatum 1
static const dd ketchdatum = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_gndhtloop
#define M2C_CODE_EQUATE_gndhtloop 1
static const dd kgndhtloop = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_drawnoise
#define M2C_CODE_EQUATE_drawnoise 1
static const dd kdrawnoise = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_skiptrace
#define M2C_CODE_EQUATE_skiptrace 1
static const dd kskiptrace = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_updateescope2
#define M2C_CODE_EQUATE_updateescope2 1
static const dd kupdateescope2 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_52_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_52_skip 1
static const dd k__m2c_macrolocal_52_skip = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_exitescope2
#define M2C_CODE_EQUATE_exitescope2 1
static const dd kexitescope2 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_altok2
#define M2C_CODE_EQUATE_altok2 1
static const dd kaltok2 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_etchdatum2
#define M2C_CODE_EQUATE_etchdatum2 1
static const dd ketchdatum2 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_gndhtloop2
#define M2C_CODE_EQUATE_gndhtloop2 1
static const dd kgndhtloop2 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_drawnoise2
#define M2C_CODE_EQUATE_drawnoise2 1
static const dd kdrawnoise2 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_skiptrace2
#define M2C_CODE_EQUATE_skiptrace2 1
static const dd kskiptrace2 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_exitoxydolly
#define M2C_CODE_EQUATE_exitoxydolly 1
static const dd kexitoxydolly = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_rwrexit
#define M2C_CODE_EQUATE_rwrexit 1
static const dd krwrexit = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_rwrloop1
#define M2C_CODE_EQUATE_rwrloop1 1
static const dd krwrloop1 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_rwrloop2
#define M2C_CODE_EQUATE_rwrloop2 1
static const dd krwrloop2 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_updaterwr2
#define M2C_CODE_EQUATE_updaterwr2 1
static const dd kupdaterwr2 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_rwrexit2
#define M2C_CODE_EQUATE_rwrexit2 1
static const dd krwrexit2 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_rwrloop12
#define M2C_CODE_EQUATE_rwrloop12 1
static const dd krwrloop12 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_rwrloop22
#define M2C_CODE_EQUATE_rwrloop22 1
static const dd krwrloop22 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_samsymbol
#define M2C_CODE_EQUATE_samsymbol 1
static const dd ksamsymbol = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_aaasymbol
#define M2C_CODE_EQUATE_aaasymbol 1
static const dd kaaasymbol = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_ewrsymbol
#define M2C_CODE_EQUATE_ewrsymbol 1
static const dd kewrsymbol = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_acsymbol
#define M2C_CODE_EQUATE_acsymbol 1
static const dd kacsymbol = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_mslsymbol1
#define M2C_CODE_EQUATE_mslsymbol1 1
static const dd kmslsymbol1 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_mslsymbol2
#define M2C_CODE_EQUATE_mslsymbol2 1
static const dd kmslsymbol2 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1074;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool aaasymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool acsymbol(m2c::_offsets, struct m2c::_STATE*);
static bool drawadirollbug(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ewrsymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initpanel(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mslsymbol1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mslsymbol2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool samsymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateadi(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatealtimeter(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatecompass(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatectrlsface(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateengrpm(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateengtemp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateescope(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateescope2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatefuel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updategmeter(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatehsi(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateoxydolly(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatepilot(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updateradalt(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updaterwr(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updaterwr2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatespeed(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatevsi(m2c::_offsets, struct m2c::_STATE*);
extern bool blockfill(m2c::_offsets, struct m2c::_STATE*);
extern bool clearpilotpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpilotpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool loadpilotpan(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);
extern bool setviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehud(m2c::_offsets, struct m2c::_STATE*);
extern bool updatepilotmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool userhorizon(m2c::_offsets, struct m2c::_STATE*);
extern bool vlinedraw(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef ssf_rwr
extern db& ssf_rwr;
#endif
#ifndef ilslocalpos
extern dw& ilslocalpos;
#endif
#ifndef crntflapval
extern dw& crntflapval;
#endif
#ifndef numrwrthreats
extern dw& numrwrthreats;
#endif
#ifndef crewmode
extern dw& crewmode;
#endif
#ifndef m_view
extern dw& m_view;
#endif
#ifndef dispgforce
extern dw& dispgforce;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef vshake
extern db& vshake;
#endif
#ifndef night
extern db& night;
#endif
#ifndef shaketimer
extern dw& shaketimer;
#endif
#ifndef dispmachnum
extern dw& dispmachnum;
#endif
#ifndef m_sinr
extern dw& m_sinr;
#endif
#ifndef crntflappos
extern db& crntflappos;
#endif
#ifndef fuelflow1
extern dw& fuelflow1;
#endif
#ifndef ilsactive
extern db& ilsactive;
#endif
#ifndef airbrakes
extern db& airbrakes;
#endif
#ifndef disphdg
extern dw& disphdg;
#endif
#ifndef fuelwt
extern dw& fuelwt;
#endif
#ifndef m_cosr
extern dw& m_cosr;
#endif
#ifndef prtcl
extern dw& prtcl;
#endif
#ifndef gndhtdata
extern dw& gndhtdata;
#endif
#ifndef rpm1
extern dw& rpm1;
#endif
#ifndef hshake
extern db& hshake;
#endif
#ifndef vkts
extern dw& vkts;
#endif
#ifndef temp2
extern dw& temp2;
#endif
#ifndef tab2
extern tab& tab2;
#endif
#ifndef ssf_oxygen
extern db& ssf_oxygen;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef zfthi
extern dw& zfthi;
#endif
#ifndef trueradalt
extern dw& trueradalt;
#endif
#ifndef roll
extern dw& roll;
#endif
#ifndef temp1
extern dw& temp1;
#endif
#ifndef zftlo
extern dw& zftlo;
#endif
#ifndef prtln
extern dw& prtln;
#endif
#ifndef rpm2
extern dw& rpm2;
#endif
#ifndef tab1
extern tab& tab1;
#endif
#ifndef rwrthreats
extern dw& rwrthreats;
#endif
#ifndef m_cosp
extern dw& m_cosp;
#endif
#ifndef ilsglidepos
extern dw& ilsglidepos;
#endif
#ifndef fuelflow2
extern dw& fuelflow2;
#endif
#ifndef dispradalt
extern dw& dispradalt;
#endif
#ifndef dispvsi
extern dw& dispvsi;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef hdg
extern dw& hdg;
#endif
#ifndef crntwingval
extern dw& crntwingval;
#endif
#ifndef shakeup
extern db& shakeup;
#endif

#endif

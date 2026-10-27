/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MFD_STUBS_H__
#define __M2C_MFD_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
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
  db dummy9e517ded_default_seg_0_447;
  db dummy9e517ded_default_seg_0_448;
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
static const word dummy9e517ded_default_seg_0_447 = offsetof(struct endroute, dummy9e517ded_default_seg_0_447);
static const word dummy9e517ded_default_seg_0_448 = offsetof(struct endroute, dummy9e517ded_default_seg_0_448);
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
static const int hud_x_org = 160;
static const int hud_y_org = 96;
static const int tab_width = 96;
static const int tab_depth = 72;
static const int tab_width_tiald = 320;
static const int tab_depth_tiald = 192;
static const int xc_tiald = 320/2;
static const int yc_tiald = 192/2-1;
static const int mfd_width = 64;
static const int mfd_depth = 48;
static const int xc = 64/2;
static const int yc = 48/2-1;
static const int gmr_flash_delay = 20;
#define gmr_flash_hi (col_crt16)
#define gmr_flash_lo (col_crt6)
static const int tgt_flash_delay = 20;
#define tgt_flash_hi (col_crt16)
#define tgt_flash_lo (col_crt1)
static const int crsr_xv_max = 64*256;
static const int crsr_yv_max = 48*256;
static const int crsr_ymin = 1;
static const int crsr_ymax = 46;

	#define M2C_MODULE_MFD 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& xorg_tiald;
extern db (& yorg_tiald)[2];
extern dw& xorg;
extern db (& yorg)[2];
extern mfd& pilot_mfd;
extern mfd& navig_mfd;
extern db& mfdmouseflags;
extern db& dummy9e517ded_data_25_2552;
extern db& dummy9e517ded_data_26_2553;
extern db& dummy9e517ded_data_27_2554;
extern db& dummy9e517ded_data_28_2555;
extern dw& selectswitch;
extern dw& dummy9e517ded_data_2b_2565;
extern dw& dummy9e517ded_data_2d_2566;
extern dw& dummy9e517ded_data_2f_2567;
extern dw& dummy9e517ded_data_31_2568;
extern dw& dummy9e517ded_data_33_2569;
extern dw& dummy9e517ded_data_35_2570;
extern dw& dispswitch;
extern dw& dummy9e517ded_data_39_2576;
extern dw& dummy9e517ded_data_3b_2577;
extern dw& dummy9e517ded_data_3d_2578;
extern dw& dummy9e517ded_data_3f_2579;
extern dw& dummy9e517ded_data_41_2580;
extern dw& gmrrange;
extern db& gmrok;
extern dw& gmrflashtimer;
extern db& gmrflashcol;
extern dw& snapsearcharea;
extern dw& dummy9e517ded_data_4b_2601;
extern dw& dummy9e517ded_data_4d_2602;
extern dw& dummy9e517ded_data_4f_2603;
extern dw& dummy9e517ded_data_51_2604;
extern dw& dummy9e517ded_data_53_2605;
extern dw& snapx;
extern dw& snapy;
extern dw& airradystart;
extern dw& dummy9e517ded_data_5b_2618;
extern dw& dummy9e517ded_data_5d_2619;
extern dw& airradycount;
extern dw& dummy9e517ded_data_61_2623;
extern dw& dummy9e517ded_data_63_2624;
extern dw& airradystep;
extern dw& dummy9e517ded_data_67_2628;
extern dw& dummy9e517ded_data_69_2629;
extern dw& tgtflashtimer;
extern db& tgtcol;
extern db& tgtflashcol;
extern dw& polyx1;
extern dw& polyy1;
extern dw& polyx2;
extern dw& polyy2;
extern dw& polyx3;
extern dw& polyy3;
extern dw& polyx4;
extern dw& polyy4;
extern dw& dummy9e517ded_data_7f_2653;
extern dw& crsrxv;
extern dw& crsryv;
extern db (& dummy9e517ded_data_85_2673)[2];
extern db (& dummy9e517ded_data_87_2674)[2];
extern db (& dummy9e517ded_data_89_2675)[2];
extern db (& dummy9e517ded_data_8b_2676)[2];
extern db (& dummy9e517ded_data_8d_2677)[2];
extern db (& dummy9e517ded_data_8f_2678)[2];
extern db (& dummy9e517ded_data_91_2679)[2];
extern db (& dummy9e517ded_data_93_2680)[2];
extern db (& dummy9e517ded_data_95_2681)[2];
extern db (& dummy9e517ded_data_97_2682)[2];
extern db (& dummy9e517ded_data_99_2683)[2];
extern db (& dummy9e517ded_data_9b_2684)[2];
extern db (& dummy9e517ded_data_9d_2685)[2];
extern db (& dummy9e517ded_data_9f_2686)[2];
extern db (& dummy9e517ded_data_a1_2687)[2];
extern db (& dummy9e517ded_data_a3_2688)[2];
extern db (& dummy9e517ded_data_a5_2689)[2];
extern db (& dummy9e517ded_data_a7_2690)[2];
extern db (& dummy9e517ded_data_a9_2691)[2];
extern db (& dummy9e517ded_data_ab_2692)[2];
extern db (& dummy9e517ded_data_ad_2693)[2];
extern db (& dummy9e517ded_data_af_2694)[2];
extern db (& dummy9e517ded_data_b1_2695)[2];
extern db (& dummy9e517ded_data_b3_2696)[2];
extern db (& dummy9e517ded_data_b5_2697)[2];
extern db (& dummy9e517ded_data_b7_2698)[2];
extern db (& dummy9e517ded_data_b9_2699)[2];
extern db (& dummy9e517ded_data_bb_2700)[2];
extern db (& dummy9e517ded_data_bd_2701)[2];
extern db (& dummy9e517ded_data_bf_2702)[2];
extern db (& dummy9e517ded_data_c1_2703)[2];
extern db (& dummy9e517ded_data_c3_2704)[2];
extern db (& dummy9e517ded_data_c5_2705)[2];
extern db (& dummy9e517ded_data_c7_2706)[2];
extern db (& dummy9e517ded_data_c9_2707)[2];
extern db (& dummy9e517ded_data_cb_2708)[2];
extern db (& dummy9e517ded_data_cd_2709)[2];
extern db (& dummy9e517ded_data_cf_2710)[2];
extern db (& dummy9e517ded_data_d1_2711)[2];
extern db (& dummy9e517ded_data_d3_2712)[2];
extern db (& dummy9e517ded_data_d5_2713)[2];
extern db (& dummy9e517ded_data_d7_2714)[2];
extern db (& dummy9e517ded_data_d9_2715)[2];
extern db (& dummy9e517ded_data_db_2716)[2];
extern db (& dummy9e517ded_data_dd_2717)[2];
extern db (& dummy9e517ded_data_df_2718)[2];
extern db (& dummy9e517ded_data_e1_2719)[2];
extern db (& dummy9e517ded_data_e3_2720)[2];
extern dw& autotitledol;
extern dw& dummy9e517ded_data_e7_2726;
extern dw& dummy9e517ded_data_e9_2727;
extern dw& dummy9e517ded_data_eb_2728;
extern dw& dummy9e517ded_data_ed_2729;
extern dw& altswitch;
extern dw& dummy9e517ded_data_f1_2735;
extern dw& dummy9e517ded_data_f3_2736;
extern dw& dummy9e517ded_data_f5_2737;
extern dw& hdgswitch;
extern dw& dummy9e517ded_data_f9_2743;
extern dw& dummy9e517ded_data_fb_2744;
extern dw& dummy9e517ded_data_fd_2745;
extern dw& modeptr;
extern dw& altptr;
extern dw& hdgptr;
extern dw& iasptr;
extern dw& wptel;
extern db (& mfdattr1)[8];
extern db (& mfdattr2)[8];
extern db& dummy9e517ded_data_119_2772;
extern db& dummy9e517ded_data_11a_2773;
extern db (& dummy9e517ded_data_11b_2774)[2];
extern dw& dummy9e517ded_data_11d_2775;
extern dw& dummy9e517ded_data_11f_2776;
extern db (& dummy9e517ded_data_121_2777)[2];
extern dw& dummy9e517ded_data_123_2778;
extern db (& dummy9e517ded_data_125_2779)[2];
extern dw (& dummy9e517ded_data_127_2780)[2];
extern char (& dummy9e517ded_data_12b_2781)[5];
extern db (& dummy9e517ded_data_130_2782)[2];
extern dw& dummy9e517ded_data_132_2783;
extern db (& dummy9e517ded_data_134_2784)[2];
extern dw& dummy9e517ded_data_136_2785;
extern dw& dummy9e517ded_data_138_2786;
extern db (& dummy9e517ded_data_13a_2787)[2];
extern dw (& dummy9e517ded_data_13c_2788)[2];
extern char (& dummy9e517ded_data_140_2789)[4];
extern char (& altdol)[6];
extern db (& dummy9e517ded_data_14a_2791)[2];
extern dw& dummy9e517ded_data_14c_2792;
extern db (& dummy9e517ded_data_14e_2793)[2];
extern dw& dummy9e517ded_data_150_2794;
extern dw& dummy9e517ded_data_152_2795;
extern db (& dummy9e517ded_data_154_2796)[2];
extern dw (& dummy9e517ded_data_156_2797)[2];
extern char (& dummy9e517ded_data_15a_2798)[4];
extern char (& hdgdol)[6];
extern db (& dummy9e517ded_data_164_2800)[2];
extern dw& dummy9e517ded_data_166_2801;
extern db (& dummy9e517ded_data_168_2802)[2];
extern dw& dummy9e517ded_data_16a_2803;
extern dw& dummy9e517ded_data_16c_2804;
extern db (& dummy9e517ded_data_16e_2805)[2];
extern dw (& dummy9e517ded_data_170_2806)[2];
extern char (& dummy9e517ded_data_174_2807)[4];
extern char (& iasdol)[6];
extern db (& dummy9e517ded_data_17e_2809)[2];
extern dw& dummy9e517ded_data_180_2810;
extern db& dummy9e517ded_data_182_2811;
extern db (& dummy9e517ded_data_183_2813)[2];
extern dw& dummy9e517ded_data_185_2814;
extern dw& dummy9e517ded_data_187_2815;
extern db (& dummy9e517ded_data_189_2816)[2];
extern dw (& dummy9e517ded_data_18b_2817)[2];
extern char (& dummy9e517ded_data_18f_2818)[4];
extern db& dummy9e517ded_data_193_2819;
extern db (& dummy9e517ded_data_194_2821)[2];
extern dw& dummy9e517ded_data_196_2822;
extern dw& dummy9e517ded_data_198_2823;
extern db& dummy9e517ded_data_19a_2824;
extern db (& dummy9e517ded_data_19b_2826)[2];
extern dw& dummy9e517ded_data_19d_2827;
extern dw& dummy9e517ded_data_19f_2828;
extern db& dummy9e517ded_data_1a1_2829;
extern char (& dummy9e517ded_data_1a2_2831)[5];
extern db& dummy9e517ded_data_1a7_2832;
extern db (& dummy9e517ded_data_1a8_2834)[2];
extern dw& dummy9e517ded_data_1aa_2835;
extern dw& dummy9e517ded_data_1ac_2836;
extern db (& dummy9e517ded_data_1ae_2837)[2];
extern dw (& dummy9e517ded_data_1b0_2838)[2];
extern char (& dummy9e517ded_data_1b4_2839)[4];
extern db& dummy9e517ded_data_1b8_2840;
extern db (& dummy9e517ded_data_1b9_2842)[2];
extern dw& dummy9e517ded_data_1bb_2843;
extern db& dummy9e517ded_data_1bd_2844;
extern char (& dummy9e517ded_data_1be_2846)[5];
extern db& dummy9e517ded_data_1c3_2847;
extern db (& dummy9e517ded_data_1c4_2849)[2];
extern dw& dummy9e517ded_data_1c6_2850;
extern dw& dummy9e517ded_data_1c8_2851;
extern db (& dummy9e517ded_data_1ca_2852)[2];
extern dw (& dummy9e517ded_data_1cc_2853)[2];
extern char (& dummy9e517ded_data_1d0_2854)[4];
extern db& dummy9e517ded_data_1d4_2855;
extern db (& dummy9e517ded_data_1d5_2857)[2];
extern dw& dummy9e517ded_data_1d7_2858;
extern dw& dummy9e517ded_data_1d9_2859;
extern db (& dummy9e517ded_data_1db_2860)[2];
extern dw (& dummy9e517ded_data_1dd_2861)[2];
extern char (& dummy9e517ded_data_1e1_2862)[4];
extern db& dummy9e517ded_data_1e5_2863;
extern char (& offdol)[4];
extern char (& approachdol)[6];
extern char (& trackacquiredol)[10];
extern char (& althdgholddol)[8];
extern char (& terrainfollowdol)[3];
extern char (& autothrottledol)[6];
extern char (& autodol)[5];
extern char (& acquiredol)[5];
extern char (& manualdol)[4];
extern char (& ridedol)[5];
extern db& dummy9e517ded_data_21e_2877;
extern db& dummy9e517ded_data_21f_2878;
extern db (& dummy9e517ded_data_220_2879)[2];
extern dw& dummy9e517ded_data_222_2880;
extern dw& dummy9e517ded_data_224_2881;
extern db (& dummy9e517ded_data_226_2882)[4];
extern db (& dummy9e517ded_data_22a_2883)[2];
extern dw (& dummy9e517ded_data_22c_2884)[2];
extern db (& dummy9e517ded_data_230_2885)[2];
extern db (& dummy9e517ded_data_232_2887)[2];
extern dw& dummy9e517ded_data_234_2888;
extern dw& dummy9e517ded_data_236_2889;
extern db (& dummy9e517ded_data_238_2890)[2];
extern db& dummy9e517ded_data_23a_2892;
extern db (& dummy9e517ded_data_23b_2894)[2];
extern dw (& dummy9e517ded_data_23d_2895)[2];
extern db (& dummy9e517ded_data_241_2896)[2];
extern dw& dummy9e517ded_data_243_2897;
extern dw& dummy9e517ded_data_245_2898;
extern db (& dummy9e517ded_data_247_2899)[2];
extern dw (& dummy9e517ded_data_249_2900)[2];
extern db (& dummy9e517ded_data_24d_2901)[2];
extern dw& dummy9e517ded_data_24f_2902;
extern dw& dummy9e517ded_data_251_2903;
extern db (& dummy9e517ded_data_253_2904)[2];
extern dw (& dummy9e517ded_data_255_2905)[2];
extern db (& dummy9e517ded_data_259_2906)[2];
extern dw& dummy9e517ded_data_25b_2907;
extern dw& dummy9e517ded_data_25d_2908;
extern db& dummy9e517ded_data_25f_2909;
extern db (& dummy9e517ded_data_260_2911)[2];
extern dw (& dummy9e517ded_data_262_2912)[2];
extern char (& dummy9e517ded_data_266_2913)[3];
extern db (& dummy9e517ded_data_269_2914)[2];
extern dw (& dummy9e517ded_data_26b_2915)[2];
extern char (& dummy9e517ded_data_26f_2916)[5];
extern db (& dummy9e517ded_data_274_2917)[2];
extern dw (& dummy9e517ded_data_276_2918)[2];
extern char (& dummy9e517ded_data_27a_2919)[5];
extern db& dummy9e517ded_data_27f_2920;
extern word& radarmaskpoly;
extern byte& crsrxlimits;
extern byte& afdsdol;
extern byte& ttgdol;
extern byte& ttgapproachdol;
extern byte& ttgtrackdol;
extern byte& ttginvaliddol;
extern byte& teldol;
extern byte& telvaliddol;
extern byte& telinvaliddol;
extern byte& earlydol;
extern byte& latedol;
extern byte& ilssetupdol;
extern byte& ilsactivedol;
extern byte& ilsinactivedol;
extern db& msecdata1;
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
#ifndef M2C_CODE_EQUATE_updatenavigmfd
#define M2C_CODE_EQUATE_updatenavigmfd 1
static const dd kupdatenavigmfd = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_updatemfd
#define M2C_CODE_EQUATE_updatemfd 1
static const dd kupdatemfd = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_updatepilotmfd
#define M2C_CODE_EQUATE_updatepilotmfd 1
static const dd kupdatepilotmfd = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_59_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_59_skip 1
static const dd k__m2c_macrolocal_59_skip = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_switchedoff
#define M2C_CODE_EQUATE_switchedoff 1
static const dd kswitchedoff = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_60_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_60_skip 1
static const dd k__m2c_macrolocal_60_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_damaged
#define M2C_CODE_EQUATE_damaged 1
static const dd kdamaged = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_checktabmap
#define M2C_CODE_EQUATE_checktabmap 1
static const dd kchecktabmap = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_selectnext
#define M2C_CODE_EQUATE_selectnext 1
static const dd kselectnext = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_check_mfdselect
#define M2C_CODE_EQUATE_check_mfdselect 1
static const dd kcheck_mfdselect = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_sortmode
#define M2C_CODE_EQUATE_sortmode 1
static const dd ksortmode = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_jumpouttohere
#define M2C_CODE_EQUATE_jumpouttohere 1
static const dd kjumpouttohere = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_selectmap
#define M2C_CODE_EQUATE_selectmap 1
static const dd kselectmap = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_selectmodeok
#define M2C_CODE_EQUATE_selectmodeok 1
static const dd kselectmodeok = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_selectradar
#define M2C_CODE_EQUATE_selectradar 1
static const dd kselectradar = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_selectafds
#define M2C_CODE_EQUATE_selectafds 1
static const dd kselectafds = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_selectflir
#define M2C_CODE_EQUATE_selectflir 1
static const dd kselectflir = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_skippyhere
#define M2C_CODE_EQUATE_skippyhere 1
static const dd kskippyhere = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_selectloopback
#define M2C_CODE_EQUATE_selectloopback 1
static const dd kselectloopback = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_skipradarcheck
#define M2C_CODE_EQUATE_skipradarcheck 1
static const dd kskipradarcheck = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_stealmouse
#define M2C_CODE_EQUATE_stealmouse 1
static const dd kstealmouse = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_cleardisp
#define M2C_CODE_EQUATE_cleardisp 1
static const dd kcleardisp = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_damageddisp
#define M2C_CODE_EQUATE_damageddisp 1
static const dd kdamageddisp = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_passtabmap
#define M2C_CODE_EQUATE_passtabmap 1
static const dd kpasstabmap = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_failtabmap
#define M2C_CODE_EQUATE_failtabmap 1
static const dd kfailtabmap = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_exitsteal
#define M2C_CODE_EQUATE_exitsteal 1
static const dd kexitsteal = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_contsteal
#define M2C_CODE_EQUATE_contsteal 1
static const dd kcontsteal = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_selectradarmfd
#define M2C_CODE_EQUATE_selectradarmfd 1
static const dd kselectradarmfd = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_ouches
#define M2C_CODE_EQUATE_ouches 1
static const dd kouches = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_selectautomfd
#define M2C_CODE_EQUATE_selectautomfd 1
static const dd kselectautomfd = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_mapdisp
#define M2C_CODE_EQUATE_mapdisp 1
static const dd kmapdisp = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_updatemapzoom
#define M2C_CODE_EQUATE_updatemapzoom 1
static const dd kupdatemapzoom = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1034;
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
#ifndef M2C_CODE_EQUATE_radardisp
#define M2C_CODE_EQUATE_radardisp 1
static const dd kradardisp = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_gndmappingradar
#define M2C_CODE_EQUATE_gndmappingradar 1
static const dd kgndmappingradar = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_airradar
#define M2C_CODE_EQUATE_airradar 1
static const dd kairradar = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_radarok
#define M2C_CODE_EQUATE_radarok 1
static const dd kradarok = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_65_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_65_skip 1
static const dd k__m2c_macrolocal_65_skip = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_contgmrmap
#define M2C_CODE_EQUATE_contgmrmap 1
static const dd kcontgmrmap = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_jumpoverheremann
#define M2C_CODE_EQUATE_jumpoverheremann 1
static const dd kjumpoverheremann = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_66_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_66_skip 1
static const dd k__m2c_macrolocal_66_skip = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_contgmrdes
#define M2C_CODE_EQUATE_contgmrdes 1
static const dd kcontgmrdes = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_gmrdecrange
#define M2C_CODE_EQUATE_gmrdecrange 1
static const dd kgmrdecrange = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_gmrincrange
#define M2C_CODE_EQUATE_gmrincrange 1
static const dd kgmrincrange = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_gmrrangeok
#define M2C_CODE_EQUATE_gmrrangeok 1
static const dd kgmrrangeok = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_67_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_67_skip 1
static const dd k__m2c_macrolocal_67_skip = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_68_testhi 1
static const dd k__m2c_macrolocal_68_testhi = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_68_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_68_testok 1
static const dd k__m2c_macrolocal_68_testok = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_69_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_69_testhi 1
static const dd k__m2c_macrolocal_69_testhi = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_69_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_69_testok 1
static const dd k__m2c_macrolocal_69_testok = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_70_testhi 1
static const dd k__m2c_macrolocal_70_testhi = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_70_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_70_testok 1
static const dd k__m2c_macrolocal_70_testok = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_71_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_71_testhi 1
static const dd k__m2c_macrolocal_71_testhi = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_71_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_71_testok 1
static const dd k__m2c_macrolocal_71_testok = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_72_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_72_skip 1
static const dd k__m2c_macrolocal_72_skip = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_snapstatic
#define M2C_CODE_EQUATE_snapstatic 1
static const dd ksnapstatic = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_snapmobile
#define M2C_CODE_EQUATE_snapmobile 1
static const dd ksnapmobile = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_75_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_75_skip 1
static const dd k__m2c_macrolocal_75_skip = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_skipwpcursor
#define M2C_CODE_EQUATE_skipwpcursor 1
static const dd kskipwpcursor = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_76_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_76_skip 1
static const dd k__m2c_macrolocal_76_skip = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_flashok
#define M2C_CODE_EQUATE_flashok 1
static const dd kflashok = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_77_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_77_skippixel 1
static const dd k__m2c_macrolocal_77_skippixel = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_78_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_78_skippixel 1
static const dd k__m2c_macrolocal_78_skippixel = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_79_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_79_skippixel 1
static const dd k__m2c_macrolocal_79_skippixel = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_80_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_80_skippixel 1
static const dd k__m2c_macrolocal_80_skippixel = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_81_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_81_skippixel 1
static const dd k__m2c_macrolocal_81_skippixel = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_82_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_82_skippixel 1
static const dd k__m2c_macrolocal_82_skippixel = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_83_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_83_skippixel 1
static const dd k__m2c_macrolocal_83_skippixel = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_84_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_84_skippixel 1
static const dd k__m2c_macrolocal_84_skippixel = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_85_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_85_skip 1
static const dd k__m2c_macrolocal_85_skip = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_skiptgtcursor
#define M2C_CODE_EQUATE_skiptgtcursor 1
static const dd kskiptgtcursor = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_86_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_86_skippixel 1
static const dd k__m2c_macrolocal_86_skippixel = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_87_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_87_skippixel 1
static const dd k__m2c_macrolocal_87_skippixel = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_88_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_88_skippixel 1
static const dd k__m2c_macrolocal_88_skippixel = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_89_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_89_skippixel 1
static const dd k__m2c_macrolocal_89_skippixel = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_90_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_90_skippixel 1
static const dd k__m2c_macrolocal_90_skippixel = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_91_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_91_skippixel 1
static const dd k__m2c_macrolocal_91_skippixel = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_92_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_92_skippixel 1
static const dd k__m2c_macrolocal_92_skippixel = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_93_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_93_skippixel 1
static const dd k__m2c_macrolocal_93_skippixel = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_drawradarmask
#define M2C_CODE_EQUATE_drawradarmask 1
static const dd kdrawradarmask = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_failsnapstatic
#define M2C_CODE_EQUATE_failsnapstatic 1
static const dd kfailsnapstatic = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_scanstatloop
#define M2C_CODE_EQUATE_scanstatloop 1
static const dd kscanstatloop = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_scanstatdone
#define M2C_CODE_EQUATE_scanstatdone 1
static const dd kscanstatdone = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_skipstatic
#define M2C_CODE_EQUATE_skipstatic 1
static const dd kskipstatic = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_passsnapstatic
#define M2C_CODE_EQUATE_passsnapstatic 1
static const dd kpasssnapstatic = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_failsnapmobile
#define M2C_CODE_EQUATE_failsnapmobile 1
static const dd kfailsnapmobile = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_scanmobloop
#define M2C_CODE_EQUATE_scanmobloop 1
static const dd kscanmobloop = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_scanmobdone
#define M2C_CODE_EQUATE_scanmobdone 1
static const dd kscanmobdone = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_skipmobile
#define M2C_CODE_EQUATE_skipmobile 1
static const dd kskipmobile = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_passsnapmobile
#define M2C_CODE_EQUATE_passsnapmobile 1
static const dd kpasssnapmobile = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_96_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_96_skip 1
static const dd k__m2c_macrolocal_96_skip = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_contairradar
#define M2C_CODE_EQUATE_contairradar 1
static const dd kcontairradar = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_lompatoverhereman
#define M2C_CODE_EQUATE_lompatoverhereman 1
static const dd klompatoverhereman = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_97_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_97_skip 1
static const dd k__m2c_macrolocal_97_skip = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_skipradrange
#define M2C_CODE_EQUATE_skipradrange 1
static const dd kskipradrange = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_decradrange
#define M2C_CODE_EQUATE_decradrange 1
static const dd kdecradrange = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_incradrange
#define M2C_CODE_EQUATE_incradrange 1
static const dd kincradrange = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_radrangeok
#define M2C_CODE_EQUATE_radrangeok 1
static const dd kradrangeok = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_98_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_98_testhi 1
static const dd k__m2c_macrolocal_98_testhi = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_98_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_98_testok 1
static const dd k__m2c_macrolocal_98_testok = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_99_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_99_testhi 1
static const dd k__m2c_macrolocal_99_testhi = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_99_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_99_testok 1
static const dd k__m2c_macrolocal_99_testok = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_100_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_100_testhi 1
static const dd k__m2c_macrolocal_100_testhi = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_100_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_100_testok 1
static const dd k__m2c_macrolocal_100_testok = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_101_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_101_testhi 1
static const dd k__m2c_macrolocal_101_testhi = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_101_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_101_testok 1
static const dd k__m2c_macrolocal_101_testok = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_airtgtloop1
#define M2C_CODE_EQUATE_airtgtloop1 1
static const dd kairtgtloop1 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_setairtgt
#define M2C_CODE_EQUATE_setairtgt 1
static const dd ksetairtgt = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_airtgtloop2
#define M2C_CODE_EQUATE_airtgtloop2 1
static const dd kairtgtloop2 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_notracks
#define M2C_CODE_EQUATE_notracks 1
static const dd knotracks = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_plotmobloop
#define M2C_CODE_EQUATE_plotmobloop 1
static const dd kplotmobloop = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_plotnextmob
#define M2C_CODE_EQUATE_plotnextmob 1
static const dd kplotnextmob = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_drawmobsymbol
#define M2C_CODE_EQUATE_drawmobsymbol 1
static const dd kdrawmobsymbol = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_tgtflashok
#define M2C_CODE_EQUATE_tgtflashok 1
static const dd ktgtflashok = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_102_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_102_skippixel 1
static const dd k__m2c_macrolocal_102_skippixel = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_103_skippixel 1
static const dd k__m2c_macrolocal_103_skippixel = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_104_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_104_skippixel 1
static const dd k__m2c_macrolocal_104_skippixel = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_105_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_105_skippixel 1
static const dd k__m2c_macrolocal_105_skippixel = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_106_skippixel 1
static const dd k__m2c_macrolocal_106_skippixel = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_107_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_107_skippixel 1
static const dd k__m2c_macrolocal_107_skippixel = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_108_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_108_skippixel 1
static const dd k__m2c_macrolocal_108_skippixel = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_109_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_109_skippixel 1
static const dd k__m2c_macrolocal_109_skippixel = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_110_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_110_skip 1
static const dd k__m2c_macrolocal_110_skip = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_drawmobenemy
#define M2C_CODE_EQUATE_drawmobenemy 1
static const dd kdrawmobenemy = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_drawmoballied
#define M2C_CODE_EQUATE_drawmoballied 1
static const dd kdrawmoballied = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_111_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_111_skippixel 1
static const dd k__m2c_macrolocal_111_skippixel = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_112_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_112_skippixel 1
static const dd k__m2c_macrolocal_112_skippixel = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_113_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_113_skippixel 1
static const dd k__m2c_macrolocal_113_skippixel = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_114_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_114_skippixel 1
static const dd k__m2c_macrolocal_114_skippixel = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skippixel 1
static const dd k__m2c_macrolocal_115_skippixel = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_exitmobsymbol
#define M2C_CODE_EQUATE_exitmobsymbol 1
static const dd kexitmobsymbol = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_116_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_116_skippixel 1
static const dd k__m2c_macrolocal_116_skippixel = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_117_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_117_skippixel 1
static const dd k__m2c_macrolocal_117_skippixel = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_118_skippixel 1
static const dd k__m2c_macrolocal_118_skippixel = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_119_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_119_skippixel 1
static const dd k__m2c_macrolocal_119_skippixel = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skippixel 1
static const dd k__m2c_macrolocal_120_skippixel = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_121_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_121_skippixel 1
static const dd k__m2c_macrolocal_121_skippixel = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_122_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_122_skippixel 1
static const dd k__m2c_macrolocal_122_skippixel = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_123_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_123_skippixel 1
static const dd k__m2c_macrolocal_123_skippixel = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_autopilotdisp
#define M2C_CODE_EQUATE_autopilotdisp 1
static const dd kautopilotdisp = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_contautodisp
#define M2C_CODE_EQUATE_contautodisp 1
static const dd kcontautodisp = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_sortautomode
#define M2C_CODE_EQUATE_sortautomode 1
static const dd ksortautomode = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_sortaltdol
#define M2C_CODE_EQUATE_sortaltdol 1
static const dd ksortaltdol = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_sorthdgdol
#define M2C_CODE_EQUATE_sorthdgdol 1
static const dd ksorthdgdol = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_skipapprttg
#define M2C_CODE_EQUATE_skipapprttg 1
static const dd kskipapprttg = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_exitautodisp
#define M2C_CODE_EQUATE_exitautodisp 1
static const dd kexitautodisp = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_124_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_124_skip 1
static const dd k__m2c_macrolocal_124_skip = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_altmanual
#define M2C_CODE_EQUATE_altmanual 1
static const dd kaltmanual = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_exitaltdol
#define M2C_CODE_EQUATE_exitaltdol 1
static const dd kexitaltdol = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_altapproach
#define M2C_CODE_EQUATE_altapproach 1
static const dd kaltapproach = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_altacquire
#define M2C_CODE_EQUATE_altacquire 1
static const dd kaltacquire = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_alttf
#define M2C_CODE_EQUATE_alttf 1
static const dd kalttf = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_hdgmanual
#define M2C_CODE_EQUATE_hdgmanual 1
static const dd khdgmanual = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_exithdgdol
#define M2C_CODE_EQUATE_exithdgdol 1
static const dd kexithdgdol = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_hdgapproach
#define M2C_CODE_EQUATE_hdgapproach 1
static const dd khdgapproach = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_hdgacquire
#define M2C_CODE_EQUATE_hdgacquire 1
static const dd khdgacquire = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_hdgtrack
#define M2C_CODE_EQUATE_hdgtrack 1
static const dd khdgtrack = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_ilsdisp
#define M2C_CODE_EQUATE_ilsdisp 1
static const dd kilsdisp = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_ilsexit
#define M2C_CODE_EQUATE_ilsexit 1
static const dd kilsexit = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp
#define M2C_CODE_EQUATE_flirdisp 1
static const dd kflirdisp = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_dontgonavmfd
#define M2C_CODE_EQUATE_dontgonavmfd 1
static const dd kdontgonavmfd = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_zebra
#define M2C_CODE_EQUATE_zebra 1
static const dd kzebra = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_skipmovironwork0
#define M2C_CODE_EQUATE_skipmovironwork0 1
static const dd kskipmovironwork0 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_drawirimage
#define M2C_CODE_EQUATE_drawirimage 1
static const dd kdrawirimage = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_bypassescope2
#define M2C_CODE_EQUATE_bypassescope2 1
static const dd kbypassescope2 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_rotatehdg
#define M2C_CODE_EQUATE_rotatehdg 1
static const dd krotatehdg = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_bypassescope2b
#define M2C_CODE_EQUATE_bypassescope2b 1
static const dd kbypassescope2b = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_skipircols
#define M2C_CODE_EQUATE_skipircols 1
static const dd kskipircols = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_skipfixcols
#define M2C_CODE_EQUATE_skipfixcols 1
static const dd kskipfixcols = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_damagedloop
#define M2C_CODE_EQUATE_damagedloop 1
static const dd kdamagedloop = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_nextdamage
#define M2C_CODE_EQUATE_nextdamage 1
static const dd knextdamage = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_damageddispmfd
#define M2C_CODE_EQUATE_damageddispmfd 1
static const dd kdamageddispmfd = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_damagedloop2
#define M2C_CODE_EQUATE_damagedloop2 1
static const dd kdamagedloop2 = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_nextdamage2
#define M2C_CODE_EQUATE_nextdamage2 1
static const dd knextdamage2 = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_invaliddisp
#define M2C_CODE_EQUATE_invaliddisp 1
static const dd kinvaliddisp = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomin
#define M2C_CODE_EQUATE_skipzoomin 1
static const dd kskipzoomin = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomout
#define M2C_CODE_EQUATE_skipzoomout 1
static const dd kskipzoomout = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp_ori
#define M2C_CODE_EQUATE_flirdisp_ori 1
static const dd kflirdisp_ori = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_skiprotatert
#define M2C_CODE_EQUATE_skiprotatert 1
static const dd kskiprotatert = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_skiprotatelt
#define M2C_CODE_EQUATE_skiprotatelt 1
static const dd kskiprotatelt = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x110e;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool airradar(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool autopilotdisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checktabmap(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cleardisp(m2c::_offsets, struct m2c::_STATE*);
static bool damageddisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool damageddispmfd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawirimage(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawmobsymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawradarmask(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp_ori(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool gndmappingradar(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ilsdisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool invaliddisp(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mapdisp(m2c::_offsets, struct m2c::_STATE*);
static bool pancode_0_proc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool radardisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool rotatehdg(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectautomfd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectradarmfd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool snapmobile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool snapstatic(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortaltdol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sorthdgdol(m2c::_offsets, struct m2c::_STATE*);
static bool stealmouse(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatemapzoom(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatemfd(m2c::_offsets, struct m2c::_STATE*);
extern bool blockfill(m2c::_offsets, struct m2c::_STATE*);
extern bool canceltgtwp(m2c::_offsets, struct m2c::_STATE*);
extern bool charsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool decworddol(m2c::_offsets, struct m2c::_STATE*);
extern bool drawradarnoise(m2c::_offsets, struct m2c::_STATE*);
extern bool fixgmrpalette(m2c::_offsets, struct m2c::_STATE*);
extern bool hlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool loadextrnpan(m2c::_offsets, struct m2c::_STATE*);
extern bool locatemobiles(m2c::_offsets, struct m2c::_STATE*);
extern bool moveviewpoint(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool readmousemotion(m2c::_offsets, struct m2c::_STATE*);
extern bool setgmrpalette(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);
extern bool setviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool updateextrn(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehud2(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemovingmap(m2c::_offsets, struct m2c::_STATE*);
extern bool updaterwr(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetgtwp(m2c::_offsets, struct m2c::_STATE*);
extern bool visual(m2c::_offsets, struct m2c::_STATE*);
extern bool vlinedraw(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef automode
extern dw& automode;
#endif
#ifndef ironwork
extern db& ironwork;
#endif
#ifndef kf_maporigin
extern db& kf_maporigin;
#endif
#ifndef hilltextenabled
extern db& hilltextenabled;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef secscancnt2
extern dw& secscancnt2;
#endif
#ifndef currentwpx
extern dw& currentwpx;
#endif
#ifndef autothrot
extern db& autothrot;
#endif
#ifndef floatwpx
extern dw& floatwpx;
#endif
#ifndef starsenabled
extern db& starsenabled;
#endif
#ifndef ilsactive
extern db& ilsactive;
#endif
#ifndef disphdg
extern dw& disphdg;
#endif
#ifndef kf_mfdselect
extern db& kf_mfdselect;
#endif
#ifndef tab2
extern tab& tab2;
#endif
#ifndef key
extern db& key;
#endif
#ifndef cellxmin
extern dw& cellxmin;
#endif
#ifndef cellxmax
extern dw& cellxmax;
#endif
#ifndef kf_trackaclk
extern db& kf_trackaclk;
#endif
#ifndef ilsglidepos
extern dw& ilsglidepos;
#endif
#ifndef m_cosp
extern dw& m_cosp;
#endif
#ifndef autovias
extern dw& autovias;
#endif
#ifndef ssf_navigmfd
extern db& ssf_navigmfd;
#endif
#ifndef secscanoff2
extern dw& secscanoff2;
#endif
#ifndef airtgtptr
extern dw& airtgtptr;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef airradarrng
extern dw& airradarrng;
#endif
#ifndef mobilelayer1
extern db& mobilelayer1;
#endif
#ifndef ilslocalpos
extern dw& ilslocalpos;
#endif
#ifndef tfridealt
extern dw& tfridealt;
#endif
#ifndef quietercockpit
extern db& quietercockpit;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef m_cosh
extern dw& m_cosh;
#endif
#ifndef floatwp
extern waypoint& floatwp;
#endif
#ifndef ssf_pilotmfd
extern db& ssf_pilotmfd;
#endif
#ifndef kf_fasttrkclk
extern db& kf_fasttrkclk;
#endif
#ifndef ilsbrg
extern dw& ilsbrg;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef currentwpy
extern dw& currentwpy;
#endif
#ifndef kf_mapzoomout
extern db& kf_mapzoomout;
#endif
#ifndef secscanoff1
extern dw& secscanoff1;
#endif
#ifndef numradartracks
extern dw& numradartracks;
#endif
#ifndef floatwpy
extern dw& floatwpy;
#endif
#ifndef mobsectortable
extern dw& mobsectortable;
#endif
#ifndef airradartracks
extern arad_track& airradartracks;
#endif
#ifndef cloudsenabled
extern db& cloudsenabled;
#endif
#ifndef autoalt
extern dw& autoalt;
#endif
#ifndef ilsrng
extern dw& ilsrng;
#endif
#ifndef kf_fasttrkaclk
extern db& kf_fasttrkaclk;
#endif
#ifndef shiftdwaspressed
extern db& shiftdwaspressed;
#endif
#ifndef m_mobile
extern dw& m_mobile;
#endif
#ifndef cellymin
extern dw& cellymin;
#endif
#ifndef wpeta
extern dw& wpeta;
#endif
#ifndef hdgmode
extern dw& hdgmode;
#endif
#ifndef cellymax
extern dw& cellymax;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef kf_trackclk
extern db& kf_trackclk;
#endif
#ifndef secscancnt1
extern dw& secscancnt1;
#endif
#ifndef kf_mfdtoggle
extern db& kf_mfdtoggle;
#endif
#ifndef fullscreen
extern db& fullscreen;
#endif
#ifndef crewmode
extern dw& crewmode;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef kf_mapzoomin
extern db& kf_mapzoomin;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef autohdgfine
extern dw& autohdgfine;
#endif
#ifndef prtcl
extern dw& prtcl;
#endif
#ifndef wptimeearlylate
extern dw& wptimeearlylate;
#endif
#ifndef ilseta
extern dw& ilseta;
#endif
#ifndef altmode
extern dw& altmode;
#endif
#ifndef prtln
extern dw& prtln;
#endif
#ifndef tab1
extern tab& tab1;
#endif
#ifndef m_sinh
extern dw& m_sinh;
#endif
#ifndef gradenabled
extern db& gradenabled;
#endif
#ifndef night
extern db& night;
#endif
#ifndef kf_full_mfd
extern db& kf_full_mfd;
#endif
#ifndef autohdg
extern dw& autohdg;
#endif
#ifndef disableinput
extern db& disableinput;
#endif

#endif

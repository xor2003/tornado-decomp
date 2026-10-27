/* THIS IS GENERATED FILE */

        
#ifndef __M2C_TAB_STUBS_H__
#define __M2C_TAB_STUBS_H__

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
  db dummycd97adea_default_seg_0_467;
  db dummycd97adea_default_seg_0_468;
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

static const word tab_x_org = offsetof(struct tab, tab_x_org);
static const word tab_y_org = offsetof(struct tab, tab_y_org);
static const word tab_status = offsetof(struct tab, tab_status);
static const word tab_mode = offsetof(struct tab, tab_mode);
static const word tab_ssf_ptr = offsetof(struct tab, tab_ssf_ptr);
static const word tab_req_mouse = offsetof(struct tab, tab_req_mouse);
static const word tab_has_mouse = offsetof(struct tab, tab_has_mouse);
static const word tab_select = offsetof(struct tab, tab_select);
static const word tab_toggle = offsetof(struct tab, tab_toggle);
static const word mfd_x_org = offsetof(struct mfd, mfd_x_org);
static const word mfd_y_org = offsetof(struct mfd, mfd_y_org);
static const word mfd_status = offsetof(struct mfd, mfd_status);
static const word mfd_mode = offsetof(struct mfd, mfd_mode);
static const word mfd_map_zoom = offsetof(struct mfd, mfd_map_zoom);
static const word mfd_map_org = offsetof(struct mfd, mfd_map_org);
static const word mfd_ssf_ptr = offsetof(struct mfd, mfd_ssf_ptr);
static const word mfd_req_mouse = offsetof(struct mfd, mfd_req_mouse);
static const word mfd_has_mouse = offsetof(struct mfd, mfd_has_mouse);
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
static const word dummycd97adea_default_seg_0_467 = offsetof(struct endroute, dummycd97adea_default_seg_0_467);
static const word dummycd97adea_default_seg_0_468 = offsetof(struct endroute, dummycd97adea_default_seg_0_468);
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
static const int hud_x_org = 160;
static const int hud_y_org = 96;
static const int local_x = 95;
static const int local_y = 184;
static const int glide_x = 78;
static const int glide_y = 186;
static const int tab_width = 96;
static const int tab_depth = 72;
static const int tab_width_tiald = 320;
static const int tab_depth_tiald = 192;
static const int offsettiald = 8;
static const int xc = 96/2;
static const int yc = (72/2-1)+8;
static const int xc_tiald = 320/2;
static const int yc_tiald = (192/2-1)+25;
static const int pln_scale1 = 0;
static const int pln_scale2 = 2;
static const int pln_scale3 = 4;
static const int min_op_rad_alt = 100;
static const int td_blink_rate = 10;
static const int tiald_init = 0;
static const int tiald_search = 2;
static const int tiald_zoom = 4;
static const int tiald_adj_lock = 6;
static const int tiald_tgt_lock = 8;

	#define M2C_MODULE_TAB 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& dummycd97adea_data_0_2661;
extern db& dummycd97adea_data_1_2662;
extern db (& dummycd97adea_data_2_2663)[10];
extern db& dummycd97adea_data_c_2664;
extern db (& dummycd97adea_data_d_2667)[2];
extern db (& dummycd97adea_data_f_2668)[2];
extern dw& dummycd97adea_data_11_2669;
extern db (& dummycd97adea_data_13_2670)[2];
extern dw& dummycd97adea_data_15_2671;
extern char (& dummycd97adea_data_17_2672)[4];
extern db (& dummycd97adea_data_1b_2673)[2];
extern dw& dummycd97adea_data_1d_2674;
extern db (& dummycd97adea_data_1f_2675)[2];
extern dw& dummycd97adea_data_21_2676;
extern char& dummycd97adea_data_23_2677;
extern db (& dummycd97adea_data_24_2678)[2];
extern dw& dummycd97adea_data_26_2679;
extern dw& dummycd97adea_data_28_2680;
extern db (& dummycd97adea_data_2a_2681)[2];
extern db& dummycd97adea_data_2c_2682;
extern db (& dummycd97adea_data_2d_2685)[2];
extern db (& dummycd97adea_data_2f_2686)[2];
extern dw& dummycd97adea_data_31_2687;
extern db (& dummycd97adea_data_33_2688)[2];
extern dw& dummycd97adea_data_35_2689;
extern char (& dummycd97adea_data_37_2690)[4];
extern db (& dummycd97adea_data_3b_2691)[2];
extern dw& dummycd97adea_data_3d_2692;
extern db (& dummycd97adea_data_3f_2693)[2];
extern dw& dummycd97adea_data_41_2694;
extern char& dummycd97adea_data_43_2695;
extern db (& dummycd97adea_data_44_2696)[2];
extern dw& dummycd97adea_data_46_2697;
extern dw& dummycd97adea_data_48_2698;
extern db (& dummycd97adea_data_4a_2699)[2];
extern db& dummycd97adea_data_4c_2700;
extern dw& localxpos;
extern db& glideypos;
extern db (& dummycd97adea_data_50_2718)[2];
extern db (& dummycd97adea_data_52_2719)[2];
extern db (& dummycd97adea_data_54_2720)[2];
extern db (& dummycd97adea_data_56_2721)[2];
extern db (& dummycd97adea_data_58_2722)[2];
extern db (& dummycd97adea_data_5a_2723)[2];
extern db (& dummycd97adea_data_5c_2724)[2];
extern db (& dummycd97adea_data_5e_2725)[2];
extern db (& dummycd97adea_data_60_2726)[2];
extern db (& dummycd97adea_data_62_2727)[2];
extern db (& dummycd97adea_data_64_2728)[2];
extern db (& dummycd97adea_data_66_2729)[2];
extern db (& dummycd97adea_data_68_2730)[2];
extern db (& dummycd97adea_data_6a_2731)[2];
extern db (& dummycd97adea_data_6c_2732)[2];
extern db (& dummycd97adea_data_6e_2733)[2];
extern db (& dummycd97adea_data_70_2734)[2];
extern db (& dummycd97adea_data_72_2735)[2];
extern db (& dummycd97adea_data_74_2736)[2];
extern db (& dummycd97adea_data_76_2737)[2];
extern db (& dummycd97adea_data_78_2738)[2];
extern db (& dummycd97adea_data_7a_2739)[2];
extern db (& dummycd97adea_data_7c_2740)[2];
extern db (& dummycd97adea_data_7e_2741)[2];
extern db (& dummycd97adea_data_80_2742)[2];
extern db (& dummycd97adea_data_82_2743)[2];
extern db (& dummycd97adea_data_84_2744)[2];
extern db (& dummycd97adea_data_86_2745)[2];
extern db (& dummycd97adea_data_88_2746)[2];
extern db (& dummycd97adea_data_8a_2747)[2];
extern db (& dummycd97adea_data_8c_2748)[2];
extern db (& dummycd97adea_data_8e_2749)[2];
extern db (& dummycd97adea_data_90_2750)[2];
extern db (& dummycd97adea_data_92_2751)[2];
extern db (& dummycd97adea_data_94_2752)[2];
extern db (& dummycd97adea_data_96_2753)[2];
extern db (& dummycd97adea_data_98_2754)[2];
extern db (& dummycd97adea_data_9a_2755)[2];
extern db (& dummycd97adea_data_9c_2756)[2];
extern db (& dummycd97adea_data_9e_2757)[2];
extern db (& dummycd97adea_data_a0_2758)[2];
extern db (& dummycd97adea_data_a2_2759)[2];
extern db (& dummycd97adea_data_a4_2760)[2];
extern db (& dummycd97adea_data_a6_2761)[2];
extern db (& dummycd97adea_data_a8_2762)[2];
extern db (& dummycd97adea_data_aa_2763)[2];
extern db (& dummycd97adea_data_ac_2764)[2];
extern db (& dummycd97adea_data_ae_2765)[2];
extern db (& dummycd97adea_data_b0_2766)[2];
extern db (& dummycd97adea_data_b2_2767)[2];
extern db (& dummycd97adea_data_b4_2768)[2];
extern db (& dummycd97adea_data_b6_2769)[2];
extern db (& dummycd97adea_data_b8_2770)[2];
extern db (& dummycd97adea_data_ba_2771)[2];
extern db (& dummycd97adea_data_bc_2772)[2];
extern db (& dummycd97adea_data_be_2773)[2];
extern db (& dummycd97adea_data_c0_2774)[2];
extern db (& dummycd97adea_data_c2_2775)[2];
extern db (& dummycd97adea_data_c4_2776)[2];
extern db (& dummycd97adea_data_c6_2777)[2];
extern db (& dummycd97adea_data_c8_2778)[2];
extern db (& dummycd97adea_data_ca_2779)[2];
extern db (& dummycd97adea_data_cc_2780)[2];
extern db (& dummycd97adea_data_ce_2781)[2];
extern db (& dummycd97adea_data_d0_2782)[2];
extern db (& dummycd97adea_data_d2_2783)[2];
extern db (& dummycd97adea_data_d4_2784)[2];
extern db (& dummycd97adea_data_d6_2785)[2];
extern db (& dummycd97adea_data_d8_2786)[2];
extern db (& dummycd97adea_data_da_2787)[2];
extern db (& dummycd97adea_data_dc_2788)[2];
extern db (& dummycd97adea_data_de_2789)[2];
extern db (& dummycd97adea_data_e0_2790)[2];
extern db (& dummycd97adea_data_e2_2791)[2];
extern db (& dummycd97adea_data_e4_2792)[2];
extern db (& dummycd97adea_data_e6_2793)[2];
extern db (& dummycd97adea_data_e8_2794)[2];
extern dw& xorg;
extern db (& yorg)[2];
extern dw& xorg_tiald;
extern db (& yorg_tiald)[2];
extern dw& tabptr;
extern tab& tab1;
extern tab& tab2;
extern db& tabmouseflags;
extern db& dummycd97adea_data_10d_2849;
extern db& dummycd97adea_data_10e_2850;
extern db& dummycd97adea_data_10f_2851;
extern db& dummycd97adea_data_110_2852;
extern dw& selectswitch;
extern dw& dummycd97adea_data_113_2859;
extern dw& dummycd97adea_data_115_2860;
extern dw& dummycd97adea_data_117_2861;
extern dw& dummycd97adea_data_119_2862;
extern dw& dummycd97adea_data_11b_2863;
extern dw& dummycd97adea_data_11d_2864;
extern dw& dummycd97adea_data_11f_2865;
extern dw& dummycd97adea_data_121_2866;
extern dw& dispswitch;
extern dw& dummycd97adea_data_125_2872;
extern dw& dummycd97adea_data_127_2873;
extern dw& dummycd97adea_data_129_2874;
extern dw& dummycd97adea_data_12b_2875;
extern dw& dummycd97adea_data_12d_2876;
extern dw& dummycd97adea_data_12f_2877;
extern dw& dummycd97adea_data_131_2878;
extern viewport& vp;
extern dw& mapzoom;
extern dw& maporigin;
extern dw& plnscale;
extern db (& plnscaletable)[2];
extern db (& dummycd97adea_data_145_2902)[2];
extern db (& dummycd97adea_data_147_2903)[2];
extern dw& plnxcentre;
extern dw& plnycentre;
extern dw& tmpx;
extern dw& tmpy;
extern viewpoint& tiald_view;
extern dw& tdscansize;
extern dw& tdxoffset;
extern dw& tdyoffset;
extern dw& tdzoom;
extern db& tdzoomkey;
extern db& tddrag;
extern db& tdcross;
extern db& tdblink;
extern db& tialdactive;
extern db& laseractive;
extern dw& tdblinktimer;
extern dw& tdmode;
extern dw& tdswitch;
extern dw& dummycd97adea_data_177_2937;
extern dw& dummycd97adea_data_179_2938;
extern dw& dummycd97adea_data_17b_2939;
extern dw& dummycd97adea_data_17d_2940;
extern dw& tdswitch_ori;
extern dw& dummycd97adea_data_181_2942;
extern dw& dummycd97adea_data_183_2943;
extern dw& dummycd97adea_data_185_2944;
extern dw& dummycd97adea_data_187_2945;
extern dw& tdswitch_ori2;
extern dw& dummycd97adea_data_18b_2947;
extern dw& dummycd97adea_data_18d_2948;
extern dw& dummycd97adea_data_18f_2949;
extern dw& dummycd97adea_data_191_2950;
extern dw& tdsymbolswitch;
extern dw& dummycd97adea_data_195_2954;
extern dw& dummycd97adea_data_197_2955;
extern dw& dummycd97adea_data_199_2956;
extern dw& dummycd97adea_data_19b_2957;
extern dw& tdsymbolswitch_ori;
extern dw& dummycd97adea_data_19f_2959;
extern dw& dummycd97adea_data_1a1_2960;
extern dw& dummycd97adea_data_1a3_2961;
extern dw& dummycd97adea_data_1a5_2962;
extern dw& tdsymbolswitch_ori2;
extern dw& dummycd97adea_data_1a9_2964;
extern dw& dummycd97adea_data_1ab_2965;
extern dw& dummycd97adea_data_1ad_2966;
extern dw& dummycd97adea_data_1af_2967;
extern viewpoint& ref_view;
extern db (& refdesignated)[2];
extern dw& refdesx;
extern dw& refdesy;
extern dw& refzoom;
extern dd& refrng;
extern dw& refbrg;
extern dw& refrngnmiles;
extern dw& refeta;
extern db& radartest;
extern db& dummycd97adea_data_1d6_2993;
extern db& dummycd97adea_data_1d7_2994;
extern db (& dummycd97adea_data_1d8_2995)[4];
extern db (& dummycd97adea_data_1dc_2996)[2];
extern dw& dummycd97adea_data_1de_2997;
extern dw& dummycd97adea_data_1e0_2998;
extern db (& dummycd97adea_data_1e2_2999)[2];
extern dw (& dummycd97adea_data_1e4_3000)[2];
extern db (& dummycd97adea_data_1e8_3001)[2];
extern db (& dummycd97adea_data_1ea_3003)[2];
extern dw& dummycd97adea_data_1ec_3004;
extern dw& dummycd97adea_data_1ee_3005;
extern db (& dummycd97adea_data_1f0_3006)[2];
extern db& dummycd97adea_data_1f2_3008;
extern db (& dummycd97adea_data_1f3_3010)[2];
extern dw& dummycd97adea_data_1f5_3011;
extern dw& dummycd97adea_data_1f7_3012;
extern db (& dummycd97adea_data_1f9_3013)[2];
extern dw (& dummycd97adea_data_1fb_3014)[2];
extern db (& dummycd97adea_data_1ff_3015)[2];
extern dw& dummycd97adea_data_201_3016;
extern dw& dummycd97adea_data_203_3017;
extern db& dummycd97adea_data_205_3018;
extern db (& dummycd97adea_data_206_3020)[2];
extern dw& dummycd97adea_data_208_3021;
extern dw& dummycd97adea_data_20a_3022;
extern db (& dummycd97adea_data_20c_3023)[2];
extern dw (& dummycd97adea_data_20e_3024)[2];
extern db (& dummycd97adea_data_212_3025)[2];
extern dw& dummycd97adea_data_214_3026;
extern dw& dummycd97adea_data_216_3027;
extern db& dummycd97adea_data_218_3028;
extern db (& dummycd97adea_data_219_3030)[2];
extern dw& dummycd97adea_data_21b_3031;
extern dw& dummycd97adea_data_21d_3032;
extern db (& dummycd97adea_data_21f_3034)[2];
extern dw (& dummycd97adea_data_221_3035)[2];
extern db (& dummycd97adea_data_225_3036)[2];
extern dw& dummycd97adea_data_227_3037;
extern dw& dummycd97adea_data_229_3038;
extern db& dummycd97adea_data_22b_3039;
extern db (& dummycd97adea_data_22c_3041)[2];
extern dw& dummycd97adea_data_22e_3042;
extern dw& dummycd97adea_data_230_3043;
extern db (& dummycd97adea_data_232_3044)[2];
extern dw (& dummycd97adea_data_234_3045)[2];
extern char (& dummycd97adea_data_238_3046)[5];
extern db& dummycd97adea_data_23d_3047;
extern db (& dummycd97adea_data_23e_3049)[2];
extern dw& dummycd97adea_data_240_3050;
extern dw& dummycd97adea_data_242_3051;
extern db (& dummycd97adea_data_244_3052)[2];
extern dw (& dummycd97adea_data_246_3053)[2];
extern char (& dummycd97adea_data_24a_3054)[3];
extern db& dummycd97adea_data_24d_3055;
extern db (& dummycd97adea_data_24e_3057)[2];
extern dw& dummycd97adea_data_250_3058;
extern dw& dummycd97adea_data_252_3059;
extern db (& dummycd97adea_data_254_3060)[2];
extern dw (& dummycd97adea_data_256_3061)[2];
extern char (& dummycd97adea_data_25a_3062)[5];
extern db& dummycd97adea_data_25f_3063;
extern db& dummycd97adea_data_260_3069;
extern db& dummycd97adea_data_261_3070;
extern db (& dummycd97adea_data_262_3071)[4];
extern db (& dummycd97adea_data_266_3072)[2];
extern dw& dummycd97adea_data_268_3073;
extern dw& dummycd97adea_data_26a_3074;
extern db (& dummycd97adea_data_26c_3075)[2];
extern dw (& dummycd97adea_data_26e_3076)[2];
extern db (& dummycd97adea_data_272_3077)[2];
extern db (& dummycd97adea_data_274_3079)[2];
extern dw& dummycd97adea_data_276_3080;
extern dw& dummycd97adea_data_278_3081;
extern db (& dummycd97adea_data_27a_3082)[2];
extern db (& dummycd97adea_data_27c_3084)[2];
extern dw& dummycd97adea_data_27e_3085;
extern dw& dummycd97adea_data_280_3086;
extern db (& dummycd97adea_data_282_3087)[2];
extern dw (& dummycd97adea_data_284_3088)[2];
extern db (& dummycd97adea_data_288_3089)[2];
extern dw& dummycd97adea_data_28a_3090;
extern db (& dummycd97adea_data_28c_3091)[2];
extern dw& dummycd97adea_data_28e_3092;
extern dw& dummycd97adea_data_290_3093;
extern db (& dummycd97adea_data_292_3094)[2];
extern dw (& dummycd97adea_data_294_3095)[2];
extern db (& dummycd97adea_data_298_3096)[2];
extern dw& dummycd97adea_data_29a_3097;
extern db& dummycd97adea_data_29c_3098;
extern db& dummycd97adea_data_29d_3100;
extern db& dummycd97adea_data_29e_3101;
extern db (& dummycd97adea_data_29f_3102)[4];
extern db (& dummycd97adea_data_2a3_3103)[2];
extern dw& dummycd97adea_data_2a5_3104;
extern dw& dummycd97adea_data_2a7_3105;
extern db (& dummycd97adea_data_2a9_3106)[2];
extern dw (& dummycd97adea_data_2ab_3107)[2];
extern db (& dummycd97adea_data_2af_3108)[2];
extern db (& dummycd97adea_data_2b1_3110)[2];
extern dw& dummycd97adea_data_2b3_3111;
extern dw& dummycd97adea_data_2b5_3112;
extern db (& dummycd97adea_data_2b7_3113)[2];
extern db (& dummycd97adea_data_2b9_3115)[2];
extern dw& dummycd97adea_data_2bb_3116;
extern dw& dummycd97adea_data_2bd_3117;
extern db (& dummycd97adea_data_2bf_3118)[2];
extern dw (& dummycd97adea_data_2c1_3119)[2];
extern db (& dummycd97adea_data_2c5_3120)[2];
extern dw& dummycd97adea_data_2c7_3121;
extern db (& dummycd97adea_data_2c9_3122)[2];
extern dw& dummycd97adea_data_2cb_3123;
extern dw& dummycd97adea_data_2cd_3124;
extern db (& dummycd97adea_data_2cf_3125)[2];
extern dw (& dummycd97adea_data_2d1_3126)[2];
extern db (& dummycd97adea_data_2d5_3127)[2];
extern dw& dummycd97adea_data_2d7_3128;
extern db& dummycd97adea_data_2d9_3129;
extern db (& dummycd97adea_data_2da_3131)[2];
extern dw& dummycd97adea_data_2dc_3132;
extern dw& dummycd97adea_data_2de_3133;
extern db (& dummycd97adea_data_2e0_3134)[2];
extern dw (& dummycd97adea_data_2e2_3135)[2];
extern db (& dummycd97adea_data_2e6_3136)[2];
extern dw& dummycd97adea_data_2e8_3137;
extern db& dummycd97adea_data_2ea_3138;
extern db (& dummycd97adea_data_2eb_3140)[2];
extern dw& dummycd97adea_data_2ed_3141;
extern dw& dummycd97adea_data_2ef_3142;
extern db (& dummycd97adea_data_2f1_3143)[2];
extern dw (& dummycd97adea_data_2f3_3144)[2];
extern char (& dummycd97adea_data_2f7_3145)[5];
extern db& dummycd97adea_data_2fc_3146;
extern byte& setupdol;
extern byte& cannondol;
extern byte& cannon2dol;
extern byte& dialxy3;
extern byte& wpsetupdol;
extern byte& wprngdol;
extern byte& wpbrgdol;
extern byte& wpetadol;
extern byte& wprnginvaliddol;
extern byte& wpbrginvaliddol;
extern byte& wpetainvaliddol;
extern byte& refmapdol;
extern byte& refmap_col_huddol;
extern byte& refetadol;
extern byte& refetainvaliddol;
extern db& secdata1;
extern db& pancode;
extern db& dummycd97adea_pancode_2fd_5601;
extern db& dummycd97adea_pancode_2fe_5607;
extern db& dummycd97adea_pancode_2ff_5612;

	
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
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_updatetab1
#define M2C_CODE_EQUATE_updatetab1 1
static const dd kupdatetab1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_updatetab
#define M2C_CODE_EQUATE_updatetab 1
static const dd kupdatetab = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_updatetab2
#define M2C_CODE_EQUATE_updatetab2 1
static const dd kupdatetab2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_88_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_88_skip 1
static const dd k__m2c_macrolocal_88_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_switchedoff
#define M2C_CODE_EQUATE_switchedoff 1
static const dd kswitchedoff = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_89_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_89_skip 1
static const dd k__m2c_macrolocal_89_skip = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_damaged
#define M2C_CODE_EQUATE_damaged 1
static const dd kdamaged = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_contselect
#define M2C_CODE_EQUATE_contselect 1
static const dd kcontselect = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_sortmode
#define M2C_CODE_EQUATE_sortmode 1
static const dd ksortmode = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_selectnext
#define M2C_CODE_EQUATE_selectnext 1
static const dd kselectnext = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_nextcondition3
#define M2C_CODE_EQUATE_nextcondition3 1
static const dd knextcondition3 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_nextcondition4
#define M2C_CODE_EQUATE_nextcondition4 1
static const dd knextcondition4 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_nextcondition5
#define M2C_CODE_EQUATE_nextcondition5 1
static const dd knextcondition5 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_goaheadselect
#define M2C_CODE_EQUATE_goaheadselect 1
static const dd kgoaheadselect = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_90_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_90_skip 1
static const dd k__m2c_macrolocal_90_skip = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_getouthere
#define M2C_CODE_EQUATE_getouthere 1
static const dd kgetouthere = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_checktab
#define M2C_CODE_EQUATE_checktab 1
static const dd kchecktab = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_checktab2
#define M2C_CODE_EQUATE_checktab2 1
static const dd kchecktab2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_checktab3
#define M2C_CODE_EQUATE_checktab3 1
static const dd kchecktab3 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_selectmap
#define M2C_CODE_EQUATE_selectmap 1
static const dd kselectmap = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_selectmodeok
#define M2C_CODE_EQUATE_selectmodeok 1
static const dd kselectmodeok = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_selecttiald
#define M2C_CODE_EQUATE_selecttiald 1
static const dd kselecttiald = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_selectradar
#define M2C_CODE_EQUATE_selectradar 1
static const dd kselectradar = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_selectloopback
#define M2C_CODE_EQUATE_selectloopback 1
static const dd kselectloopback = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_stealmouse
#define M2C_CODE_EQUATE_stealmouse 1
static const dd kstealmouse = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_cleardisp
#define M2C_CODE_EQUATE_cleardisp 1
static const dd kcleardisp = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_damageddisp
#define M2C_CODE_EQUATE_damageddisp 1
static const dd kdamageddisp = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_exitsteal
#define M2C_CODE_EQUATE_exitsteal 1
static const dd kexitsteal = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_contsteal
#define M2C_CODE_EQUATE_contsteal 1
static const dd kcontsteal = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_routeplandisp
#define M2C_CODE_EQUATE_routeplandisp 1
static const dd krouteplandisp = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_contplnscale
#define M2C_CODE_EQUATE_contplnscale 1
static const dd kcontplnscale = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_startscan
#define M2C_CODE_EQUATE_startscan 1
static const dd kstartscan = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_scanwploop
#define M2C_CODE_EQUATE_scanwploop 1
static const dd kscanwploop = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_xgridloop
#define M2C_CODE_EQUATE_xgridloop 1
static const dd kxgridloop = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_ygridloop
#define M2C_CODE_EQUATE_ygridloop 1
static const dd kygridloop = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_91_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_91_skip 1
static const dd k__m2c_macrolocal_91_skip = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_drawfloatwp
#define M2C_CODE_EQUATE_drawfloatwp 1
static const dd kdrawfloatwp = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_drawwpmarkers
#define M2C_CODE_EQUATE_drawwpmarkers 1
static const dd kdrawwpmarkers = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_drawleg
#define M2C_CODE_EQUATE_drawleg 1
static const dd kdrawleg = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_linkloop
#define M2C_CODE_EQUATE_linkloop 1
static const dd klinkloop = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_wpmarkerloop
#define M2C_CODE_EQUATE_wpmarkerloop 1
static const dd kwpmarkerloop = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_skipwpmarker
#define M2C_CODE_EQUATE_skipwpmarker 1
static const dd kskipwpmarker = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_drawposmarker
#define M2C_CODE_EQUATE_drawposmarker 1
static const dd kdrawposmarker = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_wpinvalid1
#define M2C_CODE_EQUATE_wpinvalid1 1
static const dd kwpinvalid1 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_wpinvalid2
#define M2C_CODE_EQUATE_wpinvalid2 1
static const dd kwpinvalid2 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_routeplanexit
#define M2C_CODE_EQUATE_routeplanexit 1
static const dd krouteplanexit = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_mapdisp
#define M2C_CODE_EQUATE_mapdisp 1
static const dd kmapdisp = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomin
#define M2C_CODE_EQUATE_skipzoomin 1
static const dd kskipzoomin = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_skipzoomout
#define M2C_CODE_EQUATE_skipzoomout 1
static const dd kskipzoomout = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_conthere
#define M2C_CODE_EQUATE_conthere 1
static const dd kconthere = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_setcolourhudd1
#define M2C_CODE_EQUATE_setcolourhudd1 1
static const dd ksetcolourhudd1 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_zxs1
#define M2C_CODE_EQUATE_zxs1 1
static const dd kzxs1 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_conthere2
#define M2C_CODE_EQUATE_conthere2 1
static const dd kconthere2 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_setcolourhudd2
#define M2C_CODE_EQUATE_setcolourhudd2 1
static const dd ksetcolourhudd2 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_zxs2
#define M2C_CODE_EQUATE_zxs2 1
static const dd kzxs2 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_setcolourhudd3
#define M2C_CODE_EQUATE_setcolourhudd3 1
static const dd ksetcolourhudd3 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_zxs3
#define M2C_CODE_EQUATE_zxs3 1
static const dd kzxs3 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_setcolourhudd4
#define M2C_CODE_EQUATE_setcolourhudd4 1
static const dd ksetcolourhudd4 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_zxs4
#define M2C_CODE_EQUATE_zxs4 1
static const dd kzxs4 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_refdisp
#define M2C_CODE_EQUATE_refdisp 1
static const dd krefdisp = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_95_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_95_skip 1
static const dd k__m2c_macrolocal_95_skip = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_drawrefmap
#define M2C_CODE_EQUATE_drawrefmap 1
static const dd kdrawrefmap = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_gooverheremann
#define M2C_CODE_EQUATE_gooverheremann 1
static const dd kgooverheremann = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_96_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_96_skip 1
static const dd k__m2c_macrolocal_96_skip = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_contrefslew
#define M2C_CODE_EQUATE_contrefslew 1
static const dd kcontrefslew = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_refzoomin
#define M2C_CODE_EQUATE_refzoomin 1
static const dd krefzoomin = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_refzoomout
#define M2C_CODE_EQUATE_refzoomout 1
static const dd krefzoomout = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_refzoomok
#define M2C_CODE_EQUATE_refzoomok 1
static const dd krefzoomok = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_98_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_98_testhi 1
static const dd k__m2c_macrolocal_98_testhi = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_98_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_98_testok 1
static const dd k__m2c_macrolocal_98_testok = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_99_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_99_testhi 1
static const dd k__m2c_macrolocal_99_testhi = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_99_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_99_testok 1
static const dd k__m2c_macrolocal_99_testok = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel34
#define M2C_CODE_EQUATE_dummylabel34 1
static const dd kdummylabel34 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel35
#define M2C_CODE_EQUATE_dummylabel35 1
static const dd kdummylabel35 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel36
#define M2C_CODE_EQUATE_dummylabel36 1
static const dd kdummylabel36 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel37
#define M2C_CODE_EQUATE_dummylabel37 1
static const dd kdummylabel37 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel38
#define M2C_CODE_EQUATE_dummylabel38 1
static const dd kdummylabel38 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_snapgndobject
#define M2C_CODE_EQUATE_snapgndobject 1
static const dd ksnapgndobject = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_100_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_100_skip 1
static const dd k__m2c_macrolocal_100_skip = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_skipwpsymbol
#define M2C_CODE_EQUATE_skipwpsymbol 1
static const dd kskipwpsymbol = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_101_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_101_skip 1
static const dd k__m2c_macrolocal_101_skip = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_putcolorhud1
#define M2C_CODE_EQUATE_putcolorhud1 1
static const dd kputcolorhud1 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_102_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_102_skippixel 1
static const dd k__m2c_macrolocal_102_skippixel = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_103_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_103_skippixel 1
static const dd k__m2c_macrolocal_103_skippixel = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_104_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_104_skippixel 1
static const dd k__m2c_macrolocal_104_skippixel = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_105_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_105_skippixel 1
static const dd k__m2c_macrolocal_105_skippixel = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_106_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_106_skippixel 1
static const dd k__m2c_macrolocal_106_skippixel = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_107_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_107_skippixel 1
static const dd k__m2c_macrolocal_107_skippixel = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_108_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_108_skippixel 1
static const dd k__m2c_macrolocal_108_skippixel = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_109_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_109_skippixel 1
static const dd k__m2c_macrolocal_109_skippixel = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_110_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_110_skippixel 1
static const dd k__m2c_macrolocal_110_skippixel = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_111_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_111_skippixel 1
static const dd k__m2c_macrolocal_111_skippixel = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_112_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_112_skippixel 1
static const dd k__m2c_macrolocal_112_skippixel = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_113_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_113_skippixel 1
static const dd k__m2c_macrolocal_113_skippixel = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_getout1
#define M2C_CODE_EQUATE_getout1 1
static const dd kgetout1 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_114_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_114_skippixel 1
static const dd k__m2c_macrolocal_114_skippixel = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_115_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_115_skippixel 1
static const dd k__m2c_macrolocal_115_skippixel = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_116_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_116_skippixel 1
static const dd k__m2c_macrolocal_116_skippixel = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_117_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_117_skippixel 1
static const dd k__m2c_macrolocal_117_skippixel = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_118_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_118_skippixel 1
static const dd k__m2c_macrolocal_118_skippixel = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_119_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_119_skippixel 1
static const dd k__m2c_macrolocal_119_skippixel = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_120_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_120_skippixel 1
static const dd k__m2c_macrolocal_120_skippixel = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_121_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_121_skippixel 1
static const dd k__m2c_macrolocal_121_skippixel = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_122_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_122_skippixel 1
static const dd k__m2c_macrolocal_122_skippixel = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_123_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_123_skippixel 1
static const dd k__m2c_macrolocal_123_skippixel = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_124_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_124_skippixel 1
static const dd k__m2c_macrolocal_124_skippixel = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_125_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_125_skippixel 1
static const dd k__m2c_macrolocal_125_skippixel = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_126_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_126_skip 1
static const dd k__m2c_macrolocal_126_skip = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_skipacsymbol
#define M2C_CODE_EQUATE_skipacsymbol 1
static const dd kskipacsymbol = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_127_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_127_skip 1
static const dd k__m2c_macrolocal_127_skip = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_putcolorhud2
#define M2C_CODE_EQUATE_putcolorhud2 1
static const dd kputcolorhud2 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_128_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_128_skippixel 1
static const dd k__m2c_macrolocal_128_skippixel = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_129_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_129_skippixel 1
static const dd k__m2c_macrolocal_129_skippixel = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_130_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_130_skippixel 1
static const dd k__m2c_macrolocal_130_skippixel = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_131_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_131_skippixel 1
static const dd k__m2c_macrolocal_131_skippixel = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_132_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_132_skippixel 1
static const dd k__m2c_macrolocal_132_skippixel = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_133_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_133_skippixel 1
static const dd k__m2c_macrolocal_133_skippixel = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_134_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_134_skippixel 1
static const dd k__m2c_macrolocal_134_skippixel = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_135_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_135_skippixel 1
static const dd k__m2c_macrolocal_135_skippixel = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_136_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_136_skippixel 1
static const dd k__m2c_macrolocal_136_skippixel = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_137_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_137_skippixel 1
static const dd k__m2c_macrolocal_137_skippixel = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_138_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_138_skippixel 1
static const dd k__m2c_macrolocal_138_skippixel = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_139_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_139_skippixel 1
static const dd k__m2c_macrolocal_139_skippixel = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_140_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_140_skippixel 1
static const dd k__m2c_macrolocal_140_skippixel = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_141_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_141_skippixel 1
static const dd k__m2c_macrolocal_141_skippixel = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_142_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_142_skippixel 1
static const dd k__m2c_macrolocal_142_skippixel = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_getout2
#define M2C_CODE_EQUATE_getout2 1
static const dd kgetout2 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_143_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_143_skippixel 1
static const dd k__m2c_macrolocal_143_skippixel = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_144_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_144_skippixel 1
static const dd k__m2c_macrolocal_144_skippixel = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_145_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_145_skippixel 1
static const dd k__m2c_macrolocal_145_skippixel = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_146_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_146_skippixel 1
static const dd k__m2c_macrolocal_146_skippixel = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_147_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_147_skippixel 1
static const dd k__m2c_macrolocal_147_skippixel = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_148_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_148_skippixel 1
static const dd k__m2c_macrolocal_148_skippixel = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_149_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_149_skippixel 1
static const dd k__m2c_macrolocal_149_skippixel = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_150_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_150_skippixel 1
static const dd k__m2c_macrolocal_150_skippixel = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_151_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_151_skippixel 1
static const dd k__m2c_macrolocal_151_skippixel = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_152_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_152_skippixel 1
static const dd k__m2c_macrolocal_152_skippixel = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_153_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_153_skippixel 1
static const dd k__m2c_macrolocal_153_skippixel = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_154_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_154_skippixel 1
static const dd k__m2c_macrolocal_154_skippixel = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_155_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_155_skippixel 1
static const dd k__m2c_macrolocal_155_skippixel = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_156_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_156_skippixel 1
static const dd k__m2c_macrolocal_156_skippixel = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_157_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_157_skippixel 1
static const dd k__m2c_macrolocal_157_skippixel = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel39
#define M2C_CODE_EQUATE_dummylabel39 1
static const dd kdummylabel39 = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_putcolorhud3
#define M2C_CODE_EQUATE_putcolorhud3 1
static const dd kputcolorhud3 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_158_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_158_skippixel 1
static const dd k__m2c_macrolocal_158_skippixel = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_159_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_159_skippixel 1
static const dd k__m2c_macrolocal_159_skippixel = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_160_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_160_skippixel 1
static const dd k__m2c_macrolocal_160_skippixel = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_161_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_161_skippixel 1
static const dd k__m2c_macrolocal_161_skippixel = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_162_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_162_skippixel 1
static const dd k__m2c_macrolocal_162_skippixel = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_163_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_163_skippixel 1
static const dd k__m2c_macrolocal_163_skippixel = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_164_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_164_skippixel 1
static const dd k__m2c_macrolocal_164_skippixel = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_165_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_165_skippixel 1
static const dd k__m2c_macrolocal_165_skippixel = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_getout3
#define M2C_CODE_EQUATE_getout3 1
static const dd kgetout3 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_166_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_166_skippixel 1
static const dd k__m2c_macrolocal_166_skippixel = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_167_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_167_skippixel 1
static const dd k__m2c_macrolocal_167_skippixel = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_168_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_168_skippixel 1
static const dd k__m2c_macrolocal_168_skippixel = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_169_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_169_skippixel 1
static const dd k__m2c_macrolocal_169_skippixel = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_170_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_170_skippixel 1
static const dd k__m2c_macrolocal_170_skippixel = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_171_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_171_skippixel 1
static const dd k__m2c_macrolocal_171_skippixel = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_172_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_172_skippixel 1
static const dd k__m2c_macrolocal_172_skippixel = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_173_skippixel
#define M2C_CODE_EQUATE___m2c_macrolocal_173_skippixel 1
static const dd k__m2c_macrolocal_173_skippixel = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel40
#define M2C_CODE_EQUATE_dummylabel40 1
static const dd kdummylabel40 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_putcolorhud4
#define M2C_CODE_EQUATE_putcolorhud4 1
static const dd kputcolorhud4 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_getout4
#define M2C_CODE_EQUATE_getout4 1
static const dd kgetout4 = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel41
#define M2C_CODE_EQUATE_dummylabel41 1
static const dd kdummylabel41 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_174_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_174_skip 1
static const dd k__m2c_macrolocal_174_skip = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_failsnapgnd
#define M2C_CODE_EQUATE_failsnapgnd 1
static const dd kfailsnapgnd = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_scanobjloop
#define M2C_CODE_EQUATE_scanobjloop 1
static const dd kscanobjloop = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel42
#define M2C_CODE_EQUATE_dummylabel42 1
static const dd kdummylabel42 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_181_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_181_testhi 1
static const dd k__m2c_macrolocal_181_testhi = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_181_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_181_testok 1
static const dd k__m2c_macrolocal_181_testok = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_182_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_182_testhi 1
static const dd k__m2c_macrolocal_182_testhi = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_182_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_182_testok 1
static const dd k__m2c_macrolocal_182_testok = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp
#define M2C_CODE_EQUATE_flirdisp 1
static const dd kflirdisp = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel43
#define M2C_CODE_EQUATE_dummylabel43 1
static const dd kdummylabel43 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_bypassescope2
#define M2C_CODE_EQUATE_bypassescope2 1
static const dd kbypassescope2 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_validatetiald
#define M2C_CODE_EQUATE_validatetiald 1
static const dd kvalidatetiald = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_validateexit
#define M2C_CODE_EQUATE_validateexit 1
static const dd kvalidateexit = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_canceltiald
#define M2C_CODE_EQUATE_canceltiald 1
static const dd kcanceltiald = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_inittiald
#define M2C_CODE_EQUATE_inittiald 1
static const dd kinittiald = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_targetmoved
#define M2C_CODE_EQUATE_targetmoved 1
static const dd ktargetmoved = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_calcscansize
#define M2C_CODE_EQUATE_calcscansize 1
static const dd kcalcscansize = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_recalcxyoffsets
#define M2C_CODE_EQUATE_recalcxyoffsets 1
static const dd krecalcxyoffsets = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_tialddisp
#define M2C_CODE_EQUATE_tialddisp 1
static const dd ktialddisp = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel44
#define M2C_CODE_EQUATE_dummylabel44 1
static const dd kdummylabel44 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE_tialdok
#define M2C_CODE_EQUATE_tialdok 1
static const dd ktialdok = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel45
#define M2C_CODE_EQUATE_dummylabel45 1
static const dd kdummylabel45 = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE_invaliddisp
#define M2C_CODE_EQUATE_invaliddisp 1
static const dd kinvaliddisp = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel46
#define M2C_CODE_EQUATE_dummylabel46 1
static const dd kdummylabel46 = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel47
#define M2C_CODE_EQUATE_dummylabel47 1
static const dd kdummylabel47 = 0x10ef;
#endif
#ifndef M2C_CODE_EQUATE_tialdexit
#define M2C_CODE_EQUATE_tialdexit 1
static const dd ktialdexit = 0x10f0;
#endif
#ifndef M2C_CODE_EQUATE_skipircols
#define M2C_CODE_EQUATE_skipircols 1
static const dd kskipircols = 0x10f1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel48
#define M2C_CODE_EQUATE_dummylabel48 1
static const dd kdummylabel48 = 0x10f2;
#endif
#ifndef M2C_CODE_EQUATE_readtialdmouse
#define M2C_CODE_EQUATE_readtialdmouse 1
static const dd kreadtialdmouse = 0x10f3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel49
#define M2C_CODE_EQUATE_dummylabel49 1
static const dd kdummylabel49 = 0x10f4;
#endif
#ifndef M2C_CODE_EQUATE_sorttdmode
#define M2C_CODE_EQUATE_sorttdmode 1
static const dd ksorttdmode = 0x10f5;
#endif
#ifndef M2C_CODE_EQUATE_tialdinit
#define M2C_CODE_EQUATE_tialdinit 1
static const dd ktialdinit = 0x10f6;
#endif
#ifndef M2C_CODE_EQUATE_setdatum
#define M2C_CODE_EQUATE_setdatum 1
static const dd ksetdatum = 0x10f7;
#endif
#ifndef M2C_CODE_EQUATE_intosearch
#define M2C_CODE_EQUATE_intosearch 1
static const dd kintosearch = 0x10f8;
#endif
#ifndef M2C_CODE_EQUATE_tialdsearch
#define M2C_CODE_EQUATE_tialdsearch 1
static const dd ktialdsearch = 0x10f9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel50
#define M2C_CODE_EQUATE_dummylabel50 1
static const dd kdummylabel50 = 0x10fa;
#endif
#ifndef M2C_CODE_EQUATE_settarget
#define M2C_CODE_EQUATE_settarget 1
static const dd ksettarget = 0x10fb;
#endif
#ifndef M2C_CODE_EQUATE_intoadjustlock
#define M2C_CODE_EQUATE_intoadjustlock 1
static const dd kintoadjustlock = 0x10fc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel51
#define M2C_CODE_EQUATE_dummylabel51 1
static const dd kdummylabel51 = 0x10fd;
#endif
#ifndef M2C_CODE_EQUATE_intozoom
#define M2C_CODE_EQUATE_intozoom 1
static const dd kintozoom = 0x10fe;
#endif
#ifndef M2C_CODE_EQUATE_adjustxyoffsets
#define M2C_CODE_EQUATE_adjustxyoffsets 1
static const dd kadjustxyoffsets = 0x10ff;
#endif
#ifndef M2C_CODE_EQUATE_rotatexyoffsets
#define M2C_CODE_EQUATE_rotatexyoffsets 1
static const dd krotatexyoffsets = 0x1100;
#endif
#ifndef M2C_CODE_EQUATE_contvisual
#define M2C_CODE_EQUATE_contvisual 1
static const dd kcontvisual = 0x1101;
#endif
#ifndef M2C_CODE_EQUATE_tialdzoom
#define M2C_CODE_EQUATE_tialdzoom 1
static const dd ktialdzoom = 0x1102;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel52
#define M2C_CODE_EQUATE_dummylabel52 1
static const dd kdummylabel52 = 0x1103;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel53
#define M2C_CODE_EQUATE_dummylabel53 1
static const dd kdummylabel53 = 0x1104;
#endif
#ifndef M2C_CODE_EQUATE_adjustzoom
#define M2C_CODE_EQUATE_adjustzoom 1
static const dd kadjustzoom = 0x1105;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel54
#define M2C_CODE_EQUATE_dummylabel54 1
static const dd kdummylabel54 = 0x1106;
#endif
#ifndef M2C_CODE_EQUATE_tialdadjustlock
#define M2C_CODE_EQUATE_tialdadjustlock 1
static const dd ktialdadjustlock = 0x1107;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel55
#define M2C_CODE_EQUATE_dummylabel55 1
static const dd kdummylabel55 = 0x1108;
#endif
#ifndef M2C_CODE_EQUATE_intotargetlock
#define M2C_CODE_EQUATE_intotargetlock 1
static const dd kintotargetlock = 0x1109;
#endif
#ifndef M2C_CODE_EQUATE_adjustlock
#define M2C_CODE_EQUATE_adjustlock 1
static const dd kadjustlock = 0x110a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel56
#define M2C_CODE_EQUATE_dummylabel56 1
static const dd kdummylabel56 = 0x110b;
#endif
#ifndef M2C_CODE_EQUATE_tialdtargetlock
#define M2C_CODE_EQUATE_tialdtargetlock 1
static const dd ktialdtargetlock = 0x110c;
#endif
#ifndef M2C_CODE_EQUATE_cancellock
#define M2C_CODE_EQUATE_cancellock 1
static const dd kcancellock = 0x110d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel57
#define M2C_CODE_EQUATE_dummylabel57 1
static const dd kdummylabel57 = 0x110e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel58
#define M2C_CODE_EQUATE_dummylabel58 1
static const dd kdummylabel58 = 0x110f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel59
#define M2C_CODE_EQUATE_dummylabel59 1
static const dd kdummylabel59 = 0x1110;
#endif
#ifndef M2C_CODE_EQUATE_setvpalt
#define M2C_CODE_EQUATE_setvpalt 1
static const dd ksetvpalt = 0x1111;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel60
#define M2C_CODE_EQUATE_dummylabel60 1
static const dd kdummylabel60 = 0x1112;
#endif
#ifndef M2C_CODE_EQUATE_tdsymzoom
#define M2C_CODE_EQUATE_tdsymzoom 1
static const dd ktdsymzoom = 0x1113;
#endif
#ifndef M2C_CODE_EQUATE_drawlasersymbol
#define M2C_CODE_EQUATE_drawlasersymbol 1
static const dd kdrawlasersymbol = 0x1114;
#endif
#ifndef M2C_CODE_EQUATE_tdsymok
#define M2C_CODE_EQUATE_tdsymok 1
static const dd ktdsymok = 0x1115;
#endif
#ifndef M2C_CODE_EQUATE_tdsymadjustlock
#define M2C_CODE_EQUATE_tdsymadjustlock 1
static const dd ktdsymadjustlock = 0x1116;
#endif
#ifndef M2C_CODE_EQUATE_drawtracksymbol
#define M2C_CODE_EQUATE_drawtracksymbol 1
static const dd kdrawtracksymbol = 0x1117;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel61
#define M2C_CODE_EQUATE_dummylabel61 1
static const dd kdummylabel61 = 0x1118;
#endif
#ifndef M2C_CODE_EQUATE_tdsymtargetlock
#define M2C_CODE_EQUATE_tdsymtargetlock 1
static const dd ktdsymtargetlock = 0x1119;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel62
#define M2C_CODE_EQUATE_dummylabel62 1
static const dd kdummylabel62 = 0x111a;
#endif
#ifndef M2C_CODE_EQUATE_drawcrosssymbol
#define M2C_CODE_EQUATE_drawcrosssymbol 1
static const dd kdrawcrosssymbol = 0x111b;
#endif
#ifndef M2C_CODE_EQUATE_skipfixcols
#define M2C_CODE_EQUATE_skipfixcols 1
static const dd kskipfixcols = 0x111c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel63
#define M2C_CODE_EQUATE_dummylabel63 1
static const dd kdummylabel63 = 0x111d;
#endif
#ifndef M2C_CODE_EQUATE_bypassescope_and_adi
#define M2C_CODE_EQUATE_bypassescope_and_adi 1
static const dd kbypassescope_and_adi = 0x111e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel64
#define M2C_CODE_EQUATE_dummylabel64 1
static const dd kdummylabel64 = 0x111f;
#endif
#ifndef M2C_CODE_EQUATE_bypassescope
#define M2C_CODE_EQUATE_bypassescope 1
static const dd kbypassescope = 0x1120;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1121;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_189_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_189_testhi 1
static const dd k__m2c_macrolocal_189_testhi = 0x1122;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_189_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_189_testok 1
static const dd k__m2c_macrolocal_189_testok = 0x1123;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel65
#define M2C_CODE_EQUATE_dummylabel65 1
static const dd kdummylabel65 = 0x1124;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1125;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_190_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_190_skip 1
static const dd k__m2c_macrolocal_190_skip = 0x1126;
#endif
#ifndef M2C_CODE_EQUATE_skipcross
#define M2C_CODE_EQUATE_skipcross 1
static const dd kskipcross = 0x1127;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_191_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_191_skip 1
static const dd k__m2c_macrolocal_191_skip = 0x1128;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1129;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x112a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x112b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x112c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel66
#define M2C_CODE_EQUATE_dummylabel66 1
static const dd kdummylabel66 = 0x112d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x112e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel67
#define M2C_CODE_EQUATE_dummylabel67 1
static const dd kdummylabel67 = 0x112f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x1130;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_193_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_193_testhi 1
static const dd k__m2c_macrolocal_193_testhi = 0x1131;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_193_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_193_testok 1
static const dd k__m2c_macrolocal_193_testok = 0x1132;
#endif
#ifndef M2C_CODE_EQUATE_xok
#define M2C_CODE_EQUATE_xok 1
static const dd kxok = 0x1133;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel68
#define M2C_CODE_EQUATE_dummylabel68 1
static const dd kdummylabel68 = 0x1134;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_195_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_195_testhi 1
static const dd k__m2c_macrolocal_195_testhi = 0x1135;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_195_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_195_testok 1
static const dd k__m2c_macrolocal_195_testok = 0x1136;
#endif
#ifndef M2C_CODE_EQUATE_yok
#define M2C_CODE_EQUATE_yok 1
static const dd kyok = 0x1137;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel69
#define M2C_CODE_EQUATE_dummylabel69 1
static const dd kdummylabel69 = 0x1138;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1139;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x113a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel70
#define M2C_CODE_EQUATE_dummylabel70 1
static const dd kdummylabel70 = 0x113b;
#endif
#ifndef M2C_CODE_EQUATE_limitdx
#define M2C_CODE_EQUATE_limitdx 1
static const dd klimitdx = 0x113c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel71
#define M2C_CODE_EQUATE_dummylabel71 1
static const dd kdummylabel71 = 0x113d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel72
#define M2C_CODE_EQUATE_dummylabel72 1
static const dd kdummylabel72 = 0x113e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel73
#define M2C_CODE_EQUATE_dummylabel73 1
static const dd kdummylabel73 = 0x113f;
#endif
#ifndef M2C_CODE_EQUATE_limitdy
#define M2C_CODE_EQUATE_limitdy 1
static const dd klimitdy = 0x1140;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel74
#define M2C_CODE_EQUATE_dummylabel74 1
static const dd kdummylabel74 = 0x1141;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel75
#define M2C_CODE_EQUATE_dummylabel75 1
static const dd kdummylabel75 = 0x1142;
#endif
#ifndef M2C_CODE_EQUATE_hdgok
#define M2C_CODE_EQUATE_hdgok 1
static const dd khdgok = 0x1143;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel76
#define M2C_CODE_EQUATE_dummylabel76 1
static const dd kdummylabel76 = 0x1144;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel77
#define M2C_CODE_EQUATE_dummylabel77 1
static const dd kdummylabel77 = 0x1145;
#endif
#ifndef M2C_CODE_EQUATE_limitxr
#define M2C_CODE_EQUATE_limitxr 1
static const dd klimitxr = 0x1146;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel78
#define M2C_CODE_EQUATE_dummylabel78 1
static const dd kdummylabel78 = 0x1147;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel79
#define M2C_CODE_EQUATE_dummylabel79 1
static const dd kdummylabel79 = 0x1148;
#endif
#ifndef M2C_CODE_EQUATE_limityr
#define M2C_CODE_EQUATE_limityr 1
static const dd klimityr = 0x1149;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel80
#define M2C_CODE_EQUATE_dummylabel80 1
static const dd kdummylabel80 = 0x114a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x114b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_209_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_209_testhi 1
static const dd k__m2c_macrolocal_209_testhi = 0x114c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_209_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_209_testok 1
static const dd k__m2c_macrolocal_209_testok = 0x114d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_210_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_210_testhi 1
static const dd k__m2c_macrolocal_210_testhi = 0x114e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_210_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_210_testok 1
static const dd k__m2c_macrolocal_210_testok = 0x114f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1150;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_211_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_211_testhi 1
static const dd k__m2c_macrolocal_211_testhi = 0x1151;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_211_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_211_testok 1
static const dd k__m2c_macrolocal_211_testok = 0x1152;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_213_testhi
#define M2C_CODE_EQUATE___m2c_macrolocal_213_testhi 1
static const dd k__m2c_macrolocal_213_testhi = 0x1153;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_213_testok
#define M2C_CODE_EQUATE___m2c_macrolocal_213_testok 1
static const dd k__m2c_macrolocal_213_testok = 0x1154;
#endif
#ifndef M2C_CODE_EQUATE_radardisp
#define M2C_CODE_EQUATE_radardisp 1
static const dd kradardisp = 0x1155;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x1156;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel81
#define M2C_CODE_EQUATE_dummylabel81 1
static const dd kdummylabel81 = 0x1157;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x1158;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x1159;
#endif
#ifndef M2C_CODE_EQUATE_damagedloop
#define M2C_CODE_EQUATE_damagedloop 1
static const dd kdamagedloop = 0x115a;
#endif
#ifndef M2C_CODE_EQUATE_nextdamage
#define M2C_CODE_EQUATE_nextdamage 1
static const dd knextdamage = 0x115b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x115c;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp_ori
#define M2C_CODE_EQUATE_flirdisp_ori 1
static const dd kflirdisp_ori = 0x115d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x115e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x115f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel82
#define M2C_CODE_EQUATE_dummylabel82 1
static const dd kdummylabel82 = 0x1160;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp_ori2
#define M2C_CODE_EQUATE_flirdisp_ori2 1
static const dd kflirdisp_ori2 = 0x1161;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x1162;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x1163;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel83
#define M2C_CODE_EQUATE_dummylabel83 1
static const dd kdummylabel83 = 0x1164;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp_ori3
#define M2C_CODE_EQUATE_flirdisp_ori3 1
static const dd kflirdisp_ori3 = 0x1165;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x1166;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x1167;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel84
#define M2C_CODE_EQUATE_dummylabel84 1
static const dd kdummylabel84 = 0x1168;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel85
#define M2C_CODE_EQUATE_dummylabel85 1
static const dd kdummylabel85 = 0x1169;
#endif
#ifndef M2C_CODE_EQUATE_flirdisp_ori4
#define M2C_CODE_EQUATE_flirdisp_ori4 1
static const dd kflirdisp_ori4 = 0x116a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x116b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x116c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel86
#define M2C_CODE_EQUATE_dummylabel86 1
static const dd kdummylabel86 = 0x116d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel87
#define M2C_CODE_EQUATE_dummylabel87 1
static const dd kdummylabel87 = 0x116e;
#endif
#ifndef M2C_CODE_EQUATE_tialddisp_ori
#define M2C_CODE_EQUATE_tialddisp_ori 1
static const dd ktialddisp_ori = 0x116f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x1170;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x1171;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel88
#define M2C_CODE_EQUATE_dummylabel88 1
static const dd kdummylabel88 = 0x1172;
#endif
#ifndef M2C_CODE_EQUATE_tialdok_ori
#define M2C_CODE_EQUATE_tialdok_ori 1
static const dd ktialdok_ori = 0x1173;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel89
#define M2C_CODE_EQUATE_dummylabel89 1
static const dd kdummylabel89 = 0x1174;
#endif
#ifndef M2C_CODE_EQUATE_invaliddisp_ori
#define M2C_CODE_EQUATE_invaliddisp_ori 1
static const dd kinvaliddisp_ori = 0x1175;
#endif
#ifndef M2C_CODE_EQUATE_tialdexit_ori
#define M2C_CODE_EQUATE_tialdexit_ori 1
static const dd ktialdexit_ori = 0x1176;
#endif
#ifndef M2C_CODE_EQUATE_skipircols_ori
#define M2C_CODE_EQUATE_skipircols_ori 1
static const dd kskipircols_ori = 0x1177;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel90
#define M2C_CODE_EQUATE_dummylabel90 1
static const dd kdummylabel90 = 0x1178;
#endif
#ifndef M2C_CODE_EQUATE_readtialdmouse_ori
#define M2C_CODE_EQUATE_readtialdmouse_ori 1
static const dd kreadtialdmouse_ori = 0x1179;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel91
#define M2C_CODE_EQUATE_dummylabel91 1
static const dd kdummylabel91 = 0x117a;
#endif
#ifndef M2C_CODE_EQUATE_sorttdmode_ori
#define M2C_CODE_EQUATE_sorttdmode_ori 1
static const dd ksorttdmode_ori = 0x117b;
#endif
#ifndef M2C_CODE_EQUATE_tialdinit_ori
#define M2C_CODE_EQUATE_tialdinit_ori 1
static const dd ktialdinit_ori = 0x117c;
#endif
#ifndef M2C_CODE_EQUATE_intosearch_ori
#define M2C_CODE_EQUATE_intosearch_ori 1
static const dd kintosearch_ori = 0x117d;
#endif
#ifndef M2C_CODE_EQUATE_tialdsearch_ori
#define M2C_CODE_EQUATE_tialdsearch_ori 1
static const dd ktialdsearch_ori = 0x117e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel92
#define M2C_CODE_EQUATE_dummylabel92 1
static const dd kdummylabel92 = 0x117f;
#endif
#ifndef M2C_CODE_EQUATE_intoadjustlock_ori
#define M2C_CODE_EQUATE_intoadjustlock_ori 1
static const dd kintoadjustlock_ori = 0x1180;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel93
#define M2C_CODE_EQUATE_dummylabel93 1
static const dd kdummylabel93 = 0x1181;
#endif
#ifndef M2C_CODE_EQUATE_intozoom_ori
#define M2C_CODE_EQUATE_intozoom_ori 1
static const dd kintozoom_ori = 0x1182;
#endif
#ifndef M2C_CODE_EQUATE_contvisual_ori
#define M2C_CODE_EQUATE_contvisual_ori 1
static const dd kcontvisual_ori = 0x1183;
#endif
#ifndef M2C_CODE_EQUATE_tialdzoom_ori
#define M2C_CODE_EQUATE_tialdzoom_ori 1
static const dd ktialdzoom_ori = 0x1184;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel94
#define M2C_CODE_EQUATE_dummylabel94 1
static const dd kdummylabel94 = 0x1185;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel95
#define M2C_CODE_EQUATE_dummylabel95 1
static const dd kdummylabel95 = 0x1186;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel96
#define M2C_CODE_EQUATE_dummylabel96 1
static const dd kdummylabel96 = 0x1187;
#endif
#ifndef M2C_CODE_EQUATE_tialdadjustlock_ori
#define M2C_CODE_EQUATE_tialdadjustlock_ori 1
static const dd ktialdadjustlock_ori = 0x1188;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel97
#define M2C_CODE_EQUATE_dummylabel97 1
static const dd kdummylabel97 = 0x1189;
#endif
#ifndef M2C_CODE_EQUATE_intotargetlock_ori
#define M2C_CODE_EQUATE_intotargetlock_ori 1
static const dd kintotargetlock_ori = 0x118a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel98
#define M2C_CODE_EQUATE_dummylabel98 1
static const dd kdummylabel98 = 0x118b;
#endif
#ifndef M2C_CODE_EQUATE_tialdtargetlock_ori
#define M2C_CODE_EQUATE_tialdtargetlock_ori 1
static const dd ktialdtargetlock_ori = 0x118c;
#endif
#ifndef M2C_CODE_EQUATE_cancellock_ori
#define M2C_CODE_EQUATE_cancellock_ori 1
static const dd kcancellock_ori = 0x118d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel99
#define M2C_CODE_EQUATE_dummylabel99 1
static const dd kdummylabel99 = 0x118e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel100
#define M2C_CODE_EQUATE_dummylabel100 1
static const dd kdummylabel100 = 0x118f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel101
#define M2C_CODE_EQUATE_dummylabel101 1
static const dd kdummylabel101 = 0x1190;
#endif
#ifndef M2C_CODE_EQUATE_setvpalt_ori
#define M2C_CODE_EQUATE_setvpalt_ori 1
static const dd ksetvpalt_ori = 0x1191;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel102
#define M2C_CODE_EQUATE_dummylabel102 1
static const dd kdummylabel102 = 0x1192;
#endif
#ifndef M2C_CODE_EQUATE_tdsymzoom_ori
#define M2C_CODE_EQUATE_tdsymzoom_ori 1
static const dd ktdsymzoom_ori = 0x1193;
#endif
#ifndef M2C_CODE_EQUATE_drawlasersymbol_ori
#define M2C_CODE_EQUATE_drawlasersymbol_ori 1
static const dd kdrawlasersymbol_ori = 0x1194;
#endif
#ifndef M2C_CODE_EQUATE_tdsymok_ori
#define M2C_CODE_EQUATE_tdsymok_ori 1
static const dd ktdsymok_ori = 0x1195;
#endif
#ifndef M2C_CODE_EQUATE_tdsymadjustlock_ori
#define M2C_CODE_EQUATE_tdsymadjustlock_ori 1
static const dd ktdsymadjustlock_ori = 0x1196;
#endif
#ifndef M2C_CODE_EQUATE_drawtracksymbol_ori
#define M2C_CODE_EQUATE_drawtracksymbol_ori 1
static const dd kdrawtracksymbol_ori = 0x1197;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel103
#define M2C_CODE_EQUATE_dummylabel103 1
static const dd kdummylabel103 = 0x1198;
#endif
#ifndef M2C_CODE_EQUATE_tdsymtargetlock_ori
#define M2C_CODE_EQUATE_tdsymtargetlock_ori 1
static const dd ktdsymtargetlock_ori = 0x1199;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel104
#define M2C_CODE_EQUATE_dummylabel104 1
static const dd kdummylabel104 = 0x119a;
#endif
#ifndef M2C_CODE_EQUATE_drawcrosssymbol_ori
#define M2C_CODE_EQUATE_drawcrosssymbol_ori 1
static const dd kdrawcrosssymbol_ori = 0x119b;
#endif
#ifndef M2C_CODE_EQUATE_skipfixcols_ori
#define M2C_CODE_EQUATE_skipfixcols_ori 1
static const dd kskipfixcols_ori = 0x119c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel105
#define M2C_CODE_EQUATE_dummylabel105 1
static const dd kdummylabel105 = 0x119d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel106
#define M2C_CODE_EQUATE_dummylabel106 1
static const dd kdummylabel106 = 0x119e;
#endif
#ifndef M2C_CODE_EQUATE_tialddisp_ori2
#define M2C_CODE_EQUATE_tialddisp_ori2 1
static const dd ktialddisp_ori2 = 0x119f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x11a0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x11a1;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel107
#define M2C_CODE_EQUATE_dummylabel107 1
static const dd kdummylabel107 = 0x11a2;
#endif
#ifndef M2C_CODE_EQUATE_tialdok_ori2
#define M2C_CODE_EQUATE_tialdok_ori2 1
static const dd ktialdok_ori2 = 0x11a3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel108
#define M2C_CODE_EQUATE_dummylabel108 1
static const dd kdummylabel108 = 0x11a4;
#endif
#ifndef M2C_CODE_EQUATE_tialdexit_ori2
#define M2C_CODE_EQUATE_tialdexit_ori2 1
static const dd ktialdexit_ori2 = 0x11a5;
#endif
#ifndef M2C_CODE_EQUATE_skipircols_ori2
#define M2C_CODE_EQUATE_skipircols_ori2 1
static const dd kskipircols_ori2 = 0x11a6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel109
#define M2C_CODE_EQUATE_dummylabel109 1
static const dd kdummylabel109 = 0x11a7;
#endif
#ifndef M2C_CODE_EQUATE_readtialdmouse_ori2
#define M2C_CODE_EQUATE_readtialdmouse_ori2 1
static const dd kreadtialdmouse_ori2 = 0x11a8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel110
#define M2C_CODE_EQUATE_dummylabel110 1
static const dd kdummylabel110 = 0x11a9;
#endif
#ifndef M2C_CODE_EQUATE_sorttdmode_ori2
#define M2C_CODE_EQUATE_sorttdmode_ori2 1
static const dd ksorttdmode_ori2 = 0x11aa;
#endif
#ifndef M2C_CODE_EQUATE_tialdinit_ori2
#define M2C_CODE_EQUATE_tialdinit_ori2 1
static const dd ktialdinit_ori2 = 0x11ab;
#endif
#ifndef M2C_CODE_EQUATE_intosearch_ori2
#define M2C_CODE_EQUATE_intosearch_ori2 1
static const dd kintosearch_ori2 = 0x11ac;
#endif
#ifndef M2C_CODE_EQUATE_tialdsearch_ori2
#define M2C_CODE_EQUATE_tialdsearch_ori2 1
static const dd ktialdsearch_ori2 = 0x11ad;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel111
#define M2C_CODE_EQUATE_dummylabel111 1
static const dd kdummylabel111 = 0x11ae;
#endif
#ifndef M2C_CODE_EQUATE_intoadjustlock_ori2
#define M2C_CODE_EQUATE_intoadjustlock_ori2 1
static const dd kintoadjustlock_ori2 = 0x11af;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel112
#define M2C_CODE_EQUATE_dummylabel112 1
static const dd kdummylabel112 = 0x11b0;
#endif
#ifndef M2C_CODE_EQUATE_intozoom_ori2
#define M2C_CODE_EQUATE_intozoom_ori2 1
static const dd kintozoom_ori2 = 0x11b1;
#endif
#ifndef M2C_CODE_EQUATE_contvisual_ori2
#define M2C_CODE_EQUATE_contvisual_ori2 1
static const dd kcontvisual_ori2 = 0x11b2;
#endif
#ifndef M2C_CODE_EQUATE_tialdzoom_ori2
#define M2C_CODE_EQUATE_tialdzoom_ori2 1
static const dd ktialdzoom_ori2 = 0x11b3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel113
#define M2C_CODE_EQUATE_dummylabel113 1
static const dd kdummylabel113 = 0x11b4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel114
#define M2C_CODE_EQUATE_dummylabel114 1
static const dd kdummylabel114 = 0x11b5;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel115
#define M2C_CODE_EQUATE_dummylabel115 1
static const dd kdummylabel115 = 0x11b6;
#endif
#ifndef M2C_CODE_EQUATE_tialdadjustlock_ori2
#define M2C_CODE_EQUATE_tialdadjustlock_ori2 1
static const dd ktialdadjustlock_ori2 = 0x11b7;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel116
#define M2C_CODE_EQUATE_dummylabel116 1
static const dd kdummylabel116 = 0x11b8;
#endif
#ifndef M2C_CODE_EQUATE_intotargetlock_ori2
#define M2C_CODE_EQUATE_intotargetlock_ori2 1
static const dd kintotargetlock_ori2 = 0x11b9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel117
#define M2C_CODE_EQUATE_dummylabel117 1
static const dd kdummylabel117 = 0x11ba;
#endif
#ifndef M2C_CODE_EQUATE_tialdtargetlock_ori2
#define M2C_CODE_EQUATE_tialdtargetlock_ori2 1
static const dd ktialdtargetlock_ori2 = 0x11bb;
#endif
#ifndef M2C_CODE_EQUATE_cancellock_ori2
#define M2C_CODE_EQUATE_cancellock_ori2 1
static const dd kcancellock_ori2 = 0x11bc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel118
#define M2C_CODE_EQUATE_dummylabel118 1
static const dd kdummylabel118 = 0x11bd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel119
#define M2C_CODE_EQUATE_dummylabel119 1
static const dd kdummylabel119 = 0x11be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel120
#define M2C_CODE_EQUATE_dummylabel120 1
static const dd kdummylabel120 = 0x11bf;
#endif
#ifndef M2C_CODE_EQUATE_setvpalt_ori2
#define M2C_CODE_EQUATE_setvpalt_ori2 1
static const dd ksetvpalt_ori2 = 0x11c0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel121
#define M2C_CODE_EQUATE_dummylabel121 1
static const dd kdummylabel121 = 0x11c1;
#endif
#ifndef M2C_CODE_EQUATE_tdsymzoom_ori2
#define M2C_CODE_EQUATE_tdsymzoom_ori2 1
static const dd ktdsymzoom_ori2 = 0x11c2;
#endif
#ifndef M2C_CODE_EQUATE_tdsymok_ori2
#define M2C_CODE_EQUATE_tdsymok_ori2 1
static const dd ktdsymok_ori2 = 0x11c3;
#endif
#ifndef M2C_CODE_EQUATE_tdsymadjustlock_ori2
#define M2C_CODE_EQUATE_tdsymadjustlock_ori2 1
static const dd ktdsymadjustlock_ori2 = 0x11c4;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel122
#define M2C_CODE_EQUATE_dummylabel122 1
static const dd kdummylabel122 = 0x11c5;
#endif
#ifndef M2C_CODE_EQUATE_tdsymtargetlock_ori2
#define M2C_CODE_EQUATE_tdsymtargetlock_ori2 1
static const dd ktdsymtargetlock_ori2 = 0x11c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel123
#define M2C_CODE_EQUATE_dummylabel123 1
static const dd kdummylabel123 = 0x11c7;
#endif
#ifndef M2C_CODE_EQUATE_skipfixcols_ori2
#define M2C_CODE_EQUATE_skipfixcols_ori2 1
static const dd kskipfixcols_ori2 = 0x11c8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel124
#define M2C_CODE_EQUATE_dummylabel124 1
static const dd kdummylabel124 = 0x11c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel125
#define M2C_CODE_EQUATE_dummylabel125 1
static const dd kdummylabel125 = 0x11ca;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel42
#define M2C_CODE_EQUATE_edummylabel42 1
static const dd kedummylabel42 = 0x11cb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_233_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_233_skip 1
static const dd k__m2c_macrolocal_233_skip = 0x11cc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_234_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_234_skip 1
static const dd k__m2c_macrolocal_234_skip = 0x11cd;
#endif
#ifndef M2C_CODE_EQUATE_skipcross_ori
#define M2C_CODE_EQUATE_skipcross_ori 1
static const dd kskipcross_ori = 0x11ce;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel43
#define M2C_CODE_EQUATE_edummylabel43 1
static const dd kedummylabel43 = 0x11cf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel44
#define M2C_CODE_EQUATE_edummylabel44 1
static const dd kedummylabel44 = 0x11d0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel45
#define M2C_CODE_EQUATE_edummylabel45 1
static const dd kedummylabel45 = 0x11d1;
#endif
#ifndef M2C_CODE_EQUATE_drawstandby
#define M2C_CODE_EQUATE_drawstandby 1
static const dd kdrawstandby = 0x11d2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel46
#define M2C_CODE_EQUATE_edummylabel46 1
static const dd kedummylabel46 = 0x11d3;
#endif
#ifndef M2C_CODE_EQUATE_drawstandby2
#define M2C_CODE_EQUATE_drawstandby2 1
static const dd kdrawstandby2 = 0x11d4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel47
#define M2C_CODE_EQUATE_edummylabel47 1
static const dd kedummylabel47 = 0x11d5;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x11d6;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjustlock(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjustxyoffsets(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool adjustzoom(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcscansize(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cleardisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool damageddisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawcrosssymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawcrosssymbol_ori(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawlasersymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawlasersymbol_ori(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawleg(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawstandby(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawstandby2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawtracksymbol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawtracksymbol_ori(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp_ori(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp_ori2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp_ori3(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool flirdisp_ori4(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool invaliddisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool invaliddisp_ori(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool mapdisp(m2c::_offsets, struct m2c::_STATE*);
static bool pancode_0_proc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool radardisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool recalcxyoffsets(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool refdisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool rotatexyoffsets(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool routeplandisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setdatum(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool settarget(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool snapgndobject(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool stealmouse(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool targetmoved(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool tialddisp(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool tialddisp_ori(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool tialddisp_ori2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatetab(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool validatetiald(m2c::_offsets, struct m2c::_STATE*);
extern bool blockfill(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangdiff(m2c::_offsets, struct m2c::_STATE*);
extern bool calceta(m2c::_offsets, struct m2c::_STATE*);
extern bool calcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool calcnmiles(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_vp(m2c::_offsets, struct m2c::_STATE*);
extern bool canceltgtwp(m2c::_offsets, struct m2c::_STATE*);
extern bool cellsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool charsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool drawadirollbug(m2c::_offsets, struct m2c::_STATE*);
extern bool drawirimage(m2c::_offsets, struct m2c::_STATE*);
extern bool hlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool loadextrnpan(m2c::_offsets, struct m2c::_STATE*);
extern bool moveviewpoint(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool readmousemotion(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);
extern bool setviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool updateadi2(m2c::_offsets, struct m2c::_STATE*);
extern bool updatectrlsface(m2c::_offsets, struct m2c::_STATE*);
extern bool updateescope2(m2c::_offsets, struct m2c::_STATE*);
extern bool updateextrn(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehud(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehud2(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemovingmap(m2c::_offsets, struct m2c::_STATE*);
extern bool updaterwr(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetgtwp(m2c::_offsets, struct m2c::_STATE*);
extern bool vdotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_drwnavigpanbrief(m2c::_offsets, struct m2c::_STATE*);
extern bool visual(m2c::_offsets, struct m2c::_STATE*);
extern bool vlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool vquicklineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vsetviewport(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef ssf_tab2
extern db& ssf_tab2;
#endif
#ifndef waylist
extern dw& waylist;
#endif
#ifndef ironwork
extern db& ironwork;
#endif
#ifndef kf_maporigin
extern db& kf_maporigin;
#endif
#ifndef sectortable
extern dw& sectortable;
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
#ifndef sintable
extern dw& sintable;
#endif
#ifndef floatwpx
extern dw& floatwpx;
#endif
#ifndef crtring1
extern db& crtring1;
#endif
#ifndef starsenabled
extern db& starsenabled;
#endif
#ifndef disphdg
extern dw& disphdg;
#endif
#ifndef m_cosr
extern dw& m_cosr;
#endif
#ifndef key
extern db& key;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef cellxmin
extern dw& cellxmin;
#endif
#ifndef cellxmax
extern dw& cellxmax;
#endif
#ifndef m_cosp
extern dw& m_cosp;
#endif
#ifndef secscanoff2
extern dw& secscanoff2;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
#ifndef kf_tab2select
extern db& kf_tab2select;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef quietercockpit
extern db& quietercockpit;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef kf_navigviewwithctrl
extern db& kf_navigviewwithctrl;
#endif
#ifndef acdatumx
extern dw& acdatumx;
#endif
#ifndef m_cosh
extern dw& m_cosh;
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
#ifndef currentwpy
extern dw& currentwpy;
#endif
#ifndef kf_mapzoomout
extern db& kf_mapzoomout;
#endif
#ifndef secscanoff1
extern dw& secscanoff1;
#endif
#ifndef acdatumy
extern dw& acdatumy;
#endif
#ifndef floatwpy
extern dw& floatwpy;
#endif
#ifndef cloudsenabled
extern db& cloudsenabled;
#endif
#ifndef navig_mfd
extern mfd& navig_mfd;
#endif
#ifndef kf_tab1select
extern db& kf_tab1select;
#endif
#ifndef ssf_tab1
extern db& ssf_tab1;
#endif
#ifndef incockpit
extern db& incockpit;
#endif
#ifndef cellymin
extern dw& cellymin;
#endif
#ifndef wpeta
extern dw& wpeta;
#endif
#ifndef cellymax
extern dw& cellymax;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef wprngnmiles
extern dw& wprngnmiles;
#endif
#ifndef nvg_set
extern db& nvg_set;
#endif
#ifndef trueradalt
extern dw& trueradalt;
#endif
#ifndef overcast
extern db& overcast;
#endif
#ifndef tmp_view
extern viewpoint& tmp_view;
#endif
#ifndef secscancnt1
extern dw& secscancnt1;
#endif
#ifndef ymickeys
extern dw& ymickeys;
#endif
#ifndef kf_tab1toggle
extern db& kf_tab1toggle;
#endif
#ifndef fullscreen
extern db& fullscreen;
#endif
#ifndef ssf_hud
extern db& ssf_hud;
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
#ifndef wpbrg
extern dw& wpbrg;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef sectorlayer1
extern db& sectorlayer1;
#endif
#ifndef kf_tab2toggle
extern db& kf_tab2toggle;
#endif
#ifndef xmickeys
extern dw& xmickeys;
#endif
#ifndef cannons
extern dw& cannons;
#endif
#ifndef m_sinh
extern dw& m_sinh;
#endif
#ifndef gradenabled
extern db& gradenabled;
#endif
#ifndef hdg
extern dw& hdg;
#endif
#ifndef night
extern db& night;
#endif
#ifndef disableinput
extern db& disableinput;
#endif

#endif

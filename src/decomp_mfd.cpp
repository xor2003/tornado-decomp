/* decomp_mfd.cpp — clean-C rewrites of TORNADO/MFD procedures.
 * Semantics from the authoritative TORNADO/MFD.ASM source. */

#include "mfd.h"

/* CheckTABMap — ret: cf=1 moving map selected on a working display,
 * cf=0 otherwise.  kill: bx, flags */
bool checktabmap(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return airradar(_i, _state);        /* dispatch-door forward */
    dw sbx = bx;                                /* push bx */
    CMP(tab1.tab_mode, tab_map);                /* map selected? */
    if (tab1.tab_mode != tab_map) goto checktab2;   /* no -> */
    TEST(tab1.tab_status, 1);                   /* display on? */
    if (!(tab1.tab_status & 1)) goto checktab2; /* no -> */
    bx = tab1.tab_ssf_ptr;
    TEST(*((db*)raddr(ds, bx)), 1);             /* display damaged? */
    if (!(*((db*)raddr(ds, bx)) & 1)) goto passtabmap;  /* no -> */
checktab2:
    CMP(tab2.tab_mode, tab_map);                /* map selected? */
    if (tab2.tab_mode != tab_map) goto failtabmap;  /* no -> */
    TEST(tab2.tab_status, 1);                   /* display on? */
    if (!(tab2.tab_status & 1)) goto failtabmap;    /* no -> */
    bx = tab2.tab_ssf_ptr;
    TEST(*((db*)raddr(ds, bx)), 1);             /* display damaged? */
    if (*((db*)raddr(ds, bx)) & 1) goto failtabmap; /* yes -> */
passtabmap:
    bx = sbx;                                   /* pop bx */
    STC;                                        /* moving map selected */
    return m2c::RETN_(0, _state);
failtabmap:
    bx = sbx;                                   /* pop bx */
    CLC;                                        /* moving map not selected */
    return m2c::RETN_(0, _state);
}

/* SelectRadarMFD — set MFD to radar mode (wrt crew / FLIR).
 * kill: si, flags */
bool selectradarmfd(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return airradar(_i, _state);        /* dispatch-door forward */
    si = m2c::near_offset_external(pilot_mfd);  /* assume pilot */
    CMP(tab2.tab_mode, tab_flir);
    if (tab2.tab_mode != tab_flir) goto ouches;
    si = m2c::near_offset_external(navig_mfd);
    navig_mfd.mfd_x_org = 0;
    navig_mfd.mfd_y_org = 0;
    ((mfd*)raddr(ds, si))->mfd_mode = mfd_radar;
    return m2c::RETN_(0, _state);
ouches:
    CMP(crewmode, crew_pilot);                  /* pilot? */
    if (crewmode == crew_pilot) goto setmode;
    si = m2c::near_offset_external(navig_mfd);
    navig_mfd.mfd_x_org = 0;
    navig_mfd.mfd_y_org = 0;
setmode:
    ((mfd*)raddr(ds, si))->mfd_mode = mfd_radar;
    return m2c::RETN_(0, _state);
}

/* SelectAutoMFD — set MFD to auto-pilot mode (wrt crew).
 * pass: CrewMode.  kill: si, flags */
bool selectautomfd(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return airradar(_i, _state);        /* dispatch-door forward */
    si = m2c::near_offset_external(pilot_mfd);  /* assume pilot */
    CMP(crewmode, crew_pilot);                  /* pilot? */
    if (crewmode == crew_pilot) goto setauto;
    si = m2c::near_offset_external(navig_mfd);
setauto:
    ((mfd*)raddr(ds, si))->mfd_mode = mfd_auto_pilot;
    return m2c::RETN_(0, _state);
}

/* SnapMobile — snap TMP_VIEW to the nearest mobile within the search
 * area (zft <= 50ft; Tornado itself skipped).  ret: cf=1 snapped.
 * kill: assume all */
bool snapmobile(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return airradar(_i, _state);        /* dispatch-door forward */
    /* test for occupied sector */
    ax = tmp_view.vp_xsec;
    dx = tmp_view.vp_ysec;
    CALLF(locatemobiles, 0);                    /* mobiles in sector? */
    if (CF) goto failsnapmobile;                /* no -> */
    /* sort search area */
    bx = gmrrange;
    bp = *((dw*)((db*)&snapsearcharea + bx));   /* SnapSearchArea[bx] */
    /* scan object list for nearest mobile within search area */
    di = 65535;                                 /* prev best = worst case */
scanmobloop:
    CMP(si, -1);                                /* end of list? */
    if ((short)si == (short)-1) goto scanmobdone;   /* yes -> */
    CMP(si, m2c::near_offset_external(m_mobile));   /* Tornado? */
    if ((dw)si == (dw)m2c::near_offset_external(m_mobile))
        goto skipmobile;                        /* yes -> */
    /* only allow mobiles whose zft <= 50ft (see vehicles on bridges) */
    CMP(*((dw*)((db*)raddr(ds, si) + _vp_zft_hi)), 0);    /* alt > 65535ft? */
    if ((dw)(*((dw*)((db*)raddr(ds, si) + _vp_zft_hi))) > (dw)0)
        goto skipmobile;                        /* yes -> */
    CMP(*((dw*)((db*)raddr(ds, si) + _vp_zft_lo)), 50);   /* alt <= 50ft? */
    if ((dw)(*((dw*)((db*)raddr(ds, si) + _vp_zft_lo))) > (dw)50)
        goto skipmobile;                        /* no -> */
    cx = *((dw*)((db*)raddr(ds, si) + _vp_xft));
    bx = *((dw*)((db*)raddr(ds, si) + _vp_yft));
    ax = tmp_view.vp_xft;
    SUB(ax, cx);
    /* ABSV ax — abs(delta xft) */
    CWD;
    XOR(ax, dx);
    SUB(ax, dx);
    dx = tmp_view.vp_yft;
    SUB(dx, bx);
    if ((short)dx < 0) dx = -dx;                /* abs(delta yft) */
    CMP(ax, dx);                                /* max(delta xft, delta yft) */
    if ((dw)ax < (dw)dx) ax = dx;
    CMP(ax, bp);                                /* within search area? */
    if ((dw)ax > (dw)bp) goto skipmobile;       /* no -> */
    CMP(ax, di);                                /* nearer than previous? */
    if ((dw)ax >= (dw)di) goto skipmobile;      /* no -> */
    snapx = cx;
    snapy = bx;
    di = ax;                                    /* new best */
skipmobile:
    si = *((dw*)((db*)raddr(ds, si) + mob_link_ptr));
    goto scanmobloop;
scanmobdone:
    CMP(di, 65535);                             /* snapped ok? */
    if ((dw)di == (dw)65535) goto failsnapmobile;   /* no -> */
passsnapmobile:
    cx = snapx;
    bx = snapy;
    tmp_view.vp_xft = cx;
    tmp_view.vp_yft = bx;
    STC;                                        /* cf = 1 */
    return m2c::RETN_(0, _state);
failsnapmobile:
    CLC;                                        /* cf = 0 */
    return m2c::RETN_(0, _state);
}

/* UpdateMapZoom — pass si -> MFD record; zoom map in / out on keys.
 * kill: al, flags */
bool updatemapzoom(m2c::_offsets _i, struct m2c::_STATE* _state) {
    X86_REGREF
    if (_i) return airradar(_i, _state);        /* dispatch-door forward */
    al = *(db*)(((db*)&kf_mapzoomin) + k_status);   /* KTEST KF_MapZoomIn */
    TEST(al, al);
    if (!al) goto skipzoomin;
    CMP(*((dw*)((db*)raddr(ds, si) + mfd_map_zoom)), 10); /* MAP_ZOOM6? */
    if ((dw)(*((dw*)((db*)raddr(ds, si) + mfd_map_zoom))) == (dw)10)
        goto skipzoomin;                        /* fully zoomed in -> */
    *((dw*)((db*)raddr(ds, si) + mfd_map_zoom)) += 2;
    goto skipzoomout;
skipzoomin:
    al = *(db*)(((db*)&kf_mapzoomout) + k_status);  /* KTEST KF_MapZoomOut */
    TEST(al, al);
    if (!al) goto skipzoomout;
    CMP(*((dw*)((db*)raddr(ds, si) + mfd_map_zoom)), 0);  /* MAP_ZOOM1? */
    if ((dw)(*((dw*)((db*)raddr(ds, si) + mfd_map_zoom))) == (dw)0)
        goto skipzoomout;                       /* fully zoomed out -> */
    *((dw*)((db*)raddr(ds, si) + mfd_map_zoom)) -= 2;
skipzoomout:
    return m2c::RETN_(0, _state);
}

/* THIS IS GENERATED FILE */

        
#include "hills.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 350 VIEW_REC_SIZE	EQU	TYPE VIEWPOINT
	// 351 VP_ZFT_LO	EQU	VP_ZFT
	// 352 VP_ZFT_HI	EQU	VP_ZFT+2
	// 356 SEC_SCALE1 	EQU	0		;1/1 scale
	// 357 SEC_SCALE2	EQU	2		;1/2 scale
	// 358 SEC_SCALE8 	EQU	4		;1/8 scale
	// 359 SEC_SCALE16 	EQU	6		;1/16 scale
	// 363 INT_VIEWMODE	EQU	0		;internal views
	// 364 ALT_VIEWMODE	EQU	2		;alternate internal views
	// 365 EXT_VIEWMODE	EQU	4		;external views
	// 366 TV1_VIEWMODE	EQU	6		;TV1 display
	// 367 TV2_VIEWMODE	EQU	8		;TV2 display
	// 368 TV3_VIEWMODE	EQU	10		;TV3 display
	// 369 TV4_VIEWMODE	EQU	12		;TV4 display
	// 370 TV5_VIEWMODE	EQU	14		;TV5 display
	// 371 NUL_VIEWMODE	EQU	0		;map null view mode to internal
	// 375 ROTATE_NULL	EQU	0		;no rotation
	// 376 ROTATE_VIEW_RT	EQU	2		;look right (90)
	// 377 ROTATE_VIEW_LT	EQU	4		;look left (90)
	// 378 ROTATE_VIEW_UP	EQU	6		;look up (45)
	// 379 ROTATE_VIEW_DN	EQU	8		;look down (90)
	// 380 ROTATE_VIEW_BK	EQU	10		;look back (90)
	// 381 ROTATE_VIEW_FT	EQU	12		;look back (90)
	// 385 $MID		EQU	128
	// 386 $0		EQU	0
	// 387 $256		EQU	2
	// 388 $512		EQU	4
	// 389 $1024		EQU	8
	// 390 $2048		EQU	16
	// 391 $4096		EQU	32
	// 392 $8192		EQU	64
	// 401 SEC_REC_SIZE	EQU	TYPE SECTORDATA
	// 405 MIN_SEC_SCAN	EQU	3		;minimum sector scan range
	// 406 MAX_SEC_SCAN	EQU	15		;maximum sector scan range
	// 410 MAP_X_WRAP	EQU	0001fh		;0 .. 31
	// 411 MAP_Y_WRAP	EQU	0001fh		;0 .. 31
	// 415 SCTR_Y_THRES	EQU	11600		;approx 8,192 * sqrt(2)
	// 419 OBJ_SCALE1 	EQU	0		;1/1 scale
	// 420 OBJ_SCALE2	EQU	2		;2/1 scale
	// 421 OBJ_SCALE4	EQU	4		;4/1 scale
	// 422 OBJ_SCALE8 	EQU	6		;8/1 scale
	// 423 OBJ_SCALE16 	EQU	8		;16/1 scale
	// 427 MAX_RANGE1 	EQU	16384		;OBJ_SCALE1
	// 428 MAX_RANGE2	EQU	8192		;OBJ_SCALE2
	// 429 MAX_RANGE4	EQU	4096		;OBJ_SCALE4
	// 430 MAX_RANGE8 	EQU	2048		;OBJ_SCALE8
	// 431 MAX_RANGE16 	EQU	1024		;OBJ_SCALE16
	// 435 @MID		EQU	64
	// 436 @0		EQU	0
	// 437 @16		EQU	2
	// 438 @32		EQU	4
	// 439 @48		EQU	6
	// 440 @64		EQU	8
	// 441 @80		EQU	10
	// 442 @96		EQU	12
	// 443 @112		EQU	14
	// 444 @128		EQU	16
	// 445 @192		EQU	24
	// 446 @256		EQU	32
	// 447 @384		EQU	48
	// 448 @512		EQU	64
	// 466 OBJ_REC_SIZE	EQU	TYPE OBJECTDATA
	// 468 OBJ_XGRID	EQU	OBJ_USERW1	;x grid
	// 469 OBJ_YGRID	EQU	OBJ_USERW2	;y grid
	// 471 OBJ_HDG		EQU	OBJ_USERW1	;heading
	// 472 OBJ_PITCH	EQU	OBJ_USERW2	;pitch
	// 473 OBJ_ROLL	EQU	OBJ_USERW3	;roll
	// 475 OBJ_ANIM_FLAGS	EQU	OBJ_USERB1	;animation flags
	// 477 OBJ_XSECPOS	EQU	OBJ_USERW1	;x sector centre position
	// 478 OBJ_YSECPOS	EQU	OBJ_USERW2	;y sector centre position
	// 479 OBJ_ZSECPOS	EQU	OBJ_USERW3	;z sector centre position
	// 480 OBJ_MAPINDEX	EQU	OBJ_USERW4	;map index
	// 481 OBJ_SECSCALE	EQU	OBJ_USERB1	;sector scale
	// 482 OBJ_FACE_FLAGS	EQU	OBJ_USERB2	;hill face flags
	// 484 OBJ_YMIN	EQU	OBJ_XPOS	;minimum y position
	// 486 OBJ_SMOKE_RFT	EQU	OBJ_USERW1	;smoke radius
	// 487 OBJ_SMOKE_COL	EQU	OBJ_USERB1	;smoke colour
	// 491 OTYPE_GROUND	EQU	0		;static ground objects
	// 492 OTYPE_MOBILE1	EQU	2		;mobile objects (skew only)
	// 493 OTYPE_MOBILE2	EQU	4		;mobile objects (skew and pitch)
	// 494 OTYPE_MOBILE3	EQU	6		;mobile objects (skew, pitch and roll)
	// 495 OTYPE_MOBILE4	EQU	8		;mobile objects on bridge (skew and pitch)
	// 496 OTYPE_HILLFACE	EQU	10		;hill face
	// 497 OTYPE_SMOKE	EQU	12		;smoke
	// 511 OBJ_HDR_SIZE	EQU	TYPE OBJECTHEADER
	// 512 OBJ_FLG_PIXEL	EQU	00000001b	;1 = pixel approximation enabled
	// 516 NUM_OBJECTS	EQU	256		;max number of objects
	// 517 NUM_BINS	EQU	64+1		;(64 * 256ft = 16,384ft) + behind bin
	// 518 NUM_FAR_OBJECTS	EQU	256		;max number of far objects
	// 519 NUM_FAR_BINS	EQU	64+1		;(64 * 2,048ft = 131,072ft) + behind bin
	// 520 BEHIND_BIN	EQU	0		;behind bin index
	// 521 IN_FRONT_BIN	EQU	2		;in front bin index
	// 525 FACE_EXTENDED	EQU	01000000b	;1 = extended function, 0 = standard function
	// 526 FACE_DECISION	EQU	00100000b	;1 = decision plane, 0 = standard face
	// 527 FACE_EXCLUDE	EQU	00010000b	;1 = exclude second choice of decision, 0 = include
	// 528 FACE_PRIMARY	EQU	00001000b	;1 = primary face, 0 = secondary face
	// 529 FACE_VISIBLE	EQU	00000100b	;1 = outside / inside visible, 0 = outside visible
	// 530 FACE_STRUCTURE	EQU	00000010b	;1 = line structure, 0 = polygon structure
	// 531 FACE_FILL_TYPE	EQU	00000001b	;1 = mesh fill, 0 = solid fill
	// 541 MOB_REC_SIZE	EQU	TYPE MOBILE
	// 545 _VP_XSEC	EQU	MOB_REC_SIZE+VP_XSEC
	// 546 _VP_YSEC	EQU	MOB_REC_SIZE+VP_YSEC
	// 547 _VP_XFT		EQU	MOB_REC_SIZE+VP_XFT
	// 548 _VP_YFT		EQU	MOB_REC_SIZE+VP_YFT
	// 549 _VP_ZFT		EQU	MOB_REC_SIZE+VP_ZFT
	// 550 _VP_HDG		EQU	MOB_REC_SIZE+VP_HDG
	// 551 _VP_PITCH	EQU	MOB_REC_SIZE+VP_PITCH
	// 552 _VP_ROLL 	EQU	MOB_REC_SIZE+VP_ROLL
	// 553 _VP_ZFT_LO	EQU	MOB_REC_SIZE+VP_ZFT_LO
	// 554 _VP_ZFT_HI	EQU	MOB_REC_SIZE+VP_ZFT_HI
	// 558 NUM_MOBILES	EQU	256		;max number of mobiles objects
	// 564 MSORT_REC_SIZE	EQU	TYPE MOBSORT
	// 577 GND_REC_SIZE	EQU	TYPE GNDOBJ
	// 588 STAT_REC_SIZE	EQU	TYPE STATMOB
	// 592 SURFACE_UNKNOWN	EQU	0
	// 593 SURFACE_RUNWAY	EQU	2
	// 594 SURFACE_TAXIWAY	EQU	4
	// 595 SURFACE_HARD	EQU	6
	// 596 SURFACE_ROAD	EQU	8
	// 597 SURFACE_RAILWAY	EQU	10
	// 598 SURFACE_RIVER	EQU	12
	// 599 SURFACE_LAKE	EQU	14
	// 603 NUM_CRATERS	EQU	128
	// 604 CRATER_NULL	EQU	0
	// 605 CRATER_SIZE1	EQU	1		;small
	// 606 CRATER_SIZE2	EQU	2		;large
	// 607 CRATER_HEAVE	EQU	3		;heave
	// 608 CRATER_SHELL	EQU	4		;cannon shell
	// 619 CRATER_REC_SIZE	EQU	TYPE CRATER
	// 623 NUM_SMOKE	EQU	128
	// 625 SMOKE_CRATER1	EQU	0		;smoke from crater (min effect)
	// 626 SMOKE_CRATER2	EQU	2		;smoke from crater (med effect)
	// 627 SMOKE_CRATER3	EQU	4		;smoke from crater (max effect)
	// 628 SMOKE_BURNING	EQU	6		;smoke from burning building
	// 629 SMOKE_KICK_UP	EQU	8		;kick up dust from ground
	// 630 SMOKE_AIR_EXPLO	EQU	10		;smoke from air explosion
	// 631 SMOKE_AIR_TRAIL	EQU	12		;smoke from burning aircraft
	// 633 STYPE_NULL	EQU	0		;no smoke
	// 634 STYPE_GND1	EQU	2		;ground smoke type 1
	// 635 STYPE_AIR1	EQU	4		;air smoke type 1
	// 651 SMOKE_REC_SIZE	EQU	TYPE SMOKE
	// 652 SMOKE_ZFT_LO	EQU	SMOKE_ZFT
	// 653 SMOKE_ZFT_HI	EQU	SMOKE_ZFT+2
	// 654 SFLG_REPRO	EQU	00000001b	;1 = reproduced sibling
	// 669 FOG_COL_START	EQU	8
	// 670 FOG_COL_COUNT	EQU	104
	// 672 NIGHT_COL_START	EQU	24
	// 673 NIGHT_COL_COUNT	EQU	88
	// 675 IR_COL_START	EQU	8
	// 676 IR_COL_COUNT	EQU	104
	// 680 COL_BLACK	EQU	0
	// 681 COL_LT_RED	EQU	1
	// 682 COL_YELLOW	EQU	2
	// 683 COL_LT_CYAN	EQU	3
	// 684 COL_WHITE	EQU	4
	// 688 COL_TEXT_NORM1	EQU	5
	// 689 COL_TEXT_NORM2	EQU	6
	// 690 COL_TEXT_ALERT	EQU	7
	// 694 COL_NT_WHITE1	EQU	8
	// 695 COL_NT_GREY1	EQU	9
	// 696 COL_NT_GREY2	EQU	10
	// 697 COL_NT_GREY3	EQU	11
	// 698 COL_NT_GREY4	EQU	12
	// 699 COL_NT_RED1	EQU	13
	// 700 COL_NT_RED2	EQU	14
	// 701 COL_NT_RED3	EQU	15
	// 702 COL_NT_BLUE1	EQU	16
	// 703 COL_NT_BLUE2	EQU	17
	// 704 COL_NT_YELLOW1	EQU	18
	// 705 COL_NT_AMBER1	EQU	19
	// 706 COL_NT_AMBER2	EQU	20
	// 707 COL_NT_GREEN1	EQU	21
	// 708 COL_NT_R_WHITE1	EQU	22
	// 709 COL_NT_B_WHITE1	EQU	23
	// 713 COL_WHITE1	EQU	24
	// 714 COL_GREY1	EQU	25
	// 715 COL_GREY2	EQU	26
	// 716 COL_GREY3	EQU	27
	// 717 COL_GREY4	EQU	28
	// 718 COL_BLACK1	EQU	29
	// 719 COL_CYAN_GREY1	EQU	30
	// 720 COL_CYAN_GREY2	EQU	31
	// 721 COL_CYAN_GREY3	EQU	32
	// 722 COL_CYAN_GREY4	EQU	33
	// 723 COL_CYAN_GREY5	EQU	34
	// 724 COL_CYAN_GREY6	EQU	35
	// 725 COL_SAND1	EQU	36
	// 726 COL_SAND2	EQU	37
	// 727 COL_SAND3	EQU	38
	// 728 COL_SAND4	EQU	39
	// 729 COL_SAND5	EQU	40
	// 730 COL_RUST1	EQU	41
	// 731 COL_RUST2	EQU	42
	// 732 COL_RUST3	EQU	43
	// 733 COL_RUST4	EQU	44
	// 734 COL_RUST5	EQU	45
	// 735 COL_NEW_GREY1	EQU	46
	// 736 COL_NEW_GREY2	EQU	47
	// 737 COL_NEW_GREY3	EQU	48
	// 738 COL_NEW_GREY4	EQU	49
	// 739 COL_YELLOW1	EQU	50
	// 740 COL_AMBER1	EQU	51
	// 741 COL_AMBER2	EQU	52
	// 742 COL_AMBER3	EQU	53
	// 743 COL_AMBER4	EQU	54
	// 744 COL_RED1	EQU	55
	// 745 COL_GREEN1	EQU	56
	// 746 COL_GREEN2	EQU	57
	// 747 COL_GREEN3	EQU	58
	// 748 COL_GREEN4	EQU	59
	// 749 COL_DK_CYAN1	EQU	60
	// 750 COL_DK_CYAN2	EQU	61
	// 751 COL_DK_CYAN3	EQU	62
	// 752 COL_DK_CYAN4	EQU	63
	// 753 COL_OLIVE1	EQU	64
	// 754 COL_OLIVE2	EQU	65
	// 755 COL_OLIVE3	EQU	66
	// 756 COL_OLIVE4	EQU	67
	// 757 COL_OLIVE5	EQU	68
	// 758 COL_OLIVE6	EQU	69
	// 759 COL_NEAR_WHITE1	EQU	70
	// 760 COL_SMOKE_GREY1	EQU	71
	// 761 COL_SMOKE_GREY2	EQU	72
	// 765 COL_ROAD1	EQU	73
	// 766 COL_RWY1	EQU	74
	// 767 COL_GND1	EQU	75
	// 768 COL_GND2	EQU	76
	// 769 COL_RAIL1	EQU	77
	// 770 COL_RAIL2	EQU	78
	// 771 COL_RIVER1	EQU	79
	// 775 COL_HILL1	EQU	80
	// 776 COL_HILL2	EQU	81
	// 777 COL_HILL3	EQU	82
	// 778 COL_HILL4	EQU	83
	// 779 COL_HILL5	EQU	84
	// 780 COL_HILL6	EQU	85
	// 781 COL_HILL7	EQU	86
	// 782 COL_HILL8	EQU	87
	// 783 COL_HILL9	EQU	88
	// 784 COL_HILL10	EQU	89
	// 785 COL_HILL11	EQU	90
	// 786 COL_HILL12	EQU	91
	// 787 COL_HILL13	EQU	92
	// 788 COL_HILL14	EQU	93
	// 789 COL_HILL15	EQU	94
	// 790 COL_HILL16	EQU	95
	// 794 COL_SKY1	EQU	96
	// 795 COL_SKY2	EQU	97
	// 796 COL_SKY3	EQU	98
	// 797 COL_SKY4	EQU	99
	// 798 COL_SKY5	EQU	100
	// 799 COL_SKY6	EQU	101
	// 800 COL_SKY7	EQU	102
	// 801 COL_SKY8	EQU	103
	// 802 COL_SKY9	EQU	104
	// 803 COL_SKY10	EQU	105
	// 804 COL_SKY11	EQU	106
	// 805 COL_SKY12	EQU	107
	// 806 COL_SKY13	EQU	108
	// 807 COL_SKY14	EQU	109
	// 808 COL_SKY15	EQU	110
	// 809 COL_SKY16	EQU	111
	// 813 COL_MAP_HILL1	EQU	112
	// 814 COL_MAP_HILL2	EQU	113
	// 815 COL_MAP_HILL3	EQU	114
	// 816 COL_MAP_HILL4	EQU	115
	// 817 COL_MAP_HILL5	EQU	116
	// 818 COL_MAP_HILL6	EQU	117
	// 819 COL_MAP_HILL7	EQU	118
	// 820 COL_MAP_HILL8	EQU	119
	// 821 COL_MAP_HILL9	EQU	120
	// 822 COL_MAP_HILL10	EQU	121
	// 823 COL_MAP_HILL11	EQU	122
	// 824 COL_MAP_HILL12	EQU	123
	// 825 COL_MAP_HILL13	EQU	124
	// 826 COL_MAP_HILL14	EQU	125
	// 827 COL_MAP_HILL15	EQU	126
	// 828 COL_MAP_HILL16	EQU	127
	// 832 COL_NEEDLE	EQU	128
	// 833 COL_COUNTER	EQU	129
	// 834 COL_RED_NEEDLE	EQU	130
	// 835 COL_ADI_SKY	EQU	131
	// 836 COL_ADI_GND	EQU	132
	// 837 COL_HUD		EQU	133
	// 838 COL_BUG		EQU	134
	// 839 COL_AOA		EQU	135
	// 840 COL_KNEE_PAD	EQU	136
	// 841 COL_KNEE_INK1	EQU	137
	// 842 COL_KNEE_INK2	EQU	138
	// 843 COL_KNEE_PEN	EQU	139
	// 844 COL_KNEE_NUM	EQU	140
	// 845 COL_SIGHT	EQU	141
	// 847 COL_TIALD_SYM	EQU	COL_BLACK
	// 850 COL_MAP_SYM	EQU	COL_BLACK
	// 852 COL_REF_SYM	EQU	COL_BLACK
	// 854 COL_RADAR_MASK	EQU	COL_BLACK
	// 856 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 857 COL_IR_MISS	EQU	COL_CRT_RED
	// 859 COL_LOCAL1	EQU	209		;day
	// 860 COL_LOCAL2	EQU	213
	// 861 COL_LOCAL3	EQU	215
	// 862 COL_LOCAL4	EQU	218
	// 863 COL_LOCAL5	EQU	220
	// 864 COL_NT_LOCAL1	EQU	233		;night
	// 865 COL_NT_LOCAL2	EQU	234
	// 866 COL_NT_LOCAL3	EQU	235
	// 867 COL_NT_LOCAL4	EQU	236
	// 868 COL_NT_LOCAL5	EQU	255
	// 870 COL_GLIDE1	EQU	210		;day
	// 871 COL_GLIDE2	EQU	216
	// 872 COL_GLIDE3	EQU	220
	// 873 COL_NT_GLIDE1	EQU	234		;night
	// 874 COL_NT_GLIDE2	EQU	235
	// 875 COL_NT_GLIDE3	EQU	236
	// 883 COL_MAP_GND1	EQU	144
	// 884 COL_MAP_ROAD1	EQU	145
	// 885 COL_MAP_RAIL1	EQU	146
	// 886 COL_MAP_RWY1	EQU	147
	// 887 COL_MAP_RIVER1	EQU	148
	// 888 COL_MAP_GREEN1	EQU	149
	// 889 COL_MAP_GREEN2	EQU	150
	// 890 COL_MAP_COMPASS	EQU	151
	// 891 COL_MAP_LOCATOR	EQU	152
	// 892 COL_MAP_ALLIED	EQU	153
	// 893 COL_MAP_BORDER	EQU	154
	// 894 COL_COMPASS	EQU	155
	// 895 COL_LOCATOR	EQU	156
	// 896 COL_MAP_RWY2	EQU	157
	// 897 COL_MAP_ENEMY	EQU	158
	// 901 COL_CRT_RED	EQU	159
	// 902 COL_CRT1	EQU	160
	// 903 COL_CRT2	EQU	161
	// 904 COL_CRT3	EQU	162
	// 905 COL_CRT4	EQU	163
	// 906 COL_CRT5	EQU	164
	// 907 COL_CRT6	EQU	165
	// 908 COL_CRT7	EQU	166
	// 909 COL_CRT8	EQU	167
	// 910 COL_CRT9	EQU	168
	// 911 COL_CRT10	EQU	169
	// 912 COL_CRT11	EQU	170
	// 913 COL_CRT12	EQU	171
	// 914 COL_CRT13	EQU	172
	// 915 COL_CRT14	EQU	173
	// 916 COL_CRT15	EQU	174
	// 917 COL_CRT16	EQU	175
	// 0 ;* sort face distance switch wrt sector scale mode
	// 0 ;SEC_SCALE1
	// 0 ;SEC_SCALE2
	// 0 ;SEC_SCALE8
	// 0 ;SEC_SCALE16
	// 0 ;* spot height EQUates
	// 928 $ZA		EQU	0
	// 929 $ZB		EQU	2
	// 930 $ZC		EQU	4
	// 931 $ZD		EQU	6
	// 932 $ZE		EQU	8
	// 933 $ZF		EQU	10
	// 934 $ZG		EQU	12
	// 935 $ZH		EQU	14
	// 936 $ZI		EQU	16
	// 0 ;* calc spot height position switch
	// 0 ;* face lists (clockwise order, 90 degree angle is first angle to help cyclic check)
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;Z crease
	// 0 ;reverse Z crease
	// 0 ;face colour
	// 0 ;-------------------------------
	// 0 ;* hill face texture vars / data
	// 0 ;-------------------------------
	// 0 ;1 = hill face texture enabled
	// 0 ;* texture face lists
	// 0 ;*		DB	v1, v2, v3, -1, colour modifier
	// 0 ;sub-face 0
	// 0 ;sub-face 1
	// 0 ;sub-face 2
	// 0 ;sub-face 3
	// 0 ;sub-face 4
	// 0 ;sub-face 5
	// 0 ;sub-face 6
	// 0 ;sub-face 7
	// 0 ;sub-face 8
	// 0 ;sub-face 9
	// 0 ;sub-face 10
	// 0 ;sub-face 11
	// 0 ;sub-face 12
	// 0 ;sub-face 13
	// 0 ;sub-face 14
	// 0 ;sub-face 15
	// 0 ;-------------------------
	// 0 ;* calc ground height data
	// 0 ;-------------------------
	// 0 ;* sort quadrant switch
	// 0 ;+x, +y
	// 0 ;-x, +y
	// 0 ;+x, -y
	// 0 ;-x, -y
	// 0 ;----------------------------
	// 0 ;* nearest spot height switch
	// 0 ;----------------------------
	// 0 ;xxyy0 = 00000
	// 0 ;xxyy0 = 00010
	// 0 ;xxyy0 = 00100
	// 0 ;xxyy0 = 00110
	// 0 ;xxyy0 = 01000
	// 0 ;xxyy0 = 01010
	// 0 ;xxyy0 = 01100
	// 0 ;xxyy0 = 01110
	// 0 ;xxyy0 = 10000
	// 0 ;xxyy0 = 10010
	// 0 ;xxyy0 = 10100
	// 0 ;xxyy0 = 10110
	// 0 ;xxyy0 = 11000
	// 0 ;xxyy0 = 11010
	// 0 ;xxyy0 = 11100
	// 0 ;xxyy0 = 11110

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kmainproc: 	goto mainproc;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to jump to 0x%x in %s (" __FILE__ ":%d)\n", __disp, __func__, __LINE__);m2c::stackDump(_state); abort(); }
    };
}


/* THIS IS GENERATED FILE */

        
#include "palettes.h"

                

 static bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
	// 86 FOG_COL_START	EQU	8
	// 87 FOG_COL_COUNT	EQU	104
	// 89 NIGHT_COL_START	EQU	24
	// 90 NIGHT_COL_COUNT	EQU	88
	// 92 IR_COL_START	EQU	8
	// 93 IR_COL_COUNT	EQU	104
	// 97 COL_BLACK	EQU	0
	// 98 COL_LT_RED	EQU	1
	// 99 COL_YELLOW	EQU	2
	// 100 COL_LT_CYAN	EQU	3
	// 101 COL_WHITE	EQU	4
	// 105 COL_TEXT_NORM1	EQU	5
	// 106 COL_TEXT_NORM2	EQU	6
	// 107 COL_TEXT_ALERT	EQU	7
	// 111 COL_NT_WHITE1	EQU	8
	// 112 COL_NT_GREY1	EQU	9
	// 113 COL_NT_GREY2	EQU	10
	// 114 COL_NT_GREY3	EQU	11
	// 115 COL_NT_GREY4	EQU	12
	// 116 COL_NT_RED1	EQU	13
	// 117 COL_NT_RED2	EQU	14
	// 118 COL_NT_RED3	EQU	15
	// 119 COL_NT_BLUE1	EQU	16
	// 120 COL_NT_BLUE2	EQU	17
	// 121 COL_NT_YELLOW1	EQU	18
	// 122 COL_NT_AMBER1	EQU	19
	// 123 COL_NT_AMBER2	EQU	20
	// 124 COL_NT_GREEN1	EQU	21
	// 125 COL_NT_R_WHITE1	EQU	22
	// 126 COL_NT_B_WHITE1	EQU	23
	// 130 COL_WHITE1	EQU	24
	// 131 COL_GREY1	EQU	25
	// 132 COL_GREY2	EQU	26
	// 133 COL_GREY3	EQU	27
	// 134 COL_GREY4	EQU	28
	// 135 COL_BLACK1	EQU	29
	// 136 COL_CYAN_GREY1	EQU	30
	// 137 COL_CYAN_GREY2	EQU	31
	// 138 COL_CYAN_GREY3	EQU	32
	// 139 COL_CYAN_GREY4	EQU	33
	// 140 COL_CYAN_GREY5	EQU	34
	// 141 COL_CYAN_GREY6	EQU	35
	// 142 COL_SAND1	EQU	36
	// 143 COL_SAND2	EQU	37
	// 144 COL_SAND3	EQU	38
	// 145 COL_SAND4	EQU	39
	// 146 COL_SAND5	EQU	40
	// 147 COL_RUST1	EQU	41
	// 148 COL_RUST2	EQU	42
	// 149 COL_RUST3	EQU	43
	// 150 COL_RUST4	EQU	44
	// 151 COL_RUST5	EQU	45
	// 152 COL_NEW_GREY1	EQU	46
	// 153 COL_NEW_GREY2	EQU	47
	// 154 COL_NEW_GREY3	EQU	48
	// 155 COL_NEW_GREY4	EQU	49
	// 156 COL_YELLOW1	EQU	50
	// 157 COL_AMBER1	EQU	51
	// 158 COL_AMBER2	EQU	52
	// 159 COL_AMBER3	EQU	53
	// 160 COL_AMBER4	EQU	54
	// 161 COL_RED1	EQU	55
	// 162 COL_GREEN1	EQU	56
	// 163 COL_GREEN2	EQU	57
	// 164 COL_GREEN3	EQU	58
	// 165 COL_GREEN4	EQU	59
	// 166 COL_DK_CYAN1	EQU	60
	// 167 COL_DK_CYAN2	EQU	61
	// 168 COL_DK_CYAN3	EQU	62
	// 169 COL_DK_CYAN4	EQU	63
	// 170 COL_OLIVE1	EQU	64
	// 171 COL_OLIVE2	EQU	65
	// 172 COL_OLIVE3	EQU	66
	// 173 COL_OLIVE4	EQU	67
	// 174 COL_OLIVE5	EQU	68
	// 175 COL_OLIVE6	EQU	69
	// 176 COL_NEAR_WHITE1	EQU	70
	// 177 COL_SMOKE_GREY1	EQU	71
	// 178 COL_SMOKE_GREY2	EQU	72
	// 182 COL_ROAD1	EQU	73
	// 183 COL_RWY1	EQU	74
	// 184 COL_GND1	EQU	75
	// 185 COL_GND2	EQU	76
	// 186 COL_RAIL1	EQU	77
	// 187 COL_RAIL2	EQU	78
	// 188 COL_RIVER1	EQU	79
	// 192 COL_HILL1	EQU	80
	// 193 COL_HILL2	EQU	81
	// 194 COL_HILL3	EQU	82
	// 195 COL_HILL4	EQU	83
	// 196 COL_HILL5	EQU	84
	// 197 COL_HILL6	EQU	85
	// 198 COL_HILL7	EQU	86
	// 199 COL_HILL8	EQU	87
	// 200 COL_HILL9	EQU	88
	// 201 COL_HILL10	EQU	89
	// 202 COL_HILL11	EQU	90
	// 203 COL_HILL12	EQU	91
	// 204 COL_HILL13	EQU	92
	// 205 COL_HILL14	EQU	93
	// 206 COL_HILL15	EQU	94
	// 207 COL_HILL16	EQU	95
	// 211 COL_SKY1	EQU	96
	// 212 COL_SKY2	EQU	97
	// 213 COL_SKY3	EQU	98
	// 214 COL_SKY4	EQU	99
	// 215 COL_SKY5	EQU	100
	// 216 COL_SKY6	EQU	101
	// 217 COL_SKY7	EQU	102
	// 218 COL_SKY8	EQU	103
	// 219 COL_SKY9	EQU	104
	// 220 COL_SKY10	EQU	105
	// 221 COL_SKY11	EQU	106
	// 222 COL_SKY12	EQU	107
	// 223 COL_SKY13	EQU	108
	// 224 COL_SKY14	EQU	109
	// 225 COL_SKY15	EQU	110
	// 226 COL_SKY16	EQU	111
	// 230 COL_MAP_HILL1	EQU	112
	// 231 COL_MAP_HILL2	EQU	113
	// 232 COL_MAP_HILL3	EQU	114
	// 233 COL_MAP_HILL4	EQU	115
	// 234 COL_MAP_HILL5	EQU	116
	// 235 COL_MAP_HILL6	EQU	117
	// 236 COL_MAP_HILL7	EQU	118
	// 237 COL_MAP_HILL8	EQU	119
	// 238 COL_MAP_HILL9	EQU	120
	// 239 COL_MAP_HILL10	EQU	121
	// 240 COL_MAP_HILL11	EQU	122
	// 241 COL_MAP_HILL12	EQU	123
	// 242 COL_MAP_HILL13	EQU	124
	// 243 COL_MAP_HILL14	EQU	125
	// 244 COL_MAP_HILL15	EQU	126
	// 245 COL_MAP_HILL16	EQU	127
	// 249 COL_NEEDLE	EQU	128
	// 250 COL_COUNTER	EQU	129
	// 251 COL_RED_NEEDLE	EQU	130
	// 252 COL_ADI_SKY	EQU	131
	// 253 COL_ADI_GND	EQU	132
	// 254 COL_HUD		EQU	133
	// 255 COL_BUG		EQU	134
	// 256 COL_AOA		EQU	135
	// 257 COL_KNEE_PAD	EQU	136
	// 258 COL_KNEE_INK1	EQU	137
	// 259 COL_KNEE_INK2	EQU	138
	// 260 COL_KNEE_PEN	EQU	139
	// 261 COL_KNEE_NUM	EQU	140
	// 262 COL_SIGHT	EQU	141
	// 264 COL_TIALD_SYM	EQU	COL_BLACK
	// 267 COL_MAP_SYM	EQU	COL_BLACK
	// 269 COL_REF_SYM	EQU	COL_BLACK
	// 271 COL_RADAR_MASK	EQU	COL_BLACK
	// 273 COL_RAD_MISS	EQU	COL_MAP_ENEMY
	// 274 COL_IR_MISS	EQU	COL_CRT_RED
	// 276 COL_LOCAL1	EQU	209		;day
	// 277 COL_LOCAL2	EQU	213
	// 278 COL_LOCAL3	EQU	215
	// 279 COL_LOCAL4	EQU	218
	// 280 COL_LOCAL5	EQU	220
	// 281 COL_NT_LOCAL1	EQU	233		;night
	// 282 COL_NT_LOCAL2	EQU	234
	// 283 COL_NT_LOCAL3	EQU	235
	// 284 COL_NT_LOCAL4	EQU	236
	// 285 COL_NT_LOCAL5	EQU	255
	// 287 COL_GLIDE1	EQU	210		;day
	// 288 COL_GLIDE2	EQU	216
	// 289 COL_GLIDE3	EQU	220
	// 290 COL_NT_GLIDE1	EQU	234		;night
	// 291 COL_NT_GLIDE2	EQU	235
	// 292 COL_NT_GLIDE3	EQU	236
	// 300 COL_MAP_GND1	EQU	144
	// 301 COL_MAP_ROAD1	EQU	145
	// 302 COL_MAP_RAIL1	EQU	146
	// 303 COL_MAP_RWY1	EQU	147
	// 304 COL_MAP_RIVER1	EQU	148
	// 305 COL_MAP_GREEN1	EQU	149
	// 306 COL_MAP_GREEN2	EQU	150
	// 307 COL_MAP_COMPASS	EQU	151
	// 308 COL_MAP_LOCATOR	EQU	152
	// 309 COL_MAP_ALLIED	EQU	153
	// 310 COL_MAP_BORDER	EQU	154
	// 311 COL_COMPASS	EQU	155
	// 312 COL_LOCATOR	EQU	156
	// 313 COL_MAP_RWY2	EQU	157
	// 314 COL_MAP_ENEMY	EQU	158
	// 318 COL_CRT_RED	EQU	159
	// 319 COL_CRT1	EQU	160
	// 320 COL_CRT2	EQU	161
	// 321 COL_CRT3	EQU	162
	// 322 COL_CRT4	EQU	163
	// 323 COL_CRT5	EQU	164
	// 324 COL_CRT6	EQU	165
	// 325 COL_CRT7	EQU	166
	// 326 COL_CRT8	EQU	167
	// 327 COL_CRT9	EQU	168
	// 328 COL_CRT10	EQU	169
	// 329 COL_CRT11	EQU	170
	// 330 COL_CRT12	EQU	171
	// 331 COL_CRT13	EQU	172
	// 332 COL_CRT14	EQU	173
	// 333 COL_CRT15	EQU	174
	// 334 COL_CRT16	EQU	175
	// 354 OPT_DEBUG  	EQU	1		;1 = enabled, 0 = disabled
	// 358 OPT_TURBO	EQU	0		;1 = enabled, 0 = disabled
	// 362 OPT_PHOTO	EQU	0		;1 = enabled, 0 = disabled
	// 366 OPT_TITLE_PIC	EQU	0		;1 = enabled, 0 = disabled
	// 370 OPT_LOGO_PIC	EQU	0		;1 = enabled, 0 = disabled
	// 374 OPT_DEMO	EQU	0		;0 = no demo
	// 380 OPT_FLY_DEMO	EQU	0		;1 = enabled, 0 = disabled
	// 384 OPT_PREVIEW	EQU	0		;1 = enabled, 0 = disabled
	// 388 OPT_NO_PICS	EQU	0		;1 = enabled, 0 = disabled
	// 392 OPT_HOLOBYTE	EQU	0		;1 = enabled, 0 = disabled
	// 396 OPT_COKTEL	EQU	0		;1 = enabled, 0 = disabled
	// 400 OPT_LEADER	EQU	0		;1 = enabled, 0 = disabled
	// 404 OPT_SYSTEM4	EQU	0		;1 = enabled, 0 = disabled
	// 0 ;=====================================================
	// 0 ;* logical colour to physical colour conversion tables
	// 0 ;=====================================================
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;===========================
	// 608 COL		=	0
	// 611 COL		=	COL+1
	// 613 COL		=	COL+1
	// 615 COL		=	COL+1
	// 617 COL		=	COL+1
	// 619 COL		=	COL+1
	// 621 COL		=	COL+1
	// 623 COL		=	COL+1
	// 625 COL		=	COL+1
	// 627 COL		=	COL+1
	// 629 COL		=	COL+1
	// 631 COL		=	COL+1
	// 633 COL		=	COL+1
	// 635 COL		=	COL+1
	// 637 COL		=	COL+1
	// 639 COL		=	COL+1
	// 641 COL		=	COL+1
	// 643 COL		=	COL+1
	// 645 COL		=	COL+1
	// 647 COL		=	COL+1
	// 649 COL		=	COL+1
	// 651 COL		=	COL+1
	// 653 COL		=	COL+1
	// 655 COL		=	COL+1
	// 657 COL		=	COL+1
	// 659 COL		=	COL+1
	// 661 COL		=	COL+1
	// 663 COL		=	COL+1
	// 665 COL		=	COL+1
	// 667 COL		=	COL+1
	// 669 COL		=	COL+1
	// 671 COL		=	COL+1
	// 673 COL		=	COL+1
	// 675 COL		=	COL+1
	// 677 COL		=	COL+1
	// 679 COL		=	COL+1
	// 681 COL		=	COL+1
	// 683 COL		=	COL+1
	// 685 COL		=	COL+1
	// 687 COL		=	COL+1
	// 689 COL		=	COL+1
	// 691 COL		=	COL+1
	// 693 COL		=	COL+1
	// 695 COL		=	COL+1
	// 697 COL		=	COL+1
	// 699 COL		=	COL+1
	// 701 COL		=	COL+1
	// 703 COL		=	COL+1
	// 705 COL		=	COL+1
	// 707 COL		=	COL+1
	// 709 COL		=	COL+1
	// 711 COL		=	COL+1
	// 713 COL		=	COL+1
	// 715 COL		=	COL+1
	// 717 COL		=	COL+1
	// 719 COL		=	COL+1
	// 721 COL		=	COL+1
	// 723 COL		=	COL+1
	// 725 COL		=	COL+1
	// 727 COL		=	COL+1
	// 729 COL		=	COL+1
	// 731 COL		=	COL+1
	// 733 COL		=	COL+1
	// 735 COL		=	COL+1
	// 737 COL		=	COL+1
	// 739 COL		=	COL+1
	// 741 COL		=	COL+1
	// 743 COL		=	COL+1
	// 745 COL		=	COL+1
	// 747 COL		=	COL+1
	// 749 COL		=	COL+1
	// 751 COL		=	COL+1
	// 753 COL		=	COL+1
	// 755 COL		=	COL+1
	// 757 COL		=	COL+1
	// 759 COL		=	COL+1
	// 761 COL		=	COL+1
	// 763 COL		=	COL+1
	// 765 COL		=	COL+1
	// 767 COL		=	COL+1
	// 769 COL		=	COL+1
	// 771 COL		=	COL+1
	// 773 COL		=	COL+1
	// 775 COL		=	COL+1
	// 777 COL		=	COL+1
	// 779 COL		=	COL+1
	// 781 COL		=	COL+1
	// 783 COL		=	COL+1
	// 785 COL		=	COL+1
	// 787 COL		=	COL+1
	// 789 COL		=	COL+1
	// 791 COL		=	COL+1
	// 793 COL		=	COL+1
	// 795 COL		=	COL+1
	// 797 COL		=	COL+1
	// 799 COL		=	COL+1
	// 801 COL		=	COL+1
	// 803 COL		=	COL+1
	// 805 COL		=	COL+1
	// 807 COL		=	COL+1
	// 809 COL		=	COL+1
	// 811 COL		=	COL+1
	// 813 COL		=	COL+1
	// 815 COL		=	COL+1
	// 817 COL		=	COL+1
	// 819 COL		=	COL+1
	// 821 COL		=	COL+1
	// 823 COL		=	COL+1
	// 825 COL		=	COL+1
	// 827 COL		=	COL+1
	// 829 COL		=	COL+1
	// 831 COL		=	COL+1
	// 833 COL		=	COL+1
	// 835 COL		=	COL+1
	// 837 COL		=	COL+1
	// 839 COL		=	COL+1
	// 841 COL		=	COL+1
	// 843 COL		=	COL+1
	// 845 COL		=	COL+1
	// 847 COL		=	COL+1
	// 849 COL		=	COL+1
	// 851 COL		=	COL+1
	// 853 COL		=	COL+1
	// 855 COL		=	COL+1
	// 857 COL		=	COL+1
	// 859 COL		=	COL+1
	// 861 COL		=	COL+1
	// 863 COL		=	COL+1
	// 865 COL		=	COL+1
	// 867 COL		=	COL+1
	// 869 COL		=	COL+1
	// 871 COL		=	COL+1
	// 873 COL		=	COL+1
	// 875 COL		=	COL+1
	// 877 COL		=	COL+1
	// 879 COL		=	COL+1
	// 881 COL		=	COL+1
	// 883 COL		=	COL+1
	// 885 COL		=	COL+1
	// 887 COL		=	COL+1
	// 889 COL		=	COL+1
	// 891 COL		=	COL+1
	// 893 COL		=	COL+1
	// 895 COL		=	COL+1
	// 897 COL		=	COL+1
	// 899 COL		=	COL+1
	// 901 COL		=	COL+1
	// 903 COL		=	COL+1
	// 905 COL		=	COL+1
	// 907 COL		=	COL+1
	// 909 COL		=	COL+1
	// 911 COL		=	COL+1
	// 913 COL		=	COL+1
	// 915 COL		=	COL+1
	// 917 COL		=	COL+1
	// 919 COL		=	COL+1
	// 921 COL		=	COL+1
	// 923 COL		=	COL+1
	// 925 COL		=	COL+1
	// 927 COL		=	COL+1
	// 929 COL		=	COL+1
	// 931 COL		=	COL+1
	// 933 COL		=	COL+1
	// 935 COL		=	COL+1
	// 937 COL		=	COL+1
	// 939 COL		=	COL+1
	// 941 COL		=	COL+1
	// 943 COL		=	COL+1
	// 945 COL		=	COL+1
	// 947 COL		=	COL+1
	// 949 COL		=	COL+1
	// 951 COL		=	COL+1
	// 953 COL		=	COL+1
	// 955 COL		=	COL+1
	// 957 COL		=	COL+1
	// 959 COL		=	COL+1
	// 961 COL		=	COL+1
	// 963 COL		=	COL+1
	// 965 COL		=	COL+1
	// 967 COL		=	COL+1
	// 969 COL		=	COL+1
	// 971 COL		=	COL+1
	// 973 COL		=	COL+1
	// 975 COL		=	COL+1
	// 977 COL		=	COL+1
	// 979 COL		=	COL+1
	// 981 COL		=	COL+1
	// 983 COL		=	COL+1
	// 985 COL		=	COL+1
	// 987 COL		=	COL+1
	// 989 COL		=	COL+1
	// 991 COL		=	COL+1
	// 993 COL		=	COL+1
	// 995 COL		=	COL+1
	// 997 COL		=	COL+1
	// 999 COL		=	COL+1
	// 1001 COL		=	COL+1
	// 1003 COL		=	COL+1
	// 1005 COL		=	COL+1
	// 1007 COL		=	COL+1
	// 1009 COL		=	COL+1
	// 1011 COL		=	COL+1
	// 1013 COL		=	COL+1
	// 1015 COL		=	COL+1
	// 1017 COL		=	COL+1
	// 1019 COL		=	COL+1
	// 1021 COL		=	COL+1
	// 1023 COL		=	COL+1
	// 1025 COL		=	COL+1
	// 1027 COL		=	COL+1
	// 1029 COL		=	COL+1
	// 1031 COL		=	COL+1
	// 1033 COL		=	COL+1
	// 1035 COL		=	COL+1
	// 1037 COL		=	COL+1
	// 1039 COL		=	COL+1
	// 1041 COL		=	COL+1
	// 1043 COL		=	COL+1
	// 1045 COL		=	COL+1
	// 1047 COL		=	COL+1
	// 1049 COL		=	COL+1
	// 1051 COL		=	COL+1
	// 1053 COL		=	COL+1
	// 1055 COL		=	COL+1
	// 1057 COL		=	COL+1
	// 1059 COL		=	COL+1
	// 1061 COL		=	COL+1
	// 1063 COL		=	COL+1
	// 1065 COL		=	COL+1
	// 1067 COL		=	COL+1
	// 1069 COL		=	COL+1
	// 1071 COL		=	COL+1
	// 1073 COL		=	COL+1
	// 1075 COL		=	COL+1
	// 1077 COL		=	COL+1
	// 1079 COL		=	COL+1
	// 1081 COL		=	COL+1
	// 1083 COL		=	COL+1
	// 1085 COL		=	COL+1
	// 1087 COL		=	COL+1
	// 1089 COL		=	COL+1
	// 1091 COL		=	COL+1
	// 1093 COL		=	COL+1
	// 1095 COL		=	COL+1
	// 1097 COL		=	COL+1
	// 1099 COL		=	COL+1
	// 1101 COL		=	COL+1
	// 1103 COL		=	COL+1
	// 1105 COL		=	COL+1
	// 1107 COL		=	COL+1
	// 1109 COL		=	COL+1
	// 1111 COL		=	COL+1
	// 1113 COL		=	COL+1
	// 1115 COL		=	COL+1
	// 1117 COL		=	COL+1
	// 1119 COL		=	COL+1
	// 1121 COL		=	COL+1
	// 0 ;----------------------------------------------------------------------------
	// 0 ;=================
	// 0 ;* RGB data tables
	// 0 ;=================
	// 0 ;* Note: The VGA gun value range is 0 .. 63 (6 bits). RGB data extracted
	// 0 ;*       from Deluxe Paint LBM files should be /4 to be scaled correctly.
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;0
	// 0 ;1
	// 0 ;2
	// 0 ;3
	// 0 ;4
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;8
	// 0 ;9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;===========================
	// 0 ;===========================
	// 0 ;* subset of standard EGA colours (0 .. 4)
	// 0 ;0
	// 0 ;1
	// 0 ;2
	// 0 ;3
	// 0 ;4
	// 0 ;* external panel text colours (5 .. 7)
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;* special night colours (8 .. 23)
	// 0 ;8
	// 0 ;9
	// 0 ;10
	// 0 ;11
	// 0 ;12
	// 0 ;13
	// 0 ;14
	// 0 ;15
	// 0 ;16
	// 0 ;17
	// 0 ;18
	// 0 ;19
	// 0 ;20
	// 0 ;21
	// 0 ;22
	// 0 ;23
	// 0 ;* general purpose visual colours (24 .. 70)
	// 0 ;24
	// 0 ;25
	// 0 ;26
	// 0 ;27
	// 0 ;28
	// 0 ;29
	// 0 ;30
	// 0 ;31
	// 0 ;32
	// 0 ;33
	// 0 ;34
	// 0 ;35
	// 0 ;36
	// 0 ;37
	// 0 ;38
	// 0 ;39
	// 0 ;40
	// 0 ;41
	// 0 ;42
	// 0 ;43
	// 0 ;44
	// 0 ;45
	// 0 ;46
	// 0 ;47
	// 0 ;48
	// 0 ;49
	// 0 ;50
	// 0 ;51
	// 0 ;52
	// 0 ;53
	// 0 ;54
	// 0 ;55
	// 0 ;56
	// 0 ;57
	// 0 ;58
	// 0 ;59
	// 0 ;60
	// 0 ;61
	// 0 ;62
	// 0 ;63
	// 0 ;64
	// 0 ;65
	// 0 ;66
	// 0 ;67
	// 0 ;68
	// 0 ;69
	// 0 ;70
	// 0 ;71
	// 0 ;72
	// 0 ;* special visual colours (73 .. 79)
	// 0 ;73
	// 0 ;74
	// 0 ;75
	// 0 ;76
	// 0 ;77
	// 0 ;78
	// 0 ;79
	// 0 ;* visual hill colours (80 .. 95)
	// 0 ;80
	// 0 ;81
	// 0 ;82
	// 0 ;83
	// 0 ;84
	// 0 ;85
	// 0 ;86
	// 0 ;87
	// 0 ;88
	// 0 ;89
	// 0 ;90
	// 0 ;91
	// 0 ;92
	// 0 ;93
	// 0 ;94
	// 0 ;95
	// 0 ;* visual sky colours (96 .. 111)
	// 0 ;96
	// 0 ;97
	// 0 ;98
	// 0 ;99
	// 0 ;100
	// 0 ;101
	// 0 ;102
	// 0 ;103
	// 0 ;104
	// 0 ;105
	// 0 ;106
	// 0 ;107
	// 0 ;108
	// 0 ;109
	// 0 ;110
	// 0 ;111
	// 0 ;* moving map hill colours (112 .. 127)
	// 0 ;112
	// 0 ;113
	// 0 ;114
	// 0 ;115
	// 0 ;116
	// 0 ;117
	// 0 ;118
	// 0 ;119
	// 0 ;120
	// 0 ;121
	// 0 ;122
	// 0 ;123
	// 0 ;124
	// 0 ;125
	// 0 ;126
	// 0 ;127
	// 0 ;* panel / instrument / HUD colours (128 .. 141)
	// 0 ;128
	// 0 ;129
	// 0 ;130
	// 0 ;131
	// 0 ;132
	// 0 ;133
	// 0 ;134
	// 0 ;135
	// 0 ;136
	// 0 ;137
	// 0 ;138
	// 0 ;139
	// 0 ;140
	// 0 ;141
	// 0 ;* extra panel colours (142 .. 143)
	// 0 ;142
	// 0 ;143
	// 0 ;* moving map colours (144 .. 158)
	// 0 ;144
	// 0 ;145
	// 0 ;146
	// 0 ;147
	// 0 ;148
	// 0 ;149
	// 0 ;150
	// 0 ;151
	// 0 ;152
	// 0 ;153
	// 0 ;154
	// 0 ;155
	// 0 ;156
	// 0 ;157
	// 0 ;158
	// 0 ;* CRT colours (159 .. 175)
	// 0 ;159
	// 0 ;160
	// 0 ;161
	// 0 ;162
	// 0 ;163
	// 0 ;164
	// 0 ;165
	// 0 ;166
	// 0 ;167
	// 0 ;168
	// 0 ;169
	// 0 ;170
	// 0 ;171
	// 0 ;172
	// 0 ;173
	// 0 ;174
	// 0 ;175
	// 0 ;* panel colours (176 .. 255)
	// 0 ;----------------------
	// 0 ;* VGA palette overlays
	// 0 ;----------------------
	// 0 ;* standard panel colours (176 .. 255)
	// 0 ;176
	// 0 ;177
	// 0 ;178
	// 0 ;179
	// 0 ;180
	// 0 ;181
	// 0 ;182
	// 0 ;183
	// 0 ;184
	// 0 ;185
	// 0 ;186
	// 0 ;187
	// 0 ;188
	// 0 ;189
	// 0 ;190
	// 0 ;191
	// 0 ;192
	// 0 ;193
	// 0 ;194
	// 0 ;195
	// 0 ;196
	// 0 ;197
	// 0 ;198
	// 0 ;199
	// 0 ;200
	// 0 ;201
	// 0 ;202
	// 0 ;203
	// 0 ;204
	// 0 ;205
	// 0 ;206
	// 0 ;207
	// 0 ;208
	// 0 ;209
	// 0 ;210
	// 0 ;211
	// 0 ;212
	// 0 ;213
	// 0 ;214
	// 0 ;215
	// 0 ;216
	// 0 ;217
	// 0 ;218
	// 0 ;219
	// 0 ;220
	// 0 ;221
	// 0 ;222
	// 0 ;223
	// 0 ;224
	// 0 ;225
	// 0 ;226
	// 0 ;227
	// 0 ;228
	// 0 ;229
	// 0 ;230
	// 0 ;231
	// 0 ;232
	// 0 ;233
	// 0 ;234
	// 0 ;235
	// 0 ;236
	// 0 ;237
	// 0 ;238
	// 0 ;239
	// 0 ;240
	// 0 ;241
	// 0 ;242
	// 0 ;243
	// 0 ;244
	// 0 ;245
	// 0 ;246
	// 0 ;247
	// 0 ;248
	// 0 ;249
	// 0 ;250
	// 0 ;251
	// 0 ;252
	// 0 ;253
	// 0 ;254
	// 0 ;255
	// 0 ;* standard "look down" colours (176 .. 255)
	// 0 ;176
	// 0 ;177
	// 0 ;178
	// 0 ;179
	// 0 ;180
	// 0 ;181
	// 0 ;182
	// 0 ;183
	// 0 ;184
	// 0 ;185
	// 0 ;186
	// 0 ;187
	// 0 ;188
	// 0 ;189
	// 0 ;190
	// 0 ;191
	// 0 ;192
	// 0 ;193
	// 0 ;194
	// 0 ;195
	// 0 ;196
	// 0 ;197
	// 0 ;198
	// 0 ;199
	// 0 ;200
	// 0 ;201
	// 0 ;202
	// 0 ;203
	// 0 ;204
	// 0 ;205
	// 0 ;206
	// 0 ;207
	// 0 ;208
	// 0 ;209
	// 0 ;210
	// 0 ;211
	// 0 ;212
	// 0 ;213
	// 0 ;214
	// 0 ;215
	// 0 ;216
	// 0 ;217
	// 0 ;218
	// 0 ;219
	// 0 ;220
	// 0 ;221
	// 0 ;222
	// 0 ;223
	// 0 ;224
	// 0 ;225
	// 0 ;226
	// 0 ;227
	// 0 ;228
	// 0 ;229
	// 0 ;230
	// 0 ;231
	// 0 ;232
	// 0 ;233
	// 0 ;234
	// 0 ;235
	// 0 ;236
	// 0 ;237
	// 0 ;238
	// 0 ;239
	// 0 ;240
	// 0 ;241
	// 0 ;242
	// 0 ;243
	// 0 ;244
	// 0 ;245
	// 0 ;246
	// 0 ;247
	// 0 ;248
	// 0 ;249
	// 0 ;250
	// 0 ;251
	// 0 ;252
	// 0 ;253
	// 0 ;254
	// 0 ;255
	// 0 ;* HUD colours
	// 0 ;(should match VGA_HUD)
	// 0 ;DB	0ffh,0ffh,0ffh  Don't know how to add a 5th color
	// 0 ;* ground below clouds
	// 0 ;70
	// 0 ;71
	// 0 ;* ground above clouds
	// 0 ;70
	// 0 ;71
	// 0 ;* clear blue sky
	// 0 ;96
	// 0 ;97
	// 0 ;98
	// 0 ;99
	// 0 ;100
	// 0 ;101
	// 0 ;102
	// 0 ;103
	// 0 ;104
	// 0 ;105
	// 0 ;106
	// 0 ;107
	// 0 ;108
	// 0 ;109
	// 0 ;110
	// 0 ;111
	// 0 ;* overcast sky
	// 0 ;96
	// 0 ;97
	// 0 ;98
	// 0 ;99
	// 0 ;100
	// 0 ;101
	// 0 ;102
	// 0 ;103
	// 0 ;104
	// 0 ;105
	// 0 ;106
	// 0 ;107
	// 0 ;108
	// 0 ;109
	// 0 ;110
	// 0 ;111
	// 0 ;* external panel text colours
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 1)
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 2)
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 3)
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 4)
	// 0 ;6
	// 0 ;7
	// 0 ;* external panel text colours (view = map or explore)
	// 0 ;5
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 1)
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 2)
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 3)
	// 0 ;6
	// 0 ;7
	// 0 ;5 (night 4)
	// 0 ;6
	// 0 ;7
	// 0 ;* preview mode (176 .. 207)
	// 0 ;176
	// 0 ;177
	// 0 ;178
	// 0 ;179
	// 0 ;180
	// 0 ;181
	// 0 ;182
	// 0 ;183
	// 0 ;184
	// 0 ;185
	// 0 ;186
	// 0 ;187
	// 0 ;188
	// 0 ;189
	// 0 ;190
	// 0 ;191
	// 0 ;192
	// 0 ;193
	// 0 ;194
	// 0 ;195
	// 0 ;196
	// 0 ;197
	// 0 ;198
	// 0 ;199
	// 0 ;200
	// 0 ;201
	// 0 ;202
	// 0 ;203
	// 0 ;204
	// 0 ;205
	// 0 ;206
	// 0 ;207
	// 0 ;---------------------------
	// 0 ;---------------------------
	// 0 ;fade buffer
	// 0 ;--------------------------
	// 0 ;* infra-red visual colours
	// 0 ;--------------------------

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


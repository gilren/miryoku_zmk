// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "keymap_optimot.h"

#define XXX &none

#define MIRYOKU_ALPHAS_QWERTY
// #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_OPTIMOT
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_NAV_DEFAULT
// #define MIRYOKU_CLIPBOARD_DEFAULT
#define MIRYOKU_CLIPBOARD_WIN


#define MIRYOKU_LAYER_BASE \
OP_AGRV,               OP_J,              OP_O,                OP_EACU,             OP_B,                OP_F,              OP_D,               OP_L,                  OP_QUOT,           OP_Q,          \
U_MT(LGUI, OP_A),      U_MT(LALT, OP_I),  U_MT(LCTRL, OP_E),   U_MT(LSHFT, OP_U),   OP_COMM,             OP_P,              U_MT(LSHFT, OP_T),  U_MT(LCTRL, OP_S),     U_MT(LALT, OP_R),  U_MT(LGUI, OP_N), \
U_LT(U_BUTTON, OP_K),  U_MT(RALT, OP_Y),  OP_EGRV,             OP_DOT,              OP_W,                OP_G,              OP_C,               OP_M,                  U_MT(RALT, OP_H),  U_LT(U_BUTTON, OP_V),  \
U_NP,                  U_NP,              U_LT(U_MEDIA, ESC),  U_LT(U_NAV, SPACE),  U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, OP_DCIR),  U_NP,              U_NP

// #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_OPTIMOT
// #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM_OPTIMOT
// #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM_OPTIMOT

// #if defined (MIRYOKU_KEYBOARD_CORNE)

// #define MIRYOKU_LAYERMAPPING_BASE( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// HASH      K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  DOLLAR \
// AT_SIGN   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  CARET \
// TAB       K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  U_GAME \
//                         K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_EXTRA( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_TAP( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_BUTTON( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_NAV( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_MOUSE( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_MEDIA( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_NUM( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_SYM( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #define MIRYOKU_LAYERMAPPING_FUN( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// &kp ENTER  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX        K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                      K32  K33  K34       K35  K36  K37


// #endif




// #define MIRYOKU_LAYER_BASE \
// OP_AGRV,               OP_J,              OP_O,                OP_EACU,             OP_B,                OP_F,              OP_D,               OP_L,                  OP_QUOT,           OP_Q,                  \
// U_MT(LGUI, OP_A),      U_MT(LALT, OP_I),  U_MT(LCTRL, OP_E),   U_MT(LSHFT, OP_U),   OP_COMM,             OP_P,              U_MT(LSHFT, OP_T),  U_MT(LCTRL, OP_S),     U_MT(LALT, OP_R),  U_MT(LGUI, OP_N),      \
// U_LT(U_BUTTON, OP_K),  U_MT(RALT, OP_Y),  OP_EGRV,             OP_DOT,              OP_W,                OP_G,              OP_C,               OP_M,                  U_MT(RALT, OP_H),  U_LT(U_BUTTON, OP_V),  \
// U_NP,                  U_NP,              U_LT(U_MEDIA, ESC),  U_LT(U_NAV, SPACE),  U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, OP_DCIR),  U_NP,              U_NP

// #define MIRYOKU_LAYER_TAP \
// OP_AGRV,               OP_J,              OP_O,                OP_EACU,             OP_B,                OP_F,              OP_D,               OP_L,                  OP_QUOT,           OP_Q,                  \
// U_MT(LGUI, OP_A),      U_MT(LALT, OP_I),  U_MT(LCTRL, OP_E),   U_MT(LSHFT, OP_U),   OP_COMM,             OP_P,              U_MT(LSHFT, OP_T),  U_MT(LCTRL, OP_S),     U_MT(LALT, OP_R),  U_MT(LGUI, OP_N),      \
// U_LT(U_BUTTON, OP_K),  U_MT(RALT, OP_Y),  OP_EGRV,             OP_DOT,              OP_W,                OP_G,              OP_C,               OP_M,                  U_MT(RALT, OP_H),  U_LT(U_BUTTON, OP_V),  \
// U_NP,                  U_NP,              U_LT(U_MEDIA, ESC),  U_LT(U_NAV, SPACE),  U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, OP_DCIR),  U_NP,              U_NP

// #define MIRYOKU_LAYER_NUM \
// OP_LBRC,           OP_7,              OP_8,              OP_9,             OP_RBRC,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,       &u_to_U_TAP,         U_BOOT,           \
// OP_PLUS,           OP_4,              OP_5,              OP_6,             OP_HMIN,           U_NA,              &kp LSHFT,         &kp LCTRL,           &kp LALT,            &kp LGUI,         \
// OP_SLSH,           OP_1,              OP_2,              OP_3,             OP_ASTR,           U_NA,              &u_to_U_NUM,       &u_to_U_NAV,         &kp LALT,            U_NA,             \
// U_NP,              U_NP,              OP_COMM,           OP_0,             OP_EQL,            U_NA,              U_NA,              U_NA,                U_NP,                U_NP

// #define MIRYOKU_LAYER_SYM \
// OP_LCBR,           OP_AMPR,           C_AL_EMAIL,        OP_GRV,           OP_RCBR,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,       &u_to_U_TAP,        U_BOOT,            \
// OP_LABK,           OP_DLR,            OP_PERC,           OP_DQUO,          OP_RABK,           U_NA,              &kp LSHFT,         &kp LCTRL,           &kp LALT,           &kp LGUI,          \
// OP_DTIL,           OP_DCIR,           OP_AT,             OP_HASH,          OP_PIPE,           U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,       &kp RALT,           U_NA,              \
// U_NP,              U_NP,              OP_LPRN,           OP_RPRN,          OP_UNDS,           U_NA,              U_NA,              U_NA,                U_NP,               U_NP


// #define MIRYOKU_LAYER_GAME \
// &kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
// &kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
// &kp LCTRL,         &kp Z,             &kp X,             &kp C,             U_MT(N4, G),       U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
// U_NP,              U_NP,              U_LT(U_GAME, ESC), &kp LCTRL,         &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// #define MIRYOKU_LAYER_LIST \
// MIRYOKU_X(BASE,   "Base") \
// MIRYOKU_X(EXTRA,  "Extra") \
// MIRYOKU_X(TAP,    "Tap") \
// MIRYOKU_X(BUTTON, "Button") \
// MIRYOKU_X(NAV,    "Nav") \
// MIRYOKU_X(MOUSE,  "Mouse") \
// MIRYOKU_X(MEDIA,  "Media") \
// MIRYOKU_X(NUM,    "Num") \
// MIRYOKU_X(SYM,    "Sym") \
// MIRYOKU_X(FUN,    "Fun") \
// MIRYOKU_X(GAME,   "Game")

// #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

// #define U_BASE   0
// #define U_EXTRA  1
// #define U_TAP    2
// #define U_BUTTON 3
// #define U_NAV    4
// #define U_MOUSE  5
// #define U_MEDIA  6
// #define U_NUM    7
// #define U_SYM    8
// #define U_FUN    9
// #define U_GAME   10
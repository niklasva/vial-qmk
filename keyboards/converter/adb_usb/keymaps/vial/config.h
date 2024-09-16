/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0xB5, 0xF2, 0x94, 0x09, 0x83, 0x76, 0x8D, 0x53}

#define VIAL_UNLOCK_COMBO_ROWS { 6, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 5, 4 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 2

#define LAYOUT_ext_iso( \
    K35,  K7A,K78,K63,K76, K60,K61,K62,K64, K65,K6D,K67,K6F, K69,K6B,K71,              K7F, \
    K0A,K12,K13,K14,K15,K17,K16,K1A,K1C,K19,K1D,K1B,K18,K33, K72,K73,K74,  K47,K51,K4B,K43, \
    K30,K0C,K0D,K0E,K0F,K11,K10,K20,K22,K1F,K23,K21,K1E,K24, K75,K77,K79,  K59,K5B,K5C,K4E, \
    K39,K00,K01,K02,K03,K05,K04,K26,K28,K25,K29,K27,K2A,                   K56,K57,K58,K45, \
    K38,K32,K06,K07,K08,K09,K0B,K2D,K2E,K2B,K2F,K2C,    K7B,     K3E,      K53,K54,K55,     \
    K36,K3A,K37,        K31,                        K7C,K7D, K3B,K3D,K3C,  K52,    K41,K4C  \
) { \
    { K00,   K01,   K02,   K03, K04,   K05,   K06,   K07   }, \
    { K08,   K09,   K0A,   K0B, K0C,   K0D,   K0E,   K0F   }, \
    { K10,   K11,   K12,   K13, K14,   K15,   K16,   K17   }, \
    { K18,   K19,   K1A,   K1B, K1C,   K1D,   K1E,   K1F   }, \
    { K20,   K21,   K22,   K23, K24,   K25,   K26,   K27   }, \
    { K28,   K29,   K2A,   K2B, K2C,   K2D,   K2E,   K2F   }, \
    { K30,   K31,   K32,   K33, KC_NO, K35,   K36,   K37   }, \
    { K38,   K39,   K3A,   K3B, K3C,   K3D,   K3E,   KC_NO }, \
    { KC_NO, K41,   KC_NO, K43, KC_NO, K45,   KC_NO, K47   }, \
    { KC_NO, KC_NO, KC_NO, K4B, K4C,   KC_NO, K4E,   KC_NO }, \
    { KC_NO, K51,   K52,   K53, K54,   K55,   K56,   K57   }, \
    { K58,   K59,   KC_NO, K5B, K5C,   KC_NO, KC_NO, KC_NO }, \
    { K60,   K61,   K62,   K63, K64,   K65,   KC_NO, K67   }, \
    { KC_NO, K69,   KC_NO, K6B, KC_NO, K6D,   KC_NO, K6F   }, \
    { KC_NO, K71,   K72,   K73, K74,   K75,   K76,   K77   }, \
    { K78,   K79,   K7A,   K7B, K7C,   K7D,   KC_NO, K7F   }  \
}

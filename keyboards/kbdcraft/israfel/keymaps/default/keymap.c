// Copyright 2024 FxStudio <FXS@fx-studio.cn>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,KC_ENT,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_CAPS,
		MO(1), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_SLSH,
		KC_LSFT, KC_LCTL, KC_LALT, KC_LSFT, KC_RSFT, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),
    [1] = LAYOUT(
		KC_GRAVE, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_MINUS,    KC_EQUAL,    KC_DELETE,
		KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_LBRC,     KC_RBRC,     KC_SLASH,
		KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,       KC_QUOTE,
		KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD,     RGB_MOD,     RGB_TOG,
		KC_NO,    KC_NO, KC_NO, KC_NO,                   RGB_SPI,           RGB_SPD, RGB_HUI,     RGB_RMOD,    RGB_HUD),
    [2] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};


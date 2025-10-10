// Copyright 2024 FxStudio <FXS@fx-studio.cn>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LT(1,KC_NUM_LOCK), KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
		KC_P7,            KC_P8,       KC_P9, 
		KC_P4,            KC_P5,       KC_P6,          KC_KP_PLUS, 
		KC_P1,            KC_P2,       KC_P3, 
		KC_P0,            KC_KP_DOT,                   KC_KP_ENTER
        ),
    [1] = LAYOUT(
		KC_NO,     RGB_MOD,   RGB_RMOD, RGB_VAD,
		KC_HOME,   KC_UP,     KC_PGUP,
		KC_LEFT,   KC_NO,     KC_RIGHT, RGB_VAI,
		KC_END,    KC_DOWN,   KC_PGDN,
		KC_INSERT, KC_DELETE, RGB_TOG
    ),
    [2] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO
    )
};


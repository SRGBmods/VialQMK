// Copyright 2024 FxStudio <FXS@fx-studio.cn>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum my_keycodes {
    KC_SPEECH = QK_KB_0,
    KC_SCREENSHOT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_SPEECH, KC_SCREENSHOT, KC_INS, KC_HOME, KC_PGUP, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL, KC_END, KC_PGDN, LT(1,KC_NUM_LOCK), KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 							KC_KP_7,           KC_KP_8,     KC_KP_9, KC_MUTE, KC_MPLY, RGB_MOD, RGB_RMOD, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 								KC_KP_4,           KC_KP_5,     KC_KP_6,        KC_KP_PLUS,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, 							KC_KP_1,           KC_KP_2,     KC_KP_3,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,  						KC_KP_0,           KC_KP_DOT,                   KC_KP_ENTER),
    [1] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,		
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 				KC_NO,     RGB_MOD,   RGB_RMOD, RGB_VAD,
		KC_NO, RGB_TOG, RGB_SAI, RGB_SAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 							KC_HOME,   KC_UP,     KC_PGUP,KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 									KC_LEFT,   KC_NO,      KC_RIGHT, RGB_VAI,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, 										KC_END,    KC_DOWN,     KC_PGDN,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_RMOD, RGB_HUD, 												KC_INSERT, KC_DELETE, RGB_TOG)
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_BRID, KC_BRIU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_HUD, RGB_HUI)  },
    [1] =   { ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO)  }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case KC_SPEECH:
            if (record->event.pressed) { 
				tap_code16(LGUI(KC_H));
			}
            return 0;
        case KC_SCREENSHOT:
            if (record->event.pressed) {
				tap_code16(LGUI(LSFT(KC_S)));
			}
            return 0;
		default:
      		return true;
	}
}

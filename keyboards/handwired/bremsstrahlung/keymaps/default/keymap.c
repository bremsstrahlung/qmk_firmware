// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ Q │ W │ E │
     * ├───┼───┼───┤
     * │ A │ S │ D │
     * ├───┼───┼───┤
     * │ Z │ X │ C │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x3(
        KC_Q,    KC_W,    KC_E,
        KC_A,    KC_S,    KC_D,
        KC_Z,    KC_X,    KC_C
    )
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
	oled_write_P(PSTR("TEST"), false);
	return false;
}
#endif


#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = sapptek_hackpad(
        KC_TAB,   KC_Q,   KC_W,   KC_E,
        KC_A,   KC_S,   KC_D,   KC_F,
        KC_DELETE,   KC_SPACE,   KC_ENTER

    )
};

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_4x4(
        KC_F17,  KC_F18,  KC_F19,  KC_F20,
        KC_INT1, KC_INT2, KC_INT3, KC_INT4,
        KC_F21,  KC_F22,  KC_F23,  KC_F24,
        KC_F13,  KC_F14,  KC_F15,  KC_F16
    )
};

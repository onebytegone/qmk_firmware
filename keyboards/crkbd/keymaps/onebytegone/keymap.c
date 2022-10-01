/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>


#define CK_DSKL LCTL(KC_LEFT) // macOS to left desktop
#define CK_DSKR LCTL(KC_RIGHT)  // macOS to right desktop

// (B)eginning (O)f (L)ine, (E)nd (O)f (L)ine
#define MAC_BOL LGUI(KC_LEFT)
#define MAC_EOL LGUI(KC_RIGHT)
#define WIN_BOL KC_HOME
#define WIN_EOL KC_END

// (B)eginning (O)f (W)ord, (E)nd (O)f (W)ord, (B)eginning of (N)ext (W)ord
#define MAC_BOW LALT(KC_LEFT)
#define MAC_EOW LALT(KC_RIGHT)
#define WIN_BOW LCTL(KC_LEFT)
#define WIN_BNW LCTL(KC_RIGHT)

// (B)eginning (O)f (D)ocument, (E)nd (O)f (D)ocument
#define MAC_BOD LGUI(KC_UP)
#define MAC_EOD LGUI(KC_DOWN)

#define L_BASE 0
#define L_LOWER 1
#define L_RAISE 2
#define L_ADJUST 3
#define L_MC 4

enum custom_keycodes {
  MC = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_SPC,     KC_SPC,   MO(1), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [L_LOWER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, KC_BSPC,    XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [L_RAISE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, XXXXXXX,     KC_ENT, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [L_ADJUST] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_F11,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_VOLU,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      MAC_BOL, MAC_EOD, MAC_BOD, MAC_EOL, XXXXXXX, KC_VOLD,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,      MC, XXXXXXX, XXXXXXX, XXXXXXX, EEP_RST,                      MAC_BOW, MAC_EOW, KC_MPRV ,KC_MNXT ,KC_MPLY, KC_MUTE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, XXXXXXX,    XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [L_MC] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_1,    KC_2,    KC_Q,    KC_W,    KC_E,    KC_R,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     MC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_3,  KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,    KC_Z,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,    KC_X,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, KC_LSFT,  KC_SPC,       KC_C,    KC_V,    KC_B \
                                      //`--------------------------'  `--------------------------'

  )

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, L_LOWER, L_RAISE, L_ADJUST);
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Nav"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Symbl"), false);
            break;
        case L_ADJUST:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
        case L_MC:
            oled_write_ln_P(PSTR("Minecraft"), false);
            break;
    }

    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MC:
      if (record->event.pressed) {
        layer_invert(L_MC);
      }
      return false;
  }

  return true;
}
#endif // OLED_ENABLE

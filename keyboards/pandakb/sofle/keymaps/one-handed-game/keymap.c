#include QMK_KEYBOARD_H

enum sofle_layers {
    L_BASE,
    L_DUAL_RUN,
    L_QWERTY,
    LAYER_COUNT,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [L_BASE] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_GRAVE,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LBRC ,KC_RBRC ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_SCLN ,KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┼========┐       ┌========┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_COMM ,KC_DOT  ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,QK_LOCK ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //└────────┴────────┼────────┼────────┼────────┼────────┼========┤       ├========┼────────┼────────┼────────┼────────┼────────┴────────┘
                             KC_LGUI ,KC_LALT ,KC_LCTL ,KC_LSFT ,KC_SPC  ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
        //                  └────────┴────────┴────────┴────────┴────────┘       └────────┴────────┴────────┴────────┴────────┘
    ),

    [L_DUAL_RUN] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_GRAVE,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LBRC ,KC_RBRC ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_SCLN ,KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┼========┐       ┌========┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_COMM ,KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,QK_LOCK ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        //└────────┴────────┼────────┼────────┼────────┼────────┼========┤       ├========┼────────┼────────┼────────┼────────┼────────┴────────┘
                             KC_LGUI ,KC_LALT ,KC_LCTL ,KC_LSFT ,KC_SPC  ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
        //                  └────────┴────────┴────────┴────────┴────────┘       └────────┴────────┴────────┴────────┴────────┘
    ),

    [L_QWERTY] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┐
           KC_GRAVE,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                          KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_BSPC ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                          KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_BSPC ,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                          KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,XXXXXXX ,
        //├────────┼────────┼────────┼────────┼────────┼────────┼========┐       ┌========┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,XXXXXXX ,        XXXXXXX ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_LSFT ,
        //└────────┴────────┼────────┼────────┼────────┼────────┼========┤       ├========┼────────┼────────┼────────┼────────┼────────┴────────┘
                             SH_TOGG ,KC_LCTL ,KC_LALT ,KC_LGUI ,KC_SPC  ,        KC_ENT ,XXXXXXX ,XXXXXXX ,XXXXXXX ,SH_TOGG
        //                  └────────┴────────┴────────┴────────┴────────┘       └────────┴────────┴────────┴────────┴────────┘
    ),

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case SH_TOGG:
                if (is_swap_hands_on()) {
                    rgb_matrix_set_color_all(RGB_GREEN);
                } else {
                    rgb_matrix_set_color_all(RGB_RED);
                }
                break;
        }
    }

    return true;
}

uint8_t encoderState = 0;

#define MAX_ENCODER_STATE 2

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            if (encoderState >= MAX_ENCODER_STATE) {
                encoderState = 0;
            } else {
                encoderState++;
            }
        } else {
            if (encoderState <= 0) {
                encoderState = MAX_ENCODER_STATE;
            } else {
                encoderState--;
            }
        }
    }

    cancel_key_lock();
    swap_hands_off();


    if (encoderState < LAYER_COUNT) {
        layer_move(encoderState);
    }

    if (encoderState == 1) {
        rgb_matrix_set_color_all(RGB_CYAN);
    } else if (encoderState == 2) {
        rgb_matrix_set_color_all(RGB_GREEN);
    } else if (encoderState == 3) {
        rgb_matrix_set_color_all(RGB_ORANGE);
    } else if (encoderState == 4) {
        rgb_matrix_set_color_all(RGB_BLUE);
    } else if (encoderState == 5) {
        rgb_matrix_set_color_all(RGB_PURPLE);
    } else if (encoderState == 6) {
        rgb_matrix_set_color_all(RGB_RED);
    } else if (encoderState == 7) {
        rgb_matrix_set_color_all(RGB_WHITE);
    } else {
        rgb_matrix_set_color_all(RGB_OFF);
    }

    return false;
}

#endif

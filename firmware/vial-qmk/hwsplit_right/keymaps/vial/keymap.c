#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,
    KC_RALT, KC_RGUI, KC_RCTL,
    KC_LEFT, KC_DOWN, KC_RGHT,
    KC_SPC
),

[_FN] = LAYOUT(
    _______, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______,
    _______
)

};
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  LAYOUT_60_iso_4th_row_all_1u_split_bs(
    KC_ESC,   KC_1,     KC_2,           KC_3,           KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,         KC_DEL,   KC_BSPC,
    KC_TAB,             KC_Q,           KC_W,           KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,        KC_RBRC,
    MO(2),              KC_A,           KC_S,           KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,        KC_NUHS,  KC_ENT,
    KC_LSFT,  KC_NUBS,  KC_Z,           KC_X,           KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  RSFT_T(KC_GRV), KC_UP,    MO(1),
    KC_LCTL,  KC_LGUI,                  KC_LALT,                            KC_SPC,                                 KC_RALT,  KC_RCTL,  KC_LEFT,        KC_DOWN,  KC_RGHT
  ),

  LAYOUT_60_iso_4th_row_all_1u_split_bs(
    QK_BOOT,  KC_F1,    KC_F2,          KC_F3,          KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,         KC_F13,   KC_F14,
    _______,            _______,        _______,        _______,  _______,  _______,  _______,  KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_F15,   KC_F16,         KC_F17,
    _______,            _______,        _______,        _______,  _______,  _______,  _______,  KC_INS,   KC_HOME,  KC_PGUP,  KC_F19,   KC_F20,         KC_F21,   KC_F18,
    _______,  _______,  _______,        _______,        _______,  _______,  _______,  _______,  KC_MUTE,  KC_END,   KC_PGDN,  KC_F22,   KC_F23,         KC_VOLU,  _______,
    _______,  _______,                  _______,                            KC_MPLY,                                A(KC_F4), KC_F24,   KC_MPRV,        KC_VOLD,  KC_MNXT

  ),

  LAYOUT_60_iso_4th_row_all_1u_split_bs(
    QK_BOOT,  KC_F1,    KC_F2,          KC_F3,          KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,         KC_F13,   KC_F14,
    _______,            _______,        C(G(KC_D)),     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,
    _______,            C(G(KC_LEFT)),  C(G(KC_RIGHT)), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  _______,
    _______,  _______,  _______,        C(G(KC_F4)),    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  _______,
    _______,  _______,                  _______,                            KC_MPLY,                                _______,  _______,  _______,        _______,  _______

  )
};

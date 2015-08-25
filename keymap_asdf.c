#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
  KEYMAP(ESC,   1,    2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL, BSPC, 1, \
         TAB,   Q,    W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC, RBRC,BSLS, 1, \
         FN2,   A,    S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT, NUHS,ENT,  1, \
         LSFT,  NUBS, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, UP,  RSFT, 1, \
         LCTL,  FN0,  LALT,LGUI,FN1, BSPC,X,   SPC, DEL, RALT,RCTL,LEFT, DOWN,RIGHT,1),

    /* 1: FN 1 */
    KEYMAP(GRV,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  DEL, 1, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,1, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MYCM, TRNS, TRNS, TRNS, TRNS, RGHT, TRNS, ENT, 1, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PGUP, TRNS,1, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, PGDN, END, 1),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_TAP_KEY(1, KC_ESC),
};
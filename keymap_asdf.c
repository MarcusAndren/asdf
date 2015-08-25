#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
  KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,DEL, 	\
         TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,ENT, PGUP, \
         FN2,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,TRNS,PGDN, \
         LSFT, NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP, 	HOME, \
         LCTL, FN0, LALT,TRNS,TRNS,SPC, TRNS,TRNS,TRNS,RALT,RCTL,FN1, LEFT,DOWN,RIGHT),

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
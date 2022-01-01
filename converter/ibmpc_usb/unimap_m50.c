/*
Copyright 2016 Jun Wako <wakojun@gmail.com>

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
Example usage: make -f Makefile.atmega32u4 KEYMAP=m50
*/
#include "unimap_trans.h"
#include <stdint.h>
#include <avr/pgmspace.h>
#include "unimap.h"
#include "action.h"
#include "ibmpc_usb.h"


#define AC_FN0 ACTION_LAYER_TAP_KEY(1, KC_APPLICATION)

#define UNIMAP_M50( \
    K04, K1A, K08,    K15, K31, K18,    K0C, K12, K33, K63, \
    K1D, K1B, K06,    K19, K28, K10,    K36, K0F, K37, K38, \
    K1E, K1F, K20,    K21, K43, K24,    K25, K26, K27, K34, \
    K79, K3A, K3B,    K22, K42, K23,    K2E, K41, K2F, K2D, \
    K78, K7A, K3C,    K17, K2A, K1C,    K30, K3F, K40, K0B \
) { \
    { AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_##K04, AC_NO,    AC_##K06, AC_NO,      /* 00-07 */ \
      AC_##K08, AC_NO,    AC_NO,    AC_NO,    AC_##K0C, AC_NO,    AC_NO,    AC_##K0F }, /* 08-0F */ \
    { AC_##K10, AC_NO,    AC_##K12, AC_NO,    AC_NO,    AC_##K15, AC_NO,    AC_NO,      /* 10-17 */ \
      AC_##K18, AC_##K19, AC_NO,    AC_##K1B, AC_NO,    AC_##K1D, AC_##K1E, AC_##K1F }, /* 18-1F */ \
    { AC_##K20, AC_##K21, AC_##K22, AC_##K23, AC_##K24, AC_##K25, AC_##K26, AC_##K27,   /* 20-27 */ \
      AC_##K28, AC_NO,    AC_##K2A, AC_NO,    AC_NO,    AC_##K2D, AC_##K2E, AC_##K2F }, /* 28-2F */ \
    { AC_##K30, AC_##K31, AC_NO,    AC_##K33, AC_##K34, AC_NO,    AC_##K36, AC_##K37,   /* 30-37 */ \
      AC_##K38, AC_NO,    AC_##K3A, AC_##K3B, AC_##K3C, AC_NO,    AC_NO,    AC_##K3F }, /* 38-3F */ \
    { AC_##K40, AC_##K41, AC_##K42, AC_##K43, AC_NO,    AC_NO,    AC_NO,    AC_NO,      /* 40-47 */ \
      AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO    }, /* 48-4F */ \
    { AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,      /* 50-57 */ \
      AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,   }, /* 58-5F */ \
    { AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,      /* 60-67 */ \
      AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,   }, /* 68-6F */ \
    { AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,      /* 70-77 */ \
      AC_##K78, AC_##K79, AC_##K7A, AC_NO,    AC_NO,    AC_NO,    AC_NO,    AC_NO,   }  /* 78-7F */ \
}

const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
    [0] = UNIMAP_M50(
    F1, F2, F3, F4, F5, F6, F7, F8, F9, F10,
    1,  2,  3,  4,  5,  6,  7,  8,  9,  0,
    Q,  W,  E,  R,  T,  Y,  U,  I,  O,  P,
    A,  S,  D,  F,  G,  H,  J,  K,  L,  SCLN,
    Z,  X,  C,  V,  B,  N,  M,  COMM, DOT, BTLD
    ),
  };
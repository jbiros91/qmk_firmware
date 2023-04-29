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

/**
 * LAYERS
 */
#define _BASE  0
#define _NUMBERS 1
#define _FUNCTION 2
#define _NAVIGATION 3

/**
 * LAYER SWITCHING KEYCODES
 */
#define LT_SPC LT(_NUMBERS, KC_SPC)     // Number Layer     / Space Key     (Left-side)
#define LT_BSPC LT(_NUMBERS, KC_BSPC)   // Number Layer     / Backspace Key (Right-side)

#define LT_ESC LT(_FUNCTION, KC_ESC)    // Function Layer   / Escape Key    (Left-side)
#define LT_DEL LT(_FUNCTION, KC_DEL)    // Function Layer   / Delete Key    (Right-side)

#define LT_TAB LT(_NAVIGATION, KC_TAB)  // Navigation Layer / Tabulator Key (Left-side)
#define OSL_FUNCTION_LAYER OSL(_FUNCTION)

/**
 * MOD-TAP KEYCODES
 */
// Mac Os home row
// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

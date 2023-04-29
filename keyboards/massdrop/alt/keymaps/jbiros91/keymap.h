/* Copyright 2020 jbiros91
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


//========================================================== CONFIGURABLE DEFAULTS ==========================================================
extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color;

// These are just to make it neater to use builtin HSV values in the keymap
#define RED {HSV_RED}
#define CORAL {HSV_CORAL}
#define ORANGE {HSV_ORANGE}
#define GOLDEN {HSV_GOLDENROD}
#define GOLD {HSV_GOLD}
#define YELLOW {HSV_YELLOW}
#define CHART {HSV_CHARTREUSE}
#define GREEN {HSV_GREEN}
#define SPRING {HSV_SPRINGGREEN}
#define TURQ {HSV_TURQUOISE}
#define TEAL {HSV_TEAL}
#define CYAN {HSV_CYAN}
#define AZURE {HSV_AZURE}
#define BLUE {HSV_BLUE}
#define PURPLE {HSV_PURPLE}
#define MAGENT {HSV_MAGENTA}
#define PINK {HSV_PINK}

enum alt_keycodes {
   U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
   U_T_AGCR,              //USB Toggle Automatic GCR control
   DBG_TOG,               //DEBUG Toggle On / Off
   DBG_MTRX,              //DEBUG Toggle Matrix Prints
   DBG_KBD,               //DEBUG Toggle Keyboard Prints
   DBG_MOU,               //DEBUG Toggle Mouse Prints
   MD_BOOT,               //Restart into bootloader after hold timeout
};

/**
* LAYERS
*/
#define _QWERTY  0
#define _FUNCTION 1

/**
* LAYER SWITCHING KEYCODES
*/
#define LT_ESC LT(_FUNCTION, KC_ESC)
#define LT_SPC LT(_FUNCTION, KC_SPC)
#define OSL_FUNCTION_LAYER OSL(_FUNCTION)

/**
* MOD-TAP KEYCODES
*/
//#define MT_TAB MT(MOD_LCTL, KC_TAB)

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

// MODIFIERS
/**
* MODIFIERS
*/
#define MAC_QUIT LGUI(KC_Q)
#define MAC_CLOSE LGUI(KC_W)
#define MAC_COPY LGUI(KC_C)
#define MAC_PASTE LGUI(KC_V)
#define MAC_BACK LGUI(KC_Z)
#define MAC_SEARCH LGUI(KC_F)

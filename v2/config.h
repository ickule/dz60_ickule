/* Copyright 2022 dztech
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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x445A  // "DZ"
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0002
#define MANUFACTURER    KBDFans
#define PRODUCT         DZ60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { F0, B3, F6, F4, F5 }
#define MATRIX_COL_PINS { F1, D0, D1, D2, D3, D5, D4, D6, D7, B4, F7, C7, C6, B6, B5 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW
#define LED_CAPS_LOCK_PIN E6
#define LED_PIN_ON_STATE 1

#define RGB_DI_PIN B2
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_EFFECT_RAINBOW_MOOD + 6)
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 10
#define RGBLIGHT_ANIMATIONS
#endif
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/* Add 1000Hz polling rate default=10*/
#define USB_POLLING_INTERVAL_MS 1

/* Increase the number of keys returned per scan. Default = 4 */
#define QMK_KEYS_PER_SCAN 6

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* VIA related config */
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2

/* Turns RBG ligts off at boot */
#define RGBLIGHT_DEFAULT_VAL 0

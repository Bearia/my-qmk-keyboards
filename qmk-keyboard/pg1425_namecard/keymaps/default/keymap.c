/* Copyright 2019 shikamiya
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

enum layers {
  _NUMBER,
  _FUNCTION
};

#define _FN MO(_FUNCTION)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*  NUMBER
   * ,--------------------.
   * | _FN  | PMNS | PPLS |
   * |------+------+------|
   * |  P7  |  P8  |  P9  |
   * |------+------+------|
   * |  P4  |  P5  |  P6  |
   * |------+------+------|
   * |  P1  |  P2  |  P3  |
   * |------+------+------|
   * |  P0  | PDOT | PENT |
   * `--------------------'
   */

  [_NUMBER] = LAYOUT( \
    _FN,    KC_PMNS, KC_PPLS, \
    KC_P7,  KC_P8, KC_P9, \
    KC_P4,  KC_P5, KC_P6, \
    KC_P1,  KC_P2, KC_P3, \
    KC_P0,  KC_PDOT, KC_PENT \
  ),

  /*  FUNCTION
   * ,--------------------.
   * |      | PSLS | PAST |
   * |------+------+------|
   * | NLCK |      |      |
   * |------+------+------|
   * |      |      |      |
   * |------+------+------|
   * |      |      |      |
   * |------+------+------|
   * |      |      |      |
   * `--------------------'
   */

  [_FUNCTION] = LAYOUT( \
    _______, KC_PSLS, KC_PAST, \
    KC_NLCK, _______, _______, \
    _______, _______, _______, \
    _______, _______, _______, \
    _______, _______, _______ \
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
#include QMK_KEYBOARD_H

enum layers {
     _MAIN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT_ortho_1x3(
     KC_X, KC_C, KC_V
  )
};

void keyboard_post_init_user(void) {
  #ifdef RGBLIGHT_ENABLE
  rgblight_set_effect_range(2, 1);
  rgblight_sethsv_noeeprom(185, 255, 255);
  rgblight_mode_noeeprom(RGBLIGHT_EFFECT_BREATHING + 2);
  rgblight_set();
  #endif
}

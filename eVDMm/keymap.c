#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_245_245,
  HSV_74_255_206,
  HSV_152_255_255,
  HD_120_MM,
  HD_380_MM,
  HD_EAGLE_500,
  HD_EAGLE_NAPALM,
  HD_EAGLE_CLUSTER,
  HD_EAGLE_110_PODS,
  HD_ORC_STRIKE,
  HD_ORB_LASER,
  HD_ORB_AIRBURST,
  HD_ORB_WALKER,
  HD_EAGLE_STRIKE,
  HD_ROCKET_SENTRY,
  HD_SEAF_ART,
  HD_RESUPPLY,
  HD_ARC_THROWER,
  HD_AMR_RIFLE,
  HD_AUTO_CANNON,
  HD_GATLING_SENTRY,
  HD_GUARD_DOG,
  HD_GUARD_ROVER,
  HD_HELL_BOMB,
  HD_TESLA_TOWER,
  HD_ORBITAL_EMP,
  HD_QUASAR_CANNON,
  HD_JUMP_PACK,
  HD_REINFORCE,
  HD_EAGLE_STRAFE,
  HD_MACHINE_GUN,
  HD_DOG_BREATH,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  LED_TOG_KEY,
  LOCK_COMBO
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_BSPC,                                        KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    OSL(2),         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LM(1,MOD_LALT),                                 TO(1),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MT(MOD_LCTL, KC_TAB),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_HYPR,                                                                        KC_MEH,         KC_H,           KC_J,           KC_K,           KC_L,           LT(2,KC_SCLN),  MT(MOD_LGUI, KC_QUOTE),
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_RIGHT_SHIFT, 
    MO(1),          KC_MS_BTN3,     KC_LEFT_GUI,    KC_UP,          KC_DOWN,        MT(MOD_LALT, KC_APPLICATION),                                                                                                TD(DANCE_2),    KC_LEFT,        KC_RIGHT,       KC_LBRC,        KC_RBRC,        KC_ENTER,       
    TD(DANCE_0),    KC_ENTER,       TD(DANCE_1),                    KC_RIGHT_ALT,   TD(DANCE_3),    KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       MU_TOGG,                                                                        KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_MINUS,       
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_LEFT,        KC_1,           KC_2,           KC_3,           MT(MOD_LCTL, KC_BSLS),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       HSV_0_245_245,  HSV_74_255_206, HSV_152_255_255,RGB_MODE_FORWARD,                                                                                                KC_TRANSPARENT, KC_RIGHT,       KC_DOT,         KC_0,           KC_EQUAL,       KC_LEFT_ALT,    
    RGB_VAD,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_KP_ENTER,    KC_TRANSPARENT, RGB_HUI
  ),
  [2] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),                                  LCTL(KC_RIGHT), KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_HOME,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_END,         KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_HOME,        KC_TRANSPARENT, KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_TRANSPARENT, KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_DELETE,      KC_HOME,        
    KC_AT,          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       KC_RBRC,        KC_BSLS,        
    KC_HASH,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, KC_LEFT_CTRL,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_LEFT_ALT,    TD(DANCE_4),    KC_SPACE
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_28,    ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_AMPR,        KC_TRANSPARENT,                                 KC_NO,          ST_MACRO_33,    ST_MACRO_34,    KC_UP,          ST_MACRO_35,    LGUI(KC_P),     KC_BSLS,        
    KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_PERC,        DM_REC1,                                                                        DM_REC2,        KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_ENTER,       
    KC_LEFT_SHIFT,  KC_F1,          KC_HASH,        KC_LBRC,        KC_RBRC,        KC_PIPE,                                        KC_TRANSPARENT, LCTL(LSFT(KC_LEFT)),KC_TRANSPARENT, LCTL(LSFT(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DM_REC1,        DM_REC2,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, ST_MACRO_36,    ST_MACRO_37
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MU_NEXT,        QK_MUSIC_ON,    QK_MUSIC_OFF,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY,                                 LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, 
    LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY,                                 LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, 
    LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY,                                                                 LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, 
    LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY,                                 LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, 
    LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY,                                                                                                 LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY, 
    TO(0), LED_TOG_KEY, LED_TOG_KEY,                 LED_TOG_KEY, LED_TOG_KEY, LED_TOG_KEY
  ),
};
const uint16_t PROGMEM combo0[] = { KC_RIGHT_ALT, KC_SPACE, KC_LEFT, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_LEFT_ALT, KC_HOME, COMBO_END};

const uint16_t PROGMEM C_HD_AMR_RIFLE[] = { KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM C_HD_AUTO_CANNON[] = { KC_A, KC_C, COMBO_END};
const uint16_t PROGMEM C_HD_120_MM[] = { KC_AT, KC_1, COMBO_END};
const uint16_t PROGMEM C_HD_380_MM[] = { KC_AT, KC_2, COMBO_END};
const uint16_t PROGMEM C_HD_EAGLE_500[] = { KC_E, KC_5, COMBO_END};
const uint16_t PROGMEM C_HD_EAGLE_STRIKE[] = { KC_E, KC_1, COMBO_END};
const uint16_t PROGMEM C_HD_EAGLE_STRAFE[] = { KC_E, KC_2, COMBO_END};
const uint16_t PROGMEM C_HD_EAGLE_CLUSTER[] = { KC_E, KC_3, COMBO_END};
const uint16_t PROGMEM C_HD_EAGLE_NAPALM[] = { KC_E, KC_4, COMBO_END};
const uint16_t PROGMEM C_HD_EAGLE_110_PODS[] = { KC_E, KC_6, COMBO_END};
const uint16_t PROGMEM C_HD_ORC_STRIKE[] = { KC_AT, KC_GRAVE, COMBO_END};
const uint16_t PROGMEM C_HD_ORB_LASER[] = { KC_AT, KC_3, COMBO_END};
const uint16_t PROGMEM C_HD_ORB_AIRBURST[] = { KC_AT, KC_4, COMBO_END};
const uint16_t PROGMEM C_HD_ORB_WALKER[] = { KC_AT, KC_5, COMBO_END};
const uint16_t PROGMEM C_HD_ORBITAL_EMP[] = { KC_AT, KC_6, COMBO_END};
const uint16_t PROGMEM C_HD_ROCKET_SENTRY[] = { KC_S, KC_R, COMBO_END};
const uint16_t PROGMEM C_HD_GATLING_SENTRY[] = { KC_S, KC_G, COMBO_END};
const uint16_t PROGMEM C_HD_ARC_THROWER[] = { KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM C_HD_GUARD_DOG[] = { KC_G, KC_D, COMBO_END};
const uint16_t PROGMEM C_HD_GUARD_ROVER[] = { KC_G, KC_R, COMBO_END};
const uint16_t PROGMEM C_HD_DOG_BREATH[] = { KC_G, KC_B, KC_D, COMBO_END};
const uint16_t PROGMEM C_HD_MACHINE_GUN[] = { KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM C_HD_JUMP_PACK[] = { KC_V, KC_A, COMBO_END};
const uint16_t PROGMEM C_HD_HELL_BOMB[] = { KC_H, KC_B, COMBO_END};
const uint16_t PROGMEM C_HD_REINFORCE[] = { KC_1, KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM C_HD_RESUPPLY[] = { KC_R, KC_E, KC_S, COMBO_END};
const uint16_t PROGMEM LOCKCOMBO[] = { KC_P, KC_B, KC_Q, KC_N, COMBO_END};
const uint16_t PROGMEM combo27[] = { KC_UP, KC_LEFT, COMBO_END};
const uint16_t PROGMEM combo28[] = { KC_DOWN, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_UP, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo30[] = { KC_LEFT, KC_RIGHT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(3)),
    COMBO(combo1, TO(0)),

    COMBO(C_HD_AMR_RIFLE, HD_AMR_RIFLE),
    COMBO(C_HD_AUTO_CANNON, HD_AUTO_CANNON),
    COMBO(C_HD_120_MM, HD_120_MM),
    COMBO(C_HD_380_MM, HD_380_MM),
    COMBO(C_HD_EAGLE_500, HD_EAGLE_500),
    COMBO(C_HD_EAGLE_STRIKE, HD_EAGLE_STRIKE),
    COMBO(C_HD_EAGLE_STRAFE, HD_EAGLE_STRAFE),
    COMBO(C_HD_EAGLE_CLUSTER, HD_EAGLE_CLUSTER),
    COMBO(C_HD_EAGLE_NAPALM, HD_EAGLE_NAPALM),
    COMBO(C_HD_EAGLE_110_PODS, HD_EAGLE_110_PODS),
    COMBO(C_HD_ORC_STRIKE, HD_ORC_STRIKE),
    COMBO(C_HD_ORB_LASER, HD_ORB_LASER),
    COMBO(C_HD_ORB_AIRBURST, HD_ORB_AIRBURST),
    COMBO(C_HD_ORB_WALKER, HD_ORB_WALKER),
    COMBO(C_HD_ORBITAL_EMP, HD_ORBITAL_EMP),
    COMBO(C_HD_ROCKET_SENTRY, HD_ROCKET_SENTRY),
    COMBO(C_HD_GATLING_SENTRY, HD_GATLING_SENTRY),
    COMBO(C_HD_ARC_THROWER, HD_ARC_THROWER),
    COMBO(C_HD_GUARD_DOG, HD_GUARD_DOG),
    COMBO(C_HD_GUARD_ROVER, HD_GUARD_ROVER),
    COMBO(C_HD_DOG_BREATH, HD_DOG_BREATH),
    COMBO(C_HD_MACHINE_GUN, HD_MACHINE_GUN),
    COMBO(C_HD_JUMP_PACK, HD_JUMP_PACK),
    COMBO(C_HD_HELL_BOMB, HD_HELL_BOMB),
    COMBO(C_HD_REINFORCE, HD_REINFORCE),
    COMBO(C_HD_RESUPPLY, HD_RESUPPLY),
    COMBO(LOCKCOMBO, LOCK_COMBO),
    COMBO(combo27, KC_PAGE_UP),
    COMBO(combo28, KC_PGDN),
    COMBO(combo29, KC_HOME),
    COMBO(combo30, KC_END),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
  rgb_matrix_set_color_all(0,0,0);
}

static uint8_t led_states[MATRIX_ROWS][MATRIX_COLS] = {{0}};

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {207,250,217}, {136,255,255}, {136,255,255}, {188,255,255}, {0,0,0}, {207,250,217}, {136,255,255}, {136,255,255}, {136,255,255}, {0,0,0}, {207,250,217}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {207,250,217}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {207,250,217}, {136,255,255}, {136,255,255}, {136,255,255}, {207,250,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {136,255,255}, {136,255,255}, {0,0,0}, {0,0,0}, {207,250,217}, {207,250,217}, {0,0,255}, {0,0,0}, {0,183,238}, {207,250,217}, {0,0,0}, {14,255,255}, {136,255,255}, {0,183,238}, {207,250,217}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {207,250,217}, {0,0,0}, {14,255,255}, {207,250,217}, {0,0,0}, {207,250,217}, {0,0,0}, {0,0,0}, {0,0,0}, {207,250,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  /*for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }*/
}


bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 6:
      set_layer_color(6);
      break;
   default:
    //if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      //rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HD_120_MM:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_380_MM:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_EAGLE_500:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_EAGLE_NAPALM:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_EAGLE_CLUSTER:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_EAGLE_110_PODS:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_ORC_STRIKE:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;    
    case HD_ORB_LASER:
    if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_ORB_AIRBURST:
    if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55));
    }
    break;
    case HD_ORB_WALKER:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_EAGLE_STRIKE:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_ROCKET_SENTRY:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_SEAF_ART:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_AUTO_CANNON:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_ARC_THROWER:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_AMR_RIFLE:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_GATLING_SENTRY:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_GUARD_DOG:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_GUARD_ROVER:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_HELL_BOMB:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_TESLA_TOWER:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_ORBITAL_EMP:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_QUASAR_CANNON:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_JUMP_PACK:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_REINFORCE:
    if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_MACHINE_GUN:
    if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(22) SS_UP(X_DOWN) SS_DELAY(50) SS_DOWN(X_LEFT) SS_DELAY(22) SS_UP(X_LEFT) SS_DELAY(50) SS_DOWN(X_DOWN) SS_DELAY(22) SS_UP(X_DOWN) SS_DELAY(50) SS_DOWN(X_UP) SS_DELAY(22) SS_UP(X_UP) SS_DELAY(50) SS_DOWN(X_RIGHT) SS_DELAY(22) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_DOG_BREATH:
    if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_LEFT) SS_DELAY(25) SS_UP(X_LEFT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case HD_RESUPPLY:
    if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_DOWN) SS_DELAY(25) SS_UP(X_DOWN) SS_DELAY(55) SS_DOWN(X_UP) SS_DELAY(25) SS_UP(X_UP) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_5) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_7) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_8) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_9) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_LBRC) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_BSLS) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(55) SS_TAP(X_MS_BTN1));
    }
    break;
    case LOCK_COMBO:
    if (record->event.pressed) {
        SEND_STRING("a\\5HR=skvKK\\[@Tn-7`<" SS_TAP(X_ENTER));
    }

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_245_245:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,245,245);
        }
        return false;
    case HSV_74_255_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(74,255,206);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
    case LED_TOG_KEY:
            if (record->event.pressed) {
                // Get key position
                uint8_t row = record->event.key.row;
                uint8_t col = record->event.key.col;
                
                // Toggle state
                led_states[row][col] = !led_states[row][col];
                
                // Set LED color
                if (led_states[row][col]) {
                    rgb_matrix_set_color(record->event.key.row * MATRIX_COLS + record->event.key.col, 255, 255, 255); // White
                } else {
                    rgb_matrix_set_color(record->event.key.row * MATRIX_COLS + record->event.key.col, 0, 0, 0); // Off
                }
            }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[5];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_ESCAPE))))); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_ESCAPE))))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_PSCR))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD:
          layer_off(1);
        break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_PSCR))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
    }
    if(state->count > 3) {
        tap_code16(KC_APPLICATION);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: register_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_HOLD: layer_on(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_APPLICATION); register_code16(KC_APPLICATION);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: unregister_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
              case DOUBLE_HOLD: 
                layer_off(1);
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
    }
    if(state->count > 3) {
        tap_code16(KC_APPLICATION);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: register_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_APPLICATION); register_code16(KC_APPLICATION);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: unregister_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
    }
    dance_state[4].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};

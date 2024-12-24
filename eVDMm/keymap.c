#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE
#define BOUNCE_INTERVAL 500

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
  LED_BOUNCE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
  DANCE_39,
  DANCE_40,
  DANCE_41,
  DANCE_42,
  DANCE_43,
  DANCE_44,
  DANCE_45,
  DANCE_46,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_BSPC,                                        KC_DELETE,      TD(DANCE_23),   TD(DANCE_24),   TD(DANCE_25),   TD(DANCE_26),   TD(DANCE_27),   KC_BSPC,        
    KC_GRAVE,       TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    LM(1,MOD_LALT),                                 TD(DANCE_28),   TD(DANCE_29),   TD(DANCE_30),   TD(DANCE_31),   TD(DANCE_32),   TD(DANCE_33),   KC_BSLS,        
    KC_TAB,         TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   KC_HYPR,                                                                        KC_MEH,         TD(DANCE_34),   TD(DANCE_35),   TD(DANCE_36),   TD(DANCE_37),   TD(DANCE_38),   MT(MOD_LGUI, KC_QUOTE),
    TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   TD(DANCE_18),   TD(DANCE_19),   TD(DANCE_20),                                   TD(DANCE_39),   TD(DANCE_40),   TD(DANCE_41),   TD(DANCE_42),   TD(DANCE_43),   KC_RIGHT_SHIFT, 
    MO(1),          KC_ENTER,       KC_LEFT_GUI,    KC_LEFT,        KC_UP,          MT(MOD_LALT, KC_APPLICATION),                                                                                                TD(DANCE_44),   KC_DOWN,        KC_RIGHT,       KC_LBRC,        KC_RBRC,        KC_ENTER,       
    TD(DANCE_21),   KC_ENTER,       TD(DANCE_22),                   KC_RIGHT_ALT,   TD(DANCE_45),   KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       MU_TOGG,                                                                        KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       HSV_0_245_245,  HSV_74_255_206, HSV_152_255_255,RGB_MODE_FORWARD,                                                                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    RGB_VAD,        KC_TRANSPARENT, KC_TRANSPARENT,                 RGB_SLD,        KC_TRANSPARENT, RGB_HUI
  ),
  [2] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_HOME,        KC_TRANSPARENT, KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_TRANSPARENT, KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, 
    KC_AT,          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       KC_TRANSPARENT, KC_BSLS,        
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, KC_LEFT_CTRL,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_B,           KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LED_BOUNCE, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_LEFT_ALT,    TD(DANCE_46),   KC_SPACE
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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_RIGHT_ALT, KC_SPACE, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_LEFT_ALT, KC_SPACE, KC_DOWN, COMBO_END};
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
    
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}



const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {207,250,217}, {136,255,255}, {136,255,255}, {188,255,255}, {0,0,0}, {207,250,217}, {136,255,255}, {136,255,255}, {136,255,255}, {0,0,0}, {207,250,217}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {207,250,217}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {207,250,217}, {136,255,255}, {136,255,255}, {136,255,255}, {207,250,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {136,255,255}, {136,255,255}, {0,0,0}, {0,0,0}, {207,250,217}, {207,250,217}, {0,0,255}, {0,0,0}, {0,183,238}, {207,250,217}, {0,0,0}, {14,255,255}, {136,255,255}, {0,183,238}, {207,250,217}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {207,250,217}, {0,0,0}, {14,255,255}, {207,250,217}, {0,0,0}, {207,250,217}, {0,0,0}, {0,0,0}, {0,0,0}, {207,250,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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
  }
}

static bool bounce = false;
static bool color_state = false;
static uint16_t last_toggle_time = 0;

void matrix_scan_user(void) {
    static uint8_t test_idx = 0;
    rgb_matrix_set_color_all(0,0,0);
    rgb_matrix_set_color(test_idx, 255, 255, 255);
    test_idx = (test_idx + 1) % RGB_MATRIX_LED_COUNT;
    wait_ms(25);
}

bool rgb_matrix_indicators_user(void) {
  /*if (rawhid_state.rgb_control) {
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
*/  return true;
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
        SEND_STRING(SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_DOWN(X_RIGHT) SS_DELAY(25) SS_UP(X_RIGHT) SS_DELAY(55) SS_TAP(X_MS_BTN1));
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

    case LED_BOUNCE:
        if (record->event.pressed) {
            bounce = !bounce;

            if (!bounce) {
                rgb_matrix_set_color(0, 0, 0, 0);
            } else {
                last_toggle_time = timer_read();
                color_state = false;
                rgb_matrix_set_color(0, 255, 255, 255);
            }
        }
        return false;

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

static tap dance_state[47];

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
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case DOUBLE_TAP: register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case DOUBLE_TAP: register_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_W);
        tap_code16(KC_W);
        tap_code16(KC_W);
    }
    if(state->count > 3) {
        tap_code16(KC_W);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_W); break;
        case DOUBLE_TAP: register_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_W); register_code16(KC_W);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_W); break;
        case DOUBLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_W); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case DOUBLE_TAP: register_code16(KC_I); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_TAP: unregister_code16(KC_I); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case DOUBLE_TAP: register_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case DOUBLE_TAP: register_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case DOUBLE_TAP: register_code16(KC_H); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_TAP: unregister_code16(KC_H); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_S);
        tap_code16(KC_S);
        tap_code16(KC_S);
    }
    if(state->count > 3) {
        tap_code16(KC_S);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_S); break;
        case DOUBLE_TAP: register_code16(KC_J); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_S); register_code16(KC_S);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_S); break;
        case DOUBLE_TAP: unregister_code16(KC_J); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_S); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if(state->count > 3) {
        tap_code16(KC_D);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_D); break;
        case DOUBLE_TAP: register_code16(KC_K); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_D); register_code16(KC_D);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_D); break;
        case DOUBLE_TAP: unregister_code16(KC_K); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_D); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case DOUBLE_TAP: register_code16(KC_L); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_TAP: unregister_code16(KC_L); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[14].step = 0;
}
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_HOLD: register_code16(KC_LEFT_CTRL); break;
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case DOUBLE_TAP: register_code16(KC_N); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_TAP: unregister_code16(KC_N); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case DOUBLE_TAP: register_code16(KC_M); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_TAP: unregister_code16(KC_M); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case DOUBLE_TAP: register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case DOUBLE_TAP: register_code16(KC_QUES); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_TAP: unregister_code16(KC_QUES); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[21].step = 0;
}
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(LGUI(KC_LEFT_SHIFT))) ); break;
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(LGUI(KC_LEFT_SHIFT))) ); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case DOUBLE_TAP: register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case DOUBLE_TAP: register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case DOUBLE_TAP: register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: layer_move(1); break;
        case DOUBLE_TAP: register_code16(QK_LOCK); break;
        case DOUBLE_SINGLE_TAP: layer_move(1); break;
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case DOUBLE_TAP: unregister_code16(QK_LOCK); break;
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case DOUBLE_TAP: register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[27].step = 0;
}
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: layer_move(1); break;
        case DOUBLE_TAP: register_code16(KC_M); break;
        case DOUBLE_SINGLE_TAP: layer_move(1); break;
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case DOUBLE_TAP: unregister_code16(KC_M); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case DOUBLE_TAP: register_code16(KC_Q); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case DOUBLE_TAP: register_code16(KC_W); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_TAP: unregister_code16(KC_W); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_I);
        tap_code16(KC_I);
        tap_code16(KC_I);
    }
    if(state->count > 3) {
        tap_code16(KC_I);
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(KC_I); break;
        case DOUBLE_TAP: register_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_I); register_code16(KC_I);
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(KC_I); break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_I); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case DOUBLE_TAP: register_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if(state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(KC_P); break;
        case DOUBLE_TAP: register_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_P); register_code16(KC_P);
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_P); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_H);
        tap_code16(KC_H);
        tap_code16(KC_H);
    }
    if(state->count > 3) {
        tap_code16(KC_H);
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(KC_H); break;
        case DOUBLE_TAP: register_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_H); register_code16(KC_H);
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(KC_H); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_H); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_J);
        tap_code16(KC_J);
        tap_code16(KC_J);
    }
    if(state->count > 3) {
        tap_code16(KC_J);
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(KC_J); break;
        case DOUBLE_TAP: register_code16(KC_S); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_J); register_code16(KC_J);
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(KC_J); break;
        case DOUBLE_TAP: unregister_code16(KC_S); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_J); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_K);
        tap_code16(KC_K);
        tap_code16(KC_K);
    }
    if(state->count > 3) {
        tap_code16(KC_K);
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(KC_K); break;
        case DOUBLE_TAP: register_code16(KC_D); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_K); register_code16(KC_K);
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(KC_K); break;
        case DOUBLE_TAP: unregister_code16(KC_D); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_K); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_L);
        tap_code16(KC_L);
        tap_code16(KC_L);
    }
    if(state->count > 3) {
        tap_code16(KC_L);
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(KC_L); break;
        case DOUBLE_TAP: register_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_L); register_code16(KC_L);
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(KC_L); break;
        case DOUBLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_L); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(tap_dance_state_t *state, void *user_data);
void dance_38_finished(tap_dance_state_t *state, void *user_data);
void dance_38_reset(tap_dance_state_t *state, void *user_data);

void on_dance_38(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
    }
    if(state->count > 3) {
        tap_code16(KC_SCLN);
    }
}

void dance_38_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(KC_SCLN); break;
        case SINGLE_HOLD: layer_on(2); break;
        case DOUBLE_TAP: register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SCLN); register_code16(KC_SCLN);
    }
}

void dance_38_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(KC_SCLN); break;
        case SINGLE_HOLD:
          layer_off(2);
        break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SCLN); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(tap_dance_state_t *state, void *user_data);
void dance_39_finished(tap_dance_state_t *state, void *user_data);
void dance_39_reset(tap_dance_state_t *state, void *user_data);

void on_dance_39(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_N);
        tap_code16(KC_N);
        tap_code16(KC_N);
    }
    if(state->count > 3) {
        tap_code16(KC_N);
    }
}

void dance_39_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(KC_N); break;
        case DOUBLE_TAP: register_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_N); register_code16(KC_N);
    }
}

void dance_39_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(KC_N); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_N); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(tap_dance_state_t *state, void *user_data);
void dance_40_finished(tap_dance_state_t *state, void *user_data);
void dance_40_reset(tap_dance_state_t *state, void *user_data);

void on_dance_40(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_M);
        tap_code16(KC_M);
        tap_code16(KC_M);
    }
    if(state->count > 3) {
        tap_code16(KC_M);
    }
}

void dance_40_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(KC_M); break;
        case DOUBLE_TAP: register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_M); register_code16(KC_M);
    }
}

void dance_40_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(KC_M); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_M); break;
    }
    dance_state[40].step = 0;
}
void on_dance_41(tap_dance_state_t *state, void *user_data);
void dance_41_finished(tap_dance_state_t *state, void *user_data);
void dance_41_reset(tap_dance_state_t *state, void *user_data);

void on_dance_41(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_41_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[41].step = dance_step(state);
    switch (dance_state[41].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case DOUBLE_TAP: register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_41_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[41].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[41].step = 0;
}
void on_dance_42(tap_dance_state_t *state, void *user_data);
void dance_42_finished(tap_dance_state_t *state, void *user_data);
void dance_42_reset(tap_dance_state_t *state, void *user_data);

void on_dance_42(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_42_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[42].step = dance_step(state);
    switch (dance_state[42].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case DOUBLE_TAP: register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_42_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[42].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[42].step = 0;
}
void on_dance_43(tap_dance_state_t *state, void *user_data);
void dance_43_finished(tap_dance_state_t *state, void *user_data);
void dance_43_reset(tap_dance_state_t *state, void *user_data);

void on_dance_43(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_43_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[43].step = dance_step(state);
    switch (dance_state[43].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_43_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[43].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[43].step = 0;
}
void on_dance_44(tap_dance_state_t *state, void *user_data);
void dance_44_finished(tap_dance_state_t *state, void *user_data);
void dance_44_reset(tap_dance_state_t *state, void *user_data);

void on_dance_44(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_44_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[44].step = dance_step(state);
    switch (dance_state[44].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_PSCR)) ); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_44_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[44].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD:
          layer_off(1);
        break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_PSCR)) ); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[44].step = 0;
}
void on_dance_45(tap_dance_state_t *state, void *user_data);
void dance_45_finished(tap_dance_state_t *state, void *user_data);
void dance_45_reset(tap_dance_state_t *state, void *user_data);

void on_dance_45(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
    }
    if(state->count > 3) {
        tap_code16(KC_APPLICATION);
    }
}

void dance_45_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[45].step = dance_step(state);
    switch (dance_state[45].step) {
        case SINGLE_TAP: register_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: register_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_HOLD: layer_on(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_APPLICATION); register_code16(KC_APPLICATION);
    }
}

void dance_45_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[45].step) {
        case SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: unregister_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
              case DOUBLE_HOLD: 
                layer_off(1);
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
    }
    dance_state[45].step = 0;
}
void on_dance_46(tap_dance_state_t *state, void *user_data);
void dance_46_finished(tap_dance_state_t *state, void *user_data);
void dance_46_reset(tap_dance_state_t *state, void *user_data);

void on_dance_46(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
        tap_code16(KC_APPLICATION);
    }
    if(state->count > 3) {
        tap_code16(KC_APPLICATION);
    }
}

void dance_46_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[46].step = dance_step(state);
    switch (dance_state[46].step) {
        case SINGLE_TAP: register_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: register_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: register_code16(KC_APPLICATION); register_code16(KC_APPLICATION); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_APPLICATION); register_code16(KC_APPLICATION);
    }
}

void dance_46_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[46].step) {
        case SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
        case SINGLE_HOLD: unregister_code16(KC_APPLICATION); break;
        case DOUBLE_TAP: unregister_code16(KC_APPLICATION); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_APPLICATION); break;
    }
    dance_state[46].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
        [DANCE_39] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_39, dance_39_finished, dance_39_reset),
        [DANCE_40] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_40, dance_40_finished, dance_40_reset),
        [DANCE_41] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_41, dance_41_finished, dance_41_reset),
        [DANCE_42] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_42, dance_42_finished, dance_42_reset),
        [DANCE_43] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_43, dance_43_finished, dance_43_reset),
        [DANCE_44] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_44, dance_44_finished, dance_44_reset),
        [DANCE_45] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_45, dance_45_finished, dance_45_reset),
        [DANCE_46] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_46, dance_46_finished, dance_46_reset),
};

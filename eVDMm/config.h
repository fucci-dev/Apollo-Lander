/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#undef DEBOUNCE
#define DEBOUNCE 5

#undef TAPPING_TERM
#define TAPPING_TERM 145

#define RETRO_TAPPING

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 1120

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define USB_POLLING_INTERVAL_MS 10
#define SERIAL_NUMBER "eVDMm/6dOMB"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 33

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60
#define RGB_MATRIX_KEYPRESSES

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
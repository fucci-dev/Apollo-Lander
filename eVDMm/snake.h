#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include <stdbool.h>
#include "qmk_firmware.h"

#define GAME_LAYER 1
#define DEFAULT_LAYER 0

// Direction enums for snake movement
typedef enum {
    UP,
    DOWN,
    LEFT,
    RIGHT
} direction_t;

// Snake game configuration
#define GRID_ROWS 5
#define GRID_COLS 14
#define WALL -1
#define EMPTY 0
#define SNAKE 1
#define FOOD 2

extern int grid[GRID_ROWS][GRID_COLS];
extern int snake_length;
extern int snake_head_row;
extern int snake_head_col;
extern direction_t snake_direction;
extern bool game_running;

#define UP_KEY KC_SPACE
#define DOWN_KEY KC_ENTER
#define RESET_KEYS (KC_DOWN | KC_ENTER)

void initialize_game(void);
void place_food(void);
bool move_snake(void);
void render_game(void);
void process_game_logic(void);
bool process_record_user(uint16_t keycode, keyrecord_t *record);
void matrix_scan_user(void);

#endif

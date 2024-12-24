#include "snake_game.h"

int grid[GRID_ROWS][GRID_COLS];
int snake_length = 1;
int snake_head_row = 2;
int snake_head_col = 7;
direction_t snake_direction = UP;
bool game_running = false;

void initialize_game(void) {
    for (int row = 0; row < GRID_ROWS; row++) {
        for (int col = 0; col < GRID_COLS; col++) {
            grid[row][col] = EMPTY;
        }
    }

    for (int i = 0; i < GRID_COLS; i++) {
        grid[0][i] = WALL;
        grid[GRID_ROWS - 1][i] = WALL;
    }
    for (int i = 0; i < GRID_ROWS; i++) {
        grid[i][0] = WALL;
        grid[i][GRID_COLS - 1] = WALL;
    }

    grid[snake_head_row][snake_head_col] = SNAKE;
    place_food();
    snake_length = 1;
    snake_direction = UP;
}

void place_food(void) {
    int food_row, food_col;
    do {
        food_row = rand() % (GRID_ROWS - 2) + 1;
        food_col = rand() % (GRID_COLS - 2) + 1;
    } while (grid[food_row][food_col] != EMPTY);

    grid[food_row][food_col] = FOOD;
    rgblight_setrgb_at(255, 0, 0, food_row * GRID_COLS + food_col);
}

bool move_snake(void) {
    int new_row = snake_head_row;
    int new_col = snake_head_col;

    switch (snake_direction) {
        case UP:
            new_row--;
            break;
        case DOWN:
            new_row++;
            break;
        case LEFT:
            new_col--;
            break;
        case RIGHT:
            new_col++;
            break;
    }

    if (grid[new_row][new_col] == WALL || grid[new_row][new_col] == SNAKE) {
        return false;
    }

    if (grid[new_row][new_col] == FOOD) {
        snake_length++;
        place_food();
        PLAY_SONG((float[]){262.0, 0, 0});
    }

    grid[snake_head_row][snake_head_col] = EMPTY;
    snake_head_row = new_row;
    snake_head_col = new_col;
    grid[new_row][new_col] = SNAKE;
    return true;
}

void render_game(void) {
    for (int row = 0; row < GRID_ROWS; row++) {
        for (int col = 0; col < GRID_COLS; col++) {
            switch (grid[row][col]) {
                case WALL:
                    rgblight_setrgb_at(255, 255, 255, row * GRID_COLS + col);
                    break;
                case EMPTY:
                    rgblight_setrgb_at(0, 0, 0, row * GRID_COLS + col);
                    break;
                case SNAKE:
                    rgblight_setrgb_at(0, 255, 0, row * GRID_COLS + col);
                    break;
                case FOOD:
                    rgblight_setrgb_at(255, 0, 0, row * GRID_COLS + col);
                    break;
            }
        }
    }
}

void process_game_logic(void) {
    if (game_running) {
        if (!move_snake()) {
            game_running = false;
        }
    }
    render_game();
}
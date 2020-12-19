#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define mine_count 10

//≥ı ºªØ∆Â≈Ã
void initboard(char arr[ROWS][COLS], int, int, char);
//¥Ú”°∆Â≈Ã
void display_board(char arr[ROWS][COLS], int, int);
//≤º÷√¿◊
void set_mine(char arr[ROWS][COLS], int, int);
//≈≈≤È¿◊
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int, int);
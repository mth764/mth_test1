#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define mine_count 10

//��ʼ������
void initboard(char arr[ROWS][COLS], int, int, char);
//��ӡ����
void display_board(char arr[ROWS][COLS], int, int);
//������
void set_mine(char arr[ROWS][COLS], int, int);
//�Ų���
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int, int);
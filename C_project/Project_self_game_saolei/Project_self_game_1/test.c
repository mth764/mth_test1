#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void play_game()
{
	char mine[ROWS][COLS] ;
	char show[ROWS][COLS] ;
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	set_mine(mine, ROW, COL);
	//display_board(mine, ROW, COL);
	find_mine(mine,show, ROW, COL);
}
void menu()
{
	printf("*************************\n");
	printf("******1   play  *********\n");
	printf("******0   exit  *********\n");
	printf("*************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入一个数: \n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏>>");
			break;
		case 1:
			play_game();
			/*printf("玩游戏\n");*/
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
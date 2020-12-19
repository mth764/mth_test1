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
		printf("������һ����: \n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ>>");
			break;
		case 1:
			play_game();
			/*printf("����Ϸ\n");*/
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
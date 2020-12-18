//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void play_game()
//{
//	char arr[ROW][COL];
//	init_board(arr, ROW, COL, ' ');
//	display_board(arr, ROW, COL);
//	printf("******游戏开始*******\n\n\n");
//	while (1)
//	{
//		int n = 0;
//		printf("电脑下棋: \n");
//		set_window(arr, ROW, COL);
//		display_board(arr, ROW, COL);
//		n = judge(arr, ROW, COL);
//		if (n == 0)
//		{
//			printf("电脑获胜\n");
//			break;
//		}
//		else if (n == 1)
//		{
//			printf("玩家获胜\n");
//			break;
//		}
//		else if (n == 2)
//		{
//			printf("平局\n");
//			break;
//		}
//		printf("玩家下棋: ");
//		set_player(arr, ROW, COL);
//		display_board(arr, ROW, COL);
//		n = judge(arr, ROW, COL);
//		if (n == 0)
//		{
//			printf("电脑获胜\n");
//			break;
//		}
//		else if (n == 1)
//		{
//			printf("玩家获胜\n");
//			break;
//		}
//		else if (n == 2)
//		{
//			printf("平局\n");
//			break;
//		}
//		printf("\n");
//	}
//	display_board(arr, ROW, COL);
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("****1  start,0  exit*****\n");
//	printf("*************************\n");
//}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			//游戏入口
//			play_game();
//			break;
//		default:
//			printf("输入错误，请重新输入:>");
//		}
//	} while (input);
//}
//int main()
//{
//	//程序测试入口
//	test();
//	return 0;
//}
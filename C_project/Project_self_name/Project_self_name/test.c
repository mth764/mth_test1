//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void play_game()
//{
//	char arr[ROW][COL];
//	init_board(arr, ROW, COL, ' ');
//	display_board(arr, ROW, COL);
//	printf("******��Ϸ��ʼ*******\n\n\n");
//	while (1)
//	{
//		int n = 0;
//		printf("��������: \n");
//		set_window(arr, ROW, COL);
//		display_board(arr, ROW, COL);
//		n = judge(arr, ROW, COL);
//		if (n == 0)
//		{
//			printf("���Ի�ʤ\n");
//			break;
//		}
//		else if (n == 1)
//		{
//			printf("��һ�ʤ\n");
//			break;
//		}
//		else if (n == 2)
//		{
//			printf("ƽ��\n");
//			break;
//		}
//		printf("�������: ");
//		set_player(arr, ROW, COL);
//		display_board(arr, ROW, COL);
//		n = judge(arr, ROW, COL);
//		if (n == 0)
//		{
//			printf("���Ի�ʤ\n");
//			break;
//		}
//		else if (n == 1)
//		{
//			printf("��һ�ʤ\n");
//			break;
//		}
//		else if (n == 2)
//		{
//			printf("ƽ��\n");
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
//		printf("������:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			//��Ϸ���
//			play_game();
//			break;
//		default:
//			printf("�����������������:>");
//		}
//	} while (input);
//}
//int main()
//{
//	//����������
//	test();
//	return 0;
//}
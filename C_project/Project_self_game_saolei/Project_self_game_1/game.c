//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void initboard(char arr[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			arr[i][j] = set;
//		}
//	}
//}
//void display_board(char arr[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0; j <= col; j++)
//	{
//		printf("%d ", j);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void set_mine(char arr[ROWS][COLS], int row, int col)
//{
//	int count = mine_count;
//	while (count)
//	{
//
//		int x = rand() % row+1;
//		int y = rand() % col+1;
//		if (arr[x][y] == '0')
//		{
//			arr[x][y] = '1';
//			count--;
//		}
//	}
//}
//int get_count(char arr[ROWS][COLS], int x, int y)
//{
//	return arr[x - 1][y - 1] + arr[x - 1][y]
//		+ arr[x - 1][y + 1] + arr[x][y - 1]
//		+ arr[x][y + 1] + arr[x + 1][y - 1]
//		+ arr[x + 1][y] + arr[x + 1][y + 1]-8*'0';
//}
//void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	int tmp = row*col - mine_count;
//	while (win<tmp)
//	{
//		printf("������Ҫ�Ų���׵�����: \n");
//		scanf("%d %d", &x, &y);
//		if (1 <= x&&x <= row - 1 && 1 <= y&&y <= col - 1)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("���ź��㱻ը����\n");
//				display_board(show, row, col);
//				break;
//			}
//			else
//			{
//				 int count = get_count(mine, x, y);
//				 //�����count�����Σ���Ҫ��'0'ת��Ϊ�ַ���
//				 show[x][y] = count + '0';
//				 display_board(show, row, col);
//				 win++;
//			}
//		}
//		else
//		{
//			printf("�Ƿ����룬����������:\n");
//		}
//		
//	}
//	if (win == tmp)
//	{
//		printf("��ϲ�����׳ɹ�\n");
//	}
//}
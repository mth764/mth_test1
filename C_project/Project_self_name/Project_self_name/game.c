//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void init_board(char arr[ROW][COL], int row, int col, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = set;
//		}
//	}
//}
//void display_board(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (i < col - 1 && j < col - 1)
//			{
//				printf(" %c |", arr[i][j]);
//			}
//			else if (i < col - 1 && j == col - 1)
//			{
//				printf(" %c ", arr[i][j]);
//			}
//			else if (i == col - 1 && j < col - 1)
//			{
//				printf(" %c |", arr[i][j]);
//			}
//			else
//				printf(" %c ", arr[i][j]);
//		}
//		printf("\n");
//		if (i<row-1)
//			printf("-----------\n");
//	}
//}
//int full_judge(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] == ' ')
//				return 1;
//		}
//	}
//	return 0;
//}
//void set_window(char arr[ROW][COL], int row, int col)
//{
//	//������ѭ���Ļ���ѭ����������ô���á�
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (arr[x][y] == ' ')
//		{
//			arr[x][y] = '*';
//			break;
//		}
//	}
//}
//void set_player(char arr[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int m = 0;
//		int n = 0;
//		printf("��������������:>\n");
//		scanf("%d %d", &m, &n);
//		if ((0 <= m && m < row) && (0 <= n && n < col))
//		{
//			if (arr[m][n] == ' ')
//			{
//				arr[m][n] = '#';
//				break;
//			}
//			else
//			{
//				printf("���������������ӣ�����������\n");
//			}
//		}
//		else
//			printf("�Ƿ����룬����������\n");
//	}
//}
//int judge(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//�ж����Ƿ������Ӯ
//	for (i = 0; i < row; i++)
//	{
//		if ((arr[i][0]=='*') && (arr[i][1] =='*')&& (arr[i][2] == '*'))
//		{
//			return 0;
//		}
//		else if ((arr[i][0] == '#') && (arr[i][1] == '#') && (arr[i][2] == '#'))
//		{
//			return 1;
//		}
//
//	}
//	//�ж����Ƿ������Ӯ
//	for (i = 0; i < col; i++)
//	{
//		if ((arr[0][i] == '*') && (arr[1][i] == '*') && (arr[2][i] == '*'))
//		{
//			return 0;
//		}
//		else if ((arr[0][i] == '#') && (arr[1][i] == '#') && (arr[2][i] == '#'))
//		{
//			return 1;
//		}
//	}
//	//�ж϶Խ����Ƿ������Ӯ
//	if (((arr[0][0]=='*') && (arr[1][1]=='*') && (arr[2][2] == '*') )
//		|| ((arr[0][2]=='*') && (arr[1][1]=='*') && (arr[2][0] == '*')))
//		return 0;
//	else if (((arr[0][0] == '#') && (arr[1][1] == '#') && (arr[2][2] == '#'))
//		|| ((arr[0][2] == '#') && (arr[1][1] == '#') && (arr[2][0] == '#')))
//		return 1;
//	else
//	{
//		int start = 0;
//		start = full_judge(arr, row, col);
//		if (start == 0)
//		{
//			return 2;
//		}
//		else
//			return 3;//��δ�ֳ�ʤ����������
//	}
//}
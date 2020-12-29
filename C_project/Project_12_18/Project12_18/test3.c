//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 },
//	{ 6, 7, 8, 9, 10 },
//	{ 11, 12, 13, 14, 15 } };
//	int row = 0;
//	int col = 4;
//	int input = 0;
//	scanf("%d", &input);
//	while (row <= 2 || col>=0)
//	{
//		if (input == arr[row][col])
//		{
//			printf("已找到,下标为%d %d\n", row, col);
//			break;
//		}
//		else if (input < arr[row][col])
//			col--;
//		else
//		{
//			row++;
//		}
//	}
//	if (row > 2 || col < 0)
//		printf("找不到\n");
//	return 0;
//}
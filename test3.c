//输出100以内3的倍数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//
//}
//比较两个数输出最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void ac_max(int x,int y)
//{
//	if (x >= y)
//		printf("最大值为%d\n", x);
//	else
//		printf("最大值为%d\n", y);
//}
//int main()
//{	
//	int a;
//	int b;
//	printf("请输入两个需要比较的数\n");
//	scanf("%d %d", &a, &b);
//	ac_max(a, b);
//	return 0;
//}
//三个数由大到小输出
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//求1-100内有多少个9
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//
//		if (i % 10 == 9)
//			n++;
//		else if (i / 10 == 9)
//			n++;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//乘法口诀表
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d ", i, j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int left = 1;
//	int right = sizeof(arr)/sizeof(int)-1;
//	int mid = 0;
//	int ret = 0;
//	scanf("%d", &ret);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < ret)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > ret)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	 printf("找不到\n");
//	return 0;
//}
//1000年-2000年闰年
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//猜拳游戏
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void show()
//{
//	printf("***********请输入**************\n");
//	printf("*********1.play   0.exit*******\n"); 
//	printf("***********请输入**************\n");
//}
//void my_game()
//{
//	int guess = 0;
//	//1. 生产一个随机数
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//开始猜拳
//	while (1)
//	{
//		printf("你猜的数字是：->>\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你猜中了\n");
//			break;
//		}
//	}
//		printf("请输入猜拳数字\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		show();
//	start:
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			my_game();
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			goto start;
//		}
//	} while (i);
//	return 0;
//}
//求十个数的最大值
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	printf("请输入十个数\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
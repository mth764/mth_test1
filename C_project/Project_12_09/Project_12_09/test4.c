//打印1-10000水仙花数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int fuc(int a, int n)
//{
//	int fac = 1;
//	while (n)
//	{
//		fac *= a;
//		n--;
//	}
//	return fac;
//}
//int daffodil(int i)
//{
//	int n = 0;
//	int tmp = i;
//	int sum = 0;
//	while (i / 10)
//	{
//		n++;
//		i = i / 10;
//	}
//	n++;
//	while (tmp / 10)
//	{
//		sum += fuc(tmp % 10, n);
//		tmp /= 10;
//	}
//	sum += fuc(tmp, n);
//	return sum;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		if (daffodil(i) == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
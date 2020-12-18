//写一个递归函数DigitSum(n)，
//输入一个非负整数，返回组成它的数字之和
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int DigitSum(int m)
//{
//	static int temp = 0;
//	if (m > 9)
//	{
//		DigitSum(m / 10);
//	}
//	printf("%d ", m % 10);
//	return temp += (m % 10);
//}
//int main()
//{
//	int sum = 0;
//	int ret = 0;
//	printf("请输入一个非负整数:>");
//	scanf("%d", &ret);
//	sum= DigitSum(ret);
//	printf("\n");
//	printf("%d\n", sum);
//	return 0;
//}
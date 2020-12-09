//输出一个整数的二进制的奇数位和偶数位
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void print_binary(int n)
//{
//	int ret = n;
//	int i = 0;
//	printf("偶数位为：");
//	for(i = 16; i > 0; i--)
//	{
//		printf("%d ", n & 1);
//		n = n >> 2;
//	}
//	printf("\n");
//	printf("奇数位为：");
//	for(i = 16; i > 0; i--)
//	{
//		ret=ret >> 1;
//		printf("%d ", ret & 1);
//		ret=ret >> 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数： ");
//	scanf("%d", &n);
//	print_binary(n);
//	return 0;
//}
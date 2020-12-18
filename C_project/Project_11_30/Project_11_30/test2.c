//递归方式实现求n的阶乘
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n*fac(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入n:> ");
//	scanf("%d", &n);
//	m = fac(n);
//	printf("%d！=%d\n", n,m);
//	return 0;
//}
//非递归方式实现n的阶乘
//int fac(int n)
//{
//	int ret=1;
//	while (n >= 1)
//	{
//		ret *= n;
//		n--;
//
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入n:> ");
//	scanf("%d", &n);
//	m = fac(n);
//	printf("%d！=%d\n", n,m);
//	return 0;
//}
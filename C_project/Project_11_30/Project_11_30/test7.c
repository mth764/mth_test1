//递归方式实现求第n个斐波那契数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Fibonacci(n-1) + Fibonacci(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入n: ");
//	scanf("%d", &n);
//	ret= Fibonacci(n);
//	printf("第%d个斐波那契数为%d\n", n, ret);
//	return 0;
//
//}
////非递归方式实现求第n个斐波那契数
//int Fibonacci(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (i = 1; i <n-1; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入n: ");
//	scanf("%d", &n);
//	ret = Fibonacci(n);
//	printf("第%d个斐波那契数为%d\n", n, ret);
//	return 0;
//}
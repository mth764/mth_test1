////输入两个整数，求出它们二进制为不同的个数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int judge_binary(int n, int m)
//{
//	int ret = 0;
//	int temp = 0;
//	int start = 32;
//	temp = n ^ m;
//	while (start--)
//	{
//		if (temp & 1)
//			ret++;
//		temp = temp >> 1;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d %d", &n, &m);
//	count = judge_binary(n, m);
//	printf("%d\n", count);
//	return 0;
//}
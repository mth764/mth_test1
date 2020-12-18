//统计二进制中1的个数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int binary_one(int n)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 32; i > 0; i--)
//	{
//		if (n & 1)
//		{
//			ret++;
//		}
//		n = n >> 1;
//	}
//	return ret;
//}
//int main()
//{
//	int count = 0;
//	int n = 0;
//	printf("请输入一个数: \n");
//	scanf("%d", &n);
//	count = binary_one(n);
//	printf("%d\n", count);
//	return 0;
//}
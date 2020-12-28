//模仿实现atoi函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int my_atoi(const char* p)
//{
//	int ret = 1;
//	int sum = 0;
//	while (*p == ' ');
//	{
//		p++;
//	}
//	if (*p == 45)
//	{
//		p++;
//		if (*p<48 || *p>57)
//			return 0;
//		while (*p >= 48 && *p <= 57)
//		{
//			ret = sum + ((*p) - 48);
//			sum = ret * 10;
//			p++;
//		}
//		return 0-ret;
//	}
//	else if(*p<48 || *p>57)
//		return 0;
//	while(*p >= 48 && *p <= 57)
//	{
//		ret = sum + ((*p) - 48);
//		sum = ret*10;
//		p++;
//	}
//	return ret;
//}
//int main()
//{
//	const char* p = "	-2548 ajskajc";
//	int m = my_atoi(p);
//	printf("%d\n", m);
//	return 0;
//}
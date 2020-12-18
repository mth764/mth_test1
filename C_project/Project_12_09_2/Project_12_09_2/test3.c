//模拟实现strcpy函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//char *my_strcpy(char * arr, const char * p)
//{
//	char* ret = arr;
//	while (*p != '\0')
//	{
//		*arr = *p;
//		arr++;
//		p++;
//	}
//	*arr = *p;
//	return ret;
//}
//int main()
//{
//	//char *strcpy(char *strDestination, const char *strSource);
//	char arr[20] = { 0 };
//	int i = 0;
//	const char* p = "abcdefghijklmn";
//	char* p1 = my_strcpy(arr, p);
//	for (i = 0; i < 20; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
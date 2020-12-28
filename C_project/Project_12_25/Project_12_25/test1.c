//模拟实现strncat函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//char* my_strncat(char* des, const char* src, size_t count)
//{
//	char* ret = des;
//	while (*des)
//	{
//		des++;
//	}
//	while (count-- && *src)
//	{
//		*des = *src;
//		des++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	/*char *strncat(char *strDest,
//					const char *strSource,
//					size_t count);*/
//	char arr[30] = "hello";
//	char arr1[20] = " welcome to bit";
//	char* tmp = my_strncat(arr, arr1, 20);
////	char* tmp=strncat(arr, arr1, 3);
//	printf("%s\n", tmp);
//
//	return 0;
//}

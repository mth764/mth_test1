//Ä£ÄâÊµÏÖstrncpy
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//char* my_strncpy(char* des, const char* src, size_t count)
//{
//	char* ret = des;
//	size_t n = count;
//	while (count)
//	{
//		if (*src)
//		{
//			*des = *src;
//			count--;
//			des++;
//			src++;
//		}
//		else
//		{
//			while (count)
//			{
//				*des = '\0';
//				des++;
//				count--;
//			}
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//char *strncpy(char *strDest, const char *strSource, size_t count);
//	char arr[30] = "helloxxxxxxxxxxxxxxxxxxxx";
//	char arr1[15] = "welcome to bit";
//	//char* tmp=strncpy(arr+2, arr1, 3);
//	char* tmp = my_strncpy(arr, arr1, 20);
//	printf("%s\n", tmp);
//	return 0;
//}
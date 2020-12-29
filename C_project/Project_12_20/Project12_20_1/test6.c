////模仿实现strcpy库函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char*dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//char *strcpy(char *strDestination, const char *strSource);
//	char arr1[] = "hello";
//	char arr2[] = "welcome to bit";
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}
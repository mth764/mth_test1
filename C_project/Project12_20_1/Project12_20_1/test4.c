//模拟实现strcat函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	//char *strcat(char *strDestination, const char *strSource);
//	char arr1[30] = "hello ";
//	char arr2[] = "welcome to bit";
//	char* tmp = my_strcat(arr1, arr2);
//	printf("%s\n", tmp);
//	return 0;
//}
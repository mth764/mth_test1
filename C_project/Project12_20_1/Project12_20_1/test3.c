//模拟实现strstr库函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(const char*dest, const char*src)
//{
//	const char* str1 = dest;
//	const char* tmp = src;
//	assert(dest&&src);
//	if (src == '\0')
//		return (const)dest;
//	while (*str1)
//	{
//		const char *cp = str1;
//		while (*cp && *tmp && *cp == *tmp)
//		{
//			cp++;
//			tmp++;
//		}
//		if (*tmp == '\0')
//			return (const)str1;
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	char arr2[] = "bit";
//	char arr3[] = "Bit";
//	/*char* n=my_strstr(arr, arr2);*/
//	/*char* n = my_strstr(arr, arr3);*/
//	char* n = my_strstr(arr, "llo");
//	if (n == NULL)
//		printf("找不到\n");
//	else
//		printf("%s\n", n);
//	return 0;
//}

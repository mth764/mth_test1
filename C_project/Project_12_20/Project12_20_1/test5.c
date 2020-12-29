//模拟实现strcmp函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char*str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	//int strcmp(const char *string1, const char *string2);
//	/*< 0 string1 less than string2
//	    0 string1 identical to string2
//	  > 0 string1 greater than string2*/
//	char arr1[] = "hello";
//	char arr2[] = "helno";
//	int i=my_strcmp(arr1, arr2);
//	if (i = 0)
//		printf("字符串相等\n");
//	else if (i > 0)
//		printf("%s > %s", arr1, arr2);
//	else
//		printf("%s < %s", arr1, arr2);
//	
//
//
//	return 0;
//}
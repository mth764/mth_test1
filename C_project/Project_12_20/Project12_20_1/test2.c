//模拟实现memcpy函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//
//void* my_memcpy(void *dest,const void *src, size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[] = { 1, 2, 3, 4 };
//	char arr3[] = "hello. bit";
//	char arr4[] = "welcome to";
//	my_memcpy(arr1 + 4, arr2, 16);
//	my_memcpy(arr3 + 6, arr4, 4);
//	return 0;
//}
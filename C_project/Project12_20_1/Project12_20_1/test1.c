//模仿实现memmove实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//void* my_memmove(void *dest, const void *src, size_t count)
//{
//	void* ret = dest;
//	if ((char*)src < (char*)dest)
//	{
//		while (count--)
//		{
//			*((char*)dest + count )= *((char*)src + count);
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//void *memmove(void *dest, const void *src, size_t count);
//	int arr1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int i = 0;
//	my_memmove(arr1 + 2, arr1 + 4, 16);
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
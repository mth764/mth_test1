//模仿qsort的功能实现一个通用的冒泡排序
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(char* buf1, char* buf2, size_t width)
//{
//	size_t i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp;
//		tmp=*buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*arr, size_t num, size_t width, int(*cmp)(const void*e1, const void* e2))
//{
//	size_t i = 0;
//	size_t j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)arr+j*width, (char*)arr+(j+1)*width)>0)
//			{
//				swap((char*)arr + j*width, (char*)arr + (j + 1)*width, width);
//			}
//		}
//	}
//	
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)(e1)-*(int*)e2);
//}
//int main()
//{
//	int arr[8] = { 5, 8, 7, 6, 12, 1, 78, 0 };
//	size_t i = 0;
//	size_t num = sizeof(arr) / sizeof(arr[0]);
//	size_t width = sizeof(arr[0]);
//	bubble_sort(arr, num, width, cmp_int);
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swop(int* arr, int* arr1, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		int ret = 0;
//		ret = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = ret;
//	}
//}
//void print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int arr1[5] = { 6,7,8,9,10 };
//	int len;
//	len = sizeof(arr) / sizeof(int);
//	//交换之前
//	printf("交换后:\n");
//	printf("arr:> ");
//	print(arr, len);
//	printf("\n");
//	printf("arr1:> ");
//	print(arr1, len);
//	printf("\n");
//	swop(arr, arr1, len);
//	//交换之后
//	printf("交换后:\n");
//	printf("arr:> ");
//	print(arr, len);
//	printf("\n");
//	printf("arr1:> ");
//	print(arr1, len);
//	printf("\n");
//	return 0;
//}
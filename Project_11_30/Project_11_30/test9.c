//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void init(int* arr,int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int ret = 0;
//		ret = arr[left];
//		arr[left] = arr[right];
//		arr[right] = ret;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[8] = { 2,3,4,5,6,7,8,9 };
//	int len = 0;
//	int len1 = 0;
//	len = sizeof(arr) / sizeof(int);
//	len1 = sizeof(arr1) / sizeof(int);
//	init(arr,len);
//	print(arr, len);
//	printf("逆序之前:>\n");
//	print(arr1, len1);
//	reverse(arr1, len1);
//	printf("逆序之后:>\n");
//	print(arr1, len1);
//	return 0;
//}
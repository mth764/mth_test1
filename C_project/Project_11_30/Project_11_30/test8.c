//对整形数组冒泡排序
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void int_sort(int* arr,int len)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int ret = 0;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				ret = 1;//检验数
//			}
//		}
//		if (!ret)//如果进行几轮发现数组有序则跳出比较，优化程序
//			return;
//	}
//}
//void print_show(int* arr,int len)
//{
//	int i = 0;
//	for (i = 0; i < len ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int len;
//	int arr[8] = {4,8,9,7,12,3,6,5};
//	len = sizeof(arr) / sizeof(int);
//	int_sort(arr, len);
//	print_show(arr,len);
//	printf("\n");
//	return 0;
//}
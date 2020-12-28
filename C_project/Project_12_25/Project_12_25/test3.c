//找单身狗
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int* single_function(int arr[],int arr1[], int len)
//{
//	int i = 0;
//	int j = 0; 
//	int k = 0;
//	//升序
//	for (i = 0; i < len ; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}	
//	}
//	//找单身狗
//	for (i = 0; i < len - 1;)
//	{
//		if (arr[i] != arr[i + 1])
//		{
//			arr1[k] = arr[i];
//			k++;
//			i++;
//			if (k == 2)
//				return arr1;
//		}
//		else
//			i += 2;
//	}
//}
//int main()
//{
//	int arr[] = { 4, 8, 12, 3, 4, 12, 6, 7, 8, 7 };
//	int arr1[2] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	int i = 0;
//	int* p=single_function(arr,arr1, len);
//	for (i = 0; i < 2; i++)
//		printf("%d ", *(p + i));
//	printf("\n");
//	return 0;
//}
//调整奇数偶数顺序
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void adjust_function(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	int i = 0;
//	int j = right;
//	int tmp = 0;
//	while (j>left)
//	{
//		for (i = left; i < right; i++)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				left = i;
//				break;
//			}
//		}
//		for (j = right; j>left; j--)
//		{
//			if (arr[j] % 2 != 0)
//			{
//				right = j;
//				break;
//			}
//		}
//		if (arr[left] % 2 == 0 && arr[right] % 2 != 0)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int len = 0;
//	int i = 0;
//	int arr[] = { 1, 5, 12, 75, 42, 36, 51, 28, 40 };
//	len = sizeof(arr) / sizeof(int);
//	adjust_function(arr, len);
//	for (i = 0; i < len ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
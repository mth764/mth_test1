//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
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
//	printf("����֮ǰ:>\n");
//	print(arr1, len1);
//	reverse(arr1, len1);
//	printf("����֮��:>\n");
//	print(arr1, len1);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include "sort.h"
int main()
{
	int arr[10] = { 27, 15, 19, 18, 18, 34, 65, 49, 25, 37 };
	int arr1[11] = { 0, 27, 15, 19, 18, 18, 34, 65, 49, 25, 37 };
	int ar[] = { 278, 109, 63, 930, 589, 184, 505, 269, 8, 83 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(ar) / sizeof(ar[0]);

	/*InsertSort(arr, n);
	printf("ֱ�Ӳ�������(��ǰ���Ƚ�)Ϊ:\n");
	printarr(arr, 0, n);*/

	/*printf("ֱ�Ӳ�������(�Ӻ���ǰ����)Ϊ:\n");
	InsertSort_1(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("ֱ�Ӳ�������(�Ӻ���ǰ��������)Ϊ:\n");
	InsertSort_2(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("ֱ�Ӳ�������(�Ӻ���ǰ���������Ҵ��ڱ�λ)Ϊ:\n");
	InsertSort_3(arr1, 1, n1);
	printarr(arr1, 1, n1);*/

	/*printf("�����۰��������Ϊ:\n");
	BinInsertSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("��·��������Ϊ:\n");
	TwoWayInsertSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("ϣ����������Ϊ:\n");
	ShellSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("ѡ���������Ϊ:\n");
	SelectSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("������Ϊ:\n");
	HeapSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("ð������Ϊ:\n");
	BubbleSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("ð������Ϊ:\n");
	BubbleSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("��������Ϊ:\n");
	QuickSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("�鲢����Ϊ:\n");
	MergeSort(arr, n);
	printarr(arr, 0, n);*/

	printf("��������Ϊ:\n");
	CountSort(ar, n2);
	printarr(ar, 0, n2);
	return 0;
}
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
	printf("直接插入排序(从前向后比较)为:\n");
	printarr(arr, 0, n);*/

	/*printf("直接插入排序(从后往前交换)为:\n");
	InsertSort_1(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("直接插入排序(从后往前，不交换)为:\n");
	InsertSort_2(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("直接插入排序(从后往前，不交换且带哨兵位)为:\n");
	InsertSort_3(arr1, 1, n1);
	printarr(arr1, 1, n1);*/

	/*printf("二分折半插入排序为:\n");
	BinInsertSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("二路插入排序为:\n");
	TwoWayInsertSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("希尔插入排序为:\n");
	ShellSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("选择插入排序为:\n");
	SelectSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("堆排序为:\n");
	HeapSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("冒泡排序为:\n");
	BubbleSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("冒泡排序为:\n");
	BubbleSort(arr, n);
	printarr(arr, 0, n);*/

	/*printf("快速排序为:\n");
	QuickSort(arr, 0, n);
	printarr(arr, 0, n);*/

	/*printf("归并排序为:\n");
	MergeSort(arr, n);
	printarr(arr, 0, n);*/

	printf("基数排序为:\n");
	CountSort(ar, n2);
	printarr(ar, 0, n2);
	return 0;
}
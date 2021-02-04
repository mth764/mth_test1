#ifndef _SORT_H_
#define _SORT_H_
#include "Sysutil.h"



// 插入排序
void InsertSort(int* a, int n);
void InsertSort_1(int* a, int left,int right);

// 希尔排序+
void ShellSort(int* a, int n);

// 选择排序
void SelectSort(int* a, int n);

// 堆排序
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// 冒泡排序
void BubbleSort(int* a, int n);

// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right);
// 快速排序挖坑法
int PartSort2(int* a, int left, int right);
// 快速排序前后指针法
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);
// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);
// 归并排序递归实现
void MergeSort(int* a, int n);
// 归并排序非递归实现
void MergeSortNonR(int* a, int n);
// 计数排序
void CountSort(int* a, int n);
void printarr(int* a, int n);


void printarr(int* a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

//直接插入排序
//void TwoWayInsertSort(int* arr, int left, int right)
//{
//	int* arr1 = (int*)malloc(sizeof(int)*(right - left + 1));
//	int* first, *final;
//	first = final = arr1;
//	arr1[0] = arr[0];
//	for (int i = left + 1, i < right, i++)
//	{
//		if (arr[i] < *first)
//			first = arr1 + right;
//	}
//}
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; ++i)
	{
		int k = 0;
		while (a[i]>a[k])
			k++;
		int tmp = a[i];
		for (int j = i-1; j >= k; j--)
		{
			a[j + 1] = a[j];
		}
		a[k] = tmp;
	}
}
void InsertSort_1(int* a, int left, int right)
{

}
#endif
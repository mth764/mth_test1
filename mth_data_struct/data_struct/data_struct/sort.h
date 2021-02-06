#ifndef _SORT_H_
#define _SORT_H_
#include "Sysutil.h"



// 插入排序
void InsertSort(int* a, int n);
void InsertSort_1(int* a, int left,int right);
void InsertSort_2(int* a, int left, int right);
void InsertSort_3(int* a, int left, int right);
void BinInsertSort(int* a, int left, int right);

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
void printarr(int* a, int left,int right);


void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void printarr(int* a, int left,int right)
{
	for (int i = left; i < right; i++)
		printf("%d ", a[i]);
	printf("\n");
}
//直接插入排序（从前往后比较）
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
//直接插入排序（从后往前比较交换 ）
void InsertSort_1(int* a, int left, int right)
{
	int n = right - left;
	for (int i = left + 1; i < right; i++)
	{
		int j = i;
		while (j>=left && a[j] < a[j-1])
		{
			swap(&a[j], &a[j-1]);
			j--;
		}
	}
}
//直接插入排序（从后往前）不交换
void InsertSort_2(int* a, int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		int j = i;
		int tmp = a[j];
		while (j>left && tmp < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = tmp;
	}
}
//直接插入排序(哨兵位)
void InsertSort_3(int* a, int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		a[0] = a[i];
		int j = i;
		while (a[0] < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = a[0];
	}

}
//二分折半插入排序
void BinInsertSort(int* a, int left, int right)
{
	for (int i = left + 1; i<right; i++)
	{
		int tmp = a[i];
		int low = left;
		int high = i - 1;
		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (tmp >= a[mid])
				low = mid + 1;
			else
				high = mid - 1;
		}
		for (int j = i; j > low; j--)
			a[j] = a[j - 1];
		a[low] = tmp;
	}
}
//二路插入排序
void TwoWayInsertSort(int* a, int left, int right)
{
	int n = right - left;
	int* arr1 = (int*)malloc(sizeof(int)*n);
	int first, final;
	first = final =0;
	arr1[0] = a[0];
	for (int i = left + 1; i < right; i++)
	{
		int tmp = a[i];
		int j = final;
		if (a[i] < a[first])
		{
			first = (first - 1 + n) % n;
			arr1[first] = a[i];
		}
		else if (a[i]>a[final])
		{
			final = (final + 1) % n;
			arr1[final] = a[i];
		}
		else
		{
			while (tmp < arr1[j])
			{
				arr1[j + 1] = arr1[j];
				j--;
			}
			arr1[j + 1] = tmp;
		}
	}
	for (int i = left; i < right; i++)
	{
		a[i] = arr1[first];
		first = (first + 1) % n;
	}
	free(arr1);
}
void _AdjustDown3(int* a, int start, int n)
{
	int i = start;
	int j = 2 * i + 1;
	int tmp = a[i];
	while (j < n)
	{
		if (j + 1<n && a[j] < a[j + 1])
			j = j + 1;

		if (a[j] > tmp)
		{
			a[i] = a[j];
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
	a[i] = tmp;
}
void AdjustDwon(int* a, int n, int root)
{
	int curpos = (n / 2) - 1;
	while (curpos >= 0)
	{
		_AdjustDown3(a, curpos, n);
		curpos--;
	}
	int end = n - 1;
	while (end > 0)
	{
		int tmp = a[0];
		a[0] = a[end];
		a[end] = tmp;
		end--;
		_AdjustDown3(a, 0, --n);
	}
}

#endif
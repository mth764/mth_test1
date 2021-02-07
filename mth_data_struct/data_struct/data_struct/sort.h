#ifndef _SORT_H_
#define _SORT_H_
#include "Sysutil.h"



// 插入排序
void InsertSort(int* a, int n);
void InsertSort_1(int* a, int left,int right);
void InsertSort_2(int* a, int left, int right);
void InsertSort_3(int* a, int left, int right);
void BinInsertSort(int* a, int left, int right);
void TwoWayInsertSort(int* a, int left, int right);
// 希尔排序+
void _ShellSort(int* a, int n, int grap);
void ShellSort(int* a, int n);

// 选择排序
int GetMinIndex(int* a, int left, int right);
void SelectSort(int* a, int left,int right);

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
		/*int tmp = a[i];*/
		int j;
		if (a[i] < arr1[first])
		{
			first = (first - 1 + n) % n;
			arr1[first] = a[i];
		}
		else if (a[i]>=arr1[final])
		{
			final = final+1;
			arr1[final] = a[i];
		}
		else
		{
			j = final;
			while (a[i] < arr1[j])
			{
				arr1[(j + 1)%n] = arr1[j];
				j=(j-1+n)%n;
			}
			arr1[(j + 1)%n] = a[i];
			final++;
		}
	}
	for (int i = left; i < right; i++)
	{
		a[i] = arr1[first];
		first = (first + 1) % n;
	}
	free(arr1);
}
//希尔插入排序
void _ShellSort(int* a, int n, int grap)
{
	for (int i = 0 + grap; i < n; i++)
	{
		int tmp = a[i];
		int j = i;
		while (j>0 && tmp < a[j - grap])
		{
			a[j] = a[j - grap];
			j -= grap;
		}
		a[j] = tmp;
	}
}
void ShellSort(int* a, int n)
{
	int grap[] = { 5, 3, 2, 1 };
	int m = sizeof(grap) / sizeof(grap[0]);
	for (int i = 0; i < m; i++)
	{
		_ShellSort(a, n, grap[i]);
	}
}
//选择排序
int GetMinIndex(int* a, int left, int right)
{
	int min = left;
	for (int i = left + 1; i < right; i++)
	{
		if (a[i] < a[min])
			min = i;
	}
	return min;
}
void SelectSort(int* a, int left, int right)
{
	for (int i = left; i < right - 1; i++)
	{
		int index = GetMinIndex(a,i,right);
		swap(&a[i], &a[index]);
	}
}
//堆排序
void AdjustDwon(int* a, int n, int root)
{
	int i = root;
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
void HeapSort(int* a, int n)
{
	int curpos = (n / 2) - 1;
	while (curpos >= 0)
	{
		AdjustDwon(a, n, curpos);
		curpos--;
	}
	int end = n - 1;
	while (end > 0)
	{
		int tmp = a[0];
		a[0] = a[end];
		a[end] = tmp;
		AdjustDwon(a, end, 0);
		end--;
	}
}
//冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int low = left, high = right - 1;
	int key = a[left];
	while (low < high)
	{
		while (low<high && a[high]>key)
			high--;
		swap(&a[low], &a[high]);
		while (low < high && a[low] <= key)
			low++;
		swap(&a[low], &a[high]);
	}
	return low;
}
// 快速排序挖坑法
int PartSort2(int* a, int left, int right)
{
	int tmp = a[left];
	int low = left, high = right - 1;
	while (low < high)
	{
		while (low < high && tmp < a[high])
			high--;
		a[low] = a[high];
		while (low<high && tmp>=a[low])
			low++;
		a[high] = a[low];
	}
	a[low] = tmp;
	return low;
}
// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int pos = left;
	int key = a[left];
	for (int i = left + 1; i < right; i++)
	{
		if (a[i] < key)
		{
			pos++;
			if (i != pos)
				swap(&a[pos], &a[i]);
		}
	}
	swap(&a[left], &a[pos]);
	return pos;
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	/*int pos = PartSort1(a, left, right);*/
	//int pos = PartSort2(a, left, right);
	int pos = PartSort3(a, left, right);
	QuickSort(a, left, pos);
	QuickSort(a, pos+1, right);
}
// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);

#endif
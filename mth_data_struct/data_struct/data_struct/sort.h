#ifndef _SORT_H_
#define _SORT_H_
#include "Sysutil.h"



// ��������
void InsertSort(int* a, int n);
void InsertSort_1(int* a, int left,int right);

// ϣ������+
void ShellSort(int* a, int n);

// ѡ������
void SelectSort(int* a, int n);

// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// ð������
void BubbleSort(int* a, int n);

// ��������ݹ�ʵ��
// ��������hoare�汾
int PartSort1(int* a, int left, int right);
// ���������ڿӷ�
int PartSort2(int* a, int left, int right);
// ��������ǰ��ָ�뷨
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);
// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right);
// �鲢����ݹ�ʵ��
void MergeSort(int* a, int n);
// �鲢����ǵݹ�ʵ��
void MergeSortNonR(int* a, int n);
// ��������
void CountSort(int* a, int n);
void printarr(int* a, int n);


void printarr(int* a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

//ֱ�Ӳ�������
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
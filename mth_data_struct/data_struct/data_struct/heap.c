#define _CRT_SECURE_NO_WARNINGS
#include "heap.h"
int main()
{
	Heap hp;
	HPDataType arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int top;
	//TestTopk();
	HeapSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	/*
	//初始化
	HeapInit(&hp, n);
	//堆插
	for (int i = 0; i < n; i++)
	{
	HeapPush(&hp, arr[i]);
	}
	//初始化为堆
	//HeapCreate(&hp, arr, n);
	HeapShow(&hp);
	//获取堆顶元素
	top = HeapTop(&hp);
	printf("堆顶元素%d\n", top);
	//删除堆元素
	HeapPop(&hp);
	HeapShow(&hp);
	*/
	
	return 0;
}
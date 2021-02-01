#define _CRT_SECURE_NO_WARNINGS
#include "heap.h"
int main()
{
	Heap hp;
	HPDataType arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int n = sizeof(arr) / sizeof(arr[0]);
	HeapCreate(&hp, arr, n);
	//≥ı ºªØ
	HeapInit(&hp, n);
	//∂—≤Â
	for (int i = 0; i < n; i++)
	{
		HeapPush(&hp, arr[i]);
	}
	HeapShow(&hp, 0,n);
	HeapPop(&hp);
	HeapShow(&hp, 0, n);
	return 0;
}
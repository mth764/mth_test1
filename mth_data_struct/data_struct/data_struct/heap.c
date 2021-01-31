#define _CRT_SECURE_NO_WARNINGS
#include "heap.h"
int main()
{
	Heap hp;
	HPDataType arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	HeapCreate(&hp, arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}
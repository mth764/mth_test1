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
	//��ʼ��
	HeapInit(&hp, n);
	//�Ѳ�
	for (int i = 0; i < n; i++)
	{
	HeapPush(&hp, arr[i]);
	}
	//��ʼ��Ϊ��
	//HeapCreate(&hp, arr, n);
	HeapShow(&hp);
	//��ȡ�Ѷ�Ԫ��
	top = HeapTop(&hp);
	printf("�Ѷ�Ԫ��%d\n", top);
	//ɾ����Ԫ��
	HeapPop(&hp);
	HeapShow(&hp);
	*/
	
	return 0;
}
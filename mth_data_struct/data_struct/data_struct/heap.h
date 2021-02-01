#ifndef _HEAP_H_
#define _HEAP_H_
#include "Sysutil.h"

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;
//�ϵ�
void _HeapUp(Heap* hp);
//�µ�
void _HeapDown(Heap* hp);
//�ѵĳ�ʼ��
void HeapInit(Heap* hp,int n);
// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n);
// �ѵ�����
void HeapDestory(Heap* hp);
// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* hp);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp);
// �ѵ����ݸ���
int HeapSize(Heap* hp);
// �ѵ��п�
int HeapEmpty(Heap* hp);

// ��������ж�����
void HeapSort(int* a, int n);

// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k);
void TestTopk();
void HeapShow(Heap* hp,int start,int end);


//////////////////////////////////////////////////
void _AdjustUp(Heap* hp)
{
	int j = hp->_size;
	int i = (j - 1) / 2;
	while (j > 0)
	{
		if (hp->_a[j] < hp->_a[i])
		{
			int tmp = hp->_a[j];
			hp->_a[j] = hp->_a[i];
			hp->_a[i] = tmp;
			j = i;
			i = (j - 1) / 2;
		}
		else
			break;
	}
}
void _AdjustDown(Heap* hp)
{
	int i = 0;
	int j = 2 * i + 1;
	while (j < hp->_size)
	{
		if (j+1<hp->_size && hp->_a[j] > hp->_a[j + 1])
			j = j + 1;

		if (hp->_a[j] < hp->_a[i])
		{
			int tmp = hp->_a[i];
			hp->_a[i] = hp->_a[j];
			hp->_a[j] = tmp;
		}
		i = j;
		j = 2 * i + 1;
	}
}
bool HeapIsfull(Heap* hp)
{
	return hp->_size >= hp->_capacity;
}
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0 ? 1 : 0;
}
void HeapInit(Heap* hp,int n)
{
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	assert(hp->_a != NULL);
	hp->_capacity = n;
	hp->_size = 0;

}
void HeapShow(Heap* hp)
{
	for (int i = 0; i < hp->_size; ++i)
	{
		printf("%d ", hp->_a[i]);
	}
	printf("\n");
}
void HeapCreate(Heap* hp, HPDataType* a, int n)
{

}
void HeapPush(Heap* hp, HPDataType x)
{
	if (HeapIsfull(hp))
	{
		printf("��������%d ���ɲ���\n", x);
		return;
	}
	hp->_a[hp->_size] = x;
	_AdjustUp(hp);
	hp->_size++;
}
HPDataType HeapTop(Heap* hp)
{
	HPDataType top = hp->_a[0];
	return top;
}
void HeapPop(Heap* hp)
{
	if (HeapEmpty(hp))
	{
		printf("���ѿգ�����ɾ��\n");
		return;
	}
	hp->_size--;
	hp->_a[0] = hp->_a[hp->_size];
	_AdjustDown(hp);
	
}


#endif      //_HEAP_H_
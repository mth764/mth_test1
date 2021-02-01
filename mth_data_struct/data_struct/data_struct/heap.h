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
//上调
void _HeapUp(Heap* hp);
//下调
void _HeapDown(Heap* hp);
//堆的初始化
void HeapInit(Heap* hp,int n);
// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n);
// 堆的销毁
void HeapDestory(Heap* hp);
// 堆的插入
void HeapPush(Heap* hp, HPDataType x);
// 堆的删除
void HeapPop(Heap* hp);
// 取堆顶的数据
HPDataType HeapTop(Heap* hp);
// 堆的数据个数
int HeapSize(Heap* hp);
// 堆的判空
int HeapEmpty(Heap* hp);

// 对数组进行堆排序
void HeapSort(int* a, int n);

// TopK问题：找出N个数里面最大/最小的前K个问题。
// 比如：未央区排名前10的泡馍，西安交通大学王者荣耀排名前10的韩信，全国排名前10的李白。等等问题都是Topk问题，
// 需要注意：
// 找最大的前K个，建立K个数的小堆
// 找最小的前K个，建立K个数的大堆
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
		printf("堆已满，%d 不可插入\n", x);
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
		printf("堆已空，不能删除\n");
		return;
	}
	hp->_size--;
	hp->_a[0] = hp->_a[hp->_size];
	_AdjustDown(hp);
	
}


#endif      //_HEAP_H_
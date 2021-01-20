#include"Sysutil.h"
//˳���
#define ElemType int
#define SeqList_size 8

typedef struct SeqList
{
	int* base;
	size_t capacity;
	size_t size;
}SeqList;

void SeqListInit(SeqList* pst);
void SeqListPushBack(SeqList* pst, ElemType item);
void SeqListPushFront(SeqList* pst, ElemType item);
void SeqListShowList(SeqList* pst);
void SeqListPopBack(SeqList* pst);
void SeqListPopFront(SeqList* pst);
bool IsFull(SeqList* pst);
bool IsEmpty(SeqList* pst);


////////////////////////////////////////////������ʵ��
void SeqListInit(SeqList* pst)
{
	assert(pst);
	pst->base = (ElemType*)malloc(sizeof(ElemType)*SeqList_size);
	memset(pst->base, 0, sizeof(ElemType)*SeqList_size);
	pst->capacity = SeqList_size;
	pst->size = 0;
}
bool IsFull(SeqList* pst)
{
	return pst->size >= SeqList_size;
}
bool Is_Empty(SeqList* pst)
{
	return pst->size <= 0;
}
void SeqListPushBack(SeqList* pst, ElemType item)
{
	assert(pst);
	if (IsFull(pst))
	{
		printf("˳�������������β������%d\n", item);
		return;
	}
	pst->base[pst->size++] = item;
}
void SeqListPushFront(SeqList* pst, ElemType item)
{
	assert(pst);
	if (IsFull(pst))
	{
		printf("˳�������������ǰ�˲���%d\n", item);
		return;
	}
	for (int i = pst->size; i > 0; i--)
	{
		pst->base[i] = pst->base[i - 1];
	}
	pst->base[0] = item;
	pst->size++;
}
void SeqListShowList(SeqList* pst)
{
	assert(pst);
	for (size_t i = 0; i < pst->size; i++)
		printf("%d ", pst->base[i]);
	printf("\n");
}
void SeqListPopBack(SeqList* pst)
{
	assert(pst);
	if (Is_Empty(pst))
	{
		printf("�б��ѿգ����ܺ��ɾ��\n");
	}
	pst->size--;
}
void SeqListPopFront(SeqList* pst)
{
	assert(pst);
	if (Is_Empty(pst))
	{
		printf("�б��ѿգ����ܺ��ɾ��\n");
		return;
	}
	for (size_t i = 1; i < pst->size; i++)
	{
		pst->base[i - 1] = pst->base[i];
	}
	pst->size--;
}
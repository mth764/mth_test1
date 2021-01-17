#include"Sysutil.h"
//顺序表
#define ElemType int
#define SeqList_size 8

typedef struct SeqList
{
	int* base;
	size_t capacity;
	size_t size;
}SeqList;

void SeqList_init(SeqList* pst);
void SeqList_push_back(SeqList* pst, ElemType item);
void SeqList_push_front(SeqList* pst, ElemType item);
void SeqList_show_list(SeqList* pst);
void SeqList_pop_back(SeqList* pst);
void SeqList_pop_front(SeqList* pst);
bool IsFull(SeqList* pst);
bool IsEmpty(SeqList* pst);


////////////////////////////////////////////函数的实现
void SeqList_init(SeqList* pst)
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
void SeqList_push_back(SeqList* pst, ElemType item)
{
	assert(pst);
	if (IsFull(pst))
	{
		printf("顺序表已满，不能尾部插入%d\n", item);
		return;
	}
	pst->base[pst->size++] = item;
}
void SeqList_push_front(SeqList* pst, ElemType item)
{
	assert(pst);
	if (IsFull(pst))
	{
		printf("顺序表已满，不能前端插入%d\n", item);
		return;
	}
	for (int i = pst->size; i > 0; i--)
	{
		pst->base[i] = pst->base[i - 1];
	}
	pst->base[0] = item;
	pst->size++;
}
void SeqList_show_list(SeqList* pst)
{
	assert(pst);
	for (size_t i = 0; i < pst->size; i++)
		printf("%d ", pst->base[i]);
}
void SeqList_pop_back(SeqList* pst)
{
	assert(pst);
	if (Is_Empty(pst))
	{
		printf("列表已空，不能后端删除\n");
	}
	pst->size--;
}
void SeqList_pop_front(SeqList* pst)
{
	assert(pst);
	if (Is_Empty(pst))
	{
		printf("列表已空，不能后端删除\n");
		return;
	}
	for (size_t i = 1; i < pst->size; i++)
	{
		pst->base[i - 1] = pst->base[i];
	}
	pst->size--;
}
#ifndef _LIST_H_
#define _LIST_H_
#include"Sysutil.h"

#define ElemType int


typedef struct DCListNode
{
	ElemType data;
	struct DCListNode* next;
	struct DCListNode* prev;
}DCListNode;

typedef struct DCList
{
	DCListNode* first;
	DCListNode* last;
	size_t size;
}DCList;


//动态申请一个节点
DCListNode* BuyDCListNode(ElemType key);
//初始化
void DCListInit(DCList *plist);
void DCListPrint(DCList *plist);
//尾插
void DCListPushBack(DCList *plist, ElemType key);
//头插
void DCListPushFront(DCList *plist, ElemType key);
//尾删
void DCListPopBack(DCList *plist);
//头删
void DCListPopFront(DCList *plist);
//测量长度
size_t DCListLength(DCList *plist);
//按值插入
void DCListInsert_val(DCList *plist, ElemType key);
//按值删除
void DCListDelete_val(DCList *plist, ElemType key);
//查找
DCListNode* DCListFind(DCList *plist, ElemType key);
//排序
void DCListsort(DCList *plist);
//删除重复
void DCListremoveall(DCList *plist, ElemType key);
//转置
void DCListreverse(DCList *plist);
//清除
void DCListclear(DCList *plist);
//摧毁
void DCListdestroy(DCList *plist);


DCListNode* BuyDCListNode(ElemType key)
{
	DCListNode* s = malloc(sizeof(DCListNode));
	assert(s != NULL);
	s->data = key;
	s->next = NULL;
	s->prev = NULL;
	return s;
}
void DCListInit(DCList *plist)
{
	assert(plist);
	DCListNode* s = BuyDCListNode(0);
	plist->first = plist->last = s;
	plist->size = 0;

	plist->first->next = plist->first;
	plist->first->prev = plist->last;

}
void DCListPrint(DCList *plist)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	while (p != plist->first)
	{
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("over.\n");
}
void DCListPushBack(DCList *plist, ElemType key)
{
	assert(plist);
	DCListNode* s = BuyDCListNode(key);
	
	plist->last->next = s;
	s->prev = plist->last;
	plist->last = s;
	plist->last->next = plist->first;
	plist->first->prev = plist->last;
	plist->size++;
}
void DCListPushFront(DCList *plist, ElemType key)
{
	assert(plist);
	DCListNode* s = BuyDCListNode(key);
	s->next = plist->first->next;
	plist->first->prev = s;
	plist->first->next = s;
	s->prev = plist->first;
	plist->size++;
	if (1 == plist->size)
		plist->last = s;
}
void DCListPopBack(DCList *plist)
{
	assert(plist);
	DCListNode* p = plist->last;
	if (plist->first == plist->last)
		return;
	plist->first->prev = p->prev;
	p->prev->next = plist->first;
	plist->last = p->prev;
	free(p);
	plist->size--;
}
void DCListPopFront(DCList *plist)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	if (plist->first == plist->last)
		return;

	plist->first->next = p->next;
	p->next->prev = plist->first;
	free(p);
	plist->size--;

	if (plist->size == 0)
		plist->last = plist->first;
}
size_t DCListLength(DCList *plist)
{
	/*size_t length=0;
	DCListNode* p = plist->first->next;
	while (p != plist->first)
	{
		length++;
		p = p->next;
	}
	return length;*/
	return plist->size;
}
void DCListInsert_val(DCList *plist, ElemType key)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	DCListNode* s = BuyDCListNode(key);
	while (p != plist->first && s->data > p->data)
	{
		p = p->next;
	}
	p->prev->next = s;
	s->prev = p->prev;
	s->next = p;
	p->prev = s;
	if (p == plist->first)
		plist->last = s;
	plist->size++;
}
void DCListDelete_val(DCList *plist, ElemType key)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	while (p != plist->first&&key != p->data)
	{
		p = p->next;
	}
	if (p == plist->first)
		return;
	p->prev->next = p->next;
	p->next->prev = p->prev;
	if (p == plist->last)
		plist->last = p->prev;
	free(p);
	plist->size--;
}
DCListNode* DCListFind(DCList *plist, ElemType key)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	while (p != plist->first && key != p->data)
	{
		p = p->next;
	}
	if (p == plist->first)
		return NULL;
	else
		return p;
}
void DCListsort(DCList *plist)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	DCListNode* q = p->next;
	
	if (0 == plist->size || 1 == plist->size)
		return;
	
	p->next = plist->first;
	plist->first->prev = p;
	plist->last = p;
	
	while (q != plist->first)
	{
		p = q;
		q = q->next;
		DCListInsert_val(plist, p->data);
	}
}
void DCListremoveall(DCList *plist, ElemType key)
{
	assert(plist);
	while (1)
	{
		DCListNode* p = plist->first->next;
		while (p != plist->first&&key != p->data)
		{
			p = p->next;
		}
		if (p == plist->first)
			return;
		p->prev->next = p->next;
		p->next->prev = p->prev;
		if (p == plist->last)
			plist->last = p->prev;
		free(p);
		plist->size--;
	}
}
void DCListreverse(DCList *plist)
{
	assert(plist);
	DCListNode* p = plist->first->next;
	DCListNode* q = p->next;

	if (0 == plist->size || 1 == plist->size)
		return;
	p->next = plist->first;
	plist->first->prev = p;
	plist->last = p;
	while (q != plist->first)
	{
		p = q;
		q = q->next;
		DCListPushFront(plist,p->data);
	}
}
void DCListclear(DCList *plist)
{
	while (plist->first != plist->last)
	{
		DCListNode* p = plist->last;
		plist->last = p->prev;
		plist->last->next = plist->first;
		plist->first->prev = plist->last;
		free(p);
		plist->size--;
	}
}
void DCListdestroy(DCList *plist)
{
	DCListclear(plist);
	DCListNode* p = plist->first;
	free(p);
	p = NULL;
}

#endif /* _DCLIST_H_ */
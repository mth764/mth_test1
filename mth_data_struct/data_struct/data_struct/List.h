#ifndef _LIST_H_
#define _LIST_H_
#include"Sysutil.h"
#define ElemType int



typedef struct SListNode
{
    ElemType data;
	struct SListNode* next;
}SListNode;
typedef struct SList
{
	struct SListNode* head;
}SList;




//链表初始化
void SListInit(SList* plist);
// 动态申请一个节点
SListNode* BuySListNode(ElemType x);
// 单链表打印
void SListPrint(SList* plist);
// 单链表尾插
void SListPushBack(SList* plist, ElemType key);
// 单链表的头插
void SListPushFront(SList* plist, ElemType key);
// 单链表的尾删
void SListPopBack(SList* plist);
// 单链表头删
void SListPopFront(SList* plist);
//链表长度测量
int SListLength(SList* plist);
//按值插入
void SListInsert_val(SList* plist,int key);
//按值删除
void SListDelete_val(SList* plist, int key);
// 单链表查找
SListNode* SListFind(SList* plist, ElemType key);
//排序
void SListsort(SList* plist);
//转置
void SListreverse(SList* plist);
//清除
void SListclear(SList* plist);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, ElemType key);
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);
// 单链表的销毁
void SListDestory(SList* plist);


//链表初始化
void SListInit(SList* plist)
{
	plist->head = NULL;
}

//动态申请一个节点
SListNode* BuySListNode(ElemType x)
{
	SListNode* p = (SListNode*)malloc(sizeof(SListNode));
	assert(p!=NULL);
	p->data = x;
	p->next = NULL;
	return p;
}

// 单链表打印
void SListPrint(SList* plist)
{
	SListNode* p = plist->head;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("over\n");
}

//尾插
void SListPushBack(SList* plist,int key)
{
	assert(plist);
	SListNode* s = BuySListNode(key);
	s->next = NULL;

	SListNode* p = plist->head;
	
	if (p == NULL)
	{
		plist->head = s;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = s;
	}
}
//头插
void SListPushFront(SList* plist, ElemType key)
{
	assert(plist != NULL);
	SListNode* s = BuySListNode(key);
	s->data = key;

	SListNode* p = plist->head;
	s->next = p;
	plist->head = s;
}

//尾删
void SListPopBack(SList* plist)
{
	assert(plist != NULL);
	SListNode* p = plist->head;
	SListNode* pre = NULL;
	if (p != NULL)
	{
		if (p->next == NULL)
			plist->head = NULL;
		else
		{
			while (p->next != NULL)
			{
				pre = p;
				p = p->next;
			}
			pre->next = NULL;
		}
		free(p);
	}	
}

//头删
void SListPopFront(SList* plist)
{
	assert(plist != NULL);
	SListNode* p = plist->head;
	if (p == NULL)
		return;
	else
	{
		plist->head = p->next;
		free(p);
	}
}

//长度测量
int SListLength(SList* plist)
{
	int length = 0;
	assert(plist != NULL);
	SListNode* p = plist->head;
	while (p != NULL)
	{
		length++;
		p = p->next;
	}
	return length;
}

//按值插入
void SListInsert_val(SList* plist, int key)
{
	assert(plist);
	SListNode* s = BuySListNode(key);
	SListNode* p = plist->head;
	SListNode* pre = NULL;
	if (p == NULL)
		plist->head = s;
	else
	{
		while (p != NULL && p->data < s->data)
		{
			pre = p;
			p = p->next;
		}
		if (pre == NULL)
		{
			s->next = plist->head;
			plist->head = s;
		}
		else
		{
			s->next = pre->next;
			pre->next = s;
		}
	}
}

//按值删除
void SListDelete_val(SList* plist, int key)
{
	assert(plist);
	SListNode* p = plist->head;
	SListNode* pre = NULL;
	while (p != NULL && p->data != key)
	{
		pre = p;
		p = p->next;
	}
	if (p != NULL)
	{
		if (pre == NULL)
			plist->head = p->next;
		else
		{
			pre->next = p->next;
		}
		free(p);
	}
}

//按值查找
SListNode* SListFind(SList* plist, ElemType key)
{
	SListNode* p = plist->head;
	while (p != NULL && p->data != key)
	{
		p = p->next;
	}
	if (p != NULL)
		return p;
	else
		return NULL;
}

//排序
void SListsort(SList* plist)
{

}

//转置
void SListreverse(SList* plist)
{
	assert(plist);
	SListNode* p, *q;
	if (plist->head == NULL)
		return;
	else if (plist->head->next == NULL)
		return;
	else
	{
		p = plist->head->next;
		plist->head->next = NULL;
		q = p;
		while (q != NULL)
		{
			q = q->next;
			p->next = plist->head;
			plist->head = p;
			p = q;
		}
	}
}

//清除
void SListclear(SList* plist)
{
	assert(plist);
	SListNode* p = plist->head;
	while (p != NULL)
	{
		plist->head = p->next;
		free(p);
		p = plist->head;
	}
}



#endif /* _LIST_H_ */
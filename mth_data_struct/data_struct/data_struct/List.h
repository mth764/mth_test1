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




//�����ʼ��
void SListInit(SList* plist);
// ��̬����һ���ڵ�
SListNode* BuySListNode(ElemType x);
// �������ӡ
void SListPrint(SList* plist);
// ������β��
void SListPushBack(SList* plist, ElemType key);
// �������ͷ��
void SListPushFront(SList* plist, ElemType key);
// �������βɾ
void SListPopBack(SList* plist);
// ������ͷɾ
void SListPopFront(SList* plist);
//�����Ȳ���
int SListLength(SList* plist);
//��ֵ����
void SListInsert_val(SList* plist,int key);
//��ֵɾ��
void SListDelete_val(SList* plist, int key);
// ���������
SListNode* SListFind(SList* plist, ElemType key);
//����
void SListsort(SList* plist);
//ת��
void SListreverse(SList* plist);
//���
void SListclear(SList* plist);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, ElemType key);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);
// �����������
void SListDestory(SList* plist);


//�����ʼ��
void SListInit(SList* plist)
{
	plist->head = NULL;
}

//��̬����һ���ڵ�
SListNode* BuySListNode(ElemType x)
{
	SListNode* p = (SListNode*)malloc(sizeof(SListNode));
	assert(p!=NULL);
	p->data = x;
	p->next = NULL;
	return p;
}

// �������ӡ
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

//β��
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
//ͷ��
void SListPushFront(SList* plist, ElemType key)
{
	assert(plist != NULL);
	SListNode* s = BuySListNode(key);
	s->data = key;

	SListNode* p = plist->head;
	s->next = p;
	plist->head = s;
}

//βɾ
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

//ͷɾ
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

//���Ȳ���
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

//��ֵ����
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

//��ֵɾ��
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

//��ֵ����
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

//����
void SListsort(SList* plist)
{

}

//ת��
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

//���
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
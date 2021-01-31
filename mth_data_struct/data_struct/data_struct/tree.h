#ifndef _TREE_H_
#define _TREE_H_

#include "Sysutil.h"

#define TreeElemType char
//�������ڵ�
typedef struct BinTreeNode
{
	TreeElemType data;
	struct BinTreeNode* leftChild;
	struct BinTreeNode* rightChild;
}BinTreeNode;
//�������νṹ

typedef BinTreeNode* BinTree;

//ʵ�ֹ��ܺ�������
void BinTreeInit(BinTree *t);
//���Ĵ���
void BinTreeCreate_1(BinTree *t);
BinTreeNode* BinTreeCreate_2();
BinTreeNode* BinTreeCreate_3(char str, int* i);
//BinTree BinTreeCreate_2();
//BinTree BinTreeCreate_3(const char *str, int *i);
//�ݹ����
void PreOrder(BinTree t);
void InOrder(BinTree t);
void PastOrder(BinTree t);
//�ǵݹ����
void InOrder_Nor(BinTree t);
void InOrder_Nor(BinTree t);
void PastOrder_Nor(BinTree t);
//ʵ�ֹ��ܺ�������
void BinTreeInit(BinTree *t)
{
	*t = NULL;
}
void BinTreeCreate_1(BinTree *t)
{
	TreeElemType item;
	scanf("%c", &item);
	if (item == '#')
		*t = NULL;
	else
	{
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(*t != NULL);
		(*t)->data = item;
		BinTreeCreate_1(&((*t)->leftChild));
		BinTreeCreate_1(&((*t)->rightChild));
	}
}
BinTreeNode* BinTreeCreate_2()
{
	BinTreeNode* t;
	TreeElemType item;
	scanf("%c", &item);
	if (item == '#')
		t = NULL;
	else
	{
		t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = item;
		t->leftChild=BinTreeCreate_2();
		t->rightChild = BinTreeCreate_2();
	}
	return t;
}
BinTreeNode* BinTreeCreate_3(const char* str, int* i)
{
	if (str[*i] == '#' || str[*i] == '\0')
		return NULL;
	else
	{
		BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = str[*i];
		(*i)++;
		t->leftChild = BinTreeCreate_2(str,i);
		(*i)++;
		t->rightChild = BinTreeCreate_2(str,i);
		return t;
	}
}
void PreOrder(BinTree t)
{
	if (t != NULL)
	{
		printf("%c ", t->data);
		PreOrder(t->leftChild);
		PreOrder(t->rightChild);
	}
}
void InOrder(BinTree t)
{
	if (t != NULL)
	{
		PreOrder(t->leftChild);
		printf("%c ", t->data);
		PreOrder(t->rightChild);
	}
}
void PastOrder(BinTree t)
{
	if (t != NULL)
	{
		PreOrder(t->leftChild);
		PreOrder(t->rightChild);
		printf("%c ", t->data);
	}
}
//BinTreeNode* Find(BinTree t, TreeElemType key)
//{
//}
//bool Equal(BinTree t1, BinTree t2)
//{
//	if (t1 == NULL&&t2 == NULL);
//}
//void PreOrder_Nor(BinTree t)
//{
//	stack sq;
//	if (t == NULL)
//		return;
//	else
//	{
//		push(BinTree t);
//		BinTreeNode* s = top();
//		pop();
//		if (s->leftchild != NULL)
//			push(s->leftchild)
//
//	}
//}
//BinTree BinTreeCreate_2(BinTree *t)
//{
//	TreeElemType item;
//	scanf("%c", &item);
//	if (item == '#')
//		*t = NULL;
//	else
//	{
//		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		assert(t != NULL);
//		(*t)->data = item;
//		BinTreeCreate_1(&((*t)->leftChild));
//		BinTreeCreate_1(&((*t)->leftChild));
//	}
//}
//#include "stack.h"
//void InOrder_Nor(BinTree t)
//{
//	if (t != NULL)
//	{
//		LinkStack st;
//		LinkStackInit(&st);
//		LinkStackPush(&st, t);
//		if (t->leftChild!=NULL)
//		while (!LinkStackEmpty(&st))
//		{
//			BinTreeNode* p = LinkStackTop(&st);
//			if (p->leftChild != NULL)
//				LinkStackPush(&st, p->leftChild);
//			else
//			{
//				printf("%c", p->data);
//				void LinkStackPop(LinkStack *pst);
//				if (p->rightChild != NULL)
//					LinkStackPush(&st, p->leftChild);
//			}
//				
//			LinkStackPush(&st, t);
//		}
//	}
//}
void InOrder_Nor(BinTree t);
void InOrder_Nor(BinTree t);
void PastOrder_Nor(BinTree t);
#endif      //_TREE_H_
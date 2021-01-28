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
//BinTree BinTreeCreate_2();
//BinTree BinTreeCreate_3(const char *str, int *i);
//����
void PreOrder(BinTree t);
void InOrder(BinTree t);
void PastOrder(BinTree t);
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
#endif      //_TREE_H_
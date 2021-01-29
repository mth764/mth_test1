#ifndef _STACK_H_
#define _STACK_H_
#include"Sysutil.h"

//#define StackElemType int
//#define ElemType int
#define defaultsize 8


// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// ջ��
	int _capacity;  // ���� 
}Stack;
// ��ʼ��ջ 
void StackInit(Stack* ps);
// ��ջ 
void StackPush(Stack* ps, STDataType data);
// ��ջ 
void StackPop(Stack* ps);
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps);
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);
// ����ջ 
void StackDestroy(Stack* ps);


void StackInit(Stack* ps)
{
	assert(ps);
	ps->_capacity = defaultsize;
	STDataType* _a = (STDataType*)malloc(sizeof(STDataType)*ps->_capacity);
	assert(_a);
	ps->_top = 0;
}
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_top >= ps->_capacity)
	{
		printf("ջ������%d���ܲ���\n", data);
		return;
	}
	else
	{
		ps->_a[ps->_top++] = data;
	}
}
void StackPop(Stack* ps)
{
	assert(ps);
	if (ps ->_top == 0)
	{
		printf("ջ�ѿգ����ܳ�ջ");
		return;
	}
	ps->_top--;
}
STDataType StackTop(Stack* ps)
{
	assert(ps&&ps->_top != 0);
	return ps->_a[ps->_top - 1];
}
int StackSize(Stack* ps)
{
	return ps->_top;
}
int StackEmpty(Stack* ps)
{
	if (ps->_top == 0)
		return 1;
	else
		return 0;
}
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
}
////////////////////////////////////////////////////////////////
//��ջ
struct BinTreeNode;
#define StackElemType struct BinTreeNode*
typedef struct LinkStackNode
{
	StackElemType data;
	struct LinkStackNode *next;
}LinkStackNode;
typedef struct LinkStack
{
	LinkStackNode *head;
}LinkStack;

void LinkStackInit(LinkStack *pst);
void LinkStackDestroy(LinkStack *pst);
void LinkStackPush(LinkStack *pst, StackElemType x);
void LinkStackPop(LinkStack *pst);
StackElemType LinkStackTop(LinkStack *pst);
void LinkStackShow(LinkStack *pst);
bool LinkStackEmpty(LinkStack *pst)
{
	return pst->head == NULL;
}

void LinkStackInit(LinkStack *pst)
{
	assert(pst);
	pst->head = NULL;
}

void LinkStackPush(LinkStack *pst, StackElemType x)
{
	assert(pst);
	LinkStackNode *s = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	assert(s != NULL);
	s->data = x;

	s->next = pst->head;
	pst->head = s;
}

void LinkStackPop(LinkStack *pst)
{
	assert(pst);
	if (pst->head != NULL)
	{
		LinkStackNode *p = pst->head;
		pst->head = p->next;
		free(p);
	}
}

StackElemType LinkStackTop(LinkStack *pst)
{
	assert(pst && pst->head != NULL);
	return pst->head->data;
}

void LinkStackShow(LinkStack *pst)
{
	assert(pst);
	LinkStackNode *p = pst->head;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}

void LinkStackDestroy(LinkStack *pst)
{
	assert(pst);
	while (pst->head != NULL)
	{
		LinkStackNode *p = pst->head;
		pst->head = p->next;
		free(p);
	}
}









#endif /* _TEAM_H_ */
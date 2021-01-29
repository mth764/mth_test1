#ifndef _STACK_H_
#define _STACK_H_
#include"Sysutil.h"

//#define StackElemType int
//#define ElemType int
#define defaultsize 8


// 支持动态增长的栈
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// 栈顶
	int _capacity;  // 容量 
}Stack;
// 初始化栈 
void StackInit(Stack* ps);
// 入栈 
void StackPush(Stack* ps, STDataType data);
// 出栈 
void StackPop(Stack* ps);
// 获取栈顶元素 
STDataType StackTop(Stack* ps);
// 获取栈中有效元素个数 
int StackSize(Stack* ps);
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps);
// 销毁栈 
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
		printf("栈已满，%d不能插入\n", data);
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
		printf("栈已空，不能出栈");
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
//链栈
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
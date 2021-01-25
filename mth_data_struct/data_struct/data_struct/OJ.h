#include "Sysutil.h"
//1、括号匹配问题
#define StackElemType char
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
void LinkStackPush(LinkStack *pst, StackElemType x);
void LinkStackPop(LinkStack *pst);
StackElemType LinkStackTop(LinkStack *pst);
bool LinkStackIsEmpty(LinkStack *pst)
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
bool isValid(char * s)
{
	if (s == NULL || *s == '\0')
		return true;
	LinkStack st;
	LinkStackInit(&st);
	while (*s != '\0')
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			LinkStackPush(&st, *s);
		}
		else
		{
			if (LinkStackIsEmpty(&st))
				return false;
			char top_val = LinkStackTop(&st);
			if (*s == ')'&&top_val != '(' ||
				*s == ']'&&top_val != '[' ||
				*s == '}'&&top_val != '{')
				return false;
			LinkStackPop(&st);
		}
		s++;
	}
	if (LinkStackIsEmpty(&st))
		return true;
	return false;
}
//2、用队列实现栈

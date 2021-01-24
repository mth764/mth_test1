#ifndef _STACK_H_
#define _STACK_H_
#include"Sysutil.h"

#define ElemType int
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









#endif /* _TEAM_H_ */
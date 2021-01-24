#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Sysutil.h"


typedef  int QDataType;
// ��ʽ�ṹ����ʾ���� 
typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;

// ���еĽṹ 
typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;

// ��ʼ������ 
void QueueInit(Queue* q);
// ��β����� 
void QueuePush(Queue* q, QDataType data);
// ��ͷ������ 
void QueuePop(Queue* q);
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q);
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q);
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q);
// ���ٶ��� 
void QueueDestroy(Queue* q);
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
}
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* s = malloc(sizeof(QNode));
	assert(s != NULL);
	s->_data = data;
	s->_next = NULL;
	if (q->_front == NULL)
		q->_front = q->_rear = s;
	else
	{
		q->_rear->_next = s;
		q->_rear = s;
	}
}
void QueuePop(Queue* q)
{
	assert(q);
	QNode* p = q->_front;
	if (p == NULL)
	{
		printf("�����ѿգ����ܳ�����\n");
		return;
	}
	else
	{
		q->_front = p->_next;
		if (q->_front == NULL)
			q->_front = q->_rear = NULL;
		free(p);
	}
}
QDataType QueueFront(Queue* q)
{
	assert(q&&q->_front != NULL);
	return q->_front->_data;
}
QDataType QueueBack(Queue* q)
{
	assert(q&&q->_front != NULL);
	return q->_rear->_data;
}
int QueueSize(Queue* q)
{
	assert(q);
	int len = 0;
	QNode* p = q->_front;
	while (p != NULL)
	{
		len++;
		p = p->_next;
	}
	return len;
}
int QueueEmpty(Queue* q)
{
	assert(q);
	if (q->_front == NULL&&q->_rear == NULL)
		return 1;
	else
		return 0;
}
void QueueDestroy(Queue* q)
{
	QNode* p = q->_front;
	while (q->_front != NULL)
	{
		q->_front = p->_next;
		free(p);
	}
	q->_front = q->_rear = NULL;
}
#endif      //_QUEUE_H_
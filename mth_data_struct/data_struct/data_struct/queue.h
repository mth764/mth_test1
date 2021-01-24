#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Sysutil.h"


typedef  int QDataType;
// 链式结构：表示队列 
typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;

// 队列的结构 
typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;

// 初始化队列 
void QueueInit(Queue* q);
// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
// 队头出队列 
void QueuePop(Queue* q);
// 获取队列头部元素 
QDataType QueueFront(Queue* q);
// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
// 获取队列中有效元素个数 
int QueueSize(Queue* q);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q);
// 销毁队列 
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
		printf("队列已空，不能出队列\n");
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
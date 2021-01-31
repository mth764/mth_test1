///////////////////链表/////////////////////////////
//1、给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
struct ListNode *detectCycle(struct ListNode *head)
{
	if (head == NULL)
		return NULL;
	struct ListNode *fast = head;
	struct ListNode *slow = head;

	while (fast != NULL&&fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast)
			break;
	}
	if (fast == NULL || fast->next == NULL)
		return NULL;
	fast = head;
	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}
//2、给定一个链表，判断链表中是否有环。如果链表中存在环，则返回 true 。 否则，返回 false 。
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
bool hasCycle(struct ListNode *head)
{
	if (head == NULL)
		return false;
	struct ListNode *fast = head;
	struct ListNode *slow = head;
	while (fast&&fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
			return true;
	}
	return false;
}
//3、对于一个链表，请设计一个时间复杂度为O(n),
//额外空间复杂度为O(1)的算法，判断其是否为回文结构。
bool chkPalindrome(ListNode* A)
{
	int arr[900] = { 0 };
	int i = 0;
	int start, end;
	if (A == NULL)
		return true;
	ListNode* p = A;
	while (p != NULL)
	{
		arr[i++] = p->val;
		p = p->next;
	}
	start = 0;
	end = i - 1;
	while (start<end)
	{
		if (arr[start] == arr[end])
		{
			start++;
			end--;
		}
		else
			return false;
	}
	return true;
}
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
#define QueueElemType int
typedef struct LinkQueueNode
{
	QueueElemType data;
	struct LinkQueueNode *next;
}LinkQueueNode;


typedef struct LinkQueue
{
	LinkQueueNode *head;
	LinkQueueNode *tail; //指向队尾节点
}LinkQueue;


void LinkQueueInit(LinkQueue *pq);
void LinkQueueDestroy(LinkQueue *pq);
void LinkQueueDestroy(LinkQueue *pq);
void LinkQueueEn(LinkQueue *pq, QueueElemType x);
void LinkQueueDe(LinkQueue *pq);
QueueElemType LinkQueueBack(LinkQueue *pq);
QueueElemType LinkQueueFront(LinkQueue *pq);


bool LinkQueueIsempty(LinkQueue *pq)
{
	return pq->head == NULL;
}
void LinkQueueInit(LinkQueue *pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}


void LinkQueueDestroy(LinkQueue *pq)
{
	assert(pq);
	while (pq->head != NULL)
	{
		LinkQueueNode *p = pq->head;
		pq->head = p->next;
		free(p);
	}
	pq->head = pq->tail = NULL;
}


void LinkQueueEn(LinkQueue *pq, QueueElemType x)
{
	assert(pq);
	LinkQueueNode *s = (LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;
	if (pq->head == NULL)
		pq->head = pq->tail = s;
	else
	{
		pq->tail->next = s;
		pq->tail = s;
	}
}


void LinkQueueDe(LinkQueue *pq)
{
	assert(pq);
	if (pq->head != NULL)
	{
		LinkQueueNode *p = pq->head;
		pq->head = p->next;
		if (pq->head == NULL)
			pq->tail = NULL;
		free(p);
	}
}
QueueElemType LinkQueueBack(LinkQueue *pq)
{
	assert(pq && pq->head);
	return pq->tail->data;
}
QueueElemType LinkQueueFront(LinkQueue *pq)
{
	assert(pq && pq->head);
	return pq->head->data;
}
///////////////////////////////////////////////////////////////////////////////
typedef struct
{
	LinkQueue q1;
	LinkQueue q2;
} MyStack;


/** Initialize your data structure here. */


MyStack* myStackCreate()
{
	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
	LinkQueueInit(&(pst->q1));
	LinkQueueInit(&(pst->q2));
	return pst;


}


/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x)
{
	LinkQueue* pnoempty;
	if (LinkQueueIsempty(&(obj->q1)))
		pnoempty = &(obj->q2);
	else
		pnoempty = &(obj->q1);
	LinkQueueEn(pnoempty, x);
}


/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj)
{
	LinkQueue *pempty, *pnoempty;
	if (LinkQueueIsempty(&(obj->q1)))
	{
		pnoempty = &(obj->q2);
		pempty = &(obj->q1);
	}
	else
	{
		pnoempty = &(obj->q1);
		pempty = &(obj->q2);
	}
	int val;
	while (!LinkQueueIsempty(pnoempty))
	{
		val = LinkQueueFront(pnoempty);
		LinkQueueDe(pnoempty);
		if (LinkQueueIsempty(pnoempty))
			break;
		LinkQueueEn(pempty, val);
	}
	return val;
}


/** Get the top element. */
int myStackTop(MyStack* obj)
{
	LinkQueue *pempty, *pnoempty;
	if (LinkQueueIsempty(&(obj->q1)))
	{
		pnoempty = &(obj->q2);
		pempty = &(obj->q1);
	}
	else
	{
		pnoempty = &(obj->q1);
		pempty = &(obj->q2);
	}
	int val;
	while (!LinkQueueIsempty(pnoempty))
	{
		val = LinkQueueFront(pnoempty);
		LinkQueueDe(pnoempty);
		LinkQueueEn(pempty, val);
	}
	return val;
}


/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj)
{
	return LinkQueueIsempty(&(obj->q1)) && LinkQueueIsempty(&(obj->q2));
}


void myStackFree(MyStack* obj)
{
	LinkQueueDestroy(&(obj->q1));
	LinkQueueDestroy(&(obj->q2));
	free(obj);
}
//3、用栈实现队列
#define StackElemType int
typedef struct LinkStackNode
{
	struct LinkStackNode* next;
	StackElemType data;
}LinkStackNode;
typedef struct LinkStack
{
	LinkStackNode* head;
}LinkStack;



void LinkStackInit(LinkStack *pst);
void LinkStackDestroy(LinkStack *pst);
void LinkStackPush(LinkStack *pst, StackElemType x);
void LinkStackPop(LinkStack *pst);
StackElemType LinkStackTop(LinkStack *pst);
void LinkStackShow(LinkStack *pst);
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
//////////////////////////////////////////////////
typedef struct MyQueue
{
	LinkStack st1;
	LinkStack st2;
} MyQueue;


/** Initialize your data structure here. */


MyQueue* myQueueCreate()
{
	MyQueue *pq = (MyQueue*)malloc(sizeof(MyQueue));
	LinkStackInit(&(pq->st1));
	LinkStackInit(&(pq->st2));
	return pq;
}


/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x)
{
	assert(obj);
	LinkStackPush(&(obj->st1), x);
}


/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj)
{
	assert(obj);
	int val;
	if ((obj->st2).head != NULL)
	{
		val = LinkStackTop(&(obj->st2));
		LinkStackPop(&(obj->st2));
	}
	else
	{
		while (obj->st1.head != NULL)
		{
			val = LinkStackTop(&(obj->st1));
			LinkStackPop(&(obj->st1));
			if (obj->st1.head == NULL)
				break;
			LinkStackPush(&(obj->st2), val);
		}
	}
	return val;
}


/** Get the front element. */
int myQueuePeek(MyQueue* obj)
{
	assert(obj);
	int val;
	if (obj->st2.head != NULL)
	{
		val = LinkStackTop(&(obj->st2));
	}
	else
	{
		while (obj->st1.head != NULL)
		{
			val = LinkStackTop(&(obj->st1));
			LinkStackPop(&(obj->st1));
			LinkStackPush(&(obj->st2), val);
		}
	}
	return val;
}


/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj)
{
	return LinkStackIsEmpty(&(obj->st1)) && LinkStackIsEmpty(&(obj->st2));
}


void myQueueFree(MyQueue* obj)
{
	LinkStackDestroy(&(obj->st1));
	LinkStackDestroy(&(obj->st2));
	free(obj);
}
//4、实现一个最小栈
//5、设计循环队列
typedef struct
{
	int *base;
	int capacity;
	int front;
	int rear;
} MyCircularQueue;


bool myCircularQueueIsEmpty(MyCircularQueue* obj);
MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* pcq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	pcq->capacity = k;
	pcq->front = pcq->rear = 0;
	pcq->base = (int*)malloc(sizeof(int)*(k + 1));
	return pcq;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
	assert(obj);
	if (obj->front != (obj->rear + 1) % (obj->capacity + 1))
	{
		obj->base[obj->rear] = value;
		obj->rear = (obj->rear + 1) % (obj->capacity + 1);
		return true;
	}
	return false;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
	assert(obj);
	if (obj->rear == obj->front)
		return false;
	else
	{
		obj->front = (obj->front + 1) % (obj->capacity + 1);
		return true;
	}
}

int myCircularQueueFront(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return -1;
	int val = obj->base[obj->front];
	return val;
}

int myCircularQueueRear(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return -1;
	int val = obj->base[(obj->rear + obj->capacity) % (obj->capacity + 1)];
	return val;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	if (obj->front == obj->rear)
		return true;
	return false;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	if (obj->front == (obj->rear + 1) % (obj->capacity + 1))
		return true;
	return false;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
	free(obj->base);
	free(obj);
}
///////////////////////////////////////////////////////////////////
//复杂度：：
//数组nums包含从0到n的所有整数，但其中缺了一个。
//请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
int missingNumber(int* nums, int numsSize)
{
	int i = 0;
	int sum = (numsSize*(numsSize + 1)) / 2;
	for (i = 0; i<numsSize; i++)
	{
		for (i = 0; i<numsSize; i++)
		{
			sum = sum - nums[i];
		}
	}
	return sum;
}
//2、一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。
//请写程序找出这两个只出现一次的数字。
//要求时间复杂度是O(n)，空间复杂度是O(1)。
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	int tmp = 0;
	int index = 1;
	*returnSize = 2;
	int* arr = (int*)malloc(sizeof(int)* 2);
	memset(arr, 0, sizeof(int)* 2);
	for (int i = 0; i<numsSize; i++)
	{
		tmp = tmp^nums[i];
	}
	while ((index&tmp) == 0)
		index = index << 1;
	for (int i = 0; i<numsSize; i++)
	{
		if ((nums[i] & index) != 0)
			arr[0] = arr[0] ^ nums[i];
		else
			arr[1] = arr[1] ^ nums[i];
	}
	return arr;
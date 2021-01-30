#define _CRT_SECURE_NO_WARNINGS
#include "tree.h"
int main()
{
	BinTree bt;
	BinTreeInit(&bt);
	BinTreeCreate_1(&bt);
	//bt=BinTreeCreate_2();
	BinTreeCreate_3(&bt);
	printf("VLR: ");
	PreOrder(bt);
	printf("\n");
	printf("LVR: ");
	InOrder(bt);
	printf("\n");
	printf("LRV: ");
	PastOrder(bt);
	printf("\n");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "DCList.h"
void menu()
{
	printf("********************************************\n");
	printf("* [0] quit_system      [1] push_back       *\n");
	printf("* [2] push_front       [3] show_list       *\n");
	printf("* [4] pop_back         [5] pop_front       *\n");
	printf("* [6] length           [*7] capacity        *\n");
	printf("* [8] insert_val       [*9] insert_pos      *\n");
	printf("* [10] delete_val      [*11] delete_pos     *\n");
	printf("* [12] find            [13] sort           *\n");
	printf("* [14] reverse         [15] remove_all     *\n");
	printf("* [16] clear           [*17] destroy       *\n");
	printf("* [*18] find_binary                         *\n");
	printf("********************************************\n");
}
int main()
{
	int select, key;
	size_t length;
	DCList myslist;
	DCListInit(&myslist);
	do
	{
		menu();
		printf("��ѡ��:> \n");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			break;
		case 1:
			printf("��������Ҫ��������ݣ���-1����)-> ");
			while (scanf("%d", &key), key != -1)
				DCListPushBack(&myslist, key);
			break;
		case 2:
			printf("��������Ҫ��������ݣ���-1����)-> ");
			while (scanf("%d", &key), key != -1)
				DCListPushFront(&myslist, key);
			break;
		case 3:
			DCListPrint(&myslist);
			break;
		case 4:
			DCListPopBack(&myslist);
			break;
		case 5:
			DCListPopFront(&myslist);
			break;
		case 6:
			length = DCListLength(&myslist);
			printf("������Ϊ %d\n", length);
			break;
		case 8:
			printf("��������Ҫ��������ݣ���-1����)-> ");
			while (scanf("%d", &key), key != -1)
				DCListInsert_val(&myslist, key);
			break;
		case 10:
			printf("��������Ҫɾ�������ݣ���-1����)-> ");
			while (scanf("%d", &key), key != -1)
				DCListDelete_val(&myslist, key);
			break;
		case 12:
			printf("��������Ҫ���ҵ����ݣ���-1����)-> ");
			scanf("%d", &key);
			DCListNode *cur = DCListFind(&myslist, key);
			if (cur != NULL)
				printf("�ҵ���\n");
			else
				printf("�Ҳ���\n");
			break;
		case 13:
			DCListsort(&myslist);
			break;
		case 14:
			DCListreverse(&myslist);
			break;
		case 15:
			printf("��������Ҫ���ҵ����ݣ���-1����)-> ");
			scanf("%d", &key);
			DCListremoveall(&myslist,key);
			break;
		case 16:
			DCListclear(&myslist);
			break;
		case 17:
			DCListdestroy(&myslist);
			break;





		}


		system("pause");
		system("cls");
	} while (select);
	return 0;
}

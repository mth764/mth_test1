#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
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
	int select,key,length;
	SList myslist;
	SListInit(&myslist);
	do
	{
		menu();
		printf("请选择:> \n");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			break;
		case 1:
			printf("请输入你要插入的数据（以-1结束)-> ");
			while (scanf("%d", &key), key != -1)
				SListPushBack(&myslist, key);
			break;
		case 2:
			printf("请输入你要插入的数据（以-1结束)-> ");
			while (scanf("%d", &key), key != -1)
				SListPushFront(&myslist, key);
			break;
		case 3:
			SListPrint(&myslist);
			break;
		case 4:
			SListPopBack(&myslist);
			break;
		case 5:
			SListPopFront(&myslist);
			break;
		case 6:
			length=SListLength(&myslist);
			printf("链表长度为 %d\n", length);
			break;
		case 8:
			printf("请输入你要插入的数据（以-1结束)-> ");
			while (scanf("%d", &key), key != -1)
				SListInsert_val(&myslist, key);
			break;
		case 10:
			printf("请输入你要删除的数据（以-1结束)-> ");
			while (scanf("%d", &key), key != -1)
				SListDelete_val(&myslist, key);
		case 12:
			printf("请输入你要查找的数据（以-1结束)-> ");
			scanf("%d", &key);
			SListNode *cur= SListFind(&myslist, key);
			if (cur != NULL)
				printf("找到了\n");
			else
				printf("找不到\n");
		case 13:
			SListsort(&myslist);
		case 14:
			SListreverse(&myslist);





		}
		

		system("pause");
		system("cls");
	} while (select);
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include"SeqList.h"
//
//int main()
//{
//	SeqList mylist;
//	SeqList_init(&mylist);
//
//	ElemType key;
//	ElemType item;
//
//	int select = 1;
//	while (select)
//	{
//		printf("********************************************\n");
//		printf("* [0] quit_system      [1] push_back       *\n");
//		printf("* [2] push_front       [3] show_list       *\n");
//		printf("* [4] pop_back         [5] pop_front       *\n");
//		printf("* [6] length           [7] capacity        *\n");
//		printf("* [8] insert_val       [9] insert_pos      *\n");
//		printf("* [10] delete_val      [11] delete_pos     *\n");
//		printf("* [12] find            [13] sort           *\n");
//		printf("* [14] reverse         [15] remove_all     *\n");
//		printf("* [16] clear           [*17] destroy       *\n");
//		printf("* [18] find_binary                         *\n");
//		printf("********************************************\n");
//		printf("请选择:>");
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 0:
//			break;
//		case 1:
//			printf("请输入你要插入的数据（以-1结束）\n");
//			while (scanf("%d", &item), item != -1)
//				SeqList_push_back(&mylist, item);
//			break;
//		case 2:
//			printf("请输入你要插入的数据（以-1结束）\n");
//			while (scanf("%d", &item), item != -1)
//				SeqList_push_front(&mylist, item);
//			break;
//		case 3:
//			SeqList_show_list(&mylist);
//			break;
//		case 4:
//			SeqList_pop_back(&mylist);
//			break;
//		case 5:
//			SeqList_pop_front(&mylist);
//			break;
//			/*system("pause");
//			system("cls");*/
//		}
//	}
//	return 0;
//}
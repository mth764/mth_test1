//���100����3�ı���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//
//}
//�Ƚ�������������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void ac_max(int x,int y)
//{
//	if (x >= y)
//		printf("���ֵΪ%d\n", x);
//	else
//		printf("���ֵΪ%d\n", y);
//}
//int main()
//{	
//	int a;
//	int b;
//	printf("������������Ҫ�Ƚϵ���\n");
//	scanf("%d %d", &a, &b);
//	ac_max(a, b);
//	return 0;
//}
//�������ɴ�С���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//��1-100���ж��ٸ�9
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//
//		if (i % 10 == 9)
//			n++;
//		else if (i / 10 == 9)
//			n++;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//�˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d ", i, j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int left = 1;
//	int right = sizeof(arr)/sizeof(int)-1;
//	int mid = 0;
//	int ret = 0;
//	scanf("%d", &ret);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < ret)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > ret)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	 printf("�Ҳ���\n");
//	return 0;
//}
//1000��-2000������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//��ȭ��Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void show()
//{
//	printf("***********������**************\n");
//	printf("*********1.play   0.exit*******\n"); 
//	printf("***********������**************\n");
//}
//void my_game()
//{
//	int guess = 0;
//	//1. ����һ�������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//��ʼ��ȭ
//	while (1)
//	{
//		printf("��µ������ǣ�->>\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�������\n");
//			break;
//		}
//	}
//		printf("�������ȭ����\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		show();
//	start:
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			my_game();
//			break;
//		default:
//			printf("�����������������\n");
//			goto start;
//		}
//	} while (i);
//	return 0;
//}
//��ʮ���������ֵ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	printf("������ʮ����\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
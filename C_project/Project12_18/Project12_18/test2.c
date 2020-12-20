////练习使用库函数，qsort排序各种类型的数据
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return  *(int*)e1 - *(int*)e2;
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_struct_stu_name(const void * e1, const void *e2)
//{
//	return strcmp(((struct stu *)e1)->name,((struct stu*)e2)->name);
//}
//int cmp_struct_stu_age(const void * e1, const void *e2)
//{
//	return ((struct stu *)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_double(const void* e1, const void* e2)
//{
//	if (*(double*)e1 > *(double*)e2)
//	{
//		return 1;
//	}
//	else if (*(double*)e1 < *(double*)e2)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	size_t i = 0;
//	int arr[8] = { 4, 6, 1, 52, 36, 67, 78, 16 };
//	struct stu arr1[3] = { { "zhangsan", 15 }, {"lisi",26}, {"wangwu",8} };
//	double arr2[5] = { 1.5, 2.3, 6.8, 7, 5.6 };
//
//
//	//打印整形数组排序
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp_int);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	//打印结构体数组以名字排序
//	qsort(arr1,3,sizeof(struct stu),cmp_struct_stu_name);
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%s %d  ", arr1[i].name, arr1[i].age);
//	}
//	printf("\n");
//
//	//打印结构体以年龄进行排序
//	qsort(arr1, 3, sizeof(struct stu), cmp_struct_stu_age);
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%s %d  ", arr1[i].name, arr1[i].age);
//	}
//	printf("\n");
//
//	//打印浮点型数组排序
//	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(double), cmp_double);
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//		printf("%.1f ", arr2[i]);
//	}
//	printf("\n");
//	
//	
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*将该字符串中的大写字母转换成小写字母，
	之后返回新的字符串*/
	/*
	char * toLowerCase(char * str)
	{
	char* tmp = str;
	while (*str != '\0')
	{
	if ('A' <= *str&&*str <= 'Z')
	*str += 32;
	str++;
	}
	return tmp;

	}
	*/
	/*给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数*/
	//void rotate(int* nums, int numsSize, int k)
	//{

	//	/*for (int i = 0; i < k; i++ )
	//	{
	//	int temp;
	//	temp = *(nums + numsSize - 1);
	//	for (int j = numsSize - 1; j > 0; j--)
	//	{
	//	*(nums + j) = *(nums + j - 1);
	//	}
	//	*nums = temp;
	//	}
	//	*/
	//	int* arr = (int*)malloc(sizeof(int)*numsSize);
	//	assert(arr);
	//	memcpy(arr, nums, sizeof(int)*numsSize);
	//	for (int i = 0; i<numsSize; i++)
	//	{
	//		nums[(i + k) % numsSize] = arr[i];
	//	}
	//	free(arr);
	//}
	/*return 0;*/
}
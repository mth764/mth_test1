#define _CRT_SECURE_NO_WARNINGS
//给你一个按 非递减顺序 排序的整数数组 nums，返回
//每个数字的平方 组成的新数组，要求也按 非递减顺序 排序
//https://leetcode-cn.com/problems/squares-of-a-sorted-array/
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
	*returnSize = numsSize;
	int* arr = (int*)malloc(numsSize*sizeof(int));
	for (int i = 0; i<numsSize; i++)
	{
		arr[i] = nums[i] * nums[i];
	}
	BubbleSort(arr, *returnSize);
	return arr;
}
//给定一个字符串 S，返回 “反转后的” 字符串，
//其中不是字母的字符都保留在原地，而所有字母的位置发生反转
//https://leetcode-cn.com/problems/reverse-only-letters/
char * reverseOnlyLetters(char * S)
{
	int lenth = strlen(S);
	if (lenth == 0)
		return S;
	int left = 0;
	int right = lenth - 1;
	while (left<right)
	{
		if (*(S + left)<'A' || *(S + left)>'z' || *(S + left)>'Z'&&*(S + left)<'a')
			left++;
		else if (*(S + right)<'A' || *(S + right)>'z' || *(S + right)>'Z'&&*(S + right)<'a')
			right--;
		else
		{
			char tmp = *(S + right);
			*(S + right) = *(S + left);
			*(S + left) = tmp;
			left++;
			right--;
		}
	}
	//((('A'<*left &&*left<'Z')||('a'<*left&&*left<'z'))&&
	//  (('A'<*right &&*right<'Z')||('a'<*right&&*right<'z')))
	return S;
}
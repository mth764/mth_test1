#define _CRT_SECURE_NO_WARNINGS
//给定一个非负整数数组 A ，返回一个数组，在该数组中,A的所有偶数元素之后
//跟着所有奇数元素(注意：不是排序，只是奇数在前偶数在后哈！)
//https://leetcode-cn.com/problems/sort-array-by-parity/
int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
	*returnSize = ASize;
	int* arr = (int*)malloc(sizeof(int)*ASize);
	int left = 0;
	int right = ASize - 1;
	for (int i = 0; i<ASize; i++)
	{
		if (A[i] % 2 == 0)
		{
			arr[left] = A[i];
			left++;
		}
		else
		{
			arr[right] = A[i];
			right--;
		}
	}
	return arr;
}
//给定一个整数类型的数组 nums ，请编写一个能够返回数组“中心索引”的方法。
//我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于
//右侧所有元素相加的和。如果数组不存在中心索引，那么我们应该
//返回 - 1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个
//https://leetcode-cn.com/problems/find-pivot-index/submissions/
//版本1：
int pivotIndex(int* nums, int numsSize)
{

	for (int index = 0; index<numsSize; index++)
	{
		int suml = 0;
		int sumr = 0;
		for (int i = 0; i<index; i++)
			suml += nums[i];
		for (int j = index + 1; j<numsSize; j++)
			sumr += nums[j];
		if (suml == sumr)
			return index;
	}
	return -1;
}
//版本2：
int pivotIndex(int* nums, int numsSize)
{

	int suml = 0;
	int sumr = 0;
	for (int i = 0; i<numsSize; i++)
	{
		sumr += nums[i];
	}
	for (int index = 0; index<numsSize; index++)
	{
		sumr -= nums[index];
		if (suml == sumr)
			return index;
		suml += nums[index];

	}
	return -1;
}
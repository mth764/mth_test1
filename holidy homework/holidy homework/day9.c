#define _CRT_SECURE_NO_WARNINGS
//给定一个整数数组 nums 和一个整数目标值 target，
//请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
//https://leetcode-cn.com/problems/two-sum/
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	*returnSize = 2;
	int* arr = (int*)malloc(sizeof(int)*(*returnSize));
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{
			int sum = nums[i] + nums[j];
			if (target == sum)
			{
				arr[0] = i;
				arr[1] = j;
				return arr;
			}
		}
	}
	return NULL;
}
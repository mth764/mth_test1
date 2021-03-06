#define _CRT_SECURE_NO_WARNINGS
//给你一个整数数组 nums ，你需要找出一个 连续子数组 ，
//如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。
//请你找出符合题意的 最短 子数组，并输出它的长度。
//链接：https ://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray
int findUnsortedSubarray(int* nums, int numsSize)
{
	int left = 1;
	int right = 0;
	if (numsSize <= 1)
		return 0;
	for (int i = 0; i<numsSize; i++)
	{
		int j;
		for (j = i + 1; j<numsSize; j++)
		{
			if (nums[i]>nums[j])
			{
				left = i;
				break;
			}
		}
		if (j<numsSize)
			break;
	}
	for (int i = numsSize - 1; i >= 0; i--)
	{
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (nums[i]<nums[j])
			{
				right = i;
				break;
			}
		}
		if (j >= 0)
			break;
	}
	return right - left + 1;//对于right和left初值的选取，主要为了对应如果是有序数组的话可以输出0
}
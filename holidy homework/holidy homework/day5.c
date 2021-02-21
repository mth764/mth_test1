#define _CRT_SECURE_NO_WARNINGS
//1、给定一个整数数组，判断是否存在重复元素。
//如果存在一值在数组中出现至少两次，函数返回 true 。
//如果数组中每个元素都不相同，则返回 false 。
//https://leetcode-cn.com/problems/contains-duplicate/
/*void sort(int* nums,int numsSize)
{
for(int i=0;i<numsSize-1;i++)
{
for(int j=0;j<numsSize-1-i;j++)
{
if(nums[j]>nums[j+1])
{
int tmp=nums[j];
nums[j]=nums[j+1];
nums[j+1]=tmp;
}
}
}
}*/
bool containsDuplicate(int* nums, int numsSize)
{
	if (numsSize == 0 || numsSize == 1)
		return false;
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{
			if (nums[i] == nums[j])
				return true;
		}
	}
	return false;
}
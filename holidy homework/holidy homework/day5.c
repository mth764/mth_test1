#define _CRT_SECURE_NO_WARNINGS
//1������һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//�������һֵ�������г����������Σ��������� true ��
//���������ÿ��Ԫ�ض�����ͬ���򷵻� false ��
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
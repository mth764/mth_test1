#define _CRT_SECURE_NO_WARNINGS
//����һ���������� nums ��һ������Ŀ��ֵ target��
//�����ڸ��������ҳ� ��ΪĿ��ֵ ���� ���� ���������������ǵ������±ꡣ
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
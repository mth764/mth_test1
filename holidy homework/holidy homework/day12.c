#define _CRT_SECURE_NO_WARNINGS
//����һ���������� nums ������Ҫ�ҳ�һ�� ���������� ��
//���������������������������ô�������鶼���Ϊ��������
//�����ҳ���������� ��� �����飬��������ĳ��ȡ�
//���ӣ�https ://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray
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
	return right - left + 1;//����right��left��ֵ��ѡȡ����ҪΪ�˶�Ӧ�������������Ļ��������0
}
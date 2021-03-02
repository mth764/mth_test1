#define _CRT_SECURE_NO_WARNINGS
//����һ���Ǹ��������� A ������һ�����飬�ڸ�������,A������ż��Ԫ��֮��
//������������Ԫ��(ע�⣺��������ֻ��������ǰż���ں����)
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
//����һ���������͵����� nums �����дһ���ܹ��������顰�����������ķ�����
//���������������������������ģ����������������������Ԫ����ӵĺ͵���
//�Ҳ�����Ԫ����ӵĺ͡�������鲻����������������ô����Ӧ��
//���� - 1����������ж��������������ô����Ӧ�÷��������ߵ���һ��
//https://leetcode-cn.com/problems/find-pivot-index/submissions/
//�汾1��
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
//�汾2��
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
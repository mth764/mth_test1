#define _CRT_SECURE_NO_WARNINGS
/*3������һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
����Լ������������ظ�Ԫ�ء�*/
/*int searchInsert(int* nums, int numsSize, int target)
{
	int i = 0;
	for (i = 0; i<numsSize; i++)
	{
		if (nums[i] >= target)
			break;
	}
	return i;
}*/
/*4������һ������nums��һ��ֵval,����Ҫԭ�� �Ƴ�������ֵ����val��Ԫ�أ�
�������Ƴ���������³��ȡ���Ҫʹ�ö��������ռ䣬
������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
��Դ�����ۣ�LeetCode��
���ӣ�https ://leetcode-cn.com/problems/remove-element
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
/*int removeElement(int* nums, int numsSize, int val)
{
	for (int i = 0; i<numsSize; i++)
	{
		while (numsSize>0 && nums[numsSize - 1] == val)
		numsSize--;
		if (numsSize == 0 || numsSize <= i)
			break;
		if (nums[i] == val)
		{
			nums[i] = nums[numsSize - 1];
			numsSize--;
		}
	}
	return numsSize;
}*/
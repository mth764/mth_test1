#define _CRT_SECURE_NO_WARNINGS
//����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/plus-one
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
void Initarr(int* arr, int n)
{
	for (int i = 0; i<n; i++)
		arr[i] = 0;
}
void memcpyarr(int* des, int* src, int n)
{
	for (int i = 0; i<n; i++)
		des[i] = src[i];
}
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	*returnSize = digitsSize + 1;
	int* arr = (int*)malloc(sizeof(int)*(digitsSize + 1));
	Initarr(arr, *returnSize);
	memcpyarr(arr + 1, digits, digitsSize);
	int right = digitsSize;
	while (arr[right] + 1 == 10)
	{
		arr[right] = 0;
		right--;
	}
	arr[right] = arr[right] + 1;
	while (*arr == 0)
	{
		arr++;
		*returnSize = digitsSize;
	}
	return arr;
}//����Ҳ�����ڳ�ʼ�������ݿ�����ȥ��������һ��Ԫ�س�ʼ��0
//2������һ���ǿ����飬���ش������� ��������� ����������ڣ��򷵻���������������
//https://leetcode-cn.com/problems/third-maximum-number/
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
			if (a[j] < a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
int thirdMax(int* nums, int numsSize)
{
	BubbleSort(nums, numsSize);
	if (numsSize<3)
		return nums[0];
	int slow = 0, fast = 1, k = 1;
	while (fast<numsSize && k != 3)
	{
		while (fast<numsSize&&nums[slow] == nums[fast])
			fast++;
		if (fast >= numsSize)
			return nums[0];
		slow = fast;
		k++;
	}
	return nums[fast];
}//������Դ���������иĽ�������ϣ�����򣬿��ţ����ŵ�

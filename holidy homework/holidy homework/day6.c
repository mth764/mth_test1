#define _CRT_SECURE_NO_WARNINGS
//����һ���� �ǵݼ�˳�� ������������� nums������
//ÿ�����ֵ�ƽ�� ��ɵ������飬Ҫ��Ҳ�� �ǵݼ�˳�� ����
//https://leetcode-cn.com/problems/squares-of-a-sorted-array/
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
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
	*returnSize = numsSize;
	int* arr = (int*)malloc(numsSize*sizeof(int));
	for (int i = 0; i<numsSize; i++)
	{
		arr[i] = nums[i] * nums[i];
	}
	BubbleSort(arr, *returnSize);
	return arr;
}
//����һ���ַ��� S������ ����ת��ġ� �ַ�����
//���в�����ĸ���ַ���������ԭ�أ���������ĸ��λ�÷�����ת
//https://leetcode-cn.com/problems/reverse-only-letters/
char * reverseOnlyLetters(char * S)
{
	int lenth = strlen(S);
	if (lenth == 0)
		return S;
	int left = 0;
	int right = lenth - 1;
	while (left<right)
	{
		if (*(S + left)<'A' || *(S + left)>'z' || *(S + left)>'Z'&&*(S + left)<'a')
			left++;
		else if (*(S + right)<'A' || *(S + right)>'z' || *(S + right)>'Z'&&*(S + right)<'a')
			right--;
		else
		{
			char tmp = *(S + right);
			*(S + right) = *(S + left);
			*(S + left) = tmp;
			left++;
			right--;
		}
	}
	//((('A'<*left &&*left<'Z')||('a'<*left&&*left<'z'))&&
	//  (('A'<*right &&*right<'Z')||('a'<*right&&*right<'z')))
	return S;
}
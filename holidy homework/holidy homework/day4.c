#define _CRT_SECURE_NO_WARNINGS
//1������һ����������Сд��ĸ�Ϳո� ' ' ���ַ�����
//���������һ�����ʵĳ��ȡ�������������һ�����ʣ��뷵�� 0
//(https://leetcode-cn.com/problems/length-of-last-word/)
int lengthOfLastWord(char * s)
{
	int len = strlen(s);
	int ret = 0;
	char* right = s + len - 1;
	if (len == 0)
		return 0;
	while (right != s && *right == ' ')
		right--;
	if (right == s&&*s == ' ')
		return 0;
	while (right != s&&*right != ' ')
	{
		ret++;
		right--;
	}
	if (right == s&&*s != ' ')
		return ret + 1;
	return ret;
}
//2���������������������� nums1 �� nums2���� nums2 �ϲ��� nums1 �У�
//ʹ�� num1 ��Ϊһ���������顣
//(https://leetcode-cn.com/problems/merge-sorted-array/)
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int key = 0;
	int k = 0;
	while (k<n)
	{
		while (nums1[key]<nums2[k] && key<m)
			key++;
		if (key >= m)
		{
			nums1[key] = nums2[k];
			k++;
			m++;
		}
		else
		{
			for (int i = m - 1; i >= key; i--)
			{
				nums1[i + 1] = nums1[i];
			}
			nums1[key] = nums2[k];
			k++;
			m++;
		}
	}
}
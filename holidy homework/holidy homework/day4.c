#define _CRT_SECURE_NO_WARNINGS
//1、给定一个仅包含大小写字母和空格 ' ' 的字符串，
//返回其最后一个单词的长度。如果不存在最后一个单词，请返回 0
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
//2、给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，
//使得 num1 成为一个有序数组。
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
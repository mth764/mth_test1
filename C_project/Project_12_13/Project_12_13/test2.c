//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//是返回1，不是返回 0.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int string_lev(char arr1[],char arr2[], int len)
{
	int i = 0;
	int j = 0;
	char tmp = 0;
	int k = 0;
	for (i = 0; i < len-1; i++)
	{
		int count = 0;
		tmp = arr1[0];
		for (j = 0; j < len-1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
		for (k = 0; k < len; k++)
		{
			if (arr1[k] == arr2[k])
			{
				count++;
			}
		}
		if (count == len)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[5] = { 'A','A', 'B', 'C', 'D' };
	char arr2[5] = { 'B', 'C', 'D', 'A', 'A' };
	int len = sizeof(arr1) / sizeof(char);
	int n = 3;
	n=string_lev(arr1,arr2, len);
	printf("%d\n", n);
	return 0;
}
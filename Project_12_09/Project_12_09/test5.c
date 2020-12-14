#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 7;
	int j = 0;
	int k = 0;
	char arr[13] = { ' ' };
	int length = 2 * n - 1;
	int left = (length) / 2;
	int right = (length) / 2;
	for (i = 0; i < n; i++)
	{
		for (j = left; j <= right; j++)
		{
			arr[j] = '*';
		}
		for (k = 0; k < length; k++)
		{
			printf("%c", arr[k]);
		}
		printf("\n");
		left--;
		right++;
	}
	left++;
	right--;
	for (i = 0; i < n ; i++)
	{
		arr[left] = ' ';
		arr[right] = ' ';
		for (k = 0; k < length; k++)
		{
			printf("%c", arr[k]);
		}
		printf("\n");
		left++;
		right--;
	}
	return 0;
}
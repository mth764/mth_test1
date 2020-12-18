#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr1[] = { "vvvvv" };
	int left=0;
	int right=strlen(arr1)-1;
	while (left <= right)
	{	
		char arr2[] = { "     " };
		/*system("cls");*/
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}
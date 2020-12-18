#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse_string(char* m)
{
	if (*m != '\0')
	{
		reverse_string(m + 1);
	}
	//printf("%c", *m);
	printf("%c", *(m-1));
}
int main()
{
	char arr[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:> ");
	scanf("%s", arr);
	reverse_string(arr);
	return 0;
}
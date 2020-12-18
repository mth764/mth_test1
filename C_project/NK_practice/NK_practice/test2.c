#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	short a = 0;
	int b = 1;
	long c = 3;
	long long d = 4;
	printf("The size of short is %d bytes\n", sizeof(a));
	printf("The size of int is %d bytes\n", sizeof(b));
	printf("The size of long is %d bytes\n", sizeof(c));
	printf("The size of long long is %d bytes\n", sizeof(d));
	return 0;
}
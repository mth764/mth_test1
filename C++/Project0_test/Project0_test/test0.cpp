#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int fun(int a,int b)
{
	int sum=0;
	sum = a + b;
	return sum;
}
int fun(int a, int b,int c)
{
	int sum=0;
	sum = a + b + c;
	return sum;
}
double fun(double a, double b)
{
	double sum;
	sum = a + b;
	return sum;
}
int main()
{
	fun(1, 2);
	fun(1, 2, 3);
	fun(3.2 , 4.2);
	return 0;
}
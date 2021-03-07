#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int& add(int a,int b)
{
	int c;
	c = a + b;
	return c;
}
int main()
{
	int& ret = add(1, 2);
	add(3 , 4);
	cout << "add(1, 2) is :" << ret << endl;
	return 0;
}
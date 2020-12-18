//递归方式实现strlen函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int my_strlen(char* m)
//{
//	if (*m != '\0')
//	{
//		return 1 + my_strlen( m + 1);
//	}
//	return 0;
//}
//int main()
//{
//	int len; 
//	printf("请输入一个字符串:> ");
//	char arr[20];
//	scanf("%s", arr);
//	len=my_strlen(arr);
//	printf("%d", len);
//} 
////非递归方式实现strlen函数
//int my_strlen(char* m)
//{
//	int ret = 0;
//	while (*m != '\0')
//	{
//		ret++;
//		m++;
//	}
//	return ret;
//}
//int main()
//{
//	int len;
//	printf("请输入一个字符串:> ");
//	char arr[20];
//	scanf("%s", arr);
//	len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
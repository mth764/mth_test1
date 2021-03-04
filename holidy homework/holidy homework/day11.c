#define _CRT_SECURE_NO_WARNINGS
//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//https ://leetcode-cn.com/problems/valid-palindrome/
bool isPalindrome(char * s)
{
	int len = strlen(s);
	int left = 0;
	int right = len - 1;
	for (int i = 0; i<len; i++)
	{
		if (*(s + i) >= 'A'&&*(s + i) <= 'Z')
			*(s + i) += 32;
	}
	if (len <= 1)
		return true;
	while (left <= right)
	{
		if (*(s + left)<'0' || (*(s + left)>'9'&&*(s + left)<'a') || *(s + left)>'z')
			left++;
		else if (*(s + right)<'0' || (*(s + right)>'9'&&*(s + right)<'a') || *(s + right)>'z')
			right--;
		else
		{
			if (*(s + left) == *(s + right))
			{
				left++;
				right--;
			}
			else
				return false;
		}
	}
	return true;
}
//给定一组字符，使用原地算法将其压缩。压缩后的长度必须始终小于或等于原数组长度。
//数组的每个元素应该是长度为1 的字符（不是 int 整数类型）。在完成原地修改输入数组后，返回数组的新长度。
//链接：https ://leetcode-cn.com/problems/string-compression
int compress(char* chars, int charsSize)
{
	//int len=sizeof(chars)/sizeof(char);
	if (charsSize <= 1)
		return charsSize;
	int fast = 0;
	int slow = 0;
	int key = 0;
	while (fast<charsSize)
	{
		fast++;
		int k = 1;
		while (fast<charsSize&&*(chars + slow) == *(chars + fast))
		{
			fast++;
			k++;
		}
		chars[key++] = chars[slow];
		if (k>1 && k<10)
			chars[key++] = k + '0';
		else if (k >= 10 && k<100)
		{
			chars[key++] = (k / 10) % 10 + '0';
			chars[key++] = k % 10 + '0';
		}
		else if (k >= 100 && k<1000)
		{
			chars[key++] = (k / 100) % 10 + '0';
			chars[key++] = (k / 10) % 10 + '0';
			chars[key++] = k % 10 + '0';
		}
		else if (key == 1000)
		{
			chars[key++] = (k / 1000) % 10 + '0';
			chars[key++] = (k / 100) % 10 + '0';
			chars[key++] = (k / 10) % 10 + '0';
			chars[key++] = k % 10 + '0';
		}
		slow = fast;
	}
	return key;
}

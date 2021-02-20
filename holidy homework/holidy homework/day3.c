#define _CRT_SECURE_NO_WARNINGS
//1、赎金信(https://leetcode-cn.com/problems/ransom-note/)

//2、判断一个整数是否是回文数。回文数是指正序（从左向右）和
//倒序（从右向左）读都是一样的整数(https://leetcode-cn.com/problems/palindrome-number/)
	/*int Getplace(int x)
	{
		int tmp = 0;
		while (x != 0)
		{
			x /= 10;
			tmp++;
		}
		return tmp;
	}
	bool isPalindrome(int x)
	{
		int k = Getplace(x);
		int left = 0;
		int right = k - 1;
		if (x<0)
			return false;
		int* num = (int*)malloc(sizeof(int)*k);
		for (int i = 0; i<k; i++)
		{
			num[i] = x % 10;
			x /= 10;
		}
		while (left <= right)
		{
			if (num[left] != num[right])
				return false;
			left++;
			right--;
		}
		free(num);
		return true;
	}*/
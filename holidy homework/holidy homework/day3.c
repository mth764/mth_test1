#define _CRT_SECURE_NO_WARNINGS
//1�������(https://leetcode-cn.com/problems/ransom-note/)

//2���ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң���
//���򣨴������󣩶�����һ��������(https://leetcode-cn.com/problems/palindrome-number/)
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
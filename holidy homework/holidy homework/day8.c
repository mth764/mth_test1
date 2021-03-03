#define _CRT_SECURE_NO_WARNINGS
//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/plus-one
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
void Initarr(int* arr, int n)
{
	for (int i = 0; i<n; i++)
		arr[i] = 0;
}
void memcpyarr(int* des, int* src, int n)
{
	for (int i = 0; i<n; i++)
		des[i] = src[i];
}
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	*returnSize = digitsSize + 1;
	int* arr = (int*)malloc(sizeof(int)*(digitsSize + 1));
	Initarr(arr, *returnSize);
	memcpyarr(arr + 1, digits, digitsSize);
	int right = digitsSize;
	while (arr[right] + 1 == 10)
	{
		arr[right] = 0;
		right--;
	}
	arr[right] = arr[right] + 1;
	while (*arr == 0)
	{
		arr++;
		*returnSize = digitsSize;
	}
	return arr;
}//这里也可以在初始化将数据拷贝过去，并将第一个元素初始化0
//2、给你一个非空数组，返回此数组中 第三大的数 。如果不存在，则返回数组中最大的数。
//https://leetcode-cn.com/problems/third-maximum-number/
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] < a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
int thirdMax(int* nums, int numsSize)
{
	BubbleSort(nums, numsSize);
	if (numsSize<3)
		return nums[0];
	int slow = 0, fast = 1, k = 1;
	while (fast<numsSize && k != 3)
	{
		while (fast<numsSize&&nums[slow] == nums[fast])
			fast++;
		if (fast >= numsSize)
			return nums[0];
		slow = fast;
		k++;
	}
	return nums[fast];
}//本体可以从排序方面进行改进，例如希尔排序，快排，堆排等

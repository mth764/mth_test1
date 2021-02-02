void TwoWayInsertSort(int* arr, int left, int right)
{
	int* arr1 = (int*)malloc(sizeof(int)*(right - left + 1));
	int* first, *final;
	first = final = arr1;
	arr1[0] = arr[0];
	for (int i = left + 1, i < right, i++)
	{
		if (arr[i] < *first)
			first = arr1 + right;
	}
}
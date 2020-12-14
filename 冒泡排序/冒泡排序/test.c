#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble(int arr[], int size)
{
	int temp = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size - i;j++)
		if (arr[j - 1]>arr[j])
		{
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
		}
	}
}

int main()
{
	int n = 0;
	int sz=0;
	int arr[10] = { 9, 5, 6, 2, 3, 7, 1, 4, 8, 10};
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}

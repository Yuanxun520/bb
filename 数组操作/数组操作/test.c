#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//实现函数init() 初始化数组为全0
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		init(arr1, sz);
//		printf("%d ", arr1[i]);
//	}
//}
//#include <stdio.h>
////实现print()  打印数组的每个元素
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr2[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0;
//	print(arr2, sz);
//	return 0;
//}
#include <stdio.h>
//实现reverse()函数完成数组元素的逆置
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr3[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr3) / sizeof(arr3[0]);
	int i = 0;
	reverse(arr3, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr3[i]);
	}
}

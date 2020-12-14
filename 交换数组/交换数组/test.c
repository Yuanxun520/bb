#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//将数组arrA的内容和arrB的内容进行交换
int main()
{
	int i = 0;
	int sz = 0;
	int tmp = 0;
	int arrA[5] = { 1, 2, 3, 4, 5 };
	int arrB[5] = { 6, 7, 8, 9, 10 };
	sz = sizeof(arrA) / sizeof(arrA[0]);
	printf("交换前arrA的内容为：1, 2, 3, 4, 5，\n");
	printf("交换前arrB的内容为：6, 7, 8, 9, 10，\n");
	printf("交换后arrA的内容为：");
	for (i = 0; i < sz; i++)
	{
		tmp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = tmp;
		printf("%d ，", arrA[i]);
	}
	printf("\n");
	printf("交换后arrB的内容为：");
	for (i = 0; i < sz; i++)
	{
		printf("%d ，", arrB[i]);
	}
	printf("\n");
	return 0;
}
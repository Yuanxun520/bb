#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������arrA�����ݺ�arrB�����ݽ��н���
int main()
{
	int i = 0;
	int sz = 0;
	int tmp = 0;
	int arrA[5] = { 1, 2, 3, 4, 5 };
	int arrB[5] = { 6, 7, 8, 9, 10 };
	sz = sizeof(arrA) / sizeof(arrA[0]);
	printf("����ǰarrA������Ϊ��1, 2, 3, 4, 5��\n");
	printf("����ǰarrB������Ϊ��6, 7, 8, 9, 10��\n");
	printf("������arrA������Ϊ��");
	for (i = 0; i < sz; i++)
	{
		tmp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = tmp;
		printf("%d ��", arrA[i]);
	}
	printf("\n");
	printf("������arrB������Ϊ��");
	for (i = 0; i < sz; i++)
	{
		printf("%d ��", arrB[i]);
	}
	printf("\n");
	return 0;
}
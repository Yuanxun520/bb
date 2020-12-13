#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for (n = 100; n<10000; n++)
	{
		a = n % 10; 
		b = n / 10 % 10; 
		c = n / 100;
		if (n == a*a*a + b*b*b + c*c*c)
			printf("%d\n", n);
	}

}
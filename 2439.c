#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1;i <= a;i++)
	{
		for (int j = 1;j <= (a - i);j++)
			printf(" ");
		for (int j = 1;j <= i;j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
/*
* 1
* 12
* 123
* 1234
* 12345
* 
* 00001
* 00011
* 00111
* 01111
* 11111
* 
* 
*/
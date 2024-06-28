#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	int a = 9;
	int num;
	int result=0;
	scanf("%d", &num);

	printf("%d", a * pow(3, num) - 1 / 3 - 1);
	return 0;
}
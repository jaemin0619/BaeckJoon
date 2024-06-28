#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a[]="long";
	int b,c;
	scanf("%d", &b);
	c = b / 4;


	for (int i = 0;i < c;i++)
	{
		printf("%s ", &a);
	}

	printf("int");

	return 0;
}
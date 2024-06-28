#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	char s[100];
	for (int i = 0;i < 10;i++)
	{
		scanf("%s", s);
		printf("%s", s);
	}
	return 0;
}
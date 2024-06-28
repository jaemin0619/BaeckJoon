#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b,c;

	scanf("%d", &c);

	for (int i = 0;i < c;i++)
	{
		scanf("%d %d\n", &a, &b);
		printf("%d \n", a + b);
	}
	return 0;
}
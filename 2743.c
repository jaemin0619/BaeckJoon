#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	
	char S[100];
	scanf("%s", S);
	int len = 0;
	for (int i = 0;S[i]; i++)
	{
		len += 1;
	}
	printf("%d", len);
	return 0;
}
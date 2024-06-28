#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int n;
	scanf("%d", &n);
	char s[101];
	for (int i = 0;i < n;i++)
	{
		scanf("%s", s);
		printf("%c%c \n", s[0], s[strlen(s) - 1]);
	}
	
	
	return 0;
}

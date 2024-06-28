#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int A,a,b;
	scanf("%d", &A);
	
	for (int i = 1;i <= A;i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}


  
	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, m[100] = { 0, };
	
	
	for (int i = 0;i < 28;i++)
	{
		scanf("%d", &n);
		m[n] = n;
	}

		for (int b = 1;b <= 30;b++)
		{
			if (m[b] == 0)
				printf("%d\n", b);
		}

	return 0;
}
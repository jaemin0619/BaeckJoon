#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	//result = �� �ݾ�
	//n = ������ ������ ������ �� 
	//
	int a,b, n, result, sum = 0,total=0;
	scanf("%d", &result);
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d %d", &a, &b);
		sum = a * b;
		total = sum + total;
	}

	if (result == total)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
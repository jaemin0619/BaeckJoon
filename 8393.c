#include<stdio.h>
#pragma warning(disable:4996)

/*
* 1���� n���� ���ϱ� 
*/
int main()
{
	int n;
	//���� ����� ���� �ϳ� ����
	int sum = 0;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		sum += i;
	}

	printf("%d", sum);
	return 0;
}
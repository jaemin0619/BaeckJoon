#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n[100] = { 0, };
	int A;
	int result = 0;

	for (int i = 0;i <= 9;i++)
	{
		scanf("%d", &A);
		n[i] = A % 42;

	}
	for (int i = 0;i < 10;i++)
	{
		int cnt = 0; //�ʱ�ȭ 
		for (int j = i + 1;j < 10;j++) //���� ���� ���� ��� 
		{
			if (n[i] == n[j])
				cnt++;
		}
		if (cnt == 0)
			result++;
	}
	printf("%d", result);
	return 0;
}
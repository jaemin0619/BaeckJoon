#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0;i < n;i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0;i < m;i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = 0;j < (b - a) / 2 + 1;j++)
		{
			int temp = arr[a + j - 1];
			arr[a + j - 1] = arr[b - 1 - j];
			arr[b - j - 1] = temp;
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
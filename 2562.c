#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int n=9;
	int* arr = (int*)malloc(sizeof(int) * n);
	int max=0;
	int cnt = 0;
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] >= max)
		{
			max = arr[i];
			cnt = i + 1;
		}
	}
	printf("%d %d", max, cnt);

	free(arr); //메모리 해제 
	
	return 0;
}
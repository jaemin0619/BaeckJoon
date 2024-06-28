/*
* N M 
* 
*/
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, M;
	int i, j, k;
	int basket[100] = { 0, };
	scanf("%d %d", &N, &M);

	for (int a = 0;a < M;a++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i;b <= j;b++)
		{
			basket[b] = k;
		}
	}
	for (int c = 1;c <= N;c++)
	{
		printf("%d ", basket[c]);
	}
	return 0; 
}
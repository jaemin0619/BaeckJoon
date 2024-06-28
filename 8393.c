#include<stdio.h>
#pragma warning(disable:4996)

/*
* 1부터 n까지 더하기 
*/
int main()
{
	int n;
	//더한 결과값 변수 하나 설정
	int sum = 0;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		sum += i;
	}

	printf("%d", sum);
	return 0;
}
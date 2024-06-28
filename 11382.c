#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	long long A,B,C;
	scanf("%lld %lld %lld", &A, &B, &C);
	long long result = A + B + C;
	printf("%lld\n", result);
	return 0;
}
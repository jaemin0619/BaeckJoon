#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	int T; //테스트 케이스의 개수 (1<=T<=1000)
	int R;//반복 횟수 1<=R<=8
	char S[20]; //S의 길이는 20을 넘기면 안됨.

	scanf("%d", &T);

	for (int i = 0;i < T;i++)
	{
		scanf("%d %s", &R, strlen(S));

	}

	return 0; 
}
#include<stdio.h>
#pragma warning(disable:4996)
/*
* N=공의 개수
* M=공 바꾸는 횟수
* t= 바구니 임시 저장 변수 
* i = 바꿀 바구니 1 
* j = 바꿀 바구니 2 
* t = 바구니 임시 저장 변수 
* basket[100] = 바구니 배열 
*/
int main()
{

	int N, M, i, t,j, basket[100] = { 0, };
	//공의 개수와 공을 바꾸는 횟수 입력 
	scanf("%d %d", &N, &M);
	
	//바구니 배열에 n개 만큼의 공을 넣는다.
	for (int b = 1;b <= N;b++)
	{
		basket[b] = b;
	}
	//m번 공을 바꾸기.
	for (int a = 0;a < M;a++)
	{
		//바꿀 바구니 입력 받기 
		scanf("%d %d", &i, &j);
		t = basket[i];
		basket[i] = basket[j];
		basket[j] = t;
	}
	for (int c = 1;c <= N;c++)
	{
		printf("%d ", basket[c]);
	}
	
	return 0;
}
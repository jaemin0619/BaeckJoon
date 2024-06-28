#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
/*
* 첫째 줄에 새로운 평균 출력 
* 모든 점수/M*100 
* 필요한 변수 
* n = 과목의 개수 
* max
* total 
* result
* int m[];
*/ 

int main()
{

	int n, max=0;
	double total = 0, result = 0;
	scanf("%d", &n);
	//m배열 동적 할당 
	int* m = (int*)malloc(sizeof(int) * n);

	//n개 만큼 m 배열에 값 할당 
	for (int i = 0;i < n;i++)
	{
		scanf("%d ", &m[i]);
	}
	//m값의 최댓값 max 받기
	for (int i = 0;i < n;i++)
	{
		if (m[i] > max)
		{
			max = m[i];
		}
	}
	//max 값 구하기 

	for (int i = 0;i < n;i++)
	{
		
		total = (double)m[i] / max * 100;
		result += total;
	}
  
	//결과값 출력 
	printf("%.2lf", (double)result / n);
	//할당한 메모리 해제 
	free(m);
	return 0;
}
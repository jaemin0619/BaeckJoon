#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
/*
* ù° �ٿ� ���ο� ��� ��� 
* ��� ����/M*100 
* �ʿ��� ���� 
* n = ������ ���� 
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
	//m�迭 ���� �Ҵ� 
	int* m = (int*)malloc(sizeof(int) * n);

	//n�� ��ŭ m �迭�� �� �Ҵ� 
	for (int i = 0;i < n;i++)
	{
		scanf("%d ", &m[i]);
	}
	//m���� �ִ� max �ޱ�
	for (int i = 0;i < n;i++)
	{
		if (m[i] > max)
		{
			max = m[i];
		}
	}
	//max �� ���ϱ� 

	for (int i = 0;i < n;i++)
	{
		
		total = (double)m[i] / max * 100;
		result += total;
	}
  
	//����� ��� 
	printf("%.2lf", (double)result / n);
	//�Ҵ��� �޸� ���� 
	free(m);
	return 0;
}
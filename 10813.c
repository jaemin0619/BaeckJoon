#include<stdio.h>
#pragma warning(disable:4996)
/*
* N=���� ����
* M=�� �ٲٴ� Ƚ��
* t= �ٱ��� �ӽ� ���� ���� 
* i = �ٲ� �ٱ��� 1 
* j = �ٲ� �ٱ��� 2 
* t = �ٱ��� �ӽ� ���� ���� 
* basket[100] = �ٱ��� �迭 
*/
int main()
{

	int N, M, i, t,j, basket[100] = { 0, };
	//���� ������ ���� �ٲٴ� Ƚ�� �Է� 
	scanf("%d %d", &N, &M);
	
	//�ٱ��� �迭�� n�� ��ŭ�� ���� �ִ´�.
	for (int b = 1;b <= N;b++)
	{
		basket[b] = b;
	}
	//m�� ���� �ٲٱ�.
	for (int a = 0;a < M;a++)
	{
		//�ٲ� �ٱ��� �Է� �ޱ� 
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
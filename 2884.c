#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int H, M;
	scanf("%d %d", &H, &M);

	//45���� ���� ���� ���� �ð��� �� ������ ��ȯ
	int total = H * 60 + M;
	//45���� ����
	int result = total - 45;

	//������ �� ��� 24�ð��� ���ؾ� ��.
	if (result < 0)
	{
		result += 24 * 60;
	}

	//���� ����� �ð��� ������ �и�
	int resultH = result / 60;
	int resultM = result % 60;
	printf("%d %d\n",resultH, resultM);
	return 0; 
}
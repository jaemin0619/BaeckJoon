#include<stdio.h>
#pragma warning(disable:4996)
/*
* ����=1,����x=0
* ������ ������ 4�� ���&&100�� ����� �ƴҶ� or 400�� ����� ��
* ex) 2012���� 4�� ����̸鼭 100�� ����� �ƴ϶� ����
* 1900���� 100�� ����̰� 400�� ����� �ƴϱ� ������ ������ �ƴ�.
* ������, 2000���� 400�� ����̱� ������ ����
*/
int main()
{
	int a; //���� �Ǵ� ����
	scanf("%d", &a);
	if ((a%4==0 && a%100!=0) || a%400 == 0)
	{
		printf("1");
	}
	else
		printf("0");
	return 0;
}
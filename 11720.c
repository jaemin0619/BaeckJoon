#include<stdio.h>
#pragma warning(disable:4996)

/*
* ���� �� �Է¹޾� ��� ���ؼ� ����ϴ� ���α׷� 
*/
int main()
{
	char a[100]; //���ڿ� a�� ����
	int n; // ù° �ٿ� ������ ���� 
	int total = 0; //���� ��
	scanf("%d", &n); //�Է� �ޱ�
	scanf("%s", a);
	for (int i = 0;i < n;i++)
	{
		total = total + a[i]-'0';
	}
	
	printf("%d", total);

	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n; //��� �� �Է� 
	int arr[100]; //�� �Է�
	int  v; //�Է� ���� �� �߿� v�� �ִ��� 
	int cnt = 0; //���� ī��Ʈ 

	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);
	for (int j = 0;j < n;j++)
	{
		if (arr[j] == v) //�Է¹��� ���� v�� ������ 
			cnt++;
	}
	printf("%d", cnt); //ī��Ʈ ���� ��� 
	return 0;
}
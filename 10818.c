// �����Ҵ� ����ؾ��� 
// int arr[n]; -> ���� �߻�(n�� ���� �Ҵ� �ʿ�)
#include <stdio.h>
#include <stdlib.h> //�����޸� ��� �� ������� �߰� �ʿ�
#pragma warning(disable:4996)
int main()
{
	int n, min = 1000000, max = -1000000;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n); 

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		if (arr[i] >= max) {
			max = arr[i];
		}

		if (arr[i] <= min) {
			min = arr[i];
		}
	}

	printf("%d %d", min, max);

	free(arr); // free ���� ���� ���� -> ���� �޸� ���� 

	return 0;
}
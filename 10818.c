// 동적할당 사용해야함 
// int arr[n]; -> 오류 발생(n에 동적 할당 필요)
#include <stdio.h>
#include <stdlib.h> //동적메모리 사용 시 헤더파일 추가 필요
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

	free(arr); // free 선언 잊지 말기 -> 동적 메모리 해제 

	return 0;
}
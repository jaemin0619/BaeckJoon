#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n; //몇개의 수 입력 
	int arr[100]; //수 입력
	int  v; //입력 받은 수 중에 v가 있는지 
	int cnt = 0; //개수 카운트 

	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);
	for (int j = 0;j < n;j++)
	{
		if (arr[j] == v) //입력받은 수가 v와 같으면 
			cnt++;
	}
	printf("%d", cnt); //카운트 갯수 출력 
	return 0;
}
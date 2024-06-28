#include<stdio.h>
#pragma warning(disable:4996)

/*
* 숫자 를 입력받아 모두 합해서 출력하는 프로그램 
*/
int main()
{
	char a[100]; //문자열 a의 길이
	int n; // 첫째 줄에 숫자의 개수 
	int total = 0; //정수 합
	scanf("%d", &n); //입력 받기
	scanf("%s", a);
	for (int i = 0;i < n;i++)
	{
		total = total + a[i]-'0';
	}
	
	printf("%d", total);

	return 0;
}
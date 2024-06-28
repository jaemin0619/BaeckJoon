#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int H, M;
	scanf("%d %d", &H, &M);

	//45분을 빼기 위해 현재 시간을 분 단위로 변환
	int total = H * 60 + M;
	//45분을 빼줌
	int result = total - 45;

	//음수가 될 경우 24시간을 더해야 함.
	if (result < 0)
	{
		result += 24 * 60;
	}

	//최종 결과를 시간과 분으로 분리
	int resultH = result / 60;
	int resultM = result % 60;
	printf("%d %d\n",resultH, resultM);
	return 0; 
}
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int H, M;
	int NM;
	scanf("%d %d", &H, &M);
	scanf("%d", &NM);
	int total = H * 60 + M;
	int result = total + NM;

	if (result < 0)
	{
		result += 24 * 60;
	}
	int resultH = result / 60;
	int resultM = result % 60;
	printf("%d %d\n", resultH%24, resultM);
	return 0; 
}
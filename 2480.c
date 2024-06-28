#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x, y, z; 
	scanf("%d %d %d", &x, &y, &z);
	int total;
	if (x == y &&y== z)
	{
		total=x * 1000 + 10000;
	}
	else if (x == y || x== z || z ==y)
	{
		int sameeye;
		if (x == y) {
			sameeye = x;
		}
		else if (y == z) {
			sameeye = y;
		}
		else {
			sameeye = z;
		}
		total = sameeye * 100 + 1000;
	}
	else {
		int maxEye = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
		total = maxEye * 100;
	}
	printf("%d\n", total);
	return 0; 
}
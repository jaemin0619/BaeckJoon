#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, x;
	int arr[10];

	scanf("%d %d", &n, &x);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr);
		if (x > arr)
		{
			printf("%d ", arr[i]);
		}
	}
/*#include<stdio.h>
#pragma warning(disable:4996)

	int main()
	{
		int n, x;
		int arr;

		scanf("%d %d", &n, &x);

		for (int i = 0;i < n;i++)
		{
			scanf("%d", &arr);
			if (x > arr)
			{
				printf("%d ", arr);
			}
		}

		return 0;
	}
	return 0;
}
*/
#include <stdio.h>

int main()
{
	int arr[3][3];
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("enter arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("Sum: %d ", sum);
	return 0;
}
#include <stdio.h>

int main()
{
	int arr[3][3], i, j;
	int lowerMatrixSum = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("enter arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j < i)
			{
				lowerMatrixSum = lowerMatrixSum + arr[i][j];
			}
		}
	}

	printf("Lower Sum: %d\n", lowerMatrixSum);

	return 0;
}
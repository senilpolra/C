#include <stdio.h>

int main()
{
	int arr[3][3], diagonalSum = 0;
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("enter arr[%d][%d] value: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				diagonalSum += arr[i][j];
			}
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	printf("Diagonal Elements Sum: %d", diagonalSum);

	return 0;
}
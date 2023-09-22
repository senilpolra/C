#include <stdio.h>

int main()
{
	int arr[3][3];
	int i, j, sum = 0, lowerSum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("enter arr[%d][%d] ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				  sum = sum + arr[i][j];
			}
			else if (j < i)
			{
				lowerSum = lowerSum + arr[i][j];
			}
		} 
	}
	printf("Sum: %d ", sum);
	printf("Lower Sum: %d", lowerSum);
	return 0;
}
#include <stdio.h>

int main()
{
	int arr[5][5];
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("enter arr[%d][%d]: ",i, j);
			scanf("%d",&arr[i][j]);
		}		
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0)
			{
				printf("\t");
			}
			else
			{
				printf("%d\t" , arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
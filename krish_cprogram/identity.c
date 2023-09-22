#include <stdio.h>

int main()
{
	int arr[4][4];
	int i, j, tempOne = 1, tempOther = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (i == j)
			{
				printf("%d\t", tempOne);
			}
			else
			{
				printf("%d\t", tempOther);
			}
		}
		printf("\n");
	}  
	return 0;
}
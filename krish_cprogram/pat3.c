#include <stdio.h>

int main()
{
	int i, j;
	int count = 1;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf("\t");
		}
		for (j = i; j <= 5; j++)
		{
			printf("%d\t", count);
			count++;
		}
		printf("\n");
	}
	return 0;
}
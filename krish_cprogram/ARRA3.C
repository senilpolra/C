#include <stdio.h>
#include <conio.h>

void main()
{
	// odd-even position elements sum.

	int i, oddSum = 0, evenSum = 0;

	clrscr();

	int arr[5];

	for (i=0; i<5; i++)
	{
		printf("enter arr[%d]: ", i);
		scanf("%d" ,&arr[i]);
	}

	for (i=0; i<5; i++)
	{
		if (i % 2 == 0)
		{
			evenSum = evenSum + arr[i];
		}
		else
		{
			oddSum = oddSum + arr[i];
		}
	}

	printf("\n");
	printf("Odd position elements sum: %d\n", oddSum);
	printf("Even position elements sum: %d\n", evenSum);

	getch();
}
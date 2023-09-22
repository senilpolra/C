#include <stdio.h>
#include <conio.h>

void main()
{
	int i, evenPos=0, oddPos=0;
	int arr[10];
	clrscr();

	for (i=0; i<10; i++)
	{
		printf("enter array[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	for (i=0; i<10; i++)
	{
		if (i%2==0)
		{
			evenPos = evenPos + arr[i];
		}
		else
		{
			oddPos = oddPos + arr[i];
		}
	}
	printf("\n");

	printf("Even Position sum: %d\n", evenPos);
	printf("Odd Position sum: %d\n", oddPos);
	getch();
}
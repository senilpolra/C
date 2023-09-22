#include <stdio.h>
#include <conio.h>

void main()
{
       //	two array with data only.

	clrscr();
	int i;
	int arr1[5] = {10, 20, 30, 40, 50};
	int arr2[10];

	for (i=0; i<10; i++)
	{
		printf("enter arr[%d]: ", i);
		scanf("%d", &arr2[i]);
	}

	printf("\n");
	printf("Array1 is as follows\n ");

	for (i=0; i<5; i++)
	{
		printf("%d ", arr1[i]);
	}

	printf("\n");
	printf("\n");
	printf("Array2 is as follows\n");

	for (i=0; i<10; i++)
	{
		printf("%d ", arr2[i]);
	}
	getch();
}
#include <stdio.h>
#include <conio.h>

void main()
{
	int n,p;
	clrscr();

	printf("Enter negative number: ");
	scanf("%d", &n);
	printf("Enter positive number: ");
	scanf("%d", &p);

       //	printf("\n5. Negative to Positive\n\n");

	if (n<0 && p>=0)
	{
		for (int i=n; i<=p; i++)
		{
			printf("i: %d\n", i);
		}
	}
	else
	{
		printf("Error 404\n");
	}
	getch();
}
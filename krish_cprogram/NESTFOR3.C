#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j;
	clrscr();

	for (i=5; i>=1; i--)
	{
		for (j=5; j>=1; j--)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	getch();
}
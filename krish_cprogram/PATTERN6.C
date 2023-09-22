#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j;
	clrscr();

	for (i=1; i<=5; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("%c ", j+64);
		}
		 printf("\n");
	}
	getch();


}
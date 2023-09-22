#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	clrscr();

	for (i=65; i<=90; i++)
	{
		printf("%c-%d\n", i, i);
	}
	getch();
}
#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	clrscr();
	for (i=65; i<=90; i+=2)
	{
		printf("%c ", i);
	}
	getch();
}
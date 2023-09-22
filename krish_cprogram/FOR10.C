#include <stdio.h>
#include <conio.h>
	// 10) Print A-a,B-b

void main()
{
	int i;
	clrscr();
	for (i=65; i<=90; i++)
	{
		printf("%c-%c\n", i,i+32);
	}
	getch();
}
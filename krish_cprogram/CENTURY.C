#include <stdio.h>
#include <conio.h>

void main()
{
	int year;
	clrscr();
	printf("Enter year: ");
	scanf("%d", &year);

	if (year % 100 == 0)
	{
		printf("Century year");
	}
	else
	{
		printf("Not a century year");
	}
	getch();
}
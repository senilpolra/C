#include <stdio.h>
#include <conio.h>

void main()
{
	int number;
	clrscr();

	printf("Enter any number: ");
	scanf("%d", &number);

	if (number > 100)
	{
		printf("Number is greater than 100");
	}
	else
	{
		printf("Not greater than 100");
	}
	getch();
}
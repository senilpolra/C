#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);

	if (a > b)
	{
		if (a > c)
		{
			printf("A is big");
		}
		else
		{
			printf("C is big");
		}

	}
	else
	{
		if (b > c)
		{
			printf("B is big");
		}
		else
		{
			printf("C is big");
		}
	}
	getch();
}
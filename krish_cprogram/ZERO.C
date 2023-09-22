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
	if(a > b)
	{
		if(a > c)
		{
			printf("a is big\n");
		}
		else
		{
			printf("c is big\n");
		}
	}
	else
	{
		if(b > c)
		{
			printf("b is big\n");
		}
		else
		{
			printf("c is big\n");
		}
	}
	if (a == 0)
	{
		printf("a is zero\n");
	}
	if (b == 0)
	{
		printf("b is zero\n");
	}
	if (c == 0)
	{
		printf("c is zero\n");
	}
	getch();
}

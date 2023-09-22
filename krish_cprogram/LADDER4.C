#include <stdio.h>
#include <conio.h>

void main()
{
	int income, taxAmt;
	clrscr();

	printf("Enter your income: ");
	scanf("%d", &income);

	if (income >= 0 && income <= 2500)
	{
		taxAmt = 0;
	}
	else if (income > 2500 && income <= 5000)
	{
		taxAmt = (income - 2500) * 0.10;
	}
	else if (income > 5000 && income <= 10000)
	{
		taxAmt = 250 + (income - 5000) * 0.20;
	}
	else if (income > 10000)
	{
		taxAmt = 1000 + (income - 10000) * 0.30;
	}
	else
	{
		printf("Enter valid income.\n");
	}
	printf("Income: %d\n", income);
	printf("Tax Amount %d\n", taxAmt);
	getch();
}
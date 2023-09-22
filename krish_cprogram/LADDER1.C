#include <stdio.h>
#include <conio.h>

void main()
{
	int unit, billAmt;
	clrscr();
	printf("Enter unit: ");
	scanf("%d", &unit);

	if (unit <= 100)
	{
		billAmt = unit * 0.6 + 50;
	}
	else if (unit >= 100 && unit <= 300)
	{
		billAmt = 60 + (unit - 100) * 0.8 + 50;
	}
	else if (unit >= 300)
	{
		billAmt = 220 + (unit - 300) * 0.9 + 50;
	}
	if (billAmt >= 300)
	{
		billAmt = billAmt + (billAmt * 0.15);
	}
	printf("The charge is: %d", billAmt);
	getch();
}
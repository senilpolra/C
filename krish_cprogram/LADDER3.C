#include <stdio.h>
#include <conio.h>

void main()
{
	int salary, hra, da, grossSalary;
	clrscr();
	printf("Enter your salary: ");
	scanf("%d", &salary);

	if (salary <= 5000)
	{
		hra = salary * 0.08;
		da = salary * 0.2;
	}
	else if (salary > 5000 && salary <= 10000)
	{
		hra = (salary * 12) / 100;
		da = (salary * 30) / 100;
	}
	else if (salary > 10000 && salary <= 15000)
	{
		hra = (salary * 15) / 100;
		da = (salary * 40) / 100;
	}
	else if (salary > 15000)
	{
		hra = (salary * 20) / 100;
		da = (salary * 50) / 100;
	}
	grossSalary = salary + hra + da;
	printf("Gross Salary: %d\n", grossSalary);
	getch();
}

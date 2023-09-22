#include <stdio.h>
#include <conio.h>

void main()
{
	int sub1, sub2, sub3, total, percent;
	clrscr();
	printf("Enter marks of subject1: ");
	scanf("%d", &sub1);
	printf("Enter marks of subject2: ");
	scanf("%d", &sub2);
	printf("Enter marks of subject3: ");
	scanf("%d", &sub3);

	total = sub1 + sub2 + sub3;
	percent = (total * 100) / 300;

	if (percent > 75)
	{
		printf("GRADE: A\n");
	}
	else if (percent > 60 && percent <= 75)
	{
		printf("GRADE: B\n");
	}
	else if (percent > 45 && percent <= 60)
	{
		printf("GRADE: C\n");
	}
	else if (percent > 35 && percent <= 45)
	{
		printf("GRADE: D\n");
	}
	else if (percent <= 35)
	{
		printf("GRADE: FAIL\n");
	}

	printf("Total %d\n", total);
	printf("Percentage %d\n", percent);
	getch();
}
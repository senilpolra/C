#include <stdio.h>
#include <conio.h>

void main()
{
	int maths, phy, chem, total, total2;
	clrscr();

	printf("Enter marks of maths: ");
	scanf("%d", &maths);
	printf("Enter marks of physics: ");
	scanf("%d", &phy);
	printf("Enter marks of chemistry: ");
	scanf("%d", &chem);

	total = maths + phy + chem;
	total2 = maths + phy;
	printf("---------------------------------------\n");
	printf("Maths: %d\n", maths);
	printf("Physics: %d\n", phy);
	printf("Chemistry: %d\n", chem);
	printf("Total of 3 subjects: %d\n", total);
	printf("Total of Maths & Physics: %d\n", total2);

	if (maths >= 65 && phy >= 55 && chem >= 50)
	{
		if (total >= 190 || total2 >= 140)
		{
			printf("The candidate is eligible for admission.\n");
		}
		else
		{
			printf("The candidate is not eligible for admission.\n");
		}
	}
	else
	{
		printf("The candidate is not eligible for admissionn.\n");
	}
	getch();
}
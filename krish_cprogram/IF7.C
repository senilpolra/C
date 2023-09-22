#include <stdio.h>
#include <conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("Enter X coordinate: ");
	scanf("%d", &x);
	printf("Enter Y coordinate: ");
	scanf("%d", &y);

	if(x > 0 && y > 0)
	{
		printf("Both (%d, %d) lies in the first quadrant.\n", x,y);
	}
	else if (x < 0 && y > 0)
	{
		printf("Both (%d, %d) lies in the second quadrant.\n", x,y);
	}
	else if (x < 0 && y < 0)
	{
		printf("Both (%d, %d) lies in the third quadrant.\n", x,y);
	}
	else if (x > 0 && y < 0)
	{
		printf("Both (%d, %d) lies in the fourth quadrant.\n", x,y);
	}
	else if(x == 0 && y == 0)
	{
		printf("Both (%d, %d) lies on the base line.\n", x,y);
	}
	getch();
}

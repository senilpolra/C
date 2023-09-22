#include <stdio.h>
#include <conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter value of y: ");
	scanf("%d", &y);

	if (x < 2000 || x > 3000)
	{
		printf("X: %d\n" , x);
	}
	if (y >= 100 && y <= 500)
	{
		printf("Y: %d\n", y);
	}
	getch();
}
#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	clrscr();
	printf("Enter n: ");
	scanf("%d", &n);

	for (int i=n; i>=1; i--)
	{
		printf("i: %d\n", i);
	}
	getch();
}

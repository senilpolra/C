#include <stdio.h>
#include <conio.h>

       //	6) Enter n to print odd upto n.

void main()
{
	int n;
	clrscr();
	printf("Enter n: ");
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		if (i%2==1)
		{
			printf("i: %d\n", i);
		}
	}
	getch();
}
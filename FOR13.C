#include <stdio.h>
#include <conio.h>

void main()
{
	int n,i,sum=0;
	clrscr();

	printf("Enter n: ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		if (i%2==0)
		{
			sum = sum + i;
		}
	}
	printf("Total of even numbers: %d\n", sum);
	getch();
}
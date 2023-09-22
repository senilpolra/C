#include <stdio.h>
#include <conio.h>

void main()
{
	int n,i;
	clrscr();
	printf("enter n: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		if (i%2==0)
		{
			printf("%d ", i*i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	getch();
}
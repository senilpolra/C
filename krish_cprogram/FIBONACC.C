#include <stdio.h>
#include <conio.h>

void main()
{
	int n,i,a=0, b=1,c;
	clrscr();

	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d ", a);
	printf("%d ", b);

	for (i=1; i<=n; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	getch();
}
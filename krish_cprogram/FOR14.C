#include <stdio.h>
#include <conio.h>

void main()
{
	// 1,4,9,16,...n

	int n,i;
	clrscr();
	printf("Enter n: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		printf("%d ", i*i);
	}
	getch();
}
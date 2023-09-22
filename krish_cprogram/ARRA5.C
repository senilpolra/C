#include <stdio.h>
#include <conio.h>

void main()
{
	 int i, arr[10];
	 int sum = 0;

	 clrscr();

	 for (i=0; i<10; i++)
	 {
		printf("enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	 }

	 for (i=0; i<10; i++)
	 {
		sum = sum + arr[i];
	 }

	 printf("\n Sum: %d\n ", sum);

	 getch();
}
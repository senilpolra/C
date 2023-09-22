#include <stdio.h>
#include <conio.h>

void main()
{
       //	7. Enter n to print even upto n.

       int n;
       clrscr();
       printf("Enter n: ");
       scanf("%d", &n);

       for (int i=1; i<=n; i++)
       {
		if (i%2==0)
		{
			printf("i: %d\n", i);
		}
       }
       getch();
}
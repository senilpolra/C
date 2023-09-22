#include <stdio.h>
#include <conio.h>

void main()
{
       //	enter n to print 1 to n

       int n;
       clrscr();
       printf("Enter n: ");
       scanf("%d", &n);

       for (int i=1; i<=n; i++)
       {
		printf("i:%d\n", i);
       }
       getch();
}
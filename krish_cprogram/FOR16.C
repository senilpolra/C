#include <stdio.h>
#include <conio.h>

void main()
{
       //	1,4,9,16,...
       int n,i;
       clrscr();
       printf("Enter number for which you want to print table: ");
       scanf("%d", &n);

       for (i=1; i<=10; i++)
       {
		printf("%d * %d = %d\n", n,i,n*i);
       }
       getch();
}
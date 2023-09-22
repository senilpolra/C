#include <stdio.h>
#include <conio.h>

void main()
{
       //	1,2,3....10=55
       int i,sum=0;
       clrscr();
       for (i=1; i<=10; i++)
       {
		sum = sum + i;
       }
       printf("Sum: %d", sum);
       getch();
}





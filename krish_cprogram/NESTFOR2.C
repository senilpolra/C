#include <stdio.h>
#include <conio.h>

void main()
{
       /*	 1 2 3 4 5
	 1 2 3 4 5
	 1 2 3 4 5
	 1 2 3 4 5
	 1 2 3 4 5 */

	 int i,j;
	 clrscr();
	 for (i=1; i<=5; i++)
	 {
		for (j=1; j<=5; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	 }
	 getch();
}
#include <stdio.h>
#include <conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &num);

	if (num % 5 == 0) {
		if (num % 7 == 0) {
			printf("Multiple of 5 and 7");
		}
		else {
			printf("Not multiple of 5 and 7");
		}
	}
	getch();
}

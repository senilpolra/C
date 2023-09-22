#include <stdio.h>
#include <conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter a character: ");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("Convert Case %c --> %c", ch, ch + 32);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("Convert Case %c --> %c", ch, ch - 32);
	}
	getch();
}
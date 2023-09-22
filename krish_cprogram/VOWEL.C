#include <stdio.h>
#include <conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter character: ");
	scanf("%c", &ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("Character is vowel %c", ch);
	}
	else
	{
		printf("Character is consonant %c", ch);
	}

	getch();

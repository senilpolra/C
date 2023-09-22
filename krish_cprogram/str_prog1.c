


#include <stdio.h>

int main()
{
	// char word[6] = {'s','h','i','v','a','m'};
	char str[40];

	int count = 0;
	
	printf("enter your name: ");
	scanf("%[^\n]s", &str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("Name[%d]: %c\n", i, str[i]);
		count++;
	}

	printf("String lenght counting %d\n", count);
}
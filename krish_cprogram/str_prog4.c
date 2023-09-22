#include <stdio.h>

int main()
{
	char str[50];
	int totalVowels = 0, totalConsonant = 0;

	printf("enter any word: ");
	scanf("%[^\n]s", &str);
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || 			str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			totalVowels++;
		}
		else
		{
			totalConsonant++;
		}
	}

	printf("Total vowels are: %d\n", totalVowels);
	printf("Total consonant are: %d\n", totalConsonant);
	return 0;
}


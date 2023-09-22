#include <stdio.h>

int main()
{
	char str[3] = {'r','a','j'};
	char str2[6] = "senil";

	char str3[40];

	printf("String is %s\n", str);
	printf("String 2 is %s\n", str2);

	printf("enter str3 value: ");
	scanf("%[^\n]s", &str3);

	printf("str3 value is : %s\n", str3);

	for (int i = 0; str3[i] != '\0'; i++)
	{
		printf("string char is str3[%d]: %c\n", i, str3[i]);
	}

	printf("\n");

	for (int i = 0; str2[i] != '\0'; i++)
	{
		printf("string char is str2[%d]: %c\n", i, str2[i]);
	}

	return 0;
}
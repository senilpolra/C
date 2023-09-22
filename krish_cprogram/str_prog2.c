#include <stdio.h>

int main()
{
	char str[40];
	char str1[40];
	int count = 0, total, i;

	printf("enter name: ");
	scanf("%[^\n]s", &str);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
		total = count;
	}
	count = 0;
	total--;
	for (i = total; i >= 0; i--)
	{
		str1[i] = str[count];
		count++;
	}
	total++;
	str1[total] = '\0';

	
	printf("Name: %s", str1);
	return 0;
}
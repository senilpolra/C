#include <stdio.h>

int main()
{
	char string1[] = "skill";
	char string2[] = "qode";
	char string3[40];
	int count = 0;	

	for (int i = 0; string1[i] != '\0'; i++)
	{
		string3[count] = string1[i];
		count++;		
	}

	for (int i = 0; string2[i] != '\0'; i++)
	{
		string3[count] = string2[i];
		count++;		
	}

	string3[count] = '\0';
	
	printf("String3: %s", string3);

	return 0;
}

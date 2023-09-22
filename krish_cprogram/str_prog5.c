#include <stdio.h>

int main()
{
	char str[20] = "aba";
	char tmp[20];
	int rev = 0, rem;

	for (int i = 0; str[i] != '\0'; i++)
	{
		rem = str[i] % 10;
		rev = rev * 10 + rem;
		str[i] = str[i] / 10;
		printf("%s\n",str[i]);
 	}
	return 0;
}
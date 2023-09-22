#include <stdio.h>

int main()
{
	int n, reversed = 0, remainder , originalNum;
	n = 123 ;
	originalNum = n;

	while (n > 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n = n / 10;
	}
	
	printf("%d", reversed);
	return 0;
}
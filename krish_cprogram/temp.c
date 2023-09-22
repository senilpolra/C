#include <stdio.h>

int main()
{
	int n, i;
	
	printf("enter size of an array: ");
	scanf("%d", &n);

	int arr[n];

	for (i = 0; i < n; i++)
	{
		printf("enter arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
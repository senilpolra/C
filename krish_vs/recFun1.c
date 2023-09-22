#include <stdio.h>

int arr[5];
int sum = 0;

int sumArr(int a)
{
    int n = sum + a; 
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter arr[%d]: ", i);
        scanf("%d", &arr[i]);

        printf("%d", i);
    }
}
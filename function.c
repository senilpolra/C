#include <stdio.h>

// No return with No arugument

void sum()
{
    int a = 10, b = 20;

    printf("Sum: %d\n", a + b);
}

int getData()
{
    int n;

    printf("enter n: ");
    scanf("%d", &n);

    return n;
}

int main()
{
    int temp;
    sum();
    temp = getData();
    printf("Value of n: %d\n", temp);
    return 0;
}
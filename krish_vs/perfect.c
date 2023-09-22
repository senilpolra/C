#include <stdio.h>

int perfectNum(int num)
{
    int i, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d", &n);

    int result = perfectNum(n);

    if (result == n)
    {
        printf("%d is a perfect number", result);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
    return 0;
}
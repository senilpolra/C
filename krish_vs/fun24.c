#include <stdio.h>

void square()
{
    int n, i = 1;

    printf("enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", i * i);
        i++;
    }
}

int main()
{
    square();
    return 0;
}
#include <stdio.h>

int goli()
{
    int sum = 0;
    int i = 1, n;

    printf("enter n: ");
    scanf("%d", &n);
    
    while (i <= n)

    {
        sum = sum + i;
        i++;
    }
    return sum;
}

int main()
{
    int ans = goli();
    printf("%d", ans);
    return 0;
}
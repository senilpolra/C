#include <stdio.h>

int main()
{
    int n, i, j;
    int k = 65;
    
    printf("enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("\t");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c\t", k);
            k++;
        }
        printf("\n");
        k = 65;
    }
    
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("\t");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c\t", k);
            k++;
        }
        printf("\n");
        k = 65;
    }

    return 0;
}

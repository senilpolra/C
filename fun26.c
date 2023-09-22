#include <stdio.h>

void numSeries()
{
    int n, i, j;
    
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main()
{
    numSeries();
    return 0;
}
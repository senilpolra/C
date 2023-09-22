#include <stdio.h>

void numColumn()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    numColumn();
    return 0;
}
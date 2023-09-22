#include <stdio.h>

void t1()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
int main()
{
    t1();
    return 0;
}
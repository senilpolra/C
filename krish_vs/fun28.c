#include <stdio.h>

void alphabetSeries()
{
    int i, j;

    for (i = 65; i <= 69; i++)
    {
        for (j = 65; j <= 69; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}

int main()
{
    alphabetSeries();
    return 0;
}
#include <stdio.h>

void lowerUpperAlpha()
{
    int i = 65;

    while (i <= 90)
    {
        printf("%c-%c\n", i, i + 32);
        i++;
    }
}

int main()
{
    lowerUpperAlpha();
    return 0;
}
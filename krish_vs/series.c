#include <stdio.h>

void smallCapital()
{
    int i;

    for (i = 65; i <= 90; i++)
    {
        printf("%c-%d\n",i,i);
    }
}

int main()
{
    smallCapital();
    return 0;
}
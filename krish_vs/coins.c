#include <stdio.h>

int convertAmountToCoins(int amount)
{
    int arrCoins[5] = {25, 10, 5, 2, 1};
    int temp;

    while (temp > 0)
    {
        temp = amount / 2;
    }
}

int main()
{
    int amt;

    printf("enter amount: ");
    scanf("%d", &amt);

    convertAmountToCoins(amt);
    return 0;
}
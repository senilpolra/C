#include <stdio.h>

// REVERSE A NUMBER

int reverseNumber(int a)
{
    int rem, temp = 0;

    while (a > 0)
    {
        rem = a % 10;
        temp = temp * 10 + rem;
        a = a / 10; // 
    }
    // printf("Reverse Number: %d\n", temp);
    return temp;
}

int main()
{
    int n;

    printf("enter n: ");
    scanf("%d", &n);

    int ans = reverseNumber(n);
    printf("Reverse Number: %d\n", ans);
    return 0;
}
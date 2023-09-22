#include <stdio.h>

int data(int a, int b)
{
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    int sum = a + b;
    // printf("%d", sum);

    return sum;
}

int main()
{
    int a = 10, b = 15;
    int ans = data(a, b);
    printf("%d", ans);
    return 0;
}
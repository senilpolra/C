#include <stdio.h>

int sumArr()
{
    int nums[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("enter arr[%d]: ", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + nums[i];
    }
    return sum;
}

int main()
{
    int result = sumArr();
    printf("Sum: %d", result);
    return 0;
}
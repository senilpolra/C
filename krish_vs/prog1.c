#include <stdio.h>

void smallest()
{
    int num1, num2, num3;

    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    printf("enter num3: ");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("%d is smallest number", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("%d is smallest number", num2);
    }
    else if (num3 < num1 && num3 < num2)
    {
        printf("%d is smallest number", num3);
    }
    else
    {
        printf("INVALID");
    }
}

int main()
{
    smallest();
    return 0;
}
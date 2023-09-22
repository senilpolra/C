#include <stdio.h>

int account, stat, eco, total, percent;

int getMarks()
{
    printf("enter account marks: ");
    scanf("%d", &account);
    printf("enter stat marks: ");
    scanf("%d", &stat);
    printf("enter economics marks: ");
    scanf("%d", &eco);
}

int calculate()
{
   total = account + stat + eco;
   percent = (total * 100) / 300; 
}

int showMarks()
{
    printf("Total: %d\n", total);
    printf("Percentage: %d\n", percent);

    if (percent > 75 && percent <= 99)
    {
        printf("A");
    }
    else if (percent > 60 && percent <= 75)
    {
        printf("B");
    }
    else if (percent > 45 && percent <= 60)
    {
        printf("C");
    }
    else if (percent > 35 && percent <= 45)
    {
        printf("D");
    }
    else if (percent <= 35)
    {
        printf("Fail");
    }
}

int main()
{
    getMarks();
    calculate();
    showMarks();
    return 0;
}  
#include <stdio.h>

int getMarks()
{
    int eng, guj, maths, total;

    printf("enter english marks: ");
    scanf("%d", &eng);
    printf("enter gujarati marks: ");
    scanf("%d", &guj);
    printf("enter maths marks: ");
    scanf("%d", &maths);

    total = eng + guj + maths;

    return total;
}

int calculate(int totalMarks)
{
    int percent = (totalMarks * 100) / 300;

    return percent;
}

void showResult(int totalMarks, int percentage)
{
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %d\n", percentage);
}

int main()
{
    int getTotal = getMarks();
    int getPercent = calculate(getTotal);
    showResult(getTotal, getPercent);
    return 0;
}
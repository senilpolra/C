#include <stdio.h>

int printArr(int a)
{
    return printArr(a);
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
     printf("enter arr[%d]: ", i);
  z      scanf("%d", &arr[i]);
 z   }

z    for (int i = 0; i < 5; i++)
    {
        printf("%d ", printArr(i));
    }
}
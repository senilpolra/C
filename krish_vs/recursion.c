#include<stdio.h>
  int arr[5],i=0,b,j=0;

int array()
{
        printf("enter arr[%d]:",i);
        scanf("%d",&b);
        arr[i]=b;
        i++;       
        if(i<=4)
        {
            array();
        }                                                               
}

int large()
{
    if(j<=4)
    {
    if(arr[i]>arr[j])
    {
        j++;
        large();
    }
    else
    {
        i=j;
        j++;
        large();
    }
    }
    return arr[i];
}

int main()
{
   
    array();
    i=0;
    int c=large();
    printf("%d", c);
    return 0;
}
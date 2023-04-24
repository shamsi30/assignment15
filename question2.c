#include<stdio.h>
int small(int y[],int size)
{
    int i,min=100;
    for(i=0;i<size;i++)
    {
        if(min>y[i])
            min=y[i];
    }
    return min;
}

int main()
{
    int a[5]={10,5,2,9,11};
    int x;
    x=small(a,5);
    printf("Smallest number from given array is %d",x);
    return 0;
}
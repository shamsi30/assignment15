#include<stdio.h>

void printReverse(int x[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    printf("In reverse order of array\n");
    printReverse(a,10);
    return 0;
}
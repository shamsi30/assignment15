#include<stdio.h>

int adjacentduplicate(int a[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
}

int main()
{
    int a[10]={11,2,3,4,4,1,5,6,8,9};
    int x =adjacentduplicate(a,10);
    printf("First occurence of adjacent duplicate value is %d",x);
    return 0;
}
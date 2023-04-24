#include<stdio.h>
void leftrotation(int a[] , int size  ,int d)
{
    int i,j;
    for(i=1;i<=d;i++)   /*rotation condition*/
    {
        int x=a[0];
        for(j=1;j<size;j++)
        {
            a[j-1]=a[j];
        }
        a[size-1]=x;
    }
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int a[8]={1,2,3,4,5,6,7,8};
    leftrotation(a,8,2);
    return 0;
}    
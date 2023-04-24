#include<stdio.h>
void min(int a[],int size)
{
    int i,j,t;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[5]={8,4,9,1,3};
    min(a,5);
    return 0;
}
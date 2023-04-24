#include<stdio.h>

int max(int y[],int size)
{
    int i,max=0;
    for(i=0;i<size;i++)
    {
        if(max<y[i])
            max=y[i];
    }

    return max;
}
int main()
{
    int a[5]={1,4,5,8,3};
    int x;
    x=max(a,5);
    printf("Greatest number from the given array is %d",x);
    return 0;
}

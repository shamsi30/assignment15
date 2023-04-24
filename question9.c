#include<stdio.h>
void mergeTwoArray(int a[],int b[])
{
    int c[10];
    int i,j,k;
    for(i=0,j=0;i<5 && j<5;k++)
    {
        if(a[i] < b[j])
        {
            
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    if(i==5 && j!=5)
    {
        for( ;j<5;j++)
        {
            c[k]=b[j];
            k++;
        }
    }
    else if(i!=5 && j==5)
    {
        for( ;i<5;i++)
        {
            c[k]=a[i];
            i++;
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf(".....Array in sorted order....\n");
    for(k=0;k<10;k++)
    {
        printf("%d ",c[k]);
    }
}

int main()
{
    int a[5]={2,4,6,8,10};
    int b[5]={11,5,12,9,1};
    int c[10];
    mergeTwoArray(a,b);
    return 0;
}
#include<stdio.h>
void printUnique(int x[],int size)
{
    int i,hash[100]={0};
    for(i=0;i<size;i++)
    {
        //hash[x[i]]++;
        //if(x[i]==1)
            //printf("%d",x[i]);
    }

    for(i=0;i<100;i++){
        if(hash[i]==1)
            printf("%d <<<<<< %d'times\n",i,hash[i]);
    }
}

int main()
{
    int a[10]={1,2,3,4,5,6,2,1,3,4};
    printUnique(a,10);
    return 0;
}
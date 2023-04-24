#include<stdio.h>

void printDuplicate(int x[],int size)
{
    int i,hash[100]={0};
    for(i=0;i<size;i++){
        hash[x[i]]++;
    }

    for(i=0;i<100;i++){
        if(hash[i]==2)
            printf("%d <<<<<<<< %d'times\n",i,hash[i]);
    }

}
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("total numbers of duplicate elements:\n");
    printDuplicate(a,10);
    return 0;
}
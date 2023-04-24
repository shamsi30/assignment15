#include<stdio.h>
int main()
{
    int freq[50]={0};
    int i,a[10];
    printf("Enter ten numbers\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<50;i++)
    {
        printf("%d -->> %d times\n",i,freq[i]);
    } 
    return 0;
}

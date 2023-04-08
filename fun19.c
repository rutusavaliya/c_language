#include<stdio.h>
int num()
{
    int i,n;
    printf(" enter the n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
     {
        printf(" %d\n",i);
     }
}

int main()
{
    num();
    
}
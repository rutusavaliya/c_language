#include<stdio.h>
int sum()
{
    int  i,sum=0;
    for(i=1;i<=5;i++)
     {
        
        sum+=i;
        printf("%d",i);
     }
     printf(" \n total is %d",sum);
}

int main()
{
    sum();
}   
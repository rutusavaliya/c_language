#include<stdio.h>
int loop()
{
    int  i,n,sum=0;
    printf(" enter the n :");
    scanf("%d",&n);
    for(i=1;i<=n;i*=2)
    {
        sum+=i;
        printf("%d",i);
     }
     printf(" \n  total is :%d",sum);
}

int main()
{
    loop();
}   
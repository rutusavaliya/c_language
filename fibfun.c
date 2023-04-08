#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c,f,i;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int a=0,b=1,c,i,n,f;
    printf(" enter n :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        f=fib(n);
        printf("\nfib :% d",b);
        a=b;
        b=c;
    }
}
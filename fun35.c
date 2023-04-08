#include<stdio.h>
int loop()
{
    int  i,b=1,c=0,d=1;
    for(i=1;i<=10;i++)
    
     {
        printf("%d",d);
        b=c;
        c=d;
        d=b+c;
     }
     printf(" \n ");
}

int main()
{
    loop();
}   
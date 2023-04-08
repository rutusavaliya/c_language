#include<stdio.h>
int loop()
{
    int  i,n;
    printf(" enter the n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
     {
        
    
        printf("%d",i*i);
     }
     printf(" \n ");
}

int main()
{
    loop();
}   
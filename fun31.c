#include<stdio.h>
int loop()
{
    int  i,n;
    printf(" enter the n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(i%2==1)
    
     {
        
    
        printf("%d",i);
     }
     else
    {
        printf("%d",i*i);
    }
     
}

int main()
{
    loop();
}   
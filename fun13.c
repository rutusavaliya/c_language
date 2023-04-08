#include<stdio.h>
int value()
{
    int a,num;
    printf("enter one value");
    scanf("%d",&num);
    if(num>=0)
    {
        printf(" positive is %d",num);
    }
       else
       {
           printf(" negative is :%d",num);
       }    
}

int main()
{
    value();
}
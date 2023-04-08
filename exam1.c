#include<stdio.h>
int main ()
{

    int year,i;
    printf(" enter the year :");
    scanf("%d",&year);
    if(year%4!=0)
    {
        printf(" leap year is:%d",year);
    }
    else
    {
        printf(" not leap year is :%d",year);
    }    
}
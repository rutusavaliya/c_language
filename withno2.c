#include<stdio.h>
int reverse()
{
    int r=0,n;
    printf(" enter a number to reverse\n ");
    scanf("%d",&n);

    while(n != 0)
    
    {
        r= (r*10) + (n%10);
        n =n/10;
    }
    printf(" reversed  of entered number is = %d",r);
}

int main()
{
    reverse();
}
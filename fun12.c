#include<stdio.h>
int smallest()
{
    int a,b;
    printf("enter a :");
    scanf("%d",&a);
    printf(" enter b :");
    scanf("%d",&b);
    if(a<b)
    printf("smallest no is :%d",a);
}

int main()
{
    smallest();
}
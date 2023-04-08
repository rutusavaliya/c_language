#include<stdio.h>
int main()
{
    int a,b,c;
    int *p,*q;
    printf(" enter the a:");
    scanf("%d",&a); 
    printf(" enter the b:");
    scanf("%d",&b);
    printf("\n a=%d and b=%d\n",a,b);
    p=&a;
    q=&b;
    c=*p;
    *p=*q;
    *q=c;
    printf("\n a=%d and b=%d\n",a,b); 
}


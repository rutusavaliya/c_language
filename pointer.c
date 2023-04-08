#include<stdio.h>
int main()
{
    int a=20,*p,**q,***r;

    p  =  &a;
    q  =  &p;
    r  =  &a;

    printf(" value of a is %d",a);
    printf("\n Address of a is : %u",&a);
    printf("\n Address of a using p is :%d",p);
    printf("\n Address of p is %u",&p);
    printf("\n value of using p is :%d",*p);
    printf ("\n Address of p using a is :%d",q);
    printf ("\n Address of q is :%u",&q);
    printf("\n value of using q is :%d",**q);
    printf ("\n Address of q using r is :%d",r);
    printf("\n Address of r is :%u",&r);
    printf("\n value of a using r is :%d",***r); 

}
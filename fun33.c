#include<stdio.h>
int loop()
{
    int  a,c=1,d=1;
    
    for(a=1;a<=10;a++)
    
     {
        d=c*a;
         printf("%d",d);
         c+=c;
     }
     printf(" \n ");
}

int main()
{
    loop();
}   
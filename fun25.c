#include<stdio.h>
int loop()
{
    char i,j;
    for(i=65;i<=90;i++)
     {
        j=i+32;
        printf(" %c %c",i,j);
     }
}

int main()
{
    loop();
}   
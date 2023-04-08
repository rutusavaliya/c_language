#include<stdio.h>
int loop()
{
    char i;
    for(i='A';i<='Z';i++)
    if(i%2==1)
    
     {
        printf("%c",i);
     }
     printf(" \n ");
}

int main()
{
    loop();
}   
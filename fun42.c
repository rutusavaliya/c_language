#include<stdio.h>
int loop()
{
    int  i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             printf("%c",ch++);
        }
     printf(" \n ");
    }

}
    


int main()
{
    loop();
}   
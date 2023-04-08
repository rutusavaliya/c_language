#include<stdio.h>
int loop()
{
    int  i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
             printf("%d",j);
        }
     printf(" \n ");
    }

}
    


int main()
{
    loop();
}   
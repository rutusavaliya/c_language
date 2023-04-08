#include<stdio.h>
int loop()
{
    int  i,j;
    for(i=1;i<=10;i++)
    if(i%2==1)
    {
        for(j=1;j<=5;j++)
        {
             printf("%d",i);
        }
     printf(" \n ");
    }

}
    


int main()
{
    loop();
}   
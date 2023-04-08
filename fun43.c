#include<stdio.h>
int loop()
{
    int  i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             printf("%d",k++);
        }
     printf(" \n ");
    }

}
    


int main()
{
    loop();
}   
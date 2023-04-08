#include<stdio.h>
int loop()
{
    int  i,j,k=11;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
             printf("%d",k++);
        }
     printf(" \n ");
     k=k+5;
    }

}
    


int main()
{
    loop();
}   
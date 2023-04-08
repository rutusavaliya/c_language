#include<stdio.h>
int loop()
{
    int  i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
             printf("%c",j);
        }
     printf(" \n ");
    }

}
    


int main()
{
    loop();
}   
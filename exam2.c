#include<stdio.h>
int main ()
{
    int row,i,j;
    printf(" enter the row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
  {
        for(j=1;j<=row;j++)
           printf("");
    {
      for(j=1;j<=(2*i+1);j++)
      {
        if(j==row||j==i||j==2*i-1)
        printf(" * ");
        else
              printf("");  
        {
            printf("\n");
        }
      }

    }

  }

}    
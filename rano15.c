#include<stdio.h>
int main ()
{



      int i,j,row,cols;
      i=1;
      printf(" enter the row and cols ");
      scanf("%d%d",&row,&cols);

      while(i<row)
  
    { 
      printf("   "); 
      j=1;
      while(j<cols)

        {
          if(i==0||i==row-1||j==0||j==cols-1)
          printf("*");
          j++;
        }
           printf("\n");
           i++;        



    }  



}





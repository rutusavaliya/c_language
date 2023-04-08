#include<stdio.h>
int main ()
{

      int a[5][5],b[5][5],c[5][5],i,j;
      printf(" enter the first matrix:\n");
      for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
             {     
         
         scanf("%d",&a[i][j]);
             } 
                  printf("\n");
 
                         
        }
       printf("enter the two matrix:\n");
        for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
             {     
         
         scanf("%d",&b[i][j]);
             } 
                  printf("\n");
 
           }

         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
             {     
        
                       c[i][j]=a[i][j]+b[i][j];
             } 
                 
 
        }

          for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
             {     
        
         printf("%d\t",c[i][j]);
             } 
                  printf("\n");
 
                         
        }


       }        







        
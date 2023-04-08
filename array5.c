#include<stdio.h>
int main ()
{



          int i,size,a[10];
          int oddsum=0,evensum=0,total=0;

          printf(" enter the size of array :");
          scanf("%d",&size);

          printf(" enter the elements\n");
          for(i=0;i<size;i++)

              {
                 scanf("%d",&a[i]); 
              }
   for(i=0;i<size;i++)
              {

                total=total+a[i];
                  if(a[i]%2==0)
                
                  {
                    evensum=evensum+a[i];
                  }
                 else
                  {
                   oddsum=oddsum+a[i];
                  }

              }
         printf("\n the sum of total :%d",total);
         printf(" \n the sum of evensum :%d",evensum);
         printf("\n the sum of oddsum :%d",oddsum);


}
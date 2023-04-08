#include<stdio.h>
int main ()
{



          int i,n;
          printf(" enter the size of array :");
          scanf("%d",&n);
 
        int a[n];
        printf(" enter the elements :\n");
        for(i=0;i<n;i++)

             {
   
                scanf("%d",&a[i]);
             }

        printf(" enter the odd possition :");
        for(i=1;i<n;i+=2)

             {
  
                scanf("%d",&a[i]);
  
             }
 
          printf(" enter the even possition :");
          for(i=0;i<n;i+=2)

             {
  
                printf("%d",a[i]);

             }

}


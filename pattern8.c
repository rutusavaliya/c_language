#include<stdio.h>
int main ()
{

  int i,j,k=11;
  i=1;
do {
      j=1;
do{
       printf("%d",k++);
       j++;
    }  while(j<=5);
        
        printf("\n");
        i++;
        k=k+5;
   
    }   while(i<=5);



}
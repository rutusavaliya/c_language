#include<stdio.h>
int main ()
{


   int i,j,row;
   i=1;
   printf (" enter the row:");
   scanf("%d",&row);


while(i<=row)
   {
        j=1;
        while(j<=row)

{
       if(i==row||j==1||j==2*1-i)
       printf("   ");
       j++;
   } 
      j=1;
      while(j<=2*i-1)
{
       printf(" * ");
       j++;
}
printf("\n");
i++;


}

}
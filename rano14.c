#include<stdio.h>
int main ()
{

    int i,j,sp=25;
    i=5;


while(i>=1)
   {
    j=5;
    while(j>=i)
   
{
      printf("  ");
      j--;
}
j=1;
while(j<=i)
{ 
    printf("  *  ");
    j++;
}

printf("\n");
i--;


}
}
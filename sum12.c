#include<stdio.h>
int main ()
{


float a,b=0.5,n;
a=0.5;
printf (" enter the n :");
scanf ("%f ",&n);

do
{

printf ("\n %.2f",b);
a++;
b+=a;

}

while(a<=n);


}

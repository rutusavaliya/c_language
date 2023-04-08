#include<stdio.h>
int main ()
{


int i,b=1,c=0,d=1;
i=1;
do

{

printf ("\n %d",d);
i++;
b=c;
c=d;
d=b+c;

}

while(i<=10);

}
#include<stdio.h>
int main ()
{

int a,c=1,d=1;
a=1;
do

{


d=c*a;
printf ("\n %d",d);
a++;
c+=c;

}

while(a<=10);


}
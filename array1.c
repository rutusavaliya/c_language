#include<stdio.h>
int main ()
{

  
int a[5],b[5],sum[5],i;
for(i=0;i<5;i++)

{

 printf (" enter a[%d]",i);
 scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
printf(" enter b[%d]",i);
scanf("%d",&b[i]);
}
printf(" sum of two array is :\n");
for(i=0;i<5;i++)
{

sum[i]=a[i]+b[i];
printf("%d\t%d\t%d\n",a[i],b[i],sum[i]);

}

}
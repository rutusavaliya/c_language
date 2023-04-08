#include<stdio.h>
int perfect()
{
    int num,sum=0,i,max,min;
    printf(" enter the minimum and the maximum value\n ");
    scanf("%d%d",&min,&max);

    printf(" \n perfect number between %d and %d are \n",min,max);
    for(num=min;num<=max;num++)
    {
        for(i=1,sum=0;i<num;i++)
        {
            if(num%i==0)
            sum=sum+i;
        }

         if(sum==num)
         printf("%d\t",num);
    } 
}


int main ()
{
    perfect ();
}
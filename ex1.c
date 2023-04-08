#include<stdio.h>
int perfect()
{
     int i,sum=0,num,min,max;
     printf(" enter the min and max");
     scanf("%d%d",&min,&max);

     printf("\n  perfect number between %d and %d are \n ",min,max);
     for(num=min;num=max;num++)

     {
        for(i=0,sum=0;i<num;i++)

        {
            if(num%i==0)
            sum=sum+i;

        }
                 if(sum==num)
                 printf("%d\t",num);

     }

}

int main()
{
    perfect();
}
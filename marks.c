#include<stdio.h>
int main ()
{


   int maths[5],sci[5],eng[5];
   int grade[5],total[5],i;
   int avg[5];
   for(i=0;i<5;i++)
    {
        printf(" enter the maths[%d]",i);
        scanf("%d",&maths[i]);
    }

    for(i=0;i<5;i++)

    {
        printf(" enter the sci[%d]",i);
        scanf("%d",&sci[i]);

    }
 
    for(i=0;i<5;i++)

    {  
       printf (" enter the eng[%d]",i);
       scanf("%d",&eng[i]);

    }
  
    for(i=0;i<5;i++)
{
  total[i]=maths[i]+sci[i]+eng[i];
  
}

    for(i=0;i<5;i++)
{

    avg[i]=maths[i]+sci[i]+eng[i]/3;
}
     printf("\n\tmaths\tsci\teng\ttotal\tavg\tgrade");

  for(i=0;i<5;i++)

{

    printf("\n\t%d\t%d\t%d\t%d\t%d\t",maths[i],sci[i],eng[i],total[i],avg[i]);
   if(avg[i]>=80)


{  

   printf(" A ");

}

 else if (avg[i]>=60 && avg [i]<80)

{ 

printf(" B ");

}

else if (avg [i]>=45 && avg [i]<60)

{

printf(" c ");

}

else 

{

   printf("fail");

}


}
 


}

#include<stdio.h>
int main()
{
 

     int maths[5],sci[5],eng[5];
     int total[5],i;
     int avg[5];
     for(i=0;i<5;i++)
{
printf(" enter the maths[%d]",i);
scanf("%d",&maths[i]);
}  

     for(i=0;i<5;i++)

{
printf("enter the sci[%d]",i);
scanf("%d",&sci[i]);
}

     for(i=0;i<5;i++)

{
printf("enter the eng[%d]",i);
scanf("%d",&eng[i]);
}

printf("\n\tmaths\tsci\teng\ttotal\tavg\tgrade");
      for(i=0;i<5;i++)

{
        total[i]=maths[i]+sci[i]+eng[i];
        avg[i]=total[i]/3;
printf("\n\t%d\t%d\t%d\t%d\t%d\t",maths[i],sci[i],eng[i],total[i],avg[i]);
if(maths[i]<35||sci[i]<35||eng[i]<35)

{
printf("fail");
}
 else if(avg[i]>70)
{
printf("B");
}
 else if(avg[i]>=60)
{
printf("c");
} 
 else if(avg[i]>=50)
{
printf("D");
} 
  else
{
printf("A");
}

}

}




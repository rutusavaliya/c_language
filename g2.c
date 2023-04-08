#include<stdio.h>
int display(int m,int r,int e,int total,float per)
{

  printf("maths\tsci\teng\ttotal\tper\tgrade\n");
    printf("%d\t%d\t%d\t%d\t%.2f\t",m,r,e,total,per);
    if(m<35||r<35||e<35)
{
printf("fail");
}
 else if(per>70)
{
printf("B");
}
 else if(per>60)
{
printf("c");
} 
 else if(per>50)
{
printf("D");
} 
  else
{
printf("A");

}
}
int calc(int m,int r,int e )
{
int total;
float per;    
total = m + r + e;
per=(float)total/3;
display(m,r,e,total,per);
}
int setdata()
{
    int maths,sci,eng;

    printf(" enter maths marks");
    scanf("%d",&maths);
    printf(" enter sci marks");
    scanf("%d",&sci);
    printf(" enter eng marks");
    scanf("%d",&eng);
    calc(maths,sci,eng);
}

int main()
{
   setdata();
   
}
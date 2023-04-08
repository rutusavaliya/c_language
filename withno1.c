#include<stdio.h>
int sum(int n)
{
      int sum=0,i;
      for(i=1;i<=n;i++)
      sum+=i;
      printf("\n total is :%d",sum);
}

int main()
{
    int x;
    printf (" enter the x : ");
    scanf("%d",&x);
    sum(x);
}
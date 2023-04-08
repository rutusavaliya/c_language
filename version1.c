#include<stdio.h>
void note()
{
    int i,n,list[10] ={2000,500,200,100,50,20,10,5,2,1};

    printf("enter the n: ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(n>=list[i])
        printf("\n %d note is :%d ", list [i],
        n/list [i]);

        n=n % list [i];
    }
}

int main()
{
    note();
}
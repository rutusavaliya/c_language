#include<stdio.h>
int num()
{
    int num;
    printf(" enter the num:");
    scanf("%d",&num);
    if(num/5==0)
    {
        printf("divisiable is %d",num);
    }
    else{
        printf(" not divisiable is %d",num);

    }
}

int main()
{
    num();

}
#include<stdio.h>
int mark()
{
    int mark;
    printf("enter mark :");
    scanf("%d",&mark);
    if(mark>=40)
    {
        printf(" student pass :%d",mark);

    }
    else
    {
        printf("student fail :",mark);
    }
}

int main()
{
    mark();

}
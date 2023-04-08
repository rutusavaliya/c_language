#include<stdio.h>
float swapping()
{
    float a=30,b=40;
    printf("\n a variable =%f b variable =%f",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a variable =%f b variable =%f",a,b);

}

int main()
{
    swapping();
}
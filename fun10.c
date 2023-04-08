#include<stdio.h>
void swapping()
{
    float a=10,b=20,c;
    printf("\n a=%f and b=%f",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n a=%f and b=%f",a,b);

}

int main()
{
    swapping();
}
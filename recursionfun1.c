#include<stdio.h>
int fun (int n)
{
    printf(" inside the fun : %d\n",n);

    if(n<3)
            fun(++n);

    else 

             return 0;

    printf(" out side the fun %d\n",n);                 
}

int main()
{
    fun(1);
}
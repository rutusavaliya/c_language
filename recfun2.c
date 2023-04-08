#include<stdio.h>
int fun(int a[],int n)
{
   int min ,max,i;
   min=max=a[0];
   for(i=1;i<n;i++)
   {
    if(min>a[i])
        min=a[i];
    if(max<a[i])
        max=a[i] ;   
   }
    printf (" minimum element  : %d ", min);
    printf (" maximum element  : %d ", max);
    
}

int main ()
{
    int arr[] ={67,87,44,78,90,76,43,22,678,657,8976,564,90,2,56,};
    int n= 15; 
    fun(arr,n);
}
    
 
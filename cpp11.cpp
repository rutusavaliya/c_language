#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    for(i=1;i<6;i++)
    if(i%2==0)
    {

         sum+=i;
        cout<<i;
    }

    cout<<"\n total is:"<<sum;
}
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the n :";
    cin>>n;

    for(i=1;i<=n;i*=2)
    {
        sum+=i;
        cout<<i;
    }

    cout<<"\n total is :"<<sum;
}
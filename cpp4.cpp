#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<" enter num :";
    cin>> num;
    if(num%15==0)
    {
        cout<<" divisible on is :"<<num;
    }
    else
    {
        cout<<" not divisible on is :"<<num;
    }
}
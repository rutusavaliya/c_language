#include<iostream>
using namespace std;
int main()
{
    int a,c=1,d=1;
    for(a=1;a<=10;a++)
    {
        d=c*a;
        cout<<d;
        c+=c;
    }
}
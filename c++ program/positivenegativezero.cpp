#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number";
    cin>>a;
    if(a%2==0)
    {
        cout<<"positive number";
    }
    else if(a%2!=0)
    {
        cout<<"negative number";
    }
    else
    {
        cout<<"zero ";
    }
    return 0;
}

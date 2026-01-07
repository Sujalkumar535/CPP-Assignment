#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the first number";
    cin >> a;
    cout<<"enter the second number";
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<",b="<<b;
    return 0;
}
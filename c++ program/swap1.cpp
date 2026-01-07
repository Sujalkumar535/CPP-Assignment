#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the first number";
    cin >> a;
    cout<<"enter the second numer";
    cin >> b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<",b=<<b>>" ;
    return 0;
}
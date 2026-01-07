#include<iostream>
using namespace std;
int main()
{
    int a=5,b=8;

    cout<<"logical AND operator "<<(a>b && b>a);
    cout<<"logucal OR operator "<<(a>b || b>a);
    cout<<"logical NOT operator "<<!(a>b);
    return 0;
}
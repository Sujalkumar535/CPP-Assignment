#include<iostream>
using namespace std;
int main()
{
    float pri,rate,time,si;
    cout<<"enter the principal ";
    cin >> pri;
    cout<<"enter the rate";
    cin >> rate;
    cout<<"enter the time";
    cin >> time;
    si=(pri*rate*time)/100;
    cout<<"the simple interest is "<<si;
    return 0;
}
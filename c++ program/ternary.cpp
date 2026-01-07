#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    int maximum = (a>b) ? a : b;
    cout << " maximum number is : " << maximum << endl;
    return 0;

}
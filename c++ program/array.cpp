#include<iostream>
using namespace std;
int main()
{
    int i, a[5];
    cout<<"enter the element in array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements are"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
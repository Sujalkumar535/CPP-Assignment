#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5],temp;
    cout<<"enter the elements in array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements in reverse order are"<<endl;
    for(i=0,j=4;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
    }
#include<iostream>
using namespace std;
int main()
{
    int i,a[5],largest=0;
    cout<<"enter th elements in array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    cout<<"largest element in array is"<<largest;
    return 0;
}
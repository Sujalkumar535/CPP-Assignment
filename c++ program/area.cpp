#include<iostream>
using namespace std;
int main()
{
    float rad,area1,area2,area3,pi=3.14,l,b,h,bdth;
    cout<<"enter the radius of the circle";
    cin>>rad;
    area1=pi*rad*rad;
    cout<<"the area of the circle is"<<area1;
    cout<<"enter the base of triangle";
    cin>>b;
    cout<<"enter the height of triangle";
    cin>>h;
    area2=0.5*b*h;
    cout<<"the area of the triangle is"<<area2;
    cout<<"enter the length of rectangle";
    cin>>l;
    cout<<"enter the breadth of rectangle";
    cin>>bdth;
    area3=l*bdth;
    cout<<"the area of the reactangle is"<<area3;
    return 0;



}
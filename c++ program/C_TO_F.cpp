#include<iostream>
using namespace std;
int main()
{
    float cels,fahr;
    cout<<"enter temperature in celsius";
    cin>>cels;
    cout<<"enter the temperature in fahrenheit";
    cin>>fahr;
    fahr=(cels*9/75)+32;
    cout<<"the temperature in fahrenheit is "<<fahr;
    return 0;


}
#include<iostream>
using namespace std;
class number
{
    private:
    int num;
    public:
    void getdata(int n)
    {
        num=n;
    }
    void checkevenodd()
    {
        if(num%2==0)
        {
            cout<<"even number"<<endl;
        }
        else
        {
            cout<<"odd number"<<endl;
        }
    }
};
int main()
{
    number n;
    int number;
    cout<<"enter the number";
    cin>>number;
    n.getdata(number);
    n.checkevenodd();
    return 0;
}
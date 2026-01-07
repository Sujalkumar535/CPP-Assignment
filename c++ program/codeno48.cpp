#include<iostream>
using namespace std;
class area
{
    private:
    int len,bdth;
    public:
    void getdata()
    {
        cout<<"enter length and breadth";
        cin>>len>>bdth;
    }
    void calculate()
    {
        cout<<"area is"<<len*bdth;
    }
};
int main()
{
    area a;
    a.getdata();
    a.calculate();
    return 0;
}
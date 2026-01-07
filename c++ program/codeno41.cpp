#include<iostream>
using namespace std;
class vehicle
{
    public:
    int speed;
    void display()
    {
        cout<<"speed of vehicle is "<<speed<<endl;
    }
};

int main()
{
    vehicle v;
    v.speed = 100;
    v.display();
        return 0;
    }

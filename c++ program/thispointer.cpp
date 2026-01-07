#include<iostream>
using namespace std;
class employee
{
    int id;
    float salary;
    string name;

    public:
    employee(int i,float s,string n)
    {
       this->id=i;
       this->salary=s;
       this->name=n;
    }
    void display()
    {
        cout<<"employee id is:"<<id<<endl;
        cout<<"employee salary is:"<<salary<<endl;
        cout<<"employee name is:"<<name<<endl;
    }
};
int main()
{
    employee e1(345,45000,"sujal");
    e1.display();
    return 0;
}
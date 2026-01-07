#include <iostream>
using namespace std;

class Student
{
    private:
    int roll;
    string name;

public:
    Student()
    {
        roll = 1;
        name = "Sujal";
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s; 
    s.display();

    return 0;
}

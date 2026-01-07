#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }
    Student(Student &s)
    {
        roll = s.roll;
        name = s.name;
    }
    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl << endl;
    }
};
int main()
{
    Student s1(101, "Sujal");   
    Student s2(s1);           
    s1.display();
    s2.display();

    return 0;
}

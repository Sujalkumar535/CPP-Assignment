#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;

    public:
    student()
    {
        roll=67;
        name="sujal";
    }
    student(int r)
    {
        roll=r;
        name="sujal";
    }
    student(int r,string n)
    {
        roll=r;
        name =n;
    }
    void display()
    {
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    student s1; // default constructor
    student s2(67); //parameterized constructor with one argument
    student s3(67,"sujal"); //parameterized constructor with two arguments
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
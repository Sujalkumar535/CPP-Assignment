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
        roll=0;
        name=" ";
    }
    student(int r)
    {
        roll=r;
        name=" ";
    }
    student(int r,string n)
    {
        roll=r;
        name=n;
    }
    void display()
    {
        cout<<"roll no:"<<roll<<endl;
        cout<<"name is:"<<name<<endl;
    }

};
int main()
{
    student s1;
    student s2(67);
    student s3(67,"sujal");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
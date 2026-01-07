#include<iostream>
using namespace std;
class student
{
    private:
    int roll_no;
    string name;

    public:
    student(int r,string n)
    {
        roll_no=r;
        name=n;
    }
    void display()
    {
        cout<<"roll no:"<<roll_no<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main()
{
  student s(67,"sujal");
  s.display();
  return 0;
}
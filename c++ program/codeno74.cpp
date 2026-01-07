#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void setData(int r)
    {
        roll = r;
    }

    void showData() const  
    {
        cout << "Roll No: " << roll << endl;
    }
};

int main()
{
    Student s1;
    s1.setData(101);
    s1.showData();

    return 0;
}

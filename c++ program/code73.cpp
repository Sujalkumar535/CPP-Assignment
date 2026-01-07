#include <iostream>
using namespace std;

class Student
{
    private:
    int roll; 

public:
    Student(int r)
    {
        roll = r;
    }
    void show()const
    {
        cout << "Roll No: " << roll << endl;
    }
};
int main()
{
    const Student s1(101);

    s1.show();

    return 0;
}

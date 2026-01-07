#include <iostream>
using namespace std;

class ClassB;   

class ClassA
{
private:
    int x;

public:
    ClassA(int a)
    {
        x = a;
    }

    friend void showData(ClassA, ClassB);
};

class ClassB
{
private:
    int y;

public:
    ClassB(int b)
    {
        y = b;
    }

    friend void showData(ClassA, ClassB);
};

void showData(ClassA a, ClassB b)
{
    cout << "Value of x (ClassA): " << a.x << endl;
    cout << "Value of y (ClassB): " << b.y << endl;
}

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    showData(objA, objB);

    return 0;
}

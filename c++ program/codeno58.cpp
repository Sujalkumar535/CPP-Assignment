#include <iostream>
using namespace std;

class Demo 
{
    int *ptr;

public:
    
    Demo(int value) 
    {
        ptr = new int;      
        *ptr = value;
        cout << "Constructor called. Memory allocated." << endl;
    }

    void display()
    {
        cout << "Value = " << *ptr << endl;
    }

    
    ~Demo() 
    {
        delete ptr;       
        cout << "Destructor called. Memory deallocated." << endl;
    }
};

int main() {
    Demo obj(10);
    obj.display();

    return 0;
}

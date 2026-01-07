#include <iostream>
using namespace std;

class Outer {
private:
    int x;

public:
    class Inner {
    public:
        void show() {
            cout << "This is the Inner class function" << endl;
        }
    };

    void setData(int a) {
        x = a;
    }

    void display() {
        cout << "Value of x in Outer class = " << x << endl;
    }
};

int main() {
    Outer obj;
    Outer::Inner inObj;   

    obj.setData(10);
    obj.display();

    inObj.show();

    return 0;
}

#include <iostream>
using namespace std;

class Arithmetic {
private:
    int a, b;

public:
    void readData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    
    void add() {
        cout << "Addition = " << (a + b) << endl;
    }

    void subtract() {
        cout << "Subtraction = " << (a - b) << endl;
    }

    void multiply() {
        cout << "Multiplication = " << (a * b) << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division = " << (a / b) << endl;
        else
            cout << "Division not possible (divide by zero)" << endl;
    }
};

int main() {
    Arithmetic obj;

    obj.readData();
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();

    return 0;
}

#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    char name[50];
    float salary;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
    void displayData() {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};
int main() {
    Employee emp;
    emp.getData();
    emp.displayData();
    return 0;
}

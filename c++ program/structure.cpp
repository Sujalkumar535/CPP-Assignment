#include <iostream>
using namespace std;
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.rollNo;
    cin.ignore(); 
    cout << "Enter Name: ";
    cin.getline(s.name, 50);
    cout << "Enter Marks: ";
    cin >> s.marks;
    cout << "\n--- Student Details ---\n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}

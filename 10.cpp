#include <iostream>
using namespace std;

class Student {
    string name;
    int roll_no;
    float marks;
public:
    void input() {
        cout << "Enter name, roll no, marks: ";
        cin >> name >> roll_no >> marks;
    }
    void display() {
        cout << "Name: " << name << "\nRoll No: " << roll_no << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}

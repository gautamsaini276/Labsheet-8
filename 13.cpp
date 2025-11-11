#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void displayPerson() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
    float marks;
public:
    void inputStudent() {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayStudent() {
        displayPerson();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.displayStudent();
}

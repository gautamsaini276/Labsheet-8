#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
    float r;
public:
    Circle(float radius) { r = radius; }
    void area() override { cout << "Circle Area: " << 3.14 * r * r << endl; }
};

class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float length, float breadth) { l = length; b = breadth; }
    void area() override { cout << "Rectangle Area: " << l * b << endl; }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    c.area();
    r.area();
}

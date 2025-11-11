#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    swapNumbers(a, b);
    cout << "After swap: a=" << a << " b=" << b;
}

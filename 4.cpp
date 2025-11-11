#include <iostream>
#include <cstring>
using namespace std;

void copyString(char dest[], const char src[]) {
    strcpy(dest, src);
}

int main() {
    char src[50] = "Hello World";
    char dest[50];
    copyString(dest, src);
    cout << "Copied String: " << dest;
}

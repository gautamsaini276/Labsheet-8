#include <iostream>
#include <cstring>
using namespace std;

int countWords(string str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch))
            inWord = false;
        else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Number of words: " << countWords(str);
}

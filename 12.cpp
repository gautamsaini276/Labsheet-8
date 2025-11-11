#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double b = 0) { balance = b; }
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient balance!\n";
    }
    void showBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();
}

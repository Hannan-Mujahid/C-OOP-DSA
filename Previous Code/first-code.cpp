#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance; // hidden data (direct access not allowed)

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if(initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Deposit function (Controlled access)
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposit Successful! New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function (Controlled access)
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdraw Successful! Remaining Balance: " << balance << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Getter function (Safe way to view balance)
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account1("Hannan Mujahid", 5000); // create account

    account1.deposit(1000);     // ✅ safe deposit
    account1.withdraw(2000);    // ✅ safe withdraw
    cout << "Current Balance: " << account1.getBalance() << endl;

    // ❌ Direct access not allowed (Encapsulation)
    // account1.balance = -1000;  // error: ‘balance’ is private
}

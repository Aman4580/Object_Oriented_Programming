#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private members: encapsulated data
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Public method to display account details
    void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("123456789", 1000.00);

    // Display initial account details
    myAccount.displayAccount();

    // Deposit money
    myAccount.deposit(500.00);

    // Withdraw money
    myAccount.withdraw(200.00);

    // Attempt to withdraw more than the balance
    myAccount.withdraw(1500.00);

    // Display final account details
    myAccount.displayAccount();

    return 0;
}

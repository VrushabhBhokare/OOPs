#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    void deposit(int amount) {
        cout << "Depositing ?" << amount << " in cash." << endl;
    }

    void deposit(float amount) {
        cout << "Depositing ?" << amount << " via digital payment." << endl;
    }

    void deposit(string upiId, float amount) {
        cout << "Depositing ?" << amount << " using UPI (" << upiId << ")." << endl;
    }
};

class Account {
private:
    int accountNumber;
    float balance;

public:
    Account(int accNumber, float initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void operator+(Account &other) {
        float transferAmount;
        cout << "Enter amount to transfer from Account " << accountNumber << " to Account " << other.accountNumber << ": ?";
        cin >> transferAmount;

        if (balance >= transferAmount) {
            balance -= transferAmount;
            other.balance += transferAmount;
            cout << "Transferring ?" << transferAmount << " from Account " << accountNumber << " to Account " << other.accountNumber << "..." << endl;
            cout << "New Account " << accountNumber << " Balance: ?" << balance << endl;
            cout << "New Account " << other.accountNumber << " Balance: ?" << other.balance << endl;
        } else {
            cout << "Insufficient balance in Account " << accountNumber << "!" << endl;
        }
    }

    void operator-(float withdrawAmount) {
        if (balance >= withdrawAmount) {
            balance -= withdrawAmount;
            cout << "Withdrawing ?" << withdrawAmount << " from Account " << accountNumber << "..." << endl;
            cout << "Remaining Balance: ?" << balance << endl;
        } else {
            cout << "Insufficient balance to withdraw ?" << withdrawAmount << " from Account " << accountNumber << "!" << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Account " << accountNumber << " Balance: ?" << balance << endl;
    }
};

int main() {
    Bank bank;
    bank.deposit(5000);
    bank.deposit(1500.75f);
    bank.deposit("gpay@upi", 2500);

    Account acc1(1, 10000);
    Account acc2(2, 5000);

    acc1.displayAccountDetails();
    acc2.displayAccountDetails();

    acc1 + acc2;
   
    acc1 - 2000;

    return 0;
}


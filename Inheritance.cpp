
// BANK MANAGEMENT SYSTEM

#include <iostream>
#include <string>
using namespace std;

class AccountHolder {
protected:
    string name;

public:

    // Constructor
    AccountHolder(string n) {
        name = n;
    }

    // Function to set name
    void setName(string n) {
        name = n;
    }

    // Function to get name
    string getName() {
        return name;
    }
};

class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:

    // Constructor
    BankAccount(string n, int accNo, double bal)
        : AccountHolder(n) {

        accountNumber = accNo;
        balance = bal;
    }

    // Get account number
    int getaccountNumber() {
        return accountNumber;
    }

    // Get balance
    double getbalance() {
        return balance;
    }
};

class SavingAccount : public BankAccount {
private:
    double interestRate;

public:

    // Constructor
    SavingAccount(double rate, string n, int accNo, double bal)
        : BankAccount(n, accNo, bal) {

        interestRate = rate;
    }

    // Get interest rate
    double getInterestRate() {
        return interestRate;
    }
};

int main() {

    SavingAccount acc1(12, "Marish", 2392, 29000);

    cout << "Customer Name : " << acc1.getName() << endl;
    cout << "Account Number: " << acc1.getaccountNumber() << endl;
    cout << "Balance       : " << acc1.getbalance() << endl;
    cout << "Interest Rate : " << acc1.getInterestRate() << "%" << endl;

    return 0;
}

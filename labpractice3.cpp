#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    int accountNumber;
    string customerName;
    float balance;

public:

    // Default constructor
    BankAccount()
    {
        accountNumber = 0;
        customerName = "Unknown";
        balance = 0;
    }

    // Parameterized constructor
    BankAccount(int accNo, string name, float bal)
    {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
    }

    // Deposit money
    void Deposit(float amount)
    {
        balance = balance + amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw money
    void Withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Friend function declaration
    friend void transfer(BankAccount &a1, BankAccount &a2, float amount);

    // Destructor
    ~BankAccount()
    {
        cout << "Destructor called for Account Number: "
             << accountNumber << endl;
    }
};

// Friend function to transfer money
void transfer(BankAccount &a1, BankAccount &a2, float amount)
{
    if (amount <= a1.balance)
    {
        a1.balance = a1.balance - amount;
        a2.balance = a2.balance + amount;

        cout << "Transfer successful!" << endl;
        cout << "Transferred Amount: " << amount << endl;
    }
    else
    {
        cout << "Transfer failed! Insufficient balance." << endl;
    }
}

int main()
{
    // Using default constructor
    BankAccount account1;

    // Using parameterized constructor
    BankAccount account2(1001, "Ravi", 10000);

    BankAccount account3(1002, "Priya", 5000);

    cout << "===== ACCOUNT 1 =====" << endl;
    account2.display();

    cout << "\n===== ACCOUNT 2 =====" << endl;
    account3.display();

    // Deposit
    cout << "\n===== DEPOSIT =====" << endl;
    account2.Deposit(2000);

    // Withdraw
    cout << "\n===== WITHDRAW =====" << endl;
    account3.Withdraw(1000);

    // Transfer money
    cout << "\n===== MONEY TRANSFER =====" << endl;
    transfer(account2, account3, 3000);

    // Display updated details
    cout << "\n===== UPDATED ACCOUNT DETAILS =====" << endl;

    cout << "\nAccount 1:" << endl;
    account2.display();

    cout << "\nAccount 2:" << endl;
    account3.display();

    return 0;
}

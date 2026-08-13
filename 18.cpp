#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> accountHolder;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void displayBalance()
    {
        cout << "Current Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.getData();
    b.deposit();
    b.withdraw();
    b.displayBalance();

    return 0;
}

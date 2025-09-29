#include <iostream>
using namespace std;

// parent class
class BankAccount
{
    long int accountNumber;
    char accountHolderName[50];

protected:
    long double balance;
    double amt;

public:
    void bankAccount()
    {
        cout << "Enter Account Number: ";
        cin >> this->accountNumber;
        fflush(stdin);
        cout << "Enter Account Holder Name: ";
        gets(this->accountHolderName);
        cout << "Enter Opening Balance: ";
        cin >> this->balance;
    }

    void deposit()
    {
        cout << "Enter Deposit Amount: ";
        cin >> this->amt;
        balance += amt;
    }

    void setWithDraw()
    {
        cout << "Enter Withdrawal Amount: ";
        cin >> this->amt;
    }

    void getWithDraw()
    {
        if (amt > balance)
        {
            cout << endl
                 << "Insufficient balance.";
        }
        else
        {
            balance -= amt;
        }
    }

    void getBalance()
    {
        cout << "Current Balance: " << this->balance;
    }

    void getAccountInfo()
    {
        cout << "Account Number: " << this->accountNumber << endl;
        cout << "Account Holder Name: " << this->accountHolderName << endl;
        cout << "Balance: " << this->balance << endl;
    }

    void returnBalance()
    {
        balance;
    }
};

// child class
class SavingsAccount : public BankAccount
{
    float interestRate;

public:
    void calculateInterest()
    {
        interestRate = 0.05;
        balance *= (1 + interestRate);
    }
};

//  child class
class CheckingAmount : public BankAccount
{
    int overdraftLimit;

public:
    void checkOverdraft()
    {
        overdraftLimit = 10000;
        setWithDraw();

        if (amt > (balance + overdraftLimit))
        {
            cout << "Overdraft limit exceeded. Can't WithDraw Amount.. please Deposit..";
        }
        else
        {
            long double overdraftUsed = 0;

            if (amt > balance)
            {
                overdraftUsed = amt - balance;
            }

            balance -= amt;

            cout << "Withdrawal successful. New balance: " << balance << endl;

            if (overdraftUsed > 0)
            {
                cout << "Overdraft used: " << overdraftUsed << endl;
            }
        }
    }

    void runMenu()
    {
        int choice;
        do
        {
            cout << endl
                 << endl
                 << "Select an Option:" << endl
                 << "1 for Check Balance" << endl
                 << "2 for Deposit Amount" << endl
                 << "3 for Withdraw Amount" << endl
                 << "4 for View Account Info" << endl
                 << "0 for Exit" << endl
                 << "Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                getBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                checkOverdraft();
                break;

            case 4:
                getAccountInfo();
                break;

            case 0:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice. Please try again.";
                break;
            }

        } while (choice != 0);
    }
};

// child class
class FixedDipositeAmount : public BankAccount
{
    int term;
    float dipopsiteInterest;

public:
    void calculateDipositeInterest()
    {
        term = 12;
        dipopsiteInterest = balance * 0.07 * (12.0 / term);
        cout << "\nFixed Deposit Interest: " << this->dipopsiteInterest;
    }
};
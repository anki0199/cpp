#include "account.h"
#include <cstdlib>
#include <limits>
#include <sstream>

using namespace std;

int Account::count = 0;

Account::Account()
{
    this->acc_number = ++count;
}

int Account::getAccountNumber() const
{
    return this->acc_number;
}

int Account::getAccountBalance()
{
    return this->acc_balance;
}

void Account::setAccountBalance(float amount)
{
    this->acc_balance = amount;
}

void Account::AddAccount()
{
    int choice;
    cout << "Enter user name: ";

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Use getline to read the entire line, including spaces
    getline(cin, this->user_name);

    cout << "Enter choice for account type" << endl;
    cout << " 1. For Savings account" << endl;
    cout << " 2. For Current account" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        this->acc_type = "saving";
        this->acc_balance = 0;
        break;
    case 2:
        this->acc_type = "current";
        this->acc_balance = 1000;
        break;
    }
}

void Account::Withdraw(int acc_num)
{
    if (this->getAccountNumber() == acc_num)
    {
        float amount;
        cout << "Enter amount to be withdrawn: " << endl;
        cin >> amount;
        float balance = this->getAccountBalance();
        if (balance > amount)
        {
            balance -= amount;
            this->setAccountBalance(balance);
        }
        else
        {
            cout << "Account doesn't have sufficient balance" << endl;
        }
        cout << "Account balance is: " << this->getAccountBalance() << endl;
        cout << endl;
    }
}

void Account::Deposit(int acc_num)
{
    if (this->getAccountNumber() == acc_num)
    {
        float amount;
        cout << "Enter amount to be deposit: " << endl;
        cin >> amount;
        float balance = getAccountBalance();
        balance += amount;
        setAccountBalance(balance);
        Display();
        cout << endl;
    }
}

void Account::Display() const
{
    cout << "Account number: " << acc_number << endl;
    cout << "User name: " << user_name << endl;
    cout << "Account type: " << acc_type << endl;
    cout << "Account balance: " << acc_balance << endl;
    cout << endl;
}

void Account::WriteToFile(ofstream &outFile)
{
    outFile << acc_number << " ";
    outFile << user_name << " ";
    outFile << acc_type << " " << acc_balance << "\n";
}

void Account::ReadFromFile(std::ifstream &inFile)
{
    // Check if the file is empty
    if (inFile.peek() == ifstream::traits_type::eof())
    {
        cout << "The file is empty." << endl;
        return;
    }

    // Read account details from the file
    string line;

    // Read acc_number
    getline(inFile, line);
    // cout << "Debug: acc_number line = " << line << endl;
    istringstream(line) >> acc_number;

    // Read user_name
    getline(inFile, user_name);
    // cout << "Debug: user_name line = " << user_name << endl;

    // Read acc_type
    getline(inFile, acc_type);
    // cout << "Debug: acc_type line = " << acc_type << endl;

    // Read acc_balance
    getline(inFile, line);
    // cout << "Debug: acc_balance line = " << line << endl;
    istringstream(line) >> acc_balance;
}
